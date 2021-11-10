//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// Use of this sample source code is subject to the terms of the Microsoft
// license agreement under which you licensed this sample source code. If
// you did not accept the terms of the license agreement, you are not
// authorized to use this sample source code. For the terms of the license,
// please see the license agreement between you and Microsoft or, if applicable,
// see the LICENSE.RTF on your install media or the root of your tools installation.
// THE SAMPLE SOURCE CODE IS PROVIDED "AS IS", WITH NO WARRANTIES OR INDEMNITIES.
//

#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 5.03.0286 */
/* at Tue Mar 20 16:11:33 2007
 */
/* Compiler settings for ..\ocmm.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32 (32b run), ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __ocmm_h__
#define __ocmm_h__

/* Forward Declarations */ 

#ifndef __ITimerService_FWD_DEFINED__
#define __ITimerService_FWD_DEFINED__
typedef interface ITimerService ITimerService;
#endif 	/* __ITimerService_FWD_DEFINED__ */


#ifndef __ITimer_FWD_DEFINED__
#define __ITimer_FWD_DEFINED__
typedef interface ITimer ITimer;
#endif 	/* __ITimer_FWD_DEFINED__ */


#ifndef __ITimerEx_FWD_DEFINED__
#define __ITimerEx_FWD_DEFINED__
typedef interface ITimerEx ITimerEx;
#endif 	/* __ITimerEx_FWD_DEFINED__ */


#ifndef __ITimerSink_FWD_DEFINED__
#define __ITimerSink_FWD_DEFINED__
typedef interface ITimerSink ITimerSink;
#endif 	/* __ITimerSink_FWD_DEFINED__ */


#ifndef __IMapMIMEToCLSID_FWD_DEFINED__
#define __IMapMIMEToCLSID_FWD_DEFINED__
typedef interface IMapMIMEToCLSID IMapMIMEToCLSID;
#endif 	/* __IMapMIMEToCLSID_FWD_DEFINED__ */


#ifndef __IImageDecodeFilter_FWD_DEFINED__
#define __IImageDecodeFilter_FWD_DEFINED__
typedef interface IImageDecodeFilter IImageDecodeFilter;
#endif 	/* __IImageDecodeFilter_FWD_DEFINED__ */


#ifndef __IImageDecodeEventSink_FWD_DEFINED__
#define __IImageDecodeEventSink_FWD_DEFINED__
typedef interface IImageDecodeEventSink IImageDecodeEventSink;
#endif 	/* __IImageDecodeEventSink_FWD_DEFINED__ */


#ifndef __IImageDecodeEventSink2_FWD_DEFINED__
#define __IImageDecodeEventSink2_FWD_DEFINED__
typedef interface IImageDecodeEventSink2 IImageDecodeEventSink2;
#endif 	/* __IImageDecodeEventSink2_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "oleidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_ocmm_0000 */
/* [local] */ 

#define SURFACE_LOCK_EXCLUSIVE        0x01
#define SURFACE_LOCK_ALLOW_DISCARD    0x02
#define SURFACE_LOCK_WAIT             0x04

#define E_SURFACE_NOSURFACE             0x8000C000L
#define E_SURFACE_UNKNOWN_FORMAT        0x8000C001L
#define E_SURFACE_NOTMYPOINTER          0x8000C002L
#define E_SURFACE_DISCARDED             0x8000C003L
#define E_SURFACE_NODC                  0x8000C004L
#define E_SURFACE_NOTMYDC               0x8000C005L
#define S_SURFACE_DISCARDED             0x0000C003L

typedef GUID BFID;

#ifndef RGBQUAD_DEFINED
#define RGBQUAD_DEFINED
typedef struct tagRGBQUAD RGBQUAD;

#endif
EXTERN_C const GUID BFID_MONOCHROME;
EXTERN_C const GUID BFID_RGB_4;
EXTERN_C const GUID BFID_RGB_8;
EXTERN_C const GUID BFID_RGB_555;
EXTERN_C const GUID BFID_RGB_565;
EXTERN_C const GUID BFID_RGB_24;
EXTERN_C const GUID BFID_RGB_32;
EXTERN_C const GUID BFID_RGBA_32;
EXTERN_C const GUID BFID_GRAY_8;
EXTERN_C const GUID BFID_GRAY_16;

