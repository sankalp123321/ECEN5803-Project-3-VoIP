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
/* at Fri Jan 26 17:19:16 2007
 */
/* Compiler settings for ..\exdisp.idl:
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

#ifndef __exdisp_h__
#define __exdisp_h__

/* Forward Declarations */ 

#ifndef __IWebBrowser_FWD_DEFINED__
#define __IWebBrowser_FWD_DEFINED__
typedef interface IWebBrowser IWebBrowser;
#endif 	/* __IWebBrowser_FWD_DEFINED__ */


#ifndef __DWebBrowserEvents_FWD_DEFINED__
#define __DWebBrowserEvents_FWD_DEFINED__
typedef interface DWebBrowserEvents DWebBrowserEvents;
#endif 	/* __DWebBrowserEvents_FWD_DEFINED__ */


#ifndef __IWebBrowserApp_FWD_DEFINED__
#define __IWebBrowserApp_FWD_DEFINED__
typedef interface IWebBrowserApp IWebBrowserApp;
#endif 	/* __IWebBrowserApp_FWD_DEFINED__ */


#ifndef __IWebBrowser2_FWD_DEFINED__
#define __IWebBrowser2_FWD_DEFINED__
typedef interface IWebBrowser2 IWebBrowser2;
#endif 	/* __IWebBrowser2_FWD_DEFINED__ */


#ifndef __DWebBrowserEvents2_FWD_DEFINED__
#define __DWebBrowserEvents2_FWD_DEFINED__
typedef interface DWebBrowserEvents2 DWebBrowserEvents2;
#endif 	/* __DWebBrowserEvents2_FWD_DEFINED__ */


#ifndef __WebBrowser_V1_FWD_DEFINED__
#define __WebBrowser_V1_FWD_DEFINED__

#ifdef __cplusplus
typedef class WebBrowser_V1 WebBrowser_V1;
#else
typedef struct WebBrowser_V1 WebBrowser_V1;
#endif /* __cplusplus */

#endif 	/* __WebBrowser_V1_FWD_DEFINED__ */


#ifndef __WebBrowser_FWD_DEFINED__
#define __WebBrowser_FWD_DEFINED__

#ifdef __cplusplus
typedef class WebBrowser WebBrowser;
#else
typedef struct WebBrowser WebBrowser;
#endif /* __cplusplus */

#endif 	/* __WebBrowser_FWD_DEFINED__ */


#ifndef __InternetExplorer_FWD_DEFINED__
#define __InternetExplorer_FWD_DEFINED__

#ifdef __cplusplus
typedef class InternetExplorer InternetExplorer;
#else
typedef struct InternetExplorer InternetExplorer;
#endif /* __cplusplus */

#endif 	/* __InternetExplorer_FWD_DEFINED__ */


#ifndef __ShellBrowserWindow_FWD_DEFINED__
#define __ShellBrowserWindow_FWD_DEFINED__

#ifdef __cplusplus
typedef class ShellBrowserWindow ShellBrowserWindow;
#else
typedef struct ShellBrowserWindow ShellBrowserWindow;
#endif /* __cplusplus */

#endif 	/* __ShellBrowserWindow_FWD_DEFINED__ */


#ifndef __DShellWindowsEvents_FWD_DEFINED__
#define __DShellWindowsEvents_FWD_DEFINED__
typedef interface DShellWindowsEvents DShellWindowsEvents;
#endif 	/* __DShellWindowsEvents_FWD_DEFINED__ */


#ifndef __IShellWindows_FWD_DEFINED__
#define __IShellWindows_FWD_DEFINED__
typedef interface IShellWindows IShellWindows;
#endif 	/* __IShellWindows_FWD_DEFINED__ */


#ifndef __ShellWindows_FWD_DEFINED__
#define __ShellWindows_FWD_DEFINED__

#ifdef __cplusplus
typedef class ShellWindows ShellWindows;
#else
typedef struct ShellWindows ShellWindows;
#endif /* __cplusplus */

#endif 	/* __ShellWindows_FWD_DEFINED__ */


#ifndef __IShellUIHelper_FWD_DEFINED__
#define __IShellUIHelper_FWD_DEFINED__
typedef interface IShellUIHelper IShellUIHelper;
#endif 	/* __IShellUIHelper_FWD_DEFINED__ */


#ifndef __IShellUIHelper2_FWD_DEFINED__
#define __IShellUIHelper2_FWD_DEFINED__
typedef interface IShellUIHelper2 IShellUIHelper2;
#endif 	/* __IShellUIHelper2_FWD_DEFINED__ */


#ifndef __ShellUIHelper_FWD_DEFINED__
#define __ShellUIHelper_FWD_DEFINED__

#ifdef __cplusplus
typedef class ShellUIHelper ShellUIHelper;
#else
typedef struct ShellUIHelper ShellUIHelper;
#endif /* __cplusplus */

#endif 	/* __ShellUIHelper_FWD_DEFINED__ */


#ifndef __DShellNameSpaceEvents_FWD_DEFINED__
#define __DShellNameSpaceEvents_FWD_DEFINED__
typedef interface DShellNameSpaceEvents DShellNameSpaceEvents;
#endif 	/* __DShellNameSpaceEvents_FWD_DEFINED__ */


#ifndef __IShellFavoritesNameSpace_FWD_DEFINED__
#define __IShellFavoritesNameSpace_FWD_DEFINED__
typedef interface IShellFavoritesNameSpace IShellFavoritesNameSpace;
#endif 	/* __IShellFavoritesNameSpace_FWD_DEFINED__ */


#ifndef __IShellNameSpace_FWD_DEFINED__
#define __IShellNameSpace_FWD_DEFINED__
typedef interface IShellNameSpace IShellNameSpace;
#endif 	/* __IShellNameSpace_FWD_DEFINED__ */


#ifndef __ShellNameSpace_FWD_DEFINED__
#define __ShellNameSpace_FWD_DEFINED__

#ifdef __cplusplus
typedef class ShellNameSpace ShellNameSpace;
#else
typedef struct ShellNameSpace ShellNameSpace;
#endif /* __cplusplus */

#endif 	/* __ShellNameSpace_FWD_DEFINED__ */


#ifndef __ShellShellNameSpace_FWD_DEFINED__
#define __ShellShellNameSpace_FWD_DEFINED__

#ifdef __cplusplus
typedef class ShellShellNameSpace ShellShellNameSpace;
#else
typedef struct ShellShellNameSpace ShellShellNameSpace;
#endif /* __cplusplus */

#endif 	/* __ShellShellNameSpace_FWD_DEFINED__ */


#ifndef __IScriptErrorList_FWD_DEFINED__
#define __IScriptErrorList_FWD_DEFINED__
typedef interface IScriptErrorList IScriptErrorList;
#endif 	/* __IScriptErrorList_FWD_DEFINED__ */


#ifndef __CScriptErrorList_FWD_DEFINED__
#define __CScriptErrorList_FWD_DEFINED__

#ifdef __cplusplus
typedef class CScriptErrorList CScriptErrorList;
#else
typedef struct CScriptErrorList CScriptErrorList;
#endif /* __cplusplus */

#endif 	/* __CScriptErrorList_FWD_DEFINED__ */


/* header files for imported files */
#include "ocidl.h"
#include "docobj.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_exdisp_0000 */
/* [local] */ 

#define SID_SkipHung IID_IEnumVARIANT


extern RPC_IF_HANDLE __MIDL_itf_exdisp_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_exdisp_0000_v0_0_s_ifspec;


#ifndef __SHDocVw_LIBRARY_DEFINED__
#define __SHDocVw_LIBRARY_DEFINED__

/* library SHDocVw */
/* [version][lcid][helpstring][uuid] */ 

typedef /* [helpstring] */ 
enum CommandStateChangeConstants
    {	CSC_UPDATECOMMANDS	= 0xffffffff,
	CSC_NAVIGATEFORWARD	= 0x1,
	CSC_NAVIGATEBACK	= 0x2
    }	CommandStateChangeConstants;

typedef /* [helpstring] */ 
enum SecureLockIconConstants
    {	secureLockIconUnsecure	= 0,
	secureLockIconMixed	= 0x1,
	secureLockIconSecureUnknownBits	= 0x2,
	secureLockIconSecure40Bit	= 0x3,
	secureLockIconSecure56Bit	= 0x4,
	secureLockIconSecureFortezza	= 0x5,
	secureLockIconSecure128Bit	= 0x6
    }	SecureLockIconConstants;

typedef /* [helpstring] */ 
enum ShellWindowTypeConstants
    {	SWC_EXPLORER	= 0,
	SWC_BROWSER	= 0x1,
	SWC_3RDPARTY	= 0x2,
	SWC_CALLBACK	= 0x4,
	SWC_DESKTOP	= 0x8
    }	ShellWindowTypeConstants;

typedef /* [hidden][helpstring] */ 
enum ShellWindowFindWindowOptions
    {	SWFO_NEEDDISPATCH	= 0x1,
	SWFO_INCLUDEPENDING	= 0x2,
	SWFO_COOKIEPASSED	= 0x4
    }	ShellWindowFindWindowOptions;


EXTERN_C const IID LIBID_SHDocVw;

#ifndef __IWebBrowser_INTERFACE_DEFINED__
#define __IWebBrowser_INTERFACE_DEFINED__

/* interface IWebBrowser */
/* [object][oleautomation][dual][hidden][helpcontext][helpstring][uuid] */ 

typedef /* [helpstring] */ 
enum BrowserNavConstants
    {	navOpenInNewWindow	= 0x1,
	navNoHistory	= 0x2,
	navNoReadFromCache	= 0x4,
	navNoWriteToCache	= 0x8,
	navAllowAutosearch	= 0x10,
	navBrowserBar	= 0x20,
	navHyperlink	= 0x40,
	navEnforceRestricted	= 0x80,
	navNewWindowsManaged	= 0x100,
	navUntrustedForDownload	= 0x200,
	navTrustedForActiveX	= 0x400,
	navOpenInNewTab	= 0x800,
	navOpenInBackgroundTab	= 0x1000,
	navKeepWordWheelText	= 0x2000
    }	BrowserNavConstants;

typedef /* [helpstring] */ 
enum RefreshConstants
    {	REFRESH_NORMAL	= 0,
	REFRESH_IFEXPIRED	= 1,
	REFRESH_COMPLETELY	= 3
    }	RefreshConstants;


