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
/* at Mon Jan 22 12:14:07 2007
 */
/* Compiler settings for ..\iextag.idl:
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

#ifndef __iextag_h__
#define __iextag_h__

/* Forward Declarations */ 

#ifndef __IPeerFactory_FWD_DEFINED__
#define __IPeerFactory_FWD_DEFINED__
typedef interface IPeerFactory IPeerFactory;
#endif 	/* __IPeerFactory_FWD_DEFINED__ */


#ifndef __IHomePage_FWD_DEFINED__
#define __IHomePage_FWD_DEFINED__
typedef interface IHomePage IHomePage;
#endif 	/* __IHomePage_FWD_DEFINED__ */


#ifndef __IClientCaps_FWD_DEFINED__
#define __IClientCaps_FWD_DEFINED__
typedef interface IClientCaps IClientCaps;
#endif 	/* __IClientCaps_FWD_DEFINED__ */


#ifndef __IIntelliForms_FWD_DEFINED__
#define __IIntelliForms_FWD_DEFINED__
typedef interface IIntelliForms IIntelliForms;
#endif 	/* __IIntelliForms_FWD_DEFINED__ */


#ifndef __Iwfolders_FWD_DEFINED__
#define __Iwfolders_FWD_DEFINED__
typedef interface Iwfolders Iwfolders;
#endif 	/* __Iwfolders_FWD_DEFINED__ */


#ifndef __IAnchorClick_FWD_DEFINED__
#define __IAnchorClick_FWD_DEFINED__
typedef interface IAnchorClick IAnchorClick;
#endif 	/* __IAnchorClick_FWD_DEFINED__ */


#ifndef __HTMLPersistEvents_FWD_DEFINED__
#define __HTMLPersistEvents_FWD_DEFINED__
typedef interface HTMLPersistEvents HTMLPersistEvents;
#endif 	/* __HTMLPersistEvents_FWD_DEFINED__ */


#ifndef __IHTMLUserDataOM_FWD_DEFINED__
#define __IHTMLUserDataOM_FWD_DEFINED__
typedef interface IHTMLUserDataOM IHTMLUserDataOM;
#endif 	/* __IHTMLUserDataOM_FWD_DEFINED__ */


#ifndef __IHTMLPersistDataOM_FWD_DEFINED__
#define __IHTMLPersistDataOM_FWD_DEFINED__
typedef interface IHTMLPersistDataOM IHTMLPersistDataOM;
#endif 	/* __IHTMLPersistDataOM_FWD_DEFINED__ */


#ifndef __IHTMLPersistData_FWD_DEFINED__
#define __IHTMLPersistData_FWD_DEFINED__
typedef interface IHTMLPersistData IHTMLPersistData;
#endif 	/* __IHTMLPersistData_FWD_DEFINED__ */


#ifndef __IDownloadBehavior_FWD_DEFINED__
#define __IDownloadBehavior_FWD_DEFINED__
typedef interface IDownloadBehavior IDownloadBehavior;
#endif 	/* __IDownloadBehavior_FWD_DEFINED__ */


#ifndef __LayoutRectEvents_FWD_DEFINED__
#define __LayoutRectEvents_FWD_DEFINED__
typedef interface LayoutRectEvents LayoutRectEvents;
#endif 	/* __LayoutRectEvents_FWD_DEFINED__ */


#ifndef __ILayoutRect_FWD_DEFINED__
#define __ILayoutRect_FWD_DEFINED__
typedef interface ILayoutRect ILayoutRect;
#endif 	/* __ILayoutRect_FWD_DEFINED__ */


#ifndef __IDeviceRect_FWD_DEFINED__
#define __IDeviceRect_FWD_DEFINED__
typedef interface IDeviceRect IDeviceRect;
#endif 	/* __IDeviceRect_FWD_DEFINED__ */


#ifndef __ITemplatePrinter_FWD_DEFINED__
#define __ITemplatePrinter_FWD_DEFINED__
typedef interface ITemplatePrinter ITemplatePrinter;
#endif 	/* __ITemplatePrinter_FWD_DEFINED__ */


#ifndef __ITemplatePrinter2_FWD_DEFINED__
#define __ITemplatePrinter2_FWD_DEFINED__
typedef interface ITemplatePrinter2 ITemplatePrinter2;
#endif 	/* __ITemplatePrinter2_FWD_DEFINED__ */


#ifndef __IHeaderFooter_FWD_DEFINED__
#define __IHeaderFooter_FWD_DEFINED__
typedef interface IHeaderFooter IHeaderFooter;
#endif 	/* __IHeaderFooter_FWD_DEFINED__ */


#ifndef __PeerFactory_FWD_DEFINED__
#define __PeerFactory_FWD_DEFINED__

#ifdef __cplusplus
typedef class PeerFactory PeerFactory;
#else
typedef struct PeerFactory PeerFactory;
#endif /* __cplusplus */

#endif 	/* __PeerFactory_FWD_DEFINED__ */


#ifndef __ClientCaps_FWD_DEFINED__
#define __ClientCaps_FWD_DEFINED__

#ifdef __cplusplus
typedef class ClientCaps ClientCaps;
#else
typedef struct ClientCaps ClientCaps;
#endif /* __cplusplus */

#endif 	/* __ClientCaps_FWD_DEFINED__ */


#ifndef __IntelliForms_FWD_DEFINED__
#define __IntelliForms_FWD_DEFINED__

#ifdef __cplusplus
typedef class IntelliForms IntelliForms;
#else
typedef struct IntelliForms IntelliForms;
#endif /* __cplusplus */

#endif 	/* __IntelliForms_FWD_DEFINED__ */


#ifndef __HomePage_FWD_DEFINED__
#define __HomePage_FWD_DEFINED__

#ifdef __cplusplus
typedef class HomePage HomePage;
#else
typedef struct HomePage HomePage;
#endif /* __cplusplus */

#endif 	/* __HomePage_FWD_DEFINED__ */


#ifndef __CPersistUserData_FWD_DEFINED__
#define __CPersistUserData_FWD_DEFINED__

#ifdef __cplusplus
typedef class CPersistUserData CPersistUserData;
#else
typedef struct CPersistUserData CPersistUserData;
#endif /* __cplusplus */

#endif 	/* __CPersistUserData_FWD_DEFINED__ */


#ifndef __CPersistDataPeer_FWD_DEFINED__
#define __CPersistDataPeer_FWD_DEFINED__

#ifdef __cplusplus
typedef class CPersistDataPeer CPersistDataPeer;
#else
typedef struct CPersistDataPeer CPersistDataPeer;
#endif /* __cplusplus */

#endif 	/* __CPersistDataPeer_FWD_DEFINED__ */


#ifndef __CPersistShortcut_FWD_DEFINED__
#define __CPersistShortcut_FWD_DEFINED__

#ifdef __cplusplus
typedef class CPersistShortcut CPersistShortcut;
#else
typedef struct CPersistShortcut CPersistShortcut;
#endif /* __cplusplus */

#endif 	/* __CPersistShortcut_FWD_DEFINED__ */


#ifndef __CPersistHistory_FWD_DEFINED__
#define __CPersistHistory_FWD_DEFINED__

#ifdef __cplusplus
typedef class CPersistHistory CPersistHistory;
#else
typedef struct CPersistHistory CPersistHistory;
#endif /* __cplusplus */

#endif 	/* __CPersistHistory_FWD_DEFINED__ */


#ifndef __CPersistSnapshot_FWD_DEFINED__
#define __CPersistSnapshot_FWD_DEFINED__

#ifdef __cplusplus
typedef class CPersistSnapshot CPersistSnapshot;
#else
typedef struct CPersistSnapshot CPersistSnapshot;
#endif /* __cplusplus */

#endif 	/* __CPersistSnapshot_FWD_DEFINED__ */


#ifndef __CDownloadBehavior_FWD_DEFINED__
#define __CDownloadBehavior_FWD_DEFINED__

#ifdef __cplusplus
typedef class CDownloadBehavior CDownloadBehavior;
#else
typedef struct CDownloadBehavior CDownloadBehavior;
#endif /* __cplusplus */

#endif 	/* __CDownloadBehavior_FWD_DEFINED__ */


#ifndef __wfolders_FWD_DEFINED__
#define __wfolders_FWD_DEFINED__

#ifdef __cplusplus
typedef class wfolders wfolders;
#else
typedef struct wfolders wfolders;
#endif /* __cplusplus */

#endif 	/* __wfolders_FWD_DEFINED__ */


#ifndef __AnchorClick_FWD_DEFINED__
#define __AnchorClick_FWD_DEFINED__

#ifdef __cplusplus
typedef class AnchorClick AnchorClick;
#else
typedef struct AnchorClick AnchorClick;
#endif /* __cplusplus */

#endif 	/* __AnchorClick_FWD_DEFINED__ */


#ifndef __CLayoutRect_FWD_DEFINED__
#define __CLayoutRect_FWD_DEFINED__

#ifdef __cplusplus
typedef class CLayoutRect CLayoutRect;
#else
typedef struct CLayoutRect CLayoutRect;
#endif /* __cplusplus */

#endif 	/* __CLayoutRect_FWD_DEFINED__ */


#ifndef __CDeviceRect_FWD_DEFINED__
#define __CDeviceRect_FWD_DEFINED__

#ifdef __cplusplus
typedef class CDeviceRect CDeviceRect;
#else
typedef struct CDeviceRect CDeviceRect;
#endif /* __cplusplus */

#endif 	/* __CDeviceRect_FWD_DEFINED__ */


#ifndef __CTemplatePrinter_FWD_DEFINED__
#define __CTemplatePrinter_FWD_DEFINED__

#ifdef __cplusplus
typedef class CTemplatePrinter CTemplatePrinter;
#else
typedef struct CTemplatePrinter CTemplatePrinter;
#endif /* __cplusplus */

#endif 	/* __CTemplatePrinter_FWD_DEFINED__ */


#ifndef __CHeaderFooter_FWD_DEFINED__
#define __CHeaderFooter_FWD_DEFINED__

#ifdef __cplusplus
typedef class CHeaderFooter CHeaderFooter;
#else
typedef struct CHeaderFooter CHeaderFooter;
#endif /* __cplusplus */

#endif 	/* __CHeaderFooter_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IPeerFactory_INTERFACE_DEFINED__
#define __IPeerFactory_INTERFACE_DEFINED__

/* interface IPeerFactory */
/* [object][unique][helpstring][uuid] */ 


EXTERN_C const IID IID_IPeerFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6663F9D3-B482-11d1-89C6-00C04FB6BFC4")
    IPeerFactory : public IUnknown
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IPeerFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IPeerFactory __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IPeerFactory __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IPeerFactory __RPC_FAR * This);
        
        END_INTERFACE
    } IPeerFactoryVtbl;

    interface IPeerFactory
    {
        CONST_VTBL struct IPeerFactoryVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPeerFactory_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPeerFactory_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPeerFactory_Release(This)	\
    (This)->lpVtbl -> Release(This)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPeerFactory_INTERFACE_DEFINED__ */


#ifndef __IHomePage_INTERFACE_DEFINED__
#define __IHomePage_INTERFACE_DEFINED__

/* interface IHomePage */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IHomePage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("766BF2AF-D650-11d1-9811-00C04FC31D2E")
    IHomePage : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE navigateHomePage( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setHomePage( 
            /* [in] */ BSTR bstrURL) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE isHomePage( 
            /* [in] */ BSTR bstrURL,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *p) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IHomePageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IHomePage __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IHomePage __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IHomePage __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IHomePage __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IHomePage __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IHomePage __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IHomePage __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *navigateHomePage )( 
            IHomePage __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *setHomePage )( 
            IHomePage __RPC_FAR * This,
            /* [in] */ BSTR bstrURL);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *isHomePage )( 
            IHomePage __RPC_FAR * This,
            /* [in] */ BSTR bstrURL,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *p);
        
        END_INTERFACE
    } IHomePageVtbl;

    interface IHomePage
    {
        CONST_VTBL struct IHomePageVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHomePage_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IHomePage_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IHomePage_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IHomePage_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IHomePage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IHomePage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IHomePage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IHomePage_navigateHomePage(This)	\
    (This)->lpVtbl -> navigateHomePage(This)

#define IHomePage_setHomePage(This,bstrURL)	\
    (This)->lpVtbl -> setHomePage(This,bstrURL)

#define IHomePage_isHomePage(This,bstrURL,p)	\
    (This)->lpVtbl -> isHomePage(This,bstrURL,p)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id] */ HRESULT STDMETHODCALLTYPE IHomePage_navigateHomePage_Proxy( 
    IHomePage __RPC_FAR * This);


void __RPC_STUB IHomePage_navigateHomePage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHomePage_setHomePage_Proxy( 
    IHomePage __RPC_FAR * This,
    /* [in] */ BSTR bstrURL);


void __RPC_STUB IHomePage_setHomePage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHomePage_isHomePage_Proxy( 
    IHomePage __RPC_FAR * This,
    /* [in] */ BSTR bstrURL,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *p);


void __RPC_STUB IHomePage_isHomePage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IHomePage_INTERFACE_DEFINED__ */


#ifndef __IClientCaps_INTERFACE_DEFINED__
#define __IClientCaps_INTERFACE_DEFINED__

