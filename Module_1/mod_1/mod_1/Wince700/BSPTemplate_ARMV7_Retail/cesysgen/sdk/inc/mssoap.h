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
/* Compiler settings for mssoap.idl:
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

#ifndef __mssoap_h__
#define __mssoap_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ISoapConnector_FWD_DEFINED__
#define __ISoapConnector_FWD_DEFINED__
typedef interface ISoapConnector ISoapConnector;
#endif 	/* __ISoapConnector_FWD_DEFINED__ */


#ifndef __ISoapConnectorFactory_FWD_DEFINED__
#define __ISoapConnectorFactory_FWD_DEFINED__
typedef interface ISoapConnectorFactory ISoapConnectorFactory;
#endif 	/* __ISoapConnectorFactory_FWD_DEFINED__ */


#ifndef __ISoapReader_FWD_DEFINED__
#define __ISoapReader_FWD_DEFINED__
typedef interface ISoapReader ISoapReader;
#endif 	/* __ISoapReader_FWD_DEFINED__ */


#ifndef __ISoapSerializer_FWD_DEFINED__
#define __ISoapSerializer_FWD_DEFINED__
typedef interface ISoapSerializer ISoapSerializer;
#endif 	/* __ISoapSerializer_FWD_DEFINED__ */


#ifndef __ISOAPClient_FWD_DEFINED__
#define __ISOAPClient_FWD_DEFINED__
typedef interface ISOAPClient ISOAPClient;
#endif 	/* __ISOAPClient_FWD_DEFINED__ */


#ifndef __ISOAPServer_FWD_DEFINED__
#define __ISOAPServer_FWD_DEFINED__
typedef interface ISOAPServer ISOAPServer;
#endif 	/* __ISOAPServer_FWD_DEFINED__ */


#ifndef __IHeaderHandler_FWD_DEFINED__
#define __IHeaderHandler_FWD_DEFINED__
typedef interface IHeaderHandler IHeaderHandler;
#endif 	/* __IHeaderHandler_FWD_DEFINED__ */


#ifndef __ISoapTypeMapper_FWD_DEFINED__
#define __ISoapTypeMapper_FWD_DEFINED__
typedef interface ISoapTypeMapper ISoapTypeMapper;
#endif 	/* __ISoapTypeMapper_FWD_DEFINED__ */


#ifndef __ISoapTypeMapper2_FWD_DEFINED__
#define __ISoapTypeMapper2_FWD_DEFINED__
typedef interface ISoapTypeMapper2 ISoapTypeMapper2;
#endif 	/* __ISoapTypeMapper2_FWD_DEFINED__ */


#ifndef __ISoapTypeMapperFactory_FWD_DEFINED__
#define __ISoapTypeMapperFactory_FWD_DEFINED__
typedef interface ISoapTypeMapperFactory ISoapTypeMapperFactory;
#endif 	/* __ISoapTypeMapperFactory_FWD_DEFINED__ */


#ifndef __ISoapMapper_FWD_DEFINED__
#define __ISoapMapper_FWD_DEFINED__
typedef interface ISoapMapper ISoapMapper;
#endif 	/* __ISoapMapper_FWD_DEFINED__ */


#ifndef __IEnumSoapMappers_FWD_DEFINED__
#define __IEnumSoapMappers_FWD_DEFINED__
typedef interface IEnumSoapMappers IEnumSoapMappers;
#endif 	/* __IEnumSoapMappers_FWD_DEFINED__ */


#ifndef __IWSDLOperation_FWD_DEFINED__
#define __IWSDLOperation_FWD_DEFINED__
typedef interface IWSDLOperation IWSDLOperation;
#endif 	/* __IWSDLOperation_FWD_DEFINED__ */


#ifndef __IEnumWSDLOperations_FWD_DEFINED__
#define __IEnumWSDLOperations_FWD_DEFINED__
typedef interface IEnumWSDLOperations IEnumWSDLOperations;
#endif 	/* __IEnumWSDLOperations_FWD_DEFINED__ */


#ifndef __IWSDLPort_FWD_DEFINED__
#define __IWSDLPort_FWD_DEFINED__
typedef interface IWSDLPort IWSDLPort;
#endif 	/* __IWSDLPort_FWD_DEFINED__ */


#ifndef __IEnumWSDLPorts_FWD_DEFINED__
#define __IEnumWSDLPorts_FWD_DEFINED__
typedef interface IEnumWSDLPorts IEnumWSDLPorts;
#endif 	/* __IEnumWSDLPorts_FWD_DEFINED__ */


#ifndef __IWSDLService_FWD_DEFINED__
#define __IWSDLService_FWD_DEFINED__
typedef interface IWSDLService IWSDLService;
#endif 	/* __IWSDLService_FWD_DEFINED__ */


#ifndef __IEnumWSDLService_FWD_DEFINED__
#define __IEnumWSDLService_FWD_DEFINED__
typedef interface IEnumWSDLService IEnumWSDLService;
#endif 	/* __IEnumWSDLService_FWD_DEFINED__ */


#ifndef __IWSDLReader_FWD_DEFINED__
#define __IWSDLReader_FWD_DEFINED__
typedef interface IWSDLReader IWSDLReader;
#endif 	/* __IWSDLReader_FWD_DEFINED__ */


#ifndef __ISOAPError_FWD_DEFINED__
#define __ISOAPError_FWD_DEFINED__
typedef interface ISOAPError ISOAPError;
#endif 	/* __ISOAPError_FWD_DEFINED__ */


#ifndef __ISOAPError_FWD_DEFINED__
#define __ISOAPError_FWD_DEFINED__
typedef interface ISOAPError ISOAPError;
#endif 	/* __ISOAPError_FWD_DEFINED__ */


#ifndef __ISoapConnector_FWD_DEFINED__
#define __ISoapConnector_FWD_DEFINED__
typedef interface ISoapConnector ISoapConnector;
#endif 	/* __ISoapConnector_FWD_DEFINED__ */


#ifndef __ISoapConnectorFactory_FWD_DEFINED__
#define __ISoapConnectorFactory_FWD_DEFINED__
typedef interface ISoapConnectorFactory ISoapConnectorFactory;
#endif 	/* __ISoapConnectorFactory_FWD_DEFINED__ */


#ifndef __IHeaderHandler_FWD_DEFINED__
#define __IHeaderHandler_FWD_DEFINED__
typedef interface IHeaderHandler IHeaderHandler;
#endif 	/* __IHeaderHandler_FWD_DEFINED__ */


#ifndef __SoapConnector_FWD_DEFINED__
#define __SoapConnector_FWD_DEFINED__

#ifdef __cplusplus
typedef class SoapConnector SoapConnector;
#else
typedef struct SoapConnector SoapConnector;
#endif /* __cplusplus */

#endif 	/* __SoapConnector_FWD_DEFINED__ */


#ifndef __SoapConnectorFactory_FWD_DEFINED__
#define __SoapConnectorFactory_FWD_DEFINED__

#ifdef __cplusplus
typedef class SoapConnectorFactory SoapConnectorFactory;
#else
typedef struct SoapConnectorFactory SoapConnectorFactory;
#endif /* __cplusplus */

#endif 	/* __SoapConnectorFactory_FWD_DEFINED__ */


#ifndef __HttpConnector_FWD_DEFINED__
#define __HttpConnector_FWD_DEFINED__

#ifdef __cplusplus
typedef class HttpConnector HttpConnector;
#else
typedef struct HttpConnector HttpConnector;
#endif /* __cplusplus */

#endif 	/* __HttpConnector_FWD_DEFINED__ */


#ifndef __SoapReader_FWD_DEFINED__
#define __SoapReader_FWD_DEFINED__

#ifdef __cplusplus
typedef class SoapReader SoapReader;
#else
typedef struct SoapReader SoapReader;
#endif /* __cplusplus */

#endif 	/* __SoapReader_FWD_DEFINED__ */


#ifndef __SoapSerializer_FWD_DEFINED__
#define __SoapSerializer_FWD_DEFINED__

#ifdef __cplusplus
typedef class SoapSerializer SoapSerializer;
#else
typedef struct SoapSerializer SoapSerializer;
#endif /* __cplusplus */

#endif 	/* __SoapSerializer_FWD_DEFINED__ */


#ifndef __SoapServer_FWD_DEFINED__
#define __SoapServer_FWD_DEFINED__

#ifdef __cplusplus
typedef class SoapServer SoapServer;
#else
typedef struct SoapServer SoapServer;
#endif /* __cplusplus */

#endif 	/* __SoapServer_FWD_DEFINED__ */


#ifndef __SoapClient_FWD_DEFINED__
#define __SoapClient_FWD_DEFINED__

#ifdef __cplusplus
typedef class SoapClient SoapClient;
#else
typedef struct SoapClient SoapClient;
#endif /* __cplusplus */

#endif 	/* __SoapClient_FWD_DEFINED__ */


#ifndef __WSDLReader_FWD_DEFINED__
#define __WSDLReader_FWD_DEFINED__

#ifdef __cplusplus
typedef class WSDLReader WSDLReader;
#else
typedef struct WSDLReader WSDLReader;
#endif /* __cplusplus */

#endif 	/* __WSDLReader_FWD_DEFINED__ */


#ifndef __SoapTypeMapperFactory_FWD_DEFINED__
#define __SoapTypeMapperFactory_FWD_DEFINED__

#ifdef __cplusplus
typedef class SoapTypeMapperFactory SoapTypeMapperFactory;
#else
typedef struct SoapTypeMapperFactory SoapTypeMapperFactory;
#endif /* __cplusplus */

#endif 	/* __SoapTypeMapperFactory_FWD_DEFINED__ */


#ifndef __EnumWSDLService_FWD_DEFINED__
#define __EnumWSDLService_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnumWSDLService EnumWSDLService;
#else
typedef struct EnumWSDLService EnumWSDLService;
#endif /* __cplusplus */

#endif 	/* __EnumWSDLService_FWD_DEFINED__ */


#ifndef __WSDLService_FWD_DEFINED__
#define __WSDLService_FWD_DEFINED__

#ifdef __cplusplus
typedef class WSDLService WSDLService;
#else
typedef struct WSDLService WSDLService;
#endif /* __cplusplus */

#endif 	/* __WSDLService_FWD_DEFINED__ */


#ifndef __EnumWSDLOperations_FWD_DEFINED__
#define __EnumWSDLOperations_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnumWSDLOperations EnumWSDLOperations;
#else
typedef struct EnumWSDLOperations EnumWSDLOperations;
#endif /* __cplusplus */

#endif 	/* __EnumWSDLOperations_FWD_DEFINED__ */


#ifndef __WSDLOperation_FWD_DEFINED__
#define __WSDLOperation_FWD_DEFINED__

#ifdef __cplusplus
typedef class WSDLOperation WSDLOperation;
#else
typedef struct WSDLOperation WSDLOperation;
#endif /* __cplusplus */

#endif 	/* __WSDLOperation_FWD_DEFINED__ */


#ifndef __SoapMapper_FWD_DEFINED__
#define __SoapMapper_FWD_DEFINED__

#ifdef __cplusplus
typedef class SoapMapper SoapMapper;
#else
typedef struct SoapMapper SoapMapper;
#endif /* __cplusplus */

#endif 	/* __SoapMapper_FWD_DEFINED__ */


#ifndef __EnumSoapMappers_FWD_DEFINED__
#define __EnumSoapMappers_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnumSoapMappers EnumSoapMappers;
#else
typedef struct EnumSoapMappers EnumSoapMappers;
#endif /* __cplusplus */

#endif 	/* __EnumSoapMappers_FWD_DEFINED__ */


#ifndef __EnumWSDLPorts_FWD_DEFINED__
#define __EnumWSDLPorts_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnumWSDLPorts EnumWSDLPorts;
#else
typedef struct EnumWSDLPorts EnumWSDLPorts;
#endif /* __cplusplus */

#endif 	/* __EnumWSDLPorts_FWD_DEFINED__ */


#ifndef __WSDLPort_FWD_DEFINED__
#define __WSDLPort_FWD_DEFINED__

#ifdef __cplusplus
typedef class WSDLPort WSDLPort;
#else
typedef struct WSDLPort WSDLPort;
#endif /* __cplusplus */

#endif 	/* __WSDLPort_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "msxml2.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_mssoap_0000_0000 */
/* [local] */ 

#pragma once




extern RPC_IF_HANDLE __MIDL_itf_mssoap_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mssoap_0000_0000_v0_0_s_ifspec;

