#pragma once
#include "interface_gen.h"
#include <atomic>

struct GpuMemoryNode
{
	ComPtr<ID3D12Heap> memory;
	std::atomic<long> refCount;
	long top;
	GpuMemoryNode* pNext;
};

struct GpuBufferChunk
{
	GpuMemoryNode* chunk;
	ComPtr<ID3D12Resource> resource;
	std::atomic<long> refCount;
	long top;
	long size;
	GpuBufferChunk* pNext;
};

struct GpuBufferNode
{
	GpuBufferChunk* chunk;
	long offset;
	long size;
	GpuBufferNode* pNext;
};

struct GpuTextureNode
{
	GpuMemoryNode* chunk;
	ComPtr<ID3D12Resource> resource;
	std::atomic<long> refCount;
	long size;
	GpuTextureNode* pNext;
};

class AssetManagerD3D12: public IAssetManager
{
public:
	AssetManagerD3D12();
	STDMETHOD_(ULONG, AddRef)() override;
	STDMETHOD_(ULONG, Release)() override;
	STDMETHOD(QueryInterface)(REFIID riid, /* [iid_is][out] */ _COM_Outptr_ void __RPC_FAR *__RPC_FAR *ppvObject) override;
	STDMETHOD(LoadMeshFromFile)(/* [in] */ const WCHAR *meshFilePath, /* [out] */ IMesh **ppMesh) override;
	STDMETHOD(LoadTextureFromFile)(/* [in] */ const WCHAR *meshFilePath, /* [out] */ ITexture **ppTexture) override;
	STDMETHOD(Dispose)();
private:
	std::atomic_bool m_isFinalized;
	std::atomic_ulong m_refCount;
	ComPtr<ID3D12Device> m_device;
	GpuMemoryNode* m_pUsedMemory;
	GpuMemoryNode* m_pUnusedMemory;
	GpuBufferChunk* m_pUsedBufferChunk;
	GpuBufferChunk* m_pUnsedBufferChunk;
	GpuBufferNode* m_pBufferList;
	GpuTextureNode* m_pTextureList;
};
