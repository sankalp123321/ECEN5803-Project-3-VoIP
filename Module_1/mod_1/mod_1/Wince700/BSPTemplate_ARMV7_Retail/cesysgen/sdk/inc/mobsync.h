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
/* at Tue Jan 23 14:30:50 2007
 */
/* Compiler settings for ..\mobsync.idl:
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

#ifndef __mobsync_h__
#define __mobsync_h__

/* Forward Declarations */ 

#ifndef __ISyncMgrSynchronizeCallback_FWD_DEFINED__
#define __ISyncMgrSynchronizeCallback_FWD_DEFINED__
typedef interface ISyncMgrSynchronizeCallback ISyncMgrSynchronizeCallback;
#endif 	/* __ISyncMgrSynchronizeCallback_FWD_DEFINED__ */


#ifndef __ISyncMgrEnumItems_FWD_DEFINED__
#define __ISyncMgrEnumItems_FWD_DEFINED__
typedef interface ISyncMgrEnumItems ISyncMgrEnumItems;
#endif 	/* __ISyncMgrEnumItems_FWD_DEFINED__ */


#ifndef __ISyncMgrSynchronize_FWD_DEFINED__
#define __ISyncMgrSynchronize_FWD_DEFINED__
typedef interface ISyncMgrSynchronize ISyncMgrSynchronize;
#endif 	/* __ISyncMgrSynchronize_FWD_DEFINED__ */


#ifndef __ISyncMgrSynchronizeInvoke_FWD_DEFINED__
#define __ISyncMgrSynchronizeInvoke_FWD_DEFINED__
typedef interface ISyncMgrSynchronizeInvoke ISyncMgrSynchronizeInvoke;
#endif 	/* __ISyncMgrSynchronizeInvoke_FWD_DEFINED__ */


#ifndef __ISyncMgrRegister_FWD_DEFINED__
#define __ISyncMgrRegister_FWD_DEFINED__
typedef interface ISyncMgrRegister ISyncMgrRegister;
#endif 	/* __ISyncMgrRegister_FWD_DEFINED__ */


#ifndef __SyncMgr_FWD_DEFINED__
#define __SyncMgr_FWD_DEFINED__

#ifdef __cplusplus
typedef class SyncMgr SyncMgr;
#else
typedef struct SyncMgr SyncMgr;
#endif /* __cplusplus */

#endif 	/* __SyncMgr_FWD_DEFINED__ */


/* header files for imported files */
#include "objidl.h"
#include "oleidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_mobsync_0000 */
/* [local] */ 

#define SYNCMGRITEMID        GUID
#define REFSYNCMGRITEMID     REFGUID
#define SYNCMGRERRORID       GUID
#define REFSYNCMGRERRORID    REFGUID

#define S_SYNCMGR_MISSINGITEMS       MAKE_SCODE(SEVERITY_SUCCESS,FACILITY_ITF,0x0201)
#define S_SYNCMGR_RETRYSYNC          MAKE_SCODE(SEVERITY_SUCCESS,FACILITY_ITF,0x0202)
#define S_SYNCMGR_CANCELITEM         MAKE_SCODE(SEVERITY_SUCCESS,FACILITY_ITF,0x0203)
#define S_SYNCMGR_CANCELALL          MAKE_SCODE(SEVERITY_SUCCESS,FACILITY_ITF,0x0204)
#define S_SYNCMGR_ITEMDELETED        MAKE_SCODE(SEVERITY_SUCCESS,FACILITY_ITF,0x0210)
#define S_SYNCMGR_ENUMITEMS          MAKE_SCODE(SEVERITY_SUCCESS,FACILITY_ITF,0x0211)


extern RPC_IF_HANDLE __MIDL_itf_mobsync_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mobsync_0000_v0_0_s_ifspec;

#ifndef __ISyncMgrSynchronizeCallback_INTERFACE_DEFINED__
#define __ISyncMgrSynchronizeCallback_INTERFACE_DEFINED__

/* interface ISyncMgrSynchronizeCallback */
/* [uuid][object] */ 

typedef /* [unique] */ ISyncMgrSynchronizeCallback __RPC_FAR *LPSYNCMGRSYNCHRONIZECALLBACK;

#define   SYNCMGRPROGRESSITEM_STATUSTEXT         0x0001
#define   SYNCMGRPROGRESSITEM_STATUSTYPE         0x0002
#define   SYNCMGRPROGRESSITEM_PROGVALUE          0x0004
#define   SYNCMGRPROGRESSITEM_MAXVALUE           0x0008
typedef /* [v1_enum] */ 
enum _tagSYNCMGRSTATUS
    {	SYNCMGRSTATUS_STOPPED	= 0,
	SYNCMGRSTATUS_SKIPPED	= 0x1,
	SYNCMGRSTATUS_PENDING	= 0x2,
	SYNCMGRSTATUS_UPDATING	= 0x3,
	SYNCMGRSTATUS_SUCCEEDED	= 0x4,
	SYNCMGRSTATUS_FAILED	= 0x5,
	SYNCMGRSTATUS_PAUSED	= 0x6,
	SYNCMGRSTATUS_RESUMING	= 0x7,
	SYNCMGRSTATUS_UPDATING_INDETERMINATE	= 0x8,
	SYNCMGRSTATUS_DELETED	= 0x100
    }	SYNCMGRSTATUS;