EXTERN_C const IID IID_IWebBrowser;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EAB22AC1-30C1-11CF-A7EB-0000C05BAE0B")
    IWebBrowser : public IDispatch
    {
    public:
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE GoBack( void) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE GoForward( void) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE GoHome( void) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE GoSearch( void) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE Navigate( 
            /* [in] */ BSTR URL,
            /* [optional][in] */ VARIANT __RPC_FAR *Flags,
            /* [optional][in] */ VARIANT __RPC_FAR *TargetFrameName,
            /* [optional][in] */ VARIANT __RPC_FAR *PostData,
            /* [optional][in] */ VARIANT __RPC_FAR *Headers) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE Refresh( void) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE Refresh2( 
            /* [optional][in] */ VARIANT __RPC_FAR *Level) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Container( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Document( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_TopLevelContainer( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBool) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ BSTR __RPC_FAR *Type) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Left( 
            /* [retval][out] */ long __RPC_FAR *pl) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Left( 
            /* [in] */ long Left) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Top( 
            /* [retval][out] */ long __RPC_FAR *pl) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Top( 
            /* [in] */ long Top) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [retval][out] */ long __RPC_FAR *pl) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Width( 
            /* [in] */ long Width) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Height( 
            /* [retval][out] */ long __RPC_FAR *pl) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Height( 
            /* [in] */ long Height) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LocationName( 
            /* [retval][out] */ BSTR __RPC_FAR *LocationName) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LocationURL( 
            /* [retval][out] */ BSTR __RPC_FAR *LocationURL) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Busy( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBool) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWebBrowserVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IWebBrowser __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IWebBrowser __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IWebBrowser __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IWebBrowser __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IWebBrowser __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IWebBrowser __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IWebBrowser __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GoBack )( 
            IWebBrowser __RPC_FAR * This);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GoForward )( 
            IWebBrowser __RPC_FAR * This);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GoHome )( 
            IWebBrowser __RPC_FAR * This);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GoSearch )( 
            IWebBrowser __RPC_FAR * This);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Navigate )( 
            IWebBrowser __RPC_FAR * This,
            /* [in] */ BSTR URL,
            /* [optional][in] */ VARIANT __RPC_FAR *Flags,
            /* [optional][in] */ VARIANT __RPC_FAR *TargetFrameName,
            /* [optional][in] */ VARIANT __RPC_FAR *PostData,
            /* [optional][in] */ VARIANT __RPC_FAR *Headers);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Refresh )( 
            IWebBrowser __RPC_FAR * This);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Refresh2 )( 
            IWebBrowser __RPC_FAR * This,
            /* [optional][in] */ VARIANT __RPC_FAR *Level);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Stop )( 
            IWebBrowser __RPC_FAR * This);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Application )( 
            IWebBrowser __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Parent )( 
            IWebBrowser __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Container )( 
            IWebBrowser __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Document )( 
            IWebBrowser __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_TopLevelContainer )( 
            IWebBrowser __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBool);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            IWebBrowser __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Type);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Left )( 
            IWebBrowser __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pl);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Left )( 
            IWebBrowser __RPC_FAR * This,
            /* [in] */ long Left);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Top )( 
            IWebBrowser __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pl);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Top )( 
            IWebBrowser __RPC_FAR * This,
            /* [in] */ long Top);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Width )( 
            IWebBrowser __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pl);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Width )( 
            IWebBrowser __RPC_FAR * This,
            /* [in] */ long Width);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Height )( 
            IWebBrowser __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pl);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Height )( 
            IWebBrowser __RPC_FAR * This,
            /* [in] */ long Height);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_LocationName )( 
            IWebBrowser __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *LocationName);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_LocationURL )( 
            IWebBrowser __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *LocationURL);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Busy )( 
            IWebBrowser __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBool);
        
        END_INTERFACE
    } IWebBrowserVtbl;

    interface IWebBrowser
    {
        CONST_VTBL struct IWebBrowserVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWebBrowser_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWebBrowser_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWebBrowser_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWebBrowser_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWebBrowser_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWebBrowser_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWebBrowser_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWebBrowser_GoBack(This)	\
    (This)->lpVtbl -> GoBack(This)

#define IWebBrowser_GoForward(This)	\
    (This)->lpVtbl -> GoForward(This)

#define IWebBrowser_GoHome(This)	\
    (This)->lpVtbl -> GoHome(This)

#define IWebBrowser_GoSearch(This)	\
    (This)->lpVtbl -> GoSearch(This)

#define IWebBrowser_Navigate(This,URL,Flags,TargetFrameName,PostData,Headers)	\
    (This)->lpVtbl -> Navigate(This,URL,Flags,TargetFrameName,PostData,Headers)

#define IWebBrowser_Refresh(This)	\
    (This)->lpVtbl -> Refresh(This)

#define IWebBrowser_Refresh2(This,Level)	\
    (This)->lpVtbl -> Refresh2(This,Level)

#define IWebBrowser_Stop(This)	\
    (This)->lpVtbl -> Stop(This)

#define IWebBrowser_get_Application(This,ppDisp)	\
    (This)->lpVtbl -> get_Application(This,ppDisp)

#define IWebBrowser_get_Parent(This,ppDisp)	\
    (This)->lpVtbl -> get_Parent(This,ppDisp)

#define IWebBrowser_get_Container(This,ppDisp)	\
    (This)->lpVtbl -> get_Container(This,ppDisp)

#define IWebBrowser_get_Document(This,ppDisp)	\
    (This)->lpVtbl -> get_Document(This,ppDisp)

#define IWebBrowser_get_TopLevelContainer(This,pBool)	\
    (This)->lpVtbl -> get_TopLevelContainer(This,pBool)

#define IWebBrowser_get_Type(This,Type)	\
    (This)->lpVtbl -> get_Type(This,Type)

#define IWebBrowser_get_Left(This,pl)	\
    (This)->lpVtbl -> get_Left(This,pl)

#define IWebBrowser_put_Left(This,Left)	\
    (This)->lpVtbl -> put_Left(This,Left)

#define IWebBrowser_get_Top(This,pl)	\
    (This)->lpVtbl -> get_Top(This,pl)

#define IWebBrowser_put_Top(This,Top)	\
    (This)->lpVtbl -> put_Top(This,Top)

#define IWebBrowser_get_Width(This,pl)	\
    (This)->lpVtbl -> get_Width(This,pl)

#define IWebBrowser_put_Width(This,Width)	\
    (This)->lpVtbl -> put_Width(This,Width)

#define IWebBrowser_get_Height(This,pl)	\
    (This)->lpVtbl -> get_Height(This,pl)

#define IWebBrowser_put_Height(This,Height)	\
    (This)->lpVtbl -> put_Height(This,Height)

#define IWebBrowser_get_LocationName(This,LocationName)	\
    (This)->lpVtbl -> get_LocationName(This,LocationName)

#define IWebBrowser_get_LocationURL(This,LocationURL)	\
    (This)->lpVtbl -> get_LocationURL(This,LocationURL)

#define IWebBrowser_get_Busy(This,pBool)	\
    (This)->lpVtbl -> get_Busy(This,pBool)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser_GoBack_Proxy( 
    IWebBrowser __RPC_FAR * This);


void __RPC_STUB IWebBrowser_GoBack_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser_GoForward_Proxy( 
    IWebBrowser __RPC_FAR * This);


void __RPC_STUB IWebBrowser_GoForward_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser_GoHome_Proxy( 
    IWebBrowser __RPC_FAR * This);


void __RPC_STUB IWebBrowser_GoHome_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser_GoSearch_Proxy( 
    IWebBrowser __RPC_FAR * This);


void __RPC_STUB IWebBrowser_GoSearch_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser_Navigate_Proxy( 
    IWebBrowser __RPC_FAR * This,
    /* [in] */ BSTR URL,
    /* [optional][in] */ VARIANT __RPC_FAR *Flags,
    /* [optional][in] */ VARIANT __RPC_FAR *TargetFrameName,
    /* [optional][in] */ VARIANT __RPC_FAR *PostData,
    /* [optional][in] */ VARIANT __RPC_FAR *Headers);


void __RPC_STUB IWebBrowser_Navigate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser_Refresh_Proxy( 
    IWebBrowser __RPC_FAR * This);


void __RPC_STUB IWebBrowser_Refresh_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser_Refresh2_Proxy( 
    IWebBrowser __RPC_FAR * This,
    /* [optional][in] */ VARIANT __RPC_FAR *Level);


void __RPC_STUB IWebBrowser_Refresh2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser_Stop_Proxy( 
    IWebBrowser __RPC_FAR * This);


void __RPC_STUB IWebBrowser_Stop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser_get_Application_Proxy( 
    IWebBrowser __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp);


void __RPC_STUB IWebBrowser_get_Application_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser_get_Parent_Proxy( 
    IWebBrowser __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp);


void __RPC_STUB IWebBrowser_get_Parent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser_get_Container_Proxy( 
    IWebBrowser __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp);


void __RPC_STUB IWebBrowser_get_Container_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser_get_Document_Proxy( 
    IWebBrowser __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp);


void __RPC_STUB IWebBrowser_get_Document_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser_get_TopLevelContainer_Proxy( 
    IWebBrowser __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBool);


void __RPC_STUB IWebBrowser_get_TopLevelContainer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser_get_Type_Proxy( 
    IWebBrowser __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Type);


void __RPC_STUB IWebBrowser_get_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser_get_Left_Proxy( 
    IWebBrowser __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pl);


void __RPC_STUB IWebBrowser_get_Left_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser_put_Left_Proxy( 
    IWebBrowser __RPC_FAR * This,
    /* [in] */ long Left);


void __RPC_STUB IWebBrowser_put_Left_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser_get_Top_Proxy( 
    IWebBrowser __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pl);


void __RPC_STUB IWebBrowser_get_Top_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser_put_Top_Proxy( 
    IWebBrowser __RPC_FAR * This,
    /* [in] */ long Top);


void __RPC_STUB IWebBrowser_put_Top_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser_get_Width_Proxy( 
    IWebBrowser __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pl);


void __RPC_STUB IWebBrowser_get_Width_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser_put_Width_Proxy( 
    IWebBrowser __RPC_FAR * This,
    /* [in] */ long Width);


void __RPC_STUB IWebBrowser_put_Width_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser_get_Height_Proxy( 
    IWebBrowser __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pl);


void __RPC_STUB IWebBrowser_get_Height_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser_put_Height_Proxy( 
    IWebBrowser __RPC_FAR * This,
    /* [in] */ long Height);


void __RPC_STUB IWebBrowser_put_Height_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser_get_LocationName_Proxy( 
    IWebBrowser __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *LocationName);


void __RPC_STUB IWebBrowser_get_LocationName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser_get_LocationURL_Proxy( 
    IWebBrowser __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *LocationURL);


void __RPC_STUB IWebBrowser_get_LocationURL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser_get_Busy_Proxy( 
    IWebBrowser __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBool);


void __RPC_STUB IWebBrowser_get_Busy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWebBrowser_INTERFACE_DEFINED__ */


#ifndef __DWebBrowserEvents_DISPINTERFACE_DEFINED__
#define __DWebBrowserEvents_DISPINTERFACE_DEFINED__

/* dispinterface DWebBrowserEvents */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID_DWebBrowserEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("EAB22AC2-30C1-11CF-A7EB-0000C05BAE0B")
    DWebBrowserEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct DWebBrowserEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            DWebBrowserEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            DWebBrowserEvents __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            DWebBrowserEvents __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            DWebBrowserEvents __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            DWebBrowserEvents __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            DWebBrowserEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            DWebBrowserEvents __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        END_INTERFACE
    } DWebBrowserEventsVtbl;

    interface DWebBrowserEvents
    {
        CONST_VTBL struct DWebBrowserEventsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define DWebBrowserEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define DWebBrowserEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define DWebBrowserEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define DWebBrowserEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define DWebBrowserEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define DWebBrowserEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define DWebBrowserEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __DWebBrowserEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IWebBrowserApp_INTERFACE_DEFINED__
#define __IWebBrowserApp_INTERFACE_DEFINED__

/* interface IWebBrowserApp */
/* [object][dual][oleautomation][hidden][helpcontext][helpstring][uuid] */ 


EXTERN_C const IID IID_IWebBrowserApp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002DF05-0000-0000-C000-000000000046")
    IWebBrowserApp : public IWebBrowser
    {
    public:
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE Quit( void) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE ClientToWindow( 
            /* [out][in] */ int __RPC_FAR *pcx,
            /* [out][in] */ int __RPC_FAR *pcy) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE PutProperty( 
            /* [in] */ BSTR Property,
            /* [in] */ VARIANT vtValue) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR Property,
            /* [retval][out] */ VARIANT __RPC_FAR *pvtValue) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR __RPC_FAR *Name) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_HWND( 
            /* [retval][out] */ SHANDLE_PTR __RPC_FAR *pHWND) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_FullName( 
            /* [retval][out] */ BSTR __RPC_FAR *FullName) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Path( 
            /* [retval][out] */ BSTR __RPC_FAR *Path) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Visible( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBool) = 0;
        
        virtual /* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Visible( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_StatusBar( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBool) = 0;
        
        virtual /* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_StatusBar( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_StatusText( 
            /* [retval][out] */ BSTR __RPC_FAR *StatusText) = 0;
        
        virtual /* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_StatusText( 
            /* [in] */ BSTR StatusText) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ToolBar( 
            /* [retval][out] */ int __RPC_FAR *Value) = 0;
        
        virtual /* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ToolBar( 
            /* [in] */ int Value) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MenuBar( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *Value) = 0;
        
        virtual /* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_MenuBar( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_FullScreen( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbFullScreen) = 0;
        
        virtual /* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_FullScreen( 
            /* [in] */ VARIANT_BOOL bFullScreen) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWebBrowserAppVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IWebBrowserApp __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IWebBrowserApp __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GoBack )( 
            IWebBrowserApp __RPC_FAR * This);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GoForward )( 
            IWebBrowserApp __RPC_FAR * This);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GoHome )( 
            IWebBrowserApp __RPC_FAR * This);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GoSearch )( 
            IWebBrowserApp __RPC_FAR * This);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Navigate )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [in] */ BSTR URL,
            /* [optional][in] */ VARIANT __RPC_FAR *Flags,
            /* [optional][in] */ VARIANT __RPC_FAR *TargetFrameName,
            /* [optional][in] */ VARIANT __RPC_FAR *PostData,
            /* [optional][in] */ VARIANT __RPC_FAR *Headers);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Refresh )( 
            IWebBrowserApp __RPC_FAR * This);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Refresh2 )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [optional][in] */ VARIANT __RPC_FAR *Level);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Stop )( 
            IWebBrowserApp __RPC_FAR * This);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Application )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Parent )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Container )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Document )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_TopLevelContainer )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBool);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Type);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Left )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pl);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Left )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [in] */ long Left);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Top )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pl);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Top )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [in] */ long Top);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Width )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pl);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Width )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [in] */ long Width);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Height )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pl);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Height )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [in] */ long Height);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_LocationName )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *LocationName);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_LocationURL )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *LocationURL);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Busy )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBool);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Quit )( 
            IWebBrowserApp __RPC_FAR * This);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ClientToWindow )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [out][in] */ int __RPC_FAR *pcx,
            /* [out][in] */ int __RPC_FAR *pcy);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *PutProperty )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [in] */ BSTR Property,
            /* [in] */ VARIANT vtValue);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetProperty )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [in] */ BSTR Property,
            /* [retval][out] */ VARIANT __RPC_FAR *pvtValue);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Name )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Name);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_HWND )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [retval][out] */ SHANDLE_PTR __RPC_FAR *pHWND);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_FullName )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *FullName);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Path )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Path);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Visible )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBool);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Visible )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StatusBar )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBool);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_StatusBar )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StatusText )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *StatusText);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_StatusText )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [in] */ BSTR StatusText);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ToolBar )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [retval][out] */ int __RPC_FAR *Value);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_ToolBar )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [in] */ int Value);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MenuBar )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *Value);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_MenuBar )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_FullScreen )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbFullScreen);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_FullScreen )( 
            IWebBrowserApp __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL bFullScreen);
        
        END_INTERFACE
    } IWebBrowserAppVtbl;

    interface IWebBrowserApp
    {
        CONST_VTBL struct IWebBrowserAppVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWebBrowserApp_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWebBrowserApp_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWebBrowserApp_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWebBrowserApp_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWebBrowserApp_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWebBrowserApp_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWebBrowserApp_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWebBrowserApp_GoBack(This)	\
    (This)->lpVtbl -> GoBack(This)

#define IWebBrowserApp_GoForward(This)	\
    (This)->lpVtbl -> GoForward(This)

#define IWebBrowserApp_GoHome(This)	\
    (This)->lpVtbl -> GoHome(This)

#define IWebBrowserApp_GoSearch(This)	\
    (This)->lpVtbl -> GoSearch(This)

#define IWebBrowserApp_Navigate(This,URL,Flags,TargetFrameName,PostData,Headers)	\
    (This)->lpVtbl -> Navigate(This,URL,Flags,TargetFrameName,PostData,Headers)

#define IWebBrowserApp_Refresh(This)	\
    (This)->lpVtbl -> Refresh(This)

#define IWebBrowserApp_Refresh2(This,Level)	\
    (This)->lpVtbl -> Refresh2(This,Level)

#define IWebBrowserApp_Stop(This)	\
    (This)->lpVtbl -> Stop(This)

#define IWebBrowserApp_get_Application(This,ppDisp)	\
    (This)->lpVtbl -> get_Application(This,ppDisp)

#define IWebBrowserApp_get_Parent(This,ppDisp)	\
    (This)->lpVtbl -> get_Parent(This,ppDisp)

#define IWebBrowserApp_get_Container(This,ppDisp)	\
    (This)->lpVtbl -> get_Container(This,ppDisp)

#define IWebBrowserApp_get_Document(This,ppDisp)	\
    (This)->lpVtbl -> get_Document(This,ppDisp)

#define IWebBrowserApp_get_TopLevelContainer(This,pBool)	\
    (This)->lpVtbl -> get_TopLevelContainer(This,pBool)

#define IWebBrowserApp_get_Type(This,Type)	\
    (This)->lpVtbl -> get_Type(This,Type)

#define IWebBrowserApp_get_Left(This,pl)	\
    (This)->lpVtbl -> get_Left(This,pl)

#define IWebBrowserApp_put_Left(This,Left)	\
    (This)->lpVtbl -> put_Left(This,Left)

#define IWebBrowserApp_get_Top(This,pl)	\
    (This)->lpVtbl -> get_Top(This,pl)

#define IWebBrowserApp_put_Top(This,Top)	\
    (This)->lpVtbl -> put_Top(This,Top)

#define IWebBrowserApp_get_Width(This,pl)	\
    (This)->lpVtbl -> get_Width(This,pl)

#define IWebBrowserApp_put_Width(This,Width)	\
    (This)->lpVtbl -> put_Width(This,Width)

#define IWebBrowserApp_get_Height(This,pl)	\
    (This)->lpVtbl -> get_Height(This,pl)

#define IWebBrowserApp_put_Height(This,Height)	\
    (This)->lpVtbl -> put_Height(This,Height)

#define IWebBrowserApp_get_LocationName(This,LocationName)	\
    (This)->lpVtbl -> get_LocationName(This,LocationName)

#define IWebBrowserApp_get_LocationURL(This,LocationURL)	\
    (This)->lpVtbl -> get_LocationURL(This,LocationURL)

#define IWebBrowserApp_get_Busy(This,pBool)	\
    (This)->lpVtbl -> get_Busy(This,pBool)


#define IWebBrowserApp_Quit(This)	\
    (This)->lpVtbl -> Quit(This)

#define IWebBrowserApp_ClientToWindow(This,pcx,pcy)	\
    (This)->lpVtbl -> ClientToWindow(This,pcx,pcy)

#define IWebBrowserApp_PutProperty(This,Property,vtValue)	\
    (This)->lpVtbl -> PutProperty(This,Property,vtValue)

#define IWebBrowserApp_GetProperty(This,Property,pvtValue)	\
    (This)->lpVtbl -> GetProperty(This,Property,pvtValue)

#define IWebBrowserApp_get_Name(This,Name)	\
    (This)->lpVtbl -> get_Name(This,Name)

#define IWebBrowserApp_get_HWND(This,pHWND)	\
    (This)->lpVtbl -> get_HWND(This,pHWND)

#define IWebBrowserApp_get_FullName(This,FullName)	\
    (This)->lpVtbl -> get_FullName(This,FullName)

#define IWebBrowserApp_get_Path(This,Path)	\
    (This)->lpVtbl -> get_Path(This,Path)

#define IWebBrowserApp_get_Visible(This,pBool)	\
    (This)->lpVtbl -> get_Visible(This,pBool)

#define IWebBrowserApp_put_Visible(This,Value)	\
    (This)->lpVtbl -> put_Visible(This,Value)

#define IWebBrowserApp_get_StatusBar(This,pBool)	\
    (This)->lpVtbl -> get_StatusBar(This,pBool)

#define IWebBrowserApp_put_StatusBar(This,Value)	\
    (This)->lpVtbl -> put_StatusBar(This,Value)

#define IWebBrowserApp_get_StatusText(This,StatusText)	\
    (This)->lpVtbl -> get_StatusText(This,StatusText)

#define IWebBrowserApp_put_StatusText(This,StatusText)	\
    (This)->lpVtbl -> put_StatusText(This,StatusText)

#define IWebBrowserApp_get_ToolBar(This,Value)	\
    (This)->lpVtbl -> get_ToolBar(This,Value)

#define IWebBrowserApp_put_ToolBar(This,Value)	\
    (This)->lpVtbl -> put_ToolBar(This,Value)

#define IWebBrowserApp_get_MenuBar(This,Value)	\
    (This)->lpVtbl -> get_MenuBar(This,Value)

#define IWebBrowserApp_put_MenuBar(This,Value)	\
    (This)->lpVtbl -> put_MenuBar(This,Value)

#define IWebBrowserApp_get_FullScreen(This,pbFullScreen)	\
    (This)->lpVtbl -> get_FullScreen(This,pbFullScreen)

#define IWebBrowserApp_put_FullScreen(This,bFullScreen)	\
    (This)->lpVtbl -> put_FullScreen(This,bFullScreen)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IWebBrowserApp_Quit_Proxy( 
    IWebBrowserApp __RPC_FAR * This);


void __RPC_STUB IWebBrowserApp_Quit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IWebBrowserApp_ClientToWindow_Proxy( 
    IWebBrowserApp __RPC_FAR * This,
    /* [out][in] */ int __RPC_FAR *pcx,
    /* [out][in] */ int __RPC_FAR *pcy);


void __RPC_STUB IWebBrowserApp_ClientToWindow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IWebBrowserApp_PutProperty_Proxy( 
    IWebBrowserApp __RPC_FAR * This,
    /* [in] */ BSTR Property,
    /* [in] */ VARIANT vtValue);


void __RPC_STUB IWebBrowserApp_PutProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IWebBrowserApp_GetProperty_Proxy( 
    IWebBrowserApp __RPC_FAR * This,
    /* [in] */ BSTR Property,
    /* [retval][out] */ VARIANT __RPC_FAR *pvtValue);


void __RPC_STUB IWebBrowserApp_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebBrowserApp_get_Name_Proxy( 
    IWebBrowserApp __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Name);


void __RPC_STUB IWebBrowserApp_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebBrowserApp_get_HWND_Proxy( 
    IWebBrowserApp __RPC_FAR * This,
    /* [retval][out] */ SHANDLE_PTR __RPC_FAR *pHWND);


void __RPC_STUB IWebBrowserApp_get_HWND_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebBrowserApp_get_FullName_Proxy( 
    IWebBrowserApp __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *FullName);


void __RPC_STUB IWebBrowserApp_get_FullName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebBrowserApp_get_Path_Proxy( 
    IWebBrowserApp __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Path);


void __RPC_STUB IWebBrowserApp_get_Path_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebBrowserApp_get_Visible_Proxy( 
    IWebBrowserApp __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBool);


void __RPC_STUB IWebBrowserApp_get_Visible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IWebBrowserApp_put_Visible_Proxy( 
    IWebBrowserApp __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL Value);


void __RPC_STUB IWebBrowserApp_put_Visible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebBrowserApp_get_StatusBar_Proxy( 
    IWebBrowserApp __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBool);


void __RPC_STUB IWebBrowserApp_get_StatusBar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IWebBrowserApp_put_StatusBar_Proxy( 
    IWebBrowserApp __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL Value);


void __RPC_STUB IWebBrowserApp_put_StatusBar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebBrowserApp_get_StatusText_Proxy( 
    IWebBrowserApp __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *StatusText);


void __RPC_STUB IWebBrowserApp_get_StatusText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IWebBrowserApp_put_StatusText_Proxy( 
    IWebBrowserApp __RPC_FAR * This,
    /* [in] */ BSTR StatusText);


void __RPC_STUB IWebBrowserApp_put_StatusText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebBrowserApp_get_ToolBar_Proxy( 
    IWebBrowserApp __RPC_FAR * This,
    /* [retval][out] */ int __RPC_FAR *Value);


void __RPC_STUB IWebBrowserApp_get_ToolBar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IWebBrowserApp_put_ToolBar_Proxy( 
    IWebBrowserApp __RPC_FAR * This,
    /* [in] */ int Value);


void __RPC_STUB IWebBrowserApp_put_ToolBar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebBrowserApp_get_MenuBar_Proxy( 
    IWebBrowserApp __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *Value);


void __RPC_STUB IWebBrowserApp_get_MenuBar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IWebBrowserApp_put_MenuBar_Proxy( 
    IWebBrowserApp __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL Value);


void __RPC_STUB IWebBrowserApp_put_MenuBar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebBrowserApp_get_FullScreen_Proxy( 
    IWebBrowserApp __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbFullScreen);


void __RPC_STUB IWebBrowserApp_get_FullScreen_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IWebBrowserApp_put_FullScreen_Proxy( 
    IWebBrowserApp __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL bFullScreen);


void __RPC_STUB IWebBrowserApp_put_FullScreen_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWebBrowserApp_INTERFACE_DEFINED__ */


#ifndef __IWebBrowser2_INTERFACE_DEFINED__
#define __IWebBrowser2_INTERFACE_DEFINED__

/* interface IWebBrowser2 */
/* [object][dual][oleautomation][hidden][helpcontext][helpstring][uuid] */ 


EXTERN_C const IID IID_IWebBrowser2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D30C1661-CDAF-11d0-8A3E-00C04FC9E26E")
    IWebBrowser2 : public IWebBrowserApp
    {
    public:
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE Navigate2( 
            /* [in] */ VARIANT __RPC_FAR *URL,
            /* [optional][in] */ VARIANT __RPC_FAR *Flags,
            /* [optional][in] */ VARIANT __RPC_FAR *TargetFrameName,
            /* [optional][in] */ VARIANT __RPC_FAR *PostData,
            /* [optional][in] */ VARIANT __RPC_FAR *Headers) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE QueryStatusWB( 
            /* [in] */ OLECMDID cmdID,
            /* [retval][out] */ OLECMDF __RPC_FAR *pcmdf) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE ExecWB( 
            /* [in] */ OLECMDID cmdID,
            /* [in] */ OLECMDEXECOPT cmdexecopt,
            /* [optional][in] */ VARIANT __RPC_FAR *pvaIn,
            /* [optional][in][out] */ VARIANT __RPC_FAR *pvaOut) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE ShowBrowserBar( 
            /* [in] */ VARIANT __RPC_FAR *pvaClsid,
            /* [optional][in] */ VARIANT __RPC_FAR *pvarShow,
            /* [optional][in] */ VARIANT __RPC_FAR *pvarSize) = 0;
        
        virtual /* [bindable][propget][id] */ HRESULT STDMETHODCALLTYPE get_ReadyState( 
            /* [out][retval] */ READYSTATE __RPC_FAR *plReadyState) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Offline( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbOffline) = 0;
        
        virtual /* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Offline( 
            /* [in] */ VARIANT_BOOL bOffline) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Silent( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbSilent) = 0;
        
        virtual /* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Silent( 
            /* [in] */ VARIANT_BOOL bSilent) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RegisterAsBrowser( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbRegister) = 0;
        
        virtual /* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_RegisterAsBrowser( 
            /* [in] */ VARIANT_BOOL bRegister) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RegisterAsDropTarget( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbRegister) = 0;
        
        virtual /* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_RegisterAsDropTarget( 
            /* [in] */ VARIANT_BOOL bRegister) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_TheaterMode( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbRegister) = 0;
        
        virtual /* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_TheaterMode( 
            /* [in] */ VARIANT_BOOL bRegister) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AddressBar( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *Value) = 0;
        
        virtual /* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_AddressBar( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Resizable( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *Value) = 0;
        
        virtual /* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Resizable( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWebBrowser2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IWebBrowser2 __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IWebBrowser2 __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GoBack )( 
            IWebBrowser2 __RPC_FAR * This);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GoForward )( 
            IWebBrowser2 __RPC_FAR * This);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GoHome )( 
            IWebBrowser2 __RPC_FAR * This);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GoSearch )( 
            IWebBrowser2 __RPC_FAR * This);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Navigate )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [in] */ BSTR URL,
            /* [optional][in] */ VARIANT __RPC_FAR *Flags,
            /* [optional][in] */ VARIANT __RPC_FAR *TargetFrameName,
            /* [optional][in] */ VARIANT __RPC_FAR *PostData,
            /* [optional][in] */ VARIANT __RPC_FAR *Headers);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Refresh )( 
            IWebBrowser2 __RPC_FAR * This);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Refresh2 )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [optional][in] */ VARIANT __RPC_FAR *Level);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Stop )( 
            IWebBrowser2 __RPC_FAR * This);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Application )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Parent )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Container )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Document )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppDisp);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_TopLevelContainer )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBool);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Type);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Left )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pl);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Left )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [in] */ long Left);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Top )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pl);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Top )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [in] */ long Top);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Width )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pl);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Width )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [in] */ long Width);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Height )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pl);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Height )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [in] */ long Height);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_LocationName )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *LocationName);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_LocationURL )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *LocationURL);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Busy )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBool);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Quit )( 
            IWebBrowser2 __RPC_FAR * This);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ClientToWindow )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [out][in] */ int __RPC_FAR *pcx,
            /* [out][in] */ int __RPC_FAR *pcy);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *PutProperty )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [in] */ BSTR Property,
            /* [in] */ VARIANT vtValue);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetProperty )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [in] */ BSTR Property,
            /* [retval][out] */ VARIANT __RPC_FAR *pvtValue);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Name )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Name);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_HWND )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [retval][out] */ SHANDLE_PTR __RPC_FAR *pHWND);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_FullName )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *FullName);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Path )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Path);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Visible )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBool);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Visible )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StatusBar )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBool);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_StatusBar )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StatusText )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *StatusText);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_StatusText )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [in] */ BSTR StatusText);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ToolBar )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [retval][out] */ int __RPC_FAR *Value);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_ToolBar )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [in] */ int Value);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MenuBar )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *Value);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_MenuBar )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_FullScreen )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbFullScreen);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_FullScreen )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL bFullScreen);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Navigate2 )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [in] */ VARIANT __RPC_FAR *URL,
            /* [optional][in] */ VARIANT __RPC_FAR *Flags,
            /* [optional][in] */ VARIANT __RPC_FAR *TargetFrameName,
            /* [optional][in] */ VARIANT __RPC_FAR *PostData,
            /* [optional][in] */ VARIANT __RPC_FAR *Headers);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryStatusWB )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [in] */ OLECMDID cmdID,
            /* [retval][out] */ OLECMDF __RPC_FAR *pcmdf);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ExecWB )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [in] */ OLECMDID cmdID,
            /* [in] */ OLECMDEXECOPT cmdexecopt,
            /* [optional][in] */ VARIANT __RPC_FAR *pvaIn,
            /* [optional][in][out] */ VARIANT __RPC_FAR *pvaOut);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ShowBrowserBar )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [in] */ VARIANT __RPC_FAR *pvaClsid,
            /* [optional][in] */ VARIANT __RPC_FAR *pvarShow,
            /* [optional][in] */ VARIANT __RPC_FAR *pvarSize);
        
        /* [bindable][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ReadyState )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [out][retval] */ READYSTATE __RPC_FAR *plReadyState);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Offline )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbOffline);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Offline )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL bOffline);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Silent )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbSilent);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Silent )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL bSilent);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_RegisterAsBrowser )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbRegister);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_RegisterAsBrowser )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL bRegister);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_RegisterAsDropTarget )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbRegister);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_RegisterAsDropTarget )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL bRegister);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_TheaterMode )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbRegister);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_TheaterMode )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL bRegister);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_AddressBar )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *Value);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_AddressBar )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Resizable )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *Value);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Resizable )( 
            IWebBrowser2 __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL Value);
        
        END_INTERFACE
    } IWebBrowser2Vtbl;

    interface IWebBrowser2
    {
        CONST_VTBL struct IWebBrowser2Vtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWebBrowser2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWebBrowser2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWebBrowser2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWebBrowser2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWebBrowser2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWebBrowser2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWebBrowser2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWebBrowser2_GoBack(This)	\
    (This)->lpVtbl -> GoBack(This)

#define IWebBrowser2_GoForward(This)	\
    (This)->lpVtbl -> GoForward(This)

#define IWebBrowser2_GoHome(This)	\
    (This)->lpVtbl -> GoHome(This)

#define IWebBrowser2_GoSearch(This)	\
    (This)->lpVtbl -> GoSearch(This)

#define IWebBrowser2_Navigate(This,URL,Flags,TargetFrameName,PostData,Headers)	\
    (This)->lpVtbl -> Navigate(This,URL,Flags,TargetFrameName,PostData,Headers)

#define IWebBrowser2_Refresh(This)	\
    (This)->lpVtbl -> Refresh(This)

#define IWebBrowser2_Refresh2(This,Level)	\
    (This)->lpVtbl -> Refresh2(This,Level)

#define IWebBrowser2_Stop(This)	\
    (This)->lpVtbl -> Stop(This)

#define IWebBrowser2_get_Application(This,ppDisp)	\
    (This)->lpVtbl -> get_Application(This,ppDisp)

#define IWebBrowser2_get_Parent(This,ppDisp)	\
    (This)->lpVtbl -> get_Parent(This,ppDisp)

#define IWebBrowser2_get_Container(This,ppDisp)	\
    (This)->lpVtbl -> get_Container(This,ppDisp)

#define IWebBrowser2_get_Document(This,ppDisp)	\
    (This)->lpVtbl -> get_Document(This,ppDisp)

#define IWebBrowser2_get_TopLevelContainer(This,pBool)	\
    (This)->lpVtbl -> get_TopLevelContainer(This,pBool)

#define IWebBrowser2_get_Type(This,Type)	\
    (This)->lpVtbl -> get_Type(This,Type)

#define IWebBrowser2_get_Left(This,pl)	\
    (This)->lpVtbl -> get_Left(This,pl)

#define IWebBrowser2_put_Left(This,Left)	\
    (This)->lpVtbl -> put_Left(This,Left)

#define IWebBrowser2_get_Top(This,pl)	\
    (This)->lpVtbl -> get_Top(This,pl)

#define IWebBrowser2_put_Top(This,Top)	\
    (This)->lpVtbl -> put_Top(This,Top)

#define IWebBrowser2_get_Width(This,pl)	\
    (This)->lpVtbl -> get_Width(This,pl)

#define IWebBrowser2_put_Width(This,Width)	\
    (This)->lpVtbl -> put_Width(This,Width)

#define IWebBrowser2_get_Height(This,pl)	\
    (This)->lpVtbl -> get_Height(This,pl)

#define IWebBrowser2_put_Height(This,Height)	\
    (This)->lpVtbl -> put_Height(This,Height)

#define IWebBrowser2_get_LocationName(This,LocationName)	\
    (This)->lpVtbl -> get_LocationName(This,LocationName)

#define IWebBrowser2_get_LocationURL(This,LocationURL)	\
    (This)->lpVtbl -> get_LocationURL(This,LocationURL)

#define IWebBrowser2_get_Busy(This,pBool)	\
    (This)->lpVtbl -> get_Busy(This,pBool)


#define IWebBrowser2_Quit(This)	\
    (This)->lpVtbl -> Quit(This)

#define IWebBrowser2_ClientToWindow(This,pcx,pcy)	\
    (This)->lpVtbl -> ClientToWindow(This,pcx,pcy)

#define IWebBrowser2_PutProperty(This,Property,vtValue)	\
    (This)->lpVtbl -> PutProperty(This,Property,vtValue)

#define IWebBrowser2_GetProperty(This,Property,pvtValue)	\
    (This)->lpVtbl -> GetProperty(This,Property,pvtValue)

#define IWebBrowser2_get_Name(This,Name)	\
    (This)->lpVtbl -> get_Name(This,Name)

#define IWebBrowser2_get_HWND(This,pHWND)	\
    (This)->lpVtbl -> get_HWND(This,pHWND)

#define IWebBrowser2_get_FullName(This,FullName)	\
    (This)->lpVtbl -> get_FullName(This,FullName)

#define IWebBrowser2_get_Path(This,Path)	\
    (This)->lpVtbl -> get_Path(This,Path)

#define IWebBrowser2_get_Visible(This,pBool)	\
    (This)->lpVtbl -> get_Visible(This,pBool)

#define IWebBrowser2_put_Visible(This,Value)	\
    (This)->lpVtbl -> put_Visible(This,Value)

#define IWebBrowser2_get_StatusBar(This,pBool)	\
    (This)->lpVtbl -> get_StatusBar(This,pBool)

#define IWebBrowser2_put_StatusBar(This,Value)	\
    (This)->lpVtbl -> put_StatusBar(This,Value)

#define IWebBrowser2_get_StatusText(This,StatusText)	\
    (This)->lpVtbl -> get_StatusText(This,StatusText)

#define IWebBrowser2_put_StatusText(This,StatusText)	\
    (This)->lpVtbl -> put_StatusText(This,StatusText)

#define IWebBrowser2_get_ToolBar(This,Value)	\
    (This)->lpVtbl -> get_ToolBar(This,Value)

#define IWebBrowser2_put_ToolBar(This,Value)	\
    (This)->lpVtbl -> put_ToolBar(This,Value)

#define IWebBrowser2_get_MenuBar(This,Value)	\
    (This)->lpVtbl -> get_MenuBar(This,Value)

#define IWebBrowser2_put_MenuBar(This,Value)	\
    (This)->lpVtbl -> put_MenuBar(This,Value)

#define IWebBrowser2_get_FullScreen(This,pbFullScreen)	\
    (This)->lpVtbl -> get_FullScreen(This,pbFullScreen)

#define IWebBrowser2_put_FullScreen(This,bFullScreen)	\
    (This)->lpVtbl -> put_FullScreen(This,bFullScreen)


#define IWebBrowser2_Navigate2(This,URL,Flags,TargetFrameName,PostData,Headers)	\
    (This)->lpVtbl -> Navigate2(This,URL,Flags,TargetFrameName,PostData,Headers)

#define IWebBrowser2_QueryStatusWB(This,cmdID,pcmdf)	\
    (This)->lpVtbl -> QueryStatusWB(This,cmdID,pcmdf)

#define IWebBrowser2_ExecWB(This,cmdID,cmdexecopt,pvaIn,pvaOut)	\
    (This)->lpVtbl -> ExecWB(This,cmdID,cmdexecopt,pvaIn,pvaOut)

#define IWebBrowser2_ShowBrowserBar(This,pvaClsid,pvarShow,pvarSize)	\
    (This)->lpVtbl -> ShowBrowserBar(This,pvaClsid,pvarShow,pvarSize)

#define IWebBrowser2_get_ReadyState(This,plReadyState)	\
    (This)->lpVtbl -> get_ReadyState(This,plReadyState)

#define IWebBrowser2_get_Offline(This,pbOffline)	\
    (This)->lpVtbl -> get_Offline(This,pbOffline)

#define IWebBrowser2_put_Offline(This,bOffline)	\
    (This)->lpVtbl -> put_Offline(This,bOffline)

#define IWebBrowser2_get_Silent(This,pbSilent)	\
    (This)->lpVtbl -> get_Silent(This,pbSilent)

#define IWebBrowser2_put_Silent(This,bSilent)	\
    (This)->lpVtbl -> put_Silent(This,bSilent)

#define IWebBrowser2_get_RegisterAsBrowser(This,pbRegister)	\
    (This)->lpVtbl -> get_RegisterAsBrowser(This,pbRegister)

#define IWebBrowser2_put_RegisterAsBrowser(This,bRegister)	\
    (This)->lpVtbl -> put_RegisterAsBrowser(This,bRegister)

#define IWebBrowser2_get_RegisterAsDropTarget(This,pbRegister)	\
    (This)->lpVtbl -> get_RegisterAsDropTarget(This,pbRegister)

#define IWebBrowser2_put_RegisterAsDropTarget(This,bRegister)	\
    (This)->lpVtbl -> put_RegisterAsDropTarget(This,bRegister)

#define IWebBrowser2_get_TheaterMode(This,pbRegister)	\
    (This)->lpVtbl -> get_TheaterMode(This,pbRegister)

#define IWebBrowser2_put_TheaterMode(This,bRegister)	\
    (This)->lpVtbl -> put_TheaterMode(This,bRegister)

#define IWebBrowser2_get_AddressBar(This,Value)	\
    (This)->lpVtbl -> get_AddressBar(This,Value)

#define IWebBrowser2_put_AddressBar(This,Value)	\
    (This)->lpVtbl -> put_AddressBar(This,Value)

#define IWebBrowser2_get_Resizable(This,Value)	\
    (This)->lpVtbl -> get_Resizable(This,Value)

#define IWebBrowser2_put_Resizable(This,Value)	\
    (This)->lpVtbl -> put_Resizable(This,Value)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser2_Navigate2_Proxy( 
    IWebBrowser2 __RPC_FAR * This,
    /* [in] */ VARIANT __RPC_FAR *URL,
    /* [optional][in] */ VARIANT __RPC_FAR *Flags,
    /* [optional][in] */ VARIANT __RPC_FAR *TargetFrameName,
    /* [optional][in] */ VARIANT __RPC_FAR *PostData,
    /* [optional][in] */ VARIANT __RPC_FAR *Headers);


void __RPC_STUB IWebBrowser2_Navigate2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser2_QueryStatusWB_Proxy( 
    IWebBrowser2 __RPC_FAR * This,
    /* [in] */ OLECMDID cmdID,
    /* [retval][out] */ OLECMDF __RPC_FAR *pcmdf);


void __RPC_STUB IWebBrowser2_QueryStatusWB_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser2_ExecWB_Proxy( 
    IWebBrowser2 __RPC_FAR * This,
    /* [in] */ OLECMDID cmdID,
    /* [in] */ OLECMDEXECOPT cmdexecopt,
    /* [optional][in] */ VARIANT __RPC_FAR *pvaIn,
    /* [optional][in][out] */ VARIANT __RPC_FAR *pvaOut);


void __RPC_STUB IWebBrowser2_ExecWB_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser2_ShowBrowserBar_Proxy( 
    IWebBrowser2 __RPC_FAR * This,
    /* [in] */ VARIANT __RPC_FAR *pvaClsid,
    /* [optional][in] */ VARIANT __RPC_FAR *pvarShow,
    /* [optional][in] */ VARIANT __RPC_FAR *pvarSize);


void __RPC_STUB IWebBrowser2_ShowBrowserBar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [bindable][propget][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser2_get_ReadyState_Proxy( 
    IWebBrowser2 __RPC_FAR * This,
    /* [out][retval] */ READYSTATE __RPC_FAR *plReadyState);


void __RPC_STUB IWebBrowser2_get_ReadyState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser2_get_Offline_Proxy( 
    IWebBrowser2 __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbOffline);


void __RPC_STUB IWebBrowser2_get_Offline_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser2_put_Offline_Proxy( 
    IWebBrowser2 __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL bOffline);


void __RPC_STUB IWebBrowser2_put_Offline_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser2_get_Silent_Proxy( 
    IWebBrowser2 __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbSilent);


void __RPC_STUB IWebBrowser2_get_Silent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser2_put_Silent_Proxy( 
    IWebBrowser2 __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL bSilent);


void __RPC_STUB IWebBrowser2_put_Silent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser2_get_RegisterAsBrowser_Proxy( 
    IWebBrowser2 __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbRegister);


void __RPC_STUB IWebBrowser2_get_RegisterAsBrowser_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser2_put_RegisterAsBrowser_Proxy( 
    IWebBrowser2 __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL bRegister);


void __RPC_STUB IWebBrowser2_put_RegisterAsBrowser_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser2_get_RegisterAsDropTarget_Proxy( 
    IWebBrowser2 __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbRegister);


void __RPC_STUB IWebBrowser2_get_RegisterAsDropTarget_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser2_put_RegisterAsDropTarget_Proxy( 
    IWebBrowser2 __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL bRegister);


void __RPC_STUB IWebBrowser2_put_RegisterAsDropTarget_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser2_get_TheaterMode_Proxy( 
    IWebBrowser2 __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pbRegister);


void __RPC_STUB IWebBrowser2_get_TheaterMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser2_put_TheaterMode_Proxy( 
    IWebBrowser2 __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL bRegister);


void __RPC_STUB IWebBrowser2_put_TheaterMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser2_get_AddressBar_Proxy( 
    IWebBrowser2 __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *Value);


void __RPC_STUB IWebBrowser2_get_AddressBar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser2_put_AddressBar_Proxy( 
    IWebBrowser2 __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL Value);


void __RPC_STUB IWebBrowser2_put_AddressBar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser2_get_Resizable_Proxy( 
    IWebBrowser2 __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *Value);


void __RPC_STUB IWebBrowser2_get_Resizable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IWebBrowser2_put_Resizable_Proxy( 
    IWebBrowser2 __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL Value);


void __RPC_STUB IWebBrowser2_put_Resizable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWebBrowser2_INTERFACE_DEFINED__ */


#ifndef __DWebBrowserEvents2_DISPINTERFACE_DEFINED__
#define __DWebBrowserEvents2_DISPINTERFACE_DEFINED__

/* dispinterface DWebBrowserEvents2 */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID_DWebBrowserEvents2;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("34A715A0-6587-11D0-924A-0020AFC7AC4D")
    DWebBrowserEvents2 : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct DWebBrowserEvents2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            DWebBrowserEvents2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            DWebBrowserEvents2 __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            DWebBrowserEvents2 __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            DWebBrowserEvents2 __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            DWebBrowserEvents2 __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            DWebBrowserEvents2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            DWebBrowserEvents2 __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        END_INTERFACE
    } DWebBrowserEvents2Vtbl;

    interface DWebBrowserEvents2
    {
        CONST_VTBL struct DWebBrowserEvents2Vtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define DWebBrowserEvents2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define DWebBrowserEvents2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define DWebBrowserEvents2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define DWebBrowserEvents2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define DWebBrowserEvents2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define DWebBrowserEvents2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define DWebBrowserEvents2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __DWebBrowserEvents2_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_WebBrowser_V1;

#ifdef __cplusplus

class DECLSPEC_UUID("EAB22AC3-30C1-11CF-A7EB-0000C05BAE0B")
WebBrowser_V1;
#endif

EXTERN_C const CLSID CLSID_WebBrowser;

#ifdef __cplusplus

class DECLSPEC_UUID("8856F961-340A-11D0-A96B-00C04FD705A2")
WebBrowser;
#endif

EXTERN_C const CLSID CLSID_InternetExplorer;

#ifdef __cplusplus

class DECLSPEC_UUID("0002DF01-0000-0000-C000-000000000046")
InternetExplorer;
#endif

EXTERN_C const CLSID CLSID_ShellBrowserWindow;

#ifdef __cplusplus

class DECLSPEC_UUID("c08afd90-f2a1-11d1-8455-00a0c91f3880")
ShellBrowserWindow;
#endif

#ifndef __DShellWindowsEvents_DISPINTERFACE_DEFINED__
#define __DShellWindowsEvents_DISPINTERFACE_DEFINED__

/* dispinterface DShellWindowsEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_DShellWindowsEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("fe4106e0-399a-11d0-a48c-00a0c90a8f39")
    DShellWindowsEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct DShellWindowsEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            DShellWindowsEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            DShellWindowsEvents __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            DShellWindowsEvents __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            DShellWindowsEvents __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            DShellWindowsEvents __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            DShellWindowsEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            DShellWindowsEvents __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        END_INTERFACE
    } DShellWindowsEventsVtbl;

    interface DShellWindowsEvents
    {
        CONST_VTBL struct DShellWindowsEventsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define DShellWindowsEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define DShellWindowsEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define DShellWindowsEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define DShellWindowsEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define DShellWindowsEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define DShellWindowsEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define DShellWindowsEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __DShellWindowsEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IShellWindows_INTERFACE_DEFINED__
#define __IShellWindows_INTERFACE_DEFINED__

/* interface IShellWindows */
/* [object][dual][oleautomation][helpstring][uuid] */ 


EXTERN_C const IID IID_IShellWindows;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("85CB6900-4D95-11CF-960C-0080C7F4EE85")
    IShellWindows : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long __RPC_FAR *Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [optional][in] */ VARIANT index,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *Folder) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE _NewEnum( 
            /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppunk) = 0;
        
        virtual /* [hidden][helpstring] */ HRESULT STDMETHODCALLTYPE Register( 
            /* [in] */ IDispatch __RPC_FAR *pid,
            /* [in] */ long hwnd,
            /* [in] */ int swClass,
            /* [out] */ long __RPC_FAR *plCookie) = 0;
        
        virtual /* [hidden][helpstring] */ HRESULT STDMETHODCALLTYPE RegisterPending( 
            /* [in] */ long lThreadId,
            /* [in] */ VARIANT __RPC_FAR *pvarloc,
            /* [in] */ VARIANT __RPC_FAR *pvarlocRoot,
            /* [in] */ int swClass,
            /* [out] */ long __RPC_FAR *plCookie) = 0;
        
        virtual /* [hidden][helpstring] */ HRESULT STDMETHODCALLTYPE Revoke( 
            /* [in] */ long lCookie) = 0;
        
        virtual /* [hidden][helpstring] */ HRESULT STDMETHODCALLTYPE OnNavigate( 
            /* [in] */ long lCookie,
            /* [in] */ VARIANT __RPC_FAR *pvarLoc) = 0;
        
        virtual /* [hidden][helpstring] */ HRESULT STDMETHODCALLTYPE OnActivated( 
            /* [in] */ long lCookie,
            /* [in] */ VARIANT_BOOL fActive) = 0;
        
        virtual /* [hidden][helpstring] */ HRESULT STDMETHODCALLTYPE FindWindowSW( 
            /* [in] */ VARIANT __RPC_FAR *pvarLoc,
            /* [in] */ VARIANT __RPC_FAR *pvarLocRoot,
            /* [in] */ int swClass,
            /* [out] */ long __RPC_FAR *phwnd,
            /* [in] */ int swfwOptions,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdispOut) = 0;
        
        virtual /* [hidden][helpstring] */ HRESULT STDMETHODCALLTYPE OnCreated( 
            /* [in] */ long lCookie,
            /* [in] */ IUnknown __RPC_FAR *punk) = 0;
        
        virtual /* [hidden][helpstring] */ HRESULT STDMETHODCALLTYPE ProcessAttachDetach( 
            /* [in] */ VARIANT_BOOL fAttach) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShellWindowsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IShellWindows __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IShellWindows __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IShellWindows __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IShellWindows __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IShellWindows __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IShellWindows __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IShellWindows __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Count )( 
            IShellWindows __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Item )( 
            IShellWindows __RPC_FAR * This,
            /* [optional][in] */ VARIANT index,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *Folder);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *_NewEnum )( 
            IShellWindows __RPC_FAR * This,
            /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppunk);
        
        /* [hidden][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Register )( 
            IShellWindows __RPC_FAR * This,
            /* [in] */ IDispatch __RPC_FAR *pid,
            /* [in] */ long hwnd,
            /* [in] */ int swClass,
            /* [out] */ long __RPC_FAR *plCookie);
        
        /* [hidden][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RegisterPending )( 
            IShellWindows __RPC_FAR * This,
            /* [in] */ long lThreadId,
            /* [in] */ VARIANT __RPC_FAR *pvarloc,
            /* [in] */ VARIANT __RPC_FAR *pvarlocRoot,
            /* [in] */ int swClass,
            /* [out] */ long __RPC_FAR *plCookie);
        
        /* [hidden][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Revoke )( 
            IShellWindows __RPC_FAR * This,
            /* [in] */ long lCookie);
        
        /* [hidden][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnNavigate )( 
            IShellWindows __RPC_FAR * This,
            /* [in] */ long lCookie,
            /* [in] */ VARIANT __RPC_FAR *pvarLoc);
        
        /* [hidden][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnActivated )( 
            IShellWindows __RPC_FAR * This,
            /* [in] */ long lCookie,
            /* [in] */ VARIANT_BOOL fActive);
        
        /* [hidden][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FindWindowSW )( 
            IShellWindows __RPC_FAR * This,
            /* [in] */ VARIANT __RPC_FAR *pvarLoc,
            /* [in] */ VARIANT __RPC_FAR *pvarLocRoot,
            /* [in] */ int swClass,
            /* [out] */ long __RPC_FAR *phwnd,
            /* [in] */ int swfwOptions,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdispOut);
        
        /* [hidden][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnCreated )( 
            IShellWindows __RPC_FAR * This,
            /* [in] */ long lCookie,
            /* [in] */ IUnknown __RPC_FAR *punk);
        
        /* [hidden][helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ProcessAttachDetach )( 
            IShellWindows __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL fAttach);
        
        END_INTERFACE
    } IShellWindowsVtbl;

    interface IShellWindows
    {
        CONST_VTBL struct IShellWindowsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellWindows_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IShellWindows_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IShellWindows_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IShellWindows_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IShellWindows_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IShellWindows_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IShellWindows_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IShellWindows_get_Count(This,Count)	\
    (This)->lpVtbl -> get_Count(This,Count)

#define IShellWindows_Item(This,index,Folder)	\
    (This)->lpVtbl -> Item(This,index,Folder)

#define IShellWindows__NewEnum(This,ppunk)	\
    (This)->lpVtbl -> _NewEnum(This,ppunk)

#define IShellWindows_Register(This,pid,hwnd,swClass,plCookie)	\
    (This)->lpVtbl -> Register(This,pid,hwnd,swClass,plCookie)

#define IShellWindows_RegisterPending(This,lThreadId,pvarloc,pvarlocRoot,swClass,plCookie)	\
    (This)->lpVtbl -> RegisterPending(This,lThreadId,pvarloc,pvarlocRoot,swClass,plCookie)

#define IShellWindows_Revoke(This,lCookie)	\
    (This)->lpVtbl -> Revoke(This,lCookie)

#define IShellWindows_OnNavigate(This,lCookie,pvarLoc)	\
    (This)->lpVtbl -> OnNavigate(This,lCookie,pvarLoc)

#define IShellWindows_OnActivated(This,lCookie,fActive)	\
    (This)->lpVtbl -> OnActivated(This,lCookie,fActive)

#define IShellWindows_FindWindowSW(This,pvarLoc,pvarLocRoot,swClass,phwnd,swfwOptions,ppdispOut)	\
    (This)->lpVtbl -> FindWindowSW(This,pvarLoc,pvarLocRoot,swClass,phwnd,swfwOptions,ppdispOut)

#define IShellWindows_OnCreated(This,lCookie,punk)	\
    (This)->lpVtbl -> OnCreated(This,lCookie,punk)

#define IShellWindows_ProcessAttachDetach(This,fAttach)	\
    (This)->lpVtbl -> ProcessAttachDetach(This,fAttach)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IShellWindows_get_Count_Proxy( 
    IShellWindows __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *Count);


void __RPC_STUB IShellWindows_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IShellWindows_Item_Proxy( 
    IShellWindows __RPC_FAR * This,
    /* [optional][in] */ VARIANT index,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *Folder);


