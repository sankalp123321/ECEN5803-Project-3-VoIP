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
/* at Mon Jan 22 12:15:10 2007
 */
/* Compiler settings for ..\notftn.idl:
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

#ifndef __notftn_h__
#define __notftn_h__

/* Forward Declarations */ 

#ifndef __INotificationRunning_FWD_DEFINED__
#define __INotificationRunning_FWD_DEFINED__
typedef interface INotificationRunning INotificationRunning;
#endif 	/* __INotificationRunning_FWD_DEFINED__ */


#ifndef __INotificationProcessMgr0_FWD_DEFINED__
#define __INotificationProcessMgr0_FWD_DEFINED__
typedef interface INotificationProcessMgr0 INotificationProcessMgr0;
#endif 	/* __INotificationProcessMgr0_FWD_DEFINED__ */


/* header files for imported files */
#include "msnotify.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_notftn_0000 */
/* [local] */ 

#include <msnotify.h>             
#ifndef _LPNOTIFICATIONRUNNING_DEFINED
#define _LPNOTIFICATIONRUNNING_DEFINED


extern RPC_IF_HANDLE __MIDL_itf_notftn_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_notftn_0000_v0_0_s_ifspec;

#ifndef __INotificationRunning_INTERFACE_DEFINED__
#define __INotificationRunning_INTERFACE_DEFINED__

/* interface INotificationRunning */
/* [unique][uuid][object][local] */ 

typedef /* [unique] */ INotificationRunning __RPC_FAR *LPNOTIFICATIONRUNNING;