typedef struct _tagSYNCMGRPROGRESSITEM
    {
    DWORD cbSize;
    UINT mask;
    LPCWSTR lpcStatusText;
    DWORD dwStatusType;
    int iProgValue;
    int iMaxValue;
    }	SYNCMGRPROGRESSITEM;

typedef struct _tagSYNCMGRPROGRESSITEM __RPC_FAR *LPSYNCMGRPROGRESSITEM;

typedef /* [v1_enum] */ 
enum _tagSYNCMGRLOGLEVEL
    {	SYNCMGRLOGLEVEL_INFORMATION	= 0x1,
	SYNCMGRLOGLEVEL_WARNING	= 0x2,
	SYNCMGRLOGLEVEL_ERROR	= 0x3,
	SYNCMGRLOGLEVEL_LOGLEVELMAX	= 0x3
    }	SYNCMGRLOGLEVEL;

#define   SYNCMGRLOGERROR_ERRORFLAGS                     0x0001
#define   SYNCMGRLOGERROR_ERRORID                        0x0002
#define   SYNCMGRLOGERROR_ITEMID                         0x0004
typedef /* [v1_enum] */ 
enum _tagSYNCMGRERRORFLAGS
    {	SYNCMGRERRORFLAG_ENABLEJUMPTEXT	= 0x1
    }	SYNCMGRERRORFLAGS;

typedef struct _tagSYNCMGRLOGERRORINFO
    {
    DWORD cbSize;
    DWORD mask;
    DWORD dwSyncMgrErrorFlags;
    GUID ErrorID;
    GUID ItemID;
    }	SYNCMGRLOGERRORINFO;

typedef struct _tagSYNCMGRLOGERRORINFO __RPC_FAR *LPSYNCMGRLOGERRORINFO;


