#include "View.h"
#include "gui.h"
#include "MapTool.h"
#include "UuidClientData.h"
#include "Float3PGProperty.h"
#include <wx/propgrid/property.h>
#include <wx/propgrid/propgrid.h>

View::View()
	: m_pFrame() {
	
}

void View::Show()
{
	m_pFrame = new MainFrame(nullptr, wxID_ANY, wxS("MapTool"));
	m_pFrame->PushEventHandler(this);

	m_pFrame->Show();
	auto pPanel = wxWindow::FindWindowById(ID_PANEL_VIEW, m_pFrame);
	CreateGraphicsEngine(&m_graphicsEngine);
	m_graphicsEngine->CreateSwapChain(pPanel->GetHWND(), 1920, 1080);
	m_graphicsEngine->Render();
	ReloadModel();
}

void View::OnPropertyChanged(wxPropertyGridEvent& event)
{

}

void View::OnClosedWindow(wxCloseEvent& event)
{
	m_pFrame->PopEventHandler();
	m_pFrame->Close();
	event.Skip();
}

void View::OnSelectEntityList(wxCommandEvent& event)
{
	wxListBox* pListBox = wxStaticCast(event.GetEventObject(), wxListBox);
	MapToolApp& app = wxGetApp();
	Model& model = app.GetModel();
	UUID oldSelectedEntity = model.GetSelectedEntity();
	const int selection = event.GetSelection();
	UUID selectedEntity{};
	if(selection != -1)
	{
		UuidClientData* clientData = static_cast<UuidClientData*>(pListBox->GetClientObject(selection));
		selectedEntity = clientData->GetUuid();
	}

	model.SetSelectedEntity(selectedEntity);
	if(oldSelectedEntity != selectedEntity)
	{
		UpdateUI(wxS("SelectedEntity"));
	}
}

void View::UpdateUI(const wxString& propertyName)
{
	MapToolApp& app = wxGetApp();
	const Model& model = app.GetModel();
	if(propertyName == wxS("SelectedEntity"))
	{
		const UUID& selectedEntity = model.GetSelectedEntity();
		const auto& list = model.GetEntityList();
		auto it = std::find(list.begin(), list.end(), selectedEntity);
		const MapEntity& entity = *it;
		wxPropertyGridManager* pgrManager;
		pgrManager = wxStaticCast(FindWindowById(ID_MAP_EDITOR_PROP_GRID), wxPropertyGridManager);
		wxPropertyGridPage* page = pgrManager->GetPage(0);
		page->Clear();
		page->Append(new wxStringProperty(wxS("name"), wxS("name"), entity.GetName()));
		page->Append(new Float3PGProperty(wxS("position"), wxS("position"), entity.GetPosition()));
		page->Append(new Float3PGProperty(wxS("rotation"), wxS("rotation"), entity.GetRotation()));
		page->Append(new wxFloatProperty(wxS("scale"), wxS("scale"), entity.GetScale()));
	}
}

void View::ReloadModel()
{
	auto& app = wxGetApp();
	const auto& model = app.GetModel();
	// Update list
	auto& entityList = model.GetEntityList();
	wxListBox* pListBox = wxStaticCast(FindWindowById(ID_MAP_EDITOR_ENTITY_LIST), wxListBox);
	pListBox->Clear();
	for(auto& it : entityList)
	{
		pListBox->Append(it.GetName(), new UuidClientData(it.GetUuid()));
	}
}

wxWindow* View::FindWindowById(wxWindowID wid) const
{
	return wxWindow::FindWindowById(wid, m_pFrame);
}

BEGIN_EVENT_TABLE(View, wxEvtHandler)
	EVT_PG_CHANGED(ID_MAP_EDITOR_PROP_GRID, View::OnPropertyChanged)
	EVT_CLOSE(View::OnClosedWindow)
	EVT_LISTBOX(ID_MAP_EDITOR_ENTITY_LIST, View::OnSelectEntityList)
END_EVENT_TABLE();
