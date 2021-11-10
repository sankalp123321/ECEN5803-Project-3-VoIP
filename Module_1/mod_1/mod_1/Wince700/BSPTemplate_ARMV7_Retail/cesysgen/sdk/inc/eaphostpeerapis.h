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


 /* File created by MIDL compiler version 7.00.0499 */
/* Compiler settings for eaphostpeerapis.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
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

#ifndef __eaphostpeerapis_h__
#define __eaphostpeerapis_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IEapHostPeerSessionApis_FWD_DEFINED__
#define __IEapHostPeerSessionApis_FWD_DEFINED__
typedef interface IEapHostPeerSessionApis IEapHostPeerSessionApis;
#endif /* __IEapHostPeerSessionApis_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "EapTypes.h"
#include "EapHostPeerTypes.h"
#ifdef UNDER_CE
#define __int3264 __int32
#define __RPC__in
#define __RPC__in_ecount_full_opt(x)
#define __RPC__in_opt
#define __RPC__out
#define __RPC__deref_opt_inout_opt
#define __RPC__in_ecount_full(x)
#define __RPC__out_ecount_full(x)
#define __RPC__deref_out_opt_string
#endif

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_eaphostpeerapis_0000_0000 */
/* [local] */ 


EXTERN_C const CLSID CLSID_HostPeerApis;



extern RPC_IF_HANDLE __MIDL_itf_eaphostpeerapis_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_eaphostpeerapis_0000_0000_v0_0_s_ifspec;

#ifndef __IEapHostPeerSessionApis_INTERFACE_DEFINED__
#define __IEapHostPeerSessionApis_INTERFACE_DEFINED__

/* interface IEapHostPeerSessionApis */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IEapHostPeerSessionApis;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("09DBBC77-588F-4517-A485-74A29759F54C")
    IEapHostPeerSessionApis : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EapHostPeerBeginSession( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ EAP_METHOD_TYPE eapType,
            /* [unique][in] */ __RPC__in_opt const EapAttributes *const pAttributeArray,
            /* [in] */ DWORD hTargetProcessId,
            /* [in] */ __int3264 hTokenImpersonateUser,
            /* [in] */ DWORD dwSizeofConfigData,
            /* [size_is][unique][in] */ __RPC__in_ecount_full_opt(dwSizeofConfigData) const BYTE *const pConfigData,
            /* [in] */ DWORD dwSizeofUserCreds,
            /* [size_is][unique][in] */ __RPC__in_ecount_full_opt(dwSizeofUserCreds) const BYTE *const pUserCreds,
            /* [in] */ DWORD dwMaxSendPacketSize,
            /* [unique][in] */ __RPC__in_opt const GUID *const connectionId,
            /* [ref][out] */ __RPC__out EAP_SESSIONID *pSessionId,
            /* [ref][unique][out] */ __RPC__out __int3264 *reauthEventHandle,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt EAP_ERROR **pEapError) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EapHostPeerProcessReceivedPacket( 
            /* [in] */ EAP_SESSIONID sessionHandle,
            /* [in] */ DWORD cbReceivePacket,
            /* [size_is][in] */ __RPC__in_ecount_full(cbReceivePacket) const BYTE *const pReceivePacket,
            /* [out] */ __RPC__out EapHostPeerResponseAction *pEapOutput,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt EAP_ERROR **pEapError) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EapHostPeerGetSendPacket( 
            /* [in] */ EAP_SESSIONID sessionHandle,
            /* [out] */ __RPC__out DWORD *pcbSendPacket,
            /* [size_is][size_is][out] */ __RPC__out_ecount_full(1) BYTE **pSendPacket,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt EAP_ERROR **pEapError) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EapHostPeerGetResult( 
            /* [in] */ EAP_SESSIONID sessionHandle,
            /* [in] */ EapHostPeerMethodResultReason reason,
            /* [out] */ __RPC__out EapHostPeerMethodResult *ppResult,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt EAP_ERROR **pEapError) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EapHostPeerGetUIContext( 
            /* [in] */ EAP_SESSIONID sessionHandle,
            /* [out] */ __RPC__out DWORD *pdwSizeOfUIContextData,
            /* [size_is][size_is][out] */ __RPC__out_ecount_full(1) BYTE **ppUIContextData,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt EAP_ERROR **pEapError) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EapHostPeerSetUIContext( 
            /* [in] */ EAP_SESSIONID sessionHandle,
            /* [in] */ DWORD dwSizeOfUIContextData,
            /* [size_is][in] */ __RPC__in_ecount_full(dwSizeOfUIContextData) const BYTE *const pUIContextData,
            /* [out] */ __RPC__out EapHostPeerResponseAction *pEapOutput,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt EAP_ERROR **pEapError) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EapHostPeerGetResponseAttributes( 
            /* [in] */ EAP_SESSIONID sessionHandle,
            /* [out] */ __RPC__out EapAttributes *pAttribs,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt EAP_ERROR **pEapError) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EapHostPeerSetResponseAttributes( 
            /* [in] */ EAP_SESSIONID sessionHandle,
            /* [in] */ __RPC__in const EapAttributes *const pAttribs,
            /* [out] */ __RPC__out EapHostPeerResponseAction *pEapOutput,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt EAP_ERROR **pEapError) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EapHostPeerGetAuthStatus( 
            /* [in] */ EAP_SESSIONID sessionHandle,
            /* [in] */ EapHostPeerAuthParams authParam,
            /* [out] */ __RPC__out DWORD *pcbAuthData,
            /* [size_is][size_is][out] */ __RPC__out_ecount_full(1) BYTE **ppAuthData,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt EAP_ERROR **pEapError) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EapHostPeerEndSession( 
            /* [in] */ EAP_SESSIONID sessionHandle,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt EAP_ERROR **pEapError) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EapHostPeerClearConnection( 
            /* [in] */ GUID connectionId,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt EAP_ERROR **pEapError) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EapHostPeerGetIdentity( 
            /* [in] */ DWORD dwVersion,
            /* [in] */ DWORD dwFlags,
            /* [in] */ EAP_METHOD_TYPE eapMethodType,
            /* [in] */ DWORD dwSizeofConnectionData,
            /* [unique][size_is][in] */ __RPC__in_ecount_full_opt(dwSizeofConnectionData) const BYTE *pConnectionData,
            /* [in] */ DWORD dwSizeofUserData,
            /* [unique][size_is][in] */ __RPC__in_ecount_full_opt(dwSizeofUserData) const BYTE *pUserData,
            /* [in] */ DWORD hTargetProcessId,
            /* [in] */ __int3264 hTokenImpersonateUser,
            /* [out] */ __RPC__out BOOL *pfInvokeUI,
            /* [out] */ __RPC__out DWORD *pdwSizeOfUserDataOut,
            /* [size_is][size_is][out] */ __RPC__out_ecount_full(1) BYTE **ppUserDataOut,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppwszIdentity,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt EAP_ERROR **ppEapError,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt BYTE **ppvReserved) = 0;
        
    };
    
