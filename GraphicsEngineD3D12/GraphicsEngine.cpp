#include "pch.h"
#include "GraphicsEngine.h"
#include "GraphicsEngineD3D12.h"

HRESULT CreateGraphicsEngine(IGraphicsEngine** __out ppGraphicsEngine)
{
	HRESULT hr;
	auto pGraphicsEngine = new(std::nothrow) GraphicsEngineD3D12();
	if(pGraphicsEngine == nullptr)
	{
		return E_OUTOFMEMORY;
	}

	hr = pGraphicsEngine->Initialize();
	if(FAILED(hr))
	{
		pGraphicsEngine->Release();
		return E_FAIL;
	}

	*ppGraphicsEngine = pGraphicsEngine;
	return S_OK;
}
