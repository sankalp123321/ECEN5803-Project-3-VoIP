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


/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0543 */
/* Compiler settings for poomext.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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

#ifndef __poomext_h__
#define __poomext_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IPimNewCard_FWD_DEFINED__
#define __IPimNewCard_FWD_DEFINED__
typedef interface IPimNewCard IPimNewCard;
#endif 	/* __IPimNewCard_FWD_DEFINED__ */


#ifndef __IPimDisplayCard_FWD_DEFINED__
#define __IPimDisplayCard_FWD_DEFINED__
typedef interface IPimDisplayCard IPimDisplayCard;
#endif 	/* __IPimDisplayCard_FWD_DEFINED__ */


#ifndef __IPimEditCard_FWD_DEFINED__
#define __IPimEditCard_FWD_DEFINED__
typedef interface IPimEditCard IPimEditCard;
#endif 	/* __IPimEditCard_FWD_DEFINED__ */


#ifndef __IPimPivotPage_FWD_DEFINED__
#define __IPimPivotPage_FWD_DEFINED__
typedef interface IPimPivotPage IPimPivotPage;
#endif 	/* __IPimPivotPage_FWD_DEFINED__ */


#ifndef __IPimPivotPageManager_FWD_DEFINED__
#define __IPimPivotPageManager_FWD_DEFINED__
typedef interface IPimPivotPageManager IPimPivotPageManager;
#endif 	/* __IPimPivotPageManager_FWD_DEFINED__ */


#ifndef __IPimPivotPageProvider_FWD_DEFINED__
#define __IPimPivotPageProvider_FWD_DEFINED__
typedef interface IPimPivotPageProvider IPimPivotPageProvider;
#endif 	/* __IPimPivotPageProvider_FWD_DEFINED__ */


#ifndef __IPimConfigurationManager_FWD_DEFINED__
#define __IPimConfigurationManager_FWD_DEFINED__
typedef interface IPimConfigurationManager IPimConfigurationManager;
#endif 	/* __IPimConfigurationManager_FWD_DEFINED__ */


/* header files for imported files */
#include "pimstore.h"
#include "menumanager.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_poomext_0000_0000 */
/* [local] */ 

//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// Use of this source code is subject to the terms of the Microsoft
// premium shared source license agreement under which you licensed
// this source code. If you did not accept the terms of the license
// agreement, you are not authorized to use this source code.
// For the terms of the license, please see the license agreement
// signed by you and Microsoft.
// THE SOURCE CODE IS PROVIDED "AS IS", WITH NO WARRANTIES OR INDEMNITIES.
//
// ***********************************************************************
//
#ifndef MIDL_PASS
#include <windows.h>
#include <ole2.h>
#endif
typedef /* [v1_enum] */ 
enum PimEditCardMode
    {	PimEditCardMode_InvokeAfterDefaultCard	= 0,
	PimEditCardMode_ReplaceDefaultCard	= 1
    } 	PimEditCardMode;

DEFINE_GUID(IID_IPimNewCard, 0x6689d56b, 0x847e, 0x4a45, 0xba, 0x80, 0x33, 0x82, 0xa8, 0xc6, 0x12, 0x22);


extern RPC_IF_HANDLE __MIDL_itf_poomext_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_poomext_0000_0000_v0_0_s_ifspec;

#ifndef __IPimNewCard_INTERFACE_DEFINED__
#define __IPimNewCard_INTERFACE_DEFINED__

