#include "UuidClientData.h"

UuidClientData::UuidClientData(const UUID& uuid)
: wxClientData()
, m_uuid(uuid)
{
}

const UUID& UuidClientData::GetUuid() const
{
	return m_uuid;
}
