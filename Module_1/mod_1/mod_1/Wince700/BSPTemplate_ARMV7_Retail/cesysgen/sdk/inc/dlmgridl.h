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
/* at Mon Jan 22 12:12:59 2007
 */
/* Compiler settings for ..\dlmgridl.idl:
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

#ifndef __dlmgridl_h__
#define __dlmgridl_h__

/* Forward Declarations */ 

#ifndef __IDownloadManager_FWD_DEFINED__
#define __IDownloadManager_FWD_DEFINED__
typedef interface IDownloadManager IDownloadManager;
#endif 	/* __IDownloadManager_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_dlmgridl_0000 */
/* [local] */ 

//=--------------------------------------------------------------------------=
// dlmgridl.h
//=--------------------------------------------------------------------------=
// (C) Copyright 1999 Microsoft Corporation.  All Rights Reserved.
//
// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
// PARTICULAR PURPOSE.
//=--------------------------------------------------------------------------=

#pragma comment(lib,"uuid.lib")

//---------------------------------------------------------------------------=
// Lightweight User Profile Interfaces.

// --------------------------------------------------------------------------------
// GUIDS
// --------------------------------------------------------------------------------
// {988934A4-064B-11D3-BB80-00104B35E7F9}
DEFINE_GUID(IID_IDownloadManager, 0x988934a4, 0x064b, 0x11d3, 0xbb, 0x80, 0x0, 0x10, 0x4b, 0x35, 0xe7, 0xf9);



extern RPC_IF_HANDLE __MIDL_itf_dlmgridl_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dlmgridl_0000_v0_0_s_ifspec;

#ifndef __IDownloadManager_INTERFACE_DEFINED__
#define __IDownloadManager_INTERFACE_DEFINED__

/* interface IDownloadManager */
/* [unique][dual][uuid][object][helpstring] */ 


