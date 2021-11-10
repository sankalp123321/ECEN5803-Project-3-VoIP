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
/* at Tue Jan 23 14:31:01 2007
 */
/* Compiler settings for ..\shappmgr.idl:
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

#ifndef __shappmgr_h__
#define __shappmgr_h__

/* Forward Declarations */ 

#ifndef __IShellApp_FWD_DEFINED__
#define __IShellApp_FWD_DEFINED__
typedef interface IShellApp IShellApp;
#endif 	/* __IShellApp_FWD_DEFINED__ */


#ifndef __IPublishedApp_FWD_DEFINED__
#define __IPublishedApp_FWD_DEFINED__
typedef interface IPublishedApp IPublishedApp;
#endif 	/* __IPublishedApp_FWD_DEFINED__ */


#ifndef __IPublishedApp2_FWD_DEFINED__
#define __IPublishedApp2_FWD_DEFINED__
typedef interface IPublishedApp2 IPublishedApp2;
#endif 	/* __IPublishedApp2_FWD_DEFINED__ */


#ifndef __IEnumPublishedApps_FWD_DEFINED__
#define __IEnumPublishedApps_FWD_DEFINED__
typedef interface IEnumPublishedApps IEnumPublishedApps;
#endif 	/* __IEnumPublishedApps_FWD_DEFINED__ */


#ifndef __IAppPublisher_FWD_DEFINED__
#define __IAppPublisher_FWD_DEFINED__
typedef interface IAppPublisher IAppPublisher;
#endif 	/* __IAppPublisher_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "appmgmt.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_shappmgr_0000 */
/* [local] */ 

#ifndef _SHAPPMGR_H_
#define _SHAPPMGR_H_


extern RPC_IF_HANDLE __MIDL_itf_shappmgr_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shappmgr_0000_v0_0_s_ifspec;

#ifndef __IShellApp_INTERFACE_DEFINED__
#define __IShellApp_INTERFACE_DEFINED__

/* interface IShellApp */
/* [object][uuid] */ 

typedef 
enum _tagAppInfoFlags
    {	AIM_DISPLAYNAME	= 0x1,
	AIM_VERSION	= 0x2,
	AIM_PUBLISHER	= 0x4,
	AIM_PRODUCTID	= 0x8,
	AIM_REGISTEREDOWNER	= 0x10,
	AIM_REGISTEREDCOMPANY	= 0x20,
	AIM_LANGUAGE	= 0x40,
	AIM_SUPPORTURL	= 0x80,
	AIM_SUPPORTTELEPHONE	= 0x100,
	AIM_HELPLINK	= 0x200,
	AIM_INSTALLLOCATION	= 0x400,
	AIM_INSTALLSOURCE	= 0x800,
	AIM_INSTALLDATE	= 0x1000,
	AIM_CONTACT	= 0x4000,
	AIM_COMMENTS	= 0x8000,
	AIM_IMAGE	= 0x20000,
	AIM_READMEURL	= 0x40000,
	AIM_UPDATEINFOURL	= 0x80000
    }	APPINFODATAFLAGS;

typedef struct _AppInfoData
    {
    DWORD cbSize;
    DWORD dwMask;
    LPWSTR pszDisplayName;
    LPWSTR pszVersion;
    LPWSTR pszPublisher;
    LPWSTR pszProductID;
    LPWSTR pszRegisteredOwner;
    LPWSTR pszRegisteredCompany;
    LPWSTR pszLanguage;
    LPWSTR pszSupportUrl;
    LPWSTR pszSupportTelephone;
    LPWSTR pszHelpLink;
    LPWSTR pszInstallLocation;
    LPWSTR pszInstallSource;
    LPWSTR pszInstallDate;
    LPWSTR pszContact;
    LPWSTR pszComments;
    LPWSTR pszImage;
    LPWSTR pszReadmeUrl;
    LPWSTR pszUpdateInfoUrl;
    }	APPINFODATA;

typedef struct _AppInfoData __RPC_FAR *PAPPINFODATA;

typedef 
enum _tagAppActionFlags
    {	APPACTION_INSTALL	= 0x1,
	APPACTION_UNINSTALL	= 0x2,
	APPACTION_MODIFY	= 0x4,
	APPACTION_REPAIR	= 0x8,
	APPACTION_UPGRADE	= 0x10,
	APPACTION_CANGETSIZE	= 0x20,
	APPACTION_MODIFYREMOVE	= 0x80,
	APPACTION_ADDLATER	= 0x100,
	APPACTION_UNSCHEDULE	= 0x200
    }	APPACTIONFLAGS;

