#pragma once

#include <wx/wx.h>
#include "Model.h"

class View;
class MapToolApp: public wxApp
{
public:
	bool OnInit() override;
	int OnExit() override;
	Model& GetModel();
private:
	View* m_pView;
	Model m_model;
};

wxDECLARE_APP(MapToolApp);