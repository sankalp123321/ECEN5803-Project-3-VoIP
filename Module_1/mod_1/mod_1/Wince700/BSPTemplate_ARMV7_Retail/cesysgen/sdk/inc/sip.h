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
/* Compiler settings for sip.idl:
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

#ifndef __sip_h__
#define __sip_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IIMCallback_FWD_DEFINED__
#define __IIMCallback_FWD_DEFINED__
typedef interface IIMCallback IIMCallback;
#endif  /* __IIMCallback_FWD_DEFINED__ */


#ifndef __IIMCallback2_FWD_DEFINED__
#define __IIMCallback2_FWD_DEFINED__
typedef interface IIMCallback2 IIMCallback2;
#endif  /* __IIMCallback2_FWD_DEFINED__ */


#ifndef __IIMCallback3_FWD_DEFINED__
#define __IIMCallback3_FWD_DEFINED__
typedef interface IIMCallback3 IIMCallback3;
#endif  /* __IIMCallback3_FWD_DEFINED__ */


#ifndef __IIMCallbackEx_FWD_DEFINED__
#define __IIMCallbackEx_FWD_DEFINED__
typedef interface IIMCallbackEx IIMCallbackEx;
#endif  /* __IIMCallbackEx_FWD_DEFINED__ */


#ifndef __IInputMethod_FWD_DEFINED__
#define __IInputMethod_FWD_DEFINED__
typedef interface IInputMethod IInputMethod;
#endif  /* __IInputMethod_FWD_DEFINED__ */


#ifndef __IInputMethodEx_FWD_DEFINED__
#define __IInputMethodEx_FWD_DEFINED__
typedef interface IInputMethodEx IInputMethodEx;
#endif  /* __IInputMethodEx_FWD_DEFINED__ */


#ifndef __IInputMethod2_FWD_DEFINED__
#define __IInputMethod2_FWD_DEFINED__
typedef interface IInputMethod2 IInputMethod2;
#endif  /* __IInputMethod2_FWD_DEFINED__ */


#ifndef __IInputMethod3_FWD_DEFINED__
#define __IInputMethod3_FWD_DEFINED__
typedef interface IInputMethod3 IInputMethod3;
#endif  /* __IInputMethod3_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "sipapi.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sip_0000_0000 */
/* [local] */ 

// Input Context Type definition, used by IInputMethod3::InputContextChange and IIMCallback3::GetInputContext

#define INPUTCONTEXT_INPUTLANGUAGE        1
#define INPUTCONTEXT_INPUTSCOPES          2

// Flags used in LMDATA

#define LMDATA_SYMBOL_BYTE       0x00000001
#define LMDATA_SYMBOL_WORD       0x00000002
#define LMDATA_SYMBOL_DWORD      0x00000004
#define LMDATA_SYMBOL_QWORD      0x00000008
#define LMDATA_SKIP_BYTE         0x00000010
#define LMDATA_SKIP_WORD         0x00000020
#define LMDATA_SCORE_BYTE        0x00000040
#define LMDATA_SCORE_WORD        0x00000080
#define LMDATA_SCORE_DWORD       0x00000100
#define LMDATA_SCORE_QWORD       0x00000200
#define LMDATA_SCORE_FLOAT       0x00000400
#define LMDATA_SCORE_DOUBLE      0x00000800

//
// ImInfo provided by the IM.
//
typedef struct _tagImInfo
{
    DWORD cbSize;
    HANDLE hImageNarrow;
    HANDLE hImageWide;
    int iNarrow;
    int iWide;
    DWORD fdwFlags;
    RECT rcSipRect;
}   IMINFO;

//
// LMDATA provided by the IM.
//
typedef struct _tagLMDATA
{
    DWORD dwVersion;
    DWORD flags;
    DWORD cnt;
    DWORD dwOffsetSymbols;
    DWORD dwOffsetSkip;
    DWORD dwOffsetScore;
    BYTE ab[ 1 ];
}   LMDATA;