void __RPC_STUB IShellWindows_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IShellWindows__NewEnum_Proxy( 
    IShellWindows __RPC_FAR * This,
    /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppunk);


void __RPC_STUB IShellWindows__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [hidden][helpstring] */ HRESULT STDMETHODCALLTYPE IShellWindows_Register_Proxy( 
    IShellWindows __RPC_FAR * This,
    /* [in] */ IDispatch __RPC_FAR *pid,
    /* [in] */ long hwnd,
    /* [in] */ int swClass,
    /* [out] */ long __RPC_FAR *plCookie);


void __RPC_STUB IShellWindows_Register_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [hidden][helpstring] */ HRESULT STDMETHODCALLTYPE IShellWindows_RegisterPending_Proxy( 
    IShellWindows __RPC_FAR * This,
    /* [in] */ long lThreadId,
    /* [in] */ VARIANT __RPC_FAR *pvarloc,
    /* [in] */ VARIANT __RPC_FAR *pvarlocRoot,
    /* [in] */ int swClass,
    /* [out] */ long __RPC_FAR *plCookie);


void __RPC_STUB IShellWindows_RegisterPending_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [hidden][helpstring] */ HRESULT STDMETHODCALLTYPE IShellWindows_Revoke_Proxy( 
    IShellWindows __RPC_FAR * This,
    /* [in] */ long lCookie);