/* interface IClientCaps */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IClientCaps;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7E8BC44D-AEFF-11D1-89C2-00C04FB6BFC4")
    IClientCaps : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_javaEnabled( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_cookieEnabled( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_cpuClass( 
            /* [out][retval] */ BSTR __RPC_FAR *p) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_systemLanguage( 
            /* [out][retval] */ BSTR __RPC_FAR *p) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_userLanguage( 
            /* [out][retval] */ BSTR __RPC_FAR *p) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_platform( 
            /* [out][retval] */ BSTR __RPC_FAR *p) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_connectionSpeed( 
            /* [out][retval] */ long __RPC_FAR *p) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_onLine( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_colorDepth( 
            /* [out][retval] */ long __RPC_FAR *p) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_bufferDepth( 
            /* [out][retval] */ long __RPC_FAR *p) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_width( 
            /* [out][retval] */ long __RPC_FAR *p) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_height( 
            /* [out][retval] */ long __RPC_FAR *p) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_availHeight( 
            /* [out][retval] */ long __RPC_FAR *p) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_availWidth( 
            /* [out][retval] */ long __RPC_FAR *p) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_connectionType( 
            /* [out][retval] */ BSTR __RPC_FAR *p) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE isComponentInstalled( 
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrType,
            /* [in][defaultvalue] */ BSTR bStrVer,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *p) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getComponentVersion( 
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrType,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrVer) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE compareVersions( 
            /* [in] */ BSTR bstrVer1,
            /* [in] */ BSTR bstrVer2,
            /* [retval][out] */ long __RPC_FAR *p) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE addComponentRequest( 
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrType,
            /* [in][defaultvalue] */ BSTR bstrVer = L"") = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE doComponentRequest( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *p) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE clearComponentRequest( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IClientCapsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IClientCaps __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IClientCaps __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IClientCaps __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IClientCaps __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IClientCaps __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IClientCaps __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IClientCaps __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_javaEnabled )( 
            IClientCaps __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_cookieEnabled )( 
            IClientCaps __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_cpuClass )( 
            IClientCaps __RPC_FAR * This,
            /* [out][retval] */ BSTR __RPC_FAR *p);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_systemLanguage )( 
            IClientCaps __RPC_FAR * This,
            /* [out][retval] */ BSTR __RPC_FAR *p);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_userLanguage )( 
            IClientCaps __RPC_FAR * This,
            /* [out][retval] */ BSTR __RPC_FAR *p);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_platform )( 
            IClientCaps __RPC_FAR * This,
            /* [out][retval] */ BSTR __RPC_FAR *p);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_connectionSpeed )( 
            IClientCaps __RPC_FAR * This,
            /* [out][retval] */ long __RPC_FAR *p);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_onLine )( 
            IClientCaps __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_colorDepth )( 
            IClientCaps __RPC_FAR * This,
            /* [out][retval] */ long __RPC_FAR *p);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_bufferDepth )( 
            IClientCaps __RPC_FAR * This,
            /* [out][retval] */ long __RPC_FAR *p);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_width )( 
            IClientCaps __RPC_FAR * This,
            /* [out][retval] */ long __RPC_FAR *p);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_height )( 
            IClientCaps __RPC_FAR * This,
            /* [out][retval] */ long __RPC_FAR *p);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_availHeight )( 
            IClientCaps __RPC_FAR * This,
            /* [out][retval] */ long __RPC_FAR *p);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_availWidth )( 
            IClientCaps __RPC_FAR * This,
            /* [out][retval] */ long __RPC_FAR *p);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_connectionType )( 
            IClientCaps __RPC_FAR * This,
            /* [out][retval] */ BSTR __RPC_FAR *p);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *isComponentInstalled )( 
            IClientCaps __RPC_FAR * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrType,
            /* [in][defaultvalue] */ BSTR bStrVer,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *getComponentVersion )( 
            IClientCaps __RPC_FAR * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrType,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrVer);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *compareVersions )( 
            IClientCaps __RPC_FAR * This,
            /* [in] */ BSTR bstrVer1,
            /* [in] */ BSTR bstrVer2,
            /* [retval][out] */ long __RPC_FAR *p);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *addComponentRequest )( 
            IClientCaps __RPC_FAR * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrType,
            /* [in][defaultvalue] */ BSTR bstrVer);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *doComponentRequest )( 
            IClientCaps __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *clearComponentRequest )( 
            IClientCaps __RPC_FAR * This);
        
        END_INTERFACE
    } IClientCapsVtbl;

    interface IClientCaps
    {
        CONST_VTBL struct IClientCapsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IClientCaps_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IClientCaps_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IClientCaps_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IClientCaps_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IClientCaps_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IClientCaps_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IClientCaps_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IClientCaps_get_javaEnabled(This,pVal)	\
    (This)->lpVtbl -> get_javaEnabled(This,pVal)

#define IClientCaps_get_cookieEnabled(This,pVal)	\
    (This)->lpVtbl -> get_cookieEnabled(This,pVal)

#define IClientCaps_get_cpuClass(This,p)	\
    (This)->lpVtbl -> get_cpuClass(This,p)

#define IClientCaps_get_systemLanguage(This,p)	\
    (This)->lpVtbl -> get_systemLanguage(This,p)

#define IClientCaps_get_userLanguage(This,p)	\
    (This)->lpVtbl -> get_userLanguage(This,p)

#define IClientCaps_get_platform(This,p)	\
    (This)->lpVtbl -> get_platform(This,p)

#define IClientCaps_get_connectionSpeed(This,p)	\
    (This)->lpVtbl -> get_connectionSpeed(This,p)

#define IClientCaps_get_onLine(This,p)	\
    (This)->lpVtbl -> get_onLine(This,p)

#define IClientCaps_get_colorDepth(This,p)	\
    (This)->lpVtbl -> get_colorDepth(This,p)

#define IClientCaps_get_bufferDepth(This,p)	\
    (This)->lpVtbl -> get_bufferDepth(This,p)

#define IClientCaps_get_width(This,p)	\
    (This)->lpVtbl -> get_width(This,p)

#define IClientCaps_get_height(This,p)	\
    (This)->lpVtbl -> get_height(This,p)

#define IClientCaps_get_availHeight(This,p)	\
    (This)->lpVtbl -> get_availHeight(This,p)

#define IClientCaps_get_availWidth(This,p)	\
    (This)->lpVtbl -> get_availWidth(This,p)

#define IClientCaps_get_connectionType(This,p)	\
    (This)->lpVtbl -> get_connectionType(This,p)

#define IClientCaps_isComponentInstalled(This,bstrName,bstrType,bStrVer,p)	\
    (This)->lpVtbl -> isComponentInstalled(This,bstrName,bstrType,bStrVer,p)

#define IClientCaps_getComponentVersion(This,bstrName,bstrType,pbstrVer)	\
    (This)->lpVtbl -> getComponentVersion(This,bstrName,bstrType,pbstrVer)

#define IClientCaps_compareVersions(This,bstrVer1,bstrVer2,p)	\
    (This)->lpVtbl -> compareVersions(This,bstrVer1,bstrVer2,p)

#define IClientCaps_addComponentRequest(This,bstrName,bstrType,bstrVer)	\
    (This)->lpVtbl -> addComponentRequest(This,bstrName,bstrType,bstrVer)

#define IClientCaps_doComponentRequest(This,p)	\
    (This)->lpVtbl -> doComponentRequest(This,p)

#define IClientCaps_clearComponentRequest(This)	\
    (This)->lpVtbl -> clearComponentRequest(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE IClientCaps_get_javaEnabled_Proxy( 
    IClientCaps __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pVal);


void __RPC_STUB IClientCaps_get_javaEnabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IClientCaps_get_cookieEnabled_Proxy( 
    IClientCaps __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pVal);


void __RPC_STUB IClientCaps_get_cookieEnabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IClientCaps_get_cpuClass_Proxy( 
    IClientCaps __RPC_FAR * This,
    /* [out][retval] */ BSTR __RPC_FAR *p);


void __RPC_STUB IClientCaps_get_cpuClass_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IClientCaps_get_systemLanguage_Proxy( 
    IClientCaps __RPC_FAR * This,
    /* [out][retval] */ BSTR __RPC_FAR *p);


void __RPC_STUB IClientCaps_get_systemLanguage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IClientCaps_get_userLanguage_Proxy( 
    IClientCaps __RPC_FAR * This,
    /* [out][retval] */ BSTR __RPC_FAR *p);


void __RPC_STUB IClientCaps_get_userLanguage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IClientCaps_get_platform_Proxy( 
    IClientCaps __RPC_FAR * This,
    /* [out][retval] */ BSTR __RPC_FAR *p);


void __RPC_STUB IClientCaps_get_platform_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IClientCaps_get_connectionSpeed_Proxy( 
    IClientCaps __RPC_FAR * This,
    /* [out][retval] */ long __RPC_FAR *p);


void __RPC_STUB IClientCaps_get_connectionSpeed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IClientCaps_get_onLine_Proxy( 
    IClientCaps __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);


void __RPC_STUB IClientCaps_get_onLine_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IClientCaps_get_colorDepth_Proxy( 
    IClientCaps __RPC_FAR * This,
    /* [out][retval] */ long __RPC_FAR *p);


void __RPC_STUB IClientCaps_get_colorDepth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IClientCaps_get_bufferDepth_Proxy( 
    IClientCaps __RPC_FAR * This,
    /* [out][retval] */ long __RPC_FAR *p);


void __RPC_STUB IClientCaps_get_bufferDepth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IClientCaps_get_width_Proxy( 
    IClientCaps __RPC_FAR * This,
    /* [out][retval] */ long __RPC_FAR *p);


void __RPC_STUB IClientCaps_get_width_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IClientCaps_get_height_Proxy( 
    IClientCaps __RPC_FAR * This,
    /* [out][retval] */ long __RPC_FAR *p);


void __RPC_STUB IClientCaps_get_height_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IClientCaps_get_availHeight_Proxy( 
    IClientCaps __RPC_FAR * This,
    /* [out][retval] */ long __RPC_FAR *p);


void __RPC_STUB IClientCaps_get_availHeight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IClientCaps_get_availWidth_Proxy( 
    IClientCaps __RPC_FAR * This,
    /* [out][retval] */ long __RPC_FAR *p);


void __RPC_STUB IClientCaps_get_availWidth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IClientCaps_get_connectionType_Proxy( 
    IClientCaps __RPC_FAR * This,
    /* [out][retval] */ BSTR __RPC_FAR *p);


void __RPC_STUB IClientCaps_get_connectionType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IClientCaps_isComponentInstalled_Proxy( 
    IClientCaps __RPC_FAR * This,
    /* [in] */ BSTR bstrName,
    /* [in] */ BSTR bstrType,
    /* [in][defaultvalue] */ BSTR bStrVer,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *p);


void __RPC_STUB IClientCaps_isComponentInstalled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IClientCaps_getComponentVersion_Proxy( 
    IClientCaps __RPC_FAR * This,
    /* [in] */ BSTR bstrName,
    /* [in] */ BSTR bstrType,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrVer);


void __RPC_STUB IClientCaps_getComponentVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IClientCaps_compareVersions_Proxy( 
    IClientCaps __RPC_FAR * This,
    /* [in] */ BSTR bstrVer1,
    /* [in] */ BSTR bstrVer2,
    /* [retval][out] */ long __RPC_FAR *p);


void __RPC_STUB IClientCaps_compareVersions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IClientCaps_addComponentRequest_Proxy( 
    IClientCaps __RPC_FAR * This,
    /* [in] */ BSTR bstrName,
    /* [in] */ BSTR bstrType,
    /* [in][defaultvalue] */ BSTR bstrVer);


void __RPC_STUB IClientCaps_addComponentRequest_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IClientCaps_doComponentRequest_Proxy( 
    IClientCaps __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *p);


void __RPC_STUB IClientCaps_doComponentRequest_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IClientCaps_clearComponentRequest_Proxy( 
    IClientCaps __RPC_FAR * This);


void __RPC_STUB IClientCaps_clearComponentRequest_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IClientCaps_INTERFACE_DEFINED__ */


#ifndef __IIntelliForms_INTERFACE_DEFINED__
#define __IIntelliForms_INTERFACE_DEFINED__

/* interface IIntelliForms */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IIntelliForms;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9B9F68E6-1AAA-11d2-BCA5-00C04FD929DB")
    IIntelliForms : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_enabled( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_enabled( 
            /* [in] */ VARIANT_BOOL bVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IIntelliFormsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IIntelliForms __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IIntelliForms __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IIntelliForms __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IIntelliForms __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IIntelliForms __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IIntelliForms __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IIntelliForms __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_enabled )( 
            IIntelliForms __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_enabled )( 
            IIntelliForms __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL bVal);
        
        END_INTERFACE
    } IIntelliFormsVtbl;

    interface IIntelliForms
    {
        CONST_VTBL struct IIntelliFormsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIntelliForms_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IIntelliForms_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IIntelliForms_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IIntelliForms_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IIntelliForms_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IIntelliForms_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IIntelliForms_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IIntelliForms_get_enabled(This,pVal)	\
    (This)->lpVtbl -> get_enabled(This,pVal)

#define IIntelliForms_put_enabled(This,bVal)	\
    (This)->lpVtbl -> put_enabled(This,bVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE IIntelliForms_get_enabled_Proxy( 
    IIntelliForms __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pVal);


void __RPC_STUB IIntelliForms_get_enabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IIntelliForms_put_enabled_Proxy( 
    IIntelliForms __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL bVal);


void __RPC_STUB IIntelliForms_put_enabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IIntelliForms_INTERFACE_DEFINED__ */


#ifndef __Iwfolders_INTERFACE_DEFINED__
#define __Iwfolders_INTERFACE_DEFINED__

/* interface Iwfolders */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_Iwfolders;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BAE31F98-1B81-11D2-A97A-00C04F8ECB02")
    Iwfolders : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE navigate( 
            /* [in] */ BSTR bstrUrl,
            /* [out][retval] */ BSTR __RPC_FAR *pbstrRetVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE navigateFrame( 
            /* [in] */ BSTR bstrUrl,
            /* [in] */ BSTR bstrTargetFrame,
            /* [out][retval] */ BSTR __RPC_FAR *pbstrRetVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE navigateNoSite( 
            /* [in] */ BSTR bstrUrl,
            /* [in] */ BSTR bstrTargetFrame,
            /* [in] */ DWORD dwhwnd,
            /* [in] */ IUnknown __RPC_FAR *pwb) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IwfoldersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            Iwfolders __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            Iwfolders __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            Iwfolders __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            Iwfolders __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            Iwfolders __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            Iwfolders __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            Iwfolders __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *navigate )( 
            Iwfolders __RPC_FAR * This,
            /* [in] */ BSTR bstrUrl,
            /* [out][retval] */ BSTR __RPC_FAR *pbstrRetVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *navigateFrame )( 
            Iwfolders __RPC_FAR * This,
            /* [in] */ BSTR bstrUrl,
            /* [in] */ BSTR bstrTargetFrame,
            /* [out][retval] */ BSTR __RPC_FAR *pbstrRetVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *navigateNoSite )( 
            Iwfolders __RPC_FAR * This,
            /* [in] */ BSTR bstrUrl,
            /* [in] */ BSTR bstrTargetFrame,
            /* [in] */ DWORD dwhwnd,
            /* [in] */ IUnknown __RPC_FAR *pwb);
        
        END_INTERFACE
    } IwfoldersVtbl;

    interface Iwfolders
    {
        CONST_VTBL struct IwfoldersVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define Iwfolders_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define Iwfolders_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define Iwfolders_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define Iwfolders_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define Iwfolders_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define Iwfolders_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define Iwfolders_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define Iwfolders_navigate(This,bstrUrl,pbstrRetVal)	\
    (This)->lpVtbl -> navigate(This,bstrUrl,pbstrRetVal)

#define Iwfolders_navigateFrame(This,bstrUrl,bstrTargetFrame,pbstrRetVal)	\
    (This)->lpVtbl -> navigateFrame(This,bstrUrl,bstrTargetFrame,pbstrRetVal)

#define Iwfolders_navigateNoSite(This,bstrUrl,bstrTargetFrame,dwhwnd,pwb)	\
    (This)->lpVtbl -> navigateNoSite(This,bstrUrl,bstrTargetFrame,dwhwnd,pwb)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Iwfolders_navigate_Proxy( 
    Iwfolders __RPC_FAR * This,
    /* [in] */ BSTR bstrUrl,
    /* [out][retval] */ BSTR __RPC_FAR *pbstrRetVal);


void __RPC_STUB Iwfolders_navigate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Iwfolders_navigateFrame_Proxy( 
    Iwfolders __RPC_FAR * This,
    /* [in] */ BSTR bstrUrl,
    /* [in] */ BSTR bstrTargetFrame,
    /* [out][retval] */ BSTR __RPC_FAR *pbstrRetVal);


void __RPC_STUB Iwfolders_navigateFrame_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE Iwfolders_navigateNoSite_Proxy( 
    Iwfolders __RPC_FAR * This,
    /* [in] */ BSTR bstrUrl,
    /* [in] */ BSTR bstrTargetFrame,
    /* [in] */ DWORD dwhwnd,
    /* [in] */ IUnknown __RPC_FAR *pwb);


void __RPC_STUB Iwfolders_navigateNoSite_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __Iwfolders_INTERFACE_DEFINED__ */


#ifndef __IAnchorClick_INTERFACE_DEFINED__
#define __IAnchorClick_INTERFACE_DEFINED__

/* interface IAnchorClick */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAnchorClick;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("13D5413B-33B9-11D2-95A7-00C04F8ECB02")
    IAnchorClick : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ProcOnClick( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAnchorClickVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IAnchorClick __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IAnchorClick __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IAnchorClick __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IAnchorClick __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IAnchorClick __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IAnchorClick __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IAnchorClick __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ProcOnClick )( 
            IAnchorClick __RPC_FAR * This);
        
        END_INTERFACE
    } IAnchorClickVtbl;

    interface IAnchorClick
    {
        CONST_VTBL struct IAnchorClickVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAnchorClick_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAnchorClick_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAnchorClick_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAnchorClick_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAnchorClick_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAnchorClick_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAnchorClick_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAnchorClick_ProcOnClick(This)	\
    (This)->lpVtbl -> ProcOnClick(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAnchorClick_ProcOnClick_Proxy( 
    IAnchorClick __RPC_FAR * This);


void __RPC_STUB IAnchorClick_ProcOnClick_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAnchorClick_INTERFACE_DEFINED__ */


#ifndef __IHTMLUserDataOM_INTERFACE_DEFINED__
#define __IHTMLUserDataOM_INTERFACE_DEFINED__

/* interface IHTMLUserDataOM */
/* [object][uuid][dual][oleautomation] */ 


EXTERN_C const IID IID_IHTMLUserDataOM;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3050f48f-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLUserDataOM : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_XMLDocument( 
            /* [out][retval] */ IDispatch __RPC_FAR *__RPC_FAR *p) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE save( 
            /* [in] */ BSTR strName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE load( 
            /* [in] */ BSTR strName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getAttribute( 
            /* [in] */ BSTR name,
            /* [out][retval] */ VARIANT __RPC_FAR *pValue) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setAttribute( 
            /* [in] */ BSTR name,
            /* [in] */ VARIANT value) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE removeAttribute( 
            /* [in] */ BSTR name) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_expires( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_expires( 
            /* [out][retval] */ BSTR __RPC_FAR *pbstr) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IHTMLUserDataOMVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IHTMLUserDataOM __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IHTMLUserDataOM __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IHTMLUserDataOM __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IHTMLUserDataOM __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IHTMLUserDataOM __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IHTMLUserDataOM __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IHTMLUserDataOM __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_XMLDocument )( 
            IHTMLUserDataOM __RPC_FAR * This,
            /* [out][retval] */ IDispatch __RPC_FAR *__RPC_FAR *p);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *save )( 
            IHTMLUserDataOM __RPC_FAR * This,
            /* [in] */ BSTR strName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *load )( 
            IHTMLUserDataOM __RPC_FAR * This,
            /* [in] */ BSTR strName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *getAttribute )( 
            IHTMLUserDataOM __RPC_FAR * This,
            /* [in] */ BSTR name,
            /* [out][retval] */ VARIANT __RPC_FAR *pValue);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *setAttribute )( 
            IHTMLUserDataOM __RPC_FAR * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT value);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *removeAttribute )( 
            IHTMLUserDataOM __RPC_FAR * This,
            /* [in] */ BSTR name);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_expires )( 
            IHTMLUserDataOM __RPC_FAR * This,
            /* [in] */ BSTR bstr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_expires )( 
            IHTMLUserDataOM __RPC_FAR * This,
            /* [out][retval] */ BSTR __RPC_FAR *pbstr);
        
        END_INTERFACE
    } IHTMLUserDataOMVtbl;

    interface IHTMLUserDataOM
    {
        CONST_VTBL struct IHTMLUserDataOMVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHTMLUserDataOM_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IHTMLUserDataOM_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IHTMLUserDataOM_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IHTMLUserDataOM_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IHTMLUserDataOM_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IHTMLUserDataOM_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IHTMLUserDataOM_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IHTMLUserDataOM_get_XMLDocument(This,p)	\
    (This)->lpVtbl -> get_XMLDocument(This,p)

#define IHTMLUserDataOM_save(This,strName)	\
    (This)->lpVtbl -> save(This,strName)

#define IHTMLUserDataOM_load(This,strName)	\
    (This)->lpVtbl -> load(This,strName)

#define IHTMLUserDataOM_getAttribute(This,name,pValue)	\
    (This)->lpVtbl -> getAttribute(This,name,pValue)

#define IHTMLUserDataOM_setAttribute(This,name,value)	\
    (This)->lpVtbl -> setAttribute(This,name,value)

#define IHTMLUserDataOM_removeAttribute(This,name)	\
    (This)->lpVtbl -> removeAttribute(This,name)

#define IHTMLUserDataOM_put_expires(This,bstr)	\
    (This)->lpVtbl -> put_expires(This,bstr)

#define IHTMLUserDataOM_get_expires(This,pbstr)	\
    (This)->lpVtbl -> get_expires(This,pbstr)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLUserDataOM_get_XMLDocument_Proxy( 
    IHTMLUserDataOM __RPC_FAR * This,
    /* [out][retval] */ IDispatch __RPC_FAR *__RPC_FAR *p);


void __RPC_STUB IHTMLUserDataOM_get_XMLDocument_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHTMLUserDataOM_save_Proxy( 
    IHTMLUserDataOM __RPC_FAR * This,
    /* [in] */ BSTR strName);


void __RPC_STUB IHTMLUserDataOM_save_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHTMLUserDataOM_load_Proxy( 
    IHTMLUserDataOM __RPC_FAR * This,
    /* [in] */ BSTR strName);


void __RPC_STUB IHTMLUserDataOM_load_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHTMLUserDataOM_getAttribute_Proxy( 
    IHTMLUserDataOM __RPC_FAR * This,
    /* [in] */ BSTR name,
    /* [out][retval] */ VARIANT __RPC_FAR *pValue);


void __RPC_STUB IHTMLUserDataOM_getAttribute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHTMLUserDataOM_setAttribute_Proxy( 
    IHTMLUserDataOM __RPC_FAR * This,
    /* [in] */ BSTR name,
    /* [in] */ VARIANT value);


void __RPC_STUB IHTMLUserDataOM_setAttribute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHTMLUserDataOM_removeAttribute_Proxy( 
    IHTMLUserDataOM __RPC_FAR * This,
    /* [in] */ BSTR name);


void __RPC_STUB IHTMLUserDataOM_removeAttribute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IHTMLUserDataOM_put_expires_Proxy( 
    IHTMLUserDataOM __RPC_FAR * This,
    /* [in] */ BSTR bstr);


void __RPC_STUB IHTMLUserDataOM_put_expires_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLUserDataOM_get_expires_Proxy( 
    IHTMLUserDataOM __RPC_FAR * This,
    /* [out][retval] */ BSTR __RPC_FAR *pbstr);


void __RPC_STUB IHTMLUserDataOM_get_expires_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IHTMLUserDataOM_INTERFACE_DEFINED__ */


#ifndef __IHTMLPersistDataOM_INTERFACE_DEFINED__
#define __IHTMLPersistDataOM_INTERFACE_DEFINED__

/* interface IHTMLPersistDataOM */
/* [object][uuid][dual][oleautomation] */ 


EXTERN_C const IID IID_IHTMLPersistDataOM;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3050f4c0-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLPersistDataOM : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_XMLDocument( 
            /* [out][retval] */ IDispatch __RPC_FAR *__RPC_FAR *p) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getAttribute( 
            /* [in] */ BSTR name,
            /* [out][retval] */ VARIANT __RPC_FAR *pValue) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setAttribute( 
            /* [in] */ BSTR name,
            /* [in] */ VARIANT value) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE removeAttribute( 
            /* [in] */ BSTR name) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IHTMLPersistDataOMVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IHTMLPersistDataOM __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IHTMLPersistDataOM __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IHTMLPersistDataOM __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IHTMLPersistDataOM __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IHTMLPersistDataOM __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IHTMLPersistDataOM __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IHTMLPersistDataOM __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_XMLDocument )( 
            IHTMLPersistDataOM __RPC_FAR * This,
            /* [out][retval] */ IDispatch __RPC_FAR *__RPC_FAR *p);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *getAttribute )( 
            IHTMLPersistDataOM __RPC_FAR * This,
            /* [in] */ BSTR name,
            /* [out][retval] */ VARIANT __RPC_FAR *pValue);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *setAttribute )( 
            IHTMLPersistDataOM __RPC_FAR * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT value);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *removeAttribute )( 
            IHTMLPersistDataOM __RPC_FAR * This,
            /* [in] */ BSTR name);
        
        END_INTERFACE
    } IHTMLPersistDataOMVtbl;

    interface IHTMLPersistDataOM
    {
        CONST_VTBL struct IHTMLPersistDataOMVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHTMLPersistDataOM_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IHTMLPersistDataOM_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IHTMLPersistDataOM_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IHTMLPersistDataOM_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IHTMLPersistDataOM_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IHTMLPersistDataOM_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IHTMLPersistDataOM_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IHTMLPersistDataOM_get_XMLDocument(This,p)	\
    (This)->lpVtbl -> get_XMLDocument(This,p)

#define IHTMLPersistDataOM_getAttribute(This,name,pValue)	\
    (This)->lpVtbl -> getAttribute(This,name,pValue)

#define IHTMLPersistDataOM_setAttribute(This,name,value)	\
    (This)->lpVtbl -> setAttribute(This,name,value)

#define IHTMLPersistDataOM_removeAttribute(This,name)	\
    (This)->lpVtbl -> removeAttribute(This,name)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE IHTMLPersistDataOM_get_XMLDocument_Proxy( 
    IHTMLPersistDataOM __RPC_FAR * This,
    /* [out][retval] */ IDispatch __RPC_FAR *__RPC_FAR *p);


void __RPC_STUB IHTMLPersistDataOM_get_XMLDocument_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHTMLPersistDataOM_getAttribute_Proxy( 
    IHTMLPersistDataOM __RPC_FAR * This,
    /* [in] */ BSTR name,
    /* [out][retval] */ VARIANT __RPC_FAR *pValue);


void __RPC_STUB IHTMLPersistDataOM_getAttribute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHTMLPersistDataOM_setAttribute_Proxy( 
    IHTMLPersistDataOM __RPC_FAR * This,
    /* [in] */ BSTR name,
    /* [in] */ VARIANT value);


void __RPC_STUB IHTMLPersistDataOM_setAttribute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHTMLPersistDataOM_removeAttribute_Proxy( 
    IHTMLPersistDataOM __RPC_FAR * This,
    /* [in] */ BSTR name);


void __RPC_STUB IHTMLPersistDataOM_removeAttribute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IHTMLPersistDataOM_INTERFACE_DEFINED__ */


#ifndef __IHTMLPersistData_INTERFACE_DEFINED__
#define __IHTMLPersistData_INTERFACE_DEFINED__

/* interface IHTMLPersistData */
/* [object][uuid][dual][oleautomation] */ 


EXTERN_C const IID IID_IHTMLPersistData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3050f4c5-98b5-11cf-bb82-00aa00bdce0b")
    IHTMLPersistData : public IUnknown
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE save( 
            /* [in] */ IUnknown __RPC_FAR *pUnk,
            /* [in] */ long lType,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *fContinueBroacast) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE load( 
            /* [in] */ IUnknown __RPC_FAR *pUnk,
            /* [in] */ long lType,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *fDoDefault) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE queryType( 
            /* [in] */ long lType,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *pfSupportsType) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IHTMLPersistDataVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IHTMLPersistData __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IHTMLPersistData __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IHTMLPersistData __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *save )( 
            IHTMLPersistData __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *pUnk,
            /* [in] */ long lType,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *fContinueBroacast);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *load )( 
            IHTMLPersistData __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *pUnk,
            /* [in] */ long lType,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *fDoDefault);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *queryType )( 
            IHTMLPersistData __RPC_FAR * This,
            /* [in] */ long lType,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *pfSupportsType);
        
        END_INTERFACE
    } IHTMLPersistDataVtbl;

    interface IHTMLPersistData
    {
        CONST_VTBL struct IHTMLPersistDataVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHTMLPersistData_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IHTMLPersistData_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IHTMLPersistData_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IHTMLPersistData_save(This,pUnk,lType,fContinueBroacast)	\
    (This)->lpVtbl -> save(This,pUnk,lType,fContinueBroacast)

#define IHTMLPersistData_load(This,pUnk,lType,fDoDefault)	\
    (This)->lpVtbl -> load(This,pUnk,lType,fDoDefault)

#define IHTMLPersistData_queryType(This,lType,pfSupportsType)	\
    (This)->lpVtbl -> queryType(This,lType,pfSupportsType)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id] */ HRESULT STDMETHODCALLTYPE IHTMLPersistData_save_Proxy( 
    IHTMLPersistData __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *pUnk,
    /* [in] */ long lType,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *fContinueBroacast);


