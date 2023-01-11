/*** Autogenerated by WIDL 5.8 from indexsrv.idl - Do not edit ***/

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

#ifndef __indexsrv_h__
#define __indexsrv_h__

/* Forward declarations */

#ifndef __IWordSink_FWD_DEFINED__
#define __IWordSink_FWD_DEFINED__
typedef interface IWordSink IWordSink;
#ifdef __cplusplus
interface IWordSink;
#endif /* __cplusplus */
#endif

#ifndef __IPhraseSink_FWD_DEFINED__
#define __IPhraseSink_FWD_DEFINED__
typedef interface IPhraseSink IPhraseSink;
#ifdef __cplusplus
interface IPhraseSink;
#endif /* __cplusplus */
#endif

#ifndef __IWordBreaker_FWD_DEFINED__
#define __IWordBreaker_FWD_DEFINED__
typedef interface IWordBreaker IWordBreaker;
#ifdef __cplusplus
interface IWordBreaker;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <oaidl.h>

#ifdef __cplusplus
extern "C" {
#endif

struct tagTEXT_SOURCE;
typedef HRESULT (WINAPI *PFNFILLTEXTBUFFER)(struct tagTEXT_SOURCE *pTextSource);
#if 0
typedef void *PFNFILLTEXTBUFFER;
#endif
typedef struct tagTEXT_SOURCE {
    PFNFILLTEXTBUFFER pfnFillTextBuffer;
    const WCHAR *awcBuffer;
    ULONG iEnd;
    ULONG iCur;
} TEXT_SOURCE;
typedef enum tagWORDREP_BREAK_TYPE {
    WORDREP_BREAK_EOW = 0,
    WORDREP_BREAK_EOS = 1,
    WORDREP_BREAK_EOP = 2,
    WORDREP_BREAK_EOC = 3
} WORDREP_BREAK_TYPE;
/*****************************************************************************
 * IWordSink interface
 */
#ifndef __IWordSink_INTERFACE_DEFINED__
#define __IWordSink_INTERFACE_DEFINED__

DEFINE_GUID(IID_IWordSink, 0xcc907054, 0xc058, 0x101a, 0xb5,0x54, 0x08,0x00,0x2b,0x33,0xb0,0xe6);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("cc907054-c058-101a-b554-08002b33b0e6")
IWordSink : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE PutWord(
        ULONG cwc,
        const WCHAR *pwcInBuf,
        ULONG cwcSrcLen,
        ULONG cwcSrcPos) = 0;

    virtual HRESULT STDMETHODCALLTYPE PutAltWord(
        ULONG cwc,
        const WCHAR *pwcInBuf,
        ULONG cwcSrcLen,
        ULONG cwcSrcPos) = 0;

    virtual HRESULT STDMETHODCALLTYPE StartAltPhrase(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE EndAltPhrase(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE PutBreak(
        WORDREP_BREAK_TYPE breakType) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IWordSink, 0xcc907054, 0xc058, 0x101a, 0xb5,0x54, 0x08,0x00,0x2b,0x33,0xb0,0xe6)
#endif
#else
typedef struct IWordSinkVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWordSink *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWordSink *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWordSink *This);

    /*** IWordSink methods ***/
    HRESULT (STDMETHODCALLTYPE *PutWord)(
        IWordSink *This,
        ULONG cwc,
        const WCHAR *pwcInBuf,
        ULONG cwcSrcLen,
        ULONG cwcSrcPos);

    HRESULT (STDMETHODCALLTYPE *PutAltWord)(
        IWordSink *This,
        ULONG cwc,
        const WCHAR *pwcInBuf,
        ULONG cwcSrcLen,
        ULONG cwcSrcPos);

    HRESULT (STDMETHODCALLTYPE *StartAltPhrase)(
        IWordSink *This);

    HRESULT (STDMETHODCALLTYPE *EndAltPhrase)(
        IWordSink *This);

    HRESULT (STDMETHODCALLTYPE *PutBreak)(
        IWordSink *This,
        WORDREP_BREAK_TYPE breakType);

    END_INTERFACE
} IWordSinkVtbl;