#ifndef __ISoapConnector_INTERFACE_DEFINED__
#define __ISoapConnector_INTERFACE_DEFINED__

/* interface ISoapConnector */
/* [dual][helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_ISoapConnector;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("09BC1FF4-5711-4B93-B01D-DDD826EBD353")
    ISoapConnector : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_InputStream( 
            /* [retval][out] */ IStream **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_OutputStream( 
            /* [retval][out] */ IStream **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Property( 
            /* [in] */ BSTR pPropertyName,
            /* [retval][out] */ VARIANT *pPropertyValue) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Property( 
            /* [in] */ BSTR pPropertyName,
            /* [in] */ VARIANT PropertyValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ConnectWSDL( 
            /* [in] */ IWSDLPort *pPort) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BeginMessageWSDL( 
            /* [in] */ IWSDLOperation *pOperation) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EndMessage( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Connect( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BeginMessage( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISoapConnectorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISoapConnector * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISoapConnector * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISoapConnector * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISoapConnector * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISoapConnector * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISoapConnector * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISoapConnector * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InputStream )( 
            ISoapConnector * This,
            /* [retval][out] */ IStream **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OutputStream )( 
            ISoapConnector * This,
            /* [retval][out] */ IStream **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Property )( 
            ISoapConnector * This,
            /* [in] */ BSTR pPropertyName,
            /* [retval][out] */ VARIANT *pPropertyValue);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Property )( 
            ISoapConnector * This,
            /* [in] */ BSTR pPropertyName,
            /* [in] */ VARIANT PropertyValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ConnectWSDL )( 
            ISoapConnector * This,
            /* [in] */ IWSDLPort *pPort);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            ISoapConnector * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *BeginMessageWSDL )( 
            ISoapConnector * This,
            /* [in] */ IWSDLOperation *pOperation);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EndMessage )( 
            ISoapConnector * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            ISoapConnector * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *BeginMessage )( 
            ISoapConnector * This);
        
        END_INTERFACE
    } ISoapConnectorVtbl;

    interface ISoapConnector
    {
        CONST_VTBL struct ISoapConnectorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISoapConnector_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISoapConnector_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISoapConnector_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISoapConnector_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISoapConnector_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISoapConnector_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISoapConnector_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISoapConnector_get_InputStream(This,pVal)	\
    ( (This)->lpVtbl -> get_InputStream(This,pVal) ) 

#define ISoapConnector_get_OutputStream(This,pVal)	\
    ( (This)->lpVtbl -> get_OutputStream(This,pVal) ) 

#define ISoapConnector_get_Property(This,pPropertyName,pPropertyValue)	\
    ( (This)->lpVtbl -> get_Property(This,pPropertyName,pPropertyValue) ) 

#define ISoapConnector_put_Property(This,pPropertyName,PropertyValue)	\
    ( (This)->lpVtbl -> put_Property(This,pPropertyName,PropertyValue) ) 

#define ISoapConnector_ConnectWSDL(This,pPort)	\
    ( (This)->lpVtbl -> ConnectWSDL(This,pPort) ) 

#define ISoapConnector_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define ISoapConnector_BeginMessageWSDL(This,pOperation)	\
    ( (This)->lpVtbl -> BeginMessageWSDL(This,pOperation) ) 

#define ISoapConnector_EndMessage(This)	\
    ( (This)->lpVtbl -> EndMessage(This) ) 

#define ISoapConnector_Connect(This)	\
    ( (This)->lpVtbl -> Connect(This) ) 

#define ISoapConnector_BeginMessage(This)	\
    ( (This)->lpVtbl -> BeginMessage(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISoapConnector_INTERFACE_DEFINED__ */


#ifndef __ISoapConnectorFactory_INTERFACE_DEFINED__
#define __ISoapConnectorFactory_INTERFACE_DEFINED__

/* interface ISoapConnectorFactory */
/* [dual][helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_ISoapConnectorFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8905303D-7ED3-40C2-A37F-27A46F98346A")
    ISoapConnectorFactory : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreatePortConnector( 
            /* [in] */ IWSDLPort *pPort,
            /* [retval][out] */ ISoapConnector **ppConnector) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISoapConnectorFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISoapConnectorFactory * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISoapConnectorFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISoapConnectorFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISoapConnectorFactory * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISoapConnectorFactory * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISoapConnectorFactory * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISoapConnectorFactory * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreatePortConnector )( 
            ISoapConnectorFactory * This,
            /* [in] */ IWSDLPort *pPort,
            /* [retval][out] */ ISoapConnector **ppConnector);
        
        END_INTERFACE
    } ISoapConnectorFactoryVtbl;

    interface ISoapConnectorFactory
    {
        CONST_VTBL struct ISoapConnectorFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISoapConnectorFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISoapConnectorFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISoapConnectorFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISoapConnectorFactory_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISoapConnectorFactory_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISoapConnectorFactory_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISoapConnectorFactory_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISoapConnectorFactory_CreatePortConnector(This,pPort,ppConnector)	\
    ( (This)->lpVtbl -> CreatePortConnector(This,pPort,ppConnector) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISoapConnectorFactory_INTERFACE_DEFINED__ */


#ifndef __ISoapReader_INTERFACE_DEFINED__
#define __ISoapReader_INTERFACE_DEFINED__

/* interface ISoapReader */
/* [local][dual][helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_ISoapReader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FDE424F3-0474-4231-AB31-4A037C9A98BB")
    ISoapReader : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE load( 
            /* [in] */ VARIANT xmlSource,
            /* [defaultvalue][in] */ BSTR bstrSoapAction,
            /* [retval][out] */ VARIANT_BOOL *isSuccessful) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE loadXML( 
            /* [in] */ BSTR bstrXML,
            /* [retval][out] */ VARIANT_BOOL *isSuccessful) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DOM( 
            /* [retval][out] */ IXMLDOMDocument **pIXMLDOMDocument) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Envelope( 
            /* [retval][out] */ IXMLDOMElement **ppElement) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Body( 
            /* [retval][out] */ IXMLDOMElement **ppElement) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Header( 
            /* [retval][out] */ IXMLDOMElement **ppElement) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Fault( 
            /* [retval][out] */ IXMLDOMElement **ppElement) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FaultString( 
            /* [retval][out] */ IXMLDOMElement **ppElement) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FaultCode( 
            /* [retval][out] */ IXMLDOMElement **ppElement) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FaultActor( 
            /* [retval][out] */ IXMLDOMElement **ppElement) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FaultDetail( 
            /* [retval][out] */ IXMLDOMElement **ppElement) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_HeaderEntry( 
            /* [in] */ BSTR LocalName,
            /* [defaultvalue][in] */ BSTR NamespaceURI,
            /* [retval][out] */ IXMLDOMElement **ppElement) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MustUnderstandHeaderEntries( 
            /* [retval][out] */ IXMLDOMNodeList **ppNodeList) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_HeaderEntries( 
            /* [retval][out] */ IXMLDOMNodeList **ppNodeList) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_BodyEntries( 
            /* [retval][out] */ IXMLDOMNodeList **ppNodeList) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_BodyEntry( 
            /* [in] */ BSTR LocalName,
            /* [defaultvalue][in] */ BSTR NamespaceURI,
            /* [retval][out] */ IXMLDOMElement **ppElement) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RPCStruct( 
            /* [retval][out] */ IXMLDOMElement **ppElement) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RPCParameter( 
            /* [in] */ BSTR LocalName,
            /* [defaultvalue][in] */ BSTR NamespaceURI,
            /* [retval][out] */ IXMLDOMElement **ppElement) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RPCResult( 
            /* [retval][out] */ IXMLDOMElement **ppElement) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_soapAction( 
            /* [retval][out] */ BSTR *pbstrSoapAction) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISoapReaderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISoapReader * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISoapReader * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISoapReader * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISoapReader * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISoapReader * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISoapReader * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISoapReader * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *load )( 
            ISoapReader * This,
            /* [in] */ VARIANT xmlSource,
            /* [defaultvalue][in] */ BSTR bstrSoapAction,
            /* [retval][out] */ VARIANT_BOOL *isSuccessful);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *loadXML )( 
            ISoapReader * This,
            /* [in] */ BSTR bstrXML,
            /* [retval][out] */ VARIANT_BOOL *isSuccessful);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DOM )( 
            ISoapReader * This,
            /* [retval][out] */ IXMLDOMDocument **pIXMLDOMDocument);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Envelope )( 
            ISoapReader * This,
            /* [retval][out] */ IXMLDOMElement **ppElement);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Body )( 
            ISoapReader * This,
            /* [retval][out] */ IXMLDOMElement **ppElement);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Header )( 
            ISoapReader * This,
            /* [retval][out] */ IXMLDOMElement **ppElement);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Fault )( 
            ISoapReader * This,
            /* [retval][out] */ IXMLDOMElement **ppElement);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FaultString )( 
            ISoapReader * This,
            /* [retval][out] */ IXMLDOMElement **ppElement);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FaultCode )( 
            ISoapReader * This,
            /* [retval][out] */ IXMLDOMElement **ppElement);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FaultActor )( 
            ISoapReader * This,
            /* [retval][out] */ IXMLDOMElement **ppElement);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FaultDetail )( 
            ISoapReader * This,
            /* [retval][out] */ IXMLDOMElement **ppElement);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HeaderEntry )( 
            ISoapReader * This,
            /* [in] */ BSTR LocalName,
            /* [defaultvalue][in] */ BSTR NamespaceURI,
            /* [retval][out] */ IXMLDOMElement **ppElement);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MustUnderstandHeaderEntries )( 
            ISoapReader * This,
            /* [retval][out] */ IXMLDOMNodeList **ppNodeList);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HeaderEntries )( 
            ISoapReader * This,
            /* [retval][out] */ IXMLDOMNodeList **ppNodeList);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BodyEntries )( 
            ISoapReader * This,
            /* [retval][out] */ IXMLDOMNodeList **ppNodeList);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BodyEntry )( 
            ISoapReader * This,
            /* [in] */ BSTR LocalName,
            /* [defaultvalue][in] */ BSTR NamespaceURI,
            /* [retval][out] */ IXMLDOMElement **ppElement);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RPCStruct )( 
            ISoapReader * This,
            /* [retval][out] */ IXMLDOMElement **ppElement);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RPCParameter )( 
            ISoapReader * This,
            /* [in] */ BSTR LocalName,
            /* [defaultvalue][in] */ BSTR NamespaceURI,
            /* [retval][out] */ IXMLDOMElement **ppElement);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RPCResult )( 
            ISoapReader * This,
            /* [retval][out] */ IXMLDOMElement **ppElement);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_soapAction )( 
            ISoapReader * This,
            /* [retval][out] */ BSTR *pbstrSoapAction);
        
        END_INTERFACE
    } ISoapReaderVtbl;

    interface ISoapReader
    {
        CONST_VTBL struct ISoapReaderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISoapReader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISoapReader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISoapReader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISoapReader_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISoapReader_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISoapReader_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISoapReader_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISoapReader_load(This,xmlSource,bstrSoapAction,isSuccessful)	\
    ( (This)->lpVtbl -> load(This,xmlSource,bstrSoapAction,isSuccessful) ) 

#define ISoapReader_loadXML(This,bstrXML,isSuccessful)	\
    ( (This)->lpVtbl -> loadXML(This,bstrXML,isSuccessful) ) 

#define ISoapReader_get_DOM(This,pIXMLDOMDocument)	\
    ( (This)->lpVtbl -> get_DOM(This,pIXMLDOMDocument) ) 

#define ISoapReader_get_Envelope(This,ppElement)	\
    ( (This)->lpVtbl -> get_Envelope(This,ppElement) ) 

#define ISoapReader_get_Body(This,ppElement)	\
    ( (This)->lpVtbl -> get_Body(This,ppElement) ) 

#define ISoapReader_get_Header(This,ppElement)	\
    ( (This)->lpVtbl -> get_Header(This,ppElement) ) 

#define ISoapReader_get_Fault(This,ppElement)	\
    ( (This)->lpVtbl -> get_Fault(This,ppElement) ) 

#define ISoapReader_get_FaultString(This,ppElement)	\
    ( (This)->lpVtbl -> get_FaultString(This,ppElement) ) 

#define ISoapReader_get_FaultCode(This,ppElement)	\
    ( (This)->lpVtbl -> get_FaultCode(This,ppElement) ) 

#define ISoapReader_get_FaultActor(This,ppElement)	\
    ( (This)->lpVtbl -> get_FaultActor(This,ppElement) ) 

#define ISoapReader_get_FaultDetail(This,ppElement)	\
    ( (This)->lpVtbl -> get_FaultDetail(This,ppElement) ) 

#define ISoapReader_get_HeaderEntry(This,LocalName,NamespaceURI,ppElement)	\
    ( (This)->lpVtbl -> get_HeaderEntry(This,LocalName,NamespaceURI,ppElement) ) 

#define ISoapReader_get_MustUnderstandHeaderEntries(This,ppNodeList)	\
    ( (This)->lpVtbl -> get_MustUnderstandHeaderEntries(This,ppNodeList) ) 

#define ISoapReader_get_HeaderEntries(This,ppNodeList)	\
    ( (This)->lpVtbl -> get_HeaderEntries(This,ppNodeList) ) 

#define ISoapReader_get_BodyEntries(This,ppNodeList)	\
    ( (This)->lpVtbl -> get_BodyEntries(This,ppNodeList) ) 

#define ISoapReader_get_BodyEntry(This,LocalName,NamespaceURI,ppElement)	\
    ( (This)->lpVtbl -> get_BodyEntry(This,LocalName,NamespaceURI,ppElement) ) 

#define ISoapReader_get_RPCStruct(This,ppElement)	\
    ( (This)->lpVtbl -> get_RPCStruct(This,ppElement) ) 

#define ISoapReader_get_RPCParameter(This,LocalName,NamespaceURI,ppElement)	\
    ( (This)->lpVtbl -> get_RPCParameter(This,LocalName,NamespaceURI,ppElement) ) 

#define ISoapReader_get_RPCResult(This,ppElement)	\
    ( (This)->lpVtbl -> get_RPCResult(This,ppElement) ) 

#define ISoapReader_get_soapAction(This,pbstrSoapAction)	\
    ( (This)->lpVtbl -> get_soapAction(This,pbstrSoapAction) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISoapReader_INTERFACE_DEFINED__ */


#ifndef __ISoapSerializer_INTERFACE_DEFINED__
#define __ISoapSerializer_INTERFACE_DEFINED__

/* interface ISoapSerializer */
/* [dual][helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_ISoapSerializer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ADE424F3-0474-4231-AB31-4A254897700B")
    ISoapSerializer : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ VARIANT vDestination) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE startEnvelope( 
            /* [defaultvalue][in] */ BSTR env_Prefix = L"",
            /* [defaultvalue][in] */ BSTR enc_style_uri = L"NONE",
            /* [defaultvalue][in] */ BSTR xml_encoding = L"") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE endEnvelope( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE startHeader( 
            /* [defaultvalue][in] */ BSTR enc_style_uri = L"NONE") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE startHeaderElement( 
            /* [in] */ BSTR name,
            /* [defaultvalue][in] */ BSTR ns_uri = L"",
            /* [defaultvalue][in] */ int mustUnderstand = 0,
            /* [defaultvalue][in] */ BSTR actor_uri = L"",
            /* [defaultvalue][in] */ BSTR enc_style_uri = L"NONE",
            /* [defaultvalue][in] */ BSTR prefix = L"") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE endHeaderElement( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE endHeader( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE startBody( 
            /* [defaultvalue][in] */ BSTR enc_style_uri = L"NONE") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE endBody( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE startElement( 
            /* [in] */ BSTR name,
            /* [defaultvalue][in] */ BSTR ns_uri = L"",
            /* [defaultvalue][in] */ BSTR enc_style_uri = L"NONE",
            /* [defaultvalue][in] */ BSTR prefix = L"") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE endElement( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SoapAttribute( 
            /* [in] */ BSTR name,
            /* [defaultvalue][in] */ BSTR ns_uri = L"",
            /* [defaultvalue][in] */ BSTR value = L"",
            /* [defaultvalue][in] */ BSTR prefix = L"") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SoapNamespace( 
            /* [in] */ BSTR prefix,
            /* [in] */ BSTR ns_uri) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SoapDefaultNamespace( 
            /* [in] */ BSTR ns_uri) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE writeString( 
            /* [in] */ BSTR string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE writeBuffer( 
            /* [in] */ long len,
            /* [in] */ char *buffer) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE startFault( 
            /* [in] */ BSTR faultcode,
            /* [in] */ BSTR faultstring,
            /* [defaultvalue][in] */ BSTR faultactor = L"",
            /* [defaultvalue][in] */ BSTR faultcodeNS = L"") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE startFaultDetail( 
            /* [defaultvalue][in] */ BSTR enc_style_uri = L"NONE") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE endFaultDetail( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE endFault( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE reset( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE writeXML( 
            /* [in] */ BSTR string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getPrefixForNamespace( 
            /* [in] */ BSTR ns_string,
            /* [retval][out] */ BSTR *ns_prefix) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_EncodingStream( 
            /* [retval][out] */ IUnknown **ppIEncodingStream) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISoapSerializerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISoapSerializer * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISoapSerializer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISoapSerializer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISoapSerializer * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISoapSerializer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISoapSerializer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISoapSerializer * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            ISoapSerializer * This,
            /* [in] */ VARIANT vDestination);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *startEnvelope )( 
            ISoapSerializer * This,
            /* [defaultvalue][in] */ BSTR env_Prefix,
            /* [defaultvalue][in] */ BSTR enc_style_uri,
            /* [defaultvalue][in] */ BSTR xml_encoding);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *endEnvelope )( 
            ISoapSerializer * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *startHeader )( 
            ISoapSerializer * This,
            /* [defaultvalue][in] */ BSTR enc_style_uri);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *startHeaderElement )( 
            ISoapSerializer * This,
            /* [in] */ BSTR name,
            /* [defaultvalue][in] */ BSTR ns_uri,
            /* [defaultvalue][in] */ int mustUnderstand,
            /* [defaultvalue][in] */ BSTR actor_uri,
            /* [defaultvalue][in] */ BSTR enc_style_uri,
            /* [defaultvalue][in] */ BSTR prefix);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *endHeaderElement )( 
            ISoapSerializer * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *endHeader )( 
            ISoapSerializer * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *startBody )( 
            ISoapSerializer * This,
            /* [defaultvalue][in] */ BSTR enc_style_uri);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *endBody )( 
            ISoapSerializer * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *startElement )( 
            ISoapSerializer * This,
            /* [in] */ BSTR name,
            /* [defaultvalue][in] */ BSTR ns_uri,
            /* [defaultvalue][in] */ BSTR enc_style_uri,
            /* [defaultvalue][in] */ BSTR prefix);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *endElement )( 
            ISoapSerializer * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SoapAttribute )( 
            ISoapSerializer * This,
            /* [in] */ BSTR name,
            /* [defaultvalue][in] */ BSTR ns_uri,
            /* [defaultvalue][in] */ BSTR value,
            /* [defaultvalue][in] */ BSTR prefix);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SoapNamespace )( 
            ISoapSerializer * This,
            /* [in] */ BSTR prefix,
            /* [in] */ BSTR ns_uri);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SoapDefaultNamespace )( 
            ISoapSerializer * This,
            /* [in] */ BSTR ns_uri);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *writeString )( 
            ISoapSerializer * This,
            /* [in] */ BSTR string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *writeBuffer )( 
            ISoapSerializer * This,
            /* [in] */ long len,
            /* [in] */ char *buffer);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *startFault )( 
            ISoapSerializer * This,
            /* [in] */ BSTR faultcode,
            /* [in] */ BSTR faultstring,
            /* [defaultvalue][in] */ BSTR faultactor,
            /* [defaultvalue][in] */ BSTR faultcodeNS);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *startFaultDetail )( 
            ISoapSerializer * This,
            /* [defaultvalue][in] */ BSTR enc_style_uri);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *endFaultDetail )( 
            ISoapSerializer * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *endFault )( 
            ISoapSerializer * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *reset )( 
            ISoapSerializer * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *writeXML )( 
            ISoapSerializer * This,
            /* [in] */ BSTR string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getPrefixForNamespace )( 
            ISoapSerializer * This,
            /* [in] */ BSTR ns_string,
            /* [retval][out] */ BSTR *ns_prefix);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncodingStream )( 
            ISoapSerializer * This,
            /* [retval][out] */ IUnknown **ppIEncodingStream);
        
        END_INTERFACE
    } ISoapSerializerVtbl;

    interface ISoapSerializer
    {
        CONST_VTBL struct ISoapSerializerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISoapSerializer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISoapSerializer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISoapSerializer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISoapSerializer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISoapSerializer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISoapSerializer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISoapSerializer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISoapSerializer_Init(This,vDestination)	\
    ( (This)->lpVtbl -> Init(This,vDestination) ) 

#define ISoapSerializer_startEnvelope(This,env_Prefix,enc_style_uri,xml_encoding)	\
    ( (This)->lpVtbl -> startEnvelope(This,env_Prefix,enc_style_uri,xml_encoding) ) 

#define ISoapSerializer_endEnvelope(This)	\
    ( (This)->lpVtbl -> endEnvelope(This) ) 

#define ISoapSerializer_startHeader(This,enc_style_uri)	\
    ( (This)->lpVtbl -> startHeader(This,enc_style_uri) ) 

#define ISoapSerializer_startHeaderElement(This,name,ns_uri,mustUnderstand,actor_uri,enc_style_uri,prefix)	\
    ( (This)->lpVtbl -> startHeaderElement(This,name,ns_uri,mustUnderstand,actor_uri,enc_style_uri,prefix) ) 

#define ISoapSerializer_endHeaderElement(This)	\
    ( (This)->lpVtbl -> endHeaderElement(This) ) 

#define ISoapSerializer_endHeader(This)	\
    ( (This)->lpVtbl -> endHeader(This) ) 

#define ISoapSerializer_startBody(This,enc_style_uri)	\
    ( (This)->lpVtbl -> startBody(This,enc_style_uri) ) 

#define ISoapSerializer_endBody(This)	\
    ( (This)->lpVtbl -> endBody(This) ) 

#define ISoapSerializer_startElement(This,name,ns_uri,enc_style_uri,prefix)	\
    ( (This)->lpVtbl -> startElement(This,name,ns_uri,enc_style_uri,prefix) ) 

#define ISoapSerializer_endElement(This)	\
    ( (This)->lpVtbl -> endElement(This) ) 

#define ISoapSerializer_SoapAttribute(This,name,ns_uri,value,prefix)	\
    ( (This)->lpVtbl -> SoapAttribute(This,name,ns_uri,value,prefix) ) 

#define ISoapSerializer_SoapNamespace(This,prefix,ns_uri)	\
    ( (This)->lpVtbl -> SoapNamespace(This,prefix,ns_uri) ) 

#define ISoapSerializer_SoapDefaultNamespace(This,ns_uri)	\
    ( (This)->lpVtbl -> SoapDefaultNamespace(This,ns_uri) ) 

#define ISoapSerializer_writeString(This,string)	\
    ( (This)->lpVtbl -> writeString(This,string) ) 

#define ISoapSerializer_writeBuffer(This,len,buffer)	\
    ( (This)->lpVtbl -> writeBuffer(This,len,buffer) ) 

#define ISoapSerializer_startFault(This,faultcode,faultstring,faultactor,faultcodeNS)	\
    ( (This)->lpVtbl -> startFault(This,faultcode,faultstring,faultactor,faultcodeNS) ) 

#define ISoapSerializer_startFaultDetail(This,enc_style_uri)	\
    ( (This)->lpVtbl -> startFaultDetail(This,enc_style_uri) ) 

#define ISoapSerializer_endFaultDetail(This)	\
    ( (This)->lpVtbl -> endFaultDetail(This) ) 

#define ISoapSerializer_endFault(This)	\
    ( (This)->lpVtbl -> endFault(This) ) 

#define ISoapSerializer_reset(This)	\
    ( (This)->lpVtbl -> reset(This) ) 

#define ISoapSerializer_writeXML(This,string)	\
    ( (This)->lpVtbl -> writeXML(This,string) ) 

#define ISoapSerializer_getPrefixForNamespace(This,ns_string,ns_prefix)	\
    ( (This)->lpVtbl -> getPrefixForNamespace(This,ns_string,ns_prefix) ) 

#define ISoapSerializer_get_EncodingStream(This,ppIEncodingStream)	\
    ( (This)->lpVtbl -> get_EncodingStream(This,ppIEncodingStream) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISoapSerializer_INTERFACE_DEFINED__ */


#ifndef __ISOAPClient_INTERFACE_DEFINED__
#define __ISOAPClient_INTERFACE_DEFINED__

/* interface ISOAPClient */
/* [dual][helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_ISOAPClient;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4BDFD94B-415C-46f2-95E1-D145AB080F9E")
    ISOAPClient : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE mssoapinit( 
            /* [in] */ BSTR bstrWSDLFile,
            /* [defaultvalue][in] */ BSTR bstrServiceName = L"",
            /* [defaultvalue][in] */ BSTR bstrPort = L"",
            /* [defaultvalue][in] */ BSTR bstrWSMLFile = L"") = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_faultcode( 
            /* [retval][out] */ BSTR *bstrFaultcode) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_faultstring( 
            /* [retval][out] */ BSTR *bstrFaultstring) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_faultactor( 
            /* [retval][out] */ BSTR *bstrActor) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_detail( 
            /* [retval][out] */ BSTR *bstrDetail) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ClientProperty( 
            /* [in] */ BSTR PropertyName,
            /* [retval][out] */ VARIANT *pPropertyValue) = 0;
        
        virtual /* [helpstring][propputref] */ HRESULT STDMETHODCALLTYPE putref_HeaderHandler( 
            /* [in] */ IDispatch *pHeaderHandler) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ClientProperty( 
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT PropertyValue) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ConnectorProperty( 
            /* [in] */ BSTR PropertyName,
            /* [retval][out] */ VARIANT *pPropertyValue) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ConnectorProperty( 
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT PropertyValue) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISOAPClientVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISOAPClient * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISOAPClient * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISOAPClient * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISOAPClient * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISOAPClient * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISOAPClient * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISOAPClient * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *mssoapinit )( 
            ISOAPClient * This,
            /* [in] */ BSTR bstrWSDLFile,
            /* [defaultvalue][in] */ BSTR bstrServiceName,
            /* [defaultvalue][in] */ BSTR bstrPort,
            /* [defaultvalue][in] */ BSTR bstrWSMLFile);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_faultcode )( 
            ISOAPClient * This,
            /* [retval][out] */ BSTR *bstrFaultcode);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_faultstring )( 
            ISOAPClient * This,
            /* [retval][out] */ BSTR *bstrFaultstring);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_faultactor )( 
            ISOAPClient * This,
            /* [retval][out] */ BSTR *bstrActor);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_detail )( 
            ISOAPClient * This,
            /* [retval][out] */ BSTR *bstrDetail);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClientProperty )( 
            ISOAPClient * This,
            /* [in] */ BSTR PropertyName,
            /* [retval][out] */ VARIANT *pPropertyValue);
        
        /* [helpstring][propputref] */ HRESULT ( STDMETHODCALLTYPE *putref_HeaderHandler )( 
            ISOAPClient * This,
            /* [in] */ IDispatch *pHeaderHandler);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClientProperty )( 
            ISOAPClient * This,
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT PropertyValue);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectorProperty )( 
            ISOAPClient * This,
            /* [in] */ BSTR PropertyName,
            /* [retval][out] */ VARIANT *pPropertyValue);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectorProperty )( 
            ISOAPClient * This,
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT PropertyValue);
        
        END_INTERFACE
    } ISOAPClientVtbl;

    interface ISOAPClient
    {
        CONST_VTBL struct ISOAPClientVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISOAPClient_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISOAPClient_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISOAPClient_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISOAPClient_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISOAPClient_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISOAPClient_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISOAPClient_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISOAPClient_mssoapinit(This,bstrWSDLFile,bstrServiceName,bstrPort,bstrWSMLFile)	\
    ( (This)->lpVtbl -> mssoapinit(This,bstrWSDLFile,bstrServiceName,bstrPort,bstrWSMLFile) ) 

#define ISOAPClient_get_faultcode(This,bstrFaultcode)	\
    ( (This)->lpVtbl -> get_faultcode(This,bstrFaultcode) ) 

#define ISOAPClient_get_faultstring(This,bstrFaultstring)	\
    ( (This)->lpVtbl -> get_faultstring(This,bstrFaultstring) ) 

#define ISOAPClient_get_faultactor(This,bstrActor)	\
    ( (This)->lpVtbl -> get_faultactor(This,bstrActor) ) 

#define ISOAPClient_get_detail(This,bstrDetail)	\
    ( (This)->lpVtbl -> get_detail(This,bstrDetail) ) 

#define ISOAPClient_get_ClientProperty(This,PropertyName,pPropertyValue)	\
    ( (This)->lpVtbl -> get_ClientProperty(This,PropertyName,pPropertyValue) ) 

#define ISOAPClient_putref_HeaderHandler(This,pHeaderHandler)	\
    ( (This)->lpVtbl -> putref_HeaderHandler(This,pHeaderHandler) ) 

#define ISOAPClient_put_ClientProperty(This,PropertyName,PropertyValue)	\
    ( (This)->lpVtbl -> put_ClientProperty(This,PropertyName,PropertyValue) ) 

#define ISOAPClient_get_ConnectorProperty(This,PropertyName,pPropertyValue)	\
    ( (This)->lpVtbl -> get_ConnectorProperty(This,PropertyName,pPropertyValue) ) 

#define ISOAPClient_put_ConnectorProperty(This,PropertyName,PropertyValue)	\
    ( (This)->lpVtbl -> put_ConnectorProperty(This,PropertyName,PropertyValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISOAPClient_INTERFACE_DEFINED__ */


#ifndef __ISOAPServer_INTERFACE_DEFINED__
#define __ISOAPServer_INTERFACE_DEFINED__

/* interface ISOAPServer */
/* [dual][helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_ISOAPServer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E8685095-8543-4771-B2EE-E17C58379E47")
    ISOAPServer : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ BSTR pUrlWSDLFile,
            /* [in] */ BSTR bstrWSMLFileSpec) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SoapInvoke( 
            /* [in] */ VARIANT varInput,
            /* [in] */ IUnknown *pOutputStream,
            /* [defaultvalue][in] */ BSTR bstrSoapAction = L"") = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISOAPServerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISOAPServer * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISOAPServer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISOAPServer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISOAPServer * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISOAPServer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISOAPServer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISOAPServer * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            ISOAPServer * This,
            /* [in] */ BSTR pUrlWSDLFile,
            /* [in] */ BSTR bstrWSMLFileSpec);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SoapInvoke )( 
            ISOAPServer * This,
            /* [in] */ VARIANT varInput,
            /* [in] */ IUnknown *pOutputStream,
            /* [defaultvalue][in] */ BSTR bstrSoapAction);
        
        END_INTERFACE
    } ISOAPServerVtbl;

    interface ISOAPServer
    {
        CONST_VTBL struct ISOAPServerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISOAPServer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISOAPServer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISOAPServer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISOAPServer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISOAPServer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISOAPServer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISOAPServer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISOAPServer_Init(This,pUrlWSDLFile,bstrWSMLFileSpec)	\
    ( (This)->lpVtbl -> Init(This,pUrlWSDLFile,bstrWSMLFileSpec) ) 

#define ISOAPServer_SoapInvoke(This,varInput,pOutputStream,bstrSoapAction)	\
    ( (This)->lpVtbl -> SoapInvoke(This,varInput,pOutputStream,bstrSoapAction) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISOAPServer_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_mssoap_0000_0006 */
/* [local] */ 

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_mssoap_0000_0006_0001
    {	smInput	= -1,
	smOutput	= 0,
	smInOut	= 1
    } 	smIsInputEnum;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_mssoap_0000_0006_0002
    {	enXSDUndefined	= -1,
	enXSDDOM	= 0,
	enXSDstring	= ( enXSDDOM + 1 ) ,
	enXSDboolean	= ( enXSDstring + 1 ) ,
	enXSDfloat	= ( enXSDboolean + 1 ) ,
	enXSDDouble	= ( enXSDfloat + 1 ) ,
	enXSDdecimal	= ( enXSDDouble + 1 ) ,
	enXSDtimeDuration	= ( enXSDdecimal + 1 ) ,
	enXSDrecurringDuration	= ( enXSDtimeDuration + 1 ) ,
	enXSDbinary	= ( enXSDrecurringDuration + 1 ) ,
	enXSDuriReference	= ( enXSDbinary + 1 ) ,
	enXSDid	= ( enXSDuriReference + 1 ) ,
	enXSDidRef	= ( enXSDid + 1 ) ,
	enXSDentity	= ( enXSDidRef + 1 ) ,
	enXSDQName	= ( enXSDentity + 1 ) ,
	enXSDcdata	= ( enXSDQName + 1 ) ,
	enXSDtoken	= ( enXSDcdata + 1 ) ,
	enXSDlanguage	= ( enXSDtoken + 1 ) ,
	enXSDidRefs	= ( enXSDlanguage + 1 ) ,
	enXSDentities	= ( enXSDidRefs + 1 ) ,
	enXSDnmtoken	= ( enXSDentities + 1 ) ,
	enXSDnmtokens	= ( enXSDnmtoken + 1 ) ,
	enXSDname	= ( enXSDnmtokens + 1 ) ,
	enXSDncname	= ( enXSDname + 1 ) ,
	enXSDnotation	= ( enXSDncname + 1 ) ,
	enXSDinteger	= ( enXSDnotation + 1 ) ,
	enXSDnonpositiveInteger	= ( enXSDinteger + 1 ) ,
	enXSDlong	= ( enXSDnonpositiveInteger + 1 ) ,
	enXSDint	= ( enXSDlong + 1 ) ,
	enXSDshort	= ( enXSDint + 1 ) ,
	enXSDbyte	= ( enXSDshort + 1 ) ,
	enXSDnonNegativeInteger	= ( enXSDbyte + 1 ) ,
	enXSDnegativeInteger	= ( enXSDnonNegativeInteger + 1 ) ,
	enXSDunsignedLong	= ( enXSDnegativeInteger + 1 ) ,
	enXSDunsignedInt	= ( enXSDunsignedLong + 1 ) ,
	enXSDunsignedShort	= ( enXSDunsignedInt + 1 ) ,
	enXSDunsignedByte	= ( enXSDunsignedShort + 1 ) ,
	enXSDpositiveInteger	= ( enXSDunsignedByte + 1 ) ,
	enXSDtimeInstant	= ( enXSDpositiveInteger + 1 ) ,
	enXSDtime	= ( enXSDtimeInstant + 1 ) ,
	enXSDtimePeriod	= ( enXSDtime + 1 ) ,
	enXSDdate	= ( enXSDtimePeriod + 1 ) ,
	enXSDmonth	= ( enXSDdate + 1 ) ,
	enXSDyear	= ( enXSDmonth + 1 ) ,
	enXSDcentury	= ( enXSDyear + 1 ) ,
	enXSDrecurringDate	= ( enXSDcentury + 1 ) ,
	enXSDrecurringDay	= ( enXSDrecurringDate + 1 ) ,
	enXSDarray	= ( enXSDrecurringDay + 1 ) ,
	enXSDanyType	= ( enXSDarray + 1 ) ,
	enTKempty	= ( enXSDanyType + 1 ) ,
	enXSDEndOfBuildin	= ( enTKempty + 1 ) 
    } 	enXSDType;

typedef /* [public][public][public][public][public] */ 
enum __MIDL___MIDL_itf_mssoap_0000_0006_0003
    {	enDocumentLiteral	= 0,
	enDocumentEncoded	= 0x1,
	enRPCLiteral	= 0x2,
	enRPCEncoded	= 0x4
    } 	enEncodingStyle;




extern RPC_IF_HANDLE __MIDL_itf_mssoap_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mssoap_0000_0006_v0_0_s_ifspec;

#ifndef __IHeaderHandler_INTERFACE_DEFINED__
#define __IHeaderHandler_INTERFACE_DEFINED__

/* interface IHeaderHandler */
/* [dual][helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_IHeaderHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("504D4B91-76B8-4D88-95EA-CEB5E0FE41F3")
    IHeaderHandler : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE willWriteHeaders( 
            /* [retval][out] */ VARIANT_BOOL *pbWillWriteHeaders) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE writeHeaders( 
            /* [in] */ ISoapSerializer *pSerializer,
            /* [in] */ IDispatch *pObject) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE readHeader( 
            /* [in] */ IXMLDOMNode *pHeaderNode,
            /* [in] */ IDispatch *pObject,
            /* [retval][out] */ VARIANT_BOOL *pUnderstood) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IHeaderHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IHeaderHandler * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IHeaderHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IHeaderHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IHeaderHandler * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IHeaderHandler * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IHeaderHandler * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IHeaderHandler * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *willWriteHeaders )( 
            IHeaderHandler * This,
            /* [retval][out] */ VARIANT_BOOL *pbWillWriteHeaders);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *writeHeaders )( 
            IHeaderHandler * This,
            /* [in] */ ISoapSerializer *pSerializer,
            /* [in] */ IDispatch *pObject);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *readHeader )( 
            IHeaderHandler * This,
            /* [in] */ IXMLDOMNode *pHeaderNode,
            /* [in] */ IDispatch *pObject,
            /* [retval][out] */ VARIANT_BOOL *pUnderstood);
        
        END_INTERFACE
    } IHeaderHandlerVtbl;

    interface IHeaderHandler
    {
        CONST_VTBL struct IHeaderHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHeaderHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IHeaderHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IHeaderHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IHeaderHandler_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IHeaderHandler_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IHeaderHandler_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IHeaderHandler_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IHeaderHandler_willWriteHeaders(This,pbWillWriteHeaders)	\
    ( (This)->lpVtbl -> willWriteHeaders(This,pbWillWriteHeaders) ) 

#define IHeaderHandler_writeHeaders(This,pSerializer,pObject)	\
    ( (This)->lpVtbl -> writeHeaders(This,pSerializer,pObject) ) 

#define IHeaderHandler_readHeader(This,pHeaderNode,pObject,pUnderstood)	\
    ( (This)->lpVtbl -> readHeader(This,pHeaderNode,pObject,pUnderstood) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IHeaderHandler_INTERFACE_DEFINED__ */


#ifndef __ISoapTypeMapper_INTERFACE_DEFINED__
#define __ISoapTypeMapper_INTERFACE_DEFINED__

/* interface ISoapTypeMapper */
/* [dual][helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_ISoapTypeMapper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CEA11D8A-258D-4863-A91F-3B4D046039E2")
    ISoapTypeMapper : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE init( 
            /* [in] */ ISoapTypeMapperFactory *pFactory,
            /* [in] */ IXMLDOMNode *pSchema,
            /* [in] */ enXSDType xsdType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE read( 
            /* [in] */ IXMLDOMNode *pNode,
            /* [in] */ BSTR bstrEncoding,
            /* [in] */ enEncodingStyle encodingMode,
            /* [in] */ long lFlags,
            /* [retval][out] */ VARIANT *pvar) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE write( 
            /* [in] */ ISoapSerializer *pSoapSerializer,
            /* [in] */ BSTR bstrEncoding,
            /* [in] */ enEncodingStyle encodingMode,
            /* [in] */ long lFlags,
            /* [in] */ VARIANT *pvar) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE varType( 
            /* [retval][out] */ long *pvtType) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISoapTypeMapperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISoapTypeMapper * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISoapTypeMapper * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISoapTypeMapper * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISoapTypeMapper * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISoapTypeMapper * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISoapTypeMapper * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISoapTypeMapper * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *init )( 
            ISoapTypeMapper * This,
            /* [in] */ ISoapTypeMapperFactory *pFactory,
            /* [in] */ IXMLDOMNode *pSchema,
            /* [in] */ enXSDType xsdType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *read )( 
            ISoapTypeMapper * This,
            /* [in] */ IXMLDOMNode *pNode,
            /* [in] */ BSTR bstrEncoding,
            /* [in] */ enEncodingStyle encodingMode,
            /* [in] */ long lFlags,
            /* [retval][out] */ VARIANT *pvar);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *write )( 
            ISoapTypeMapper * This,
            /* [in] */ ISoapSerializer *pSoapSerializer,
            /* [in] */ BSTR bstrEncoding,
            /* [in] */ enEncodingStyle encodingMode,
            /* [in] */ long lFlags,
            /* [in] */ VARIANT *pvar);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *varType )( 
            ISoapTypeMapper * This,
            /* [retval][out] */ long *pvtType);
        
        END_INTERFACE
    } ISoapTypeMapperVtbl;

    interface ISoapTypeMapper
    {
        CONST_VTBL struct ISoapTypeMapperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISoapTypeMapper_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISoapTypeMapper_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISoapTypeMapper_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISoapTypeMapper_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISoapTypeMapper_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISoapTypeMapper_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISoapTypeMapper_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISoapTypeMapper_init(This,pFactory,pSchema,xsdType)	\
    ( (This)->lpVtbl -> init(This,pFactory,pSchema,xsdType) ) 

#define ISoapTypeMapper_read(This,pNode,bstrEncoding,encodingMode,lFlags,pvar)	\
    ( (This)->lpVtbl -> read(This,pNode,bstrEncoding,encodingMode,lFlags,pvar) ) 

#define ISoapTypeMapper_write(This,pSoapSerializer,bstrEncoding,encodingMode,lFlags,pvar)	\
    ( (This)->lpVtbl -> write(This,pSoapSerializer,bstrEncoding,encodingMode,lFlags,pvar) ) 

#define ISoapTypeMapper_varType(This,pvtType)	\
    ( (This)->lpVtbl -> varType(This,pvtType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISoapTypeMapper_INTERFACE_DEFINED__ */


#ifndef __ISoapTypeMapper2_INTERFACE_DEFINED__
#define __ISoapTypeMapper2_INTERFACE_DEFINED__

/* interface ISoapTypeMapper2 */
/* [dual][helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_ISoapTypeMapper2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0571ce21-57ee-43d9-9ec7-36d7b4af5034")
    ISoapTypeMapper2 : public ISoapTypeMapper
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE iid( 
            /* [retval][out] */ BSTR *bstrIIDAsString) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISoapTypeMapper2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISoapTypeMapper2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISoapTypeMapper2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISoapTypeMapper2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISoapTypeMapper2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISoapTypeMapper2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISoapTypeMapper2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISoapTypeMapper2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *init )( 
            ISoapTypeMapper2 * This,
            /* [in] */ ISoapTypeMapperFactory *pFactory,
            /* [in] */ IXMLDOMNode *pSchema,
            /* [in] */ enXSDType xsdType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *read )( 
            ISoapTypeMapper2 * This,
            /* [in] */ IXMLDOMNode *pNode,
            /* [in] */ BSTR bstrEncoding,
            /* [in] */ enEncodingStyle encodingMode,
            /* [in] */ long lFlags,
            /* [retval][out] */ VARIANT *pvar);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *write )( 
            ISoapTypeMapper2 * This,
            /* [in] */ ISoapSerializer *pSoapSerializer,
            /* [in] */ BSTR bstrEncoding,
            /* [in] */ enEncodingStyle encodingMode,
            /* [in] */ long lFlags,
            /* [in] */ VARIANT *pvar);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *varType )( 
            ISoapTypeMapper2 * This,
            /* [retval][out] */ long *pvtType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *iid )( 
            ISoapTypeMapper2 * This,
            /* [retval][out] */ BSTR *bstrIIDAsString);
        
        END_INTERFACE
    } ISoapTypeMapper2Vtbl;

    interface ISoapTypeMapper2
    {
        CONST_VTBL struct ISoapTypeMapper2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISoapTypeMapper2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISoapTypeMapper2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISoapTypeMapper2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISoapTypeMapper2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISoapTypeMapper2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISoapTypeMapper2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISoapTypeMapper2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISoapTypeMapper2_init(This,pFactory,pSchema,xsdType)	\
    ( (This)->lpVtbl -> init(This,pFactory,pSchema,xsdType) ) 

#define ISoapTypeMapper2_read(This,pNode,bstrEncoding,encodingMode,lFlags,pvar)	\
    ( (This)->lpVtbl -> read(This,pNode,bstrEncoding,encodingMode,lFlags,pvar) ) 

#define ISoapTypeMapper2_write(This,pSoapSerializer,bstrEncoding,encodingMode,lFlags,pvar)	\
    ( (This)->lpVtbl -> write(This,pSoapSerializer,bstrEncoding,encodingMode,lFlags,pvar) ) 

#define ISoapTypeMapper2_varType(This,pvtType)	\
    ( (This)->lpVtbl -> varType(This,pvtType) ) 


#define ISoapTypeMapper2_iid(This,bstrIIDAsString)	\
    ( (This)->lpVtbl -> iid(This,bstrIIDAsString) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISoapTypeMapper2_INTERFACE_DEFINED__ */


#ifndef __ISoapTypeMapperFactory_INTERFACE_DEFINED__
#define __ISoapTypeMapperFactory_INTERFACE_DEFINED__

/* interface ISoapTypeMapperFactory */
/* [dual][helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_ISoapTypeMapperFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B818238A-B709-4EB2-A4CE-6BA02C671F74")
    ISoapTypeMapperFactory : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE addSchema( 
            /* [in] */ IXMLDOMNode *pSchemaNode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getElementMapperbyName( 
            /* [in] */ BSTR bstrElementName,
            /* [in] */ BSTR bstrElementNamespace,
            /* [retval][out] */ ISoapTypeMapper **ppSoapTypeMapper) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getTypeMapperbyName( 
            /* [in] */ BSTR bstrTypeName,
            /* [in] */ BSTR bstrTypeNamespace,
            /* [retval][out] */ ISoapTypeMapper **ppSoapTypeMapper) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getElementMapper( 
            /* [in] */ IXMLDOMNode *pElementNode,
            /* [retval][out] */ ISoapTypeMapper **ppSoapTypeMapper) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getTypeMapper( 
            /* [in] */ IXMLDOMNode *pTypeNode,
            /* [retval][out] */ ISoapTypeMapper **ppSoapTypeMapper) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE addType( 
            /* [in] */ BSTR bstrTypeName,
            /* [in] */ BSTR bstrTypeNamespace,
            /* [in] */ BSTR bstrProgID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE addElement( 
            /* [in] */ BSTR bstrElementName,
            /* [in] */ BSTR bstrElementNamespace,
            /* [in] */ BSTR bstrProgID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getMapper( 
            /* [in] */ enXSDType xsdType,
            /* [in] */ IXMLDOMNode *pSchemaNode,
            /* [retval][out] */ ISoapTypeMapper **ppSoapTypeMapper) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE addTypeObjectMapper( 
            /* [in] */ BSTR bstrTypeName,
            /* [in] */ BSTR bstrTypeNamespace,
            /* [in] */ BSTR bstrProgID,
            /* [in] */ BSTR bstrIID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE addElementObjectMapper( 
            /* [in] */ BSTR bstrElementName,
            /* [in] */ BSTR bstrElementNamespace,
            /* [in] */ BSTR bstrProgID,
            /* [in] */ BSTR bstrIID) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISoapTypeMapperFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISoapTypeMapperFactory * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISoapTypeMapperFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISoapTypeMapperFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISoapTypeMapperFactory * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISoapTypeMapperFactory * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISoapTypeMapperFactory * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISoapTypeMapperFactory * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *addSchema )( 
            ISoapTypeMapperFactory * This,
            /* [in] */ IXMLDOMNode *pSchemaNode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getElementMapperbyName )( 
            ISoapTypeMapperFactory * This,
            /* [in] */ BSTR bstrElementName,
            /* [in] */ BSTR bstrElementNamespace,
            /* [retval][out] */ ISoapTypeMapper **ppSoapTypeMapper);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getTypeMapperbyName )( 
            ISoapTypeMapperFactory * This,
            /* [in] */ BSTR bstrTypeName,
            /* [in] */ BSTR bstrTypeNamespace,
            /* [retval][out] */ ISoapTypeMapper **ppSoapTypeMapper);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getElementMapper )( 
            ISoapTypeMapperFactory * This,
            /* [in] */ IXMLDOMNode *pElementNode,
            /* [retval][out] */ ISoapTypeMapper **ppSoapTypeMapper);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getTypeMapper )( 
            ISoapTypeMapperFactory * This,
            /* [in] */ IXMLDOMNode *pTypeNode,
            /* [retval][out] */ ISoapTypeMapper **ppSoapTypeMapper);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *addType )( 
            ISoapTypeMapperFactory * This,
            /* [in] */ BSTR bstrTypeName,
            /* [in] */ BSTR bstrTypeNamespace,
            /* [in] */ BSTR bstrProgID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *addElement )( 
            ISoapTypeMapperFactory * This,
            /* [in] */ BSTR bstrElementName,
            /* [in] */ BSTR bstrElementNamespace,
            /* [in] */ BSTR bstrProgID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getMapper )( 
            ISoapTypeMapperFactory * This,
            /* [in] */ enXSDType xsdType,
            /* [in] */ IXMLDOMNode *pSchemaNode,
            /* [retval][out] */ ISoapTypeMapper **ppSoapTypeMapper);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *addTypeObjectMapper )( 
            ISoapTypeMapperFactory * This,
            /* [in] */ BSTR bstrTypeName,
            /* [in] */ BSTR bstrTypeNamespace,
            /* [in] */ BSTR bstrProgID,
            /* [in] */ BSTR bstrIID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *addElementObjectMapper )( 
            ISoapTypeMapperFactory * This,
            /* [in] */ BSTR bstrElementName,
            /* [in] */ BSTR bstrElementNamespace,
            /* [in] */ BSTR bstrProgID,
            /* [in] */ BSTR bstrIID);
        
        END_INTERFACE
    } ISoapTypeMapperFactoryVtbl;

    interface ISoapTypeMapperFactory
    {
        CONST_VTBL struct ISoapTypeMapperFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISoapTypeMapperFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISoapTypeMapperFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISoapTypeMapperFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISoapTypeMapperFactory_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISoapTypeMapperFactory_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISoapTypeMapperFactory_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISoapTypeMapperFactory_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISoapTypeMapperFactory_addSchema(This,pSchemaNode)	\
    ( (This)->lpVtbl -> addSchema(This,pSchemaNode) ) 

#define ISoapTypeMapperFactory_getElementMapperbyName(This,bstrElementName,bstrElementNamespace,ppSoapTypeMapper)	\
    ( (This)->lpVtbl -> getElementMapperbyName(This,bstrElementName,bstrElementNamespace,ppSoapTypeMapper) ) 

#define ISoapTypeMapperFactory_getTypeMapperbyName(This,bstrTypeName,bstrTypeNamespace,ppSoapTypeMapper)	\
    ( (This)->lpVtbl -> getTypeMapperbyName(This,bstrTypeName,bstrTypeNamespace,ppSoapTypeMapper) ) 

#define ISoapTypeMapperFactory_getElementMapper(This,pElementNode,ppSoapTypeMapper)	\
    ( (This)->lpVtbl -> getElementMapper(This,pElementNode,ppSoapTypeMapper) ) 

#define ISoapTypeMapperFactory_getTypeMapper(This,pTypeNode,ppSoapTypeMapper)	\
    ( (This)->lpVtbl -> getTypeMapper(This,pTypeNode,ppSoapTypeMapper) ) 

#define ISoapTypeMapperFactory_addType(This,bstrTypeName,bstrTypeNamespace,bstrProgID)	\
    ( (This)->lpVtbl -> addType(This,bstrTypeName,bstrTypeNamespace,bstrProgID) ) 

#define ISoapTypeMapperFactory_addElement(This,bstrElementName,bstrElementNamespace,bstrProgID)	\
    ( (This)->lpVtbl -> addElement(This,bstrElementName,bstrElementNamespace,bstrProgID) ) 

#define ISoapTypeMapperFactory_getMapper(This,xsdType,pSchemaNode,ppSoapTypeMapper)	\
    ( (This)->lpVtbl -> getMapper(This,xsdType,pSchemaNode,ppSoapTypeMapper) ) 

#define ISoapTypeMapperFactory_addTypeObjectMapper(This,bstrTypeName,bstrTypeNamespace,bstrProgID,bstrIID)	\
    ( (This)->lpVtbl -> addTypeObjectMapper(This,bstrTypeName,bstrTypeNamespace,bstrProgID,bstrIID) ) 

#define ISoapTypeMapperFactory_addElementObjectMapper(This,bstrElementName,bstrElementNamespace,bstrProgID,bstrIID)	\
    ( (This)->lpVtbl -> addElementObjectMapper(This,bstrElementName,bstrElementNamespace,bstrProgID,bstrIID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISoapTypeMapperFactory_INTERFACE_DEFINED__ */


#ifndef __ISoapMapper_INTERFACE_DEFINED__
#define __ISoapMapper_INTERFACE_DEFINED__

/* interface ISoapMapper */
/* [helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_ISoapMapper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AC2424F3-0A74-4231-AB31-4A037C9B22A3")
    ISoapMapper : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_messageName( 
            /* [retval][out] */ BSTR *pbstrMessageName) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_elementName( 
            /* [retval][out] */ BSTR *pbstrElementName) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_partName( 
            /* [retval][out] */ BSTR *pbstrpartName) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_elementType( 
            /* [retval][out] */ BSTR *pbstrElementType) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isInput( 
            /* [retval][out] */ smIsInputEnum *pbIsInput) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_encoding( 
            /* [retval][out] */ BSTR *pbstrEncodingStyle) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_comValue( 
            /* [retval][out] */ VARIANT *pVarOut) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_comValue( 
            /* [in] */ VARIANT varIn) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_callIndex( 
            /* [retval][out] */ LONG *plCallIndex) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_parameterOrder( 
            /* [retval][out] */ LONG *plparaOrder) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_xmlNameSpace( 
            /* [retval][out] */ BSTR *pbstrxmlNameSpace) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_variantType( 
            /* [retval][out] */ long *pvtType) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Save( 
            /* [in] */ ISoapSerializer *pISoapSerializer,
            BSTR bstrEncoding,
            enEncodingStyle enSaveStyle,
            BSTR bstrMessageNamespace,
            long lFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Load( 
            /* [in] */ IXMLDOMNode *pNode,
            BSTR bstrEncoding,
            enEncodingStyle enStyle,
            BSTR bstrMessageNamespace) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISoapMapperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISoapMapper * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISoapMapper * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISoapMapper * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_messageName )( 
            ISoapMapper * This,
            /* [retval][out] */ BSTR *pbstrMessageName);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_elementName )( 
            ISoapMapper * This,
            /* [retval][out] */ BSTR *pbstrElementName);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_partName )( 
            ISoapMapper * This,
            /* [retval][out] */ BSTR *pbstrpartName);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_elementType )( 
            ISoapMapper * This,
            /* [retval][out] */ BSTR *pbstrElementType);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isInput )( 
            ISoapMapper * This,
            /* [retval][out] */ smIsInputEnum *pbIsInput);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_encoding )( 
            ISoapMapper * This,
            /* [retval][out] */ BSTR *pbstrEncodingStyle);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_comValue )( 
            ISoapMapper * This,
            /* [retval][out] */ VARIANT *pVarOut);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_comValue )( 
            ISoapMapper * This,
            /* [in] */ VARIANT varIn);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_callIndex )( 
            ISoapMapper * This,
            /* [retval][out] */ LONG *plCallIndex);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_parameterOrder )( 
            ISoapMapper * This,
            /* [retval][out] */ LONG *plparaOrder);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_xmlNameSpace )( 
            ISoapMapper * This,
            /* [retval][out] */ BSTR *pbstrxmlNameSpace);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_variantType )( 
            ISoapMapper * This,
            /* [retval][out] */ long *pvtType);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            ISoapMapper * This,
            /* [in] */ ISoapSerializer *pISoapSerializer,
            BSTR bstrEncoding,
            enEncodingStyle enSaveStyle,
            BSTR bstrMessageNamespace,
            long lFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            ISoapMapper * This,
            /* [in] */ IXMLDOMNode *pNode,
            BSTR bstrEncoding,
            enEncodingStyle enStyle,
            BSTR bstrMessageNamespace);
        
        END_INTERFACE
    } ISoapMapperVtbl;

    interface ISoapMapper
    {
        CONST_VTBL struct ISoapMapperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISoapMapper_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISoapMapper_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISoapMapper_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISoapMapper_get_messageName(This,pbstrMessageName)	\
    ( (This)->lpVtbl -> get_messageName(This,pbstrMessageName) ) 

#define ISoapMapper_get_elementName(This,pbstrElementName)	\
    ( (This)->lpVtbl -> get_elementName(This,pbstrElementName) ) 

#define ISoapMapper_get_partName(This,pbstrpartName)	\
    ( (This)->lpVtbl -> get_partName(This,pbstrpartName) ) 

#define ISoapMapper_get_elementType(This,pbstrElementType)	\
    ( (This)->lpVtbl -> get_elementType(This,pbstrElementType) ) 

#define ISoapMapper_get_isInput(This,pbIsInput)	\
    ( (This)->lpVtbl -> get_isInput(This,pbIsInput) ) 

#define ISoapMapper_get_encoding(This,pbstrEncodingStyle)	\
    ( (This)->lpVtbl -> get_encoding(This,pbstrEncodingStyle) ) 

#define ISoapMapper_get_comValue(This,pVarOut)	\
    ( (This)->lpVtbl -> get_comValue(This,pVarOut) ) 

#define ISoapMapper_put_comValue(This,varIn)	\
    ( (This)->lpVtbl -> put_comValue(This,varIn) ) 

#define ISoapMapper_get_callIndex(This,plCallIndex)	\
    ( (This)->lpVtbl -> get_callIndex(This,plCallIndex) ) 

#define ISoapMapper_get_parameterOrder(This,plparaOrder)	\
    ( (This)->lpVtbl -> get_parameterOrder(This,plparaOrder) ) 

#define ISoapMapper_get_xmlNameSpace(This,pbstrxmlNameSpace)	\
    ( (This)->lpVtbl -> get_xmlNameSpace(This,pbstrxmlNameSpace) ) 

#define ISoapMapper_get_variantType(This,pvtType)	\
    ( (This)->lpVtbl -> get_variantType(This,pvtType) ) 

#define ISoapMapper_Save(This,pISoapSerializer,bstrEncoding,enSaveStyle,bstrMessageNamespace,lFlags)	\
    ( (This)->lpVtbl -> Save(This,pISoapSerializer,bstrEncoding,enSaveStyle,bstrMessageNamespace,lFlags) ) 

#define ISoapMapper_Load(This,pNode,bstrEncoding,enStyle,bstrMessageNamespace)	\
    ( (This)->lpVtbl -> Load(This,pNode,bstrEncoding,enStyle,bstrMessageNamespace) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISoapMapper_INTERFACE_DEFINED__ */


#ifndef __IEnumSoapMappers_INTERFACE_DEFINED__
#define __IEnumSoapMappers_INTERFACE_DEFINED__

/* interface IEnumSoapMappers */
/* [helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_IEnumSoapMappers;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A8BF14B8-DBBA-45B5-A1ED-571697FACD4C")
    IEnumSoapMappers : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Next( 
            long celt,
            /* [out] */ ISoapMapper **ppSoapMapper,
            /* [out] */ long *pulFetched) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Skip( 
            long celt) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumSoapMappers **ppenum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumSoapMappersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumSoapMappers * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumSoapMappers * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumSoapMappers * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumSoapMappers * This,
            long celt,
            /* [out] */ ISoapMapper **ppSoapMapper,
            /* [out] */ long *pulFetched);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumSoapMappers * This,
            long celt);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumSoapMappers * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumSoapMappers * This,
            /* [out] */ IEnumSoapMappers **ppenum);
        
        END_INTERFACE
    } IEnumSoapMappersVtbl;

    interface IEnumSoapMappers
    {
        CONST_VTBL struct IEnumSoapMappersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumSoapMappers_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumSoapMappers_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumSoapMappers_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumSoapMappers_Next(This,celt,ppSoapMapper,pulFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,ppSoapMapper,pulFetched) ) 