void __RPC_STUB IShellWindows_Revoke_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [hidden][helpstring] */ HRESULT STDMETHODCALLTYPE IShellWindows_OnNavigate_Proxy( 
    IShellWindows __RPC_FAR * This,
    /* [in] */ long lCookie,
    /* [in] */ VARIANT __RPC_FAR *pvarLoc);


void __RPC_STUB IShellWindows_OnNavigate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [hidden][helpstring] */ HRESULT STDMETHODCALLTYPE IShellWindows_OnActivated_Proxy( 
    IShellWindows __RPC_FAR * This,
    /* [in] */ long lCookie,
    /* [in] */ VARIANT_BOOL fActive);


void __RPC_STUB IShellWindows_OnActivated_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [hidden][helpstring] */ HRESULT STDMETHODCALLTYPE IShellWindows_FindWindowSW_Proxy( 
    IShellWindows __RPC_FAR * This,
    /* [in] */ VARIANT __RPC_FAR *pvarLoc,
    /* [in] */ VARIANT __RPC_FAR *pvarLocRoot,
    /* [in] */ int swClass,
    /* [out] */ long __RPC_FAR *phwnd,
    /* [in] */ int swfwOptions,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdispOut);


void __RPC_STUB IShellWindows_FindWindowSW_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [hidden][helpstring] */ HRESULT STDMETHODCALLTYPE IShellWindows_OnCreated_Proxy( 
    IShellWindows __RPC_FAR * This,
    /* [in] */ long lCookie,
    /* [in] */ IUnknown __RPC_FAR *punk);