interface IWordSink {
    CONST_VTBL IWordSinkVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IWordSink_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IWordSink_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IWordSink_Release(This) (This)->lpVtbl->Release(This)
/*** IWordSink methods ***/
#define IWordSink_PutWord(This,cwc,pwcInBuf,cwcSrcLen,cwcSrcPos) (This)->lpVtbl->PutWord(This,cwc,pwcInBuf,cwcSrcLen,cwcSrcPos)
#define IWordSink_PutAltWord(This,cwc,pwcInBuf,cwcSrcLen,cwcSrcPos) (This)->lpVtbl->PutAltWord(This,cwc,pwcInBuf,cwcSrcLen,cwcSrcPos)
#define IWordSink_StartAltPhrase(This) (This)->lpVtbl->StartAltPhrase(This)
#define IWordSink_EndAltPhrase(This) (This)->lpVtbl->EndAltPhrase(This)
#define IWordSink_PutBreak(This,breakType) (This)->lpVtbl->PutBreak(This,breakType)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IWordSink_QueryInterface(IWordSink* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IWordSink_AddRef(IWordSink* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IWordSink_Release(IWordSink* This) {
    return This->lpVtbl->Release(This);
}
/*** IWordSink methods ***/
static FORCEINLINE HRESULT IWordSink_PutWord(IWordSink* This,ULONG cwc,const WCHAR *pwcInBuf,ULONG cwcSrcLen,ULONG cwcSrcPos) {
    return This->lpVtbl->PutWord(This,cwc,pwcInBuf,cwcSrcLen,cwcSrcPos);
}
static FORCEINLINE HRESULT IWordSink_PutAltWord(IWordSink* This,ULONG cwc,const WCHAR *pwcInBuf,ULONG cwcSrcLen,ULONG cwcSrcPos) {
    return This->lpVtbl->PutAltWord(This,cwc,pwcInBuf,cwcSrcLen,cwcSrcPos);
}
static FORCEINLINE HRESULT IWordSink_StartAltPhrase(IWordSink* This) {
    return This->lpVtbl->StartAltPhrase(This);
}
static FORCEINLINE HRESULT IWordSink_EndAltPhrase(IWordSink* This) {
    return This->lpVtbl->EndAltPhrase(This);
}
static FORCEINLINE HRESULT IWordSink_PutBreak(IWordSink* This,WORDREP_BREAK_TYPE breakType) {
    return This->lpVtbl->PutBreak(This,breakType);
}
#endif
#endif

#endif


#endif  /* __IWordSink_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IPhraseSink interface
 */
#ifndef __IPhraseSink_INTERFACE_DEFINED__
#define __IPhraseSink_INTERFACE_DEFINED__

DEFINE_GUID(IID_IPhraseSink, 0xcc906ff0, 0xc058, 0x101a, 0xb5,0x54, 0x08,0x00,0x2b,0x33,0xb0,0xe6);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("cc906ff0-c058-101a-b554-08002b33b0e6")
IPhraseSink : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE PutSmallPhrase(
        const WCHAR *pwcNoun,
        ULONG cwcNoun,
        const WCHAR *pwcModifier,
        ULONG cwcModifier,
        ULONG ulAttachmentType) = 0;

    virtual HRESULT STDMETHODCALLTYPE PutPhrase(
        const WCHAR *pwcPhrase,
        ULONG cwcPhrase) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IPhraseSink, 0xcc906ff0, 0xc058, 0x101a, 0xb5,0x54, 0x08,0x00,0x2b,0x33,0xb0,0xe6)
