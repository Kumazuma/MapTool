#pragma once

#include <wx/wx.h>
#include <wrl.h>
#include "GraphicsEngine.h"
#include "gui.h"

class MapToolApp: public wxApp
{
public:
	bool OnInit() override;
	int OnExit() override;

private:
	MainFrame* m_pMainFrame;
	Microsoft::WRL::ComPtr<IGraphicsEngine> m_graphicsEngine;
};
