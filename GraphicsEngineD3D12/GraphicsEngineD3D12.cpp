#include "pch.h"
#include "GraphicsEngineD3D12.h"
#include <algorithm>
#include <cassert>

#pragma comment(lib, "d3d12.lib")
#pragma comment(lib, "dxgi.lib")

#define DESCRIPTOR_RTV_SIZE m_descriptorSizeTable[D3D12_DESCRIPTOR_HEAP_TYPE_RTV];
#define DESCRIPTOR_DSV_SIZE m_descriptorSizeTable[D3D12_DESCRIPTOR_HEAP_TYPE_DSV];
#define DESCRIPTOR_SRV_SIZE m_descriptorSizeTable[D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV];
#define DESCRIPTOR_SAMPLER_SIZE m_descriptorSizeTable[D3D12_DESCRIPTOR_HEAP_TYPE_SAMPLER];

GraphicsEngineD3D12::GraphicsEngineD3D12()
	: m_refCount(1)
	, m_latestFenceValue(0)
	, m_hEvent(nullptr)
{

}

GraphicsEngineD3D12::~GraphicsEngineD3D12()
{
	if(m_fence->GetCompletedValue() < m_latestFenceValue)
	{
		m_fence->SetEventOnCompletion(m_latestFenceValue, m_hEvent);
		WaitForSingleObject(m_hEvent, INFINITE);
	}
}

HRESULT GraphicsEngineD3D12::Initialize()
{
#if defined(NDEBUG)
#define DXGI_CREATION_FLAG 0
#else
#define DXGI_CREATION_FLAG DXGI_CREATE_FACTORY_DEBUG
#endif
	HRESULT hr;
	hr = CreateDXGIFactory2(DXGI_CREATION_FLAG, __uuidof(IDXGIFactory5), &m_dxgiFactory);
	assert(SUCCEEDED(hr));
	if(FAILED(hr))
	{
		return E_FAIL;
	}

	hr = D3D12CreateDevice(nullptr, D3D_FEATURE_LEVEL_12_0, __uuidof(ID3D12Device), &m_device);
	assert(SUCCEEDED(hr));
	if(FAILED(hr))
	{
		return E_FAIL;
	}

	D3D12_COMMAND_QUEUE_DESC queueDesc{D3D12_COMMAND_LIST_TYPE_DIRECT, 0, D3D12_COMMAND_QUEUE_FLAG_NONE, 0};
	hr = m_device->CreateCommandQueue(&queueDesc, __uuidof(ID3D12CommandQueue), &m_queue);
	assert(SUCCEEDED(hr));
	if(FAILED(hr))
	{
		return E_FAIL;
	}

	hr = m_device->CreateFence(0, D3D12_FENCE_FLAG_NONE, __uuidof(ID3D12Fence), &m_fence);
	assert(SUCCEEDED(hr));
	if(FAILED(hr))
	{
		return E_FAIL;
	}

	hr = m_device->CreateCommandAllocator(D3D12_COMMAND_LIST_TYPE_DIRECT, __uuidof(ID3D12CommandAllocator), &m_cmdAllocator);
	assert(SUCCEEDED(hr));
	if(FAILED(hr))
	{
		return E_FAIL;
	}

	hr = m_device->CreateCommandList(0, D3D12_COMMAND_LIST_TYPE_DIRECT, m_cmdAllocator.Get(), nullptr, __uuidof(ID3D12GraphicsCommandList), &m_cmdList);
	assert(SUCCEEDED(hr));
	if(FAILED(hr))
	{
		return E_FAIL;
	}

	for(auto& it: m_descriptorSizeTable)
	{
		it = m_device->GetDescriptorHandleIncrementSize((D3D12_DESCRIPTOR_HEAP_TYPE)(&it - m_descriptorSizeTable));
	}

	m_hEvent = CreateEventW(nullptr, true, false, nullptr);
	return S_OK;
}

HRESULT GraphicsEngineD3D12::QueryInterface(const IID& riid, void** ppvObject)
{
	return E_NOTIMPL;
}

