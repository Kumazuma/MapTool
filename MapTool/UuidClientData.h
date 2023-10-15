#pragma once
#include <wx/wx.h>

class UuidClientData: public wxClientData
{
public:
	UuidClientData(const UUID& uuid);
	const UUID& GetUuid() const;
private:
	UUID m_uuid;
};
