

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0543 */
/* Compiler settings for wmpcore.idl:
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

#ifndef __wmpcore_h__
#define __wmpcore_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IWMPMediaCollection_FWD_DEFINED__
#define __IWMPMediaCollection_FWD_DEFINED__
typedef interface IWMPMediaCollection IWMPMediaCollection;
#endif 	/* __IWMPMediaCollection_FWD_DEFINED__ */


#ifndef __IWMPPlaylistCollection_FWD_DEFINED__
#define __IWMPPlaylistCollection_FWD_DEFINED__
typedef interface IWMPPlaylistCollection IWMPPlaylistCollection;
#endif 	/* __IWMPPlaylistCollection_FWD_DEFINED__ */


#ifndef __IWMPCdromCollection_FWD_DEFINED__
#define __IWMPCdromCollection_FWD_DEFINED__
typedef interface IWMPCdromCollection IWMPCdromCollection;
#endif 	/* __IWMPCdromCollection_FWD_DEFINED__ */


#ifndef __IWMPClosedCaption_FWD_DEFINED__
#define __IWMPClosedCaption_FWD_DEFINED__
typedef interface IWMPClosedCaption IWMPClosedCaption;
#endif 	/* __IWMPClosedCaption_FWD_DEFINED__ */


#ifndef __IWMPDVD_FWD_DEFINED__
#define __IWMPDVD_FWD_DEFINED__
typedef interface IWMPDVD IWMPDVD;
#endif 	/* __IWMPDVD_FWD_DEFINED__ */


#ifndef __IWMPPlayerApplication_FWD_DEFINED__
#define __IWMPPlayerApplication_FWD_DEFINED__
typedef interface IWMPPlayerApplication IWMPPlayerApplication;
#endif 	/* __IWMPPlayerApplication_FWD_DEFINED__ */


#ifndef __IWMPCore_FWD_DEFINED__
#define __IWMPCore_FWD_DEFINED__
typedef interface IWMPCore IWMPCore;
#endif 	/* __IWMPCore_FWD_DEFINED__ */


#ifndef __IWMPCore2_FWD_DEFINED__
#define __IWMPCore2_FWD_DEFINED__
typedef interface IWMPCore2 IWMPCore2;
#endif 	/* __IWMPCore2_FWD_DEFINED__ */


#ifndef __IWMPCore3_FWD_DEFINED__
#define __IWMPCore3_FWD_DEFINED__
typedef interface IWMPCore3 IWMPCore3;
#endif 	/* __IWMPCore3_FWD_DEFINED__ */


#ifndef __IWMPControls_FWD_DEFINED__
#define __IWMPControls_FWD_DEFINED__
typedef interface IWMPControls IWMPControls;
#endif 	/* __IWMPControls_FWD_DEFINED__ */


#ifndef __IWMPControls2_FWD_DEFINED__
#define __IWMPControls2_FWD_DEFINED__
typedef interface IWMPControls2 IWMPControls2;
#endif 	/* __IWMPControls2_FWD_DEFINED__ */


#ifndef __IWMPControls3_FWD_DEFINED__
#define __IWMPControls3_FWD_DEFINED__
typedef interface IWMPControls3 IWMPControls3;
#endif 	/* __IWMPControls3_FWD_DEFINED__ */


#ifndef __IWMPSettings_FWD_DEFINED__
#define __IWMPSettings_FWD_DEFINED__
typedef interface IWMPSettings IWMPSettings;
#endif 	/* __IWMPSettings_FWD_DEFINED__ */


#ifndef __IWMPNetwork_FWD_DEFINED__
#define __IWMPNetwork_FWD_DEFINED__
typedef interface IWMPNetwork IWMPNetwork;
#endif 	/* __IWMPNetwork_FWD_DEFINED__ */


#ifndef __IWMPMedia_FWD_DEFINED__
#define __IWMPMedia_FWD_DEFINED__
typedef interface IWMPMedia IWMPMedia;
#endif 	/* __IWMPMedia_FWD_DEFINED__ */


#ifndef __IWMPMedia2_FWD_DEFINED__
#define __IWMPMedia2_FWD_DEFINED__
typedef interface IWMPMedia2 IWMPMedia2;
#endif 	/* __IWMPMedia2_FWD_DEFINED__ */


#ifndef __IWMPPlaylist_FWD_DEFINED__
#define __IWMPPlaylist_FWD_DEFINED__
typedef interface IWMPPlaylist IWMPPlaylist;
#endif 	/* __IWMPPlaylist_FWD_DEFINED__ */


#ifndef __IWMPErrorItem_FWD_DEFINED__
#define __IWMPErrorItem_FWD_DEFINED__
typedef interface IWMPErrorItem IWMPErrorItem;
#endif 	/* __IWMPErrorItem_FWD_DEFINED__ */


#ifndef __IWMPErrorItem2_FWD_DEFINED__
#define __IWMPErrorItem2_FWD_DEFINED__
typedef interface IWMPErrorItem2 IWMPErrorItem2;
#endif 	/* __IWMPErrorItem2_FWD_DEFINED__ */


#ifndef __IWMPError_FWD_DEFINED__
#define __IWMPError_FWD_DEFINED__
typedef interface IWMPError IWMPError;
#endif 	/* __IWMPError_FWD_DEFINED__ */


#ifndef __DummyCoClass_FWD_DEFINED__
#define __DummyCoClass_FWD_DEFINED__

#ifdef __cplusplus
typedef class DummyCoClass DummyCoClass;
#else
typedef struct DummyCoClass DummyCoClass;
#endif /* __cplusplus */

#endif 	/* __DummyCoClass_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_wmpcore_0000_0000 */
/* [local] */ 

#pragma once
typedef /* [public] */ 
enum WMPOpenState
    {	wmposUndefined	= 0,
	wmposPlaylistChanging	= ( wmposUndefined + 1 ) ,
	wmposPlaylistLocating	= ( wmposPlaylistChanging + 1 ) ,
	wmposPlaylistConnecting	= ( wmposPlaylistLocating + 1 ) ,
	wmposPlaylistLoading	= ( wmposPlaylistConnecting + 1 ) ,
	wmposPlaylistOpening	= ( wmposPlaylistLoading + 1 ) ,
	wmposPlaylistOpenNoMedia	= ( wmposPlaylistOpening + 1 ) ,
	wmposPlaylistChanged	= ( wmposPlaylistOpenNoMedia + 1 ) ,
	wmposMediaChanging	= ( wmposPlaylistChanged + 1 ) ,
	wmposMediaLocating	= ( wmposMediaChanging + 1 ) ,
	wmposMediaConnecting	= ( wmposMediaLocating + 1 ) ,
	wmposMediaLoading	= ( wmposMediaConnecting + 1 ) ,
	wmposMediaOpening	= ( wmposMediaLoading + 1 ) ,
	wmposMediaOpen	= ( wmposMediaOpening + 1 ) ,
	wmposBeginCodecAcquisition	= ( wmposMediaOpen + 1 ) ,
	wmposEndCodecAcquisition	= ( wmposBeginCodecAcquisition + 1 ) ,
	wmposBeginLicenseAcquisition	= ( wmposEndCodecAcquisition + 1 ) ,
	wmposEndLicenseAcquisition	= ( wmposBeginLicenseAcquisition + 1 ) ,
	wmposBeginIndividualization	= ( wmposEndLicenseAcquisition + 1 ) ,
	wmposEndIndividualization	= ( wmposBeginIndividualization + 1 ) ,
	wmposMediaWaiting	= ( wmposEndIndividualization + 1 ) ,
	wmposOpeningUnknownURL	= ( wmposMediaWaiting + 1 ) 
    } 	WMPOpenState;

typedef /* [public] */ 
enum WMPPlayState
    {	wmppsUndefined	= 0,
	wmppsStopped	= ( wmppsUndefined + 1 ) ,
	wmppsPaused	= ( wmppsStopped + 1 ) ,
	wmppsPlaying	= ( wmppsPaused + 1 ) ,
	wmppsScanForward	= ( wmppsPlaying + 1 ) ,
	wmppsScanReverse	= ( wmppsScanForward + 1 ) ,
	wmppsBuffering	= ( wmppsScanReverse + 1 ) ,
	wmppsWaiting	= ( wmppsBuffering + 1 ) ,
	wmppsMediaEnded	= ( wmppsWaiting + 1 ) ,
	wmppsTransitioning	= ( wmppsMediaEnded + 1 ) ,
	wmppsReady	= ( wmppsTransitioning + 1 ) ,
	wmppsReconnecting	= ( wmppsReady + 1 ) ,
	wmppsLast	= ( wmppsReconnecting + 1 ) 
    } 	WMPPlayState;

typedef /* [public] */ 
enum WMPPlaylistChangeEventType
    {	wmplcUnknown	= 0,
	wmplcClear	= ( wmplcUnknown + 1 ) ,
	wmplcInfoChange	= ( wmplcClear + 1 ) ,
	wmplcMove	= ( wmplcInfoChange + 1 ) ,
	wmplcDelete	= ( wmplcMove + 1 ) ,
	wmplcInsert	= ( wmplcDelete + 1 ) ,
	wmplcAppend	= ( wmplcInsert + 1 ) ,
	wmplcPrivate	= ( wmplcAppend + 1 ) ,
	wmplcNameChange	= ( wmplcPrivate + 1 ) ,
	wmplcMorph	= ( wmplcNameChange + 1 ) ,
	wmplcSort	= ( wmplcMorph + 1 ) ,
	wmplcLast	= ( wmplcSort + 1 ) 
    } 	WMPPlaylistChangeEventType;













extern RPC_IF_HANDLE __MIDL_itf_wmpcore_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmpcore_0000_0000_v0_0_s_ifspec;

#ifndef __IWMPMediaCollection_INTERFACE_DEFINED__
#define __IWMPMediaCollection_INTERFACE_DEFINED__

