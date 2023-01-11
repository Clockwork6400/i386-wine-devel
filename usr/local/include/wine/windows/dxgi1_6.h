/*** Autogenerated by WIDL 5.8 from dxgi1_6.idl - Do not edit ***/

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

#ifndef __dxgi1_6_h__
#define __dxgi1_6_h__

/* Forward declarations */

#ifndef __IDXGIAdapter4_FWD_DEFINED__
#define __IDXGIAdapter4_FWD_DEFINED__
typedef interface IDXGIAdapter4 IDXGIAdapter4;
#ifdef __cplusplus
interface IDXGIAdapter4;
#endif /* __cplusplus */
#endif

#ifndef __IDXGIOutput6_FWD_DEFINED__
#define __IDXGIOutput6_FWD_DEFINED__
typedef interface IDXGIOutput6 IDXGIOutput6;
#ifdef __cplusplus
interface IDXGIOutput6;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <dxgi1_5.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum DXGI_ADAPTER_FLAG3 {
    DXGI_ADAPTER_FLAG3_NONE = 0x0,
    DXGI_ADAPTER_FLAG3_REMOTE = 0x1,
    DXGI_ADAPTER_FLAG3_SOFTWARE = 0x2,
    DXGI_ADAPTER_FLAG3_ACG_COMPATIBLE = 0x4,
    DXGI_ADAPTER_FLAG3_FORCE_DWORD = 0xffffffff
} DXGI_ADAPTER_FLAG3;
typedef enum DXGI_HARDWARE_COMPOSITION_SUPPORT_FLAGS {
    DXGI_HARDWARE_COMPOSITION_SUPPORT_FLAG_FULLSCREEN = 0x1,
    DXGI_HARDWARE_COMPOSITION_SUPPORT_FLAG_WINDOWED = 0x2,
    DXGI_HARDWARE_COMPOSITION_SUPPORT_FLAG_CURSOR_STRETCHED = 0x4
} DXGI_HARDWARE_COMPOSITION_SUPPORT_FLAGS;
typedef struct DXGI_ADAPTER_DESC3 {
    WCHAR Description[128];
    UINT VendorId;
    UINT DeviceId;
    UINT SubSysId;
    UINT Revision;
    SIZE_T DedicatedVideoMemory;
    SIZE_T DedicatedSystemMemory;
    SIZE_T SharedSystemMemory;
    LUID AdapterLuid;
    DXGI_ADAPTER_FLAG3 Flags;
    DXGI_GRAPHICS_PREEMPTION_GRANULARITY GraphicsPreemptionGranularity;
    DXGI_COMPUTE_PREEMPTION_GRANULARITY ComputePreemptionGranularity;
} DXGI_ADAPTER_DESC3;
typedef struct DXGI_OUTPUT_DESC1 {
    WCHAR DeviceName[32];
    RECT DesktopCoordinates;
    BOOL AttachedToDesktop;
    DXGI_MODE_ROTATION Rotation;
    HMONITOR Monitor;
    UINT BitsPerColor;
    DXGI_COLOR_SPACE_TYPE ColorSpace;
    FLOAT RedPrimary[2];
    FLOAT GreenPrimary[2];
    FLOAT BluePrimary[2];
    FLOAT WhitePoint[2];
    FLOAT MinLuminance;
    FLOAT MaxLuminance;
    FLOAT MaxFullFrameLuminance;
} DXGI_OUTPUT_DESC1;
/*****************************************************************************
 * IDXGIAdapter4 interface
 */
#ifndef __IDXGIAdapter4_INTERFACE_DEFINED__
#define __IDXGIAdapter4_INTERFACE_DEFINED__

DEFINE_GUID(IID_IDXGIAdapter4, 0x3c8d99d1, 0x4fbf, 0x4181, 0xa8,0x2c, 0xaf,0x66,0xbf,0x7b,0xd2,0x4e);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("3c8d99d1-4fbf-4181-a82c-af66bf7bd24e")
IDXGIAdapter4 : public IDXGIAdapter3
{
    virtual HRESULT STDMETHODCALLTYPE GetDesc3(
        DXGI_ADAPTER_DESC3 *desc) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IDXGIAdapter4, 0x3c8d99d1, 0x4fbf, 0x4181, 0xa8,0x2c, 0xaf,0x66,0xbf,0x7b,0xd2,0x4e)