EXTERN_C const IID IID_INotificationRunning;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c733e4ad-576e-11d0-b28c-00c04fd7cd22")
    INotificationRunning : public IUnknown
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct INotificationRunningVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            INotificationRunning __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            INotificationRunning __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            INotificationRunning __RPC_FAR * This);
        
        END_INTERFACE
    } INotificationRunningVtbl;

    interface INotificationRunning
    {
        CONST_VTBL struct INotificationRunningVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INotificationRunning_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define INotificationRunning_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define INotificationRunning_Release(This)	\
    (This)->lpVtbl -> Release(This)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INotificationRunning_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_notftn_0167 */
/* [local] */ 

#endif
#ifndef _LPNOTIFICATIONPROCESSMGR0_DEFINED
#define _LPNOTIFICATIONPROCESSMGR0_DEFINED


extern RPC_IF_HANDLE __MIDL_itf_notftn_0167_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_notftn_0167_v0_0_s_ifspec;

#ifndef __INotificationProcessMgr0_INTERFACE_DEFINED__
#define __INotificationProcessMgr0_INTERFACE_DEFINED__

/* interface INotificationProcessMgr0 */
/* [unique][uuid][object][local] */ 

typedef /* [unique] */ INotificationProcessMgr0 __RPC_FAR *LPNOTIFICATIONPROCESSMGR0;

typedef 
enum _tagNOTIFICATIONMGRMODE
    {	NM_DEFAULT_PROCESS	= 0x1,
	NM_DEFAULT_THREAD	= 0x2
    }	_NOTIFICATIONMGRMODE;

typedef DWORD NOTIFICATIONMGRMODE;

typedef 
enum _tagTHROTTLE_ITEMS_FLAGS
    {	TF_DONT_DELIVER_SCHEDULED_ITEMS	= 0x1,
	TF_APPLY_EXCLUDE_RANGE	= 0x2,
	TF_APPLY_UPDATEINTERVAL	= 0x4
    }	_THROTTLE_ITEMS_FLAGS;

typedef DWORD THROTTLE_ITEMS_FLAGS;

typedef struct THROTTLEITEM
    {
    NOTIFICATIONTYPE NotificationType;
    LONG nParallel;
    DWORD dwFlags;
    SYSTEMTIME stBegin;
    SYSTEMTIME stEnd;
    DWORD dwMinItemUpdateInterval;
    }	THROTTLEITEM;

typedef struct THROTTLEITEM __RPC_FAR *PTHROTTLEITEM;


EXTERN_C const IID IID_INotificationProcessMgr0;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c733e4ae-576e-11d0-b28c-00c04fd7cd22")
    INotificationProcessMgr0 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetMode( 
            /* [in] */ REFCLSID rClsID,
            /* [in] */ NOTIFICATIONMGRMODE NotificationMgrMode,
            /* [out] */ LPCLSID __RPC_FAR *pClsIDPre,
            /* [in] */ DWORD dwReserved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterThrottleNotificationType( 
            /* [in] */ ULONG cItems,
            /* [size_is][in] */ PTHROTTLEITEM pThrottleItems,
            /* [out] */ ULONG __RPC_FAR *pcItemsOut,
            /* [out] */ PTHROTTLEITEM __RPC_FAR *ppThrottleItemsOut,
            /* [in] */ DWORD dwMode,
            /* [in] */ DWORD dwReserved) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct INotificationProcessMgr0Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            INotificationProcessMgr0 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            INotificationProcessMgr0 __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            INotificationProcessMgr0 __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetMode )( 
            INotificationProcessMgr0 __RPC_FAR * This,
            /* [in] */ REFCLSID rClsID,
            /* [in] */ NOTIFICATIONMGRMODE NotificationMgrMode,
            /* [out] */ LPCLSID __RPC_FAR *pClsIDPre,
            /* [in] */ DWORD dwReserved);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RegisterThrottleNotificationType )( 
            INotificationProcessMgr0 __RPC_FAR * This,
            /* [in] */ ULONG cItems,
            /* [size_is][in] */ PTHROTTLEITEM pThrottleItems,
            /* [out] */ ULONG __RPC_FAR *pcItemsOut,
            /* [out] */ PTHROTTLEITEM __RPC_FAR *ppThrottleItemsOut,
            /* [in] */ DWORD dwMode,
            /* [in] */ DWORD dwReserved);
        
        END_INTERFACE
    } INotificationProcessMgr0Vtbl;

    interface INotificationProcessMgr0
    {
        CONST_VTBL struct INotificationProcessMgr0Vtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INotificationProcessMgr0_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define INotificationProcessMgr0_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define INotificationProcessMgr0_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define INotificationProcessMgr0_SetMode(This,rClsID,NotificationMgrMode,pClsIDPre,dwReserved)	\
    (This)->lpVtbl -> SetMode(This,rClsID,NotificationMgrMode,pClsIDPre,dwReserved)

#define INotificationProcessMgr0_RegisterThrottleNotificationType(This,cItems,pThrottleItems,pcItemsOut,ppThrottleItemsOut,dwMode,dwReserved)	\
    (This)->lpVtbl -> RegisterThrottleNotificationType(This,cItems,pThrottleItems,pcItemsOut,ppThrottleItemsOut,dwMode,dwReserved)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE INotificationProcessMgr0_SetMode_Proxy( 
    INotificationProcessMgr0 __RPC_FAR * This,
    /* [in] */ REFCLSID rClsID,
    /* [in] */ NOTIFICATIONMGRMODE NotificationMgrMode,
    /* [out] */ LPCLSID __RPC_FAR *pClsIDPre,
    /* [in] */ DWORD dwReserved);


void __RPC_STUB INotificationProcessMgr0_SetMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE INotificationProcessMgr0_RegisterThrottleNotificationType_Proxy( 
    INotificationProcessMgr0 __RPC_FAR * This,
    /* [in] */ ULONG cItems,
    /* [size_is][in] */ PTHROTTLEITEM pThrottleItems,
    /* [out] */ ULONG __RPC_FAR *pcItemsOut,
    /* [out] */ PTHROTTLEITEM __RPC_FAR *ppThrottleItemsOut,
    /* [in] */ DWORD dwMode,
    /* [in] */ DWORD dwReserved);


void __RPC_STUB INotificationProcessMgr0_RegisterThrottleNotificationType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __INotificationProcessMgr0_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_notftn_0168 */
/* [local] */ 

#endif
#define DM_SYNCHRONOUS              0x00000010       
#define DM_ONLY_IF_NOT_PENDING      0x00001000       


extern RPC_IF_HANDLE __MIDL_itf_notftn_0168_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_notftn_0168_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


