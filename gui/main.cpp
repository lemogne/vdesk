#include "vdesk_gui.h"

// For compilers that support precompilation, includes "wx/wx.h".
#include <wx/wxprec.h>
#include <wx/stc/stc.h>
#include <wx/aboutdlg.h>
#include <vector>
#include <unordered_map>
#include <iostream>
#include <fstream>
#include <sstream>
#include <X11/Xlib.h>
#include <regex>

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

#define vdesk_VERSION "24-03a"

struct profile {
	wxString name;
	wxString host;
	wxString user;
	wxString de;
	std::string de_command;
};

/*
	Command restriction level:
	0 - No restriction
	1 - sanitise (no $(), ``, rm, ;, \n, etc.)
	2 - limit to known commands for opening DE's

	Default: 1
*/
int command_restriction = 1;
std::unordered_map<std::string, std::string> DE_command;
std::vector<std::string> DEs;
std::vector<profile> profiles;
std::string profiles_file = "profiles.tsv";
std::string settings_file = "settings.txt";
std::string DE_file = "des.tsv";
Display* display = XOpenDisplay(NULL);
Screen*  screen = DefaultScreenOfDisplay(display);

// Console settings
int size[2] = {1920, 1080};
bool fullscreen = true;
wxColour foreground = wxColour(255, 255, 255);
wxColour background = wxColour(0, 0, 0);
wxFont font = wxFont("Unifont Medium 12"); //wxFont(12, wxFONTFAMILY_TELETYPE, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, "Unifont");

class vdesk: public wxApp {
public:
	virtual bool OnInit();
};

wxIMPLEMENT_APP(vdesk);

std::string get_DE_command(std::string DE) {
	if (DE_command.find(DE) != DE_command.end())
		return DE_command[DE];
	return DE;
}

void print_error(wxWindow* window, wxString msg) {
	wxMessageDialog dlg = wxMessageDialog(
		window, msg, "Error", wxOK
	);
	dlg.ShowModal();
}

inline void print_error(wxWindow* window, const char* msg) {
	print_error(window, wxString(msg));
}

inline void print_error(wxWindow* window, std::string msg) {
	print_error(window, wxString(msg.c_str()));
}

class profile_frame : public profile_manager {
	virtual void cancel(wxCommandEvent& event) { 
		EndModal(wxID_CANCEL);
	}
	profile& pr;

public:
	profile_frame(wxWindow* parent, profile& pr) 
	: profile_manager(parent), pr(pr) {
		(*m_profilename) << pr.name;
		(*m_hostname) << pr.host;
		(*m_username) << pr.user;
		m_DE->SetStringSelection(pr.de);
	}

	virtual void set_profile(wxCommandEvent& event) { 
		pr = {
			.name = m_profilename->GetLineText(0),
			.host = m_hostname->GetLineText(0),
			.user = m_username->GetLineText(0),
			.de = m_DE->GetStringSelection(),
			.de_command = get_DE_command(m_DE->GetStringSelection().ToStdString())
		};
		EndModal(wxID_OK);
	}
};


std::string sanitise(std::string input) {
	char forbidden[] = "`$;<>|&# *\n\r\"'";
	for (char c : forbidden) 
		if (input.find(c) != -1)
			return "";
	return input;
}

std::string restrict_command(std::string input) {
	switch (command_restriction) {
		case 0:
			return input;
		case 1:
			return sanitise(input);
		case 2: {
			std::string allowed[] = {"gnome-session", "startkde", "startxfce4", "lxsession", "startlxqt", "-", ""};
			for (std::string s : allowed)
				if (input == s)
					return s;
			return "";
		}
		default:
			return "";
	}
}

int check_install(std::string pkg) {
	if (system(("which " + pkg).c_str())) {
		wxMessageDialog confirm = wxMessageDialog(
			nullptr, ("The required package '" + pkg + "' is not installed.\nDo you want to install it?").c_str(), "Install package", wxYES|wxNO
		);
		if (confirm.ShowModal() != wxID_YES) {
			return 1;
		}
		system(("pkexec apt -y install " + pkg).c_str());
	}
	return 0;
}

void connect_to(wxString user, wxString host, std::string cmd) {
	std::string fg_string = foreground.GetAsString(wxC2S_HTML_SYNTAX).ToStdString();
	std::string bg_string = background.GetAsString(wxC2S_HTML_SYNTAX).ToStdString();
	std::string font_string = font.GetFaceName().ToStdString();
	std::string font_size_string = std::to_string(font.GetPointSize());

	std::string login_config = "-fg '" + fg_string + "' -bg '" + bg_string + "' -fa '" + font_string + "' -fs " + font_size_string;
	int char_dim[2] = {8, 16};
	std::string window_size = std::to_string(size[0] / char_dim[0]) + "x" + std::to_string(size[1] / char_dim[1]);
	std::string login = sanitise(user.ToStdString()) + "@" + sanitise(host.ToStdString());
	std::string command = "pkexec xinit -geometry " + window_size + " " + login_config + " -e \"DISPLAY=:1 ssh -X " + login + " '" + restrict_command(cmd) + "'\" -- :1";
	std::cout << command << std::endl;
	int retval = system(command.c_str());
	if (retval) {
		print_error(nullptr, "Connection failed!\nConnection process returned " + std::to_string(retval));
	}
}