extern RPC_IF_HANDLE __MIDL_itf_sip_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sip_0000_0000_v0_0_s_ifspec;

#ifndef __IIMCallback_INTERFACE_DEFINED__
#define __IIMCallback_INTERFACE_DEFINED__

/* interface IIMCallback */
/* [uuid][object] */ 


EXTERN_C const IID IID_IIMCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("42429669-ae04-11d0-a4f8-00aa00a749b9")
    IIMCallback : public IUnknown
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetImInfo( 
            IMINFO *pimi) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SendVirtualKey( 
            BYTE bVK,
            DWORD dwFlags) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SendCharEvents( 
            UINT uVK,
            UINT uKeyFlags,
            UINT uChars,
            UINT *puShift,
            UINT *puChars) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SendString( 
            BSTR ptszStr,
            DWORD dwChars) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IIMCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIMCallback * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIMCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIMCallback * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetImInfo )( 
            IIMCallback * This,
            IMINFO *pimi);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendVirtualKey )( 
            IIMCallback * This,
            BYTE bVK,
            DWORD dwFlags);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendCharEvents )( 
            IIMCallback * This,
            UINT uVK,
            UINT uKeyFlags,
            UINT uChars,
            UINT *puShift,
            UINT *puChars);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendString )( 
            IIMCallback * This,
            BSTR ptszStr,
            DWORD dwChars);
        
        END_INTERFACE
    } IIMCallbackVtbl;

    interface IIMCallback
    {
        CONST_VTBL struct IIMCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIMCallback_QueryInterface(This,riid,ppvObject) \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIMCallback_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIMCallback_Release(This)   \
    ( (This)->lpVtbl -> Release(This) ) 


#define IIMCallback_SetImInfo(This,pimi)    \
    ( (This)->lpVtbl -> SetImInfo(This,pimi) ) 

#define IIMCallback_SendVirtualKey(This,bVK,dwFlags)    \
    ( (This)->lpVtbl -> SendVirtualKey(This,bVK,dwFlags) ) 

#define IIMCallback_SendCharEvents(This,uVK,uKeyFlags,uChars,puShift,puChars)   \
    ( (This)->lpVtbl -> SendCharEvents(This,uVK,uKeyFlags,uChars,puShift,puChars) ) 

#define IIMCallback_SendString(This,ptszStr,dwChars)    \
    ( (This)->lpVtbl -> SendString(This,ptszStr,dwChars) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IIMCallback_INTERFACE_DEFINED__ */


#ifndef __IIMCallback2_INTERFACE_DEFINED__
#define __IIMCallback2_INTERFACE_DEFINED__

/* interface IIMCallback2 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IIMCallback2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0576F2E0-AA6B-11d2-A146-0000F8757270")
    IIMCallback2 : public IIMCallback
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SendAlternatives2( 
            LMDATA *plmd) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IIMCallback2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIMCallback2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIMCallback2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIMCallback2 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetImInfo )( 
            IIMCallback2 * This,
            IMINFO *pimi);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendVirtualKey )( 
            IIMCallback2 * This,
            BYTE bVK,
            DWORD dwFlags);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendCharEvents )( 
            IIMCallback2 * This,
            UINT uVK,
            UINT uKeyFlags,
            UINT uChars,
            UINT *puShift,
            UINT *puChars);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendString )( 
            IIMCallback2 * This,
            BSTR ptszStr,
            DWORD dwChars);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendAlternatives2 )( 
            IIMCallback2 * This,
            LMDATA *plmd);
        
        END_INTERFACE
    } IIMCallback2Vtbl;

    interface IIMCallback2
    {
        CONST_VTBL struct IIMCallback2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIMCallback2_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIMCallback2_AddRef(This)   \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIMCallback2_Release(This)  \
    ( (This)->lpVtbl -> Release(This) ) 


#define IIMCallback2_SetImInfo(This,pimi)   \
    ( (This)->lpVtbl -> SetImInfo(This,pimi) ) 

#define IIMCallback2_SendVirtualKey(This,bVK,dwFlags)   \
    ( (This)->lpVtbl -> SendVirtualKey(This,bVK,dwFlags) ) 

#define IIMCallback2_SendCharEvents(This,uVK,uKeyFlags,uChars,puShift,puChars)  \
    ( (This)->lpVtbl -> SendCharEvents(This,uVK,uKeyFlags,uChars,puShift,puChars) ) 

#define IIMCallback2_SendString(This,ptszStr,dwChars)   \
    ( (This)->lpVtbl -> SendString(This,ptszStr,dwChars) ) 


#define IIMCallback2_SendAlternatives2(This,plmd)   \
    ( (This)->lpVtbl -> SendAlternatives2(This,plmd) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IIMCallback2_INTERFACE_DEFINED__ */


#ifndef __IIMCallback3_INTERFACE_DEFINED__
#define __IIMCallback3_INTERFACE_DEFINED__

/* interface IIMCallback3 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IIMCallback3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("96B3F2DD-FA89-4dfb-877E-099F6DE09D86")
    IIMCallback3 : public IIMCallback2
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetInputContext( 
            /* [in] */ DWORD dwType,
            /* [out] */ BYTE *pData,
            /* [out][in] */ DWORD *pcbData) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IIMCallback3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIMCallback3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIMCallback3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIMCallback3 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetImInfo )( 
            IIMCallback3 * This,
            IMINFO *pimi);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendVirtualKey )( 
            IIMCallback3 * This,
            BYTE bVK,
            DWORD dwFlags);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendCharEvents )( 
            IIMCallback3 * This,
            UINT uVK,
            UINT uKeyFlags,
            UINT uChars,
            UINT *puShift,
            UINT *puChars);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendString )( 
            IIMCallback3 * This,
            BSTR ptszStr,
            DWORD dwChars);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendAlternatives2 )( 
            IIMCallback3 * This,
            LMDATA *plmd);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetInputContext )( 
            IIMCallback3 * This,
            /* [in] */ DWORD dwType,
            /* [out] */ BYTE *pData,
            /* [out][in] */ DWORD *pcbData);
        
        END_INTERFACE
    } IIMCallback3Vtbl;

    interface IIMCallback3
    {
        CONST_VTBL struct IIMCallback3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIMCallback3_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIMCallback3_AddRef(This)   \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIMCallback3_Release(This)  \
    ( (This)->lpVtbl -> Release(This) ) 


#define IIMCallback3_SetImInfo(This,pimi)   \
    ( (This)->lpVtbl -> SetImInfo(This,pimi) ) 

#define IIMCallback3_SendVirtualKey(This,bVK,dwFlags)   \
    ( (This)->lpVtbl -> SendVirtualKey(This,bVK,dwFlags) ) 

#define IIMCallback3_SendCharEvents(This,uVK,uKeyFlags,uChars,puShift,puChars)  \
    ( (This)->lpVtbl -> SendCharEvents(This,uVK,uKeyFlags,uChars,puShift,puChars) ) 

#define IIMCallback3_SendString(This,ptszStr,dwChars)   \
    ( (This)->lpVtbl -> SendString(This,ptszStr,dwChars) ) 


#define IIMCallback3_SendAlternatives2(This,plmd)   \
    ( (This)->lpVtbl -> SendAlternatives2(This,plmd) ) 


#define IIMCallback3_GetInputContext(This,dwType,pData,pcbData) \
    ( (This)->lpVtbl -> GetInputContext(This,dwType,pData,pcbData) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IIMCallback3_INTERFACE_DEFINED__ */


#ifndef __IIMCallbackEx_INTERFACE_DEFINED__
#define __IIMCallbackEx_INTERFACE_DEFINED__

/* interface IIMCallbackEx */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IIMCallbackEx;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9DDB3920-3606-11d2-A2EB-0000F8757270")
    IIMCallbackEx : public IIMCallback
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SendAlternatives( 
            LMDATA *plmd) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IIMCallbackExVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIMCallbackEx * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIMCallbackEx * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIMCallbackEx * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetImInfo )( 
            IIMCallbackEx * This,
            IMINFO *pimi);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendVirtualKey )( 
            IIMCallbackEx * This,
            BYTE bVK,
            DWORD dwFlags);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendCharEvents )( 
            IIMCallbackEx * This,
            UINT uVK,
            UINT uKeyFlags,
            UINT uChars,
            UINT *puShift,
            UINT *puChars);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendString )( 
            IIMCallbackEx * This,
            BSTR ptszStr,
            DWORD dwChars);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendAlternatives )( 
            IIMCallbackEx * This,
            LMDATA *plmd);
        
        END_INTERFACE
    } IIMCallbackExVtbl;

    interface IIMCallbackEx
    {
        CONST_VTBL struct IIMCallbackExVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIMCallbackEx_QueryInterface(This,riid,ppvObject)   \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIMCallbackEx_AddRef(This)  \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIMCallbackEx_Release(This) \
    ( (This)->lpVtbl -> Release(This) ) 


#define IIMCallbackEx_SetImInfo(This,pimi)  \
    ( (This)->lpVtbl -> SetImInfo(This,pimi) ) 

#define IIMCallbackEx_SendVirtualKey(This,bVK,dwFlags)  \
    ( (This)->lpVtbl -> SendVirtualKey(This,bVK,dwFlags) ) 

#define IIMCallbackEx_SendCharEvents(This,uVK,uKeyFlags,uChars,puShift,puChars) \
    ( (This)->lpVtbl -> SendCharEvents(This,uVK,uKeyFlags,uChars,puShift,puChars) ) 

#define IIMCallbackEx_SendString(This,ptszStr,dwChars)  \
    ( (This)->lpVtbl -> SendString(This,ptszStr,dwChars) ) 


#define IIMCallbackEx_SendAlternatives(This,plmd)   \
    ( (This)->lpVtbl -> SendAlternatives(This,plmd) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IIMCallbackEx_INTERFACE_DEFINED__ */


#ifndef __IInputMethod_INTERFACE_DEFINED__
#define __IInputMethod_INTERFACE_DEFINED__

/* interface IInputMethod */
/* [uuid][object] */ 


EXTERN_C const IID IID_IInputMethod;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("42429666-ae04-11d0-a4f8-00aa00a749b9")
    IInputMethod : public IUnknown
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Select( 
            /* [in] */ HWND hwndSip) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Deselect( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Showing( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Hiding( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetInfo( 
            /* [out] */ IMINFO *pimi) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ReceiveSipInfo( 
            /* [in] */ SIPINFO *psi) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RegisterCallback( 
            /* [in] */ IIMCallback *lpIMCallback) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetImData( 
            /* [in] */ DWORD dwSize,
            /* [out] */ void *pvImData) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetImData( 
            /* [in] */ DWORD dwSize,
            /* [in] */ void *pvImData) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE UserOptionsDlg( 
            /* [in] */ HWND hwndParent) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IInputMethodVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IInputMethod * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IInputMethod * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IInputMethod * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Select )( 
            IInputMethod * This,
            /* [in] */ HWND hwndSip);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Deselect )( 
            IInputMethod * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Showing )( 
            IInputMethod * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Hiding )( 
            IInputMethod * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetInfo )( 
            IInputMethod * This,
            /* [out] */ IMINFO *pimi);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ReceiveSipInfo )( 
            IInputMethod * This,
            /* [in] */ SIPINFO *psi);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RegisterCallback )( 
            IInputMethod * This,
            /* [in] */ IIMCallback *lpIMCallback);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetImData )( 
            IInputMethod * This,
            /* [in] */ DWORD dwSize,
            /* [out] */ void *pvImData);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetImData )( 
            IInputMethod * This,
            /* [in] */ DWORD dwSize,
            /* [in] */ void *pvImData);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *UserOptionsDlg )( 
            IInputMethod * This,
            /* [in] */ HWND hwndParent);
        
        END_INTERFACE
    } IInputMethodVtbl;

    interface IInputMethod
    {
        CONST_VTBL struct IInputMethodVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInputMethod_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInputMethod_AddRef(This)   \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInputMethod_Release(This)  \
    ( (This)->lpVtbl -> Release(This) ) 


#define IInputMethod_Select(This,hwndSip)   \
    ( (This)->lpVtbl -> Select(This,hwndSip) ) 

#define IInputMethod_Deselect(This) \
    ( (This)->lpVtbl -> Deselect(This) ) 

#define IInputMethod_Showing(This)  \
    ( (This)->lpVtbl -> Showing(This) ) 

#define IInputMethod_Hiding(This)   \
    ( (This)->lpVtbl -> Hiding(This) ) 

#define IInputMethod_GetInfo(This,pimi) \
    ( (This)->lpVtbl -> GetInfo(This,pimi) ) 

#define IInputMethod_ReceiveSipInfo(This,psi)   \
    ( (This)->lpVtbl -> ReceiveSipInfo(This,psi) ) 

#define IInputMethod_RegisterCallback(This,lpIMCallback)    \
    ( (This)->lpVtbl -> RegisterCallback(This,lpIMCallback) ) 

#define IInputMethod_GetImData(This,dwSize,pvImData)    \
    ( (This)->lpVtbl -> GetImData(This,dwSize,pvImData) ) 

#define IInputMethod_SetImData(This,dwSize,pvImData)    \
    ( (This)->lpVtbl -> SetImData(This,dwSize,pvImData) ) 

#define IInputMethod_UserOptionsDlg(This,hwndParent)    \
    ( (This)->lpVtbl -> UserOptionsDlg(This,hwndParent) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IInputMethod_INTERFACE_DEFINED__ */


#ifndef __IInputMethodEx_INTERFACE_DEFINED__
#define __IInputMethodEx_INTERFACE_DEFINED__

/* interface IInputMethodEx */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IInputMethodEx;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9DDB3921-3606-11d2-A2EB-0000F8757270")
    IInputMethodEx : public IInputMethod
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetIMMActiveContext( 
            /* [in] */ HWND hwnd,
            BOOL bOpen,
            DWORD dwConversion,
            DWORD dwSentence,
            DWORD hkl) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RegisterCallbackEx( 
            /* [in] */ IIMCallbackEx *lpIMCallback) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IInputMethodExVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IInputMethodEx * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IInputMethodEx * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IInputMethodEx * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Select )( 
            IInputMethodEx * This,
            /* [in] */ HWND hwndSip);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Deselect )( 
            IInputMethodEx * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Showing )( 
            IInputMethodEx * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Hiding )( 
            IInputMethodEx * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetInfo )( 
            IInputMethodEx * This,
            /* [out] */ IMINFO *pimi);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ReceiveSipInfo )( 
            IInputMethodEx * This,
            /* [in] */ SIPINFO *psi);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RegisterCallback )( 
            IInputMethodEx * This,
            /* [in] */ IIMCallback *lpIMCallback);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetImData )( 
            IInputMethodEx * This,
            /* [in] */ DWORD dwSize,
            /* [out] */ void *pvImData);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetImData )( 
            IInputMethodEx * This,
            /* [in] */ DWORD dwSize,
            /* [in] */ void *pvImData);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *UserOptionsDlg )( 
            IInputMethodEx * This,
            /* [in] */ HWND hwndParent);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetIMMActiveContext )( 
            IInputMethodEx * This,
            /* [in] */ HWND hwnd,
            BOOL bOpen,
            DWORD dwConversion,
            DWORD dwSentence,
            DWORD hkl);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RegisterCallbackEx )( 
            IInputMethodEx * This,
            /* [in] */ IIMCallbackEx *lpIMCallback);
        
        END_INTERFACE
    } IInputMethodExVtbl;

    interface IInputMethodEx
    {
        CONST_VTBL struct IInputMethodExVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInputMethodEx_QueryInterface(This,riid,ppvObject)  \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInputMethodEx_AddRef(This) \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInputMethodEx_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IInputMethodEx_Select(This,hwndSip) \
    ( (This)->lpVtbl -> Select(This,hwndSip) ) 

#define IInputMethodEx_Deselect(This)   \
    ( (This)->lpVtbl -> Deselect(This) ) 

#define IInputMethodEx_Showing(This)    \
    ( (This)->lpVtbl -> Showing(This) ) 

#define IInputMethodEx_Hiding(This) \
    ( (This)->lpVtbl -> Hiding(This) ) 

#define IInputMethodEx_GetInfo(This,pimi)   \
    ( (This)->lpVtbl -> GetInfo(This,pimi) ) 

#define IInputMethodEx_ReceiveSipInfo(This,psi) \
    ( (This)->lpVtbl -> ReceiveSipInfo(This,psi) ) 

#define IInputMethodEx_RegisterCallback(This,lpIMCallback)  \
    ( (This)->lpVtbl -> RegisterCallback(This,lpIMCallback) ) 

#define IInputMethodEx_GetImData(This,dwSize,pvImData)  \
    ( (This)->lpVtbl -> GetImData(This,dwSize,pvImData) ) 

#define IInputMethodEx_SetImData(This,dwSize,pvImData)  \
    ( (This)->lpVtbl -> SetImData(This,dwSize,pvImData) ) 

#define IInputMethodEx_UserOptionsDlg(This,hwndParent)  \
    ( (This)->lpVtbl -> UserOptionsDlg(This,hwndParent) ) 


#define IInputMethodEx_SetIMMActiveContext(This,hwnd,bOpen,dwConversion,dwSentence,hkl) \
    ( (This)->lpVtbl -> SetIMMActiveContext(This,hwnd,bOpen,dwConversion,dwSentence,hkl) ) 

#define IInputMethodEx_RegisterCallbackEx(This,lpIMCallback)    \
    ( (This)->lpVtbl -> RegisterCallbackEx(This,lpIMCallback) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IInputMethodEx_INTERFACE_DEFINED__ */


#ifndef __IInputMethod2_INTERFACE_DEFINED__
#define __IInputMethod2_INTERFACE_DEFINED__

/* interface IInputMethod2 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IInputMethod2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0576F2E1-AA6B-11d2-A146-0000F8757270")
    IInputMethod2 : public IInputMethod
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetIMMActiveContext( 
            /* [in] */ HWND hwnd,
            BOOL bOpen,
            DWORD dwConversion,
            DWORD dwSentence,
            DWORD hkl) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RegisterCallback2( 
            /* [in] */ IIMCallback2 *lpIMCallback) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IInputMethod2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IInputMethod2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IInputMethod2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IInputMethod2 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Select )( 
            IInputMethod2 * This,
            /* [in] */ HWND hwndSip);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Deselect )( 
            IInputMethod2 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Showing )( 
            IInputMethod2 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Hiding )( 
            IInputMethod2 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetInfo )( 
            IInputMethod2 * This,
            /* [out] */ IMINFO *pimi);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ReceiveSipInfo )( 
            IInputMethod2 * This,
            /* [in] */ SIPINFO *psi);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RegisterCallback )( 
            IInputMethod2 * This,
            /* [in] */ IIMCallback *lpIMCallback);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetImData )( 
            IInputMethod2 * This,
            /* [in] */ DWORD dwSize,
            /* [out] */ void *pvImData);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetImData )( 
            IInputMethod2 * This,
            /* [in] */ DWORD dwSize,
            /* [in] */ void *pvImData);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *UserOptionsDlg )( 
            IInputMethod2 * This,
            /* [in] */ HWND hwndParent);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetIMMActiveContext )( 
            IInputMethod2 * This,
            /* [in] */ HWND hwnd,
            BOOL bOpen,
            DWORD dwConversion,
            DWORD dwSentence,
            DWORD hkl);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RegisterCallback2 )( 
            IInputMethod2 * This,
            /* [in] */ IIMCallback2 *lpIMCallback);
        
        END_INTERFACE
    } IInputMethod2Vtbl;

    interface IInputMethod2
    {
        CONST_VTBL struct IInputMethod2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInputMethod2_QueryInterface(This,riid,ppvObject)   \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInputMethod2_AddRef(This)  \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInputMethod2_Release(This) \
    ( (This)->lpVtbl -> Release(This) ) 


#define IInputMethod2_Select(This,hwndSip)  \
    ( (This)->lpVtbl -> Select(This,hwndSip) ) 

#define IInputMethod2_Deselect(This)    \
    ( (This)->lpVtbl -> Deselect(This) ) 

#define IInputMethod2_Showing(This) \
    ( (This)->lpVtbl -> Showing(This) ) 

#define IInputMethod2_Hiding(This)  \
    ( (This)->lpVtbl -> Hiding(This) ) 

#define IInputMethod2_GetInfo(This,pimi)    \
    ( (This)->lpVtbl -> GetInfo(This,pimi) ) 

#define IInputMethod2_ReceiveSipInfo(This,psi)  \
    ( (This)->lpVtbl -> ReceiveSipInfo(This,psi) ) 

#define IInputMethod2_RegisterCallback(This,lpIMCallback)   \
    ( (This)->lpVtbl -> RegisterCallback(This,lpIMCallback) ) 

#define IInputMethod2_GetImData(This,dwSize,pvImData)   \
    ( (This)->lpVtbl -> GetImData(This,dwSize,pvImData) ) 

#define IInputMethod2_SetImData(This,dwSize,pvImData)   \
    ( (This)->lpVtbl -> SetImData(This,dwSize,pvImData) ) 

#define IInputMethod2_UserOptionsDlg(This,hwndParent)   \
    ( (This)->lpVtbl -> UserOptionsDlg(This,hwndParent) ) 


#define IInputMethod2_SetIMMActiveContext(This,hwnd,bOpen,dwConversion,dwSentence,hkl)  \
    ( (This)->lpVtbl -> SetIMMActiveContext(This,hwnd,bOpen,dwConversion,dwSentence,hkl) ) 

#define IInputMethod2_RegisterCallback2(This,lpIMCallback)  \
    ( (This)->lpVtbl -> RegisterCallback2(This,lpIMCallback) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IInputMethod2_INTERFACE_DEFINED__ */


#ifndef __IInputMethod3_INTERFACE_DEFINED__
#define __IInputMethod3_INTERFACE_DEFINED__

/* interface IInputMethod3 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IInputMethod3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7950A865-6F9C-4a34-9C87-DE7DBE801B5D")
    IInputMethod3 : public IInputMethod2
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE InputContextChange( 
            /* [in] */ DWORD dwType,
            /* [in] */ BYTE *lpData,
            /* [in] */ DWORD cbData) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RegisterCallback3( 
            /* [in] */ IIMCallback3 *lpIMCallback) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IInputMethod3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IInputMethod3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IInputMethod3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IInputMethod3 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Select )( 
            IInputMethod3 * This,
            /* [in] */ HWND hwndSip);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Deselect )( 
            IInputMethod3 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Showing )( 
            IInputMethod3 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Hiding )( 
            IInputMethod3 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetInfo )( 
            IInputMethod3 * This,
            /* [out] */ IMINFO *pimi);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ReceiveSipInfo )( 
            IInputMethod3 * This,
            /* [in] */ SIPINFO *psi);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RegisterCallback )( 
            IInputMethod3 * This,
            /* [in] */ IIMCallback *lpIMCallback);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetImData )( 
            IInputMethod3 * This,
            /* [in] */ DWORD dwSize,
            /* [out] */ void *pvImData);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetImData )( 
            IInputMethod3 * This,
            /* [in] */ DWORD dwSize,
            /* [in] */ void *pvImData);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *UserOptionsDlg )( 
            IInputMethod3 * This,
            /* [in] */ HWND hwndParent);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetIMMActiveContext )( 
            IInputMethod3 * This,
            /* [in] */ HWND hwnd,
            BOOL bOpen,
            DWORD dwConversion,
            DWORD dwSentence,
            DWORD hkl);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RegisterCallback2 )( 
            IInputMethod3 * This,
            /* [in] */ IIMCallback2 *lpIMCallback);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *InputContextChange )( 
            IInputMethod3 * This,
            /* [in] */ DWORD dwType,
            /* [in] */ BYTE *lpData,
            /* [in] */ DWORD cbData);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RegisterCallback3 )( 
            IInputMethod3 * This,
            /* [in] */ IIMCallback3 *lpIMCallback);
        
        END_INTERFACE
    } IInputMethod3Vtbl;

    interface IInputMethod3
    {
        CONST_VTBL struct IInputMethod3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInputMethod3_QueryInterface(This,riid,ppvObject)   \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInputMethod3_AddRef(This)  \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInputMethod3_Release(This) \
    ( (This)->lpVtbl -> Release(This) ) 


#define IInputMethod3_Select(This,hwndSip)  \
    ( (This)->lpVtbl -> Select(This,hwndSip) ) 

#define IInputMethod3_Deselect(This)    \
    ( (This)->lpVtbl -> Deselect(This) ) 

#define IInputMethod3_Showing(This) \
    ( (This)->lpVtbl -> Showing(This) ) 

#define IInputMethod3_Hiding(This)  \
    ( (This)->lpVtbl -> Hiding(This) ) 

#define IInputMethod3_GetInfo(This,pimi)    \
    ( (This)->lpVtbl -> GetInfo(This,pimi) ) 

#define IInputMethod3_ReceiveSipInfo(This,psi)  \
    ( (This)->lpVtbl -> ReceiveSipInfo(This,psi) ) 

#define IInputMethod3_RegisterCallback(This,lpIMCallback)   \
    ( (This)->lpVtbl -> RegisterCallback(This,lpIMCallback) ) 

#define IInputMethod3_GetImData(This,dwSize,pvImData)   \
    ( (This)->lpVtbl -> GetImData(This,dwSize,pvImData) ) 

#define IInputMethod3_SetImData(This,dwSize,pvImData)   \
    ( (This)->lpVtbl -> SetImData(This,dwSize,pvImData) ) 

#define IInputMethod3_UserOptionsDlg(This,hwndParent)   \
    ( (This)->lpVtbl -> UserOptionsDlg(This,hwndParent) ) 


#define IInputMethod3_SetIMMActiveContext(This,hwnd,bOpen,dwConversion,dwSentence,hkl)  \
    ( (This)->lpVtbl -> SetIMMActiveContext(This,hwnd,bOpen,dwConversion,dwSentence,hkl) ) 

#define IInputMethod3_RegisterCallback2(This,lpIMCallback)  \
    ( (This)->lpVtbl -> RegisterCallback2(This,lpIMCallback) ) 


#define IInputMethod3_InputContextChange(This,dwType,lpData,cbData) \
    ( (This)->lpVtbl -> InputContextChange(This,dwType,lpData,cbData) ) 

#define IInputMethod3_RegisterCallback3(This,lpIMCallback)  \
    ( (This)->lpVtbl -> RegisterCallback3(This,lpIMCallback) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IInputMethod3_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  HWND_UserSize(     unsigned long *, unsigned long            , HWND * ); 
unsigned char * __RPC_USER  HWND_UserMarshal(  unsigned long *, unsigned char *, HWND * ); 
unsigned char * __RPC_USER  HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND * ); 
void                      __RPC_USER  HWND_UserFree(     unsigned long *, HWND * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
EXTERN_C const CLSID CLSID_CMSQwertyIm;

class DECLSPEC_UUID("42429667-ae04-11d0-a4f8-00aa00a749b9")
    CMSQwertyIm;
#endif

#endif