void __RPC_STUB IHTMLPersistData_save_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHTMLPersistData_load_Proxy( 
    IHTMLPersistData __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *pUnk,
    /* [in] */ long lType,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *fDoDefault);


void __RPC_STUB IHTMLPersistData_load_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IHTMLPersistData_queryType_Proxy( 
    IHTMLPersistData __RPC_FAR * This,
    /* [in] */ long lType,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *pfSupportsType);


void __RPC_STUB IHTMLPersistData_queryType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IHTMLPersistData_INTERFACE_DEFINED__ */


#ifndef __IDownloadBehavior_INTERFACE_DEFINED__
#define __IDownloadBehavior_INTERFACE_DEFINED__

/* interface IDownloadBehavior */
/* [object][uuid][dual][oleautomation] */ 


EXTERN_C const IID IID_IDownloadBehavior;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3050f5bd-98b5-11cf-bb82-00aa00bdce0b")
    IDownloadBehavior : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE startDownload( 
            /* [in] */ BSTR bstrUrl,
            /* [in] */ IDispatch __RPC_FAR *pdispCallback) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDownloadBehaviorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDownloadBehavior __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDownloadBehavior __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDownloadBehavior __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IDownloadBehavior __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IDownloadBehavior __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IDownloadBehavior __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IDownloadBehavior __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *startDownload )( 
            IDownloadBehavior __RPC_FAR * This,
            /* [in] */ BSTR bstrUrl,
            /* [in] */ IDispatch __RPC_FAR *pdispCallback);
        
        END_INTERFACE
    } IDownloadBehaviorVtbl;

    interface IDownloadBehavior
    {
        CONST_VTBL struct IDownloadBehaviorVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDownloadBehavior_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDownloadBehavior_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDownloadBehavior_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDownloadBehavior_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDownloadBehavior_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDownloadBehavior_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDownloadBehavior_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDownloadBehavior_startDownload(This,bstrUrl,pdispCallback)	\
    (This)->lpVtbl -> startDownload(This,bstrUrl,pdispCallback)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id] */ HRESULT STDMETHODCALLTYPE IDownloadBehavior_startDownload_Proxy( 
    IDownloadBehavior __RPC_FAR * This,
    /* [in] */ BSTR bstrUrl,
    /* [in] */ IDispatch __RPC_FAR *pdispCallback);