ULONG GraphicsEngineD3D12::AddRef()
{
	intptr_t refCount = m_refCount.fetch_add(1);
	if(refCount < 0)
	{
		return 0;
	}

	return refCount + 1;
}

ULONG GraphicsEngineD3D12::Release()
{
	intptr_t refCount = m_refCount.fetch_sub(1);
	if(refCount == 1)
	{
		delete this;
	}

	return std::max(refCount - 1, static_cast<intptr_t>(0));
}

HRESULT GraphicsEngineD3D12::CreateSwapChain(HWND hWnd, UINT width, UINT height)
{
	HRESULT hr;
	DXGI_SWAP_CHAIN_DESC1 swapChainDesc{};
	IDXGISwapChain1* swapChain{};
	swapChainDesc.BufferCount = 2;
	swapChainDesc.Width = width;
	swapChainDesc.Height = height;
	swapChainDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
	swapChainDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
	swapChainDesc.SwapEffect = DXGI_SWAP_EFFECT_FLIP_DISCARD;
	swapChainDesc.SampleDesc.Count = 1;

	hr = m_dxgiFactory->CreateSwapChainForHwnd(
		m_queue.Get(),
		hWnd,
		&swapChainDesc,
		nullptr,
		nullptr,
		&swapChain
	);

	if(FAILED(hr))
	{
		return hr;
	}

	hr = swapChain->QueryInterface(__uuidof(m_swapChain), &m_swapChain);
	swapChain->Release();
	if(FAILED(hr))
	{
		return hr;
	}

	hr = InitRenderTargetView(width, height);
	if(FAILED(hr))
	{
		return hr;
	}

	return E_NOTIMPL;
}

HRESULT GraphicsEngineD3D12::GetAssetManager(IAssetManager** ppAssetManager)
{
	return E_NOTIMPL;
}

