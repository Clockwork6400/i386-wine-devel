/*** Autogenerated by WIDL 5.8 from filter.idl - Do not edit ***/

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

#ifndef __filter_h__
#define __filter_h__

/* Forward declarations */

#ifndef __IFilter_FWD_DEFINED__
#define __IFilter_FWD_DEFINED__
typedef interface IFilter IFilter;
#ifdef __cplusplus
interface IFilter;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <unknwn.h>
#include <objidl.h>
#include <propidl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct tagFULLPROPSPEC {
    GUID guidPropSet;
    PROPSPEC psProperty;
} FULLPROPSPEC;
/*****************************************************************************
 * IFilter interface
 */
#ifndef __IFilter_INTERFACE_DEFINED__
#define __IFilter_INTERFACE_DEFINED__

typedef enum tagIFILTER_INIT {
    IFILTER_INIT_CANON_PARAGRAPHS = 1,
    IFILTER_INIT_HARD_LINE_BREAKS = 2,
    IFILTER_INIT_CANON_HYPHENS = 4,
    IFILTER_INIT_CANON_SPACES = 8,
    IFILTER_INIT_APPLY_INDEX_ATTRIBUTES = 16,
    IFILTER_INIT_APPLY_OTHER_ATTRIBUTES = 32,
    IFILTER_INIT_INDEXING_ONLY = 64,
    IFILTER_INIT_SEARCH_LINKS = 128,
    IFILTER_INIT_APPLY_CRAWL_ATTRIBUTES = 256,
    IFILTER_INIT_FILTER_OWNED_VALUE_OK = 512,
    IFILTER_INIT_FILTER_AGGRESSIVE_BREAK = 1024,
    IFILTER_INIT_DISABLE_EMBEDDED = 2048,
    IFILTER_INIT_EMIT_FORMATTING = 4096
} IFILTER_INIT;
typedef enum tagIFILTER_FLAGS {
    IFILTER_FLAGS_OLE_PROPERTIES = 1
} IFILTER_FLAGS;
typedef enum tagCHUNKSTATE {
    CHUNK_TEXT = 0x1,
    CHUNK_VALUE = 0x2,
    CHUNK_FILTER_OWNED_VALUE = 0x4
} CHUNKSTATE;
typedef enum tagCHUNK_BREAKTYPE {
    CHUNK_NO_BREAK = 0,
    CHUNK_EOW = 1,
    CHUNK_EOS = 2,
    CHUNK_EOP = 3,
    CHUNK_EOC = 4
} CHUNK_BREAKTYPE;
typedef struct tagFILTERREGION {
    ULONG idChunk;
    ULONG cwcStart;
    ULONG cwcExtent;
} FILTERREGION;
typedef struct tagSTAT_CHUNK {
    ULONG idChunk;
    CHUNK_BREAKTYPE breakType;
    CHUNKSTATE flags;
    LCID locale;
    FULLPROPSPEC attribute;
    ULONG idChunkSource;
    ULONG cwcStartSource;
    ULONG cwcLenSource;
} STAT_CHUNK;
DEFINE_GUID(IID_IFilter, 0x89bcb740, 0x6119, 0x101a, 0xbc,0xb7, 0x00,0xdd,0x01,0x06,0x55,0xaf);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("89bcb740-6119-101a-bcb7-00dd010655af")
IFilter : public IUnknown
{
    virtual SCODE STDMETHODCALLTYPE Init(
        ULONG flags,
        ULONG cnt,
        const FULLPROPSPEC *attributes,
        ULONG *out_flags) = 0;

    virtual SCODE STDMETHODCALLTYPE GetChunk(
        STAT_CHUNK *stat) = 0;

    virtual SCODE STDMETHODCALLTYPE GetText(
        ULONG *cnt,
        WCHAR *buffer) = 0;

    virtual SCODE STDMETHODCALLTYPE GetValue(
        PROPVARIANT **value) = 0;

    virtual SCODE STDMETHODCALLTYPE BindRegion(
        FILTERREGION pos,
        REFIID riid,
        void **unk) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IFilter, 0x89bcb740, 0x6119, 0x101a, 0xbc,0xb7, 0x00,0xdd,0x01,0x06,0x55,0xaf)
