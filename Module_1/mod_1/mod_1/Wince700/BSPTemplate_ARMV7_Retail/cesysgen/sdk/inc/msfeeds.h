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
/* at Mon Jan 22 12:14:38 2007
 */
/* Compiler settings for ..\msfeeds.idl:
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

#ifndef __msfeeds_h__
#define __msfeeds_h__

/* Forward Declarations */ 

#ifndef __IXFeedsManager_FWD_DEFINED__
#define __IXFeedsManager_FWD_DEFINED__
typedef interface IXFeedsManager IXFeedsManager;
#endif 	/* __IXFeedsManager_FWD_DEFINED__ */


#ifndef __IXFeedsEnum_FWD_DEFINED__
#define __IXFeedsEnum_FWD_DEFINED__
typedef interface IXFeedsEnum IXFeedsEnum;
#endif 	/* __IXFeedsEnum_FWD_DEFINED__ */


#ifndef __IXFeedFolder_FWD_DEFINED__
#define __IXFeedFolder_FWD_DEFINED__
typedef interface IXFeedFolder IXFeedFolder;
#endif 	/* __IXFeedFolder_FWD_DEFINED__ */


#ifndef __IXFeedFolderEvents_FWD_DEFINED__
#define __IXFeedFolderEvents_FWD_DEFINED__
typedef interface IXFeedFolderEvents IXFeedFolderEvents;
#endif 	/* __IXFeedFolderEvents_FWD_DEFINED__ */


#ifndef __IXFeed_FWD_DEFINED__
#define __IXFeed_FWD_DEFINED__
typedef interface IXFeed IXFeed;
#endif 	/* __IXFeed_FWD_DEFINED__ */


#ifndef __IXFeedEvents_FWD_DEFINED__
#define __IXFeedEvents_FWD_DEFINED__
typedef interface IXFeedEvents IXFeedEvents;
#endif 	/* __IXFeedEvents_FWD_DEFINED__ */


#ifndef __IXFeedItem_FWD_DEFINED__
#define __IXFeedItem_FWD_DEFINED__
typedef interface IXFeedItem IXFeedItem;
#endif 	/* __IXFeedItem_FWD_DEFINED__ */


#ifndef __IXFeedEnclosure_FWD_DEFINED__
#define __IXFeedEnclosure_FWD_DEFINED__
typedef interface IXFeedEnclosure IXFeedEnclosure;
#endif 	/* __IXFeedEnclosure_FWD_DEFINED__ */


#ifndef __IFeedsManager_FWD_DEFINED__
#define __IFeedsManager_FWD_DEFINED__
typedef interface IFeedsManager IFeedsManager;
#endif 	/* __IFeedsManager_FWD_DEFINED__ */


#ifndef __IFeedsEnum_FWD_DEFINED__
#define __IFeedsEnum_FWD_DEFINED__
typedef interface IFeedsEnum IFeedsEnum;
#endif 	/* __IFeedsEnum_FWD_DEFINED__ */


#ifndef __IFeedFolder_FWD_DEFINED__
#define __IFeedFolder_FWD_DEFINED__
typedef interface IFeedFolder IFeedFolder;
#endif 	/* __IFeedFolder_FWD_DEFINED__ */


#ifndef __IFeedFolderEvents_FWD_DEFINED__
#define __IFeedFolderEvents_FWD_DEFINED__
typedef interface IFeedFolderEvents IFeedFolderEvents;
#endif 	/* __IFeedFolderEvents_FWD_DEFINED__ */


#ifndef __IFeed_FWD_DEFINED__
#define __IFeed_FWD_DEFINED__
typedef interface IFeed IFeed;
#endif 	/* __IFeed_FWD_DEFINED__ */


#ifndef __IFeedEvents_FWD_DEFINED__
#define __IFeedEvents_FWD_DEFINED__
typedef interface IFeedEvents IFeedEvents;
#endif 	/* __IFeedEvents_FWD_DEFINED__ */


#ifndef __IFeedItem_FWD_DEFINED__
#define __IFeedItem_FWD_DEFINED__
typedef interface IFeedItem IFeedItem;
#endif 	/* __IFeedItem_FWD_DEFINED__ */


#ifndef __IFeedEnclosure_FWD_DEFINED__
#define __IFeedEnclosure_FWD_DEFINED__
typedef interface IFeedEnclosure IFeedEnclosure;
#endif 	/* __IFeedEnclosure_FWD_DEFINED__ */


#ifndef __FeedsManager_FWD_DEFINED__
#define __FeedsManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class FeedsManager FeedsManager;
#else
typedef struct FeedsManager FeedsManager;
#endif /* __cplusplus */

#endif 	/* __FeedsManager_FWD_DEFINED__ */


#ifndef __FeedFolderWatcher_FWD_DEFINED__
#define __FeedFolderWatcher_FWD_DEFINED__

#ifdef __cplusplus
typedef class FeedFolderWatcher FeedFolderWatcher;
#else
typedef struct FeedFolderWatcher FeedFolderWatcher;
#endif /* __cplusplus */

#endif 	/* __FeedFolderWatcher_FWD_DEFINED__ */


#ifndef __FeedWatcher_FWD_DEFINED__
#define __FeedWatcher_FWD_DEFINED__

#ifdef __cplusplus
typedef class FeedWatcher FeedWatcher;
#else
typedef struct FeedWatcher FeedWatcher;
#endif /* __cplusplus */

#endif 	/* __FeedWatcher_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_msfeeds_0000 */
/* [local] */ 

// {FE6B11C3-C72E-4061-86C6-9D163121F229}
DEFINE_GUID(CLSID_XFeedsManager, 0xfe6b11c3, 0xc72e, 0x4061, 0x86, 0xc6, 0x9d, 0x16, 0x31, 0x21, 0xf2, 0x29);
typedef /* [public][public][public][v1_enum] */ 
enum __MIDL___MIDL_itf_msfeeds_0000_0001
    {	FBSA_DISABLE	= 0,
	FBSA_ENABLE	= 1,
	FBSA_RUNNOW	= 2
    }	FEEDS_BACKGROUNDSYNC_ACTION;

typedef /* [public][public][public][v1_enum] */ 
enum __MIDL___MIDL_itf_msfeeds_0000_0002
    {	FBSS_DISABLED	= 0,
	FBSS_ENABLED	= 1
    }	FEEDS_BACKGROUNDSYNC_STATUS;

typedef /* [public][public][public][public][public][v1_enum] */ 
enum __MIDL___MIDL_itf_msfeeds_0000_0003
    {	FES_ALL	= 0,
	FES_SELF_ONLY	= 1,
	FES_SELF_AND_CHILDREN_ONLY	= 2
    }	FEEDS_EVENTS_SCOPE;

typedef /* [public][public][public][public][public][v1_enum] */ 
enum __MIDL___MIDL_itf_msfeeds_0000_0004
    {	FEM_FOLDEREVENTS	= 0x1,
	FEM_FEEDEVENTS	= 0x2
    }	FEEDS_EVENTS_MASK;


#define FEEDS_XML_COUNT_MAX ((UINT)-1)

typedef /* [public][public][public][v1_enum] */ 
enum __MIDL___MIDL_itf_msfeeds_0000_0005
    {	FXSP_NONE	= 0,
	FXSP_PUBDATE	= 1,
	FXSP_DOWNLOADTIME	= 2
    }	FEEDS_XML_SORT_PROPERTY;

typedef /* [public][public][public][v1_enum] */ 
enum __MIDL___MIDL_itf_msfeeds_0000_0006
    {	FXSO_NONE	= 0,
	FXSO_ASCENDING	= 1,
	FXSO_DESCENDING	= 2
    }	FEEDS_XML_SORT_ORDER;

typedef /* [public][public][public][v1_enum] */ 
enum __MIDL___MIDL_itf_msfeeds_0000_0007
    {	FXFF_ALL	= 0,
	FXFF_UNREAD	= 0x1,
	FXFF_READ	= 0x2
    }	FEEDS_XML_FILTER_FLAGS;

typedef /* [public][public][public][public][public][v1_enum] */ 
enum __MIDL___MIDL_itf_msfeeds_0000_0008
    {	FXIF_NONE	= 0,
	FXIF_CF_EXTENSIONS	= 0x1
    }	FEEDS_XML_INCLUDE_FLAGS;

typedef /* [public][public][public][public][public][v1_enum] */ 
enum __MIDL___MIDL_itf_msfeeds_0000_0009
    {	FDS_NONE	= 0,
	FDS_PENDING	= 1,
	FDS_DOWNLOADING	= 2,
	FDS_DOWNLOADED	= 3,
	FDS_DOWNLOAD_FAILED	= 4
    }	FEEDS_DOWNLOAD_STATUS;

typedef /* [public][public][public][public][public][v1_enum] */ 
enum __MIDL___MIDL_itf_msfeeds_0000_0010
    {	FSS_DEFAULT	= 0,
	FSS_INTERVAL	= 1,
	FSS_MANUAL	= 2
    }	FEEDS_SYNC_SETTING;

typedef /* [public][public][public][public][public][public][public][public][public][v1_enum] */ 
enum __MIDL___MIDL_itf_msfeeds_0000_0011
    {	FDE_NONE	= 0,
	FDE_DOWNLOAD_FAILED	= 1,
	FDE_INVALID_FEED_FORMAT	= 2,
	FDE_NORMALIZATION_FAILED	= 3,
	FDE_PERSISTENCE_FAILED	= 4,
	FDE_DOWNLOAD_BLOCKED	= 5,
	FDE_CANCELED	= 6,
	FDE_UNSUPPORTED_AUTH	= 7,
	FDE_BACKGROUND_DOWNLOAD_DISABLED	= 8,
	FDE_NOT_EXIST	= 9,
	FDE_UNSUPPORTED_MSXML	= 10,
	FDE_UNSUPPORTED_DTD	= 11,
	FDE_DOWNLOAD_SIZE_LIMIT_EXCEEDED	= 12
    }	FEEDS_DOWNLOAD_ERROR;

typedef /* [public][v1_enum] */ 
enum __MIDL___MIDL_itf_msfeeds_0000_0012
    {	FEICF_READ_ITEM_COUNT_CHANGED	= 0x1,
	FEICF_UNREAD_ITEM_COUNT_CHANGED	= 0x2
    }	FEEDS_EVENTS_ITEM_COUNT_FLAGS;

typedef int FEICF;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_msfeeds_0000_0013
    {	FEC_E_ERRORBASE	= 0xc0040200L,
	FEC_E_INVALIDMSXMLPROPERTY	= FEC_E_ERRORBASE,
	FEC_E_DOWNLOADSIZELIMITEXCEEDED	= FEC_E_INVALIDMSXMLPROPERTY + 1
    }	FEEDS_ERROR_CODE;



extern RPC_IF_HANDLE __MIDL_itf_msfeeds_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msfeeds_0000_v0_0_s_ifspec;

#ifndef __IXFeedsManager_INTERFACE_DEFINED__
#define __IXFeedsManager_INTERFACE_DEFINED__

/* interface IXFeedsManager */
/* [object][uuid] */ 


