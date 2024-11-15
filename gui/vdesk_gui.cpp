///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-282-g1fa54006)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "vdesk_gui.h"

///////////////////////////////////////////////////////////////////////////

main_window::main_window( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	m_notebook1 = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_profiles = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );


	bSizer6->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText3 = new wxStaticText( m_profiles, wxID_ANY, wxT("Here you can connect using one of the defined profiles.\nYou can also add/remove profiles here"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL );
	m_staticText3->Wrap( -1 );
	bSizer6->Add( m_staticText3, 0, wxALIGN_CENTER|wxALL, 5 );


	bSizer6->Add( 0, 0, 1, wxEXPAND, 5 );


	bSizer3->Add( bSizer6, 1, wxALIGN_CENTER|wxTOP, 5 );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );


	bSizer5->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText2 = new wxStaticText( m_profiles, wxID_ANY, wxT("Profile"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer5->Add( m_staticText2, 0, wxALIGN_CENTER|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	wxArrayString m_profile_selectChoices;
	m_profile_select = new wxChoice( m_profiles, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_profile_selectChoices, 0 );
	m_profile_select->SetSelection( 0 );
	bSizer5->Add( m_profile_select, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer5->Add( 0, 0, 1, wxEXPAND, 5 );

	m_button_connect = new wxButton( m_profiles, wxID_ANY, wxT("Connect"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_button_connect, 0, wxALIGN_CENTER|wxALL, 5 );


	bSizer5->Add( 0, 0, 1, wxEXPAND, 5 );


	bSizer3->Add( bSizer5, 1, wxALIGN_CENTER, 5 );

	wxStaticBoxSizer* sbSizer2;
	sbSizer2 = new wxStaticBoxSizer( new wxStaticBox( m_profiles, wxID_ANY, wxT("Profile Management") ), wxHORIZONTAL );


	sbSizer2->Add( 0, 0, 1, wxEXPAND, 5 );

	m_button_add = new wxButton( sbSizer2->GetStaticBox(), wxID_ANY, wxT("Add..."), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer2->Add( m_button_add, 0, wxALIGN_CENTER|wxALL, 5 );


	sbSizer2->Add( 0, 0, 1, wxEXPAND, 5 );

	m_button_rem = new wxButton( sbSizer2->GetStaticBox(), wxID_ANY, wxT("Remove"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer2->Add( m_button_rem, 0, wxALIGN_CENTER|wxALL, 5 );


	sbSizer2->Add( 0, 0, 1, wxEXPAND, 5 );

	m_button_mod = new wxButton( sbSizer2->GetStaticBox(), wxID_ANY, wxT("Modify..."), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer2->Add( m_button_mod, 0, wxALIGN_CENTER|wxALL, 5 );


	sbSizer2->Add( 0, 0, 1, wxEXPAND, 5 );


	bSizer3->Add( sbSizer2, 1, wxEXPAND, 5 );


	m_profiles->SetSizer( bSizer3 );
	m_profiles->Layout();
	bSizer3->Fit( m_profiles );
	m_notebook1->AddPage( m_profiles, wxT("Profiles"), true );
	m_custom = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );


	bSizer10->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText15 = new wxStaticText( m_custom, wxID_ANY, wxT("Here you can connect to a host machine directly without a profile."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText15->Wrap( -1 );
	bSizer10->Add( m_staticText15, 0, wxALIGN_CENTER|wxALL, 5 );


	bSizer10->Add( 0, 0, 1, wxEXPAND, 5 );


	bSizer8->Add( bSizer10, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1->SetFlexibleDirection( wxBOTH );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText6 = new wxStaticText( m_custom, wxID_ANY, wxT("Username"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	fgSizer1->Add( m_staticText6, 0, wxALIGN_CENTER|wxALL, 5 );

	m_username = new wxTextCtrl( m_custom, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_username->SetMinSize( wxSize( 200,-1 ) );

	fgSizer1->Add( m_username, 0, wxALL, 5 );

	m_staticText5 = new wxStaticText( m_custom, wxID_ANY, wxT("Hostname"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	fgSizer1->Add( m_staticText5, 0, wxALIGN_CENTER|wxALIGN_LEFT|wxALL, 5 );

	m_hostname = new wxTextCtrl( m_custom, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_hostname->SetMinSize( wxSize( 200,-1 ) );

	fgSizer1->Add( m_hostname, 0, wxALL, 5 );

	m_staticText7 = new wxStaticText( m_custom, wxID_ANY, wxT("Desktop Environment"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	fgSizer1->Add( m_staticText7, 0, wxALIGN_CENTER|wxALL, 5 );

	m_DE = new wxComboBox( m_custom, wxID_ANY, wxT("Auto"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_DE->Append( wxT("XFCE") );
	m_DE->Append( wxT("GNOME") );
	m_DE->Append( wxT("KDE") );
	m_DE->Append( wxT("LXDE") );
	m_DE->Append( wxT("LXQt") );
	m_DE->Append( wxT("None") );
	m_DE->Append( wxT("Auto") );
	m_DE->SetSelection( 6 );
	m_DE->SetMinSize( wxSize( 100,-1 ) );

	fgSizer1->Add( m_DE, 0, wxALIGN_CENTER|wxALL, 5 );


	bSizer8->Add( fgSizer1, 1, wxALIGN_CENTER|wxALL, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );


	bSizer9->Add( 0, 0, 1, wxEXPAND, 5 );

	m_connect_c = new wxButton( m_custom, wxID_ANY, wxT("Connect"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_connect_c, 0, wxALIGN_CENTER|wxALL, 5 );


	bSizer9->Add( 0, 0, 1, wxEXPAND, 5 );

	m_add_new = new wxButton( m_custom, wxID_ANY, wxT("Add as Profile"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_add_new, 0, wxALIGN_CENTER|wxALL, 5 );


	bSizer9->Add( 0, 0, 1, wxEXPAND, 5 );


	bSizer8->Add( bSizer9, 1, wxEXPAND, 5 );


	m_custom->SetSizer( bSizer8 );
	m_custom->Layout();
	bSizer8->Fit( m_custom );
	m_notebook1->AddPage( m_custom, wxT("Custom Connection"), false );
	m_settings = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer81;
	bSizer81 = new wxBoxSizer( wxVERTICAL );


	bSizer81->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText151 = new wxStaticText( m_settings, wxID_ANY, wxT("Here you can change settings. They will automatically be saved and applied."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText151->Wrap( -1 );
	bSizer81->Add( m_staticText151, 0, wxALIGN_CENTER|wxALL, 5 );


	bSizer81->Add( 0, 0, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer11;
	fgSizer11 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer11->SetFlexibleDirection( wxBOTH );
	fgSizer11->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText61 = new wxStaticText( m_settings, wxID_ANY, wxT("Console appearance"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText61->Wrap( -1 );
	fgSizer11->Add( m_staticText61, 0, wxALIGN_CENTER|wxALL, 5 );

	m_cons = new wxButton( m_settings, wxID_ANY, wxT("Edit..."), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer11->Add( m_cons, 0, wxALIGN_CENTER|wxALL, 5 );

	m_staticText71 = new wxStaticText( m_settings, wxID_ANY, wxT("Desktop Environment"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText71->Wrap( -1 );
	fgSizer11->Add( m_staticText71, 0, wxALIGN_CENTER|wxALL, 5 );

	m_de_settings = new wxButton( m_settings, wxID_ANY, wxT("Edit..."), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer11->Add( m_de_settings, 0, wxALIGN_CENTER|wxALL, 5 );

	m_staticText83494 = new wxStaticText( m_settings, wxID_ANY, wxT("Miscellaneous"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText83494->Wrap( -1 );
	fgSizer11->Add( m_staticText83494, 0, wxALIGN_CENTER|wxALIGN_LEFT|wxALL, 5 );

	m_sett_misc = new wxButton( m_settings, wxID_ANY, wxT("Edit..."), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer11->Add( m_sett_misc, 0, wxALL, 5 );


	bSizer81->Add( fgSizer11, 1, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer81->Add( 0, 0, 1, wxEXPAND, 5 );


	m_settings->SetSizer( bSizer81 );
	m_settings->Layout();
	bSizer81->Fit( m_settings );
	m_notebook1->AddPage( m_settings, wxT("Settings"), false );

	bSizer1->Add( m_notebook1, 1, wxEXPAND | wxALL, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( main_window::close ) );
	m_button_connect->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_window::connect ), NULL, this );
	m_button_add->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_window::add ), NULL, this );
	m_button_rem->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_window::remove ), NULL, this );
	m_button_mod->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_window::modify ), NULL, this );
	m_connect_c->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_window::connect_c ), NULL, this );
	m_add_new->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_window::add_c ), NULL, this );
	m_cons->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_window::cons ), NULL, this );
	m_de_settings->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_window::de_settings ), NULL, this );
	m_sett_misc->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_window::sett_misc ), NULL, this );
}

main_window::~main_window()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( main_window::close ) );
	m_button_connect->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_window::connect ), NULL, this );
	m_button_add->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_window::add ), NULL, this );
	m_button_rem->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_window::remove ), NULL, this );
	m_button_mod->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_window::modify ), NULL, this );
	m_connect_c->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_window::connect_c ), NULL, this );
	m_add_new->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_window::add_c ), NULL, this );
	m_cons->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_window::cons ), NULL, this );
	m_de_settings->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_window::de_settings ), NULL, this );
	m_sett_misc->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( main_window::sett_misc ), NULL, this );

}

