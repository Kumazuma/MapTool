#include "MapTool.h"
#include "View.h"
#include <rpc.h>

bool MapToolApp::OnInit()
{
	if(!wxApp::OnInit())
	{
		return false;
	}
	
	UUID newUUid;
	MapEntity entity;

	UuidCreate(&newUUid);

	entity.SetName(wxS("Unnammed"));
	entity.SetUuid(newUUid);

	std::vector<MapEntity> list;
	list.push_back(std::move(entity));
	m_model.SetEntityList(std::move(list));

	m_pView = new View();

	m_pView->Show();

	return true;
}

int MapToolApp::OnExit()
{
	delete m_pView;
	return wxApp::OnExit();
}

Model& MapToolApp::GetModel()
{
	return m_model;
}

wxIMPLEMENT_APP(MapToolApp);