void __RPC_STUB IShellWindows_OnCreated_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [hidden][helpstring] */ HRESULT STDMETHODCALLTYPE IShellWindows_ProcessAttachDetach_Proxy( 
    IShellWindows __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL fAttach);


void __RPC_STUB IShellWindows_ProcessAttachDetach_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IShellWindows_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ShellWindows;

#ifdef __cplusplus

class DECLSPEC_UUID("9BA05972-F6A8-11CF-A442-00A0C90A8F39")
ShellWindows;
#endif

#ifndef __IShellUIHelper_INTERFACE_DEFINED__
#define __IShellUIHelper_INTERFACE_DEFINED__

/* interface IShellUIHelper */
/* [object][dual][oleautomation][helpstring][uuid] */ 


EXTERN_C const IID IID_IShellUIHelper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("729FE2F8-1EA8-11d1-8F85-00C04FC2FBE1")
    IShellUIHelper : public IDispatch
    {
    public:
        virtual /* [id][hidden] */ HRESULT STDMETHODCALLTYPE ResetFirstBootMode( void) = 0;
        
        virtual /* [id][hidden] */ HRESULT STDMETHODCALLTYPE ResetSafeMode( void) = 0;
        
        virtual /* [id][hidden] */ HRESULT STDMETHODCALLTYPE RefreshOfflineDesktop( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddFavorite( 
            /* [in] */ BSTR URL,
            /* [in][optional] */ VARIANT __RPC_FAR *Title) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddChannel( 
            /* [in] */ BSTR URL) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddDesktopComponent( 
            /* [in] */ BSTR URL,
            /* [in] */ BSTR Type,
            /* [in][optional] */ VARIANT __RPC_FAR *Left,
            /* [in][optional] */ VARIANT __RPC_FAR *Top,
            /* [in][optional] */ VARIANT __RPC_FAR *Width,
            /* [in][optional] */ VARIANT __RPC_FAR *Height) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsSubscribed( 
            /* [in] */ BSTR URL,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBool) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NavigateAndFind( 
            /* [in] */ BSTR URL,
            /* [in] */ BSTR strQuery,
            /* [in] */ VARIANT __RPC_FAR *varTargetFrame) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ImportExportFavorites( 
            /* [in] */ VARIANT_BOOL fImport,
            /* [in] */ BSTR strImpExpPath) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AutoCompleteSaveForm( 
            /* [in][optional] */ VARIANT __RPC_FAR *Form) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AutoScan( 
            /* [in] */ BSTR strSearch,
            /* [in] */ BSTR strFailureUrl,
            /* [in][optional] */ VARIANT __RPC_FAR *pvarTargetFrame) = 0;
        
        virtual /* [id][hidden] */ HRESULT STDMETHODCALLTYPE AutoCompleteAttach( 
            /* [in][optional] */ VARIANT __RPC_FAR *Reserved) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowBrowserUI( 
            /* [in] */ BSTR bstrName,
            /* [in] */ VARIANT __RPC_FAR *pvarIn,
            /* [retval][out] */ VARIANT __RPC_FAR *pvarOut) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShellUIHelperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IShellUIHelper __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IShellUIHelper __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IShellUIHelper __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IShellUIHelper __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IShellUIHelper __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IShellUIHelper __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IShellUIHelper __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][hidden] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ResetFirstBootMode )( 
            IShellUIHelper __RPC_FAR * This);
        
        /* [id][hidden] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ResetSafeMode )( 
            IShellUIHelper __RPC_FAR * This);
        
        /* [id][hidden] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RefreshOfflineDesktop )( 
            IShellUIHelper __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddFavorite )( 
            IShellUIHelper __RPC_FAR * This,
            /* [in] */ BSTR URL,
            /* [in][optional] */ VARIANT __RPC_FAR *Title);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddChannel )( 
            IShellUIHelper __RPC_FAR * This,
            /* [in] */ BSTR URL);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddDesktopComponent )( 
            IShellUIHelper __RPC_FAR * This,
            /* [in] */ BSTR URL,
            /* [in] */ BSTR Type,
            /* [in][optional] */ VARIANT __RPC_FAR *Left,
            /* [in][optional] */ VARIANT __RPC_FAR *Top,
            /* [in][optional] */ VARIANT __RPC_FAR *Width,
            /* [in][optional] */ VARIANT __RPC_FAR *Height);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsSubscribed )( 
            IShellUIHelper __RPC_FAR * This,
            /* [in] */ BSTR URL,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBool);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *NavigateAndFind )( 
            IShellUIHelper __RPC_FAR * This,
            /* [in] */ BSTR URL,
            /* [in] */ BSTR strQuery,
            /* [in] */ VARIANT __RPC_FAR *varTargetFrame);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ImportExportFavorites )( 
            IShellUIHelper __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL fImport,
            /* [in] */ BSTR strImpExpPath);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AutoCompleteSaveForm )( 
            IShellUIHelper __RPC_FAR * This,
            /* [in][optional] */ VARIANT __RPC_FAR *Form);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AutoScan )( 
            IShellUIHelper __RPC_FAR * This,
            /* [in] */ BSTR strSearch,
            /* [in] */ BSTR strFailureUrl,
            /* [in][optional] */ VARIANT __RPC_FAR *pvarTargetFrame);
        
        /* [id][hidden] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AutoCompleteAttach )( 
            IShellUIHelper __RPC_FAR * This,
            /* [in][optional] */ VARIANT __RPC_FAR *Reserved);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ShowBrowserUI )( 
            IShellUIHelper __RPC_FAR * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ VARIANT __RPC_FAR *pvarIn,
            /* [retval][out] */ VARIANT __RPC_FAR *pvarOut);
        
        END_INTERFACE
    } IShellUIHelperVtbl;

    interface IShellUIHelper
    {
        CONST_VTBL struct IShellUIHelperVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellUIHelper_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IShellUIHelper_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IShellUIHelper_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IShellUIHelper_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IShellUIHelper_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IShellUIHelper_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IShellUIHelper_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IShellUIHelper_ResetFirstBootMode(This)	\
    (This)->lpVtbl -> ResetFirstBootMode(This)

#define IShellUIHelper_ResetSafeMode(This)	\
    (This)->lpVtbl -> ResetSafeMode(This)

#define IShellUIHelper_RefreshOfflineDesktop(This)	\
    (This)->lpVtbl -> RefreshOfflineDesktop(This)

#define IShellUIHelper_AddFavorite(This,URL,Title)	\
    (This)->lpVtbl -> AddFavorite(This,URL,Title)

#define IShellUIHelper_AddChannel(This,URL)	\
    (This)->lpVtbl -> AddChannel(This,URL)

#define IShellUIHelper_AddDesktopComponent(This,URL,Type,Left,Top,Width,Height)	\
    (This)->lpVtbl -> AddDesktopComponent(This,URL,Type,Left,Top,Width,Height)

#define IShellUIHelper_IsSubscribed(This,URL,pBool)	\
    (This)->lpVtbl -> IsSubscribed(This,URL,pBool)

#define IShellUIHelper_NavigateAndFind(This,URL,strQuery,varTargetFrame)	\
    (This)->lpVtbl -> NavigateAndFind(This,URL,strQuery,varTargetFrame)

#define IShellUIHelper_ImportExportFavorites(This,fImport,strImpExpPath)	\
    (This)->lpVtbl -> ImportExportFavorites(This,fImport,strImpExpPath)

#define IShellUIHelper_AutoCompleteSaveForm(This,Form)	\
    (This)->lpVtbl -> AutoCompleteSaveForm(This,Form)

#define IShellUIHelper_AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame)	\
    (This)->lpVtbl -> AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame)

#define IShellUIHelper_AutoCompleteAttach(This,Reserved)	\
    (This)->lpVtbl -> AutoCompleteAttach(This,Reserved)

#define IShellUIHelper_ShowBrowserUI(This,bstrName,pvarIn,pvarOut)	\
    (This)->lpVtbl -> ShowBrowserUI(This,bstrName,pvarIn,pvarOut)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][hidden] */ HRESULT STDMETHODCALLTYPE IShellUIHelper_ResetFirstBootMode_Proxy( 
    IShellUIHelper __RPC_FAR * This);


void __RPC_STUB IShellUIHelper_ResetFirstBootMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][hidden] */ HRESULT STDMETHODCALLTYPE IShellUIHelper_ResetSafeMode_Proxy( 
    IShellUIHelper __RPC_FAR * This);


void __RPC_STUB IShellUIHelper_ResetSafeMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][hidden] */ HRESULT STDMETHODCALLTYPE IShellUIHelper_RefreshOfflineDesktop_Proxy( 
    IShellUIHelper __RPC_FAR * This);


void __RPC_STUB IShellUIHelper_RefreshOfflineDesktop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IShellUIHelper_AddFavorite_Proxy( 
    IShellUIHelper __RPC_FAR * This,
    /* [in] */ BSTR URL,
    /* [in][optional] */ VARIANT __RPC_FAR *Title);


void __RPC_STUB IShellUIHelper_AddFavorite_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IShellUIHelper_AddChannel_Proxy( 
    IShellUIHelper __RPC_FAR * This,
    /* [in] */ BSTR URL);


void __RPC_STUB IShellUIHelper_AddChannel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IShellUIHelper_AddDesktopComponent_Proxy( 
    IShellUIHelper __RPC_FAR * This,
    /* [in] */ BSTR URL,
    /* [in] */ BSTR Type,
    /* [in][optional] */ VARIANT __RPC_FAR *Left,
    /* [in][optional] */ VARIANT __RPC_FAR *Top,
    /* [in][optional] */ VARIANT __RPC_FAR *Width,
    /* [in][optional] */ VARIANT __RPC_FAR *Height);


void __RPC_STUB IShellUIHelper_AddDesktopComponent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IShellUIHelper_IsSubscribed_Proxy( 
    IShellUIHelper __RPC_FAR * This,
    /* [in] */ BSTR URL,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBool);


void __RPC_STUB IShellUIHelper_IsSubscribed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IShellUIHelper_NavigateAndFind_Proxy( 
    IShellUIHelper __RPC_FAR * This,
    /* [in] */ BSTR URL,
    /* [in] */ BSTR strQuery,
    /* [in] */ VARIANT __RPC_FAR *varTargetFrame);


void __RPC_STUB IShellUIHelper_NavigateAndFind_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IShellUIHelper_ImportExportFavorites_Proxy( 
    IShellUIHelper __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL fImport,
    /* [in] */ BSTR strImpExpPath);


void __RPC_STUB IShellUIHelper_ImportExportFavorites_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IShellUIHelper_AutoCompleteSaveForm_Proxy( 
    IShellUIHelper __RPC_FAR * This,
    /* [in][optional] */ VARIANT __RPC_FAR *Form);


