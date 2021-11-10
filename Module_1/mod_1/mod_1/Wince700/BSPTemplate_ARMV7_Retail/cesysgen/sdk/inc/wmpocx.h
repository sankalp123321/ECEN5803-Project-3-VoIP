

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0543 */
/* Compiler settings for wmpocx.idl:
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

#ifndef __wmpocx_h__
#define __wmpocx_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IWMPPlayer_FWD_DEFINED__
#define __IWMPPlayer_FWD_DEFINED__
typedef interface IWMPPlayer IWMPPlayer;
#endif 	/* __IWMPPlayer_FWD_DEFINED__ */


#ifndef __IWMPPlayer2_FWD_DEFINED__
#define __IWMPPlayer2_FWD_DEFINED__
typedef interface IWMPPlayer2 IWMPPlayer2;
#endif 	/* __IWMPPlayer2_FWD_DEFINED__ */


#ifndef __IWMPPlayer3_FWD_DEFINED__
#define __IWMPPlayer3_FWD_DEFINED__
typedef interface IWMPPlayer3 IWMPPlayer3;
#endif 	/* __IWMPPlayer3_FWD_DEFINED__ */


#ifndef __IWMPPlayer4_FWD_DEFINED__
#define __IWMPPlayer4_FWD_DEFINED__
typedef interface IWMPPlayer4 IWMPPlayer4;
#endif 	/* __IWMPPlayer4_FWD_DEFINED__ */


#ifndef __IWMPSettings2_FWD_DEFINED__
#define __IWMPSettings2_FWD_DEFINED__
typedef interface IWMPSettings2 IWMPSettings2;
#endif 	/* __IWMPSettings2_FWD_DEFINED__ */


#ifndef __IWMPEvents_FWD_DEFINED__
#define __IWMPEvents_FWD_DEFINED__
typedef interface IWMPEvents IWMPEvents;
#endif 	/* __IWMPEvents_FWD_DEFINED__ */


#ifndef ___WMPOCXEvents_FWD_DEFINED__
#define ___WMPOCXEvents_FWD_DEFINED__
typedef interface _WMPOCXEvents _WMPOCXEvents;
#endif 	/* ___WMPOCXEvents_FWD_DEFINED__ */


#ifndef __WMPOCX_FWD_DEFINED__
#define __WMPOCX_FWD_DEFINED__

#ifdef __cplusplus
typedef class WMPOCX WMPOCX;
#else
typedef struct WMPOCX WMPOCX;
#endif /* __cplusplus */

#endif 	/* __WMPOCX_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "oaidl.h"
#include "ocidl.h"
#include "objsafe.h"
#include "wmpcore.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_wmpocx_0000_0000 */
/* [local] */ 

#pragma once


extern RPC_IF_HANDLE __MIDL_itf_wmpocx_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmpocx_0000_0000_v0_0_s_ifspec;

#ifndef __IWMPPlayer_INTERFACE_DEFINED__
#define __IWMPPlayer_INTERFACE_DEFINED__

