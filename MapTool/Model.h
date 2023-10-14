#pragma once
#include <wx/wx.h>
#include <vector>
#include "MapEntity.h"

class Model
{
public:
	const wxString& GetProjectFolder() const;
	void SetProjectFolder(const wxString& value);
	const std::vector<MapEntity>& GetEntityList() const;
	void SetEntityList(const std::vector<MapEntity>& val);
	void SetEntityList(std::vector<MapEntity>&& val);
private:
	wxString m_projectFolder;
	std::vector<MapEntity> m_entityList;
};

inline void Model::SetEntityList(const std::vector<MapEntity>& val)
{
	SetEntityList(std::vector{val});
}
