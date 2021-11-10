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
/* at Tue Jan 23 14:31:26 2007
 */
/* Compiler settings for ..\tlog.idl:
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

#ifndef __tlog_h__
#define __tlog_h__

/* Forward Declarations */ 

#ifndef __ITravelEntry2_FWD_DEFINED__
#define __ITravelEntry2_FWD_DEFINED__
typedef interface ITravelEntry2 ITravelEntry2;
#endif 	/* __ITravelEntry2_FWD_DEFINED__ */


#ifndef __ITravelLogEx_FWD_DEFINED__
#define __ITravelLogEx_FWD_DEFINED__
typedef interface ITravelLogEx ITravelLogEx;
#endif 	/* __ITravelLogEx_FWD_DEFINED__ */


#ifndef __ITravelLog2_FWD_DEFINED__
#define __ITravelLog2_FWD_DEFINED__
typedef interface ITravelLog2 ITravelLog2;
#endif 	/* __ITravelLog2_FWD_DEFINED__ */


#ifndef __ITravelLogClientWrapper_FWD_DEFINED__
#define __ITravelLogClientWrapper_FWD_DEFINED__
typedef interface ITravelLogClientWrapper ITravelLogClientWrapper;
#endif 	/* __ITravelLogClientWrapper_FWD_DEFINED__ */


#ifndef __IShellTravelLogUI_FWD_DEFINED__
#define __IShellTravelLogUI_FWD_DEFINED__
typedef interface IShellTravelLogUI IShellTravelLogUI;
#endif 	/* __IShellTravelLogUI_FWD_DEFINED__ */


/* header files for imported files */
#include "ocidl.h"
#include "shtypes.h"
#include "tlogstg.h"
#include "shdeprecated.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_tlog_0000 */
/* [local] */ 

#define TLOGENTRYFLAG_TYPEDURL      0x00000001
#define TLOGENTRYFLAG_HUBPAGE       0x00000002
#define TLOGENTRYFLAG_SEARCHRESULT  0x00000004
#define TLOGENTRYFLAG_USERSET       0x40000000
#define TLOG_BACKEXTERNAL   -0x7fffffff


extern RPC_IF_HANDLE __MIDL_itf_tlog_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tlog_0000_v0_0_s_ifspec;

#ifndef __ITravelEntry2_INTERFACE_DEFINED__
#define __ITravelEntry2_INTERFACE_DEFINED__

/* interface ITravelEntry2 */
/* [helpcontext][helpstring][hidden][object][uuid] */ 