EXTERN_C const IID IID_IDownloadManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("988934A4-064B-11D3-BB80-00104B35E7F9")
    IDownloadManager : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Start( 
            /* [in] */ IMoniker __RPC_FAR *pmk,
            /* [in] */ IBindCtx __RPC_FAR *pbc,
            /* [in] */ BSTR bstrSaveTo,
            /* [in] */ VARIANT_BOOL fSaveAs,
            /* [in] */ VARIANT_BOOL fSafe,
            /* [in] */ BSTR bstrHeaders,
            /* [in] */ LONG dwVerb,
            /* [in] */ LONG grfBINDF,
            /* [in] */ VARIANT __RPC_FAR *pbinfo,
            /* [in] */ BSTR bstrRedir,
            /* [in] */ LONG uiCP,
            /* [in] */ LONG dwAttempt) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE StartURL( 
            /* [in] */ BSTR bstrURL,
            /* [in] */ VARIANT_BOOL fSaveAs,
            /* [in] */ BSTR bstrSaveTo,
            /* [in] */ IBindCtx __RPC_FAR *pbc,
            /* [in] */ VARIANT_BOOL fSafe,
            /* [in] */ BSTR bstrHeaders,
            /* [in] */ LONG dwVerb,
            /* [in] */ LONG grfBINDF,
            /* [in] */ VARIANT __RPC_FAR *pbinfo,
            /* [in] */ BSTR bstrRedir,
            /* [in] */ LONG uiCP,
            /* [in] */ LONG dwAttempt) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DownloadURL( 
            /* [in] */ BSTR bstrURL,
            /* [in] */ VARIANT_BOOL fSaveAs) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_eventlock( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pfEventLock) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_eventlock( 
            /* [in] */ VARIANT_BOOL fEventLock) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CancelDownload( 
            /* [in] */ LONG lID) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetState( 
            /* [in] */ LONG lID,
            /* [in] */ LONG lState) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE StartPendingLaterDownloads( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDownloadManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDownloadManager __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDownloadManager __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDownloadManager __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IDownloadManager __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IDownloadManager __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IDownloadManager __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IDownloadManager __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Start )( 
            IDownloadManager __RPC_FAR * This,
            /* [in] */ IMoniker __RPC_FAR *pmk,
            /* [in] */ IBindCtx __RPC_FAR *pbc,
            /* [in] */ BSTR bstrSaveTo,
            /* [in] */ VARIANT_BOOL fSaveAs,
            /* [in] */ VARIANT_BOOL fSafe,
            /* [in] */ BSTR bstrHeaders,
            /* [in] */ LONG dwVerb,
            /* [in] */ LONG grfBINDF,
            /* [in] */ VARIANT __RPC_FAR *pbinfo,
            /* [in] */ BSTR bstrRedir,
            /* [in] */ LONG uiCP,
            /* [in] */ LONG dwAttempt);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *StartURL )( 
            IDownloadManager __RPC_FAR * This,
            /* [in] */ BSTR bstrURL,
            /* [in] */ VARIANT_BOOL fSaveAs,
            /* [in] */ BSTR bstrSaveTo,
            /* [in] */ IBindCtx __RPC_FAR *pbc,
            /* [in] */ VARIANT_BOOL fSafe,
            /* [in] */ BSTR bstrHeaders,
            /* [in] */ LONG dwVerb,
            /* [in] */ LONG grfBINDF,
            /* [in] */ VARIANT __RPC_FAR *pbinfo,
            /* [in] */ BSTR bstrRedir,
            /* [in] */ LONG uiCP,
            /* [in] */ LONG dwAttempt);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DownloadURL )( 
            IDownloadManager __RPC_FAR * This,
            /* [in] */ BSTR bstrURL,
            /* [in] */ VARIANT_BOOL fSaveAs);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_eventlock )( 
            IDownloadManager __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pfEventLock);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_eventlock )( 
            IDownloadManager __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL fEventLock);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CancelDownload )( 
            IDownloadManager __RPC_FAR * This,
            /* [in] */ LONG lID);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetState )( 
            IDownloadManager __RPC_FAR * This,
            /* [in] */ LONG lID,
            /* [in] */ LONG lState);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *StartPendingLaterDownloads )( 
            IDownloadManager __RPC_FAR * This);
        
        END_INTERFACE
    } IDownloadManagerVtbl;

    interface IDownloadManager
    {
        CONST_VTBL struct IDownloadManagerVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDownloadManager_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDownloadManager_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDownloadManager_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDownloadManager_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDownloadManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDownloadManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDownloadManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDownloadManager_Start(This,pmk,pbc,bstrSaveTo,fSaveAs,fSafe,bstrHeaders,dwVerb,grfBINDF,pbinfo,bstrRedir,uiCP,dwAttempt)	\
    (This)->lpVtbl -> Start(This,pmk,pbc,bstrSaveTo,fSaveAs,fSafe,bstrHeaders,dwVerb,grfBINDF,pbinfo,bstrRedir,uiCP,dwAttempt)

#define IDownloadManager_StartURL(This,bstrURL,fSaveAs,bstrSaveTo,pbc,fSafe,bstrHeaders,dwVerb,grfBINDF,pbinfo,bstrRedir,uiCP,dwAttempt)	\
    (This)->lpVtbl -> StartURL(This,bstrURL,fSaveAs,bstrSaveTo,pbc,fSafe,bstrHeaders,dwVerb,grfBINDF,pbinfo,bstrRedir,uiCP,dwAttempt)

#define IDownloadManager_DownloadURL(This,bstrURL,fSaveAs)	\
    (This)->lpVtbl -> DownloadURL(This,bstrURL,fSaveAs)

#define IDownloadManager_get_eventlock(This,pfEventLock)	\
    (This)->lpVtbl -> get_eventlock(This,pfEventLock)

#define IDownloadManager_put_eventlock(This,fEventLock)	\
    (This)->lpVtbl -> put_eventlock(This,fEventLock)

#define IDownloadManager_CancelDownload(This,lID)	\
    (This)->lpVtbl -> CancelDownload(This,lID)

#define IDownloadManager_SetState(This,lID,lState)	\
    (This)->lpVtbl -> SetState(This,lID,lState)

#define IDownloadManager_StartPendingLaterDownloads(This)	\
    (This)->lpVtbl -> StartPendingLaterDownloads(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id] */ HRESULT STDMETHODCALLTYPE IDownloadManager_Start_Proxy( 
    IDownloadManager __RPC_FAR * This,
    /* [in] */ IMoniker __RPC_FAR *pmk,
    /* [in] */ IBindCtx __RPC_FAR *pbc,
    /* [in] */ BSTR bstrSaveTo,
    /* [in] */ VARIANT_BOOL fSaveAs,
    /* [in] */ VARIANT_BOOL fSafe,
    /* [in] */ BSTR bstrHeaders,
    /* [in] */ LONG dwVerb,
    /* [in] */ LONG grfBINDF,
    /* [in] */ VARIANT __RPC_FAR *pbinfo,
    /* [in] */ BSTR bstrRedir,
    /* [in] */ LONG uiCP,
    /* [in] */ LONG dwAttempt);


void __RPC_STUB IDownloadManager_Start_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IDownloadManager_StartURL_Proxy( 
    IDownloadManager __RPC_FAR * This,
    /* [in] */ BSTR bstrURL,
    /* [in] */ VARIANT_BOOL fSaveAs,
    /* [in] */ BSTR bstrSaveTo,
    /* [in] */ IBindCtx __RPC_FAR *pbc,
    /* [in] */ VARIANT_BOOL fSafe,
    /* [in] */ BSTR bstrHeaders,
    /* [in] */ LONG dwVerb,
    /* [in] */ LONG grfBINDF,
    /* [in] */ VARIANT __RPC_FAR *pbinfo,
    /* [in] */ BSTR bstrRedir,
    /* [in] */ LONG uiCP,
    /* [in] */ LONG dwAttempt);


void __RPC_STUB IDownloadManager_StartURL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IDownloadManager_DownloadURL_Proxy( 
    IDownloadManager __RPC_FAR * This,
    /* [in] */ BSTR bstrURL,
    /* [in] */ VARIANT_BOOL fSaveAs);


void __RPC_STUB IDownloadManager_DownloadURL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDownloadManager_get_eventlock_Proxy( 
    IDownloadManager __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pfEventLock);


void __RPC_STUB IDownloadManager_get_eventlock_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDownloadManager_put_eventlock_Proxy( 
    IDownloadManager __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL fEventLock);


void __RPC_STUB IDownloadManager_put_eventlock_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IDownloadManager_CancelDownload_Proxy( 
    IDownloadManager __RPC_FAR * This,
    /* [in] */ LONG lID);


void __RPC_STUB IDownloadManager_CancelDownload_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IDownloadManager_SetState_Proxy( 
    IDownloadManager __RPC_FAR * This,
    /* [in] */ LONG lID,
    /* [in] */ LONG lState);


void __RPC_STUB IDownloadManager_SetState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IDownloadManager_StartPendingLaterDownloads_Proxy( 
    IDownloadManager __RPC_FAR * This);


void __RPC_STUB IDownloadManager_StartPendingLaterDownloads_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDownloadManager_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long __RPC_FAR *, unsigned long            , BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long __RPC_FAR *, BSTR __RPC_FAR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long __RPC_FAR *, unsigned long            , VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long __RPC_FAR *, VARIANT __RPC_FAR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


