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
/* Compiler settings for asp.idl:
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

#ifndef __asp_h__
#define __asp_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IRequestDictionary_FWD_DEFINED__
#define __IRequestDictionary_FWD_DEFINED__
typedef interface IRequestDictionary IRequestDictionary;
#endif 	/* __IRequestDictionary_FWD_DEFINED__ */


#ifndef __IRequestStrList_FWD_DEFINED__
#define __IRequestStrList_FWD_DEFINED__
typedef interface IRequestStrList IRequestStrList;
#endif 	/* __IRequestStrList_FWD_DEFINED__ */


#ifndef __IRequest_FWD_DEFINED__
#define __IRequest_FWD_DEFINED__
typedef interface IRequest IRequest;
#endif 	/* __IRequest_FWD_DEFINED__ */


#ifndef __IResponse_FWD_DEFINED__
#define __IResponse_FWD_DEFINED__
typedef interface IResponse IResponse;
#endif 	/* __IResponse_FWD_DEFINED__ */


#ifndef __IServer_FWD_DEFINED__
#define __IServer_FWD_DEFINED__
typedef interface IServer IServer;
#endif 	/* __IServer_FWD_DEFINED__ */


#ifndef __Request_FWD_DEFINED__
#define __Request_FWD_DEFINED__

#ifdef __cplusplus
typedef class Request Request;
#else
typedef struct Request Request;
#endif /* __cplusplus */

#endif 	/* __Request_FWD_DEFINED__ */


#ifndef __Response_FWD_DEFINED__
#define __Response_FWD_DEFINED__

#ifdef __cplusplus
typedef class Response Response;
#else
typedef struct Response Response;
#endif /* __cplusplus */

#endif 	/* __Response_FWD_DEFINED__ */


#ifndef __Server_FWD_DEFINED__
#define __Server_FWD_DEFINED__

#ifdef __cplusplus
typedef class Server Server;
#else
typedef struct Server Server;
#endif /* __cplusplus */

#endif 	/* __Server_FWD_DEFINED__ */


#ifndef __RequestDictionary_FWD_DEFINED__
#define __RequestDictionary_FWD_DEFINED__

#ifdef __cplusplus
typedef class RequestDictionary RequestDictionary;
#else
typedef struct RequestDictionary RequestDictionary;
#endif /* __cplusplus */

#endif 	/* __RequestDictionary_FWD_DEFINED__ */


#ifndef __RequestStrList_FWD_DEFINED__
#define __RequestStrList_FWD_DEFINED__

#ifdef __cplusplus
typedef class RequestStrList RequestStrList;
#else
typedef struct RequestStrList RequestStrList;
#endif /* __cplusplus */

#endif 	/* __RequestStrList_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IRequestDictionary_INTERFACE_DEFINED__
#define __IRequestDictionary_INTERFACE_DEFINED__

/* interface IRequestDictionary */
/* [object][unique][oleautomation][dual][hidden][helpstring][uuid] */ 