console_settings::console_settings( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer3;
	fgSizer3 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer3->SetFlexibleDirection( wxBOTH );
	fgSizer3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxHORIZONTAL );

	wxFlexGridSizer* fgSizer11;
	fgSizer11 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer11->SetFlexibleDirection( wxBOTH );
	fgSizer11->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText24 = new wxStaticText( this, wxID_ANY, wxT("Text colour"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText24->Wrap( -1 );
	fgSizer11->Add( m_staticText24, 0, wxALIGN_CENTER|wxALL, 5 );

	m_text_colour_picker = new wxColourPickerCtrl( this, wxID_ANY, wxColour( 255, 255, 255 ), wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	fgSizer11->Add( m_text_colour_picker, 0, wxALIGN_CENTER|wxALL, 5 );

	m_staticText25 = new wxStaticText( this, wxID_ANY, wxT("Background"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText25->Wrap( -1 );
	fgSizer11->Add( m_staticText25, 0, wxALIGN_CENTER|wxALL, 5 );

	m_back_colour_picker = new wxColourPickerCtrl( this, wxID_ANY, *wxBLACK, wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	fgSizer11->Add( m_back_colour_picker, 0, wxALIGN_CENTER|wxALL, 5 );

	m_staticText26 = new wxStaticText( this, wxID_ANY, wxT("Font"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText26->Wrap( -1 );
	fgSizer11->Add( m_staticText26, 0, wxALIGN_CENTER|wxALL, 5 );

	m_font_picker = new wxFontPickerCtrl( this, wxID_ANY, wxNullFont, wxDefaultPosition, wxDefaultSize, wxFNTP_DEFAULT_STYLE );
	m_font_picker->SetMaxPointSize( 100 );
	fgSizer11->Add( m_font_picker, 0, wxALIGN_CENTER|wxALL, 5 );


	bSizer15->Add( fgSizer11, 1, wxALIGN_CENTER, 5 );

	wxFlexGridSizer* fgSizer12;
	fgSizer12 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer12->SetFlexibleDirection( wxBOTH );
	fgSizer12->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText27 = new wxStaticText( this, wxID_ANY, wxT("Window size"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText27->Wrap( -1 );
	fgSizer12->Add( m_staticText27, 0, wxALIGN_CENTER|wxALL, 5 );

	m_is_fullscreen = new wxCheckBox( this, wxID_ANY, wxT("Fullscreen"), wxDefaultPosition, wxDefaultSize, 0 );
	m_is_fullscreen->SetValue(true);
	fgSizer12->Add( m_is_fullscreen, 0, wxALIGN_CENTER|wxALL, 5 );

	m_staticText28 = new wxStaticText( this, wxID_ANY, wxT("Width"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText28->Wrap( -1 );
	fgSizer12->Add( m_staticText28, 0, wxALIGN_CENTER|wxALL, 5 );

	m_console_width = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 16384, 1920 );
	fgSizer12->Add( m_console_width, 0, wxALIGN_CENTER|wxALL, 5 );

	m_staticText29 = new wxStaticText( this, wxID_ANY, wxT("Height"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText29->Wrap( -1 );
	fgSizer12->Add( m_staticText29, 0, wxALIGN_CENTER|wxALL, 5 );

	m_console_height = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 16384, 1080 );
	fgSizer12->Add( m_console_height, 0, wxALIGN_CENTER|wxALL, 5 );


	bSizer15->Add( fgSizer12, 1, wxEXPAND, 5 );


	fgSizer3->Add( bSizer15, 1, wxEXPAND, 5 );

	m_sdbSizer2 = new wxStdDialogButtonSizer();
	m_sdbSizer2OK = new wxButton( this, wxID_OK );
	m_sdbSizer2->AddButton( m_sdbSizer2OK );
	m_sdbSizer2Cancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizer2->AddButton( m_sdbSizer2Cancel );
	m_sdbSizer2->Realize();

	fgSizer3->Add( m_sdbSizer2, 1, wxALIGN_CENTER|wxALL, 5 );


	bSizer8->Add( fgSizer3, 1, wxALL|wxEXPAND, 5 );


	this->SetSizer( bSizer8 );
	this->Layout();
	bSizer8->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_is_fullscreen->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( console_settings::toggle_fullscreen ), NULL, this );
	m_sdbSizer2Cancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( console_settings::cancel ), NULL, this );
	m_sdbSizer2OK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( console_settings::set_profile ), NULL, this );
}

console_settings::~console_settings()
{
	// Disconnect Events
	m_is_fullscreen->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( console_settings::toggle_fullscreen ), NULL, this );
	m_sdbSizer2Cancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( console_settings::cancel ), NULL, this );
	m_sdbSizer2OK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( console_settings::set_profile ), NULL, this );

}

de_settings::de_settings( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer3;
	fgSizer3 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer3->SetFlexibleDirection( wxBOTH );
	fgSizer3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText42 = new wxStaticText( this, wxID_ANY, wxT("You can move the desktop environments up or down to indicate the order they should be loaded when the setting is set to 'Auto'.\nYou can also modify the commands that are loaded for each DE and add or remove DEs."), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL );
	m_staticText42->Wrap( 300 );
	fgSizer3->Add( m_staticText42, 0, wxALL|wxEXPAND, 5 );

	m_de_list = new wxDataViewListCtrl( this, wxID_ANY, wxDefaultPosition, wxSize( -1,150 ), 0 );
	fgSizer3->Add( m_de_list, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxHORIZONTAL );

	m_de_new = new wxButton( this, wxID_ANY, wxT("New"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( m_de_new, 0, wxALL, 5 );


	bSizer20->Add( 0, 0, 1, wxEXPAND, 5 );

	m_de_remove = new wxButton( this, wxID_ANY, wxT("Remove"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( m_de_remove, 0, wxALL, 5 );


	fgSizer3->Add( bSizer20, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_sdbSizer2 = new wxStdDialogButtonSizer();
	m_sdbSizer2OK = new wxButton( this, wxID_OK );
	m_sdbSizer2->AddButton( m_sdbSizer2OK );
	m_sdbSizer2Cancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizer2->AddButton( m_sdbSizer2Cancel );
	m_sdbSizer2->Realize();

	fgSizer3->Add( m_sdbSizer2, 1, wxALIGN_CENTER|wxALL, 5 );


	bSizer8->Add( fgSizer3, 1, wxALL|wxEXPAND, 5 );


	this->SetSizer( bSizer8 );
	this->Layout();
	bSizer8->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_de_list->Connect( wxEVT_CHAR, wxKeyEventHandler( de_settings::process_key ), NULL, this );
	m_de_list->Connect( wxEVT_COMMAND_DATAVIEW_ITEM_BEGIN_DRAG, wxDataViewEventHandler( de_settings::begin_drag ), NULL, this );
	m_de_list->Connect( wxEVT_COMMAND_DATAVIEW_ITEM_DROP, wxDataViewEventHandler( de_settings::end_drag ), NULL, this );
	m_de_list->Connect( wxEVT_COMMAND_DATAVIEW_ITEM_DROP_POSSIBLE, wxDataViewEventHandler( de_settings::drop_p ), NULL, this );
	m_de_list->Connect( wxEVT_COMMAND_DATAVIEW_ITEM_START_EDITING, wxDataViewEventHandler( de_settings::begin_edit ), NULL, this );
	m_de_list->Connect( wxEVT_KEY_DOWN, wxKeyEventHandler( de_settings::process_key ), NULL, this );
	m_de_new->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( de_settings::new_de ), NULL, this );
	m_de_remove->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( de_settings::del_de ), NULL, this );
	m_sdbSizer2Cancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( de_settings::cancel ), NULL, this );
	m_sdbSizer2OK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( de_settings::set_profile ), NULL, this );
}

de_settings::~de_settings()
{
	// Disconnect Events
	m_de_list->Disconnect( wxEVT_CHAR, wxKeyEventHandler( de_settings::process_key ), NULL, this );
	m_de_list->Disconnect( wxEVT_COMMAND_DATAVIEW_ITEM_BEGIN_DRAG, wxDataViewEventHandler( de_settings::begin_drag ), NULL, this );
	m_de_list->Disconnect( wxEVT_COMMAND_DATAVIEW_ITEM_DROP, wxDataViewEventHandler( de_settings::end_drag ), NULL, this );
	m_de_list->Disconnect( wxEVT_COMMAND_DATAVIEW_ITEM_DROP_POSSIBLE, wxDataViewEventHandler( de_settings::drop_p ), NULL, this );
	m_de_list->Disconnect( wxEVT_COMMAND_DATAVIEW_ITEM_START_EDITING, wxDataViewEventHandler( de_settings::begin_edit ), NULL, this );
	m_de_list->Disconnect( wxEVT_KEY_DOWN, wxKeyEventHandler( de_settings::process_key ), NULL, this );
	m_de_new->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( de_settings::new_de ), NULL, this );
	m_de_remove->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( de_settings::del_de ), NULL, this );
	m_sdbSizer2Cancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( de_settings::cancel ), NULL, this );
	m_sdbSizer2OK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( de_settings::set_profile ), NULL, this );

}

profile_manager::profile_manager( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer3;
	fgSizer3 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer3->SetFlexibleDirection( wxBOTH );
	fgSizer3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1->SetFlexibleDirection( wxBOTH );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText8 = new wxStaticText( this, wxID_ANY, wxT("Profile name"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	fgSizer1->Add( m_staticText8, 0, wxALIGN_CENTER|wxALL, 5 );

	m_profilename = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_profilename->SetMinSize( wxSize( 200,-1 ) );

	fgSizer1->Add( m_profilename, 0, wxALL, 5 );

	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("Username"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	fgSizer1->Add( m_staticText6, 0, wxALIGN_CENTER|wxALL, 5 );

	m_username = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_username->SetMinSize( wxSize( 200,-1 ) );

	fgSizer1->Add( m_username, 0, wxALL, 5 );

	m_staticText5 = new wxStaticText( this, wxID_ANY, wxT("Hostname"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	fgSizer1->Add( m_staticText5, 0, wxALIGN_CENTER|wxALIGN_LEFT|wxALL, 5 );

	m_hostname = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_hostname->SetMinSize( wxSize( 200,-1 ) );

	fgSizer1->Add( m_hostname, 0, wxALL, 5 );

	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Desktop Environment"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	fgSizer1->Add( m_staticText7, 0, wxALIGN_CENTER|wxALL, 5 );

	m_DE = new wxComboBox( this, wxID_ANY, wxT("Auto"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_DE->Append( wxT("XFCE") );
	m_DE->Append( wxT("GNOME") );
	m_DE->Append( wxT("KDE") );
	m_DE->Append( wxT("LXDE") );
	m_DE->Append( wxT("LXQt") );
	m_DE->Append( wxT("None") );
	m_DE->Append( wxT("Auto") );
	m_DE->SetSelection( 6 );
	m_DE->SetMinSize( wxSize( 100,-1 ) );

	fgSizer1->Add( m_DE, 0, wxALIGN_CENTER|wxALL, 5 );


	fgSizer3->Add( fgSizer1, 1, wxALL|wxEXPAND, 5 );

	m_sdbSizer2 = new wxStdDialogButtonSizer();
	m_sdbSizer2OK = new wxButton( this, wxID_OK );
	m_sdbSizer2->AddButton( m_sdbSizer2OK );
	m_sdbSizer2Cancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizer2->AddButton( m_sdbSizer2Cancel );
	m_sdbSizer2->Realize();

	fgSizer3->Add( m_sdbSizer2, 1, wxALIGN_CENTER|wxALL, 5 );


	bSizer8->Add( fgSizer3, 1, wxALL|wxEXPAND, 5 );


	this->SetSizer( bSizer8 );
	this->Layout();
	bSizer8->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_sdbSizer2Cancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( profile_manager::cancel ), NULL, this );
	m_sdbSizer2OK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( profile_manager::set_profile ), NULL, this );
}

profile_manager::~profile_manager()
{
	// Disconnect Events
	m_sdbSizer2Cancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( profile_manager::cancel ), NULL, this );
	m_sdbSizer2OK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( profile_manager::set_profile ), NULL, this );

}

get_password::get_password( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer3;
	fgSizer3 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer3->SetFlexibleDirection( wxBOTH );
	fgSizer3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText24 = new wxStaticText( this, wxID_ANY, wxT("Your settings and profile are encrypted. \nThis is so malicious programs cannot alter them to steal your credentials. \nPlease enter your password into the space below."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText24->Wrap( 300 );
	fgSizer3->Add( m_staticText24, 0, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl16 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,-1 ), wxTE_PASSWORD );
	fgSizer3->Add( m_textCtrl16, 0, wxALIGN_CENTER|wxALL, 5 );

	m_sdbSizer2 = new wxStdDialogButtonSizer();
	m_sdbSizer2OK = new wxButton( this, wxID_OK );
	m_sdbSizer2->AddButton( m_sdbSizer2OK );
	m_sdbSizer2Cancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizer2->AddButton( m_sdbSizer2Cancel );
	m_sdbSizer2->Realize();

	fgSizer3->Add( m_sdbSizer2, 1, wxALIGN_CENTER|wxALL, 5 );


	bSizer8->Add( fgSizer3, 1, wxALL|wxEXPAND, 5 );


	this->SetSizer( bSizer8 );
	this->Layout();
	bSizer8->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_sdbSizer2Cancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( get_password::cancel ), NULL, this );
	m_sdbSizer2OK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( get_password::set_profile ), NULL, this );
}

get_password::~get_password()
{
	// Disconnect Events
	m_sdbSizer2Cancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( get_password::cancel ), NULL, this );
	m_sdbSizer2OK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( get_password::set_profile ), NULL, this );

}