#endif
#else
typedef struct IDXGIAdapter4Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDXGIAdapter4 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDXGIAdapter4 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDXGIAdapter4 *This);

    /*** IDXGIObject methods ***/
    HRESULT (STDMETHODCALLTYPE *SetPrivateData)(
        IDXGIAdapter4 *This,
        REFGUID guid,
        UINT data_size,
        const void *data);

    HRESULT (STDMETHODCALLTYPE *SetPrivateDataInterface)(
        IDXGIAdapter4 *This,
        REFGUID guid,
        const IUnknown *object);

    HRESULT (STDMETHODCALLTYPE *GetPrivateData)(
        IDXGIAdapter4 *This,
        REFGUID guid,
        UINT *data_size,
        void *data);

    HRESULT (STDMETHODCALLTYPE *GetParent)(
        IDXGIAdapter4 *This,
        REFIID riid,
        void **parent);

    /*** IDXGIAdapter methods ***/
    HRESULT (STDMETHODCALLTYPE *EnumOutputs)(
        IDXGIAdapter4 *This,
        UINT output_idx,
        IDXGIOutput **output);

    HRESULT (STDMETHODCALLTYPE *GetDesc)(
        IDXGIAdapter4 *This,
        DXGI_ADAPTER_DESC *desc);

    HRESULT (STDMETHODCALLTYPE *CheckInterfaceSupport)(
        IDXGIAdapter4 *This,
        REFGUID guid,
        LARGE_INTEGER *umd_version);

    /*** IDXGIAdapter1 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDesc1)(
        IDXGIAdapter4 *This,
        DXGI_ADAPTER_DESC1 *pDesc);

    /*** IDXGIAdapter2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDesc2)(
        IDXGIAdapter4 *This,
        DXGI_ADAPTER_DESC2 *pDesc);

    /*** IDXGIAdapter3 methods ***/
    HRESULT (STDMETHODCALLTYPE *RegisterHardwareContentProtectionTeardownStatusEvent)(
        IDXGIAdapter4 *This,
        HANDLE event,
        DWORD *cookie);

    void (STDMETHODCALLTYPE *UnregisterHardwareContentProtectionTeardownStatus)(
        IDXGIAdapter4 *This,
        DWORD cookie);

    HRESULT (STDMETHODCALLTYPE *QueryVideoMemoryInfo)(
        IDXGIAdapter4 *This,
        UINT node_index,
        DXGI_MEMORY_SEGMENT_GROUP segment_group,
        DXGI_QUERY_VIDEO_MEMORY_INFO *memory_info);

    HRESULT (STDMETHODCALLTYPE *SetVideoMemoryReservation)(
        IDXGIAdapter4 *This,
        UINT node_index,
        DXGI_MEMORY_SEGMENT_GROUP segment_group,
        UINT64 reservation);

    HRESULT (STDMETHODCALLTYPE *RegisterVideoMemoryBudgetChangeNotificationEvent)(
        IDXGIAdapter4 *This,
        HANDLE event,
        DWORD *cookie);

    void (STDMETHODCALLTYPE *UnregisterVideoMemoryBudgetChangeNotification)(
        IDXGIAdapter4 *This,
        DWORD cookie);

    /*** IDXGIAdapter4 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDesc3)(
        IDXGIAdapter4 *This,
        DXGI_ADAPTER_DESC3 *desc);

    END_INTERFACE
} IDXGIAdapter4Vtbl;

interface IDXGIAdapter4 {
    CONST_VTBL IDXGIAdapter4Vtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IDXGIAdapter4_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IDXGIAdapter4_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IDXGIAdapter4_Release(This) (This)->lpVtbl->Release(This)
/*** IDXGIObject methods ***/
#define IDXGIAdapter4_SetPrivateData(This,guid,data_size,data) (This)->lpVtbl->SetPrivateData(This,guid,data_size,data)
#define IDXGIAdapter4_SetPrivateDataInterface(This,guid,object) (This)->lpVtbl->SetPrivateDataInterface(This,guid,object)
#define IDXGIAdapter4_GetPrivateData(This,guid,data_size,data) (This)->lpVtbl->GetPrivateData(This,guid,data_size,data)
#define IDXGIAdapter4_GetParent(This,riid,parent) (This)->lpVtbl->GetParent(This,riid,parent)
/*** IDXGIAdapter methods ***/
#define IDXGIAdapter4_EnumOutputs(This,output_idx,output) (This)->lpVtbl->EnumOutputs(This,output_idx,output)
#define IDXGIAdapter4_GetDesc(This,desc) (This)->lpVtbl->GetDesc(This,desc)
#define IDXGIAdapter4_CheckInterfaceSupport(This,guid,umd_version) (This)->lpVtbl->CheckInterfaceSupport(This,guid,umd_version)
/*** IDXGIAdapter1 methods ***/
#define IDXGIAdapter4_GetDesc1(This,pDesc) (This)->lpVtbl->GetDesc1(This,pDesc)
/*** IDXGIAdapter2 methods ***/
#define IDXGIAdapter4_GetDesc2(This,pDesc) (This)->lpVtbl->GetDesc2(This,pDesc)
/*** IDXGIAdapter3 methods ***/
#define IDXGIAdapter4_RegisterHardwareContentProtectionTeardownStatusEvent(This,event,cookie) (This)->lpVtbl->RegisterHardwareContentProtectionTeardownStatusEvent(This,event,cookie)
#define IDXGIAdapter4_UnregisterHardwareContentProtectionTeardownStatus(This,cookie) (This)->lpVtbl->UnregisterHardwareContentProtectionTeardownStatus(This,cookie)
#define IDXGIAdapter4_QueryVideoMemoryInfo(This,node_index,segment_group,memory_info) (This)->lpVtbl->QueryVideoMemoryInfo(This,node_index,segment_group,memory_info)
#define IDXGIAdapter4_SetVideoMemoryReservation(This,node_index,segment_group,reservation) (This)->lpVtbl->SetVideoMemoryReservation(This,node_index,segment_group,reservation)
#define IDXGIAdapter4_RegisterVideoMemoryBudgetChangeNotificationEvent(This,event,cookie) (This)->lpVtbl->RegisterVideoMemoryBudgetChangeNotificationEvent(This,event,cookie)
#define IDXGIAdapter4_UnregisterVideoMemoryBudgetChangeNotification(This,cookie) (This)->lpVtbl->UnregisterVideoMemoryBudgetChangeNotification(This,cookie)
/*** IDXGIAdapter4 methods ***/
#define IDXGIAdapter4_GetDesc3(This,desc) (This)->lpVtbl->GetDesc3(This,desc)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IDXGIAdapter4_QueryInterface(IDXGIAdapter4* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IDXGIAdapter4_AddRef(IDXGIAdapter4* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IDXGIAdapter4_Release(IDXGIAdapter4* This) {
    return This->lpVtbl->Release(This);
}
/*** IDXGIObject methods ***/
static FORCEINLINE HRESULT IDXGIAdapter4_SetPrivateData(IDXGIAdapter4* This,REFGUID guid,UINT data_size,const void *data) {
    return This->lpVtbl->SetPrivateData(This,guid,data_size,data);
}
static FORCEINLINE HRESULT IDXGIAdapter4_SetPrivateDataInterface(IDXGIAdapter4* This,REFGUID guid,const IUnknown *object) {
    return This->lpVtbl->SetPrivateDataInterface(This,guid,object);
}
static FORCEINLINE HRESULT IDXGIAdapter4_GetPrivateData(IDXGIAdapter4* This,REFGUID guid,UINT *data_size,void *data) {
    return This->lpVtbl->GetPrivateData(This,guid,data_size,data);
}
static FORCEINLINE HRESULT IDXGIAdapter4_GetParent(IDXGIAdapter4* This,REFIID riid,void **parent) {
    return This->lpVtbl->GetParent(This,riid,parent);
}
/*** IDXGIAdapter methods ***/
static FORCEINLINE HRESULT IDXGIAdapter4_EnumOutputs(IDXGIAdapter4* This,UINT output_idx,IDXGIOutput **output) {
    return This->lpVtbl->EnumOutputs(This,output_idx,output);
}
static FORCEINLINE HRESULT IDXGIAdapter4_GetDesc(IDXGIAdapter4* This,DXGI_ADAPTER_DESC *desc) {
    return This->lpVtbl->GetDesc(This,desc);
}
static FORCEINLINE HRESULT IDXGIAdapter4_CheckInterfaceSupport(IDXGIAdapter4* This,REFGUID guid,LARGE_INTEGER *umd_version) {
    return This->lpVtbl->CheckInterfaceSupport(This,guid,umd_version);
}
/*** IDXGIAdapter1 methods ***/
static FORCEINLINE HRESULT IDXGIAdapter4_GetDesc1(IDXGIAdapter4* This,DXGI_ADAPTER_DESC1 *pDesc) {
    return This->lpVtbl->GetDesc1(This,pDesc);
}
/*** IDXGIAdapter2 methods ***/
static FORCEINLINE HRESULT IDXGIAdapter4_GetDesc2(IDXGIAdapter4* This,DXGI_ADAPTER_DESC2 *pDesc) {
    return This->lpVtbl->GetDesc2(This,pDesc);
}
/*** IDXGIAdapter3 methods ***/
static FORCEINLINE HRESULT IDXGIAdapter4_RegisterHardwareContentProtectionTeardownStatusEvent(IDXGIAdapter4* This,HANDLE event,DWORD *cookie) {
    return This->lpVtbl->RegisterHardwareContentProtectionTeardownStatusEvent(This,event,cookie);
}
static FORCEINLINE void IDXGIAdapter4_UnregisterHardwareContentProtectionTeardownStatus(IDXGIAdapter4* This,DWORD cookie) {
    This->lpVtbl->UnregisterHardwareContentProtectionTeardownStatus(This,cookie);
}
static FORCEINLINE HRESULT IDXGIAdapter4_QueryVideoMemoryInfo(IDXGIAdapter4* This,UINT node_index,DXGI_MEMORY_SEGMENT_GROUP segment_group,DXGI_QUERY_VIDEO_MEMORY_INFO *memory_info) {
    return This->lpVtbl->QueryVideoMemoryInfo(This,node_index,segment_group,memory_info);
}
static FORCEINLINE HRESULT IDXGIAdapter4_SetVideoMemoryReservation(IDXGIAdapter4* This,UINT node_index,DXGI_MEMORY_SEGMENT_GROUP segment_group,UINT64 reservation) {
    return This->lpVtbl->SetVideoMemoryReservation(This,node_index,segment_group,reservation);
}
static FORCEINLINE HRESULT IDXGIAdapter4_RegisterVideoMemoryBudgetChangeNotificationEvent(IDXGIAdapter4* This,HANDLE event,DWORD *cookie) {
    return This->lpVtbl->RegisterVideoMemoryBudgetChangeNotificationEvent(This,event,cookie);
}
static FORCEINLINE void IDXGIAdapter4_UnregisterVideoMemoryBudgetChangeNotification(IDXGIAdapter4* This,DWORD cookie) {
    This->lpVtbl->UnregisterVideoMemoryBudgetChangeNotification(This,cookie);
}
/*** IDXGIAdapter4 methods ***/
static FORCEINLINE HRESULT IDXGIAdapter4_GetDesc3(IDXGIAdapter4* This,DXGI_ADAPTER_DESC3 *desc) {
    return This->lpVtbl->GetDesc3(This,desc);
}
#endif
#endif