#endif
#else
typedef struct IFilterVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IFilter *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IFilter *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IFilter *This);

    /*** IFilter methods ***/
    SCODE (STDMETHODCALLTYPE *Init)(
        IFilter *This,
        ULONG flags,
        ULONG cnt,
        const FULLPROPSPEC *attributes,
        ULONG *out_flags);

    SCODE (STDMETHODCALLTYPE *GetChunk)(
        IFilter *This,
        STAT_CHUNK *stat);

    SCODE (STDMETHODCALLTYPE *GetText)(
        IFilter *This,
        ULONG *cnt,
        WCHAR *buffer);

    SCODE (STDMETHODCALLTYPE *GetValue)(
        IFilter *This,
        PROPVARIANT **value);

    SCODE (STDMETHODCALLTYPE *BindRegion)(
        IFilter *This,
        FILTERREGION pos,
        REFIID riid,
        void **unk);

    END_INTERFACE
} IFilterVtbl;

interface IFilter {
    CONST_VTBL IFilterVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IFilter_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IFilter_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IFilter_Release(This) (This)->lpVtbl->Release(This)
/*** IFilter methods ***/
#define IFilter_Init(This,flags,cnt,attributes,out_flags) (This)->lpVtbl->Init(This,flags,cnt,attributes,out_flags)
#define IFilter_GetChunk(This,stat) (This)->lpVtbl->GetChunk(This,stat)
#define IFilter_GetText(This,cnt,buffer) (This)->lpVtbl->GetText(This,cnt,buffer)
#define IFilter_GetValue(This,value) (This)->lpVtbl->GetValue(This,value)
#define IFilter_BindRegion(This,pos,riid,unk) (This)->lpVtbl->BindRegion(This,pos,riid,unk)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IFilter_QueryInterface(IFilter* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IFilter_AddRef(IFilter* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IFilter_Release(IFilter* This) {
    return This->lpVtbl->Release(This);
}
/*** IFilter methods ***/
static FORCEINLINE SCODE IFilter_Init(IFilter* This,ULONG flags,ULONG cnt,const FULLPROPSPEC *attributes,ULONG *out_flags) {
    return This->lpVtbl->Init(This,flags,cnt,attributes,out_flags);
}
static FORCEINLINE SCODE IFilter_GetChunk(IFilter* This,STAT_CHUNK *stat) {
    return This->lpVtbl->GetChunk(This,stat);
}
static FORCEINLINE SCODE IFilter_GetText(IFilter* This,ULONG *cnt,WCHAR *buffer) {
    return This->lpVtbl->GetText(This,cnt,buffer);
}
static FORCEINLINE SCODE IFilter_GetValue(IFilter* This,PROPVARIANT **value) {
    return This->lpVtbl->GetValue(This,value);
}
static FORCEINLINE SCODE IFilter_BindRegion(IFilter* This,FILTERREGION pos,REFIID riid,void **unk) {
    return This->lpVtbl->BindRegion(This,pos,riid,unk);
}
#endif
#endif

#endif


#endif  /* __IFilter_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER BSTR_UserSize     (ULONG *, ULONG, BSTR *);
unsigned char * __RPC_USER BSTR_UserMarshal  (ULONG *, unsigned char *, BSTR *);
unsigned char * __RPC_USER BSTR_UserUnmarshal(ULONG *, unsigned char *, BSTR *);
void            __RPC_USER BSTR_UserFree     (ULONG *, BSTR *);
ULONG           __RPC_USER LPSAFEARRAY_UserSize     (ULONG *, ULONG, LPSAFEARRAY *);
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal  (ULONG *, unsigned char *, LPSAFEARRAY *);
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(ULONG *, unsigned char *, LPSAFEARRAY *);
void            __RPC_USER LPSAFEARRAY_UserFree     (ULONG *, LPSAFEARRAY *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __filter_h__ */