void __RPC_STUB IShellUIHelper_AutoCompleteSaveForm_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IShellUIHelper_AutoScan_Proxy( 
    IShellUIHelper __RPC_FAR * This,
    /* [in] */ BSTR strSearch,
    /* [in] */ BSTR strFailureUrl,
    /* [in][optional] */ VARIANT __RPC_FAR *pvarTargetFrame);


void __RPC_STUB IShellUIHelper_AutoScan_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][hidden] */ HRESULT STDMETHODCALLTYPE IShellUIHelper_AutoCompleteAttach_Proxy( 
    IShellUIHelper __RPC_FAR * This,
    /* [in][optional] */ VARIANT __RPC_FAR *Reserved);


void __RPC_STUB IShellUIHelper_AutoCompleteAttach_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IShellUIHelper_ShowBrowserUI_Proxy( 
    IShellUIHelper __RPC_FAR * This,
    /* [in] */ BSTR bstrName,
    /* [in] */ VARIANT __RPC_FAR *pvarIn,
    /* [retval][out] */ VARIANT __RPC_FAR *pvarOut);


void __RPC_STUB IShellUIHelper_ShowBrowserUI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IShellUIHelper_INTERFACE_DEFINED__ */


#ifndef __IShellUIHelper2_INTERFACE_DEFINED__
#define __IShellUIHelper2_INTERFACE_DEFINED__

/* interface IShellUIHelper2 */
/* [object][dual][oleautomation][helpstring][uuid] */ 


EXTERN_C const IID IID_IShellUIHelper2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a7fe6eda-1932-4281-b881-87b31b8bc52c")
    IShellUIHelper2 : public IShellUIHelper
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddSearchProvider( 
            /* [in] */ BSTR URL) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RunOnceShown( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SkipRunOnce( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CustomizeSettings( 
            /* [in] */ VARIANT_BOOL fSQM,
            /* [in] */ VARIANT_BOOL fPhishing,
            /* [in] */ BSTR bstrLocale) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SqmEnabled( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pfEnabled) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PhishingEnabled( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pfEnabled) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE BrandImageUri( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrUri) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SkipTabsWelcome( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DiagnoseConnection( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CustomizeClearType( 
            /* [in] */ VARIANT_BOOL fSet) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsSearchProviderInstalled( 
            /* [in] */ BSTR URL,
            /* [retval][out] */ DWORD __RPC_FAR *pdwResult) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsSearchMigrated( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pfMigrated) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DefaultSearchProvider( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RunOnceRequiredSettingsComplete( 
            /* [in] */ VARIANT_BOOL fComplete) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RunOnceHasShown( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pfShown) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SearchGuideUrl( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrUrl) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShellUIHelper2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IShellUIHelper2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IShellUIHelper2 __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IShellUIHelper2 __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IShellUIHelper2 __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IShellUIHelper2 __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IShellUIHelper2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IShellUIHelper2 __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][hidden] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ResetFirstBootMode )( 
            IShellUIHelper2 __RPC_FAR * This);
        
        /* [id][hidden] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ResetSafeMode )( 
            IShellUIHelper2 __RPC_FAR * This);
        
        /* [id][hidden] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RefreshOfflineDesktop )( 
            IShellUIHelper2 __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddFavorite )( 
            IShellUIHelper2 __RPC_FAR * This,
            /* [in] */ BSTR URL,
            /* [in][optional] */ VARIANT __RPC_FAR *Title);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddChannel )( 
            IShellUIHelper2 __RPC_FAR * This,
            /* [in] */ BSTR URL);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddDesktopComponent )( 
            IShellUIHelper2 __RPC_FAR * This,
            /* [in] */ BSTR URL,
            /* [in] */ BSTR Type,
            /* [in][optional] */ VARIANT __RPC_FAR *Left,
            /* [in][optional] */ VARIANT __RPC_FAR *Top,
            /* [in][optional] */ VARIANT __RPC_FAR *Width,
            /* [in][optional] */ VARIANT __RPC_FAR *Height);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsSubscribed )( 
            IShellUIHelper2 __RPC_FAR * This,
            /* [in] */ BSTR URL,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBool);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *NavigateAndFind )( 
            IShellUIHelper2 __RPC_FAR * This,
            /* [in] */ BSTR URL,
            /* [in] */ BSTR strQuery,
            /* [in] */ VARIANT __RPC_FAR *varTargetFrame);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ImportExportFavorites )( 
            IShellUIHelper2 __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL fImport,
            /* [in] */ BSTR strImpExpPath);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AutoCompleteSaveForm )( 
            IShellUIHelper2 __RPC_FAR * This,
            /* [in][optional] */ VARIANT __RPC_FAR *Form);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AutoScan )( 
            IShellUIHelper2 __RPC_FAR * This,
            /* [in] */ BSTR strSearch,
            /* [in] */ BSTR strFailureUrl,
            /* [in][optional] */ VARIANT __RPC_FAR *pvarTargetFrame);
        
        /* [id][hidden] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AutoCompleteAttach )( 
            IShellUIHelper2 __RPC_FAR * This,
            /* [in][optional] */ VARIANT __RPC_FAR *Reserved);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ShowBrowserUI )( 
            IShellUIHelper2 __RPC_FAR * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ VARIANT __RPC_FAR *pvarIn,
            /* [retval][out] */ VARIANT __RPC_FAR *pvarOut);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddSearchProvider )( 
            IShellUIHelper2 __RPC_FAR * This,
            /* [in] */ BSTR URL);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RunOnceShown )( 
            IShellUIHelper2 __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SkipRunOnce )( 
            IShellUIHelper2 __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CustomizeSettings )( 
            IShellUIHelper2 __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL fSQM,
            /* [in] */ VARIANT_BOOL fPhishing,
            /* [in] */ BSTR bstrLocale);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SqmEnabled )( 
            IShellUIHelper2 __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pfEnabled);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *PhishingEnabled )( 
            IShellUIHelper2 __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pfEnabled);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *BrandImageUri )( 
            IShellUIHelper2 __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrUri);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SkipTabsWelcome )( 
            IShellUIHelper2 __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DiagnoseConnection )( 
            IShellUIHelper2 __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CustomizeClearType )( 
            IShellUIHelper2 __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL fSet);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsSearchProviderInstalled )( 
            IShellUIHelper2 __RPC_FAR * This,
            /* [in] */ BSTR URL,
            /* [retval][out] */ DWORD __RPC_FAR *pdwResult);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsSearchMigrated )( 
            IShellUIHelper2 __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pfMigrated);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DefaultSearchProvider )( 
            IShellUIHelper2 __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RunOnceRequiredSettingsComplete )( 
            IShellUIHelper2 __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL fComplete);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RunOnceHasShown )( 
            IShellUIHelper2 __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pfShown);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SearchGuideUrl )( 
            IShellUIHelper2 __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrUrl);
        
        END_INTERFACE
    } IShellUIHelper2Vtbl;

    interface IShellUIHelper2
    {
        CONST_VTBL struct IShellUIHelper2Vtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellUIHelper2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IShellUIHelper2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IShellUIHelper2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IShellUIHelper2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IShellUIHelper2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IShellUIHelper2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IShellUIHelper2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IShellUIHelper2_ResetFirstBootMode(This)	\
    (This)->lpVtbl -> ResetFirstBootMode(This)

#define IShellUIHelper2_ResetSafeMode(This)	\
    (This)->lpVtbl -> ResetSafeMode(This)

#define IShellUIHelper2_RefreshOfflineDesktop(This)	\
    (This)->lpVtbl -> RefreshOfflineDesktop(This)

#define IShellUIHelper2_AddFavorite(This,URL,Title)	\
    (This)->lpVtbl -> AddFavorite(This,URL,Title)

#define IShellUIHelper2_AddChannel(This,URL)	\
    (This)->lpVtbl -> AddChannel(This,URL)

#define IShellUIHelper2_AddDesktopComponent(This,URL,Type,Left,Top,Width,Height)	\
    (This)->lpVtbl -> AddDesktopComponent(This,URL,Type,Left,Top,Width,Height)

#define IShellUIHelper2_IsSubscribed(This,URL,pBool)	\
    (This)->lpVtbl -> IsSubscribed(This,URL,pBool)

#define IShellUIHelper2_NavigateAndFind(This,URL,strQuery,varTargetFrame)	\
    (This)->lpVtbl -> NavigateAndFind(This,URL,strQuery,varTargetFrame)

#define IShellUIHelper2_ImportExportFavorites(This,fImport,strImpExpPath)	\
    (This)->lpVtbl -> ImportExportFavorites(This,fImport,strImpExpPath)

#define IShellUIHelper2_AutoCompleteSaveForm(This,Form)	\
    (This)->lpVtbl -> AutoCompleteSaveForm(This,Form)

#define IShellUIHelper2_AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame)	\
    (This)->lpVtbl -> AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame)

#define IShellUIHelper2_AutoCompleteAttach(This,Reserved)	\
    (This)->lpVtbl -> AutoCompleteAttach(This,Reserved)

#define IShellUIHelper2_ShowBrowserUI(This,bstrName,pvarIn,pvarOut)	\
    (This)->lpVtbl -> ShowBrowserUI(This,bstrName,pvarIn,pvarOut)


#define IShellUIHelper2_AddSearchProvider(This,URL)	\
    (This)->lpVtbl -> AddSearchProvider(This,URL)

#define IShellUIHelper2_RunOnceShown(This)	\
    (This)->lpVtbl -> RunOnceShown(This)

#define IShellUIHelper2_SkipRunOnce(This)	\
    (This)->lpVtbl -> SkipRunOnce(This)

#define IShellUIHelper2_CustomizeSettings(This,fSQM,fPhishing,bstrLocale)	\
    (This)->lpVtbl -> CustomizeSettings(This,fSQM,fPhishing,bstrLocale)

#define IShellUIHelper2_SqmEnabled(This,pfEnabled)	\
    (This)->lpVtbl -> SqmEnabled(This,pfEnabled)

#define IShellUIHelper2_PhishingEnabled(This,pfEnabled)	\
    (This)->lpVtbl -> PhishingEnabled(This,pfEnabled)

#define IShellUIHelper2_BrandImageUri(This,pbstrUri)	\
    (This)->lpVtbl -> BrandImageUri(This,pbstrUri)

#define IShellUIHelper2_SkipTabsWelcome(This)	\
    (This)->lpVtbl -> SkipTabsWelcome(This)

#define IShellUIHelper2_DiagnoseConnection(This)	\
    (This)->lpVtbl -> DiagnoseConnection(This)

#define IShellUIHelper2_CustomizeClearType(This,fSet)	\
    (This)->lpVtbl -> CustomizeClearType(This,fSet)

#define IShellUIHelper2_IsSearchProviderInstalled(This,URL,pdwResult)	\
    (This)->lpVtbl -> IsSearchProviderInstalled(This,URL,pdwResult)

#define IShellUIHelper2_IsSearchMigrated(This,pfMigrated)	\
    (This)->lpVtbl -> IsSearchMigrated(This,pfMigrated)

#define IShellUIHelper2_DefaultSearchProvider(This,pbstrName)	\
    (This)->lpVtbl -> DefaultSearchProvider(This,pbstrName)

#define IShellUIHelper2_RunOnceRequiredSettingsComplete(This,fComplete)	\
    (This)->lpVtbl -> RunOnceRequiredSettingsComplete(This,fComplete)

#define IShellUIHelper2_RunOnceHasShown(This,pfShown)	\
    (This)->lpVtbl -> RunOnceHasShown(This,pfShown)

#define IShellUIHelper2_SearchGuideUrl(This,pbstrUrl)	\
    (This)->lpVtbl -> SearchGuideUrl(This,pbstrUrl)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id] */ HRESULT STDMETHODCALLTYPE IShellUIHelper2_AddSearchProvider_Proxy( 
    IShellUIHelper2 __RPC_FAR * This,
    /* [in] */ BSTR URL);


void __RPC_STUB IShellUIHelper2_AddSearchProvider_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IShellUIHelper2_RunOnceShown_Proxy( 
    IShellUIHelper2 __RPC_FAR * This);


void __RPC_STUB IShellUIHelper2_RunOnceShown_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IShellUIHelper2_SkipRunOnce_Proxy( 
    IShellUIHelper2 __RPC_FAR * This);


void __RPC_STUB IShellUIHelper2_SkipRunOnce_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IShellUIHelper2_CustomizeSettings_Proxy( 
    IShellUIHelper2 __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL fSQM,
    /* [in] */ VARIANT_BOOL fPhishing,
    /* [in] */ BSTR bstrLocale);


void __RPC_STUB IShellUIHelper2_CustomizeSettings_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IShellUIHelper2_SqmEnabled_Proxy( 
    IShellUIHelper2 __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pfEnabled);


void __RPC_STUB IShellUIHelper2_SqmEnabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IShellUIHelper2_PhishingEnabled_Proxy( 
    IShellUIHelper2 __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pfEnabled);


void __RPC_STUB IShellUIHelper2_PhishingEnabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IShellUIHelper2_BrandImageUri_Proxy( 
    IShellUIHelper2 __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrUri);


void __RPC_STUB IShellUIHelper2_BrandImageUri_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IShellUIHelper2_SkipTabsWelcome_Proxy( 
    IShellUIHelper2 __RPC_FAR * This);


void __RPC_STUB IShellUIHelper2_SkipTabsWelcome_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IShellUIHelper2_DiagnoseConnection_Proxy( 
    IShellUIHelper2 __RPC_FAR * This);


void __RPC_STUB IShellUIHelper2_DiagnoseConnection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IShellUIHelper2_CustomizeClearType_Proxy( 
    IShellUIHelper2 __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL fSet);


void __RPC_STUB IShellUIHelper2_CustomizeClearType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IShellUIHelper2_IsSearchProviderInstalled_Proxy( 
    IShellUIHelper2 __RPC_FAR * This,
    /* [in] */ BSTR URL,
    /* [retval][out] */ DWORD __RPC_FAR *pdwResult);


void __RPC_STUB IShellUIHelper2_IsSearchProviderInstalled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IShellUIHelper2_IsSearchMigrated_Proxy( 
    IShellUIHelper2 __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pfMigrated);


void __RPC_STUB IShellUIHelper2_IsSearchMigrated_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IShellUIHelper2_DefaultSearchProvider_Proxy( 
    IShellUIHelper2 __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrName);


void __RPC_STUB IShellUIHelper2_DefaultSearchProvider_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IShellUIHelper2_RunOnceRequiredSettingsComplete_Proxy( 
    IShellUIHelper2 __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL fComplete);


void __RPC_STUB IShellUIHelper2_RunOnceRequiredSettingsComplete_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IShellUIHelper2_RunOnceHasShown_Proxy( 
    IShellUIHelper2 __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pfShown);


void __RPC_STUB IShellUIHelper2_RunOnceHasShown_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IShellUIHelper2_SearchGuideUrl_Proxy( 
    IShellUIHelper2 __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrUrl);


void __RPC_STUB IShellUIHelper2_SearchGuideUrl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IShellUIHelper2_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ShellUIHelper;

#ifdef __cplusplus

class DECLSPEC_UUID("64AB4BB7-111E-11d1-8F79-00C04FC2FBE1")
ShellUIHelper;
#endif

#ifndef __DShellNameSpaceEvents_DISPINTERFACE_DEFINED__
#define __DShellNameSpaceEvents_DISPINTERFACE_DEFINED__

/* dispinterface DShellNameSpaceEvents */
/* [uuid] */ 


