#pragma once
#include <wx/propgrid/property.h>
#include <wx/propgrid/props.h>
#include <DirectXMath.h>

using Float3 = DirectX::XMFLOAT3;
class Float3PGProperty
	: public wxPGProperty
{
public:
	Float3PGProperty(const wxString& text, const wxString& name, const Float3& value = {});
	wxString ValueToString(wxVariant& value, int argFlags) const override;
	wxString GetValueAsString(int argFlags) const override;
	wxVariant ChildChanged(wxVariant& thisValue, int childIndex, wxVariant& childValue) const override;
	const wxPGEditor* DoGetEditorClass() const override;
	bool StringToValue(wxVariant& variant, const wxString& text, int argFlags) const override;
	void OnSetValue() override;
};


WX_PG_DECLARE_VARIANT_DATA(Float3);