#pragma once
#include "framework.h"

class GraphicsEngineD3D12: public IGraphicsEngine
{
public:
	GraphicsEngineD3D12();
	~GraphicsEngineD3D12();  // NOLINT(clang-diagnostic-non-virtual-dtor)
	HRESULT Initialize();
	HRESULT QueryInterface(const IID& riid, void** ppvObject) override;
	ULONG AddRef() override;
	ULONG Release() override;
	HRESULT CreateSwapChain(HWND hWnd, UINT width, UINT height) override;
	HRESULT GetAssetManager(IAssetManager** ppAssetManager) override;
	HRESULT Render() override;
	HRESULT CreateStaticMeshRenderer(IMeshRenderer** ppMeshRenderer) override;

private:
	HRESULT InitRenderTargetView(UINT width, UINT height);

private:
	std::atomic_intptr_t m_refCount;
	ComPtr<IDXGIFactory5> m_dxgiFactory;
	ComPtr<IDXGISwapChain4> m_swapChain;
	ComPtr<ID3D12Device> m_device;
	ComPtr<ID3D12CommandQueue> m_queue;
	ComPtr<ID3D12GraphicsCommandList> m_cmdList;
	ComPtr<ID3D12CommandAllocator> m_cmdAllocator;
	ComPtr<ID3D12Fence> m_fence;
	HANDLE m_hEvent;
	uint64_t m_latestFenceValue;
	std::array<ComPtr<ID3D12Resource>, 2> m_backBufferArr;
	ComPtr<ID3D12Resource> m_depthBuffer;
	ComPtr<ID3D12DescriptorHeap> m_descHeapSwapChainRtvs;
	ComPtr<ID3D12DescriptorHeap> m_descHeapDsv;
	uint32_t m_descriptorSizeTable[D3D12_DESCRIPTOR_HEAP_TYPE_NUM_TYPES];

};
