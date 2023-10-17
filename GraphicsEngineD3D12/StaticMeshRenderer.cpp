#include "pch.h"
#include "StaticMeshRenderer.h"

StaticMeshRenderer::StaticMeshRenderer()
: m_worldMatrix()
, m_refCount(1)
{
	XMStoreFloat4x4(&m_worldMatrix, XMMatrixIdentity());
}

HRESULT StaticMeshRenderer::QueryInterface(const IID& riid, void** ppvObject)
{
	return E_NOTIMPL;
}

ULONG StaticMeshRenderer::AddRef()
{
	ULONG refCount = m_refCount.fetch_add(1) + 1;
	assert(refCount > 1);
	return refCount;
}

ULONG StaticMeshRenderer::Release()
{
	const ULONG refCount = m_refCount.fetch_sub(1);
	const ULONG ret = refCount - 1;
	assert(refCount > ret);
	if(refCount == 1)
	{
		delete this;
	}

	return ret;
}

HRESULT StaticMeshRenderer::GetMesh(IMesh** pMesh)
{
}

HRESULT StaticMeshRenderer::SetMesh(IMesh* pMesh)
{

}

UINT StaticMeshRenderer::GetNumOfMaterial()
{
}

HRESULT StaticMeshRenderer::SetMaterial(UINT materialId, ITexture* pTexture)
{
}

HRESULT StaticMeshRenderer::GetMaterial(UINT materialId, ITexture** ppTexture)
{
}

HRESULT StaticMeshRenderer::SetWorldMatrix(PVOID pMatrix)
{
}

HRESULT StaticMeshRenderer::Realize()
{
}
