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
/* Compiler settings for wsdclient.idl:
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

#ifndef __wsdclient_h__
#define __wsdclient_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IWSDEndpointProxy_FWD_DEFINED__
#define __IWSDEndpointProxy_FWD_DEFINED__
typedef interface IWSDEndpointProxy IWSDEndpointProxy;
#endif 	/* __IWSDEndpointProxy_FWD_DEFINED__ */


#ifndef __IWSDMetadataExchange_FWD_DEFINED__
#define __IWSDMetadataExchange_FWD_DEFINED__
typedef interface IWSDMetadataExchange IWSDMetadataExchange;
#endif 	/* __IWSDMetadataExchange_FWD_DEFINED__ */


#ifndef __IWSDServiceProxy_FWD_DEFINED__
#define __IWSDServiceProxy_FWD_DEFINED__
typedef interface IWSDServiceProxy IWSDServiceProxy;
#endif 	/* __IWSDServiceProxy_FWD_DEFINED__ */


#ifndef __IWSDDeviceProxy_FWD_DEFINED__
#define __IWSDDeviceProxy_FWD_DEFINED__
typedef interface IWSDDeviceProxy IWSDDeviceProxy;
#endif 	/* __IWSDDeviceProxy_FWD_DEFINED__ */


#ifndef __IWSDAsyncResult_FWD_DEFINED__
#define __IWSDAsyncResult_FWD_DEFINED__
typedef interface IWSDAsyncResult IWSDAsyncResult;
#endif 	/* __IWSDAsyncResult_FWD_DEFINED__ */


#ifndef __IWSDAsyncCallback_FWD_DEFINED__
#define __IWSDAsyncCallback_FWD_DEFINED__
typedef interface IWSDAsyncCallback IWSDAsyncCallback;
#endif 	/* __IWSDAsyncCallback_FWD_DEFINED__ */


#ifndef __IWSDEventingStatus_FWD_DEFINED__
#define __IWSDEventingStatus_FWD_DEFINED__
typedef interface IWSDEventingStatus IWSDEventingStatus;
#endif 	/* __IWSDEventingStatus_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "wsdxmldom.h"
#include "wsdtypes.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_wsdclient_0000_0000 */
/* [local] */ 











HRESULT WINAPI
WSDCreateDeviceProxy(
    __in LPCWSTR pszDeviceId,
    __in LPCWSTR pszLocalId,
    IWSDXMLContext* pContext,
    IWSDDeviceProxy** ppDeviceProxy);
HRESULT WINAPI
WSDCreateDeviceProxyAdvanced(
    __in LPCWSTR pszDeviceId,
    IWSDAddress* pDeviceAddress,
    __in LPCWSTR pszLocalId,
    IWSDXMLContext* pContext,
    IWSDDeviceProxy** ppDeviceProxy);


extern RPC_IF_HANDLE __MIDL_itf_wsdclient_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsdclient_0000_0000_v0_0_s_ifspec;

#ifndef __IWSDEndpointProxy_INTERFACE_DEFINED__
#define __IWSDEndpointProxy_INTERFACE_DEFINED__