EXTERN_C const IID IID_ISyncMgrSynchronizeCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6295DF41-35EE-11d1-8707-00C04FD93327")
    ISyncMgrSynchronizeCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ShowPropertiesCompleted( 
            /* [in] */ HRESULT hr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PrepareForSyncCompleted( 
            /* [in] */ HRESULT hr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SynchronizeCompleted( 
            /* [in] */ HRESULT hr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowErrorCompleted( 
            /* [in] */ HRESULT hr,
            /* [in] */ ULONG cItems,
            /* [size_is][unique][in] */ const GUID __RPC_FAR *pItemIDs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnableModeless( 
            /* [in] */ BOOL fEnable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Progress( 
            /* [in] */ REFGUID ItemID,
            /* [unique][in] */ const SYNCMGRPROGRESSITEM __RPC_FAR *pSyncProgressItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LogError( 
            /* [in] */ DWORD dwErrorLevel,
            /* [in] */ LPCWSTR pszErrorText,
            /* [unique][in] */ const SYNCMGRLOGERRORINFO __RPC_FAR *pSyncLogError) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteLogError( 
            /* [in] */ REFGUID ErrorID,
            /* [in] */ DWORD dwReserved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EstablishConnection( 
            /* [unique][in] */ LPCWSTR pwszConnection,
            /* [in] */ DWORD dwReserved) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISyncMgrSynchronizeCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ISyncMgrSynchronizeCallback __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ISyncMgrSynchronizeCallback __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ISyncMgrSynchronizeCallback __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ShowPropertiesCompleted )( 
            ISyncMgrSynchronizeCallback __RPC_FAR * This,
            /* [in] */ HRESULT hr);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *PrepareForSyncCompleted )( 
            ISyncMgrSynchronizeCallback __RPC_FAR * This,
            /* [in] */ HRESULT hr);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SynchronizeCompleted )( 
            ISyncMgrSynchronizeCallback __RPC_FAR * This,
            /* [in] */ HRESULT hr);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ShowErrorCompleted )( 
            ISyncMgrSynchronizeCallback __RPC_FAR * This,
            /* [in] */ HRESULT hr,
            /* [in] */ ULONG cItems,
            /* [size_is][unique][in] */ const GUID __RPC_FAR *pItemIDs);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *EnableModeless )( 
            ISyncMgrSynchronizeCallback __RPC_FAR * This,
            /* [in] */ BOOL fEnable);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Progress )( 
            ISyncMgrSynchronizeCallback __RPC_FAR * This,
            /* [in] */ REFGUID ItemID,
            /* [unique][in] */ const SYNCMGRPROGRESSITEM __RPC_FAR *pSyncProgressItem);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LogError )( 
            ISyncMgrSynchronizeCallback __RPC_FAR * This,
            /* [in] */ DWORD dwErrorLevel,
            /* [in] */ LPCWSTR pszErrorText,
            /* [unique][in] */ const SYNCMGRLOGERRORINFO __RPC_FAR *pSyncLogError);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DeleteLogError )( 
            ISyncMgrSynchronizeCallback __RPC_FAR * This,
            /* [in] */ REFGUID ErrorID,
            /* [in] */ DWORD dwReserved);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *EstablishConnection )( 
            ISyncMgrSynchronizeCallback __RPC_FAR * This,
            /* [unique][in] */ LPCWSTR pwszConnection,
            /* [in] */ DWORD dwReserved);
        
        END_INTERFACE
    } ISyncMgrSynchronizeCallbackVtbl;

    interface ISyncMgrSynchronizeCallback
    {
        CONST_VTBL struct ISyncMgrSynchronizeCallbackVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISyncMgrSynchronizeCallback_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISyncMgrSynchronizeCallback_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISyncMgrSynchronizeCallback_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISyncMgrSynchronizeCallback_ShowPropertiesCompleted(This,hr)	\
    (This)->lpVtbl -> ShowPropertiesCompleted(This,hr)

#define ISyncMgrSynchronizeCallback_PrepareForSyncCompleted(This,hr)	\
    (This)->lpVtbl -> PrepareForSyncCompleted(This,hr)

#define ISyncMgrSynchronizeCallback_SynchronizeCompleted(This,hr)	\
    (This)->lpVtbl -> SynchronizeCompleted(This,hr)

#define ISyncMgrSynchronizeCallback_ShowErrorCompleted(This,hr,cItems,pItemIDs)	\
    (This)->lpVtbl -> ShowErrorCompleted(This,hr,cItems,pItemIDs)

#define ISyncMgrSynchronizeCallback_EnableModeless(This,fEnable)	\
    (This)->lpVtbl -> EnableModeless(This,fEnable)

#define ISyncMgrSynchronizeCallback_Progress(This,ItemID,pSyncProgressItem)	\
    (This)->lpVtbl -> Progress(This,ItemID,pSyncProgressItem)

#define ISyncMgrSynchronizeCallback_LogError(This,dwErrorLevel,pszErrorText,pSyncLogError)	\
    (This)->lpVtbl -> LogError(This,dwErrorLevel,pszErrorText,pSyncLogError)

#define ISyncMgrSynchronizeCallback_DeleteLogError(This,ErrorID,dwReserved)	\
    (This)->lpVtbl -> DeleteLogError(This,ErrorID,dwReserved)

#define ISyncMgrSynchronizeCallback_EstablishConnection(This,pwszConnection,dwReserved)	\
    (This)->lpVtbl -> EstablishConnection(This,pwszConnection,dwReserved)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISyncMgrSynchronizeCallback_ShowPropertiesCompleted_Proxy( 
    ISyncMgrSynchronizeCallback __RPC_FAR * This,
    /* [in] */ HRESULT hr);


void __RPC_STUB ISyncMgrSynchronizeCallback_ShowPropertiesCompleted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISyncMgrSynchronizeCallback_PrepareForSyncCompleted_Proxy( 
    ISyncMgrSynchronizeCallback __RPC_FAR * This,
    /* [in] */ HRESULT hr);


void __RPC_STUB ISyncMgrSynchronizeCallback_PrepareForSyncCompleted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISyncMgrSynchronizeCallback_SynchronizeCompleted_Proxy( 
    ISyncMgrSynchronizeCallback __RPC_FAR * This,
    /* [in] */ HRESULT hr);


void __RPC_STUB ISyncMgrSynchronizeCallback_SynchronizeCompleted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISyncMgrSynchronizeCallback_ShowErrorCompleted_Proxy( 
    ISyncMgrSynchronizeCallback __RPC_FAR * This,
    /* [in] */ HRESULT hr,
    /* [in] */ ULONG cItems,
    /* [size_is][unique][in] */ const GUID __RPC_FAR *pItemIDs);


void __RPC_STUB ISyncMgrSynchronizeCallback_ShowErrorCompleted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISyncMgrSynchronizeCallback_EnableModeless_Proxy( 
    ISyncMgrSynchronizeCallback __RPC_FAR * This,
    /* [in] */ BOOL fEnable);


void __RPC_STUB ISyncMgrSynchronizeCallback_EnableModeless_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISyncMgrSynchronizeCallback_Progress_Proxy( 
    ISyncMgrSynchronizeCallback __RPC_FAR * This,
    /* [in] */ REFGUID ItemID,
    /* [unique][in] */ const SYNCMGRPROGRESSITEM __RPC_FAR *pSyncProgressItem);


void __RPC_STUB ISyncMgrSynchronizeCallback_Progress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISyncMgrSynchronizeCallback_LogError_Proxy( 
    ISyncMgrSynchronizeCallback __RPC_FAR * This,
    /* [in] */ DWORD dwErrorLevel,
    /* [in] */ LPCWSTR pszErrorText,
    /* [unique][in] */ const SYNCMGRLOGERRORINFO __RPC_FAR *pSyncLogError);


void __RPC_STUB ISyncMgrSynchronizeCallback_LogError_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISyncMgrSynchronizeCallback_DeleteLogError_Proxy( 
    ISyncMgrSynchronizeCallback __RPC_FAR * This,
    /* [in] */ REFGUID ErrorID,
    /* [in] */ DWORD dwReserved);


void __RPC_STUB ISyncMgrSynchronizeCallback_DeleteLogError_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISyncMgrSynchronizeCallback_EstablishConnection_Proxy( 
    ISyncMgrSynchronizeCallback __RPC_FAR * This,
    /* [unique][in] */ LPCWSTR pwszConnection,
    /* [in] */ DWORD dwReserved);


void __RPC_STUB ISyncMgrSynchronizeCallback_EstablishConnection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISyncMgrSynchronizeCallback_INTERFACE_DEFINED__ */


#ifndef __ISyncMgrEnumItems_INTERFACE_DEFINED__
#define __ISyncMgrEnumItems_INTERFACE_DEFINED__

/* interface ISyncMgrEnumItems */
/* [unique][uuid][object] */ 

typedef /* [unique] */ ISyncMgrEnumItems __RPC_FAR *LPSYNCMGRENUMITEMS;

typedef /* [v1_enum] */ 
enum _tagSYNCMGRITEMFLAGS
    {	SYNCMGRITEM_HASPROPERTIES	= 0x1,
	SYNCMGRITEM_TEMPORARY	= 0x2,
	SYNCMGRITEM_ROAMINGUSER	= 0x4,
	SYNCMGRITEM_LASTUPDATETIME	= 0x8,
	SYNCMGRITEM_MAYDELETEITEM	= 0x10,
	SYNCMGRITEM_HIDDEN	= 0x20
    }	SYNCMGRITEMFLAGS;

#define SYNCMGRITEM_ITEMFLAGMASK  0x007F
#define	MAX_SYNCMGRITEMNAME	( 128 )

typedef struct _tagSYNCMGRITEM
    {
    DWORD cbSize;
    DWORD dwFlags;
    GUID ItemID;
    DWORD dwItemState;
    HICON hIcon;
    WCHAR wszItemName[ 128 ];
    FILETIME ftLastUpdate;
    }	SYNCMGRITEM;

typedef struct _tagSYNCMGRITEM __RPC_FAR *LPSYNCMGRITEM;


EXTERN_C const IID IID_ISyncMgrEnumItems;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6295DF2A-35EE-11d1-8707-00C04FD93327")
    ISyncMgrEnumItems : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ SYNCMGRITEM __RPC_FAR *rgelt,
            /* [out] */ ULONG __RPC_FAR *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ ISyncMgrEnumItems __RPC_FAR *__RPC_FAR *ppenum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISyncMgrEnumItemsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ISyncMgrEnumItems __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ISyncMgrEnumItems __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ISyncMgrEnumItems __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Next )( 
            ISyncMgrEnumItems __RPC_FAR * This,
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ SYNCMGRITEM __RPC_FAR *rgelt,
            /* [out] */ ULONG __RPC_FAR *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Skip )( 
            ISyncMgrEnumItems __RPC_FAR * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Reset )( 
            ISyncMgrEnumItems __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clone )( 
            ISyncMgrEnumItems __RPC_FAR * This,
            /* [out] */ ISyncMgrEnumItems __RPC_FAR *__RPC_FAR *ppenum);
        
        END_INTERFACE
    } ISyncMgrEnumItemsVtbl;

    interface ISyncMgrEnumItems
    {
        CONST_VTBL struct ISyncMgrEnumItemsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISyncMgrEnumItems_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISyncMgrEnumItems_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISyncMgrEnumItems_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISyncMgrEnumItems_Next(This,celt,rgelt,pceltFetched)	\
    (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched)

#define ISyncMgrEnumItems_Skip(This,celt)	\
    (This)->lpVtbl -> Skip(This,celt)

#define ISyncMgrEnumItems_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define ISyncMgrEnumItems_Clone(This,ppenum)	\
    (This)->lpVtbl -> Clone(This,ppenum)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISyncMgrEnumItems_Next_Proxy( 
    ISyncMgrEnumItems __RPC_FAR * This,
    /* [in] */ ULONG celt,
    /* [length_is][size_is][out] */ SYNCMGRITEM __RPC_FAR *rgelt,
    /* [out] */ ULONG __RPC_FAR *pceltFetched);


void __RPC_STUB ISyncMgrEnumItems_Next_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISyncMgrEnumItems_Skip_Proxy( 
    ISyncMgrEnumItems __RPC_FAR * This,
    /* [in] */ ULONG celt);


void __RPC_STUB ISyncMgrEnumItems_Skip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISyncMgrEnumItems_Reset_Proxy( 
    ISyncMgrEnumItems __RPC_FAR * This);


void __RPC_STUB ISyncMgrEnumItems_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISyncMgrEnumItems_Clone_Proxy( 
    ISyncMgrEnumItems __RPC_FAR * This,
    /* [out] */ ISyncMgrEnumItems __RPC_FAR *__RPC_FAR *ppenum);


void __RPC_STUB ISyncMgrEnumItems_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISyncMgrEnumItems_INTERFACE_DEFINED__ */


#ifndef __ISyncMgrSynchronize_INTERFACE_DEFINED__
#define __ISyncMgrSynchronize_INTERFACE_DEFINED__

/* interface ISyncMgrSynchronize */
/* [uuid][object] */ 

typedef /* [unique] */ ISyncMgrSynchronize __RPC_FAR *LPSYNCMGROnSynchronize;

typedef /* [v1_enum] */ 
enum _tagSYNCMGRFLAG
    {	SYNCMGRFLAG_CONNECT	= 0x1,
	SYNCMGRFLAG_PENDINGDISCONNECT	= 0x2,
	SYNCMGRFLAG_MANUAL	= 0x3,
	SYNCMGRFLAG_IDLE	= 0x4,
	SYNCMGRFLAG_INVOKE	= 0x5,
	SYNCMGRFLAG_SCHEDULED	= 0x6,
	SYNCMGRFLAG_EVENTMASK	= 0xff,
	SYNCMGRFLAG_SETTINGS	= 0x100,
	SYNCMGRFLAG_MAYBOTHERUSER	= 0x200
    }	SYNCMGRFLAG;

typedef /* [v1_enum] */ 
enum _tagSYNCMGRHANDLERFLAGS
    {	SYNCMGRHANDLER_HASPROPERTIES	= 0x1,
	SYNCMGRHANDLER_MAYESTABLISHCONNECTION	= 0x2,
	SYNCMGRHANDLER_ALWAYSLISTHANDLER	= 0x4,
	SYNCMGRHANDLER_HIDDEN	= 0x8
    }	SYNCMGRHANDLERFLAGS;

#define SYNCMGRHANDLERFLAG_MASK 0x000f
#define	MAX_SYNCMGRHANDLERNAME	( 32 )

typedef struct _tagSYNCMGRHANDLERINFO
    {
    DWORD cbSize;
    HICON hIcon;
    DWORD SyncMgrHandlerFlags;
    WCHAR wszHandlerName[ 32 ];
    }	SYNCMGRHANDLERINFO;

typedef struct _tagSYNCMGRHANDLERINFO __RPC_FAR *LPSYNCMGRHANDLERINFO;

typedef /* [v1_enum] */ 
enum _tagSYNCMGRITEMSTATE
    {	SYNCMGRITEMSTATE_UNCHECKED	= 0,
	SYNCMGRITEMSTATE_CHECKED	= 0x1
    }	SYNCMGRITEMSTATE;


EXTERN_C const IID IID_ISyncMgrSynchronize;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6295DF40-35EE-11d1-8707-00C04FD93327")
    ISyncMgrSynchronize : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ DWORD dwReserved,
            /* [in] */ DWORD dwSyncMgrFlags,
            /* [in] */ DWORD cbCookie,
            /* [size_is][unique][in] */ const BYTE __RPC_FAR *lpCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHandlerInfo( 
            /* [out] */ SYNCMGRHANDLERINFO __RPC_FAR *__RPC_FAR *ppSyncMgrHandlerInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumSyncMgrItems( 
            /* [out] */ ISyncMgrEnumItems __RPC_FAR *__RPC_FAR *ppSyncMgrEnumItems) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItemObject( 
            /* [in] */ REFGUID ItemID,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowProperties( 
            /* [in] */ HWND hWndParent,
            /* [in] */ REFGUID ItemID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProgressCallback( 
            /* [unique][in] */ ISyncMgrSynchronizeCallback __RPC_FAR *lpCallBack) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PrepareForSync( 
            /* [in] */ ULONG cbNumItems,
            /* [size_is][in] */ GUID __RPC_FAR *pItemIDs,
            /* [in] */ HWND hWndParent,
            /* [in] */ DWORD dwReserved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Synchronize( 
            /* [in] */ HWND hWndParent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetItemStatus( 
            /* [in] */ REFGUID pItemID,
            /* [in] */ DWORD dwSyncMgrStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowError( 
            /* [in] */ HWND hWndParent,
            /* [in] */ REFGUID ErrorID) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISyncMgrSynchronizeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ISyncMgrSynchronize __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ISyncMgrSynchronize __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ISyncMgrSynchronize __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Initialize )( 
            ISyncMgrSynchronize __RPC_FAR * This,
            /* [in] */ DWORD dwReserved,
            /* [in] */ DWORD dwSyncMgrFlags,
            /* [in] */ DWORD cbCookie,
            /* [size_is][unique][in] */ const BYTE __RPC_FAR *lpCookie);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetHandlerInfo )( 
            ISyncMgrSynchronize __RPC_FAR * This,
            /* [out] */ SYNCMGRHANDLERINFO __RPC_FAR *__RPC_FAR *ppSyncMgrHandlerInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *EnumSyncMgrItems )( 
            ISyncMgrSynchronize __RPC_FAR * This,
            /* [out] */ ISyncMgrEnumItems __RPC_FAR *__RPC_FAR *ppSyncMgrEnumItems);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetItemObject )( 
            ISyncMgrSynchronize __RPC_FAR * This,
            /* [in] */ REFGUID ItemID,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ShowProperties )( 
            ISyncMgrSynchronize __RPC_FAR * This,
            /* [in] */ HWND hWndParent,
            /* [in] */ REFGUID ItemID);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetProgressCallback )( 
            ISyncMgrSynchronize __RPC_FAR * This,
            /* [unique][in] */ ISyncMgrSynchronizeCallback __RPC_FAR *lpCallBack);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *PrepareForSync )( 
            ISyncMgrSynchronize __RPC_FAR * This,
            /* [in] */ ULONG cbNumItems,
            /* [size_is][in] */ GUID __RPC_FAR *pItemIDs,
            /* [in] */ HWND hWndParent,
            /* [in] */ DWORD dwReserved);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Synchronize )( 
            ISyncMgrSynchronize __RPC_FAR * This,
            /* [in] */ HWND hWndParent);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetItemStatus )( 
            ISyncMgrSynchronize __RPC_FAR * This,
            /* [in] */ REFGUID pItemID,
            /* [in] */ DWORD dwSyncMgrStatus);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ShowError )( 
            ISyncMgrSynchronize __RPC_FAR * This,
            /* [in] */ HWND hWndParent,
            /* [in] */ REFGUID ErrorID);
        
        END_INTERFACE
    } ISyncMgrSynchronizeVtbl;

    interface ISyncMgrSynchronize
    {
        CONST_VTBL struct ISyncMgrSynchronizeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISyncMgrSynchronize_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISyncMgrSynchronize_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISyncMgrSynchronize_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISyncMgrSynchronize_Initialize(This,dwReserved,dwSyncMgrFlags,cbCookie,lpCookie)	\
    (This)->lpVtbl -> Initialize(This,dwReserved,dwSyncMgrFlags,cbCookie,lpCookie)

#define ISyncMgrSynchronize_GetHandlerInfo(This,ppSyncMgrHandlerInfo)	\
    (This)->lpVtbl -> GetHandlerInfo(This,ppSyncMgrHandlerInfo)

#define ISyncMgrSynchronize_EnumSyncMgrItems(This,ppSyncMgrEnumItems)	\
    (This)->lpVtbl -> EnumSyncMgrItems(This,ppSyncMgrEnumItems)

#define ISyncMgrSynchronize_GetItemObject(This,ItemID,riid,ppv)	\
    (This)->lpVtbl -> GetItemObject(This,ItemID,riid,ppv)

#define ISyncMgrSynchronize_ShowProperties(This,hWndParent,ItemID)	\
    (This)->lpVtbl -> ShowProperties(This,hWndParent,ItemID)

#define ISyncMgrSynchronize_SetProgressCallback(This,lpCallBack)	\
    (This)->lpVtbl -> SetProgressCallback(This,lpCallBack)

#define ISyncMgrSynchronize_PrepareForSync(This,cbNumItems,pItemIDs,hWndParent,dwReserved)	\
    (This)->lpVtbl -> PrepareForSync(This,cbNumItems,pItemIDs,hWndParent,dwReserved)

#define ISyncMgrSynchronize_Synchronize(This,hWndParent)	\
    (This)->lpVtbl -> Synchronize(This,hWndParent)

#define ISyncMgrSynchronize_SetItemStatus(This,pItemID,dwSyncMgrStatus)	\
    (This)->lpVtbl -> SetItemStatus(This,pItemID,dwSyncMgrStatus)

#define ISyncMgrSynchronize_ShowError(This,hWndParent,ErrorID)	\
    (This)->lpVtbl -> ShowError(This,hWndParent,ErrorID)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISyncMgrSynchronize_Initialize_Proxy( 
    ISyncMgrSynchronize __RPC_FAR * This,
    /* [in] */ DWORD dwReserved,
    /* [in] */ DWORD dwSyncMgrFlags,
    /* [in] */ DWORD cbCookie,
    /* [size_is][unique][in] */ const BYTE __RPC_FAR *lpCookie);


void __RPC_STUB ISyncMgrSynchronize_Initialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISyncMgrSynchronize_GetHandlerInfo_Proxy( 
    ISyncMgrSynchronize __RPC_FAR * This,
    /* [out] */ SYNCMGRHANDLERINFO __RPC_FAR *__RPC_FAR *ppSyncMgrHandlerInfo);


void __RPC_STUB ISyncMgrSynchronize_GetHandlerInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISyncMgrSynchronize_EnumSyncMgrItems_Proxy( 
    ISyncMgrSynchronize __RPC_FAR * This,
    /* [out] */ ISyncMgrEnumItems __RPC_FAR *__RPC_FAR *ppSyncMgrEnumItems);


void __RPC_STUB ISyncMgrSynchronize_EnumSyncMgrItems_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISyncMgrSynchronize_GetItemObject_Proxy( 
    ISyncMgrSynchronize __RPC_FAR * This,
    /* [in] */ REFGUID ItemID,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB ISyncMgrSynchronize_GetItemObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISyncMgrSynchronize_ShowProperties_Proxy( 
    ISyncMgrSynchronize __RPC_FAR * This,
    /* [in] */ HWND hWndParent,
    /* [in] */ REFGUID ItemID);


void __RPC_STUB ISyncMgrSynchronize_ShowProperties_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISyncMgrSynchronize_SetProgressCallback_Proxy( 
    ISyncMgrSynchronize __RPC_FAR * This,
    /* [unique][in] */ ISyncMgrSynchronizeCallback __RPC_FAR *lpCallBack);


void __RPC_STUB ISyncMgrSynchronize_SetProgressCallback_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISyncMgrSynchronize_PrepareForSync_Proxy( 
    ISyncMgrSynchronize __RPC_FAR * This,
    /* [in] */ ULONG cbNumItems,
    /* [size_is][in] */ GUID __RPC_FAR *pItemIDs,
    /* [in] */ HWND hWndParent,
    /* [in] */ DWORD dwReserved);


void __RPC_STUB ISyncMgrSynchronize_PrepareForSync_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISyncMgrSynchronize_Synchronize_Proxy( 
    ISyncMgrSynchronize __RPC_FAR * This,
    /* [in] */ HWND hWndParent);


void __RPC_STUB ISyncMgrSynchronize_Synchronize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISyncMgrSynchronize_SetItemStatus_Proxy( 
    ISyncMgrSynchronize __RPC_FAR * This,
    /* [in] */ REFGUID pItemID,
    /* [in] */ DWORD dwSyncMgrStatus);


void __RPC_STUB ISyncMgrSynchronize_SetItemStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISyncMgrSynchronize_ShowError_Proxy( 
    ISyncMgrSynchronize __RPC_FAR * This,
    /* [in] */ HWND hWndParent,
    /* [in] */ REFGUID ErrorID);


void __RPC_STUB ISyncMgrSynchronize_ShowError_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISyncMgrSynchronize_INTERFACE_DEFINED__ */


#ifndef __ISyncMgrSynchronizeInvoke_INTERFACE_DEFINED__
#define __ISyncMgrSynchronizeInvoke_INTERFACE_DEFINED__

/* interface ISyncMgrSynchronizeInvoke */
/* [unique][uuid][object] */ 

typedef /* [unique] */ ISyncMgrSynchronizeInvoke __RPC_FAR *LPSYNCMGRSYNCHRONIZEINVOKE;

typedef /* [v1_enum] */ 
enum _tagSYNCMGRINVOKEFLAGS
    {	SYNCMGRINVOKE_STARTSYNC	= 0x2,
	SYNCMGRINVOKE_MINIMIZED	= 0x4
    }	SYNCMGRINVOKEFLAGS;


EXTERN_C const IID IID_ISyncMgrSynchronizeInvoke;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6295DF2C-35EE-11d1-8707-00C04FD93327")
    ISyncMgrSynchronizeInvoke : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE UpdateItems( 
            /* [in] */ DWORD dwInvokeFlags,
            /* [in] */ REFCLSID clsid,
            /* [in] */ DWORD cbCookie,
            /* [size_is][unique][in] */ const BYTE __RPC_FAR *pCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateAll( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISyncMgrSynchronizeInvokeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ISyncMgrSynchronizeInvoke __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ISyncMgrSynchronizeInvoke __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ISyncMgrSynchronizeInvoke __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *UpdateItems )( 
            ISyncMgrSynchronizeInvoke __RPC_FAR * This,
            /* [in] */ DWORD dwInvokeFlags,
            /* [in] */ REFCLSID clsid,
            /* [in] */ DWORD cbCookie,
            /* [size_is][unique][in] */ const BYTE __RPC_FAR *pCookie);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *UpdateAll )( 
            ISyncMgrSynchronizeInvoke __RPC_FAR * This);
        
        END_INTERFACE
    } ISyncMgrSynchronizeInvokeVtbl;

    interface ISyncMgrSynchronizeInvoke
    {
        CONST_VTBL struct ISyncMgrSynchronizeInvokeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISyncMgrSynchronizeInvoke_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISyncMgrSynchronizeInvoke_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISyncMgrSynchronizeInvoke_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISyncMgrSynchronizeInvoke_UpdateItems(This,dwInvokeFlags,clsid,cbCookie,pCookie)	\
    (This)->lpVtbl -> UpdateItems(This,dwInvokeFlags,clsid,cbCookie,pCookie)

#define ISyncMgrSynchronizeInvoke_UpdateAll(This)	\
    (This)->lpVtbl -> UpdateAll(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISyncMgrSynchronizeInvoke_UpdateItems_Proxy( 
    ISyncMgrSynchronizeInvoke __RPC_FAR * This,
    /* [in] */ DWORD dwInvokeFlags,
    /* [in] */ REFCLSID clsid,
    /* [in] */ DWORD cbCookie,
    /* [size_is][unique][in] */ const BYTE __RPC_FAR *pCookie);


void __RPC_STUB ISyncMgrSynchronizeInvoke_UpdateItems_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISyncMgrSynchronizeInvoke_UpdateAll_Proxy( 
    ISyncMgrSynchronizeInvoke __RPC_FAR * This);


void __RPC_STUB ISyncMgrSynchronizeInvoke_UpdateAll_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISyncMgrSynchronizeInvoke_INTERFACE_DEFINED__ */


#ifndef __ISyncMgrRegister_INTERFACE_DEFINED__
#define __ISyncMgrRegister_INTERFACE_DEFINED__

/* interface ISyncMgrRegister */
/* [unique][uuid][object] */ 

typedef /* [unique] */ ISyncMgrRegister __RPC_FAR *LPSYNCMGRREGISTER;

typedef /* [v1_enum] */ 
enum _tagSYNCMGRREGISTERFLAGS
    {	SYNCMGRREGISTERFLAG_CONNECT	= 0x1,
	SYNCMGRREGISTERFLAG_PENDINGDISCONNECT	= 0x2,
	SYNCMGRREGISTERFLAG_IDLE	= 0x4
    }	SYNCMGRREGISTERFLAGS;

#define SYNCMGRREGISTERFLAGS_MASK  0x07

EXTERN_C const IID IID_ISyncMgrRegister;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6295DF42-35EE-11d1-8707-00C04FD93327")
    ISyncMgrRegister : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RegisterSyncMgrHandler( 
            /* [in] */ REFCLSID clsidHandler,
            /* [unique][in] */ LPCWSTR pwszDescription,
            /* [in] */ DWORD dwSyncMgrRegisterFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnregisterSyncMgrHandler( 
            /* [in] */ REFCLSID clsidHandler,
            /* [in] */ DWORD dwReserved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHandlerRegistrationInfo( 
            /* [in] */ REFCLSID clsidHandler,
            /* [out][in] */ LPDWORD pdwSyncMgrRegisterFlags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISyncMgrRegisterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ISyncMgrRegister __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ISyncMgrRegister __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ISyncMgrRegister __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RegisterSyncMgrHandler )( 
            ISyncMgrRegister __RPC_FAR * This,
            /* [in] */ REFCLSID clsidHandler,
            /* [unique][in] */ LPCWSTR pwszDescription,
            /* [in] */ DWORD dwSyncMgrRegisterFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *UnregisterSyncMgrHandler )( 
            ISyncMgrRegister __RPC_FAR * This,
            /* [in] */ REFCLSID clsidHandler,
            /* [in] */ DWORD dwReserved);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetHandlerRegistrationInfo )( 
            ISyncMgrRegister __RPC_FAR * This,
            /* [in] */ REFCLSID clsidHandler,
            /* [out][in] */ LPDWORD pdwSyncMgrRegisterFlags);
        
        END_INTERFACE
    } ISyncMgrRegisterVtbl;

    interface ISyncMgrRegister
    {
        CONST_VTBL struct ISyncMgrRegisterVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISyncMgrRegister_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISyncMgrRegister_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISyncMgrRegister_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISyncMgrRegister_RegisterSyncMgrHandler(This,clsidHandler,pwszDescription,dwSyncMgrRegisterFlags)	\
    (This)->lpVtbl -> RegisterSyncMgrHandler(This,clsidHandler,pwszDescription,dwSyncMgrRegisterFlags)

#define ISyncMgrRegister_UnregisterSyncMgrHandler(This,clsidHandler,dwReserved)	\
    (This)->lpVtbl -> UnregisterSyncMgrHandler(This,clsidHandler,dwReserved)

#define ISyncMgrRegister_GetHandlerRegistrationInfo(This,clsidHandler,pdwSyncMgrRegisterFlags)	\
    (This)->lpVtbl -> GetHandlerRegistrationInfo(This,clsidHandler,pdwSyncMgrRegisterFlags)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISyncMgrRegister_RegisterSyncMgrHandler_Proxy( 
    ISyncMgrRegister __RPC_FAR * This,
    /* [in] */ REFCLSID clsidHandler,
    /* [unique][in] */ LPCWSTR pwszDescription,
    /* [in] */ DWORD dwSyncMgrRegisterFlags);


void __RPC_STUB ISyncMgrRegister_RegisterSyncMgrHandler_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISyncMgrRegister_UnregisterSyncMgrHandler_Proxy( 
    ISyncMgrRegister __RPC_FAR * This,
    /* [in] */ REFCLSID clsidHandler,
    /* [in] */ DWORD dwReserved);


void __RPC_STUB ISyncMgrRegister_UnregisterSyncMgrHandler_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISyncMgrRegister_GetHandlerRegistrationInfo_Proxy( 
    ISyncMgrRegister __RPC_FAR * This,
    /* [in] */ REFCLSID clsidHandler,
    /* [out][in] */ LPDWORD pdwSyncMgrRegisterFlags);


void __RPC_STUB ISyncMgrRegister_GetHandlerRegistrationInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISyncMgrRegister_INTERFACE_DEFINED__ */



#ifndef __SyncObjects_LIBRARY_DEFINED__
#define __SyncObjects_LIBRARY_DEFINED__

/* library SyncObjects */
/* [version][lcid][helpstring][uuid] */ 


EXTERN_C const IID LIBID_SyncObjects;

EXTERN_C const CLSID CLSID_SyncMgr;

#ifdef __cplusplus

class DECLSPEC_UUID("6295DF27-35EE-11d1-8707-00C04FD93327")
SyncMgr;
#endif
#endif /* __SyncObjects_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HICON_UserSize(     unsigned long __RPC_FAR *, unsigned long            , HICON __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  HICON_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, HICON __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  HICON_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, HICON __RPC_FAR * ); 
void                      __RPC_USER  HICON_UserFree(     unsigned long __RPC_FAR *, HICON __RPC_FAR * ); 

unsigned long             __RPC_USER  HWND_UserSize(     unsigned long __RPC_FAR *, unsigned long            , HWND __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  HWND_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, HWND __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  HWND_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, HWND __RPC_FAR * ); 
void                      __RPC_USER  HWND_UserFree(     unsigned long __RPC_FAR *, HWND __RPC_FAR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