EXTERN_C const IID DIID_DShellNameSpaceEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("55136806-B2DE-11D1-B9F2-00A0C98BC547")
    DShellNameSpaceEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct DShellNameSpaceEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            DShellNameSpaceEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            DShellNameSpaceEvents __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            DShellNameSpaceEvents __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            DShellNameSpaceEvents __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            DShellNameSpaceEvents __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            DShellNameSpaceEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            DShellNameSpaceEvents __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        END_INTERFACE
    } DShellNameSpaceEventsVtbl;

    interface DShellNameSpaceEvents
    {
        CONST_VTBL struct DShellNameSpaceEventsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define DShellNameSpaceEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define DShellNameSpaceEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define DShellNameSpaceEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define DShellNameSpaceEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define DShellNameSpaceEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define DShellNameSpaceEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define DShellNameSpaceEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __DShellNameSpaceEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IShellFavoritesNameSpace_INTERFACE_DEFINED__
#define __IShellFavoritesNameSpace_INTERFACE_DEFINED__

/* interface IShellFavoritesNameSpace */
/* [hidden][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IShellFavoritesNameSpace;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("55136804-B2DE-11D1-B9F2-00A0C98BC547")
    IShellFavoritesNameSpace : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveSelectionUp( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveSelectionDown( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ResetSort( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NewFolder( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Synchronize( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Import( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Export( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InvokeContextMenuCommand( 
            /* [in] */ BSTR strCommand) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveSelectionTo( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SubscriptionsEnabled( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBool) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateSubscriptionForSelection( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBool) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteSubscriptionForSelection( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBool) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetRoot( 
            /* [in] */ BSTR bstrFullPath) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShellFavoritesNameSpaceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IShellFavoritesNameSpace __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IShellFavoritesNameSpace __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IShellFavoritesNameSpace __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IShellFavoritesNameSpace __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IShellFavoritesNameSpace __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IShellFavoritesNameSpace __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IShellFavoritesNameSpace __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *MoveSelectionUp )( 
            IShellFavoritesNameSpace __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *MoveSelectionDown )( 
            IShellFavoritesNameSpace __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ResetSort )( 
            IShellFavoritesNameSpace __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *NewFolder )( 
            IShellFavoritesNameSpace __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Synchronize )( 
            IShellFavoritesNameSpace __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Import )( 
            IShellFavoritesNameSpace __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Export )( 
            IShellFavoritesNameSpace __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InvokeContextMenuCommand )( 
            IShellFavoritesNameSpace __RPC_FAR * This,
            /* [in] */ BSTR strCommand);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *MoveSelectionTo )( 
            IShellFavoritesNameSpace __RPC_FAR * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_SubscriptionsEnabled )( 
            IShellFavoritesNameSpace __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBool);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateSubscriptionForSelection )( 
            IShellFavoritesNameSpace __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBool);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DeleteSubscriptionForSelection )( 
            IShellFavoritesNameSpace __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBool);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetRoot )( 
            IShellFavoritesNameSpace __RPC_FAR * This,
            /* [in] */ BSTR bstrFullPath);
        
        END_INTERFACE
    } IShellFavoritesNameSpaceVtbl;

    interface IShellFavoritesNameSpace
    {
        CONST_VTBL struct IShellFavoritesNameSpaceVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellFavoritesNameSpace_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IShellFavoritesNameSpace_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IShellFavoritesNameSpace_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IShellFavoritesNameSpace_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IShellFavoritesNameSpace_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IShellFavoritesNameSpace_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IShellFavoritesNameSpace_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IShellFavoritesNameSpace_MoveSelectionUp(This)	\
    (This)->lpVtbl -> MoveSelectionUp(This)

#define IShellFavoritesNameSpace_MoveSelectionDown(This)	\
    (This)->lpVtbl -> MoveSelectionDown(This)

#define IShellFavoritesNameSpace_ResetSort(This)	\
    (This)->lpVtbl -> ResetSort(This)

#define IShellFavoritesNameSpace_NewFolder(This)	\
    (This)->lpVtbl -> NewFolder(This)

#define IShellFavoritesNameSpace_Synchronize(This)	\
    (This)->lpVtbl -> Synchronize(This)

#define IShellFavoritesNameSpace_Import(This)	\
    (This)->lpVtbl -> Import(This)

#define IShellFavoritesNameSpace_Export(This)	\
    (This)->lpVtbl -> Export(This)

#define IShellFavoritesNameSpace_InvokeContextMenuCommand(This,strCommand)	\
    (This)->lpVtbl -> InvokeContextMenuCommand(This,strCommand)

#define IShellFavoritesNameSpace_MoveSelectionTo(This)	\
    (This)->lpVtbl -> MoveSelectionTo(This)

#define IShellFavoritesNameSpace_get_SubscriptionsEnabled(This,pBool)	\
    (This)->lpVtbl -> get_SubscriptionsEnabled(This,pBool)

#define IShellFavoritesNameSpace_CreateSubscriptionForSelection(This,pBool)	\
    (This)->lpVtbl -> CreateSubscriptionForSelection(This,pBool)

#define IShellFavoritesNameSpace_DeleteSubscriptionForSelection(This,pBool)	\
    (This)->lpVtbl -> DeleteSubscriptionForSelection(This,pBool)

#define IShellFavoritesNameSpace_SetRoot(This,bstrFullPath)	\
    (This)->lpVtbl -> SetRoot(This,bstrFullPath)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IShellFavoritesNameSpace_MoveSelectionUp_Proxy( 
    IShellFavoritesNameSpace __RPC_FAR * This);


void __RPC_STUB IShellFavoritesNameSpace_MoveSelectionUp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IShellFavoritesNameSpace_MoveSelectionDown_Proxy( 
    IShellFavoritesNameSpace __RPC_FAR * This);


void __RPC_STUB IShellFavoritesNameSpace_MoveSelectionDown_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IShellFavoritesNameSpace_ResetSort_Proxy( 
    IShellFavoritesNameSpace __RPC_FAR * This);


void __RPC_STUB IShellFavoritesNameSpace_ResetSort_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IShellFavoritesNameSpace_NewFolder_Proxy( 
    IShellFavoritesNameSpace __RPC_FAR * This);


void __RPC_STUB IShellFavoritesNameSpace_NewFolder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IShellFavoritesNameSpace_Synchronize_Proxy( 
    IShellFavoritesNameSpace __RPC_FAR * This);


void __RPC_STUB IShellFavoritesNameSpace_Synchronize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IShellFavoritesNameSpace_Import_Proxy( 
    IShellFavoritesNameSpace __RPC_FAR * This);


void __RPC_STUB IShellFavoritesNameSpace_Import_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IShellFavoritesNameSpace_Export_Proxy( 
    IShellFavoritesNameSpace __RPC_FAR * This);


void __RPC_STUB IShellFavoritesNameSpace_Export_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IShellFavoritesNameSpace_InvokeContextMenuCommand_Proxy( 
    IShellFavoritesNameSpace __RPC_FAR * This,
    /* [in] */ BSTR strCommand);


void __RPC_STUB IShellFavoritesNameSpace_InvokeContextMenuCommand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IShellFavoritesNameSpace_MoveSelectionTo_Proxy( 
    IShellFavoritesNameSpace __RPC_FAR * This);


void __RPC_STUB IShellFavoritesNameSpace_MoveSelectionTo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IShellFavoritesNameSpace_get_SubscriptionsEnabled_Proxy( 
    IShellFavoritesNameSpace __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBool);


void __RPC_STUB IShellFavoritesNameSpace_get_SubscriptionsEnabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IShellFavoritesNameSpace_CreateSubscriptionForSelection_Proxy( 
    IShellFavoritesNameSpace __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBool);


void __RPC_STUB IShellFavoritesNameSpace_CreateSubscriptionForSelection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IShellFavoritesNameSpace_DeleteSubscriptionForSelection_Proxy( 
    IShellFavoritesNameSpace __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBool);


void __RPC_STUB IShellFavoritesNameSpace_DeleteSubscriptionForSelection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IShellFavoritesNameSpace_SetRoot_Proxy( 
    IShellFavoritesNameSpace __RPC_FAR * This,
    /* [in] */ BSTR bstrFullPath);


void __RPC_STUB IShellFavoritesNameSpace_SetRoot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IShellFavoritesNameSpace_INTERFACE_DEFINED__ */


#ifndef __IShellNameSpace_INTERFACE_DEFINED__
#define __IShellNameSpace_INTERFACE_DEFINED__

/* interface IShellNameSpace */
/* [hidden][unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IShellNameSpace;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e572d3c9-37be-4ae2-825d-d521763e3108")
    IShellNameSpace : public IShellFavoritesNameSpace
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EnumOptions( 
            /* [retval][out] */ LONG __RPC_FAR *pgrfEnumFlags) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EnumOptions( 
            /* [in] */ LONG lVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SelectedItem( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pItem) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SelectedItem( 
            /* [in] */ IDispatch __RPC_FAR *pItem) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Root( 
            /* [retval][out] */ VARIANT __RPC_FAR *pvar) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Root( 
            /* [in] */ VARIANT var) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Depth( 
            /* [retval][out] */ int __RPC_FAR *piDepth) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Depth( 
            /* [in] */ int iDepth) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Mode( 
            /* [retval][out] */ UINT __RPC_FAR *puMode) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Mode( 
            /* [in] */ UINT uMode) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Flags( 
            /* [retval][out] */ DWORD __RPC_FAR *pdwFlags) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Flags( 
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TVFlags( 
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TVFlags( 
            /* [retval][out] */ DWORD __RPC_FAR *dwFlags) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Columns( 
            /* [retval][out] */ BSTR __RPC_FAR *bstrColumns) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Columns( 
            /* [in] */ BSTR bstrColumns) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CountViewTypes( 
            /* [retval][out] */ int __RPC_FAR *piTypes) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetViewType( 
            /* [in] */ int iType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SelectedItems( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppid) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Expand( 
            /* [in] */ VARIANT var,
            int iDepth) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UnselectAll( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShellNameSpaceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IShellNameSpace __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IShellNameSpace __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IShellNameSpace __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IShellNameSpace __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IShellNameSpace __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IShellNameSpace __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IShellNameSpace __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *MoveSelectionUp )( 
            IShellNameSpace __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *MoveSelectionDown )( 
            IShellNameSpace __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ResetSort )( 
            IShellNameSpace __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *NewFolder )( 
            IShellNameSpace __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Synchronize )( 
            IShellNameSpace __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Import )( 
            IShellNameSpace __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Export )( 
            IShellNameSpace __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InvokeContextMenuCommand )( 
            IShellNameSpace __RPC_FAR * This,
            /* [in] */ BSTR strCommand);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *MoveSelectionTo )( 
            IShellNameSpace __RPC_FAR * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_SubscriptionsEnabled )( 
            IShellNameSpace __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBool);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateSubscriptionForSelection )( 
            IShellNameSpace __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBool);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DeleteSubscriptionForSelection )( 
            IShellNameSpace __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pBool);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetRoot )( 
            IShellNameSpace __RPC_FAR * This,
            /* [in] */ BSTR bstrFullPath);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_EnumOptions )( 
            IShellNameSpace __RPC_FAR * This,
            /* [retval][out] */ LONG __RPC_FAR *pgrfEnumFlags);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_EnumOptions )( 
            IShellNameSpace __RPC_FAR * This,
            /* [in] */ LONG lVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_SelectedItem )( 
            IShellNameSpace __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pItem);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_SelectedItem )( 
            IShellNameSpace __RPC_FAR * This,
            /* [in] */ IDispatch __RPC_FAR *pItem);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Root )( 
            IShellNameSpace __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *pvar);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Root )( 
            IShellNameSpace __RPC_FAR * This,
            /* [in] */ VARIANT var);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Depth )( 
            IShellNameSpace __RPC_FAR * This,
            /* [retval][out] */ int __RPC_FAR *piDepth);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Depth )( 
            IShellNameSpace __RPC_FAR * This,
            /* [in] */ int iDepth);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Mode )( 
            IShellNameSpace __RPC_FAR * This,
            /* [retval][out] */ UINT __RPC_FAR *puMode);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Mode )( 
            IShellNameSpace __RPC_FAR * This,
            /* [in] */ UINT uMode);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Flags )( 
            IShellNameSpace __RPC_FAR * This,
            /* [retval][out] */ DWORD __RPC_FAR *pdwFlags);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Flags )( 
            IShellNameSpace __RPC_FAR * This,
            /* [in] */ DWORD dwFlags);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_TVFlags )( 
            IShellNameSpace __RPC_FAR * This,
            /* [in] */ DWORD dwFlags);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_TVFlags )( 
            IShellNameSpace __RPC_FAR * This,
            /* [retval][out] */ DWORD __RPC_FAR *dwFlags);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Columns )( 
            IShellNameSpace __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *bstrColumns);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Columns )( 
            IShellNameSpace __RPC_FAR * This,
            /* [in] */ BSTR bstrColumns);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_CountViewTypes )( 
            IShellNameSpace __RPC_FAR * This,
            /* [retval][out] */ int __RPC_FAR *piTypes);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetViewType )( 
            IShellNameSpace __RPC_FAR * This,
            /* [in] */ int iType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SelectedItems )( 
            IShellNameSpace __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Expand )( 
            IShellNameSpace __RPC_FAR * This,
            /* [in] */ VARIANT var,
            int iDepth);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *UnselectAll )( 
            IShellNameSpace __RPC_FAR * This);
        
        END_INTERFACE
    } IShellNameSpaceVtbl;

    interface IShellNameSpace
    {
        CONST_VTBL struct IShellNameSpaceVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellNameSpace_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IShellNameSpace_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IShellNameSpace_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IShellNameSpace_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IShellNameSpace_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IShellNameSpace_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IShellNameSpace_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IShellNameSpace_MoveSelectionUp(This)	\
    (This)->lpVtbl -> MoveSelectionUp(This)

#define IShellNameSpace_MoveSelectionDown(This)	\
    (This)->lpVtbl -> MoveSelectionDown(This)

#define IShellNameSpace_ResetSort(This)	\
    (This)->lpVtbl -> ResetSort(This)

#define IShellNameSpace_NewFolder(This)	\
    (This)->lpVtbl -> NewFolder(This)

#define IShellNameSpace_Synchronize(This)	\
    (This)->lpVtbl -> Synchronize(This)

#define IShellNameSpace_Import(This)	\
    (This)->lpVtbl -> Import(This)

#define IShellNameSpace_Export(This)	\
    (This)->lpVtbl -> Export(This)

#define IShellNameSpace_InvokeContextMenuCommand(This,strCommand)	\
    (This)->lpVtbl -> InvokeContextMenuCommand(This,strCommand)

#define IShellNameSpace_MoveSelectionTo(This)	\
    (This)->lpVtbl -> MoveSelectionTo(This)

#define IShellNameSpace_get_SubscriptionsEnabled(This,pBool)	\
    (This)->lpVtbl -> get_SubscriptionsEnabled(This,pBool)

#define IShellNameSpace_CreateSubscriptionForSelection(This,pBool)	\
    (This)->lpVtbl -> CreateSubscriptionForSelection(This,pBool)

#define IShellNameSpace_DeleteSubscriptionForSelection(This,pBool)	\
    (This)->lpVtbl -> DeleteSubscriptionForSelection(This,pBool)

#define IShellNameSpace_SetRoot(This,bstrFullPath)	\
    (This)->lpVtbl -> SetRoot(This,bstrFullPath)


#define IShellNameSpace_get_EnumOptions(This,pgrfEnumFlags)	\
    (This)->lpVtbl -> get_EnumOptions(This,pgrfEnumFlags)

#define IShellNameSpace_put_EnumOptions(This,lVal)	\
    (This)->lpVtbl -> put_EnumOptions(This,lVal)

#define IShellNameSpace_get_SelectedItem(This,pItem)	\
    (This)->lpVtbl -> get_SelectedItem(This,pItem)

#define IShellNameSpace_put_SelectedItem(This,pItem)	\
    (This)->lpVtbl -> put_SelectedItem(This,pItem)

#define IShellNameSpace_get_Root(This,pvar)	\
    (This)->lpVtbl -> get_Root(This,pvar)

#define IShellNameSpace_put_Root(This,var)	\
    (This)->lpVtbl -> put_Root(This,var)

#define IShellNameSpace_get_Depth(This,piDepth)	\
    (This)->lpVtbl -> get_Depth(This,piDepth)

#define IShellNameSpace_put_Depth(This,iDepth)	\
    (This)->lpVtbl -> put_Depth(This,iDepth)

#define IShellNameSpace_get_Mode(This,puMode)	\
    (This)->lpVtbl -> get_Mode(This,puMode)

#define IShellNameSpace_put_Mode(This,uMode)	\
    (This)->lpVtbl -> put_Mode(This,uMode)

#define IShellNameSpace_get_Flags(This,pdwFlags)	\
    (This)->lpVtbl -> get_Flags(This,pdwFlags)

#define IShellNameSpace_put_Flags(This,dwFlags)	\
    (This)->lpVtbl -> put_Flags(This,dwFlags)

#define IShellNameSpace_put_TVFlags(This,dwFlags)	\
    (This)->lpVtbl -> put_TVFlags(This,dwFlags)

#define IShellNameSpace_get_TVFlags(This,dwFlags)	\
    (This)->lpVtbl -> get_TVFlags(This,dwFlags)

#define IShellNameSpace_get_Columns(This,bstrColumns)	\
    (This)->lpVtbl -> get_Columns(This,bstrColumns)

#define IShellNameSpace_put_Columns(This,bstrColumns)	\
    (This)->lpVtbl -> put_Columns(This,bstrColumns)

#define IShellNameSpace_get_CountViewTypes(This,piTypes)	\
    (This)->lpVtbl -> get_CountViewTypes(This,piTypes)

#define IShellNameSpace_SetViewType(This,iType)	\
    (This)->lpVtbl -> SetViewType(This,iType)

#define IShellNameSpace_SelectedItems(This,ppid)	\
    (This)->lpVtbl -> SelectedItems(This,ppid)

#define IShellNameSpace_Expand(This,var,iDepth)	\
    (This)->lpVtbl -> Expand(This,var,iDepth)

#define IShellNameSpace_UnselectAll(This)	\
    (This)->lpVtbl -> UnselectAll(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IShellNameSpace_get_EnumOptions_Proxy( 
    IShellNameSpace __RPC_FAR * This,
    /* [retval][out] */ LONG __RPC_FAR *pgrfEnumFlags);


void __RPC_STUB IShellNameSpace_get_EnumOptions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IShellNameSpace_put_EnumOptions_Proxy( 
    IShellNameSpace __RPC_FAR * This,
    /* [in] */ LONG lVal);


void __RPC_STUB IShellNameSpace_put_EnumOptions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IShellNameSpace_get_SelectedItem_Proxy( 
    IShellNameSpace __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pItem);


void __RPC_STUB IShellNameSpace_get_SelectedItem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IShellNameSpace_put_SelectedItem_Proxy( 
    IShellNameSpace __RPC_FAR * This,
    /* [in] */ IDispatch __RPC_FAR *pItem);


void __RPC_STUB IShellNameSpace_put_SelectedItem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IShellNameSpace_get_Root_Proxy( 
    IShellNameSpace __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *pvar);


void __RPC_STUB IShellNameSpace_get_Root_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IShellNameSpace_put_Root_Proxy( 
    IShellNameSpace __RPC_FAR * This,
    /* [in] */ VARIANT var);


void __RPC_STUB IShellNameSpace_put_Root_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IShellNameSpace_get_Depth_Proxy( 
    IShellNameSpace __RPC_FAR * This,
    /* [retval][out] */ int __RPC_FAR *piDepth);


void __RPC_STUB IShellNameSpace_get_Depth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IShellNameSpace_put_Depth_Proxy( 
    IShellNameSpace __RPC_FAR * This,
    /* [in] */ int iDepth);


void __RPC_STUB IShellNameSpace_put_Depth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IShellNameSpace_get_Mode_Proxy( 
    IShellNameSpace __RPC_FAR * This,
    /* [retval][out] */ UINT __RPC_FAR *puMode);


void __RPC_STUB IShellNameSpace_get_Mode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IShellNameSpace_put_Mode_Proxy( 
    IShellNameSpace __RPC_FAR * This,
    /* [in] */ UINT uMode);


void __RPC_STUB IShellNameSpace_put_Mode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IShellNameSpace_get_Flags_Proxy( 
    IShellNameSpace __RPC_FAR * This,
    /* [retval][out] */ DWORD __RPC_FAR *pdwFlags);


void __RPC_STUB IShellNameSpace_get_Flags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IShellNameSpace_put_Flags_Proxy( 
    IShellNameSpace __RPC_FAR * This,
    /* [in] */ DWORD dwFlags);


void __RPC_STUB IShellNameSpace_put_Flags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IShellNameSpace_put_TVFlags_Proxy( 
    IShellNameSpace __RPC_FAR * This,
    /* [in] */ DWORD dwFlags);


void __RPC_STUB IShellNameSpace_put_TVFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IShellNameSpace_get_TVFlags_Proxy( 
    IShellNameSpace __RPC_FAR * This,
    /* [retval][out] */ DWORD __RPC_FAR *dwFlags);


void __RPC_STUB IShellNameSpace_get_TVFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IShellNameSpace_get_Columns_Proxy( 
    IShellNameSpace __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *bstrColumns);


void __RPC_STUB IShellNameSpace_get_Columns_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IShellNameSpace_put_Columns_Proxy( 
    IShellNameSpace __RPC_FAR * This,
    /* [in] */ BSTR bstrColumns);


void __RPC_STUB IShellNameSpace_put_Columns_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IShellNameSpace_get_CountViewTypes_Proxy( 
    IShellNameSpace __RPC_FAR * This,
    /* [retval][out] */ int __RPC_FAR *piTypes);


void __RPC_STUB IShellNameSpace_get_CountViewTypes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IShellNameSpace_SetViewType_Proxy( 
    IShellNameSpace __RPC_FAR * This,
    /* [in] */ int iType);


void __RPC_STUB IShellNameSpace_SetViewType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IShellNameSpace_SelectedItems_Proxy( 
    IShellNameSpace __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppid);


void __RPC_STUB IShellNameSpace_SelectedItems_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IShellNameSpace_Expand_Proxy( 
    IShellNameSpace __RPC_FAR * This,
    /* [in] */ VARIANT var,
    int iDepth);


void __RPC_STUB IShellNameSpace_Expand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IShellNameSpace_UnselectAll_Proxy( 
    IShellNameSpace __RPC_FAR * This);


void __RPC_STUB IShellNameSpace_UnselectAll_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IShellNameSpace_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ShellNameSpace;

#ifdef __cplusplus

class DECLSPEC_UUID("55136805-B2DE-11D1-B9F2-00A0C98BC547")
ShellNameSpace;
#endif

EXTERN_C const CLSID CLSID_ShellShellNameSpace;

#ifdef __cplusplus

class DECLSPEC_UUID("2F2F1F96-2BC1-4b1c-BE28-EA3774F4676A")
ShellShellNameSpace;
#endif

#ifndef __IScriptErrorList_INTERFACE_DEFINED__
#define __IScriptErrorList_INTERFACE_DEFINED__

/* interface IScriptErrorList */
/* [object][dual][hidden][oleautomation][helpstring][uuid] */ 


EXTERN_C const IID IID_IScriptErrorList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F3470F24-15FD-11d2-BB2E-00805FF7EFCA")
    IScriptErrorList : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE advanceError( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE retreatError( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE canAdvanceError( 
            /* [retval][out] */ BOOL __RPC_FAR *pfCanAdvance) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE canRetreatError( 
            /* [retval][out] */ BOOL __RPC_FAR *pfCanRetreat) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getErrorLine( 
            /* [retval][out] */ LONG __RPC_FAR *plLine) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getErrorChar( 
            /* [retval][out] */ LONG __RPC_FAR *plChar) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getErrorCode( 
            /* [retval][out] */ LONG __RPC_FAR *plCode) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getErrorMsg( 
            /* [retval][out] */ BSTR __RPC_FAR *pstr) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getErrorUrl( 
            /* [retval][out] */ BSTR __RPC_FAR *pstr) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getAlwaysShowLockState( 
            /* [retval][out] */ BOOL __RPC_FAR *pfAlwaysShowLocked) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getDetailsPaneOpen( 
            /* [retval][out] */ BOOL __RPC_FAR *pfDetailsPaneOpen) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setDetailsPaneOpen( 
            BOOL fDetailsPaneOpen) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getPerErrorDisplay( 
            /* [retval][out] */ BOOL __RPC_FAR *pfPerErrorDisplay) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setPerErrorDisplay( 
            BOOL fPerErrorDisplay) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IScriptErrorListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IScriptErrorList __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IScriptErrorList __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IScriptErrorList __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IScriptErrorList __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IScriptErrorList __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IScriptErrorList __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IScriptErrorList __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *advanceError )( 
            IScriptErrorList __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *retreatError )( 
            IScriptErrorList __RPC_FAR * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *canAdvanceError )( 
            IScriptErrorList __RPC_FAR * This,
            /* [retval][out] */ BOOL __RPC_FAR *pfCanAdvance);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *canRetreatError )( 
            IScriptErrorList __RPC_FAR * This,
            /* [retval][out] */ BOOL __RPC_FAR *pfCanRetreat);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *getErrorLine )( 
            IScriptErrorList __RPC_FAR * This,
            /* [retval][out] */ LONG __RPC_FAR *plLine);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *getErrorChar )( 
            IScriptErrorList __RPC_FAR * This,
            /* [retval][out] */ LONG __RPC_FAR *plChar);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *getErrorCode )( 
            IScriptErrorList __RPC_FAR * This,
            /* [retval][out] */ LONG __RPC_FAR *plCode);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *getErrorMsg )( 
            IScriptErrorList __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pstr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *getErrorUrl )( 
            IScriptErrorList __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pstr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *getAlwaysShowLockState )( 
            IScriptErrorList __RPC_FAR * This,
            /* [retval][out] */ BOOL __RPC_FAR *pfAlwaysShowLocked);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *getDetailsPaneOpen )( 
            IScriptErrorList __RPC_FAR * This,
            /* [retval][out] */ BOOL __RPC_FAR *pfDetailsPaneOpen);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *setDetailsPaneOpen )( 
            IScriptErrorList __RPC_FAR * This,
            BOOL fDetailsPaneOpen);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *getPerErrorDisplay )( 
            IScriptErrorList __RPC_FAR * This,
            /* [retval][out] */ BOOL __RPC_FAR *pfPerErrorDisplay);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *setPerErrorDisplay )( 
            IScriptErrorList __RPC_FAR * This,
            BOOL fPerErrorDisplay);
        
        END_INTERFACE
    } IScriptErrorListVtbl;

    interface IScriptErrorList
    {
        CONST_VTBL struct IScriptErrorListVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IScriptErrorList_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IScriptErrorList_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IScriptErrorList_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IScriptErrorList_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IScriptErrorList_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IScriptErrorList_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IScriptErrorList_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IScriptErrorList_advanceError(This)	\
    (This)->lpVtbl -> advanceError(This)

#define IScriptErrorList_retreatError(This)	\
    (This)->lpVtbl -> retreatError(This)

#define IScriptErrorList_canAdvanceError(This,pfCanAdvance)	\
    (This)->lpVtbl -> canAdvanceError(This,pfCanAdvance)

#define IScriptErrorList_canRetreatError(This,pfCanRetreat)	\
    (This)->lpVtbl -> canRetreatError(This,pfCanRetreat)

#define IScriptErrorList_getErrorLine(This,plLine)	\
    (This)->lpVtbl -> getErrorLine(This,plLine)

#define IScriptErrorList_getErrorChar(This,plChar)	\
    (This)->lpVtbl -> getErrorChar(This,plChar)

#define IScriptErrorList_getErrorCode(This,plCode)	\
    (This)->lpVtbl -> getErrorCode(This,plCode)

#define IScriptErrorList_getErrorMsg(This,pstr)	\
    (This)->lpVtbl -> getErrorMsg(This,pstr)

#define IScriptErrorList_getErrorUrl(This,pstr)	\
    (This)->lpVtbl -> getErrorUrl(This,pstr)

#define IScriptErrorList_getAlwaysShowLockState(This,pfAlwaysShowLocked)	\
    (This)->lpVtbl -> getAlwaysShowLockState(This,pfAlwaysShowLocked)

#define IScriptErrorList_getDetailsPaneOpen(This,pfDetailsPaneOpen)	\
    (This)->lpVtbl -> getDetailsPaneOpen(This,pfDetailsPaneOpen)

#define IScriptErrorList_setDetailsPaneOpen(This,fDetailsPaneOpen)	\
    (This)->lpVtbl -> setDetailsPaneOpen(This,fDetailsPaneOpen)

#define IScriptErrorList_getPerErrorDisplay(This,pfPerErrorDisplay)	\
    (This)->lpVtbl -> getPerErrorDisplay(This,pfPerErrorDisplay)

#define IScriptErrorList_setPerErrorDisplay(This,fPerErrorDisplay)	\
    (This)->lpVtbl -> setPerErrorDisplay(This,fPerErrorDisplay)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id] */ HRESULT STDMETHODCALLTYPE IScriptErrorList_advanceError_Proxy( 
    IScriptErrorList __RPC_FAR * This);


