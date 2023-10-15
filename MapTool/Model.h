#pragma once
#include <wx/wx.h>
#include <vector>
#include "MapEntity.h"

class Model
{
public:
	Model();
	const wxString& GetProjectFolder() const;
	void SetProjectFolder(const wxString& value);
	const std::vector<MapEntity>& GetEntityList() const;
	void SetEntityList(const std::vector<MapEntity>& val);
	void SetEntityList(std::vector<MapEntity>&& val);
	const UUID& GetSelectedEntity() const;
	void SetSelectedEntity(const UUID& val);
private:
	wxString m_projectFolder;
	std::vector<MapEntity> m_entityList;
	UUID m_selectedEntity;
};

inline void Model::SetEntityList(const std::vector<MapEntity>& val)
{
	SetEntityList(std::vector{val});
}
