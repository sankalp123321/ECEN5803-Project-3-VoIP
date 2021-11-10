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

// Only include once
#pragma once

#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 5.03.0286 */
/* at Sat Jan 27 18:08:29 2007
 */
/* Compiler settings for ..\propsys.idl:
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

#ifndef __propsys_h__
#define __propsys_h__

/* Forward Declarations */ 

#ifndef __IInitializeWithFile_FWD_DEFINED__
#define __IInitializeWithFile_FWD_DEFINED__
typedef interface IInitializeWithFile IInitializeWithFile;
#endif 	/* __IInitializeWithFile_FWD_DEFINED__ */


#ifndef __IInitializeWithStream_FWD_DEFINED__
#define __IInitializeWithStream_FWD_DEFINED__
typedef interface IInitializeWithStream IInitializeWithStream;
#endif 	/* __IInitializeWithStream_FWD_DEFINED__ */


#ifndef __IPropertyStore_FWD_DEFINED__
#define __IPropertyStore_FWD_DEFINED__
typedef interface IPropertyStore IPropertyStore;
#endif 	/* __IPropertyStore_FWD_DEFINED__ */


#ifndef __INamedPropertyStore_FWD_DEFINED__
#define __INamedPropertyStore_FWD_DEFINED__
typedef interface INamedPropertyStore INamedPropertyStore;
#endif 	/* __INamedPropertyStore_FWD_DEFINED__ */


#ifndef __IObjectWithPropertyKey_FWD_DEFINED__
#define __IObjectWithPropertyKey_FWD_DEFINED__
typedef interface IObjectWithPropertyKey IObjectWithPropertyKey;
#endif 	/* __IObjectWithPropertyKey_FWD_DEFINED__ */


#ifndef __IPropertyChange_FWD_DEFINED__
#define __IPropertyChange_FWD_DEFINED__
typedef interface IPropertyChange IPropertyChange;
#endif 	/* __IPropertyChange_FWD_DEFINED__ */


#ifndef __IPropertyChangeArray_FWD_DEFINED__
#define __IPropertyChangeArray_FWD_DEFINED__
typedef interface IPropertyChangeArray IPropertyChangeArray;
#endif 	/* __IPropertyChangeArray_FWD_DEFINED__ */


#ifndef __IPropertyStoreCapabilities_FWD_DEFINED__
#define __IPropertyStoreCapabilities_FWD_DEFINED__
typedef interface IPropertyStoreCapabilities IPropertyStoreCapabilities;
#endif 	/* __IPropertyStoreCapabilities_FWD_DEFINED__ */


#ifndef __IPropertyStoreCache_FWD_DEFINED__
#define __IPropertyStoreCache_FWD_DEFINED__
typedef interface IPropertyStoreCache IPropertyStoreCache;
#endif 	/* __IPropertyStoreCache_FWD_DEFINED__ */


#ifndef __IPropertyEnumType_FWD_DEFINED__
#define __IPropertyEnumType_FWD_DEFINED__
typedef interface IPropertyEnumType IPropertyEnumType;
#endif 	/* __IPropertyEnumType_FWD_DEFINED__ */


#ifndef __IPropertyEnumTypeList_FWD_DEFINED__
#define __IPropertyEnumTypeList_FWD_DEFINED__
typedef interface IPropertyEnumTypeList IPropertyEnumTypeList;
#endif 	/* __IPropertyEnumTypeList_FWD_DEFINED__ */


#ifndef __IPropertyDescription_FWD_DEFINED__
#define __IPropertyDescription_FWD_DEFINED__
typedef interface IPropertyDescription IPropertyDescription;
#endif 	/* __IPropertyDescription_FWD_DEFINED__ */


#ifndef __IPropertyDescriptionAliasInfo_FWD_DEFINED__
#define __IPropertyDescriptionAliasInfo_FWD_DEFINED__
typedef interface IPropertyDescriptionAliasInfo IPropertyDescriptionAliasInfo;
#endif 	/* __IPropertyDescriptionAliasInfo_FWD_DEFINED__ */


#ifndef __IPropertyDescriptionSearchInfo_FWD_DEFINED__
#define __IPropertyDescriptionSearchInfo_FWD_DEFINED__
typedef interface IPropertyDescriptionSearchInfo IPropertyDescriptionSearchInfo;
#endif 	/* __IPropertyDescriptionSearchInfo_FWD_DEFINED__ */


#ifndef __IPropertySystem_FWD_DEFINED__
#define __IPropertySystem_FWD_DEFINED__
typedef interface IPropertySystem IPropertySystem;
#endif 	/* __IPropertySystem_FWD_DEFINED__ */


#ifndef __IPropertyDescriptionList_FWD_DEFINED__
#define __IPropertyDescriptionList_FWD_DEFINED__
typedef interface IPropertyDescriptionList IPropertyDescriptionList;
#endif 	/* __IPropertyDescriptionList_FWD_DEFINED__ */


#ifndef __IPropertyStoreFactory_FWD_DEFINED__
#define __IPropertyStoreFactory_FWD_DEFINED__
typedef interface IPropertyStoreFactory IPropertyStoreFactory;
#endif 	/* __IPropertyStoreFactory_FWD_DEFINED__ */


#ifndef __IDelayedPropertyStoreFactory_FWD_DEFINED__
#define __IDelayedPropertyStoreFactory_FWD_DEFINED__
typedef interface IDelayedPropertyStoreFactory IDelayedPropertyStoreFactory;
#endif 	/* __IDelayedPropertyStoreFactory_FWD_DEFINED__ */


#ifndef __IPersistSerializedPropStorage_FWD_DEFINED__
#define __IPersistSerializedPropStorage_FWD_DEFINED__
typedef interface IPersistSerializedPropStorage IPersistSerializedPropStorage;
#endif 	/* __IPersistSerializedPropStorage_FWD_DEFINED__ */


#ifndef __IPropertySystemChangeNotify_FWD_DEFINED__
#define __IPropertySystemChangeNotify_FWD_DEFINED__
typedef interface IPropertySystemChangeNotify IPropertySystemChangeNotify;
#endif 	/* __IPropertySystemChangeNotify_FWD_DEFINED__ */


#ifndef __ICreateObject_FWD_DEFINED__
#define __ICreateObject_FWD_DEFINED__
typedef interface ICreateObject ICreateObject;
#endif 	/* __ICreateObject_FWD_DEFINED__ */


#ifndef __InMemoryPropertyStore_FWD_DEFINED__
#define __InMemoryPropertyStore_FWD_DEFINED__

#ifdef __cplusplus
typedef class InMemoryPropertyStore InMemoryPropertyStore;
#else
typedef struct InMemoryPropertyStore InMemoryPropertyStore;
#endif /* __cplusplus */

#endif 	/* __InMemoryPropertyStore_FWD_DEFINED__ */


#ifndef __PropertySystem_FWD_DEFINED__
#define __PropertySystem_FWD_DEFINED__

#ifdef __cplusplus
typedef class PropertySystem PropertySystem;
#else
typedef struct PropertySystem PropertySystem;
#endif /* __cplusplus */

#endif 	/* __PropertySystem_FWD_DEFINED__ */


/* header files for imported files */
#include "objidl.h"
#include "oleidl.h"
#include "ocidl.h"
#include "shtypes.h"
#include "structuredquery.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_propsys_0000 */
/* [local] */ 

#ifndef PSSTDAPI
#if defined(_PROPSYS_)
#define PSSTDAPI          STDAPI
#define PSSTDAPI_(type)   STDAPI_(type)
#else
#define PSSTDAPI          EXTERN_C DECLSPEC_IMPORT HRESULT STDAPICALLTYPE
#define PSSTDAPI_(type)   EXTERN_C DECLSPEC_IMPORT type STDAPICALLTYPE
#endif
#endif // PSSTDAPI
#ifdef __midl_proxy
#define __MIDL_CONST
#else
#define __MIDL_CONST const
#endif // #ifdef __midl_proxy
#if 0
typedef PROPERTYKEY __RPC_FAR *REFPROPERTYKEY;

#endif // 0
#include <propkeydef.h>


extern RPC_IF_HANDLE __MIDL_itf_propsys_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_propsys_0000_v0_0_s_ifspec;

#ifndef __IInitializeWithFile_INTERFACE_DEFINED__
#define __IInitializeWithFile_INTERFACE_DEFINED__