EXTERN_C const IID IID_ITravelEntry2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ed4f9add-3cc4-46b7-a416-2ff54d7156bb")
    ITravelEntry2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddEntryFlags( 
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveEntryFlags( 
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEntryFlags( 
            /* [out] */ DWORD __RPC_FAR *pdwFlags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITravelEntry2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITravelEntry2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITravelEntry2 __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITravelEntry2 __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddEntryFlags )( 
            ITravelEntry2 __RPC_FAR * This,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RemoveEntryFlags )( 
            ITravelEntry2 __RPC_FAR * This,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetEntryFlags )( 
            ITravelEntry2 __RPC_FAR * This,
            /* [out] */ DWORD __RPC_FAR *pdwFlags);
        
        END_INTERFACE
    } ITravelEntry2Vtbl;

    interface ITravelEntry2
    {
        CONST_VTBL struct ITravelEntry2Vtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITravelEntry2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITravelEntry2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITravelEntry2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITravelEntry2_AddEntryFlags(This,dwFlags)	\
    (This)->lpVtbl -> AddEntryFlags(This,dwFlags)

#define ITravelEntry2_RemoveEntryFlags(This,dwFlags)	\
    (This)->lpVtbl -> RemoveEntryFlags(This,dwFlags)

#define ITravelEntry2_GetEntryFlags(This,pdwFlags)	\
    (This)->lpVtbl -> GetEntryFlags(This,pdwFlags)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITravelEntry2_AddEntryFlags_Proxy( 
    ITravelEntry2 __RPC_FAR * This,
    /* [in] */ DWORD dwFlags);


void __RPC_STUB ITravelEntry2_AddEntryFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITravelEntry2_RemoveEntryFlags_Proxy( 
    ITravelEntry2 __RPC_FAR * This,
    /* [in] */ DWORD dwFlags);


void __RPC_STUB ITravelEntry2_RemoveEntryFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITravelEntry2_GetEntryFlags_Proxy( 
    ITravelEntry2 __RPC_FAR * This,
    /* [out] */ DWORD __RPC_FAR *pdwFlags);


void __RPC_STUB ITravelEntry2_GetEntryFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITravelEntry2_INTERFACE_DEFINED__ */


#ifndef __ITravelLogEx_INTERFACE_DEFINED__
#define __ITravelLogEx_INTERFACE_DEFINED__

/* interface ITravelLogEx */
/* [helpcontext][helpstring][hidden][object][uuid] */ 


EXTERN_C const IID IID_ITravelLogEx;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3050f679-98b5-11cf-bb82-00aa00bdce0b")
    ITravelLogEx : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE FindTravelEntryWithUrl( 
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ UINT uiCP,
            /* [in] */ LPWSTR pszUrl,
            /* [out] */ ITravelEntry __RPC_FAR *__RPC_FAR *ppte) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE TravelToUrl( 
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ UINT uiCP,
            /* [in] */ LPWSTR pszUrl) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE DeleteIndexEntry( 
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ int index) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE DeleteUrlEntry( 
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ UINT uiCP,
            /* [in] */ LPWSTR pszUrl) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE CountEntryNodes( 
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ DWORD dwFlags,
            /* [out] */ DWORD __RPC_FAR *pdwCount) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE CreateEnumEntry( 
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [out] */ IEnumTravelLogEntry __RPC_FAR *__RPC_FAR *ppEnum,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE DeleteEntry( 
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ ITravelLogEntry __RPC_FAR *pte) = 0;
        
        virtual /* [local][helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE InsertEntry( 
            /* [in] */ IUnknown __RPC_FAR *punkBrowser,
            /* [in] */ ITravelLogEntry __RPC_FAR *pteRelativeTo,
            /* [in] */ BOOL fPrepend,
            /* [in] */ IUnknown __RPC_FAR *punkTLClient,
            /* [out] */ ITravelLogEntry __RPC_FAR *__RPC_FAR *ppEntry) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE TravelToEntry( 
            /* [in] */ IUnknown __RPC_FAR *punkBrowser,
            /* [in] */ ITravelLogEntry __RPC_FAR *pteDestination) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITravelLogExVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITravelLogEx __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITravelLogEx __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITravelLogEx __RPC_FAR * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FindTravelEntryWithUrl )( 
            ITravelLogEx __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ UINT uiCP,
            /* [in] */ LPWSTR pszUrl,
            /* [out] */ ITravelEntry __RPC_FAR *__RPC_FAR *ppte);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *TravelToUrl )( 
            ITravelLogEx __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ UINT uiCP,
            /* [in] */ LPWSTR pszUrl);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DeleteIndexEntry )( 
            ITravelLogEx __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ int index);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DeleteUrlEntry )( 
            ITravelLogEx __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ UINT uiCP,
            /* [in] */ LPWSTR pszUrl);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CountEntryNodes )( 
            ITravelLogEx __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ DWORD dwFlags,
            /* [out] */ DWORD __RPC_FAR *pdwCount);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateEnumEntry )( 
            ITravelLogEx __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [out] */ IEnumTravelLogEntry __RPC_FAR *__RPC_FAR *ppEnum,
            /* [in] */ DWORD dwFlags);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DeleteEntry )( 
            ITravelLogEx __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ ITravelLogEntry __RPC_FAR *pte);
        
        /* [local][helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InsertEntry )( 
            ITravelLogEx __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *punkBrowser,
            /* [in] */ ITravelLogEntry __RPC_FAR *pteRelativeTo,
            /* [in] */ BOOL fPrepend,
            /* [in] */ IUnknown __RPC_FAR *punkTLClient,
            /* [out] */ ITravelLogEntry __RPC_FAR *__RPC_FAR *ppEntry);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *TravelToEntry )( 
            ITravelLogEx __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *punkBrowser,
            /* [in] */ ITravelLogEntry __RPC_FAR *pteDestination);
        
        END_INTERFACE
    } ITravelLogExVtbl;

    interface ITravelLogEx
    {
        CONST_VTBL struct ITravelLogExVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITravelLogEx_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITravelLogEx_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITravelLogEx_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITravelLogEx_FindTravelEntryWithUrl(This,punk,uiCP,pszUrl,ppte)	\
    (This)->lpVtbl -> FindTravelEntryWithUrl(This,punk,uiCP,pszUrl,ppte)

#define ITravelLogEx_TravelToUrl(This,punk,uiCP,pszUrl)	\
    (This)->lpVtbl -> TravelToUrl(This,punk,uiCP,pszUrl)

#define ITravelLogEx_DeleteIndexEntry(This,punk,index)	\
    (This)->lpVtbl -> DeleteIndexEntry(This,punk,index)

#define ITravelLogEx_DeleteUrlEntry(This,punk,uiCP,pszUrl)	\
    (This)->lpVtbl -> DeleteUrlEntry(This,punk,uiCP,pszUrl)

#define ITravelLogEx_CountEntryNodes(This,punk,dwFlags,pdwCount)	\
    (This)->lpVtbl -> CountEntryNodes(This,punk,dwFlags,pdwCount)

#define ITravelLogEx_CreateEnumEntry(This,punk,ppEnum,dwFlags)	\
    (This)->lpVtbl -> CreateEnumEntry(This,punk,ppEnum,dwFlags)

#define ITravelLogEx_DeleteEntry(This,punk,pte)	\
    (This)->lpVtbl -> DeleteEntry(This,punk,pte)

#define ITravelLogEx_InsertEntry(This,punkBrowser,pteRelativeTo,fPrepend,punkTLClient,ppEntry)	\
    (This)->lpVtbl -> InsertEntry(This,punkBrowser,pteRelativeTo,fPrepend,punkTLClient,ppEntry)

#define ITravelLogEx_TravelToEntry(This,punkBrowser,pteDestination)	\
    (This)->lpVtbl -> TravelToEntry(This,punkBrowser,pteDestination)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLogEx_FindTravelEntryWithUrl_Proxy( 
    ITravelLogEx __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *punk,
    /* [in] */ UINT uiCP,
    /* [in] */ LPWSTR pszUrl,
    /* [out] */ ITravelEntry __RPC_FAR *__RPC_FAR *ppte);


void __RPC_STUB ITravelLogEx_FindTravelEntryWithUrl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLogEx_TravelToUrl_Proxy( 
    ITravelLogEx __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *punk,
    /* [in] */ UINT uiCP,
    /* [in] */ LPWSTR pszUrl);


void __RPC_STUB ITravelLogEx_TravelToUrl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLogEx_DeleteIndexEntry_Proxy( 
    ITravelLogEx __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *punk,
    /* [in] */ int index);


void __RPC_STUB ITravelLogEx_DeleteIndexEntry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLogEx_DeleteUrlEntry_Proxy( 
    ITravelLogEx __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *punk,
    /* [in] */ UINT uiCP,
    /* [in] */ LPWSTR pszUrl);


void __RPC_STUB ITravelLogEx_DeleteUrlEntry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLogEx_CountEntryNodes_Proxy( 
    ITravelLogEx __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *punk,
    /* [in] */ DWORD dwFlags,
    /* [out] */ DWORD __RPC_FAR *pdwCount);


void __RPC_STUB ITravelLogEx_CountEntryNodes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLogEx_CreateEnumEntry_Proxy( 
    ITravelLogEx __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *punk,
    /* [out] */ IEnumTravelLogEntry __RPC_FAR *__RPC_FAR *ppEnum,
    /* [in] */ DWORD dwFlags);


void __RPC_STUB ITravelLogEx_CreateEnumEntry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLogEx_DeleteEntry_Proxy( 
    ITravelLogEx __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *punk,
    /* [in] */ ITravelLogEntry __RPC_FAR *pte);


void __RPC_STUB ITravelLogEx_DeleteEntry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [call_as] */ HRESULT STDMETHODCALLTYPE ITravelLogEx_RemoteInsertEntry_Proxy( 
    ITravelLogEx __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *punkBrowser,
    /* [in] */ ITravelLogEntry __RPC_FAR *pteRelativeTo,
    /* [in] */ BOOL fPrepend,
    /* [in] */ IUnknown __RPC_FAR *punkTLClient,
    /* [out] */ ITravelLogEntry __RPC_FAR *__RPC_FAR *ppEntry);


void __RPC_STUB ITravelLogEx_RemoteInsertEntry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLogEx_TravelToEntry_Proxy( 
    ITravelLogEx __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *punkBrowser,
    /* [in] */ ITravelLogEntry __RPC_FAR *pteDestination);


void __RPC_STUB ITravelLogEx_TravelToEntry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITravelLogEx_INTERFACE_DEFINED__ */


#ifndef __ITravelLog2_INTERFACE_DEFINED__
#define __ITravelLog2_INTERFACE_DEFINED__

/* interface ITravelLog2 */
/* [helpcontext][helpstring][hidden][object][uuid] */ 


EXTERN_C const IID IID_ITravelLog2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0A46D8E2-2072-4AED-8509-BADB844E51F6")
    ITravelLog2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetJourneyOffset( 
            /* [out] */ int __RPC_FAR *pOffset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetJourneyState( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FastBack( 
            /* [in] */ IUnknown __RPC_FAR *punkBrowser) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTypedNavigationPending( 
            /* [in] */ BOOL fPending) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFirstFastBackEntry( 
            /* [out] */ ITravelEntry __RPC_FAR *__RPC_FAR *ppte) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PopulateTravelLogUI( 
            /* [in] */ IUnknown __RPC_FAR *punkBrowser,
            /* [in] */ IUnknown __RPC_FAR *punkTravelLogUI,
            /* [in] */ int idFirst,
            /* [in] */ int idLast,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateEntry( 
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ BOOL fIsLocalAnchor,
            /* [in] */ BOOL fIsDocObjEntry) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITravelLog2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITravelLog2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITravelLog2 __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITravelLog2 __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetJourneyOffset )( 
            ITravelLog2 __RPC_FAR * This,
            /* [out] */ int __RPC_FAR *pOffset);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ResetJourneyState )( 
            ITravelLog2 __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FastBack )( 
            ITravelLog2 __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *punkBrowser);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetTypedNavigationPending )( 
            ITravelLog2 __RPC_FAR * This,
            /* [in] */ BOOL fPending);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetFirstFastBackEntry )( 
            ITravelLog2 __RPC_FAR * This,
            /* [out] */ ITravelEntry __RPC_FAR *__RPC_FAR *ppte);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *PopulateTravelLogUI )( 
            ITravelLog2 __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *punkBrowser,
            /* [in] */ IUnknown __RPC_FAR *punkTravelLogUI,
            /* [in] */ int idFirst,
            /* [in] */ int idLast,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *UpdateEntry )( 
            ITravelLog2 __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *punk,
            /* [in] */ BOOL fIsLocalAnchor,
            /* [in] */ BOOL fIsDocObjEntry);
        
        END_INTERFACE
    } ITravelLog2Vtbl;

    interface ITravelLog2
    {
        CONST_VTBL struct ITravelLog2Vtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITravelLog2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITravelLog2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITravelLog2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITravelLog2_GetJourneyOffset(This,pOffset)	\
    (This)->lpVtbl -> GetJourneyOffset(This,pOffset)

#define ITravelLog2_ResetJourneyState(This)	\
    (This)->lpVtbl -> ResetJourneyState(This)

#define ITravelLog2_FastBack(This,punkBrowser)	\
    (This)->lpVtbl -> FastBack(This,punkBrowser)

#define ITravelLog2_SetTypedNavigationPending(This,fPending)	\
    (This)->lpVtbl -> SetTypedNavigationPending(This,fPending)

#define ITravelLog2_GetFirstFastBackEntry(This,ppte)	\
    (This)->lpVtbl -> GetFirstFastBackEntry(This,ppte)

#define ITravelLog2_PopulateTravelLogUI(This,punkBrowser,punkTravelLogUI,idFirst,idLast,dwFlags)	\
    (This)->lpVtbl -> PopulateTravelLogUI(This,punkBrowser,punkTravelLogUI,idFirst,idLast,dwFlags)

#define ITravelLog2_UpdateEntry(This,punk,fIsLocalAnchor,fIsDocObjEntry)	\
    (This)->lpVtbl -> UpdateEntry(This,punk,fIsLocalAnchor,fIsDocObjEntry)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITravelLog2_GetJourneyOffset_Proxy( 
    ITravelLog2 __RPC_FAR * This,
    /* [out] */ int __RPC_FAR *pOffset);


void __RPC_STUB ITravelLog2_GetJourneyOffset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITravelLog2_ResetJourneyState_Proxy( 
    ITravelLog2 __RPC_FAR * This);


void __RPC_STUB ITravelLog2_ResetJourneyState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITravelLog2_FastBack_Proxy( 
    ITravelLog2 __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *punkBrowser);


void __RPC_STUB ITravelLog2_FastBack_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITravelLog2_SetTypedNavigationPending_Proxy( 
    ITravelLog2 __RPC_FAR * This,
    /* [in] */ BOOL fPending);


void __RPC_STUB ITravelLog2_SetTypedNavigationPending_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITravelLog2_GetFirstFastBackEntry_Proxy( 
    ITravelLog2 __RPC_FAR * This,
    /* [out] */ ITravelEntry __RPC_FAR *__RPC_FAR *ppte);


void __RPC_STUB ITravelLog2_GetFirstFastBackEntry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITravelLog2_PopulateTravelLogUI_Proxy( 
    ITravelLog2 __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *punkBrowser,
    /* [in] */ IUnknown __RPC_FAR *punkTravelLogUI,
    /* [in] */ int idFirst,
    /* [in] */ int idLast,
    /* [in] */ DWORD dwFlags);


void __RPC_STUB ITravelLog2_PopulateTravelLogUI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITravelLog2_UpdateEntry_Proxy( 
    ITravelLog2 __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *punk,
    /* [in] */ BOOL fIsLocalAnchor,
    /* [in] */ BOOL fIsDocObjEntry);


void __RPC_STUB ITravelLog2_UpdateEntry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITravelLog2_INTERFACE_DEFINED__ */


#ifndef __ITravelLogClientWrapper_INTERFACE_DEFINED__
#define __ITravelLogClientWrapper_INTERFACE_DEFINED__

/* interface ITravelLogClientWrapper */
/* [helpcontext][helpstring][hidden][object][uuid] */ 


EXTERN_C const IID IID_ITravelLogClientWrapper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0AD364CE-ADCB-11d3-8269-00805FC732C0")
    ITravelLogClientWrapper : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetDummyWindowData( 
            /* [in] */ LPCWSTR pszUrl,
            /* [in] */ LPCWSTR pszTitle,
            /* [in] */ IStream __RPC_FAR *pStream,
            /* [out] */ LPWINDOWDATA pWinData) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE FindWindowByIndex( 
            /* [in] */ DWORD dwID,
            /* [in] */ CLSID __RPC_FAR *pclsid,
            /* [out] */ IUnknown __RPC_FAR *__RPC_FAR *ppunk) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITravelLogClientWrapperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITravelLogClientWrapper __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITravelLogClientWrapper __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITravelLogClientWrapper __RPC_FAR * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetDummyWindowData )( 
            ITravelLogClientWrapper __RPC_FAR * This,
            /* [in] */ LPCWSTR pszUrl,
            /* [in] */ LPCWSTR pszTitle,
            /* [in] */ IStream __RPC_FAR *pStream,
            /* [out] */ LPWINDOWDATA pWinData);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FindWindowByIndex )( 
            ITravelLogClientWrapper __RPC_FAR * This,
            /* [in] */ DWORD dwID,
            /* [in] */ CLSID __RPC_FAR *pclsid,
            /* [out] */ IUnknown __RPC_FAR *__RPC_FAR *ppunk);
        
        END_INTERFACE
    } ITravelLogClientWrapperVtbl;

    interface ITravelLogClientWrapper
    {
        CONST_VTBL struct ITravelLogClientWrapperVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITravelLogClientWrapper_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITravelLogClientWrapper_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITravelLogClientWrapper_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITravelLogClientWrapper_GetDummyWindowData(This,pszUrl,pszTitle,pStream,pWinData)	\
    (This)->lpVtbl -> GetDummyWindowData(This,pszUrl,pszTitle,pStream,pWinData)

#define ITravelLogClientWrapper_FindWindowByIndex(This,dwID,pclsid,ppunk)	\
    (This)->lpVtbl -> FindWindowByIndex(This,dwID,pclsid,ppunk)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLogClientWrapper_GetDummyWindowData_Proxy( 
    ITravelLogClientWrapper __RPC_FAR * This,
    /* [in] */ LPCWSTR pszUrl,
    /* [in] */ LPCWSTR pszTitle,
    /* [in] */ IStream __RPC_FAR *pStream,
    /* [out] */ LPWINDOWDATA pWinData);


void __RPC_STUB ITravelLogClientWrapper_GetDummyWindowData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLogClientWrapper_FindWindowByIndex_Proxy( 
    ITravelLogClientWrapper __RPC_FAR * This,
    /* [in] */ DWORD dwID,
    /* [in] */ CLSID __RPC_FAR *pclsid,
    /* [out] */ IUnknown __RPC_FAR *__RPC_FAR *ppunk);


void __RPC_STUB ITravelLogClientWrapper_FindWindowByIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITravelLogClientWrapper_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_tlog_0568 */
/* [local] */ 

#define STLUI_FLAG_CURRENT      0x00000001
#define STLUI_FLAG_BACK         0x00000002
#define STLUI_FLAG_FORWARD      0x00000004
#define STLUI_ID_SHOWHISTORY    600


extern RPC_IF_HANDLE __MIDL_itf_tlog_0568_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tlog_0568_v0_0_s_ifspec;

#ifndef __IShellTravelLogUI_INTERFACE_DEFINED__
#define __IShellTravelLogUI_INTERFACE_DEFINED__

/* interface IShellTravelLogUI */
/* [unique][helpcontext][helpstring][object][uuid] */ 


EXTERN_C const IID IID_IShellTravelLogUI;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DB126A9B-7868-43A3-82E7-5364A3A1A541")
    IShellTravelLogUI : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddTravelLogItem( 
            /* [in] */ LONG nItemID,
            /* [in] */ LPCWSTR pszTitle,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowTravelLog( 
            /* [in] */ int x,
            /* [in] */ int y,
            /* [in] */ HWND hwndParent,
            /* [in] */ LPCRECT prcExclude,
            /* [out] */ LONG __RPC_FAR *pnItemID) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShellTravelLogUIVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IShellTravelLogUI __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IShellTravelLogUI __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IShellTravelLogUI __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Reset )( 
            IShellTravelLogUI __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddTravelLogItem )( 
            IShellTravelLogUI __RPC_FAR * This,
            /* [in] */ LONG nItemID,
            /* [in] */ LPCWSTR pszTitle,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ShowTravelLog )( 
            IShellTravelLogUI __RPC_FAR * This,
            /* [in] */ int x,
            /* [in] */ int y,
            /* [in] */ HWND hwndParent,
            /* [in] */ LPCRECT prcExclude,
            /* [out] */ LONG __RPC_FAR *pnItemID);
        
        END_INTERFACE
    } IShellTravelLogUIVtbl;

    interface IShellTravelLogUI
    {
        CONST_VTBL struct IShellTravelLogUIVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellTravelLogUI_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IShellTravelLogUI_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IShellTravelLogUI_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IShellTravelLogUI_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IShellTravelLogUI_AddTravelLogItem(This,nItemID,pszTitle,dwFlags)	\
    (This)->lpVtbl -> AddTravelLogItem(This,nItemID,pszTitle,dwFlags)

#define IShellTravelLogUI_ShowTravelLog(This,x,y,hwndParent,prcExclude,pnItemID)	\
    (This)->lpVtbl -> ShowTravelLog(This,x,y,hwndParent,prcExclude,pnItemID)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IShellTravelLogUI_Reset_Proxy( 
    IShellTravelLogUI __RPC_FAR * This);


void __RPC_STUB IShellTravelLogUI_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellTravelLogUI_AddTravelLogItem_Proxy( 
    IShellTravelLogUI __RPC_FAR * This,
    /* [in] */ LONG nItemID,
    /* [in] */ LPCWSTR pszTitle,
    /* [in] */ DWORD dwFlags);


void __RPC_STUB IShellTravelLogUI_AddTravelLogItem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellTravelLogUI_ShowTravelLog_Proxy( 
    IShellTravelLogUI __RPC_FAR * This,
    /* [in] */ int x,
    /* [in] */ int y,
    /* [in] */ HWND hwndParent,
    /* [in] */ LPCRECT prcExclude,
    /* [out] */ LONG __RPC_FAR *pnItemID);


void __RPC_STUB IShellTravelLogUI_ShowTravelLog_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IShellTravelLogUI_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HWND_UserSize(     unsigned long __RPC_FAR *, unsigned long            , HWND __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  HWND_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, HWND __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  HWND_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, HWND __RPC_FAR * ); 
void                      __RPC_USER  HWND_UserFree(     unsigned long __RPC_FAR *, HWND __RPC_FAR * ); 

unsigned long             __RPC_USER  PIDLIST_ABSOLUTE_UserSize(     unsigned long __RPC_FAR *, unsigned long            , PIDLIST_ABSOLUTE __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  PIDLIST_ABSOLUTE_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, PIDLIST_ABSOLUTE __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  PIDLIST_ABSOLUTE_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, PIDLIST_ABSOLUTE __RPC_FAR * ); 
void                      __RPC_USER  PIDLIST_ABSOLUTE_UserFree(     unsigned long __RPC_FAR *, PIDLIST_ABSOLUTE __RPC_FAR * ); 

/* [local][helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLogEx_InsertEntry_Proxy( 
    ITravelLogEx __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *punkBrowser,
    /* [in] */ ITravelLogEntry __RPC_FAR *pteRelativeTo,
    /* [in] */ BOOL fPrepend,
    /* [in] */ IUnknown __RPC_FAR *punkTLClient,
    /* [out] */ ITravelLogEntry __RPC_FAR *__RPC_FAR *ppEntry);


/* [call_as] */ HRESULT STDMETHODCALLTYPE ITravelLogEx_InsertEntry_Stub( 
    ITravelLogEx __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *punkBrowser,
    /* [in] */ ITravelLogEntry __RPC_FAR *pteRelativeTo,
    /* [in] */ BOOL fPrepend,
    /* [in] */ IUnknown __RPC_FAR *punkTLClient,
    /* [out] */ ITravelLogEntry __RPC_FAR *__RPC_FAR *ppEntry);



/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