void __RPC_STUB IScriptErrorList_advanceError_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IScriptErrorList_retreatError_Proxy( 
    IScriptErrorList __RPC_FAR * This);


void __RPC_STUB IScriptErrorList_retreatError_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IScriptErrorList_canAdvanceError_Proxy( 
    IScriptErrorList __RPC_FAR * This,
    /* [retval][out] */ BOOL __RPC_FAR *pfCanAdvance);


void __RPC_STUB IScriptErrorList_canAdvanceError_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IScriptErrorList_canRetreatError_Proxy( 
    IScriptErrorList __RPC_FAR * This,
    /* [retval][out] */ BOOL __RPC_FAR *pfCanRetreat);


void __RPC_STUB IScriptErrorList_canRetreatError_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IScriptErrorList_getErrorLine_Proxy( 
    IScriptErrorList __RPC_FAR * This,
    /* [retval][out] */ LONG __RPC_FAR *plLine);


void __RPC_STUB IScriptErrorList_getErrorLine_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IScriptErrorList_getErrorChar_Proxy( 
    IScriptErrorList __RPC_FAR * This,
    /* [retval][out] */ LONG __RPC_FAR *plChar);


void __RPC_STUB IScriptErrorList_getErrorChar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IScriptErrorList_getErrorCode_Proxy( 
    IScriptErrorList __RPC_FAR * This,
    /* [retval][out] */ LONG __RPC_FAR *plCode);


void __RPC_STUB IScriptErrorList_getErrorCode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IScriptErrorList_getErrorMsg_Proxy( 
    IScriptErrorList __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pstr);


void __RPC_STUB IScriptErrorList_getErrorMsg_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IScriptErrorList_getErrorUrl_Proxy( 
    IScriptErrorList __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pstr);


void __RPC_STUB IScriptErrorList_getErrorUrl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IScriptErrorList_getAlwaysShowLockState_Proxy( 
    IScriptErrorList __RPC_FAR * This,
    /* [retval][out] */ BOOL __RPC_FAR *pfAlwaysShowLocked);


void __RPC_STUB IScriptErrorList_getAlwaysShowLockState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IScriptErrorList_getDetailsPaneOpen_Proxy( 
    IScriptErrorList __RPC_FAR * This,
    /* [retval][out] */ BOOL __RPC_FAR *pfDetailsPaneOpen);


void __RPC_STUB IScriptErrorList_getDetailsPaneOpen_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IScriptErrorList_setDetailsPaneOpen_Proxy( 
    IScriptErrorList __RPC_FAR * This,
    BOOL fDetailsPaneOpen);


void __RPC_STUB IScriptErrorList_setDetailsPaneOpen_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IScriptErrorList_getPerErrorDisplay_Proxy( 
    IScriptErrorList __RPC_FAR * This,
    /* [retval][out] */ BOOL __RPC_FAR *pfPerErrorDisplay);


void __RPC_STUB IScriptErrorList_getPerErrorDisplay_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IScriptErrorList_setPerErrorDisplay_Proxy( 
    IScriptErrorList __RPC_FAR * This,
    BOOL fPerErrorDisplay);


void __RPC_STUB IScriptErrorList_setPerErrorDisplay_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IScriptErrorList_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CScriptErrorList;

#ifdef __cplusplus

class DECLSPEC_UUID("EFD01300-160F-11d2-BB2E-00805FF7EFCA")
CScriptErrorList;
#endif
#endif /* __SHDocVw_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