#define IEnumSoapMappers_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumSoapMappers_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumSoapMappers_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumSoapMappers_INTERFACE_DEFINED__ */


#ifndef __IWSDLOperation_INTERFACE_DEFINED__
#define __IWSDLOperation_INTERFACE_DEFINED__

/* interface IWSDLOperation */
/* [helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_IWSDLOperation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2C713C3C-77FE-4997-AA30-38519C57FC15")
    IWSDLOperation : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_documentation( 
            /* [retval][out] */ BSTR *bstrDocumentation) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_name( 
            /* [retval][out] */ BSTR *pbstrOperationName) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_soapAction( 
            /* [retval][out] */ BSTR *pbstrSoapAction) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_objectProgID( 
            /* [retval][out] */ BSTR *pbstrobjectProgID) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_objectMethod( 
            /* [retval][out] */ BSTR *pbstrobjectMethod) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_hasHeader( 
            /* [retval][out] */ VARIANT_BOOL *pbHeader) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_style( 
            /* [retval][out] */ BSTR *pbstrstyle) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_preferredEncoding( 
            /* [retval][out] */ BSTR *pbstrpreferredEncoding) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetOperationParts( 
            /* [out] */ IEnumSoapMappers **ppIEnumSoapMappers) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ExecuteOperation( 
            /* [in] */ ISoapReader *pISoapReader,
            /* [in] */ ISoapSerializer *pISoapSerializer) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Save( 
            /* [in] */ ISoapSerializer *pISoapSerializer,
            VARIANT_BOOL vbInput) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SaveHeaders( 
            /* [in] */ ISoapSerializer *pISoapSerializer,
            VARIANT_BOOL vbOutput) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Load( 
            /* [in] */ ISoapReader *pISoapReader,
            VARIANT_BOOL vbInput) = 0;
        
        virtual /* [local][hidden][helpstring] */ const WCHAR *STDMETHODCALLTYPE getNameRef( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWSDLOperationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWSDLOperation * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWSDLOperation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWSDLOperation * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_documentation )( 
            IWSDLOperation * This,
            /* [retval][out] */ BSTR *bstrDocumentation);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_name )( 
            IWSDLOperation * This,
            /* [retval][out] */ BSTR *pbstrOperationName);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_soapAction )( 
            IWSDLOperation * This,
            /* [retval][out] */ BSTR *pbstrSoapAction);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_objectProgID )( 
            IWSDLOperation * This,
            /* [retval][out] */ BSTR *pbstrobjectProgID);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_objectMethod )( 
            IWSDLOperation * This,
            /* [retval][out] */ BSTR *pbstrobjectMethod);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasHeader )( 
            IWSDLOperation * This,
            /* [retval][out] */ VARIANT_BOOL *pbHeader);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_style )( 
            IWSDLOperation * This,
            /* [retval][out] */ BSTR *pbstrstyle);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_preferredEncoding )( 
            IWSDLOperation * This,
            /* [retval][out] */ BSTR *pbstrpreferredEncoding);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOperationParts )( 
            IWSDLOperation * This,
            /* [out] */ IEnumSoapMappers **ppIEnumSoapMappers);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ExecuteOperation )( 
            IWSDLOperation * This,
            /* [in] */ ISoapReader *pISoapReader,
            /* [in] */ ISoapSerializer *pISoapSerializer);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IWSDLOperation * This,
            /* [in] */ ISoapSerializer *pISoapSerializer,
            VARIANT_BOOL vbInput);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SaveHeaders )( 
            IWSDLOperation * This,
            /* [in] */ ISoapSerializer *pISoapSerializer,
            VARIANT_BOOL vbOutput);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IWSDLOperation * This,
            /* [in] */ ISoapReader *pISoapReader,
            VARIANT_BOOL vbInput);
        
        /* [local][hidden][helpstring] */ const WCHAR *( STDMETHODCALLTYPE *getNameRef )( 
            IWSDLOperation * This);
        
        END_INTERFACE
    } IWSDLOperationVtbl;

    interface IWSDLOperation
    {
        CONST_VTBL struct IWSDLOperationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWSDLOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWSDLOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWSDLOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWSDLOperation_get_documentation(This,bstrDocumentation)	\
    ( (This)->lpVtbl -> get_documentation(This,bstrDocumentation) ) 

#define IWSDLOperation_get_name(This,pbstrOperationName)	\
    ( (This)->lpVtbl -> get_name(This,pbstrOperationName) ) 

#define IWSDLOperation_get_soapAction(This,pbstrSoapAction)	\
    ( (This)->lpVtbl -> get_soapAction(This,pbstrSoapAction) ) 

#define IWSDLOperation_get_objectProgID(This,pbstrobjectProgID)	\
    ( (This)->lpVtbl -> get_objectProgID(This,pbstrobjectProgID) ) 

#define IWSDLOperation_get_objectMethod(This,pbstrobjectMethod)	\
    ( (This)->lpVtbl -> get_objectMethod(This,pbstrobjectMethod) ) 

#define IWSDLOperation_get_hasHeader(This,pbHeader)	\
    ( (This)->lpVtbl -> get_hasHeader(This,pbHeader) ) 

#define IWSDLOperation_get_style(This,pbstrstyle)	\
    ( (This)->lpVtbl -> get_style(This,pbstrstyle) ) 

#define IWSDLOperation_get_preferredEncoding(This,pbstrpreferredEncoding)	\
    ( (This)->lpVtbl -> get_preferredEncoding(This,pbstrpreferredEncoding) ) 

#define IWSDLOperation_GetOperationParts(This,ppIEnumSoapMappers)	\
    ( (This)->lpVtbl -> GetOperationParts(This,ppIEnumSoapMappers) ) 

#define IWSDLOperation_ExecuteOperation(This,pISoapReader,pISoapSerializer)	\
    ( (This)->lpVtbl -> ExecuteOperation(This,pISoapReader,pISoapSerializer) ) 

#define IWSDLOperation_Save(This,pISoapSerializer,vbInput)	\
    ( (This)->lpVtbl -> Save(This,pISoapSerializer,vbInput) ) 

#define IWSDLOperation_SaveHeaders(This,pISoapSerializer,vbOutput)	\
    ( (This)->lpVtbl -> SaveHeaders(This,pISoapSerializer,vbOutput) ) 

#define IWSDLOperation_Load(This,pISoapReader,vbInput)	\
    ( (This)->lpVtbl -> Load(This,pISoapReader,vbInput) ) 

#define IWSDLOperation_getNameRef(This)	\
    ( (This)->lpVtbl -> getNameRef(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWSDLOperation_INTERFACE_DEFINED__ */


#ifndef __IEnumWSDLOperations_INTERFACE_DEFINED__
#define __IEnumWSDLOperations_INTERFACE_DEFINED__

/* interface IEnumWSDLOperations */
/* [helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_IEnumWSDLOperations;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C4618005-691F-41FE-A318-C37CEC14B867")
    IEnumWSDLOperations : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Next( 
            long celt,
            /* [out] */ IWSDLOperation **ppWSDLOperation,
            /* [out] */ long *pulFetched) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Skip( 
            long celt) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumWSDLOperations **ppenum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Find( 
            BSTR bstrOperationToFind,
            /* [out] */ IWSDLOperation **ppIWSDLOperation) = 0;
        
        virtual /* [hidden][helpstring] */ HRESULT STDMETHODCALLTYPE Size( 
            /* [out] */ long *pSize) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumWSDLOperationsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumWSDLOperations * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumWSDLOperations * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumWSDLOperations * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumWSDLOperations * This,
            long celt,
            /* [out] */ IWSDLOperation **ppWSDLOperation,
            /* [out] */ long *pulFetched);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumWSDLOperations * This,
            long celt);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumWSDLOperations * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumWSDLOperations * This,
            /* [out] */ IEnumWSDLOperations **ppenum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            IEnumWSDLOperations * This,
            BSTR bstrOperationToFind,
            /* [out] */ IWSDLOperation **ppIWSDLOperation);
        
        /* [hidden][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Size )( 
            IEnumWSDLOperations * This,
            /* [out] */ long *pSize);
        
        END_INTERFACE
    } IEnumWSDLOperationsVtbl;

    interface IEnumWSDLOperations
    {
        CONST_VTBL struct IEnumWSDLOperationsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumWSDLOperations_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumWSDLOperations_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumWSDLOperations_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumWSDLOperations_Next(This,celt,ppWSDLOperation,pulFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,ppWSDLOperation,pulFetched) ) 

