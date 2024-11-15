# -*- coding: utf-8 -*-

###########################################################################
## Python code generated with wxFormBuilder (version 3.10.1-282-g1fa54006)
## http://www.wxformbuilder.org/
##
## PLEASE DO *NOT* EDIT THIS FILE!
###########################################################################

import wx
import wx.xrc
import wx.dataview

###########################################################################
## Class main_window
###########################################################################

class main_window ( wx.Frame ):

	def __init__( self, parent ):
		wx.Frame.__init__ ( self, parent, id = wx.ID_ANY, title = u"VDesk GUI", pos = wx.DefaultPosition, size = wx.Size( 500,300 ), style = wx.DEFAULT_FRAME_STYLE|wx.TAB_TRAVERSAL )

		self.SetSizeHints( wx.DefaultSize, wx.DefaultSize )

		bSizer1 = wx.BoxSizer( wx.VERTICAL )

		self.m_notebook1 = wx.Notebook( self, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_profiles = wx.Panel( self.m_notebook1, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, wx.TAB_TRAVERSAL )
		bSizer3 = wx.BoxSizer( wx.VERTICAL )

		bSizer6 = wx.BoxSizer( wx.VERTICAL )


		bSizer6.Add( ( 0, 0), 1, wx.EXPAND, 5 )

		self.m_staticText3 = wx.StaticText( self.m_profiles, wx.ID_ANY, u"Here you can connect using one of the defined profiles.\nYou can also add/remove profiles here", wx.DefaultPosition, wx.DefaultSize, wx.ALIGN_CENTER_HORIZONTAL )
		self.m_staticText3.Wrap( -1 )

		bSizer6.Add( self.m_staticText3, 0, wx.ALIGN_CENTER|wx.ALL, 5 )


		bSizer6.Add( ( 0, 0), 1, wx.EXPAND, 5 )


		bSizer3.Add( bSizer6, 1, wx.ALIGN_CENTER|wx.TOP, 5 )

		bSizer5 = wx.BoxSizer( wx.HORIZONTAL )


		bSizer5.Add( ( 0, 0), 1, wx.EXPAND, 5 )

		self.m_staticText2 = wx.StaticText( self.m_profiles, wx.ID_ANY, u"Profile", wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText2.Wrap( -1 )

		bSizer5.Add( self.m_staticText2, 0, wx.ALIGN_CENTER|wx.ALIGN_CENTER_HORIZONTAL|wx.ALIGN_CENTER_VERTICAL|wx.ALL, 5 )

		m_profile_selectChoices = []
		self.m_profile_select = wx.Choice( self.m_profiles, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, m_profile_selectChoices, 0 )
		self.m_profile_select.SetSelection( 0 )
		bSizer5.Add( self.m_profile_select, 0, wx.ALIGN_CENTER_HORIZONTAL|wx.ALIGN_CENTER_VERTICAL|wx.ALL, 5 )


		bSizer5.Add( ( 0, 0), 1, wx.EXPAND, 5 )

		self.m_button_connect = wx.Button( self.m_profiles, wx.ID_ANY, u"Connect", wx.DefaultPosition, wx.DefaultSize, 0 )
		bSizer5.Add( self.m_button_connect, 0, wx.ALIGN_CENTER|wx.ALL, 5 )


		bSizer5.Add( ( 0, 0), 1, wx.EXPAND, 5 )


		bSizer3.Add( bSizer5, 1, wx.ALIGN_CENTER, 5 )

		sbSizer2 = wx.StaticBoxSizer( wx.StaticBox( self.m_profiles, wx.ID_ANY, u"Profile Management" ), wx.HORIZONTAL )


		sbSizer2.Add( ( 0, 0), 1, wx.EXPAND, 5 )

		self.m_button_add = wx.Button( sbSizer2.GetStaticBox(), wx.ID_ANY, u"Add...", wx.DefaultPosition, wx.DefaultSize, 0 )
		sbSizer2.Add( self.m_button_add, 0, wx.ALIGN_CENTER|wx.ALL, 5 )


		sbSizer2.Add( ( 0, 0), 1, wx.EXPAND, 5 )

		self.m_button_rem = wx.Button( sbSizer2.GetStaticBox(), wx.ID_ANY, u"Remove", wx.DefaultPosition, wx.DefaultSize, 0 )
		sbSizer2.Add( self.m_button_rem, 0, wx.ALIGN_CENTER|wx.ALL, 5 )


		sbSizer2.Add( ( 0, 0), 1, wx.EXPAND, 5 )

		self.m_button_mod = wx.Button( sbSizer2.GetStaticBox(), wx.ID_ANY, u"Modify...", wx.DefaultPosition, wx.DefaultSize, 0 )
		sbSizer2.Add( self.m_button_mod, 0, wx.ALIGN_CENTER|wx.ALL, 5 )


		sbSizer2.Add( ( 0, 0), 1, wx.EXPAND, 5 )


		bSizer3.Add( sbSizer2, 1, wx.EXPAND, 5 )


		self.m_profiles.SetSizer( bSizer3 )
		self.m_profiles.Layout()
		bSizer3.Fit( self.m_profiles )
		self.m_notebook1.AddPage( self.m_profiles, u"Profiles", True )
		self.m_custom = wx.Panel( self.m_notebook1, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, wx.TAB_TRAVERSAL )
		bSizer8 = wx.BoxSizer( wx.VERTICAL )

		bSizer10 = wx.BoxSizer( wx.VERTICAL )


		bSizer10.Add( ( 0, 0), 1, wx.EXPAND, 5 )

		self.m_staticText15 = wx.StaticText( self.m_custom, wx.ID_ANY, u"Here you can connect to a host machine directly without a profile.", wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText15.Wrap( -1 )

		bSizer10.Add( self.m_staticText15, 0, wx.ALIGN_CENTER|wx.ALL, 5 )


		bSizer10.Add( ( 0, 0), 1, wx.EXPAND, 5 )


		bSizer8.Add( bSizer10, 1, wx.EXPAND, 5 )

		fgSizer1 = wx.FlexGridSizer( 0, 2, 0, 0 )
		fgSizer1.SetFlexibleDirection( wx.BOTH )
		fgSizer1.SetNonFlexibleGrowMode( wx.FLEX_GROWMODE_SPECIFIED )

		self.m_staticText6 = wx.StaticText( self.m_custom, wx.ID_ANY, u"Username", wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText6.Wrap( -1 )

		fgSizer1.Add( self.m_staticText6, 0, wx.ALIGN_CENTER|wx.ALL, 5 )

		self.m_username = wx.TextCtrl( self.m_custom, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_username.SetMinSize( wx.Size( 200,-1 ) )

		fgSizer1.Add( self.m_username, 0, wx.ALL, 5 )

		self.m_staticText5 = wx.StaticText( self.m_custom, wx.ID_ANY, u"Hostname", wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText5.Wrap( -1 )

		fgSizer1.Add( self.m_staticText5, 0, wx.ALIGN_CENTER|wx.ALIGN_LEFT|wx.ALL, 5 )

		self.m_hostname = wx.TextCtrl( self.m_custom, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_hostname.SetMinSize( wx.Size( 200,-1 ) )

		fgSizer1.Add( self.m_hostname, 0, wx.ALL, 5 )

		self.m_staticText7 = wx.StaticText( self.m_custom, wx.ID_ANY, u"Desktop Environment", wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText7.Wrap( -1 )

		fgSizer1.Add( self.m_staticText7, 0, wx.ALIGN_CENTER|wx.ALL, 5 )

		m_DEChoices = [ u"XFCE", u"GNOME", u"KDE", u"LXDE", u"LXQt", u"None", u"Auto" ]
		self.m_DE = wx.ComboBox( self.m_custom, wx.ID_ANY, u"Auto", wx.DefaultPosition, wx.DefaultSize, m_DEChoices, 0 )
		self.m_DE.SetSelection( 6 )
		self.m_DE.SetMinSize( wx.Size( 100,-1 ) )

		fgSizer1.Add( self.m_DE, 0, wx.ALIGN_CENTER|wx.ALL, 5 )


		bSizer8.Add( fgSizer1, 1, wx.ALIGN_CENTER|wx.ALL, 5 )

		bSizer9 = wx.BoxSizer( wx.HORIZONTAL )


		bSizer9.Add( ( 0, 0), 1, wx.EXPAND, 5 )

		self.m_connect_c = wx.Button( self.m_custom, wx.ID_ANY, u"Connect", wx.DefaultPosition, wx.DefaultSize, 0 )
		bSizer9.Add( self.m_connect_c, 0, wx.ALIGN_CENTER|wx.ALL, 5 )


		bSizer9.Add( ( 0, 0), 1, wx.EXPAND, 5 )

		self.m_add_new = wx.Button( self.m_custom, wx.ID_ANY, u"Add as Profile", wx.DefaultPosition, wx.DefaultSize, 0 )
		bSizer9.Add( self.m_add_new, 0, wx.ALIGN_CENTER|wx.ALL, 5 )


		bSizer9.Add( ( 0, 0), 1, wx.EXPAND, 5 )


		bSizer8.Add( bSizer9, 1, wx.EXPAND, 5 )


		self.m_custom.SetSizer( bSizer8 )
		self.m_custom.Layout()
		bSizer8.Fit( self.m_custom )
		self.m_notebook1.AddPage( self.m_custom, u"Custom Connection", False )
		self.m_settings = wx.Panel( self.m_notebook1, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, wx.TAB_TRAVERSAL )
		bSizer81 = wx.BoxSizer( wx.VERTICAL )


		bSizer81.Add( ( 0, 0), 1, wx.EXPAND, 5 )

		self.m_staticText151 = wx.StaticText( self.m_settings, wx.ID_ANY, u"Here you can change settings. They will automatically be saved and applied.", wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText151.Wrap( -1 )

		bSizer81.Add( self.m_staticText151, 0, wx.ALIGN_CENTER|wx.ALL, 5 )


		bSizer81.Add( ( 0, 0), 1, wx.EXPAND, 5 )

		fgSizer11 = wx.FlexGridSizer( 0, 2, 0, 0 )
		fgSizer11.SetFlexibleDirection( wx.BOTH )
		fgSizer11.SetNonFlexibleGrowMode( wx.FLEX_GROWMODE_SPECIFIED )

		self.m_staticText61 = wx.StaticText( self.m_settings, wx.ID_ANY, u"Console appearance", wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText61.Wrap( -1 )

		fgSizer11.Add( self.m_staticText61, 0, wx.ALIGN_CENTER|wx.ALL, 5 )

		self.m_cons = wx.Button( self.m_settings, wx.ID_ANY, u"Edit...", wx.DefaultPosition, wx.DefaultSize, 0 )
		fgSizer11.Add( self.m_cons, 0, wx.ALIGN_CENTER|wx.ALL, 5 )

		self.m_staticText71 = wx.StaticText( self.m_settings, wx.ID_ANY, u"Desktop Environment", wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText71.Wrap( -1 )

		fgSizer11.Add( self.m_staticText71, 0, wx.ALIGN_CENTER|wx.ALL, 5 )

		self.m_de_settings = wx.Button( self.m_settings, wx.ID_ANY, u"Edit...", wx.DefaultPosition, wx.DefaultSize, 0 )
		fgSizer11.Add( self.m_de_settings, 0, wx.ALIGN_CENTER|wx.ALL, 5 )

		self.m_staticText83494 = wx.StaticText( self.m_settings, wx.ID_ANY, u"Miscellaneous", wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText83494.Wrap( -1 )

		fgSizer11.Add( self.m_staticText83494, 0, wx.ALIGN_CENTER|wx.ALIGN_LEFT|wx.ALL, 5 )

		self.m_sett_misc = wx.Button( self.m_settings, wx.ID_ANY, u"Edit...", wx.DefaultPosition, wx.DefaultSize, 0 )
		fgSizer11.Add( self.m_sett_misc, 0, wx.ALL, 5 )


		bSizer81.Add( fgSizer11, 1, wx.ALIGN_CENTER_HORIZONTAL|wx.ALL, 5 )


		bSizer81.Add( ( 0, 0), 1, wx.EXPAND, 5 )


		self.m_settings.SetSizer( bSizer81 )
		self.m_settings.Layout()
		bSizer81.Fit( self.m_settings )
		self.m_notebook1.AddPage( self.m_settings, u"Settings", False )

		bSizer1.Add( self.m_notebook1, 1, wx.EXPAND |wx.ALL, 5 )


		self.SetSizer( bSizer1 )
		self.Layout()

		self.Centre( wx.BOTH )

		# Connect Events
		self.Bind( wx.EVT_CLOSE, self.close )
		self.m_button_connect.Bind( wx.EVT_BUTTON, self.connect )
		self.m_button_add.Bind( wx.EVT_BUTTON, self.add )
		self.m_button_rem.Bind( wx.EVT_BUTTON, self.remove )
		self.m_button_mod.Bind( wx.EVT_BUTTON, self.modify )
		self.m_connect_c.Bind( wx.EVT_BUTTON, self.connect_c )
		self.m_add_new.Bind( wx.EVT_BUTTON, self.add_c )
		self.m_cons.Bind( wx.EVT_BUTTON, self.cons )
		self.m_de_settings.Bind( wx.EVT_BUTTON, self.de_settings )
		self.m_sett_misc.Bind( wx.EVT_BUTTON, self.sett_misc )

	def __del__( self ):
		pass


	# Virtual event handlers, override them in your derived class
	def close( self, event ):
		event.Skip()

	def connect( self, event ):
		event.Skip()

	def add( self, event ):
		event.Skip()

	def remove( self, event ):
		event.Skip()

	def modify( self, event ):
		event.Skip()

	def connect_c( self, event ):
		event.Skip()

	def add_c( self, event ):
		event.Skip()

	def cons( self, event ):
		event.Skip()

	def de_settings( self, event ):
		event.Skip()

	def sett_misc( self, event ):
		event.Skip()


###########################################################################
## Class console_settings
###########################################################################

class console_settings ( wx.Dialog ):

	def __init__( self, parent ):
		wx.Dialog.__init__ ( self, parent, id = wx.ID_ANY, title = u"Console Settings", pos = wx.DefaultPosition, size = wx.DefaultSize, style = wx.DEFAULT_DIALOG_STYLE )

		self.SetSizeHints( wx.DefaultSize, wx.DefaultSize )

		bSizer8 = wx.BoxSizer( wx.VERTICAL )

		fgSizer3 = wx.FlexGridSizer( 0, 1, 0, 0 )
		fgSizer3.SetFlexibleDirection( wx.BOTH )
		fgSizer3.SetNonFlexibleGrowMode( wx.FLEX_GROWMODE_SPECIFIED )

		bSizer15 = wx.BoxSizer( wx.HORIZONTAL )

		fgSizer11 = wx.FlexGridSizer( 0, 2, 0, 0 )
		fgSizer11.SetFlexibleDirection( wx.BOTH )
		fgSizer11.SetNonFlexibleGrowMode( wx.FLEX_GROWMODE_SPECIFIED )

		self.m_staticText24 = wx.StaticText( self, wx.ID_ANY, u"Text colour", wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText24.Wrap( -1 )

		fgSizer11.Add( self.m_staticText24, 0, wx.ALIGN_CENTER|wx.ALL, 5 )

		self.m_text_colour_picker = wx.ColourPickerCtrl( self, wx.ID_ANY, wx.Colour( 255, 255, 255 ), wx.DefaultPosition, wx.DefaultSize, wx.CLRP_DEFAULT_STYLE )
		fgSizer11.Add( self.m_text_colour_picker, 0, wx.ALIGN_CENTER|wx.ALL, 5 )

		self.m_staticText25 = wx.StaticText( self, wx.ID_ANY, u"Background", wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText25.Wrap( -1 )

		fgSizer11.Add( self.m_staticText25, 0, wx.ALIGN_CENTER|wx.ALL, 5 )

		self.m_back_colour_picker = wx.ColourPickerCtrl( self, wx.ID_ANY, wx.BLACK, wx.DefaultPosition, wx.DefaultSize, wx.CLRP_DEFAULT_STYLE )
		fgSizer11.Add( self.m_back_colour_picker, 0, wx.ALIGN_CENTER|wx.ALL, 5 )

		self.m_staticText26 = wx.StaticText( self, wx.ID_ANY, u"Font", wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText26.Wrap( -1 )

		fgSizer11.Add( self.m_staticText26, 0, wx.ALIGN_CENTER|wx.ALL, 5 )

		self.m_font_picker = wx.FontPickerCtrl( self, wx.ID_ANY, wx.NullFont, wx.DefaultPosition, wx.DefaultSize, wx.FNTP_DEFAULT_STYLE )
		self.m_font_picker.SetMaxPointSize( 100 )
		fgSizer11.Add( self.m_font_picker, 0, wx.ALIGN_CENTER|wx.ALL, 5 )


		bSizer15.Add( fgSizer11, 1, wx.ALIGN_CENTER, 5 )

		fgSizer12 = wx.FlexGridSizer( 0, 2, 0, 0 )
		fgSizer12.SetFlexibleDirection( wx.BOTH )
		fgSizer12.SetNonFlexibleGrowMode( wx.FLEX_GROWMODE_SPECIFIED )

		self.m_staticText27 = wx.StaticText( self, wx.ID_ANY, u"Window size", wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText27.Wrap( -1 )

		fgSizer12.Add( self.m_staticText27, 0, wx.ALIGN_CENTER|wx.ALL, 5 )

		self.m_is_fullscreen = wx.CheckBox( self, wx.ID_ANY, u"Fullscreen", wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_is_fullscreen.SetValue(True)
		fgSizer12.Add( self.m_is_fullscreen, 0, wx.ALIGN_CENTER|wx.ALL, 5 )

		self.m_staticText28 = wx.StaticText( self, wx.ID_ANY, u"Width", wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText28.Wrap( -1 )

		fgSizer12.Add( self.m_staticText28, 0, wx.ALIGN_CENTER|wx.ALL, 5 )

		self.m_console_width = wx.SpinCtrl( self, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, wx.SP_ARROW_KEYS, 0, 16384, 1920 )
		fgSizer12.Add( self.m_console_width, 0, wx.ALIGN_CENTER|wx.ALL, 5 )

		self.m_staticText29 = wx.StaticText( self, wx.ID_ANY, u"Height", wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText29.Wrap( -1 )

		fgSizer12.Add( self.m_staticText29, 0, wx.ALIGN_CENTER|wx.ALL, 5 )

		self.m_console_height = wx.SpinCtrl( self, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, wx.SP_ARROW_KEYS, 0, 16384, 1080 )
		fgSizer12.Add( self.m_console_height, 0, wx.ALIGN_CENTER|wx.ALL, 5 )


		bSizer15.Add( fgSizer12, 1, wx.EXPAND, 5 )


		fgSizer3.Add( bSizer15, 1, wx.EXPAND, 5 )

		m_sdbSizer2 = wx.StdDialogButtonSizer()
		self.m_sdbSizer2OK = wx.Button( self, wx.ID_OK )
		m_sdbSizer2.AddButton( self.m_sdbSizer2OK )
		self.m_sdbSizer2Cancel = wx.Button( self, wx.ID_CANCEL )
		m_sdbSizer2.AddButton( self.m_sdbSizer2Cancel )
		m_sdbSizer2.Realize();

		fgSizer3.Add( m_sdbSizer2, 1, wx.ALIGN_CENTER|wx.ALL, 5 )


		bSizer8.Add( fgSizer3, 1, wx.ALL|wx.EXPAND, 5 )


		self.SetSizer( bSizer8 )
		self.Layout()
		bSizer8.Fit( self )

		self.Centre( wx.BOTH )

		# Connect Events
		self.m_is_fullscreen.Bind( wx.EVT_CHECKBOX, self.toggle_fullscreen )
		self.m_sdbSizer2Cancel.Bind( wx.EVT_BUTTON, self.cancel )
		self.m_sdbSizer2OK.Bind( wx.EVT_BUTTON, self.set_profile )

	def __del__( self ):
		pass


	# Virtual event handlers, override them in your derived class
	def toggle_fullscreen( self, event ):
		event.Skip()

	def cancel( self, event ):
		event.Skip()

	def set_profile( self, event ):
		event.Skip()


###########################################################################
## Class de_settings
###########################################################################

class de_settings ( wx.Dialog ):

	def __init__( self, parent ):
		wx.Dialog.__init__ ( self, parent, id = wx.ID_ANY, title = u"Desktop Environment Settings", pos = wx.DefaultPosition, size = wx.Size( -1,-1 ), style = wx.DEFAULT_DIALOG_STYLE )

		self.SetSizeHints( wx.DefaultSize, wx.DefaultSize )

		bSizer8 = wx.BoxSizer( wx.VERTICAL )

		fgSizer3 = wx.FlexGridSizer( 0, 1, 0, 0 )
		fgSizer3.SetFlexibleDirection( wx.BOTH )
		fgSizer3.SetNonFlexibleGrowMode( wx.FLEX_GROWMODE_SPECIFIED )

		self.m_staticText42 = wx.StaticText( self, wx.ID_ANY, u"You can move the desktop environments up or down to indicate the order they should be loaded when the setting is set to 'Auto'.\nYou can also modify the commands that are loaded for each DE and add or remove DEs.", wx.DefaultPosition, wx.DefaultSize, wx.ALIGN_CENTER_HORIZONTAL )
		self.m_staticText42.Wrap( 300 )

		fgSizer3.Add( self.m_staticText42, 0, wx.ALL|wx.EXPAND, 5 )

		self.m_de_list = wx.dataview.DataViewListCtrl( self, wx.ID_ANY, wx.DefaultPosition, wx.Size( -1,150 ), 0 )
		fgSizer3.Add( self.m_de_list, 0, wx.ALL|wx.EXPAND, 5 )

		bSizer20 = wx.BoxSizer( wx.HORIZONTAL )

		self.m_de_new = wx.Button( self, wx.ID_ANY, u"New", wx.DefaultPosition, wx.DefaultSize, 0 )
		bSizer20.Add( self.m_de_new, 0, wx.ALL, 5 )


		bSizer20.Add( ( 0, 0), 1, wx.EXPAND, 5 )

		self.m_de_remove = wx.Button( self, wx.ID_ANY, u"Remove", wx.DefaultPosition, wx.DefaultSize, 0 )
		bSizer20.Add( self.m_de_remove, 0, wx.ALL, 5 )


		fgSizer3.Add( bSizer20, 1, wx.ALL|wx.EXPAND|wx.ALIGN_CENTER_HORIZONTAL, 5 )

		m_sdbSizer2 = wx.StdDialogButtonSizer()
		self.m_sdbSizer2OK = wx.Button( self, wx.ID_OK )
		m_sdbSizer2.AddButton( self.m_sdbSizer2OK )
		self.m_sdbSizer2Cancel = wx.Button( self, wx.ID_CANCEL )
		m_sdbSizer2.AddButton( self.m_sdbSizer2Cancel )
		m_sdbSizer2.Realize();

		fgSizer3.Add( m_sdbSizer2, 1, wx.ALIGN_CENTER|wx.ALL, 5 )


		bSizer8.Add( fgSizer3, 1, wx.ALL|wx.EXPAND, 5 )


		self.SetSizer( bSizer8 )
		self.Layout()
		bSizer8.Fit( self )

		self.Centre( wx.BOTH )

		# Connect Events
		self.m_de_list.Bind( wx.EVT_CHAR, self.process_key )
		self.m_de_list.Bind( wx.dataview.EVT_DATAVIEW_ITEM_BEGIN_DRAG, self.begin_drag, id = wx.ID_ANY )
		self.m_de_list.Bind( wx.dataview.EVT_DATAVIEW_ITEM_DROP, self.end_drag, id = wx.ID_ANY )
		self.m_de_list.Bind( wx.dataview.EVT_DATAVIEW_ITEM_DROP_POSSIBLE, self.drop_p, id = wx.ID_ANY )
		self.m_de_list.Bind( wx.dataview.EVT_DATAVIEW_ITEM_START_EDITING, self.begin_edit, id = wx.ID_ANY )
		self.m_de_list.Bind( wx.EVT_KEY_DOWN, self.process_key )
		self.m_de_new.Bind( wx.EVT_BUTTON, self.new_de )
		self.m_de_remove.Bind( wx.EVT_BUTTON, self.del_de )
		self.m_sdbSizer2Cancel.Bind( wx.EVT_BUTTON, self.cancel )
		self.m_sdbSizer2OK.Bind( wx.EVT_BUTTON, self.set_profile )

	def __del__( self ):
		pass


	# Virtual event handlers, override them in your derived class
	def process_key( self, event ):
		event.Skip()

	def begin_drag( self, event ):
		event.Skip()

	def end_drag( self, event ):
		event.Skip()

	def drop_p( self, event ):
		event.Skip()

	def begin_edit( self, event ):
		event.Skip()


	def new_de( self, event ):
		event.Skip()

	def del_de( self, event ):
		event.Skip()

	def cancel( self, event ):
		event.Skip()

	def set_profile( self, event ):
		event.Skip()


###########################################################################
## Class profile_manager
###########################################################################

class profile_manager ( wx.Dialog ):

	def __init__( self, parent ):
		wx.Dialog.__init__ ( self, parent, id = wx.ID_ANY, title = u"Manage Profile...", pos = wx.DefaultPosition, size = wx.DefaultSize, style = wx.DEFAULT_DIALOG_STYLE )

		self.SetSizeHints( wx.DefaultSize, wx.DefaultSize )

		bSizer8 = wx.BoxSizer( wx.VERTICAL )

		fgSizer3 = wx.FlexGridSizer( 0, 1, 0, 0 )
		fgSizer3.SetFlexibleDirection( wx.BOTH )
		fgSizer3.SetNonFlexibleGrowMode( wx.FLEX_GROWMODE_SPECIFIED )

		fgSizer1 = wx.FlexGridSizer( 0, 2, 0, 0 )
		fgSizer1.SetFlexibleDirection( wx.BOTH )
		fgSizer1.SetNonFlexibleGrowMode( wx.FLEX_GROWMODE_SPECIFIED )

		self.m_staticText8 = wx.StaticText( self, wx.ID_ANY, u"Profile name", wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText8.Wrap( -1 )

		fgSizer1.Add( self.m_staticText8, 0, wx.ALIGN_CENTER|wx.ALL, 5 )

		self.m_profilename = wx.TextCtrl( self, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_profilename.SetMinSize( wx.Size( 200,-1 ) )

		fgSizer1.Add( self.m_profilename, 0, wx.ALL, 5 )

		self.m_staticText6 = wx.StaticText( self, wx.ID_ANY, u"Username", wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText6.Wrap( -1 )

		fgSizer1.Add( self.m_staticText6, 0, wx.ALIGN_CENTER|wx.ALL, 5 )

		self.m_username = wx.TextCtrl( self, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_username.SetMinSize( wx.Size( 200,-1 ) )

		fgSizer1.Add( self.m_username, 0, wx.ALL, 5 )

		self.m_staticText5 = wx.StaticText( self, wx.ID_ANY, u"Hostname", wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText5.Wrap( -1 )

		fgSizer1.Add( self.m_staticText5, 0, wx.ALIGN_CENTER|wx.ALIGN_LEFT|wx.ALL, 5 )

		self.m_hostname = wx.TextCtrl( self, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_hostname.SetMinSize( wx.Size( 200,-1 ) )

		fgSizer1.Add( self.m_hostname, 0, wx.ALL, 5 )

		self.m_staticText7 = wx.StaticText( self, wx.ID_ANY, u"Desktop Environment", wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText7.Wrap( -1 )

		fgSizer1.Add( self.m_staticText7, 0, wx.ALIGN_CENTER|wx.ALL, 5 )

		m_DEChoices = [ u"XFCE", u"GNOME", u"KDE", u"LXDE", u"LXQt", u"None", u"Auto" ]
		self.m_DE = wx.ComboBox( self, wx.ID_ANY, u"Auto", wx.DefaultPosition, wx.DefaultSize, m_DEChoices, 0 )
		self.m_DE.SetSelection( 6 )
		self.m_DE.SetMinSize( wx.Size( 100,-1 ) )

		fgSizer1.Add( self.m_DE, 0, wx.ALIGN_CENTER|wx.ALL, 5 )


		fgSizer3.Add( fgSizer1, 1, wx.ALL|wx.EXPAND, 5 )

		m_sdbSizer2 = wx.StdDialogButtonSizer()
		self.m_sdbSizer2OK = wx.Button( self, wx.ID_OK )
		m_sdbSizer2.AddButton( self.m_sdbSizer2OK )
		self.m_sdbSizer2Cancel = wx.Button( self, wx.ID_CANCEL )
		m_sdbSizer2.AddButton( self.m_sdbSizer2Cancel )
		m_sdbSizer2.Realize();

		fgSizer3.Add( m_sdbSizer2, 1, wx.ALIGN_CENTER|wx.ALL, 5 )


		bSizer8.Add( fgSizer3, 1, wx.ALL|wx.EXPAND, 5 )


		self.SetSizer( bSizer8 )
		self.Layout()
		bSizer8.Fit( self )

		self.Centre( wx.BOTH )

		# Connect Events
		self.m_sdbSizer2Cancel.Bind( wx.EVT_BUTTON, self.cancel )
		self.m_sdbSizer2OK.Bind( wx.EVT_BUTTON, self.set_profile )

	def __del__( self ):
		pass


	# Virtual event handlers, override them in your derived class
	def cancel( self, event ):
		event.Skip()

	def set_profile( self, event ):
		event.Skip()


###########################################################################
## Class get_password
###########################################################################

class get_password ( wx.Dialog ):

	def __init__( self, parent ):
		wx.Dialog.__init__ ( self, parent, id = wx.ID_ANY, title = u"Enter Password", pos = wx.DefaultPosition, size = wx.DefaultSize, style = wx.DEFAULT_DIALOG_STYLE )

		self.SetSizeHints( wx.DefaultSize, wx.DefaultSize )

		bSizer8 = wx.BoxSizer( wx.VERTICAL )

		fgSizer3 = wx.FlexGridSizer( 0, 1, 0, 0 )
		fgSizer3.SetFlexibleDirection( wx.BOTH )
		fgSizer3.SetNonFlexibleGrowMode( wx.FLEX_GROWMODE_SPECIFIED )

		self.m_staticText24 = wx.StaticText( self, wx.ID_ANY, u"Your settings and profile are encrypted. \nThis is so malicious programs cannot alter them to steal your credentials. \nPlease enter your password into the space below.", wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText24.Wrap( 300 )

		fgSizer3.Add( self.m_staticText24, 0, wx.ALIGN_CENTER|wx.ALL, 5 )

		self.m_textCtrl16 = wx.TextCtrl( self, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.Size( 200,-1 ), wx.TE_PASSWORD )
		fgSizer3.Add( self.m_textCtrl16, 0, wx.ALIGN_CENTER|wx.ALL, 5 )

		m_sdbSizer2 = wx.StdDialogButtonSizer()
		self.m_sdbSizer2OK = wx.Button( self, wx.ID_OK )
		m_sdbSizer2.AddButton( self.m_sdbSizer2OK )
		self.m_sdbSizer2Cancel = wx.Button( self, wx.ID_CANCEL )
		m_sdbSizer2.AddButton( self.m_sdbSizer2Cancel )
		m_sdbSizer2.Realize();

		fgSizer3.Add( m_sdbSizer2, 1, wx.ALIGN_CENTER|wx.ALL, 5 )


		bSizer8.Add( fgSizer3, 1, wx.ALL|wx.EXPAND, 5 )


		self.SetSizer( bSizer8 )
		self.Layout()
		bSizer8.Fit( self )

		self.Centre( wx.BOTH )

		# Connect Events
		self.m_sdbSizer2Cancel.Bind( wx.EVT_BUTTON, self.cancel )
		self.m_sdbSizer2OK.Bind( wx.EVT_BUTTON, self.set_profile )

	def __del__( self ):
		pass


	# Virtual event handlers, override them in your derived class
	def cancel( self, event ):
		event.Skip()

	def set_profile( self, event ):
		event.Skip()