EXTERN_C const IID IID_IXFeedsManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5357e238-fb12-4aca-a930-cab7832b84bf")
    IXFeedsManager : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RootFolder( 
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsSubscribed( 
            /* [in] */ LPCWSTR pszUrl,
            /* [out] */ BOOL __RPC_FAR *pbSubscribed) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ExistsFeed( 
            /* [in] */ LPCWSTR pszPath,
            /* [out] */ BOOL __RPC_FAR *pbFeedExists) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFeed( 
            /* [in] */ LPCWSTR pszPath,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFeedByUrl( 
            /* [in] */ LPCWSTR pszUrl,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ExistsFolder( 
            /* [in] */ LPCWSTR pszPath,
            /* [out] */ BOOL __RPC_FAR *pbFolderExists) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFolder( 
            /* [in] */ LPCWSTR pszPath,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteFeed( 
            /* [in] */ LPCWSTR pszPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteFolder( 
            /* [in] */ LPCWSTR pszPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BackgroundSync( 
            /* [in] */ FEEDS_BACKGROUNDSYNC_ACTION fbsa) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BackgroundSyncStatus( 
            /* [out] */ FEEDS_BACKGROUNDSYNC_STATUS __RPC_FAR *pfbss) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DefaultInterval( 
            /* [out] */ UINT __RPC_FAR *puiInterval) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDefaultInterval( 
            /* [in] */ UINT uiInterval) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AsyncSyncAll( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Normalize( 
            /* [in] */ IStream __RPC_FAR *pStreamIn,
            /* [out] */ IStream __RPC_FAR *__RPC_FAR *ppStreamOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ItemCountLimit( 
            /* [out] */ UINT __RPC_FAR *puiItemCountLimit) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IXFeedsManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IXFeedsManager __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IXFeedsManager __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IXFeedsManager __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RootFolder )( 
            IXFeedsManager __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsSubscribed )( 
            IXFeedsManager __RPC_FAR * This,
            /* [in] */ LPCWSTR pszUrl,
            /* [out] */ BOOL __RPC_FAR *pbSubscribed);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ExistsFeed )( 
            IXFeedsManager __RPC_FAR * This,
            /* [in] */ LPCWSTR pszPath,
            /* [out] */ BOOL __RPC_FAR *pbFeedExists);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetFeed )( 
            IXFeedsManager __RPC_FAR * This,
            /* [in] */ LPCWSTR pszPath,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetFeedByUrl )( 
            IXFeedsManager __RPC_FAR * This,
            /* [in] */ LPCWSTR pszUrl,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ExistsFolder )( 
            IXFeedsManager __RPC_FAR * This,
            /* [in] */ LPCWSTR pszPath,
            /* [out] */ BOOL __RPC_FAR *pbFolderExists);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetFolder )( 
            IXFeedsManager __RPC_FAR * This,
            /* [in] */ LPCWSTR pszPath,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DeleteFeed )( 
            IXFeedsManager __RPC_FAR * This,
            /* [in] */ LPCWSTR pszPath);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DeleteFolder )( 
            IXFeedsManager __RPC_FAR * This,
            /* [in] */ LPCWSTR pszPath);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *BackgroundSync )( 
            IXFeedsManager __RPC_FAR * This,
            /* [in] */ FEEDS_BACKGROUNDSYNC_ACTION fbsa);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *BackgroundSyncStatus )( 
            IXFeedsManager __RPC_FAR * This,
            /* [out] */ FEEDS_BACKGROUNDSYNC_STATUS __RPC_FAR *pfbss);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DefaultInterval )( 
            IXFeedsManager __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *puiInterval);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetDefaultInterval )( 
            IXFeedsManager __RPC_FAR * This,
            /* [in] */ UINT uiInterval);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AsyncSyncAll )( 
            IXFeedsManager __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Normalize )( 
            IXFeedsManager __RPC_FAR * This,
            /* [in] */ IStream __RPC_FAR *pStreamIn,
            /* [out] */ IStream __RPC_FAR *__RPC_FAR *ppStreamOut);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ItemCountLimit )( 
            IXFeedsManager __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *puiItemCountLimit);
        
        END_INTERFACE
    } IXFeedsManagerVtbl;

    interface IXFeedsManager
    {
        CONST_VTBL struct IXFeedsManagerVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXFeedsManager_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IXFeedsManager_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IXFeedsManager_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IXFeedsManager_RootFolder(This,riid,ppv)	\
    (This)->lpVtbl -> RootFolder(This,riid,ppv)

#define IXFeedsManager_IsSubscribed(This,pszUrl,pbSubscribed)	\
    (This)->lpVtbl -> IsSubscribed(This,pszUrl,pbSubscribed)

#define IXFeedsManager_ExistsFeed(This,pszPath,pbFeedExists)	\
    (This)->lpVtbl -> ExistsFeed(This,pszPath,pbFeedExists)

#define IXFeedsManager_GetFeed(This,pszPath,riid,ppv)	\
    (This)->lpVtbl -> GetFeed(This,pszPath,riid,ppv)

#define IXFeedsManager_GetFeedByUrl(This,pszUrl,riid,ppv)	\
    (This)->lpVtbl -> GetFeedByUrl(This,pszUrl,riid,ppv)

#define IXFeedsManager_ExistsFolder(This,pszPath,pbFolderExists)	\
    (This)->lpVtbl -> ExistsFolder(This,pszPath,pbFolderExists)

#define IXFeedsManager_GetFolder(This,pszPath,riid,ppv)	\
    (This)->lpVtbl -> GetFolder(This,pszPath,riid,ppv)

#define IXFeedsManager_DeleteFeed(This,pszPath)	\
    (This)->lpVtbl -> DeleteFeed(This,pszPath)

#define IXFeedsManager_DeleteFolder(This,pszPath)	\
    (This)->lpVtbl -> DeleteFolder(This,pszPath)

#define IXFeedsManager_BackgroundSync(This,fbsa)	\
    (This)->lpVtbl -> BackgroundSync(This,fbsa)

#define IXFeedsManager_BackgroundSyncStatus(This,pfbss)	\
    (This)->lpVtbl -> BackgroundSyncStatus(This,pfbss)

#define IXFeedsManager_DefaultInterval(This,puiInterval)	\
    (This)->lpVtbl -> DefaultInterval(This,puiInterval)

#define IXFeedsManager_SetDefaultInterval(This,uiInterval)	\
    (This)->lpVtbl -> SetDefaultInterval(This,uiInterval)

#define IXFeedsManager_AsyncSyncAll(This)	\
    (This)->lpVtbl -> AsyncSyncAll(This)

#define IXFeedsManager_Normalize(This,pStreamIn,ppStreamOut)	\
    (This)->lpVtbl -> Normalize(This,pStreamIn,ppStreamOut)

#define IXFeedsManager_ItemCountLimit(This,puiItemCountLimit)	\
    (This)->lpVtbl -> ItemCountLimit(This,puiItemCountLimit)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IXFeedsManager_RootFolder_Proxy( 
    IXFeedsManager __RPC_FAR * This,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IXFeedsManager_RootFolder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedsManager_IsSubscribed_Proxy( 
    IXFeedsManager __RPC_FAR * This,
    /* [in] */ LPCWSTR pszUrl,
    /* [out] */ BOOL __RPC_FAR *pbSubscribed);


void __RPC_STUB IXFeedsManager_IsSubscribed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedsManager_ExistsFeed_Proxy( 
    IXFeedsManager __RPC_FAR * This,
    /* [in] */ LPCWSTR pszPath,
    /* [out] */ BOOL __RPC_FAR *pbFeedExists);


void __RPC_STUB IXFeedsManager_ExistsFeed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedsManager_GetFeed_Proxy( 
    IXFeedsManager __RPC_FAR * This,
    /* [in] */ LPCWSTR pszPath,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IXFeedsManager_GetFeed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedsManager_GetFeedByUrl_Proxy( 
    IXFeedsManager __RPC_FAR * This,
    /* [in] */ LPCWSTR pszUrl,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IXFeedsManager_GetFeedByUrl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedsManager_ExistsFolder_Proxy( 
    IXFeedsManager __RPC_FAR * This,
    /* [in] */ LPCWSTR pszPath,
    /* [out] */ BOOL __RPC_FAR *pbFolderExists);


void __RPC_STUB IXFeedsManager_ExistsFolder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedsManager_GetFolder_Proxy( 
    IXFeedsManager __RPC_FAR * This,
    /* [in] */ LPCWSTR pszPath,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IXFeedsManager_GetFolder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedsManager_DeleteFeed_Proxy( 
    IXFeedsManager __RPC_FAR * This,
    /* [in] */ LPCWSTR pszPath);


void __RPC_STUB IXFeedsManager_DeleteFeed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedsManager_DeleteFolder_Proxy( 
    IXFeedsManager __RPC_FAR * This,
    /* [in] */ LPCWSTR pszPath);


void __RPC_STUB IXFeedsManager_DeleteFolder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedsManager_BackgroundSync_Proxy( 
    IXFeedsManager __RPC_FAR * This,
    /* [in] */ FEEDS_BACKGROUNDSYNC_ACTION fbsa);


void __RPC_STUB IXFeedsManager_BackgroundSync_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedsManager_BackgroundSyncStatus_Proxy( 
    IXFeedsManager __RPC_FAR * This,
    /* [out] */ FEEDS_BACKGROUNDSYNC_STATUS __RPC_FAR *pfbss);


void __RPC_STUB IXFeedsManager_BackgroundSyncStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedsManager_DefaultInterval_Proxy( 
    IXFeedsManager __RPC_FAR * This,
    /* [out] */ UINT __RPC_FAR *puiInterval);


void __RPC_STUB IXFeedsManager_DefaultInterval_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedsManager_SetDefaultInterval_Proxy( 
    IXFeedsManager __RPC_FAR * This,
    /* [in] */ UINT uiInterval);


void __RPC_STUB IXFeedsManager_SetDefaultInterval_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedsManager_AsyncSyncAll_Proxy( 
    IXFeedsManager __RPC_FAR * This);


void __RPC_STUB IXFeedsManager_AsyncSyncAll_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedsManager_Normalize_Proxy( 
    IXFeedsManager __RPC_FAR * This,
    /* [in] */ IStream __RPC_FAR *pStreamIn,
    /* [out] */ IStream __RPC_FAR *__RPC_FAR *ppStreamOut);


void __RPC_STUB IXFeedsManager_Normalize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedsManager_ItemCountLimit_Proxy( 
    IXFeedsManager __RPC_FAR * This,
    /* [out] */ UINT __RPC_FAR *puiItemCountLimit);


void __RPC_STUB IXFeedsManager_ItemCountLimit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IXFeedsManager_INTERFACE_DEFINED__ */


#ifndef __IXFeedsEnum_INTERFACE_DEFINED__
#define __IXFeedsEnum_INTERFACE_DEFINED__

/* interface IXFeedsEnum */
/* [object][uuid] */ 


EXTERN_C const IID IID_IXFeedsEnum;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("dc43a9d5-5015-4301-8c96-a47434b4d658")
    IXFeedsEnum : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Count( 
            /* [out] */ UINT __RPC_FAR *puiCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ UINT uiIndex,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IXFeedsEnumVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IXFeedsEnum __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IXFeedsEnum __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IXFeedsEnum __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Count )( 
            IXFeedsEnum __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *puiCount);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Item )( 
            IXFeedsEnum __RPC_FAR * This,
            /* [in] */ UINT uiIndex,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        END_INTERFACE
    } IXFeedsEnumVtbl;

    interface IXFeedsEnum
    {
        CONST_VTBL struct IXFeedsEnumVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXFeedsEnum_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IXFeedsEnum_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IXFeedsEnum_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IXFeedsEnum_Count(This,puiCount)	\
    (This)->lpVtbl -> Count(This,puiCount)

#define IXFeedsEnum_Item(This,uiIndex,riid,ppv)	\
    (This)->lpVtbl -> Item(This,uiIndex,riid,ppv)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IXFeedsEnum_Count_Proxy( 
    IXFeedsEnum __RPC_FAR * This,
    /* [out] */ UINT __RPC_FAR *puiCount);


void __RPC_STUB IXFeedsEnum_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedsEnum_Item_Proxy( 
    IXFeedsEnum __RPC_FAR * This,
    /* [in] */ UINT uiIndex,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IXFeedsEnum_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IXFeedsEnum_INTERFACE_DEFINED__ */


#ifndef __IXFeedFolder_INTERFACE_DEFINED__
#define __IXFeedFolder_INTERFACE_DEFINED__

/* interface IXFeedFolder */
/* [object][uuid] */ 


EXTERN_C const IID IID_IXFeedFolder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4c963678-3a51-4b88-8531-98b90b6508f2")
    IXFeedFolder : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Feeds( 
            /* [out] */ IXFeedsEnum __RPC_FAR *__RPC_FAR *ppfe) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Subfolders( 
            /* [out] */ IXFeedsEnum __RPC_FAR *__RPC_FAR *ppfe) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateFeed( 
            /* [in] */ LPCWSTR pszName,
            /* [in] */ LPCWSTR pszUrl,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateSubfolder( 
            /* [in] */ LPCWSTR pszName,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ExistsFeed( 
            LPCWSTR pszName,
            BOOL __RPC_FAR *pbFeedExists) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ExistsSubfolder( 
            LPCWSTR pszName,
            BOOL __RPC_FAR *pbSubfolderExists) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFeed( 
            /* [in] */ LPCWSTR pszName,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSubfolder( 
            /* [in] */ LPCWSTR pszName,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Delete( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Name( 
            /* [out] */ LPWSTR __RPC_FAR *ppszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Rename( 
            /* [in] */ LPCWSTR pszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Path( 
            /* [out] */ LPWSTR __RPC_FAR *ppszPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Move( 
            /* [in] */ LPCWSTR pszPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Parent( 
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsRoot( 
            /* [out] */ BOOL __RPC_FAR *pbIsRootFeedFolder) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetWatcher( 
            /* [in] */ FEEDS_EVENTS_SCOPE scope,
            /* [in] */ FEEDS_EVENTS_MASK mask,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TotalUnreadItemCount( 
            /* [out] */ UINT __RPC_FAR *puiTotalUnreadItemCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TotalItemCount( 
            /* [out] */ UINT __RPC_FAR *puiTotalItemCount) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IXFeedFolderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IXFeedFolder __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IXFeedFolder __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IXFeedFolder __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Feeds )( 
            IXFeedFolder __RPC_FAR * This,
            /* [out] */ IXFeedsEnum __RPC_FAR *__RPC_FAR *ppfe);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Subfolders )( 
            IXFeedFolder __RPC_FAR * This,
            /* [out] */ IXFeedsEnum __RPC_FAR *__RPC_FAR *ppfe);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateFeed )( 
            IXFeedFolder __RPC_FAR * This,
            /* [in] */ LPCWSTR pszName,
            /* [in] */ LPCWSTR pszUrl,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateSubfolder )( 
            IXFeedFolder __RPC_FAR * This,
            /* [in] */ LPCWSTR pszName,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ExistsFeed )( 
            IXFeedFolder __RPC_FAR * This,
            LPCWSTR pszName,
            BOOL __RPC_FAR *pbFeedExists);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ExistsSubfolder )( 
            IXFeedFolder __RPC_FAR * This,
            LPCWSTR pszName,
            BOOL __RPC_FAR *pbSubfolderExists);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetFeed )( 
            IXFeedFolder __RPC_FAR * This,
            /* [in] */ LPCWSTR pszName,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetSubfolder )( 
            IXFeedFolder __RPC_FAR * This,
            /* [in] */ LPCWSTR pszName,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Delete )( 
            IXFeedFolder __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Name )( 
            IXFeedFolder __RPC_FAR * This,
            /* [out] */ LPWSTR __RPC_FAR *ppszName);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Rename )( 
            IXFeedFolder __RPC_FAR * This,
            /* [in] */ LPCWSTR pszName);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Path )( 
            IXFeedFolder __RPC_FAR * This,
            /* [out] */ LPWSTR __RPC_FAR *ppszPath);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Move )( 
            IXFeedFolder __RPC_FAR * This,
            /* [in] */ LPCWSTR pszPath);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Parent )( 
            IXFeedFolder __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsRoot )( 
            IXFeedFolder __RPC_FAR * This,
            /* [out] */ BOOL __RPC_FAR *pbIsRootFeedFolder);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetWatcher )( 
            IXFeedFolder __RPC_FAR * This,
            /* [in] */ FEEDS_EVENTS_SCOPE scope,
            /* [in] */ FEEDS_EVENTS_MASK mask,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *TotalUnreadItemCount )( 
            IXFeedFolder __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *puiTotalUnreadItemCount);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *TotalItemCount )( 
            IXFeedFolder __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *puiTotalItemCount);
        
        END_INTERFACE
    } IXFeedFolderVtbl;

    interface IXFeedFolder
    {
        CONST_VTBL struct IXFeedFolderVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXFeedFolder_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IXFeedFolder_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IXFeedFolder_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IXFeedFolder_Feeds(This,ppfe)	\
    (This)->lpVtbl -> Feeds(This,ppfe)

#define IXFeedFolder_Subfolders(This,ppfe)	\
    (This)->lpVtbl -> Subfolders(This,ppfe)

#define IXFeedFolder_CreateFeed(This,pszName,pszUrl,riid,ppv)	\
    (This)->lpVtbl -> CreateFeed(This,pszName,pszUrl,riid,ppv)

#define IXFeedFolder_CreateSubfolder(This,pszName,riid,ppv)	\
    (This)->lpVtbl -> CreateSubfolder(This,pszName,riid,ppv)

#define IXFeedFolder_ExistsFeed(This,pszName,pbFeedExists)	\
    (This)->lpVtbl -> ExistsFeed(This,pszName,pbFeedExists)

#define IXFeedFolder_ExistsSubfolder(This,pszName,pbSubfolderExists)	\
    (This)->lpVtbl -> ExistsSubfolder(This,pszName,pbSubfolderExists)

#define IXFeedFolder_GetFeed(This,pszName,riid,ppv)	\
    (This)->lpVtbl -> GetFeed(This,pszName,riid,ppv)

#define IXFeedFolder_GetSubfolder(This,pszName,riid,ppv)	\
    (This)->lpVtbl -> GetSubfolder(This,pszName,riid,ppv)

#define IXFeedFolder_Delete(This)	\
    (This)->lpVtbl -> Delete(This)

#define IXFeedFolder_Name(This,ppszName)	\
    (This)->lpVtbl -> Name(This,ppszName)

#define IXFeedFolder_Rename(This,pszName)	\
    (This)->lpVtbl -> Rename(This,pszName)

#define IXFeedFolder_Path(This,ppszPath)	\
    (This)->lpVtbl -> Path(This,ppszPath)

#define IXFeedFolder_Move(This,pszPath)	\
    (This)->lpVtbl -> Move(This,pszPath)

#define IXFeedFolder_Parent(This,riid,ppv)	\
    (This)->lpVtbl -> Parent(This,riid,ppv)

#define IXFeedFolder_IsRoot(This,pbIsRootFeedFolder)	\
    (This)->lpVtbl -> IsRoot(This,pbIsRootFeedFolder)

#define IXFeedFolder_GetWatcher(This,scope,mask,riid,ppv)	\
    (This)->lpVtbl -> GetWatcher(This,scope,mask,riid,ppv)

#define IXFeedFolder_TotalUnreadItemCount(This,puiTotalUnreadItemCount)	\
    (This)->lpVtbl -> TotalUnreadItemCount(This,puiTotalUnreadItemCount)

#define IXFeedFolder_TotalItemCount(This,puiTotalItemCount)	\
    (This)->lpVtbl -> TotalItemCount(This,puiTotalItemCount)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IXFeedFolder_Feeds_Proxy( 
    IXFeedFolder __RPC_FAR * This,
    /* [out] */ IXFeedsEnum __RPC_FAR *__RPC_FAR *ppfe);


void __RPC_STUB IXFeedFolder_Feeds_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedFolder_Subfolders_Proxy( 
    IXFeedFolder __RPC_FAR * This,
    /* [out] */ IXFeedsEnum __RPC_FAR *__RPC_FAR *ppfe);


void __RPC_STUB IXFeedFolder_Subfolders_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedFolder_CreateFeed_Proxy( 
    IXFeedFolder __RPC_FAR * This,
    /* [in] */ LPCWSTR pszName,
    /* [in] */ LPCWSTR pszUrl,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IXFeedFolder_CreateFeed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedFolder_CreateSubfolder_Proxy( 
    IXFeedFolder __RPC_FAR * This,
    /* [in] */ LPCWSTR pszName,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IXFeedFolder_CreateSubfolder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedFolder_ExistsFeed_Proxy( 
    IXFeedFolder __RPC_FAR * This,
    LPCWSTR pszName,
    BOOL __RPC_FAR *pbFeedExists);


void __RPC_STUB IXFeedFolder_ExistsFeed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedFolder_ExistsSubfolder_Proxy( 
    IXFeedFolder __RPC_FAR * This,
    LPCWSTR pszName,
    BOOL __RPC_FAR *pbSubfolderExists);


void __RPC_STUB IXFeedFolder_ExistsSubfolder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedFolder_GetFeed_Proxy( 
    IXFeedFolder __RPC_FAR * This,
    /* [in] */ LPCWSTR pszName,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IXFeedFolder_GetFeed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedFolder_GetSubfolder_Proxy( 
    IXFeedFolder __RPC_FAR * This,
    /* [in] */ LPCWSTR pszName,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IXFeedFolder_GetSubfolder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedFolder_Delete_Proxy( 
    IXFeedFolder __RPC_FAR * This);


void __RPC_STUB IXFeedFolder_Delete_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedFolder_Name_Proxy( 
    IXFeedFolder __RPC_FAR * This,
    /* [out] */ LPWSTR __RPC_FAR *ppszName);


void __RPC_STUB IXFeedFolder_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedFolder_Rename_Proxy( 
    IXFeedFolder __RPC_FAR * This,
    /* [in] */ LPCWSTR pszName);


void __RPC_STUB IXFeedFolder_Rename_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedFolder_Path_Proxy( 
    IXFeedFolder __RPC_FAR * This,
    /* [out] */ LPWSTR __RPC_FAR *ppszPath);


void __RPC_STUB IXFeedFolder_Path_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedFolder_Move_Proxy( 
    IXFeedFolder __RPC_FAR * This,
    /* [in] */ LPCWSTR pszPath);


void __RPC_STUB IXFeedFolder_Move_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedFolder_Parent_Proxy( 
    IXFeedFolder __RPC_FAR * This,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IXFeedFolder_Parent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedFolder_IsRoot_Proxy( 
    IXFeedFolder __RPC_FAR * This,
    /* [out] */ BOOL __RPC_FAR *pbIsRootFeedFolder);


void __RPC_STUB IXFeedFolder_IsRoot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedFolder_GetWatcher_Proxy( 
    IXFeedFolder __RPC_FAR * This,
    /* [in] */ FEEDS_EVENTS_SCOPE scope,
    /* [in] */ FEEDS_EVENTS_MASK mask,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IXFeedFolder_GetWatcher_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedFolder_TotalUnreadItemCount_Proxy( 
    IXFeedFolder __RPC_FAR * This,
    /* [out] */ UINT __RPC_FAR *puiTotalUnreadItemCount);


void __RPC_STUB IXFeedFolder_TotalUnreadItemCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedFolder_TotalItemCount_Proxy( 
    IXFeedFolder __RPC_FAR * This,
    /* [out] */ UINT __RPC_FAR *puiTotalItemCount);


void __RPC_STUB IXFeedFolder_TotalItemCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IXFeedFolder_INTERFACE_DEFINED__ */


#ifndef __IXFeedFolderEvents_INTERFACE_DEFINED__
#define __IXFeedFolderEvents_INTERFACE_DEFINED__

/* interface IXFeedFolderEvents */
/* [object][uuid] */ 


EXTERN_C const IID IID_IXFeedFolderEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7964b769-234a-4bb1-a5f4-90454c8ad07e")
    IXFeedFolderEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Error( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FolderAdded( 
            /* [in] */ LPCWSTR pszPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FolderDeleted( 
            /* [in] */ LPCWSTR pszPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FolderRenamed( 
            /* [in] */ LPCWSTR pszPath,
            /* [in] */ LPCWSTR pszOldPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FolderMovedFrom( 
            /* [in] */ LPCWSTR pszPath,
            /* [in] */ LPCWSTR pszOldPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FolderMovedTo( 
            /* [in] */ LPCWSTR pszPath,
            /* [in] */ LPCWSTR pszOldPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FolderItemCountChanged( 
            /* [in] */ LPCWSTR pszPath,
            /* [in] */ FEICF feicfFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FeedAdded( 
            /* [in] */ LPCWSTR pszPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FeedDeleted( 
            /* [in] */ LPCWSTR pszPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FeedRenamed( 
            /* [in] */ LPCWSTR pszPath,
            /* [in] */ LPCWSTR pszOldPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FeedUrlChanged( 
            /* [in] */ LPCWSTR pszPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FeedMovedFrom( 
            /* [in] */ LPCWSTR pszPath,
            /* [in] */ LPCWSTR pszOldPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FeedMovedTo( 
            /* [in] */ LPCWSTR pszPath,
            /* [in] */ LPCWSTR pszOldPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FeedDownloading( 
            /* [in] */ LPCWSTR pszPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FeedDownloadCompleted( 
            /* [in] */ LPCWSTR pszPath,
            /* [in] */ FEEDS_DOWNLOAD_ERROR fde) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FeedItemCountChanged( 
            /* [in] */ LPCWSTR pszPath,
            /* [in] */ FEICF feicfFlags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IXFeedFolderEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IXFeedFolderEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IXFeedFolderEvents __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IXFeedFolderEvents __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Error )( 
            IXFeedFolderEvents __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FolderAdded )( 
            IXFeedFolderEvents __RPC_FAR * This,
            /* [in] */ LPCWSTR pszPath);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FolderDeleted )( 
            IXFeedFolderEvents __RPC_FAR * This,
            /* [in] */ LPCWSTR pszPath);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FolderRenamed )( 
            IXFeedFolderEvents __RPC_FAR * This,
            /* [in] */ LPCWSTR pszPath,
            /* [in] */ LPCWSTR pszOldPath);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FolderMovedFrom )( 
            IXFeedFolderEvents __RPC_FAR * This,
            /* [in] */ LPCWSTR pszPath,
            /* [in] */ LPCWSTR pszOldPath);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FolderMovedTo )( 
            IXFeedFolderEvents __RPC_FAR * This,
            /* [in] */ LPCWSTR pszPath,
            /* [in] */ LPCWSTR pszOldPath);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FolderItemCountChanged )( 
            IXFeedFolderEvents __RPC_FAR * This,
            /* [in] */ LPCWSTR pszPath,
            /* [in] */ FEICF feicfFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FeedAdded )( 
            IXFeedFolderEvents __RPC_FAR * This,
            /* [in] */ LPCWSTR pszPath);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FeedDeleted )( 
            IXFeedFolderEvents __RPC_FAR * This,
            /* [in] */ LPCWSTR pszPath);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FeedRenamed )( 
            IXFeedFolderEvents __RPC_FAR * This,
            /* [in] */ LPCWSTR pszPath,
            /* [in] */ LPCWSTR pszOldPath);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FeedUrlChanged )( 
            IXFeedFolderEvents __RPC_FAR * This,
            /* [in] */ LPCWSTR pszPath);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FeedMovedFrom )( 
            IXFeedFolderEvents __RPC_FAR * This,
            /* [in] */ LPCWSTR pszPath,
            /* [in] */ LPCWSTR pszOldPath);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FeedMovedTo )( 
            IXFeedFolderEvents __RPC_FAR * This,
            /* [in] */ LPCWSTR pszPath,
            /* [in] */ LPCWSTR pszOldPath);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FeedDownloading )( 
            IXFeedFolderEvents __RPC_FAR * This,
            /* [in] */ LPCWSTR pszPath);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FeedDownloadCompleted )( 
            IXFeedFolderEvents __RPC_FAR * This,
            /* [in] */ LPCWSTR pszPath,
            /* [in] */ FEEDS_DOWNLOAD_ERROR fde);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FeedItemCountChanged )( 
            IXFeedFolderEvents __RPC_FAR * This,
            /* [in] */ LPCWSTR pszPath,
            /* [in] */ FEICF feicfFlags);
        
        END_INTERFACE
    } IXFeedFolderEventsVtbl;

    interface IXFeedFolderEvents
    {
        CONST_VTBL struct IXFeedFolderEventsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXFeedFolderEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IXFeedFolderEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IXFeedFolderEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IXFeedFolderEvents_Error(This)	\
    (This)->lpVtbl -> Error(This)

#define IXFeedFolderEvents_FolderAdded(This,pszPath)	\
    (This)->lpVtbl -> FolderAdded(This,pszPath)

#define IXFeedFolderEvents_FolderDeleted(This,pszPath)	\
    (This)->lpVtbl -> FolderDeleted(This,pszPath)

#define IXFeedFolderEvents_FolderRenamed(This,pszPath,pszOldPath)	\
    (This)->lpVtbl -> FolderRenamed(This,pszPath,pszOldPath)

#define IXFeedFolderEvents_FolderMovedFrom(This,pszPath,pszOldPath)	\
    (This)->lpVtbl -> FolderMovedFrom(This,pszPath,pszOldPath)

#define IXFeedFolderEvents_FolderMovedTo(This,pszPath,pszOldPath)	\
    (This)->lpVtbl -> FolderMovedTo(This,pszPath,pszOldPath)

#define IXFeedFolderEvents_FolderItemCountChanged(This,pszPath,feicfFlags)	\
    (This)->lpVtbl -> FolderItemCountChanged(This,pszPath,feicfFlags)

#define IXFeedFolderEvents_FeedAdded(This,pszPath)	\
    (This)->lpVtbl -> FeedAdded(This,pszPath)

#define IXFeedFolderEvents_FeedDeleted(This,pszPath)	\
    (This)->lpVtbl -> FeedDeleted(This,pszPath)

#define IXFeedFolderEvents_FeedRenamed(This,pszPath,pszOldPath)	\
    (This)->lpVtbl -> FeedRenamed(This,pszPath,pszOldPath)

#define IXFeedFolderEvents_FeedUrlChanged(This,pszPath)	\
    (This)->lpVtbl -> FeedUrlChanged(This,pszPath)

#define IXFeedFolderEvents_FeedMovedFrom(This,pszPath,pszOldPath)	\
    (This)->lpVtbl -> FeedMovedFrom(This,pszPath,pszOldPath)

#define IXFeedFolderEvents_FeedMovedTo(This,pszPath,pszOldPath)	\
    (This)->lpVtbl -> FeedMovedTo(This,pszPath,pszOldPath)

#define IXFeedFolderEvents_FeedDownloading(This,pszPath)	\
    (This)->lpVtbl -> FeedDownloading(This,pszPath)

#define IXFeedFolderEvents_FeedDownloadCompleted(This,pszPath,fde)	\
    (This)->lpVtbl -> FeedDownloadCompleted(This,pszPath,fde)

#define IXFeedFolderEvents_FeedItemCountChanged(This,pszPath,feicfFlags)	\
    (This)->lpVtbl -> FeedItemCountChanged(This,pszPath,feicfFlags)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IXFeedFolderEvents_Error_Proxy( 
    IXFeedFolderEvents __RPC_FAR * This);


void __RPC_STUB IXFeedFolderEvents_Error_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedFolderEvents_FolderAdded_Proxy( 
    IXFeedFolderEvents __RPC_FAR * This,
    /* [in] */ LPCWSTR pszPath);


void __RPC_STUB IXFeedFolderEvents_FolderAdded_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedFolderEvents_FolderDeleted_Proxy( 
    IXFeedFolderEvents __RPC_FAR * This,
    /* [in] */ LPCWSTR pszPath);


void __RPC_STUB IXFeedFolderEvents_FolderDeleted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedFolderEvents_FolderRenamed_Proxy( 
    IXFeedFolderEvents __RPC_FAR * This,
    /* [in] */ LPCWSTR pszPath,
    /* [in] */ LPCWSTR pszOldPath);


void __RPC_STUB IXFeedFolderEvents_FolderRenamed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedFolderEvents_FolderMovedFrom_Proxy( 
    IXFeedFolderEvents __RPC_FAR * This,
    /* [in] */ LPCWSTR pszPath,
    /* [in] */ LPCWSTR pszOldPath);


void __RPC_STUB IXFeedFolderEvents_FolderMovedFrom_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedFolderEvents_FolderMovedTo_Proxy( 
    IXFeedFolderEvents __RPC_FAR * This,
    /* [in] */ LPCWSTR pszPath,
    /* [in] */ LPCWSTR pszOldPath);


void __RPC_STUB IXFeedFolderEvents_FolderMovedTo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedFolderEvents_FolderItemCountChanged_Proxy( 
    IXFeedFolderEvents __RPC_FAR * This,
    /* [in] */ LPCWSTR pszPath,
    /* [in] */ FEICF feicfFlags);


void __RPC_STUB IXFeedFolderEvents_FolderItemCountChanged_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedFolderEvents_FeedAdded_Proxy( 
    IXFeedFolderEvents __RPC_FAR * This,
    /* [in] */ LPCWSTR pszPath);


void __RPC_STUB IXFeedFolderEvents_FeedAdded_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedFolderEvents_FeedDeleted_Proxy( 
    IXFeedFolderEvents __RPC_FAR * This,
    /* [in] */ LPCWSTR pszPath);


void __RPC_STUB IXFeedFolderEvents_FeedDeleted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedFolderEvents_FeedRenamed_Proxy( 
    IXFeedFolderEvents __RPC_FAR * This,
    /* [in] */ LPCWSTR pszPath,
    /* [in] */ LPCWSTR pszOldPath);


void __RPC_STUB IXFeedFolderEvents_FeedRenamed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedFolderEvents_FeedUrlChanged_Proxy( 
    IXFeedFolderEvents __RPC_FAR * This,
    /* [in] */ LPCWSTR pszPath);


void __RPC_STUB IXFeedFolderEvents_FeedUrlChanged_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedFolderEvents_FeedMovedFrom_Proxy( 
    IXFeedFolderEvents __RPC_FAR * This,
    /* [in] */ LPCWSTR pszPath,
    /* [in] */ LPCWSTR pszOldPath);


void __RPC_STUB IXFeedFolderEvents_FeedMovedFrom_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedFolderEvents_FeedMovedTo_Proxy( 
    IXFeedFolderEvents __RPC_FAR * This,
    /* [in] */ LPCWSTR pszPath,
    /* [in] */ LPCWSTR pszOldPath);


void __RPC_STUB IXFeedFolderEvents_FeedMovedTo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedFolderEvents_FeedDownloading_Proxy( 
    IXFeedFolderEvents __RPC_FAR * This,
    /* [in] */ LPCWSTR pszPath);


void __RPC_STUB IXFeedFolderEvents_FeedDownloading_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedFolderEvents_FeedDownloadCompleted_Proxy( 
    IXFeedFolderEvents __RPC_FAR * This,
    /* [in] */ LPCWSTR pszPath,
    /* [in] */ FEEDS_DOWNLOAD_ERROR fde);


void __RPC_STUB IXFeedFolderEvents_FeedDownloadCompleted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedFolderEvents_FeedItemCountChanged_Proxy( 
    IXFeedFolderEvents __RPC_FAR * This,
    /* [in] */ LPCWSTR pszPath,
    /* [in] */ FEICF feicfFlags);


void __RPC_STUB IXFeedFolderEvents_FeedItemCountChanged_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IXFeedFolderEvents_INTERFACE_DEFINED__ */


#ifndef __IXFeed_INTERFACE_DEFINED__
#define __IXFeed_INTERFACE_DEFINED__

/* interface IXFeed */
/* [object][uuid] */ 


EXTERN_C const IID IID_IXFeed;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a44179a4-e0f6-403b-af8d-d080f425a451")
    IXFeed : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Xml( 
            /* [in] */ UINT uiItemCount,
            /* [in] */ FEEDS_XML_SORT_PROPERTY sortProperty,
            /* [in] */ FEEDS_XML_SORT_ORDER sortOrder,
            /* [in] */ FEEDS_XML_FILTER_FLAGS filterFlags,
            /* [in] */ FEEDS_XML_INCLUDE_FLAGS includeFlags,
            /* [out] */ IStream __RPC_FAR *__RPC_FAR *pps) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Name( 
            /* [out] */ LPWSTR __RPC_FAR *ppszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Rename( 
            /* [in] */ LPCWSTR pszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Url( 
            /* [out] */ LPWSTR __RPC_FAR *ppszUrl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetUrl( 
            /* [in] */ LPCWSTR pszUrl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LocalId( 
            /* [out] */ GUID __RPC_FAR *pguid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Path( 
            /* [out] */ LPWSTR __RPC_FAR *ppszPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Move( 
            /* [in] */ LPCWSTR pszPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Parent( 
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LastWriteTime( 
            /* [out] */ SYSTEMTIME __RPC_FAR *pstLastWriteTime) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Delete( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Download( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AsyncDownload( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CancelAsyncDownload( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SyncSetting( 
            /* [out] */ FEEDS_SYNC_SETTING __RPC_FAR *pfss) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSyncSetting( 
            /* [in] */ FEEDS_SYNC_SETTING fss) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Interval( 
            /* [out] */ UINT __RPC_FAR *puiInterval) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInterval( 
            /* [in] */ UINT uiInterval) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LastDownloadTime( 
            /* [out] */ SYSTEMTIME __RPC_FAR *pstLastDownloadTime) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LocalEnclosurePath( 
            /* [out] */ LPWSTR __RPC_FAR *ppszPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Items( 
            /* [out] */ IXFeedsEnum __RPC_FAR *__RPC_FAR *ppfe) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItem( 
            /* [in] */ UINT uiId,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MarkAllItemsRead( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MaxItemCount( 
            /* [out] */ UINT __RPC_FAR *puiMaxItemCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaxItemCount( 
            /* [in] */ UINT uiMaxItemCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DownloadEnclosuresAutomatically( 
            /* [out] */ BOOL __RPC_FAR *pbDownloadEnclosuresAutomatically) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDownloadEnclosuresAutomatically( 
            /* [in] */ BOOL bDownloadEnclosuresAutomatically) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DownloadStatus( 
            /* [out] */ FEEDS_DOWNLOAD_STATUS __RPC_FAR *pfds) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LastDownloadError( 
            /* [out] */ FEEDS_DOWNLOAD_ERROR __RPC_FAR *pfde) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Merge( 
            /* [in] */ IStream __RPC_FAR *pStream,
            /* [in] */ LPCWSTR pszUrl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DownloadUrl( 
            /* [out] */ LPWSTR __RPC_FAR *ppszUrl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Title( 
            /* [out] */ LPWSTR __RPC_FAR *ppszTitle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Description( 
            /* [out] */ LPWSTR __RPC_FAR *ppszDescription) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Link( 
            /* [out] */ LPWSTR __RPC_FAR *ppszHomePage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Image( 
            /* [out] */ LPWSTR __RPC_FAR *ppszImageUrl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LastBuildDate( 
            /* [out] */ SYSTEMTIME __RPC_FAR *pstLastBuildDate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PubDate( 
            /* [out] */ SYSTEMTIME __RPC_FAR *pstPubDate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Ttl( 
            /* [out] */ UINT __RPC_FAR *puiTtl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Language( 
            /* [out] */ LPWSTR __RPC_FAR *ppszLanguage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Copyright( 
            /* [out] */ LPWSTR __RPC_FAR *ppszCopyright) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsList( 
            /* [out] */ BOOL __RPC_FAR *pbIsList) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetWatcher( 
            /* [in] */ FEEDS_EVENTS_SCOPE scope,
            /* [in] */ FEEDS_EVENTS_MASK mask,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnreadItemCount( 
            /* [out] */ UINT __RPC_FAR *puiUnreadItemCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ItemCount( 
            /* [out] */ UINT __RPC_FAR *puiItemCount) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IXFeedVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IXFeed __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IXFeed __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IXFeed __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Xml )( 
            IXFeed __RPC_FAR * This,
            /* [in] */ UINT uiItemCount,
            /* [in] */ FEEDS_XML_SORT_PROPERTY sortProperty,
            /* [in] */ FEEDS_XML_SORT_ORDER sortOrder,
            /* [in] */ FEEDS_XML_FILTER_FLAGS filterFlags,
            /* [in] */ FEEDS_XML_INCLUDE_FLAGS includeFlags,
            /* [out] */ IStream __RPC_FAR *__RPC_FAR *pps);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Name )( 
            IXFeed __RPC_FAR * This,
            /* [out] */ LPWSTR __RPC_FAR *ppszName);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Rename )( 
            IXFeed __RPC_FAR * This,
            /* [in] */ LPCWSTR pszName);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Url )( 
            IXFeed __RPC_FAR * This,
            /* [out] */ LPWSTR __RPC_FAR *ppszUrl);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetUrl )( 
            IXFeed __RPC_FAR * This,
            /* [in] */ LPCWSTR pszUrl);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LocalId )( 
            IXFeed __RPC_FAR * This,
            /* [out] */ GUID __RPC_FAR *pguid);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Path )( 
            IXFeed __RPC_FAR * This,
            /* [out] */ LPWSTR __RPC_FAR *ppszPath);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Move )( 
            IXFeed __RPC_FAR * This,
            /* [in] */ LPCWSTR pszPath);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Parent )( 
            IXFeed __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LastWriteTime )( 
            IXFeed __RPC_FAR * This,
            /* [out] */ SYSTEMTIME __RPC_FAR *pstLastWriteTime);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Delete )( 
            IXFeed __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Download )( 
            IXFeed __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AsyncDownload )( 
            IXFeed __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CancelAsyncDownload )( 
            IXFeed __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SyncSetting )( 
            IXFeed __RPC_FAR * This,
            /* [out] */ FEEDS_SYNC_SETTING __RPC_FAR *pfss);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetSyncSetting )( 
            IXFeed __RPC_FAR * This,
            /* [in] */ FEEDS_SYNC_SETTING fss);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Interval )( 
            IXFeed __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *puiInterval);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetInterval )( 
            IXFeed __RPC_FAR * This,
            /* [in] */ UINT uiInterval);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LastDownloadTime )( 
            IXFeed __RPC_FAR * This,
            /* [out] */ SYSTEMTIME __RPC_FAR *pstLastDownloadTime);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LocalEnclosurePath )( 
            IXFeed __RPC_FAR * This,
            /* [out] */ LPWSTR __RPC_FAR *ppszPath);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Items )( 
            IXFeed __RPC_FAR * This,
            /* [out] */ IXFeedsEnum __RPC_FAR *__RPC_FAR *ppfe);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetItem )( 
            IXFeed __RPC_FAR * This,
            /* [in] */ UINT uiId,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *MarkAllItemsRead )( 
            IXFeed __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *MaxItemCount )( 
            IXFeed __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *puiMaxItemCount);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetMaxItemCount )( 
            IXFeed __RPC_FAR * This,
            /* [in] */ UINT uiMaxItemCount);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DownloadEnclosuresAutomatically )( 
            IXFeed __RPC_FAR * This,
            /* [out] */ BOOL __RPC_FAR *pbDownloadEnclosuresAutomatically);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetDownloadEnclosuresAutomatically )( 
            IXFeed __RPC_FAR * This,
            /* [in] */ BOOL bDownloadEnclosuresAutomatically);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DownloadStatus )( 
            IXFeed __RPC_FAR * This,
            /* [out] */ FEEDS_DOWNLOAD_STATUS __RPC_FAR *pfds);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LastDownloadError )( 
            IXFeed __RPC_FAR * This,
            /* [out] */ FEEDS_DOWNLOAD_ERROR __RPC_FAR *pfde);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Merge )( 
            IXFeed __RPC_FAR * This,
            /* [in] */ IStream __RPC_FAR *pStream,
            /* [in] */ LPCWSTR pszUrl);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DownloadUrl )( 
            IXFeed __RPC_FAR * This,
            /* [out] */ LPWSTR __RPC_FAR *ppszUrl);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Title )( 
            IXFeed __RPC_FAR * This,
            /* [out] */ LPWSTR __RPC_FAR *ppszTitle);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Description )( 
            IXFeed __RPC_FAR * This,
            /* [out] */ LPWSTR __RPC_FAR *ppszDescription);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Link )( 
            IXFeed __RPC_FAR * This,
            /* [out] */ LPWSTR __RPC_FAR *ppszHomePage);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Image )( 
            IXFeed __RPC_FAR * This,
            /* [out] */ LPWSTR __RPC_FAR *ppszImageUrl);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LastBuildDate )( 
            IXFeed __RPC_FAR * This,
            /* [out] */ SYSTEMTIME __RPC_FAR *pstLastBuildDate);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *PubDate )( 
            IXFeed __RPC_FAR * This,
            /* [out] */ SYSTEMTIME __RPC_FAR *pstPubDate);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Ttl )( 
            IXFeed __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *puiTtl);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Language )( 
            IXFeed __RPC_FAR * This,
            /* [out] */ LPWSTR __RPC_FAR *ppszLanguage);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Copyright )( 
            IXFeed __RPC_FAR * This,
            /* [out] */ LPWSTR __RPC_FAR *ppszCopyright);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsList )( 
            IXFeed __RPC_FAR * This,
            /* [out] */ BOOL __RPC_FAR *pbIsList);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetWatcher )( 
            IXFeed __RPC_FAR * This,
            /* [in] */ FEEDS_EVENTS_SCOPE scope,
            /* [in] */ FEEDS_EVENTS_MASK mask,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *UnreadItemCount )( 
            IXFeed __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *puiUnreadItemCount);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ItemCount )( 
            IXFeed __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *puiItemCount);
        
        END_INTERFACE
    } IXFeedVtbl;

    interface IXFeed
    {
        CONST_VTBL struct IXFeedVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXFeed_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IXFeed_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IXFeed_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IXFeed_Xml(This,uiItemCount,sortProperty,sortOrder,filterFlags,includeFlags,pps)	\
    (This)->lpVtbl -> Xml(This,uiItemCount,sortProperty,sortOrder,filterFlags,includeFlags,pps)

#define IXFeed_Name(This,ppszName)	\
    (This)->lpVtbl -> Name(This,ppszName)

#define IXFeed_Rename(This,pszName)	\
    (This)->lpVtbl -> Rename(This,pszName)

#define IXFeed_Url(This,ppszUrl)	\
    (This)->lpVtbl -> Url(This,ppszUrl)

#define IXFeed_SetUrl(This,pszUrl)	\
    (This)->lpVtbl -> SetUrl(This,pszUrl)

#define IXFeed_LocalId(This,pguid)	\
    (This)->lpVtbl -> LocalId(This,pguid)

#define IXFeed_Path(This,ppszPath)	\
    (This)->lpVtbl -> Path(This,ppszPath)

#define IXFeed_Move(This,pszPath)	\
    (This)->lpVtbl -> Move(This,pszPath)

#define IXFeed_Parent(This,riid,ppv)	\
    (This)->lpVtbl -> Parent(This,riid,ppv)

#define IXFeed_LastWriteTime(This,pstLastWriteTime)	\
    (This)->lpVtbl -> LastWriteTime(This,pstLastWriteTime)

#define IXFeed_Delete(This)	\
    (This)->lpVtbl -> Delete(This)

#define IXFeed_Download(This)	\
    (This)->lpVtbl -> Download(This)

#define IXFeed_AsyncDownload(This)	\
    (This)->lpVtbl -> AsyncDownload(This)

#define IXFeed_CancelAsyncDownload(This)	\
    (This)->lpVtbl -> CancelAsyncDownload(This)

#define IXFeed_SyncSetting(This,pfss)	\
    (This)->lpVtbl -> SyncSetting(This,pfss)

#define IXFeed_SetSyncSetting(This,fss)	\
    (This)->lpVtbl -> SetSyncSetting(This,fss)

#define IXFeed_Interval(This,puiInterval)	\
    (This)->lpVtbl -> Interval(This,puiInterval)

#define IXFeed_SetInterval(This,uiInterval)	\
    (This)->lpVtbl -> SetInterval(This,uiInterval)

#define IXFeed_LastDownloadTime(This,pstLastDownloadTime)	\
    (This)->lpVtbl -> LastDownloadTime(This,pstLastDownloadTime)

#define IXFeed_LocalEnclosurePath(This,ppszPath)	\
    (This)->lpVtbl -> LocalEnclosurePath(This,ppszPath)

#define IXFeed_Items(This,ppfe)	\
    (This)->lpVtbl -> Items(This,ppfe)

#define IXFeed_GetItem(This,uiId,riid,ppv)	\
    (This)->lpVtbl -> GetItem(This,uiId,riid,ppv)

#define IXFeed_MarkAllItemsRead(This)	\
    (This)->lpVtbl -> MarkAllItemsRead(This)

#define IXFeed_MaxItemCount(This,puiMaxItemCount)	\
    (This)->lpVtbl -> MaxItemCount(This,puiMaxItemCount)

#define IXFeed_SetMaxItemCount(This,uiMaxItemCount)	\
    (This)->lpVtbl -> SetMaxItemCount(This,uiMaxItemCount)

#define IXFeed_DownloadEnclosuresAutomatically(This,pbDownloadEnclosuresAutomatically)	\
    (This)->lpVtbl -> DownloadEnclosuresAutomatically(This,pbDownloadEnclosuresAutomatically)

#define IXFeed_SetDownloadEnclosuresAutomatically(This,bDownloadEnclosuresAutomatically)	\
    (This)->lpVtbl -> SetDownloadEnclosuresAutomatically(This,bDownloadEnclosuresAutomatically)

#define IXFeed_DownloadStatus(This,pfds)	\
    (This)->lpVtbl -> DownloadStatus(This,pfds)

#define IXFeed_LastDownloadError(This,pfde)	\
    (This)->lpVtbl -> LastDownloadError(This,pfde)

#define IXFeed_Merge(This,pStream,pszUrl)	\
    (This)->lpVtbl -> Merge(This,pStream,pszUrl)

#define IXFeed_DownloadUrl(This,ppszUrl)	\
    (This)->lpVtbl -> DownloadUrl(This,ppszUrl)

#define IXFeed_Title(This,ppszTitle)	\
    (This)->lpVtbl -> Title(This,ppszTitle)

#define IXFeed_Description(This,ppszDescription)	\
    (This)->lpVtbl -> Description(This,ppszDescription)

#define IXFeed_Link(This,ppszHomePage)	\
    (This)->lpVtbl -> Link(This,ppszHomePage)

#define IXFeed_Image(This,ppszImageUrl)	\
    (This)->lpVtbl -> Image(This,ppszImageUrl)

#define IXFeed_LastBuildDate(This,pstLastBuildDate)	\
    (This)->lpVtbl -> LastBuildDate(This,pstLastBuildDate)

#define IXFeed_PubDate(This,pstPubDate)	\
    (This)->lpVtbl -> PubDate(This,pstPubDate)

#define IXFeed_Ttl(This,puiTtl)	\
    (This)->lpVtbl -> Ttl(This,puiTtl)

#define IXFeed_Language(This,ppszLanguage)	\
    (This)->lpVtbl -> Language(This,ppszLanguage)

#define IXFeed_Copyright(This,ppszCopyright)	\
    (This)->lpVtbl -> Copyright(This,ppszCopyright)

#define IXFeed_IsList(This,pbIsList)	\
    (This)->lpVtbl -> IsList(This,pbIsList)

#define IXFeed_GetWatcher(This,scope,mask,riid,ppv)	\
    (This)->lpVtbl -> GetWatcher(This,scope,mask,riid,ppv)

#define IXFeed_UnreadItemCount(This,puiUnreadItemCount)	\
    (This)->lpVtbl -> UnreadItemCount(This,puiUnreadItemCount)

#define IXFeed_ItemCount(This,puiItemCount)	\
    (This)->lpVtbl -> ItemCount(This,puiItemCount)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IXFeed_Xml_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [in] */ UINT uiItemCount,
    /* [in] */ FEEDS_XML_SORT_PROPERTY sortProperty,
    /* [in] */ FEEDS_XML_SORT_ORDER sortOrder,
    /* [in] */ FEEDS_XML_FILTER_FLAGS filterFlags,
    /* [in] */ FEEDS_XML_INCLUDE_FLAGS includeFlags,
    /* [out] */ IStream __RPC_FAR *__RPC_FAR *pps);


void __RPC_STUB IXFeed_Xml_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_Name_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [out] */ LPWSTR __RPC_FAR *ppszName);


void __RPC_STUB IXFeed_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_Rename_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [in] */ LPCWSTR pszName);


void __RPC_STUB IXFeed_Rename_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_Url_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [out] */ LPWSTR __RPC_FAR *ppszUrl);


void __RPC_STUB IXFeed_Url_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_SetUrl_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [in] */ LPCWSTR pszUrl);


void __RPC_STUB IXFeed_SetUrl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_LocalId_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [out] */ GUID __RPC_FAR *pguid);