#define IEnumWSDLOperations_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumWSDLOperations_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumWSDLOperations_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#define IEnumWSDLOperations_Find(This,bstrOperationToFind,ppIWSDLOperation)	\
    ( (This)->lpVtbl -> Find(This,bstrOperationToFind,ppIWSDLOperation) ) 

#define IEnumWSDLOperations_Size(This,pSize)	\
    ( (This)->lpVtbl -> Size(This,pSize) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumWSDLOperations_INTERFACE_DEFINED__ */


#ifndef __IWSDLPort_INTERFACE_DEFINED__
#define __IWSDLPort_INTERFACE_DEFINED__

/* interface IWSDLPort */
/* [helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_IWSDLPort;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("94873e03-77df-455f-bc1c-e83b5ab8cf0f")
    IWSDLPort : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_name( 
            /* [retval][out] */ BSTR *pbstrPortName) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_address( 
            /* [retval][out] */ BSTR *pbstrPortAddress) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_bindStyle( 
            /* [retval][out] */ BSTR *pbstrbindStyle) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_transport( 
            /* [retval][out] */ BSTR *pbstrtransport) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_documentation( 
            /* [retval][out] */ BSTR *bstrDocumentation) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSoapOperations( 
            /* [out] */ IEnumWSDLOperations **ppIWSDLOperations) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWSDLPortVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWSDLPort * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWSDLPort * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWSDLPort * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_name )( 
            IWSDLPort * This,
            /* [retval][out] */ BSTR *pbstrPortName);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_address )( 
            IWSDLPort * This,
            /* [retval][out] */ BSTR *pbstrPortAddress);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bindStyle )( 
            IWSDLPort * This,
            /* [retval][out] */ BSTR *pbstrbindStyle);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_transport )( 
            IWSDLPort * This,
            /* [retval][out] */ BSTR *pbstrtransport);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_documentation )( 
            IWSDLPort * This,
            /* [retval][out] */ BSTR *bstrDocumentation);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSoapOperations )( 
            IWSDLPort * This,
            /* [out] */ IEnumWSDLOperations **ppIWSDLOperations);
        
        END_INTERFACE
    } IWSDLPortVtbl;

    interface IWSDLPort
    {
        CONST_VTBL struct IWSDLPortVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWSDLPort_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWSDLPort_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWSDLPort_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWSDLPort_get_name(This,pbstrPortName)	\
    ( (This)->lpVtbl -> get_name(This,pbstrPortName) ) 

#define IWSDLPort_get_address(This,pbstrPortAddress)	\
    ( (This)->lpVtbl -> get_address(This,pbstrPortAddress) ) 

#define IWSDLPort_get_bindStyle(This,pbstrbindStyle)	\
    ( (This)->lpVtbl -> get_bindStyle(This,pbstrbindStyle) ) 

#define IWSDLPort_get_transport(This,pbstrtransport)	\
    ( (This)->lpVtbl -> get_transport(This,pbstrtransport) ) 

#define IWSDLPort_get_documentation(This,bstrDocumentation)	\
    ( (This)->lpVtbl -> get_documentation(This,bstrDocumentation) ) 

#define IWSDLPort_GetSoapOperations(This,ppIWSDLOperations)	\
    ( (This)->lpVtbl -> GetSoapOperations(This,ppIWSDLOperations) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWSDLPort_INTERFACE_DEFINED__ */


#ifndef __IEnumWSDLPorts_INTERFACE_DEFINED__
#define __IEnumWSDLPorts_INTERFACE_DEFINED__

/* interface IEnumWSDLPorts */
/* [helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_IEnumWSDLPorts;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6deae1c2-789f-430c-94cb-703f24e25d52")
    IEnumWSDLPorts : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Next( 
            long celt,
            /* [out] */ IWSDLPort **ppWSDLPort,
            long *pulFetched) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Skip( 
            long celt) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumWSDLPorts **ppenum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Find( 
            BSTR bstrPortToFind,
            /* [out] */ IWSDLPort **ppIWSDLPort) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumWSDLPortsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumWSDLPorts * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumWSDLPorts * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumWSDLPorts * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumWSDLPorts * This,
            long celt,
            /* [out] */ IWSDLPort **ppWSDLPort,
            long *pulFetched);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumWSDLPorts * This,
            long celt);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumWSDLPorts * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumWSDLPorts * This,
            /* [out] */ IEnumWSDLPorts **ppenum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            IEnumWSDLPorts * This,
            BSTR bstrPortToFind,
            /* [out] */ IWSDLPort **ppIWSDLPort);
        
        END_INTERFACE
    } IEnumWSDLPortsVtbl;

    interface IEnumWSDLPorts
    {
        CONST_VTBL struct IEnumWSDLPortsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumWSDLPorts_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumWSDLPorts_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumWSDLPorts_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumWSDLPorts_Next(This,celt,ppWSDLPort,pulFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,ppWSDLPort,pulFetched) ) 

