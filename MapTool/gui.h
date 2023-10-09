///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
class MainPanel;

#include <wx/panel.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/sizer.h>
#include <wx/menu.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/toolbar.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
#include <wx/listbox.h>
#include <wx/propgrid/propgrid.h>
#include <wx/propgrid/manager.h>
#include <wx/propgrid/advprops.h>
#include <wx/aui/aui.h>

///////////////////////////////////////////////////////////////////////////

#define ID_IMPORT_FILE 1000
#define ID_PANEL_LEFT 1001
#define ID_PANEL_BOTTOM 1002
#define ID_PANEL_RIGHT 1003
#define ID_PANEL_VIEW 1004

///////////////////////////////////////////////////////////////////////////////
/// Class MainFrame
///////////////////////////////////////////////////////////////////////////////
class MainFrame : public wxFrame
{
	private:

	protected:
		MainPanel* m_panel5;
		wxMenuBar* m_menubar1;
		wxToolBar* m_toolBar1;
		wxToolBarToolBase* m_tool1;
		wxToolBarToolBase* m_tool2;
		wxStatusBar* m_statusBar1;

	public:

		MainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MainFrame();

};

///////////////////////////////////////////////////////////////////////////////
/// Class MainPanel
///////////////////////////////////////////////////////////////////////////////
class MainPanel : public wxPanel
{
	private:

	protected:
		wxPanel* m_panel1;
		wxListBox* m_listBox1;
		wxPanel* m_panel2;
		wxPanel* m_panel3;
		wxPropertyGridManager* m_propertyGridManager1;
		wxPanel* m_panel4;

	public:

		MainPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 557,404 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		wxAuiManager m_mgr;

		~MainPanel();

};

