/*** Autogenerated by WIDL 5.8 from d2d1_2.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __d2d1_2_h__
#define __d2d1_2_h__

/* Forward declarations */

#ifndef __ID2D1Device1_FWD_DEFINED__
#define __ID2D1Device1_FWD_DEFINED__
typedef interface ID2D1Device1 ID2D1Device1;
#ifdef __cplusplus
interface ID2D1Device1;
#endif /* __cplusplus */
#endif

#ifndef __ID2D1Factory2_FWD_DEFINED__
#define __ID2D1Factory2_FWD_DEFINED__
typedef interface ID2D1Factory2 ID2D1Factory2;
#ifdef __cplusplus
interface ID2D1Factory2;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <d2d1_1.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __ID2D1DeviceContext1_FWD_DEFINED__
#define __ID2D1DeviceContext1_FWD_DEFINED__
typedef interface ID2D1DeviceContext1 ID2D1DeviceContext1;
#ifdef __cplusplus
interface ID2D1DeviceContext1;
#endif /* __cplusplus */
#endif

typedef enum D2D1_RENDERING_PRIORITY {
    D2D1_RENDERING_PRIORITY_NORMAL = 0,
    D2D1_RENDERING_PRIORITY_LOW = 1,
    D2D1_RENDERING_PRIORITY_FORCE_DWORD = 0xffffffff
} D2D1_RENDERING_PRIORITY;
/*****************************************************************************
 * ID2D1Device1 interface
 */
#ifndef __ID2D1Device1_INTERFACE_DEFINED__
#define __ID2D1Device1_INTERFACE_DEFINED__

DEFINE_GUID(IID_ID2D1Device1, 0xd21768e1, 0x23a4, 0x4823, 0xa1,0x4b, 0x7c,0x3e,0xba,0x85,0xd6,0x58);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("d21768e1-23a4-4823-a14b-7c3eba85d658")
ID2D1Device1 : public ID2D1Device
{
    virtual D2D1_RENDERING_PRIORITY STDMETHODCALLTYPE GetRenderingPriority(
        ) = 0;

    virtual void STDMETHODCALLTYPE SetRenderingPriority(
        D2D1_RENDERING_PRIORITY priority) = 0;

    virtual HRESULT STDMETHODCALLTYPE CreateDeviceContext(
        D2D1_DEVICE_CONTEXT_OPTIONS options,
        ID2D1DeviceContext1 **device_context) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ID2D1Device1, 0xd21768e1, 0x23a4, 0x4823, 0xa1,0x4b, 0x7c,0x3e,0xba,0x85,0xd6,0x58)
#endif
#else
typedef struct ID2D1Device1Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ID2D1Device1 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ID2D1Device1 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ID2D1Device1 *This);

    /*** ID2D1Resource methods ***/
    void (STDMETHODCALLTYPE *GetFactory)(
        ID2D1Device1 *This,
        ID2D1Factory **factory);

    /*** ID2D1Device methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateDeviceContext)(
        ID2D1Device1 *This,
        D2D1_DEVICE_CONTEXT_OPTIONS options,
        ID2D1DeviceContext **context);

    HRESULT (STDMETHODCALLTYPE *CreatePrintControl)(
        ID2D1Device1 *This,
        IWICImagingFactory *wic_factory,
        IPrintDocumentPackageTarget *document_target,
        const D2D1_PRINT_CONTROL_PROPERTIES *desc,
        ID2D1PrintControl **print_control);

    void (STDMETHODCALLTYPE *SetMaximumTextureMemory)(
        ID2D1Device1 *This,
        UINT64 max_texture_memory);

    UINT64 (STDMETHODCALLTYPE *GetMaximumTextureMemory)(
        ID2D1Device1 *This);

    HRESULT (STDMETHODCALLTYPE *ClearResources)(
        ID2D1Device1 *This,
        UINT msec_since_use);

    /*** ID2D1Device1 methods ***/
    D2D1_RENDERING_PRIORITY (STDMETHODCALLTYPE *GetRenderingPriority)(
        ID2D1Device1 *This);

    void (STDMETHODCALLTYPE *SetRenderingPriority)(
        ID2D1Device1 *This,
        D2D1_RENDERING_PRIORITY priority);

    HRESULT (STDMETHODCALLTYPE *ID2D1Device1_CreateDeviceContext)(
        ID2D1Device1 *This,
        D2D1_DEVICE_CONTEXT_OPTIONS options,
        ID2D1DeviceContext1 **device_context);

    END_INTERFACE
} ID2D1Device1Vtbl;