#define IEnumWSDLPorts_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumWSDLPorts_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumWSDLPorts_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#define IEnumWSDLPorts_Find(This,bstrPortToFind,ppIWSDLPort)	\
    ( (This)->lpVtbl -> Find(This,bstrPortToFind,ppIWSDLPort) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumWSDLPorts_INTERFACE_DEFINED__ */


#ifndef __IWSDLService_INTERFACE_DEFINED__
#define __IWSDLService_INTERFACE_DEFINED__

/* interface IWSDLService */
/* [helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_IWSDLService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C21A73B1-5655-4B36-BA3F-8E2DBABE82DF")
    IWSDLService : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_name( 
            /* [retval][out] */ BSTR *bstrServiceName) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_documentation( 
            /* [retval][out] */ BSTR *bstrDocumentation) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSoapPorts( 
            /* [out] */ IEnumWSDLPorts **ppIWSDLPorts) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWSDLServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWSDLService * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWSDLService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWSDLService * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_name )( 
            IWSDLService * This,
            /* [retval][out] */ BSTR *bstrServiceName);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_documentation )( 
            IWSDLService * This,
            /* [retval][out] */ BSTR *bstrDocumentation);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSoapPorts )( 
            IWSDLService * This,
            /* [out] */ IEnumWSDLPorts **ppIWSDLPorts);
        
        END_INTERFACE
    } IWSDLServiceVtbl;

    interface IWSDLService
    {
        CONST_VTBL struct IWSDLServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWSDLService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWSDLService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWSDLService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWSDLService_get_name(This,bstrServiceName)	\
    ( (This)->lpVtbl -> get_name(This,bstrServiceName) ) 

#define IWSDLService_get_documentation(This,bstrDocumentation)	\
    ( (This)->lpVtbl -> get_documentation(This,bstrDocumentation) ) 

#define IWSDLService_GetSoapPorts(This,ppIWSDLPorts)	\
    ( (This)->lpVtbl -> GetSoapPorts(This,ppIWSDLPorts) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWSDLService_INTERFACE_DEFINED__ */


#ifndef __IEnumWSDLService_INTERFACE_DEFINED__
#define __IEnumWSDLService_INTERFACE_DEFINED__

/* interface IEnumWSDLService */
/* [helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_IEnumWSDLService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BD5965B7-F5BF-49F3-AE7B-F817D4B7CC99")
    IEnumWSDLService : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Next( 
            long celt,
            /* [out] */ IWSDLService **ppWSDLService,
            long *pulFetched) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Skip( 
            long celt) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumWSDLService **ppenum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Find( 
            BSTR bstrServiceToFind,
            /* [out] */ IWSDLService **ppWSDLService) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumWSDLServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumWSDLService * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumWSDLService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumWSDLService * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumWSDLService * This,
            long celt,
            /* [out] */ IWSDLService **ppWSDLService,
            long *pulFetched);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumWSDLService * This,
            long celt);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumWSDLService * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumWSDLService * This,
            /* [out] */ IEnumWSDLService **ppenum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            IEnumWSDLService * This,
            BSTR bstrServiceToFind,
            /* [out] */ IWSDLService **ppWSDLService);
        
        END_INTERFACE
    } IEnumWSDLServiceVtbl;

    interface IEnumWSDLService
    {
        CONST_VTBL struct IEnumWSDLServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumWSDLService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumWSDLService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumWSDLService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumWSDLService_Next(This,celt,ppWSDLService,pulFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,ppWSDLService,pulFetched) ) 

