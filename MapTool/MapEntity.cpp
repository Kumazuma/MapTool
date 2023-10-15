#include "MapEntity.h"

MapEntity::MapEntity()
: m_position()
, m_rotation()
, m_scale(1.f)
{

}

const wxString& MapEntity::GetName() const
{
	return m_name;
}

const DirectX::XMFLOAT3& MapEntity::GetPosition() const
{
	return m_position;
}

const DirectX::XMFLOAT3& MapEntity::GetRotation() const
{
	return m_rotation;
}

float MapEntity::GetScale() const
{
	return m_scale;
}

const UUID& MapEntity::GetUuid() const
{
	return m_uuid;
}

void MapEntity::SetUuid(const UUID& val)
{
	m_uuid = val;
}

void MapEntity::SetName(const wxString& val)
{
	m_name = val;
}

void MapEntity::SetPosition(const DirectX::XMFLOAT3& val)
{
	m_position = val;
}

void MapEntity::SetRotation(const DirectX::XMFLOAT3& val)
{
	m_rotation = val;
}

void MapEntity::SetScale(float val)
{
	m_scale = val;
}

bool MapEntity::operator==(const UUID& uuid) const
{
	return m_uuid == uuid;
}