interface ID2D1Device1 {
    CONST_VTBL ID2D1Device1Vtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ID2D1Device1_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ID2D1Device1_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ID2D1Device1_Release(This) (This)->lpVtbl->Release(This)
/*** ID2D1Resource methods ***/
#define ID2D1Device1_GetFactory(This,factory) (This)->lpVtbl->GetFactory(This,factory)
/*** ID2D1Device methods ***/
#define ID2D1Device1_CreatePrintControl(This,wic_factory,document_target,desc,print_control) (This)->lpVtbl->CreatePrintControl(This,wic_factory,document_target,desc,print_control)
#define ID2D1Device1_SetMaximumTextureMemory(This,max_texture_memory) (This)->lpVtbl->SetMaximumTextureMemory(This,max_texture_memory)
#define ID2D1Device1_GetMaximumTextureMemory(This) (This)->lpVtbl->GetMaximumTextureMemory(This)
#define ID2D1Device1_ClearResources(This,msec_since_use) (This)->lpVtbl->ClearResources(This,msec_since_use)
/*** ID2D1Device1 methods ***/
#define ID2D1Device1_GetRenderingPriority(This) (This)->lpVtbl->GetRenderingPriority(This)
#define ID2D1Device1_SetRenderingPriority(This,priority) (This)->lpVtbl->SetRenderingPriority(This,priority)
#define ID2D1Device1_CreateDeviceContext(This,options,device_context) (This)->lpVtbl->ID2D1Device1_CreateDeviceContext(This,options,device_context)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT ID2D1Device1_QueryInterface(ID2D1Device1* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG ID2D1Device1_AddRef(ID2D1Device1* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG ID2D1Device1_Release(ID2D1Device1* This) {
    return This->lpVtbl->Release(This);
}
/*** ID2D1Resource methods ***/
static FORCEINLINE void ID2D1Device1_GetFactory(ID2D1Device1* This,ID2D1Factory **factory) {
    This->lpVtbl->GetFactory(This,factory);
}
/*** ID2D1Device methods ***/
static FORCEINLINE HRESULT ID2D1Device1_CreatePrintControl(ID2D1Device1* This,IWICImagingFactory *wic_factory,IPrintDocumentPackageTarget *document_target,const D2D1_PRINT_CONTROL_PROPERTIES *desc,ID2D1PrintControl **print_control) {
    return This->lpVtbl->CreatePrintControl(This,wic_factory,document_target,desc,print_control);
}
static FORCEINLINE void ID2D1Device1_SetMaximumTextureMemory(ID2D1Device1* This,UINT64 max_texture_memory) {
    This->lpVtbl->SetMaximumTextureMemory(This,max_texture_memory);
}
static FORCEINLINE UINT64 ID2D1Device1_GetMaximumTextureMemory(ID2D1Device1* This) {
    return This->lpVtbl->GetMaximumTextureMemory(This);
}
static FORCEINLINE HRESULT ID2D1Device1_ClearResources(ID2D1Device1* This,UINT msec_since_use) {
    return This->lpVtbl->ClearResources(This,msec_since_use);
}
/*** ID2D1Device1 methods ***/
static FORCEINLINE D2D1_RENDERING_PRIORITY ID2D1Device1_GetRenderingPriority(ID2D1Device1* This) {
    return This->lpVtbl->GetRenderingPriority(This);
}
static FORCEINLINE void ID2D1Device1_SetRenderingPriority(ID2D1Device1* This,D2D1_RENDERING_PRIORITY priority) {
    This->lpVtbl->SetRenderingPriority(This,priority);
}
static FORCEINLINE HRESULT ID2D1Device1_CreateDeviceContext(ID2D1Device1* This,D2D1_DEVICE_CONTEXT_OPTIONS options,ID2D1DeviceContext1 **device_context) {
    return This->lpVtbl->ID2D1Device1_CreateDeviceContext(This,options,device_context);
}
#endif
#endif