#endif


#endif  /* __IDXGIAdapter4_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IDXGIOutput6 interface
 */
#ifndef __IDXGIOutput6_INTERFACE_DEFINED__
#define __IDXGIOutput6_INTERFACE_DEFINED__

DEFINE_GUID(IID_IDXGIOutput6, 0x068346e8, 0xaaec, 0x4b84, 0xad,0xd7, 0x13,0x7f,0x51,0x3f,0x77,0xa1);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("068346e8-aaec-4b84-add7-137f513f77a1")
IDXGIOutput6 : public IDXGIOutput5
{
    virtual HRESULT STDMETHODCALLTYPE GetDesc1(
        DXGI_OUTPUT_DESC1 *desc) = 0;

    virtual HRESULT STDMETHODCALLTYPE CheckHardwareCompositionSupport(
        UINT *flags) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IDXGIOutput6, 0x068346e8, 0xaaec, 0x4b84, 0xad,0xd7, 0x13,0x7f,0x51,0x3f,0x77,0xa1)
#endif
#else
typedef struct IDXGIOutput6Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDXGIOutput6 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDXGIOutput6 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDXGIOutput6 *This);

    /*** IDXGIObject methods ***/
    HRESULT (STDMETHODCALLTYPE *SetPrivateData)(
        IDXGIOutput6 *This,
        REFGUID guid,
        UINT data_size,
        const void *data);

    HRESULT (STDMETHODCALLTYPE *SetPrivateDataInterface)(
        IDXGIOutput6 *This,
        REFGUID guid,
        const IUnknown *object);

    HRESULT (STDMETHODCALLTYPE *GetPrivateData)(
        IDXGIOutput6 *This,
        REFGUID guid,
        UINT *data_size,
        void *data);

    HRESULT (STDMETHODCALLTYPE *GetParent)(
        IDXGIOutput6 *This,
        REFIID riid,
        void **parent);

    /*** IDXGIOutput methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDesc)(
        IDXGIOutput6 *This,
        DXGI_OUTPUT_DESC *desc);

    HRESULT (STDMETHODCALLTYPE *GetDisplayModeList)(
        IDXGIOutput6 *This,
        DXGI_FORMAT format,
        UINT flags,
        UINT *mode_count,
        DXGI_MODE_DESC *desc);

    HRESULT (STDMETHODCALLTYPE *FindClosestMatchingMode)(
        IDXGIOutput6 *This,
        const DXGI_MODE_DESC *mode,
        DXGI_MODE_DESC *closest_match,
        IUnknown *device);

    HRESULT (STDMETHODCALLTYPE *WaitForVBlank)(
        IDXGIOutput6 *This);

    HRESULT (STDMETHODCALLTYPE *TakeOwnership)(
        IDXGIOutput6 *This,
        IUnknown *device,
        BOOL exclusive);

    void (STDMETHODCALLTYPE *ReleaseOwnership)(
        IDXGIOutput6 *This);

    HRESULT (STDMETHODCALLTYPE *GetGammaControlCapabilities)(
        IDXGIOutput6 *This,
        DXGI_GAMMA_CONTROL_CAPABILITIES *gamma_caps);

    HRESULT (STDMETHODCALLTYPE *SetGammaControl)(
        IDXGIOutput6 *This,
        const DXGI_GAMMA_CONTROL *gamma_control);

    HRESULT (STDMETHODCALLTYPE *GetGammaControl)(
        IDXGIOutput6 *This,
        DXGI_GAMMA_CONTROL *gamma_control);

    HRESULT (STDMETHODCALLTYPE *SetDisplaySurface)(
        IDXGIOutput6 *This,
        IDXGISurface *surface);

    HRESULT (STDMETHODCALLTYPE *GetDisplaySurfaceData)(
        IDXGIOutput6 *This,
        IDXGISurface *surface);

    HRESULT (STDMETHODCALLTYPE *GetFrameStatistics)(
        IDXGIOutput6 *This,
        DXGI_FRAME_STATISTICS *stats);

    /*** IDXGIOutput1 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDisplayModeList1)(
        IDXGIOutput6 *This,
        DXGI_FORMAT enum_format,
        UINT flags,
        UINT *num_modes,
        DXGI_MODE_DESC1 *desc);

    HRESULT (STDMETHODCALLTYPE *FindClosestMatchingMode1)(
        IDXGIOutput6 *This,
        const DXGI_MODE_DESC1 *mode_to_match,
        DXGI_MODE_DESC1 *closest_match,
        IUnknown *concerned_device);

    HRESULT (STDMETHODCALLTYPE *GetDisplaySurfaceData1)(
        IDXGIOutput6 *This,
        IDXGIResource *destination);

    HRESULT (STDMETHODCALLTYPE *DuplicateOutput)(
        IDXGIOutput6 *This,
        IUnknown *device,
        IDXGIOutputDuplication **output_duplication);

    /*** IDXGIOutput2 methods ***/
    BOOL (STDMETHODCALLTYPE *SupportsOverlays)(
        IDXGIOutput6 *This);

    /*** IDXGIOutput3 methods ***/
    HRESULT (STDMETHODCALLTYPE *CheckOverlaySupport)(
        IDXGIOutput6 *This,
        DXGI_FORMAT enum_format,
        IUnknown *concerned_device,
        UINT *flags);

    /*** IDXGIOutput4 methods ***/
    HRESULT (STDMETHODCALLTYPE *CheckOverlayColorSpaceSupport)(
        IDXGIOutput6 *This,
        DXGI_FORMAT format,
        DXGI_COLOR_SPACE_TYPE colour_space,
        IUnknown *device,
        UINT *flags);

    /*** IDXGIOutput5 methods ***/
    HRESULT (STDMETHODCALLTYPE *DuplicateOutput1)(
        IDXGIOutput6 *This,
        IUnknown *device,
        UINT flags,
        UINT format_count,
        const DXGI_FORMAT *formats,
        IDXGIOutputDuplication **duplication);

    /*** IDXGIOutput6 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDesc1)(
        IDXGIOutput6 *This,
        DXGI_OUTPUT_DESC1 *desc);

    HRESULT (STDMETHODCALLTYPE *CheckHardwareCompositionSupport)(
        IDXGIOutput6 *This,
        UINT *flags);

    END_INTERFACE
} IDXGIOutput6Vtbl;

interface IDXGIOutput6 {
    CONST_VTBL IDXGIOutput6Vtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IDXGIOutput6_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IDXGIOutput6_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IDXGIOutput6_Release(This) (This)->lpVtbl->Release(This)
/*** IDXGIObject methods ***/
#define IDXGIOutput6_SetPrivateData(This,guid,data_size,data) (This)->lpVtbl->SetPrivateData(This,guid,data_size,data)
#define IDXGIOutput6_SetPrivateDataInterface(This,guid,object) (This)->lpVtbl->SetPrivateDataInterface(This,guid,object)
#define IDXGIOutput6_GetPrivateData(This,guid,data_size,data) (This)->lpVtbl->GetPrivateData(This,guid,data_size,data)
#define IDXGIOutput6_GetParent(This,riid,parent) (This)->lpVtbl->GetParent(This,riid,parent)
/*** IDXGIOutput methods ***/
#define IDXGIOutput6_GetDesc(This,desc) (This)->lpVtbl->GetDesc(This,desc)
#define IDXGIOutput6_GetDisplayModeList(This,format,flags,mode_count,desc) (This)->lpVtbl->GetDisplayModeList(This,format,flags,mode_count,desc)
#define IDXGIOutput6_FindClosestMatchingMode(This,mode,closest_match,device) (This)->lpVtbl->FindClosestMatchingMode(This,mode,closest_match,device)
#define IDXGIOutput6_WaitForVBlank(This) (This)->lpVtbl->WaitForVBlank(This)
#define IDXGIOutput6_TakeOwnership(This,device,exclusive) (This)->lpVtbl->TakeOwnership(This,device,exclusive)
#define IDXGIOutput6_ReleaseOwnership(This) (This)->lpVtbl->ReleaseOwnership(This)
#define IDXGIOutput6_GetGammaControlCapabilities(This,gamma_caps) (This)->lpVtbl->GetGammaControlCapabilities(This,gamma_caps)
#define IDXGIOutput6_SetGammaControl(This,gamma_control) (This)->lpVtbl->SetGammaControl(This,gamma_control)
#define IDXGIOutput6_GetGammaControl(This,gamma_control) (This)->lpVtbl->GetGammaControl(This,gamma_control)
#define IDXGIOutput6_SetDisplaySurface(This,surface) (This)->lpVtbl->SetDisplaySurface(This,surface)
#define IDXGIOutput6_GetDisplaySurfaceData(This,surface) (This)->lpVtbl->GetDisplaySurfaceData(This,surface)
#define IDXGIOutput6_GetFrameStatistics(This,stats) (This)->lpVtbl->GetFrameStatistics(This,stats)
/*** IDXGIOutput1 methods ***/
#define IDXGIOutput6_GetDisplayModeList1(This,enum_format,flags,num_modes,desc) (This)->lpVtbl->GetDisplayModeList1(This,enum_format,flags,num_modes,desc)
#define IDXGIOutput6_FindClosestMatchingMode1(This,mode_to_match,closest_match,concerned_device) (This)->lpVtbl->FindClosestMatchingMode1(This,mode_to_match,closest_match,concerned_device)
#define IDXGIOutput6_GetDisplaySurfaceData1(This,destination) (This)->lpVtbl->GetDisplaySurfaceData1(This,destination)
#define IDXGIOutput6_DuplicateOutput(This,device,output_duplication) (This)->lpVtbl->DuplicateOutput(This,device,output_duplication)
/*** IDXGIOutput2 methods ***/
#define IDXGIOutput6_SupportsOverlays(This) (This)->lpVtbl->SupportsOverlays(This)
/*** IDXGIOutput3 methods ***/
#define IDXGIOutput6_CheckOverlaySupport(This,enum_format,concerned_device,flags) (This)->lpVtbl->CheckOverlaySupport(This,enum_format,concerned_device,flags)
/*** IDXGIOutput4 methods ***/
#define IDXGIOutput6_CheckOverlayColorSpaceSupport(This,format,colour_space,device,flags) (This)->lpVtbl->CheckOverlayColorSpaceSupport(This,format,colour_space,device,flags)
/*** IDXGIOutput5 methods ***/
#define IDXGIOutput6_DuplicateOutput1(This,device,flags,format_count,formats,duplication) (This)->lpVtbl->DuplicateOutput1(This,device,flags,format_count,formats,duplication)
/*** IDXGIOutput6 methods ***/
#define IDXGIOutput6_GetDesc1(This,desc) (This)->lpVtbl->GetDesc1(This,desc)
#define IDXGIOutput6_CheckHardwareCompositionSupport(This,flags) (This)->lpVtbl->CheckHardwareCompositionSupport(This,flags)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IDXGIOutput6_QueryInterface(IDXGIOutput6* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IDXGIOutput6_AddRef(IDXGIOutput6* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IDXGIOutput6_Release(IDXGIOutput6* This) {
    return This->lpVtbl->Release(This);
}
/*** IDXGIObject methods ***/
static FORCEINLINE HRESULT IDXGIOutput6_SetPrivateData(IDXGIOutput6* This,REFGUID guid,UINT data_size,const void *data) {
    return This->lpVtbl->SetPrivateData(This,guid,data_size,data);
}
static FORCEINLINE HRESULT IDXGIOutput6_SetPrivateDataInterface(IDXGIOutput6* This,REFGUID guid,const IUnknown *object) {
    return This->lpVtbl->SetPrivateDataInterface(This,guid,object);
}
static FORCEINLINE HRESULT IDXGIOutput6_GetPrivateData(IDXGIOutput6* This,REFGUID guid,UINT *data_size,void *data) {
    return This->lpVtbl->GetPrivateData(This,guid,data_size,data);
}
static FORCEINLINE HRESULT IDXGIOutput6_GetParent(IDXGIOutput6* This,REFIID riid,void **parent) {
    return This->lpVtbl->GetParent(This,riid,parent);
}
/*** IDXGIOutput methods ***/
static FORCEINLINE HRESULT IDXGIOutput6_GetDesc(IDXGIOutput6* This,DXGI_OUTPUT_DESC *desc) {
    return This->lpVtbl->GetDesc(This,desc);
}
static FORCEINLINE HRESULT IDXGIOutput6_GetDisplayModeList(IDXGIOutput6* This,DXGI_FORMAT format,UINT flags,UINT *mode_count,DXGI_MODE_DESC *desc) {
    return This->lpVtbl->GetDisplayModeList(This,format,flags,mode_count,desc);
}
static FORCEINLINE HRESULT IDXGIOutput6_FindClosestMatchingMode(IDXGIOutput6* This,const DXGI_MODE_DESC *mode,DXGI_MODE_DESC *closest_match,IUnknown *device) {
    return This->lpVtbl->FindClosestMatchingMode(This,mode,closest_match,device);
}
static FORCEINLINE HRESULT IDXGIOutput6_WaitForVBlank(IDXGIOutput6* This) {
    return This->lpVtbl->WaitForVBlank(This);
}
static FORCEINLINE HRESULT IDXGIOutput6_TakeOwnership(IDXGIOutput6* This,IUnknown *device,BOOL exclusive) {
    return This->lpVtbl->TakeOwnership(This,device,exclusive);
}
static FORCEINLINE void IDXGIOutput6_ReleaseOwnership(IDXGIOutput6* This) {
    This->lpVtbl->ReleaseOwnership(This);
}
static FORCEINLINE HRESULT IDXGIOutput6_GetGammaControlCapabilities(IDXGIOutput6* This,DXGI_GAMMA_CONTROL_CAPABILITIES *gamma_caps) {
    return This->lpVtbl->GetGammaControlCapabilities(This,gamma_caps);
}
static FORCEINLINE HRESULT IDXGIOutput6_SetGammaControl(IDXGIOutput6* This,const DXGI_GAMMA_CONTROL *gamma_control) {
    return This->lpVtbl->SetGammaControl(This,gamma_control);
}
static FORCEINLINE HRESULT IDXGIOutput6_GetGammaControl(IDXGIOutput6* This,DXGI_GAMMA_CONTROL *gamma_control) {
    return This->lpVtbl->GetGammaControl(This,gamma_control);
}
static FORCEINLINE HRESULT IDXGIOutput6_SetDisplaySurface(IDXGIOutput6* This,IDXGISurface *surface) {
    return This->lpVtbl->SetDisplaySurface(This,surface);
}
static FORCEINLINE HRESULT IDXGIOutput6_GetDisplaySurfaceData(IDXGIOutput6* This,IDXGISurface *surface) {
    return This->lpVtbl->GetDisplaySurfaceData(This,surface);
}
static FORCEINLINE HRESULT IDXGIOutput6_GetFrameStatistics(IDXGIOutput6* This,DXGI_FRAME_STATISTICS *stats) {
    return This->lpVtbl->GetFrameStatistics(This,stats);
}
/*** IDXGIOutput1 methods ***/
static FORCEINLINE HRESULT IDXGIOutput6_GetDisplayModeList1(IDXGIOutput6* This,DXGI_FORMAT enum_format,UINT flags,UINT *num_modes,DXGI_MODE_DESC1 *desc) {
    return This->lpVtbl->GetDisplayModeList1(This,enum_format,flags,num_modes,desc);
}
static FORCEINLINE HRESULT IDXGIOutput6_FindClosestMatchingMode1(IDXGIOutput6* This,const DXGI_MODE_DESC1 *mode_to_match,DXGI_MODE_DESC1 *closest_match,IUnknown *concerned_device) {
    return This->lpVtbl->FindClosestMatchingMode1(This,mode_to_match,closest_match,concerned_device);
}
static FORCEINLINE HRESULT IDXGIOutput6_GetDisplaySurfaceData1(IDXGIOutput6* This,IDXGIResource *destination) {
    return This->lpVtbl->GetDisplaySurfaceData1(This,destination);
}
static FORCEINLINE HRESULT IDXGIOutput6_DuplicateOutput(IDXGIOutput6* This,IUnknown *device,IDXGIOutputDuplication **output_duplication) {
    return This->lpVtbl->DuplicateOutput(This,device,output_duplication);
}
/*** IDXGIOutput2 methods ***/
static FORCEINLINE BOOL IDXGIOutput6_SupportsOverlays(IDXGIOutput6* This) {
    return This->lpVtbl->SupportsOverlays(This);
}
/*** IDXGIOutput3 methods ***/
static FORCEINLINE HRESULT IDXGIOutput6_CheckOverlaySupport(IDXGIOutput6* This,DXGI_FORMAT enum_format,IUnknown *concerned_device,UINT *flags) {
    return This->lpVtbl->CheckOverlaySupport(This,enum_format,concerned_device,flags);
}
/*** IDXGIOutput4 methods ***/
static FORCEINLINE HRESULT IDXGIOutput6_CheckOverlayColorSpaceSupport(IDXGIOutput6* This,DXGI_FORMAT format,DXGI_COLOR_SPACE_TYPE colour_space,IUnknown *device,UINT *flags) {
    return This->lpVtbl->CheckOverlayColorSpaceSupport(This,format,colour_space,device,flags);
}
/*** IDXGIOutput5 methods ***/
static FORCEINLINE HRESULT IDXGIOutput6_DuplicateOutput1(IDXGIOutput6* This,IUnknown *device,UINT flags,UINT format_count,const DXGI_FORMAT *formats,IDXGIOutputDuplication **duplication) {
    return This->lpVtbl->DuplicateOutput1(This,device,flags,format_count,formats,duplication);
}
/*** IDXGIOutput6 methods ***/
static FORCEINLINE HRESULT IDXGIOutput6_GetDesc1(IDXGIOutput6* This,DXGI_OUTPUT_DESC1 *desc) {
    return This->lpVtbl->GetDesc1(This,desc);
}
static FORCEINLINE HRESULT IDXGIOutput6_CheckHardwareCompositionSupport(IDXGIOutput6* This,UINT *flags) {
    return This->lpVtbl->CheckHardwareCompositionSupport(This,flags);
}
#endif
#endif

#endif


#endif  /* __IDXGIOutput6_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __dxgi1_6_h__ */