#define IEnumWSDLService_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumWSDLService_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumWSDLService_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#define IEnumWSDLService_Find(This,bstrServiceToFind,ppWSDLService)	\
    ( (This)->lpVtbl -> Find(This,bstrServiceToFind,ppWSDLService) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumWSDLService_INTERFACE_DEFINED__ */


#ifndef __IWSDLReader_INTERFACE_DEFINED__
#define __IWSDLReader_INTERFACE_DEFINED__

/* interface IWSDLReader */
/* [helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_IWSDLReader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("77127B0C-C47E-4861-8429-4B6DA7401663")
    IWSDLReader : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Load( 
            BSTR bstrWSDLFileSpec,
            BSTR bstrWSMLFileSpec) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSoapServices( 
            /* [out] */ IEnumWSDLService **ppWSDLServiceEnum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ParseRequest( 
            /* [in] */ ISoapReader *pSoapReader,
            /* [out] */ IWSDLPort **ppIWSDLPort,
            /* [out] */ IWSDLOperation **ppIWSDLOperation) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE setProperty( 
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ VARIANT varPropValue) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWSDLReaderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWSDLReader * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWSDLReader * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWSDLReader * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IWSDLReader * This,
            BSTR bstrWSDLFileSpec,
            BSTR bstrWSMLFileSpec);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSoapServices )( 
            IWSDLReader * This,
            /* [out] */ IEnumWSDLService **ppWSDLServiceEnum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ParseRequest )( 
            IWSDLReader * This,
            /* [in] */ ISoapReader *pSoapReader,
            /* [out] */ IWSDLPort **ppIWSDLPort,
            /* [out] */ IWSDLOperation **ppIWSDLOperation);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *setProperty )( 
            IWSDLReader * This,
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ VARIANT varPropValue);
        
        END_INTERFACE
    } IWSDLReaderVtbl;

    interface IWSDLReader
    {
        CONST_VTBL struct IWSDLReaderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWSDLReader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWSDLReader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWSDLReader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWSDLReader_Load(This,bstrWSDLFileSpec,bstrWSMLFileSpec)	\
    ( (This)->lpVtbl -> Load(This,bstrWSDLFileSpec,bstrWSMLFileSpec) ) 

#define IWSDLReader_GetSoapServices(This,ppWSDLServiceEnum)	\
    ( (This)->lpVtbl -> GetSoapServices(This,ppWSDLServiceEnum) ) 

#define IWSDLReader_ParseRequest(This,pSoapReader,ppIWSDLPort,ppIWSDLOperation)	\
    ( (This)->lpVtbl -> ParseRequest(This,pSoapReader,ppIWSDLPort,ppIWSDLOperation) ) 

#define IWSDLReader_setProperty(This,bstrPropertyName,varPropValue)	\
    ( (This)->lpVtbl -> setProperty(This,bstrPropertyName,varPropValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWSDLReader_INTERFACE_DEFINED__ */


#ifndef __ISOAPError_INTERFACE_DEFINED__
#define __ISOAPError_INTERFACE_DEFINED__

/* interface ISOAPError */
/* [helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_ISOAPError;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EDABBFA8-E126-402D-B65D-4EFAC1405F6E")
    ISOAPError : public IUnknown
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_faultcode( 
            /* [retval][out] */ BSTR *bstrFaultcode) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_faultstring( 
            /* [retval][out] */ BSTR *bstrFaultstring) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_faultactor( 
            /* [retval][out] */ BSTR *bstrActor) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_detail( 
            /* [retval][out] */ BSTR *bstrDetail) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_faultcodeNS( 
            /* [retval][out] */ BSTR *bstrNamespace) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISOAPErrorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISOAPError * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISOAPError * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISOAPError * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_faultcode )( 
            ISOAPError * This,
            /* [retval][out] */ BSTR *bstrFaultcode);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_faultstring )( 
            ISOAPError * This,
            /* [retval][out] */ BSTR *bstrFaultstring);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_faultactor )( 
            ISOAPError * This,
            /* [retval][out] */ BSTR *bstrActor);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_detail )( 
            ISOAPError * This,
            /* [retval][out] */ BSTR *bstrDetail);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_faultcodeNS )( 
            ISOAPError * This,
            /* [retval][out] */ BSTR *bstrNamespace);
        
        END_INTERFACE
    } ISOAPErrorVtbl;

    interface ISOAPError
    {
        CONST_VTBL struct ISOAPErrorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISOAPError_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISOAPError_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISOAPError_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISOAPError_get_faultcode(This,bstrFaultcode)	\
    ( (This)->lpVtbl -> get_faultcode(This,bstrFaultcode) ) 

#define ISOAPError_get_faultstring(This,bstrFaultstring)	\
    ( (This)->lpVtbl -> get_faultstring(This,bstrFaultstring) ) 

#define ISOAPError_get_faultactor(This,bstrActor)	\
    ( (This)->lpVtbl -> get_faultactor(This,bstrActor) ) 

#define ISOAPError_get_detail(This,bstrDetail)	\
    ( (This)->lpVtbl -> get_detail(This,bstrDetail) ) 

#define ISOAPError_get_faultcodeNS(This,bstrNamespace)	\
    ( (This)->lpVtbl -> get_faultcodeNS(This,bstrNamespace) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISOAPError_INTERFACE_DEFINED__ */



#ifndef __MSSOAPLib_LIBRARY_DEFINED__
#define __MSSOAPLib_LIBRARY_DEFINED__

/* library MSSOAPLib */
/* [helpstring][version][uuid] */ 








EXTERN_C const IID LIBID_MSSOAPLib;

EXTERN_C const CLSID CLSID_SoapConnector;

#ifdef __cplusplus

class DECLSPEC_UUID("A295EAB4-73AC-4725-A7DE-51047843B421")
SoapConnector;
#endif

EXTERN_C const CLSID CLSID_SoapConnectorFactory;

#ifdef __cplusplus

class DECLSPEC_UUID("4CE546FF-9128-465E-B5C5-5A36CFC2C285")
SoapConnectorFactory;
#endif

EXTERN_C const CLSID CLSID_HttpConnector;

#ifdef __cplusplus

class DECLSPEC_UUID("6205B8C9-75FF-4623-A50A-88E1F14EAFF2")
HttpConnector;
#endif

EXTERN_C const CLSID CLSID_SoapReader;

#ifdef __cplusplus

class DECLSPEC_UUID("FDE424F3-AA10-471D-8A0A-6875C17B5914")
SoapReader;
#endif

EXTERN_C const CLSID CLSID_SoapSerializer;

#ifdef __cplusplus

class DECLSPEC_UUID("ADE424F3-AA10-471D-8A0A-687534555900")
SoapSerializer;
#endif

EXTERN_C const CLSID CLSID_SoapServer;

#ifdef __cplusplus

class DECLSPEC_UUID("EBB2FF12-861A-42b6-B815-B1AF4D944916")
SoapServer;
#endif

EXTERN_C const CLSID CLSID_SoapClient;

#ifdef __cplusplus

class DECLSPEC_UUID("86D54F3D-652D-4ab3-A1A6-14D403F6C813")
SoapClient;
#endif

EXTERN_C const CLSID CLSID_WSDLReader;

#ifdef __cplusplus

class DECLSPEC_UUID("BB023FC5-AA10-47CE-8A0A-6875C17B5914")
WSDLReader;
#endif

EXTERN_C const CLSID CLSID_SoapTypeMapperFactory;

#ifdef __cplusplus

class DECLSPEC_UUID("9C5754F7-ADF5-4D82-B181-0F8FC5EA882B")
SoapTypeMapperFactory;
#endif

EXTERN_C const CLSID CLSID_EnumWSDLService;

#ifdef __cplusplus

class DECLSPEC_UUID("86950840-D999-4902-B97A-1E80D2F31A51")
EnumWSDLService;
#endif

EXTERN_C const CLSID CLSID_WSDLService;

#ifdef __cplusplus

class DECLSPEC_UUID("C75F59D9-672E-42E0-B353-134E1EB27EEA")
WSDLService;
#endif

EXTERN_C const CLSID CLSID_EnumWSDLOperations;

#ifdef __cplusplus

class DECLSPEC_UUID("D39CBFF4-46AF-459D-A8F7-61A38A1DC285")
EnumWSDLOperations;
#endif

EXTERN_C const CLSID CLSID_WSDLOperation;

#ifdef __cplusplus

class DECLSPEC_UUID("61FC8C46-7102-4F1C-BFA0-30CD43AFF1BB")
WSDLOperation;
#endif

EXTERN_C const CLSID CLSID_SoapMapper;

#ifdef __cplusplus

class DECLSPEC_UUID("55429FCE-044E-4ADF-9322-2CFBFF9B7B5D")
SoapMapper;
#endif

EXTERN_C const CLSID CLSID_EnumSoapMappers;

#ifdef __cplusplus

class DECLSPEC_UUID("6b6b62b5-8f0a-46ad-aafa-11af2517ded1")
EnumSoapMappers;
#endif

EXTERN_C const CLSID CLSID_EnumWSDLPorts;

#ifdef __cplusplus

class DECLSPEC_UUID("bd283625-5931-40ca-b43b-8e8a8651dc70")
EnumWSDLPorts;
#endif

EXTERN_C const CLSID CLSID_WSDLPort;

#ifdef __cplusplus

class DECLSPEC_UUID("dba51e33-5d87-47aa-af2f-2a616527808a")
WSDLPort;
#endif
#endif /* __MSSOAPLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