#endif
#else
typedef struct IPhraseSinkVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPhraseSink *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPhraseSink *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPhraseSink *This);

    /*** IPhraseSink methods ***/
    HRESULT (STDMETHODCALLTYPE *PutSmallPhrase)(
        IPhraseSink *This,
        const WCHAR *pwcNoun,
        ULONG cwcNoun,
        const WCHAR *pwcModifier,
        ULONG cwcModifier,
        ULONG ulAttachmentType);

    HRESULT (STDMETHODCALLTYPE *PutPhrase)(
        IPhraseSink *This,
        const WCHAR *pwcPhrase,
        ULONG cwcPhrase);

    END_INTERFACE
} IPhraseSinkVtbl;

interface IPhraseSink {
    CONST_VTBL IPhraseSinkVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IPhraseSink_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IPhraseSink_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IPhraseSink_Release(This) (This)->lpVtbl->Release(This)
/*** IPhraseSink methods ***/
#define IPhraseSink_PutSmallPhrase(This,pwcNoun,cwcNoun,pwcModifier,cwcModifier,ulAttachmentType) (This)->lpVtbl->PutSmallPhrase(This,pwcNoun,cwcNoun,pwcModifier,cwcModifier,ulAttachmentType)
#define IPhraseSink_PutPhrase(This,pwcPhrase,cwcPhrase) (This)->lpVtbl->PutPhrase(This,pwcPhrase,cwcPhrase)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IPhraseSink_QueryInterface(IPhraseSink* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IPhraseSink_AddRef(IPhraseSink* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IPhraseSink_Release(IPhraseSink* This) {
    return This->lpVtbl->Release(This);
}
/*** IPhraseSink methods ***/
static FORCEINLINE HRESULT IPhraseSink_PutSmallPhrase(IPhraseSink* This,const WCHAR *pwcNoun,ULONG cwcNoun,const WCHAR *pwcModifier,ULONG cwcModifier,ULONG ulAttachmentType) {
    return This->lpVtbl->PutSmallPhrase(This,pwcNoun,cwcNoun,pwcModifier,cwcModifier,ulAttachmentType);
}
static FORCEINLINE HRESULT IPhraseSink_PutPhrase(IPhraseSink* This,const WCHAR *pwcPhrase,ULONG cwcPhrase) {
    return This->lpVtbl->PutPhrase(This,pwcPhrase,cwcPhrase);
}
#endif
#endif

#endif


#endif  /* __IPhraseSink_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWordBreaker interface
 */
#ifndef __IWordBreaker_INTERFACE_DEFINED__
#define __IWordBreaker_INTERFACE_DEFINED__

DEFINE_GUID(IID_IWordBreaker, 0xd53552c8, 0x77e3, 0x101a, 0xb5,0x52, 0x08,0x00,0x2b,0x33,0xb0,0xe6);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("d53552c8-77e3-101a-b552-08002b33b0e6")
IWordBreaker : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Init(
        BOOL fQuery,
        ULONG ulMaxTokenSize,
        BOOL *pfLicense) = 0;

    virtual HRESULT STDMETHODCALLTYPE BreakText(
        TEXT_SOURCE *pTextSource,
        IWordSink *pWordSink,
        IPhraseSink *pPhraseSink) = 0;

    virtual HRESULT STDMETHODCALLTYPE ComposePhrase(
        const WCHAR *pwcNoun,
        ULONG cwcNoun,
        const WCHAR *pwcModifier,
        ULONG cwcModifier,
        ULONG ulAttachmentType,
        WCHAR *pwcPhrase,
        ULONG *pcwcPhrase) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetLicenseToUse(
        const WCHAR **ppwcsLicense) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IWordBreaker, 0xd53552c8, 0x77e3, 0x101a, 0xb5,0x52, 0x08,0x00,0x2b,0x33,0xb0,0xe6)
