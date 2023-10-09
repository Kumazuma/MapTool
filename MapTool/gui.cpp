///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui.h"

///////////////////////////////////////////////////////////////////////////

MainFrame::MainFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	m_panel5 = new MainPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizer3->Add( m_panel5, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer3 );
	this->Layout();
	m_menubar1 = new wxMenuBar( 0 );
	this->SetMenuBar( m_menubar1 );

	m_toolBar1 = this->CreateToolBar( wxTB_HORIZONTAL, wxID_ANY );
	m_tool1 = m_toolBar1->AddTool( ID_IMPORT_FILE, wxT("tool"), wxArtProvider::GetBitmap( wxART_FILE_OPEN, wxART_TOOLBAR ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	m_tool2 = m_toolBar1->AddTool( wxID_OPEN, wxT("tool"), wxArtProvider::GetBitmap( wxART_FOLDER_OPEN, wxART_TOOLBAR ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	m_toolBar1->Realize();

	m_statusBar1 = this->CreateStatusBar( 1, wxSTB_SIZEGRIP, wxID_ANY );

	this->Centre( wxBOTH );
}

MainFrame::~MainFrame()
{
}

MainPanel::MainPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	m_mgr.SetManagedWindow(this);
	m_mgr.SetFlags(wxAUI_MGR_ALLOW_ACTIVE_PANE|wxAUI_MGR_LIVE_RESIZE);

	m_panel1 = new wxPanel( this, ID_PANEL_LEFT, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_mgr.AddPane( m_panel1, wxAuiPaneInfo() .Left() .Caption( wxT("Tree") ).CloseButton( false ).Dock().Resizable().FloatingSize( wxDefaultSize ).Floatable( false ).MinSize( wxSize( 100,100 ) ) );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	m_listBox1 = new wxListBox( m_panel1, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	bSizer2->Add( m_listBox1, 1, wxALL|wxEXPAND, 5 );


	m_panel1->SetSizer( bSizer2 );
	m_panel1->Layout();
	bSizer2->Fit( m_panel1 );
	m_panel2 = new wxPanel( this, ID_PANEL_BOTTOM, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_mgr.AddPane( m_panel2, wxAuiPaneInfo() .Bottom() .CloseButton( false ).Dock().Resizable().FloatingSize( wxDefaultSize ).Floatable( false ).MinSize( wxSize( 100,100 ) ) );

	m_panel3 = new wxPanel( this, ID_PANEL_RIGHT, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_mgr.AddPane( m_panel3, wxAuiPaneInfo() .Right() .Caption( wxT("Properties") ).CloseButton( false ).Dock().Resizable().FloatingSize( wxDefaultSize ).MinSize( wxSize( 100,100 ) ) );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	m_propertyGridManager1 = new wxPropertyGridManager(m_panel3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxPGMAN_DEFAULT_STYLE);
	m_propertyGridManager1->SetExtraStyle( wxPG_EX_MODE_BUTTONS );
	bSizer1->Add( m_propertyGridManager1, 1, wxALL|wxEXPAND, 5 );


	m_panel3->SetSizer( bSizer1 );
	m_panel3->Layout();
	bSizer1->Fit( m_panel3 );
	m_panel4 = new wxPanel( this, ID_PANEL_VIEW, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_mgr.AddPane( m_panel4, wxAuiPaneInfo() .Center() .CaptionVisible( false ).CloseButton( false ).Dock().Resizable().FloatingSize( wxDefaultSize ).BottomDockable( false ).TopDockable( false ).LeftDockable( false ).RightDockable( false ).Floatable( false ).CentrePane() );


	m_mgr.Update();
}

MainPanel::~MainPanel()
{
	m_mgr.UnInit();

}