void __RPC_STUB IDownloadBehavior_startDownload_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDownloadBehavior_INTERFACE_DEFINED__ */


#ifndef __ILayoutRect_INTERFACE_DEFINED__
#define __ILayoutRect_INTERFACE_DEFINED__

/* interface ILayoutRect */
/* [object][uuid][dual][oleautomation] */ 


EXTERN_C const IID IID_ILayoutRect;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3050f665-98b5-11cf-bb82-00aa00bdce0b")
    ILayoutRect : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_nextRect( 
            /* [in] */ BSTR bstrElementId) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_nextRect( 
            /* [out][retval] */ BSTR __RPC_FAR *pbstrElementId) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_contentSrc( 
            /* [in] */ VARIANT varContentSrc) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_contentSrc( 
            /* [out][retval] */ VARIANT __RPC_FAR *pvarContentSrc) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_honorPageBreaks( 
            /* [in] */ VARIANT_BOOL v) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_honorPageBreaks( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_honorPageRules( 
            /* [in] */ VARIANT_BOOL v) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_honorPageRules( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_nextRectElement( 
            /* [in] */ IDispatch __RPC_FAR *pElem) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_nextRectElement( 
            /* [out][retval] */ IDispatch __RPC_FAR *__RPC_FAR *ppElem) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_contentDocument( 
            /* [out][retval] */ IDispatch __RPC_FAR *__RPC_FAR *pDoc) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ILayoutRectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ILayoutRect __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ILayoutRect __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ILayoutRect __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ILayoutRect __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ILayoutRect __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ILayoutRect __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ILayoutRect __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_nextRect )( 
            ILayoutRect __RPC_FAR * This,
            /* [in] */ BSTR bstrElementId);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_nextRect )( 
            ILayoutRect __RPC_FAR * This,
            /* [out][retval] */ BSTR __RPC_FAR *pbstrElementId);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_contentSrc )( 
            ILayoutRect __RPC_FAR * This,
            /* [in] */ VARIANT varContentSrc);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_contentSrc )( 
            ILayoutRect __RPC_FAR * This,
            /* [out][retval] */ VARIANT __RPC_FAR *pvarContentSrc);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_honorPageBreaks )( 
            ILayoutRect __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_honorPageBreaks )( 
            ILayoutRect __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_honorPageRules )( 
            ILayoutRect __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_honorPageRules )( 
            ILayoutRect __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_nextRectElement )( 
            ILayoutRect __RPC_FAR * This,
            /* [in] */ IDispatch __RPC_FAR *pElem);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_nextRectElement )( 
            ILayoutRect __RPC_FAR * This,
            /* [out][retval] */ IDispatch __RPC_FAR *__RPC_FAR *ppElem);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_contentDocument )( 
            ILayoutRect __RPC_FAR * This,
            /* [out][retval] */ IDispatch __RPC_FAR *__RPC_FAR *pDoc);
        
        END_INTERFACE
    } ILayoutRectVtbl;

    interface ILayoutRect
    {
        CONST_VTBL struct ILayoutRectVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILayoutRect_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ILayoutRect_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ILayoutRect_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ILayoutRect_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ILayoutRect_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ILayoutRect_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ILayoutRect_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ILayoutRect_put_nextRect(This,bstrElementId)	\
    (This)->lpVtbl -> put_nextRect(This,bstrElementId)

#define ILayoutRect_get_nextRect(This,pbstrElementId)	\
    (This)->lpVtbl -> get_nextRect(This,pbstrElementId)

#define ILayoutRect_put_contentSrc(This,varContentSrc)	\
    (This)->lpVtbl -> put_contentSrc(This,varContentSrc)

#define ILayoutRect_get_contentSrc(This,pvarContentSrc)	\
    (This)->lpVtbl -> get_contentSrc(This,pvarContentSrc)

#define ILayoutRect_put_honorPageBreaks(This,v)	\
    (This)->lpVtbl -> put_honorPageBreaks(This,v)

#define ILayoutRect_get_honorPageBreaks(This,p)	\
    (This)->lpVtbl -> get_honorPageBreaks(This,p)

#define ILayoutRect_put_honorPageRules(This,v)	\
    (This)->lpVtbl -> put_honorPageRules(This,v)

#define ILayoutRect_get_honorPageRules(This,p)	\
    (This)->lpVtbl -> get_honorPageRules(This,p)

#define ILayoutRect_put_nextRectElement(This,pElem)	\
    (This)->lpVtbl -> put_nextRectElement(This,pElem)

#define ILayoutRect_get_nextRectElement(This,ppElem)	\
    (This)->lpVtbl -> get_nextRectElement(This,ppElem)

#define ILayoutRect_get_contentDocument(This,pDoc)	\
    (This)->lpVtbl -> get_contentDocument(This,pDoc)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propput] */ HRESULT STDMETHODCALLTYPE ILayoutRect_put_nextRect_Proxy( 
    ILayoutRect __RPC_FAR * This,
    /* [in] */ BSTR bstrElementId);


void __RPC_STUB ILayoutRect_put_nextRect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ILayoutRect_get_nextRect_Proxy( 
    ILayoutRect __RPC_FAR * This,
    /* [out][retval] */ BSTR __RPC_FAR *pbstrElementId);


void __RPC_STUB ILayoutRect_get_nextRect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ILayoutRect_put_contentSrc_Proxy( 
    ILayoutRect __RPC_FAR * This,
    /* [in] */ VARIANT varContentSrc);


void __RPC_STUB ILayoutRect_put_contentSrc_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ILayoutRect_get_contentSrc_Proxy( 
    ILayoutRect __RPC_FAR * This,
    /* [out][retval] */ VARIANT __RPC_FAR *pvarContentSrc);


void __RPC_STUB ILayoutRect_get_contentSrc_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ILayoutRect_put_honorPageBreaks_Proxy( 
    ILayoutRect __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL v);


void __RPC_STUB ILayoutRect_put_honorPageBreaks_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ILayoutRect_get_honorPageBreaks_Proxy( 
    ILayoutRect __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);


void __RPC_STUB ILayoutRect_get_honorPageBreaks_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ILayoutRect_put_honorPageRules_Proxy( 
    ILayoutRect __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL v);


void __RPC_STUB ILayoutRect_put_honorPageRules_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ILayoutRect_get_honorPageRules_Proxy( 
    ILayoutRect __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);


void __RPC_STUB ILayoutRect_get_honorPageRules_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ILayoutRect_put_nextRectElement_Proxy( 
    ILayoutRect __RPC_FAR * This,
    /* [in] */ IDispatch __RPC_FAR *pElem);


void __RPC_STUB ILayoutRect_put_nextRectElement_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ILayoutRect_get_nextRectElement_Proxy( 
    ILayoutRect __RPC_FAR * This,
    /* [out][retval] */ IDispatch __RPC_FAR *__RPC_FAR *ppElem);


