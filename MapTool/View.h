#pragma once
#include <wx/wx.h>
#include <wrl.h>
#include "GraphicsEngine.h"

class wxPropertyGridEvent;
class View: public wxEvtHandler
{
	wxDECLARE_EVENT_TABLE();
public:
	View();
	void Show();

protected:
	void OnPropertyChanged(wxPropertyGridEvent& event);
	void OnClosedWindow(wxCloseEvent& event);
	void OnSelectEntityList(wxCommandEvent& event);
	void UpdateUI(const wxString& propertyName);
	void ReloadModel();
	wxWindow* FindWindowById(wxWindowID wid) const;
private:
	Microsoft::WRL::ComPtr<IGraphicsEngine> m_graphicsEngine;
	wxFrame* m_pFrame;
};

