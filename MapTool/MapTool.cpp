#include "MapTool.h"

bool MapToolApp::OnInit()
{
	if(!wxApp::OnInit())
	{
		return false;
	}

	m_pMainFrame = new MainFrame(nullptr, wxID_ANY, wxS("MapTool"));
	m_pMainFrame->Show();
	auto pPanel = wxWindow::FindWindowById(ID_PANEL_VIEW, m_pMainFrame);
	CreateGraphicsEngine(&m_graphicsEngine);
	m_graphicsEngine->CreateSwapChain(pPanel->GetHWND(), 1920, 1080);
	m_graphicsEngine->Render();
	return true;
}

int MapToolApp::OnExit()
{
	return wxApp::OnExit();
}

wxIMPLEMENT_APP(MapToolApp);