/* interface IWMPPlayer */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMPPlayer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6BF52A4F-394A-11d3-B153-00C04F79FAA6")
    IWMPPlayer : public IWMPCore
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_enabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_enabled( 
            /* [in] */ VARIANT_BOOL bEnabled) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_fullScreen( 
            /* [retval][out] */ VARIANT_BOOL *pbFullScreen) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_fullScreen( 
            VARIANT_BOOL bFullScreen) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_enableContextMenu( 
            /* [retval][out] */ VARIANT_BOOL *pbEnableContextMenu) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_enableContextMenu( 
            VARIANT_BOOL bEnableContextMenu) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_uiMode( 
            /* [in] */ BSTR bstrMode) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_uiMode( 
            /* [retval][out] */ BSTR *pbstrMode) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMPPlayerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMPPlayer * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMPPlayer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMPPlayer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMPPlayer * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMPPlayer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMPPlayer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMPPlayer * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *close )( 
            IWMPPlayer * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_URL )( 
            IWMPPlayer * This,
            /* [retval][out] */ BSTR *pbstrURL);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_URL )( 
            IWMPPlayer * This,
            /* [in] */ BSTR bstrURL);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_openState )( 
            IWMPPlayer * This,
            /* [retval][out] */ WMPOpenState *pwmpos);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_playState )( 
            IWMPPlayer * This,
            /* [retval][out] */ WMPPlayState *pwmpps);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_controls )( 
            IWMPPlayer * This,
            /* [retval][out] */ IWMPControls **ppControl);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_settings )( 
            IWMPPlayer * This,
            /* [retval][out] */ IWMPSettings **ppSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_currentMedia )( 
            IWMPPlayer * This,
            /* [retval][out] */ IWMPMedia **ppMedia);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_currentMedia )( 
            IWMPPlayer * This,
            /* [in] */ IWMPMedia *pMedia);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_mediaCollection )( 
            IWMPPlayer * This,
            /* [retval][out] */ IWMPMediaCollection **ppMediaCollection);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_playlistCollection )( 
            IWMPPlayer * This,
            /* [retval][out] */ IWMPPlaylistCollection **ppPlaylistCollection);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_versionInfo )( 
            IWMPPlayer * This,
            /* [retval][out] */ BSTR *pbstrVersionInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *launchURL )( 
            IWMPPlayer * This,
            BSTR bstrURL);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_network )( 
            IWMPPlayer * This,
            /* [retval][out] */ IWMPNetwork **ppQNI);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_currentPlaylist )( 
            IWMPPlayer * This,
            /* [retval][out] */ IWMPPlaylist **ppPL);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_currentPlaylist )( 
            IWMPPlayer * This,
            /* [in] */ IWMPPlaylist *pPL);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_cdromCollection )( 
            IWMPPlayer * This,
            /* [retval][out] */ IWMPCdromCollection **ppCdromCollection);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_closedCaption )( 
            IWMPPlayer * This,
            /* [retval][out] */ IWMPClosedCaption **ppClosedCaption);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_isOnline )( 
            IWMPPlayer * This,
            /* [retval][out] */ VARIANT_BOOL *pfOnline);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_error )( 
            IWMPPlayer * This,
            /* [retval][out] */ IWMPError **ppError);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_status )( 
            IWMPPlayer * This,
            /* [retval][out] */ BSTR *pbstrStatus);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_enabled )( 
            IWMPPlayer * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_enabled )( 
            IWMPPlayer * This,
            /* [in] */ VARIANT_BOOL bEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_fullScreen )( 
            IWMPPlayer * This,
            /* [retval][out] */ VARIANT_BOOL *pbFullScreen);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_fullScreen )( 
            IWMPPlayer * This,
            VARIANT_BOOL bFullScreen);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_enableContextMenu )( 
            IWMPPlayer * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnableContextMenu);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_enableContextMenu )( 
            IWMPPlayer * This,
            VARIANT_BOOL bEnableContextMenu);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_uiMode )( 
            IWMPPlayer * This,
            /* [in] */ BSTR bstrMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_uiMode )( 
            IWMPPlayer * This,
            /* [retval][out] */ BSTR *pbstrMode);
        
        END_INTERFACE
    } IWMPPlayerVtbl;

    interface IWMPPlayer
    {
        CONST_VTBL struct IWMPPlayerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMPPlayer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMPPlayer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMPPlayer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMPPlayer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWMPPlayer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWMPPlayer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWMPPlayer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWMPPlayer_close(This)	\
    ( (This)->lpVtbl -> close(This) ) 

#define IWMPPlayer_get_URL(This,pbstrURL)	\
    ( (This)->lpVtbl -> get_URL(This,pbstrURL) ) 

#define IWMPPlayer_put_URL(This,bstrURL)	\
    ( (This)->lpVtbl -> put_URL(This,bstrURL) ) 

#define IWMPPlayer_get_openState(This,pwmpos)	\
    ( (This)->lpVtbl -> get_openState(This,pwmpos) ) 

#define IWMPPlayer_get_playState(This,pwmpps)	\
    ( (This)->lpVtbl -> get_playState(This,pwmpps) ) 

#define IWMPPlayer_get_controls(This,ppControl)	\
    ( (This)->lpVtbl -> get_controls(This,ppControl) ) 

#define IWMPPlayer_get_settings(This,ppSettings)	\
    ( (This)->lpVtbl -> get_settings(This,ppSettings) ) 

#define IWMPPlayer_get_currentMedia(This,ppMedia)	\
    ( (This)->lpVtbl -> get_currentMedia(This,ppMedia) ) 

#define IWMPPlayer_put_currentMedia(This,pMedia)	\
    ( (This)->lpVtbl -> put_currentMedia(This,pMedia) ) 

#define IWMPPlayer_get_mediaCollection(This,ppMediaCollection)	\
    ( (This)->lpVtbl -> get_mediaCollection(This,ppMediaCollection) ) 

#define IWMPPlayer_get_playlistCollection(This,ppPlaylistCollection)	\
    ( (This)->lpVtbl -> get_playlistCollection(This,ppPlaylistCollection) ) 

#define IWMPPlayer_get_versionInfo(This,pbstrVersionInfo)	\
    ( (This)->lpVtbl -> get_versionInfo(This,pbstrVersionInfo) ) 

#define IWMPPlayer_launchURL(This,bstrURL)	\
    ( (This)->lpVtbl -> launchURL(This,bstrURL) ) 

#define IWMPPlayer_get_network(This,ppQNI)	\
    ( (This)->lpVtbl -> get_network(This,ppQNI) ) 

#define IWMPPlayer_get_currentPlaylist(This,ppPL)	\
    ( (This)->lpVtbl -> get_currentPlaylist(This,ppPL) ) 

#define IWMPPlayer_put_currentPlaylist(This,pPL)	\
    ( (This)->lpVtbl -> put_currentPlaylist(This,pPL) ) 

#define IWMPPlayer_get_cdromCollection(This,ppCdromCollection)	\
    ( (This)->lpVtbl -> get_cdromCollection(This,ppCdromCollection) ) 

#define IWMPPlayer_get_closedCaption(This,ppClosedCaption)	\
    ( (This)->lpVtbl -> get_closedCaption(This,ppClosedCaption) ) 

#define IWMPPlayer_get_isOnline(This,pfOnline)	\
    ( (This)->lpVtbl -> get_isOnline(This,pfOnline) ) 

#define IWMPPlayer_get_error(This,ppError)	\
    ( (This)->lpVtbl -> get_error(This,ppError) ) 

#define IWMPPlayer_get_status(This,pbstrStatus)	\
    ( (This)->lpVtbl -> get_status(This,pbstrStatus) ) 


#define IWMPPlayer_get_enabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_enabled(This,pbEnabled) ) 

#define IWMPPlayer_put_enabled(This,bEnabled)	\
    ( (This)->lpVtbl -> put_enabled(This,bEnabled) ) 

#define IWMPPlayer_get_fullScreen(This,pbFullScreen)	\
    ( (This)->lpVtbl -> get_fullScreen(This,pbFullScreen) ) 

#define IWMPPlayer_put_fullScreen(This,bFullScreen)	\
    ( (This)->lpVtbl -> put_fullScreen(This,bFullScreen) ) 

#define IWMPPlayer_get_enableContextMenu(This,pbEnableContextMenu)	\
    ( (This)->lpVtbl -> get_enableContextMenu(This,pbEnableContextMenu) ) 

#define IWMPPlayer_put_enableContextMenu(This,bEnableContextMenu)	\
    ( (This)->lpVtbl -> put_enableContextMenu(This,bEnableContextMenu) ) 

#define IWMPPlayer_put_uiMode(This,bstrMode)	\
    ( (This)->lpVtbl -> put_uiMode(This,bstrMode) ) 

#define IWMPPlayer_get_uiMode(This,pbstrMode)	\
    ( (This)->lpVtbl -> get_uiMode(This,pbstrMode) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMPPlayer_INTERFACE_DEFINED__ */


#ifndef __IWMPPlayer2_INTERFACE_DEFINED__
#define __IWMPPlayer2_INTERFACE_DEFINED__

/* interface IWMPPlayer2 */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMPPlayer2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0E6B01D1-D407-4c85-BF5F-1C01F6150280")
    IWMPPlayer2 : public IWMPCore
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_enabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_enabled( 
            /* [in] */ VARIANT_BOOL bEnabled) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_fullScreen( 
            /* [retval][out] */ VARIANT_BOOL *pbFullScreen) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_fullScreen( 
            VARIANT_BOOL bFullScreen) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_enableContextMenu( 
            /* [retval][out] */ VARIANT_BOOL *pbEnableContextMenu) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_enableContextMenu( 
            VARIANT_BOOL bEnableContextMenu) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_uiMode( 
            /* [in] */ BSTR bstrMode) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_uiMode( 
            /* [retval][out] */ BSTR *pbstrMode) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_stretchToFit( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_stretchToFit( 
            /* [in] */ VARIANT_BOOL bEnabled) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_windowlessVideo( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_windowlessVideo( 
            /* [in] */ VARIANT_BOOL bEnabled) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMPPlayer2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMPPlayer2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMPPlayer2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMPPlayer2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMPPlayer2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMPPlayer2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMPPlayer2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMPPlayer2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *close )( 
            IWMPPlayer2 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_URL )( 
            IWMPPlayer2 * This,
            /* [retval][out] */ BSTR *pbstrURL);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_URL )( 
            IWMPPlayer2 * This,
            /* [in] */ BSTR bstrURL);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_openState )( 
            IWMPPlayer2 * This,
            /* [retval][out] */ WMPOpenState *pwmpos);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_playState )( 
            IWMPPlayer2 * This,
            /* [retval][out] */ WMPPlayState *pwmpps);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_controls )( 
            IWMPPlayer2 * This,
            /* [retval][out] */ IWMPControls **ppControl);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_settings )( 
            IWMPPlayer2 * This,
            /* [retval][out] */ IWMPSettings **ppSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_currentMedia )( 
            IWMPPlayer2 * This,
            /* [retval][out] */ IWMPMedia **ppMedia);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_currentMedia )( 
            IWMPPlayer2 * This,
            /* [in] */ IWMPMedia *pMedia);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_mediaCollection )( 
            IWMPPlayer2 * This,
            /* [retval][out] */ IWMPMediaCollection **ppMediaCollection);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_playlistCollection )( 
            IWMPPlayer2 * This,
            /* [retval][out] */ IWMPPlaylistCollection **ppPlaylistCollection);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_versionInfo )( 
            IWMPPlayer2 * This,
            /* [retval][out] */ BSTR *pbstrVersionInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *launchURL )( 
            IWMPPlayer2 * This,
            BSTR bstrURL);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_network )( 
            IWMPPlayer2 * This,
            /* [retval][out] */ IWMPNetwork **ppQNI);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_currentPlaylist )( 
            IWMPPlayer2 * This,
            /* [retval][out] */ IWMPPlaylist **ppPL);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_currentPlaylist )( 
            IWMPPlayer2 * This,
            /* [in] */ IWMPPlaylist *pPL);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_cdromCollection )( 
            IWMPPlayer2 * This,
            /* [retval][out] */ IWMPCdromCollection **ppCdromCollection);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_closedCaption )( 
            IWMPPlayer2 * This,
            /* [retval][out] */ IWMPClosedCaption **ppClosedCaption);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_isOnline )( 
            IWMPPlayer2 * This,
            /* [retval][out] */ VARIANT_BOOL *pfOnline);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_error )( 
            IWMPPlayer2 * This,
            /* [retval][out] */ IWMPError **ppError);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_status )( 
            IWMPPlayer2 * This,
            /* [retval][out] */ BSTR *pbstrStatus);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_enabled )( 
            IWMPPlayer2 * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_enabled )( 
            IWMPPlayer2 * This,
            /* [in] */ VARIANT_BOOL bEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_fullScreen )( 
            IWMPPlayer2 * This,
            /* [retval][out] */ VARIANT_BOOL *pbFullScreen);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_fullScreen )( 
            IWMPPlayer2 * This,
            VARIANT_BOOL bFullScreen);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_enableContextMenu )( 
            IWMPPlayer2 * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnableContextMenu);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_enableContextMenu )( 
            IWMPPlayer2 * This,
            VARIANT_BOOL bEnableContextMenu);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_uiMode )( 
            IWMPPlayer2 * This,
            /* [in] */ BSTR bstrMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_uiMode )( 
            IWMPPlayer2 * This,
            /* [retval][out] */ BSTR *pbstrMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_stretchToFit )( 
            IWMPPlayer2 * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_stretchToFit )( 
            IWMPPlayer2 * This,
            /* [in] */ VARIANT_BOOL bEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_windowlessVideo )( 
            IWMPPlayer2 * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_windowlessVideo )( 
            IWMPPlayer2 * This,
            /* [in] */ VARIANT_BOOL bEnabled);
        
        END_INTERFACE
    } IWMPPlayer2Vtbl;

    interface IWMPPlayer2
    {
        CONST_VTBL struct IWMPPlayer2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMPPlayer2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMPPlayer2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMPPlayer2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMPPlayer2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWMPPlayer2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWMPPlayer2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWMPPlayer2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWMPPlayer2_close(This)	\
    ( (This)->lpVtbl -> close(This) ) 

#define IWMPPlayer2_get_URL(This,pbstrURL)	\
    ( (This)->lpVtbl -> get_URL(This,pbstrURL) ) 

#define IWMPPlayer2_put_URL(This,bstrURL)	\
    ( (This)->lpVtbl -> put_URL(This,bstrURL) ) 

#define IWMPPlayer2_get_openState(This,pwmpos)	\
    ( (This)->lpVtbl -> get_openState(This,pwmpos) ) 

#define IWMPPlayer2_get_playState(This,pwmpps)	\
    ( (This)->lpVtbl -> get_playState(This,pwmpps) ) 

#define IWMPPlayer2_get_controls(This,ppControl)	\
    ( (This)->lpVtbl -> get_controls(This,ppControl) ) 

#define IWMPPlayer2_get_settings(This,ppSettings)	\
    ( (This)->lpVtbl -> get_settings(This,ppSettings) ) 

#define IWMPPlayer2_get_currentMedia(This,ppMedia)	\
    ( (This)->lpVtbl -> get_currentMedia(This,ppMedia) ) 

#define IWMPPlayer2_put_currentMedia(This,pMedia)	\
    ( (This)->lpVtbl -> put_currentMedia(This,pMedia) ) 

#define IWMPPlayer2_get_mediaCollection(This,ppMediaCollection)	\
    ( (This)->lpVtbl -> get_mediaCollection(This,ppMediaCollection) ) 

#define IWMPPlayer2_get_playlistCollection(This,ppPlaylistCollection)	\
    ( (This)->lpVtbl -> get_playlistCollection(This,ppPlaylistCollection) ) 

#define IWMPPlayer2_get_versionInfo(This,pbstrVersionInfo)	\
    ( (This)->lpVtbl -> get_versionInfo(This,pbstrVersionInfo) ) 

#define IWMPPlayer2_launchURL(This,bstrURL)	\
    ( (This)->lpVtbl -> launchURL(This,bstrURL) ) 

#define IWMPPlayer2_get_network(This,ppQNI)	\
    ( (This)->lpVtbl -> get_network(This,ppQNI) ) 

#define IWMPPlayer2_get_currentPlaylist(This,ppPL)	\
    ( (This)->lpVtbl -> get_currentPlaylist(This,ppPL) ) 

#define IWMPPlayer2_put_currentPlaylist(This,pPL)	\
    ( (This)->lpVtbl -> put_currentPlaylist(This,pPL) ) 

#define IWMPPlayer2_get_cdromCollection(This,ppCdromCollection)	\
    ( (This)->lpVtbl -> get_cdromCollection(This,ppCdromCollection) ) 

#define IWMPPlayer2_get_closedCaption(This,ppClosedCaption)	\
    ( (This)->lpVtbl -> get_closedCaption(This,ppClosedCaption) ) 

#define IWMPPlayer2_get_isOnline(This,pfOnline)	\
    ( (This)->lpVtbl -> get_isOnline(This,pfOnline) ) 

#define IWMPPlayer2_get_error(This,ppError)	\
    ( (This)->lpVtbl -> get_error(This,ppError) ) 

#define IWMPPlayer2_get_status(This,pbstrStatus)	\
    ( (This)->lpVtbl -> get_status(This,pbstrStatus) ) 


#define IWMPPlayer2_get_enabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_enabled(This,pbEnabled) ) 

#define IWMPPlayer2_put_enabled(This,bEnabled)	\
    ( (This)->lpVtbl -> put_enabled(This,bEnabled) ) 

#define IWMPPlayer2_get_fullScreen(This,pbFullScreen)	\
    ( (This)->lpVtbl -> get_fullScreen(This,pbFullScreen) ) 

#define IWMPPlayer2_put_fullScreen(This,bFullScreen)	\
    ( (This)->lpVtbl -> put_fullScreen(This,bFullScreen) ) 

#define IWMPPlayer2_get_enableContextMenu(This,pbEnableContextMenu)	\
    ( (This)->lpVtbl -> get_enableContextMenu(This,pbEnableContextMenu) ) 

#define IWMPPlayer2_put_enableContextMenu(This,bEnableContextMenu)	\
    ( (This)->lpVtbl -> put_enableContextMenu(This,bEnableContextMenu) ) 

#define IWMPPlayer2_put_uiMode(This,bstrMode)	\
    ( (This)->lpVtbl -> put_uiMode(This,bstrMode) ) 

#define IWMPPlayer2_get_uiMode(This,pbstrMode)	\
    ( (This)->lpVtbl -> get_uiMode(This,pbstrMode) ) 

#define IWMPPlayer2_get_stretchToFit(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_stretchToFit(This,pbEnabled) ) 

#define IWMPPlayer2_put_stretchToFit(This,bEnabled)	\
    ( (This)->lpVtbl -> put_stretchToFit(This,bEnabled) ) 

#define IWMPPlayer2_get_windowlessVideo(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_windowlessVideo(This,pbEnabled) ) 

#define IWMPPlayer2_put_windowlessVideo(This,bEnabled)	\
    ( (This)->lpVtbl -> put_windowlessVideo(This,bEnabled) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMPPlayer2_INTERFACE_DEFINED__ */


#ifndef __IWMPPlayer3_INTERFACE_DEFINED__
#define __IWMPPlayer3_INTERFACE_DEFINED__

/* interface IWMPPlayer3 */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMPPlayer3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("54062B68-052A-4c25-A39F-8B63346511D4")
    IWMPPlayer3 : public IWMPCore2
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_enabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_enabled( 
            /* [in] */ VARIANT_BOOL bEnabled) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_fullScreen( 
            /* [retval][out] */ VARIANT_BOOL *pbFullScreen) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_fullScreen( 
            VARIANT_BOOL bFullScreen) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_enableContextMenu( 
            /* [retval][out] */ VARIANT_BOOL *pbEnableContextMenu) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_enableContextMenu( 
            VARIANT_BOOL bEnableContextMenu) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_uiMode( 
            /* [in] */ BSTR bstrMode) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_uiMode( 
            /* [retval][out] */ BSTR *pbstrMode) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_stretchToFit( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_stretchToFit( 
            /* [in] */ VARIANT_BOOL bEnabled) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_windowlessVideo( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_windowlessVideo( 
            /* [in] */ VARIANT_BOOL bEnabled) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMPPlayer3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMPPlayer3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMPPlayer3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMPPlayer3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMPPlayer3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMPPlayer3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMPPlayer3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMPPlayer3 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *close )( 
            IWMPPlayer3 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_URL )( 
            IWMPPlayer3 * This,
            /* [retval][out] */ BSTR *pbstrURL);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_URL )( 
            IWMPPlayer3 * This,
            /* [in] */ BSTR bstrURL);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_openState )( 
            IWMPPlayer3 * This,
            /* [retval][out] */ WMPOpenState *pwmpos);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_playState )( 
            IWMPPlayer3 * This,
            /* [retval][out] */ WMPPlayState *pwmpps);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_controls )( 
            IWMPPlayer3 * This,
            /* [retval][out] */ IWMPControls **ppControl);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_settings )( 
            IWMPPlayer3 * This,
            /* [retval][out] */ IWMPSettings **ppSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_currentMedia )( 
            IWMPPlayer3 * This,
            /* [retval][out] */ IWMPMedia **ppMedia);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_currentMedia )( 
            IWMPPlayer3 * This,
            /* [in] */ IWMPMedia *pMedia);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_mediaCollection )( 
            IWMPPlayer3 * This,
            /* [retval][out] */ IWMPMediaCollection **ppMediaCollection);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_playlistCollection )( 
            IWMPPlayer3 * This,
            /* [retval][out] */ IWMPPlaylistCollection **ppPlaylistCollection);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_versionInfo )( 
            IWMPPlayer3 * This,
            /* [retval][out] */ BSTR *pbstrVersionInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *launchURL )( 
            IWMPPlayer3 * This,
            BSTR bstrURL);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_network )( 
            IWMPPlayer3 * This,
            /* [retval][out] */ IWMPNetwork **ppQNI);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_currentPlaylist )( 
            IWMPPlayer3 * This,
            /* [retval][out] */ IWMPPlaylist **ppPL);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_currentPlaylist )( 
            IWMPPlayer3 * This,
            /* [in] */ IWMPPlaylist *pPL);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_cdromCollection )( 
            IWMPPlayer3 * This,
            /* [retval][out] */ IWMPCdromCollection **ppCdromCollection);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_closedCaption )( 
            IWMPPlayer3 * This,
            /* [retval][out] */ IWMPClosedCaption **ppClosedCaption);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_isOnline )( 
            IWMPPlayer3 * This,
            /* [retval][out] */ VARIANT_BOOL *pfOnline);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_error )( 
            IWMPPlayer3 * This,
            /* [retval][out] */ IWMPError **ppError);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_status )( 
            IWMPPlayer3 * This,
            /* [retval][out] */ BSTR *pbstrStatus);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_dvd )( 
            IWMPPlayer3 * This,
            /* [retval][out] */ IWMPDVD **ppDVD);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_enabled )( 
            IWMPPlayer3 * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_enabled )( 
            IWMPPlayer3 * This,
            /* [in] */ VARIANT_BOOL bEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_fullScreen )( 
            IWMPPlayer3 * This,
            /* [retval][out] */ VARIANT_BOOL *pbFullScreen);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_fullScreen )( 
            IWMPPlayer3 * This,
            VARIANT_BOOL bFullScreen);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_enableContextMenu )( 
            IWMPPlayer3 * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnableContextMenu);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_enableContextMenu )( 
            IWMPPlayer3 * This,
            VARIANT_BOOL bEnableContextMenu);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_uiMode )( 
            IWMPPlayer3 * This,
            /* [in] */ BSTR bstrMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_uiMode )( 
            IWMPPlayer3 * This,
            /* [retval][out] */ BSTR *pbstrMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_stretchToFit )( 
            IWMPPlayer3 * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_stretchToFit )( 
            IWMPPlayer3 * This,
            /* [in] */ VARIANT_BOOL bEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_windowlessVideo )( 
            IWMPPlayer3 * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_windowlessVideo )( 
            IWMPPlayer3 * This,
            /* [in] */ VARIANT_BOOL bEnabled);
        
        END_INTERFACE
    } IWMPPlayer3Vtbl;

    interface IWMPPlayer3
    {
        CONST_VTBL struct IWMPPlayer3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMPPlayer3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMPPlayer3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMPPlayer3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMPPlayer3_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWMPPlayer3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWMPPlayer3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWMPPlayer3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWMPPlayer3_close(This)	\
    ( (This)->lpVtbl -> close(This) ) 

#define IWMPPlayer3_get_URL(This,pbstrURL)	\
    ( (This)->lpVtbl -> get_URL(This,pbstrURL) ) 

#define IWMPPlayer3_put_URL(This,bstrURL)	\
    ( (This)->lpVtbl -> put_URL(This,bstrURL) ) 

#define IWMPPlayer3_get_openState(This,pwmpos)	\
    ( (This)->lpVtbl -> get_openState(This,pwmpos) ) 

#define IWMPPlayer3_get_playState(This,pwmpps)	\
    ( (This)->lpVtbl -> get_playState(This,pwmpps) ) 

#define IWMPPlayer3_get_controls(This,ppControl)	\
    ( (This)->lpVtbl -> get_controls(This,ppControl) ) 

#define IWMPPlayer3_get_settings(This,ppSettings)	\
    ( (This)->lpVtbl -> get_settings(This,ppSettings) ) 

#define IWMPPlayer3_get_currentMedia(This,ppMedia)	\
    ( (This)->lpVtbl -> get_currentMedia(This,ppMedia) ) 

#define IWMPPlayer3_put_currentMedia(This,pMedia)	\
    ( (This)->lpVtbl -> put_currentMedia(This,pMedia) ) 

#define IWMPPlayer3_get_mediaCollection(This,ppMediaCollection)	\
    ( (This)->lpVtbl -> get_mediaCollection(This,ppMediaCollection) ) 

#define IWMPPlayer3_get_playlistCollection(This,ppPlaylistCollection)	\
    ( (This)->lpVtbl -> get_playlistCollection(This,ppPlaylistCollection) ) 

#define IWMPPlayer3_get_versionInfo(This,pbstrVersionInfo)	\
    ( (This)->lpVtbl -> get_versionInfo(This,pbstrVersionInfo) ) 

#define IWMPPlayer3_launchURL(This,bstrURL)	\
    ( (This)->lpVtbl -> launchURL(This,bstrURL) ) 

#define IWMPPlayer3_get_network(This,ppQNI)	\
    ( (This)->lpVtbl -> get_network(This,ppQNI) ) 

#define IWMPPlayer3_get_currentPlaylist(This,ppPL)	\
    ( (This)->lpVtbl -> get_currentPlaylist(This,ppPL) ) 

#define IWMPPlayer3_put_currentPlaylist(This,pPL)	\
    ( (This)->lpVtbl -> put_currentPlaylist(This,pPL) ) 

#define IWMPPlayer3_get_cdromCollection(This,ppCdromCollection)	\
    ( (This)->lpVtbl -> get_cdromCollection(This,ppCdromCollection) ) 

#define IWMPPlayer3_get_closedCaption(This,ppClosedCaption)	\
    ( (This)->lpVtbl -> get_closedCaption(This,ppClosedCaption) ) 

#define IWMPPlayer3_get_isOnline(This,pfOnline)	\
    ( (This)->lpVtbl -> get_isOnline(This,pfOnline) ) 

#define IWMPPlayer3_get_error(This,ppError)	\
    ( (This)->lpVtbl -> get_error(This,ppError) ) 

#define IWMPPlayer3_get_status(This,pbstrStatus)	\
    ( (This)->lpVtbl -> get_status(This,pbstrStatus) ) 


#define IWMPPlayer3_get_dvd(This,ppDVD)	\
    ( (This)->lpVtbl -> get_dvd(This,ppDVD) ) 


#define IWMPPlayer3_get_enabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_enabled(This,pbEnabled) ) 

#define IWMPPlayer3_put_enabled(This,bEnabled)	\
    ( (This)->lpVtbl -> put_enabled(This,bEnabled) ) 

#define IWMPPlayer3_get_fullScreen(This,pbFullScreen)	\
    ( (This)->lpVtbl -> get_fullScreen(This,pbFullScreen) ) 

#define IWMPPlayer3_put_fullScreen(This,bFullScreen)	\
    ( (This)->lpVtbl -> put_fullScreen(This,bFullScreen) ) 

#define IWMPPlayer3_get_enableContextMenu(This,pbEnableContextMenu)	\
    ( (This)->lpVtbl -> get_enableContextMenu(This,pbEnableContextMenu) ) 

#define IWMPPlayer3_put_enableContextMenu(This,bEnableContextMenu)	\
    ( (This)->lpVtbl -> put_enableContextMenu(This,bEnableContextMenu) ) 

#define IWMPPlayer3_put_uiMode(This,bstrMode)	\
    ( (This)->lpVtbl -> put_uiMode(This,bstrMode) ) 

#define IWMPPlayer3_get_uiMode(This,pbstrMode)	\
    ( (This)->lpVtbl -> get_uiMode(This,pbstrMode) ) 

#define IWMPPlayer3_get_stretchToFit(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_stretchToFit(This,pbEnabled) ) 

#define IWMPPlayer3_put_stretchToFit(This,bEnabled)	\
    ( (This)->lpVtbl -> put_stretchToFit(This,bEnabled) ) 

#define IWMPPlayer3_get_windowlessVideo(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_windowlessVideo(This,pbEnabled) ) 

#define IWMPPlayer3_put_windowlessVideo(This,bEnabled)	\
    ( (This)->lpVtbl -> put_windowlessVideo(This,bEnabled) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMPPlayer3_INTERFACE_DEFINED__ */


#ifndef __IWMPPlayer4_INTERFACE_DEFINED__
#define __IWMPPlayer4_INTERFACE_DEFINED__

/* interface IWMPPlayer4 */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMPPlayer4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6C497D62-8919-413c-82DB-E935FB3EC584")
    IWMPPlayer4 : public IWMPCore3
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_enabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_enabled( 
            /* [in] */ VARIANT_BOOL bEnabled) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_fullScreen( 
            /* [retval][out] */ VARIANT_BOOL *pbFullScreen) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_fullScreen( 
            VARIANT_BOOL bFullScreen) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_enableContextMenu( 
            /* [retval][out] */ VARIANT_BOOL *pbEnableContextMenu) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_enableContextMenu( 
            VARIANT_BOOL bEnableContextMenu) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_uiMode( 
            /* [in] */ BSTR bstrMode) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_uiMode( 
            /* [retval][out] */ BSTR *pbstrMode) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_stretchToFit( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_stretchToFit( 
            /* [in] */ VARIANT_BOOL bEnabled) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_windowlessVideo( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_windowlessVideo( 
            /* [in] */ VARIANT_BOOL bEnabled) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_isRemote( 
            /* [retval][out] */ VARIANT_BOOL *pvarfIsRemote) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_playerApplication( 
            /* [retval][out] */ IWMPPlayerApplication **ppIWMPPlayerApplication) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE openPlayer( 
            /* [in] */ BSTR bstrURL) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMPPlayer4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMPPlayer4 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMPPlayer4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMPPlayer4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMPPlayer4 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMPPlayer4 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMPPlayer4 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMPPlayer4 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *close )( 
            IWMPPlayer4 * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_URL )( 
            IWMPPlayer4 * This,
            /* [retval][out] */ BSTR *pbstrURL);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_URL )( 
            IWMPPlayer4 * This,
            /* [in] */ BSTR bstrURL);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_openState )( 
            IWMPPlayer4 * This,
            /* [retval][out] */ WMPOpenState *pwmpos);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_playState )( 
            IWMPPlayer4 * This,
            /* [retval][out] */ WMPPlayState *pwmpps);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_controls )( 
            IWMPPlayer4 * This,
            /* [retval][out] */ IWMPControls **ppControl);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_settings )( 
            IWMPPlayer4 * This,
            /* [retval][out] */ IWMPSettings **ppSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_currentMedia )( 
            IWMPPlayer4 * This,
            /* [retval][out] */ IWMPMedia **ppMedia);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_currentMedia )( 
            IWMPPlayer4 * This,
            /* [in] */ IWMPMedia *pMedia);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_mediaCollection )( 
            IWMPPlayer4 * This,
            /* [retval][out] */ IWMPMediaCollection **ppMediaCollection);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_playlistCollection )( 
            IWMPPlayer4 * This,
            /* [retval][out] */ IWMPPlaylistCollection **ppPlaylistCollection);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_versionInfo )( 
            IWMPPlayer4 * This,
            /* [retval][out] */ BSTR *pbstrVersionInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *launchURL )( 
            IWMPPlayer4 * This,
            BSTR bstrURL);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_network )( 
            IWMPPlayer4 * This,
            /* [retval][out] */ IWMPNetwork **ppQNI);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_currentPlaylist )( 
            IWMPPlayer4 * This,
            /* [retval][out] */ IWMPPlaylist **ppPL);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_currentPlaylist )( 
            IWMPPlayer4 * This,
            /* [in] */ IWMPPlaylist *pPL);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_cdromCollection )( 
            IWMPPlayer4 * This,
            /* [retval][out] */ IWMPCdromCollection **ppCdromCollection);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_closedCaption )( 
            IWMPPlayer4 * This,
            /* [retval][out] */ IWMPClosedCaption **ppClosedCaption);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_isOnline )( 
            IWMPPlayer4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfOnline);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_error )( 
            IWMPPlayer4 * This,
            /* [retval][out] */ IWMPError **ppError);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_status )( 
            IWMPPlayer4 * This,
            /* [retval][out] */ BSTR *pbstrStatus);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_dvd )( 
            IWMPPlayer4 * This,
            /* [retval][out] */ IWMPDVD **ppDVD);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *newMedia )( 
            IWMPPlayer4 * This,
            /* [in] */ BSTR bstrURL,
            /* [retval][out] */ IWMPMedia **ppMedia);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *newPlaylist )( 
            IWMPPlayer4 * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrURL,
            /* [retval][out] */ IWMPPlaylist **ppPlaylist);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_enabled )( 
            IWMPPlayer4 * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_enabled )( 
            IWMPPlayer4 * This,
            /* [in] */ VARIANT_BOOL bEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_fullScreen )( 
            IWMPPlayer4 * This,
            /* [retval][out] */ VARIANT_BOOL *pbFullScreen);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_fullScreen )( 
            IWMPPlayer4 * This,
            VARIANT_BOOL bFullScreen);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_enableContextMenu )( 
            IWMPPlayer4 * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnableContextMenu);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_enableContextMenu )( 
            IWMPPlayer4 * This,
            VARIANT_BOOL bEnableContextMenu);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_uiMode )( 
            IWMPPlayer4 * This,
            /* [in] */ BSTR bstrMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_uiMode )( 
            IWMPPlayer4 * This,
            /* [retval][out] */ BSTR *pbstrMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_stretchToFit )( 
            IWMPPlayer4 * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_stretchToFit )( 
            IWMPPlayer4 * This,
            /* [in] */ VARIANT_BOOL bEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_windowlessVideo )( 
            IWMPPlayer4 * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_windowlessVideo )( 
            IWMPPlayer4 * This,
            /* [in] */ VARIANT_BOOL bEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_isRemote )( 
            IWMPPlayer4 * This,
            /* [retval][out] */ VARIANT_BOOL *pvarfIsRemote);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_playerApplication )( 
            IWMPPlayer4 * This,
            /* [retval][out] */ IWMPPlayerApplication **ppIWMPPlayerApplication);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *openPlayer )( 
            IWMPPlayer4 * This,
            /* [in] */ BSTR bstrURL);
        
        END_INTERFACE
    } IWMPPlayer4Vtbl;

    interface IWMPPlayer4
    {
        CONST_VTBL struct IWMPPlayer4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMPPlayer4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMPPlayer4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMPPlayer4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMPPlayer4_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWMPPlayer4_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWMPPlayer4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWMPPlayer4_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWMPPlayer4_close(This)	\
    ( (This)->lpVtbl -> close(This) ) 

#define IWMPPlayer4_get_URL(This,pbstrURL)	\
    ( (This)->lpVtbl -> get_URL(This,pbstrURL) ) 

#define IWMPPlayer4_put_URL(This,bstrURL)	\
    ( (This)->lpVtbl -> put_URL(This,bstrURL) ) 

#define IWMPPlayer4_get_openState(This,pwmpos)	\
    ( (This)->lpVtbl -> get_openState(This,pwmpos) ) 

#define IWMPPlayer4_get_playState(This,pwmpps)	\
    ( (This)->lpVtbl -> get_playState(This,pwmpps) ) 

#define IWMPPlayer4_get_controls(This,ppControl)	\
    ( (This)->lpVtbl -> get_controls(This,ppControl) ) 

#define IWMPPlayer4_get_settings(This,ppSettings)	\
    ( (This)->lpVtbl -> get_settings(This,ppSettings) ) 

#define IWMPPlayer4_get_currentMedia(This,ppMedia)	\
    ( (This)->lpVtbl -> get_currentMedia(This,ppMedia) ) 

#define IWMPPlayer4_put_currentMedia(This,pMedia)	\
    ( (This)->lpVtbl -> put_currentMedia(This,pMedia) ) 

#define IWMPPlayer4_get_mediaCollection(This,ppMediaCollection)	\
    ( (This)->lpVtbl -> get_mediaCollection(This,ppMediaCollection) ) 

#define IWMPPlayer4_get_playlistCollection(This,ppPlaylistCollection)	\
    ( (This)->lpVtbl -> get_playlistCollection(This,ppPlaylistCollection) ) 

#define IWMPPlayer4_get_versionInfo(This,pbstrVersionInfo)	\
    ( (This)->lpVtbl -> get_versionInfo(This,pbstrVersionInfo) ) 

#define IWMPPlayer4_launchURL(This,bstrURL)	\
    ( (This)->lpVtbl -> launchURL(This,bstrURL) ) 

#define IWMPPlayer4_get_network(This,ppQNI)	\
    ( (This)->lpVtbl -> get_network(This,ppQNI) ) 

#define IWMPPlayer4_get_currentPlaylist(This,ppPL)	\
    ( (This)->lpVtbl -> get_currentPlaylist(This,ppPL) ) 

#define IWMPPlayer4_put_currentPlaylist(This,pPL)	\
    ( (This)->lpVtbl -> put_currentPlaylist(This,pPL) ) 

#define IWMPPlayer4_get_cdromCollection(This,ppCdromCollection)	\
    ( (This)->lpVtbl -> get_cdromCollection(This,ppCdromCollection) ) 

#define IWMPPlayer4_get_closedCaption(This,ppClosedCaption)	\
    ( (This)->lpVtbl -> get_closedCaption(This,ppClosedCaption) ) 

#define IWMPPlayer4_get_isOnline(This,pfOnline)	\
    ( (This)->lpVtbl -> get_isOnline(This,pfOnline) ) 

#define IWMPPlayer4_get_error(This,ppError)	\
    ( (This)->lpVtbl -> get_error(This,ppError) ) 

#define IWMPPlayer4_get_status(This,pbstrStatus)	\
    ( (This)->lpVtbl -> get_status(This,pbstrStatus) ) 


#define IWMPPlayer4_get_dvd(This,ppDVD)	\
    ( (This)->lpVtbl -> get_dvd(This,ppDVD) ) 


#define IWMPPlayer4_newMedia(This,bstrURL,ppMedia)	\
    ( (This)->lpVtbl -> newMedia(This,bstrURL,ppMedia) ) 

#define IWMPPlayer4_newPlaylist(This,bstrName,bstrURL,ppPlaylist)	\
    ( (This)->lpVtbl -> newPlaylist(This,bstrName,bstrURL,ppPlaylist) ) 


#define IWMPPlayer4_get_enabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_enabled(This,pbEnabled) ) 

#define IWMPPlayer4_put_enabled(This,bEnabled)	\
    ( (This)->lpVtbl -> put_enabled(This,bEnabled) ) 

#define IWMPPlayer4_get_fullScreen(This,pbFullScreen)	\
    ( (This)->lpVtbl -> get_fullScreen(This,pbFullScreen) ) 

#define IWMPPlayer4_put_fullScreen(This,bFullScreen)	\
    ( (This)->lpVtbl -> put_fullScreen(This,bFullScreen) ) 

#define IWMPPlayer4_get_enableContextMenu(This,pbEnableContextMenu)	\
    ( (This)->lpVtbl -> get_enableContextMenu(This,pbEnableContextMenu) ) 

#define IWMPPlayer4_put_enableContextMenu(This,bEnableContextMenu)	\
    ( (This)->lpVtbl -> put_enableContextMenu(This,bEnableContextMenu) ) 

#define IWMPPlayer4_put_uiMode(This,bstrMode)	\
    ( (This)->lpVtbl -> put_uiMode(This,bstrMode) ) 

#define IWMPPlayer4_get_uiMode(This,pbstrMode)	\
    ( (This)->lpVtbl -> get_uiMode(This,pbstrMode) ) 

#define IWMPPlayer4_get_stretchToFit(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_stretchToFit(This,pbEnabled) ) 

#define IWMPPlayer4_put_stretchToFit(This,bEnabled)	\
    ( (This)->lpVtbl -> put_stretchToFit(This,bEnabled) ) 

#define IWMPPlayer4_get_windowlessVideo(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_windowlessVideo(This,pbEnabled) ) 

#define IWMPPlayer4_put_windowlessVideo(This,bEnabled)	\
    ( (This)->lpVtbl -> put_windowlessVideo(This,bEnabled) ) 

#define IWMPPlayer4_get_isRemote(This,pvarfIsRemote)	\
    ( (This)->lpVtbl -> get_isRemote(This,pvarfIsRemote) ) 

#define IWMPPlayer4_get_playerApplication(This,ppIWMPPlayerApplication)	\
    ( (This)->lpVtbl -> get_playerApplication(This,ppIWMPPlayerApplication) ) 

#define IWMPPlayer4_openPlayer(This,bstrURL)	\
    ( (This)->lpVtbl -> openPlayer(This,bstrURL) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMPPlayer4_INTERFACE_DEFINED__ */


#ifndef __IWMPSettings2_INTERFACE_DEFINED__
#define __IWMPSettings2_INTERFACE_DEFINED__

/* interface IWMPSettings2 */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMPSettings2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FDA937A4-EECE-4da5-A0B6-39BF89ADE2C2")
    IWMPSettings2 : public IWMPSettings
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_defaultAudioLanguage( 
            /* [retval][out] */ long *plLangID) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_mediaAccessRights( 
            /* [retval][out] */ BSTR *pbstrRights) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE requestMediaAccessRights( 
            /* [in] */ BSTR bstrDesiredAccess,
            /* [retval][out] */ VARIANT_BOOL *pvbAccepted) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMPSettings2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMPSettings2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMPSettings2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMPSettings2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMPSettings2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMPSettings2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMPSettings2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMPSettings2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_isAvailable )( 
            IWMPSettings2 * This,
            /* [in] */ BSTR bstrItem,
            /* [retval][out] */ VARIANT_BOOL *pIsAvailable);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_autoStart )( 
            IWMPSettings2 * This,
            /* [retval][out] */ VARIANT_BOOL *pfAutoStart);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_autoStart )( 
            IWMPSettings2 * This,
            /* [in] */ VARIANT_BOOL fAutoStart);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_baseURL )( 
            IWMPSettings2 * This,
            /* [retval][out] */ BSTR *pbstrBaseURL);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_baseURL )( 
            IWMPSettings2 * This,
            /* [in] */ BSTR bstrBaseURL);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_defaultFrame )( 
            IWMPSettings2 * This,
            /* [retval][out] */ BSTR *pbstrDefaultFrame);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_defaultFrame )( 
            IWMPSettings2 * This,
            /* [in] */ BSTR bstrDefaultFrame);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_invokeURLs )( 
            IWMPSettings2 * This,
            /* [retval][out] */ VARIANT_BOOL *pfInvokeURLs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_invokeURLs )( 
            IWMPSettings2 * This,
            /* [in] */ VARIANT_BOOL fInvokeURLs);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_mute )( 
            IWMPSettings2 * This,
            /* [retval][out] */ VARIANT_BOOL *pfMute);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_mute )( 
            IWMPSettings2 * This,
            /* [in] */ VARIANT_BOOL fMute);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_playCount )( 
            IWMPSettings2 * This,
            /* [retval][out] */ long *plCount);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_playCount )( 
            IWMPSettings2 * This,
            /* [in] */ long lCount);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_rate )( 
            IWMPSettings2 * This,
            /* [retval][out] */ double *pdRate);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_rate )( 
            IWMPSettings2 * This,
            /* [in] */ double dRate);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_balance )( 
            IWMPSettings2 * This,
            /* [retval][out] */ long *plBalance);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_balance )( 
            IWMPSettings2 * This,
            /* [in] */ long lBalance);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_volume )( 
            IWMPSettings2 * This,
            /* [retval][out] */ long *plVolume);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_volume )( 
            IWMPSettings2 * This,
            /* [in] */ long lVolume);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getMode )( 
            IWMPSettings2 * This,
            /* [in] */ BSTR bstrMode,
            /* [retval][out] */ VARIANT_BOOL *pvarfMode);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *setMode )( 
            IWMPSettings2 * This,
            /* [in] */ BSTR bstrMode,
            /* [in] */ VARIANT_BOOL varfMode);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_enableErrorDialogs )( 
            IWMPSettings2 * This,
            /* [retval][out] */ VARIANT_BOOL *pfEnableErrorDialogs);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_enableErrorDialogs )( 
            IWMPSettings2 * This,
            /* [in] */ VARIANT_BOOL fEnableErrorDialogs);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_defaultAudioLanguage )( 
            IWMPSettings2 * This,
            /* [retval][out] */ long *plLangID);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_mediaAccessRights )( 
            IWMPSettings2 * This,
            /* [retval][out] */ BSTR *pbstrRights);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *requestMediaAccessRights )( 
            IWMPSettings2 * This,
            /* [in] */ BSTR bstrDesiredAccess,
            /* [retval][out] */ VARIANT_BOOL *pvbAccepted);
        
        END_INTERFACE
    } IWMPSettings2Vtbl;

    interface IWMPSettings2
    {
        CONST_VTBL struct IWMPSettings2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMPSettings2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMPSettings2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMPSettings2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMPSettings2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWMPSettings2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWMPSettings2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWMPSettings2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWMPSettings2_get_isAvailable(This,bstrItem,pIsAvailable)	\
    ( (This)->lpVtbl -> get_isAvailable(This,bstrItem,pIsAvailable) ) 

#define IWMPSettings2_get_autoStart(This,pfAutoStart)	\
    ( (This)->lpVtbl -> get_autoStart(This,pfAutoStart) ) 

#define IWMPSettings2_put_autoStart(This,fAutoStart)	\
    ( (This)->lpVtbl -> put_autoStart(This,fAutoStart) ) 

#define IWMPSettings2_get_baseURL(This,pbstrBaseURL)	\
    ( (This)->lpVtbl -> get_baseURL(This,pbstrBaseURL) ) 

#define IWMPSettings2_put_baseURL(This,bstrBaseURL)	\
    ( (This)->lpVtbl -> put_baseURL(This,bstrBaseURL) ) 

#define IWMPSettings2_get_defaultFrame(This,pbstrDefaultFrame)	\
    ( (This)->lpVtbl -> get_defaultFrame(This,pbstrDefaultFrame) ) 

#define IWMPSettings2_put_defaultFrame(This,bstrDefaultFrame)	\
    ( (This)->lpVtbl -> put_defaultFrame(This,bstrDefaultFrame) ) 

#define IWMPSettings2_get_invokeURLs(This,pfInvokeURLs)	\
    ( (This)->lpVtbl -> get_invokeURLs(This,pfInvokeURLs) ) 

#define IWMPSettings2_put_invokeURLs(This,fInvokeURLs)	\
    ( (This)->lpVtbl -> put_invokeURLs(This,fInvokeURLs) ) 

#define IWMPSettings2_get_mute(This,pfMute)	\
    ( (This)->lpVtbl -> get_mute(This,pfMute) ) 

#define IWMPSettings2_put_mute(This,fMute)	\
    ( (This)->lpVtbl -> put_mute(This,fMute) ) 

#define IWMPSettings2_get_playCount(This,plCount)	\
    ( (This)->lpVtbl -> get_playCount(This,plCount) ) 

#define IWMPSettings2_put_playCount(This,lCount)	\
    ( (This)->lpVtbl -> put_playCount(This,lCount) ) 

#define IWMPSettings2_get_rate(This,pdRate)	\
    ( (This)->lpVtbl -> get_rate(This,pdRate) ) 

#define IWMPSettings2_put_rate(This,dRate)	\
    ( (This)->lpVtbl -> put_rate(This,dRate) ) 

#define IWMPSettings2_get_balance(This,plBalance)	\
    ( (This)->lpVtbl -> get_balance(This,plBalance) ) 

#define IWMPSettings2_put_balance(This,lBalance)	\
    ( (This)->lpVtbl -> put_balance(This,lBalance) ) 

#define IWMPSettings2_get_volume(This,plVolume)	\
    ( (This)->lpVtbl -> get_volume(This,plVolume) ) 

#define IWMPSettings2_put_volume(This,lVolume)	\
    ( (This)->lpVtbl -> put_volume(This,lVolume) ) 

#define IWMPSettings2_getMode(This,bstrMode,pvarfMode)	\
    ( (This)->lpVtbl -> getMode(This,bstrMode,pvarfMode) ) 

#define IWMPSettings2_setMode(This,bstrMode,varfMode)	\
    ( (This)->lpVtbl -> setMode(This,bstrMode,varfMode) ) 

#define IWMPSettings2_get_enableErrorDialogs(This,pfEnableErrorDialogs)	\
    ( (This)->lpVtbl -> get_enableErrorDialogs(This,pfEnableErrorDialogs) ) 

#define IWMPSettings2_put_enableErrorDialogs(This,fEnableErrorDialogs)	\
    ( (This)->lpVtbl -> put_enableErrorDialogs(This,fEnableErrorDialogs) ) 


#define IWMPSettings2_get_defaultAudioLanguage(This,plLangID)	\
    ( (This)->lpVtbl -> get_defaultAudioLanguage(This,plLangID) ) 

#define IWMPSettings2_get_mediaAccessRights(This,pbstrRights)	\
    ( (This)->lpVtbl -> get_mediaAccessRights(This,pbstrRights) ) 

#define IWMPSettings2_requestMediaAccessRights(This,bstrDesiredAccess,pvbAccepted)	\
    ( (This)->lpVtbl -> requestMediaAccessRights(This,bstrDesiredAccess,pvbAccepted) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMPSettings2_INTERFACE_DEFINED__ */



#ifndef __WMPOCX_LIBRARY_DEFINED__
#define __WMPOCX_LIBRARY_DEFINED__

/* library WMPOCX */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_WMPOCX;

#ifndef __IWMPEvents_INTERFACE_DEFINED__
#define __IWMPEvents_INTERFACE_DEFINED__

/* interface IWMPEvents */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWMPEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("19A6627B-DA9E-47c1-BB23-00B5E668236A")
    IWMPEvents : public IUnknown
    {
    public:
        virtual /* [id] */ void STDMETHODCALLTYPE OpenStateChange( 
            /* [in] */ long NewState) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE PlayStateChange( 
            /* [in] */ long NewState) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE AudioLanguageChange( 
            /* [in] */ long LangID) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE StatusChange( void) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE ScriptCommand( 
            /* [in] */ BSTR scType,
            /* [in] */ BSTR Param) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE NewStream( void) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE Disconnect( 
            /* [in] */ long Result) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE Buffering( 
            /* [in] */ VARIANT_BOOL Start) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE Error( void) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE Warning( 
            /* [in] */ long WarningType,
            /* [in] */ long Param,
            /* [in] */ BSTR Description) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE EndOfStream( 
            /* [in] */ long Result) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE PositionChange( 
            /* [in] */ double oldPosition,
            /* [in] */ double newPosition) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE MarkerHit( 
            /* [in] */ long MarkerNum) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE DurationUnitChange( 
            /* [in] */ long NewDurationUnit) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE CdromMediaChange( 
            /* [in] */ long CdromNum) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE PlaylistChange( 
            /* [in] */ IDispatch *Playlist,
            /* [in] */ WMPPlaylistChangeEventType change) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE CurrentPlaylistChange( 
            /* [in] */ WMPPlaylistChangeEventType change) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE CurrentPlaylistItemAvailable( 
            /* [in] */ BSTR bstrItemName) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE MediaChange( 
            /* [in] */ IDispatch *Item) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE CurrentMediaItemAvailable( 
            /* [in] */ BSTR bstrItemName) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE CurrentItemChange( 
            /* [in] */ IDispatch *pdispMedia) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE MediaCollectionChange( void) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE MediaCollectionAttributeStringAdded( 
            /* [in] */ BSTR bstrAttribName,
            /* [in] */ BSTR bstrAttribVal) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE MediaCollectionAttributeStringRemoved( 
            /* [in] */ BSTR bstrAttribName,
            /* [in] */ BSTR bstrAttribVal) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE MediaCollectionAttributeStringChanged( 
            /* [in] */ BSTR bstrAttribName,
            /* [in] */ BSTR bstrOldAttribVal,
            /* [in] */ BSTR bstrNewAttribVal) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE PlaylistCollectionChange( void) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE PlaylistCollectionPlaylistAdded( 
            /* [in] */ BSTR bstrPlaylistName) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE PlaylistCollectionPlaylistRemoved( 
            /* [in] */ BSTR bstrPlaylistName) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE PlaylistCollectionPlaylistSetAsDeleted( 
            /* [in] */ BSTR bstrPlaylistName,
            /* [in] */ VARIANT_BOOL varfIsDeleted) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE ModeChange( 
            /* [in] */ BSTR ModeName,
            /* [in] */ VARIANT_BOOL NewValue) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE MediaError( 
            /* [in] */ IDispatch *pMediaObject) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE OpenPlaylistSwitch( 
            /* [in] */ IDispatch *pItem) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE DomainChange( 
            /* [in] */ BSTR strDomain) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE SwitchedToPlayerApplication( void) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE SwitchedToControl( void) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE PlayerDockedStateChange( void) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE PlayerReconnect( void) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE Click( 
            /* [in] */ short nButton,
            /* [in] */ short nShiftState,
            /* [in] */ long fX,
            /* [in] */ long fY) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE DoubleClick( 
            /* [in] */ short nButton,
            /* [in] */ short nShiftState,
            /* [in] */ long fX,
            /* [in] */ long fY) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE KeyDown( 
            /* [in] */ short nKeyCode,
            /* [in] */ short nShiftState) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE KeyPress( 
            /* [in] */ short nKeyAscii) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE KeyUp( 
            /* [in] */ short nKeyCode,
            /* [in] */ short nShiftState) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE MouseDown( 
            /* [in] */ short nButton,
            /* [in] */ short nShiftState,
            /* [in] */ long fX,
            /* [in] */ long fY) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE MouseMove( 
            /* [in] */ short nButton,
            /* [in] */ short nShiftState,
            /* [in] */ long fX,
            /* [in] */ long fY) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE MouseUp( 
            /* [in] */ short nButton,
            /* [in] */ short nShiftState,
            /* [in] */ long fX,
            /* [in] */ long fY) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMPEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMPEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMPEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMPEvents * This);
        
        /* [id] */ void ( STDMETHODCALLTYPE *OpenStateChange )( 
            IWMPEvents * This,
            /* [in] */ long NewState);
        
        /* [id] */ void ( STDMETHODCALLTYPE *PlayStateChange )( 
            IWMPEvents * This,
            /* [in] */ long NewState);
        
        /* [id] */ void ( STDMETHODCALLTYPE *AudioLanguageChange )( 
            IWMPEvents * This,
            /* [in] */ long LangID);
        
        /* [id] */ void ( STDMETHODCALLTYPE *StatusChange )( 
            IWMPEvents * This);
        
        /* [id] */ void ( STDMETHODCALLTYPE *ScriptCommand )( 
            IWMPEvents * This,
            /* [in] */ BSTR scType,
            /* [in] */ BSTR Param);
        
        /* [id] */ void ( STDMETHODCALLTYPE *NewStream )( 
            IWMPEvents * This);
        
        /* [id] */ void ( STDMETHODCALLTYPE *Disconnect )( 
            IWMPEvents * This,
            /* [in] */ long Result);
        
        /* [id] */ void ( STDMETHODCALLTYPE *Buffering )( 
            IWMPEvents * This,
            /* [in] */ VARIANT_BOOL Start);
        
        /* [id] */ void ( STDMETHODCALLTYPE *Error )( 
            IWMPEvents * This);
        
        /* [id] */ void ( STDMETHODCALLTYPE *Warning )( 
            IWMPEvents * This,
            /* [in] */ long WarningType,
            /* [in] */ long Param,
            /* [in] */ BSTR Description);
        
        /* [id] */ void ( STDMETHODCALLTYPE *EndOfStream )( 
            IWMPEvents * This,
            /* [in] */ long Result);
        
        /* [id] */ void ( STDMETHODCALLTYPE *PositionChange )( 
            IWMPEvents * This,
            /* [in] */ double oldPosition,
            /* [in] */ double newPosition);
        
        /* [id] */ void ( STDMETHODCALLTYPE *MarkerHit )( 
            IWMPEvents * This,
            /* [in] */ long MarkerNum);
        
        /* [id] */ void ( STDMETHODCALLTYPE *DurationUnitChange )( 
            IWMPEvents * This,
            /* [in] */ long NewDurationUnit);
        
        /* [id] */ void ( STDMETHODCALLTYPE *CdromMediaChange )( 
            IWMPEvents * This,
            /* [in] */ long CdromNum);
        
        /* [id] */ void ( STDMETHODCALLTYPE *PlaylistChange )( 
            IWMPEvents * This,
            /* [in] */ IDispatch *Playlist,
            /* [in] */ WMPPlaylistChangeEventType change);
        
        /* [id] */ void ( STDMETHODCALLTYPE *CurrentPlaylistChange )( 
            IWMPEvents * This,
            /* [in] */ WMPPlaylistChangeEventType change);
        
        /* [id] */ void ( STDMETHODCALLTYPE *CurrentPlaylistItemAvailable )( 
            IWMPEvents * This,
            /* [in] */ BSTR bstrItemName);
        
        /* [id] */ void ( STDMETHODCALLTYPE *MediaChange )( 
            IWMPEvents * This,
            /* [in] */ IDispatch *Item);
        
        /* [id] */ void ( STDMETHODCALLTYPE *CurrentMediaItemAvailable )( 
            IWMPEvents * This,
            /* [in] */ BSTR bstrItemName);
        
        /* [id] */ void ( STDMETHODCALLTYPE *CurrentItemChange )( 
            IWMPEvents * This,
            /* [in] */ IDispatch *pdispMedia);
        
        /* [id] */ void ( STDMETHODCALLTYPE *MediaCollectionChange )( 
            IWMPEvents * This);
        
        /* [id] */ void ( STDMETHODCALLTYPE *MediaCollectionAttributeStringAdded )( 
            IWMPEvents * This,
            /* [in] */ BSTR bstrAttribName,
            /* [in] */ BSTR bstrAttribVal);
        
        /* [id] */ void ( STDMETHODCALLTYPE *MediaCollectionAttributeStringRemoved )( 
            IWMPEvents * This,
            /* [in] */ BSTR bstrAttribName,
            /* [in] */ BSTR bstrAttribVal);
        
        /* [id] */ void ( STDMETHODCALLTYPE *MediaCollectionAttributeStringChanged )( 
            IWMPEvents * This,
            /* [in] */ BSTR bstrAttribName,
            /* [in] */ BSTR bstrOldAttribVal,
            /* [in] */ BSTR bstrNewAttribVal);
        
        /* [id] */ void ( STDMETHODCALLTYPE *PlaylistCollectionChange )( 
            IWMPEvents * This);
        
        /* [id] */ void ( STDMETHODCALLTYPE *PlaylistCollectionPlaylistAdded )( 
            IWMPEvents * This,
            /* [in] */ BSTR bstrPlaylistName);
        
        /* [id] */ void ( STDMETHODCALLTYPE *PlaylistCollectionPlaylistRemoved )( 
            IWMPEvents * This,
            /* [in] */ BSTR bstrPlaylistName);
        
        /* [id] */ void ( STDMETHODCALLTYPE *PlaylistCollectionPlaylistSetAsDeleted )( 
            IWMPEvents * This,
            /* [in] */ BSTR bstrPlaylistName,
            /* [in] */ VARIANT_BOOL varfIsDeleted);
        
        /* [id] */ void ( STDMETHODCALLTYPE *ModeChange )( 
            IWMPEvents * This,
            /* [in] */ BSTR ModeName,
            /* [in] */ VARIANT_BOOL NewValue);
        
        /* [id] */ void ( STDMETHODCALLTYPE *MediaError )( 
            IWMPEvents * This,
            /* [in] */ IDispatch *pMediaObject);
        
        /* [id] */ void ( STDMETHODCALLTYPE *OpenPlaylistSwitch )( 
            IWMPEvents * This,
            /* [in] */ IDispatch *pItem);
        
        /* [id] */ void ( STDMETHODCALLTYPE *DomainChange )( 
            IWMPEvents * This,
            /* [in] */ BSTR strDomain);
        
        /* [id] */ void ( STDMETHODCALLTYPE *SwitchedToPlayerApplication )( 
            IWMPEvents * This);
        
        /* [id] */ void ( STDMETHODCALLTYPE *SwitchedToControl )( 
            IWMPEvents * This);
        
        /* [id] */ void ( STDMETHODCALLTYPE *PlayerDockedStateChange )( 
            IWMPEvents * This);
        
        /* [id] */ void ( STDMETHODCALLTYPE *PlayerReconnect )( 
            IWMPEvents * This);
        
        /* [id] */ void ( STDMETHODCALLTYPE *Click )( 
            IWMPEvents * This,
            /* [in] */ short nButton,
            /* [in] */ short nShiftState,
            /* [in] */ long fX,
            /* [in] */ long fY);
        
        /* [id] */ void ( STDMETHODCALLTYPE *DoubleClick )( 
            IWMPEvents * This,
            /* [in] */ short nButton,
            /* [in] */ short nShiftState,
            /* [in] */ long fX,
            /* [in] */ long fY);
        
        /* [id] */ void ( STDMETHODCALLTYPE *KeyDown )( 
            IWMPEvents * This,
            /* [in] */ short nKeyCode,
            /* [in] */ short nShiftState);
        
        /* [id] */ void ( STDMETHODCALLTYPE *KeyPress )( 
            IWMPEvents * This,
            /* [in] */ short nKeyAscii);
        
        /* [id] */ void ( STDMETHODCALLTYPE *KeyUp )( 
            IWMPEvents * This,
            /* [in] */ short nKeyCode,
            /* [in] */ short nShiftState);
        
        /* [id] */ void ( STDMETHODCALLTYPE *MouseDown )( 
            IWMPEvents * This,
            /* [in] */ short nButton,
            /* [in] */ short nShiftState,
            /* [in] */ long fX,
            /* [in] */ long fY);
        
        /* [id] */ void ( STDMETHODCALLTYPE *MouseMove )( 
            IWMPEvents * This,
            /* [in] */ short nButton,
            /* [in] */ short nShiftState,
            /* [in] */ long fX,
            /* [in] */ long fY);
        
        /* [id] */ void ( STDMETHODCALLTYPE *MouseUp )( 
            IWMPEvents * This,
            /* [in] */ short nButton,
            /* [in] */ short nShiftState,
            /* [in] */ long fX,
            /* [in] */ long fY);
        
        END_INTERFACE
    } IWMPEventsVtbl;

    interface IWMPEvents
    {
        CONST_VTBL struct IWMPEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMPEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMPEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMPEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMPEvents_OpenStateChange(This,NewState)	\
    ( (This)->lpVtbl -> OpenStateChange(This,NewState) ) 

#define IWMPEvents_PlayStateChange(This,NewState)	\
    ( (This)->lpVtbl -> PlayStateChange(This,NewState) ) 

#define IWMPEvents_AudioLanguageChange(This,LangID)	\
    ( (This)->lpVtbl -> AudioLanguageChange(This,LangID) ) 

#define IWMPEvents_StatusChange(This)	\
    ( (This)->lpVtbl -> StatusChange(This) ) 

#define IWMPEvents_ScriptCommand(This,scType,Param)	\
    ( (This)->lpVtbl -> ScriptCommand(This,scType,Param) ) 

#define IWMPEvents_NewStream(This)	\
    ( (This)->lpVtbl -> NewStream(This) ) 

#define IWMPEvents_Disconnect(This,Result)	\
    ( (This)->lpVtbl -> Disconnect(This,Result) ) 

#define IWMPEvents_Buffering(This,Start)	\
    ( (This)->lpVtbl -> Buffering(This,Start) ) 

#define IWMPEvents_Error(This)	\
    ( (This)->lpVtbl -> Error(This) ) 

#define IWMPEvents_Warning(This,WarningType,Param,Description)	\
    ( (This)->lpVtbl -> Warning(This,WarningType,Param,Description) ) 

#define IWMPEvents_EndOfStream(This,Result)	\
    ( (This)->lpVtbl -> EndOfStream(This,Result) ) 

#define IWMPEvents_PositionChange(This,oldPosition,newPosition)	\
    ( (This)->lpVtbl -> PositionChange(This,oldPosition,newPosition) ) 

#define IWMPEvents_MarkerHit(This,MarkerNum)	\
    ( (This)->lpVtbl -> MarkerHit(This,MarkerNum) ) 

#define IWMPEvents_DurationUnitChange(This,NewDurationUnit)	\
    ( (This)->lpVtbl -> DurationUnitChange(This,NewDurationUnit) ) 

#define IWMPEvents_CdromMediaChange(This,CdromNum)	\
    ( (This)->lpVtbl -> CdromMediaChange(This,CdromNum) ) 

#define IWMPEvents_PlaylistChange(This,Playlist,change)	\
    ( (This)->lpVtbl -> PlaylistChange(This,Playlist,change) ) 

#define IWMPEvents_CurrentPlaylistChange(This,change)	\
    ( (This)->lpVtbl -> CurrentPlaylistChange(This,change) ) 

#define IWMPEvents_CurrentPlaylistItemAvailable(This,bstrItemName)	\
    ( (This)->lpVtbl -> CurrentPlaylistItemAvailable(This,bstrItemName) ) 

#define IWMPEvents_MediaChange(This,Item)	\
    ( (This)->lpVtbl -> MediaChange(This,Item) ) 

#define IWMPEvents_CurrentMediaItemAvailable(This,bstrItemName)	\
    ( (This)->lpVtbl -> CurrentMediaItemAvailable(This,bstrItemName) ) 

#define IWMPEvents_CurrentItemChange(This,pdispMedia)	\
    ( (This)->lpVtbl -> CurrentItemChange(This,pdispMedia) ) 

#define IWMPEvents_MediaCollectionChange(This)	\
    ( (This)->lpVtbl -> MediaCollectionChange(This) ) 

#define IWMPEvents_MediaCollectionAttributeStringAdded(This,bstrAttribName,bstrAttribVal)	\
    ( (This)->lpVtbl -> MediaCollectionAttributeStringAdded(This,bstrAttribName,bstrAttribVal) ) 

#define IWMPEvents_MediaCollectionAttributeStringRemoved(This,bstrAttribName,bstrAttribVal)	\
    ( (This)->lpVtbl -> MediaCollectionAttributeStringRemoved(This,bstrAttribName,bstrAttribVal) ) 

#define IWMPEvents_MediaCollectionAttributeStringChanged(This,bstrAttribName,bstrOldAttribVal,bstrNewAttribVal)	\
    ( (This)->lpVtbl -> MediaCollectionAttributeStringChanged(This,bstrAttribName,bstrOldAttribVal,bstrNewAttribVal) ) 

#define IWMPEvents_PlaylistCollectionChange(This)	\
    ( (This)->lpVtbl -> PlaylistCollectionChange(This) ) 

#define IWMPEvents_PlaylistCollectionPlaylistAdded(This,bstrPlaylistName)	\
    ( (This)->lpVtbl -> PlaylistCollectionPlaylistAdded(This,bstrPlaylistName) ) 

#define IWMPEvents_PlaylistCollectionPlaylistRemoved(This,bstrPlaylistName)	\
    ( (This)->lpVtbl -> PlaylistCollectionPlaylistRemoved(This,bstrPlaylistName) ) 

#define IWMPEvents_PlaylistCollectionPlaylistSetAsDeleted(This,bstrPlaylistName,varfIsDeleted)	\
    ( (This)->lpVtbl -> PlaylistCollectionPlaylistSetAsDeleted(This,bstrPlaylistName,varfIsDeleted) ) 

#define IWMPEvents_ModeChange(This,ModeName,NewValue)	\
    ( (This)->lpVtbl -> ModeChange(This,ModeName,NewValue) ) 

#define IWMPEvents_MediaError(This,pMediaObject)	\
    ( (This)->lpVtbl -> MediaError(This,pMediaObject) ) 

#define IWMPEvents_OpenPlaylistSwitch(This,pItem)	\
    ( (This)->lpVtbl -> OpenPlaylistSwitch(This,pItem) ) 

#define IWMPEvents_DomainChange(This,strDomain)	\
    ( (This)->lpVtbl -> DomainChange(This,strDomain) ) 

#define IWMPEvents_SwitchedToPlayerApplication(This)	\
    ( (This)->lpVtbl -> SwitchedToPlayerApplication(This) ) 

#define IWMPEvents_SwitchedToControl(This)	\
    ( (This)->lpVtbl -> SwitchedToControl(This) ) 

#define IWMPEvents_PlayerDockedStateChange(This)	\
    ( (This)->lpVtbl -> PlayerDockedStateChange(This) ) 

#define IWMPEvents_PlayerReconnect(This)	\
    ( (This)->lpVtbl -> PlayerReconnect(This) ) 

#define IWMPEvents_Click(This,nButton,nShiftState,fX,fY)	\
    ( (This)->lpVtbl -> Click(This,nButton,nShiftState,fX,fY) ) 

#define IWMPEvents_DoubleClick(This,nButton,nShiftState,fX,fY)	\
    ( (This)->lpVtbl -> DoubleClick(This,nButton,nShiftState,fX,fY) ) 

#define IWMPEvents_KeyDown(This,nKeyCode,nShiftState)	\
    ( (This)->lpVtbl -> KeyDown(This,nKeyCode,nShiftState) ) 

#define IWMPEvents_KeyPress(This,nKeyAscii)	\
    ( (This)->lpVtbl -> KeyPress(This,nKeyAscii) ) 

#define IWMPEvents_KeyUp(This,nKeyCode,nShiftState)	\
    ( (This)->lpVtbl -> KeyUp(This,nKeyCode,nShiftState) ) 

#define IWMPEvents_MouseDown(This,nButton,nShiftState,fX,fY)	\
    ( (This)->lpVtbl -> MouseDown(This,nButton,nShiftState,fX,fY) ) 

#define IWMPEvents_MouseMove(This,nButton,nShiftState,fX,fY)	\
    ( (This)->lpVtbl -> MouseMove(This,nButton,nShiftState,fX,fY) ) 

#define IWMPEvents_MouseUp(This,nButton,nShiftState,fX,fY)	\
    ( (This)->lpVtbl -> MouseUp(This,nButton,nShiftState,fX,fY) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMPEvents_INTERFACE_DEFINED__ */


#ifndef ___WMPOCXEvents_DISPINTERFACE_DEFINED__
#define ___WMPOCXEvents_DISPINTERFACE_DEFINED__

/* dispinterface _WMPOCXEvents */
/* [hidden][uuid] */ 


EXTERN_C const IID DIID__WMPOCXEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("6BF52A51-394A-11d3-B153-00C04F79FAA6")
    _WMPOCXEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _WMPOCXEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _WMPOCXEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _WMPOCXEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _WMPOCXEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _WMPOCXEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _WMPOCXEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _WMPOCXEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _WMPOCXEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _WMPOCXEventsVtbl;

    interface _WMPOCXEvents
    {
        CONST_VTBL struct _WMPOCXEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _WMPOCXEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _WMPOCXEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _WMPOCXEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _WMPOCXEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _WMPOCXEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _WMPOCXEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _WMPOCXEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___WMPOCXEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_WMPOCX;

#ifdef __cplusplus

class DECLSPEC_UUID("6BF52A52-394A-11d3-B153-00C04F79FAA6")
WMPOCX;
#endif
#endif /* __WMPOCX_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


