#pragma once
#include <wx/wx.h>

class Model
{
public:
	const wxString& GetProjectFolder() const;
	void SetProjectFolder(const wxString& value);


private:
	wxString m_projectFolder;
	
};