void __RPC_STUB ILayoutRect_get_nextRectElement_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ILayoutRect_get_contentDocument_Proxy( 
    ILayoutRect __RPC_FAR * This,
    /* [out][retval] */ IDispatch __RPC_FAR *__RPC_FAR *pDoc);


void __RPC_STUB ILayoutRect_get_contentDocument_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ILayoutRect_INTERFACE_DEFINED__ */


#ifndef __IDeviceRect_INTERFACE_DEFINED__
#define __IDeviceRect_INTERFACE_DEFINED__

/* interface IDeviceRect */
/* [object][uuid][dual][oleautomation] */ 


EXTERN_C const IID IID_IDeviceRect;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3050f6d5-98b5-11cf-bb82-00aa00bdce0b")
    IDeviceRect : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IDeviceRectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDeviceRect __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDeviceRect __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDeviceRect __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IDeviceRect __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IDeviceRect __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IDeviceRect __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IDeviceRect __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        END_INTERFACE
    } IDeviceRectVtbl;

    interface IDeviceRect
    {
        CONST_VTBL struct IDeviceRectVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDeviceRect_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDeviceRect_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDeviceRect_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDeviceRect_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDeviceRect_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDeviceRect_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDeviceRect_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDeviceRect_INTERFACE_DEFINED__ */


#ifndef __ITemplatePrinter_INTERFACE_DEFINED__
#define __ITemplatePrinter_INTERFACE_DEFINED__

/* interface ITemplatePrinter */
/* [object][uuid][dual][oleautomation] */ 


EXTERN_C const IID IID_ITemplatePrinter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3050f6b4-98b5-11cf-bb82-00aa00bdce0b")
    ITemplatePrinter : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE startDoc( 
            /* [in] */ BSTR bstrTitle,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE stopDoc( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE printBlankPage( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE printPage( 
            /* [in] */ IDispatch __RPC_FAR *pElemDisp) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ensurePrintDialogDefaults( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE showPrintDialog( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE showPageSetupDialog( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE printNonNative( 
            /* [in] */ IUnknown __RPC_FAR *pMarkup,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE printNonNativeFrames( 
            /* [in] */ IUnknown __RPC_FAR *pMarkup,
            /* [in] */ VARIANT_BOOL fActiveFrame) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_framesetDocument( 
            /* [in] */ VARIANT_BOOL v) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_framesetDocument( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_frameActive( 
            /* [in] */ VARIANT_BOOL v) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_frameActive( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_frameAsShown( 
            /* [in] */ VARIANT_BOOL v) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_frameAsShown( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_selection( 
            /* [in] */ VARIANT_BOOL v) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_selection( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_selectedPages( 
            /* [in] */ VARIANT_BOOL v) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_selectedPages( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_currentPage( 
            /* [in] */ VARIANT_BOOL v) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_currentPage( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_currentPageAvail( 
            /* [in] */ VARIANT_BOOL v) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_currentPageAvail( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_collate( 
            /* [in] */ VARIANT_BOOL v) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_collate( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_duplex( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_copies( 
            /* [in] */ WORD v) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_copies( 
            /* [out][retval] */ WORD __RPC_FAR *p) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_pageFrom( 
            /* [in] */ WORD v) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_pageFrom( 
            /* [out][retval] */ WORD __RPC_FAR *p) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_pageTo( 
            /* [in] */ WORD v) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_pageTo( 
            /* [out][retval] */ WORD __RPC_FAR *p) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_tableOfLinks( 
            /* [in] */ VARIANT_BOOL v) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_tableOfLinks( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_allLinkedDocuments( 
            /* [in] */ VARIANT_BOOL v) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_allLinkedDocuments( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_header( 
            /* [in] */ BSTR bstrHeader) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_header( 
            /* [out][retval] */ BSTR __RPC_FAR *bstrHeader) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_footer( 
            /* [in] */ BSTR bstrFooter) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_footer( 
            /* [out][retval] */ BSTR __RPC_FAR *bstrFooter) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_marginLeft( 
            /* [in] */ long v) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_marginLeft( 
            /* [out][retval] */ long __RPC_FAR *p) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_marginRight( 
            /* [in] */ long v) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_marginRight( 
            /* [out][retval] */ long __RPC_FAR *p) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_marginTop( 
            /* [in] */ long v) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_marginTop( 
            /* [out][retval] */ long __RPC_FAR *p) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_marginBottom( 
            /* [in] */ long v) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_marginBottom( 
            /* [out][retval] */ long __RPC_FAR *p) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_pageWidth( 
            /* [out][retval] */ long __RPC_FAR *p) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_pageHeight( 
            /* [out][retval] */ long __RPC_FAR *p) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_unprintableLeft( 
            /* [out][retval] */ long __RPC_FAR *p) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_unprintableTop( 
            /* [out][retval] */ long __RPC_FAR *p) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_unprintableRight( 
            /* [out][retval] */ long __RPC_FAR *p) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_unprintableBottom( 
            /* [out][retval] */ long __RPC_FAR *p) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE updatePageStatus( 
            /* [in] */ long __RPC_FAR *p) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITemplatePrinterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITemplatePrinter __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITemplatePrinter __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *startDoc )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [in] */ BSTR bstrTitle,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *stopDoc )( 
            ITemplatePrinter __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *printBlankPage )( 
            ITemplatePrinter __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *printPage )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [in] */ IDispatch __RPC_FAR *pElemDisp);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ensurePrintDialogDefaults )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *showPrintDialog )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *showPageSetupDialog )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *printNonNative )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *pMarkup,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *printNonNativeFrames )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *pMarkup,
            /* [in] */ VARIANT_BOOL fActiveFrame);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_framesetDocument )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_framesetDocument )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_frameActive )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_frameActive )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_frameAsShown )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_frameAsShown )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_selection )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_selection )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_selectedPages )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_selectedPages )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_currentPage )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_currentPage )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_currentPageAvail )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_currentPageAvail )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_collate )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_collate )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_duplex )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_copies )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [in] */ WORD v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_copies )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [out][retval] */ WORD __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_pageFrom )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [in] */ WORD v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_pageFrom )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [out][retval] */ WORD __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_pageTo )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [in] */ WORD v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_pageTo )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [out][retval] */ WORD __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_tableOfLinks )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_tableOfLinks )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_allLinkedDocuments )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_allLinkedDocuments )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_header )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [in] */ BSTR bstrHeader);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_header )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [out][retval] */ BSTR __RPC_FAR *bstrHeader);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_footer )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [in] */ BSTR bstrFooter);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_footer )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [out][retval] */ BSTR __RPC_FAR *bstrFooter);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_marginLeft )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [in] */ long v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_marginLeft )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [out][retval] */ long __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_marginRight )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [in] */ long v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_marginRight )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [out][retval] */ long __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_marginTop )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [in] */ long v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_marginTop )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [out][retval] */ long __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_marginBottom )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [in] */ long v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_marginBottom )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [out][retval] */ long __RPC_FAR *p);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_pageWidth )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [out][retval] */ long __RPC_FAR *p);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_pageHeight )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [out][retval] */ long __RPC_FAR *p);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_unprintableLeft )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [out][retval] */ long __RPC_FAR *p);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_unprintableTop )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [out][retval] */ long __RPC_FAR *p);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_unprintableRight )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [out][retval] */ long __RPC_FAR *p);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_unprintableBottom )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [out][retval] */ long __RPC_FAR *p);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *updatePageStatus )( 
            ITemplatePrinter __RPC_FAR * This,
            /* [in] */ long __RPC_FAR *p);
        
        END_INTERFACE
    } ITemplatePrinterVtbl;

    interface ITemplatePrinter
    {
        CONST_VTBL struct ITemplatePrinterVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITemplatePrinter_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITemplatePrinter_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITemplatePrinter_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITemplatePrinter_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ITemplatePrinter_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ITemplatePrinter_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ITemplatePrinter_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ITemplatePrinter_startDoc(This,bstrTitle,p)	\
    (This)->lpVtbl -> startDoc(This,bstrTitle,p)

#define ITemplatePrinter_stopDoc(This)	\
    (This)->lpVtbl -> stopDoc(This)

#define ITemplatePrinter_printBlankPage(This)	\
    (This)->lpVtbl -> printBlankPage(This)

#define ITemplatePrinter_printPage(This,pElemDisp)	\
    (This)->lpVtbl -> printPage(This,pElemDisp)

#define ITemplatePrinter_ensurePrintDialogDefaults(This,p)	\
    (This)->lpVtbl -> ensurePrintDialogDefaults(This,p)

#define ITemplatePrinter_showPrintDialog(This,p)	\
    (This)->lpVtbl -> showPrintDialog(This,p)

#define ITemplatePrinter_showPageSetupDialog(This,p)	\
    (This)->lpVtbl -> showPageSetupDialog(This,p)

#define ITemplatePrinter_printNonNative(This,pMarkup,p)	\
    (This)->lpVtbl -> printNonNative(This,pMarkup,p)

#define ITemplatePrinter_printNonNativeFrames(This,pMarkup,fActiveFrame)	\
    (This)->lpVtbl -> printNonNativeFrames(This,pMarkup,fActiveFrame)

#define ITemplatePrinter_put_framesetDocument(This,v)	\
    (This)->lpVtbl -> put_framesetDocument(This,v)

#define ITemplatePrinter_get_framesetDocument(This,p)	\
    (This)->lpVtbl -> get_framesetDocument(This,p)

#define ITemplatePrinter_put_frameActive(This,v)	\
    (This)->lpVtbl -> put_frameActive(This,v)

#define ITemplatePrinter_get_frameActive(This,p)	\
    (This)->lpVtbl -> get_frameActive(This,p)

#define ITemplatePrinter_put_frameAsShown(This,v)	\
    (This)->lpVtbl -> put_frameAsShown(This,v)

#define ITemplatePrinter_get_frameAsShown(This,p)	\
    (This)->lpVtbl -> get_frameAsShown(This,p)

#define ITemplatePrinter_put_selection(This,v)	\
    (This)->lpVtbl -> put_selection(This,v)

#define ITemplatePrinter_get_selection(This,p)	\
    (This)->lpVtbl -> get_selection(This,p)

#define ITemplatePrinter_put_selectedPages(This,v)	\
    (This)->lpVtbl -> put_selectedPages(This,v)

#define ITemplatePrinter_get_selectedPages(This,p)	\
    (This)->lpVtbl -> get_selectedPages(This,p)

#define ITemplatePrinter_put_currentPage(This,v)	\
    (This)->lpVtbl -> put_currentPage(This,v)

#define ITemplatePrinter_get_currentPage(This,p)	\
    (This)->lpVtbl -> get_currentPage(This,p)

#define ITemplatePrinter_put_currentPageAvail(This,v)	\
    (This)->lpVtbl -> put_currentPageAvail(This,v)

#define ITemplatePrinter_get_currentPageAvail(This,p)	\
    (This)->lpVtbl -> get_currentPageAvail(This,p)

#define ITemplatePrinter_put_collate(This,v)	\
    (This)->lpVtbl -> put_collate(This,v)

#define ITemplatePrinter_get_collate(This,p)	\
    (This)->lpVtbl -> get_collate(This,p)

#define ITemplatePrinter_get_duplex(This,p)	\
    (This)->lpVtbl -> get_duplex(This,p)

#define ITemplatePrinter_put_copies(This,v)	\
    (This)->lpVtbl -> put_copies(This,v)

#define ITemplatePrinter_get_copies(This,p)	\
    (This)->lpVtbl -> get_copies(This,p)

#define ITemplatePrinter_put_pageFrom(This,v)	\
    (This)->lpVtbl -> put_pageFrom(This,v)

#define ITemplatePrinter_get_pageFrom(This,p)	\
    (This)->lpVtbl -> get_pageFrom(This,p)

#define ITemplatePrinter_put_pageTo(This,v)	\
    (This)->lpVtbl -> put_pageTo(This,v)

#define ITemplatePrinter_get_pageTo(This,p)	\
    (This)->lpVtbl -> get_pageTo(This,p)

#define ITemplatePrinter_put_tableOfLinks(This,v)	\
    (This)->lpVtbl -> put_tableOfLinks(This,v)

#define ITemplatePrinter_get_tableOfLinks(This,p)	\
    (This)->lpVtbl -> get_tableOfLinks(This,p)

#define ITemplatePrinter_put_allLinkedDocuments(This,v)	\
    (This)->lpVtbl -> put_allLinkedDocuments(This,v)

#define ITemplatePrinter_get_allLinkedDocuments(This,p)	\
    (This)->lpVtbl -> get_allLinkedDocuments(This,p)

#define ITemplatePrinter_put_header(This,bstrHeader)	\
    (This)->lpVtbl -> put_header(This,bstrHeader)

#define ITemplatePrinter_get_header(This,bstrHeader)	\
    (This)->lpVtbl -> get_header(This,bstrHeader)

#define ITemplatePrinter_put_footer(This,bstrFooter)	\
    (This)->lpVtbl -> put_footer(This,bstrFooter)

#define ITemplatePrinter_get_footer(This,bstrFooter)	\
    (This)->lpVtbl -> get_footer(This,bstrFooter)

#define ITemplatePrinter_put_marginLeft(This,v)	\
    (This)->lpVtbl -> put_marginLeft(This,v)

#define ITemplatePrinter_get_marginLeft(This,p)	\
    (This)->lpVtbl -> get_marginLeft(This,p)

#define ITemplatePrinter_put_marginRight(This,v)	\
    (This)->lpVtbl -> put_marginRight(This,v)

#define ITemplatePrinter_get_marginRight(This,p)	\
    (This)->lpVtbl -> get_marginRight(This,p)

#define ITemplatePrinter_put_marginTop(This,v)	\
    (This)->lpVtbl -> put_marginTop(This,v)

#define ITemplatePrinter_get_marginTop(This,p)	\
    (This)->lpVtbl -> get_marginTop(This,p)

#define ITemplatePrinter_put_marginBottom(This,v)	\
    (This)->lpVtbl -> put_marginBottom(This,v)

#define ITemplatePrinter_get_marginBottom(This,p)	\
    (This)->lpVtbl -> get_marginBottom(This,p)

#define ITemplatePrinter_get_pageWidth(This,p)	\
    (This)->lpVtbl -> get_pageWidth(This,p)

#define ITemplatePrinter_get_pageHeight(This,p)	\
    (This)->lpVtbl -> get_pageHeight(This,p)

#define ITemplatePrinter_get_unprintableLeft(This,p)	\
    (This)->lpVtbl -> get_unprintableLeft(This,p)

#define ITemplatePrinter_get_unprintableTop(This,p)	\
    (This)->lpVtbl -> get_unprintableTop(This,p)

#define ITemplatePrinter_get_unprintableRight(This,p)	\
    (This)->lpVtbl -> get_unprintableRight(This,p)

#define ITemplatePrinter_get_unprintableBottom(This,p)	\
    (This)->lpVtbl -> get_unprintableBottom(This,p)

#define ITemplatePrinter_updatePageStatus(This,p)	\
    (This)->lpVtbl -> updatePageStatus(This,p)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_startDoc_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [in] */ BSTR bstrTitle,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);