#endif
#else
typedef struct IWordBreakerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWordBreaker *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWordBreaker *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWordBreaker *This);

    /*** IWordBreaker methods ***/
    HRESULT (STDMETHODCALLTYPE *Init)(
        IWordBreaker *This,
        BOOL fQuery,
        ULONG ulMaxTokenSize,
        BOOL *pfLicense);

    HRESULT (STDMETHODCALLTYPE *BreakText)(
        IWordBreaker *This,
        TEXT_SOURCE *pTextSource,
        IWordSink *pWordSink,
        IPhraseSink *pPhraseSink);

    HRESULT (STDMETHODCALLTYPE *ComposePhrase)(
        IWordBreaker *This,
        const WCHAR *pwcNoun,
        ULONG cwcNoun,
        const WCHAR *pwcModifier,
        ULONG cwcModifier,
        ULONG ulAttachmentType,
        WCHAR *pwcPhrase,
        ULONG *pcwcPhrase);

    HRESULT (STDMETHODCALLTYPE *GetLicenseToUse)(
        IWordBreaker *This,
        const WCHAR **ppwcsLicense);

    END_INTERFACE
} IWordBreakerVtbl;

interface IWordBreaker {
    CONST_VTBL IWordBreakerVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IWordBreaker_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IWordBreaker_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IWordBreaker_Release(This) (This)->lpVtbl->Release(This)
/*** IWordBreaker methods ***/
#define IWordBreaker_Init(This,fQuery,ulMaxTokenSize,pfLicense) (This)->lpVtbl->Init(This,fQuery,ulMaxTokenSize,pfLicense)
#define IWordBreaker_BreakText(This,pTextSource,pWordSink,pPhraseSink) (This)->lpVtbl->BreakText(This,pTextSource,pWordSink,pPhraseSink)
#define IWordBreaker_ComposePhrase(This,pwcNoun,cwcNoun,pwcModifier,cwcModifier,ulAttachmentType,pwcPhrase,pcwcPhrase) (This)->lpVtbl->ComposePhrase(This,pwcNoun,cwcNoun,pwcModifier,cwcModifier,ulAttachmentType,pwcPhrase,pcwcPhrase)
#define IWordBreaker_GetLicenseToUse(This,ppwcsLicense) (This)->lpVtbl->GetLicenseToUse(This,ppwcsLicense)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IWordBreaker_QueryInterface(IWordBreaker* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IWordBreaker_AddRef(IWordBreaker* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IWordBreaker_Release(IWordBreaker* This) {
    return This->lpVtbl->Release(This);
}
/*** IWordBreaker methods ***/
static FORCEINLINE HRESULT IWordBreaker_Init(IWordBreaker* This,BOOL fQuery,ULONG ulMaxTokenSize,BOOL *pfLicense) {
    return This->lpVtbl->Init(This,fQuery,ulMaxTokenSize,pfLicense);
}
static FORCEINLINE HRESULT IWordBreaker_BreakText(IWordBreaker* This,TEXT_SOURCE *pTextSource,IWordSink *pWordSink,IPhraseSink *pPhraseSink) {
    return This->lpVtbl->BreakText(This,pTextSource,pWordSink,pPhraseSink);
}
static FORCEINLINE HRESULT IWordBreaker_ComposePhrase(IWordBreaker* This,const WCHAR *pwcNoun,ULONG cwcNoun,const WCHAR *pwcModifier,ULONG cwcModifier,ULONG ulAttachmentType,WCHAR *pwcPhrase,ULONG *pcwcPhrase) {
    return This->lpVtbl->ComposePhrase(This,pwcNoun,cwcNoun,pwcModifier,cwcModifier,ulAttachmentType,pwcPhrase,pcwcPhrase);
}
static FORCEINLINE HRESULT IWordBreaker_GetLicenseToUse(IWordBreaker* This,const WCHAR **ppwcsLicense) {
    return This->lpVtbl->GetLicenseToUse(This,ppwcsLicense);
}
#endif
#endif

#endif


#endif  /* __IWordBreaker_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __indexsrv_h__ */