/* interface IWSDEndpointProxy */
/* [local][restricted][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWSDEndpointProxy;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1860d430-b24c-4975-9f90-dbb39baa24ec")
    IWSDEndpointProxy : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SendOneWayRequest( 
            /* [in] */ const void *pBody,
            /* [in] */ const WSD_OPERATION *pOperation) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SendTwoWayRequest( 
            /* [in] */ const void *pBody,
            /* [in] */ const WSD_OPERATION *pOperation,
            /* [optional][in] */ const WSD_SYNCHRONOUS_RESPONSE_CONTEXT *pResponseContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SendTwoWayRequestAsync( 
            /* [in] */ const void *pBody,
            /* [in] */ const WSD_OPERATION *pOperation,
            /* [in] */ IUnknown *pAsyncState,
            /* [in] */ IWSDAsyncCallback *pCallback,
            /* [out] */ IWSDAsyncResult **pResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AbortAsyncOperation( 
            /* [in] */ IWSDAsyncResult *pAsyncResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ProcessFault( 
            /* [in] */ const WSD_SOAP_FAULT *pFault) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetErrorInfo( 
            /* [out] */ LPCWSTR *ppszErrorInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFaultInfo( 
            /* [out] */ WSD_SOAP_FAULT **ppFault) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWSDEndpointProxyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWSDEndpointProxy * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWSDEndpointProxy * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWSDEndpointProxy * This);
        
        HRESULT ( STDMETHODCALLTYPE *SendOneWayRequest )( 
            IWSDEndpointProxy * This,
            /* [in] */ const void *pBody,
            /* [in] */ const WSD_OPERATION *pOperation);
        
        HRESULT ( STDMETHODCALLTYPE *SendTwoWayRequest )( 
            IWSDEndpointProxy * This,
            /* [in] */ const void *pBody,
            /* [in] */ const WSD_OPERATION *pOperation,
            /* [optional][in] */ const WSD_SYNCHRONOUS_RESPONSE_CONTEXT *pResponseContext);
        
        HRESULT ( STDMETHODCALLTYPE *SendTwoWayRequestAsync )( 
            IWSDEndpointProxy * This,
            /* [in] */ const void *pBody,
            /* [in] */ const WSD_OPERATION *pOperation,
            /* [in] */ IUnknown *pAsyncState,
            /* [in] */ IWSDAsyncCallback *pCallback,
            /* [out] */ IWSDAsyncResult **pResult);
        
        HRESULT ( STDMETHODCALLTYPE *AbortAsyncOperation )( 
            IWSDEndpointProxy * This,
            /* [in] */ IWSDAsyncResult *pAsyncResult);
        
        HRESULT ( STDMETHODCALLTYPE *ProcessFault )( 
            IWSDEndpointProxy * This,
            /* [in] */ const WSD_SOAP_FAULT *pFault);
        
        HRESULT ( STDMETHODCALLTYPE *GetErrorInfo )( 
            IWSDEndpointProxy * This,
            /* [out] */ LPCWSTR *ppszErrorInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetFaultInfo )( 
            IWSDEndpointProxy * This,
            /* [out] */ WSD_SOAP_FAULT **ppFault);
        
        END_INTERFACE
    } IWSDEndpointProxyVtbl;

    interface IWSDEndpointProxy
    {
        CONST_VTBL struct IWSDEndpointProxyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWSDEndpointProxy_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWSDEndpointProxy_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWSDEndpointProxy_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWSDEndpointProxy_SendOneWayRequest(This,pBody,pOperation)	\
    ( (This)->lpVtbl -> SendOneWayRequest(This,pBody,pOperation) ) 

#define IWSDEndpointProxy_SendTwoWayRequest(This,pBody,pOperation,pResponseContext)	\
    ( (This)->lpVtbl -> SendTwoWayRequest(This,pBody,pOperation,pResponseContext) ) 

#define IWSDEndpointProxy_SendTwoWayRequestAsync(This,pBody,pOperation,pAsyncState,pCallback,pResult)	\
    ( (This)->lpVtbl -> SendTwoWayRequestAsync(This,pBody,pOperation,pAsyncState,pCallback,pResult) ) 

#define IWSDEndpointProxy_AbortAsyncOperation(This,pAsyncResult)	\
    ( (This)->lpVtbl -> AbortAsyncOperation(This,pAsyncResult) ) 

#define IWSDEndpointProxy_ProcessFault(This,pFault)	\
    ( (This)->lpVtbl -> ProcessFault(This,pFault) ) 

#define IWSDEndpointProxy_GetErrorInfo(This,ppszErrorInfo)	\
    ( (This)->lpVtbl -> GetErrorInfo(This,ppszErrorInfo) ) 

#define IWSDEndpointProxy_GetFaultInfo(This,ppFault)	\
    ( (This)->lpVtbl -> GetFaultInfo(This,ppFault) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWSDEndpointProxy_INTERFACE_DEFINED__ */


#ifndef __IWSDMetadataExchange_INTERFACE_DEFINED__
#define __IWSDMetadataExchange_INTERFACE_DEFINED__

/* interface IWSDMetadataExchange */
/* [local][restricted][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWSDMetadataExchange;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("06996d57-1d67-4928-9307-3d7833fdb846")
    IWSDMetadataExchange : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetMetadata( 
            /* [out] */ WSD_METADATA_SECTION_LIST **MetadataOut) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWSDMetadataExchangeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWSDMetadataExchange * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWSDMetadataExchange * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWSDMetadataExchange * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetMetadata )( 
            IWSDMetadataExchange * This,
            /* [out] */ WSD_METADATA_SECTION_LIST **MetadataOut);
        
        END_INTERFACE
    } IWSDMetadataExchangeVtbl;

    interface IWSDMetadataExchange
    {
        CONST_VTBL struct IWSDMetadataExchangeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWSDMetadataExchange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWSDMetadataExchange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWSDMetadataExchange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWSDMetadataExchange_GetMetadata(This,MetadataOut)	\
    ( (This)->lpVtbl -> GetMetadata(This,MetadataOut) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWSDMetadataExchange_INTERFACE_DEFINED__ */


#ifndef __IWSDServiceProxy_INTERFACE_DEFINED__
#define __IWSDServiceProxy_INTERFACE_DEFINED__

/* interface IWSDServiceProxy */
/* [local][restricted][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWSDServiceProxy;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d4c7fb9c-03ab-4175-9d67-094fafebf487")
    IWSDServiceProxy : public IWSDMetadataExchange
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginGetMetadata( 
            /* [out] */ IWSDAsyncResult **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetMetadata( 
            /* [in] */ IWSDAsyncResult *pResult,
            /* [out] */ WSD_METADATA_SECTION_LIST **ppMetadata) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetServiceMetadata( 
            /* [out] */ WSD_SERVICE_METADATA **ppServiceMetadata) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SubscribeToOperation( 
            /* [in] */ const WSD_OPERATION *pOperation,
            /* [in] */ IUnknown *pUnknown,
            /* [in] */ const WSDXML_ELEMENT *pAny,
            /* [out] */ WSDXML_ELEMENT **ppAny) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnsubscribeToOperation( 
            /* [in] */ const WSD_OPERATION *pOperation) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetEventingStatusCallback( 
            /* [optional][in] */ IWSDEventingStatus *pStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEndpointProxy( 
            /* [out] */ IWSDEndpointProxy **ppProxy) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWSDServiceProxyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWSDServiceProxy * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWSDServiceProxy * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWSDServiceProxy * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetMetadata )( 
            IWSDServiceProxy * This,
            /* [out] */ WSD_METADATA_SECTION_LIST **MetadataOut);
        
        HRESULT ( STDMETHODCALLTYPE *BeginGetMetadata )( 
            IWSDServiceProxy * This,
            /* [out] */ IWSDAsyncResult **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *EndGetMetadata )( 
            IWSDServiceProxy * This,
            /* [in] */ IWSDAsyncResult *pResult,
            /* [out] */ WSD_METADATA_SECTION_LIST **ppMetadata);
        
        HRESULT ( STDMETHODCALLTYPE *GetServiceMetadata )( 
            IWSDServiceProxy * This,
            /* [out] */ WSD_SERVICE_METADATA **ppServiceMetadata);
        
        HRESULT ( STDMETHODCALLTYPE *SubscribeToOperation )( 
            IWSDServiceProxy * This,
            /* [in] */ const WSD_OPERATION *pOperation,
            /* [in] */ IUnknown *pUnknown,
            /* [in] */ const WSDXML_ELEMENT *pAny,
            /* [out] */ WSDXML_ELEMENT **ppAny);
        
        HRESULT ( STDMETHODCALLTYPE *UnsubscribeToOperation )( 
            IWSDServiceProxy * This,
            /* [in] */ const WSD_OPERATION *pOperation);
        
        HRESULT ( STDMETHODCALLTYPE *SetEventingStatusCallback )( 
            IWSDServiceProxy * This,
            /* [optional][in] */ IWSDEventingStatus *pStatus);
        
        HRESULT ( STDMETHODCALLTYPE *GetEndpointProxy )( 
            IWSDServiceProxy * This,
            /* [out] */ IWSDEndpointProxy **ppProxy);
        
        END_INTERFACE
    } IWSDServiceProxyVtbl;

    interface IWSDServiceProxy
    {
        CONST_VTBL struct IWSDServiceProxyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWSDServiceProxy_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWSDServiceProxy_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWSDServiceProxy_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWSDServiceProxy_GetMetadata(This,MetadataOut)	\
    ( (This)->lpVtbl -> GetMetadata(This,MetadataOut) ) 


#define IWSDServiceProxy_BeginGetMetadata(This,ppResult)	\
    ( (This)->lpVtbl -> BeginGetMetadata(This,ppResult) ) 

#define IWSDServiceProxy_EndGetMetadata(This,pResult,ppMetadata)	\
    ( (This)->lpVtbl -> EndGetMetadata(This,pResult,ppMetadata) ) 

#define IWSDServiceProxy_GetServiceMetadata(This,ppServiceMetadata)	\
    ( (This)->lpVtbl -> GetServiceMetadata(This,ppServiceMetadata) ) 

#define IWSDServiceProxy_SubscribeToOperation(This,pOperation,pUnknown,pAny,ppAny)	\
    ( (This)->lpVtbl -> SubscribeToOperation(This,pOperation,pUnknown,pAny,ppAny) ) 

#define IWSDServiceProxy_UnsubscribeToOperation(This,pOperation)	\
    ( (This)->lpVtbl -> UnsubscribeToOperation(This,pOperation) ) 

#define IWSDServiceProxy_SetEventingStatusCallback(This,pStatus)	\
    ( (This)->lpVtbl -> SetEventingStatusCallback(This,pStatus) ) 

#define IWSDServiceProxy_GetEndpointProxy(This,ppProxy)	\
    ( (This)->lpVtbl -> GetEndpointProxy(This,ppProxy) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWSDServiceProxy_INTERFACE_DEFINED__ */


#ifndef __IWSDDeviceProxy_INTERFACE_DEFINED__
#define __IWSDDeviceProxy_INTERFACE_DEFINED__

/* interface IWSDDeviceProxy */
/* [local][restricted][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWSDDeviceProxy;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("eee0c031-c578-4c0e-9a3b-973c35f409db")
    IWSDDeviceProxy : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ LPCWSTR pszDeviceId,
            /* [in] */ IWSDAddress *pDeviceAddress,
            /* [in] */ LPCWSTR pszLocalId,
            /* [optional][in] */ IWSDXMLContext *pContext,
            /* [optional][in] */ IWSDDeviceProxy *pSponsor) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetMetadata( 
            /* [out] */ IWSDAsyncResult **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetMetadata( 
            /* [in] */ IWSDAsyncResult *pResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHostMetadata( 
            /* [out] */ WSD_HOST_METADATA **ppHostMetadata) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetThisModelMetadata( 
            /* [out] */ WSD_THIS_MODEL_METADATA **ppManufacturerMetadata) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetThisDeviceMetadata( 
            /* [out] */ WSD_THIS_DEVICE_METADATA **ppThisDeviceMetadata) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAllMetadata( 
            /* [out] */ WSD_METADATA_SECTION_LIST **ppMetadata) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetServiceProxyById( 
            /* [in] */ LPCWSTR pszServiceId,
            /* [out] */ IWSDServiceProxy **ppServiceProxy) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetServiceProxyByType( 
            /* [in] */ const WSDXML_NAME *pType,
            /* [out] */ IWSDServiceProxy **ppServiceProxy) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEndpointProxy( 
            /* [out] */ IWSDEndpointProxy **ppProxy) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWSDDeviceProxyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWSDDeviceProxy * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWSDDeviceProxy * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWSDDeviceProxy * This);
        
        HRESULT ( STDMETHODCALLTYPE *Init )( 
            IWSDDeviceProxy * This,
            /* [in] */ LPCWSTR pszDeviceId,
            /* [in] */ IWSDAddress *pDeviceAddress,
            /* [in] */ LPCWSTR pszLocalId,
            /* [optional][in] */ IWSDXMLContext *pContext,
            /* [optional][in] */ IWSDDeviceProxy *pSponsor);
        
        HRESULT ( STDMETHODCALLTYPE *BeginGetMetadata )( 
            IWSDDeviceProxy * This,
            /* [out] */ IWSDAsyncResult **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *EndGetMetadata )( 
            IWSDDeviceProxy * This,
            /* [in] */ IWSDAsyncResult *pResult);
        
        HRESULT ( STDMETHODCALLTYPE *GetHostMetadata )( 
            IWSDDeviceProxy * This,
            /* [out] */ WSD_HOST_METADATA **ppHostMetadata);
        
        HRESULT ( STDMETHODCALLTYPE *GetThisModelMetadata )( 
            IWSDDeviceProxy * This,
            /* [out] */ WSD_THIS_MODEL_METADATA **ppManufacturerMetadata);
        
        HRESULT ( STDMETHODCALLTYPE *GetThisDeviceMetadata )( 
            IWSDDeviceProxy * This,
            /* [out] */ WSD_THIS_DEVICE_METADATA **ppThisDeviceMetadata);
        
        HRESULT ( STDMETHODCALLTYPE *GetAllMetadata )( 
            IWSDDeviceProxy * This,
            /* [out] */ WSD_METADATA_SECTION_LIST **ppMetadata);
        
        HRESULT ( STDMETHODCALLTYPE *GetServiceProxyById )( 
            IWSDDeviceProxy * This,
            /* [in] */ LPCWSTR pszServiceId,
            /* [out] */ IWSDServiceProxy **ppServiceProxy);
        
        HRESULT ( STDMETHODCALLTYPE *GetServiceProxyByType )( 
            IWSDDeviceProxy * This,
            /* [in] */ const WSDXML_NAME *pType,
            /* [out] */ IWSDServiceProxy **ppServiceProxy);
        
        HRESULT ( STDMETHODCALLTYPE *GetEndpointProxy )( 
            IWSDDeviceProxy * This,
            /* [out] */ IWSDEndpointProxy **ppProxy);
        
        END_INTERFACE
    } IWSDDeviceProxyVtbl;

    interface IWSDDeviceProxy
    {
        CONST_VTBL struct IWSDDeviceProxyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWSDDeviceProxy_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWSDDeviceProxy_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWSDDeviceProxy_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWSDDeviceProxy_Init(This,pszDeviceId,pDeviceAddress,pszLocalId,pContext,pSponsor)	\
    ( (This)->lpVtbl -> Init(This,pszDeviceId,pDeviceAddress,pszLocalId,pContext,pSponsor) ) 

#define IWSDDeviceProxy_BeginGetMetadata(This,ppResult)	\
    ( (This)->lpVtbl -> BeginGetMetadata(This,ppResult) ) 

#define IWSDDeviceProxy_EndGetMetadata(This,pResult)	\
    ( (This)->lpVtbl -> EndGetMetadata(This,pResult) ) 

#define IWSDDeviceProxy_GetHostMetadata(This,ppHostMetadata)	\
    ( (This)->lpVtbl -> GetHostMetadata(This,ppHostMetadata) ) 

#define IWSDDeviceProxy_GetThisModelMetadata(This,ppManufacturerMetadata)	\
    ( (This)->lpVtbl -> GetThisModelMetadata(This,ppManufacturerMetadata) ) 

#define IWSDDeviceProxy_GetThisDeviceMetadata(This,ppThisDeviceMetadata)	\
    ( (This)->lpVtbl -> GetThisDeviceMetadata(This,ppThisDeviceMetadata) ) 

#define IWSDDeviceProxy_GetAllMetadata(This,ppMetadata)	\
    ( (This)->lpVtbl -> GetAllMetadata(This,ppMetadata) ) 

#define IWSDDeviceProxy_GetServiceProxyById(This,pszServiceId,ppServiceProxy)	\
    ( (This)->lpVtbl -> GetServiceProxyById(This,pszServiceId,ppServiceProxy) ) 

#define IWSDDeviceProxy_GetServiceProxyByType(This,pType,ppServiceProxy)	\
    ( (This)->lpVtbl -> GetServiceProxyByType(This,pType,ppServiceProxy) ) 

#define IWSDDeviceProxy_GetEndpointProxy(This,ppProxy)	\
    ( (This)->lpVtbl -> GetEndpointProxy(This,ppProxy) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWSDDeviceProxy_INTERFACE_DEFINED__ */


#ifndef __IWSDAsyncResult_INTERFACE_DEFINED__
#define __IWSDAsyncResult_INTERFACE_DEFINED__

/* interface IWSDAsyncResult */
/* [local][restricted][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWSDAsyncResult;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("11a9852a-8dd8-423e-b537-9356db4fbfb8")
    IWSDAsyncResult : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetCallback( 
            /* [in] */ IWSDAsyncCallback *pCallback,
            /* [in] */ IUnknown *pAsyncState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetWaitHandle( 
            /* [in] */ HANDLE hWaitHandle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HasCompleted( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAsyncState( 
            /* [out] */ IUnknown **ppAsyncState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Abort( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEvent( 
            /* [out] */ WSD_EVENT *pEvent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEndpointProxy( 
            /* [out] */ IWSDEndpointProxy **ppEndpoint) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWSDAsyncResultVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWSDAsyncResult * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWSDAsyncResult * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWSDAsyncResult * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetCallback )( 
            IWSDAsyncResult * This,
            /* [in] */ IWSDAsyncCallback *pCallback,
            /* [in] */ IUnknown *pAsyncState);
        
        HRESULT ( STDMETHODCALLTYPE *SetWaitHandle )( 
            IWSDAsyncResult * This,
            /* [in] */ HANDLE hWaitHandle);
        
        HRESULT ( STDMETHODCALLTYPE *HasCompleted )( 
            IWSDAsyncResult * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetAsyncState )( 
            IWSDAsyncResult * This,
            /* [out] */ IUnknown **ppAsyncState);
        
        HRESULT ( STDMETHODCALLTYPE *Abort )( 
            IWSDAsyncResult * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetEvent )( 
            IWSDAsyncResult * This,
            /* [out] */ WSD_EVENT *pEvent);
        
        HRESULT ( STDMETHODCALLTYPE *GetEndpointProxy )( 
            IWSDAsyncResult * This,
            /* [out] */ IWSDEndpointProxy **ppEndpoint);
        
        END_INTERFACE
    } IWSDAsyncResultVtbl;

    interface IWSDAsyncResult
    {
        CONST_VTBL struct IWSDAsyncResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWSDAsyncResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWSDAsyncResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWSDAsyncResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWSDAsyncResult_SetCallback(This,pCallback,pAsyncState)	\
    ( (This)->lpVtbl -> SetCallback(This,pCallback,pAsyncState) ) 

#define IWSDAsyncResult_SetWaitHandle(This,hWaitHandle)	\
    ( (This)->lpVtbl -> SetWaitHandle(This,hWaitHandle) ) 

#define IWSDAsyncResult_HasCompleted(This)	\
    ( (This)->lpVtbl -> HasCompleted(This) ) 

#define IWSDAsyncResult_GetAsyncState(This,ppAsyncState)	\
    ( (This)->lpVtbl -> GetAsyncState(This,ppAsyncState) ) 

#define IWSDAsyncResult_Abort(This)	\
    ( (This)->lpVtbl -> Abort(This) ) 

#define IWSDAsyncResult_GetEvent(This,pEvent)	\
    ( (This)->lpVtbl -> GetEvent(This,pEvent) ) 

#define IWSDAsyncResult_GetEndpointProxy(This,ppEndpoint)	\
    ( (This)->lpVtbl -> GetEndpointProxy(This,ppEndpoint) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWSDAsyncResult_INTERFACE_DEFINED__ */


#ifndef __IWSDAsyncCallback_INTERFACE_DEFINED__
#define __IWSDAsyncCallback_INTERFACE_DEFINED__

/* interface IWSDAsyncCallback */
/* [local][restricted][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWSDAsyncCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a63e109d-ce72-49e2-ba98-e845f5ee1666")
    IWSDAsyncCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AsyncOperationComplete( 
            /* [in] */ IWSDAsyncResult *pAsyncResult,
            /* [in] */ IUnknown *pAsyncState) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWSDAsyncCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWSDAsyncCallback * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWSDAsyncCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWSDAsyncCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *AsyncOperationComplete )( 
            IWSDAsyncCallback * This,
            /* [in] */ IWSDAsyncResult *pAsyncResult,
            /* [in] */ IUnknown *pAsyncState);
        
        END_INTERFACE
    } IWSDAsyncCallbackVtbl;

    interface IWSDAsyncCallback
    {
        CONST_VTBL struct IWSDAsyncCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWSDAsyncCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWSDAsyncCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWSDAsyncCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWSDAsyncCallback_AsyncOperationComplete(This,pAsyncResult,pAsyncState)	\
    ( (This)->lpVtbl -> AsyncOperationComplete(This,pAsyncResult,pAsyncState) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWSDAsyncCallback_INTERFACE_DEFINED__ */


#ifndef __IWSDEventingStatus_INTERFACE_DEFINED__
#define __IWSDEventingStatus_INTERFACE_DEFINED__

/* interface IWSDEventingStatus */
/* [local][restricted][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWSDEventingStatus;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("49b17f52-637a-407a-ae99-fbe82a4d38c0")
    IWSDEventingStatus : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE SubscriptionRenewed( 
            /* [in] */ LPCWSTR pszSubscriptionAction) = 0;
        
        virtual void STDMETHODCALLTYPE SubscriptionRenewalFailed( 
            /* [in] */ LPCWSTR pszSubscriptionAction,
            /* [in] */ HRESULT hr) = 0;
        
        virtual void STDMETHODCALLTYPE SubscriptionEnded( 
            /* [in] */ LPCWSTR pszSubscriptionAction) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWSDEventingStatusVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWSDEventingStatus * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWSDEventingStatus * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWSDEventingStatus * This);
        
        void ( STDMETHODCALLTYPE *SubscriptionRenewed )( 
            IWSDEventingStatus * This,
            /* [in] */ LPCWSTR pszSubscriptionAction);
        
        void ( STDMETHODCALLTYPE *SubscriptionRenewalFailed )( 
            IWSDEventingStatus * This,
            /* [in] */ LPCWSTR pszSubscriptionAction,
            /* [in] */ HRESULT hr);
        
        void ( STDMETHODCALLTYPE *SubscriptionEnded )( 
            IWSDEventingStatus * This,
            /* [in] */ LPCWSTR pszSubscriptionAction);
        
        END_INTERFACE
    } IWSDEventingStatusVtbl;

    interface IWSDEventingStatus
    {
        CONST_VTBL struct IWSDEventingStatusVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWSDEventingStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWSDEventingStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWSDEventingStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWSDEventingStatus_SubscriptionRenewed(This,pszSubscriptionAction)	\
    ( (This)->lpVtbl -> SubscriptionRenewed(This,pszSubscriptionAction) ) 

#define IWSDEventingStatus_SubscriptionRenewalFailed(This,pszSubscriptionAction,hr)	\
    ( (This)->lpVtbl -> SubscriptionRenewalFailed(This,pszSubscriptionAction,hr) ) 

#define IWSDEventingStatus_SubscriptionEnded(This,pszSubscriptionAction)	\
    ( (This)->lpVtbl -> SubscriptionEnded(This,pszSubscriptionAction) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWSDEventingStatus_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


