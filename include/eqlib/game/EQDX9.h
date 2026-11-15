/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-present MacroQuest Authors
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2, as published by
 * the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#pragma once

#include "eqlib/Common.h"
#include "eqlib/SizeChecks.h"

#include <d3d9.h>
#include <guiddef.h>

#if HAS_DIRECTX_11
#include <d3d11.h>
#include <dxgi.h>
#endif

#include "eqstd/vector.h"
#include "eqstd/mutex.h"

namespace eqlib {

#if !HAS_DIRECTX_11

using Direct3D9 = IDirect3D9;
using Direct3DDevice9 = IDirect3DDevice9;
using Direct3DSwapChain9 = IDirect3DSwapChain9;
using Direct3DTexture9 = IDirect3DTexture9;
using Direct3DCubeTexture9 = IDirect3DCubeTexture9;
using Direct3DSurface9 = IDirect3DSurface9;
using Direct3DVertexBuffer9 = IDirect3DVertexBuffer9;
using Direct3DIndexBuffer9 = IDirect3DIndexBuffer9;
using Direct3DVertexDeclaration9 = IDirect3DVertexDeclaration9;

#else

//============================================================================
// DX9OverDX11Wrapper (EQGraphics.dll)
//
// EverQuest's renderer is written against D3D9/D3DX9. Instead of porting it,
// EQGraphics.dll ships "DX9OverDX11Wrapper" which implements a D3D9-shaped API on top of D3D11.
// Direct3DCreate9 is exported by EQGraphics and returns a DX11::System instead of an IDirect3D9.
//
// The wrapper objects are NOT COM objects; vtables only contain the methods EQ uses, in a
// custom order (not the IDirect3D*9 order). AddRef/Release are not virtuals, and there is
// no QueryInterface. Type checks compare TypeName/TypeHash (see ImplBase).
//
// There are two main kinds of objects:
//   - "*Impl" objects (DeviceImpl, TextureImpl, ...): the D3D9-style handles.
//   - Internal objects (Device, SwapChain, Texture, DefferedInputLayout) that hold the D3D11 state.
//     These live in an intrusive, atomically refcounted SharedObject<T> block. Impls own these.
//
//============================================================================

inline namespace DX9Wrapper {
namespace DX11 {
	class System;
	class DeviceImpl;
	class SwapChainImpl;
	class BaseTextureImpl;
	class TextureImpl;
	class CubeTextureImpl;
	class SurfaceImpl;
	class VertexBufferImpl;
	class IndexBufferImpl;
	class VertexDeclarationImpl;

	class Device;
	class SwapChain;
	class Texture;
	class DefferedInputLayout;
}}

using Direct3D9 = DX9Wrapper::DX11::System;
using Direct3DDevice9 = DX9Wrapper::DX11::DeviceImpl;
using Direct3DSwapChain9 = DX9Wrapper::DX11::SwapChainImpl;
using Direct3DTexture9 = DX9Wrapper::DX11::TextureImpl;
using Direct3DCubeTexture9 = DX9Wrapper::DX11::CubeTextureImpl;
using Direct3DSurface9 = DX9Wrapper::DX11::SurfaceImpl;
using Direct3DVertexBuffer9 = DX9Wrapper::DX11::VertexBufferImpl;
using Direct3DIndexBuffer9 = DX9Wrapper::DX11::IndexBufferImpl;
using Direct3DVertexDeclaration9 = DX9Wrapper::DX11::VertexDeclarationImpl;

inline namespace DX9Wrapper {
namespace DX11 {

constexpr uint32_t ComputeTypeHash(const char* typeName)
{
	uint32_t hash = 7;
	for (; *typeName; ++typeName)
		hash = static_cast<uint32_t>(*typeName) + 31 * hash;
	return hash;
}

// Value seen in a live TextureImpl.
static_assert(ComputeTypeHash("struct DX9Wrapper::DX11::TextureImpl>::_(void)") == 0x3db22d23);

// The wrapper's RTTI substitute. It is copied and compared as one 16-byte value
struct TypeId
{
/*0x00*/ const char*           Name;
/*0x08*/ uint32_t              Hash;       // ComputeTypeHash(Name)
/*0x10*/
};

// Intrusive refcounted block that holds the wrapper's internal objects.
template <typename T>
struct SharedObject
{
/*0x00*/ TypeId                Type;
/*0x10*/ volatile int32_t      RefCount;   // atomic (InterlockedIncrement/Decrement)
/*0x18*/ T                     Object;     // +0x20 if alignof(T) == 16
};

// Common header of every *Impl object (and System).
class [[offsetcomments]] ImplBase
{
public:
/*0x00*/ // vtable;
	virtual ~ImplBase() = default;

/*0x08*/ ImplBase*             Self;       // points to this
/*0x10*/ TypeId                Type;       // Name is null for System
/*0x20*/ int                   RefCount;   // non-atomic
/*0x28*/

	uint32_t AddRef() { return ++RefCount; }
	uint32_t Release()
	{
		int result = --RefCount;
		if (result == 0)
			delete this;

		return result;
	}
};

//----------------------------------------------------------------------------
// Internal objects (SharedObject payloads)
//----------------------------------------------------------------------------

enum class TextureLockState : uint32_t
{
	StagingMappedDirect = 0, // caller writes straight into the mapped staging texture
	Idle                = 1, // initial state; also after an upload
	CpuLocked           = 2, // not yet flushed: caller writes ConversionBuffer
	CpuPendingUpload    = 3, // unlocked, waiting for FlushPendingUploads
	StagingMappedCopy   = 4, // flushed, but caller writes ConversionBuffer (repacked or format-converted)
};

// A record per subresource (index = mip + MipLevels * arraySlice), created by
// LockSubresource. Lock fails with D3DERR_INVALIDCALL unless State is Idle or CpuPendingUpload.
struct [[offsetcomments]] TextureLockRecord
{
/*0x00*/ uint32_t              Left;
/*0x04*/ uint32_t              Top;
/*0x08*/ uint32_t              Front;
/*0x0c*/ uint32_t              Width;
/*0x10*/ uint32_t              Height;
/*0x14*/ uint32_t              Depth;
/*0x18*/ ID3D11Texture2D*      StagingTexture;     // Width x Height, USAGE_STAGING; created per lock, released on unlock
/*0x20*/ eqstd::vector<uint8_t> ConversionBuffer;  // CPU copy of the locked rect
/*0x38*/ D3D11_MAPPED_SUBRESOURCE Mapped;          // staging map
/*0x48*/ uint64_t              Unused0x48;
/*0x50*/ uint32_t              RowPitch;           // pitch of ConversionBuffer (tightly packed)
/*0x54*/ uint32_t              SlicePitch;
/*0x58*/ TextureLockState      State;
/*0x5c*/ uint32_t              Padding0x5c;
/*0x60*/
};
constexpr size_t TextureLockRecord_size = 0x60;
SIZE_CHECK(TextureLockRecord, TextureLockRecord_size);

// "class DX9Wrapper::DX11::Texture" - backing for TextureImpl, CubeTextureImpl,
// SurfaceImpl and the swap chain's back buffer/depth buffer.
//
// Uploads are lazy. Until the texture is first used as a shader resource, render target
// or depth stencil, LockRect/UnlockRect only fill a CPU buffer (lock State 3).
// The first GetShaderResourceView/GetRenderTargetView/GetDepthStencilView
// copies those buffers to the GPU (FlushPendingUploads) and sets UploadsFlushed. From then on,
// locks go through a staging texture and upload on Unlock.
// ShaderResourceView is also created on that first use, so a null SRV means "never flushed".
class [[offsetcomments]] Texture
{
public:
/*0x00*/ DXGI_FORMAT           Format;             // requested (D3D9-visible) format; may differ from Texture2D's
/*0x04*/ uint32_t              CreateFlags;        // bind: 1=SRV, 2=RTV, 4=DSV, 8=UAV; 0x10=cube (MISC_TEXTURECUBE). 0 for wrapped back buffers
/*0x08*/ ID3D11Texture2D*      Texture2D;          // USAGE_DEFAULT, no CPU access
/*0x10*/ eqstd::vector<ID3D11RenderTargetView*> RenderTargetViews; // per mip, created lazily
/*0x28*/ eqstd::vector<ID3D11DepthStencilView*> DepthStencilViews; // per mip, created lazily (D24_UNORM_S8_UINT)
/*0x40*/ eqstd::vector<IUnknown*> UnorderedAccessViews; // per mip; inferred from the UAV bind flag, no reader found
/*0x58*/ ID3D11ShaderResourceView* ShaderResourceView; // created lazily, see above
/*0x60*/ uint32_t              UploadsFlushed;     // set by FlushPendingUploads
/*0x68*/ eqstd::vector<TextureLockRecord> Locks;   // one per subresource
/*0x80*/ SharedObject<Texture>* Owner;             // the block that holds this texture
/*0x88*/

	ID3D11Texture2D* GetTexture2D() const { return Texture2D; }
	ID3D11ShaderResourceView* GetShaderResourceView() const { return ShaderResourceView; }

	// DX11::Texture::GetShaderResourceView in EQGraphics. Flushes pending uploads and creates the
	// SRV on first use, without touching device bindings. Render thread only (immediate context).
	EQLIB_OBJECT ID3D11ShaderResourceView* GetOrCreateShaderResourceView(Device* device);
};
constexpr size_t Texture_size = 0x88;
SIZE_CHECK(Texture, Texture_size);

// Shared block that owns a Texture.
using TextureObject = SharedObject<Texture>;

constexpr size_t TextureObject_size = 0xA0; // @sizeof(TextureObject, EQGraphics) :: 2026-10-19 (live) @ 0x18012C2F7
SIZE_CHECK(TextureObject, TextureObject_size);

// "class DX9Wrapper::DX11::SwapChain" - one per Device (Device::SwapChain).
class [[offsetcomments]] SwapChain
{
public:
/*0x00*/ IDXGISwapChain*       DXGISwapChain;
/*0x08*/ SharedObject<Texture>* BackBuffer;        // wraps buffer 0 (Texture::InitFromExisting)
/*0x10*/ SharedObject<Texture>* DepthStencil;      // AutoDepthStencilFormat (DSV) at create; R24G8_TYPELESS (SRV|DSV) after Reset
/*0x18*/ ImplBase*             Unknown0x18;        // released like an Impl, never written by wrapper code (null)
/*0x20*/ IDXGIOutput*          Output;             // fullscreen target, display modes, gamma
/*0x28*/
};
constexpr size_t SwapChain_size = 0x28;
SIZE_CHECK(SwapChain, SwapChain_size);

// Shared block that owns a SwapChain.
using SwapChainObject = SharedObject<SwapChain>;

constexpr size_t SwapChainObject_size = 0x40; // @sizeof(SwapChainObject, EQGraphics) :: 2026-10-19 (live) @ 0x18016979E
SIZE_CHECK(SwapChainObject, SwapChainObject_size);

// "class DX9Wrapper::DX11::Device" - all the emulated D3D9 device state.
class alignas(16) [[offsetcomments]] Device
{
public:
/*0x0000*/ ID3D11Device*        D3DDevice;
/*0x0008*/ ID3D11DeviceContext* D3DDeviceContext;
/*0x0010*/ uint8_t              Unknown0x0010[0x10];
/*0x0020*/ uint8_t              RenderStateCache[0x280];          // D3DRS_* -> blend/depth/raster state objects
/*0x02a0*/ uint8_t              SamplerStateCache[0x4d0];         // D3DSAMP_* (16 samplers)
/*0x0770*/ uint8_t              FixedFunctionState0[0x70];        // starts with a Device* back-pointer
/*0x07e0*/ D3DMATRIX            WorldMatrix;                      // D3DTS_WORLD
/*0x0820*/ D3DMATRIX            ViewMatrix;                       // D3DTS_VIEW
/*0x0860*/ D3DMATRIX            ProjectionMatrix;                 // D3DTS_PROJECTION
/*0x08a0*/ uint8_t              FixedFunctionState1[0x40];
/*0x08e0*/ float                ViewportX;
/*0x08e4*/ float                ViewportY;
/*0x08e8*/ float                ViewportWidth;
/*0x08ec*/ float                ViewportHeight;
/*0x08f0*/ uint8_t              FixedFunctionState2[0x23c];       // includes 4 lights (0x60 each) at +0x9a0
/*0x0b2c*/ uint32_t             BoundTextureStageMask;            // bit n = stage n has a real texture; uploaded to the shader constant buffer
/*0x0b30*/ uint8_t              FixedFunctionState3[0x30];
/*0x0b60*/ bool                 FixedFunctionDirty;               // constant buffer must be re-uploaded
/*0x0b61*/ bool                 FixedFunctionDirty2;
/*0x0b62*/ uint8_t              Unknown0x0b62[0xe];
/*0x0b70*/ uint8_t              ClearHelper[0x50];                // used by Clear
/*0x0bc0*/ uint8_t              Blitter[0x120];                   // used by StretchRect
/*0x0ce0*/ uint8_t              TextureStageStateCache[0x700];    // D3DTSS_*
/*0x13e0*/ uint8_t              ShaderResourceBinder[0x80];       // starts with a Device* back-pointer
/*0x1460*/ uint8_t              DrawPrimitiveUPBuffer[0x60];      // dynamic VB used by DrawPrimitiveUP
/*0x14c0*/ SharedObject<DX11::SwapChain>* SwapChain;
/*0x14c8*/ SharedObject<Texture>* DummyTexture;                   // 1x1 white, R8G8B8A8
/*0x14d0*/ SharedObject<Texture>* DummyCubeTexture;               // 1x1x6 white cube
/*0x14d8*/ void*                ActiveEffect;                     // EffectImpl* (D3DX effect)
/*0x14e0*/ uint8_t              FVFInputLayoutCache[0x40];        // unordered_map<FVF, SharedObject<DefferedInputLayout>*>
/*0x1520*/ SharedObject<DefferedInputLayout>* InputLayout;        // current vertex declaration
/*0x1528*/ uint64_t             Unknown0x1528;
/*0x1530*/
};
constexpr size_t Device_size = 0x1530;
SIZE_CHECK(Device, Device_size);

// Shared block that owns a Device.
using DeviceObject = SharedObject<Device>;

constexpr size_t DeviceObject_size = 0x1550; // @sizeof(DeviceObject, EQGraphics) :: 2026-10-19 (live) @ 0x18012CE8E
SIZE_CHECK(DeviceObject, DeviceObject_size);

//----------------------------------------------------------------------------
// D3D9-style handles (*Impl)
//----------------------------------------------------------------------------


// Direct3DCreate9 result. "IDirect3D9".
class [[offsetcomments]] System : public ImplBase
{
public:
/*0x008*/ virtual HRESULT EnumAdapterModes(UINT Adapter, D3DFORMAT Format, UINT Mode, D3DDISPLAYMODE* pMode) = 0;
/*0x010*/ virtual HRESULT CreateDevice(UINT Adapter, D3DDEVTYPE DeviceType, HWND hFocusWindow, DWORD BehaviorFlags,
	D3DPRESENT_PARAMETERS* pPresentationParameters, DeviceImpl** ppReturnedDeviceInterface) = 0;
/*0x018*/ virtual UINT GetAdapterModeCount(UINT Adapter, D3DFORMAT Format) = 0;
/*0x020*/ virtual HRESULT CheckDeviceFormat(UINT Adapter, D3DDEVTYPE DeviceType, D3DFORMAT AdapterFormat, DWORD Usage,
	D3DRESOURCETYPE RType, D3DFORMAT CheckFormat) = 0;
/*0x028*/ virtual HRESULT CheckDeviceType(UINT Adapter, D3DDEVTYPE DeviceType, D3DFORMAT AdapterFormat,
	D3DFORMAT BackBufferFormat, BOOL bWindowed) = 0;
/*0x030*/ virtual HRESULT GetAdapterDisplayMode(UINT Adapter, D3DDISPLAYMODE* pMode) = 0;
/*0x038*/ virtual UINT GetAdapterCount() = 0;
/*0x040*/ virtual HRESULT GetAdapterIdentifier(UINT Adapter, DWORD Flags, D3DADAPTER_IDENTIFIER9* pIdentifier) = 0;
/*0x048*/ virtual HRESULT Unknown0x048() = 0;                     // stub, returns S_OK

/*0x28*/ IDXGIFactory1*        DXGIFactory;
/*0x30*/
};
constexpr size_t System_size = 0x30; // @sizeof(System, EQGraphics) :: 2026-10-19 (live) @ 0x18014FF1D
SIZE_CHECK(System, System_size);

// "IDirect3DDevice9".
// Slots marked (stub) return D3DERR_INVALIDCALL without doing anything.
class [[offsetcomments]] DeviceImpl : public ImplBase
{
public:
#pragma region Virtual Functions
/*0x008*/ virtual HRESULT Reset(D3DPRESENT_PARAMETERS* pPresentationParameters) = 0;
/*0x010*/ virtual HRESULT GetBackBuffer(UINT iSwapChain, UINT iBackBuffer, D3DBACKBUFFER_TYPE Type, SurfaceImpl** ppBackBuffer) = 0;
/*0x018*/ virtual HRESULT DrawPrimitiveUP(D3DPRIMITIVETYPE PrimitiveType, UINT PrimitiveCount, const void* pVertexStreamZeroData, UINT VertexStreamZeroStride) = 0;
/*0x020*/ virtual HRESULT GetSwapChain(UINT iSwapChain, SwapChainImpl** ppSwapChain) = 0;
/*0x028*/ virtual HRESULT Present(const RECT* pSourceRect, const RECT* pDestRect, HWND hDestWindowOverride, const RGNDATA* pDirtyRegion) = 0;
/*0x030*/ virtual void SetGammaRamp(UINT iSwapChain, DWORD Flags, const D3DGAMMARAMP* pRamp) = 0;
/*0x038*/ virtual UINT GetAvailableTextureMem() = 0;
/*0x040*/ virtual HRESULT GetDisplayMode(UINT iSwapChain, D3DDISPLAYMODE* pMode) = 0;
/*0x048*/ virtual HRESULT LightEnable(DWORD Index, BOOL Enable) = 0;               // max 4 lights
/*0x050*/ virtual HRESULT SetLight(DWORD Index, const D3DLIGHT9* pLight) = 0;      // max 4 lights
/*0x058*/ virtual HRESULT Unknown0x058() = 0;                                      // (stub) D3DERR_DEVICELOST
/*0x060*/ virtual HRESULT GetViewport(D3DVIEWPORT9* pViewport) = 0;
/*0x068*/ virtual HRESULT GetTransform(D3DTRANSFORMSTATETYPE State, D3DMATRIX* pMatrix) = 0; // WORLD/VIEW/PROJECTION only
/*0x070*/ virtual HRESULT SetFVF(DWORD FVF) = 0;
/*0x078*/ virtual HRESULT SetTextureStageState(DWORD Stage, D3DTEXTURESTAGESTATETYPE Type, DWORD Value) = 0;
/*0x080*/ virtual HRESULT GetRenderTarget(DWORD RenderTargetIndex, SurfaceImpl** ppRenderTarget) = 0;
/*0x088*/ virtual HRESULT DrawIndexedPrimitive(D3DPRIMITIVETYPE Type, INT BaseVertexIndex, UINT MinVertexIndex, UINT NumVertices, UINT StartIndex, UINT PrimCount) = 0;
/*0x090*/ virtual HRESULT StretchRect(SurfaceImpl* pSourceSurface, const RECT* pSourceRect, SurfaceImpl* pDestSurface, const RECT* pDestRect, D3DTEXTUREFILTERTYPE Filter) = 0;
/*0x098*/ virtual HRESULT CreateTexture(UINT Width, UINT Height, UINT Levels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, TextureImpl** ppTexture, HANDLE* pSharedHandle) = 0;
/*0x0a0*/ virtual HRESULT Clear(DWORD Count, const D3DRECT* pRects, DWORD Flags, D3DCOLOR Color, float Z, DWORD Stencil) = 0;
/*0x0a8*/ virtual HRESULT GetRenderState(D3DRENDERSTATETYPE State, DWORD* pValue) = 0; // only D3DRS_ALPHABLENDENABLE
/*0x0b0*/ virtual HRESULT SetStreamSource(UINT StreamNumber, VertexBufferImpl* pStreamData, UINT OffsetInBytes, UINT Stride) = 0;
/*0x0b8*/ virtual HRESULT SetIndices(IndexBufferImpl* pIndexData) = 0;
/*0x0c0*/ virtual HRESULT SetRenderTarget(DWORD RenderTargetIndex, SurfaceImpl* pRenderTarget) = 0;
/*0x0c8*/ virtual HRESULT SetSamplerState(DWORD Sampler, D3DSAMPLERSTATETYPE Type, DWORD Value) = 0;
/*0x0d0*/ virtual HRESULT SetRenderState(D3DRENDERSTATETYPE State, DWORD Value) = 0;
/*0x0d8*/ virtual HRESULT CreateVertexBuffer(UINT Length, DWORD Usage, DWORD FVF, D3DPOOL Pool, VertexBufferImpl** ppVertexBuffer, HANDLE* pSharedHandle) = 0;
/*0x0e0*/ virtual HRESULT SetVertexDeclaration(VertexDeclarationImpl* pDecl) = 0;
/*0x0e8*/ virtual HRESULT GetDeviceCaps(D3DCAPS9* pCaps) = 0;                    // fixed caps
/*0x0f0*/ virtual HRESULT CreateIndexBuffer(UINT Length, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, IndexBufferImpl** ppIndexBuffer, HANDLE* pSharedHandle) = 0;
/*0x0f8*/ virtual HRESULT SetViewport(const D3DVIEWPORT9* pViewport) = 0;
/*0x100*/ virtual HRESULT SetTransform(D3DTRANSFORMSTATETYPE State, const D3DMATRIX* pMatrix) = 0; // WORLD/VIEW/PROJECTION only
/*0x108*/ virtual HRESULT DrawPrimitive(D3DPRIMITIVETYPE PrimitiveType, UINT StartVertex, UINT PrimitiveCount) = 0;
/*0x110*/ virtual HRESULT SetSoftwareVertexProcessing(BOOL bSoftware) = 0;      // (stub)
/*0x118*/ virtual HRESULT BeginScene() = 0;                                      // no-op
/*0x120*/ virtual HRESULT EndScene() = 0;                                        // no-op
/*0x128*/ virtual HRESULT SetTexture(DWORD Stage, BaseTextureImpl* pTexture) = 0; // TextureImpl or CubeTextureImpl; creates the SRV on demand
/*0x130*/ virtual HRESULT CreateVertexDeclaration(const D3DVERTEXELEMENT9* pVertexElements, VertexDeclarationImpl** ppDecl) = 0;
/*0x138*/ virtual HRESULT SetVertexShader(void* pShader) = 0;                    // (stub) shaders come from D3DX effects
/*0x140*/ virtual HRESULT SetPixelShader(void* pShader) = 0;                     // (stub)
/*0x148*/ virtual HRESULT TestCooperativeLevel() = 0;                            // IDXGISwapChain::Present(0, DXGI_PRESENT_TEST)
/*0x150*/ virtual HRESULT EvictManagedResources() = 0;                           // ID3D11DeviceContext::Flush
#pragma endregion

/*0x28*/ SharedObject<DX11::Device>* Device;
/*0x30*/ DWORD                 ThreadId;           // creating thread
/*0x38*/

	DX11::Device* GetDevice() const { return Device ? &Device->Object : nullptr; }
	ID3D11Device* GetD3D11Device() const { return Device ? Device->Object.D3DDevice : nullptr; }
	ID3D11DeviceContext* GetD3D11DeviceContext() const { return Device ? Device->Object.D3DDeviceContext : nullptr; }
};
constexpr size_t DeviceImpl_size = 0x38; // @sizeof(DeviceImpl, EQGraphics) :: 2026-10-19 (live) @ 0x18012CF25
SIZE_CHECK(DeviceImpl, DeviceImpl_size);

// "IDirect3DSwapChain9"
class [[offsetcomments]] SwapChainImpl : public ImplBase
{
public:
/*0x008*/ virtual HRESULT Present(const RECT* pSourceRect, const RECT* pDestRect, HWND hDestWindowOverride, const RGNDATA* pDirtyRegion, DWORD dwFlags) = 0;

/*0x28*/ SharedObject<DX11::Device>* Device;
/*0x30*/ SharedObject<DX11::SwapChain>* SwapChain;
/*0x38*/

	IDXGISwapChain* GetDXGISwapChain() const { return SwapChain ? SwapChain->Object.DXGISwapChain : nullptr; }
};
constexpr size_t SwapChainImpl_size = 0x38; // @sizeof(SwapChainImpl, EQGraphics) :: 2026-10-19 (live) @ 0x18016CD2E
SIZE_CHECK(SwapChainImpl, SwapChainImpl_size);

// Common part of TextureImpl and CubeTextureImpl (they share the destructor and GetLevelCount).
class [[offsetcomments]] BaseTextureImpl : public ImplBase
{
public:
/*0x008*/ virtual D3DRESOURCETYPE GetType() = 0;     // D3DRTYPE_TEXTURE / D3DRTYPE_CUBETEXTURE
/*0x010*/ virtual DWORD GetLevelCount() = 0;

/*0x28*/ SharedObject<DX11::Device>* Device;
/*0x30*/ SharedObject<DX11::Texture>* Texture;
/*0x38*/

	ID3D11Texture2D* GetTexture2D() const { return Texture ? Texture->Object.GetTexture2D() : nullptr; }
	ID3D11ShaderResourceView* GetShaderResourceView() const { return Texture ? Texture->Object.GetShaderResourceView() : nullptr; }

	// Uploads the texture's pending data and returns its SRV.
	// A non-null SRV implies the uploads were already flushed, so skip the call into EQGraphics in that case.
	ID3D11ShaderResourceView* GetOrCreateShaderResourceView()
	{
		if (!Texture)
			return nullptr;
		if (ID3D11ShaderResourceView* srv = Texture->Object.GetShaderResourceView())
			return srv;
		return Device ? Texture->Object.GetOrCreateShaderResourceView(&Device->Object) : nullptr;
	}
};

// "IDirect3DTexture9"
class [[offsetcomments]] TextureImpl : public BaseTextureImpl
{
public:
/*0x018*/ virtual HRESULT Unknown0x018() = 0;      // no-op, returns S_OK
/*0x020*/ virtual HRESULT GetSurfaceLevel(UINT Level, SurfaceImpl** ppSurfaceLevel) = 0;
/*0x028*/ virtual HRESULT LockRect(UINT Level, D3DLOCKED_RECT* pLockedRect, const RECT* pRect, DWORD Flags) = 0;
/*0x030*/ virtual HRESULT UnlockRect(UINT Level) = 0;
/*0x038*/ virtual HRESULT GetLevelDesc(UINT Level, D3DSURFACE_DESC* pDesc) = 0;
};
constexpr size_t TextureImpl_size = 0x38; // @sizeof(TextureImpl, EQGraphics) :: 2026-10-19 (live) @ 0x18012C259
SIZE_CHECK(TextureImpl, TextureImpl_size);

// "IDirect3DCubeTexture9"
class [[offsetcomments]] CubeTextureImpl : public BaseTextureImpl
{
public:
/*0x018*/ virtual HRESULT LockRect(D3DCUBEMAP_FACES FaceType, UINT Level, D3DLOCKED_RECT* pLockedRect, const RECT* pRect, DWORD Flags) = 0;
/*0x020*/ virtual HRESULT UnlockRect(D3DCUBEMAP_FACES FaceType, UINT Level) = 0;
/*0x028*/ virtual HRESULT GetLevelDesc(UINT Level, D3DSURFACE_DESC* pDesc) = 0;
};
constexpr size_t CubeTextureImpl_size = 0x38; // @sizeof(CubeTextureImpl, EQGraphics) :: 2026-10-19 (live) @ 0x18012FF28
SIZE_CHECK(CubeTextureImpl, CubeTextureImpl_size);


// "IDirect3DSurface9". A view of one mip level of a Texture.
class [[offsetcomments]] SurfaceImpl : public ImplBase
{
public:
/*0x008*/ virtual D3DRESOURCETYPE GetType() = 0;     // D3DRTYPE_SURFACE
/*0x010*/ virtual HRESULT GetDesc(D3DSURFACE_DESC* pDesc) = 0;
/*0x018*/ virtual HRESULT LockRect(D3DLOCKED_RECT* pLockedRect, const RECT* pRect, DWORD Flags) = 0;
/*0x020*/ virtual HRESULT UnlockRect() = 0;

/*0x28*/ SharedObject<DX11::Device>* Device;
/*0x30*/ SharedObject<DX11::Texture>* Texture;
/*0x38*/ uint32_t              MipLevel;
/*0x3c*/ uint32_t              Padding0x3c;
/*0x40*/
};
constexpr size_t SurfaceImpl_size = 0x40; // @sizeof(SurfaceImpl, EQGraphics) :: 2026-10-19 (live) @ 0x18015C08F
SIZE_CHECK(SurfaceImpl, SurfaceImpl_size);

// Wraps one ID3D11Buffer.
struct [[offsetcomments]] BufferResource
{
/*0x00*/ ID3D11Buffer*         Buffer;
/*0x08*/ uint8_t               Unknown0x08[0x58];
/*0x60*/
};

// "IDirect3DIndexBuffer9"
class [[offsetcomments]] IndexBufferImpl : public ImplBase
{
public:
/*0x008*/ virtual D3DRESOURCETYPE GetType() = 0;     // D3DRTYPE_INDEXBUFFER
/*0x010*/ virtual HRESULT GetDesc(D3DINDEXBUFFER_DESC* pDesc) = 0;
/*0x018*/ virtual HRESULT Lock(UINT OffsetToLock, UINT SizeToLock, void** ppbData, DWORD Flags) = 0;
/*0x020*/ virtual HRESULT Unlock() = 0;

/*0x28*/ SharedObject<DX11::Device>* Device;
/*0x30*/ BufferResource        Buffer;
/*0x90*/ DXGI_FORMAT           Format;
/*0x94*/ uint32_t              Padding0x94[3];
/*0xa0*/
};
constexpr size_t IndexBufferImpl_size = 0xA0; // @sizeof(IndexBufferImpl, EQGraphics) :: 2026-10-19 (live) @ 0x18016C738
SIZE_CHECK(IndexBufferImpl, IndexBufferImpl_size);

// "IDirect3DVertexBuffer9"
// size: 0xb0
class [[offsetcomments]] VertexBufferImpl : public ImplBase
{
public:
/*0x008*/ virtual D3DRESOURCETYPE GetType() = 0;     // D3DRTYPE_VERTEXBUFFER
/*0x010*/ virtual HRESULT GetDesc(D3DVERTEXBUFFER_DESC* pDesc) = 0;
// The extra parameter is the wrapper's own: if true, Lock returns the CPU-side ShadowCopy.
/*0x018*/ virtual HRESULT Lock(UINT OffsetToLock, UINT SizeToLock, void** ppbData, DWORD Flags, bool useShadowCopy) = 0;
/*0x020*/ virtual HRESULT Unlock(bool fromShadowCopy) = 0;

/*0x28*/ SharedObject<DX11::Device>* Device;
/*0x30*/ BufferResource        Buffer;
/*0x90*/ eqstd::vector<uint8_t> ShadowCopy;
/*0xa8*/ uint64_t              Padding0xa8;
/*0xb0*/
};
constexpr size_t VertexBufferImpl_size = 0xB0; // @sizeof(VertexBufferImpl, EQGraphics) :: 2026-10-19 (live) @ 0x18016CA08
SIZE_CHECK(VertexBufferImpl, VertexBufferImpl_size);

// "IDirect3DVertexDeclaration9"
class [[offsetcomments]] VertexDeclarationImpl : public ImplBase
{
public:
/*0x28*/ SharedObject<DX11::DefferedInputLayout>* InputLayout;
/*0x30*/
};
constexpr size_t VertexDeclarationImpl_size = 0x30; // @sizeof(VertexDeclarationImpl, EQGraphics) :: 2026-10-19 (live) @ 0x18016D10B
SIZE_CHECK(VertexDeclarationImpl, VertexDeclarationImpl_size);

} // namespace DX11
} // namespace DX9Wrapper

#endif // ^^ HAS_DIRECTX_11

} // namespace eqlib