// Settings windows

class console_s : public console_settings {
public:
	console_s(wxWindow* window) : console_settings(window) {
		m_font_picker->SetSelectedFont(font);
		m_back_colour_picker->SetColour(background);
		m_text_colour_picker->SetColour(foreground);

		m_console_width->SetValue(size[0]);
		m_console_height->SetValue(size[1]);
		m_is_fullscreen->SetValue(fullscreen);
	}

	virtual void cancel(wxCommandEvent& event) {
		EndModal(wxID_CANCEL);
	}

	virtual void set_profile(wxCommandEvent& event) {
		font = m_font_picker->GetSelectedFont();
		background = m_back_colour_picker->GetColour();
		foreground = m_text_colour_picker->GetColour();

		size[0] = m_console_width->GetValue();
		size[1] = m_console_height->GetValue();
		fullscreen = m_is_fullscreen->GetValue();

		EndModal(wxID_OK);
	}
};


class de_s : public de_settings {
public:
	wxDataViewItem dragged_item;

	de_s(wxWindow* window) : de_settings(window) {
		m_de_list->AppendTextColumn("Desktop Env.", wxDATAVIEW_CELL_EDITABLE);
		m_de_list->AppendTextColumn("Command", wxDATAVIEW_CELL_EDITABLE);
		int i = 0;
		wxVector<wxVariant> item;
		for (std::string de : DEs) {
			item.push_back(wxString(de));
			item.push_back(wxString(DE_command[de]));
			m_de_list->AppendItem(item);
			item.clear();
		}
		m_de_list->EnableDragSource(wxDF_TEXT);
		m_de_list->EnableDropTarget(wxDF_TEXT);
	}
	virtual void cancel(wxCommandEvent& event) {
		EndModal(wxID_CANCEL);
	}
	virtual void set_profile(wxCommandEvent& event) {
		std::ofstream outfile;
		outfile.open(DE_file, std::ios::out | std::ios::trunc);
		if (!outfile) {
			print_error(nullptr, "Could not open DE file.");
			return;
		}

		DEs.clear();
		DE_command["Auto"] = "";
		for (int i = 0; i < m_de_list->GetItemCount(); i++) {
			std::string DE_name = m_de_list->GetTextValue(i, 0).ToStdString();
			std::string cmd = m_de_list->GetTextValue(i, 1).ToStdString();
			cmd = restrict_command(cmd);
			DE_command[DE_name] = cmd;
			DEs.push_back(DE_name);
			outfile << DE_name << '\t' << cmd << '\n';
			if (DE_command["Auto"] != "")
				DE_command["Auto"] += "||";
			DE_command["Auto"] += cmd;
		}
		outfile.close();
		EndModal(wxID_OK);
	}
	virtual void begin_drag(wxDataViewEvent& event) {
		dragged_item = event.GetItem();
		int row = m_de_list->ItemToRow(dragged_item);
		event.Allow();
		std::string data = m_de_list->GetTextValue(row, 0).ToStdString() + "\t" + m_de_list->GetTextValue(row, 1).ToStdString();
		wxDataObject* obj = new wxTextDataObject(wxString(data));
		event.SetDragFlags(wxDrag_DefaultMove);
		event.SetDataObject(obj);
		wxDropSource dragSource(this);
		dragSource.SetData(*obj);
		dragSource.DoDragDrop();
	}

	virtual void end_drag(wxDataViewEvent& event) {
		wxDataViewItem dest = event.GetItem();
		event.Allow();

		int row = m_de_list->ItemToRow(dragged_item);
		int ins_row = m_de_list->ItemToRow(dest);

		wxVector<wxVariant> item;
		item.push_back(m_de_list->GetTextValue(row, 0));
		item.push_back(m_de_list->GetTextValue(row, 1));
		if (ins_row) {	// Unfortunate hack to avoid odd behaviour; means, you cannot move items to the top directly
			if (ins_row == - 1) {
				m_de_list->AppendItem(item);
				m_de_list->DeleteItem(row);
			} else if (ins_row > row) {
				m_de_list->InsertItem(ins_row, item);
				m_de_list->DeleteItem(row);
			} else {
				m_de_list->DeleteItem(row);
				m_de_list->InsertItem(ins_row, item);
			}
		}
	}