#define SID_SDirectDraw3 IID_IDirectDraw

#define COLOR_NO_TRANSPARENT 0xFFFFFFFF

#define IMGDECODE_EVENT_PROGRESS 0x01
#define IMGDECODE_EVENT_PALETTE 0x02
#define IMGDECODE_EVENT_BEGINBITS 0x04
#define IMGDECODE_EVENT_BITSCOMPLETE 0x08
#define IMGDECODE_EVENT_USEDDRAW 0x10

#define IMGDECODE_HINT_TOPDOWN 0x01
#define IMGDECODE_HINT_BOTTOMUP 0x02
#define IMGDECODE_HINT_FULLWIDTH 0x04

#define MAPMIME_DEFAULT 0
#define MAPMIME_CLSID 1
#define MAPMIME_DISABLE 2
#define MAPMIME_DEFAULT_ALWAYS 3

#define BFID_INDEXED_RGB_8 BFID_RGB_8
#define BFID_INDEXED_RGB_4 BFID_RGB_4
#define BFID_INDEXED_RGB_1 BFID_MONOCHROME

EXTERN_C const GUID CLSID_IImageDecodeFilter;

EXTERN_C const GUID NAMEDTIMER_DRAW;

#define TIMERMODE_NORMAL            0
#define TIMERMODE_VISIBILITYAWARE   1







extern RPC_IF_HANDLE __MIDL_itf_ocmm_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ocmm_0000_v0_0_s_ifspec;

#ifndef __ITimerService_INTERFACE_DEFINED__
#define __ITimerService_INTERFACE_DEFINED__

