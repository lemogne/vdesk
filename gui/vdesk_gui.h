///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-282-g1fa54006)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/choice.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbox.h>
#include <wx/panel.h>
#include <wx/textctrl.h>
#include <wx/combobox.h>
#include <wx/notebook.h>
#include <wx/frame.h>
#include <wx/clrpicker.h>
#include <wx/fontpicker.h>
#include <wx/checkbox.h>
#include <wx/spinctrl.h>
#include <wx/dialog.h>
#include <wx/dataview.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class main_window
///////////////////////////////////////////////////////////////////////////////
class main_window : public wxFrame
{
	private:

	protected:
		wxNotebook* m_notebook1;
		wxPanel* m_profiles;
		wxStaticText* m_staticText3;
		wxStaticText* m_staticText2;
		wxChoice* m_profile_select;
		wxButton* m_button_connect;
		wxButton* m_button_add;
		wxButton* m_button_rem;
		wxButton* m_button_mod;
		wxPanel* m_custom;
		wxStaticText* m_staticText15;
		wxStaticText* m_staticText6;
		wxTextCtrl* m_username;
		wxStaticText* m_staticText5;
		wxTextCtrl* m_hostname;
		wxStaticText* m_staticText7;
		wxComboBox* m_DE;
		wxButton* m_connect_c;
		wxButton* m_add_new;
		wxPanel* m_settings;
		wxStaticText* m_staticText151;
		wxStaticText* m_staticText61;
		wxButton* m_cons;
		wxStaticText* m_staticText71;
		wxButton* m_de_settings;
		wxStaticText* m_staticText83494;
		wxButton* m_sett_misc;

		// Virtual event handlers, override them in your derived class
		virtual void close( wxCloseEvent& event ) { event.Skip(); }
		virtual void connect( wxCommandEvent& event ) { event.Skip(); }
		virtual void add( wxCommandEvent& event ) { event.Skip(); }
		virtual void remove( wxCommandEvent& event ) { event.Skip(); }
		virtual void modify( wxCommandEvent& event ) { event.Skip(); }
		virtual void connect_c( wxCommandEvent& event ) { event.Skip(); }
		virtual void add_c( wxCommandEvent& event ) { event.Skip(); }
		virtual void cons( wxCommandEvent& event ) { event.Skip(); }
		virtual void de_settings( wxCommandEvent& event ) { event.Skip(); }
		virtual void sett_misc( wxCommandEvent& event ) { event.Skip(); }


	public:

		main_window( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("VDesk GUI"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~main_window();

};

///////////////////////////////////////////////////////////////////////////////
/// Class console_settings
///////////////////////////////////////////////////////////////////////////////
class console_settings : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText24;
		wxColourPickerCtrl* m_text_colour_picker;
		wxStaticText* m_staticText25;
		wxColourPickerCtrl* m_back_colour_picker;
		wxStaticText* m_staticText26;
		wxFontPickerCtrl* m_font_picker;
		wxStaticText* m_staticText27;
		wxCheckBox* m_is_fullscreen;
		wxStaticText* m_staticText28;
		wxSpinCtrl* m_console_width;
		wxStaticText* m_staticText29;
		wxSpinCtrl* m_console_height;
		wxStdDialogButtonSizer* m_sdbSizer2;
		wxButton* m_sdbSizer2OK;
		wxButton* m_sdbSizer2Cancel;

		// Virtual event handlers, override them in your derived class
		virtual void toggle_fullscreen( wxCommandEvent& event ) { event.Skip(); }
		virtual void cancel( wxCommandEvent& event ) { event.Skip(); }
		virtual void set_profile( wxCommandEvent& event ) { event.Skip(); }


	public:

		console_settings( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Console Settings"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );

		~console_settings();

};

///////////////////////////////////////////////////////////////////////////////
/// Class de_settings
///////////////////////////////////////////////////////////////////////////////
class de_settings : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText42;
		wxButton* m_de_new;
		wxButton* m_de_remove;
		wxStdDialogButtonSizer* m_sdbSizer2;
		wxButton* m_sdbSizer2OK;
		wxButton* m_sdbSizer2Cancel;

		// Virtual event handlers, override them in your derived class
		virtual void process_key( wxKeyEvent& event ) { event.Skip(); }
		virtual void begin_drag( wxDataViewEvent& event ) { event.Skip(); }
		virtual void end_drag( wxDataViewEvent& event ) { event.Skip(); }
		virtual void drop_p( wxDataViewEvent& event ) { event.Skip(); }
		virtual void begin_edit( wxDataViewEvent& event ) { event.Skip(); }
		virtual void new_de( wxCommandEvent& event ) { event.Skip(); }
		virtual void del_de( wxCommandEvent& event ) { event.Skip(); }
		virtual void cancel( wxCommandEvent& event ) { event.Skip(); }
		virtual void set_profile( wxCommandEvent& event ) { event.Skip(); }


	public:
		wxDataViewListCtrl* m_de_list;

		de_settings( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Desktop Environment Settings"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_DIALOG_STYLE );

		~de_settings();

};

///////////////////////////////////////////////////////////////////////////////
/// Class profile_manager
///////////////////////////////////////////////////////////////////////////////
class profile_manager : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText8;
		wxTextCtrl* m_profilename;
		wxStaticText* m_staticText6;
		wxTextCtrl* m_username;
		wxStaticText* m_staticText5;
		wxTextCtrl* m_hostname;
		wxStaticText* m_staticText7;
		wxComboBox* m_DE;
		wxStdDialogButtonSizer* m_sdbSizer2;
		wxButton* m_sdbSizer2OK;
		wxButton* m_sdbSizer2Cancel;

		// Virtual event handlers, override them in your derived class
		virtual void cancel( wxCommandEvent& event ) { event.Skip(); }
		virtual void set_profile( wxCommandEvent& event ) { event.Skip(); }


	public:

		profile_manager( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Manage Profile..."), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );

		~profile_manager();

};

///////////////////////////////////////////////////////////////////////////////
/// Class get_password
///////////////////////////////////////////////////////////////////////////////
class get_password : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText24;
		wxTextCtrl* m_textCtrl16;
		wxStdDialogButtonSizer* m_sdbSizer2;
		wxButton* m_sdbSizer2OK;
		wxButton* m_sdbSizer2Cancel;

		// Virtual event handlers, override them in your derived class
		virtual void cancel( wxCommandEvent& event ) { event.Skip(); }
		virtual void set_profile( wxCommandEvent& event ) { event.Skip(); }


	public:

		get_password( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Enter Password"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );

		~get_password();

};