void __RPC_STUB IXFeed_LocalId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_Path_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [out] */ LPWSTR __RPC_FAR *ppszPath);


void __RPC_STUB IXFeed_Path_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_Move_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [in] */ LPCWSTR pszPath);


void __RPC_STUB IXFeed_Move_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_Parent_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IXFeed_Parent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_LastWriteTime_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [out] */ SYSTEMTIME __RPC_FAR *pstLastWriteTime);


void __RPC_STUB IXFeed_LastWriteTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_Delete_Proxy( 
    IXFeed __RPC_FAR * This);


void __RPC_STUB IXFeed_Delete_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_Download_Proxy( 
    IXFeed __RPC_FAR * This);


void __RPC_STUB IXFeed_Download_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_AsyncDownload_Proxy( 
    IXFeed __RPC_FAR * This);


void __RPC_STUB IXFeed_AsyncDownload_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_CancelAsyncDownload_Proxy( 
    IXFeed __RPC_FAR * This);


void __RPC_STUB IXFeed_CancelAsyncDownload_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_SyncSetting_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [out] */ FEEDS_SYNC_SETTING __RPC_FAR *pfss);


void __RPC_STUB IXFeed_SyncSetting_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_SetSyncSetting_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [in] */ FEEDS_SYNC_SETTING fss);


