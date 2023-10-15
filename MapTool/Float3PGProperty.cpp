#include "Float3PGProperty.h"

WX_PG_IMPLEMENT_VARIANT_DATA_DUMMY_EQ(Float3);

Float3PGProperty::Float3PGProperty(const wxString& text, const wxString& name, const Float3& value)
	: wxPGProperty(text, name)
{
	AddPrivateChild(new wxFloatProperty(wxS("x"), wxS("x"), value.x));
	AddPrivateChild(new wxFloatProperty(wxS("y"), wxS("y"), value.y));
	AddPrivateChild(new wxFloatProperty(wxS("z"), wxS("z"), value.z));
	m_value << value;
}

wxString Float3PGProperty::ValueToString(wxVariant& value, int argFlags) const
{
	wxString text;
	const DirectX::XMFLOAT3& float3 = Float3RefFromVariant(m_value);
	text.Printf(wxS("{x: %f, y: %f, z: %f"), float3.x, float3.y, float3.z);
	return text;
}

wxString Float3PGProperty::GetValueAsString(int argFlags) const
{
	wxString text;
	const DirectX::XMFLOAT3& float3 = Float3RefFromVariant(m_value);
	text.Printf(wxS("{x: %f, y: %f, z: %f"), float3.x, float3.y, float3.z);
	return text;
}

wxVariant Float3PGProperty::ChildChanged(wxVariant& thisValue, int childIndex, wxVariant& childValue) const
{
	DirectX::XMFLOAT3& value = Float3RefFromVariant(thisValue);
	double real = childValue.GetDouble();
	switch(childIndex)
	{
	case 0:
		value.x = real;
		break;

	case 1:
		value.y = real;
		break;

	case 2:
		value.z = real;
		break;
	}


	return thisValue;
}

const wxPGEditor* Float3PGProperty::DoGetEditorClass() const
{
	return wxPGEditor_TextCtrl;
}

bool Float3PGProperty::StringToValue(wxVariant& variant, const wxString& text, int argFlags) const
{
	return false;
}

void Float3PGProperty::OnSetValue()
{
	if(!m_value.IsType(wxS("Float3")))
		return;

	const DirectX::XMFLOAT3& value = Float3RefFromVariant(m_value);
	GetPropertyByName(wxS("x"))->SetValue(value.x);
	GetPropertyByName(wxS("y"))->SetValue(value.y);
	GetPropertyByName(wxS("z"))->SetValue(value.z);

}