typedef struct _tagSlowAppInfo
    {
    ULONGLONG ullSize;
    FILETIME ftLastUsed;
    int iTimesUsed;
    LPWSTR pszImage;
    }	SLOWAPPINFO;

typedef struct _tagSlowAppInfo __RPC_FAR *PSLOWAPPINFO;


EXTERN_C const IID IID_IShellApp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A3E14960-935F-11D1-B8B8-006008059382")
    IShellApp : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAppInfo( 
            /* [out][in] */ PAPPINFODATA pai) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPossibleActions( 
            /* [out] */ DWORD __RPC_FAR *pdwActions) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSlowAppInfo( 
            /* [in] */ PSLOWAPPINFO psaid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCachedSlowAppInfo( 
            /* [in] */ PSLOWAPPINFO psaid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsInstalled( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShellAppVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IShellApp __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IShellApp __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IShellApp __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetAppInfo )( 
            IShellApp __RPC_FAR * This,
            /* [out][in] */ PAPPINFODATA pai);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPossibleActions )( 
            IShellApp __RPC_FAR * This,
            /* [out] */ DWORD __RPC_FAR *pdwActions);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetSlowAppInfo )( 
            IShellApp __RPC_FAR * This,
            /* [in] */ PSLOWAPPINFO psaid);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCachedSlowAppInfo )( 
            IShellApp __RPC_FAR * This,
            /* [in] */ PSLOWAPPINFO psaid);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsInstalled )( 
            IShellApp __RPC_FAR * This);
        
        END_INTERFACE
    } IShellAppVtbl;

    interface IShellApp
    {
        CONST_VTBL struct IShellAppVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellApp_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IShellApp_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IShellApp_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IShellApp_GetAppInfo(This,pai)	\
    (This)->lpVtbl -> GetAppInfo(This,pai)

#define IShellApp_GetPossibleActions(This,pdwActions)	\
    (This)->lpVtbl -> GetPossibleActions(This,pdwActions)

#define IShellApp_GetSlowAppInfo(This,psaid)	\
    (This)->lpVtbl -> GetSlowAppInfo(This,psaid)

#define IShellApp_GetCachedSlowAppInfo(This,psaid)	\
    (This)->lpVtbl -> GetCachedSlowAppInfo(This,psaid)

#define IShellApp_IsInstalled(This)	\
    (This)->lpVtbl -> IsInstalled(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IShellApp_GetAppInfo_Proxy( 
    IShellApp __RPC_FAR * This,
    /* [out][in] */ PAPPINFODATA pai);


void __RPC_STUB IShellApp_GetAppInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellApp_GetPossibleActions_Proxy( 
    IShellApp __RPC_FAR * This,
    /* [out] */ DWORD __RPC_FAR *pdwActions);


void __RPC_STUB IShellApp_GetPossibleActions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellApp_GetSlowAppInfo_Proxy( 
    IShellApp __RPC_FAR * This,
    /* [in] */ PSLOWAPPINFO psaid);


void __RPC_STUB IShellApp_GetSlowAppInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellApp_GetCachedSlowAppInfo_Proxy( 
    IShellApp __RPC_FAR * This,
    /* [in] */ PSLOWAPPINFO psaid);


void __RPC_STUB IShellApp_GetCachedSlowAppInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellApp_IsInstalled_Proxy( 
    IShellApp __RPC_FAR * This);


void __RPC_STUB IShellApp_IsInstalled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IShellApp_INTERFACE_DEFINED__ */


#ifndef __IPublishedApp_INTERFACE_DEFINED__
#define __IPublishedApp_INTERFACE_DEFINED__

/* interface IPublishedApp */
/* [object][uuid] */ 

typedef 
enum _tagPublishedAppInfoFlags
    {	PAI_SOURCE	= 0x1,
	PAI_ASSIGNEDTIME	= 0x2,
	PAI_PUBLISHEDTIME	= 0x4,
	PAI_SCHEDULEDTIME	= 0x8,
	PAI_EXPIRETIME	= 0x10
    }	PUBAPPINFOFLAGS;

typedef struct _PubAppInfo
    {
    DWORD cbSize;
    DWORD dwMask;
    LPWSTR pszSource;
    SYSTEMTIME stAssigned;
    SYSTEMTIME stPublished;
    SYSTEMTIME stScheduled;
    SYSTEMTIME stExpire;
    }	PUBAPPINFO;

typedef struct _PubAppInfo __RPC_FAR *PPUBAPPINFO;


EXTERN_C const IID IID_IPublishedApp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1BC752E0-9046-11D1-B8B3-006008059382")
    IPublishedApp : public IShellApp
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Install( 
            /* [in] */ LPSYSTEMTIME pstInstall) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPublishedAppInfo( 
            /* [out][in] */ PPUBAPPINFO ppai) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unschedule( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPublishedAppVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IPublishedApp __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IPublishedApp __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IPublishedApp __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetAppInfo )( 
            IPublishedApp __RPC_FAR * This,
            /* [out][in] */ PAPPINFODATA pai);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPossibleActions )( 
            IPublishedApp __RPC_FAR * This,
            /* [out] */ DWORD __RPC_FAR *pdwActions);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetSlowAppInfo )( 
            IPublishedApp __RPC_FAR * This,
            /* [in] */ PSLOWAPPINFO psaid);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCachedSlowAppInfo )( 
            IPublishedApp __RPC_FAR * This,
            /* [in] */ PSLOWAPPINFO psaid);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsInstalled )( 
            IPublishedApp __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Install )( 
            IPublishedApp __RPC_FAR * This,
            /* [in] */ LPSYSTEMTIME pstInstall);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPublishedAppInfo )( 
            IPublishedApp __RPC_FAR * This,
            /* [out][in] */ PPUBAPPINFO ppai);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Unschedule )( 
            IPublishedApp __RPC_FAR * This);
        
        END_INTERFACE
    } IPublishedAppVtbl;

    interface IPublishedApp
    {
        CONST_VTBL struct IPublishedAppVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPublishedApp_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPublishedApp_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPublishedApp_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IPublishedApp_GetAppInfo(This,pai)	\
    (This)->lpVtbl -> GetAppInfo(This,pai)

#define IPublishedApp_GetPossibleActions(This,pdwActions)	\
    (This)->lpVtbl -> GetPossibleActions(This,pdwActions)

#define IPublishedApp_GetSlowAppInfo(This,psaid)	\
    (This)->lpVtbl -> GetSlowAppInfo(This,psaid)

#define IPublishedApp_GetCachedSlowAppInfo(This,psaid)	\
    (This)->lpVtbl -> GetCachedSlowAppInfo(This,psaid)

#define IPublishedApp_IsInstalled(This)	\
    (This)->lpVtbl -> IsInstalled(This)


#define IPublishedApp_Install(This,pstInstall)	\
    (This)->lpVtbl -> Install(This,pstInstall)

#define IPublishedApp_GetPublishedAppInfo(This,ppai)	\
    (This)->lpVtbl -> GetPublishedAppInfo(This,ppai)

#define IPublishedApp_Unschedule(This)	\
    (This)->lpVtbl -> Unschedule(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IPublishedApp_Install_Proxy( 
    IPublishedApp __RPC_FAR * This,
    /* [in] */ LPSYSTEMTIME pstInstall);


void __RPC_STUB IPublishedApp_Install_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPublishedApp_GetPublishedAppInfo_Proxy( 
    IPublishedApp __RPC_FAR * This,
    /* [out][in] */ PPUBAPPINFO ppai);


void __RPC_STUB IPublishedApp_GetPublishedAppInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPublishedApp_Unschedule_Proxy( 
    IPublishedApp __RPC_FAR * This);


void __RPC_STUB IPublishedApp_Unschedule_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IPublishedApp_INTERFACE_DEFINED__ */


#ifndef __IPublishedApp2_INTERFACE_DEFINED__
#define __IPublishedApp2_INTERFACE_DEFINED__

/* interface IPublishedApp2 */
/* [object][uuid] */ 


EXTERN_C const IID IID_IPublishedApp2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("12B81347-1B3A-4A04-AA61-3F768B67FD7E")
    IPublishedApp2 : public IPublishedApp
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Install2( 
            /* [unique][in] */ LPSYSTEMTIME pstInstall,
            /* [unique][in] */ HWND hwndParent) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPublishedApp2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IPublishedApp2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IPublishedApp2 __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IPublishedApp2 __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetAppInfo )( 
            IPublishedApp2 __RPC_FAR * This,
            /* [out][in] */ PAPPINFODATA pai);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPossibleActions )( 
            IPublishedApp2 __RPC_FAR * This,
            /* [out] */ DWORD __RPC_FAR *pdwActions);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetSlowAppInfo )( 
            IPublishedApp2 __RPC_FAR * This,
            /* [in] */ PSLOWAPPINFO psaid);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCachedSlowAppInfo )( 
            IPublishedApp2 __RPC_FAR * This,
            /* [in] */ PSLOWAPPINFO psaid);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsInstalled )( 
            IPublishedApp2 __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Install )( 
            IPublishedApp2 __RPC_FAR * This,
            /* [in] */ LPSYSTEMTIME pstInstall);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPublishedAppInfo )( 
            IPublishedApp2 __RPC_FAR * This,
            /* [out][in] */ PPUBAPPINFO ppai);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Unschedule )( 
            IPublishedApp2 __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Install2 )( 
            IPublishedApp2 __RPC_FAR * This,
            /* [unique][in] */ LPSYSTEMTIME pstInstall,
            /* [unique][in] */ HWND hwndParent);
        
        END_INTERFACE
    } IPublishedApp2Vtbl;

    interface IPublishedApp2
    {
        CONST_VTBL struct IPublishedApp2Vtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPublishedApp2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPublishedApp2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPublishedApp2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IPublishedApp2_GetAppInfo(This,pai)	\
    (This)->lpVtbl -> GetAppInfo(This,pai)

#define IPublishedApp2_GetPossibleActions(This,pdwActions)	\
    (This)->lpVtbl -> GetPossibleActions(This,pdwActions)

#define IPublishedApp2_GetSlowAppInfo(This,psaid)	\
    (This)->lpVtbl -> GetSlowAppInfo(This,psaid)

#define IPublishedApp2_GetCachedSlowAppInfo(This,psaid)	\
    (This)->lpVtbl -> GetCachedSlowAppInfo(This,psaid)

#define IPublishedApp2_IsInstalled(This)	\
    (This)->lpVtbl -> IsInstalled(This)


#define IPublishedApp2_Install(This,pstInstall)	\
    (This)->lpVtbl -> Install(This,pstInstall)

#define IPublishedApp2_GetPublishedAppInfo(This,ppai)	\
    (This)->lpVtbl -> GetPublishedAppInfo(This,ppai)

#define IPublishedApp2_Unschedule(This)	\
    (This)->lpVtbl -> Unschedule(This)


#define IPublishedApp2_Install2(This,pstInstall,hwndParent)	\
    (This)->lpVtbl -> Install2(This,pstInstall,hwndParent)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IPublishedApp2_Install2_Proxy( 
    IPublishedApp2 __RPC_FAR * This,
    /* [unique][in] */ LPSYSTEMTIME pstInstall,
    /* [unique][in] */ HWND hwndParent);


void __RPC_STUB IPublishedApp2_Install2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IPublishedApp2_INTERFACE_DEFINED__ */


#ifndef __IEnumPublishedApps_INTERFACE_DEFINED__
#define __IEnumPublishedApps_INTERFACE_DEFINED__

/* interface IEnumPublishedApps */
/* [object][uuid] */ 


EXTERN_C const IID IID_IEnumPublishedApps;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0B124F8C-91F0-11D1-B8B5-006008059382")
    IEnumPublishedApps : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ IPublishedApp __RPC_FAR *__RPC_FAR *pia) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumPublishedAppsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IEnumPublishedApps __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IEnumPublishedApps __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IEnumPublishedApps __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Next )( 
            IEnumPublishedApps __RPC_FAR * This,
            /* [out] */ IPublishedApp __RPC_FAR *__RPC_FAR *pia);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Reset )( 
            IEnumPublishedApps __RPC_FAR * This);
        
        END_INTERFACE
    } IEnumPublishedAppsVtbl;

    interface IEnumPublishedApps
    {
        CONST_VTBL struct IEnumPublishedAppsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumPublishedApps_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IEnumPublishedApps_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IEnumPublishedApps_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IEnumPublishedApps_Next(This,pia)	\
    (This)->lpVtbl -> Next(This,pia)

#define IEnumPublishedApps_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IEnumPublishedApps_Next_Proxy( 
    IEnumPublishedApps __RPC_FAR * This,
    /* [out] */ IPublishedApp __RPC_FAR *__RPC_FAR *pia);


