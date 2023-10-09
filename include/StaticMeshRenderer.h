#pragma once
#include "interface_gen.h"

class StaticMeshRenderer: public IStaticMeshRenderer
{
public:
	HRESULT STDMETHODCALLTYPE GetMesh( 
	/* [out] */ IMeshFile **pMesh);

	HRESULT STDMETHODCALLTYPE SetMesh( 
	/* [in] */ IMeshFile *pMesh);

	HRESULT STDMETHODCALLTYPE GetNumOfMaterial( 
	/* [out] */ UINT *pNumOfMaterial);

	HRESULT STDMETHODCALLTYPE SetMaterial( 
	/* [in] */ UINT materialId,
	/* [in] */ ITextureFile *pTexture);

	HRESULT STDMETHODCALLTYPE GetMaterial( 
	/* [in] */ UINT materialId,
	/* [out] */ ITextureFile **ppTexture);

	HRESULT STDMETHODCALLTYPE Realize( void);
};