void __RPC_STUB IXFeed_SetSyncSetting_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_Interval_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [out] */ UINT __RPC_FAR *puiInterval);


void __RPC_STUB IXFeed_Interval_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_SetInterval_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [in] */ UINT uiInterval);


void __RPC_STUB IXFeed_SetInterval_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_LastDownloadTime_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [out] */ SYSTEMTIME __RPC_FAR *pstLastDownloadTime);


void __RPC_STUB IXFeed_LastDownloadTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_LocalEnclosurePath_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [out] */ LPWSTR __RPC_FAR *ppszPath);


void __RPC_STUB IXFeed_LocalEnclosurePath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_Items_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [out] */ IXFeedsEnum __RPC_FAR *__RPC_FAR *ppfe);


void __RPC_STUB IXFeed_Items_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_GetItem_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [in] */ UINT uiId,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IXFeed_GetItem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_MarkAllItemsRead_Proxy( 
    IXFeed __RPC_FAR * This);


void __RPC_STUB IXFeed_MarkAllItemsRead_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_MaxItemCount_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [out] */ UINT __RPC_FAR *puiMaxItemCount);


void __RPC_STUB IXFeed_MaxItemCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_SetMaxItemCount_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [in] */ UINT uiMaxItemCount);


void __RPC_STUB IXFeed_SetMaxItemCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_DownloadEnclosuresAutomatically_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [out] */ BOOL __RPC_FAR *pbDownloadEnclosuresAutomatically);


void __RPC_STUB IXFeed_DownloadEnclosuresAutomatically_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_SetDownloadEnclosuresAutomatically_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [in] */ BOOL bDownloadEnclosuresAutomatically);


void __RPC_STUB IXFeed_SetDownloadEnclosuresAutomatically_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_DownloadStatus_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [out] */ FEEDS_DOWNLOAD_STATUS __RPC_FAR *pfds);


void __RPC_STUB IXFeed_DownloadStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_LastDownloadError_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [out] */ FEEDS_DOWNLOAD_ERROR __RPC_FAR *pfde);


void __RPC_STUB IXFeed_LastDownloadError_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_Merge_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [in] */ IStream __RPC_FAR *pStream,
    /* [in] */ LPCWSTR pszUrl);


void __RPC_STUB IXFeed_Merge_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_DownloadUrl_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [out] */ LPWSTR __RPC_FAR *ppszUrl);


void __RPC_STUB IXFeed_DownloadUrl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_Title_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [out] */ LPWSTR __RPC_FAR *ppszTitle);


void __RPC_STUB IXFeed_Title_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_Description_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [out] */ LPWSTR __RPC_FAR *ppszDescription);


void __RPC_STUB IXFeed_Description_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_Link_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [out] */ LPWSTR __RPC_FAR *ppszHomePage);


void __RPC_STUB IXFeed_Link_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_Image_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [out] */ LPWSTR __RPC_FAR *ppszImageUrl);


void __RPC_STUB IXFeed_Image_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_LastBuildDate_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [out] */ SYSTEMTIME __RPC_FAR *pstLastBuildDate);


void __RPC_STUB IXFeed_LastBuildDate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_PubDate_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [out] */ SYSTEMTIME __RPC_FAR *pstPubDate);


void __RPC_STUB IXFeed_PubDate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_Ttl_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [out] */ UINT __RPC_FAR *puiTtl);


void __RPC_STUB IXFeed_Ttl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_Language_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [out] */ LPWSTR __RPC_FAR *ppszLanguage);


void __RPC_STUB IXFeed_Language_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_Copyright_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [out] */ LPWSTR __RPC_FAR *ppszCopyright);


void __RPC_STUB IXFeed_Copyright_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_IsList_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [out] */ BOOL __RPC_FAR *pbIsList);


void __RPC_STUB IXFeed_IsList_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_GetWatcher_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [in] */ FEEDS_EVENTS_SCOPE scope,
    /* [in] */ FEEDS_EVENTS_MASK mask,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IXFeed_GetWatcher_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_UnreadItemCount_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [out] */ UINT __RPC_FAR *puiUnreadItemCount);


void __RPC_STUB IXFeed_UnreadItemCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeed_ItemCount_Proxy( 
    IXFeed __RPC_FAR * This,
    /* [out] */ UINT __RPC_FAR *puiItemCount);


void __RPC_STUB IXFeed_ItemCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IXFeed_INTERFACE_DEFINED__ */


#ifndef __IXFeedEvents_INTERFACE_DEFINED__
#define __IXFeedEvents_INTERFACE_DEFINED__

/* interface IXFeedEvents */
/* [object][uuid] */ 