void __RPC_STUB IEnumPublishedApps_Next_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumPublishedApps_Reset_Proxy( 
    IEnumPublishedApps __RPC_FAR * This);


void __RPC_STUB IEnumPublishedApps_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEnumPublishedApps_INTERFACE_DEFINED__ */


#ifndef __IAppPublisher_INTERFACE_DEFINED__
#define __IAppPublisher_INTERFACE_DEFINED__

/* interface IAppPublisher */
/* [object][uuid] */ 


EXTERN_C const IID IID_IAppPublisher;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("07250A10-9CF9-11D1-9076-006008059382")
    IAppPublisher : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetNumberOfCategories( 
            /* [out] */ DWORD __RPC_FAR *pdwCat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCategories( 
            /* [out] */ APPCATEGORYINFOLIST __RPC_FAR *pAppCategoryList) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNumberOfApps( 
            /* [out] */ DWORD __RPC_FAR *pdwApps) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumApps( 
            /* [unique][in] */ GUID __RPC_FAR *pAppCategoryId,
            /* [out] */ IEnumPublishedApps __RPC_FAR *__RPC_FAR *ppepa) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAppPublisherVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IAppPublisher __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IAppPublisher __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IAppPublisher __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetNumberOfCategories )( 
            IAppPublisher __RPC_FAR * This,
            /* [out] */ DWORD __RPC_FAR *pdwCat);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCategories )( 
            IAppPublisher __RPC_FAR * This,
            /* [out] */ APPCATEGORYINFOLIST __RPC_FAR *pAppCategoryList);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetNumberOfApps )( 
            IAppPublisher __RPC_FAR * This,
            /* [out] */ DWORD __RPC_FAR *pdwApps);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *EnumApps )( 
            IAppPublisher __RPC_FAR * This,
            /* [unique][in] */ GUID __RPC_FAR *pAppCategoryId,
            /* [out] */ IEnumPublishedApps __RPC_FAR *__RPC_FAR *ppepa);
        
        END_INTERFACE
    } IAppPublisherVtbl;

    interface IAppPublisher
    {
        CONST_VTBL struct IAppPublisherVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppPublisher_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAppPublisher_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAppPublisher_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAppPublisher_GetNumberOfCategories(This,pdwCat)	\
    (This)->lpVtbl -> GetNumberOfCategories(This,pdwCat)

#define IAppPublisher_GetCategories(This,pAppCategoryList)	\
    (This)->lpVtbl -> GetCategories(This,pAppCategoryList)

#define IAppPublisher_GetNumberOfApps(This,pdwApps)	\
    (This)->lpVtbl -> GetNumberOfApps(This,pdwApps)

#define IAppPublisher_EnumApps(This,pAppCategoryId,ppepa)	\
    (This)->lpVtbl -> EnumApps(This,pAppCategoryId,ppepa)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IAppPublisher_GetNumberOfCategories_Proxy( 
    IAppPublisher __RPC_FAR * This,
    /* [out] */ DWORD __RPC_FAR *pdwCat);


void __RPC_STUB IAppPublisher_GetNumberOfCategories_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IAppPublisher_GetCategories_Proxy( 
    IAppPublisher __RPC_FAR * This,
    /* [out] */ APPCATEGORYINFOLIST __RPC_FAR *pAppCategoryList);


void __RPC_STUB IAppPublisher_GetCategories_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IAppPublisher_GetNumberOfApps_Proxy( 
    IAppPublisher __RPC_FAR * This,
    /* [out] */ DWORD __RPC_FAR *pdwApps);


void __RPC_STUB IAppPublisher_GetNumberOfApps_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IAppPublisher_EnumApps_Proxy( 
    IAppPublisher __RPC_FAR * This,
    /* [unique][in] */ GUID __RPC_FAR *pAppCategoryId,
    /* [out] */ IEnumPublishedApps __RPC_FAR *__RPC_FAR *ppepa);


void __RPC_STUB IAppPublisher_EnumApps_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAppPublisher_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shappmgr_0153 */
/* [local] */ 

#endif // _SHAPPMGR_H_


extern RPC_IF_HANDLE __MIDL_itf_shappmgr_0153_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shappmgr_0153_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HWND_UserSize(     unsigned long __RPC_FAR *, unsigned long            , HWND __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  HWND_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, HWND __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  HWND_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, HWND __RPC_FAR * ); 
void                      __RPC_USER  HWND_UserFree(     unsigned long __RPC_FAR *, HWND __RPC_FAR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


