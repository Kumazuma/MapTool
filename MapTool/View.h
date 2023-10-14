#pragma once
#include <wx/wx.h>

class View: public wxEvtHandler
{
	wxDECLARE_EVENT_TABLE();
public:
	View();

private:
	wxFrame* m_pFrme;
};