EXTERN_C const IID IID_IXFeedEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1630852e-1263-465b-98e5-fe60ffec4ac2")
    IXFeedEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Error( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FeedDeleted( 
            /* [in] */ LPCWSTR pszPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FeedRenamed( 
            /* [in] */ LPCWSTR pszPath,
            /* [in] */ LPCWSTR pszOldPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FeedUrlChanged( 
            /* [in] */ LPCWSTR pszPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FeedMoved( 
            /* [in] */ LPCWSTR pszPath,
            /* [in] */ LPCWSTR pszOldPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FeedDownloading( 
            /* [in] */ LPCWSTR pszPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FeedDownloadCompleted( 
            /* [in] */ LPCWSTR pszPath,
            /* [in] */ FEEDS_DOWNLOAD_ERROR fde) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FeedItemCountChanged( 
            /* [in] */ LPCWSTR pszPath,
            /* [in] */ FEICF feicfFlags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IXFeedEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IXFeedEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IXFeedEvents __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IXFeedEvents __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Error )( 
            IXFeedEvents __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FeedDeleted )( 
            IXFeedEvents __RPC_FAR * This,
            /* [in] */ LPCWSTR pszPath);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FeedRenamed )( 
            IXFeedEvents __RPC_FAR * This,
            /* [in] */ LPCWSTR pszPath,
            /* [in] */ LPCWSTR pszOldPath);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FeedUrlChanged )( 
            IXFeedEvents __RPC_FAR * This,
            /* [in] */ LPCWSTR pszPath);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FeedMoved )( 
            IXFeedEvents __RPC_FAR * This,
            /* [in] */ LPCWSTR pszPath,
            /* [in] */ LPCWSTR pszOldPath);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FeedDownloading )( 
            IXFeedEvents __RPC_FAR * This,
            /* [in] */ LPCWSTR pszPath);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FeedDownloadCompleted )( 
            IXFeedEvents __RPC_FAR * This,
            /* [in] */ LPCWSTR pszPath,
            /* [in] */ FEEDS_DOWNLOAD_ERROR fde);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FeedItemCountChanged )( 
            IXFeedEvents __RPC_FAR * This,
            /* [in] */ LPCWSTR pszPath,
            /* [in] */ FEICF feicfFlags);
        
        END_INTERFACE
    } IXFeedEventsVtbl;

    interface IXFeedEvents
    {
        CONST_VTBL struct IXFeedEventsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXFeedEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IXFeedEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IXFeedEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IXFeedEvents_Error(This)	\
    (This)->lpVtbl -> Error(This)

#define IXFeedEvents_FeedDeleted(This,pszPath)	\
    (This)->lpVtbl -> FeedDeleted(This,pszPath)

#define IXFeedEvents_FeedRenamed(This,pszPath,pszOldPath)	\
    (This)->lpVtbl -> FeedRenamed(This,pszPath,pszOldPath)

#define IXFeedEvents_FeedUrlChanged(This,pszPath)	\
    (This)->lpVtbl -> FeedUrlChanged(This,pszPath)

#define IXFeedEvents_FeedMoved(This,pszPath,pszOldPath)	\
    (This)->lpVtbl -> FeedMoved(This,pszPath,pszOldPath)

#define IXFeedEvents_FeedDownloading(This,pszPath)	\
    (This)->lpVtbl -> FeedDownloading(This,pszPath)

#define IXFeedEvents_FeedDownloadCompleted(This,pszPath,fde)	\
    (This)->lpVtbl -> FeedDownloadCompleted(This,pszPath,fde)

#define IXFeedEvents_FeedItemCountChanged(This,pszPath,feicfFlags)	\
    (This)->lpVtbl -> FeedItemCountChanged(This,pszPath,feicfFlags)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IXFeedEvents_Error_Proxy( 
    IXFeedEvents __RPC_FAR * This);


void __RPC_STUB IXFeedEvents_Error_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedEvents_FeedDeleted_Proxy( 
    IXFeedEvents __RPC_FAR * This,
    /* [in] */ LPCWSTR pszPath);


void __RPC_STUB IXFeedEvents_FeedDeleted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedEvents_FeedRenamed_Proxy( 
    IXFeedEvents __RPC_FAR * This,
    /* [in] */ LPCWSTR pszPath,
    /* [in] */ LPCWSTR pszOldPath);


void __RPC_STUB IXFeedEvents_FeedRenamed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedEvents_FeedUrlChanged_Proxy( 
    IXFeedEvents __RPC_FAR * This,
    /* [in] */ LPCWSTR pszPath);


void __RPC_STUB IXFeedEvents_FeedUrlChanged_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedEvents_FeedMoved_Proxy( 
    IXFeedEvents __RPC_FAR * This,
    /* [in] */ LPCWSTR pszPath,
    /* [in] */ LPCWSTR pszOldPath);


void __RPC_STUB IXFeedEvents_FeedMoved_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedEvents_FeedDownloading_Proxy( 
    IXFeedEvents __RPC_FAR * This,
    /* [in] */ LPCWSTR pszPath);


void __RPC_STUB IXFeedEvents_FeedDownloading_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedEvents_FeedDownloadCompleted_Proxy( 
    IXFeedEvents __RPC_FAR * This,
    /* [in] */ LPCWSTR pszPath,
    /* [in] */ FEEDS_DOWNLOAD_ERROR fde);


void __RPC_STUB IXFeedEvents_FeedDownloadCompleted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedEvents_FeedItemCountChanged_Proxy( 
    IXFeedEvents __RPC_FAR * This,
    /* [in] */ LPCWSTR pszPath,
    /* [in] */ FEICF feicfFlags);


void __RPC_STUB IXFeedEvents_FeedItemCountChanged_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IXFeedEvents_INTERFACE_DEFINED__ */


#ifndef __IXFeedItem_INTERFACE_DEFINED__
#define __IXFeedItem_INTERFACE_DEFINED__

/* interface IXFeedItem */
/* [object][uuid] */ 


EXTERN_C const IID IID_IXFeedItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e757b2f5-e73e-434e-a1bf-2bd7c3e60fcb")
    IXFeedItem : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Xml( 
            /* [in] */ FEEDS_XML_INCLUDE_FLAGS fxif,
            /* [out] */ IStream __RPC_FAR *__RPC_FAR *pps) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Title( 
            /* [out] */ LPWSTR __RPC_FAR *ppszTitle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Link( 
            /* [out] */ LPWSTR __RPC_FAR *ppszUrl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Guid( 
            /* [out] */ LPWSTR __RPC_FAR *ppszGuid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Description( 
            /* [out] */ LPWSTR __RPC_FAR *ppszDescription) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PubDate( 
            /* [out] */ SYSTEMTIME __RPC_FAR *pstPubDate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Comments( 
            /* [out] */ LPWSTR __RPC_FAR *ppszUrl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Author( 
            /* [out] */ LPWSTR __RPC_FAR *ppszAuthor) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Enclosure( 
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsRead( 
            /* [out] */ BOOL __RPC_FAR *pbIsRead) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetIsRead( 
            /* [in] */ BOOL bIsRead) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LocalId( 
            /* [out] */ UINT __RPC_FAR *puiId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Parent( 
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Delete( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DownloadUrl( 
            /* [out] */ LPWSTR __RPC_FAR *ppszUrl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LastDownloadTime( 
            /* [out] */ SYSTEMTIME __RPC_FAR *pstLastDownloadTime) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Modified( 
            /* [out] */ SYSTEMTIME __RPC_FAR *pstModifiedTime) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IXFeedItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IXFeedItem __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IXFeedItem __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IXFeedItem __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Xml )( 
            IXFeedItem __RPC_FAR * This,
            /* [in] */ FEEDS_XML_INCLUDE_FLAGS fxif,
            /* [out] */ IStream __RPC_FAR *__RPC_FAR *pps);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Title )( 
            IXFeedItem __RPC_FAR * This,
            /* [out] */ LPWSTR __RPC_FAR *ppszTitle);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Link )( 
            IXFeedItem __RPC_FAR * This,
            /* [out] */ LPWSTR __RPC_FAR *ppszUrl);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Guid )( 
            IXFeedItem __RPC_FAR * This,
            /* [out] */ LPWSTR __RPC_FAR *ppszGuid);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Description )( 
            IXFeedItem __RPC_FAR * This,
            /* [out] */ LPWSTR __RPC_FAR *ppszDescription);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *PubDate )( 
            IXFeedItem __RPC_FAR * This,
            /* [out] */ SYSTEMTIME __RPC_FAR *pstPubDate);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Comments )( 
            IXFeedItem __RPC_FAR * This,
            /* [out] */ LPWSTR __RPC_FAR *ppszUrl);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Author )( 
            IXFeedItem __RPC_FAR * This,
            /* [out] */ LPWSTR __RPC_FAR *ppszAuthor);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Enclosure )( 
            IXFeedItem __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsRead )( 
            IXFeedItem __RPC_FAR * This,
            /* [out] */ BOOL __RPC_FAR *pbIsRead);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetIsRead )( 
            IXFeedItem __RPC_FAR * This,
            /* [in] */ BOOL bIsRead);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LocalId )( 
            IXFeedItem __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *puiId);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Parent )( 
            IXFeedItem __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Delete )( 
            IXFeedItem __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DownloadUrl )( 
            IXFeedItem __RPC_FAR * This,
            /* [out] */ LPWSTR __RPC_FAR *ppszUrl);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LastDownloadTime )( 
            IXFeedItem __RPC_FAR * This,
            /* [out] */ SYSTEMTIME __RPC_FAR *pstLastDownloadTime);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Modified )( 
            IXFeedItem __RPC_FAR * This,
            /* [out] */ SYSTEMTIME __RPC_FAR *pstModifiedTime);
        
        END_INTERFACE
    } IXFeedItemVtbl;

    interface IXFeedItem
    {
        CONST_VTBL struct IXFeedItemVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXFeedItem_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IXFeedItem_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IXFeedItem_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IXFeedItem_Xml(This,fxif,pps)	\
    (This)->lpVtbl -> Xml(This,fxif,pps)

#define IXFeedItem_Title(This,ppszTitle)	\
    (This)->lpVtbl -> Title(This,ppszTitle)

#define IXFeedItem_Link(This,ppszUrl)	\
    (This)->lpVtbl -> Link(This,ppszUrl)

#define IXFeedItem_Guid(This,ppszGuid)	\
    (This)->lpVtbl -> Guid(This,ppszGuid)

#define IXFeedItem_Description(This,ppszDescription)	\
    (This)->lpVtbl -> Description(This,ppszDescription)

#define IXFeedItem_PubDate(This,pstPubDate)	\
    (This)->lpVtbl -> PubDate(This,pstPubDate)

#define IXFeedItem_Comments(This,ppszUrl)	\
    (This)->lpVtbl -> Comments(This,ppszUrl)

#define IXFeedItem_Author(This,ppszAuthor)	\
    (This)->lpVtbl -> Author(This,ppszAuthor)

#define IXFeedItem_Enclosure(This,riid,ppv)	\
    (This)->lpVtbl -> Enclosure(This,riid,ppv)

#define IXFeedItem_IsRead(This,pbIsRead)	\
    (This)->lpVtbl -> IsRead(This,pbIsRead)

#define IXFeedItem_SetIsRead(This,bIsRead)	\
    (This)->lpVtbl -> SetIsRead(This,bIsRead)

#define IXFeedItem_LocalId(This,puiId)	\
    (This)->lpVtbl -> LocalId(This,puiId)

#define IXFeedItem_Parent(This,riid,ppv)	\
    (This)->lpVtbl -> Parent(This,riid,ppv)

#define IXFeedItem_Delete(This)	\
    (This)->lpVtbl -> Delete(This)

#define IXFeedItem_DownloadUrl(This,ppszUrl)	\
    (This)->lpVtbl -> DownloadUrl(This,ppszUrl)

#define IXFeedItem_LastDownloadTime(This,pstLastDownloadTime)	\
    (This)->lpVtbl -> LastDownloadTime(This,pstLastDownloadTime)

#define IXFeedItem_Modified(This,pstModifiedTime)	\
    (This)->lpVtbl -> Modified(This,pstModifiedTime)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IXFeedItem_Xml_Proxy( 
    IXFeedItem __RPC_FAR * This,
    /* [in] */ FEEDS_XML_INCLUDE_FLAGS fxif,
    /* [out] */ IStream __RPC_FAR *__RPC_FAR *pps);


void __RPC_STUB IXFeedItem_Xml_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedItem_Title_Proxy( 
    IXFeedItem __RPC_FAR * This,
    /* [out] */ LPWSTR __RPC_FAR *ppszTitle);


void __RPC_STUB IXFeedItem_Title_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedItem_Link_Proxy( 
    IXFeedItem __RPC_FAR * This,
    /* [out] */ LPWSTR __RPC_FAR *ppszUrl);


void __RPC_STUB IXFeedItem_Link_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedItem_Guid_Proxy( 
    IXFeedItem __RPC_FAR * This,
    /* [out] */ LPWSTR __RPC_FAR *ppszGuid);


void __RPC_STUB IXFeedItem_Guid_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedItem_Description_Proxy( 
    IXFeedItem __RPC_FAR * This,
    /* [out] */ LPWSTR __RPC_FAR *ppszDescription);


void __RPC_STUB IXFeedItem_Description_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedItem_PubDate_Proxy( 
    IXFeedItem __RPC_FAR * This,
    /* [out] */ SYSTEMTIME __RPC_FAR *pstPubDate);


void __RPC_STUB IXFeedItem_PubDate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedItem_Comments_Proxy( 
    IXFeedItem __RPC_FAR * This,
    /* [out] */ LPWSTR __RPC_FAR *ppszUrl);


void __RPC_STUB IXFeedItem_Comments_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedItem_Author_Proxy( 
    IXFeedItem __RPC_FAR * This,
    /* [out] */ LPWSTR __RPC_FAR *ppszAuthor);


void __RPC_STUB IXFeedItem_Author_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedItem_Enclosure_Proxy( 
    IXFeedItem __RPC_FAR * This,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IXFeedItem_Enclosure_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedItem_IsRead_Proxy( 
    IXFeedItem __RPC_FAR * This,
    /* [out] */ BOOL __RPC_FAR *pbIsRead);


void __RPC_STUB IXFeedItem_IsRead_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedItem_SetIsRead_Proxy( 
    IXFeedItem __RPC_FAR * This,
    /* [in] */ BOOL bIsRead);


void __RPC_STUB IXFeedItem_SetIsRead_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedItem_LocalId_Proxy( 
    IXFeedItem __RPC_FAR * This,
    /* [out] */ UINT __RPC_FAR *puiId);


void __RPC_STUB IXFeedItem_LocalId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedItem_Parent_Proxy( 
    IXFeedItem __RPC_FAR * This,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IXFeedItem_Parent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedItem_Delete_Proxy( 
    IXFeedItem __RPC_FAR * This);


void __RPC_STUB IXFeedItem_Delete_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedItem_DownloadUrl_Proxy( 
    IXFeedItem __RPC_FAR * This,
    /* [out] */ LPWSTR __RPC_FAR *ppszUrl);


void __RPC_STUB IXFeedItem_DownloadUrl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedItem_LastDownloadTime_Proxy( 
    IXFeedItem __RPC_FAR * This,
    /* [out] */ SYSTEMTIME __RPC_FAR *pstLastDownloadTime);


void __RPC_STUB IXFeedItem_LastDownloadTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedItem_Modified_Proxy( 
    IXFeedItem __RPC_FAR * This,
    /* [out] */ SYSTEMTIME __RPC_FAR *pstModifiedTime);


void __RPC_STUB IXFeedItem_Modified_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IXFeedItem_INTERFACE_DEFINED__ */


#ifndef __IXFeedEnclosure_INTERFACE_DEFINED__
#define __IXFeedEnclosure_INTERFACE_DEFINED__

/* interface IXFeedEnclosure */
/* [object][uuid] */ 


EXTERN_C const IID IID_IXFeedEnclosure;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BFBFB953-644F-4792-B69C-DFACA4CBF89A")
    IXFeedEnclosure : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Url( 
            /* [out] */ LPWSTR __RPC_FAR *ppszUrl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Type( 
            /* [out] */ LPWSTR __RPC_FAR *ppszMimeType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Length( 
            /* [out] */ UINT __RPC_FAR *puiLength) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AsyncDownload( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CancelAsyncDownload( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DownloadStatus( 
            /* [out] */ FEEDS_DOWNLOAD_STATUS __RPC_FAR *pfds) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LastDownloadError( 
            /* [out] */ FEEDS_DOWNLOAD_ERROR __RPC_FAR *pfde) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LocalPath( 
            /* [out] */ LPWSTR __RPC_FAR *ppszPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Parent( 
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DownloadUrl( 
            /* [out] */ LPWSTR __RPC_FAR *ppszUrl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DownloadMimeType( 
            /* [out] */ LPWSTR __RPC_FAR *ppszMimeType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveFile( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFile( 
            /* [in] */ LPCWSTR pszDownloadUrl,
            /* [in] */ LPCWSTR pszDownloadFilePath,
            /* [in] */ LPCWSTR pszDownloadMimeType,
            /* [in] */ LPCWSTR pszEnclosureFilename) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IXFeedEnclosureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IXFeedEnclosure __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IXFeedEnclosure __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IXFeedEnclosure __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Url )( 
            IXFeedEnclosure __RPC_FAR * This,
            /* [out] */ LPWSTR __RPC_FAR *ppszUrl);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Type )( 
            IXFeedEnclosure __RPC_FAR * This,
            /* [out] */ LPWSTR __RPC_FAR *ppszMimeType);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Length )( 
            IXFeedEnclosure __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *puiLength);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AsyncDownload )( 
            IXFeedEnclosure __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CancelAsyncDownload )( 
            IXFeedEnclosure __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DownloadStatus )( 
            IXFeedEnclosure __RPC_FAR * This,
            /* [out] */ FEEDS_DOWNLOAD_STATUS __RPC_FAR *pfds);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LastDownloadError )( 
            IXFeedEnclosure __RPC_FAR * This,
            /* [out] */ FEEDS_DOWNLOAD_ERROR __RPC_FAR *pfde);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LocalPath )( 
            IXFeedEnclosure __RPC_FAR * This,
            /* [out] */ LPWSTR __RPC_FAR *ppszPath);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Parent )( 
            IXFeedEnclosure __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DownloadUrl )( 
            IXFeedEnclosure __RPC_FAR * This,
            /* [out] */ LPWSTR __RPC_FAR *ppszUrl);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DownloadMimeType )( 
            IXFeedEnclosure __RPC_FAR * This,
            /* [out] */ LPWSTR __RPC_FAR *ppszMimeType);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RemoveFile )( 
            IXFeedEnclosure __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetFile )( 
            IXFeedEnclosure __RPC_FAR * This,
            /* [in] */ LPCWSTR pszDownloadUrl,
            /* [in] */ LPCWSTR pszDownloadFilePath,
            /* [in] */ LPCWSTR pszDownloadMimeType,
            /* [in] */ LPCWSTR pszEnclosureFilename);
        
        END_INTERFACE
    } IXFeedEnclosureVtbl;

    interface IXFeedEnclosure
    {
        CONST_VTBL struct IXFeedEnclosureVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXFeedEnclosure_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IXFeedEnclosure_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IXFeedEnclosure_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IXFeedEnclosure_Url(This,ppszUrl)	\
    (This)->lpVtbl -> Url(This,ppszUrl)

#define IXFeedEnclosure_Type(This,ppszMimeType)	\
    (This)->lpVtbl -> Type(This,ppszMimeType)

#define IXFeedEnclosure_Length(This,puiLength)	\
    (This)->lpVtbl -> Length(This,puiLength)

#define IXFeedEnclosure_AsyncDownload(This)	\
    (This)->lpVtbl -> AsyncDownload(This)

#define IXFeedEnclosure_CancelAsyncDownload(This)	\
    (This)->lpVtbl -> CancelAsyncDownload(This)

#define IXFeedEnclosure_DownloadStatus(This,pfds)	\
    (This)->lpVtbl -> DownloadStatus(This,pfds)

#define IXFeedEnclosure_LastDownloadError(This,pfde)	\
    (This)->lpVtbl -> LastDownloadError(This,pfde)

#define IXFeedEnclosure_LocalPath(This,ppszPath)	\
    (This)->lpVtbl -> LocalPath(This,ppszPath)

#define IXFeedEnclosure_Parent(This,riid,ppv)	\
    (This)->lpVtbl -> Parent(This,riid,ppv)

#define IXFeedEnclosure_DownloadUrl(This,ppszUrl)	\
    (This)->lpVtbl -> DownloadUrl(This,ppszUrl)

#define IXFeedEnclosure_DownloadMimeType(This,ppszMimeType)	\
    (This)->lpVtbl -> DownloadMimeType(This,ppszMimeType)

#define IXFeedEnclosure_RemoveFile(This)	\
    (This)->lpVtbl -> RemoveFile(This)

#define IXFeedEnclosure_SetFile(This,pszDownloadUrl,pszDownloadFilePath,pszDownloadMimeType,pszEnclosureFilename)	\
    (This)->lpVtbl -> SetFile(This,pszDownloadUrl,pszDownloadFilePath,pszDownloadMimeType,pszEnclosureFilename)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IXFeedEnclosure_Url_Proxy( 
    IXFeedEnclosure __RPC_FAR * This,
    /* [out] */ LPWSTR __RPC_FAR *ppszUrl);


void __RPC_STUB IXFeedEnclosure_Url_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedEnclosure_Type_Proxy( 
    IXFeedEnclosure __RPC_FAR * This,
    /* [out] */ LPWSTR __RPC_FAR *ppszMimeType);


void __RPC_STUB IXFeedEnclosure_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedEnclosure_Length_Proxy( 
    IXFeedEnclosure __RPC_FAR * This,
    /* [out] */ UINT __RPC_FAR *puiLength);


void __RPC_STUB IXFeedEnclosure_Length_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedEnclosure_AsyncDownload_Proxy( 
    IXFeedEnclosure __RPC_FAR * This);


void __RPC_STUB IXFeedEnclosure_AsyncDownload_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedEnclosure_CancelAsyncDownload_Proxy( 
    IXFeedEnclosure __RPC_FAR * This);


void __RPC_STUB IXFeedEnclosure_CancelAsyncDownload_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedEnclosure_DownloadStatus_Proxy( 
    IXFeedEnclosure __RPC_FAR * This,
    /* [out] */ FEEDS_DOWNLOAD_STATUS __RPC_FAR *pfds);


void __RPC_STUB IXFeedEnclosure_DownloadStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedEnclosure_LastDownloadError_Proxy( 
    IXFeedEnclosure __RPC_FAR * This,
    /* [out] */ FEEDS_DOWNLOAD_ERROR __RPC_FAR *pfde);


void __RPC_STUB IXFeedEnclosure_LastDownloadError_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedEnclosure_LocalPath_Proxy( 
    IXFeedEnclosure __RPC_FAR * This,
    /* [out] */ LPWSTR __RPC_FAR *ppszPath);


void __RPC_STUB IXFeedEnclosure_LocalPath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedEnclosure_Parent_Proxy( 
    IXFeedEnclosure __RPC_FAR * This,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IXFeedEnclosure_Parent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedEnclosure_DownloadUrl_Proxy( 
    IXFeedEnclosure __RPC_FAR * This,
    /* [out] */ LPWSTR __RPC_FAR *ppszUrl);


void __RPC_STUB IXFeedEnclosure_DownloadUrl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedEnclosure_DownloadMimeType_Proxy( 
    IXFeedEnclosure __RPC_FAR * This,
    /* [out] */ LPWSTR __RPC_FAR *ppszMimeType);


void __RPC_STUB IXFeedEnclosure_DownloadMimeType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedEnclosure_RemoveFile_Proxy( 
    IXFeedEnclosure __RPC_FAR * This);


void __RPC_STUB IXFeedEnclosure_RemoveFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IXFeedEnclosure_SetFile_Proxy( 
    IXFeedEnclosure __RPC_FAR * This,
    /* [in] */ LPCWSTR pszDownloadUrl,
    /* [in] */ LPCWSTR pszDownloadFilePath,
    /* [in] */ LPCWSTR pszDownloadMimeType,
    /* [in] */ LPCWSTR pszEnclosureFilename);


void __RPC_STUB IXFeedEnclosure_SetFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IXFeedEnclosure_INTERFACE_DEFINED__ */



#ifndef __Feeds_LIBRARY_DEFINED__
#define __Feeds_LIBRARY_DEFINED__

/* library Feeds */
/* [custom][version][lcid][helpstring][uuid] */ 


EXTERN_C const IID LIBID_Feeds;

#ifndef __IFeedsManager_INTERFACE_DEFINED__
#define __IFeedsManager_INTERFACE_DEFINED__

/* interface IFeedsManager */
/* [object][oleautomation][dual][uuid] */ 


EXTERN_C const IID IID_IFeedsManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a74029cc-1f1a-4906-88f0-810638d86591")
    IFeedsManager : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RootFolder( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsSubscribed( 
            /* [in] */ BSTR feedUrl,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *subscribed) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExistsFeed( 
            /* [in] */ BSTR feedPath,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *exists) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFeed( 
            /* [in] */ BSTR feedPath,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFeedByUrl( 
            /* [in] */ BSTR feedUrl,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExistsFolder( 
            /* [in] */ BSTR folderPath,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *exists) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFolder( 
            /* [in] */ BSTR folderPath,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteFeed( 
            /* [in] */ BSTR feedPath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteFolder( 
            /* [in] */ BSTR folderPath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BackgroundSync( 
            /* [in] */ FEEDS_BACKGROUNDSYNC_ACTION action) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_BackgroundSyncStatus( 
            /* [retval][out] */ FEEDS_BACKGROUNDSYNC_STATUS __RPC_FAR *status) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DefaultInterval( 
            /* [retval][out] */ LONG __RPC_FAR *minutes) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DefaultInterval( 
            /* [in] */ LONG minutes) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AsyncSyncAll( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Normalize( 
            /* [in] */ BSTR feedXmlIn,
            /* [retval][out] */ BSTR __RPC_FAR *feedXmlOut) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ItemCountLimit( 
            /* [retval][out] */ LONG __RPC_FAR *itemCountLimit) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFeedsManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IFeedsManager __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IFeedsManager __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IFeedsManager __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IFeedsManager __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IFeedsManager __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IFeedsManager __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IFeedsManager __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_RootFolder )( 
            IFeedsManager __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsSubscribed )( 
            IFeedsManager __RPC_FAR * This,
            /* [in] */ BSTR feedUrl,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *subscribed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ExistsFeed )( 
            IFeedsManager __RPC_FAR * This,
            /* [in] */ BSTR feedPath,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *exists);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetFeed )( 
            IFeedsManager __RPC_FAR * This,
            /* [in] */ BSTR feedPath,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetFeedByUrl )( 
            IFeedsManager __RPC_FAR * This,
            /* [in] */ BSTR feedUrl,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ExistsFolder )( 
            IFeedsManager __RPC_FAR * This,
            /* [in] */ BSTR folderPath,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *exists);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetFolder )( 
            IFeedsManager __RPC_FAR * This,
            /* [in] */ BSTR folderPath,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DeleteFeed )( 
            IFeedsManager __RPC_FAR * This,
            /* [in] */ BSTR feedPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DeleteFolder )( 
            IFeedsManager __RPC_FAR * This,
            /* [in] */ BSTR folderPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *BackgroundSync )( 
            IFeedsManager __RPC_FAR * This,
            /* [in] */ FEEDS_BACKGROUNDSYNC_ACTION action);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_BackgroundSyncStatus )( 
            IFeedsManager __RPC_FAR * This,
            /* [retval][out] */ FEEDS_BACKGROUNDSYNC_STATUS __RPC_FAR *status);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_DefaultInterval )( 
            IFeedsManager __RPC_FAR * This,
            /* [retval][out] */ LONG __RPC_FAR *minutes);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_DefaultInterval )( 
            IFeedsManager __RPC_FAR * This,
            /* [in] */ LONG minutes);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AsyncSyncAll )( 
            IFeedsManager __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Normalize )( 
            IFeedsManager __RPC_FAR * This,
            /* [in] */ BSTR feedXmlIn,
            /* [retval][out] */ BSTR __RPC_FAR *feedXmlOut);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ItemCountLimit )( 
            IFeedsManager __RPC_FAR * This,
            /* [retval][out] */ LONG __RPC_FAR *itemCountLimit);
        
        END_INTERFACE
    } IFeedsManagerVtbl;

    interface IFeedsManager
    {
        CONST_VTBL struct IFeedsManagerVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFeedsManager_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IFeedsManager_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IFeedsManager_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IFeedsManager_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IFeedsManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IFeedsManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IFeedsManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IFeedsManager_get_RootFolder(This,disp)	\
    (This)->lpVtbl -> get_RootFolder(This,disp)

#define IFeedsManager_IsSubscribed(This,feedUrl,subscribed)	\
    (This)->lpVtbl -> IsSubscribed(This,feedUrl,subscribed)

#define IFeedsManager_ExistsFeed(This,feedPath,exists)	\
    (This)->lpVtbl -> ExistsFeed(This,feedPath,exists)

#define IFeedsManager_GetFeed(This,feedPath,disp)	\
    (This)->lpVtbl -> GetFeed(This,feedPath,disp)

#define IFeedsManager_GetFeedByUrl(This,feedUrl,disp)	\
    (This)->lpVtbl -> GetFeedByUrl(This,feedUrl,disp)

#define IFeedsManager_ExistsFolder(This,folderPath,exists)	\
    (This)->lpVtbl -> ExistsFolder(This,folderPath,exists)

#define IFeedsManager_GetFolder(This,folderPath,disp)	\
    (This)->lpVtbl -> GetFolder(This,folderPath,disp)

#define IFeedsManager_DeleteFeed(This,feedPath)	\
    (This)->lpVtbl -> DeleteFeed(This,feedPath)

#define IFeedsManager_DeleteFolder(This,folderPath)	\
    (This)->lpVtbl -> DeleteFolder(This,folderPath)

#define IFeedsManager_BackgroundSync(This,action)	\
    (This)->lpVtbl -> BackgroundSync(This,action)

#define IFeedsManager_get_BackgroundSyncStatus(This,status)	\
    (This)->lpVtbl -> get_BackgroundSyncStatus(This,status)

#define IFeedsManager_get_DefaultInterval(This,minutes)	\
    (This)->lpVtbl -> get_DefaultInterval(This,minutes)

#define IFeedsManager_put_DefaultInterval(This,minutes)	\
    (This)->lpVtbl -> put_DefaultInterval(This,minutes)

#define IFeedsManager_AsyncSyncAll(This)	\
    (This)->lpVtbl -> AsyncSyncAll(This)

#define IFeedsManager_Normalize(This,feedXmlIn,feedXmlOut)	\
    (This)->lpVtbl -> Normalize(This,feedXmlIn,feedXmlOut)

#define IFeedsManager_get_ItemCountLimit(This,itemCountLimit)	\
    (This)->lpVtbl -> get_ItemCountLimit(This,itemCountLimit)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedsManager_get_RootFolder_Proxy( 
    IFeedsManager __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);


void __RPC_STUB IFeedsManager_get_RootFolder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedsManager_IsSubscribed_Proxy( 
    IFeedsManager __RPC_FAR * This,
    /* [in] */ BSTR feedUrl,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *subscribed);


void __RPC_STUB IFeedsManager_IsSubscribed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedsManager_ExistsFeed_Proxy( 
    IFeedsManager __RPC_FAR * This,
    /* [in] */ BSTR feedPath,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *exists);


void __RPC_STUB IFeedsManager_ExistsFeed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedsManager_GetFeed_Proxy( 
    IFeedsManager __RPC_FAR * This,
    /* [in] */ BSTR feedPath,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);


void __RPC_STUB IFeedsManager_GetFeed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedsManager_GetFeedByUrl_Proxy( 
    IFeedsManager __RPC_FAR * This,
    /* [in] */ BSTR feedUrl,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);


void __RPC_STUB IFeedsManager_GetFeedByUrl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedsManager_ExistsFolder_Proxy( 
    IFeedsManager __RPC_FAR * This,
    /* [in] */ BSTR folderPath,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *exists);


void __RPC_STUB IFeedsManager_ExistsFolder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedsManager_GetFolder_Proxy( 
    IFeedsManager __RPC_FAR * This,
    /* [in] */ BSTR folderPath,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);


void __RPC_STUB IFeedsManager_GetFolder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedsManager_DeleteFeed_Proxy( 
    IFeedsManager __RPC_FAR * This,
    /* [in] */ BSTR feedPath);


void __RPC_STUB IFeedsManager_DeleteFeed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedsManager_DeleteFolder_Proxy( 
    IFeedsManager __RPC_FAR * This,
    /* [in] */ BSTR folderPath);


void __RPC_STUB IFeedsManager_DeleteFolder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedsManager_BackgroundSync_Proxy( 
    IFeedsManager __RPC_FAR * This,
    /* [in] */ FEEDS_BACKGROUNDSYNC_ACTION action);


void __RPC_STUB IFeedsManager_BackgroundSync_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedsManager_get_BackgroundSyncStatus_Proxy( 
    IFeedsManager __RPC_FAR * This,
    /* [retval][out] */ FEEDS_BACKGROUNDSYNC_STATUS __RPC_FAR *status);


void __RPC_STUB IFeedsManager_get_BackgroundSyncStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedsManager_get_DefaultInterval_Proxy( 
    IFeedsManager __RPC_FAR * This,
    /* [retval][out] */ LONG __RPC_FAR *minutes);


void __RPC_STUB IFeedsManager_get_DefaultInterval_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IFeedsManager_put_DefaultInterval_Proxy( 
    IFeedsManager __RPC_FAR * This,
    /* [in] */ LONG minutes);


void __RPC_STUB IFeedsManager_put_DefaultInterval_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedsManager_AsyncSyncAll_Proxy( 
    IFeedsManager __RPC_FAR * This);


void __RPC_STUB IFeedsManager_AsyncSyncAll_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedsManager_Normalize_Proxy( 
    IFeedsManager __RPC_FAR * This,
    /* [in] */ BSTR feedXmlIn,
    /* [retval][out] */ BSTR __RPC_FAR *feedXmlOut);


void __RPC_STUB IFeedsManager_Normalize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedsManager_get_ItemCountLimit_Proxy( 
    IFeedsManager __RPC_FAR * This,
    /* [retval][out] */ LONG __RPC_FAR *itemCountLimit);


void __RPC_STUB IFeedsManager_get_ItemCountLimit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IFeedsManager_INTERFACE_DEFINED__ */


#ifndef __IFeedsEnum_INTERFACE_DEFINED__
#define __IFeedsEnum_INTERFACE_DEFINED__

/* interface IFeedsEnum */
/* [object][oleautomation][dual][uuid] */ 


EXTERN_C const IID IID_IFeedsEnum;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e3cd0028-2eed-4c60-8fae-a3225309a836")
    IFeedsEnum : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG __RPC_FAR *count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ LONG index,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp) = 0;
        
        virtual /* [restricted][hidden][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IEnumVARIANT __RPC_FAR *__RPC_FAR *enumVar) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFeedsEnumVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IFeedsEnum __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IFeedsEnum __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IFeedsEnum __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IFeedsEnum __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IFeedsEnum __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IFeedsEnum __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IFeedsEnum __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Count )( 
            IFeedsEnum __RPC_FAR * This,
            /* [retval][out] */ LONG __RPC_FAR *count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Item )( 
            IFeedsEnum __RPC_FAR * This,
            /* [in] */ LONG index,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);
        
        /* [restricted][hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get__NewEnum )( 
            IFeedsEnum __RPC_FAR * This,
            /* [retval][out] */ IEnumVARIANT __RPC_FAR *__RPC_FAR *enumVar);
        
        END_INTERFACE
    } IFeedsEnumVtbl;

    interface IFeedsEnum
    {
        CONST_VTBL struct IFeedsEnumVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFeedsEnum_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IFeedsEnum_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IFeedsEnum_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IFeedsEnum_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IFeedsEnum_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IFeedsEnum_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IFeedsEnum_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IFeedsEnum_get_Count(This,count)	\
    (This)->lpVtbl -> get_Count(This,count)

#define IFeedsEnum_Item(This,index,disp)	\
    (This)->lpVtbl -> Item(This,index,disp)

#define IFeedsEnum_get__NewEnum(This,enumVar)	\
    (This)->lpVtbl -> get__NewEnum(This,enumVar)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedsEnum_get_Count_Proxy( 
    IFeedsEnum __RPC_FAR * This,
    /* [retval][out] */ LONG __RPC_FAR *count);


void __RPC_STUB IFeedsEnum_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedsEnum_Item_Proxy( 
    IFeedsEnum __RPC_FAR * This,
    /* [in] */ LONG index,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);


void __RPC_STUB IFeedsEnum_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [restricted][hidden][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedsEnum_get__NewEnum_Proxy( 
    IFeedsEnum __RPC_FAR * This,
    /* [retval][out] */ IEnumVARIANT __RPC_FAR *__RPC_FAR *enumVar);


void __RPC_STUB IFeedsEnum_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IFeedsEnum_INTERFACE_DEFINED__ */


#ifndef __IFeedFolder_INTERFACE_DEFINED__
#define __IFeedFolder_INTERFACE_DEFINED__

/* interface IFeedFolder */
/* [object][oleautomation][dual][uuid] */ 


EXTERN_C const IID IID_IFeedFolder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("81f04ad1-4194-4d7d-86d6-11813cec163c")
    IFeedFolder : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Feeds( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Subfolders( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateFeed( 
            /* [in] */ BSTR feedName,
            /* [in] */ BSTR feedUrl,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateSubfolder( 
            /* [in] */ BSTR folderName,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExistsFeed( 
            /* [in] */ BSTR feedName,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *exists) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFeed( 
            /* [in] */ BSTR feedName,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExistsSubfolder( 
            /* [in] */ BSTR folderName,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *exists) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSubfolder( 
            /* [in] */ BSTR folderName,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Delete( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR __RPC_FAR *folderName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Rename( 
            /* [in] */ BSTR folderName) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Path( 
            /* [retval][out] */ BSTR __RPC_FAR *folderPath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Move( 
            /* [in] */ BSTR newParentPath) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsRoot( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *isRoot) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_TotalUnreadItemCount( 
            /* [retval][out] */ LONG __RPC_FAR *count) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_TotalItemCount( 
            /* [retval][out] */ LONG __RPC_FAR *count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetWatcher( 
            /* [in] */ FEEDS_EVENTS_SCOPE scope,
            /* [in] */ FEEDS_EVENTS_MASK mask,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFeedFolderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IFeedFolder __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IFeedFolder __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IFeedFolder __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IFeedFolder __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IFeedFolder __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IFeedFolder __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IFeedFolder __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Feeds )( 
            IFeedFolder __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Subfolders )( 
            IFeedFolder __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateFeed )( 
            IFeedFolder __RPC_FAR * This,
            /* [in] */ BSTR feedName,
            /* [in] */ BSTR feedUrl,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateSubfolder )( 
            IFeedFolder __RPC_FAR * This,
            /* [in] */ BSTR folderName,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ExistsFeed )( 
            IFeedFolder __RPC_FAR * This,
            /* [in] */ BSTR feedName,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *exists);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetFeed )( 
            IFeedFolder __RPC_FAR * This,
            /* [in] */ BSTR feedName,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ExistsSubfolder )( 
            IFeedFolder __RPC_FAR * This,
            /* [in] */ BSTR folderName,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *exists);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetSubfolder )( 
            IFeedFolder __RPC_FAR * This,
            /* [in] */ BSTR folderName,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Delete )( 
            IFeedFolder __RPC_FAR * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Name )( 
            IFeedFolder __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *folderName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Rename )( 
            IFeedFolder __RPC_FAR * This,
            /* [in] */ BSTR folderName);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Path )( 
            IFeedFolder __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *folderPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Move )( 
            IFeedFolder __RPC_FAR * This,
            /* [in] */ BSTR newParentPath);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Parent )( 
            IFeedFolder __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IsRoot )( 
            IFeedFolder __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *isRoot);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_TotalUnreadItemCount )( 
            IFeedFolder __RPC_FAR * This,
            /* [retval][out] */ LONG __RPC_FAR *count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_TotalItemCount )( 
            IFeedFolder __RPC_FAR * This,
            /* [retval][out] */ LONG __RPC_FAR *count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetWatcher )( 
            IFeedFolder __RPC_FAR * This,
            /* [in] */ FEEDS_EVENTS_SCOPE scope,
            /* [in] */ FEEDS_EVENTS_MASK mask,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);
        
        END_INTERFACE
    } IFeedFolderVtbl;

    interface IFeedFolder
    {
        CONST_VTBL struct IFeedFolderVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFeedFolder_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IFeedFolder_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IFeedFolder_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IFeedFolder_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IFeedFolder_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IFeedFolder_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IFeedFolder_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IFeedFolder_get_Feeds(This,disp)	\
    (This)->lpVtbl -> get_Feeds(This,disp)

#define IFeedFolder_get_Subfolders(This,disp)	\
    (This)->lpVtbl -> get_Subfolders(This,disp)

#define IFeedFolder_CreateFeed(This,feedName,feedUrl,disp)	\
    (This)->lpVtbl -> CreateFeed(This,feedName,feedUrl,disp)

#define IFeedFolder_CreateSubfolder(This,folderName,disp)	\
    (This)->lpVtbl -> CreateSubfolder(This,folderName,disp)

#define IFeedFolder_ExistsFeed(This,feedName,exists)	\
    (This)->lpVtbl -> ExistsFeed(This,feedName,exists)

#define IFeedFolder_GetFeed(This,feedName,disp)	\
    (This)->lpVtbl -> GetFeed(This,feedName,disp)

#define IFeedFolder_ExistsSubfolder(This,folderName,exists)	\
    (This)->lpVtbl -> ExistsSubfolder(This,folderName,exists)

#define IFeedFolder_GetSubfolder(This,folderName,disp)	\
    (This)->lpVtbl -> GetSubfolder(This,folderName,disp)

#define IFeedFolder_Delete(This)	\
    (This)->lpVtbl -> Delete(This)

#define IFeedFolder_get_Name(This,folderName)	\
    (This)->lpVtbl -> get_Name(This,folderName)

#define IFeedFolder_Rename(This,folderName)	\
    (This)->lpVtbl -> Rename(This,folderName)

#define IFeedFolder_get_Path(This,folderPath)	\
    (This)->lpVtbl -> get_Path(This,folderPath)

#define IFeedFolder_Move(This,newParentPath)	\
    (This)->lpVtbl -> Move(This,newParentPath)

#define IFeedFolder_get_Parent(This,disp)	\
    (This)->lpVtbl -> get_Parent(This,disp)

#define IFeedFolder_get_IsRoot(This,isRoot)	\
    (This)->lpVtbl -> get_IsRoot(This,isRoot)

#define IFeedFolder_get_TotalUnreadItemCount(This,count)	\
    (This)->lpVtbl -> get_TotalUnreadItemCount(This,count)

#define IFeedFolder_get_TotalItemCount(This,count)	\
    (This)->lpVtbl -> get_TotalItemCount(This,count)

#define IFeedFolder_GetWatcher(This,scope,mask,disp)	\
    (This)->lpVtbl -> GetWatcher(This,scope,mask,disp)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedFolder_get_Feeds_Proxy( 
    IFeedFolder __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);


void __RPC_STUB IFeedFolder_get_Feeds_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedFolder_get_Subfolders_Proxy( 
    IFeedFolder __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);


void __RPC_STUB IFeedFolder_get_Subfolders_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedFolder_CreateFeed_Proxy( 
    IFeedFolder __RPC_FAR * This,
    /* [in] */ BSTR feedName,
    /* [in] */ BSTR feedUrl,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);


void __RPC_STUB IFeedFolder_CreateFeed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedFolder_CreateSubfolder_Proxy( 
    IFeedFolder __RPC_FAR * This,
    /* [in] */ BSTR folderName,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);


void __RPC_STUB IFeedFolder_CreateSubfolder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedFolder_ExistsFeed_Proxy( 
    IFeedFolder __RPC_FAR * This,
    /* [in] */ BSTR feedName,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *exists);


void __RPC_STUB IFeedFolder_ExistsFeed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedFolder_GetFeed_Proxy( 
    IFeedFolder __RPC_FAR * This,
    /* [in] */ BSTR feedName,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);


void __RPC_STUB IFeedFolder_GetFeed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedFolder_ExistsSubfolder_Proxy( 
    IFeedFolder __RPC_FAR * This,
    /* [in] */ BSTR folderName,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *exists);


void __RPC_STUB IFeedFolder_ExistsSubfolder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedFolder_GetSubfolder_Proxy( 
    IFeedFolder __RPC_FAR * This,
    /* [in] */ BSTR folderName,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);


void __RPC_STUB IFeedFolder_GetSubfolder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedFolder_Delete_Proxy( 
    IFeedFolder __RPC_FAR * This);


void __RPC_STUB IFeedFolder_Delete_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedFolder_get_Name_Proxy( 
    IFeedFolder __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *folderName);


void __RPC_STUB IFeedFolder_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedFolder_Rename_Proxy( 
    IFeedFolder __RPC_FAR * This,
    /* [in] */ BSTR folderName);


void __RPC_STUB IFeedFolder_Rename_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedFolder_get_Path_Proxy( 
    IFeedFolder __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *folderPath);


void __RPC_STUB IFeedFolder_get_Path_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedFolder_Move_Proxy( 
    IFeedFolder __RPC_FAR * This,
    /* [in] */ BSTR newParentPath);


void __RPC_STUB IFeedFolder_Move_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedFolder_get_Parent_Proxy( 
    IFeedFolder __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);


void __RPC_STUB IFeedFolder_get_Parent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedFolder_get_IsRoot_Proxy( 
    IFeedFolder __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *isRoot);


void __RPC_STUB IFeedFolder_get_IsRoot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedFolder_get_TotalUnreadItemCount_Proxy( 
    IFeedFolder __RPC_FAR * This,
    /* [retval][out] */ LONG __RPC_FAR *count);


void __RPC_STUB IFeedFolder_get_TotalUnreadItemCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedFolder_get_TotalItemCount_Proxy( 
    IFeedFolder __RPC_FAR * This,
    /* [retval][out] */ LONG __RPC_FAR *count);


void __RPC_STUB IFeedFolder_get_TotalItemCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedFolder_GetWatcher_Proxy( 
    IFeedFolder __RPC_FAR * This,
    /* [in] */ FEEDS_EVENTS_SCOPE scope,
    /* [in] */ FEEDS_EVENTS_MASK mask,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);


void __RPC_STUB IFeedFolder_GetWatcher_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IFeedFolder_INTERFACE_DEFINED__ */


#ifndef __IFeedFolderEvents_INTERFACE_DEFINED__
#define __IFeedFolderEvents_INTERFACE_DEFINED__

/* interface IFeedFolderEvents */
/* [object][oleautomation][dual][uuid] */ 


EXTERN_C const IID IID_IFeedFolderEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("20a59fa6-a844-4630-9e98-175f70b4d55b")
    IFeedFolderEvents : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Error( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FolderAdded( 
            /* [in] */ const BSTR path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FolderDeleted( 
            /* [in] */ const BSTR path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FolderRenamed( 
            /* [in] */ const BSTR path,
            /* [in] */ const BSTR oldPath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FolderMovedFrom( 
            /* [in] */ const BSTR path,
            /* [in] */ const BSTR oldPath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FolderMovedTo( 
            /* [in] */ const BSTR path,
            /* [in] */ const BSTR oldPath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FolderItemCountChanged( 
            /* [in] */ const BSTR path,
            /* [in] */ LONG itemCountType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FeedAdded( 
            /* [in] */ const BSTR path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FeedDeleted( 
            /* [in] */ const BSTR path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FeedRenamed( 
            /* [in] */ const BSTR path,
            /* [in] */ const BSTR oldPath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FeedUrlChanged( 
            /* [in] */ const BSTR path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FeedMovedFrom( 
            /* [in] */ const BSTR path,
            /* [in] */ const BSTR oldPath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FeedMovedTo( 
            /* [in] */ const BSTR path,
            /* [in] */ const BSTR oldPath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FeedDownloading( 
            /* [in] */ const BSTR path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FeedDownloadCompleted( 
            /* [in] */ const BSTR path,
            /* [in] */ FEEDS_DOWNLOAD_ERROR error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FeedItemCountChanged( 
            /* [in] */ const BSTR path,
            /* [in] */ LONG itemCountType) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFeedFolderEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IFeedFolderEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IFeedFolderEvents __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IFeedFolderEvents __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IFeedFolderEvents __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IFeedFolderEvents __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IFeedFolderEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IFeedFolderEvents __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Error )( 
            IFeedFolderEvents __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FolderAdded )( 
            IFeedFolderEvents __RPC_FAR * This,
            /* [in] */ const BSTR path);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FolderDeleted )( 
            IFeedFolderEvents __RPC_FAR * This,
            /* [in] */ const BSTR path);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FolderRenamed )( 
            IFeedFolderEvents __RPC_FAR * This,
            /* [in] */ const BSTR path,
            /* [in] */ const BSTR oldPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FolderMovedFrom )( 
            IFeedFolderEvents __RPC_FAR * This,
            /* [in] */ const BSTR path,
            /* [in] */ const BSTR oldPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FolderMovedTo )( 
            IFeedFolderEvents __RPC_FAR * This,
            /* [in] */ const BSTR path,
            /* [in] */ const BSTR oldPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FolderItemCountChanged )( 
            IFeedFolderEvents __RPC_FAR * This,
            /* [in] */ const BSTR path,
            /* [in] */ LONG itemCountType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FeedAdded )( 
            IFeedFolderEvents __RPC_FAR * This,
            /* [in] */ const BSTR path);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FeedDeleted )( 
            IFeedFolderEvents __RPC_FAR * This,
            /* [in] */ const BSTR path);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FeedRenamed )( 
            IFeedFolderEvents __RPC_FAR * This,
            /* [in] */ const BSTR path,
            /* [in] */ const BSTR oldPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FeedUrlChanged )( 
            IFeedFolderEvents __RPC_FAR * This,
            /* [in] */ const BSTR path);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FeedMovedFrom )( 
            IFeedFolderEvents __RPC_FAR * This,
            /* [in] */ const BSTR path,
            /* [in] */ const BSTR oldPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FeedMovedTo )( 
            IFeedFolderEvents __RPC_FAR * This,
            /* [in] */ const BSTR path,
            /* [in] */ const BSTR oldPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FeedDownloading )( 
            IFeedFolderEvents __RPC_FAR * This,
            /* [in] */ const BSTR path);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FeedDownloadCompleted )( 
            IFeedFolderEvents __RPC_FAR * This,
            /* [in] */ const BSTR path,
            /* [in] */ FEEDS_DOWNLOAD_ERROR error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FeedItemCountChanged )( 
            IFeedFolderEvents __RPC_FAR * This,
            /* [in] */ const BSTR path,
            /* [in] */ LONG itemCountType);
        
        END_INTERFACE
    } IFeedFolderEventsVtbl;

    interface IFeedFolderEvents
    {
        CONST_VTBL struct IFeedFolderEventsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFeedFolderEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IFeedFolderEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IFeedFolderEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IFeedFolderEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IFeedFolderEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IFeedFolderEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IFeedFolderEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IFeedFolderEvents_Error(This)	\
    (This)->lpVtbl -> Error(This)

#define IFeedFolderEvents_FolderAdded(This,path)	\
    (This)->lpVtbl -> FolderAdded(This,path)

#define IFeedFolderEvents_FolderDeleted(This,path)	\
    (This)->lpVtbl -> FolderDeleted(This,path)

#define IFeedFolderEvents_FolderRenamed(This,path,oldPath)	\
    (This)->lpVtbl -> FolderRenamed(This,path,oldPath)

#define IFeedFolderEvents_FolderMovedFrom(This,path,oldPath)	\
    (This)->lpVtbl -> FolderMovedFrom(This,path,oldPath)

#define IFeedFolderEvents_FolderMovedTo(This,path,oldPath)	\
    (This)->lpVtbl -> FolderMovedTo(This,path,oldPath)

#define IFeedFolderEvents_FolderItemCountChanged(This,path,itemCountType)	\
    (This)->lpVtbl -> FolderItemCountChanged(This,path,itemCountType)

#define IFeedFolderEvents_FeedAdded(This,path)	\
    (This)->lpVtbl -> FeedAdded(This,path)

#define IFeedFolderEvents_FeedDeleted(This,path)	\
    (This)->lpVtbl -> FeedDeleted(This,path)

#define IFeedFolderEvents_FeedRenamed(This,path,oldPath)	\
    (This)->lpVtbl -> FeedRenamed(This,path,oldPath)

#define IFeedFolderEvents_FeedUrlChanged(This,path)	\
    (This)->lpVtbl -> FeedUrlChanged(This,path)

#define IFeedFolderEvents_FeedMovedFrom(This,path,oldPath)	\
    (This)->lpVtbl -> FeedMovedFrom(This,path,oldPath)

#define IFeedFolderEvents_FeedMovedTo(This,path,oldPath)	\
    (This)->lpVtbl -> FeedMovedTo(This,path,oldPath)

#define IFeedFolderEvents_FeedDownloading(This,path)	\
    (This)->lpVtbl -> FeedDownloading(This,path)

#define IFeedFolderEvents_FeedDownloadCompleted(This,path,error)	\
    (This)->lpVtbl -> FeedDownloadCompleted(This,path,error)

#define IFeedFolderEvents_FeedItemCountChanged(This,path,itemCountType)	\
    (This)->lpVtbl -> FeedItemCountChanged(This,path,itemCountType)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedFolderEvents_Error_Proxy( 
    IFeedFolderEvents __RPC_FAR * This);


void __RPC_STUB IFeedFolderEvents_Error_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedFolderEvents_FolderAdded_Proxy( 
    IFeedFolderEvents __RPC_FAR * This,
    /* [in] */ const BSTR path);


void __RPC_STUB IFeedFolderEvents_FolderAdded_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedFolderEvents_FolderDeleted_Proxy( 
    IFeedFolderEvents __RPC_FAR * This,
    /* [in] */ const BSTR path);


void __RPC_STUB IFeedFolderEvents_FolderDeleted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedFolderEvents_FolderRenamed_Proxy( 
    IFeedFolderEvents __RPC_FAR * This,
    /* [in] */ const BSTR path,
    /* [in] */ const BSTR oldPath);


void __RPC_STUB IFeedFolderEvents_FolderRenamed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedFolderEvents_FolderMovedFrom_Proxy( 
    IFeedFolderEvents __RPC_FAR * This,
    /* [in] */ const BSTR path,
    /* [in] */ const BSTR oldPath);


void __RPC_STUB IFeedFolderEvents_FolderMovedFrom_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedFolderEvents_FolderMovedTo_Proxy( 
    IFeedFolderEvents __RPC_FAR * This,
    /* [in] */ const BSTR path,
    /* [in] */ const BSTR oldPath);


void __RPC_STUB IFeedFolderEvents_FolderMovedTo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedFolderEvents_FolderItemCountChanged_Proxy( 
    IFeedFolderEvents __RPC_FAR * This,
    /* [in] */ const BSTR path,
    /* [in] */ LONG itemCountType);


void __RPC_STUB IFeedFolderEvents_FolderItemCountChanged_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedFolderEvents_FeedAdded_Proxy( 
    IFeedFolderEvents __RPC_FAR * This,
    /* [in] */ const BSTR path);


void __RPC_STUB IFeedFolderEvents_FeedAdded_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedFolderEvents_FeedDeleted_Proxy( 
    IFeedFolderEvents __RPC_FAR * This,
    /* [in] */ const BSTR path);


void __RPC_STUB IFeedFolderEvents_FeedDeleted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedFolderEvents_FeedRenamed_Proxy( 
    IFeedFolderEvents __RPC_FAR * This,
    /* [in] */ const BSTR path,
    /* [in] */ const BSTR oldPath);


void __RPC_STUB IFeedFolderEvents_FeedRenamed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedFolderEvents_FeedUrlChanged_Proxy( 
    IFeedFolderEvents __RPC_FAR * This,
    /* [in] */ const BSTR path);


void __RPC_STUB IFeedFolderEvents_FeedUrlChanged_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedFolderEvents_FeedMovedFrom_Proxy( 
    IFeedFolderEvents __RPC_FAR * This,
    /* [in] */ const BSTR path,
    /* [in] */ const BSTR oldPath);


void __RPC_STUB IFeedFolderEvents_FeedMovedFrom_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedFolderEvents_FeedMovedTo_Proxy( 
    IFeedFolderEvents __RPC_FAR * This,
    /* [in] */ const BSTR path,
    /* [in] */ const BSTR oldPath);


void __RPC_STUB IFeedFolderEvents_FeedMovedTo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedFolderEvents_FeedDownloading_Proxy( 
    IFeedFolderEvents __RPC_FAR * This,
    /* [in] */ const BSTR path);


void __RPC_STUB IFeedFolderEvents_FeedDownloading_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedFolderEvents_FeedDownloadCompleted_Proxy( 
    IFeedFolderEvents __RPC_FAR * This,
    /* [in] */ const BSTR path,
    /* [in] */ FEEDS_DOWNLOAD_ERROR error);


void __RPC_STUB IFeedFolderEvents_FeedDownloadCompleted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedFolderEvents_FeedItemCountChanged_Proxy( 
    IFeedFolderEvents __RPC_FAR * This,
    /* [in] */ const BSTR path,
    /* [in] */ LONG itemCountType);


void __RPC_STUB IFeedFolderEvents_FeedItemCountChanged_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IFeedFolderEvents_INTERFACE_DEFINED__ */


#ifndef __IFeed_INTERFACE_DEFINED__
#define __IFeed_INTERFACE_DEFINED__

/* interface IFeed */
/* [object][oleautomation][dual][uuid] */ 


EXTERN_C const IID IID_IFeed;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f7f915d8-2ede-42bc-98e7-a5d05063a757")
    IFeed : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Xml( 
            /* [in] */ LONG count,
            /* [in] */ FEEDS_XML_SORT_PROPERTY sortProperty,
            /* [in] */ FEEDS_XML_SORT_ORDER sortOrder,
            /* [in] */ FEEDS_XML_FILTER_FLAGS filterFlags,
            /* [in] */ FEEDS_XML_INCLUDE_FLAGS includeFlags,
            /* [retval][out] */ BSTR __RPC_FAR *xml) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR __RPC_FAR *name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Rename( 
            /* [in] */ BSTR name) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Url( 
            /* [retval][out] */ BSTR __RPC_FAR *feedUrl) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Url( 
            /* [in] */ BSTR feedUrl) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LocalId( 
            /* [retval][out] */ BSTR __RPC_FAR *feedGuid) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Path( 
            /* [retval][out] */ BSTR __RPC_FAR *path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Move( 
            /* [in] */ BSTR newParentPath) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LastWriteTime( 
            /* [retval][out] */ DATE __RPC_FAR *lastWrite) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Delete( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Download( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AsyncDownload( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CancelAsyncDownload( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SyncSetting( 
            /* [retval][out] */ FEEDS_SYNC_SETTING __RPC_FAR *syncSetting) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_SyncSetting( 
            /* [in] */ FEEDS_SYNC_SETTING syncSetting) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Interval( 
            /* [retval][out] */ LONG __RPC_FAR *minutes) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Interval( 
            /* [in] */ LONG minutes) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LastDownloadTime( 
            /* [retval][out] */ DATE __RPC_FAR *lastDownload) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LocalEnclosurePath( 
            /* [retval][out] */ BSTR __RPC_FAR *path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Items( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetItem( 
            /* [in] */ LONG itemId,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Title( 
            /* [retval][out] */ BSTR __RPC_FAR *title) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR __RPC_FAR *description) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Link( 
            /* [retval][out] */ BSTR __RPC_FAR *homePage) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Image( 
            /* [retval][out] */ BSTR __RPC_FAR *imageUrl) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LastBuildDate( 
            /* [retval][out] */ DATE __RPC_FAR *lastBuildDate) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PubDate( 
            /* [retval][out] */ DATE __RPC_FAR *lastPopulateDate) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Ttl( 
            /* [retval][out] */ LONG __RPC_FAR *ttl) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Language( 
            /* [retval][out] */ BSTR __RPC_FAR *language) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Copyright( 
            /* [retval][out] */ BSTR __RPC_FAR *copyright) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MaxItemCount( 
            /* [retval][out] */ LONG __RPC_FAR *count) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_MaxItemCount( 
            /* [in] */ LONG count) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DownloadEnclosuresAutomatically( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *downloadEnclosuresAutomatically) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DownloadEnclosuresAutomatically( 
            /* [in] */ VARIANT_BOOL downloadEnclosuresAutomatically) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DownloadStatus( 
            /* [retval][out] */ FEEDS_DOWNLOAD_STATUS __RPC_FAR *status) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LastDownloadError( 
            /* [retval][out] */ FEEDS_DOWNLOAD_ERROR __RPC_FAR *error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Merge( 
            /* [in] */ BSTR feedXml,
            /* [in] */ BSTR feedUrl) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DownloadUrl( 
            /* [retval][out] */ BSTR __RPC_FAR *feedUrl) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsList( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *isList) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MarkAllItemsRead( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetWatcher( 
            /* [in] */ FEEDS_EVENTS_SCOPE scope,
            /* [in] */ FEEDS_EVENTS_MASK mask,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_UnreadItemCount( 
            /* [retval][out] */ LONG __RPC_FAR *count) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ItemCount( 
            /* [retval][out] */ LONG __RPC_FAR *count) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFeedVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IFeed __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IFeed __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IFeed __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IFeed __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IFeed __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IFeed __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IFeed __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Xml )( 
            IFeed __RPC_FAR * This,
            /* [in] */ LONG count,
            /* [in] */ FEEDS_XML_SORT_PROPERTY sortProperty,
            /* [in] */ FEEDS_XML_SORT_ORDER sortOrder,
            /* [in] */ FEEDS_XML_FILTER_FLAGS filterFlags,
            /* [in] */ FEEDS_XML_INCLUDE_FLAGS includeFlags,
            /* [retval][out] */ BSTR __RPC_FAR *xml);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Name )( 
            IFeed __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Rename )( 
            IFeed __RPC_FAR * This,
            /* [in] */ BSTR name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Url )( 
            IFeed __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *feedUrl);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Url )( 
            IFeed __RPC_FAR * This,
            /* [in] */ BSTR feedUrl);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_LocalId )( 
            IFeed __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *feedGuid);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Path )( 
            IFeed __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *path);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Move )( 
            IFeed __RPC_FAR * This,
            /* [in] */ BSTR newParentPath);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Parent )( 
            IFeed __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_LastWriteTime )( 
            IFeed __RPC_FAR * This,
            /* [retval][out] */ DATE __RPC_FAR *lastWrite);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Delete )( 
            IFeed __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Download )( 
            IFeed __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AsyncDownload )( 
            IFeed __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CancelAsyncDownload )( 
            IFeed __RPC_FAR * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_SyncSetting )( 
            IFeed __RPC_FAR * This,
            /* [retval][out] */ FEEDS_SYNC_SETTING __RPC_FAR *syncSetting);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_SyncSetting )( 
            IFeed __RPC_FAR * This,
            /* [in] */ FEEDS_SYNC_SETTING syncSetting);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Interval )( 
            IFeed __RPC_FAR * This,
            /* [retval][out] */ LONG __RPC_FAR *minutes);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Interval )( 
            IFeed __RPC_FAR * This,
            /* [in] */ LONG minutes);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_LastDownloadTime )( 
            IFeed __RPC_FAR * This,
            /* [retval][out] */ DATE __RPC_FAR *lastDownload);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_LocalEnclosurePath )( 
            IFeed __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *path);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Items )( 
            IFeed __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetItem )( 
            IFeed __RPC_FAR * This,
            /* [in] */ LONG itemId,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Title )( 
            IFeed __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *title);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Description )( 
            IFeed __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *description);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Link )( 
            IFeed __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *homePage);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Image )( 
            IFeed __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *imageUrl);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_LastBuildDate )( 
            IFeed __RPC_FAR * This,
            /* [retval][out] */ DATE __RPC_FAR *lastBuildDate);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_PubDate )( 
            IFeed __RPC_FAR * This,
            /* [retval][out] */ DATE __RPC_FAR *lastPopulateDate);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Ttl )( 
            IFeed __RPC_FAR * This,
            /* [retval][out] */ LONG __RPC_FAR *ttl);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Language )( 
            IFeed __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *language);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Copyright )( 
            IFeed __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *copyright);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MaxItemCount )( 
            IFeed __RPC_FAR * This,
            /* [retval][out] */ LONG __RPC_FAR *count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_MaxItemCount )( 
            IFeed __RPC_FAR * This,
            /* [in] */ LONG count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_DownloadEnclosuresAutomatically )( 
            IFeed __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *downloadEnclosuresAutomatically);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_DownloadEnclosuresAutomatically )( 
            IFeed __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL downloadEnclosuresAutomatically);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_DownloadStatus )( 
            IFeed __RPC_FAR * This,
            /* [retval][out] */ FEEDS_DOWNLOAD_STATUS __RPC_FAR *status);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_LastDownloadError )( 
            IFeed __RPC_FAR * This,
            /* [retval][out] */ FEEDS_DOWNLOAD_ERROR __RPC_FAR *error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Merge )( 
            IFeed __RPC_FAR * This,
            /* [in] */ BSTR feedXml,
            /* [in] */ BSTR feedUrl);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_DownloadUrl )( 
            IFeed __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *feedUrl);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IsList )( 
            IFeed __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *isList);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *MarkAllItemsRead )( 
            IFeed __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetWatcher )( 
            IFeed __RPC_FAR * This,
            /* [in] */ FEEDS_EVENTS_SCOPE scope,
            /* [in] */ FEEDS_EVENTS_MASK mask,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_UnreadItemCount )( 
            IFeed __RPC_FAR * This,
            /* [retval][out] */ LONG __RPC_FAR *count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ItemCount )( 
            IFeed __RPC_FAR * This,
            /* [retval][out] */ LONG __RPC_FAR *count);
        
        END_INTERFACE
    } IFeedVtbl;

    interface IFeed
    {
        CONST_VTBL struct IFeedVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFeed_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IFeed_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IFeed_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IFeed_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IFeed_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IFeed_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IFeed_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IFeed_Xml(This,count,sortProperty,sortOrder,filterFlags,includeFlags,xml)	\
    (This)->lpVtbl -> Xml(This,count,sortProperty,sortOrder,filterFlags,includeFlags,xml)

#define IFeed_get_Name(This,name)	\
    (This)->lpVtbl -> get_Name(This,name)

#define IFeed_Rename(This,name)	\
    (This)->lpVtbl -> Rename(This,name)

#define IFeed_get_Url(This,feedUrl)	\
    (This)->lpVtbl -> get_Url(This,feedUrl)

#define IFeed_put_Url(This,feedUrl)	\
    (This)->lpVtbl -> put_Url(This,feedUrl)

#define IFeed_get_LocalId(This,feedGuid)	\
    (This)->lpVtbl -> get_LocalId(This,feedGuid)

#define IFeed_get_Path(This,path)	\
    (This)->lpVtbl -> get_Path(This,path)

#define IFeed_Move(This,newParentPath)	\
    (This)->lpVtbl -> Move(This,newParentPath)

#define IFeed_get_Parent(This,disp)	\
    (This)->lpVtbl -> get_Parent(This,disp)

#define IFeed_get_LastWriteTime(This,lastWrite)	\
    (This)->lpVtbl -> get_LastWriteTime(This,lastWrite)

#define IFeed_Delete(This)	\
    (This)->lpVtbl -> Delete(This)

#define IFeed_Download(This)	\
    (This)->lpVtbl -> Download(This)

#define IFeed_AsyncDownload(This)	\
    (This)->lpVtbl -> AsyncDownload(This)

#define IFeed_CancelAsyncDownload(This)	\
    (This)->lpVtbl -> CancelAsyncDownload(This)

#define IFeed_get_SyncSetting(This,syncSetting)	\
    (This)->lpVtbl -> get_SyncSetting(This,syncSetting)

#define IFeed_put_SyncSetting(This,syncSetting)	\
    (This)->lpVtbl -> put_SyncSetting(This,syncSetting)

#define IFeed_get_Interval(This,minutes)	\
    (This)->lpVtbl -> get_Interval(This,minutes)

#define IFeed_put_Interval(This,minutes)	\
    (This)->lpVtbl -> put_Interval(This,minutes)

#define IFeed_get_LastDownloadTime(This,lastDownload)	\
    (This)->lpVtbl -> get_LastDownloadTime(This,lastDownload)

#define IFeed_get_LocalEnclosurePath(This,path)	\
    (This)->lpVtbl -> get_LocalEnclosurePath(This,path)

#define IFeed_get_Items(This,disp)	\
    (This)->lpVtbl -> get_Items(This,disp)

#define IFeed_GetItem(This,itemId,disp)	\
    (This)->lpVtbl -> GetItem(This,itemId,disp)

#define IFeed_get_Title(This,title)	\
    (This)->lpVtbl -> get_Title(This,title)

#define IFeed_get_Description(This,description)	\
    (This)->lpVtbl -> get_Description(This,description)

#define IFeed_get_Link(This,homePage)	\
    (This)->lpVtbl -> get_Link(This,homePage)

#define IFeed_get_Image(This,imageUrl)	\
    (This)->lpVtbl -> get_Image(This,imageUrl)

#define IFeed_get_LastBuildDate(This,lastBuildDate)	\
    (This)->lpVtbl -> get_LastBuildDate(This,lastBuildDate)

#define IFeed_get_PubDate(This,lastPopulateDate)	\
    (This)->lpVtbl -> get_PubDate(This,lastPopulateDate)

#define IFeed_get_Ttl(This,ttl)	\
    (This)->lpVtbl -> get_Ttl(This,ttl)

#define IFeed_get_Language(This,language)	\
    (This)->lpVtbl -> get_Language(This,language)

#define IFeed_get_Copyright(This,copyright)	\
    (This)->lpVtbl -> get_Copyright(This,copyright)

#define IFeed_get_MaxItemCount(This,count)	\
    (This)->lpVtbl -> get_MaxItemCount(This,count)

#define IFeed_put_MaxItemCount(This,count)	\
    (This)->lpVtbl -> put_MaxItemCount(This,count)

#define IFeed_get_DownloadEnclosuresAutomatically(This,downloadEnclosuresAutomatically)	\
    (This)->lpVtbl -> get_DownloadEnclosuresAutomatically(This,downloadEnclosuresAutomatically)

#define IFeed_put_DownloadEnclosuresAutomatically(This,downloadEnclosuresAutomatically)	\
    (This)->lpVtbl -> put_DownloadEnclosuresAutomatically(This,downloadEnclosuresAutomatically)

#define IFeed_get_DownloadStatus(This,status)	\
    (This)->lpVtbl -> get_DownloadStatus(This,status)

#define IFeed_get_LastDownloadError(This,error)	\
    (This)->lpVtbl -> get_LastDownloadError(This,error)

#define IFeed_Merge(This,feedXml,feedUrl)	\
    (This)->lpVtbl -> Merge(This,feedXml,feedUrl)

#define IFeed_get_DownloadUrl(This,feedUrl)	\
    (This)->lpVtbl -> get_DownloadUrl(This,feedUrl)

#define IFeed_get_IsList(This,isList)	\
    (This)->lpVtbl -> get_IsList(This,isList)

#define IFeed_MarkAllItemsRead(This)	\
    (This)->lpVtbl -> MarkAllItemsRead(This)

#define IFeed_GetWatcher(This,scope,mask,disp)	\
    (This)->lpVtbl -> GetWatcher(This,scope,mask,disp)

#define IFeed_get_UnreadItemCount(This,count)	\
    (This)->lpVtbl -> get_UnreadItemCount(This,count)

#define IFeed_get_ItemCount(This,count)	\
    (This)->lpVtbl -> get_ItemCount(This,count)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeed_Xml_Proxy( 
    IFeed __RPC_FAR * This,
    /* [in] */ LONG count,
    /* [in] */ FEEDS_XML_SORT_PROPERTY sortProperty,
    /* [in] */ FEEDS_XML_SORT_ORDER sortOrder,
    /* [in] */ FEEDS_XML_FILTER_FLAGS filterFlags,
    /* [in] */ FEEDS_XML_INCLUDE_FLAGS includeFlags,
    /* [retval][out] */ BSTR __RPC_FAR *xml);


void __RPC_STUB IFeed_Xml_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeed_get_Name_Proxy( 
    IFeed __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *name);


void __RPC_STUB IFeed_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeed_Rename_Proxy( 
    IFeed __RPC_FAR * This,
    /* [in] */ BSTR name);


void __RPC_STUB IFeed_Rename_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeed_get_Url_Proxy( 
    IFeed __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *feedUrl);


void __RPC_STUB IFeed_get_Url_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IFeed_put_Url_Proxy( 
    IFeed __RPC_FAR * This,
    /* [in] */ BSTR feedUrl);


void __RPC_STUB IFeed_put_Url_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeed_get_LocalId_Proxy( 
    IFeed __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *feedGuid);


void __RPC_STUB IFeed_get_LocalId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeed_get_Path_Proxy( 
    IFeed __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *path);


void __RPC_STUB IFeed_get_Path_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeed_Move_Proxy( 
    IFeed __RPC_FAR * This,
    /* [in] */ BSTR newParentPath);


void __RPC_STUB IFeed_Move_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeed_get_Parent_Proxy( 
    IFeed __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);


void __RPC_STUB IFeed_get_Parent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeed_get_LastWriteTime_Proxy( 
    IFeed __RPC_FAR * This,
    /* [retval][out] */ DATE __RPC_FAR *lastWrite);


void __RPC_STUB IFeed_get_LastWriteTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeed_Delete_Proxy( 
    IFeed __RPC_FAR * This);


void __RPC_STUB IFeed_Delete_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeed_Download_Proxy( 
    IFeed __RPC_FAR * This);


void __RPC_STUB IFeed_Download_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeed_AsyncDownload_Proxy( 
    IFeed __RPC_FAR * This);


void __RPC_STUB IFeed_AsyncDownload_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeed_CancelAsyncDownload_Proxy( 
    IFeed __RPC_FAR * This);


void __RPC_STUB IFeed_CancelAsyncDownload_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeed_get_SyncSetting_Proxy( 
    IFeed __RPC_FAR * This,
    /* [retval][out] */ FEEDS_SYNC_SETTING __RPC_FAR *syncSetting);


void __RPC_STUB IFeed_get_SyncSetting_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IFeed_put_SyncSetting_Proxy( 
    IFeed __RPC_FAR * This,
    /* [in] */ FEEDS_SYNC_SETTING syncSetting);


void __RPC_STUB IFeed_put_SyncSetting_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeed_get_Interval_Proxy( 
    IFeed __RPC_FAR * This,
    /* [retval][out] */ LONG __RPC_FAR *minutes);


void __RPC_STUB IFeed_get_Interval_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IFeed_put_Interval_Proxy( 
    IFeed __RPC_FAR * This,
    /* [in] */ LONG minutes);


void __RPC_STUB IFeed_put_Interval_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeed_get_LastDownloadTime_Proxy( 
    IFeed __RPC_FAR * This,
    /* [retval][out] */ DATE __RPC_FAR *lastDownload);


void __RPC_STUB IFeed_get_LastDownloadTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeed_get_LocalEnclosurePath_Proxy( 
    IFeed __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *path);


void __RPC_STUB IFeed_get_LocalEnclosurePath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeed_get_Items_Proxy( 
    IFeed __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);


void __RPC_STUB IFeed_get_Items_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeed_GetItem_Proxy( 
    IFeed __RPC_FAR * This,
    /* [in] */ LONG itemId,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);


void __RPC_STUB IFeed_GetItem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeed_get_Title_Proxy( 
    IFeed __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *title);


void __RPC_STUB IFeed_get_Title_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeed_get_Description_Proxy( 
    IFeed __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *description);


void __RPC_STUB IFeed_get_Description_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeed_get_Link_Proxy( 
    IFeed __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *homePage);


void __RPC_STUB IFeed_get_Link_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeed_get_Image_Proxy( 
    IFeed __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *imageUrl);


void __RPC_STUB IFeed_get_Image_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeed_get_LastBuildDate_Proxy( 
    IFeed __RPC_FAR * This,
    /* [retval][out] */ DATE __RPC_FAR *lastBuildDate);


void __RPC_STUB IFeed_get_LastBuildDate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeed_get_PubDate_Proxy( 
    IFeed __RPC_FAR * This,
    /* [retval][out] */ DATE __RPC_FAR *lastPopulateDate);


void __RPC_STUB IFeed_get_PubDate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeed_get_Ttl_Proxy( 
    IFeed __RPC_FAR * This,
    /* [retval][out] */ LONG __RPC_FAR *ttl);


void __RPC_STUB IFeed_get_Ttl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeed_get_Language_Proxy( 
    IFeed __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *language);


void __RPC_STUB IFeed_get_Language_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeed_get_Copyright_Proxy( 
    IFeed __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *copyright);


void __RPC_STUB IFeed_get_Copyright_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeed_get_MaxItemCount_Proxy( 
    IFeed __RPC_FAR * This,
    /* [retval][out] */ LONG __RPC_FAR *count);


void __RPC_STUB IFeed_get_MaxItemCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IFeed_put_MaxItemCount_Proxy( 
    IFeed __RPC_FAR * This,
    /* [in] */ LONG count);


void __RPC_STUB IFeed_put_MaxItemCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeed_get_DownloadEnclosuresAutomatically_Proxy( 
    IFeed __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *downloadEnclosuresAutomatically);


void __RPC_STUB IFeed_get_DownloadEnclosuresAutomatically_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IFeed_put_DownloadEnclosuresAutomatically_Proxy( 
    IFeed __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL downloadEnclosuresAutomatically);


void __RPC_STUB IFeed_put_DownloadEnclosuresAutomatically_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeed_get_DownloadStatus_Proxy( 
    IFeed __RPC_FAR * This,
    /* [retval][out] */ FEEDS_DOWNLOAD_STATUS __RPC_FAR *status);


void __RPC_STUB IFeed_get_DownloadStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeed_get_LastDownloadError_Proxy( 
    IFeed __RPC_FAR * This,
    /* [retval][out] */ FEEDS_DOWNLOAD_ERROR __RPC_FAR *error);


void __RPC_STUB IFeed_get_LastDownloadError_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeed_Merge_Proxy( 
    IFeed __RPC_FAR * This,
    /* [in] */ BSTR feedXml,
    /* [in] */ BSTR feedUrl);


void __RPC_STUB IFeed_Merge_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeed_get_DownloadUrl_Proxy( 
    IFeed __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *feedUrl);


void __RPC_STUB IFeed_get_DownloadUrl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeed_get_IsList_Proxy( 
    IFeed __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *isList);


void __RPC_STUB IFeed_get_IsList_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeed_MarkAllItemsRead_Proxy( 
    IFeed __RPC_FAR * This);


void __RPC_STUB IFeed_MarkAllItemsRead_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeed_GetWatcher_Proxy( 
    IFeed __RPC_FAR * This,
    /* [in] */ FEEDS_EVENTS_SCOPE scope,
    /* [in] */ FEEDS_EVENTS_MASK mask,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);


void __RPC_STUB IFeed_GetWatcher_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeed_get_UnreadItemCount_Proxy( 
    IFeed __RPC_FAR * This,
    /* [retval][out] */ LONG __RPC_FAR *count);


void __RPC_STUB IFeed_get_UnreadItemCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeed_get_ItemCount_Proxy( 
    IFeed __RPC_FAR * This,
    /* [retval][out] */ LONG __RPC_FAR *count);


void __RPC_STUB IFeed_get_ItemCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IFeed_INTERFACE_DEFINED__ */


#ifndef __IFeedEvents_INTERFACE_DEFINED__
#define __IFeedEvents_INTERFACE_DEFINED__

/* interface IFeedEvents */
/* [object][oleautomation][dual][uuid] */ 


EXTERN_C const IID IID_IFeedEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("abf35c99-0681-47ea-9a8c-1436a375a99e")
    IFeedEvents : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Error( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FeedDeleted( 
            /* [in] */ const BSTR path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FeedRenamed( 
            /* [in] */ const BSTR path,
            /* [in] */ const BSTR oldPath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FeedUrlChanged( 
            /* [in] */ const BSTR path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FeedMoved( 
            /* [in] */ const BSTR path,
            /* [in] */ const BSTR oldPath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FeedDownloading( 
            /* [in] */ const BSTR path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FeedDownloadCompleted( 
            /* [in] */ const BSTR path,
            /* [in] */ FEEDS_DOWNLOAD_ERROR error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FeedItemCountChanged( 
            /* [in] */ const BSTR path,
            /* [in] */ LONG itemCountType) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFeedEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IFeedEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IFeedEvents __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IFeedEvents __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IFeedEvents __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IFeedEvents __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IFeedEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IFeedEvents __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Error )( 
            IFeedEvents __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FeedDeleted )( 
            IFeedEvents __RPC_FAR * This,
            /* [in] */ const BSTR path);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FeedRenamed )( 
            IFeedEvents __RPC_FAR * This,
            /* [in] */ const BSTR path,
            /* [in] */ const BSTR oldPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FeedUrlChanged )( 
            IFeedEvents __RPC_FAR * This,
            /* [in] */ const BSTR path);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FeedMoved )( 
            IFeedEvents __RPC_FAR * This,
            /* [in] */ const BSTR path,
            /* [in] */ const BSTR oldPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FeedDownloading )( 
            IFeedEvents __RPC_FAR * This,
            /* [in] */ const BSTR path);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FeedDownloadCompleted )( 
            IFeedEvents __RPC_FAR * This,
            /* [in] */ const BSTR path,
            /* [in] */ FEEDS_DOWNLOAD_ERROR error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FeedItemCountChanged )( 
            IFeedEvents __RPC_FAR * This,
            /* [in] */ const BSTR path,
            /* [in] */ LONG itemCountType);
        
        END_INTERFACE
    } IFeedEventsVtbl;

    interface IFeedEvents
    {
        CONST_VTBL struct IFeedEventsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFeedEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IFeedEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IFeedEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IFeedEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IFeedEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IFeedEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IFeedEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IFeedEvents_Error(This)	\
    (This)->lpVtbl -> Error(This)

#define IFeedEvents_FeedDeleted(This,path)	\
    (This)->lpVtbl -> FeedDeleted(This,path)

#define IFeedEvents_FeedRenamed(This,path,oldPath)	\
    (This)->lpVtbl -> FeedRenamed(This,path,oldPath)

#define IFeedEvents_FeedUrlChanged(This,path)	\
    (This)->lpVtbl -> FeedUrlChanged(This,path)

#define IFeedEvents_FeedMoved(This,path,oldPath)	\
    (This)->lpVtbl -> FeedMoved(This,path,oldPath)

#define IFeedEvents_FeedDownloading(This,path)	\
    (This)->lpVtbl -> FeedDownloading(This,path)

#define IFeedEvents_FeedDownloadCompleted(This,path,error)	\
    (This)->lpVtbl -> FeedDownloadCompleted(This,path,error)

#define IFeedEvents_FeedItemCountChanged(This,path,itemCountType)	\
    (This)->lpVtbl -> FeedItemCountChanged(This,path,itemCountType)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedEvents_Error_Proxy( 
    IFeedEvents __RPC_FAR * This);


void __RPC_STUB IFeedEvents_Error_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedEvents_FeedDeleted_Proxy( 
    IFeedEvents __RPC_FAR * This,
    /* [in] */ const BSTR path);


void __RPC_STUB IFeedEvents_FeedDeleted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedEvents_FeedRenamed_Proxy( 
    IFeedEvents __RPC_FAR * This,
    /* [in] */ const BSTR path,
    /* [in] */ const BSTR oldPath);


void __RPC_STUB IFeedEvents_FeedRenamed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedEvents_FeedUrlChanged_Proxy( 
    IFeedEvents __RPC_FAR * This,
    /* [in] */ const BSTR path);


void __RPC_STUB IFeedEvents_FeedUrlChanged_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedEvents_FeedMoved_Proxy( 
    IFeedEvents __RPC_FAR * This,
    /* [in] */ const BSTR path,
    /* [in] */ const BSTR oldPath);


void __RPC_STUB IFeedEvents_FeedMoved_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedEvents_FeedDownloading_Proxy( 
    IFeedEvents __RPC_FAR * This,
    /* [in] */ const BSTR path);


void __RPC_STUB IFeedEvents_FeedDownloading_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedEvents_FeedDownloadCompleted_Proxy( 
    IFeedEvents __RPC_FAR * This,
    /* [in] */ const BSTR path,
    /* [in] */ FEEDS_DOWNLOAD_ERROR error);


void __RPC_STUB IFeedEvents_FeedDownloadCompleted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedEvents_FeedItemCountChanged_Proxy( 
    IFeedEvents __RPC_FAR * This,
    /* [in] */ const BSTR path,
    /* [in] */ LONG itemCountType);


void __RPC_STUB IFeedEvents_FeedItemCountChanged_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IFeedEvents_INTERFACE_DEFINED__ */


#ifndef __IFeedItem_INTERFACE_DEFINED__
#define __IFeedItem_INTERFACE_DEFINED__

/* interface IFeedItem */
/* [object][oleautomation][dual][uuid] */ 


EXTERN_C const IID IID_IFeedItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0a1e6cad-0a47-4da2-a13d-5baaa5c8bd4f")
    IFeedItem : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Xml( 
            /* [in] */ FEEDS_XML_INCLUDE_FLAGS includeFlags,
            /* [retval][out] */ BSTR __RPC_FAR *xml) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Title( 
            /* [retval][out] */ BSTR __RPC_FAR *title) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Link( 
            /* [retval][out] */ BSTR __RPC_FAR *linkUrl) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Guid( 
            /* [retval][out] */ BSTR __RPC_FAR *itemGuid) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR __RPC_FAR *description) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PubDate( 
            /* [retval][out] */ DATE __RPC_FAR *pubDate) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Comments( 
            /* [retval][out] */ BSTR __RPC_FAR *comments) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Author( 
            /* [retval][out] */ BSTR __RPC_FAR *author) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Enclosure( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsRead( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *isRead) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_IsRead( 
            /* [in] */ VARIANT_BOOL isRead) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LocalId( 
            /* [retval][out] */ LONG __RPC_FAR *itemId) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Delete( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DownloadUrl( 
            /* [retval][out] */ BSTR __RPC_FAR *itemUrl) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LastDownloadTime( 
            /* [retval][out] */ DATE __RPC_FAR *lastDownload) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Modified( 
            /* [retval][out] */ DATE __RPC_FAR *modified) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFeedItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IFeedItem __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IFeedItem __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IFeedItem __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IFeedItem __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IFeedItem __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IFeedItem __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IFeedItem __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Xml )( 
            IFeedItem __RPC_FAR * This,
            /* [in] */ FEEDS_XML_INCLUDE_FLAGS includeFlags,
            /* [retval][out] */ BSTR __RPC_FAR *xml);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Title )( 
            IFeedItem __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *title);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Link )( 
            IFeedItem __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *linkUrl);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Guid )( 
            IFeedItem __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *itemGuid);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Description )( 
            IFeedItem __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *description);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_PubDate )( 
            IFeedItem __RPC_FAR * This,
            /* [retval][out] */ DATE __RPC_FAR *pubDate);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Comments )( 
            IFeedItem __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *comments);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Author )( 
            IFeedItem __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *author);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Enclosure )( 
            IFeedItem __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IsRead )( 
            IFeedItem __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *isRead);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_IsRead )( 
            IFeedItem __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL isRead);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_LocalId )( 
            IFeedItem __RPC_FAR * This,
            /* [retval][out] */ LONG __RPC_FAR *itemId);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Parent )( 
            IFeedItem __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Delete )( 
            IFeedItem __RPC_FAR * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_DownloadUrl )( 
            IFeedItem __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *itemUrl);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_LastDownloadTime )( 
            IFeedItem __RPC_FAR * This,
            /* [retval][out] */ DATE __RPC_FAR *lastDownload);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Modified )( 
            IFeedItem __RPC_FAR * This,
            /* [retval][out] */ DATE __RPC_FAR *modified);
        
        END_INTERFACE
    } IFeedItemVtbl;

    interface IFeedItem
    {
        CONST_VTBL struct IFeedItemVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFeedItem_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IFeedItem_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IFeedItem_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IFeedItem_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IFeedItem_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IFeedItem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IFeedItem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IFeedItem_Xml(This,includeFlags,xml)	\
    (This)->lpVtbl -> Xml(This,includeFlags,xml)

#define IFeedItem_get_Title(This,title)	\
    (This)->lpVtbl -> get_Title(This,title)

#define IFeedItem_get_Link(This,linkUrl)	\
    (This)->lpVtbl -> get_Link(This,linkUrl)

#define IFeedItem_get_Guid(This,itemGuid)	\
    (This)->lpVtbl -> get_Guid(This,itemGuid)

#define IFeedItem_get_Description(This,description)	\
    (This)->lpVtbl -> get_Description(This,description)

#define IFeedItem_get_PubDate(This,pubDate)	\
    (This)->lpVtbl -> get_PubDate(This,pubDate)

#define IFeedItem_get_Comments(This,comments)	\
    (This)->lpVtbl -> get_Comments(This,comments)

#define IFeedItem_get_Author(This,author)	\
    (This)->lpVtbl -> get_Author(This,author)

#define IFeedItem_get_Enclosure(This,disp)	\
    (This)->lpVtbl -> get_Enclosure(This,disp)

#define IFeedItem_get_IsRead(This,isRead)	\
    (This)->lpVtbl -> get_IsRead(This,isRead)

#define IFeedItem_put_IsRead(This,isRead)	\
    (This)->lpVtbl -> put_IsRead(This,isRead)

#define IFeedItem_get_LocalId(This,itemId)	\
    (This)->lpVtbl -> get_LocalId(This,itemId)

#define IFeedItem_get_Parent(This,disp)	\
    (This)->lpVtbl -> get_Parent(This,disp)

#define IFeedItem_Delete(This)	\
    (This)->lpVtbl -> Delete(This)

#define IFeedItem_get_DownloadUrl(This,itemUrl)	\
    (This)->lpVtbl -> get_DownloadUrl(This,itemUrl)

#define IFeedItem_get_LastDownloadTime(This,lastDownload)	\
    (This)->lpVtbl -> get_LastDownloadTime(This,lastDownload)

#define IFeedItem_get_Modified(This,modified)	\
    (This)->lpVtbl -> get_Modified(This,modified)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedItem_Xml_Proxy( 
    IFeedItem __RPC_FAR * This,
    /* [in] */ FEEDS_XML_INCLUDE_FLAGS includeFlags,
    /* [retval][out] */ BSTR __RPC_FAR *xml);


void __RPC_STUB IFeedItem_Xml_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedItem_get_Title_Proxy( 
    IFeedItem __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *title);


void __RPC_STUB IFeedItem_get_Title_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedItem_get_Link_Proxy( 
    IFeedItem __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *linkUrl);


void __RPC_STUB IFeedItem_get_Link_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedItem_get_Guid_Proxy( 
    IFeedItem __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *itemGuid);


void __RPC_STUB IFeedItem_get_Guid_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedItem_get_Description_Proxy( 
    IFeedItem __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *description);


void __RPC_STUB IFeedItem_get_Description_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedItem_get_PubDate_Proxy( 
    IFeedItem __RPC_FAR * This,
    /* [retval][out] */ DATE __RPC_FAR *pubDate);


void __RPC_STUB IFeedItem_get_PubDate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedItem_get_Comments_Proxy( 
    IFeedItem __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *comments);


void __RPC_STUB IFeedItem_get_Comments_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedItem_get_Author_Proxy( 
    IFeedItem __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *author);


void __RPC_STUB IFeedItem_get_Author_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedItem_get_Enclosure_Proxy( 
    IFeedItem __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);


void __RPC_STUB IFeedItem_get_Enclosure_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedItem_get_IsRead_Proxy( 
    IFeedItem __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *isRead);


void __RPC_STUB IFeedItem_get_IsRead_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IFeedItem_put_IsRead_Proxy( 
    IFeedItem __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL isRead);


void __RPC_STUB IFeedItem_put_IsRead_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedItem_get_LocalId_Proxy( 
    IFeedItem __RPC_FAR * This,
    /* [retval][out] */ LONG __RPC_FAR *itemId);


void __RPC_STUB IFeedItem_get_LocalId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedItem_get_Parent_Proxy( 
    IFeedItem __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);


void __RPC_STUB IFeedItem_get_Parent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedItem_Delete_Proxy( 
    IFeedItem __RPC_FAR * This);


void __RPC_STUB IFeedItem_Delete_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedItem_get_DownloadUrl_Proxy( 
    IFeedItem __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *itemUrl);


void __RPC_STUB IFeedItem_get_DownloadUrl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedItem_get_LastDownloadTime_Proxy( 
    IFeedItem __RPC_FAR * This,
    /* [retval][out] */ DATE __RPC_FAR *lastDownload);


void __RPC_STUB IFeedItem_get_LastDownloadTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedItem_get_Modified_Proxy( 
    IFeedItem __RPC_FAR * This,
    /* [retval][out] */ DATE __RPC_FAR *modified);


void __RPC_STUB IFeedItem_get_Modified_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IFeedItem_INTERFACE_DEFINED__ */


#ifndef __IFeedEnclosure_INTERFACE_DEFINED__
#define __IFeedEnclosure_INTERFACE_DEFINED__

/* interface IFeedEnclosure */
/* [object][oleautomation][dual][uuid] */ 


EXTERN_C const IID IID_IFeedEnclosure;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("361C26F7-90A4-4e67-AE09-3A36A546436A")
    IFeedEnclosure : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Url( 
            /* [retval][out] */ BSTR __RPC_FAR *enclosureUrl) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ BSTR __RPC_FAR *mimeType) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Length( 
            /* [retval][out] */ LONG __RPC_FAR *length) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AsyncDownload( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CancelAsyncDownload( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DownloadStatus( 
            /* [retval][out] */ FEEDS_DOWNLOAD_STATUS __RPC_FAR *status) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LastDownloadError( 
            /* [retval][out] */ FEEDS_DOWNLOAD_ERROR __RPC_FAR *error) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LocalPath( 
            /* [retval][out] */ BSTR __RPC_FAR *localPath) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DownloadUrl( 
            /* [retval][out] */ BSTR __RPC_FAR *enclosureUrl) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DownloadMimeType( 
            /* [retval][out] */ BSTR __RPC_FAR *mimeType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveFile( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetFile( 
            /* [in] */ BSTR downloadUrl,
            /* [in] */ BSTR downloadFilePath,
            /* [in] */ BSTR downloadMimeType,
            /* [in] */ BSTR enclosureFilename) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFeedEnclosureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IFeedEnclosure __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IFeedEnclosure __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IFeedEnclosure __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IFeedEnclosure __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IFeedEnclosure __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IFeedEnclosure __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IFeedEnclosure __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Url )( 
            IFeedEnclosure __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *enclosureUrl);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            IFeedEnclosure __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *mimeType);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Length )( 
            IFeedEnclosure __RPC_FAR * This,
            /* [retval][out] */ LONG __RPC_FAR *length);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AsyncDownload )( 
            IFeedEnclosure __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CancelAsyncDownload )( 
            IFeedEnclosure __RPC_FAR * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_DownloadStatus )( 
            IFeedEnclosure __RPC_FAR * This,
            /* [retval][out] */ FEEDS_DOWNLOAD_STATUS __RPC_FAR *status);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_LastDownloadError )( 
            IFeedEnclosure __RPC_FAR * This,
            /* [retval][out] */ FEEDS_DOWNLOAD_ERROR __RPC_FAR *error);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_LocalPath )( 
            IFeedEnclosure __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *localPath);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Parent )( 
            IFeedEnclosure __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_DownloadUrl )( 
            IFeedEnclosure __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *enclosureUrl);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_DownloadMimeType )( 
            IFeedEnclosure __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *mimeType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RemoveFile )( 
            IFeedEnclosure __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetFile )( 
            IFeedEnclosure __RPC_FAR * This,
            /* [in] */ BSTR downloadUrl,
            /* [in] */ BSTR downloadFilePath,
            /* [in] */ BSTR downloadMimeType,
            /* [in] */ BSTR enclosureFilename);
        
        END_INTERFACE
    } IFeedEnclosureVtbl;

    interface IFeedEnclosure
    {
        CONST_VTBL struct IFeedEnclosureVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFeedEnclosure_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IFeedEnclosure_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IFeedEnclosure_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IFeedEnclosure_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IFeedEnclosure_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IFeedEnclosure_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IFeedEnclosure_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IFeedEnclosure_get_Url(This,enclosureUrl)	\
    (This)->lpVtbl -> get_Url(This,enclosureUrl)

#define IFeedEnclosure_get_Type(This,mimeType)	\
    (This)->lpVtbl -> get_Type(This,mimeType)

#define IFeedEnclosure_get_Length(This,length)	\
    (This)->lpVtbl -> get_Length(This,length)

#define IFeedEnclosure_AsyncDownload(This)	\
    (This)->lpVtbl -> AsyncDownload(This)

#define IFeedEnclosure_CancelAsyncDownload(This)	\
    (This)->lpVtbl -> CancelAsyncDownload(This)

#define IFeedEnclosure_get_DownloadStatus(This,status)	\
    (This)->lpVtbl -> get_DownloadStatus(This,status)

#define IFeedEnclosure_get_LastDownloadError(This,error)	\
    (This)->lpVtbl -> get_LastDownloadError(This,error)

#define IFeedEnclosure_get_LocalPath(This,localPath)	\
    (This)->lpVtbl -> get_LocalPath(This,localPath)

#define IFeedEnclosure_get_Parent(This,disp)	\
    (This)->lpVtbl -> get_Parent(This,disp)

#define IFeedEnclosure_get_DownloadUrl(This,enclosureUrl)	\
    (This)->lpVtbl -> get_DownloadUrl(This,enclosureUrl)

#define IFeedEnclosure_get_DownloadMimeType(This,mimeType)	\
    (This)->lpVtbl -> get_DownloadMimeType(This,mimeType)

#define IFeedEnclosure_RemoveFile(This)	\
    (This)->lpVtbl -> RemoveFile(This)

#define IFeedEnclosure_SetFile(This,downloadUrl,downloadFilePath,downloadMimeType,enclosureFilename)	\
    (This)->lpVtbl -> SetFile(This,downloadUrl,downloadFilePath,downloadMimeType,enclosureFilename)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedEnclosure_get_Url_Proxy( 
    IFeedEnclosure __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *enclosureUrl);


void __RPC_STUB IFeedEnclosure_get_Url_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedEnclosure_get_Type_Proxy( 
    IFeedEnclosure __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *mimeType);


void __RPC_STUB IFeedEnclosure_get_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedEnclosure_get_Length_Proxy( 
    IFeedEnclosure __RPC_FAR * This,
    /* [retval][out] */ LONG __RPC_FAR *length);


void __RPC_STUB IFeedEnclosure_get_Length_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedEnclosure_AsyncDownload_Proxy( 
    IFeedEnclosure __RPC_FAR * This);


void __RPC_STUB IFeedEnclosure_AsyncDownload_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedEnclosure_CancelAsyncDownload_Proxy( 
    IFeedEnclosure __RPC_FAR * This);


void __RPC_STUB IFeedEnclosure_CancelAsyncDownload_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedEnclosure_get_DownloadStatus_Proxy( 
    IFeedEnclosure __RPC_FAR * This,
    /* [retval][out] */ FEEDS_DOWNLOAD_STATUS __RPC_FAR *status);


void __RPC_STUB IFeedEnclosure_get_DownloadStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedEnclosure_get_LastDownloadError_Proxy( 
    IFeedEnclosure __RPC_FAR * This,
    /* [retval][out] */ FEEDS_DOWNLOAD_ERROR __RPC_FAR *error);


void __RPC_STUB IFeedEnclosure_get_LastDownloadError_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedEnclosure_get_LocalPath_Proxy( 
    IFeedEnclosure __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *localPath);


void __RPC_STUB IFeedEnclosure_get_LocalPath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedEnclosure_get_Parent_Proxy( 
    IFeedEnclosure __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *disp);


void __RPC_STUB IFeedEnclosure_get_Parent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedEnclosure_get_DownloadUrl_Proxy( 
    IFeedEnclosure __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *enclosureUrl);


void __RPC_STUB IFeedEnclosure_get_DownloadUrl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IFeedEnclosure_get_DownloadMimeType_Proxy( 
    IFeedEnclosure __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *mimeType);


void __RPC_STUB IFeedEnclosure_get_DownloadMimeType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedEnclosure_RemoveFile_Proxy( 
    IFeedEnclosure __RPC_FAR * This);


void __RPC_STUB IFeedEnclosure_RemoveFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFeedEnclosure_SetFile_Proxy( 
    IFeedEnclosure __RPC_FAR * This,
    /* [in] */ BSTR downloadUrl,
    /* [in] */ BSTR downloadFilePath,
    /* [in] */ BSTR downloadMimeType,
    /* [in] */ BSTR enclosureFilename);


void __RPC_STUB IFeedEnclosure_SetFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IFeedEnclosure_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_FeedsManager;

#ifdef __cplusplus

class DECLSPEC_UUID("faeb54c4-f66f-4806-83a0-805299f5e3ad")
FeedsManager;
#endif

EXTERN_C const CLSID CLSID_FeedFolderWatcher;

#ifdef __cplusplus

class DECLSPEC_UUID("281001ed-7765-4cb0-84af-e9b387af01ff")
FeedFolderWatcher;
#endif

EXTERN_C const CLSID CLSID_FeedWatcher;

#ifdef __cplusplus

class DECLSPEC_UUID("18a6737b-f433-4687-89bc-a1b4dfb9f123")
FeedWatcher;
#endif
#endif /* __Feeds_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