#endif


#endif  /* __ID2D1Device1_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ID2D1Factory2 interface
 */
#ifndef __ID2D1Factory2_INTERFACE_DEFINED__
#define __ID2D1Factory2_INTERFACE_DEFINED__

DEFINE_GUID(IID_ID2D1Factory2, 0x94f81a73, 0x9212, 0x4376, 0x9c,0x58, 0xb1,0x6a,0x3a,0x0d,0x39,0x92);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("94f81a73-9212-4376-9c58-b16a3a0d3992")
ID2D1Factory2 : public ID2D1Factory1
{
    virtual HRESULT STDMETHODCALLTYPE CreateDevice(
        IDXGIDevice *dxgi_device,
        ID2D1Device1 **device) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ID2D1Factory2, 0x94f81a73, 0x9212, 0x4376, 0x9c,0x58, 0xb1,0x6a,0x3a,0x0d,0x39,0x92)
#endif
#else
typedef struct ID2D1Factory2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ID2D1Factory2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ID2D1Factory2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ID2D1Factory2 *This);

    /*** ID2D1Factory methods ***/
    HRESULT (STDMETHODCALLTYPE *ReloadSystemMetrics)(
        ID2D1Factory2 *This);

    void (STDMETHODCALLTYPE *GetDesktopDpi)(
        ID2D1Factory2 *This,
        float *dpi_x,
        float *dpi_y);

    HRESULT (STDMETHODCALLTYPE *CreateRectangleGeometry)(
        ID2D1Factory2 *This,
        const D2D1_RECT_F *rect,
        ID2D1RectangleGeometry **geometry);

    HRESULT (STDMETHODCALLTYPE *CreateRoundedRectangleGeometry)(
        ID2D1Factory2 *This,
        const D2D1_ROUNDED_RECT *rect,
        ID2D1RoundedRectangleGeometry **geometry);

    HRESULT (STDMETHODCALLTYPE *CreateEllipseGeometry)(
        ID2D1Factory2 *This,
        const D2D1_ELLIPSE *ellipse,
        ID2D1EllipseGeometry **geometry);

    HRESULT (STDMETHODCALLTYPE *CreateGeometryGroup)(
        ID2D1Factory2 *This,
        D2D1_FILL_MODE fill_mode,
        ID2D1Geometry **geometries,
        UINT32 geometry_count,
        ID2D1GeometryGroup **group);

    HRESULT (STDMETHODCALLTYPE *CreateTransformedGeometry)(
        ID2D1Factory2 *This,
        ID2D1Geometry *src_geometry,
        const D2D1_MATRIX_3X2_F *transform,
        ID2D1TransformedGeometry **transformed_geometry);

    HRESULT (STDMETHODCALLTYPE *CreatePathGeometry)(
        ID2D1Factory2 *This,
        ID2D1PathGeometry **geometry);

    HRESULT (STDMETHODCALLTYPE *CreateStrokeStyle)(
        ID2D1Factory2 *This,
        const D2D1_STROKE_STYLE_PROPERTIES *desc,
        const float *dashes,
        UINT32 dash_count,
        ID2D1StrokeStyle **stroke_style);

    HRESULT (STDMETHODCALLTYPE *CreateDrawingStateBlock)(
        ID2D1Factory2 *This,
        const D2D1_DRAWING_STATE_DESCRIPTION *desc,
        IDWriteRenderingParams *text_rendering_params,
        ID2D1DrawingStateBlock **state_block);

    HRESULT (STDMETHODCALLTYPE *CreateWicBitmapRenderTarget)(
        ID2D1Factory2 *This,
        IWICBitmap *target,
        const D2D1_RENDER_TARGET_PROPERTIES *desc,
        ID2D1RenderTarget **render_target);

    HRESULT (STDMETHODCALLTYPE *CreateHwndRenderTarget)(
        ID2D1Factory2 *This,
        const D2D1_RENDER_TARGET_PROPERTIES *desc,
        const D2D1_HWND_RENDER_TARGET_PROPERTIES *hwnd_rt_desc,
        ID2D1HwndRenderTarget **render_target);

    HRESULT (STDMETHODCALLTYPE *CreateDxgiSurfaceRenderTarget)(
        ID2D1Factory2 *This,
        IDXGISurface *surface,
        const D2D1_RENDER_TARGET_PROPERTIES *desc,
        ID2D1RenderTarget **render_target);

    HRESULT (STDMETHODCALLTYPE *CreateDCRenderTarget)(
        ID2D1Factory2 *This,
        const D2D1_RENDER_TARGET_PROPERTIES *desc,
        ID2D1DCRenderTarget **render_target);

    /*** ID2D1Factory1 methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateDevice)(
        ID2D1Factory2 *This,
        IDXGIDevice *dxgi_device,
        ID2D1Device **device);

    HRESULT (STDMETHODCALLTYPE *ID2D1Factory1_CreateStrokeStyle)(
        ID2D1Factory2 *This,
        const D2D1_STROKE_STYLE_PROPERTIES1 *desc,
        const float *dashes,
        UINT32 dash_count,
        ID2D1StrokeStyle1 **stroke_style);

    HRESULT (STDMETHODCALLTYPE *ID2D1Factory1_CreatePathGeometry)(
        ID2D1Factory2 *This,
        ID2D1PathGeometry1 **geometry);

    HRESULT (STDMETHODCALLTYPE *ID2D1Factory1_CreateDrawingStateBlock)(
        ID2D1Factory2 *This,
        const D2D1_DRAWING_STATE_DESCRIPTION1 *desc,
        IDWriteRenderingParams *text_rendering_params,
        ID2D1DrawingStateBlock1 **state_block);

    HRESULT (STDMETHODCALLTYPE *CreateGdiMetafile)(
        ID2D1Factory2 *This,
        IStream *stream,
        ID2D1GdiMetafile **metafile);

    HRESULT (STDMETHODCALLTYPE *RegisterEffectFromStream)(
        ID2D1Factory2 *This,
        REFCLSID effect_id,
        IStream *property_xml,
        const D2D1_PROPERTY_BINDING *bindings,
        UINT32 binding_count,
        PD2D1_EFFECT_FACTORY effect_factory);

    HRESULT (STDMETHODCALLTYPE *RegisterEffectFromString)(
        ID2D1Factory2 *This,
        REFCLSID effect_id,
        const WCHAR *property_xml,
        const D2D1_PROPERTY_BINDING *bindings,
        UINT32 binding_count,
        PD2D1_EFFECT_FACTORY effect_factory);

    HRESULT (STDMETHODCALLTYPE *UnregisterEffect)(
        ID2D1Factory2 *This,
        REFCLSID effect_id);

    HRESULT (STDMETHODCALLTYPE *GetRegisteredEffects)(
        ID2D1Factory2 *This,
        CLSID *effects,
        UINT32 effect_count,
        UINT32 *returned,
        UINT32 *registered);

    HRESULT (STDMETHODCALLTYPE *GetEffectProperties)(
        ID2D1Factory2 *This,
        REFCLSID effect_id,
        ID2D1Properties **props);

    /*** ID2D1Factory2 methods ***/
    HRESULT (STDMETHODCALLTYPE *ID2D1Factory2_CreateDevice)(
        ID2D1Factory2 *This,
        IDXGIDevice *dxgi_device,
        ID2D1Device1 **device);

    END_INTERFACE
} ID2D1Factory2Vtbl;

