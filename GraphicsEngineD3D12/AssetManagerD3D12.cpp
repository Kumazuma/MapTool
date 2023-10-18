#include "pch.h"
#include "AssetManagerD3D12.h"

AssetManagerD3D12::AssetManagerD3D12()
: m_refCount(1)
, m_device()
, m_pUsedMemory()
, m_pUnusedMemory()
, m_pUsedBufferChunk()
, m_pUnsedBufferChunk()
, m_pBufferList()
, m_pTextureList()
{
	
}

STDMETHODIMPV_(ULONG) AssetManagerD3D12::AddRef()
{
	const ULONG refCount = m_refCount.fetch_add(1);
	assert(refCount != 0);
	return refCount + 1;
}

STDMETHODIMPV_(ULONG) AssetManagerD3D12::Release()
{
	const ULONG refCount = m_refCount.fetch_sub(1);
	if(refCount == 1)
	{
		const bool isFinalized = m_isFinalized.load();
		assert(isFinalized);
		delete this;
	}

	return refCount - 1;
}

STDMETHODIMP AssetManagerD3D12::QueryInterface(const IID& riid, void** ppvObject)
{
	return E_NOTIMPL;
}

STDMETHODIMP AssetManagerD3D12::LoadMeshFromFile(const WCHAR* meshFilePath, IMesh** ppMesh)
{

}

STDMETHODIMP AssetManagerD3D12::LoadTextureFromFile(const WCHAR* meshFilePath, ITexture** ppTexture)
{
}

STDMETHODIMP AssetManagerD3D12::Dispose()
{
	bool expected = false;
	const bool value = true;
	if(m_isFinalized.compare_exchange_strong(expected, value))
	{
		// TODO: Finalize
		return S_OK;
	}

	return E_FAIL;
}