/* interface IPimNewCard */
/* [local][dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IPimNewCard;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6689d56b-847e-4a45-ba80-3382a8c61222")
    IPimNewCard : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSupportedNewCardItemTypes( 
            /* [out] */ OlItemType **ppItemTypes,
            /* [out] */ DWORD *pcItemTypes) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSupportedNewCardMode( 
            /* [out] */ PimEditCardMode *pMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Create( 
            /* [in] */ HWND hwndParent,
            /* [in] */ IItem2 *pItem) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPimNewCardVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPimNewCard * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPimNewCard * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPimNewCard * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSupportedNewCardItemTypes )( 
            IPimNewCard * This,
            /* [out] */ OlItemType **ppItemTypes,
            /* [out] */ DWORD *pcItemTypes);
        
        HRESULT ( STDMETHODCALLTYPE *GetSupportedNewCardMode )( 
            IPimNewCard * This,
            /* [out] */ PimEditCardMode *pMode);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            IPimNewCard * This,
            /* [in] */ HWND hwndParent,
            /* [in] */ IItem2 *pItem);
        
        END_INTERFACE
    } IPimNewCardVtbl;

    interface IPimNewCard
    {
        CONST_VTBL struct IPimNewCardVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPimNewCard_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPimNewCard_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPimNewCard_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPimNewCard_GetSupportedNewCardItemTypes(This,ppItemTypes,pcItemTypes)	\
    ( (This)->lpVtbl -> GetSupportedNewCardItemTypes(This,ppItemTypes,pcItemTypes) ) 

#define IPimNewCard_GetSupportedNewCardMode(This,pMode)	\
    ( (This)->lpVtbl -> GetSupportedNewCardMode(This,pMode) ) 

#define IPimNewCard_Create(This,hwndParent,pItem)	\
    ( (This)->lpVtbl -> Create(This,hwndParent,pItem) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPimNewCard_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_poomext_0000_0001 */
/* [local] */ 

DEFINE_GUID(IID_IPimDisplayCard, 0x2e337d00, 0xca7b, 0x4ac5, 0xb8, 0x05, 0x98, 0xec, 0x7e, 0x26, 0xaf, 0x66);


extern RPC_IF_HANDLE __MIDL_itf_poomext_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_poomext_0000_0001_v0_0_s_ifspec;

#ifndef __IPimDisplayCard_INTERFACE_DEFINED__
#define __IPimDisplayCard_INTERFACE_DEFINED__

/* interface IPimDisplayCard */
/* [local][dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IPimDisplayCard;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2e337d00-ca7b-4ac5-b805-98ec7e26af66")
    IPimDisplayCard : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSupportedDisplayCardItemTypes( 
            /* [out] */ OlItemType **ppItemTypes,
            /* [out] */ DWORD *pcItemTypes) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Display( 
            /* [in] */ HWND hwndParent,
            IItem2 *pItem) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPimDisplayCardVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPimDisplayCard * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPimDisplayCard * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPimDisplayCard * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSupportedDisplayCardItemTypes )( 
            IPimDisplayCard * This,
            /* [out] */ OlItemType **ppItemTypes,
            /* [out] */ DWORD *pcItemTypes);
        
        HRESULT ( STDMETHODCALLTYPE *Display )( 
            IPimDisplayCard * This,
            /* [in] */ HWND hwndParent,
            IItem2 *pItem);
        
        END_INTERFACE
    } IPimDisplayCardVtbl;

    interface IPimDisplayCard
    {
        CONST_VTBL struct IPimDisplayCardVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPimDisplayCard_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPimDisplayCard_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPimDisplayCard_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPimDisplayCard_GetSupportedDisplayCardItemTypes(This,ppItemTypes,pcItemTypes)	\
    ( (This)->lpVtbl -> GetSupportedDisplayCardItemTypes(This,ppItemTypes,pcItemTypes) ) 

#define IPimDisplayCard_Display(This,hwndParent,pItem)	\
    ( (This)->lpVtbl -> Display(This,hwndParent,pItem) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPimDisplayCard_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_poomext_0000_0002 */
/* [local] */ 

DEFINE_GUID(IID_IPimEditCard, 0x3924d61e, 0xf9f7, 0x49ba, 0xb7, 0x5b, 0x6b, 0x15, 0x85, 0x5f, 0x67, 0xe);


extern RPC_IF_HANDLE __MIDL_itf_poomext_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_poomext_0000_0002_v0_0_s_ifspec;

#ifndef __IPimEditCard_INTERFACE_DEFINED__
#define __IPimEditCard_INTERFACE_DEFINED__

/* interface IPimEditCard */
/* [local][dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IPimEditCard;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3924D61E-F9F7-49ba-B75B-6B15855F670E")
    IPimEditCard : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSupportedEditCardItemTypes( 
            /* [out] */ OlItemType **ppItemTypes,
            /* [out] */ DWORD *pcItemTypes) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSupportedEditCardMode( 
            /* [out] */ PimEditCardMode *pMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Edit( 
            /* [in] */ HWND hwndParent,
            /* [in] */ IItem2 *pItem) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPimEditCardVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPimEditCard * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPimEditCard * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPimEditCard * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSupportedEditCardItemTypes )( 
            IPimEditCard * This,
            /* [out] */ OlItemType **ppItemTypes,
            /* [out] */ DWORD *pcItemTypes);
        
        HRESULT ( STDMETHODCALLTYPE *GetSupportedEditCardMode )( 
            IPimEditCard * This,
            /* [out] */ PimEditCardMode *pMode);
        
        HRESULT ( STDMETHODCALLTYPE *Edit )( 
            IPimEditCard * This,
            /* [in] */ HWND hwndParent,
            /* [in] */ IItem2 *pItem);
        
        END_INTERFACE
    } IPimEditCardVtbl;

    interface IPimEditCard
    {
        CONST_VTBL struct IPimEditCardVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPimEditCard_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPimEditCard_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPimEditCard_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPimEditCard_GetSupportedEditCardItemTypes(This,ppItemTypes,pcItemTypes)	\
    ( (This)->lpVtbl -> GetSupportedEditCardItemTypes(This,ppItemTypes,pcItemTypes) ) 

#define IPimEditCard_GetSupportedEditCardMode(This,pMode)	\
    ( (This)->lpVtbl -> GetSupportedEditCardMode(This,pMode) ) 

#define IPimEditCard_Edit(This,hwndParent,pItem)	\
    ( (This)->lpVtbl -> Edit(This,hwndParent,pItem) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPimEditCard_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_poomext_0000_0003 */
/* [local] */ 

DEFINE_GUID(IID_IPimPivotPage, 0xbb4e0631, 0x2728, 0x4a58, 0xad, 0xf2, 0xb5, 0x80, 0x50, 0xa8, 0x9b, 0x91);


extern RPC_IF_HANDLE __MIDL_itf_poomext_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_poomext_0000_0003_v0_0_s_ifspec;

#ifndef __IPimPivotPage_INTERFACE_DEFINED__
#define __IPimPivotPage_INTERFACE_DEFINED__

/* interface IPimPivotPage */
/* [local][dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IPimPivotPage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("bb4e0631-2728-4a58-adf2-b58050a89b91")
    IPimPivotPage : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE PreAdd( 
            /* [in] */ HWND hwndPivotControl,
            /* [out] */ void **ppPivotData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetVerbManager( 
            /* [in] */ IVerbManager *pVerbManager) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PostRemove( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPimPivotPageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPimPivotPage * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPimPivotPage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPimPivotPage * This);
        
        HRESULT ( STDMETHODCALLTYPE *PreAdd )( 
            IPimPivotPage * This,
            /* [in] */ HWND hwndPivotControl,
            /* [out] */ void **ppPivotData);
        
        HRESULT ( STDMETHODCALLTYPE *SetVerbManager )( 
            IPimPivotPage * This,
            /* [in] */ IVerbManager *pVerbManager);
        
        HRESULT ( STDMETHODCALLTYPE *PostRemove )( 
            IPimPivotPage * This);
        
        END_INTERFACE
    } IPimPivotPageVtbl;

    interface IPimPivotPage
    {
        CONST_VTBL struct IPimPivotPageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPimPivotPage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPimPivotPage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPimPivotPage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPimPivotPage_PreAdd(This,hwndPivotControl,ppPivotData)	\
    ( (This)->lpVtbl -> PreAdd(This,hwndPivotControl,ppPivotData) ) 

#define IPimPivotPage_SetVerbManager(This,pVerbManager)	\
    ( (This)->lpVtbl -> SetVerbManager(This,pVerbManager) ) 

#define IPimPivotPage_PostRemove(This)	\
    ( (This)->lpVtbl -> PostRemove(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPimPivotPage_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_poomext_0000_0004 */
/* [local] */ 

DEFINE_GUID(IID_IPimPivotPageManager, 0x8f2a75be, 0x1625, 0x400a, 0x86, 0xda, 0xab, 0xd2, 0x65, 0xfd, 0x16, 0x28);


extern RPC_IF_HANDLE __MIDL_itf_poomext_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_poomext_0000_0004_v0_0_s_ifspec;

#ifndef __IPimPivotPageManager_INTERFACE_DEFINED__
#define __IPimPivotPageManager_INTERFACE_DEFINED__

/* interface IPimPivotPageManager */
/* [local][dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IPimPivotPageManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8f2a75be-1625-400a-86da-abd265fd1628")
    IPimPivotPageManager : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InsertPage( 
            /* [in] */ IPimPivotPage *pPage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemovePage( 
            /* [in] */ IPimPivotPage *pPage) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPimPivotPageManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPimPivotPageManager * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPimPivotPageManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPimPivotPageManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPimPivotPageManager * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPimPivotPageManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPimPivotPageManager * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPimPivotPageManager * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *InsertPage )( 
            IPimPivotPageManager * This,
            /* [in] */ IPimPivotPage *pPage);
        
        HRESULT ( STDMETHODCALLTYPE *RemovePage )( 
            IPimPivotPageManager * This,
            /* [in] */ IPimPivotPage *pPage);
        
        END_INTERFACE
    } IPimPivotPageManagerVtbl;

    interface IPimPivotPageManager
    {
        CONST_VTBL struct IPimPivotPageManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPimPivotPageManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPimPivotPageManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPimPivotPageManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPimPivotPageManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPimPivotPageManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPimPivotPageManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPimPivotPageManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPimPivotPageManager_InsertPage(This,pPage)	\
    ( (This)->lpVtbl -> InsertPage(This,pPage) ) 

#define IPimPivotPageManager_RemovePage(This,pPage)	\
    ( (This)->lpVtbl -> RemovePage(This,pPage) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPimPivotPageManager_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_poomext_0000_0005 */
/* [local] */ 

DEFINE_GUID(IID_IPimPivotPageProvider, 0x4817ac18, 0xb9f4, 0x4d00, 0xa8, 0x88, 0xb9, 0x47, 0x61, 0x50, 0xf1, 0x16);


extern RPC_IF_HANDLE __MIDL_itf_poomext_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_poomext_0000_0005_v0_0_s_ifspec;

#ifndef __IPimPivotPageProvider_INTERFACE_DEFINED__
#define __IPimPivotPageProvider_INTERFACE_DEFINED__

/* interface IPimPivotPageProvider */
/* [local][dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IPimPivotPageProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4817ac18-b9f4-4d00-a888-b9476150f116")
    IPimPivotPageProvider : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ IPimPivotPageManager *pManager,
            /* [in] */ IItem2 *pItem) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPimPivotPageProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPimPivotPageProvider * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPimPivotPageProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPimPivotPageProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IPimPivotPageProvider * This,
            /* [in] */ IPimPivotPageManager *pManager,
            /* [in] */ IItem2 *pItem);
        
        END_INTERFACE
    } IPimPivotPageProviderVtbl;

    interface IPimPivotPageProvider
    {
        CONST_VTBL struct IPimPivotPageProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPimPivotPageProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPimPivotPageProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPimPivotPageProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPimPivotPageProvider_Initialize(This,pManager,pItem)	\
    ( (This)->lpVtbl -> Initialize(This,pManager,pItem) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPimPivotPageProvider_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_poomext_0000_0006 */
/* [local] */ 

DEFINE_GUID(IID_IPimConfigurationManager, 0x1c502e68, 0xc629, 0x4645, 0x9b, 0xb7, 0x50, 0x1a, 0xb7, 0x05, 0x0b, 0xd4);


extern RPC_IF_HANDLE __MIDL_itf_poomext_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_poomext_0000_0006_v0_0_s_ifspec;

#ifndef __IPimConfigurationManager_INTERFACE_DEFINED__
#define __IPimConfigurationManager_INTERFACE_DEFINED__

/* interface IPimConfigurationManager */
/* [local][dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IPimConfigurationManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1c502e68-c629-4645-9bb7-501ab7050bd4")
    IPimConfigurationManager : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RegisterProvider( 
            /* [in] */ CLSID *pProviderId,
            /* [in] */ OLITEMID *pStoreId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnregisterProvider( 
            /* [in] */ CLSID *pProviderId,
            /* [in] */ OLITEMID *pStoreId) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPimConfigurationManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPimConfigurationManager * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPimConfigurationManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPimConfigurationManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPimConfigurationManager * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPimConfigurationManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPimConfigurationManager * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPimConfigurationManager * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterProvider )( 
            IPimConfigurationManager * This,
            /* [in] */ CLSID *pProviderId,
            /* [in] */ OLITEMID *pStoreId);
        
        HRESULT ( STDMETHODCALLTYPE *UnregisterProvider )( 
            IPimConfigurationManager * This,
            /* [in] */ CLSID *pProviderId,
            /* [in] */ OLITEMID *pStoreId);
        
        END_INTERFACE
    } IPimConfigurationManagerVtbl;

    interface IPimConfigurationManager
    {
        CONST_VTBL struct IPimConfigurationManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPimConfigurationManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPimConfigurationManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPimConfigurationManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPimConfigurationManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPimConfigurationManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPimConfigurationManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPimConfigurationManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPimConfigurationManager_RegisterProvider(This,pProviderId,pStoreId)	\
    ( (This)->lpVtbl -> RegisterProvider(This,pProviderId,pStoreId) ) 

#define IPimConfigurationManager_UnregisterProvider(This,pProviderId,pStoreId)	\
    ( (This)->lpVtbl -> UnregisterProvider(This,pProviderId,pStoreId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPimConfigurationManager_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_poomext_0000_0007 */
/* [local] */ 

DEFINE_GUID(CLSID_PimConfigurationManager, 0x1c502e67, 0xc629, 0x4645, 0x9b, 0xb7, 0x50, 0x1a, 0xb7, 0x05, 0x0b, 0xd4);
DEFINE_GUID(LIBID_PoomExtension, 0xad058d22, 0x9acf, 0x4bfe, 0xbe, 0x3a, 0x2d, 0x05, 0xfa, 0xe6, 0x56, 0xcd);
// Failure code meaning that a provider is already registered for the store and therefore a 
// new one will not be registered in the applicable context when using RegisterProvider
#define E_PROVIDER_ALREADY_REGISTERED          MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 500)
// Failure code meaning that a provider is not registered for the store and therefore won't be
// unregistered in the applicable context when using UnregisterProvider
#define E_PROVIDER_NOT_REGISTERED              MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 501)
// Success code meaning that the specified provider is already registered for the store 
#define S_PROVIDER_ALREADY_REGISTERED          MAKE_HRESULT(SEVERITY_SUCCESS, FACILITY_ITF, 600)


extern RPC_IF_HANDLE __MIDL_itf_poomext_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_poomext_0000_0007_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