void __RPC_STUB ITemplatePrinter_startDoc_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_stopDoc_Proxy( 
    ITemplatePrinter __RPC_FAR * This);


void __RPC_STUB ITemplatePrinter_stopDoc_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_printBlankPage_Proxy( 
    ITemplatePrinter __RPC_FAR * This);


void __RPC_STUB ITemplatePrinter_printBlankPage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_printPage_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [in] */ IDispatch __RPC_FAR *pElemDisp);


void __RPC_STUB ITemplatePrinter_printPage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_ensurePrintDialogDefaults_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);


void __RPC_STUB ITemplatePrinter_ensurePrintDialogDefaults_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_showPrintDialog_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);


void __RPC_STUB ITemplatePrinter_showPrintDialog_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_showPageSetupDialog_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);


void __RPC_STUB ITemplatePrinter_showPageSetupDialog_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_printNonNative_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *pMarkup,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);


void __RPC_STUB ITemplatePrinter_printNonNative_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_printNonNativeFrames_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *pMarkup,
    /* [in] */ VARIANT_BOOL fActiveFrame);


void __RPC_STUB ITemplatePrinter_printNonNativeFrames_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_put_framesetDocument_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL v);


void __RPC_STUB ITemplatePrinter_put_framesetDocument_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_get_framesetDocument_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);


void __RPC_STUB ITemplatePrinter_get_framesetDocument_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_put_frameActive_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL v);


void __RPC_STUB ITemplatePrinter_put_frameActive_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_get_frameActive_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);


void __RPC_STUB ITemplatePrinter_get_frameActive_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_put_frameAsShown_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL v);


void __RPC_STUB ITemplatePrinter_put_frameAsShown_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_get_frameAsShown_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);


void __RPC_STUB ITemplatePrinter_get_frameAsShown_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_put_selection_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL v);


void __RPC_STUB ITemplatePrinter_put_selection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_get_selection_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);


void __RPC_STUB ITemplatePrinter_get_selection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_put_selectedPages_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL v);


void __RPC_STUB ITemplatePrinter_put_selectedPages_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_get_selectedPages_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);


void __RPC_STUB ITemplatePrinter_get_selectedPages_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_put_currentPage_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL v);


void __RPC_STUB ITemplatePrinter_put_currentPage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_get_currentPage_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);


void __RPC_STUB ITemplatePrinter_get_currentPage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_put_currentPageAvail_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL v);


void __RPC_STUB ITemplatePrinter_put_currentPageAvail_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_get_currentPageAvail_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);


void __RPC_STUB ITemplatePrinter_get_currentPageAvail_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_put_collate_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL v);


void __RPC_STUB ITemplatePrinter_put_collate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_get_collate_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);


void __RPC_STUB ITemplatePrinter_get_collate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_get_duplex_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);


void __RPC_STUB ITemplatePrinter_get_duplex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_put_copies_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [in] */ WORD v);


void __RPC_STUB ITemplatePrinter_put_copies_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_get_copies_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [out][retval] */ WORD __RPC_FAR *p);


void __RPC_STUB ITemplatePrinter_get_copies_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_put_pageFrom_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [in] */ WORD v);


void __RPC_STUB ITemplatePrinter_put_pageFrom_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_get_pageFrom_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [out][retval] */ WORD __RPC_FAR *p);


void __RPC_STUB ITemplatePrinter_get_pageFrom_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_put_pageTo_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [in] */ WORD v);


void __RPC_STUB ITemplatePrinter_put_pageTo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_get_pageTo_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [out][retval] */ WORD __RPC_FAR *p);


void __RPC_STUB ITemplatePrinter_get_pageTo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_put_tableOfLinks_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL v);


void __RPC_STUB ITemplatePrinter_put_tableOfLinks_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_get_tableOfLinks_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);


void __RPC_STUB ITemplatePrinter_get_tableOfLinks_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_put_allLinkedDocuments_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL v);


void __RPC_STUB ITemplatePrinter_put_allLinkedDocuments_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_get_allLinkedDocuments_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);


void __RPC_STUB ITemplatePrinter_get_allLinkedDocuments_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_put_header_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [in] */ BSTR bstrHeader);


void __RPC_STUB ITemplatePrinter_put_header_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_get_header_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [out][retval] */ BSTR __RPC_FAR *bstrHeader);


void __RPC_STUB ITemplatePrinter_get_header_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_put_footer_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [in] */ BSTR bstrFooter);


void __RPC_STUB ITemplatePrinter_put_footer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_get_footer_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [out][retval] */ BSTR __RPC_FAR *bstrFooter);


void __RPC_STUB ITemplatePrinter_get_footer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_put_marginLeft_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [in] */ long v);


void __RPC_STUB ITemplatePrinter_put_marginLeft_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_get_marginLeft_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [out][retval] */ long __RPC_FAR *p);


void __RPC_STUB ITemplatePrinter_get_marginLeft_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_put_marginRight_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [in] */ long v);


void __RPC_STUB ITemplatePrinter_put_marginRight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_get_marginRight_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [out][retval] */ long __RPC_FAR *p);


void __RPC_STUB ITemplatePrinter_get_marginRight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_put_marginTop_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [in] */ long v);


void __RPC_STUB ITemplatePrinter_put_marginTop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_get_marginTop_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [out][retval] */ long __RPC_FAR *p);


void __RPC_STUB ITemplatePrinter_get_marginTop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_put_marginBottom_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [in] */ long v);


void __RPC_STUB ITemplatePrinter_put_marginBottom_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_get_marginBottom_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [out][retval] */ long __RPC_FAR *p);


void __RPC_STUB ITemplatePrinter_get_marginBottom_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_get_pageWidth_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [out][retval] */ long __RPC_FAR *p);


void __RPC_STUB ITemplatePrinter_get_pageWidth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_get_pageHeight_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [out][retval] */ long __RPC_FAR *p);


void __RPC_STUB ITemplatePrinter_get_pageHeight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_get_unprintableLeft_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [out][retval] */ long __RPC_FAR *p);


void __RPC_STUB ITemplatePrinter_get_unprintableLeft_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_get_unprintableTop_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [out][retval] */ long __RPC_FAR *p);


void __RPC_STUB ITemplatePrinter_get_unprintableTop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_get_unprintableRight_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [out][retval] */ long __RPC_FAR *p);


void __RPC_STUB ITemplatePrinter_get_unprintableRight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_get_unprintableBottom_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [out][retval] */ long __RPC_FAR *p);


void __RPC_STUB ITemplatePrinter_get_unprintableBottom_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter_updatePageStatus_Proxy( 
    ITemplatePrinter __RPC_FAR * This,
    /* [in] */ long __RPC_FAR *p);


void __RPC_STUB ITemplatePrinter_updatePageStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITemplatePrinter_INTERFACE_DEFINED__ */


#ifndef __ITemplatePrinter2_INTERFACE_DEFINED__
#define __ITemplatePrinter2_INTERFACE_DEFINED__

/* interface ITemplatePrinter2 */
/* [object][uuid][dual][oleautomation] */ 