HRESULT GraphicsEngineD3D12::Render()
{
	HRESULT hr = S_OK;
	m_cmdAllocator->Reset();
	// TODO: Not implemented yet!
	// m_cmdList->Reset(m_cmdAllocator.Get(), m_pipeline.Get());
	uint32_t frameIndex = m_swapChain->GetCurrentBackBufferIndex();
	CD3DX12_CPU_DESCRIPTOR_HANDLE rtvHandle(m_descHeapSwapChainRtvs->GetCPUDescriptorHandleForHeapStart(), frameIndex, m_descriptorSizeTable[D3D12_DESCRIPTOR_HEAP_TYPE_RTV]);
	// Indicate that the back buffer will be used as a render target.
	auto beginPaintBarrier = CD3DX12_RESOURCE_BARRIER::Transition(m_backBufferArr[frameIndex].Get(), D3D12_RESOURCE_STATE_PRESENT, D3D12_RESOURCE_STATE_RENDER_TARGET);
	CD3DX12_VIEWPORT rect{0.f, 0.f, 1920.f, 1080.f};
	CD3DX12_RECT scissorRect{0, 0, 1920, 1080};
	m_cmdList->ResourceBarrier(1, &beginPaintBarrier);
	D3D12_CPU_DESCRIPTOR_HANDLE dtvHandle = m_descHeapDsv->GetCPUDescriptorHandleForHeapStart();
	m_cmdList->OMSetRenderTargets(1, &rtvHandle, FALSE, &dtvHandle);
	m_cmdList->OMSetStencilRef(0x00);
	m_cmdList->RSSetViewports(1, &rect);
	m_cmdList->RSSetScissorRects(1, &scissorRect);
	// Record commands.
	const float clearColor[] = { 0.5f, 0.5f, 1.0f, 1.0f };
	m_cmdList->ClearRenderTargetView(rtvHandle, clearColor, 0, nullptr);
	m_cmdList->ClearDepthStencilView(dtvHandle, D3D12_CLEAR_FLAG_DEPTH, 1.f, 0, 0, nullptr);
	m_cmdList->IASetPrimitiveTopology(D3D_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	auto endPaintBarrier= CD3DX12_RESOURCE_BARRIER::Transition(m_backBufferArr[frameIndex].Get(), D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_STATE_PRESENT);
	m_cmdList->ResourceBarrier(1, &endPaintBarrier);
	m_cmdList->Close();
	ID3D12CommandList* cmdLists[] {m_cmdList.Get()};
	m_queue->ExecuteCommandLists(1, cmdLists);
	m_swapChain->Present(1, 0);
	m_latestFenceValue += 1;
	m_queue->Signal(m_fence.Get(), m_latestFenceValue);
	// Wait until the previous frame is finished.
	if (m_fence->GetCompletedValue() < m_latestFenceValue)
	{
		m_fence->SetEventOnCompletion(m_latestFenceValue, m_hEvent);
		WaitForSingleObject(m_hEvent, INFINITE);
	}

	return hr;
}

HRESULT GraphicsEngineD3D12::CreateStaticMeshRenderer(IStaticMeshRenderer** ppMeshRenderer)
{
	return E_NOTIMPL;
}

HRESULT GraphicsEngineD3D12::InitRenderTargetView(UINT width, UINT height)
{
	HRESULT hr;
	m_depthBuffer.Reset();
	D3D12_HEAP_PROPERTIES heapProp{D3D12_HEAP_TYPE_DEFAULT, D3D12_CPU_PAGE_PROPERTY_UNKNOWN, D3D12_MEMORY_POOL_UNKNOWN, 0 , 0};
	CD3DX12_RESOURCE_DESC resourceDesc = CD3DX12_RESOURCE_DESC::Tex2D(DXGI_FORMAT_D32_FLOAT, width, height);
	resourceDesc.Flags = D3D12_RESOURCE_FLAG_ALLOW_DEPTH_STENCIL | D3D12_RESOURCE_FLAG_DENY_SHADER_RESOURCE;
	
	D3D12_CLEAR_VALUE clearValue{DXGI_FORMAT_D32_FLOAT};
	clearValue.DepthStencil.Depth = 1.f;
	m_device->CreateCommittedResource(&heapProp, D3D12_HEAP_FLAG_ALLOW_ALL_BUFFERS_AND_TEXTURES, &resourceDesc, D3D12_RESOURCE_STATE_DEPTH_WRITE, &clearValue, __uuidof(ID3D12Resource), &m_depthBuffer);

	D3D12_DESCRIPTOR_HEAP_DESC rtvHeapDesc{};
	rtvHeapDesc.NumDescriptors = 2;
	rtvHeapDesc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_RTV;
	rtvHeapDesc.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_NONE;
	hr = m_device->CreateDescriptorHeap(&rtvHeapDesc, __uuidof(ID3D12DescriptorHeap), &m_descHeapSwapChainRtvs);
	if(FAILED(hr))
	{
		return hr;
	}

	m_swapChain->GetBuffer(0, __uuidof(ID3D12Resource), &m_backBufferArr[0]);
	m_swapChain->GetBuffer(1, __uuidof(ID3D12Resource), &m_backBufferArr[1]);
	D3D12_CPU_DESCRIPTOR_HANDLE rtvHandle{m_descHeapSwapChainRtvs->GetCPUDescriptorHandleForHeapStart()};
	for(uint32_t i = 0 ; i < 2 ; ++i)
	{
		m_device->CreateRenderTargetView(m_backBufferArr[i].Get(), nullptr, rtvHandle);
		rtvHandle.ptr += DESCRIPTOR_RTV_SIZE;
	}

	D3D12_DESCRIPTOR_HEAP_DESC dtvHeapDesc{};
	D3D12_DEPTH_STENCIL_VIEW_DESC dtvDesc{};
	dtvHeapDesc.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_NONE;
	dtvHeapDesc.NodeMask = 0;
	dtvHeapDesc.NumDescriptors = 1;
	dtvHeapDesc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_DSV;
	hr = m_device->CreateDescriptorHeap(&dtvHeapDesc, __uuidof(ID3D12DescriptorHeap), &m_descHeapDsv);
	if(FAILED(hr))
	{
		return hr;
	}

	m_device->CreateDepthStencilView(m_depthBuffer.Get(), nullptr, m_descHeapDsv->GetCPUDescriptorHandleForHeapStart());

	return S_OK;	
}