#else /* C style interface */

    typedef struct IEapHostPeerSessionApisVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEapHostPeerSessionApis * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEapHostPeerSessionApis * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEapHostPeerSessionApis * This);
        
        HRESULT ( STDMETHODCALLTYPE *EapHostPeerBeginSession )( 
            IEapHostPeerSessionApis * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ EAP_METHOD_TYPE eapType,
            /* [unique][in] */ __RPC__in_opt const EapAttributes *const pAttributeArray,
            /* [in] */ DWORD hTargetProcessId,
            /* [in] */ __int3264 hTokenImpersonateUser,
            /* [in] */ DWORD dwSizeofConfigData,
            /* [size_is][unique][in] */ __RPC__in_ecount_full_opt(dwSizeofConfigData) const BYTE *const pConfigData,
            /* [in] */ DWORD dwSizeofUserCreds,
            /* [size_is][unique][in] */ __RPC__in_ecount_full_opt(dwSizeofUserCreds) const BYTE *const pUserCreds,
            /* [in] */ DWORD dwMaxSendPacketSize,
            /* [unique][in] */ __RPC__in_opt const GUID *const connectionId,
            /* [ref][out] */ __RPC__out EAP_SESSIONID *pSessionId,
            /* [ref][unique][out] */ __RPC__out __int3264 *reauthEventHandle,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt EAP_ERROR **pEapError);
        
        HRESULT ( STDMETHODCALLTYPE *EapHostPeerProcessReceivedPacket )( 
            IEapHostPeerSessionApis * This,
            /* [in] */ EAP_SESSIONID sessionHandle,
            /* [in] */ DWORD cbReceivePacket,
            /* [size_is][in] */ __RPC__in_ecount_full(cbReceivePacket) const BYTE *const pReceivePacket,
            /* [out] */ __RPC__out EapHostPeerResponseAction *pEapOutput,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt EAP_ERROR **pEapError);
        
        HRESULT ( STDMETHODCALLTYPE *EapHostPeerGetSendPacket )( 
            IEapHostPeerSessionApis * This,
            /* [in] */ EAP_SESSIONID sessionHandle,
            /* [out] */ __RPC__out DWORD *pcbSendPacket,
            /* [size_is][size_is][out] */ __RPC__out_ecount_full(1) BYTE **pSendPacket,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt EAP_ERROR **pEapError);
        
        HRESULT ( STDMETHODCALLTYPE *EapHostPeerGetResult )( 
            IEapHostPeerSessionApis * This,
            /* [in] */ EAP_SESSIONID sessionHandle,
            /* [in] */ EapHostPeerMethodResultReason reason,
            /* [out] */ __RPC__out EapHostPeerMethodResult *ppResult,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt EAP_ERROR **pEapError);
        
        HRESULT ( STDMETHODCALLTYPE *EapHostPeerGetUIContext )( 
            IEapHostPeerSessionApis * This,
            /* [in] */ EAP_SESSIONID sessionHandle,
            /* [out] */ __RPC__out DWORD *pdwSizeOfUIContextData,
            /* [size_is][size_is][out] */ __RPC__out_ecount_full(1) BYTE **ppUIContextData,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt EAP_ERROR **pEapError);
        
        HRESULT ( STDMETHODCALLTYPE *EapHostPeerSetUIContext )( 
            IEapHostPeerSessionApis * This,
            /* [in] */ EAP_SESSIONID sessionHandle,
            /* [in] */ DWORD dwSizeOfUIContextData,
            /* [size_is][in] */ __RPC__in_ecount_full(dwSizeOfUIContextData) const BYTE *const pUIContextData,
            /* [out] */ __RPC__out EapHostPeerResponseAction *pEapOutput,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt EAP_ERROR **pEapError);
        
        HRESULT ( STDMETHODCALLTYPE *EapHostPeerGetResponseAttributes )( 
            IEapHostPeerSessionApis * This,
            /* [in] */ EAP_SESSIONID sessionHandle,
            /* [out] */ __RPC__out EapAttributes *pAttribs,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt EAP_ERROR **pEapError);
        
        HRESULT ( STDMETHODCALLTYPE *EapHostPeerSetResponseAttributes )( 
            IEapHostPeerSessionApis * This,
            /* [in] */ EAP_SESSIONID sessionHandle,
            /* [in] */ __RPC__in const EapAttributes *const pAttribs,
            /* [out] */ __RPC__out EapHostPeerResponseAction *pEapOutput,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt EAP_ERROR **pEapError);
        
        HRESULT ( STDMETHODCALLTYPE *EapHostPeerGetAuthStatus )( 
            IEapHostPeerSessionApis * This,
            /* [in] */ EAP_SESSIONID sessionHandle,
            /* [in] */ EapHostPeerAuthParams authParam,
            /* [out] */ __RPC__out DWORD *pcbAuthData,
            /* [size_is][size_is][out] */ __RPC__out_ecount_full(1) BYTE **ppAuthData,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt EAP_ERROR **pEapError);
        
        HRESULT ( STDMETHODCALLTYPE *EapHostPeerEndSession )( 
            IEapHostPeerSessionApis * This,
            /* [in] */ EAP_SESSIONID sessionHandle,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt EAP_ERROR **pEapError);
        
        HRESULT ( STDMETHODCALLTYPE *EapHostPeerClearConnection )( 
            IEapHostPeerSessionApis * This,
            /* [in] */ GUID connectionId,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt EAP_ERROR **pEapError);
        
        HRESULT ( STDMETHODCALLTYPE *EapHostPeerGetIdentity )( 
            IEapHostPeerSessionApis * This,
            /* [in] */ DWORD dwVersion,
            /* [in] */ DWORD dwFlags,
            /* [in] */ EAP_METHOD_TYPE eapMethodType,
            /* [in] */ DWORD dwSizeofConnectionData,
            /* [unique][size_is][in] */ __RPC__in_ecount_full_opt(dwSizeofConnectionData) const BYTE *pConnectionData,
            /* [in] */ DWORD dwSizeofUserData,
            /* [unique][size_is][in] */ __RPC__in_ecount_full_opt(dwSizeofUserData) const BYTE *pUserData,
            /* [in] */ DWORD hTargetProcessId,
            /* [in] */ __int3264 hTokenImpersonateUser,
            /* [out] */ __RPC__out BOOL *pfInvokeUI,
            /* [out] */ __RPC__out DWORD *pdwSizeOfUserDataOut,
            /* [size_is][size_is][out] */ __RPC__out_ecount_full(1) BYTE **ppUserDataOut,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppwszIdentity,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt EAP_ERROR **ppEapError,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt BYTE **ppvReserved);
        
        END_INTERFACE
    } IEapHostPeerSessionApisVtbl;

    interface IEapHostPeerSessionApis
    {
        CONST_VTBL struct IEapHostPeerSessionApisVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEapHostPeerSessionApis_QueryInterface(This,riid,ppvObject)\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEapHostPeerSessionApis_AddRef(This) \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEapHostPeerSessionApis_Release(This) \
    ( (This)->lpVtbl -> Release(This) ) 


#define IEapHostPeerSessionApis_EapHostPeerBeginSession(This,dwFlags,eapType,pAttributeArray,hTargetProcessId,hTokenImpersonateUser,dwSizeofConfigData,pConfigData,dwSizeofUserCreds,pUserCreds,dwMaxSendPacketSize,connectionId,pSessionId,reauthEventHandle,pEapError) \
    ( (This)->lpVtbl -> EapHostPeerBeginSession(This,dwFlags,eapType,pAttributeArray,hTargetProcessId,hTokenImpersonateUser,dwSizeofConfigData,pConfigData,dwSizeofUserCreds,pUserCreds,dwMaxSendPacketSize,connectionId,pSessionId,reauthEventHandle,pEapError) ) 

#define IEapHostPeerSessionApis_EapHostPeerProcessReceivedPacket(This,sessionHandle,cbReceivePacket,pReceivePacket,pEapOutput,pEapError) \
    ( (This)->lpVtbl -> EapHostPeerProcessReceivedPacket(This,sessionHandle,cbReceivePacket,pReceivePacket,pEapOutput,pEapError) ) 

#define IEapHostPeerSessionApis_EapHostPeerGetSendPacket(This,sessionHandle,pcbSendPacket,pSendPacket,pEapError) \
    ( (This)->lpVtbl -> EapHostPeerGetSendPacket(This,sessionHandle,pcbSendPacket,pSendPacket,pEapError) ) 

#define IEapHostPeerSessionApis_EapHostPeerGetResult(This,sessionHandle,reason,ppResult,pEapError) \
    ( (This)->lpVtbl -> EapHostPeerGetResult(This,sessionHandle,reason,ppResult,pEapError) ) 

#define IEapHostPeerSessionApis_EapHostPeerGetUIContext(This,sessionHandle,pdwSizeOfUIContextData,ppUIContextData,pEapError) \
    ( (This)->lpVtbl -> EapHostPeerGetUIContext(This,sessionHandle,pdwSizeOfUIContextData,ppUIContextData,pEapError) ) 

#define IEapHostPeerSessionApis_EapHostPeerSetUIContext(This,sessionHandle,dwSizeOfUIContextData,pUIContextData,pEapOutput,pEapError) \
    ( (This)->lpVtbl -> EapHostPeerSetUIContext(This,sessionHandle,dwSizeOfUIContextData,pUIContextData,pEapOutput,pEapError) ) 

#define IEapHostPeerSessionApis_EapHostPeerGetResponseAttributes(This,sessionHandle,pAttribs,pEapError) \
    ( (This)->lpVtbl -> EapHostPeerGetResponseAttributes(This,sessionHandle,pAttribs,pEapError) ) 

#define IEapHostPeerSessionApis_EapHostPeerSetResponseAttributes(This,sessionHandle,pAttribs,pEapOutput,pEapError) \
    ( (This)->lpVtbl -> EapHostPeerSetResponseAttributes(This,sessionHandle,pAttribs,pEapOutput,pEapError) ) 

#define IEapHostPeerSessionApis_EapHostPeerGetAuthStatus(This,sessionHandle,authParam,pcbAuthData,ppAuthData,pEapError) \
    ( (This)->lpVtbl -> EapHostPeerGetAuthStatus(This,sessionHandle,authParam,pcbAuthData,ppAuthData,pEapError) ) 

#define IEapHostPeerSessionApis_EapHostPeerEndSession(This,sessionHandle,pEapError) \
    ( (This)->lpVtbl -> EapHostPeerEndSession(This,sessionHandle,pEapError) ) 

#define IEapHostPeerSessionApis_EapHostPeerClearConnection(This,connectionId,pEapError) \
    ( (This)->lpVtbl -> EapHostPeerClearConnection(This,connectionId,pEapError) ) 

#define IEapHostPeerSessionApis_EapHostPeerGetIdentity(This,dwVersion,dwFlags,eapMethodType,dwSizeofConnectionData,pConnectionData,dwSizeofUserData,pUserData,hTargetProcessId,hTokenImpersonateUser,pfInvokeUI,pdwSizeOfUserDataOut,ppUserDataOut,ppwszIdentity,ppEapError,ppvReserved) \
    ( (This)->lpVtbl -> EapHostPeerGetIdentity(This,dwVersion,dwFlags,eapMethodType,dwSizeofConnectionData,pConnectionData,dwSizeofUserData,pUserData,hTargetProcessId,hTokenImpersonateUser,pfInvokeUI,pdwSizeOfUserDataOut,ppUserDataOut,ppwszIdentity,ppEapError,ppvReserved) ) 

#endif /* COBJMACROS */


#endif /* C style interface */




#endif /* __IEapHostPeerSessionApis_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


