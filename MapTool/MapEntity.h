#pragma once
#include <wx/wx.h>
#include <DirectXMath.h>

class MapEntity
{
public:
	MapEntity();
	const wxString& GetName() const;
	const DirectX::XMFLOAT3& GetPosition() const;
	const DirectX::XMFLOAT3& GetRotation() const;
	float GetScale() const;
	const UUID& GetUuid() const;

	void SetUuid(const UUID& val);
	void SetName(const wxString& val);
	void SetPosition(const DirectX::XMFLOAT3& val);
	void SetRotation(const DirectX::XMFLOAT3& val);
	void SetScale(float val);
	bool operator == (const UUID& uuid) const;
private:
	UUID m_uuid;
	wxString m_name;
	DirectX::XMFLOAT3 m_position;
	DirectX::XMFLOAT3 m_rotation;
	float m_scale;
};
