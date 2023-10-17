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

ULONG AssetManagerD3D12::AddRef()
{
}

ULONG AssetManagerD3D12::Release()
{
}

HRESULT AssetManagerD3D12::QueryInterface(const IID& riid, void** ppvObject)
{
	return E_NOTIMPL;
}

HRESULT AssetManagerD3D12::LoadMeshFromFile(const WCHAR* meshFilePath, IMesh** ppMesh)
{

}

HRESULT AssetManagerD3D12::LoadTextureFromFile(const WCHAR* meshFilePath, ITexture** ppTexture)
{
}


