#include "Model.h"

const wxString& Model::GetProjectFolder() const
{
	return m_projectFolder;
}

void Model::SetProjectFolder(const wxString& value)
{
	m_projectFolder = value;
}

void Model::SetEntityList(std::vector<MapEntity>&& val)
{
	m_entityList = std::move(val);
}

const std::vector<MapEntity>& Model::GetEntityList() const
{
	return m_entityList;
}