interface ID2D1Factory2 {
    CONST_VTBL ID2D1Factory2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ID2D1Factory2_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ID2D1Factory2_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ID2D1Factory2_Release(This) (This)->lpVtbl->Release(This)
/*** ID2D1Factory methods ***/
#define ID2D1Factory2_ReloadSystemMetrics(This) (This)->lpVtbl->ReloadSystemMetrics(This)
#define ID2D1Factory2_GetDesktopDpi(This,dpi_x,dpi_y) (This)->lpVtbl->GetDesktopDpi(This,dpi_x,dpi_y)
#define ID2D1Factory2_CreateRectangleGeometry(This,rect,geometry) (This)->lpVtbl->CreateRectangleGeometry(This,rect,geometry)
#define ID2D1Factory2_CreateRoundedRectangleGeometry(This,rect,geometry) (This)->lpVtbl->CreateRoundedRectangleGeometry(This,rect,geometry)
#define ID2D1Factory2_CreateEllipseGeometry(This,ellipse,geometry) (This)->lpVtbl->CreateEllipseGeometry(This,ellipse,geometry)
#define ID2D1Factory2_CreateGeometryGroup(This,fill_mode,geometries,geometry_count,group) (This)->lpVtbl->CreateGeometryGroup(This,fill_mode,geometries,geometry_count,group)
#define ID2D1Factory2_CreateTransformedGeometry(This,src_geometry,transform,transformed_geometry) (This)->lpVtbl->CreateTransformedGeometry(This,src_geometry,transform,transformed_geometry)
#define ID2D1Factory2_CreateWicBitmapRenderTarget(This,target,desc,render_target) (This)->lpVtbl->CreateWicBitmapRenderTarget(This,target,desc,render_target)
#define ID2D1Factory2_CreateHwndRenderTarget(This,desc,hwnd_rt_desc,render_target) (This)->lpVtbl->CreateHwndRenderTarget(This,desc,hwnd_rt_desc,render_target)
#define ID2D1Factory2_CreateDxgiSurfaceRenderTarget(This,surface,desc,render_target) (This)->lpVtbl->CreateDxgiSurfaceRenderTarget(This,surface,desc,render_target)
#define ID2D1Factory2_CreateDCRenderTarget(This,desc,render_target) (This)->lpVtbl->CreateDCRenderTarget(This,desc,render_target)
/*** ID2D1Factory1 methods ***/
#define ID2D1Factory2_CreateStrokeStyle(This,desc,dashes,dash_count,stroke_style) (This)->lpVtbl->ID2D1Factory1_CreateStrokeStyle(This,desc,dashes,dash_count,stroke_style)
#define ID2D1Factory2_CreatePathGeometry(This,geometry) (This)->lpVtbl->ID2D1Factory1_CreatePathGeometry(This,geometry)
#define ID2D1Factory2_CreateDrawingStateBlock(This,desc,text_rendering_params,state_block) (This)->lpVtbl->ID2D1Factory1_CreateDrawingStateBlock(This,desc,text_rendering_params,state_block)
#define ID2D1Factory2_CreateGdiMetafile(This,stream,metafile) (This)->lpVtbl->CreateGdiMetafile(This,stream,metafile)
#define ID2D1Factory2_RegisterEffectFromStream(This,effect_id,property_xml,bindings,binding_count,effect_factory) (This)->lpVtbl->RegisterEffectFromStream(This,effect_id,property_xml,bindings,binding_count,effect_factory)
#define ID2D1Factory2_RegisterEffectFromString(This,effect_id,property_xml,bindings,binding_count,effect_factory) (This)->lpVtbl->RegisterEffectFromString(This,effect_id,property_xml,bindings,binding_count,effect_factory)
#define ID2D1Factory2_UnregisterEffect(This,effect_id) (This)->lpVtbl->UnregisterEffect(This,effect_id)
#define ID2D1Factory2_GetRegisteredEffects(This,effects,effect_count,returned,registered) (This)->lpVtbl->GetRegisteredEffects(This,effects,effect_count,returned,registered)
#define ID2D1Factory2_GetEffectProperties(This,effect_id,props) (This)->lpVtbl->GetEffectProperties(This,effect_id,props)
/*** ID2D1Factory2 methods ***/
#define ID2D1Factory2_CreateDevice(This,dxgi_device,device) (This)->lpVtbl->ID2D1Factory2_CreateDevice(This,dxgi_device,device)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT ID2D1Factory2_QueryInterface(ID2D1Factory2* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG ID2D1Factory2_AddRef(ID2D1Factory2* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG ID2D1Factory2_Release(ID2D1Factory2* This) {
    return This->lpVtbl->Release(This);
}
/*** ID2D1Factory methods ***/
static FORCEINLINE HRESULT ID2D1Factory2_ReloadSystemMetrics(ID2D1Factory2* This) {
    return This->lpVtbl->ReloadSystemMetrics(This);
}
static FORCEINLINE void ID2D1Factory2_GetDesktopDpi(ID2D1Factory2* This,float *dpi_x,float *dpi_y) {
    This->lpVtbl->GetDesktopDpi(This,dpi_x,dpi_y);
}
static FORCEINLINE HRESULT ID2D1Factory2_CreateRectangleGeometry(ID2D1Factory2* This,const D2D1_RECT_F *rect,ID2D1RectangleGeometry **geometry) {
    return This->lpVtbl->CreateRectangleGeometry(This,rect,geometry);
}
static FORCEINLINE HRESULT ID2D1Factory2_CreateRoundedRectangleGeometry(ID2D1Factory2* This,const D2D1_ROUNDED_RECT *rect,ID2D1RoundedRectangleGeometry **geometry) {
    return This->lpVtbl->CreateRoundedRectangleGeometry(This,rect,geometry);
}
static FORCEINLINE HRESULT ID2D1Factory2_CreateEllipseGeometry(ID2D1Factory2* This,const D2D1_ELLIPSE *ellipse,ID2D1EllipseGeometry **geometry) {
    return This->lpVtbl->CreateEllipseGeometry(This,ellipse,geometry);
}
static FORCEINLINE HRESULT ID2D1Factory2_CreateGeometryGroup(ID2D1Factory2* This,D2D1_FILL_MODE fill_mode,ID2D1Geometry **geometries,UINT32 geometry_count,ID2D1GeometryGroup **group) {
    return This->lpVtbl->CreateGeometryGroup(This,fill_mode,geometries,geometry_count,group);
}
static FORCEINLINE HRESULT ID2D1Factory2_CreateTransformedGeometry(ID2D1Factory2* This,ID2D1Geometry *src_geometry,const D2D1_MATRIX_3X2_F *transform,ID2D1TransformedGeometry **transformed_geometry) {
    return This->lpVtbl->CreateTransformedGeometry(This,src_geometry,transform,transformed_geometry);
}
static FORCEINLINE HRESULT ID2D1Factory2_CreateWicBitmapRenderTarget(ID2D1Factory2* This,IWICBitmap *target,const D2D1_RENDER_TARGET_PROPERTIES *desc,ID2D1RenderTarget **render_target) {
    return This->lpVtbl->CreateWicBitmapRenderTarget(This,target,desc,render_target);
}
static FORCEINLINE HRESULT ID2D1Factory2_CreateHwndRenderTarget(ID2D1Factory2* This,const D2D1_RENDER_TARGET_PROPERTIES *desc,const D2D1_HWND_RENDER_TARGET_PROPERTIES *hwnd_rt_desc,ID2D1HwndRenderTarget **render_target) {
    return This->lpVtbl->CreateHwndRenderTarget(This,desc,hwnd_rt_desc,render_target);
}
static FORCEINLINE HRESULT ID2D1Factory2_CreateDxgiSurfaceRenderTarget(ID2D1Factory2* This,IDXGISurface *surface,const D2D1_RENDER_TARGET_PROPERTIES *desc,ID2D1RenderTarget **render_target) {
    return This->lpVtbl->CreateDxgiSurfaceRenderTarget(This,surface,desc,render_target);
}
static FORCEINLINE HRESULT ID2D1Factory2_CreateDCRenderTarget(ID2D1Factory2* This,const D2D1_RENDER_TARGET_PROPERTIES *desc,ID2D1DCRenderTarget **render_target) {
    return This->lpVtbl->CreateDCRenderTarget(This,desc,render_target);
}
/*** ID2D1Factory1 methods ***/
static FORCEINLINE HRESULT ID2D1Factory2_CreateStrokeStyle(ID2D1Factory2* This,const D2D1_STROKE_STYLE_PROPERTIES1 *desc,const float *dashes,UINT32 dash_count,ID2D1StrokeStyle1 **stroke_style) {
    return This->lpVtbl->ID2D1Factory1_CreateStrokeStyle(This,desc,dashes,dash_count,stroke_style);
}
static FORCEINLINE HRESULT ID2D1Factory2_CreatePathGeometry(ID2D1Factory2* This,ID2D1PathGeometry1 **geometry) {
    return This->lpVtbl->ID2D1Factory1_CreatePathGeometry(This,geometry);
}
static FORCEINLINE HRESULT ID2D1Factory2_CreateDrawingStateBlock(ID2D1Factory2* This,const D2D1_DRAWING_STATE_DESCRIPTION1 *desc,IDWriteRenderingParams *text_rendering_params,ID2D1DrawingStateBlock1 **state_block) {
    return This->lpVtbl->ID2D1Factory1_CreateDrawingStateBlock(This,desc,text_rendering_params,state_block);
}
static FORCEINLINE HRESULT ID2D1Factory2_CreateGdiMetafile(ID2D1Factory2* This,IStream *stream,ID2D1GdiMetafile **metafile) {
    return This->lpVtbl->CreateGdiMetafile(This,stream,metafile);
}
static FORCEINLINE HRESULT ID2D1Factory2_RegisterEffectFromStream(ID2D1Factory2* This,REFCLSID effect_id,IStream *property_xml,const D2D1_PROPERTY_BINDING *bindings,UINT32 binding_count,PD2D1_EFFECT_FACTORY effect_factory) {
    return This->lpVtbl->RegisterEffectFromStream(This,effect_id,property_xml,bindings,binding_count,effect_factory);
}
static FORCEINLINE HRESULT ID2D1Factory2_RegisterEffectFromString(ID2D1Factory2* This,REFCLSID effect_id,const WCHAR *property_xml,const D2D1_PROPERTY_BINDING *bindings,UINT32 binding_count,PD2D1_EFFECT_FACTORY effect_factory) {
    return This->lpVtbl->RegisterEffectFromString(This,effect_id,property_xml,bindings,binding_count,effect_factory);
}
static FORCEINLINE HRESULT ID2D1Factory2_UnregisterEffect(ID2D1Factory2* This,REFCLSID effect_id) {
    return This->lpVtbl->UnregisterEffect(This,effect_id);
}
static FORCEINLINE HRESULT ID2D1Factory2_GetRegisteredEffects(ID2D1Factory2* This,CLSID *effects,UINT32 effect_count,UINT32 *returned,UINT32 *registered) {
    return This->lpVtbl->GetRegisteredEffects(This,effects,effect_count,returned,registered);
}
static FORCEINLINE HRESULT ID2D1Factory2_GetEffectProperties(ID2D1Factory2* This,REFCLSID effect_id,ID2D1Properties **props) {
    return This->lpVtbl->GetEffectProperties(This,effect_id,props);
}
/*** ID2D1Factory2 methods ***/
static FORCEINLINE HRESULT ID2D1Factory2_CreateDevice(ID2D1Factory2* This,IDXGIDevice *dxgi_device,ID2D1Device1 **device) {
    return This->lpVtbl->ID2D1Factory2_CreateDevice(This,dxgi_device,device);
}
#endif
#endif

#endif


#endif  /* __ID2D1Factory2_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __d2d1_2_h__ */