/* interface IInitializeWithFile */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IInitializeWithFile;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b7d14566-0509-4cce-a71f-0a554233bd9b")
    IInitializeWithFile : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [string][in] */ LPCWSTR pszFilePath,
            /* [in] */ DWORD grfMode) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IInitializeWithFileVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IInitializeWithFile __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IInitializeWithFile __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IInitializeWithFile __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Initialize )( 
            IInitializeWithFile __RPC_FAR * This,
            /* [string][in] */ LPCWSTR pszFilePath,
            /* [in] */ DWORD grfMode);
        
        END_INTERFACE
    } IInitializeWithFileVtbl;

    interface IInitializeWithFile
    {
        CONST_VTBL struct IInitializeWithFileVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInitializeWithFile_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IInitializeWithFile_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IInitializeWithFile_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IInitializeWithFile_Initialize(This,pszFilePath,grfMode)	\
    (This)->lpVtbl -> Initialize(This,pszFilePath,grfMode)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IInitializeWithFile_Initialize_Proxy( 
    IInitializeWithFile __RPC_FAR * This,
    /* [string][in] */ LPCWSTR pszFilePath,
    /* [in] */ DWORD grfMode);


void __RPC_STUB IInitializeWithFile_Initialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IInitializeWithFile_INTERFACE_DEFINED__ */


#ifndef __IInitializeWithStream_INTERFACE_DEFINED__
#define __IInitializeWithStream_INTERFACE_DEFINED__

/* interface IInitializeWithStream */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IInitializeWithStream;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b824b49d-22ac-4161-ac8a-9916e8fa3f7f")
    IInitializeWithStream : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ IStream __RPC_FAR *pstream,
            /* [in] */ DWORD grfMode) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IInitializeWithStreamVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IInitializeWithStream __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IInitializeWithStream __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IInitializeWithStream __RPC_FAR * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Initialize )( 
            IInitializeWithStream __RPC_FAR * This,
            /* [in] */ IStream __RPC_FAR *pstream,
            /* [in] */ DWORD grfMode);
        
        END_INTERFACE
    } IInitializeWithStreamVtbl;

    interface IInitializeWithStream
    {
        CONST_VTBL struct IInitializeWithStreamVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInitializeWithStream_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IInitializeWithStream_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IInitializeWithStream_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IInitializeWithStream_Initialize(This,pstream,grfMode)	\
    (This)->lpVtbl -> Initialize(This,pstream,grfMode)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [call_as] */ HRESULT STDMETHODCALLTYPE IInitializeWithStream_RemoteInitialize_Proxy( 
    IInitializeWithStream __RPC_FAR * This,
    /* [in] */ IStream __RPC_FAR *pstream,
    /* [in] */ DWORD grfMode);


void __RPC_STUB IInitializeWithStream_RemoteInitialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IInitializeWithStream_INTERFACE_DEFINED__ */


#ifndef __IPropertyStore_INTERFACE_DEFINED__
#define __IPropertyStore_INTERFACE_DEFINED__

/* interface IPropertyStore */
/* [unique][object][helpstring][uuid] */ 


EXTERN_C const IID IID_IPropertyStore;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("886d8eeb-8cf2-4446-8d02-cdba1dbdcf99")
    IPropertyStore : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCount( 
            /* [out] */ DWORD __RPC_FAR *cProps) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAt( 
            /* [in] */ DWORD iProp,
            /* [out] */ PROPERTYKEY __RPC_FAR *pkey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetValue( 
            /* [in] */ REFPROPERTYKEY key,
            /* [out] */ PROPVARIANT __RPC_FAR *pv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetValue( 
            /* [in] */ REFPROPERTYKEY key,
            /* [in] */ REFPROPVARIANT propvar) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Commit( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPropertyStoreVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IPropertyStore __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IPropertyStore __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IPropertyStore __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCount )( 
            IPropertyStore __RPC_FAR * This,
            /* [out] */ DWORD __RPC_FAR *cProps);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetAt )( 
            IPropertyStore __RPC_FAR * This,
            /* [in] */ DWORD iProp,
            /* [out] */ PROPERTYKEY __RPC_FAR *pkey);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetValue )( 
            IPropertyStore __RPC_FAR * This,
            /* [in] */ REFPROPERTYKEY key,
            /* [out] */ PROPVARIANT __RPC_FAR *pv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetValue )( 
            IPropertyStore __RPC_FAR * This,
            /* [in] */ REFPROPERTYKEY key,
            /* [in] */ REFPROPVARIANT propvar);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Commit )( 
            IPropertyStore __RPC_FAR * This);
        
        END_INTERFACE
    } IPropertyStoreVtbl;

    interface IPropertyStore
    {
        CONST_VTBL struct IPropertyStoreVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertyStore_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPropertyStore_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPropertyStore_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IPropertyStore_GetCount(This,cProps)	\
    (This)->lpVtbl -> GetCount(This,cProps)

#define IPropertyStore_GetAt(This,iProp,pkey)	\
    (This)->lpVtbl -> GetAt(This,iProp,pkey)

#define IPropertyStore_GetValue(This,key,pv)	\
    (This)->lpVtbl -> GetValue(This,key,pv)

#define IPropertyStore_SetValue(This,key,propvar)	\
    (This)->lpVtbl -> SetValue(This,key,propvar)

#define IPropertyStore_Commit(This)	\
    (This)->lpVtbl -> Commit(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IPropertyStore_GetCount_Proxy( 
    IPropertyStore __RPC_FAR * This,
    /* [out] */ DWORD __RPC_FAR *cProps);


void __RPC_STUB IPropertyStore_GetCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyStore_GetAt_Proxy( 
    IPropertyStore __RPC_FAR * This,
    /* [in] */ DWORD iProp,
    /* [out] */ PROPERTYKEY __RPC_FAR *pkey);


void __RPC_STUB IPropertyStore_GetAt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyStore_GetValue_Proxy( 
    IPropertyStore __RPC_FAR * This,
    /* [in] */ REFPROPERTYKEY key,
    /* [out] */ PROPVARIANT __RPC_FAR *pv);


void __RPC_STUB IPropertyStore_GetValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyStore_SetValue_Proxy( 
    IPropertyStore __RPC_FAR * This,
    /* [in] */ REFPROPERTYKEY key,
    /* [in] */ REFPROPVARIANT propvar);


void __RPC_STUB IPropertyStore_SetValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyStore_Commit_Proxy( 
    IPropertyStore __RPC_FAR * This);


void __RPC_STUB IPropertyStore_Commit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IPropertyStore_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_propsys_0173 */
/* [local] */ 

typedef /* [unique] */ IPropertyStore __RPC_FAR *LPPROPERTYSTORE;



extern RPC_IF_HANDLE __MIDL_itf_propsys_0173_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_propsys_0173_v0_0_s_ifspec;

#ifndef __INamedPropertyStore_INTERFACE_DEFINED__
#define __INamedPropertyStore_INTERFACE_DEFINED__

/* interface INamedPropertyStore */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_INamedPropertyStore;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("71604b0f-97b0-4764-8577-2f13e98a1422")
    INamedPropertyStore : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetNamedValue( 
            /* [string][in] */ LPCWSTR pszName,
            /* [out] */ PROPVARIANT __RPC_FAR *ppropvar) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetNamedValue( 
            /* [string][in] */ LPCWSTR pszName,
            /* [in] */ REFPROPVARIANT propvar) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNameCount( 
            /* [out] */ DWORD __RPC_FAR *pdwCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNameAt( 
            /* [in] */ DWORD iProp,
            /* [out] */ BSTR __RPC_FAR *pbstrName) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct INamedPropertyStoreVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            INamedPropertyStore __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            INamedPropertyStore __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            INamedPropertyStore __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetNamedValue )( 
            INamedPropertyStore __RPC_FAR * This,
            /* [string][in] */ LPCWSTR pszName,
            /* [out] */ PROPVARIANT __RPC_FAR *ppropvar);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetNamedValue )( 
            INamedPropertyStore __RPC_FAR * This,
            /* [string][in] */ LPCWSTR pszName,
            /* [in] */ REFPROPVARIANT propvar);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetNameCount )( 
            INamedPropertyStore __RPC_FAR * This,
            /* [out] */ DWORD __RPC_FAR *pdwCount);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetNameAt )( 
            INamedPropertyStore __RPC_FAR * This,
            /* [in] */ DWORD iProp,
            /* [out] */ BSTR __RPC_FAR *pbstrName);
        
        END_INTERFACE
    } INamedPropertyStoreVtbl;

    interface INamedPropertyStore
    {
        CONST_VTBL struct INamedPropertyStoreVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INamedPropertyStore_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define INamedPropertyStore_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define INamedPropertyStore_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define INamedPropertyStore_GetNamedValue(This,pszName,ppropvar)	\
    (This)->lpVtbl -> GetNamedValue(This,pszName,ppropvar)

#define INamedPropertyStore_SetNamedValue(This,pszName,propvar)	\
    (This)->lpVtbl -> SetNamedValue(This,pszName,propvar)

#define INamedPropertyStore_GetNameCount(This,pdwCount)	\
    (This)->lpVtbl -> GetNameCount(This,pdwCount)

#define INamedPropertyStore_GetNameAt(This,iProp,pbstrName)	\
    (This)->lpVtbl -> GetNameAt(This,iProp,pbstrName)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE INamedPropertyStore_GetNamedValue_Proxy( 
    INamedPropertyStore __RPC_FAR * This,
    /* [string][in] */ LPCWSTR pszName,
    /* [out] */ PROPVARIANT __RPC_FAR *ppropvar);


void __RPC_STUB INamedPropertyStore_GetNamedValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE INamedPropertyStore_SetNamedValue_Proxy( 
    INamedPropertyStore __RPC_FAR * This,
    /* [string][in] */ LPCWSTR pszName,
    /* [in] */ REFPROPVARIANT propvar);


void __RPC_STUB INamedPropertyStore_SetNamedValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE INamedPropertyStore_GetNameCount_Proxy( 
    INamedPropertyStore __RPC_FAR * This,
    /* [out] */ DWORD __RPC_FAR *pdwCount);


void __RPC_STUB INamedPropertyStore_GetNameCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE INamedPropertyStore_GetNameAt_Proxy( 
    INamedPropertyStore __RPC_FAR * This,
    /* [in] */ DWORD iProp,
    /* [out] */ BSTR __RPC_FAR *pbstrName);


void __RPC_STUB INamedPropertyStore_GetNameAt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __INamedPropertyStore_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_propsys_0174 */
/* [local] */ 

/* [v1_enum] */ 
enum tagGETPROPERTYSTOREFLAGS
    {	GPS_DEFAULT	= 0,
	GPS_HANDLERPROPERTIESONLY	= 0x1,
	GPS_READWRITE	= 0x2,
	GPS_TEMPORARY	= 0x4,
	GPS_FASTPROPERTIESONLY	= 0x8,
	GPS_OPENSLOWITEM	= 0x10,
	GPS_DELAYCREATION	= 0x20,
	GPS_BESTEFFORT	= 0x40,
	GPS_MASK_VALID	= 0x7f
    };
typedef int GETPROPERTYSTOREFLAGS;



extern RPC_IF_HANDLE __MIDL_itf_propsys_0174_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_propsys_0174_v0_0_s_ifspec;

#ifndef __IObjectWithPropertyKey_INTERFACE_DEFINED__
#define __IObjectWithPropertyKey_INTERFACE_DEFINED__

/* interface IObjectWithPropertyKey */
/* [uuid][object] */ 


EXTERN_C const IID IID_IObjectWithPropertyKey;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fc0ca0a7-c316-4fd2-9031-3e628e6d4f23")
    IObjectWithPropertyKey : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetPropertyKey( 
            /* [in] */ REFPROPERTYKEY key) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyKey( 
            /* [out] */ PROPERTYKEY __RPC_FAR *pkey) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IObjectWithPropertyKeyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IObjectWithPropertyKey __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IObjectWithPropertyKey __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IObjectWithPropertyKey __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetPropertyKey )( 
            IObjectWithPropertyKey __RPC_FAR * This,
            /* [in] */ REFPROPERTYKEY key);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPropertyKey )( 
            IObjectWithPropertyKey __RPC_FAR * This,
            /* [out] */ PROPERTYKEY __RPC_FAR *pkey);
        
        END_INTERFACE
    } IObjectWithPropertyKeyVtbl;

    interface IObjectWithPropertyKey
    {
        CONST_VTBL struct IObjectWithPropertyKeyVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObjectWithPropertyKey_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IObjectWithPropertyKey_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IObjectWithPropertyKey_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IObjectWithPropertyKey_SetPropertyKey(This,key)	\
    (This)->lpVtbl -> SetPropertyKey(This,key)

#define IObjectWithPropertyKey_GetPropertyKey(This,pkey)	\
    (This)->lpVtbl -> GetPropertyKey(This,pkey)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IObjectWithPropertyKey_SetPropertyKey_Proxy( 
    IObjectWithPropertyKey __RPC_FAR * This,
    /* [in] */ REFPROPERTYKEY key);


void __RPC_STUB IObjectWithPropertyKey_SetPropertyKey_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IObjectWithPropertyKey_GetPropertyKey_Proxy( 
    IObjectWithPropertyKey __RPC_FAR * This,
    /* [out] */ PROPERTYKEY __RPC_FAR *pkey);


void __RPC_STUB IObjectWithPropertyKey_GetPropertyKey_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IObjectWithPropertyKey_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_propsys_0175 */
/* [local] */ 

typedef /* [v1_enum] */ 
enum tagPKA_FLAGS
    {	PKA_SET	= 0,
	PKA_APPEND	= PKA_SET + 1,
	PKA_DELETE	= PKA_APPEND + 1
    }	PKA_FLAGS;



extern RPC_IF_HANDLE __MIDL_itf_propsys_0175_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_propsys_0175_v0_0_s_ifspec;

#ifndef __IPropertyChange_INTERFACE_DEFINED__
#define __IPropertyChange_INTERFACE_DEFINED__

/* interface IPropertyChange */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IPropertyChange;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f917bc8a-1bba-4478-a245-1bde03eb9431")
    IPropertyChange : public IObjectWithPropertyKey
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ApplyToPropVariant( 
            /* [in] */ REFPROPVARIANT propvarIn,
            /* [out] */ PROPVARIANT __RPC_FAR *ppropvarOut) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPropertyChangeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IPropertyChange __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IPropertyChange __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IPropertyChange __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetPropertyKey )( 
            IPropertyChange __RPC_FAR * This,
            /* [in] */ REFPROPERTYKEY key);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPropertyKey )( 
            IPropertyChange __RPC_FAR * This,
            /* [out] */ PROPERTYKEY __RPC_FAR *pkey);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ApplyToPropVariant )( 
            IPropertyChange __RPC_FAR * This,
            /* [in] */ REFPROPVARIANT propvarIn,
            /* [out] */ PROPVARIANT __RPC_FAR *ppropvarOut);
        
        END_INTERFACE
    } IPropertyChangeVtbl;

    interface IPropertyChange
    {
        CONST_VTBL struct IPropertyChangeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertyChange_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPropertyChange_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPropertyChange_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IPropertyChange_SetPropertyKey(This,key)	\
    (This)->lpVtbl -> SetPropertyKey(This,key)

#define IPropertyChange_GetPropertyKey(This,pkey)	\
    (This)->lpVtbl -> GetPropertyKey(This,pkey)


#define IPropertyChange_ApplyToPropVariant(This,propvarIn,ppropvarOut)	\
    (This)->lpVtbl -> ApplyToPropVariant(This,propvarIn,ppropvarOut)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IPropertyChange_ApplyToPropVariant_Proxy( 
    IPropertyChange __RPC_FAR * This,
    /* [in] */ REFPROPVARIANT propvarIn,
    /* [out] */ PROPVARIANT __RPC_FAR *ppropvarOut);


void __RPC_STUB IPropertyChange_ApplyToPropVariant_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IPropertyChange_INTERFACE_DEFINED__ */


#ifndef __IPropertyChangeArray_INTERFACE_DEFINED__
#define __IPropertyChangeArray_INTERFACE_DEFINED__

/* interface IPropertyChangeArray */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IPropertyChangeArray;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("380f5cad-1b5e-42f2-805d-637fd392d31e")
    IPropertyChangeArray : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCount( 
            /* [out] */ UINT __RPC_FAR *pcOperations) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAt( 
            /* [in] */ UINT iIndex,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InsertAt( 
            /* [in] */ UINT iIndex,
            /* [in] */ IPropertyChange __RPC_FAR *ppropChange) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ IPropertyChange __RPC_FAR *ppropChange) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AppendOrReplace( 
            /* [in] */ IPropertyChange __RPC_FAR *ppropChange) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveAt( 
            /* [in] */ UINT iIndex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsKeyInArray( 
            /* [in] */ REFPROPERTYKEY key) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPropertyChangeArrayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IPropertyChangeArray __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IPropertyChangeArray __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IPropertyChangeArray __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCount )( 
            IPropertyChangeArray __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pcOperations);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetAt )( 
            IPropertyChangeArray __RPC_FAR * This,
            /* [in] */ UINT iIndex,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InsertAt )( 
            IPropertyChangeArray __RPC_FAR * This,
            /* [in] */ UINT iIndex,
            /* [in] */ IPropertyChange __RPC_FAR *ppropChange);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Append )( 
            IPropertyChangeArray __RPC_FAR * This,
            /* [in] */ IPropertyChange __RPC_FAR *ppropChange);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AppendOrReplace )( 
            IPropertyChangeArray __RPC_FAR * This,
            /* [in] */ IPropertyChange __RPC_FAR *ppropChange);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RemoveAt )( 
            IPropertyChangeArray __RPC_FAR * This,
            /* [in] */ UINT iIndex);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsKeyInArray )( 
            IPropertyChangeArray __RPC_FAR * This,
            /* [in] */ REFPROPERTYKEY key);
        
        END_INTERFACE
    } IPropertyChangeArrayVtbl;

    interface IPropertyChangeArray
    {
        CONST_VTBL struct IPropertyChangeArrayVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertyChangeArray_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPropertyChangeArray_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPropertyChangeArray_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IPropertyChangeArray_GetCount(This,pcOperations)	\
    (This)->lpVtbl -> GetCount(This,pcOperations)

#define IPropertyChangeArray_GetAt(This,iIndex,riid,ppv)	\
    (This)->lpVtbl -> GetAt(This,iIndex,riid,ppv)

#define IPropertyChangeArray_InsertAt(This,iIndex,ppropChange)	\
    (This)->lpVtbl -> InsertAt(This,iIndex,ppropChange)

#define IPropertyChangeArray_Append(This,ppropChange)	\
    (This)->lpVtbl -> Append(This,ppropChange)

#define IPropertyChangeArray_AppendOrReplace(This,ppropChange)	\
    (This)->lpVtbl -> AppendOrReplace(This,ppropChange)

#define IPropertyChangeArray_RemoveAt(This,iIndex)	\
    (This)->lpVtbl -> RemoveAt(This,iIndex)

#define IPropertyChangeArray_IsKeyInArray(This,key)	\
    (This)->lpVtbl -> IsKeyInArray(This,key)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IPropertyChangeArray_GetCount_Proxy( 
    IPropertyChangeArray __RPC_FAR * This,
    /* [out] */ UINT __RPC_FAR *pcOperations);


void __RPC_STUB IPropertyChangeArray_GetCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyChangeArray_GetAt_Proxy( 
    IPropertyChangeArray __RPC_FAR * This,
    /* [in] */ UINT iIndex,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IPropertyChangeArray_GetAt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyChangeArray_InsertAt_Proxy( 
    IPropertyChangeArray __RPC_FAR * This,
    /* [in] */ UINT iIndex,
    /* [in] */ IPropertyChange __RPC_FAR *ppropChange);


void __RPC_STUB IPropertyChangeArray_InsertAt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyChangeArray_Append_Proxy( 
    IPropertyChangeArray __RPC_FAR * This,
    /* [in] */ IPropertyChange __RPC_FAR *ppropChange);


void __RPC_STUB IPropertyChangeArray_Append_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyChangeArray_AppendOrReplace_Proxy( 
    IPropertyChangeArray __RPC_FAR * This,
    /* [in] */ IPropertyChange __RPC_FAR *ppropChange);


void __RPC_STUB IPropertyChangeArray_AppendOrReplace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyChangeArray_RemoveAt_Proxy( 
    IPropertyChangeArray __RPC_FAR * This,
    /* [in] */ UINT iIndex);


void __RPC_STUB IPropertyChangeArray_RemoveAt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyChangeArray_IsKeyInArray_Proxy( 
    IPropertyChangeArray __RPC_FAR * This,
    /* [in] */ REFPROPERTYKEY key);


void __RPC_STUB IPropertyChangeArray_IsKeyInArray_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IPropertyChangeArray_INTERFACE_DEFINED__ */


#ifndef __IPropertyStoreCapabilities_INTERFACE_DEFINED__
#define __IPropertyStoreCapabilities_INTERFACE_DEFINED__

/* interface IPropertyStoreCapabilities */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IPropertyStoreCapabilities;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c8e2d566-186e-4d49-bf41-6909ead56acc")
    IPropertyStoreCapabilities : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE IsPropertyWritable( 
            /* [in] */ REFPROPERTYKEY key) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPropertyStoreCapabilitiesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IPropertyStoreCapabilities __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IPropertyStoreCapabilities __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IPropertyStoreCapabilities __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsPropertyWritable )( 
            IPropertyStoreCapabilities __RPC_FAR * This,
            /* [in] */ REFPROPERTYKEY key);
        
        END_INTERFACE
    } IPropertyStoreCapabilitiesVtbl;

    interface IPropertyStoreCapabilities
    {
        CONST_VTBL struct IPropertyStoreCapabilitiesVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertyStoreCapabilities_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPropertyStoreCapabilities_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPropertyStoreCapabilities_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IPropertyStoreCapabilities_IsPropertyWritable(This,key)	\
    (This)->lpVtbl -> IsPropertyWritable(This,key)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IPropertyStoreCapabilities_IsPropertyWritable_Proxy( 
    IPropertyStoreCapabilities __RPC_FAR * This,
    /* [in] */ REFPROPERTYKEY key);


void __RPC_STUB IPropertyStoreCapabilities_IsPropertyWritable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IPropertyStoreCapabilities_INTERFACE_DEFINED__ */


#ifndef __IPropertyStoreCache_INTERFACE_DEFINED__
#define __IPropertyStoreCache_INTERFACE_DEFINED__

/* interface IPropertyStoreCache */
/* [unique][object][uuid] */ 

typedef /* [v1_enum] */ 
enum _PSC_STATE
    {	PSC_NORMAL	= 0,
	PSC_NOTINSOURCE	= 1,
	PSC_DIRTY	= 2,
	PSC_READONLY	= 3
    }	PSC_STATE;


EXTERN_C const IID IID_IPropertyStoreCache;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3017056d-9a91-4e90-937d-746c72abbf4f")
    IPropertyStoreCache : public IPropertyStore
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetState( 
            /* [in] */ REFPROPERTYKEY key,
            /* [out] */ PSC_STATE __RPC_FAR *pstate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetValueAndState( 
            /* [in] */ REFPROPERTYKEY key,
            /* [out] */ PROPVARIANT __RPC_FAR *ppropvar,
            /* [out] */ PSC_STATE __RPC_FAR *pstate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetState( 
            /* [in] */ REFPROPERTYKEY key,
            /* [in] */ PSC_STATE state) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetValueAndState( 
            /* [in] */ REFPROPERTYKEY key,
            /* [unique][in] */ const PROPVARIANT __RPC_FAR *ppropvar,
            /* [in] */ PSC_STATE state) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPropertyStoreCacheVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IPropertyStoreCache __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IPropertyStoreCache __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IPropertyStoreCache __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCount )( 
            IPropertyStoreCache __RPC_FAR * This,
            /* [out] */ DWORD __RPC_FAR *cProps);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetAt )( 
            IPropertyStoreCache __RPC_FAR * This,
            /* [in] */ DWORD iProp,
            /* [out] */ PROPERTYKEY __RPC_FAR *pkey);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetValue )( 
            IPropertyStoreCache __RPC_FAR * This,
            /* [in] */ REFPROPERTYKEY key,
            /* [out] */ PROPVARIANT __RPC_FAR *pv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetValue )( 
            IPropertyStoreCache __RPC_FAR * This,
            /* [in] */ REFPROPERTYKEY key,
            /* [in] */ REFPROPVARIANT propvar);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Commit )( 
            IPropertyStoreCache __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetState )( 
            IPropertyStoreCache __RPC_FAR * This,
            /* [in] */ REFPROPERTYKEY key,
            /* [out] */ PSC_STATE __RPC_FAR *pstate);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetValueAndState )( 
            IPropertyStoreCache __RPC_FAR * This,
            /* [in] */ REFPROPERTYKEY key,
            /* [out] */ PROPVARIANT __RPC_FAR *ppropvar,
            /* [out] */ PSC_STATE __RPC_FAR *pstate);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetState )( 
            IPropertyStoreCache __RPC_FAR * This,
            /* [in] */ REFPROPERTYKEY key,
            /* [in] */ PSC_STATE state);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetValueAndState )( 
            IPropertyStoreCache __RPC_FAR * This,
            /* [in] */ REFPROPERTYKEY key,
            /* [unique][in] */ const PROPVARIANT __RPC_FAR *ppropvar,
            /* [in] */ PSC_STATE state);
        
        END_INTERFACE
    } IPropertyStoreCacheVtbl;

    interface IPropertyStoreCache
    {
        CONST_VTBL struct IPropertyStoreCacheVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertyStoreCache_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPropertyStoreCache_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPropertyStoreCache_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IPropertyStoreCache_GetCount(This,cProps)	\
    (This)->lpVtbl -> GetCount(This,cProps)

#define IPropertyStoreCache_GetAt(This,iProp,pkey)	\
    (This)->lpVtbl -> GetAt(This,iProp,pkey)

#define IPropertyStoreCache_GetValue(This,key,pv)	\
    (This)->lpVtbl -> GetValue(This,key,pv)

#define IPropertyStoreCache_SetValue(This,key,propvar)	\
    (This)->lpVtbl -> SetValue(This,key,propvar)

#define IPropertyStoreCache_Commit(This)	\
    (This)->lpVtbl -> Commit(This)


#define IPropertyStoreCache_GetState(This,key,pstate)	\
    (This)->lpVtbl -> GetState(This,key,pstate)

#define IPropertyStoreCache_GetValueAndState(This,key,ppropvar,pstate)	\
    (This)->lpVtbl -> GetValueAndState(This,key,ppropvar,pstate)

#define IPropertyStoreCache_SetState(This,key,state)	\
    (This)->lpVtbl -> SetState(This,key,state)

#define IPropertyStoreCache_SetValueAndState(This,key,ppropvar,state)	\
    (This)->lpVtbl -> SetValueAndState(This,key,ppropvar,state)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IPropertyStoreCache_GetState_Proxy( 
    IPropertyStoreCache __RPC_FAR * This,
    /* [in] */ REFPROPERTYKEY key,
    /* [out] */ PSC_STATE __RPC_FAR *pstate);


void __RPC_STUB IPropertyStoreCache_GetState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyStoreCache_GetValueAndState_Proxy( 
    IPropertyStoreCache __RPC_FAR * This,
    /* [in] */ REFPROPERTYKEY key,
    /* [out] */ PROPVARIANT __RPC_FAR *ppropvar,
    /* [out] */ PSC_STATE __RPC_FAR *pstate);


void __RPC_STUB IPropertyStoreCache_GetValueAndState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyStoreCache_SetState_Proxy( 
    IPropertyStoreCache __RPC_FAR * This,
    /* [in] */ REFPROPERTYKEY key,
    /* [in] */ PSC_STATE state);


void __RPC_STUB IPropertyStoreCache_SetState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyStoreCache_SetValueAndState_Proxy( 
    IPropertyStoreCache __RPC_FAR * This,
    /* [in] */ REFPROPERTYKEY key,
    /* [unique][in] */ const PROPVARIANT __RPC_FAR *ppropvar,
    /* [in] */ PSC_STATE state);


void __RPC_STUB IPropertyStoreCache_SetValueAndState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IPropertyStoreCache_INTERFACE_DEFINED__ */


#ifndef __IPropertyEnumType_INTERFACE_DEFINED__
#define __IPropertyEnumType_INTERFACE_DEFINED__

/* interface IPropertyEnumType */
/* [unique][object][uuid] */ 

/* [v1_enum] */ 
enum tagPROPENUMTYPE
    {	PET_DISCRETEVALUE	= 0,
	PET_RANGEDVALUE	= 1,
	PET_DEFAULTVALUE	= 2,
	PET_ENDRANGE	= 3
    };
typedef enum tagPROPENUMTYPE PROPENUMTYPE;


EXTERN_C const IID IID_IPropertyEnumType;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("11e1fbf9-2d56-4a6b-8db3-7cd193a471f2")
    IPropertyEnumType : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetEnumType( 
            /* [out] */ PROPENUMTYPE __RPC_FAR *penumtype) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetValue( 
            /* [out] */ PROPVARIANT __RPC_FAR *ppropvar) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRangeMinValue( 
            /* [out] */ PROPVARIANT __RPC_FAR *ppropvarMin) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRangeSetValue( 
            /* [out] */ PROPVARIANT __RPC_FAR *ppropvarSet) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDisplayText( 
            /* [out] */ LPWSTR __RPC_FAR *ppszDisplay) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPropertyEnumTypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IPropertyEnumType __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IPropertyEnumType __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IPropertyEnumType __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetEnumType )( 
            IPropertyEnumType __RPC_FAR * This,
            /* [out] */ PROPENUMTYPE __RPC_FAR *penumtype);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetValue )( 
            IPropertyEnumType __RPC_FAR * This,
            /* [out] */ PROPVARIANT __RPC_FAR *ppropvar);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetRangeMinValue )( 
            IPropertyEnumType __RPC_FAR * This,
            /* [out] */ PROPVARIANT __RPC_FAR *ppropvarMin);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetRangeSetValue )( 
            IPropertyEnumType __RPC_FAR * This,
            /* [out] */ PROPVARIANT __RPC_FAR *ppropvarSet);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetDisplayText )( 
            IPropertyEnumType __RPC_FAR * This,
            /* [out] */ LPWSTR __RPC_FAR *ppszDisplay);
        
        END_INTERFACE
    } IPropertyEnumTypeVtbl;

    interface IPropertyEnumType
    {
        CONST_VTBL struct IPropertyEnumTypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertyEnumType_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPropertyEnumType_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPropertyEnumType_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IPropertyEnumType_GetEnumType(This,penumtype)	\
    (This)->lpVtbl -> GetEnumType(This,penumtype)

#define IPropertyEnumType_GetValue(This,ppropvar)	\
    (This)->lpVtbl -> GetValue(This,ppropvar)

#define IPropertyEnumType_GetRangeMinValue(This,ppropvarMin)	\
    (This)->lpVtbl -> GetRangeMinValue(This,ppropvarMin)

#define IPropertyEnumType_GetRangeSetValue(This,ppropvarSet)	\
    (This)->lpVtbl -> GetRangeSetValue(This,ppropvarSet)

#define IPropertyEnumType_GetDisplayText(This,ppszDisplay)	\
    (This)->lpVtbl -> GetDisplayText(This,ppszDisplay)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IPropertyEnumType_GetEnumType_Proxy( 
    IPropertyEnumType __RPC_FAR * This,
    /* [out] */ PROPENUMTYPE __RPC_FAR *penumtype);


void __RPC_STUB IPropertyEnumType_GetEnumType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyEnumType_GetValue_Proxy( 
    IPropertyEnumType __RPC_FAR * This,
    /* [out] */ PROPVARIANT __RPC_FAR *ppropvar);


void __RPC_STUB IPropertyEnumType_GetValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyEnumType_GetRangeMinValue_Proxy( 
    IPropertyEnumType __RPC_FAR * This,
    /* [out] */ PROPVARIANT __RPC_FAR *ppropvarMin);


void __RPC_STUB IPropertyEnumType_GetRangeMinValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyEnumType_GetRangeSetValue_Proxy( 
    IPropertyEnumType __RPC_FAR * This,
    /* [out] */ PROPVARIANT __RPC_FAR *ppropvarSet);


void __RPC_STUB IPropertyEnumType_GetRangeSetValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyEnumType_GetDisplayText_Proxy( 
    IPropertyEnumType __RPC_FAR * This,
    /* [out] */ LPWSTR __RPC_FAR *ppszDisplay);


void __RPC_STUB IPropertyEnumType_GetDisplayText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IPropertyEnumType_INTERFACE_DEFINED__ */


#ifndef __IPropertyEnumTypeList_INTERFACE_DEFINED__
#define __IPropertyEnumTypeList_INTERFACE_DEFINED__

/* interface IPropertyEnumTypeList */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IPropertyEnumTypeList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a99400f4-3d84-4557-94ba-1242fb2cc9a6")
    IPropertyEnumTypeList : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCount( 
            /* [out] */ UINT __RPC_FAR *pctypes) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAt( 
            /* [in] */ UINT itype,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetConditionAt( 
            /* [in] */ UINT nIndex,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindMatchingIndex( 
            /* [in] */ REFPROPVARIANT propvarCmp,
            /* [out] */ UINT __RPC_FAR *pnIndex) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPropertyEnumTypeListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IPropertyEnumTypeList __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IPropertyEnumTypeList __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IPropertyEnumTypeList __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCount )( 
            IPropertyEnumTypeList __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctypes);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetAt )( 
            IPropertyEnumTypeList __RPC_FAR * This,
            /* [in] */ UINT itype,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetConditionAt )( 
            IPropertyEnumTypeList __RPC_FAR * This,
            /* [in] */ UINT nIndex,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FindMatchingIndex )( 
            IPropertyEnumTypeList __RPC_FAR * This,
            /* [in] */ REFPROPVARIANT propvarCmp,
            /* [out] */ UINT __RPC_FAR *pnIndex);
        
        END_INTERFACE
    } IPropertyEnumTypeListVtbl;

    interface IPropertyEnumTypeList
    {
        CONST_VTBL struct IPropertyEnumTypeListVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertyEnumTypeList_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPropertyEnumTypeList_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPropertyEnumTypeList_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IPropertyEnumTypeList_GetCount(This,pctypes)	\
    (This)->lpVtbl -> GetCount(This,pctypes)

#define IPropertyEnumTypeList_GetAt(This,itype,riid,ppv)	\
    (This)->lpVtbl -> GetAt(This,itype,riid,ppv)

#define IPropertyEnumTypeList_GetConditionAt(This,nIndex,riid,ppv)	\
    (This)->lpVtbl -> GetConditionAt(This,nIndex,riid,ppv)

#define IPropertyEnumTypeList_FindMatchingIndex(This,propvarCmp,pnIndex)	\
    (This)->lpVtbl -> FindMatchingIndex(This,propvarCmp,pnIndex)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IPropertyEnumTypeList_GetCount_Proxy( 
    IPropertyEnumTypeList __RPC_FAR * This,
    /* [out] */ UINT __RPC_FAR *pctypes);


void __RPC_STUB IPropertyEnumTypeList_GetCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyEnumTypeList_GetAt_Proxy( 
    IPropertyEnumTypeList __RPC_FAR * This,
    /* [in] */ UINT itype,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IPropertyEnumTypeList_GetAt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyEnumTypeList_GetConditionAt_Proxy( 
    IPropertyEnumTypeList __RPC_FAR * This,
    /* [in] */ UINT nIndex,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IPropertyEnumTypeList_GetConditionAt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyEnumTypeList_FindMatchingIndex_Proxy( 
    IPropertyEnumTypeList __RPC_FAR * This,
    /* [in] */ REFPROPVARIANT propvarCmp,
    /* [out] */ UINT __RPC_FAR *pnIndex);


void __RPC_STUB IPropertyEnumTypeList_FindMatchingIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IPropertyEnumTypeList_INTERFACE_DEFINED__ */


#ifndef __IPropertyDescription_INTERFACE_DEFINED__
#define __IPropertyDescription_INTERFACE_DEFINED__

/* interface IPropertyDescription */
/* [unique][object][uuid] */ 

/* [v1_enum] */ 
enum tagPROPDESC_TYPE_FLAGS
    {	PDTF_DEFAULT	= 0,
	PDTF_MULTIPLEVALUES	= 0x1,
	PDTF_ISINNATE	= 0x2,
	PDTF_ISGROUP	= 0x4,
	PDTF_CANGROUPBY	= 0x8,
	PDTF_CANSTACKBY	= 0x10,
	PDTF_ISTREEPROPERTY	= 0x20,
	PDTF_INCLUDEINFULLTEXTQUERY	= 0x40,
	PDTF_ISVIEWABLE	= 0x80,
	PDTF_ISQUERYABLE	= 0x100,
	PDTF_ISSYSTEMPROPERTY	= 0x80000000,
	PDTF_MASK_ALL	= 0x800001ff
    };
typedef int PROPDESC_TYPE_FLAGS;

/* [v1_enum] */ 
enum tagPROPDESC_VIEW_FLAGS
    {	PDVF_DEFAULT	= 0,
	PDVF_CENTERALIGN	= 0x1,
	PDVF_RIGHTALIGN	= 0x2,
	PDVF_BEGINNEWGROUP	= 0x4,
	PDVF_FILLAREA	= 0x8,
	PDVF_SORTDESCENDING	= 0x10,
	PDVF_SHOWONLYIFPRESENT	= 0x20,
	PDVF_SHOWBYDEFAULT	= 0x40,
	PDVF_SHOWINPRIMARYLIST	= 0x80,
	PDVF_SHOWINSECONDARYLIST	= 0x100,
	PDVF_HIDELABEL	= 0x200,
	PDVF_HIDDEN	= 0x800,
	PDVF_CANWRAP	= 0x1000,
	PDVF_MASK_ALL	= 0x1bff
    };
typedef int PROPDESC_VIEW_FLAGS;

/* [v1_enum] */ 
enum tagPROPDESC_DISPLAYTYPE
    {	PDDT_STRING	= 0,
	PDDT_NUMBER	= 1,
	PDDT_BOOLEAN	= 2,
	PDDT_DATETIME	= 3,
	PDDT_ENUMERATED	= 4
    };
typedef enum tagPROPDESC_DISPLAYTYPE PROPDESC_DISPLAYTYPE;

/* [v1_enum] */ 
enum tagPROPDESC_GROUPING_RANGE
    {	PDGR_DISCRETE	= 0,
	PDGR_ALPHANUMERIC	= 1,
	PDGR_SIZE	= 2,
	PDGR_DYNAMIC	= 3,
	PDGR_DATE	= 4,
	PDGR_PERCENT	= 5,
	PDGR_ENUMERATED	= 6
    };
typedef enum tagPROPDESC_GROUPING_RANGE PROPDESC_GROUPING_RANGE;

/* [v1_enum] */ 
enum tagPROPDESC_FORMAT_FLAGS
    {	PDFF_DEFAULT	= 0,
	PDFF_PREFIXNAME	= 0x1,
	PDFF_FILENAME	= 0x2,
	PDFF_ALWAYSKB	= 0x4,
	PDFF_RESERVED_RIGHTTOLEFT	= 0x8,
	PDFF_SHORTTIME	= 0x10,
	PDFF_LONGTIME	= 0x20,
	PDFF_HIDETIME	= 0x40,
	PDFF_SHORTDATE	= 0x80,
	PDFF_LONGDATE	= 0x100,
	PDFF_HIDEDATE	= 0x200,
	PDFF_RELATIVEDATE	= 0x400,
	PDFF_USEEDITINVITATION	= 0x800,
	PDFF_READONLY	= 0x1000,
	PDFF_NOAUTOREADINGORDER	= 0x2000
    };
typedef int PROPDESC_FORMAT_FLAGS;

/* [v1_enum] */ 
enum tagPROPDESC_SORTDESCRIPTION
    {	PDSD_GENERAL	= 0,
	PDSD_A_Z	= 1,
	PDSD_LOWEST_HIGHEST	= 2,
	PDSD_SMALLEST_BIGGEST	= 3,
	PDSD_OLDEST_NEWEST	= 4
    };
typedef enum tagPROPDESC_SORTDESCRIPTION PROPDESC_SORTDESCRIPTION;

/* [v1_enum] */ 
enum tagPROPDESC_RELATIVEDESCRIPTION_TYPE
    {	PDRDT_GENERAL	= 0,
	PDRDT_DATE	= 1,
	PDRDT_SIZE	= 2,
	PDRDT_COUNT	= 3,
	PDRDT_REVISION	= 4,
	PDRDT_LENGTH	= 5,
	PDRDT_DURATION	= 6,
	PDRDT_SPEED	= 7,
	PDRDT_RATE	= 8,
	PDRDT_RATING	= 9,
	PDRDT_PRIORITY	= 10
    };
typedef enum tagPROPDESC_RELATIVEDESCRIPTION_TYPE PROPDESC_RELATIVEDESCRIPTION_TYPE;

/* [v1_enum] */ 
enum tagPROPDESC_AGGREGATION_TYPE
    {	PDAT_DEFAULT	= 0,
	PDAT_FIRST	= 1,
	PDAT_SUM	= 2,
	PDAT_AVERAGE	= 3,
	PDAT_DATERANGE	= 4,
	PDAT_UNION	= 5,
	PDAT_MAX	= 6,
	PDAT_MIN	= 7
    };
typedef enum tagPROPDESC_AGGREGATION_TYPE PROPDESC_AGGREGATION_TYPE;

/* [v1_enum] */ 
enum tagPROPDESC_CONDITION_TYPE
    {	PDCOT_NONE	= 0,
	PDCOT_STRING	= 1,
	PDCOT_SIZE	= 2,
	PDCOT_DATETIME	= 3,
	PDCOT_BOOLEAN	= 4,
	PDCOT_NUMBER	= 5
    };
typedef enum tagPROPDESC_CONDITION_TYPE PROPDESC_CONDITION_TYPE;


EXTERN_C const IID IID_IPropertyDescription;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6f79d558-3e96-4549-a1d1-7d75d2288814")
    IPropertyDescription : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPropertyKey( 
            /* [out] */ PROPERTYKEY __RPC_FAR *pkey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCanonicalName( 
            /* [string][out] */ LPWSTR __RPC_FAR *ppszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyType( 
            /* [out] */ VARTYPE __RPC_FAR *pvartype) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDisplayName( 
            /* [string][out] */ LPWSTR __RPC_FAR *ppszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEditInvitation( 
            /* [string][out] */ LPWSTR __RPC_FAR *ppszInvite) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTypeFlags( 
            /* [in] */ PROPDESC_TYPE_FLAGS mask,
            /* [out] */ PROPDESC_TYPE_FLAGS __RPC_FAR *ppdtFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetViewFlags( 
            /* [out] */ PROPDESC_VIEW_FLAGS __RPC_FAR *ppdvFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDefaultColumnWidth( 
            /* [out] */ UINT __RPC_FAR *pcxChars) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDisplayType( 
            /* [out] */ PROPDESC_DISPLAYTYPE __RPC_FAR *pdisplaytype) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetColumnState( 
            /* [out] */ SHCOLSTATEF __RPC_FAR *pcsFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGroupingRange( 
            /* [out] */ PROPDESC_GROUPING_RANGE __RPC_FAR *pgr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRelativeDescriptionType( 
            /* [out] */ PROPDESC_RELATIVEDESCRIPTION_TYPE __RPC_FAR *prdt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRelativeDescription( 
            /* [in] */ REFPROPVARIANT propvar1,
            /* [in] */ REFPROPVARIANT propvar2,
            /* [string][out] */ LPWSTR __RPC_FAR *ppszDesc1,
            /* [string][out] */ LPWSTR __RPC_FAR *ppszDesc2) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSortDescription( 
            /* [out] */ PROPDESC_SORTDESCRIPTION __RPC_FAR *psd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSortDescriptionLabel( 
            /* [in] */ BOOL fDescending,
            /* [string][out] */ LPWSTR __RPC_FAR *ppszDescription) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAggregationType( 
            /* [out] */ PROPDESC_AGGREGATION_TYPE __RPC_FAR *paggtype) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetConditionType( 
            /* [out] */ PROPDESC_CONDITION_TYPE __RPC_FAR *pcontype,
            /* [out] */ CONDITION_OPERATION __RPC_FAR *popDefault) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEnumTypeList( 
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE CoerceToCanonicalValue( 
            /* [out][in] */ PROPVARIANT __RPC_FAR *ppropvar) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FormatForDisplay( 
            /* [in] */ REFPROPVARIANT propvar,
            /* [in] */ PROPDESC_FORMAT_FLAGS pdfFlags,
            /* [string][out] */ LPWSTR __RPC_FAR *ppszDisplay) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsValueCanonical( 
            /* [in] */ REFPROPVARIANT propvar) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPropertyDescriptionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IPropertyDescription __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IPropertyDescription __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IPropertyDescription __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPropertyKey )( 
            IPropertyDescription __RPC_FAR * This,
            /* [out] */ PROPERTYKEY __RPC_FAR *pkey);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCanonicalName )( 
            IPropertyDescription __RPC_FAR * This,
            /* [string][out] */ LPWSTR __RPC_FAR *ppszName);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPropertyType )( 
            IPropertyDescription __RPC_FAR * This,
            /* [out] */ VARTYPE __RPC_FAR *pvartype);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetDisplayName )( 
            IPropertyDescription __RPC_FAR * This,
            /* [string][out] */ LPWSTR __RPC_FAR *ppszName);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetEditInvitation )( 
            IPropertyDescription __RPC_FAR * This,
            /* [string][out] */ LPWSTR __RPC_FAR *ppszInvite);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeFlags )( 
            IPropertyDescription __RPC_FAR * This,
            /* [in] */ PROPDESC_TYPE_FLAGS mask,
            /* [out] */ PROPDESC_TYPE_FLAGS __RPC_FAR *ppdtFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetViewFlags )( 
            IPropertyDescription __RPC_FAR * This,
            /* [out] */ PROPDESC_VIEW_FLAGS __RPC_FAR *ppdvFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetDefaultColumnWidth )( 
            IPropertyDescription __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pcxChars);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetDisplayType )( 
            IPropertyDescription __RPC_FAR * This,
            /* [out] */ PROPDESC_DISPLAYTYPE __RPC_FAR *pdisplaytype);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetColumnState )( 
            IPropertyDescription __RPC_FAR * This,
            /* [out] */ SHCOLSTATEF __RPC_FAR *pcsFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetGroupingRange )( 
            IPropertyDescription __RPC_FAR * This,
            /* [out] */ PROPDESC_GROUPING_RANGE __RPC_FAR *pgr);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetRelativeDescriptionType )( 
            IPropertyDescription __RPC_FAR * This,
            /* [out] */ PROPDESC_RELATIVEDESCRIPTION_TYPE __RPC_FAR *prdt);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetRelativeDescription )( 
            IPropertyDescription __RPC_FAR * This,
            /* [in] */ REFPROPVARIANT propvar1,
            /* [in] */ REFPROPVARIANT propvar2,
            /* [string][out] */ LPWSTR __RPC_FAR *ppszDesc1,
            /* [string][out] */ LPWSTR __RPC_FAR *ppszDesc2);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetSortDescription )( 
            IPropertyDescription __RPC_FAR * This,
            /* [out] */ PROPDESC_SORTDESCRIPTION __RPC_FAR *psd);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetSortDescriptionLabel )( 
            IPropertyDescription __RPC_FAR * This,
            /* [in] */ BOOL fDescending,
            /* [string][out] */ LPWSTR __RPC_FAR *ppszDescription);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetAggregationType )( 
            IPropertyDescription __RPC_FAR * This,
            /* [out] */ PROPDESC_AGGREGATION_TYPE __RPC_FAR *paggtype);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetConditionType )( 
            IPropertyDescription __RPC_FAR * This,
            /* [out] */ PROPDESC_CONDITION_TYPE __RPC_FAR *pcontype,
            /* [out] */ CONDITION_OPERATION __RPC_FAR *popDefault);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetEnumTypeList )( 
            IPropertyDescription __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CoerceToCanonicalValue )( 
            IPropertyDescription __RPC_FAR * This,
            /* [out][in] */ PROPVARIANT __RPC_FAR *ppropvar);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FormatForDisplay )( 
            IPropertyDescription __RPC_FAR * This,
            /* [in] */ REFPROPVARIANT propvar,
            /* [in] */ PROPDESC_FORMAT_FLAGS pdfFlags,
            /* [string][out] */ LPWSTR __RPC_FAR *ppszDisplay);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsValueCanonical )( 
            IPropertyDescription __RPC_FAR * This,
            /* [in] */ REFPROPVARIANT propvar);
        
        END_INTERFACE
    } IPropertyDescriptionVtbl;

    interface IPropertyDescription
    {
        CONST_VTBL struct IPropertyDescriptionVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertyDescription_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPropertyDescription_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPropertyDescription_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IPropertyDescription_GetPropertyKey(This,pkey)	\
    (This)->lpVtbl -> GetPropertyKey(This,pkey)

#define IPropertyDescription_GetCanonicalName(This,ppszName)	\
    (This)->lpVtbl -> GetCanonicalName(This,ppszName)

#define IPropertyDescription_GetPropertyType(This,pvartype)	\
    (This)->lpVtbl -> GetPropertyType(This,pvartype)

#define IPropertyDescription_GetDisplayName(This,ppszName)	\
    (This)->lpVtbl -> GetDisplayName(This,ppszName)

#define IPropertyDescription_GetEditInvitation(This,ppszInvite)	\
    (This)->lpVtbl -> GetEditInvitation(This,ppszInvite)

#define IPropertyDescription_GetTypeFlags(This,mask,ppdtFlags)	\
    (This)->lpVtbl -> GetTypeFlags(This,mask,ppdtFlags)

#define IPropertyDescription_GetViewFlags(This,ppdvFlags)	\
    (This)->lpVtbl -> GetViewFlags(This,ppdvFlags)

#define IPropertyDescription_GetDefaultColumnWidth(This,pcxChars)	\
    (This)->lpVtbl -> GetDefaultColumnWidth(This,pcxChars)

#define IPropertyDescription_GetDisplayType(This,pdisplaytype)	\
    (This)->lpVtbl -> GetDisplayType(This,pdisplaytype)

#define IPropertyDescription_GetColumnState(This,pcsFlags)	\
    (This)->lpVtbl -> GetColumnState(This,pcsFlags)

#define IPropertyDescription_GetGroupingRange(This,pgr)	\
    (This)->lpVtbl -> GetGroupingRange(This,pgr)

#define IPropertyDescription_GetRelativeDescriptionType(This,prdt)	\
    (This)->lpVtbl -> GetRelativeDescriptionType(This,prdt)

#define IPropertyDescription_GetRelativeDescription(This,propvar1,propvar2,ppszDesc1,ppszDesc2)	\
    (This)->lpVtbl -> GetRelativeDescription(This,propvar1,propvar2,ppszDesc1,ppszDesc2)

#define IPropertyDescription_GetSortDescription(This,psd)	\
    (This)->lpVtbl -> GetSortDescription(This,psd)

#define IPropertyDescription_GetSortDescriptionLabel(This,fDescending,ppszDescription)	\
    (This)->lpVtbl -> GetSortDescriptionLabel(This,fDescending,ppszDescription)

#define IPropertyDescription_GetAggregationType(This,paggtype)	\
    (This)->lpVtbl -> GetAggregationType(This,paggtype)

#define IPropertyDescription_GetConditionType(This,pcontype,popDefault)	\
    (This)->lpVtbl -> GetConditionType(This,pcontype,popDefault)

#define IPropertyDescription_GetEnumTypeList(This,riid,ppv)	\
    (This)->lpVtbl -> GetEnumTypeList(This,riid,ppv)

#define IPropertyDescription_CoerceToCanonicalValue(This,ppropvar)	\
    (This)->lpVtbl -> CoerceToCanonicalValue(This,ppropvar)

#define IPropertyDescription_FormatForDisplay(This,propvar,pdfFlags,ppszDisplay)	\
    (This)->lpVtbl -> FormatForDisplay(This,propvar,pdfFlags,ppszDisplay)

#define IPropertyDescription_IsValueCanonical(This,propvar)	\
    (This)->lpVtbl -> IsValueCanonical(This,propvar)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IPropertyDescription_GetPropertyKey_Proxy( 
    IPropertyDescription __RPC_FAR * This,
    /* [out] */ PROPERTYKEY __RPC_FAR *pkey);


void __RPC_STUB IPropertyDescription_GetPropertyKey_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyDescription_GetCanonicalName_Proxy( 
    IPropertyDescription __RPC_FAR * This,
    /* [string][out] */ LPWSTR __RPC_FAR *ppszName);


void __RPC_STUB IPropertyDescription_GetCanonicalName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyDescription_GetPropertyType_Proxy( 
    IPropertyDescription __RPC_FAR * This,
    /* [out] */ VARTYPE __RPC_FAR *pvartype);


void __RPC_STUB IPropertyDescription_GetPropertyType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyDescription_GetDisplayName_Proxy( 
    IPropertyDescription __RPC_FAR * This,
    /* [string][out] */ LPWSTR __RPC_FAR *ppszName);


void __RPC_STUB IPropertyDescription_GetDisplayName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyDescription_GetEditInvitation_Proxy( 
    IPropertyDescription __RPC_FAR * This,
    /* [string][out] */ LPWSTR __RPC_FAR *ppszInvite);


void __RPC_STUB IPropertyDescription_GetEditInvitation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyDescription_GetTypeFlags_Proxy( 
    IPropertyDescription __RPC_FAR * This,
    /* [in] */ PROPDESC_TYPE_FLAGS mask,
    /* [out] */ PROPDESC_TYPE_FLAGS __RPC_FAR *ppdtFlags);


void __RPC_STUB IPropertyDescription_GetTypeFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyDescription_GetViewFlags_Proxy( 
    IPropertyDescription __RPC_FAR * This,
    /* [out] */ PROPDESC_VIEW_FLAGS __RPC_FAR *ppdvFlags);


void __RPC_STUB IPropertyDescription_GetViewFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyDescription_GetDefaultColumnWidth_Proxy( 
    IPropertyDescription __RPC_FAR * This,
    /* [out] */ UINT __RPC_FAR *pcxChars);


void __RPC_STUB IPropertyDescription_GetDefaultColumnWidth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyDescription_GetDisplayType_Proxy( 
    IPropertyDescription __RPC_FAR * This,
    /* [out] */ PROPDESC_DISPLAYTYPE __RPC_FAR *pdisplaytype);


void __RPC_STUB IPropertyDescription_GetDisplayType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyDescription_GetColumnState_Proxy( 
    IPropertyDescription __RPC_FAR * This,
    /* [out] */ SHCOLSTATEF __RPC_FAR *pcsFlags);


void __RPC_STUB IPropertyDescription_GetColumnState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyDescription_GetGroupingRange_Proxy( 
    IPropertyDescription __RPC_FAR * This,
    /* [out] */ PROPDESC_GROUPING_RANGE __RPC_FAR *pgr);


void __RPC_STUB IPropertyDescription_GetGroupingRange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyDescription_GetRelativeDescriptionType_Proxy( 
    IPropertyDescription __RPC_FAR * This,
    /* [out] */ PROPDESC_RELATIVEDESCRIPTION_TYPE __RPC_FAR *prdt);


void __RPC_STUB IPropertyDescription_GetRelativeDescriptionType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyDescription_GetRelativeDescription_Proxy( 
    IPropertyDescription __RPC_FAR * This,
    /* [in] */ REFPROPVARIANT propvar1,
    /* [in] */ REFPROPVARIANT propvar2,
    /* [string][out] */ LPWSTR __RPC_FAR *ppszDesc1,
    /* [string][out] */ LPWSTR __RPC_FAR *ppszDesc2);


void __RPC_STUB IPropertyDescription_GetRelativeDescription_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyDescription_GetSortDescription_Proxy( 
    IPropertyDescription __RPC_FAR * This,
    /* [out] */ PROPDESC_SORTDESCRIPTION __RPC_FAR *psd);


void __RPC_STUB IPropertyDescription_GetSortDescription_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyDescription_GetSortDescriptionLabel_Proxy( 
    IPropertyDescription __RPC_FAR * This,
    /* [in] */ BOOL fDescending,
    /* [string][out] */ LPWSTR __RPC_FAR *ppszDescription);


void __RPC_STUB IPropertyDescription_GetSortDescriptionLabel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyDescription_GetAggregationType_Proxy( 
    IPropertyDescription __RPC_FAR * This,
    /* [out] */ PROPDESC_AGGREGATION_TYPE __RPC_FAR *paggtype);


void __RPC_STUB IPropertyDescription_GetAggregationType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyDescription_GetConditionType_Proxy( 
    IPropertyDescription __RPC_FAR * This,
    /* [out] */ PROPDESC_CONDITION_TYPE __RPC_FAR *pcontype,
    /* [out] */ CONDITION_OPERATION __RPC_FAR *popDefault);


void __RPC_STUB IPropertyDescription_GetConditionType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyDescription_GetEnumTypeList_Proxy( 
    IPropertyDescription __RPC_FAR * This,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IPropertyDescription_GetEnumTypeList_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IPropertyDescription_RemoteCoerceToCanonicalValue_Proxy( 
    IPropertyDescription __RPC_FAR * This,
    /* [in] */ REFPROPVARIANT propvar,
    /* [out] */ PROPVARIANT __RPC_FAR *ppropvar);


void __RPC_STUB IPropertyDescription_RemoteCoerceToCanonicalValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyDescription_FormatForDisplay_Proxy( 
    IPropertyDescription __RPC_FAR * This,
    /* [in] */ REFPROPVARIANT propvar,
    /* [in] */ PROPDESC_FORMAT_FLAGS pdfFlags,
    /* [string][out] */ LPWSTR __RPC_FAR *ppszDisplay);


void __RPC_STUB IPropertyDescription_FormatForDisplay_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyDescription_IsValueCanonical_Proxy( 
    IPropertyDescription __RPC_FAR * This,
    /* [in] */ REFPROPVARIANT propvar);


void __RPC_STUB IPropertyDescription_IsValueCanonical_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IPropertyDescription_INTERFACE_DEFINED__ */


#ifndef __IPropertyDescriptionAliasInfo_INTERFACE_DEFINED__
#define __IPropertyDescriptionAliasInfo_INTERFACE_DEFINED__

/* interface IPropertyDescriptionAliasInfo */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IPropertyDescriptionAliasInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f67104fc-2af9-46fd-b32d-243c1404f3d1")
    IPropertyDescriptionAliasInfo : public IPropertyDescription
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSortByAlias( 
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAdditionalSortByAliases( 
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPropertyDescriptionAliasInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IPropertyDescriptionAliasInfo __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IPropertyDescriptionAliasInfo __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IPropertyDescriptionAliasInfo __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPropertyKey )( 
            IPropertyDescriptionAliasInfo __RPC_FAR * This,
            /* [out] */ PROPERTYKEY __RPC_FAR *pkey);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCanonicalName )( 
            IPropertyDescriptionAliasInfo __RPC_FAR * This,
            /* [string][out] */ LPWSTR __RPC_FAR *ppszName);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPropertyType )( 
            IPropertyDescriptionAliasInfo __RPC_FAR * This,
            /* [out] */ VARTYPE __RPC_FAR *pvartype);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetDisplayName )( 
            IPropertyDescriptionAliasInfo __RPC_FAR * This,
            /* [string][out] */ LPWSTR __RPC_FAR *ppszName);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetEditInvitation )( 
            IPropertyDescriptionAliasInfo __RPC_FAR * This,
            /* [string][out] */ LPWSTR __RPC_FAR *ppszInvite);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeFlags )( 
            IPropertyDescriptionAliasInfo __RPC_FAR * This,
            /* [in] */ PROPDESC_TYPE_FLAGS mask,
            /* [out] */ PROPDESC_TYPE_FLAGS __RPC_FAR *ppdtFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetViewFlags )( 
            IPropertyDescriptionAliasInfo __RPC_FAR * This,
            /* [out] */ PROPDESC_VIEW_FLAGS __RPC_FAR *ppdvFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetDefaultColumnWidth )( 
            IPropertyDescriptionAliasInfo __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pcxChars);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetDisplayType )( 
            IPropertyDescriptionAliasInfo __RPC_FAR * This,
            /* [out] */ PROPDESC_DISPLAYTYPE __RPC_FAR *pdisplaytype);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetColumnState )( 
            IPropertyDescriptionAliasInfo __RPC_FAR * This,
            /* [out] */ SHCOLSTATEF __RPC_FAR *pcsFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetGroupingRange )( 
            IPropertyDescriptionAliasInfo __RPC_FAR * This,
            /* [out] */ PROPDESC_GROUPING_RANGE __RPC_FAR *pgr);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetRelativeDescriptionType )( 
            IPropertyDescriptionAliasInfo __RPC_FAR * This,
            /* [out] */ PROPDESC_RELATIVEDESCRIPTION_TYPE __RPC_FAR *prdt);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetRelativeDescription )( 
            IPropertyDescriptionAliasInfo __RPC_FAR * This,
            /* [in] */ REFPROPVARIANT propvar1,
            /* [in] */ REFPROPVARIANT propvar2,
            /* [string][out] */ LPWSTR __RPC_FAR *ppszDesc1,
            /* [string][out] */ LPWSTR __RPC_FAR *ppszDesc2);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetSortDescription )( 
            IPropertyDescriptionAliasInfo __RPC_FAR * This,
            /* [out] */ PROPDESC_SORTDESCRIPTION __RPC_FAR *psd);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetSortDescriptionLabel )( 
            IPropertyDescriptionAliasInfo __RPC_FAR * This,
            /* [in] */ BOOL fDescending,
            /* [string][out] */ LPWSTR __RPC_FAR *ppszDescription);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetAggregationType )( 
            IPropertyDescriptionAliasInfo __RPC_FAR * This,
            /* [out] */ PROPDESC_AGGREGATION_TYPE __RPC_FAR *paggtype);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetConditionType )( 
            IPropertyDescriptionAliasInfo __RPC_FAR * This,
            /* [out] */ PROPDESC_CONDITION_TYPE __RPC_FAR *pcontype,
            /* [out] */ CONDITION_OPERATION __RPC_FAR *popDefault);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetEnumTypeList )( 
            IPropertyDescriptionAliasInfo __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CoerceToCanonicalValue )( 
            IPropertyDescriptionAliasInfo __RPC_FAR * This,
            /* [out][in] */ PROPVARIANT __RPC_FAR *ppropvar);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FormatForDisplay )( 
            IPropertyDescriptionAliasInfo __RPC_FAR * This,
            /* [in] */ REFPROPVARIANT propvar,
            /* [in] */ PROPDESC_FORMAT_FLAGS pdfFlags,
            /* [string][out] */ LPWSTR __RPC_FAR *ppszDisplay);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsValueCanonical )( 
            IPropertyDescriptionAliasInfo __RPC_FAR * This,
            /* [in] */ REFPROPVARIANT propvar);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetSortByAlias )( 
            IPropertyDescriptionAliasInfo __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetAdditionalSortByAliases )( 
            IPropertyDescriptionAliasInfo __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        END_INTERFACE
    } IPropertyDescriptionAliasInfoVtbl;

    interface IPropertyDescriptionAliasInfo
    {
        CONST_VTBL struct IPropertyDescriptionAliasInfoVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertyDescriptionAliasInfo_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPropertyDescriptionAliasInfo_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPropertyDescriptionAliasInfo_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IPropertyDescriptionAliasInfo_GetPropertyKey(This,pkey)	\
    (This)->lpVtbl -> GetPropertyKey(This,pkey)

#define IPropertyDescriptionAliasInfo_GetCanonicalName(This,ppszName)	\
    (This)->lpVtbl -> GetCanonicalName(This,ppszName)

#define IPropertyDescriptionAliasInfo_GetPropertyType(This,pvartype)	\
    (This)->lpVtbl -> GetPropertyType(This,pvartype)

#define IPropertyDescriptionAliasInfo_GetDisplayName(This,ppszName)	\
    (This)->lpVtbl -> GetDisplayName(This,ppszName)

#define IPropertyDescriptionAliasInfo_GetEditInvitation(This,ppszInvite)	\
    (This)->lpVtbl -> GetEditInvitation(This,ppszInvite)

#define IPropertyDescriptionAliasInfo_GetTypeFlags(This,mask,ppdtFlags)	\
    (This)->lpVtbl -> GetTypeFlags(This,mask,ppdtFlags)

#define IPropertyDescriptionAliasInfo_GetViewFlags(This,ppdvFlags)	\
    (This)->lpVtbl -> GetViewFlags(This,ppdvFlags)

#define IPropertyDescriptionAliasInfo_GetDefaultColumnWidth(This,pcxChars)	\
    (This)->lpVtbl -> GetDefaultColumnWidth(This,pcxChars)

#define IPropertyDescriptionAliasInfo_GetDisplayType(This,pdisplaytype)	\
    (This)->lpVtbl -> GetDisplayType(This,pdisplaytype)

#define IPropertyDescriptionAliasInfo_GetColumnState(This,pcsFlags)	\
    (This)->lpVtbl -> GetColumnState(This,pcsFlags)

#define IPropertyDescriptionAliasInfo_GetGroupingRange(This,pgr)	\
    (This)->lpVtbl -> GetGroupingRange(This,pgr)

#define IPropertyDescriptionAliasInfo_GetRelativeDescriptionType(This,prdt)	\
    (This)->lpVtbl -> GetRelativeDescriptionType(This,prdt)

#define IPropertyDescriptionAliasInfo_GetRelativeDescription(This,propvar1,propvar2,ppszDesc1,ppszDesc2)	\
    (This)->lpVtbl -> GetRelativeDescription(This,propvar1,propvar2,ppszDesc1,ppszDesc2)

#define IPropertyDescriptionAliasInfo_GetSortDescription(This,psd)	\
    (This)->lpVtbl -> GetSortDescription(This,psd)

#define IPropertyDescriptionAliasInfo_GetSortDescriptionLabel(This,fDescending,ppszDescription)	\
    (This)->lpVtbl -> GetSortDescriptionLabel(This,fDescending,ppszDescription)

#define IPropertyDescriptionAliasInfo_GetAggregationType(This,paggtype)	\
    (This)->lpVtbl -> GetAggregationType(This,paggtype)

#define IPropertyDescriptionAliasInfo_GetConditionType(This,pcontype,popDefault)	\
    (This)->lpVtbl -> GetConditionType(This,pcontype,popDefault)

#define IPropertyDescriptionAliasInfo_GetEnumTypeList(This,riid,ppv)	\
    (This)->lpVtbl -> GetEnumTypeList(This,riid,ppv)

#define IPropertyDescriptionAliasInfo_CoerceToCanonicalValue(This,ppropvar)	\
    (This)->lpVtbl -> CoerceToCanonicalValue(This,ppropvar)

#define IPropertyDescriptionAliasInfo_FormatForDisplay(This,propvar,pdfFlags,ppszDisplay)	\
    (This)->lpVtbl -> FormatForDisplay(This,propvar,pdfFlags,ppszDisplay)

#define IPropertyDescriptionAliasInfo_IsValueCanonical(This,propvar)	\
    (This)->lpVtbl -> IsValueCanonical(This,propvar)


#define IPropertyDescriptionAliasInfo_GetSortByAlias(This,riid,ppv)	\
    (This)->lpVtbl -> GetSortByAlias(This,riid,ppv)

#define IPropertyDescriptionAliasInfo_GetAdditionalSortByAliases(This,riid,ppv)	\
    (This)->lpVtbl -> GetAdditionalSortByAliases(This,riid,ppv)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IPropertyDescriptionAliasInfo_GetSortByAlias_Proxy( 
    IPropertyDescriptionAliasInfo __RPC_FAR * This,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IPropertyDescriptionAliasInfo_GetSortByAlias_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyDescriptionAliasInfo_GetAdditionalSortByAliases_Proxy( 
    IPropertyDescriptionAliasInfo __RPC_FAR * This,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IPropertyDescriptionAliasInfo_GetAdditionalSortByAliases_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IPropertyDescriptionAliasInfo_INTERFACE_DEFINED__ */


#ifndef __IPropertyDescriptionSearchInfo_INTERFACE_DEFINED__
#define __IPropertyDescriptionSearchInfo_INTERFACE_DEFINED__

/* interface IPropertyDescriptionSearchInfo */
/* [unique][object][uuid] */ 

/* [v1_enum] */ 
enum tagPROPDESC_SEARCHINFO_FLAGS
    {	PDSIF_DEFAULT	= 0,
	PDSIF_ININVERTEDINDEX	= 0x1,
	PDSIF_ISCOLUMN	= 0x2,
	PDSIF_ISCOLUMNSPARSE	= 0x4
    };
typedef int PROPDESC_SEARCHINFO_FLAGS;

typedef /* [v1_enum] */ 
enum tagPROPDESC_COLUMNINDEX_TYPE
    {	PDCIT_NONE	= 0,
	PDCIT_ONDISK	= 1,
	PDCIT_INMEMORY	= 2
    }	PROPDESC_COLUMNINDEX_TYPE;


EXTERN_C const IID IID_IPropertyDescriptionSearchInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("078f91bd-29a2-440f-924e-46a291524520")
    IPropertyDescriptionSearchInfo : public IPropertyDescription
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSearchInfoFlags( 
            /* [out] */ PROPDESC_SEARCHINFO_FLAGS __RPC_FAR *ppdsiFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetColumnIndexType( 
            /* [out] */ PROPDESC_COLUMNINDEX_TYPE __RPC_FAR *ppdciType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProjectionString( 
            /* [out] */ LPWSTR __RPC_FAR *ppszProjection) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaxSize( 
            /* [out] */ UINT __RPC_FAR *pcbMaxSize) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPropertyDescriptionSearchInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IPropertyDescriptionSearchInfo __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IPropertyDescriptionSearchInfo __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IPropertyDescriptionSearchInfo __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPropertyKey )( 
            IPropertyDescriptionSearchInfo __RPC_FAR * This,
            /* [out] */ PROPERTYKEY __RPC_FAR *pkey);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCanonicalName )( 
            IPropertyDescriptionSearchInfo __RPC_FAR * This,
            /* [string][out] */ LPWSTR __RPC_FAR *ppszName);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPropertyType )( 
            IPropertyDescriptionSearchInfo __RPC_FAR * This,
            /* [out] */ VARTYPE __RPC_FAR *pvartype);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetDisplayName )( 
            IPropertyDescriptionSearchInfo __RPC_FAR * This,
            /* [string][out] */ LPWSTR __RPC_FAR *ppszName);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetEditInvitation )( 
            IPropertyDescriptionSearchInfo __RPC_FAR * This,
            /* [string][out] */ LPWSTR __RPC_FAR *ppszInvite);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeFlags )( 
            IPropertyDescriptionSearchInfo __RPC_FAR * This,
            /* [in] */ PROPDESC_TYPE_FLAGS mask,
            /* [out] */ PROPDESC_TYPE_FLAGS __RPC_FAR *ppdtFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetViewFlags )( 
            IPropertyDescriptionSearchInfo __RPC_FAR * This,
            /* [out] */ PROPDESC_VIEW_FLAGS __RPC_FAR *ppdvFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetDefaultColumnWidth )( 
            IPropertyDescriptionSearchInfo __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pcxChars);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetDisplayType )( 
            IPropertyDescriptionSearchInfo __RPC_FAR * This,
            /* [out] */ PROPDESC_DISPLAYTYPE __RPC_FAR *pdisplaytype);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetColumnState )( 
            IPropertyDescriptionSearchInfo __RPC_FAR * This,
            /* [out] */ SHCOLSTATEF __RPC_FAR *pcsFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetGroupingRange )( 
            IPropertyDescriptionSearchInfo __RPC_FAR * This,
            /* [out] */ PROPDESC_GROUPING_RANGE __RPC_FAR *pgr);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetRelativeDescriptionType )( 
            IPropertyDescriptionSearchInfo __RPC_FAR * This,
            /* [out] */ PROPDESC_RELATIVEDESCRIPTION_TYPE __RPC_FAR *prdt);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetRelativeDescription )( 
            IPropertyDescriptionSearchInfo __RPC_FAR * This,
            /* [in] */ REFPROPVARIANT propvar1,
            /* [in] */ REFPROPVARIANT propvar2,
            /* [string][out] */ LPWSTR __RPC_FAR *ppszDesc1,
            /* [string][out] */ LPWSTR __RPC_FAR *ppszDesc2);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetSortDescription )( 
            IPropertyDescriptionSearchInfo __RPC_FAR * This,
            /* [out] */ PROPDESC_SORTDESCRIPTION __RPC_FAR *psd);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetSortDescriptionLabel )( 
            IPropertyDescriptionSearchInfo __RPC_FAR * This,
            /* [in] */ BOOL fDescending,
            /* [string][out] */ LPWSTR __RPC_FAR *ppszDescription);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetAggregationType )( 
            IPropertyDescriptionSearchInfo __RPC_FAR * This,
            /* [out] */ PROPDESC_AGGREGATION_TYPE __RPC_FAR *paggtype);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetConditionType )( 
            IPropertyDescriptionSearchInfo __RPC_FAR * This,
            /* [out] */ PROPDESC_CONDITION_TYPE __RPC_FAR *pcontype,
            /* [out] */ CONDITION_OPERATION __RPC_FAR *popDefault);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetEnumTypeList )( 
            IPropertyDescriptionSearchInfo __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CoerceToCanonicalValue )( 
            IPropertyDescriptionSearchInfo __RPC_FAR * This,
            /* [out][in] */ PROPVARIANT __RPC_FAR *ppropvar);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FormatForDisplay )( 
            IPropertyDescriptionSearchInfo __RPC_FAR * This,
            /* [in] */ REFPROPVARIANT propvar,
            /* [in] */ PROPDESC_FORMAT_FLAGS pdfFlags,
            /* [string][out] */ LPWSTR __RPC_FAR *ppszDisplay);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsValueCanonical )( 
            IPropertyDescriptionSearchInfo __RPC_FAR * This,
            /* [in] */ REFPROPVARIANT propvar);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetSearchInfoFlags )( 
            IPropertyDescriptionSearchInfo __RPC_FAR * This,
            /* [out] */ PROPDESC_SEARCHINFO_FLAGS __RPC_FAR *ppdsiFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetColumnIndexType )( 
            IPropertyDescriptionSearchInfo __RPC_FAR * This,
            /* [out] */ PROPDESC_COLUMNINDEX_TYPE __RPC_FAR *ppdciType);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetProjectionString )( 
            IPropertyDescriptionSearchInfo __RPC_FAR * This,
            /* [out] */ LPWSTR __RPC_FAR *ppszProjection);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetMaxSize )( 
            IPropertyDescriptionSearchInfo __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pcbMaxSize);
        
        END_INTERFACE
    } IPropertyDescriptionSearchInfoVtbl;

    interface IPropertyDescriptionSearchInfo
    {
        CONST_VTBL struct IPropertyDescriptionSearchInfoVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertyDescriptionSearchInfo_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPropertyDescriptionSearchInfo_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPropertyDescriptionSearchInfo_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IPropertyDescriptionSearchInfo_GetPropertyKey(This,pkey)	\
    (This)->lpVtbl -> GetPropertyKey(This,pkey)

#define IPropertyDescriptionSearchInfo_GetCanonicalName(This,ppszName)	\
    (This)->lpVtbl -> GetCanonicalName(This,ppszName)

#define IPropertyDescriptionSearchInfo_GetPropertyType(This,pvartype)	\
    (This)->lpVtbl -> GetPropertyType(This,pvartype)

#define IPropertyDescriptionSearchInfo_GetDisplayName(This,ppszName)	\
    (This)->lpVtbl -> GetDisplayName(This,ppszName)

#define IPropertyDescriptionSearchInfo_GetEditInvitation(This,ppszInvite)	\
    (This)->lpVtbl -> GetEditInvitation(This,ppszInvite)

#define IPropertyDescriptionSearchInfo_GetTypeFlags(This,mask,ppdtFlags)	\
    (This)->lpVtbl -> GetTypeFlags(This,mask,ppdtFlags)

#define IPropertyDescriptionSearchInfo_GetViewFlags(This,ppdvFlags)	\
    (This)->lpVtbl -> GetViewFlags(This,ppdvFlags)

#define IPropertyDescriptionSearchInfo_GetDefaultColumnWidth(This,pcxChars)	\
    (This)->lpVtbl -> GetDefaultColumnWidth(This,pcxChars)

#define IPropertyDescriptionSearchInfo_GetDisplayType(This,pdisplaytype)	\
    (This)->lpVtbl -> GetDisplayType(This,pdisplaytype)

#define IPropertyDescriptionSearchInfo_GetColumnState(This,pcsFlags)	\
    (This)->lpVtbl -> GetColumnState(This,pcsFlags)

#define IPropertyDescriptionSearchInfo_GetGroupingRange(This,pgr)	\
    (This)->lpVtbl -> GetGroupingRange(This,pgr)

#define IPropertyDescriptionSearchInfo_GetRelativeDescriptionType(This,prdt)	\
    (This)->lpVtbl -> GetRelativeDescriptionType(This,prdt)

#define IPropertyDescriptionSearchInfo_GetRelativeDescription(This,propvar1,propvar2,ppszDesc1,ppszDesc2)	\
    (This)->lpVtbl -> GetRelativeDescription(This,propvar1,propvar2,ppszDesc1,ppszDesc2)

#define IPropertyDescriptionSearchInfo_GetSortDescription(This,psd)	\
    (This)->lpVtbl -> GetSortDescription(This,psd)

#define IPropertyDescriptionSearchInfo_GetSortDescriptionLabel(This,fDescending,ppszDescription)	\
    (This)->lpVtbl -> GetSortDescriptionLabel(This,fDescending,ppszDescription)

#define IPropertyDescriptionSearchInfo_GetAggregationType(This,paggtype)	\
    (This)->lpVtbl -> GetAggregationType(This,paggtype)

#define IPropertyDescriptionSearchInfo_GetConditionType(This,pcontype,popDefault)	\
    (This)->lpVtbl -> GetConditionType(This,pcontype,popDefault)

#define IPropertyDescriptionSearchInfo_GetEnumTypeList(This,riid,ppv)	\
    (This)->lpVtbl -> GetEnumTypeList(This,riid,ppv)

#define IPropertyDescriptionSearchInfo_CoerceToCanonicalValue(This,ppropvar)	\
    (This)->lpVtbl -> CoerceToCanonicalValue(This,ppropvar)

#define IPropertyDescriptionSearchInfo_FormatForDisplay(This,propvar,pdfFlags,ppszDisplay)	\
    (This)->lpVtbl -> FormatForDisplay(This,propvar,pdfFlags,ppszDisplay)

#define IPropertyDescriptionSearchInfo_IsValueCanonical(This,propvar)	\
    (This)->lpVtbl -> IsValueCanonical(This,propvar)


#define IPropertyDescriptionSearchInfo_GetSearchInfoFlags(This,ppdsiFlags)	\
    (This)->lpVtbl -> GetSearchInfoFlags(This,ppdsiFlags)

#define IPropertyDescriptionSearchInfo_GetColumnIndexType(This,ppdciType)	\
    (This)->lpVtbl -> GetColumnIndexType(This,ppdciType)

#define IPropertyDescriptionSearchInfo_GetProjectionString(This,ppszProjection)	\
    (This)->lpVtbl -> GetProjectionString(This,ppszProjection)

#define IPropertyDescriptionSearchInfo_GetMaxSize(This,pcbMaxSize)	\
    (This)->lpVtbl -> GetMaxSize(This,pcbMaxSize)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IPropertyDescriptionSearchInfo_GetSearchInfoFlags_Proxy( 
    IPropertyDescriptionSearchInfo __RPC_FAR * This,
    /* [out] */ PROPDESC_SEARCHINFO_FLAGS __RPC_FAR *ppdsiFlags);


void __RPC_STUB IPropertyDescriptionSearchInfo_GetSearchInfoFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyDescriptionSearchInfo_GetColumnIndexType_Proxy( 
    IPropertyDescriptionSearchInfo __RPC_FAR * This,
    /* [out] */ PROPDESC_COLUMNINDEX_TYPE __RPC_FAR *ppdciType);


void __RPC_STUB IPropertyDescriptionSearchInfo_GetColumnIndexType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyDescriptionSearchInfo_GetProjectionString_Proxy( 
    IPropertyDescriptionSearchInfo __RPC_FAR * This,
    /* [out] */ LPWSTR __RPC_FAR *ppszProjection);


void __RPC_STUB IPropertyDescriptionSearchInfo_GetProjectionString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyDescriptionSearchInfo_GetMaxSize_Proxy( 
    IPropertyDescriptionSearchInfo __RPC_FAR * This,
    /* [out] */ UINT __RPC_FAR *pcbMaxSize);


void __RPC_STUB IPropertyDescriptionSearchInfo_GetMaxSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IPropertyDescriptionSearchInfo_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_propsys_0184 */
/* [local] */ 

/* [v1_enum] */ 
enum tagPROPDESC_ENUMFILTER
    {	PDEF_ALL	= 0,
	PDEF_SYSTEM	= 1,
	PDEF_NONSYSTEM	= 2,
	PDEF_VIEWABLE	= 3,
	PDEF_QUERYABLE	= 4,
	PDEF_INFULLTEXTQUERY	= 5,
	PDEF_COLUMN	= 6
    };
typedef enum tagPROPDESC_ENUMFILTER PROPDESC_ENUMFILTER;



extern RPC_IF_HANDLE __MIDL_itf_propsys_0184_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_propsys_0184_v0_0_s_ifspec;

#ifndef __IPropertySystem_INTERFACE_DEFINED__
#define __IPropertySystem_INTERFACE_DEFINED__

/* interface IPropertySystem */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IPropertySystem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ca724e8a-c3e6-442b-88a4-6fb0db8035a3")
    IPropertySystem : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPropertyDescription( 
            /* [in] */ REFPROPERTYKEY propkey,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyDescriptionByName( 
            /* [string][in] */ LPCWSTR pszCanonicalName,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyDescriptionListFromString( 
            /* [string][in] */ LPCWSTR pszPropList,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumeratePropertyDescriptions( 
            /* [in] */ PROPDESC_ENUMFILTER filterOn,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FormatForDisplay( 
            /* [in] */ REFPROPERTYKEY key,
            /* [in] */ REFPROPVARIANT propvar,
            /* [in] */ PROPDESC_FORMAT_FLAGS pdff,
            /* [size_is][string][out] */ LPWSTR pszText,
            /* [in] */ DWORD cchText) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FormatForDisplayAlloc( 
            /* [in] */ REFPROPERTYKEY key,
            /* [in] */ REFPROPVARIANT propvar,
            /* [in] */ PROPDESC_FORMAT_FLAGS pdff,
            /* [string][out] */ LPWSTR __RPC_FAR *ppszDisplay) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterPropertySchema( 
            /* [string][in] */ LPCWSTR pszPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnregisterPropertySchema( 
            /* [string][in] */ LPCWSTR pszPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RefreshPropertySchema( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPropertySystemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IPropertySystem __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IPropertySystem __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IPropertySystem __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPropertyDescription )( 
            IPropertySystem __RPC_FAR * This,
            /* [in] */ REFPROPERTYKEY propkey,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPropertyDescriptionByName )( 
            IPropertySystem __RPC_FAR * This,
            /* [string][in] */ LPCWSTR pszCanonicalName,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPropertyDescriptionListFromString )( 
            IPropertySystem __RPC_FAR * This,
            /* [string][in] */ LPCWSTR pszPropList,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *EnumeratePropertyDescriptions )( 
            IPropertySystem __RPC_FAR * This,
            /* [in] */ PROPDESC_ENUMFILTER filterOn,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FormatForDisplay )( 
            IPropertySystem __RPC_FAR * This,
            /* [in] */ REFPROPERTYKEY key,
            /* [in] */ REFPROPVARIANT propvar,
            /* [in] */ PROPDESC_FORMAT_FLAGS pdff,
            /* [size_is][string][out] */ LPWSTR pszText,
            /* [in] */ DWORD cchText);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FormatForDisplayAlloc )( 
            IPropertySystem __RPC_FAR * This,
            /* [in] */ REFPROPERTYKEY key,
            /* [in] */ REFPROPVARIANT propvar,
            /* [in] */ PROPDESC_FORMAT_FLAGS pdff,
            /* [string][out] */ LPWSTR __RPC_FAR *ppszDisplay);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RegisterPropertySchema )( 
            IPropertySystem __RPC_FAR * This,
            /* [string][in] */ LPCWSTR pszPath);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *UnregisterPropertySchema )( 
            IPropertySystem __RPC_FAR * This,
            /* [string][in] */ LPCWSTR pszPath);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RefreshPropertySchema )( 
            IPropertySystem __RPC_FAR * This);
        
        END_INTERFACE
    } IPropertySystemVtbl;

    interface IPropertySystem
    {
        CONST_VTBL struct IPropertySystemVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertySystem_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPropertySystem_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPropertySystem_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IPropertySystem_GetPropertyDescription(This,propkey,riid,ppv)	\
    (This)->lpVtbl -> GetPropertyDescription(This,propkey,riid,ppv)

#define IPropertySystem_GetPropertyDescriptionByName(This,pszCanonicalName,riid,ppv)	\
    (This)->lpVtbl -> GetPropertyDescriptionByName(This,pszCanonicalName,riid,ppv)

#define IPropertySystem_GetPropertyDescriptionListFromString(This,pszPropList,riid,ppv)	\
    (This)->lpVtbl -> GetPropertyDescriptionListFromString(This,pszPropList,riid,ppv)

#define IPropertySystem_EnumeratePropertyDescriptions(This,filterOn,riid,ppv)	\
    (This)->lpVtbl -> EnumeratePropertyDescriptions(This,filterOn,riid,ppv)

#define IPropertySystem_FormatForDisplay(This,key,propvar,pdff,pszText,cchText)	\
    (This)->lpVtbl -> FormatForDisplay(This,key,propvar,pdff,pszText,cchText)

#define IPropertySystem_FormatForDisplayAlloc(This,key,propvar,pdff,ppszDisplay)	\
    (This)->lpVtbl -> FormatForDisplayAlloc(This,key,propvar,pdff,ppszDisplay)

#define IPropertySystem_RegisterPropertySchema(This,pszPath)	\
    (This)->lpVtbl -> RegisterPropertySchema(This,pszPath)

#define IPropertySystem_UnregisterPropertySchema(This,pszPath)	\
    (This)->lpVtbl -> UnregisterPropertySchema(This,pszPath)

#define IPropertySystem_RefreshPropertySchema(This)	\
    (This)->lpVtbl -> RefreshPropertySchema(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IPropertySystem_GetPropertyDescription_Proxy( 
    IPropertySystem __RPC_FAR * This,
    /* [in] */ REFPROPERTYKEY propkey,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IPropertySystem_GetPropertyDescription_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertySystem_GetPropertyDescriptionByName_Proxy( 
    IPropertySystem __RPC_FAR * This,
    /* [string][in] */ LPCWSTR pszCanonicalName,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IPropertySystem_GetPropertyDescriptionByName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertySystem_GetPropertyDescriptionListFromString_Proxy( 
    IPropertySystem __RPC_FAR * This,
    /* [string][in] */ LPCWSTR pszPropList,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IPropertySystem_GetPropertyDescriptionListFromString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertySystem_EnumeratePropertyDescriptions_Proxy( 
    IPropertySystem __RPC_FAR * This,
    /* [in] */ PROPDESC_ENUMFILTER filterOn,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IPropertySystem_EnumeratePropertyDescriptions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertySystem_FormatForDisplay_Proxy( 
    IPropertySystem __RPC_FAR * This,
    /* [in] */ REFPROPERTYKEY key,
    /* [in] */ REFPROPVARIANT propvar,
    /* [in] */ PROPDESC_FORMAT_FLAGS pdff,
    /* [size_is][string][out] */ LPWSTR pszText,
    /* [in] */ DWORD cchText);


void __RPC_STUB IPropertySystem_FormatForDisplay_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertySystem_FormatForDisplayAlloc_Proxy( 
    IPropertySystem __RPC_FAR * This,
    /* [in] */ REFPROPERTYKEY key,
    /* [in] */ REFPROPVARIANT propvar,
    /* [in] */ PROPDESC_FORMAT_FLAGS pdff,
    /* [string][out] */ LPWSTR __RPC_FAR *ppszDisplay);


void __RPC_STUB IPropertySystem_FormatForDisplayAlloc_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertySystem_RegisterPropertySchema_Proxy( 
    IPropertySystem __RPC_FAR * This,
    /* [string][in] */ LPCWSTR pszPath);


void __RPC_STUB IPropertySystem_RegisterPropertySchema_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertySystem_UnregisterPropertySchema_Proxy( 
    IPropertySystem __RPC_FAR * This,
    /* [string][in] */ LPCWSTR pszPath);


void __RPC_STUB IPropertySystem_UnregisterPropertySchema_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertySystem_RefreshPropertySchema_Proxy( 
    IPropertySystem __RPC_FAR * This);


void __RPC_STUB IPropertySystem_RefreshPropertySchema_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IPropertySystem_INTERFACE_DEFINED__ */


#ifndef __IPropertyDescriptionList_INTERFACE_DEFINED__
#define __IPropertyDescriptionList_INTERFACE_DEFINED__

/* interface IPropertyDescriptionList */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IPropertyDescriptionList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1f9fc1d0-c39b-4b26-817f-011967d3440e")
    IPropertyDescriptionList : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCount( 
            /* [out] */ UINT __RPC_FAR *pcElem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAt( 
            /* [in] */ UINT iElem,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPropertyDescriptionListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IPropertyDescriptionList __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IPropertyDescriptionList __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IPropertyDescriptionList __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCount )( 
            IPropertyDescriptionList __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pcElem);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetAt )( 
            IPropertyDescriptionList __RPC_FAR * This,
            /* [in] */ UINT iElem,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        END_INTERFACE
    } IPropertyDescriptionListVtbl;

    interface IPropertyDescriptionList
    {
        CONST_VTBL struct IPropertyDescriptionListVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertyDescriptionList_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPropertyDescriptionList_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPropertyDescriptionList_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IPropertyDescriptionList_GetCount(This,pcElem)	\
    (This)->lpVtbl -> GetCount(This,pcElem)

#define IPropertyDescriptionList_GetAt(This,iElem,riid,ppv)	\
    (This)->lpVtbl -> GetAt(This,iElem,riid,ppv)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IPropertyDescriptionList_GetCount_Proxy( 
    IPropertyDescriptionList __RPC_FAR * This,
    /* [out] */ UINT __RPC_FAR *pcElem);


void __RPC_STUB IPropertyDescriptionList_GetCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyDescriptionList_GetAt_Proxy( 
    IPropertyDescriptionList __RPC_FAR * This,
    /* [in] */ UINT iElem,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IPropertyDescriptionList_GetAt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IPropertyDescriptionList_INTERFACE_DEFINED__ */


#ifndef __IPropertyStoreFactory_INTERFACE_DEFINED__
#define __IPropertyStoreFactory_INTERFACE_DEFINED__

/* interface IPropertyStoreFactory */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IPropertyStoreFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("bc110b6d-57e8-4148-a9c6-91015ab2f3a5")
    IPropertyStoreFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPropertyStore( 
            /* [in] */ GETPROPERTYSTOREFLAGS flags,
            /* [unique][in] */ IUnknown __RPC_FAR *pUnkFactory,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyStoreForKeys( 
            /* [unique][in] */ const PROPERTYKEY __RPC_FAR *rgKeys,
            /* [in] */ UINT cKeys,
            /* [in] */ GETPROPERTYSTOREFLAGS flags,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPropertyStoreFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IPropertyStoreFactory __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IPropertyStoreFactory __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IPropertyStoreFactory __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPropertyStore )( 
            IPropertyStoreFactory __RPC_FAR * This,
            /* [in] */ GETPROPERTYSTOREFLAGS flags,
            /* [unique][in] */ IUnknown __RPC_FAR *pUnkFactory,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPropertyStoreForKeys )( 
            IPropertyStoreFactory __RPC_FAR * This,
            /* [unique][in] */ const PROPERTYKEY __RPC_FAR *rgKeys,
            /* [in] */ UINT cKeys,
            /* [in] */ GETPROPERTYSTOREFLAGS flags,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        END_INTERFACE
    } IPropertyStoreFactoryVtbl;

    interface IPropertyStoreFactory
    {
        CONST_VTBL struct IPropertyStoreFactoryVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertyStoreFactory_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPropertyStoreFactory_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPropertyStoreFactory_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IPropertyStoreFactory_GetPropertyStore(This,flags,pUnkFactory,riid,ppv)	\
    (This)->lpVtbl -> GetPropertyStore(This,flags,pUnkFactory,riid,ppv)

#define IPropertyStoreFactory_GetPropertyStoreForKeys(This,rgKeys,cKeys,flags,riid,ppv)	\
    (This)->lpVtbl -> GetPropertyStoreForKeys(This,rgKeys,cKeys,flags,riid,ppv)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IPropertyStoreFactory_GetPropertyStore_Proxy( 
    IPropertyStoreFactory __RPC_FAR * This,
    /* [in] */ GETPROPERTYSTOREFLAGS flags,
    /* [unique][in] */ IUnknown __RPC_FAR *pUnkFactory,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IPropertyStoreFactory_GetPropertyStore_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPropertyStoreFactory_GetPropertyStoreForKeys_Proxy( 
    IPropertyStoreFactory __RPC_FAR * This,
    /* [unique][in] */ const PROPERTYKEY __RPC_FAR *rgKeys,
    /* [in] */ UINT cKeys,
    /* [in] */ GETPROPERTYSTOREFLAGS flags,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IPropertyStoreFactory_GetPropertyStoreForKeys_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IPropertyStoreFactory_INTERFACE_DEFINED__ */


#ifndef __IDelayedPropertyStoreFactory_INTERFACE_DEFINED__
#define __IDelayedPropertyStoreFactory_INTERFACE_DEFINED__

/* interface IDelayedPropertyStoreFactory */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IDelayedPropertyStoreFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("40d4577f-e237-4bdb-bd69-58f089431b6a")
    IDelayedPropertyStoreFactory : public IPropertyStoreFactory
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDelayedPropertyStore( 
            /* [in] */ GETPROPERTYSTOREFLAGS flags,
            /* [in] */ DWORD dwStoreId,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDelayedPropertyStoreFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDelayedPropertyStoreFactory __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDelayedPropertyStoreFactory __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDelayedPropertyStoreFactory __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPropertyStore )( 
            IDelayedPropertyStoreFactory __RPC_FAR * This,
            /* [in] */ GETPROPERTYSTOREFLAGS flags,
            /* [unique][in] */ IUnknown __RPC_FAR *pUnkFactory,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPropertyStoreForKeys )( 
            IDelayedPropertyStoreFactory __RPC_FAR * This,
            /* [unique][in] */ const PROPERTYKEY __RPC_FAR *rgKeys,
            /* [in] */ UINT cKeys,
            /* [in] */ GETPROPERTYSTOREFLAGS flags,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetDelayedPropertyStore )( 
            IDelayedPropertyStoreFactory __RPC_FAR * This,
            /* [in] */ GETPROPERTYSTOREFLAGS flags,
            /* [in] */ DWORD dwStoreId,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        END_INTERFACE
    } IDelayedPropertyStoreFactoryVtbl;

    interface IDelayedPropertyStoreFactory
    {
        CONST_VTBL struct IDelayedPropertyStoreFactoryVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDelayedPropertyStoreFactory_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDelayedPropertyStoreFactory_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDelayedPropertyStoreFactory_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDelayedPropertyStoreFactory_GetPropertyStore(This,flags,pUnkFactory,riid,ppv)	\
    (This)->lpVtbl -> GetPropertyStore(This,flags,pUnkFactory,riid,ppv)

#define IDelayedPropertyStoreFactory_GetPropertyStoreForKeys(This,rgKeys,cKeys,flags,riid,ppv)	\
    (This)->lpVtbl -> GetPropertyStoreForKeys(This,rgKeys,cKeys,flags,riid,ppv)


#define IDelayedPropertyStoreFactory_GetDelayedPropertyStore(This,flags,dwStoreId,riid,ppv)	\
    (This)->lpVtbl -> GetDelayedPropertyStore(This,flags,dwStoreId,riid,ppv)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDelayedPropertyStoreFactory_GetDelayedPropertyStore_Proxy( 
    IDelayedPropertyStoreFactory __RPC_FAR * This,
    /* [in] */ GETPROPERTYSTOREFLAGS flags,
    /* [in] */ DWORD dwStoreId,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IDelayedPropertyStoreFactory_GetDelayedPropertyStore_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDelayedPropertyStoreFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_propsys_0188 */
/* [local] */ 

/* [v1_enum] */ 
enum tagPERSIST_SPROPSTORE_FLAGS
    {	FPSPS_READONLY	= 0x1
    };
typedef int PERSIST_SPROPSTORE_FLAGS;

typedef struct tagSERIALIZEDPROPSTORAGE SERIALIZEDPROPSTORAGE;

typedef SERIALIZEDPROPSTORAGE __unaligned __RPC_FAR *PUSERIALIZEDPROPSTORAGE;

typedef const SERIALIZEDPROPSTORAGE __unaligned __RPC_FAR *PCUSERIALIZEDPROPSTORAGE;



extern RPC_IF_HANDLE __MIDL_itf_propsys_0188_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_propsys_0188_v0_0_s_ifspec;

#ifndef __IPersistSerializedPropStorage_INTERFACE_DEFINED__
#define __IPersistSerializedPropStorage_INTERFACE_DEFINED__

/* interface IPersistSerializedPropStorage */
/* [object][local][unique][uuid] */ 


EXTERN_C const IID IID_IPersistSerializedPropStorage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e318ad57-0aa0-450f-aca5-6fab7103d917")
    IPersistSerializedPropStorage : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFlags( 
            /* [in] */ PERSIST_SPROPSTORE_FLAGS flags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPropertyStorage( 
            /* [in] */ PCUSERIALIZEDPROPSTORAGE psps,
            /* [in] */ DWORD cb) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyStorage( 
            /* [out] */ SERIALIZEDPROPSTORAGE __RPC_FAR *__RPC_FAR *ppsps,
            /* [out] */ DWORD __RPC_FAR *pcb) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPersistSerializedPropStorageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IPersistSerializedPropStorage __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IPersistSerializedPropStorage __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IPersistSerializedPropStorage __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetFlags )( 
            IPersistSerializedPropStorage __RPC_FAR * This,
            /* [in] */ PERSIST_SPROPSTORE_FLAGS flags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetPropertyStorage )( 
            IPersistSerializedPropStorage __RPC_FAR * This,
            /* [in] */ PCUSERIALIZEDPROPSTORAGE psps,
            /* [in] */ DWORD cb);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPropertyStorage )( 
            IPersistSerializedPropStorage __RPC_FAR * This,
            /* [out] */ SERIALIZEDPROPSTORAGE __RPC_FAR *__RPC_FAR *ppsps,
            /* [out] */ DWORD __RPC_FAR *pcb);
        
        END_INTERFACE
    } IPersistSerializedPropStorageVtbl;

    interface IPersistSerializedPropStorage
    {
        CONST_VTBL struct IPersistSerializedPropStorageVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPersistSerializedPropStorage_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPersistSerializedPropStorage_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPersistSerializedPropStorage_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IPersistSerializedPropStorage_SetFlags(This,flags)	\
    (This)->lpVtbl -> SetFlags(This,flags)

#define IPersistSerializedPropStorage_SetPropertyStorage(This,psps,cb)	\
    (This)->lpVtbl -> SetPropertyStorage(This,psps,cb)

#define IPersistSerializedPropStorage_GetPropertyStorage(This,ppsps,pcb)	\
    (This)->lpVtbl -> GetPropertyStorage(This,ppsps,pcb)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IPersistSerializedPropStorage_SetFlags_Proxy( 
    IPersistSerializedPropStorage __RPC_FAR * This,
    /* [in] */ PERSIST_SPROPSTORE_FLAGS flags);


void __RPC_STUB IPersistSerializedPropStorage_SetFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPersistSerializedPropStorage_SetPropertyStorage_Proxy( 
    IPersistSerializedPropStorage __RPC_FAR * This,
    /* [in] */ PCUSERIALIZEDPROPSTORAGE psps,
    /* [in] */ DWORD cb);


void __RPC_STUB IPersistSerializedPropStorage_SetPropertyStorage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPersistSerializedPropStorage_GetPropertyStorage_Proxy( 
    IPersistSerializedPropStorage __RPC_FAR * This,
    /* [out] */ SERIALIZEDPROPSTORAGE __RPC_FAR *__RPC_FAR *ppsps,
    /* [out] */ DWORD __RPC_FAR *pcb);


void __RPC_STUB IPersistSerializedPropStorage_GetPropertyStorage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IPersistSerializedPropStorage_INTERFACE_DEFINED__ */


#ifndef __IPropertySystemChangeNotify_INTERFACE_DEFINED__
#define __IPropertySystemChangeNotify_INTERFACE_DEFINED__

/* interface IPropertySystemChangeNotify */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IPropertySystemChangeNotify;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fa955fd9-38be-4879-a6ce-824cf52d609f")
    IPropertySystemChangeNotify : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SchemaRefreshed( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPropertySystemChangeNotifyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IPropertySystemChangeNotify __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IPropertySystemChangeNotify __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IPropertySystemChangeNotify __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SchemaRefreshed )( 
            IPropertySystemChangeNotify __RPC_FAR * This);
        
        END_INTERFACE
    } IPropertySystemChangeNotifyVtbl;

    interface IPropertySystemChangeNotify
    {
        CONST_VTBL struct IPropertySystemChangeNotifyVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertySystemChangeNotify_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPropertySystemChangeNotify_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPropertySystemChangeNotify_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IPropertySystemChangeNotify_SchemaRefreshed(This)	\
    (This)->lpVtbl -> SchemaRefreshed(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IPropertySystemChangeNotify_SchemaRefreshed_Proxy( 
    IPropertySystemChangeNotify __RPC_FAR * This);


void __RPC_STUB IPropertySystemChangeNotify_SchemaRefreshed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IPropertySystemChangeNotify_INTERFACE_DEFINED__ */


#ifndef __ICreateObject_INTERFACE_DEFINED__
#define __ICreateObject_INTERFACE_DEFINED__

/* interface ICreateObject */
/* [object][unique][uuid] */ 


EXTERN_C const IID IID_ICreateObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("75121952-e0d0-43e5-9380-1d80483acf72")
    ICreateObject : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateObject( 
            /* [in] */ REFCLSID clsid,
            /* [unique][in] */ IUnknown __RPC_FAR *pUnkOuter,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICreateObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ICreateObject __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ICreateObject __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ICreateObject __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateObject )( 
            ICreateObject __RPC_FAR * This,
            /* [in] */ REFCLSID clsid,
            /* [unique][in] */ IUnknown __RPC_FAR *pUnkOuter,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        END_INTERFACE
    } ICreateObjectVtbl;

    interface ICreateObject
    {
        CONST_VTBL struct ICreateObjectVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICreateObject_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICreateObject_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICreateObject_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICreateObject_CreateObject(This,clsid,pUnkOuter,riid,ppv)	\
    (This)->lpVtbl -> CreateObject(This,clsid,pUnkOuter,riid,ppv)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ICreateObject_CreateObject_Proxy( 
    ICreateObject __RPC_FAR * This,
    /* [in] */ REFCLSID clsid,
    /* [unique][in] */ IUnknown __RPC_FAR *pUnkOuter,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB ICreateObject_CreateObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICreateObject_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_propsys_0191 */
/* [local] */ 

// Format a property value for display purposes
PSSTDAPI PSFormatForDisplay(
    __in REFPROPERTYKEY propkey,
    __in REFPROPVARIANT propvar,
    __in PROPDESC_FORMAT_FLAGS pdfFlags,
    __out_ecount(cchText) LPWSTR pwszText,
    __in DWORD cchText);

PSSTDAPI PSFormatForDisplayAlloc(
    __in REFPROPERTYKEY key,
    __in REFPROPVARIANT propvar,
    __in PROPDESC_FORMAT_FLAGS pdff,
    __deref_out PWSTR *ppszDisplay);

PSSTDAPI PSFormatPropertyValue(
    __in IPropertyStore *pps,
    __in IPropertyDescription *ppd,
    __in PROPDESC_FORMAT_FLAGS pdff,
    __deref_out LPWSTR *ppszDisplay);


#define PKEY_PIDSTR_MAX     10   // will take care of any long integer value
#define GUIDSTRING_MAX      (1 + 8 + 1 + 4 + 1 + 4 + 1 + 4 + 1 + 12 + 1 + 1)  // "{12345678-1234-1234-1234-123456789012}"
#define PKEYSTR_MAX         (GUIDSTRING_MAX + 1 + PKEY_PIDSTR_MAX)

// Convert a PROPERTYKEY to and from a PWSTR
PSSTDAPI PSStringFromPropertyKey(
    __in REFPROPERTYKEY pkey,
    __out_ecount(cch) LPWSTR psz,
    __in UINT cch);

PSSTDAPI PSPropertyKeyFromString(
    __in LPCWSTR pszString,
    __out PROPERTYKEY *pkey);


// Creates an in-memory property store
// Returns an IPropertyStore, IPersistSerializedPropStorage, and related interfaces interface
PSSTDAPI PSCreateMemoryPropertyStore(
    __in REFIID riid,
    __deref_out void **ppv);


// Create a read-only, delay-bind multiplexing property store
// Returns an IPropertyStore interface or related interfaces
PSSTDAPI PSCreateDelayedMultiplexPropertyStore(
    __in GETPROPERTYSTOREFLAGS flags,
    __in IDelayedPropertyStoreFactory *pdpsf,
    __in_ecount(cStores) const DWORD *rgStoreIds,
    __in DWORD cStores,
    __in REFIID riid,
    __deref_out void **ppv);


// Create a read-only property store from one or more sources (which each must support either IPropertyStore or IPropertySetStorage)
// Returns an IPropertyStore interface or related interfaces
PSSTDAPI PSCreateMultiplexPropertyStore(
    __in_ecount(cStores) IUnknown **prgpunkStores,
    __in DWORD cStores,
    __in REFIID riid,
    __deref_out void **ppv);


// Create a container for IPropertyChanges
// Returns an IPropertyChangeArray interface
PSSTDAPI PSCreatePropertyChangeArray(
    __in_ecount_opt(cChanges) const PROPERTYKEY *rgpropkey,
    __in_ecount_opt(cChanges) const PKA_FLAGS *rgflags,
    __in_ecount_opt(cChanges) const PROPVARIANT *rgpropvar,
    __in UINT cChanges,
    __in REFIID riid,
    __deref_out void **ppv);


// Create a simple property change
// Returns an IPropertyChange interface
PSSTDAPI PSCreateSimplePropertyChange(
    __in PKA_FLAGS flags,
    __in REFPROPERTYKEY key,
    __in REFPROPVARIANT propvar,
    __in REFIID riid,
    __deref_out void **ppv);


// Get a property description
// Returns an IPropertyDescription interface
PSSTDAPI PSGetPropertyDescription(
    __in REFPROPERTYKEY propkey,
    __in REFIID riid,
    __deref_out void **ppv);

PSSTDAPI PSGetPropertyDescriptionByName(
    __in LPCWSTR pszCanonicalName,
    __in REFIID riid,
    __deref_out void **ppv);


// Lookup a per-machine registered file property handler
PSSTDAPI PSLookupPropertyHandlerCLSID(
    __in PCWSTR pszFilePath,
    __out CLSID *pclsid);
// Get a property handler, on Vista or downlevel to XP
// punkItem is a shell item created with an SHCreateItemXXX API
// Returns an IPropertyStore
PSSTDAPI PSGetItemPropertyHandler(
    __in IUnknown *punkItem,
    __in BOOL fReadWrite,
    __in REFIID riid,
    __deref_out void **ppv);


// Get a property handler, on Vista or downlevel to XP
// punkItem is a shell item created with an SHCreateItemXXX API
// punkCreateObject supports ICreateObject
// Returns an IPropertyStore
PSSTDAPI PSGetItemPropertyHandlerWithCreateObject(
    __in IUnknown *punkItem,
    __in BOOL fReadWrite,
    __in IUnknown *punkCreateObject,
    __in REFIID riid,
    __deref_out void **ppv);


// Get or set a property value from a store
PSSTDAPI PSGetPropertyValue(
    __in IPropertyStore *pps,
    __in IPropertyDescription *ppd,
    __out PROPVARIANT *ppropvar);

PSSTDAPI PSSetPropertyValue(
    __in IPropertyStore *pps,
    __in IPropertyDescription *ppd,
    __in REFPROPVARIANT propvar);


// Interact with the set of property descriptions
PSSTDAPI PSRegisterPropertySchema(
    __in PCWSTR pszPath);

PSSTDAPI PSUnregisterPropertySchema(
    __in PCWSTR pszPath);

PSSTDAPI PSRefreshPropertySchema();

// Returns either: IPropertyDescriptionList or IEnumUnknown interfaces
PSSTDAPI PSEnumeratePropertyDescriptions(
    __in PROPDESC_ENUMFILTER filterOn,
    __in REFIID riid,
    __deref_out void **ppv);


// Convert between a PROPERTYKEY and its canonical name
PSSTDAPI PSGetPropertyKeyFromName(
    __in PCWSTR pszName,
    __out PROPERTYKEY *ppropkey);

PSSTDAPI PSGetNameFromPropertyKey(
    __in REFPROPERTYKEY propkey,
    __deref_out PWSTR *ppszCanonicalName);


// Coerce and canonicalize a property value
PSSTDAPI PSCoerceToCanonicalValue(
    __in REFPROPERTYKEY key,
    __inout PROPVARIANT *ppropvar);


// Convert a 'prop:' string into a list of property descriptions
// Returns an IPropertyDescriptionList interface
PSSTDAPI PSGetPropertyDescriptionListFromString(
    __in LPCWSTR pszPropList,
    __in REFIID riid,
    __deref_out void **ppv);


// Wrap an IPropertySetStorage interface in an IPropertyStore interface
// Returns an IPropertyStore or related interface
PSSTDAPI PSCreatePropertyStoreFromPropertySetStorage(
    __in IPropertySetStorage *ppss,
    DWORD grfMode,
    REFIID riid,
    __deref_out void **ppv);


// punkSource must support IPropertyStore or IPropertySetStorage
// On success, the returned ppv is guaranteed to support IPropertyStore.
// If punkSource already supports IPropertyStore, no wrapper is created.
PSSTDAPI PSCreatePropertyStoreFromObject(
    __in IUnknown *punk,
    __in DWORD grfMode,
    __in REFIID riid,
    __deref_out void **ppv);


// punkSource must support IPropertyStore
// riid may be IPropertyStore, IPropertySetStorage, IPropertyStoreCapabilities, or IObjectProvider
PSSTDAPI PSCreateAdapterFromPropertyStore(
    __in IPropertyStore *pps,
    __in REFIID riid,
    __deref_out void **ppv);


// Talk to the property system using an interface
// Returns an IPropertySystem interface
PSSTDAPI PSGetPropertySystem(
    __in REFIID riid,
    __deref_out void **ppv);


// Obtain a value from serialized property storage
PSSTDAPI PSGetPropertyFromPropertyStorage(
    __in_bcount(cb) PCUSERIALIZEDPROPSTORAGE psps, 
    __in DWORD cb, 
    __in REFPROPERTYKEY rpkey, 
    __out PROPVARIANT *ppropvar);


// Obtain a named value from serialized property storage
PSSTDAPI PSGetNamedPropertyFromPropertyStorage(
    __in_bcount(cb) PCUSERIALIZEDPROPSTORAGE psps, 
    __in DWORD cb, 
    __in LPCWSTR pszName, 
    __out PROPVARIANT *ppropvar);




extern RPC_IF_HANDLE __MIDL_itf_propsys_0191_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_propsys_0191_v0_0_s_ifspec;


#ifndef __PropSysObjects_LIBRARY_DEFINED__
#define __PropSysObjects_LIBRARY_DEFINED__

/* library PropSysObjects */
/* [version][lcid][uuid] */ 


EXTERN_C const IID LIBID_PropSysObjects;

EXTERN_C const CLSID CLSID_InMemoryPropertyStore;

#ifdef __cplusplus

class DECLSPEC_UUID("9a02e012-6303-4e1e-b9a1-630f802592c5")
InMemoryPropertyStore;
#endif

EXTERN_C const CLSID CLSID_PropertySystem;

#ifdef __cplusplus

class DECLSPEC_UUID("b8967f85-58ae-4f46-9fb2-5d7904798f4b")
PropertySystem;
#endif
#endif /* __PropSysObjects_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long __RPC_FAR *, unsigned long            , BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long __RPC_FAR *, BSTR __RPC_FAR * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     unsigned long __RPC_FAR *, unsigned long            , LPSAFEARRAY __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  LPSAFEARRAY_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, LPSAFEARRAY __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  LPSAFEARRAY_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, LPSAFEARRAY __RPC_FAR * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     unsigned long __RPC_FAR *, LPSAFEARRAY __RPC_FAR * ); 

/* [local] */ HRESULT STDMETHODCALLTYPE IInitializeWithStream_Initialize_Proxy( 
    IInitializeWithStream __RPC_FAR * This,
    /* [in] */ IStream __RPC_FAR *pstream,
    /* [in] */ DWORD grfMode);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IInitializeWithStream_Initialize_Stub( 
    IInitializeWithStream __RPC_FAR * This,
    /* [in] */ IStream __RPC_FAR *pstream,
    /* [in] */ DWORD grfMode);

/* [local] */ HRESULT STDMETHODCALLTYPE IPropertyDescription_CoerceToCanonicalValue_Proxy( 
    IPropertyDescription __RPC_FAR * This,
    /* [out][in] */ PROPVARIANT __RPC_FAR *ppropvar);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IPropertyDescription_CoerceToCanonicalValue_Stub( 
    IPropertyDescription __RPC_FAR * This,
    /* [in] */ REFPROPVARIANT propvar,
    /* [out] */ PROPVARIANT __RPC_FAR *ppropvar);



/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


