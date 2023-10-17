#pragma once

#define WIN32_LEAN_AND_MEAN             // 거의 사용되지 않는 내용을 Windows 헤더에서 제외합니다.
#define NOMINMAX
// Windows 헤더 파일
#include <winsdkver.h>
#include <windows.h>
#include <atomic>
#include <wrl.h>
#include <d3d12.h>
#include <d3dx12.h>
#include <dxgi1_6.h>
#include <DirectXMath.h>
#include <array>
#include "interface_gen.h"

template<typename T> using ComPtr = Microsoft::WRL::ComPtr<T>;