/* interface ITimerService */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITimerService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3050f35f-98b5-11cf-bb82-00aa00bdce0b")
    ITimerService : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateTimer( 
            /* [in] */ ITimer __RPC_FAR *pReferenceTimer,
            /* [out] */ ITimer __RPC_FAR *__RPC_FAR *ppNewTimer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNamedTimer( 
            /* [in] */ REFGUID rguidName,
            /* [out] */ ITimer __RPC_FAR *__RPC_FAR *ppTimer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetNamedTimerReference( 
            /* [in] */ REFGUID rguidName,
            /* [in] */ ITimer __RPC_FAR *pReferenceTimer) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITimerServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITimerService __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITimerService __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITimerService __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateTimer )( 
            ITimerService __RPC_FAR * This,
            /* [in] */ ITimer __RPC_FAR *pReferenceTimer,
            /* [out] */ ITimer __RPC_FAR *__RPC_FAR *ppNewTimer);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetNamedTimer )( 
            ITimerService __RPC_FAR * This,
            /* [in] */ REFGUID rguidName,
            /* [out] */ ITimer __RPC_FAR *__RPC_FAR *ppTimer);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetNamedTimerReference )( 
            ITimerService __RPC_FAR * This,
            /* [in] */ REFGUID rguidName,
            /* [in] */ ITimer __RPC_FAR *pReferenceTimer);
        
        END_INTERFACE
    } ITimerServiceVtbl;

    interface ITimerService
    {
        CONST_VTBL struct ITimerServiceVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITimerService_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITimerService_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITimerService_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITimerService_CreateTimer(This,pReferenceTimer,ppNewTimer)	\
    (This)->lpVtbl -> CreateTimer(This,pReferenceTimer,ppNewTimer)

#define ITimerService_GetNamedTimer(This,rguidName,ppTimer)	\
    (This)->lpVtbl -> GetNamedTimer(This,rguidName,ppTimer)

#define ITimerService_SetNamedTimerReference(This,rguidName,pReferenceTimer)	\
    (This)->lpVtbl -> SetNamedTimerReference(This,rguidName,pReferenceTimer)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITimerService_CreateTimer_Proxy( 
    ITimerService __RPC_FAR * This,
    /* [in] */ ITimer __RPC_FAR *pReferenceTimer,
    /* [out] */ ITimer __RPC_FAR *__RPC_FAR *ppNewTimer);


void __RPC_STUB ITimerService_CreateTimer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITimerService_GetNamedTimer_Proxy( 
    ITimerService __RPC_FAR * This,
    /* [in] */ REFGUID rguidName,
    /* [out] */ ITimer __RPC_FAR *__RPC_FAR *ppTimer);


void __RPC_STUB ITimerService_GetNamedTimer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITimerService_SetNamedTimerReference_Proxy( 
    ITimerService __RPC_FAR * This,
    /* [in] */ REFGUID rguidName,
    /* [in] */ ITimer __RPC_FAR *pReferenceTimer);


void __RPC_STUB ITimerService_SetNamedTimerReference_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITimerService_INTERFACE_DEFINED__ */


#ifndef __ITimer_INTERFACE_DEFINED__
#define __ITimer_INTERFACE_DEFINED__

/* interface ITimer */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITimer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3050f360-98b5-11cf-bb82-00aa00bdce0b")
    ITimer : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Advise( 
            /* [in] */ VARIANT vtimeMin,
            /* [in] */ VARIANT vtimeMax,
            /* [in] */ VARIANT vtimeInterval,
            /* [in] */ DWORD dwFlags,
            /* [in] */ ITimerSink __RPC_FAR *pTimerSink,
            /* [out] */ DWORD __RPC_FAR *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unadvise( 
            /* [in] */ DWORD dwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Freeze( 
            /* [in] */ BOOL fFreeze) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTime( 
            /* [out] */ VARIANT __RPC_FAR *pvtime) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITimerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITimer __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITimer __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITimer __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Advise )( 
            ITimer __RPC_FAR * This,
            /* [in] */ VARIANT vtimeMin,
            /* [in] */ VARIANT vtimeMax,
            /* [in] */ VARIANT vtimeInterval,
            /* [in] */ DWORD dwFlags,
            /* [in] */ ITimerSink __RPC_FAR *pTimerSink,
            /* [out] */ DWORD __RPC_FAR *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Unadvise )( 
            ITimer __RPC_FAR * This,
            /* [in] */ DWORD dwCookie);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Freeze )( 
            ITimer __RPC_FAR * This,
            /* [in] */ BOOL fFreeze);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTime )( 
            ITimer __RPC_FAR * This,
            /* [out] */ VARIANT __RPC_FAR *pvtime);
        
        END_INTERFACE
    } ITimerVtbl;

    interface ITimer
    {
        CONST_VTBL struct ITimerVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITimer_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITimer_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITimer_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITimer_Advise(This,vtimeMin,vtimeMax,vtimeInterval,dwFlags,pTimerSink,pdwCookie)	\
    (This)->lpVtbl -> Advise(This,vtimeMin,vtimeMax,vtimeInterval,dwFlags,pTimerSink,pdwCookie)

#define ITimer_Unadvise(This,dwCookie)	\
    (This)->lpVtbl -> Unadvise(This,dwCookie)

#define ITimer_Freeze(This,fFreeze)	\
    (This)->lpVtbl -> Freeze(This,fFreeze)

#define ITimer_GetTime(This,pvtime)	\
    (This)->lpVtbl -> GetTime(This,pvtime)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITimer_Advise_Proxy( 
    ITimer __RPC_FAR * This,
    /* [in] */ VARIANT vtimeMin,
    /* [in] */ VARIANT vtimeMax,
    /* [in] */ VARIANT vtimeInterval,
    /* [in] */ DWORD dwFlags,
    /* [in] */ ITimerSink __RPC_FAR *pTimerSink,
    /* [out] */ DWORD __RPC_FAR *pdwCookie);


void __RPC_STUB ITimer_Advise_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITimer_Unadvise_Proxy( 
    ITimer __RPC_FAR * This,
    /* [in] */ DWORD dwCookie);


void __RPC_STUB ITimer_Unadvise_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITimer_Freeze_Proxy( 
    ITimer __RPC_FAR * This,
    /* [in] */ BOOL fFreeze);


void __RPC_STUB ITimer_Freeze_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITimer_GetTime_Proxy( 
    ITimer __RPC_FAR * This,
    /* [out] */ VARIANT __RPC_FAR *pvtime);


void __RPC_STUB ITimer_GetTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITimer_INTERFACE_DEFINED__ */


#ifndef __ITimerEx_INTERFACE_DEFINED__
#define __ITimerEx_INTERFACE_DEFINED__

/* interface ITimerEx */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITimerEx;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("30510414-98b5-11cf-bb82-00aa00bdce0b")
    ITimerEx : public ITimer
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetMode( 
            /* [in] */ DWORD dwMode) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITimerExVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITimerEx __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITimerEx __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITimerEx __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Advise )( 
            ITimerEx __RPC_FAR * This,
            /* [in] */ VARIANT vtimeMin,
            /* [in] */ VARIANT vtimeMax,
            /* [in] */ VARIANT vtimeInterval,
            /* [in] */ DWORD dwFlags,
            /* [in] */ ITimerSink __RPC_FAR *pTimerSink,
            /* [out] */ DWORD __RPC_FAR *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Unadvise )( 
            ITimerEx __RPC_FAR * This,
            /* [in] */ DWORD dwCookie);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Freeze )( 
            ITimerEx __RPC_FAR * This,
            /* [in] */ BOOL fFreeze);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTime )( 
            ITimerEx __RPC_FAR * This,
            /* [out] */ VARIANT __RPC_FAR *pvtime);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetMode )( 
            ITimerEx __RPC_FAR * This,
            /* [in] */ DWORD dwMode);
        
        END_INTERFACE
    } ITimerExVtbl;

    interface ITimerEx
    {
        CONST_VTBL struct ITimerExVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITimerEx_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITimerEx_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITimerEx_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITimerEx_Advise(This,vtimeMin,vtimeMax,vtimeInterval,dwFlags,pTimerSink,pdwCookie)	\
    (This)->lpVtbl -> Advise(This,vtimeMin,vtimeMax,vtimeInterval,dwFlags,pTimerSink,pdwCookie)

#define ITimerEx_Unadvise(This,dwCookie)	\
    (This)->lpVtbl -> Unadvise(This,dwCookie)

#define ITimerEx_Freeze(This,fFreeze)	\
    (This)->lpVtbl -> Freeze(This,fFreeze)

#define ITimerEx_GetTime(This,pvtime)	\
    (This)->lpVtbl -> GetTime(This,pvtime)


#define ITimerEx_SetMode(This,dwMode)	\
    (This)->lpVtbl -> SetMode(This,dwMode)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITimerEx_SetMode_Proxy( 
    ITimerEx __RPC_FAR * This,
    /* [in] */ DWORD dwMode);


void __RPC_STUB ITimerEx_SetMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITimerEx_INTERFACE_DEFINED__ */


#ifndef __ITimerSink_INTERFACE_DEFINED__
#define __ITimerSink_INTERFACE_DEFINED__

/* interface ITimerSink */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITimerSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3050f361-98b5-11cf-bb82-00aa00bdce0b")
    ITimerSink : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnTimer( 
            /* [in] */ VARIANT vtimeAdvise) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITimerSinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITimerSink __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITimerSink __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITimerSink __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnTimer )( 
            ITimerSink __RPC_FAR * This,
            /* [in] */ VARIANT vtimeAdvise);
        
        END_INTERFACE
    } ITimerSinkVtbl;

    interface ITimerSink
    {
        CONST_VTBL struct ITimerSinkVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITimerSink_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITimerSink_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITimerSink_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITimerSink_OnTimer(This,vtimeAdvise)	\
    (This)->lpVtbl -> OnTimer(This,vtimeAdvise)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITimerSink_OnTimer_Proxy( 
    ITimerSink __RPC_FAR * This,
    /* [in] */ VARIANT vtimeAdvise);


void __RPC_STUB ITimerSink_OnTimer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITimerSink_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_ocmm_0116 */
/* [local] */ 

#define SID_STimerService IID_ITimerService






extern RPC_IF_HANDLE __MIDL_itf_ocmm_0116_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ocmm_0116_v0_0_s_ifspec;

#ifndef __IMapMIMEToCLSID_INTERFACE_DEFINED__
#define __IMapMIMEToCLSID_INTERFACE_DEFINED__

/* interface IMapMIMEToCLSID */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMapMIMEToCLSID;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D9E89500-30FA-11d0-B724-00AA006C1A01")
    IMapMIMEToCLSID : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnableDefaultMappings( 
            BOOL bEnable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MapMIMEToCLSID( 
            LPCOLESTR pszMIMEType,
            CLSID __RPC_FAR *pCLSID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMapping( 
            LPCOLESTR pszMIMEType,
            DWORD dwMapMode,
            REFCLSID clsid) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMapMIMEToCLSIDVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMapMIMEToCLSID __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMapMIMEToCLSID __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMapMIMEToCLSID __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *EnableDefaultMappings )( 
            IMapMIMEToCLSID __RPC_FAR * This,
            BOOL bEnable);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *MapMIMEToCLSID )( 
            IMapMIMEToCLSID __RPC_FAR * This,
            LPCOLESTR pszMIMEType,
            CLSID __RPC_FAR *pCLSID);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetMapping )( 
            IMapMIMEToCLSID __RPC_FAR * This,
            LPCOLESTR pszMIMEType,
            DWORD dwMapMode,
            REFCLSID clsid);
        
        END_INTERFACE
    } IMapMIMEToCLSIDVtbl;

    interface IMapMIMEToCLSID
    {
        CONST_VTBL struct IMapMIMEToCLSIDVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMapMIMEToCLSID_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMapMIMEToCLSID_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMapMIMEToCLSID_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMapMIMEToCLSID_EnableDefaultMappings(This,bEnable)	\
    (This)->lpVtbl -> EnableDefaultMappings(This,bEnable)

#define IMapMIMEToCLSID_MapMIMEToCLSID(This,pszMIMEType,pCLSID)	\
    (This)->lpVtbl -> MapMIMEToCLSID(This,pszMIMEType,pCLSID)

#define IMapMIMEToCLSID_SetMapping(This,pszMIMEType,dwMapMode,clsid)	\
    (This)->lpVtbl -> SetMapping(This,pszMIMEType,dwMapMode,clsid)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IMapMIMEToCLSID_EnableDefaultMappings_Proxy( 
    IMapMIMEToCLSID __RPC_FAR * This,
    BOOL bEnable);


void __RPC_STUB IMapMIMEToCLSID_EnableDefaultMappings_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMapMIMEToCLSID_MapMIMEToCLSID_Proxy( 
    IMapMIMEToCLSID __RPC_FAR * This,
    LPCOLESTR pszMIMEType,
    CLSID __RPC_FAR *pCLSID);


void __RPC_STUB IMapMIMEToCLSID_MapMIMEToCLSID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMapMIMEToCLSID_SetMapping_Proxy( 
    IMapMIMEToCLSID __RPC_FAR * This,
    LPCOLESTR pszMIMEType,
    DWORD dwMapMode,
    REFCLSID clsid);


void __RPC_STUB IMapMIMEToCLSID_SetMapping_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMapMIMEToCLSID_INTERFACE_DEFINED__ */


#ifndef __IImageDecodeFilter_INTERFACE_DEFINED__
#define __IImageDecodeFilter_INTERFACE_DEFINED__

/* interface IImageDecodeFilter */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IImageDecodeFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A3CCEDF3-2DE2-11D0-86F4-00A0C913F750")
    IImageDecodeFilter : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            IImageDecodeEventSink __RPC_FAR *pEventSink) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Process( 
            IStream __RPC_FAR *pStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Terminate( 
            HRESULT hrStatus) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IImageDecodeFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IImageDecodeFilter __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IImageDecodeFilter __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IImageDecodeFilter __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Initialize )( 
            IImageDecodeFilter __RPC_FAR * This,
            IImageDecodeEventSink __RPC_FAR *pEventSink);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Process )( 
            IImageDecodeFilter __RPC_FAR * This,
            IStream __RPC_FAR *pStream);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Terminate )( 
            IImageDecodeFilter __RPC_FAR * This,
            HRESULT hrStatus);
        
        END_INTERFACE
    } IImageDecodeFilterVtbl;

    interface IImageDecodeFilter
    {
        CONST_VTBL struct IImageDecodeFilterVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IImageDecodeFilter_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IImageDecodeFilter_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IImageDecodeFilter_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IImageDecodeFilter_Initialize(This,pEventSink)	\
    (This)->lpVtbl -> Initialize(This,pEventSink)

#define IImageDecodeFilter_Process(This,pStream)	\
    (This)->lpVtbl -> Process(This,pStream)

#define IImageDecodeFilter_Terminate(This,hrStatus)	\
    (This)->lpVtbl -> Terminate(This,hrStatus)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IImageDecodeFilter_Initialize_Proxy( 
    IImageDecodeFilter __RPC_FAR * This,
    IImageDecodeEventSink __RPC_FAR *pEventSink);


void __RPC_STUB IImageDecodeFilter_Initialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageDecodeFilter_Process_Proxy( 
    IImageDecodeFilter __RPC_FAR * This,
    IStream __RPC_FAR *pStream);


void __RPC_STUB IImageDecodeFilter_Process_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageDecodeFilter_Terminate_Proxy( 
    IImageDecodeFilter __RPC_FAR * This,
    HRESULT hrStatus);


void __RPC_STUB IImageDecodeFilter_Terminate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IImageDecodeFilter_INTERFACE_DEFINED__ */


#ifndef __IImageDecodeEventSink_INTERFACE_DEFINED__
#define __IImageDecodeEventSink_INTERFACE_DEFINED__

/* interface IImageDecodeEventSink */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IImageDecodeEventSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BAA342A0-2DED-11d0-86F4-00A0C913F750")
    IImageDecodeEventSink : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSurface( 
            /* [in] */ LONG nWidth,
            /* [in] */ LONG nHeight,
            /* [in] */ REFGUID bfid,
            /* [in] */ ULONG nPasses,
            /* [in] */ DWORD dwHints,
            /* [out] */ IUnknown __RPC_FAR *__RPC_FAR *ppSurface) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnBeginDecode( 
            /* [out] */ DWORD __RPC_FAR *pdwEvents,
            /* [out] */ ULONG __RPC_FAR *pnFormats,
            /* [size_is][size_is][out] */ BFID __RPC_FAR *__RPC_FAR *ppFormats) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnBitsComplete( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnDecodeComplete( 
            /* [in] */ HRESULT hrStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnPalette( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnProgress( 
            /* [in] */ RECT __RPC_FAR *pBounds,
            /* [in] */ BOOL bComplete) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IImageDecodeEventSinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IImageDecodeEventSink __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IImageDecodeEventSink __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IImageDecodeEventSink __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetSurface )( 
            IImageDecodeEventSink __RPC_FAR * This,
            /* [in] */ LONG nWidth,
            /* [in] */ LONG nHeight,
            /* [in] */ REFGUID bfid,
            /* [in] */ ULONG nPasses,
            /* [in] */ DWORD dwHints,
            /* [out] */ IUnknown __RPC_FAR *__RPC_FAR *ppSurface);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnBeginDecode )( 
            IImageDecodeEventSink __RPC_FAR * This,
            /* [out] */ DWORD __RPC_FAR *pdwEvents,
            /* [out] */ ULONG __RPC_FAR *pnFormats,
            /* [size_is][size_is][out] */ BFID __RPC_FAR *__RPC_FAR *ppFormats);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnBitsComplete )( 
            IImageDecodeEventSink __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnDecodeComplete )( 
            IImageDecodeEventSink __RPC_FAR * This,
            /* [in] */ HRESULT hrStatus);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnPalette )( 
            IImageDecodeEventSink __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnProgress )( 
            IImageDecodeEventSink __RPC_FAR * This,
            /* [in] */ RECT __RPC_FAR *pBounds,
            /* [in] */ BOOL bComplete);
        
        END_INTERFACE
    } IImageDecodeEventSinkVtbl;

    interface IImageDecodeEventSink
    {
        CONST_VTBL struct IImageDecodeEventSinkVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IImageDecodeEventSink_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IImageDecodeEventSink_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IImageDecodeEventSink_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IImageDecodeEventSink_GetSurface(This,nWidth,nHeight,bfid,nPasses,dwHints,ppSurface)	\
    (This)->lpVtbl -> GetSurface(This,nWidth,nHeight,bfid,nPasses,dwHints,ppSurface)

#define IImageDecodeEventSink_OnBeginDecode(This,pdwEvents,pnFormats,ppFormats)	\
    (This)->lpVtbl -> OnBeginDecode(This,pdwEvents,pnFormats,ppFormats)

#define IImageDecodeEventSink_OnBitsComplete(This)	\
    (This)->lpVtbl -> OnBitsComplete(This)

#define IImageDecodeEventSink_OnDecodeComplete(This,hrStatus)	\
    (This)->lpVtbl -> OnDecodeComplete(This,hrStatus)

#define IImageDecodeEventSink_OnPalette(This)	\
    (This)->lpVtbl -> OnPalette(This)

#define IImageDecodeEventSink_OnProgress(This,pBounds,bComplete)	\
    (This)->lpVtbl -> OnProgress(This,pBounds,bComplete)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IImageDecodeEventSink_GetSurface_Proxy( 
    IImageDecodeEventSink __RPC_FAR * This,
    /* [in] */ LONG nWidth,
    /* [in] */ LONG nHeight,
    /* [in] */ REFGUID bfid,
    /* [in] */ ULONG nPasses,
    /* [in] */ DWORD dwHints,
    /* [out] */ IUnknown __RPC_FAR *__RPC_FAR *ppSurface);


void __RPC_STUB IImageDecodeEventSink_GetSurface_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageDecodeEventSink_OnBeginDecode_Proxy( 
    IImageDecodeEventSink __RPC_FAR * This,
    /* [out] */ DWORD __RPC_FAR *pdwEvents,
    /* [out] */ ULONG __RPC_FAR *pnFormats,
    /* [size_is][size_is][out] */ BFID __RPC_FAR *__RPC_FAR *ppFormats);


void __RPC_STUB IImageDecodeEventSink_OnBeginDecode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageDecodeEventSink_OnBitsComplete_Proxy( 
    IImageDecodeEventSink __RPC_FAR * This);


void __RPC_STUB IImageDecodeEventSink_OnBitsComplete_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageDecodeEventSink_OnDecodeComplete_Proxy( 
    IImageDecodeEventSink __RPC_FAR * This,
    /* [in] */ HRESULT hrStatus);


void __RPC_STUB IImageDecodeEventSink_OnDecodeComplete_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageDecodeEventSink_OnPalette_Proxy( 
    IImageDecodeEventSink __RPC_FAR * This);


void __RPC_STUB IImageDecodeEventSink_OnPalette_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageDecodeEventSink_OnProgress_Proxy( 
    IImageDecodeEventSink __RPC_FAR * This,
    /* [in] */ RECT __RPC_FAR *pBounds,
    /* [in] */ BOOL bComplete);


void __RPC_STUB IImageDecodeEventSink_OnProgress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IImageDecodeEventSink_INTERFACE_DEFINED__ */


#ifndef __IImageDecodeEventSink2_INTERFACE_DEFINED__
#define __IImageDecodeEventSink2_INTERFACE_DEFINED__

/* interface IImageDecodeEventSink2 */
/* [unique][helpstring][uuid][local][object] */ 


EXTERN_C const IID IID_IImageDecodeEventSink2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8EBD8A57-8A96-48c9-84A6-962E2DB9C931")
    IImageDecodeEventSink2 : public IImageDecodeEventSink
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE IsAlphaPremultRequired( 
            /* [out] */ BOOL __RPC_FAR *pfPremultAlpha) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IImageDecodeEventSink2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IImageDecodeEventSink2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IImageDecodeEventSink2 __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IImageDecodeEventSink2 __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetSurface )( 
            IImageDecodeEventSink2 __RPC_FAR * This,
            /* [in] */ LONG nWidth,
            /* [in] */ LONG nHeight,
            /* [in] */ REFGUID bfid,
            /* [in] */ ULONG nPasses,
            /* [in] */ DWORD dwHints,
            /* [out] */ IUnknown __RPC_FAR *__RPC_FAR *ppSurface);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnBeginDecode )( 
            IImageDecodeEventSink2 __RPC_FAR * This,
            /* [out] */ DWORD __RPC_FAR *pdwEvents,
            /* [out] */ ULONG __RPC_FAR *pnFormats,
            /* [size_is][size_is][out] */ BFID __RPC_FAR *__RPC_FAR *ppFormats);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnBitsComplete )( 
            IImageDecodeEventSink2 __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnDecodeComplete )( 
            IImageDecodeEventSink2 __RPC_FAR * This,
            /* [in] */ HRESULT hrStatus);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnPalette )( 
            IImageDecodeEventSink2 __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnProgress )( 
            IImageDecodeEventSink2 __RPC_FAR * This,
            /* [in] */ RECT __RPC_FAR *pBounds,
            /* [in] */ BOOL bComplete);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsAlphaPremultRequired )( 
            IImageDecodeEventSink2 __RPC_FAR * This,
            /* [out] */ BOOL __RPC_FAR *pfPremultAlpha);
        
        END_INTERFACE
    } IImageDecodeEventSink2Vtbl;

    interface IImageDecodeEventSink2
    {
        CONST_VTBL struct IImageDecodeEventSink2Vtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IImageDecodeEventSink2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IImageDecodeEventSink2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IImageDecodeEventSink2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IImageDecodeEventSink2_GetSurface(This,nWidth,nHeight,bfid,nPasses,dwHints,ppSurface)	\
    (This)->lpVtbl -> GetSurface(This,nWidth,nHeight,bfid,nPasses,dwHints,ppSurface)

#define IImageDecodeEventSink2_OnBeginDecode(This,pdwEvents,pnFormats,ppFormats)	\
    (This)->lpVtbl -> OnBeginDecode(This,pdwEvents,pnFormats,ppFormats)

#define IImageDecodeEventSink2_OnBitsComplete(This)	\
    (This)->lpVtbl -> OnBitsComplete(This)

#define IImageDecodeEventSink2_OnDecodeComplete(This,hrStatus)	\
    (This)->lpVtbl -> OnDecodeComplete(This,hrStatus)

#define IImageDecodeEventSink2_OnPalette(This)	\
    (This)->lpVtbl -> OnPalette(This)

#define IImageDecodeEventSink2_OnProgress(This,pBounds,bComplete)	\
    (This)->lpVtbl -> OnProgress(This,pBounds,bComplete)


#define IImageDecodeEventSink2_IsAlphaPremultRequired(This,pfPremultAlpha)	\
    (This)->lpVtbl -> IsAlphaPremultRequired(This,pfPremultAlpha)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IImageDecodeEventSink2_IsAlphaPremultRequired_Proxy( 
    IImageDecodeEventSink2 __RPC_FAR * This,
    /* [out] */ BOOL __RPC_FAR *pfPremultAlpha);


void __RPC_STUB IImageDecodeEventSink2_IsAlphaPremultRequired_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IImageDecodeEventSink2_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long __RPC_FAR *, unsigned long            , VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long __RPC_FAR *, VARIANT __RPC_FAR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