/* interface IWMPMediaCollection */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMPMediaCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8363BC22-B4B4-4b19-989D-1CD765749DD1")
    IWMPMediaCollection : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IWMPMediaCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMPMediaCollection * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMPMediaCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMPMediaCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMPMediaCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMPMediaCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMPMediaCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMPMediaCollection * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } IWMPMediaCollectionVtbl;

    interface IWMPMediaCollection
    {
        CONST_VTBL struct IWMPMediaCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMPMediaCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMPMediaCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMPMediaCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMPMediaCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWMPMediaCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWMPMediaCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWMPMediaCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMPMediaCollection_INTERFACE_DEFINED__ */


#ifndef __IWMPPlaylistCollection_INTERFACE_DEFINED__
#define __IWMPPlaylistCollection_INTERFACE_DEFINED__

/* interface IWMPPlaylistCollection */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMPPlaylistCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("10A13217-23A7-439b-B1C0-D847C79B7774")
    IWMPPlaylistCollection : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IWMPPlaylistCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMPPlaylistCollection * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMPPlaylistCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMPPlaylistCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMPPlaylistCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMPPlaylistCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMPPlaylistCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMPPlaylistCollection * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } IWMPPlaylistCollectionVtbl;

    interface IWMPPlaylistCollection
    {
        CONST_VTBL struct IWMPPlaylistCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMPPlaylistCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMPPlaylistCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMPPlaylistCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMPPlaylistCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWMPPlaylistCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWMPPlaylistCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWMPPlaylistCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMPPlaylistCollection_INTERFACE_DEFINED__ */


#ifndef __IWMPCdromCollection_INTERFACE_DEFINED__
#define __IWMPCdromCollection_INTERFACE_DEFINED__

/* interface IWMPCdromCollection */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMPCdromCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EE4C8FE2-34B2-11d3-A3BF-006097C9B344")
    IWMPCdromCollection : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IWMPCdromCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMPCdromCollection * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMPCdromCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMPCdromCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMPCdromCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMPCdromCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMPCdromCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMPCdromCollection * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } IWMPCdromCollectionVtbl;

    interface IWMPCdromCollection
    {
        CONST_VTBL struct IWMPCdromCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMPCdromCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMPCdromCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMPCdromCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMPCdromCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWMPCdromCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWMPCdromCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWMPCdromCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMPCdromCollection_INTERFACE_DEFINED__ */


#ifndef __IWMPClosedCaption_INTERFACE_DEFINED__
#define __IWMPClosedCaption_INTERFACE_DEFINED__

/* interface IWMPClosedCaption */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMPClosedCaption;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4F2DF574-C588-11d3-9ED0-00C04FB6E937")
    IWMPClosedCaption : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IWMPClosedCaptionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMPClosedCaption * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMPClosedCaption * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMPClosedCaption * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMPClosedCaption * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMPClosedCaption * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMPClosedCaption * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMPClosedCaption * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } IWMPClosedCaptionVtbl;

    interface IWMPClosedCaption
    {
        CONST_VTBL struct IWMPClosedCaptionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMPClosedCaption_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMPClosedCaption_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMPClosedCaption_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMPClosedCaption_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWMPClosedCaption_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWMPClosedCaption_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWMPClosedCaption_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMPClosedCaption_INTERFACE_DEFINED__ */


#ifndef __IWMPDVD_INTERFACE_DEFINED__
#define __IWMPDVD_INTERFACE_DEFINED__

/* interface IWMPDVD */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMPDVD;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8DA61686-4668-4a5c-AE5D-803193293DBE")
    IWMPDVD : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IWMPDVDVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMPDVD * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMPDVD * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMPDVD * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMPDVD * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMPDVD * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMPDVD * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMPDVD * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } IWMPDVDVtbl;

    interface IWMPDVD
    {
        CONST_VTBL struct IWMPDVDVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMPDVD_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMPDVD_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMPDVD_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMPDVD_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWMPDVD_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWMPDVD_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWMPDVD_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMPDVD_INTERFACE_DEFINED__ */


#ifndef __IWMPPlayerApplication_INTERFACE_DEFINED__
#define __IWMPPlayerApplication_INTERFACE_DEFINED__

/* interface IWMPPlayerApplication */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMPPlayerApplication;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("40897764-CEAB-47be-AD4A-8E28537F9BBF")
    IWMPPlayerApplication : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IWMPPlayerApplicationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMPPlayerApplication * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMPPlayerApplication * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMPPlayerApplication * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMPPlayerApplication * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMPPlayerApplication * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMPPlayerApplication * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMPPlayerApplication * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } IWMPPlayerApplicationVtbl;

    interface IWMPPlayerApplication
    {
        CONST_VTBL struct IWMPPlayerApplicationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMPPlayerApplication_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMPPlayerApplication_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMPPlayerApplication_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMPPlayerApplication_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWMPPlayerApplication_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWMPPlayerApplication_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWMPPlayerApplication_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMPPlayerApplication_INTERFACE_DEFINED__ */


#ifndef __IWMPCore_INTERFACE_DEFINED__
#define __IWMPCore_INTERFACE_DEFINED__

/* interface IWMPCore */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMPCore;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D84CCA99-CCE2-11d2-9ECC-0000F8085981")
    IWMPCore : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE close( void) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_URL( 
            /* [retval][out] */ BSTR *pbstrURL) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_URL( 
            /* [in] */ BSTR bstrURL) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_openState( 
            /* [retval][out] */ WMPOpenState *pwmpos) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_playState( 
            /* [retval][out] */ WMPPlayState *pwmpps) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_controls( 
            /* [retval][out] */ IWMPControls **ppControl) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_settings( 
            /* [retval][out] */ IWMPSettings **ppSettings) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_currentMedia( 
            /* [retval][out] */ IWMPMedia **ppMedia) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_currentMedia( 
            /* [in] */ IWMPMedia *pMedia) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_mediaCollection( 
            /* [retval][out] */ IWMPMediaCollection **ppMediaCollection) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_playlistCollection( 
            /* [retval][out] */ IWMPPlaylistCollection **ppPlaylistCollection) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_versionInfo( 
            /* [retval][out] */ BSTR *pbstrVersionInfo) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE launchURL( 
            BSTR bstrURL) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_network( 
            /* [retval][out] */ IWMPNetwork **ppQNI) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_currentPlaylist( 
            /* [retval][out] */ IWMPPlaylist **ppPL) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_currentPlaylist( 
            /* [in] */ IWMPPlaylist *pPL) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_cdromCollection( 
            /* [retval][out] */ IWMPCdromCollection **ppCdromCollection) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_closedCaption( 
            /* [retval][out] */ IWMPClosedCaption **ppClosedCaption) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_isOnline( 
            /* [retval][out] */ VARIANT_BOOL *pfOnline) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_error( 
            /* [retval][out] */ IWMPError **ppError) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_status( 
            /* [retval][out] */ BSTR *pbstrStatus) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMPCoreVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMPCore * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMPCore * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMPCore * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMPCore * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMPCore * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMPCore * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMPCore * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *close )( 
            IWMPCore * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_URL )( 
            IWMPCore * This,
            /* [retval][out] */ BSTR *pbstrURL);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_URL )( 
            IWMPCore * This,
            /* [in] */ BSTR bstrURL);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_openState )( 
            IWMPCore * This,
            /* [retval][out] */ WMPOpenState *pwmpos);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_playState )( 
            IWMPCore * This,
            /* [retval][out] */ WMPPlayState *pwmpps);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_controls )( 
            IWMPCore * This,
            /* [retval][out] */ IWMPControls **ppControl);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_settings )( 
            IWMPCore * This,
            /* [retval][out] */ IWMPSettings **ppSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_currentMedia )( 
            IWMPCore * This,
            /* [retval][out] */ IWMPMedia **ppMedia);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_currentMedia )( 
            IWMPCore * This,
            /* [in] */ IWMPMedia *pMedia);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_mediaCollection )( 
            IWMPCore * This,
            /* [retval][out] */ IWMPMediaCollection **ppMediaCollection);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_playlistCollection )( 
            IWMPCore * This,
            /* [retval][out] */ IWMPPlaylistCollection **ppPlaylistCollection);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_versionInfo )( 
            IWMPCore * This,
            /* [retval][out] */ BSTR *pbstrVersionInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *launchURL )( 
            IWMPCore * This,
            BSTR bstrURL);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_network )( 
            IWMPCore * This,
            /* [retval][out] */ IWMPNetwork **ppQNI);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_currentPlaylist )( 
            IWMPCore * This,
            /* [retval][out] */ IWMPPlaylist **ppPL);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_currentPlaylist )( 
            IWMPCore * This,
            /* [in] */ IWMPPlaylist *pPL);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_cdromCollection )( 
            IWMPCore * This,
            /* [retval][out] */ IWMPCdromCollection **ppCdromCollection);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_closedCaption )( 
            IWMPCore * This,
            /* [retval][out] */ IWMPClosedCaption **ppClosedCaption);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_isOnline )( 
            IWMPCore * This,
            /* [retval][out] */ VARIANT_BOOL *pfOnline);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_error )( 
            IWMPCore * This,
            /* [retval][out] */ IWMPError **ppError);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_status )( 
            IWMPCore * This,
            /* [retval][out] */ BSTR *pbstrStatus);
        
        END_INTERFACE
    } IWMPCoreVtbl;

    interface IWMPCore
    {
        CONST_VTBL struct IWMPCoreVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMPCore_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMPCore_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMPCore_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMPCore_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWMPCore_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWMPCore_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWMPCore_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWMPCore_close(This)	\
    ( (This)->lpVtbl -> close(This) ) 

#define IWMPCore_get_URL(This,pbstrURL)	\
    ( (This)->lpVtbl -> get_URL(This,pbstrURL) ) 

#define IWMPCore_put_URL(This,bstrURL)	\
    ( (This)->lpVtbl -> put_URL(This,bstrURL) ) 

#define IWMPCore_get_openState(This,pwmpos)	\
    ( (This)->lpVtbl -> get_openState(This,pwmpos) ) 

#define IWMPCore_get_playState(This,pwmpps)	\
    ( (This)->lpVtbl -> get_playState(This,pwmpps) ) 

#define IWMPCore_get_controls(This,ppControl)	\
    ( (This)->lpVtbl -> get_controls(This,ppControl) ) 

#define IWMPCore_get_settings(This,ppSettings)	\
    ( (This)->lpVtbl -> get_settings(This,ppSettings) ) 

#define IWMPCore_get_currentMedia(This,ppMedia)	\
    ( (This)->lpVtbl -> get_currentMedia(This,ppMedia) ) 

#define IWMPCore_put_currentMedia(This,pMedia)	\
    ( (This)->lpVtbl -> put_currentMedia(This,pMedia) ) 

#define IWMPCore_get_mediaCollection(This,ppMediaCollection)	\
    ( (This)->lpVtbl -> get_mediaCollection(This,ppMediaCollection) ) 

#define IWMPCore_get_playlistCollection(This,ppPlaylistCollection)	\
    ( (This)->lpVtbl -> get_playlistCollection(This,ppPlaylistCollection) ) 

#define IWMPCore_get_versionInfo(This,pbstrVersionInfo)	\
    ( (This)->lpVtbl -> get_versionInfo(This,pbstrVersionInfo) ) 

#define IWMPCore_launchURL(This,bstrURL)	\
    ( (This)->lpVtbl -> launchURL(This,bstrURL) ) 

#define IWMPCore_get_network(This,ppQNI)	\
    ( (This)->lpVtbl -> get_network(This,ppQNI) ) 

#define IWMPCore_get_currentPlaylist(This,ppPL)	\
    ( (This)->lpVtbl -> get_currentPlaylist(This,ppPL) ) 

#define IWMPCore_put_currentPlaylist(This,pPL)	\
    ( (This)->lpVtbl -> put_currentPlaylist(This,pPL) ) 

#define IWMPCore_get_cdromCollection(This,ppCdromCollection)	\
    ( (This)->lpVtbl -> get_cdromCollection(This,ppCdromCollection) ) 

#define IWMPCore_get_closedCaption(This,ppClosedCaption)	\
    ( (This)->lpVtbl -> get_closedCaption(This,ppClosedCaption) ) 

#define IWMPCore_get_isOnline(This,pfOnline)	\
    ( (This)->lpVtbl -> get_isOnline(This,pfOnline) ) 

#define IWMPCore_get_error(This,ppError)	\
    ( (This)->lpVtbl -> get_error(This,ppError) ) 

#define IWMPCore_get_status(This,pbstrStatus)	\
    ( (This)->lpVtbl -> get_status(This,pbstrStatus) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMPCore_INTERFACE_DEFINED__ */


#ifndef __IWMPCore2_INTERFACE_DEFINED__
#define __IWMPCore2_INTERFACE_DEFINED__

/* interface IWMPCore2 */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMPCore2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BC17E5B7-7561-4c18-BB90-17D485775659")
    IWMPCore2 : public IWMPCore
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_dvd( 
            /* [retval][out] */ IWMPDVD **ppDVD) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMPCore2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMPCore2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMPCore2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMPCore2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMPCore2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMPCore2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMPCore2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMPCore2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *close )( 
            IWMPCore2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_URL )( 
            IWMPCore2 * This,
            /* [retval][out] */ BSTR *pbstrURL);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_URL )( 
            IWMPCore2 * This,
            /* [in] */ BSTR bstrURL);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_openState )( 
            IWMPCore2 * This,
            /* [retval][out] */ WMPOpenState *pwmpos);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_playState )( 
            IWMPCore2 * This,
            /* [retval][out] */ WMPPlayState *pwmpps);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_controls )( 
            IWMPCore2 * This,
            /* [retval][out] */ IWMPControls **ppControl);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_settings )( 
            IWMPCore2 * This,
            /* [retval][out] */ IWMPSettings **ppSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_currentMedia )( 
            IWMPCore2 * This,
            /* [retval][out] */ IWMPMedia **ppMedia);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_currentMedia )( 
            IWMPCore2 * This,
            /* [in] */ IWMPMedia *pMedia);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_mediaCollection )( 
            IWMPCore2 * This,
            /* [retval][out] */ IWMPMediaCollection **ppMediaCollection);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_playlistCollection )( 
            IWMPCore2 * This,
            /* [retval][out] */ IWMPPlaylistCollection **ppPlaylistCollection);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_versionInfo )( 
            IWMPCore2 * This,
            /* [retval][out] */ BSTR *pbstrVersionInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *launchURL )( 
            IWMPCore2 * This,
            BSTR bstrURL);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_network )( 
            IWMPCore2 * This,
            /* [retval][out] */ IWMPNetwork **ppQNI);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_currentPlaylist )( 
            IWMPCore2 * This,
            /* [retval][out] */ IWMPPlaylist **ppPL);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_currentPlaylist )( 
            IWMPCore2 * This,
            /* [in] */ IWMPPlaylist *pPL);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_cdromCollection )( 
            IWMPCore2 * This,
            /* [retval][out] */ IWMPCdromCollection **ppCdromCollection);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_closedCaption )( 
            IWMPCore2 * This,
            /* [retval][out] */ IWMPClosedCaption **ppClosedCaption);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_isOnline )( 
            IWMPCore2 * This,
            /* [retval][out] */ VARIANT_BOOL *pfOnline);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_error )( 
            IWMPCore2 * This,
            /* [retval][out] */ IWMPError **ppError);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_status )( 
            IWMPCore2 * This,
            /* [retval][out] */ BSTR *pbstrStatus);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_dvd )( 
            IWMPCore2 * This,
            /* [retval][out] */ IWMPDVD **ppDVD);
        
        END_INTERFACE
    } IWMPCore2Vtbl;

    interface IWMPCore2
    {
        CONST_VTBL struct IWMPCore2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMPCore2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMPCore2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMPCore2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMPCore2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWMPCore2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWMPCore2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWMPCore2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWMPCore2_close(This)	\
    ( (This)->lpVtbl -> close(This) ) 

#define IWMPCore2_get_URL(This,pbstrURL)	\
    ( (This)->lpVtbl -> get_URL(This,pbstrURL) ) 

#define IWMPCore2_put_URL(This,bstrURL)	\
    ( (This)->lpVtbl -> put_URL(This,bstrURL) ) 

#define IWMPCore2_get_openState(This,pwmpos)	\
    ( (This)->lpVtbl -> get_openState(This,pwmpos) ) 

#define IWMPCore2_get_playState(This,pwmpps)	\
    ( (This)->lpVtbl -> get_playState(This,pwmpps) ) 

#define IWMPCore2_get_controls(This,ppControl)	\
    ( (This)->lpVtbl -> get_controls(This,ppControl) ) 

#define IWMPCore2_get_settings(This,ppSettings)	\
    ( (This)->lpVtbl -> get_settings(This,ppSettings) ) 

#define IWMPCore2_get_currentMedia(This,ppMedia)	\
    ( (This)->lpVtbl -> get_currentMedia(This,ppMedia) ) 

#define IWMPCore2_put_currentMedia(This,pMedia)	\
    ( (This)->lpVtbl -> put_currentMedia(This,pMedia) ) 

#define IWMPCore2_get_mediaCollection(This,ppMediaCollection)	\
    ( (This)->lpVtbl -> get_mediaCollection(This,ppMediaCollection) ) 

#define IWMPCore2_get_playlistCollection(This,ppPlaylistCollection)	\
    ( (This)->lpVtbl -> get_playlistCollection(This,ppPlaylistCollection) ) 

#define IWMPCore2_get_versionInfo(This,pbstrVersionInfo)	\
    ( (This)->lpVtbl -> get_versionInfo(This,pbstrVersionInfo) ) 

#define IWMPCore2_launchURL(This,bstrURL)	\
    ( (This)->lpVtbl -> launchURL(This,bstrURL) ) 

#define IWMPCore2_get_network(This,ppQNI)	\
    ( (This)->lpVtbl -> get_network(This,ppQNI) ) 

#define IWMPCore2_get_currentPlaylist(This,ppPL)	\
    ( (This)->lpVtbl -> get_currentPlaylist(This,ppPL) ) 

#define IWMPCore2_put_currentPlaylist(This,pPL)	\
    ( (This)->lpVtbl -> put_currentPlaylist(This,pPL) ) 

#define IWMPCore2_get_cdromCollection(This,ppCdromCollection)	\
    ( (This)->lpVtbl -> get_cdromCollection(This,ppCdromCollection) ) 

#define IWMPCore2_get_closedCaption(This,ppClosedCaption)	\
    ( (This)->lpVtbl -> get_closedCaption(This,ppClosedCaption) ) 

#define IWMPCore2_get_isOnline(This,pfOnline)	\
    ( (This)->lpVtbl -> get_isOnline(This,pfOnline) ) 

#define IWMPCore2_get_error(This,ppError)	\
    ( (This)->lpVtbl -> get_error(This,ppError) ) 

#define IWMPCore2_get_status(This,pbstrStatus)	\
    ( (This)->lpVtbl -> get_status(This,pbstrStatus) ) 


#define IWMPCore2_get_dvd(This,ppDVD)	\
    ( (This)->lpVtbl -> get_dvd(This,ppDVD) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMPCore2_INTERFACE_DEFINED__ */


#ifndef __IWMPCore3_INTERFACE_DEFINED__
#define __IWMPCore3_INTERFACE_DEFINED__

/* interface IWMPCore3 */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMPCore3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7587C667-628F-499f-88E7-6A6F4E888464")
    IWMPCore3 : public IWMPCore2
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE newMedia( 
            /* [in] */ BSTR bstrURL,
            /* [retval][out] */ IWMPMedia **ppMedia) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE newPlaylist( 
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrURL,
            /* [retval][out] */ IWMPPlaylist **ppPlaylist) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMPCore3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMPCore3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMPCore3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMPCore3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMPCore3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMPCore3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMPCore3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMPCore3 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *close )( 
            IWMPCore3 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_URL )( 
            IWMPCore3 * This,
            /* [retval][out] */ BSTR *pbstrURL);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_URL )( 
            IWMPCore3 * This,
            /* [in] */ BSTR bstrURL);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_openState )( 
            IWMPCore3 * This,
            /* [retval][out] */ WMPOpenState *pwmpos);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_playState )( 
            IWMPCore3 * This,
            /* [retval][out] */ WMPPlayState *pwmpps);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_controls )( 
            IWMPCore3 * This,
            /* [retval][out] */ IWMPControls **ppControl);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_settings )( 
            IWMPCore3 * This,
            /* [retval][out] */ IWMPSettings **ppSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_currentMedia )( 
            IWMPCore3 * This,
            /* [retval][out] */ IWMPMedia **ppMedia);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_currentMedia )( 
            IWMPCore3 * This,
            /* [in] */ IWMPMedia *pMedia);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_mediaCollection )( 
            IWMPCore3 * This,
            /* [retval][out] */ IWMPMediaCollection **ppMediaCollection);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_playlistCollection )( 
            IWMPCore3 * This,
            /* [retval][out] */ IWMPPlaylistCollection **ppPlaylistCollection);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_versionInfo )( 
            IWMPCore3 * This,
            /* [retval][out] */ BSTR *pbstrVersionInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *launchURL )( 
            IWMPCore3 * This,
            BSTR bstrURL);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_network )( 
            IWMPCore3 * This,
            /* [retval][out] */ IWMPNetwork **ppQNI);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_currentPlaylist )( 
            IWMPCore3 * This,
            /* [retval][out] */ IWMPPlaylist **ppPL);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_currentPlaylist )( 
            IWMPCore3 * This,
            /* [in] */ IWMPPlaylist *pPL);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_cdromCollection )( 
            IWMPCore3 * This,
            /* [retval][out] */ IWMPCdromCollection **ppCdromCollection);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_closedCaption )( 
            IWMPCore3 * This,
            /* [retval][out] */ IWMPClosedCaption **ppClosedCaption);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_isOnline )( 
            IWMPCore3 * This,
            /* [retval][out] */ VARIANT_BOOL *pfOnline);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_error )( 
            IWMPCore3 * This,
            /* [retval][out] */ IWMPError **ppError);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_status )( 
            IWMPCore3 * This,
            /* [retval][out] */ BSTR *pbstrStatus);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_dvd )( 
            IWMPCore3 * This,
            /* [retval][out] */ IWMPDVD **ppDVD);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *newMedia )( 
            IWMPCore3 * This,
            /* [in] */ BSTR bstrURL,
            /* [retval][out] */ IWMPMedia **ppMedia);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *newPlaylist )( 
            IWMPCore3 * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrURL,
            /* [retval][out] */ IWMPPlaylist **ppPlaylist);
        
        END_INTERFACE
    } IWMPCore3Vtbl;

    interface IWMPCore3
    {
        CONST_VTBL struct IWMPCore3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMPCore3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMPCore3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMPCore3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMPCore3_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWMPCore3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWMPCore3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWMPCore3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWMPCore3_close(This)	\
    ( (This)->lpVtbl -> close(This) ) 

#define IWMPCore3_get_URL(This,pbstrURL)	\
    ( (This)->lpVtbl -> get_URL(This,pbstrURL) ) 

#define IWMPCore3_put_URL(This,bstrURL)	\
    ( (This)->lpVtbl -> put_URL(This,bstrURL) ) 

#define IWMPCore3_get_openState(This,pwmpos)	\
    ( (This)->lpVtbl -> get_openState(This,pwmpos) ) 

#define IWMPCore3_get_playState(This,pwmpps)	\
    ( (This)->lpVtbl -> get_playState(This,pwmpps) ) 

#define IWMPCore3_get_controls(This,ppControl)	\
    ( (This)->lpVtbl -> get_controls(This,ppControl) ) 

#define IWMPCore3_get_settings(This,ppSettings)	\
    ( (This)->lpVtbl -> get_settings(This,ppSettings) ) 

#define IWMPCore3_get_currentMedia(This,ppMedia)	\
    ( (This)->lpVtbl -> get_currentMedia(This,ppMedia) ) 

#define IWMPCore3_put_currentMedia(This,pMedia)	\
    ( (This)->lpVtbl -> put_currentMedia(This,pMedia) ) 

#define IWMPCore3_get_mediaCollection(This,ppMediaCollection)	\
    ( (This)->lpVtbl -> get_mediaCollection(This,ppMediaCollection) ) 

#define IWMPCore3_get_playlistCollection(This,ppPlaylistCollection)	\
    ( (This)->lpVtbl -> get_playlistCollection(This,ppPlaylistCollection) ) 

#define IWMPCore3_get_versionInfo(This,pbstrVersionInfo)	\
    ( (This)->lpVtbl -> get_versionInfo(This,pbstrVersionInfo) ) 

#define IWMPCore3_launchURL(This,bstrURL)	\
    ( (This)->lpVtbl -> launchURL(This,bstrURL) ) 

#define IWMPCore3_get_network(This,ppQNI)	\
    ( (This)->lpVtbl -> get_network(This,ppQNI) ) 

#define IWMPCore3_get_currentPlaylist(This,ppPL)	\
    ( (This)->lpVtbl -> get_currentPlaylist(This,ppPL) ) 

#define IWMPCore3_put_currentPlaylist(This,pPL)	\
    ( (This)->lpVtbl -> put_currentPlaylist(This,pPL) ) 

#define IWMPCore3_get_cdromCollection(This,ppCdromCollection)	\
    ( (This)->lpVtbl -> get_cdromCollection(This,ppCdromCollection) ) 

#define IWMPCore3_get_closedCaption(This,ppClosedCaption)	\
    ( (This)->lpVtbl -> get_closedCaption(This,ppClosedCaption) ) 

#define IWMPCore3_get_isOnline(This,pfOnline)	\
    ( (This)->lpVtbl -> get_isOnline(This,pfOnline) ) 

#define IWMPCore3_get_error(This,ppError)	\
    ( (This)->lpVtbl -> get_error(This,ppError) ) 

#define IWMPCore3_get_status(This,pbstrStatus)	\
    ( (This)->lpVtbl -> get_status(This,pbstrStatus) ) 


#define IWMPCore3_get_dvd(This,ppDVD)	\
    ( (This)->lpVtbl -> get_dvd(This,ppDVD) ) 


#define IWMPCore3_newMedia(This,bstrURL,ppMedia)	\
    ( (This)->lpVtbl -> newMedia(This,bstrURL,ppMedia) ) 

#define IWMPCore3_newPlaylist(This,bstrName,bstrURL,ppPlaylist)	\
    ( (This)->lpVtbl -> newPlaylist(This,bstrName,bstrURL,ppPlaylist) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMPCore3_INTERFACE_DEFINED__ */


#ifndef __IWMPControls_INTERFACE_DEFINED__
#define __IWMPControls_INTERFACE_DEFINED__

/* interface IWMPControls */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMPControls;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("74C09E02-F828-11d2-A74B-00A0C905F36E")
    IWMPControls : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_isAvailable( 
            /* [in] */ BSTR bstrItem,
            /* [retval][out] */ VARIANT_BOOL *pIsAvailable) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE play( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE stop( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE pause( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE fastForward( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE fastReverse( void) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_currentPosition( 
            /* [retval][out] */ double *pdCurrentPosition) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_currentPosition( 
            /* [in] */ double dCurrentPosition) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_currentPositionString( 
            /* [retval][out] */ BSTR *pbstrCurrentPosition) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE next( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE previous( void) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_currentItem( 
            /* [retval][out] */ IWMPMedia **ppIWMPMedia) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_currentItem( 
            /* [in] */ IWMPMedia *pIWMPMedia) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_currentMarker( 
            /* [retval][out] */ long *plMarker) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_currentMarker( 
            /* [in] */ long lMarker) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE playItem( 
            /* [in] */ IWMPMedia *pIWMPMedia) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMPControlsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMPControls * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMPControls * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMPControls * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMPControls * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMPControls * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMPControls * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMPControls * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_isAvailable )( 
            IWMPControls * This,
            /* [in] */ BSTR bstrItem,
            /* [retval][out] */ VARIANT_BOOL *pIsAvailable);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *play )( 
            IWMPControls * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *stop )( 
            IWMPControls * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *pause )( 
            IWMPControls * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *fastForward )( 
            IWMPControls * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *fastReverse )( 
            IWMPControls * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_currentPosition )( 
            IWMPControls * This,
            /* [retval][out] */ double *pdCurrentPosition);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_currentPosition )( 
            IWMPControls * This,
            /* [in] */ double dCurrentPosition);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_currentPositionString )( 
            IWMPControls * This,
            /* [retval][out] */ BSTR *pbstrCurrentPosition);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *next )( 
            IWMPControls * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *previous )( 
            IWMPControls * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_currentItem )( 
            IWMPControls * This,
            /* [retval][out] */ IWMPMedia **ppIWMPMedia);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_currentItem )( 
            IWMPControls * This,
            /* [in] */ IWMPMedia *pIWMPMedia);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_currentMarker )( 
            IWMPControls * This,
            /* [retval][out] */ long *plMarker);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_currentMarker )( 
            IWMPControls * This,
            /* [in] */ long lMarker);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *playItem )( 
            IWMPControls * This,
            /* [in] */ IWMPMedia *pIWMPMedia);
        
        END_INTERFACE
    } IWMPControlsVtbl;

    interface IWMPControls
    {
        CONST_VTBL struct IWMPControlsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMPControls_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMPControls_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMPControls_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMPControls_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWMPControls_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWMPControls_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWMPControls_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWMPControls_get_isAvailable(This,bstrItem,pIsAvailable)	\
    ( (This)->lpVtbl -> get_isAvailable(This,bstrItem,pIsAvailable) ) 

#define IWMPControls_play(This)	\
    ( (This)->lpVtbl -> play(This) ) 

#define IWMPControls_stop(This)	\
    ( (This)->lpVtbl -> stop(This) ) 

#define IWMPControls_pause(This)	\
    ( (This)->lpVtbl -> pause(This) ) 

#define IWMPControls_fastForward(This)	\
    ( (This)->lpVtbl -> fastForward(This) ) 

#define IWMPControls_fastReverse(This)	\
    ( (This)->lpVtbl -> fastReverse(This) ) 

#define IWMPControls_get_currentPosition(This,pdCurrentPosition)	\
    ( (This)->lpVtbl -> get_currentPosition(This,pdCurrentPosition) ) 

#define IWMPControls_put_currentPosition(This,dCurrentPosition)	\
    ( (This)->lpVtbl -> put_currentPosition(This,dCurrentPosition) ) 

#define IWMPControls_get_currentPositionString(This,pbstrCurrentPosition)	\
    ( (This)->lpVtbl -> get_currentPositionString(This,pbstrCurrentPosition) ) 

#define IWMPControls_next(This)	\
    ( (This)->lpVtbl -> next(This) ) 

#define IWMPControls_previous(This)	\
    ( (This)->lpVtbl -> previous(This) ) 

#define IWMPControls_get_currentItem(This,ppIWMPMedia)	\
    ( (This)->lpVtbl -> get_currentItem(This,ppIWMPMedia) ) 

#define IWMPControls_put_currentItem(This,pIWMPMedia)	\
    ( (This)->lpVtbl -> put_currentItem(This,pIWMPMedia) ) 

#define IWMPControls_get_currentMarker(This,plMarker)	\
    ( (This)->lpVtbl -> get_currentMarker(This,plMarker) ) 

#define IWMPControls_put_currentMarker(This,lMarker)	\
    ( (This)->lpVtbl -> put_currentMarker(This,lMarker) ) 

#define IWMPControls_playItem(This,pIWMPMedia)	\
    ( (This)->lpVtbl -> playItem(This,pIWMPMedia) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMPControls_INTERFACE_DEFINED__ */


#ifndef __IWMPControls2_INTERFACE_DEFINED__
#define __IWMPControls2_INTERFACE_DEFINED__

/* interface IWMPControls2 */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMPControls2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6F030D25-0890-480f-9775-1F7E40AB5B8E")
    IWMPControls2 : public IWMPControls
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE step( 
            /* [in] */ long lStep) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMPControls2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMPControls2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMPControls2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMPControls2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMPControls2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMPControls2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMPControls2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMPControls2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_isAvailable )( 
            IWMPControls2 * This,
            /* [in] */ BSTR bstrItem,
            /* [retval][out] */ VARIANT_BOOL *pIsAvailable);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *play )( 
            IWMPControls2 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *stop )( 
            IWMPControls2 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *pause )( 
            IWMPControls2 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *fastForward )( 
            IWMPControls2 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *fastReverse )( 
            IWMPControls2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_currentPosition )( 
            IWMPControls2 * This,
            /* [retval][out] */ double *pdCurrentPosition);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_currentPosition )( 
            IWMPControls2 * This,
            /* [in] */ double dCurrentPosition);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_currentPositionString )( 
            IWMPControls2 * This,
            /* [retval][out] */ BSTR *pbstrCurrentPosition);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *next )( 
            IWMPControls2 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *previous )( 
            IWMPControls2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_currentItem )( 
            IWMPControls2 * This,
            /* [retval][out] */ IWMPMedia **ppIWMPMedia);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_currentItem )( 
            IWMPControls2 * This,
            /* [in] */ IWMPMedia *pIWMPMedia);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_currentMarker )( 
            IWMPControls2 * This,
            /* [retval][out] */ long *plMarker);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_currentMarker )( 
            IWMPControls2 * This,
            /* [in] */ long lMarker);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *playItem )( 
            IWMPControls2 * This,
            /* [in] */ IWMPMedia *pIWMPMedia);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *step )( 
            IWMPControls2 * This,
            /* [in] */ long lStep);
        
        END_INTERFACE
    } IWMPControls2Vtbl;

    interface IWMPControls2
    {
        CONST_VTBL struct IWMPControls2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMPControls2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMPControls2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMPControls2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMPControls2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWMPControls2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWMPControls2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWMPControls2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWMPControls2_get_isAvailable(This,bstrItem,pIsAvailable)	\
    ( (This)->lpVtbl -> get_isAvailable(This,bstrItem,pIsAvailable) ) 

#define IWMPControls2_play(This)	\
    ( (This)->lpVtbl -> play(This) ) 

#define IWMPControls2_stop(This)	\
    ( (This)->lpVtbl -> stop(This) ) 

#define IWMPControls2_pause(This)	\
    ( (This)->lpVtbl -> pause(This) ) 

#define IWMPControls2_fastForward(This)	\
    ( (This)->lpVtbl -> fastForward(This) ) 

#define IWMPControls2_fastReverse(This)	\
    ( (This)->lpVtbl -> fastReverse(This) ) 

#define IWMPControls2_get_currentPosition(This,pdCurrentPosition)	\
    ( (This)->lpVtbl -> get_currentPosition(This,pdCurrentPosition) ) 

#define IWMPControls2_put_currentPosition(This,dCurrentPosition)	\
    ( (This)->lpVtbl -> put_currentPosition(This,dCurrentPosition) ) 

#define IWMPControls2_get_currentPositionString(This,pbstrCurrentPosition)	\
    ( (This)->lpVtbl -> get_currentPositionString(This,pbstrCurrentPosition) ) 

#define IWMPControls2_next(This)	\
    ( (This)->lpVtbl -> next(This) ) 

#define IWMPControls2_previous(This)	\
    ( (This)->lpVtbl -> previous(This) ) 

#define IWMPControls2_get_currentItem(This,ppIWMPMedia)	\
    ( (This)->lpVtbl -> get_currentItem(This,ppIWMPMedia) ) 

#define IWMPControls2_put_currentItem(This,pIWMPMedia)	\
    ( (This)->lpVtbl -> put_currentItem(This,pIWMPMedia) ) 

#define IWMPControls2_get_currentMarker(This,plMarker)	\
    ( (This)->lpVtbl -> get_currentMarker(This,plMarker) ) 

#define IWMPControls2_put_currentMarker(This,lMarker)	\
    ( (This)->lpVtbl -> put_currentMarker(This,lMarker) ) 

#define IWMPControls2_playItem(This,pIWMPMedia)	\
    ( (This)->lpVtbl -> playItem(This,pIWMPMedia) ) 


#define IWMPControls2_step(This,lStep)	\
    ( (This)->lpVtbl -> step(This,lStep) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMPControls2_INTERFACE_DEFINED__ */


#ifndef __IWMPControls3_INTERFACE_DEFINED__
#define __IWMPControls3_INTERFACE_DEFINED__

/* interface IWMPControls3 */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMPControls3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A1D1110E-D545-476a-9A78-AC3E4CB1E6BD")
    IWMPControls3 : public IWMPControls2
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_audioLanguageCount( 
            /* [retval][out] */ long *plCount) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getAudioLanguageID( 
            /* [in] */ long lIndex,
            /* [retval][out] */ long *plLangID) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getAudioLanguageDescription( 
            /* [in] */ long lIndex,
            /* [retval][out] */ BSTR *pbstrLangDesc) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_currentAudioLanguage( 
            /* [retval][out] */ long *plLangID) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_currentAudioLanguage( 
            /* [in] */ long lLangID) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_currentAudioLanguageIndex( 
            /* [retval][out] */ long *plIndex) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_currentAudioLanguageIndex( 
            /* [in] */ long lIndex) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getLanguageName( 
            /* [in] */ long lLangID,
            /* [retval][out] */ BSTR *pbstrLangName) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_currentPositionTimecode( 
            /* [retval][out] */ BSTR *bstrTimecode) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_currentPositionTimecode( 
            /* [in] */ BSTR bstrTimecode) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMPControls3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMPControls3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMPControls3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMPControls3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMPControls3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMPControls3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMPControls3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMPControls3 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_isAvailable )( 
            IWMPControls3 * This,
            /* [in] */ BSTR bstrItem,
            /* [retval][out] */ VARIANT_BOOL *pIsAvailable);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *play )( 
            IWMPControls3 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *stop )( 
            IWMPControls3 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *pause )( 
            IWMPControls3 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *fastForward )( 
            IWMPControls3 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *fastReverse )( 
            IWMPControls3 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_currentPosition )( 
            IWMPControls3 * This,
            /* [retval][out] */ double *pdCurrentPosition);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_currentPosition )( 
            IWMPControls3 * This,
            /* [in] */ double dCurrentPosition);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_currentPositionString )( 
            IWMPControls3 * This,
            /* [retval][out] */ BSTR *pbstrCurrentPosition);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *next )( 
            IWMPControls3 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *previous )( 
            IWMPControls3 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_currentItem )( 
            IWMPControls3 * This,
            /* [retval][out] */ IWMPMedia **ppIWMPMedia);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_currentItem )( 
            IWMPControls3 * This,
            /* [in] */ IWMPMedia *pIWMPMedia);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_currentMarker )( 
            IWMPControls3 * This,
            /* [retval][out] */ long *plMarker);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_currentMarker )( 
            IWMPControls3 * This,
            /* [in] */ long lMarker);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *playItem )( 
            IWMPControls3 * This,
            /* [in] */ IWMPMedia *pIWMPMedia);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *step )( 
            IWMPControls3 * This,
            /* [in] */ long lStep);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_audioLanguageCount )( 
            IWMPControls3 * This,
            /* [retval][out] */ long *plCount);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getAudioLanguageID )( 
            IWMPControls3 * This,
            /* [in] */ long lIndex,
            /* [retval][out] */ long *plLangID);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getAudioLanguageDescription )( 
            IWMPControls3 * This,
            /* [in] */ long lIndex,
            /* [retval][out] */ BSTR *pbstrLangDesc);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_currentAudioLanguage )( 
            IWMPControls3 * This,
            /* [retval][out] */ long *plLangID);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_currentAudioLanguage )( 
            IWMPControls3 * This,
            /* [in] */ long lLangID);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_currentAudioLanguageIndex )( 
            IWMPControls3 * This,
            /* [retval][out] */ long *plIndex);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_currentAudioLanguageIndex )( 
            IWMPControls3 * This,
            /* [in] */ long lIndex);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getLanguageName )( 
            IWMPControls3 * This,
            /* [in] */ long lLangID,
            /* [retval][out] */ BSTR *pbstrLangName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_currentPositionTimecode )( 
            IWMPControls3 * This,
            /* [retval][out] */ BSTR *bstrTimecode);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_currentPositionTimecode )( 
            IWMPControls3 * This,
            /* [in] */ BSTR bstrTimecode);
        
        END_INTERFACE
    } IWMPControls3Vtbl;

    interface IWMPControls3
    {
        CONST_VTBL struct IWMPControls3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMPControls3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMPControls3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMPControls3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMPControls3_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWMPControls3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWMPControls3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWMPControls3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWMPControls3_get_isAvailable(This,bstrItem,pIsAvailable)	\
    ( (This)->lpVtbl -> get_isAvailable(This,bstrItem,pIsAvailable) ) 

#define IWMPControls3_play(This)	\
    ( (This)->lpVtbl -> play(This) ) 

#define IWMPControls3_stop(This)	\
    ( (This)->lpVtbl -> stop(This) ) 

#define IWMPControls3_pause(This)	\
    ( (This)->lpVtbl -> pause(This) ) 

#define IWMPControls3_fastForward(This)	\
    ( (This)->lpVtbl -> fastForward(This) ) 

#define IWMPControls3_fastReverse(This)	\
    ( (This)->lpVtbl -> fastReverse(This) ) 

#define IWMPControls3_get_currentPosition(This,pdCurrentPosition)	\
    ( (This)->lpVtbl -> get_currentPosition(This,pdCurrentPosition) ) 

#define IWMPControls3_put_currentPosition(This,dCurrentPosition)	\
    ( (This)->lpVtbl -> put_currentPosition(This,dCurrentPosition) ) 

#define IWMPControls3_get_currentPositionString(This,pbstrCurrentPosition)	\
    ( (This)->lpVtbl -> get_currentPositionString(This,pbstrCurrentPosition) ) 

#define IWMPControls3_next(This)	\
    ( (This)->lpVtbl -> next(This) ) 

#define IWMPControls3_previous(This)	\
    ( (This)->lpVtbl -> previous(This) ) 

#define IWMPControls3_get_currentItem(This,ppIWMPMedia)	\
    ( (This)->lpVtbl -> get_currentItem(This,ppIWMPMedia) ) 

#define IWMPControls3_put_currentItem(This,pIWMPMedia)	\
    ( (This)->lpVtbl -> put_currentItem(This,pIWMPMedia) ) 

#define IWMPControls3_get_currentMarker(This,plMarker)	\
    ( (This)->lpVtbl -> get_currentMarker(This,plMarker) ) 

#define IWMPControls3_put_currentMarker(This,lMarker)	\
    ( (This)->lpVtbl -> put_currentMarker(This,lMarker) ) 

#define IWMPControls3_playItem(This,pIWMPMedia)	\
    ( (This)->lpVtbl -> playItem(This,pIWMPMedia) ) 


#define IWMPControls3_step(This,lStep)	\
    ( (This)->lpVtbl -> step(This,lStep) ) 


#define IWMPControls3_get_audioLanguageCount(This,plCount)	\
    ( (This)->lpVtbl -> get_audioLanguageCount(This,plCount) ) 

#define IWMPControls3_getAudioLanguageID(This,lIndex,plLangID)	\
    ( (This)->lpVtbl -> getAudioLanguageID(This,lIndex,plLangID) ) 

#define IWMPControls3_getAudioLanguageDescription(This,lIndex,pbstrLangDesc)	\
    ( (This)->lpVtbl -> getAudioLanguageDescription(This,lIndex,pbstrLangDesc) ) 

#define IWMPControls3_get_currentAudioLanguage(This,plLangID)	\
    ( (This)->lpVtbl -> get_currentAudioLanguage(This,plLangID) ) 

#define IWMPControls3_put_currentAudioLanguage(This,lLangID)	\
    ( (This)->lpVtbl -> put_currentAudioLanguage(This,lLangID) ) 

#define IWMPControls3_get_currentAudioLanguageIndex(This,plIndex)	\
    ( (This)->lpVtbl -> get_currentAudioLanguageIndex(This,plIndex) ) 

#define IWMPControls3_put_currentAudioLanguageIndex(This,lIndex)	\
    ( (This)->lpVtbl -> put_currentAudioLanguageIndex(This,lIndex) ) 

#define IWMPControls3_getLanguageName(This,lLangID,pbstrLangName)	\
    ( (This)->lpVtbl -> getLanguageName(This,lLangID,pbstrLangName) ) 

#define IWMPControls3_get_currentPositionTimecode(This,bstrTimecode)	\
    ( (This)->lpVtbl -> get_currentPositionTimecode(This,bstrTimecode) ) 

#define IWMPControls3_put_currentPositionTimecode(This,bstrTimecode)	\
    ( (This)->lpVtbl -> put_currentPositionTimecode(This,bstrTimecode) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMPControls3_INTERFACE_DEFINED__ */


#ifndef __IWMPSettings_INTERFACE_DEFINED__
#define __IWMPSettings_INTERFACE_DEFINED__

/* interface IWMPSettings */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMPSettings;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9104D1AB-80C9-4fed-ABF0-2E6417A6DF14")
    IWMPSettings : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_isAvailable( 
            /* [in] */ BSTR bstrItem,
            /* [retval][out] */ VARIANT_BOOL *pIsAvailable) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_autoStart( 
            /* [retval][out] */ VARIANT_BOOL *pfAutoStart) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_autoStart( 
            /* [in] */ VARIANT_BOOL fAutoStart) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_baseURL( 
            /* [retval][out] */ BSTR *pbstrBaseURL) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_baseURL( 
            /* [in] */ BSTR bstrBaseURL) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_defaultFrame( 
            /* [retval][out] */ BSTR *pbstrDefaultFrame) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_defaultFrame( 
            /* [in] */ BSTR bstrDefaultFrame) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_invokeURLs( 
            /* [retval][out] */ VARIANT_BOOL *pfInvokeURLs) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_invokeURLs( 
            /* [in] */ VARIANT_BOOL fInvokeURLs) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_mute( 
            /* [retval][out] */ VARIANT_BOOL *pfMute) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_mute( 
            /* [in] */ VARIANT_BOOL fMute) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_playCount( 
            /* [retval][out] */ long *plCount) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_playCount( 
            /* [in] */ long lCount) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_rate( 
            /* [retval][out] */ double *pdRate) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_rate( 
            /* [in] */ double dRate) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_balance( 
            /* [retval][out] */ long *plBalance) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_balance( 
            /* [in] */ long lBalance) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_volume( 
            /* [retval][out] */ long *plVolume) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_volume( 
            /* [in] */ long lVolume) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getMode( 
            /* [in] */ BSTR bstrMode,
            /* [retval][out] */ VARIANT_BOOL *pvarfMode) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setMode( 
            /* [in] */ BSTR bstrMode,
            /* [in] */ VARIANT_BOOL varfMode) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_enableErrorDialogs( 
            /* [retval][out] */ VARIANT_BOOL *pfEnableErrorDialogs) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_enableErrorDialogs( 
            /* [in] */ VARIANT_BOOL fEnableErrorDialogs) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMPSettingsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMPSettings * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMPSettings * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMPSettings * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMPSettings * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMPSettings * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMPSettings * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMPSettings * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_isAvailable )( 
            IWMPSettings * This,
            /* [in] */ BSTR bstrItem,
            /* [retval][out] */ VARIANT_BOOL *pIsAvailable);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_autoStart )( 
            IWMPSettings * This,
            /* [retval][out] */ VARIANT_BOOL *pfAutoStart);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_autoStart )( 
            IWMPSettings * This,
            /* [in] */ VARIANT_BOOL fAutoStart);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_baseURL )( 
            IWMPSettings * This,
            /* [retval][out] */ BSTR *pbstrBaseURL);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_baseURL )( 
            IWMPSettings * This,
            /* [in] */ BSTR bstrBaseURL);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_defaultFrame )( 
            IWMPSettings * This,
            /* [retval][out] */ BSTR *pbstrDefaultFrame);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_defaultFrame )( 
            IWMPSettings * This,
            /* [in] */ BSTR bstrDefaultFrame);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_invokeURLs )( 
            IWMPSettings * This,
            /* [retval][out] */ VARIANT_BOOL *pfInvokeURLs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_invokeURLs )( 
            IWMPSettings * This,
            /* [in] */ VARIANT_BOOL fInvokeURLs);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_mute )( 
            IWMPSettings * This,
            /* [retval][out] */ VARIANT_BOOL *pfMute);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_mute )( 
            IWMPSettings * This,
            /* [in] */ VARIANT_BOOL fMute);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_playCount )( 
            IWMPSettings * This,
            /* [retval][out] */ long *plCount);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_playCount )( 
            IWMPSettings * This,
            /* [in] */ long lCount);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_rate )( 
            IWMPSettings * This,
            /* [retval][out] */ double *pdRate);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_rate )( 
            IWMPSettings * This,
            /* [in] */ double dRate);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_balance )( 
            IWMPSettings * This,
            /* [retval][out] */ long *plBalance);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_balance )( 
            IWMPSettings * This,
            /* [in] */ long lBalance);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_volume )( 
            IWMPSettings * This,
            /* [retval][out] */ long *plVolume);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_volume )( 
            IWMPSettings * This,
            /* [in] */ long lVolume);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getMode )( 
            IWMPSettings * This,
            /* [in] */ BSTR bstrMode,
            /* [retval][out] */ VARIANT_BOOL *pvarfMode);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *setMode )( 
            IWMPSettings * This,
            /* [in] */ BSTR bstrMode,
            /* [in] */ VARIANT_BOOL varfMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_enableErrorDialogs )( 
            IWMPSettings * This,
            /* [retval][out] */ VARIANT_BOOL *pfEnableErrorDialogs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_enableErrorDialogs )( 
            IWMPSettings * This,
            /* [in] */ VARIANT_BOOL fEnableErrorDialogs);
        
        END_INTERFACE
    } IWMPSettingsVtbl;

    interface IWMPSettings
    {
        CONST_VTBL struct IWMPSettingsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMPSettings_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMPSettings_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMPSettings_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMPSettings_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWMPSettings_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWMPSettings_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWMPSettings_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWMPSettings_get_isAvailable(This,bstrItem,pIsAvailable)	\
    ( (This)->lpVtbl -> get_isAvailable(This,bstrItem,pIsAvailable) ) 

#define IWMPSettings_get_autoStart(This,pfAutoStart)	\
    ( (This)->lpVtbl -> get_autoStart(This,pfAutoStart) ) 

#define IWMPSettings_put_autoStart(This,fAutoStart)	\
    ( (This)->lpVtbl -> put_autoStart(This,fAutoStart) ) 

#define IWMPSettings_get_baseURL(This,pbstrBaseURL)	\
    ( (This)->lpVtbl -> get_baseURL(This,pbstrBaseURL) ) 

#define IWMPSettings_put_baseURL(This,bstrBaseURL)	\
    ( (This)->lpVtbl -> put_baseURL(This,bstrBaseURL) ) 

#define IWMPSettings_get_defaultFrame(This,pbstrDefaultFrame)	\
    ( (This)->lpVtbl -> get_defaultFrame(This,pbstrDefaultFrame) ) 

#define IWMPSettings_put_defaultFrame(This,bstrDefaultFrame)	\
    ( (This)->lpVtbl -> put_defaultFrame(This,bstrDefaultFrame) ) 

#define IWMPSettings_get_invokeURLs(This,pfInvokeURLs)	\
    ( (This)->lpVtbl -> get_invokeURLs(This,pfInvokeURLs) ) 

#define IWMPSettings_put_invokeURLs(This,fInvokeURLs)	\
    ( (This)->lpVtbl -> put_invokeURLs(This,fInvokeURLs) ) 

#define IWMPSettings_get_mute(This,pfMute)	\
    ( (This)->lpVtbl -> get_mute(This,pfMute) ) 

#define IWMPSettings_put_mute(This,fMute)	\
    ( (This)->lpVtbl -> put_mute(This,fMute) ) 

#define IWMPSettings_get_playCount(This,plCount)	\
    ( (This)->lpVtbl -> get_playCount(This,plCount) ) 

#define IWMPSettings_put_playCount(This,lCount)	\
    ( (This)->lpVtbl -> put_playCount(This,lCount) ) 

#define IWMPSettings_get_rate(This,pdRate)	\
    ( (This)->lpVtbl -> get_rate(This,pdRate) ) 

#define IWMPSettings_put_rate(This,dRate)	\
    ( (This)->lpVtbl -> put_rate(This,dRate) ) 

#define IWMPSettings_get_balance(This,plBalance)	\
    ( (This)->lpVtbl -> get_balance(This,plBalance) ) 

#define IWMPSettings_put_balance(This,lBalance)	\
    ( (This)->lpVtbl -> put_balance(This,lBalance) ) 

#define IWMPSettings_get_volume(This,plVolume)	\
    ( (This)->lpVtbl -> get_volume(This,plVolume) ) 

#define IWMPSettings_put_volume(This,lVolume)	\
    ( (This)->lpVtbl -> put_volume(This,lVolume) ) 

#define IWMPSettings_getMode(This,bstrMode,pvarfMode)	\
    ( (This)->lpVtbl -> getMode(This,bstrMode,pvarfMode) ) 

#define IWMPSettings_setMode(This,bstrMode,varfMode)	\
    ( (This)->lpVtbl -> setMode(This,bstrMode,varfMode) ) 

#define IWMPSettings_get_enableErrorDialogs(This,pfEnableErrorDialogs)	\
    ( (This)->lpVtbl -> get_enableErrorDialogs(This,pfEnableErrorDialogs) ) 

#define IWMPSettings_put_enableErrorDialogs(This,fEnableErrorDialogs)	\
    ( (This)->lpVtbl -> put_enableErrorDialogs(This,fEnableErrorDialogs) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMPSettings_INTERFACE_DEFINED__ */


#ifndef __IWMPNetwork_INTERFACE_DEFINED__
#define __IWMPNetwork_INTERFACE_DEFINED__

/* interface IWMPNetwork */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMPNetwork;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EC21B779-EDEF-462d-BBA4-AD9DDE2B29A7")
    IWMPNetwork : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_bandWidth( 
            /* [retval][out] */ long *plBandwidth) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_recoveredPackets( 
            /* [retval][out] */ long *plRecoveredPackets) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_sourceProtocol( 
            /* [retval][out] */ BSTR *pbstrSourceProtocol) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_receivedPackets( 
            /* [retval][out] */ long *plReceivedPackets) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_lostPackets( 
            /* [retval][out] */ long *plLostPackets) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_receptionQuality( 
            /* [retval][out] */ long *plReceptionQuality) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_bufferingCount( 
            /* [retval][out] */ long *plBufferingCount) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_bufferingProgress( 
            /* [retval][out] */ long *plBufferingProgress) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_bufferingTime( 
            /* [retval][out] */ long *plBufferingTime) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_bufferingTime( 
            /* [in] */ long lBufferingTime) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_frameRate( 
            /* [retval][out] */ long *plFrameRate) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_maxBitRate( 
            /* [retval][out] */ long *plBitRate) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_bitRate( 
            /* [retval][out] */ long *plBitRate) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getProxySettings( 
            /* [in] */ BSTR bstrProtocol,
            /* [retval][out] */ long *plProxySetting) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setProxySettings( 
            /* [in] */ BSTR bstrProtocol,
            /* [in] */ long lProxySetting) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getProxyName( 
            /* [in] */ BSTR bstrProtocol,
            /* [retval][out] */ BSTR *pbstrProxyName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setProxyName( 
            /* [in] */ BSTR bstrProtocol,
            /* [in] */ BSTR bstrProxyName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getProxyPort( 
            /* [in] */ BSTR bstrProtocol,
            /* [retval][out] */ long *lProxyPort) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setProxyPort( 
            /* [in] */ BSTR bstrProtocol,
            /* [in] */ long lProxyPort) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getProxyExceptionList( 
            /* [in] */ BSTR bstrProtocol,
            /* [retval][out] */ BSTR *pbstrExceptionList) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setProxyExceptionList( 
            /* [in] */ BSTR bstrProtocol,
            /* [in] */ BSTR pbstrExceptionList) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getProxyBypassForLocal( 
            /* [in] */ BSTR bstrProtocol,
            /* [retval][out] */ VARIANT_BOOL *pfBypassForLocal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setProxyBypassForLocal( 
            /* [in] */ BSTR bstrProtocol,
            /* [in] */ VARIANT_BOOL fBypassForLocal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_maxBandwidth( 
            /* [retval][out] */ long *lMaxBandwidth) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_maxBandwidth( 
            /* [in] */ long lMaxBandwidth) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_downloadProgress( 
            /* [retval][out] */ long *plDownloadProgress) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_encodedFrameRate( 
            /* [retval][out] */ long *plFrameRate) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_framesSkipped( 
            /* [retval][out] */ long *plFrames) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMPNetworkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMPNetwork * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMPNetwork * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMPNetwork * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMPNetwork * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMPNetwork * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMPNetwork * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMPNetwork * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_bandWidth )( 
            IWMPNetwork * This,
            /* [retval][out] */ long *plBandwidth);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_recoveredPackets )( 
            IWMPNetwork * This,
            /* [retval][out] */ long *plRecoveredPackets);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_sourceProtocol )( 
            IWMPNetwork * This,
            /* [retval][out] */ BSTR *pbstrSourceProtocol);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_receivedPackets )( 
            IWMPNetwork * This,
            /* [retval][out] */ long *plReceivedPackets);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_lostPackets )( 
            IWMPNetwork * This,
            /* [retval][out] */ long *plLostPackets);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_receptionQuality )( 
            IWMPNetwork * This,
            /* [retval][out] */ long *plReceptionQuality);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_bufferingCount )( 
            IWMPNetwork * This,
            /* [retval][out] */ long *plBufferingCount);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_bufferingProgress )( 
            IWMPNetwork * This,
            /* [retval][out] */ long *plBufferingProgress);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_bufferingTime )( 
            IWMPNetwork * This,
            /* [retval][out] */ long *plBufferingTime);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_bufferingTime )( 
            IWMPNetwork * This,
            /* [in] */ long lBufferingTime);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_frameRate )( 
            IWMPNetwork * This,
            /* [retval][out] */ long *plFrameRate);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_maxBitRate )( 
            IWMPNetwork * This,
            /* [retval][out] */ long *plBitRate);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_bitRate )( 
            IWMPNetwork * This,
            /* [retval][out] */ long *plBitRate);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getProxySettings )( 
            IWMPNetwork * This,
            /* [in] */ BSTR bstrProtocol,
            /* [retval][out] */ long *plProxySetting);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *setProxySettings )( 
            IWMPNetwork * This,
            /* [in] */ BSTR bstrProtocol,
            /* [in] */ long lProxySetting);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getProxyName )( 
            IWMPNetwork * This,
            /* [in] */ BSTR bstrProtocol,
            /* [retval][out] */ BSTR *pbstrProxyName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *setProxyName )( 
            IWMPNetwork * This,
            /* [in] */ BSTR bstrProtocol,
            /* [in] */ BSTR bstrProxyName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getProxyPort )( 
            IWMPNetwork * This,
            /* [in] */ BSTR bstrProtocol,
            /* [retval][out] */ long *lProxyPort);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *setProxyPort )( 
            IWMPNetwork * This,
            /* [in] */ BSTR bstrProtocol,
            /* [in] */ long lProxyPort);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getProxyExceptionList )( 
            IWMPNetwork * This,
            /* [in] */ BSTR bstrProtocol,
            /* [retval][out] */ BSTR *pbstrExceptionList);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *setProxyExceptionList )( 
            IWMPNetwork * This,
            /* [in] */ BSTR bstrProtocol,
            /* [in] */ BSTR pbstrExceptionList);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getProxyBypassForLocal )( 
            IWMPNetwork * This,
            /* [in] */ BSTR bstrProtocol,
            /* [retval][out] */ VARIANT_BOOL *pfBypassForLocal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *setProxyBypassForLocal )( 
            IWMPNetwork * This,
            /* [in] */ BSTR bstrProtocol,
            /* [in] */ VARIANT_BOOL fBypassForLocal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_maxBandwidth )( 
            IWMPNetwork * This,
            /* [retval][out] */ long *lMaxBandwidth);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_maxBandwidth )( 
            IWMPNetwork * This,
            /* [in] */ long lMaxBandwidth);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_downloadProgress )( 
            IWMPNetwork * This,
            /* [retval][out] */ long *plDownloadProgress);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_encodedFrameRate )( 
            IWMPNetwork * This,
            /* [retval][out] */ long *plFrameRate);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_framesSkipped )( 
            IWMPNetwork * This,
            /* [retval][out] */ long *plFrames);
        
        END_INTERFACE
    } IWMPNetworkVtbl;

    interface IWMPNetwork
    {
        CONST_VTBL struct IWMPNetworkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMPNetwork_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMPNetwork_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMPNetwork_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMPNetwork_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWMPNetwork_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWMPNetwork_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWMPNetwork_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWMPNetwork_get_bandWidth(This,plBandwidth)	\
    ( (This)->lpVtbl -> get_bandWidth(This,plBandwidth) ) 

#define IWMPNetwork_get_recoveredPackets(This,plRecoveredPackets)	\
    ( (This)->lpVtbl -> get_recoveredPackets(This,plRecoveredPackets) ) 

#define IWMPNetwork_get_sourceProtocol(This,pbstrSourceProtocol)	\
    ( (This)->lpVtbl -> get_sourceProtocol(This,pbstrSourceProtocol) ) 

#define IWMPNetwork_get_receivedPackets(This,plReceivedPackets)	\
    ( (This)->lpVtbl -> get_receivedPackets(This,plReceivedPackets) ) 

#define IWMPNetwork_get_lostPackets(This,plLostPackets)	\
    ( (This)->lpVtbl -> get_lostPackets(This,plLostPackets) ) 

#define IWMPNetwork_get_receptionQuality(This,plReceptionQuality)	\
    ( (This)->lpVtbl -> get_receptionQuality(This,plReceptionQuality) ) 

#define IWMPNetwork_get_bufferingCount(This,plBufferingCount)	\
    ( (This)->lpVtbl -> get_bufferingCount(This,plBufferingCount) ) 

#define IWMPNetwork_get_bufferingProgress(This,plBufferingProgress)	\
    ( (This)->lpVtbl -> get_bufferingProgress(This,plBufferingProgress) ) 

#define IWMPNetwork_get_bufferingTime(This,plBufferingTime)	\
    ( (This)->lpVtbl -> get_bufferingTime(This,plBufferingTime) ) 

#define IWMPNetwork_put_bufferingTime(This,lBufferingTime)	\
    ( (This)->lpVtbl -> put_bufferingTime(This,lBufferingTime) ) 

#define IWMPNetwork_get_frameRate(This,plFrameRate)	\
    ( (This)->lpVtbl -> get_frameRate(This,plFrameRate) ) 

#define IWMPNetwork_get_maxBitRate(This,plBitRate)	\
    ( (This)->lpVtbl -> get_maxBitRate(This,plBitRate) ) 

#define IWMPNetwork_get_bitRate(This,plBitRate)	\
    ( (This)->lpVtbl -> get_bitRate(This,plBitRate) ) 

#define IWMPNetwork_getProxySettings(This,bstrProtocol,plProxySetting)	\
    ( (This)->lpVtbl -> getProxySettings(This,bstrProtocol,plProxySetting) ) 

#define IWMPNetwork_setProxySettings(This,bstrProtocol,lProxySetting)	\
    ( (This)->lpVtbl -> setProxySettings(This,bstrProtocol,lProxySetting) ) 

#define IWMPNetwork_getProxyName(This,bstrProtocol,pbstrProxyName)	\
    ( (This)->lpVtbl -> getProxyName(This,bstrProtocol,pbstrProxyName) ) 

#define IWMPNetwork_setProxyName(This,bstrProtocol,bstrProxyName)	\
    ( (This)->lpVtbl -> setProxyName(This,bstrProtocol,bstrProxyName) ) 

#define IWMPNetwork_getProxyPort(This,bstrProtocol,lProxyPort)	\
    ( (This)->lpVtbl -> getProxyPort(This,bstrProtocol,lProxyPort) ) 

#define IWMPNetwork_setProxyPort(This,bstrProtocol,lProxyPort)	\
    ( (This)->lpVtbl -> setProxyPort(This,bstrProtocol,lProxyPort) ) 

#define IWMPNetwork_getProxyExceptionList(This,bstrProtocol,pbstrExceptionList)	\
    ( (This)->lpVtbl -> getProxyExceptionList(This,bstrProtocol,pbstrExceptionList) ) 

#define IWMPNetwork_setProxyExceptionList(This,bstrProtocol,pbstrExceptionList)	\
    ( (This)->lpVtbl -> setProxyExceptionList(This,bstrProtocol,pbstrExceptionList) ) 

#define IWMPNetwork_getProxyBypassForLocal(This,bstrProtocol,pfBypassForLocal)	\
    ( (This)->lpVtbl -> getProxyBypassForLocal(This,bstrProtocol,pfBypassForLocal) ) 

#define IWMPNetwork_setProxyBypassForLocal(This,bstrProtocol,fBypassForLocal)	\
    ( (This)->lpVtbl -> setProxyBypassForLocal(This,bstrProtocol,fBypassForLocal) ) 

#define IWMPNetwork_get_maxBandwidth(This,lMaxBandwidth)	\
    ( (This)->lpVtbl -> get_maxBandwidth(This,lMaxBandwidth) ) 

#define IWMPNetwork_put_maxBandwidth(This,lMaxBandwidth)	\
    ( (This)->lpVtbl -> put_maxBandwidth(This,lMaxBandwidth) ) 

#define IWMPNetwork_get_downloadProgress(This,plDownloadProgress)	\
    ( (This)->lpVtbl -> get_downloadProgress(This,plDownloadProgress) ) 

#define IWMPNetwork_get_encodedFrameRate(This,plFrameRate)	\
    ( (This)->lpVtbl -> get_encodedFrameRate(This,plFrameRate) ) 

#define IWMPNetwork_get_framesSkipped(This,plFrames)	\
    ( (This)->lpVtbl -> get_framesSkipped(This,plFrames) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMPNetwork_INTERFACE_DEFINED__ */


#ifndef __IWMPMedia_INTERFACE_DEFINED__
#define __IWMPMedia_INTERFACE_DEFINED__

/* interface IWMPMedia */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMPMedia;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("94D55E95-3FAC-11d3-B155-00C04F79FAA6")
    IWMPMedia : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_isIdentical( 
            /* [in] */ IWMPMedia *pIWMPMedia,
            /* [retval][out] */ VARIANT_BOOL *pvbool) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_sourceURL( 
            /* [retval][out] */ BSTR *pbstrSourceURL) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_name( 
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_name( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_imageSourceWidth( 
            /* [retval][out] */ long *pWidth) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_imageSourceHeight( 
            /* [retval][out] */ long *pHeight) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_markerCount( 
            /* [retval][out] */ long *pMarkerCount) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getMarkerTime( 
            /* [in] */ long MarkerNum,
            /* [retval][out] */ double *pMarkerTime) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getMarkerName( 
            /* [in] */ long MarkerNum,
            /* [retval][out] */ BSTR *pbstrMarkerName) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_duration( 
            /* [retval][out] */ double *pDuration) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_durationString( 
            /* [retval][out] */ BSTR *pbstrDuration) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_attributeCount( 
            /* [retval][out] */ long *plCount) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getAttributeName( 
            /* [in] */ long lIndex,
            /* [retval][out] */ BSTR *pbstrItemName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getItemInfo( 
            /* [in] */ BSTR bstrItemName,
            /* [retval][out] */ BSTR *pbstrVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setItemInfo( 
            /* [in] */ BSTR bstrItemName,
            /* [in] */ BSTR bstrVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getItemInfoByAtom( 
            /* [in] */ long lAtom,
            /* [retval][out] */ BSTR *pbstrVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE isMemberOf( 
            /* [in] */ IWMPPlaylist *pPlaylist,
            /* [retval][out] */ VARIANT_BOOL *pvarfIsMemberOf) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE isReadOnlyItem( 
            /* [in] */ BSTR bstrItemName,
            /* [retval][out] */ VARIANT_BOOL *pvarfIsReadOnly) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMPMediaVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMPMedia * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMPMedia * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMPMedia * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMPMedia * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMPMedia * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMPMedia * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMPMedia * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_isIdentical )( 
            IWMPMedia * This,
            /* [in] */ IWMPMedia *pIWMPMedia,
            /* [retval][out] */ VARIANT_BOOL *pvbool);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_sourceURL )( 
            IWMPMedia * This,
            /* [retval][out] */ BSTR *pbstrSourceURL);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_name )( 
            IWMPMedia * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_name )( 
            IWMPMedia * This,
            /* [in] */ BSTR bstrName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_imageSourceWidth )( 
            IWMPMedia * This,
            /* [retval][out] */ long *pWidth);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_imageSourceHeight )( 
            IWMPMedia * This,
            /* [retval][out] */ long *pHeight);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_markerCount )( 
            IWMPMedia * This,
            /* [retval][out] */ long *pMarkerCount);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getMarkerTime )( 
            IWMPMedia * This,
            /* [in] */ long MarkerNum,
            /* [retval][out] */ double *pMarkerTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getMarkerName )( 
            IWMPMedia * This,
            /* [in] */ long MarkerNum,
            /* [retval][out] */ BSTR *pbstrMarkerName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_duration )( 
            IWMPMedia * This,
            /* [retval][out] */ double *pDuration);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_durationString )( 
            IWMPMedia * This,
            /* [retval][out] */ BSTR *pbstrDuration);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_attributeCount )( 
            IWMPMedia * This,
            /* [retval][out] */ long *plCount);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getAttributeName )( 
            IWMPMedia * This,
            /* [in] */ long lIndex,
            /* [retval][out] */ BSTR *pbstrItemName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getItemInfo )( 
            IWMPMedia * This,
            /* [in] */ BSTR bstrItemName,
            /* [retval][out] */ BSTR *pbstrVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *setItemInfo )( 
            IWMPMedia * This,
            /* [in] */ BSTR bstrItemName,
            /* [in] */ BSTR bstrVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getItemInfoByAtom )( 
            IWMPMedia * This,
            /* [in] */ long lAtom,
            /* [retval][out] */ BSTR *pbstrVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *isMemberOf )( 
            IWMPMedia * This,
            /* [in] */ IWMPPlaylist *pPlaylist,
            /* [retval][out] */ VARIANT_BOOL *pvarfIsMemberOf);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *isReadOnlyItem )( 
            IWMPMedia * This,
            /* [in] */ BSTR bstrItemName,
            /* [retval][out] */ VARIANT_BOOL *pvarfIsReadOnly);
        
        END_INTERFACE
    } IWMPMediaVtbl;

    interface IWMPMedia
    {
        CONST_VTBL struct IWMPMediaVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMPMedia_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMPMedia_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMPMedia_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMPMedia_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWMPMedia_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWMPMedia_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWMPMedia_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWMPMedia_get_isIdentical(This,pIWMPMedia,pvbool)	\
    ( (This)->lpVtbl -> get_isIdentical(This,pIWMPMedia,pvbool) ) 

#define IWMPMedia_get_sourceURL(This,pbstrSourceURL)	\
    ( (This)->lpVtbl -> get_sourceURL(This,pbstrSourceURL) ) 

#define IWMPMedia_get_name(This,pbstrName)	\
    ( (This)->lpVtbl -> get_name(This,pbstrName) ) 

#define IWMPMedia_put_name(This,bstrName)	\
    ( (This)->lpVtbl -> put_name(This,bstrName) ) 

#define IWMPMedia_get_imageSourceWidth(This,pWidth)	\
    ( (This)->lpVtbl -> get_imageSourceWidth(This,pWidth) ) 

#define IWMPMedia_get_imageSourceHeight(This,pHeight)	\
    ( (This)->lpVtbl -> get_imageSourceHeight(This,pHeight) ) 

#define IWMPMedia_get_markerCount(This,pMarkerCount)	\
    ( (This)->lpVtbl -> get_markerCount(This,pMarkerCount) ) 

#define IWMPMedia_getMarkerTime(This,MarkerNum,pMarkerTime)	\
    ( (This)->lpVtbl -> getMarkerTime(This,MarkerNum,pMarkerTime) ) 

#define IWMPMedia_getMarkerName(This,MarkerNum,pbstrMarkerName)	\
    ( (This)->lpVtbl -> getMarkerName(This,MarkerNum,pbstrMarkerName) ) 

#define IWMPMedia_get_duration(This,pDuration)	\
    ( (This)->lpVtbl -> get_duration(This,pDuration) ) 

#define IWMPMedia_get_durationString(This,pbstrDuration)	\
    ( (This)->lpVtbl -> get_durationString(This,pbstrDuration) ) 

#define IWMPMedia_get_attributeCount(This,plCount)	\
    ( (This)->lpVtbl -> get_attributeCount(This,plCount) ) 

#define IWMPMedia_getAttributeName(This,lIndex,pbstrItemName)	\
    ( (This)->lpVtbl -> getAttributeName(This,lIndex,pbstrItemName) ) 

#define IWMPMedia_getItemInfo(This,bstrItemName,pbstrVal)	\
    ( (This)->lpVtbl -> getItemInfo(This,bstrItemName,pbstrVal) ) 

#define IWMPMedia_setItemInfo(This,bstrItemName,bstrVal)	\
    ( (This)->lpVtbl -> setItemInfo(This,bstrItemName,bstrVal) ) 

#define IWMPMedia_getItemInfoByAtom(This,lAtom,pbstrVal)	\
    ( (This)->lpVtbl -> getItemInfoByAtom(This,lAtom,pbstrVal) ) 

#define IWMPMedia_isMemberOf(This,pPlaylist,pvarfIsMemberOf)	\
    ( (This)->lpVtbl -> isMemberOf(This,pPlaylist,pvarfIsMemberOf) ) 

#define IWMPMedia_isReadOnlyItem(This,bstrItemName,pvarfIsReadOnly)	\
    ( (This)->lpVtbl -> isReadOnlyItem(This,bstrItemName,pvarfIsReadOnly) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMPMedia_INTERFACE_DEFINED__ */


#ifndef __IWMPMedia2_INTERFACE_DEFINED__
#define __IWMPMedia2_INTERFACE_DEFINED__

/* interface IWMPMedia2 */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMPMedia2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AB7C88BB-143E-4ea4-ACC3-E4350B2106C3")
    IWMPMedia2 : public IWMPMedia
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_error( 
            /* [out] */ IWMPErrorItem **pIWMPErrorItem) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMPMedia2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMPMedia2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMPMedia2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMPMedia2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMPMedia2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMPMedia2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMPMedia2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMPMedia2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_isIdentical )( 
            IWMPMedia2 * This,
            /* [in] */ IWMPMedia *pIWMPMedia,
            /* [retval][out] */ VARIANT_BOOL *pvbool);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_sourceURL )( 
            IWMPMedia2 * This,
            /* [retval][out] */ BSTR *pbstrSourceURL);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_name )( 
            IWMPMedia2 * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_name )( 
            IWMPMedia2 * This,
            /* [in] */ BSTR bstrName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_imageSourceWidth )( 
            IWMPMedia2 * This,
            /* [retval][out] */ long *pWidth);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_imageSourceHeight )( 
            IWMPMedia2 * This,
            /* [retval][out] */ long *pHeight);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_markerCount )( 
            IWMPMedia2 * This,
            /* [retval][out] */ long *pMarkerCount);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getMarkerTime )( 
            IWMPMedia2 * This,
            /* [in] */ long MarkerNum,
            /* [retval][out] */ double *pMarkerTime);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getMarkerName )( 
            IWMPMedia2 * This,
            /* [in] */ long MarkerNum,
            /* [retval][out] */ BSTR *pbstrMarkerName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_duration )( 
            IWMPMedia2 * This,
            /* [retval][out] */ double *pDuration);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_durationString )( 
            IWMPMedia2 * This,
            /* [retval][out] */ BSTR *pbstrDuration);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_attributeCount )( 
            IWMPMedia2 * This,
            /* [retval][out] */ long *plCount);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getAttributeName )( 
            IWMPMedia2 * This,
            /* [in] */ long lIndex,
            /* [retval][out] */ BSTR *pbstrItemName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getItemInfo )( 
            IWMPMedia2 * This,
            /* [in] */ BSTR bstrItemName,
            /* [retval][out] */ BSTR *pbstrVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *setItemInfo )( 
            IWMPMedia2 * This,
            /* [in] */ BSTR bstrItemName,
            /* [in] */ BSTR bstrVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getItemInfoByAtom )( 
            IWMPMedia2 * This,
            /* [in] */ long lAtom,
            /* [retval][out] */ BSTR *pbstrVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *isMemberOf )( 
            IWMPMedia2 * This,
            /* [in] */ IWMPPlaylist *pPlaylist,
            /* [retval][out] */ VARIANT_BOOL *pvarfIsMemberOf);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *isReadOnlyItem )( 
            IWMPMedia2 * This,
            /* [in] */ BSTR bstrItemName,
            /* [retval][out] */ VARIANT_BOOL *pvarfIsReadOnly);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_error )( 
            IWMPMedia2 * This,
            /* [out] */ IWMPErrorItem **pIWMPErrorItem);
        
        END_INTERFACE
    } IWMPMedia2Vtbl;

    interface IWMPMedia2
    {
        CONST_VTBL struct IWMPMedia2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMPMedia2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMPMedia2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMPMedia2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMPMedia2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWMPMedia2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWMPMedia2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWMPMedia2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWMPMedia2_get_isIdentical(This,pIWMPMedia,pvbool)	\
    ( (This)->lpVtbl -> get_isIdentical(This,pIWMPMedia,pvbool) ) 

#define IWMPMedia2_get_sourceURL(This,pbstrSourceURL)	\
    ( (This)->lpVtbl -> get_sourceURL(This,pbstrSourceURL) ) 

#define IWMPMedia2_get_name(This,pbstrName)	\
    ( (This)->lpVtbl -> get_name(This,pbstrName) ) 

#define IWMPMedia2_put_name(This,bstrName)	\
    ( (This)->lpVtbl -> put_name(This,bstrName) ) 

#define IWMPMedia2_get_imageSourceWidth(This,pWidth)	\
    ( (This)->lpVtbl -> get_imageSourceWidth(This,pWidth) ) 

#define IWMPMedia2_get_imageSourceHeight(This,pHeight)	\
    ( (This)->lpVtbl -> get_imageSourceHeight(This,pHeight) ) 

#define IWMPMedia2_get_markerCount(This,pMarkerCount)	\
    ( (This)->lpVtbl -> get_markerCount(This,pMarkerCount) ) 

#define IWMPMedia2_getMarkerTime(This,MarkerNum,pMarkerTime)	\
    ( (This)->lpVtbl -> getMarkerTime(This,MarkerNum,pMarkerTime) ) 

#define IWMPMedia2_getMarkerName(This,MarkerNum,pbstrMarkerName)	\
    ( (This)->lpVtbl -> getMarkerName(This,MarkerNum,pbstrMarkerName) ) 

#define IWMPMedia2_get_duration(This,pDuration)	\
    ( (This)->lpVtbl -> get_duration(This,pDuration) ) 

#define IWMPMedia2_get_durationString(This,pbstrDuration)	\
    ( (This)->lpVtbl -> get_durationString(This,pbstrDuration) ) 

#define IWMPMedia2_get_attributeCount(This,plCount)	\
    ( (This)->lpVtbl -> get_attributeCount(This,plCount) ) 

#define IWMPMedia2_getAttributeName(This,lIndex,pbstrItemName)	\
    ( (This)->lpVtbl -> getAttributeName(This,lIndex,pbstrItemName) ) 

#define IWMPMedia2_getItemInfo(This,bstrItemName,pbstrVal)	\
    ( (This)->lpVtbl -> getItemInfo(This,bstrItemName,pbstrVal) ) 

#define IWMPMedia2_setItemInfo(This,bstrItemName,bstrVal)	\
    ( (This)->lpVtbl -> setItemInfo(This,bstrItemName,bstrVal) ) 

#define IWMPMedia2_getItemInfoByAtom(This,lAtom,pbstrVal)	\
    ( (This)->lpVtbl -> getItemInfoByAtom(This,lAtom,pbstrVal) ) 

#define IWMPMedia2_isMemberOf(This,pPlaylist,pvarfIsMemberOf)	\
    ( (This)->lpVtbl -> isMemberOf(This,pPlaylist,pvarfIsMemberOf) ) 

#define IWMPMedia2_isReadOnlyItem(This,bstrItemName,pvarfIsReadOnly)	\
    ( (This)->lpVtbl -> isReadOnlyItem(This,bstrItemName,pvarfIsReadOnly) ) 


#define IWMPMedia2_get_error(This,pIWMPErrorItem)	\
    ( (This)->lpVtbl -> get_error(This,pIWMPErrorItem) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMPMedia2_INTERFACE_DEFINED__ */


#ifndef __IWMPPlaylist_INTERFACE_DEFINED__
#define __IWMPPlaylist_INTERFACE_DEFINED__

/* interface IWMPPlaylist */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMPPlaylist;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D5F0F4F1-130C-11d3-B14E-00C04F79FAA6")
    IWMPPlaylist : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_count( 
            /* [retval][out] */ long *plCount) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_name( 
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_name( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_attributeCount( 
            /* [retval][out] */ long *plCount) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_attributeName( 
            /* [in] */ long lIndex,
            /* [retval][out] */ BSTR *pbstrAttributeName) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_item( 
            long lIndex,
            /* [retval][out] */ IWMPMedia **ppIWMPMedia) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getItemInfo( 
            BSTR bstrName,
            /* [retval][out] */ BSTR *pbstrVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setItemInfo( 
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrValue) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_isIdentical( 
            /* [in] */ IWMPPlaylist *pIWMPPlaylist,
            /* [retval][out] */ VARIANT_BOOL *pvbool) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE insertItem( 
            /* [in] */ long lIndex,
            /* [in] */ IWMPMedia *pIWMPMedia) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE appendItem( 
            /* [in] */ IWMPMedia *pIWMPMedia) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE removeItem( 
            /* [in] */ IWMPMedia *pIWMPMedia) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE moveItem( 
            long lIndexOld,
            long lIndexNew) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMPPlaylistVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMPPlaylist * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMPPlaylist * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMPPlaylist * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMPPlaylist * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMPPlaylist * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMPPlaylist * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMPPlaylist * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_count )( 
            IWMPPlaylist * This,
            /* [retval][out] */ long *plCount);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_name )( 
            IWMPPlaylist * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_name )( 
            IWMPPlaylist * This,
            /* [in] */ BSTR bstrName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_attributeCount )( 
            IWMPPlaylist * This,
            /* [retval][out] */ long *plCount);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_attributeName )( 
            IWMPPlaylist * This,
            /* [in] */ long lIndex,
            /* [retval][out] */ BSTR *pbstrAttributeName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_item )( 
            IWMPPlaylist * This,
            long lIndex,
            /* [retval][out] */ IWMPMedia **ppIWMPMedia);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getItemInfo )( 
            IWMPPlaylist * This,
            BSTR bstrName,
            /* [retval][out] */ BSTR *pbstrVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *setItemInfo )( 
            IWMPPlaylist * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrValue);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_isIdentical )( 
            IWMPPlaylist * This,
            /* [in] */ IWMPPlaylist *pIWMPPlaylist,
            /* [retval][out] */ VARIANT_BOOL *pvbool);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *clear )( 
            IWMPPlaylist * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *insertItem )( 
            IWMPPlaylist * This,
            /* [in] */ long lIndex,
            /* [in] */ IWMPMedia *pIWMPMedia);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *appendItem )( 
            IWMPPlaylist * This,
            /* [in] */ IWMPMedia *pIWMPMedia);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *removeItem )( 
            IWMPPlaylist * This,
            /* [in] */ IWMPMedia *pIWMPMedia);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *moveItem )( 
            IWMPPlaylist * This,
            long lIndexOld,
            long lIndexNew);
        
        END_INTERFACE
    } IWMPPlaylistVtbl;

    interface IWMPPlaylist
    {
        CONST_VTBL struct IWMPPlaylistVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMPPlaylist_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMPPlaylist_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMPPlaylist_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMPPlaylist_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWMPPlaylist_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWMPPlaylist_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWMPPlaylist_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWMPPlaylist_get_count(This,plCount)	\
    ( (This)->lpVtbl -> get_count(This,plCount) ) 

#define IWMPPlaylist_get_name(This,pbstrName)	\
    ( (This)->lpVtbl -> get_name(This,pbstrName) ) 

#define IWMPPlaylist_put_name(This,bstrName)	\
    ( (This)->lpVtbl -> put_name(This,bstrName) ) 

#define IWMPPlaylist_get_attributeCount(This,plCount)	\
    ( (This)->lpVtbl -> get_attributeCount(This,plCount) ) 

#define IWMPPlaylist_get_attributeName(This,lIndex,pbstrAttributeName)	\
    ( (This)->lpVtbl -> get_attributeName(This,lIndex,pbstrAttributeName) ) 

#define IWMPPlaylist_get_item(This,lIndex,ppIWMPMedia)	\
    ( (This)->lpVtbl -> get_item(This,lIndex,ppIWMPMedia) ) 

#define IWMPPlaylist_getItemInfo(This,bstrName,pbstrVal)	\
    ( (This)->lpVtbl -> getItemInfo(This,bstrName,pbstrVal) ) 

#define IWMPPlaylist_setItemInfo(This,bstrName,bstrValue)	\
    ( (This)->lpVtbl -> setItemInfo(This,bstrName,bstrValue) ) 

#define IWMPPlaylist_get_isIdentical(This,pIWMPPlaylist,pvbool)	\
    ( (This)->lpVtbl -> get_isIdentical(This,pIWMPPlaylist,pvbool) ) 

#define IWMPPlaylist_clear(This)	\
    ( (This)->lpVtbl -> clear(This) ) 

#define IWMPPlaylist_insertItem(This,lIndex,pIWMPMedia)	\
    ( (This)->lpVtbl -> insertItem(This,lIndex,pIWMPMedia) ) 

#define IWMPPlaylist_appendItem(This,pIWMPMedia)	\
    ( (This)->lpVtbl -> appendItem(This,pIWMPMedia) ) 

#define IWMPPlaylist_removeItem(This,pIWMPMedia)	\
    ( (This)->lpVtbl -> removeItem(This,pIWMPMedia) ) 

#define IWMPPlaylist_moveItem(This,lIndexOld,lIndexNew)	\
    ( (This)->lpVtbl -> moveItem(This,lIndexOld,lIndexNew) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMPPlaylist_INTERFACE_DEFINED__ */


#ifndef __IWMPErrorItem_INTERFACE_DEFINED__
#define __IWMPErrorItem_INTERFACE_DEFINED__

/* interface IWMPErrorItem */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMPErrorItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3614C646-3B3B-4de7-A81E-930E3F2127B3")
    IWMPErrorItem : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_errorCode( 
            /* [retval][out] */ long *phr) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_errorDescription( 
            /* [retval][out] */ BSTR *pbstrDescription) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_errorContext( 
            /* [retval][out] */ VARIANT *pvarContext) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_remedy( 
            /* [retval][out] */ long *plRemedy) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_customUrl( 
            /* [retval][out] */ BSTR *pbstrCustomUrl) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMPErrorItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMPErrorItem * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMPErrorItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMPErrorItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMPErrorItem * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMPErrorItem * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMPErrorItem * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMPErrorItem * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_errorCode )( 
            IWMPErrorItem * This,
            /* [retval][out] */ long *phr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_errorDescription )( 
            IWMPErrorItem * This,
            /* [retval][out] */ BSTR *pbstrDescription);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_errorContext )( 
            IWMPErrorItem * This,
            /* [retval][out] */ VARIANT *pvarContext);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_remedy )( 
            IWMPErrorItem * This,
            /* [retval][out] */ long *plRemedy);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_customUrl )( 
            IWMPErrorItem * This,
            /* [retval][out] */ BSTR *pbstrCustomUrl);
        
        END_INTERFACE
    } IWMPErrorItemVtbl;

    interface IWMPErrorItem
    {
        CONST_VTBL struct IWMPErrorItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMPErrorItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMPErrorItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMPErrorItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMPErrorItem_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWMPErrorItem_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWMPErrorItem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWMPErrorItem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWMPErrorItem_get_errorCode(This,phr)	\
    ( (This)->lpVtbl -> get_errorCode(This,phr) ) 

#define IWMPErrorItem_get_errorDescription(This,pbstrDescription)	\
    ( (This)->lpVtbl -> get_errorDescription(This,pbstrDescription) ) 

#define IWMPErrorItem_get_errorContext(This,pvarContext)	\
    ( (This)->lpVtbl -> get_errorContext(This,pvarContext) ) 

#define IWMPErrorItem_get_remedy(This,plRemedy)	\
    ( (This)->lpVtbl -> get_remedy(This,plRemedy) ) 

#define IWMPErrorItem_get_customUrl(This,pbstrCustomUrl)	\
    ( (This)->lpVtbl -> get_customUrl(This,pbstrCustomUrl) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMPErrorItem_INTERFACE_DEFINED__ */


#ifndef __IWMPErrorItem2_INTERFACE_DEFINED__
#define __IWMPErrorItem2_INTERFACE_DEFINED__

/* interface IWMPErrorItem2 */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMPErrorItem2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F75CCEC0-C67C-475c-931E-8719870BEE7D")
    IWMPErrorItem2 : public IWMPErrorItem
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_condition( 
            /* [retval][out] */ long *plCondition) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMPErrorItem2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMPErrorItem2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMPErrorItem2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMPErrorItem2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMPErrorItem2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMPErrorItem2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMPErrorItem2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMPErrorItem2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_errorCode )( 
            IWMPErrorItem2 * This,
            /* [retval][out] */ long *phr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_errorDescription )( 
            IWMPErrorItem2 * This,
            /* [retval][out] */ BSTR *pbstrDescription);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_errorContext )( 
            IWMPErrorItem2 * This,
            /* [retval][out] */ VARIANT *pvarContext);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_remedy )( 
            IWMPErrorItem2 * This,
            /* [retval][out] */ long *plRemedy);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_customUrl )( 
            IWMPErrorItem2 * This,
            /* [retval][out] */ BSTR *pbstrCustomUrl);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_condition )( 
            IWMPErrorItem2 * This,
            /* [retval][out] */ long *plCondition);
        
        END_INTERFACE
    } IWMPErrorItem2Vtbl;

    interface IWMPErrorItem2
    {
        CONST_VTBL struct IWMPErrorItem2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMPErrorItem2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMPErrorItem2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMPErrorItem2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMPErrorItem2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWMPErrorItem2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWMPErrorItem2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWMPErrorItem2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWMPErrorItem2_get_errorCode(This,phr)	\
    ( (This)->lpVtbl -> get_errorCode(This,phr) ) 

#define IWMPErrorItem2_get_errorDescription(This,pbstrDescription)	\
    ( (This)->lpVtbl -> get_errorDescription(This,pbstrDescription) ) 

#define IWMPErrorItem2_get_errorContext(This,pvarContext)	\
    ( (This)->lpVtbl -> get_errorContext(This,pvarContext) ) 

#define IWMPErrorItem2_get_remedy(This,plRemedy)	\
    ( (This)->lpVtbl -> get_remedy(This,plRemedy) ) 

#define IWMPErrorItem2_get_customUrl(This,pbstrCustomUrl)	\
    ( (This)->lpVtbl -> get_customUrl(This,pbstrCustomUrl) ) 


#define IWMPErrorItem2_get_condition(This,plCondition)	\
    ( (This)->lpVtbl -> get_condition(This,plCondition) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMPErrorItem2_INTERFACE_DEFINED__ */


#ifndef __IWMPError_INTERFACE_DEFINED__
#define __IWMPError_INTERFACE_DEFINED__

/* interface IWMPError */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMPError;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A12DCF7D-14AB-4c1b-A8CD-63909F06025B")
    IWMPError : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE clearErrorQueue( void) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_errorCount( 
            /* [retval][out] */ long *pdwNumErrors) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_item( 
            /* [in] */ long dwIndex,
            /* [retval][out] */ IWMPErrorItem **ppErrorItem) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE webHelp( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMPErrorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMPError * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMPError * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMPError * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMPError * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMPError * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMPError * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMPError * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *clearErrorQueue )( 
            IWMPError * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_errorCount )( 
            IWMPError * This,
            /* [retval][out] */ long *pdwNumErrors);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_item )( 
            IWMPError * This,
            /* [in] */ long dwIndex,
            /* [retval][out] */ IWMPErrorItem **ppErrorItem);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *webHelp )( 
            IWMPError * This);
        
        END_INTERFACE
    } IWMPErrorVtbl;

    interface IWMPError
    {
        CONST_VTBL struct IWMPErrorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMPError_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMPError_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMPError_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMPError_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWMPError_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWMPError_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWMPError_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWMPError_clearErrorQueue(This)	\
    ( (This)->lpVtbl -> clearErrorQueue(This) ) 

#define IWMPError_get_errorCount(This,pdwNumErrors)	\
    ( (This)->lpVtbl -> get_errorCount(This,pdwNumErrors) ) 

#define IWMPError_get_item(This,dwIndex,ppErrorItem)	\
    ( (This)->lpVtbl -> get_item(This,dwIndex,ppErrorItem) ) 

#define IWMPError_webHelp(This)	\
    ( (This)->lpVtbl -> webHelp(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMPError_INTERFACE_DEFINED__ */



#ifndef __DummyLib_LIBRARY_DEFINED__
#define __DummyLib_LIBRARY_DEFINED__

/* library DummyLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_DummyLib;

EXTERN_C const CLSID CLSID_DummyCoClass;

#ifdef __cplusplus

class DECLSPEC_UUID("09428D37-E0B9-11d2-B147-00C04F79FAA6")
DummyCoClass;
#endif
#endif /* __DummyLib_LIBRARY_DEFINED__ */

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