	virtual void ccl(wxDataViewEvent& event) {
		event.Allow();
	}

	virtual void drop_p(wxDataViewEvent& event) {
		event.Allow();
	}

	virtual void begin_edit(wxDataViewEvent& event) {
		event.Allow();
	}

	virtual void new_de(wxCommandEvent& event) {
		wxVector<wxVariant> item;
		item.push_back("");
		item.push_back("");
		if (m_de_list->GetSelectedItemsCount()) {
			wxDataViewItem ins_item = m_de_list->GetSelection();
			int row = m_de_list->ItemToRow(ins_item) + 1;
			m_de_list->InsertItem(row, item);
		} else 
			m_de_list->PrependItem(item);
	}

	virtual void del_de(wxCommandEvent& event) {
		delete_sel_des();
	}

	virtual void process_key(wxKeyEvent &event) {
		switch (event.GetKeyCode()) {
			case WXK_DELETE: case WXK_BACK: {
				delete_sel_des();
				break;
			}
		}
	}

	void delete_sel_des() {
		wxDataViewItemArray items;
		m_de_list->GetSelections(items);
		int n_items = m_de_list->GetSelectedItemsCount();
		wxString message;
		if (n_items == 0) 
			return; 
		else if (n_items == 1) {
			int row = m_de_list->ItemToRow(items[0]);
			std::string de_name = m_de_list->GetTextValue(row, 0).ToStdString();
			message = "Do you really want to irreversibly remove the DE '" + de_name + "' from the list?";
		} else {
			message = "Do you really want to irreversibly remove the selected " + std::to_string(items.Count()) + " DEs from the list?";
		}
		wxMessageDialog confirm = wxMessageDialog(nullptr, message, "Remove DE from list", wxYES|wxNO);
		if (confirm.ShowModal() != wxID_YES) 
			return;
		for (wxDataViewItem item : items) {
			int row = m_de_list->ItemToRow(item);
			m_de_list->DeleteItem(row);
		}
	}
};

void load_des() {
	std::ifstream infile;
	infile.open(DE_file);
	if (!infile) {
		print_error(nullptr, "DE file not found.");
		return;
	}

	DEs.clear();
	std::string line;
	DE_command["Auto"] = "";
	DE_command["None"] = "";
	while (std::getline(infile, line)) {
		std::istringstream linestream(line);
		std::string name;
		std::string cmd;
		std::getline(linestream, name, '\t');
		std::getline(linestream, cmd, '\t');
		cmd = restrict_command(cmd);
		DE_command[name] = cmd;
		if (DE_command["Auto"] != "")
			DE_command["Auto"] += "||";
		DE_command["Auto"] += cmd;
		DEs.push_back(name);
	}
	infile.close();
}

void load_settings() {
	std::ifstream infile;
	infile.open(settings_file);
	if (!infile) {
		return;
	}

	std::string line;
	while (std::getline(infile, line)) {
		std::smatch match;
		std::regex_match(line, match, std::regex(R"(^([a-zA-Z_0-9]*)\s*=\s*(.*))"));
		if (match.length() == 0) 
			continue;
		std::string variable = match[1];
		std::string value_str = match[2].str();
		const char* value = value_str.c_str();

		switch(variable[0]) {
			case 'f':
				if (variable == "font")
					font = wxFont(value);
				else if (variable == "fullscreen")
					fullscreen = value == "true";
				break;
			case 'b':
				if (variable != "background_color")
					continue;
				background = wxColour(value);
				break;
			case 't':
				if (variable != "text_color")
					continue;
				foreground = wxColour(value);
				break;
			case 's':
				if (variable == "screen_width")
					size[0] = std::atoi(value);
				else if (variable == "screen_height")
					size[1] = std::atoi(value);
				break;
		}
	}
	infile.close();
}

void save_settings() {
	std::ofstream outfile;
	outfile.open(settings_file, std::ios::out | std::ios::trunc);
	if (!outfile) {
		print_error(nullptr, "Could not open settings file.");
		return;
	}

	outfile << "fullscreen = " << (fullscreen ? "true" : "false")
		<< "\nscreen_width = " << std::to_string(size[0])
		<< "\nscreen_height = " << std::to_string(size[1])
		<< "\nbackground_color = " << background.GetAsString(wxC2S_HTML_SYNTAX)
		<< "\ntext_color = " << foreground.GetAsString(wxC2S_HTML_SYNTAX)
		<< "\nfont = " << font.GetNativeFontInfoDesc()
	;

	outfile.close();
}

// Main window

class main_frame: public main_window {
public:
	wxIcon icon = { wxT("icon.png"), wxBITMAP_TYPE_PNG };

