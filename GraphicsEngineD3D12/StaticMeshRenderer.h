#pragma once
#include "interface_gen.h"
#include <DirectXMath.h>
#include <atomic>

class StaticMeshRenderer: public IMeshRenderer
{
public:
	StaticMeshRenderer();
	HRESULT QueryInterface(const IID& riid, void** ppvObject) override;
	ULONG AddRef() override;
	ULONG Release() override;
	HRESULT GetMesh(IMesh** pMesh) override;
	HRESULT SetMesh(IMesh* pMesh) override;
	UINT GetNumOfMaterial() override;
	HRESULT SetMaterial(UINT materialId, ITexture* pTexture) override;
	HRESULT GetMaterial(UINT materialId, ITexture** ppTexture) override;
	HRESULT SetWorldMatrix(PVOID pMatrix) override;
	HRESULT Realize() override;

private:
	std::atomic_ulong m_refCount;
	DirectX::XMFLOAT4X4 m_worldMatrix;

};
