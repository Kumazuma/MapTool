#include "Model.h"

Model::Model()
: m_selectedEntity()
{
}

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

const UUID& Model::GetSelectedEntity() const
{
	return m_selectedEntity;
}

void Model::SetSelectedEntity(const UUID& val)
{
	m_selectedEntity = val;
}

const std::vector<MapEntity>& Model::GetEntityList() const
{
	return m_entityList;
}