	void load_profiles() {
		std::ifstream infile;
		infile.open(profiles_file);
		if (!infile) {
			print_error(this, "Profiles file not found.");
			return;
		}

		profiles.clear();

		std::string line;
		while (std::getline(infile, line)) {
			std::istringstream linestream(line);
			std::string name;
			std::string user;
			std::string host;
			std::string de;
			std::getline(linestream, name, '\t');
			std::getline(linestream, user, '\t');
			std::getline(linestream, host, '\t');
			std::getline(linestream, de, '\t');
			profile pr = {
				.name = name.c_str(),
				.host = host.c_str(),
				.user = user.c_str(),
				.de = de.c_str(),
				.de_command = get_DE_command(de)
			};
			profiles.emplace_back(pr);
			m_profile_select->Append(pr.name);
		}
		infile.close();
	}

	void save_profiles() {
		std::ofstream outfile;
		outfile.open(profiles_file, std::ios::out | std::ios::trunc);
		if (!outfile) {
			print_error(this, "Could not open profiles file.");
			return;
		}

		for (profile pr : profiles)
			outfile << pr.name << '\t' << pr.user << '\t' << pr.host << '\t' << pr.de << '\n';
		outfile.close();
	}

	main_frame(): main_window(NULL) {
		SetIcon(icon);
		load_settings();
		load_des();
		load_profiles();
		Show(true);
	}

	virtual void connect(wxCommandEvent& event) {
		int selected_profile = m_profile_select->GetSelection();
		if (selected_profile == wxNOT_FOUND)
			return;
		profile pr = profiles[selected_profile];
		if (check_install("xterm")) 
			return;

		connect_to(pr.user, pr.host, pr.de_command);
	}

	virtual void add(wxCommandEvent& event) { 
		profile pr = profile{"", "", "", "", ""};
		profile_frame frame = profile_frame(this, pr);
		if (frame.ShowModal() == wxID_CANCEL)
			return;
		
		profiles.emplace_back(pr);
		m_profile_select->Append(pr.name);
	}

	virtual void remove(wxCommandEvent& event) { 
		int selected_profile = m_profile_select->GetSelection();
		if (selected_profile == wxNOT_FOUND)
			return;
		wxMessageDialog confirm = wxMessageDialog(
			this, 
			"Are you sure you want to delete the profile '" + profiles[selected_profile].name + "'?",
			"Confirm profile removal", 
			wxYES|wxNO
		);
		if (confirm.ShowModal() == wxID_NO) {
			return;
		}
		profiles.erase(profiles.begin() + selected_profile);
		m_profile_select->Delete(selected_profile);
	}

	virtual void modify(wxCommandEvent& event) { 
		int selected_profile = m_profile_select->GetSelection();
		if (selected_profile == wxNOT_FOUND)
			return;
		profile& pr = profiles[selected_profile];
		profile_frame frame = profile_frame(this, pr);

		if (frame.ShowModal() == wxID_CANCEL)
			return;
		
		m_profile_select->SetString(selected_profile, pr.name);
		pr.de_command = get_DE_command(pr.de.ToStdString());
	}

	// CUSTOM CONNECTION

	virtual void connect_c(wxCommandEvent& event) {
		std::string host = m_hostname->GetLineText(0).ToStdString();
		std::string user = m_username->GetLineText(0).ToStdString();
		std::string de_command = get_DE_command(m_DE->GetStringSelection().ToStdString());
		connect_to(user, host, de_command);
	}

	virtual void add_c(wxCommandEvent& event) {
		profile pr = profile{
			"", 
			m_hostname->GetLineText(0), 
			m_username->GetLineText(0), 
			m_DE->GetStringSelection()
		};
		profile_frame frame = profile_frame(this, pr);
		if (frame.ShowModal() == wxID_CANCEL)
			return;
		m_profile_select->Append(pr.name);
	}

	virtual void close(wxCloseEvent& event) {
		save_profiles();
		save_settings();
		Destroy();
	}

	// SETTINGS

	virtual void cons(wxCommandEvent& event) {
		console_s c = console_s(this);
		c.ShowModal();
	}

	virtual void de_settings(wxCommandEvent& event) {
		de_s de = de_s(this);
		de.ShowModal();
	}

	virtual void about(wxCommandEvent& event) {
		wxAboutDialogInfo aboutInfo;

        aboutInfo.SetIcon(icon);
        aboutInfo.SetName("VDesk");
        aboutInfo.SetVersion("Version " vdesk_VERSION);
        aboutInfo.SetDescription("Remote Desktop using SSH X11 forwarding");
        aboutInfo.SetCopyright("GNU General Public License v3.0");
        aboutInfo.SetWebSite("https://github.com/lemogne/vdesk");
        aboutInfo.AddDeveloper("lemogne");

        wxAboutBox(aboutInfo);

	}
};

bool vdesk::OnInit() {
	main_frame* frame = new main_frame();
	return true;
}