EXTERN_C const IID IID_ITemplatePrinter2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3050f83f-98b5-11cf-bb82-00aa00bdce0b")
    ITemplatePrinter2 : public ITemplatePrinter
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_selectionEnabled( 
            /* [in] */ VARIANT_BOOL v) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_selectionEnabled( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_frameActiveEnabled( 
            /* [in] */ VARIANT_BOOL v) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_frameActiveEnabled( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_orientation( 
            /* [in] */ BSTR v) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_orientation( 
            /* [out][retval] */ BSTR __RPC_FAR *p) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_usePrinterCopyCollate( 
            /* [in] */ VARIANT_BOOL v) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_usePrinterCopyCollate( 
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE deviceSupports( 
            /* [in] */ BSTR bstrProperty,
            /* [out][retval] */ VARIANT __RPC_FAR *pvar) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITemplatePrinter2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITemplatePrinter2 __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITemplatePrinter2 __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *startDoc )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [in] */ BSTR bstrTitle,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *stopDoc )( 
            ITemplatePrinter2 __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *printBlankPage )( 
            ITemplatePrinter2 __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *printPage )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [in] */ IDispatch __RPC_FAR *pElemDisp);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ensurePrintDialogDefaults )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *showPrintDialog )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *showPageSetupDialog )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *printNonNative )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *pMarkup,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *printNonNativeFrames )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *pMarkup,
            /* [in] */ VARIANT_BOOL fActiveFrame);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_framesetDocument )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_framesetDocument )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_frameActive )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_frameActive )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_frameAsShown )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_frameAsShown )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_selection )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_selection )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_selectedPages )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_selectedPages )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_currentPage )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_currentPage )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_currentPageAvail )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_currentPageAvail )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_collate )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_collate )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_duplex )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_copies )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [in] */ WORD v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_copies )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [out][retval] */ WORD __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_pageFrom )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [in] */ WORD v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_pageFrom )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [out][retval] */ WORD __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_pageTo )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [in] */ WORD v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_pageTo )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [out][retval] */ WORD __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_tableOfLinks )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_tableOfLinks )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_allLinkedDocuments )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_allLinkedDocuments )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_header )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [in] */ BSTR bstrHeader);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_header )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [out][retval] */ BSTR __RPC_FAR *bstrHeader);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_footer )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [in] */ BSTR bstrFooter);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_footer )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [out][retval] */ BSTR __RPC_FAR *bstrFooter);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_marginLeft )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [in] */ long v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_marginLeft )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [out][retval] */ long __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_marginRight )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [in] */ long v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_marginRight )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [out][retval] */ long __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_marginTop )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [in] */ long v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_marginTop )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [out][retval] */ long __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_marginBottom )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [in] */ long v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_marginBottom )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [out][retval] */ long __RPC_FAR *p);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_pageWidth )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [out][retval] */ long __RPC_FAR *p);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_pageHeight )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [out][retval] */ long __RPC_FAR *p);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_unprintableLeft )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [out][retval] */ long __RPC_FAR *p);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_unprintableTop )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [out][retval] */ long __RPC_FAR *p);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_unprintableRight )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [out][retval] */ long __RPC_FAR *p);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_unprintableBottom )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [out][retval] */ long __RPC_FAR *p);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *updatePageStatus )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [in] */ long __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_selectionEnabled )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_selectionEnabled )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_frameActiveEnabled )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_frameActiveEnabled )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_orientation )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [in] */ BSTR v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_orientation )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [out][retval] */ BSTR __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_usePrinterCopyCollate )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_usePrinterCopyCollate )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *deviceSupports )( 
            ITemplatePrinter2 __RPC_FAR * This,
            /* [in] */ BSTR bstrProperty,
            /* [out][retval] */ VARIANT __RPC_FAR *pvar);
        
        END_INTERFACE
    } ITemplatePrinter2Vtbl;

    interface ITemplatePrinter2
    {
        CONST_VTBL struct ITemplatePrinter2Vtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITemplatePrinter2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITemplatePrinter2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITemplatePrinter2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITemplatePrinter2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ITemplatePrinter2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ITemplatePrinter2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ITemplatePrinter2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ITemplatePrinter2_startDoc(This,bstrTitle,p)	\
    (This)->lpVtbl -> startDoc(This,bstrTitle,p)

#define ITemplatePrinter2_stopDoc(This)	\
    (This)->lpVtbl -> stopDoc(This)

#define ITemplatePrinter2_printBlankPage(This)	\
    (This)->lpVtbl -> printBlankPage(This)

#define ITemplatePrinter2_printPage(This,pElemDisp)	\
    (This)->lpVtbl -> printPage(This,pElemDisp)

#define ITemplatePrinter2_ensurePrintDialogDefaults(This,p)	\
    (This)->lpVtbl -> ensurePrintDialogDefaults(This,p)

#define ITemplatePrinter2_showPrintDialog(This,p)	\
    (This)->lpVtbl -> showPrintDialog(This,p)

#define ITemplatePrinter2_showPageSetupDialog(This,p)	\
    (This)->lpVtbl -> showPageSetupDialog(This,p)

#define ITemplatePrinter2_printNonNative(This,pMarkup,p)	\
    (This)->lpVtbl -> printNonNative(This,pMarkup,p)

#define ITemplatePrinter2_printNonNativeFrames(This,pMarkup,fActiveFrame)	\
    (This)->lpVtbl -> printNonNativeFrames(This,pMarkup,fActiveFrame)

#define ITemplatePrinter2_put_framesetDocument(This,v)	\
    (This)->lpVtbl -> put_framesetDocument(This,v)

#define ITemplatePrinter2_get_framesetDocument(This,p)	\
    (This)->lpVtbl -> get_framesetDocument(This,p)

#define ITemplatePrinter2_put_frameActive(This,v)	\
    (This)->lpVtbl -> put_frameActive(This,v)

#define ITemplatePrinter2_get_frameActive(This,p)	\
    (This)->lpVtbl -> get_frameActive(This,p)

#define ITemplatePrinter2_put_frameAsShown(This,v)	\
    (This)->lpVtbl -> put_frameAsShown(This,v)

#define ITemplatePrinter2_get_frameAsShown(This,p)	\
    (This)->lpVtbl -> get_frameAsShown(This,p)

#define ITemplatePrinter2_put_selection(This,v)	\
    (This)->lpVtbl -> put_selection(This,v)

#define ITemplatePrinter2_get_selection(This,p)	\
    (This)->lpVtbl -> get_selection(This,p)

#define ITemplatePrinter2_put_selectedPages(This,v)	\
    (This)->lpVtbl -> put_selectedPages(This,v)

#define ITemplatePrinter2_get_selectedPages(This,p)	\
    (This)->lpVtbl -> get_selectedPages(This,p)

#define ITemplatePrinter2_put_currentPage(This,v)	\
    (This)->lpVtbl -> put_currentPage(This,v)

#define ITemplatePrinter2_get_currentPage(This,p)	\
    (This)->lpVtbl -> get_currentPage(This,p)

#define ITemplatePrinter2_put_currentPageAvail(This,v)	\
    (This)->lpVtbl -> put_currentPageAvail(This,v)

#define ITemplatePrinter2_get_currentPageAvail(This,p)	\
    (This)->lpVtbl -> get_currentPageAvail(This,p)

#define ITemplatePrinter2_put_collate(This,v)	\
    (This)->lpVtbl -> put_collate(This,v)

#define ITemplatePrinter2_get_collate(This,p)	\
    (This)->lpVtbl -> get_collate(This,p)

#define ITemplatePrinter2_get_duplex(This,p)	\
    (This)->lpVtbl -> get_duplex(This,p)

#define ITemplatePrinter2_put_copies(This,v)	\
    (This)->lpVtbl -> put_copies(This,v)

#define ITemplatePrinter2_get_copies(This,p)	\
    (This)->lpVtbl -> get_copies(This,p)

#define ITemplatePrinter2_put_pageFrom(This,v)	\
    (This)->lpVtbl -> put_pageFrom(This,v)

#define ITemplatePrinter2_get_pageFrom(This,p)	\
    (This)->lpVtbl -> get_pageFrom(This,p)

#define ITemplatePrinter2_put_pageTo(This,v)	\
    (This)->lpVtbl -> put_pageTo(This,v)

#define ITemplatePrinter2_get_pageTo(This,p)	\
    (This)->lpVtbl -> get_pageTo(This,p)

#define ITemplatePrinter2_put_tableOfLinks(This,v)	\
    (This)->lpVtbl -> put_tableOfLinks(This,v)

#define ITemplatePrinter2_get_tableOfLinks(This,p)	\
    (This)->lpVtbl -> get_tableOfLinks(This,p)

#define ITemplatePrinter2_put_allLinkedDocuments(This,v)	\
    (This)->lpVtbl -> put_allLinkedDocuments(This,v)

#define ITemplatePrinter2_get_allLinkedDocuments(This,p)	\
    (This)->lpVtbl -> get_allLinkedDocuments(This,p)

#define ITemplatePrinter2_put_header(This,bstrHeader)	\
    (This)->lpVtbl -> put_header(This,bstrHeader)

#define ITemplatePrinter2_get_header(This,bstrHeader)	\
    (This)->lpVtbl -> get_header(This,bstrHeader)

#define ITemplatePrinter2_put_footer(This,bstrFooter)	\
    (This)->lpVtbl -> put_footer(This,bstrFooter)

#define ITemplatePrinter2_get_footer(This,bstrFooter)	\
    (This)->lpVtbl -> get_footer(This,bstrFooter)

#define ITemplatePrinter2_put_marginLeft(This,v)	\
    (This)->lpVtbl -> put_marginLeft(This,v)

#define ITemplatePrinter2_get_marginLeft(This,p)	\
    (This)->lpVtbl -> get_marginLeft(This,p)

#define ITemplatePrinter2_put_marginRight(This,v)	\
    (This)->lpVtbl -> put_marginRight(This,v)

#define ITemplatePrinter2_get_marginRight(This,p)	\
    (This)->lpVtbl -> get_marginRight(This,p)

#define ITemplatePrinter2_put_marginTop(This,v)	\
    (This)->lpVtbl -> put_marginTop(This,v)

#define ITemplatePrinter2_get_marginTop(This,p)	\
    (This)->lpVtbl -> get_marginTop(This,p)

#define ITemplatePrinter2_put_marginBottom(This,v)	\
    (This)->lpVtbl -> put_marginBottom(This,v)

#define ITemplatePrinter2_get_marginBottom(This,p)	\
    (This)->lpVtbl -> get_marginBottom(This,p)

#define ITemplatePrinter2_get_pageWidth(This,p)	\
    (This)->lpVtbl -> get_pageWidth(This,p)

#define ITemplatePrinter2_get_pageHeight(This,p)	\
    (This)->lpVtbl -> get_pageHeight(This,p)

#define ITemplatePrinter2_get_unprintableLeft(This,p)	\
    (This)->lpVtbl -> get_unprintableLeft(This,p)

#define ITemplatePrinter2_get_unprintableTop(This,p)	\
    (This)->lpVtbl -> get_unprintableTop(This,p)

#define ITemplatePrinter2_get_unprintableRight(This,p)	\
    (This)->lpVtbl -> get_unprintableRight(This,p)

#define ITemplatePrinter2_get_unprintableBottom(This,p)	\
    (This)->lpVtbl -> get_unprintableBottom(This,p)

#define ITemplatePrinter2_updatePageStatus(This,p)	\
    (This)->lpVtbl -> updatePageStatus(This,p)


#define ITemplatePrinter2_put_selectionEnabled(This,v)	\
    (This)->lpVtbl -> put_selectionEnabled(This,v)

#define ITemplatePrinter2_get_selectionEnabled(This,p)	\
    (This)->lpVtbl -> get_selectionEnabled(This,p)

#define ITemplatePrinter2_put_frameActiveEnabled(This,v)	\
    (This)->lpVtbl -> put_frameActiveEnabled(This,v)

#define ITemplatePrinter2_get_frameActiveEnabled(This,p)	\
    (This)->lpVtbl -> get_frameActiveEnabled(This,p)

#define ITemplatePrinter2_put_orientation(This,v)	\
    (This)->lpVtbl -> put_orientation(This,v)

#define ITemplatePrinter2_get_orientation(This,p)	\
    (This)->lpVtbl -> get_orientation(This,p)

#define ITemplatePrinter2_put_usePrinterCopyCollate(This,v)	\
    (This)->lpVtbl -> put_usePrinterCopyCollate(This,v)

#define ITemplatePrinter2_get_usePrinterCopyCollate(This,p)	\
    (This)->lpVtbl -> get_usePrinterCopyCollate(This,p)

#define ITemplatePrinter2_deviceSupports(This,bstrProperty,pvar)	\
    (This)->lpVtbl -> deviceSupports(This,bstrProperty,pvar)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter2_put_selectionEnabled_Proxy( 
    ITemplatePrinter2 __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL v);


void __RPC_STUB ITemplatePrinter2_put_selectionEnabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter2_get_selectionEnabled_Proxy( 
    ITemplatePrinter2 __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);


void __RPC_STUB ITemplatePrinter2_get_selectionEnabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter2_put_frameActiveEnabled_Proxy( 
    ITemplatePrinter2 __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL v);


void __RPC_STUB ITemplatePrinter2_put_frameActiveEnabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter2_get_frameActiveEnabled_Proxy( 
    ITemplatePrinter2 __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);


void __RPC_STUB ITemplatePrinter2_get_frameActiveEnabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter2_put_orientation_Proxy( 
    ITemplatePrinter2 __RPC_FAR * This,
    /* [in] */ BSTR v);


void __RPC_STUB ITemplatePrinter2_put_orientation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter2_get_orientation_Proxy( 
    ITemplatePrinter2 __RPC_FAR * This,
    /* [out][retval] */ BSTR __RPC_FAR *p);


void __RPC_STUB ITemplatePrinter2_get_orientation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter2_put_usePrinterCopyCollate_Proxy( 
    ITemplatePrinter2 __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL v);


void __RPC_STUB ITemplatePrinter2_put_usePrinterCopyCollate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter2_get_usePrinterCopyCollate_Proxy( 
    ITemplatePrinter2 __RPC_FAR * This,
    /* [out][retval] */ VARIANT_BOOL __RPC_FAR *p);


void __RPC_STUB ITemplatePrinter2_get_usePrinterCopyCollate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITemplatePrinter2_deviceSupports_Proxy( 
    ITemplatePrinter2 __RPC_FAR * This,
    /* [in] */ BSTR bstrProperty,
    /* [out][retval] */ VARIANT __RPC_FAR *pvar);


void __RPC_STUB ITemplatePrinter2_deviceSupports_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITemplatePrinter2_INTERFACE_DEFINED__ */


#ifndef __IHeaderFooter_INTERFACE_DEFINED__
#define __IHeaderFooter_INTERFACE_DEFINED__

/* interface IHeaderFooter */
/* [object][uuid][dual][oleautomation] */ 


EXTERN_C const IID IID_IHeaderFooter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3050f6ce-98b5-11cf-bb82-00aa00bdce0b")
    IHeaderFooter : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_htmlHead( 
            /* [out][retval] */ BSTR __RPC_FAR *p) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_htmlFoot( 
            /* [out][retval] */ BSTR __RPC_FAR *p) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_textHead( 
            /* [in] */ BSTR v) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_textHead( 
            /* [out][retval] */ BSTR __RPC_FAR *p) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_textFoot( 
            /* [in] */ BSTR v) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_textFoot( 
            /* [out][retval] */ BSTR __RPC_FAR *p) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_page( 
            /* [in] */ DWORD v) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_page( 
            /* [out][retval] */ DWORD __RPC_FAR *p) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_pageTotal( 
            /* [in] */ DWORD v) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_pageTotal( 
            /* [out][retval] */ DWORD __RPC_FAR *p) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_URL( 
            /* [in] */ BSTR v) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_URL( 
            /* [out][retval] */ BSTR __RPC_FAR *p) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_title( 
            /* [in] */ BSTR v) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_title( 
            /* [out][retval] */ BSTR __RPC_FAR *p) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_dateShort( 
            /* [in] */ BSTR v) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_dateShort( 
            /* [out][retval] */ BSTR __RPC_FAR *p) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_dateLong( 
            /* [in] */ BSTR v) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_dateLong( 
            /* [out][retval] */ BSTR __RPC_FAR *p) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_timeShort( 
            /* [in] */ BSTR v) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_timeShort( 
            /* [out][retval] */ BSTR __RPC_FAR *p) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_timeLong( 
            /* [in] */ BSTR v) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_timeLong( 
            /* [out][retval] */ BSTR __RPC_FAR *p) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IHeaderFooterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IHeaderFooter __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IHeaderFooter __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IHeaderFooter __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IHeaderFooter __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IHeaderFooter __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IHeaderFooter __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IHeaderFooter __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_htmlHead )( 
            IHeaderFooter __RPC_FAR * This,
            /* [out][retval] */ BSTR __RPC_FAR *p);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_htmlFoot )( 
            IHeaderFooter __RPC_FAR * This,
            /* [out][retval] */ BSTR __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_textHead )( 
            IHeaderFooter __RPC_FAR * This,
            /* [in] */ BSTR v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_textHead )( 
            IHeaderFooter __RPC_FAR * This,
            /* [out][retval] */ BSTR __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_textFoot )( 
            IHeaderFooter __RPC_FAR * This,
            /* [in] */ BSTR v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_textFoot )( 
            IHeaderFooter __RPC_FAR * This,
            /* [out][retval] */ BSTR __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_page )( 
            IHeaderFooter __RPC_FAR * This,
            /* [in] */ DWORD v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_page )( 
            IHeaderFooter __RPC_FAR * This,
            /* [out][retval] */ DWORD __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_pageTotal )( 
            IHeaderFooter __RPC_FAR * This,
            /* [in] */ DWORD v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_pageTotal )( 
            IHeaderFooter __RPC_FAR * This,
            /* [out][retval] */ DWORD __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_URL )( 
            IHeaderFooter __RPC_FAR * This,
            /* [in] */ BSTR v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_URL )( 
            IHeaderFooter __RPC_FAR * This,
            /* [out][retval] */ BSTR __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_title )( 
            IHeaderFooter __RPC_FAR * This,
            /* [in] */ BSTR v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_title )( 
            IHeaderFooter __RPC_FAR * This,
            /* [out][retval] */ BSTR __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_dateShort )( 
            IHeaderFooter __RPC_FAR * This,
            /* [in] */ BSTR v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_dateShort )( 
            IHeaderFooter __RPC_FAR * This,
            /* [out][retval] */ BSTR __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_dateLong )( 
            IHeaderFooter __RPC_FAR * This,
            /* [in] */ BSTR v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_dateLong )( 
            IHeaderFooter __RPC_FAR * This,
            /* [out][retval] */ BSTR __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_timeShort )( 
            IHeaderFooter __RPC_FAR * This,
            /* [in] */ BSTR v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_timeShort )( 
            IHeaderFooter __RPC_FAR * This,
            /* [out][retval] */ BSTR __RPC_FAR *p);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_timeLong )( 
            IHeaderFooter __RPC_FAR * This,
            /* [in] */ BSTR v);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_timeLong )( 
            IHeaderFooter __RPC_FAR * This,
            /* [out][retval] */ BSTR __RPC_FAR *p);
        
        END_INTERFACE
    } IHeaderFooterVtbl;

    interface IHeaderFooter
    {
        CONST_VTBL struct IHeaderFooterVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHeaderFooter_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IHeaderFooter_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IHeaderFooter_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IHeaderFooter_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IHeaderFooter_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IHeaderFooter_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IHeaderFooter_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IHeaderFooter_get_htmlHead(This,p)	\
    (This)->lpVtbl -> get_htmlHead(This,p)

#define IHeaderFooter_get_htmlFoot(This,p)	\
    (This)->lpVtbl -> get_htmlFoot(This,p)

#define IHeaderFooter_put_textHead(This,v)	\
    (This)->lpVtbl -> put_textHead(This,v)

#define IHeaderFooter_get_textHead(This,p)	\
    (This)->lpVtbl -> get_textHead(This,p)

#define IHeaderFooter_put_textFoot(This,v)	\
    (This)->lpVtbl -> put_textFoot(This,v)

#define IHeaderFooter_get_textFoot(This,p)	\
    (This)->lpVtbl -> get_textFoot(This,p)

#define IHeaderFooter_put_page(This,v)	\
    (This)->lpVtbl -> put_page(This,v)

#define IHeaderFooter_get_page(This,p)	\
    (This)->lpVtbl -> get_page(This,p)

#define IHeaderFooter_put_pageTotal(This,v)	\
    (This)->lpVtbl -> put_pageTotal(This,v)

#define IHeaderFooter_get_pageTotal(This,p)	\
    (This)->lpVtbl -> get_pageTotal(This,p)

#define IHeaderFooter_put_URL(This,v)	\
    (This)->lpVtbl -> put_URL(This,v)

#define IHeaderFooter_get_URL(This,p)	\
    (This)->lpVtbl -> get_URL(This,p)

#define IHeaderFooter_put_title(This,v)	\
    (This)->lpVtbl -> put_title(This,v)

#define IHeaderFooter_get_title(This,p)	\
    (This)->lpVtbl -> get_title(This,p)

#define IHeaderFooter_put_dateShort(This,v)	\
    (This)->lpVtbl -> put_dateShort(This,v)

#define IHeaderFooter_get_dateShort(This,p)	\
    (This)->lpVtbl -> get_dateShort(This,p)

#define IHeaderFooter_put_dateLong(This,v)	\
    (This)->lpVtbl -> put_dateLong(This,v)

#define IHeaderFooter_get_dateLong(This,p)	\
    (This)->lpVtbl -> get_dateLong(This,p)

#define IHeaderFooter_put_timeShort(This,v)	\
    (This)->lpVtbl -> put_timeShort(This,v)

#define IHeaderFooter_get_timeShort(This,p)	\
    (This)->lpVtbl -> get_timeShort(This,p)

#define IHeaderFooter_put_timeLong(This,v)	\
    (This)->lpVtbl -> put_timeLong(This,v)

#define IHeaderFooter_get_timeLong(This,p)	\
    (This)->lpVtbl -> get_timeLong(This,p)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE IHeaderFooter_get_htmlHead_Proxy( 
    IHeaderFooter __RPC_FAR * This,
    /* [out][retval] */ BSTR __RPC_FAR *p);


void __RPC_STUB IHeaderFooter_get_htmlHead_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IHeaderFooter_get_htmlFoot_Proxy( 
    IHeaderFooter __RPC_FAR * This,
    /* [out][retval] */ BSTR __RPC_FAR *p);


void __RPC_STUB IHeaderFooter_get_htmlFoot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IHeaderFooter_put_textHead_Proxy( 
    IHeaderFooter __RPC_FAR * This,
    /* [in] */ BSTR v);


void __RPC_STUB IHeaderFooter_put_textHead_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IHeaderFooter_get_textHead_Proxy( 
    IHeaderFooter __RPC_FAR * This,
    /* [out][retval] */ BSTR __RPC_FAR *p);


void __RPC_STUB IHeaderFooter_get_textHead_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IHeaderFooter_put_textFoot_Proxy( 
    IHeaderFooter __RPC_FAR * This,
    /* [in] */ BSTR v);


void __RPC_STUB IHeaderFooter_put_textFoot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IHeaderFooter_get_textFoot_Proxy( 
    IHeaderFooter __RPC_FAR * This,
    /* [out][retval] */ BSTR __RPC_FAR *p);


void __RPC_STUB IHeaderFooter_get_textFoot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IHeaderFooter_put_page_Proxy( 
    IHeaderFooter __RPC_FAR * This,
    /* [in] */ DWORD v);


void __RPC_STUB IHeaderFooter_put_page_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IHeaderFooter_get_page_Proxy( 
    IHeaderFooter __RPC_FAR * This,
    /* [out][retval] */ DWORD __RPC_FAR *p);


void __RPC_STUB IHeaderFooter_get_page_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IHeaderFooter_put_pageTotal_Proxy( 
    IHeaderFooter __RPC_FAR * This,
    /* [in] */ DWORD v);


void __RPC_STUB IHeaderFooter_put_pageTotal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IHeaderFooter_get_pageTotal_Proxy( 
    IHeaderFooter __RPC_FAR * This,
    /* [out][retval] */ DWORD __RPC_FAR *p);


void __RPC_STUB IHeaderFooter_get_pageTotal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IHeaderFooter_put_URL_Proxy( 
    IHeaderFooter __RPC_FAR * This,
    /* [in] */ BSTR v);


void __RPC_STUB IHeaderFooter_put_URL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IHeaderFooter_get_URL_Proxy( 
    IHeaderFooter __RPC_FAR * This,
    /* [out][retval] */ BSTR __RPC_FAR *p);


void __RPC_STUB IHeaderFooter_get_URL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IHeaderFooter_put_title_Proxy( 
    IHeaderFooter __RPC_FAR * This,
    /* [in] */ BSTR v);


void __RPC_STUB IHeaderFooter_put_title_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IHeaderFooter_get_title_Proxy( 
    IHeaderFooter __RPC_FAR * This,
    /* [out][retval] */ BSTR __RPC_FAR *p);


void __RPC_STUB IHeaderFooter_get_title_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IHeaderFooter_put_dateShort_Proxy( 
    IHeaderFooter __RPC_FAR * This,
    /* [in] */ BSTR v);


void __RPC_STUB IHeaderFooter_put_dateShort_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IHeaderFooter_get_dateShort_Proxy( 
    IHeaderFooter __RPC_FAR * This,
    /* [out][retval] */ BSTR __RPC_FAR *p);


void __RPC_STUB IHeaderFooter_get_dateShort_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IHeaderFooter_put_dateLong_Proxy( 
    IHeaderFooter __RPC_FAR * This,
    /* [in] */ BSTR v);


void __RPC_STUB IHeaderFooter_put_dateLong_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IHeaderFooter_get_dateLong_Proxy( 
    IHeaderFooter __RPC_FAR * This,
    /* [out][retval] */ BSTR __RPC_FAR *p);


void __RPC_STUB IHeaderFooter_get_dateLong_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IHeaderFooter_put_timeShort_Proxy( 
    IHeaderFooter __RPC_FAR * This,
    /* [in] */ BSTR v);


void __RPC_STUB IHeaderFooter_put_timeShort_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IHeaderFooter_get_timeShort_Proxy( 
    IHeaderFooter __RPC_FAR * This,
    /* [out][retval] */ BSTR __RPC_FAR *p);


void __RPC_STUB IHeaderFooter_get_timeShort_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IHeaderFooter_put_timeLong_Proxy( 
    IHeaderFooter __RPC_FAR * This,
    /* [in] */ BSTR v);


void __RPC_STUB IHeaderFooter_put_timeLong_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IHeaderFooter_get_timeLong_Proxy( 
    IHeaderFooter __RPC_FAR * This,
    /* [out][retval] */ BSTR __RPC_FAR *p);


void __RPC_STUB IHeaderFooter_get_timeLong_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IHeaderFooter_INTERFACE_DEFINED__ */



#ifndef __IEXTagLib_LIBRARY_DEFINED__
#define __IEXTagLib_LIBRARY_DEFINED__

/* library IEXTagLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_IEXTagLib;

EXTERN_C const CLSID CLSID_PeerFactory;

#ifdef __cplusplus

class DECLSPEC_UUID("3050F4CF-98B5-11CF-BB82-00AA00BDCE0B")
PeerFactory;
#endif

EXTERN_C const CLSID CLSID_ClientCaps;

#ifdef __cplusplus

class DECLSPEC_UUID("7E8BC44E-AEFF-11D1-89C2-00C04FB6BFC4")
ClientCaps;
#endif

EXTERN_C const CLSID CLSID_IntelliForms;

#ifdef __cplusplus

class DECLSPEC_UUID("613AB92E-16BF-11d2-BCA5-00C04FD929DB")
IntelliForms;
#endif

EXTERN_C const CLSID CLSID_HomePage;

#ifdef __cplusplus

class DECLSPEC_UUID("766BF2AE-D650-11d1-9811-00C04FC31D2E")
HomePage;
#endif

EXTERN_C const CLSID CLSID_CPersistUserData;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f48e-98b5-11cf-bb82-00aa00bdce0b")
CPersistUserData;
#endif

EXTERN_C const CLSID CLSID_CPersistDataPeer;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f487-98b5-11cf-bb82-00aa00bdce0b")
CPersistDataPeer;
#endif

EXTERN_C const CLSID CLSID_CPersistShortcut;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f4c6-98b5-11cf-bb82-00aa00bdce0b")
CPersistShortcut;
#endif

EXTERN_C const CLSID CLSID_CPersistHistory;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f4c8-98b5-11cf-bb82-00aa00bdce0b")
CPersistHistory;
#endif

EXTERN_C const CLSID CLSID_CPersistSnapshot;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f4c9-98b5-11cf-bb82-00aa00bdce0b")
CPersistSnapshot;
#endif

EXTERN_C const CLSID CLSID_CDownloadBehavior;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f5be-98b5-11cf-bb82-00aa00bdce0b")
CDownloadBehavior;
#endif

EXTERN_C const CLSID CLSID_wfolders;

#ifdef __cplusplus

class DECLSPEC_UUID("BAE31F9A-1B81-11D2-A97A-00C04F8ECB02")
wfolders;
#endif

EXTERN_C const CLSID CLSID_AnchorClick;

#ifdef __cplusplus

class DECLSPEC_UUID("13D5413C-33B9-11D2-95A7-00C04F8ECB02")
AnchorClick;
#endif

EXTERN_C const CLSID CLSID_CLayoutRect;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f664-98b5-11cf-bb82-00aa00bdce0b")
CLayoutRect;
#endif

EXTERN_C const CLSID CLSID_CDeviceRect;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f6d4-98b5-11cf-bb82-00aa00bdce0b")
CDeviceRect;
#endif

EXTERN_C const CLSID CLSID_CTemplatePrinter;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f6b3-98b5-11cf-bb82-00aa00bdce0b")
CTemplatePrinter;
#endif

EXTERN_C const CLSID CLSID_CHeaderFooter;

#ifdef __cplusplus

class DECLSPEC_UUID("3050f6cd-98b5-11cf-bb82-00aa00bdce0b")
CHeaderFooter;
#endif
#endif /* __IEXTagLib_LIBRARY_DEFINED__ */

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