EXTERN_C const IID IID_IRequestDictionary;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D97A6DA0-A85F-11DF-83AE-00A0C90C2BD8")
    IRequestDictionary : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [optional][in] */ VARIANT Var,
            /* [retval][out] */ VARIANT *pVariantReturn) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Item( 
            /* [optional][in] */ VARIANT Var,
            /* [in] */ BSTR bstrValue) = 0;
        
        virtual /* [restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppEnumReturn) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ int *cStrRet) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Key( 
            /* [in] */ VARIANT VarKey,
            /* [retval][out] */ VARIANT *pvar) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRequestDictionaryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRequestDictionary * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRequestDictionary * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRequestDictionary * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRequestDictionary * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRequestDictionary * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRequestDictionary * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRequestDictionary * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IRequestDictionary * This,
            /* [optional][in] */ VARIANT Var,
            /* [retval][out] */ VARIANT *pVariantReturn);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Item )( 
            IRequestDictionary * This,
            /* [optional][in] */ VARIANT Var,
            /* [in] */ BSTR bstrValue);
        
        /* [restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IRequestDictionary * This,
            /* [retval][out] */ IUnknown **ppEnumReturn);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IRequestDictionary * This,
            /* [retval][out] */ int *cStrRet);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )( 
            IRequestDictionary * This,
            /* [in] */ VARIANT VarKey,
            /* [retval][out] */ VARIANT *pvar);
        
        END_INTERFACE
    } IRequestDictionaryVtbl;

    interface IRequestDictionary
    {
        CONST_VTBL struct IRequestDictionaryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRequestDictionary_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRequestDictionary_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRequestDictionary_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRequestDictionary_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRequestDictionary_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRequestDictionary_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRequestDictionary_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRequestDictionary_get_Item(This,Var,pVariantReturn)	\
    ( (This)->lpVtbl -> get_Item(This,Var,pVariantReturn) ) 

#define IRequestDictionary_put_Item(This,Var,bstrValue)	\
    ( (This)->lpVtbl -> put_Item(This,Var,bstrValue) ) 

#define IRequestDictionary_get__NewEnum(This,ppEnumReturn)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumReturn) ) 

#define IRequestDictionary_get_Count(This,cStrRet)	\
    ( (This)->lpVtbl -> get_Count(This,cStrRet) ) 

#define IRequestDictionary_get_Key(This,VarKey,pvar)	\
    ( (This)->lpVtbl -> get_Key(This,VarKey,pvar) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRequestDictionary_INTERFACE_DEFINED__ */


#ifndef __IRequestStrList_INTERFACE_DEFINED__
#define __IRequestStrList_INTERFACE_DEFINED__

/* interface IRequestStrList */
/* [object][unique][oleautomation][hidden][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IRequestStrList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1C724F9A-FE6B-11D2-9C54-00C04F681EE7")
    IRequestStrList : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [optional][in] */ VARIANT Var,
            /* [retval][out] */ VARIANT *pVariantReturn) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Item( 
            /* [optional][in] */ VARIANT Var,
            /* [in] */ BSTR bstrValue) = 0;
        
        virtual /* [restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppEnumReturn) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ int *cStrRet) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Key( 
            /* [in] */ VARIANT VarKey,
            /* [retval][out] */ VARIANT *pvar) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Expires( 
            /* [in] */ DATE dtExpires) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Domain( 
            /* [in] */ BSTR bstrDomain) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Path( 
            /* [in] */ BSTR bstrPath) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_HasKeys( 
            /* [retval][out] */ VARIANT_BOOL *pfHasKeys) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRequestStrListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRequestStrList * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRequestStrList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRequestStrList * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRequestStrList * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRequestStrList * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRequestStrList * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRequestStrList * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IRequestStrList * This,
            /* [optional][in] */ VARIANT Var,
            /* [retval][out] */ VARIANT *pVariantReturn);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Item )( 
            IRequestStrList * This,
            /* [optional][in] */ VARIANT Var,
            /* [in] */ BSTR bstrValue);
        
        /* [restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IRequestStrList * This,
            /* [retval][out] */ IUnknown **ppEnumReturn);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IRequestStrList * This,
            /* [retval][out] */ int *cStrRet);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )( 
            IRequestStrList * This,
            /* [in] */ VARIANT VarKey,
            /* [retval][out] */ VARIANT *pvar);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Expires )( 
            IRequestStrList * This,
            /* [in] */ DATE dtExpires);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Domain )( 
            IRequestStrList * This,
            /* [in] */ BSTR bstrDomain);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Path )( 
            IRequestStrList * This,
            /* [in] */ BSTR bstrPath);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasKeys )( 
            IRequestStrList * This,
            /* [retval][out] */ VARIANT_BOOL *pfHasKeys);
        
        END_INTERFACE
    } IRequestStrListVtbl;

    interface IRequestStrList
    {
        CONST_VTBL struct IRequestStrListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRequestStrList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRequestStrList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRequestStrList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRequestStrList_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRequestStrList_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRequestStrList_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRequestStrList_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRequestStrList_get_Item(This,Var,pVariantReturn)	\
    ( (This)->lpVtbl -> get_Item(This,Var,pVariantReturn) ) 

#define IRequestStrList_put_Item(This,Var,bstrValue)	\
    ( (This)->lpVtbl -> put_Item(This,Var,bstrValue) ) 

#define IRequestStrList_get__NewEnum(This,ppEnumReturn)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumReturn) ) 

#define IRequestStrList_get_Count(This,cStrRet)	\
    ( (This)->lpVtbl -> get_Count(This,cStrRet) ) 

#define IRequestStrList_get_Key(This,VarKey,pvar)	\
    ( (This)->lpVtbl -> get_Key(This,VarKey,pvar) ) 

#define IRequestStrList_put_Expires(This,dtExpires)	\
    ( (This)->lpVtbl -> put_Expires(This,dtExpires) ) 

#define IRequestStrList_put_Domain(This,bstrDomain)	\
    ( (This)->lpVtbl -> put_Domain(This,bstrDomain) ) 

#define IRequestStrList_put_Path(This,bstrPath)	\
    ( (This)->lpVtbl -> put_Path(This,bstrPath) ) 

#define IRequestStrList_get_HasKeys(This,pfHasKeys)	\
    ( (This)->lpVtbl -> get_HasKeys(This,pfHasKeys) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRequestStrList_INTERFACE_DEFINED__ */


#ifndef __IRequest_INTERFACE_DEFINED__
#define __IRequest_INTERFACE_DEFINED__

/* interface IRequest */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IRequest;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D97A6DA0-A861-11CF-93AE-00A0C90C2BD8")
    IRequest : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TotalBytes( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ServerVariables( 
            /* [retval][out] */ IRequestDictionary **ppDictReturn) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_QueryString( 
            /* [retval][out] */ IRequestDictionary **ppDictReturn) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Form( 
            /* [retval][out] */ IRequestDictionary **ppDictReturn) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Cookies( 
            /* [retval][out] */ IRequestDictionary **ppDictReturn) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BinaryRead( 
            /* [out][in] */ VARIANT *pvarCountToRead,
            /* [retval][out] */ VARIANT *pvarReturn) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRequestVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRequest * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRequest * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRequest * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRequest * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRequest * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRequest * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRequest * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TotalBytes )( 
            IRequest * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ServerVariables )( 
            IRequest * This,
            /* [retval][out] */ IRequestDictionary **ppDictReturn);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_QueryString )( 
            IRequest * This,
            /* [retval][out] */ IRequestDictionary **ppDictReturn);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Form )( 
            IRequest * This,
            /* [retval][out] */ IRequestDictionary **ppDictReturn);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Cookies )( 
            IRequest * This,
            /* [retval][out] */ IRequestDictionary **ppDictReturn);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *BinaryRead )( 
            IRequest * This,
            /* [out][in] */ VARIANT *pvarCountToRead,
            /* [retval][out] */ VARIANT *pvarReturn);
        
        END_INTERFACE
    } IRequestVtbl;

    interface IRequest
    {
        CONST_VTBL struct IRequestVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRequest_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRequest_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRequest_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRequest_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRequest_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRequest_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRequest_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRequest_get_TotalBytes(This,pVal)	\
    ( (This)->lpVtbl -> get_TotalBytes(This,pVal) ) 

#define IRequest_get_ServerVariables(This,ppDictReturn)	\
    ( (This)->lpVtbl -> get_ServerVariables(This,ppDictReturn) ) 

#define IRequest_get_QueryString(This,ppDictReturn)	\
    ( (This)->lpVtbl -> get_QueryString(This,ppDictReturn) ) 

#define IRequest_get_Form(This,ppDictReturn)	\
    ( (This)->lpVtbl -> get_Form(This,ppDictReturn) ) 

#define IRequest_get_Cookies(This,ppDictReturn)	\
    ( (This)->lpVtbl -> get_Cookies(This,ppDictReturn) ) 

#define IRequest_BinaryRead(This,pvarCountToRead,pvarReturn)	\
    ( (This)->lpVtbl -> BinaryRead(This,pvarCountToRead,pvarReturn) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRequest_INTERFACE_DEFINED__ */


#ifndef __IResponse_INTERFACE_DEFINED__
#define __IResponse_INTERFACE_DEFINED__

/* interface IResponse */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IResponse;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D97A6DA0-A864-11CF-83BE-00A0C90C2BD8")
    IResponse : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Buffer( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Buffer( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Write( 
            VARIANT varData) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Expires( 
            /* [retval][out] */ VARIANT *pvarExpiresMinutesRet) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Expires( 
            /* [in] */ long lExpiresMinutes) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ExpiresAbsolute( 
            /* [retval][out] */ VARIANT *pvarExpiresRet) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ExpiresAbsolute( 
            /* [in] */ DATE dtExpires) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Cookies( 
            /* [retval][out] */ IRequestDictionary **ppDictReturn) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Status( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Status( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ContentType( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ContentType( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Charset( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Charset( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddHeader( 
            BSTR pszName,
            BSTR pszValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AppendToLog( 
            BSTR pszLogData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE End( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Flush( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Redirect( 
            BSTR pszURL) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BinaryWrite( 
            /* [in] */ VARIANT varData) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IResponseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IResponse * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IResponse * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IResponse * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IResponse * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IResponse * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IResponse * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IResponse * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Buffer )( 
            IResponse * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Buffer )( 
            IResponse * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Write )( 
            IResponse * This,
            VARIANT varData);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Expires )( 
            IResponse * This,
            /* [retval][out] */ VARIANT *pvarExpiresMinutesRet);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Expires )( 
            IResponse * This,
            /* [in] */ long lExpiresMinutes);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpiresAbsolute )( 
            IResponse * This,
            /* [retval][out] */ VARIANT *pvarExpiresRet);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExpiresAbsolute )( 
            IResponse * This,
            /* [in] */ DATE dtExpires);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Cookies )( 
            IResponse * This,
            /* [retval][out] */ IRequestDictionary **ppDictReturn);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            IResponse * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Status )( 
            IResponse * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContentType )( 
            IResponse * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ContentType )( 
            IResponse * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Charset )( 
            IResponse * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Charset )( 
            IResponse * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddHeader )( 
            IResponse * This,
            BSTR pszName,
            BSTR pszValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AppendToLog )( 
            IResponse * This,
            BSTR pszLogData);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IResponse * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *End )( 
            IResponse * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Flush )( 
            IResponse * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Redirect )( 
            IResponse * This,
            BSTR pszURL);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *BinaryWrite )( 
            IResponse * This,
            /* [in] */ VARIANT varData);
        
        END_INTERFACE
    } IResponseVtbl;

    interface IResponse
    {
        CONST_VTBL struct IResponseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IResponse_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IResponse_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IResponse_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IResponse_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IResponse_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IResponse_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IResponse_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IResponse_get_Buffer(This,pVal)	\
    ( (This)->lpVtbl -> get_Buffer(This,pVal) ) 

#define IResponse_put_Buffer(This,newVal)	\
    ( (This)->lpVtbl -> put_Buffer(This,newVal) ) 

#define IResponse_Write(This,varData)	\
    ( (This)->lpVtbl -> Write(This,varData) ) 

#define IResponse_get_Expires(This,pvarExpiresMinutesRet)	\
    ( (This)->lpVtbl -> get_Expires(This,pvarExpiresMinutesRet) ) 

#define IResponse_put_Expires(This,lExpiresMinutes)	\
    ( (This)->lpVtbl -> put_Expires(This,lExpiresMinutes) ) 

#define IResponse_get_ExpiresAbsolute(This,pvarExpiresRet)	\
    ( (This)->lpVtbl -> get_ExpiresAbsolute(This,pvarExpiresRet) ) 

#define IResponse_put_ExpiresAbsolute(This,dtExpires)	\
    ( (This)->lpVtbl -> put_ExpiresAbsolute(This,dtExpires) ) 

#define IResponse_get_Cookies(This,ppDictReturn)	\
    ( (This)->lpVtbl -> get_Cookies(This,ppDictReturn) ) 

#define IResponse_get_Status(This,pVal)	\
    ( (This)->lpVtbl -> get_Status(This,pVal) ) 

#define IResponse_put_Status(This,newVal)	\
    ( (This)->lpVtbl -> put_Status(This,newVal) ) 

#define IResponse_get_ContentType(This,pVal)	\
    ( (This)->lpVtbl -> get_ContentType(This,pVal) ) 

#define IResponse_put_ContentType(This,newVal)	\
    ( (This)->lpVtbl -> put_ContentType(This,newVal) ) 

#define IResponse_get_Charset(This,pVal)	\
    ( (This)->lpVtbl -> get_Charset(This,pVal) ) 

#define IResponse_put_Charset(This,newVal)	\
    ( (This)->lpVtbl -> put_Charset(This,newVal) ) 

#define IResponse_AddHeader(This,pszName,pszValue)	\
    ( (This)->lpVtbl -> AddHeader(This,pszName,pszValue) ) 

#define IResponse_AppendToLog(This,pszLogData)	\
    ( (This)->lpVtbl -> AppendToLog(This,pszLogData) ) 

#define IResponse_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IResponse_End(This)	\
    ( (This)->lpVtbl -> End(This) ) 

#define IResponse_Flush(This)	\
    ( (This)->lpVtbl -> Flush(This) ) 

#define IResponse_Redirect(This,pszURL)	\
    ( (This)->lpVtbl -> Redirect(This,pszURL) ) 

#define IResponse_BinaryWrite(This,varData)	\
    ( (This)->lpVtbl -> BinaryWrite(This,varData) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IResponse_INTERFACE_DEFINED__ */


#ifndef __IServer_INTERFACE_DEFINED__
#define __IServer_INTERFACE_DEFINED__

/* interface IServer */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IServer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D97A6DA0-A867-11CF-83AE-01A0C90C2BD8")
    IServer : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_URLEncode( 
            /* [in] */ BSTR pszName,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MapPath( 
            /* [in] */ BSTR pszName,
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IServerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IServer * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IServer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IServer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IServer * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IServer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IServer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IServer * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_URLEncode )( 
            IServer * This,
            /* [in] */ BSTR pszName,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MapPath )( 
            IServer * This,
            /* [in] */ BSTR pszName,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IServerVtbl;

    interface IServer
    {
        CONST_VTBL struct IServerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IServer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IServer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IServer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IServer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IServer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IServer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IServer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IServer_get_URLEncode(This,pszName,pVal)	\
    ( (This)->lpVtbl -> get_URLEncode(This,pszName,pVal) ) 

#define IServer_get_MapPath(This,pszName,pVal)	\
    ( (This)->lpVtbl -> get_MapPath(This,pszName,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IServer_INTERFACE_DEFINED__ */



#ifndef __ASPLib_LIBRARY_DEFINED__
#define __ASPLib_LIBRARY_DEFINED__

/* library ASPLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_ASPLib;

EXTERN_C const CLSID CLSID_Request;

#ifdef __cplusplus

class DECLSPEC_UUID("920C25D0-25D9-11D0-A55F-00A0C90C2091")
Request;
#endif

EXTERN_C const CLSID CLSID_Response;

#ifdef __cplusplus

class DECLSPEC_UUID("46E19BA0-25DD-11D0-A55F-00A0C90C2091")
Response;
#endif

EXTERN_C const CLSID CLSID_Server;

#ifdef __cplusplus

class DECLSPEC_UUID("A506D160-25E0-11D0-A55F-00A0C90C2091")
Server;
#endif

EXTERN_C const CLSID CLSID_RequestDictionary;

#ifdef __cplusplus

class DECLSPEC_UUID("38999595-F9B2-11D2-9C53-00C04F681EE7")
RequestDictionary;
#endif

EXTERN_C const CLSID CLSID_RequestStrList;

#ifdef __cplusplus

class DECLSPEC_UUID("1C724F9B-FE6B-11D2-9C54-00C04F681EE7")
RequestStrList;
#endif
#endif /* __ASPLib_LIBRARY_DEFINED__ */

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


