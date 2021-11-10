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
/* Compiler settings for av_dcp.idl:
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

#ifndef __av_dcp_h__
#define __av_dcp_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IUPnPService_ConnectionManager1_FWD_DEFINED__
#define __IUPnPService_ConnectionManager1_FWD_DEFINED__
typedef interface IUPnPService_ConnectionManager1 IUPnPService_ConnectionManager1;
#endif 	/* __IUPnPService_ConnectionManager1_FWD_DEFINED__ */


#ifndef __IUPnPService_AVTransport1_FWD_DEFINED__
#define __IUPnPService_AVTransport1_FWD_DEFINED__
typedef interface IUPnPService_AVTransport1 IUPnPService_AVTransport1;
#endif 	/* __IUPnPService_AVTransport1_FWD_DEFINED__ */


#ifndef __IUPnPService_RenderingControl1_FWD_DEFINED__
#define __IUPnPService_RenderingControl1_FWD_DEFINED__
typedef interface IUPnPService_RenderingControl1 IUPnPService_RenderingControl1;
#endif 	/* __IUPnPService_RenderingControl1_FWD_DEFINED__ */


#ifndef __IUPnPService_ContentDirectory1_FWD_DEFINED__
#define __IUPnPService_ContentDirectory1_FWD_DEFINED__
typedef interface IUPnPService_ContentDirectory1 IUPnPService_ContentDirectory1;
#endif 	/* __IUPnPService_ContentDirectory1_FWD_DEFINED__ */


#ifndef __IUPnPService_ConnectionManager1_FWD_DEFINED__
#define __IUPnPService_ConnectionManager1_FWD_DEFINED__
typedef interface IUPnPService_ConnectionManager1 IUPnPService_ConnectionManager1;
#endif 	/* __IUPnPService_ConnectionManager1_FWD_DEFINED__ */


#ifndef __IUPnPService_AVTransport1_FWD_DEFINED__
#define __IUPnPService_AVTransport1_FWD_DEFINED__
typedef interface IUPnPService_AVTransport1 IUPnPService_AVTransport1;
#endif 	/* __IUPnPService_AVTransport1_FWD_DEFINED__ */


#ifndef __IUPnPService_RenderingControl1_FWD_DEFINED__
#define __IUPnPService_RenderingControl1_FWD_DEFINED__
typedef interface IUPnPService_RenderingControl1 IUPnPService_RenderingControl1;
#endif 	/* __IUPnPService_RenderingControl1_FWD_DEFINED__ */


#ifndef __IUPnPService_ContentDirectory1_FWD_DEFINED__
#define __IUPnPService_ContentDirectory1_FWD_DEFINED__
typedef interface IUPnPService_ContentDirectory1 IUPnPService_ContentDirectory1;
#endif 	/* __IUPnPService_ContentDirectory1_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_av_dcp_0000_0000 */
/* [local] */ 

typedef /* [v1_enum] */ 
enum CONNECTIONMANAGER1_DISPIDS
    {	DISPID_SOURCEPROTOCOLINFO	= 1,
	DISPID_SINKPROTOCOLINFO	= ( DISPID_SOURCEPROTOCOLINFO + 1 ) ,
	DISPID_CURRENTCONNECTIONIDS	= ( DISPID_SINKPROTOCOLINFO + 1 ) ,
	DISPID_A_ARG_TYPE_CONNECTIONSTATUS	= ( DISPID_CURRENTCONNECTIONIDS + 1 ) ,
	DISPID_A_ARG_TYPE_CONNECTIONMANAGER	= ( DISPID_A_ARG_TYPE_CONNECTIONSTATUS + 1 ) ,
	DISPID_A_ARG_TYPE_DIRECTION	= ( DISPID_A_ARG_TYPE_CONNECTIONMANAGER + 1 ) ,
	DISPID_A_ARG_TYPE_PROTOCOLINFO	= ( DISPID_A_ARG_TYPE_DIRECTION + 1 ) ,
	DISPID_A_ARG_TYPE_CONNECTIONID	= ( DISPID_A_ARG_TYPE_PROTOCOLINFO + 1 ) ,
	DISPID_A_ARG_TYPE_AVTRANSPORTID	= ( DISPID_A_ARG_TYPE_CONNECTIONID + 1 ) ,
	DISPID_A_ARG_TYPE_RCSID	= ( DISPID_A_ARG_TYPE_AVTRANSPORTID + 1 ) ,
	DISPID_GETPROTOCOLINFO	= ( DISPID_A_ARG_TYPE_RCSID + 1 ) ,
	DISPID_PREPAREFORCONNECTION	= ( DISPID_GETPROTOCOLINFO + 1 ) ,
	DISPID_CONNECTIONCOMPLETE	= ( DISPID_PREPAREFORCONNECTION + 1 ) ,
	DISPID_GETCURRENTCONNECTIONIDS	= ( DISPID_CONNECTIONCOMPLETE + 1 ) ,
	DISPID_GETCURRENTCONNECTIONINFO	= ( DISPID_GETCURRENTCONNECTIONIDS + 1 ) 
    } 	CONNECTIONMANAGER1_DISPIDS;



extern RPC_IF_HANDLE __MIDL_itf_av_dcp_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_av_dcp_0000_0000_v0_0_s_ifspec;

#ifndef __IUPnPService_ConnectionManager1_INTERFACE_DEFINED__
#define __IUPnPService_ConnectionManager1_INTERFACE_DEFINED__

/* interface IUPnPService_ConnectionManager1 */
/* [object][unique][helpstring][oleautomation][uuid] */ 


EXTERN_C const IID IID_IUPnPService_ConnectionManager1;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ff271439-4bba-4644-a206-bf9d136db66b")
    IUPnPService_ConnectionManager1 : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SourceProtocolInfo( 
            /* [retval][out] */ BSTR *pSourceProtocolInfo) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SinkProtocolInfo( 
            /* [retval][out] */ BSTR *pSinkProtocolInfo) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentConnectionIDs( 
            /* [retval][out] */ BSTR *pCurrentConnectionIDs) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_A_ARG_TYPE_ConnectionStatus( 
            /* [retval][out] */ BSTR *pA_ARG_TYPE_ConnectionStatus) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_A_ARG_TYPE_ConnectionManager( 
            /* [retval][out] */ BSTR *pA_ARG_TYPE_ConnectionManager) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_A_ARG_TYPE_Direction( 
            /* [retval][out] */ BSTR *pA_ARG_TYPE_Direction) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_A_ARG_TYPE_ProtocolInfo( 
            /* [retval][out] */ BSTR *pA_ARG_TYPE_ProtocolInfo) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_A_ARG_TYPE_ConnectionID( 
            /* [retval][out] */ long *pA_ARG_TYPE_ConnectionID) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_A_ARG_TYPE_AVTransportID( 
            /* [retval][out] */ long *pA_ARG_TYPE_AVTransportID) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_A_ARG_TYPE_RcsID( 
            /* [retval][out] */ long *pA_ARG_TYPE_RcsID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProtocolInfo( 
            /* [out][in] */ BSTR *pSource,
            /* [out][in] */ BSTR *pSink) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PrepareForConnection( 
            /* [in] */ BSTR RemoteProtocolInfo,
            /* [in] */ BSTR PeerConnectionManager,
            /* [in] */ long PeerConnectionID,
            /* [in] */ BSTR Direction,
            /* [out][in] */ long *pConnectionID,
            /* [out][in] */ long *pAVTransportID,
            /* [out][in] */ long *pRcsID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ConnectionComplete( 
            /* [in] */ long ConnectionID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetCurrentConnectionIDs( 
            /* [out][in] */ BSTR *pConnectionIDs) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetCurrentConnectionInfo( 
            /* [in] */ long ConnectionID,
            /* [out][in] */ long *pRcsID,
            /* [out][in] */ long *pAVTransportID,
            /* [out][in] */ BSTR *pProtocolInfo,
            /* [out][in] */ BSTR *pPeerConnectionManager,
            /* [out][in] */ long *pPeerConnectionID,
            /* [out][in] */ BSTR *pDirection,
            /* [out][in] */ BSTR *pStatus) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUPnPService_ConnectionManager1Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUPnPService_ConnectionManager1 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUPnPService_ConnectionManager1 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUPnPService_ConnectionManager1 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUPnPService_ConnectionManager1 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUPnPService_ConnectionManager1 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUPnPService_ConnectionManager1 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUPnPService_ConnectionManager1 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SourceProtocolInfo )( 
            IUPnPService_ConnectionManager1 * This,
            /* [retval][out] */ BSTR *pSourceProtocolInfo);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SinkProtocolInfo )( 
            IUPnPService_ConnectionManager1 * This,
            /* [retval][out] */ BSTR *pSinkProtocolInfo);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentConnectionIDs )( 
            IUPnPService_ConnectionManager1 * This,
            /* [retval][out] */ BSTR *pCurrentConnectionIDs);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_A_ARG_TYPE_ConnectionStatus )( 
            IUPnPService_ConnectionManager1 * This,
            /* [retval][out] */ BSTR *pA_ARG_TYPE_ConnectionStatus);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_A_ARG_TYPE_ConnectionManager )( 
            IUPnPService_ConnectionManager1 * This,
            /* [retval][out] */ BSTR *pA_ARG_TYPE_ConnectionManager);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_A_ARG_TYPE_Direction )( 
            IUPnPService_ConnectionManager1 * This,
            /* [retval][out] */ BSTR *pA_ARG_TYPE_Direction);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_A_ARG_TYPE_ProtocolInfo )( 
            IUPnPService_ConnectionManager1 * This,
            /* [retval][out] */ BSTR *pA_ARG_TYPE_ProtocolInfo);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_A_ARG_TYPE_ConnectionID )( 
            IUPnPService_ConnectionManager1 * This,
            /* [retval][out] */ long *pA_ARG_TYPE_ConnectionID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_A_ARG_TYPE_AVTransportID )( 
            IUPnPService_ConnectionManager1 * This,
            /* [retval][out] */ long *pA_ARG_TYPE_AVTransportID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_A_ARG_TYPE_RcsID )( 
            IUPnPService_ConnectionManager1 * This,
            /* [retval][out] */ long *pA_ARG_TYPE_RcsID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProtocolInfo )( 
            IUPnPService_ConnectionManager1 * This,
            /* [out][in] */ BSTR *pSource,
            /* [out][in] */ BSTR *pSink);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PrepareForConnection )( 
            IUPnPService_ConnectionManager1 * This,
            /* [in] */ BSTR RemoteProtocolInfo,
            /* [in] */ BSTR PeerConnectionManager,
            /* [in] */ long PeerConnectionID,
            /* [in] */ BSTR Direction,
            /* [out][in] */ long *pConnectionID,
            /* [out][in] */ long *pAVTransportID,
            /* [out][in] */ long *pRcsID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ConnectionComplete )( 
            IUPnPService_ConnectionManager1 * This,
            /* [in] */ long ConnectionID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCurrentConnectionIDs )( 
            IUPnPService_ConnectionManager1 * This,
            /* [out][in] */ BSTR *pConnectionIDs);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCurrentConnectionInfo )( 
            IUPnPService_ConnectionManager1 * This,
            /* [in] */ long ConnectionID,
            /* [out][in] */ long *pRcsID,
            /* [out][in] */ long *pAVTransportID,
            /* [out][in] */ BSTR *pProtocolInfo,
            /* [out][in] */ BSTR *pPeerConnectionManager,
            /* [out][in] */ long *pPeerConnectionID,
            /* [out][in] */ BSTR *pDirection,
            /* [out][in] */ BSTR *pStatus);
        
        END_INTERFACE
    } IUPnPService_ConnectionManager1Vtbl;

    interface IUPnPService_ConnectionManager1
    {
        CONST_VTBL struct IUPnPService_ConnectionManager1Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUPnPService_ConnectionManager1_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUPnPService_ConnectionManager1_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUPnPService_ConnectionManager1_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUPnPService_ConnectionManager1_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUPnPService_ConnectionManager1_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUPnPService_ConnectionManager1_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUPnPService_ConnectionManager1_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUPnPService_ConnectionManager1_get_SourceProtocolInfo(This,pSourceProtocolInfo)	\
    ( (This)->lpVtbl -> get_SourceProtocolInfo(This,pSourceProtocolInfo) ) 

#define IUPnPService_ConnectionManager1_get_SinkProtocolInfo(This,pSinkProtocolInfo)	\
    ( (This)->lpVtbl -> get_SinkProtocolInfo(This,pSinkProtocolInfo) ) 

#define IUPnPService_ConnectionManager1_get_CurrentConnectionIDs(This,pCurrentConnectionIDs)	\
    ( (This)->lpVtbl -> get_CurrentConnectionIDs(This,pCurrentConnectionIDs) ) 

#define IUPnPService_ConnectionManager1_get_A_ARG_TYPE_ConnectionStatus(This,pA_ARG_TYPE_ConnectionStatus)	\
    ( (This)->lpVtbl -> get_A_ARG_TYPE_ConnectionStatus(This,pA_ARG_TYPE_ConnectionStatus) ) 

#define IUPnPService_ConnectionManager1_get_A_ARG_TYPE_ConnectionManager(This,pA_ARG_TYPE_ConnectionManager)	\
    ( (This)->lpVtbl -> get_A_ARG_TYPE_ConnectionManager(This,pA_ARG_TYPE_ConnectionManager) ) 

#define IUPnPService_ConnectionManager1_get_A_ARG_TYPE_Direction(This,pA_ARG_TYPE_Direction)	\
    ( (This)->lpVtbl -> get_A_ARG_TYPE_Direction(This,pA_ARG_TYPE_Direction) ) 

#define IUPnPService_ConnectionManager1_get_A_ARG_TYPE_ProtocolInfo(This,pA_ARG_TYPE_ProtocolInfo)	\
    ( (This)->lpVtbl -> get_A_ARG_TYPE_ProtocolInfo(This,pA_ARG_TYPE_ProtocolInfo) ) 

#define IUPnPService_ConnectionManager1_get_A_ARG_TYPE_ConnectionID(This,pA_ARG_TYPE_ConnectionID)	\
    ( (This)->lpVtbl -> get_A_ARG_TYPE_ConnectionID(This,pA_ARG_TYPE_ConnectionID) ) 

#define IUPnPService_ConnectionManager1_get_A_ARG_TYPE_AVTransportID(This,pA_ARG_TYPE_AVTransportID)	\
    ( (This)->lpVtbl -> get_A_ARG_TYPE_AVTransportID(This,pA_ARG_TYPE_AVTransportID) ) 

#define IUPnPService_ConnectionManager1_get_A_ARG_TYPE_RcsID(This,pA_ARG_TYPE_RcsID)	\
    ( (This)->lpVtbl -> get_A_ARG_TYPE_RcsID(This,pA_ARG_TYPE_RcsID) ) 

#define IUPnPService_ConnectionManager1_GetProtocolInfo(This,pSource,pSink)	\
    ( (This)->lpVtbl -> GetProtocolInfo(This,pSource,pSink) ) 

#define IUPnPService_ConnectionManager1_PrepareForConnection(This,RemoteProtocolInfo,PeerConnectionManager,PeerConnectionID,Direction,pConnectionID,pAVTransportID,pRcsID)	\
    ( (This)->lpVtbl -> PrepareForConnection(This,RemoteProtocolInfo,PeerConnectionManager,PeerConnectionID,Direction,pConnectionID,pAVTransportID,pRcsID) ) 

#define IUPnPService_ConnectionManager1_ConnectionComplete(This,ConnectionID)	\
    ( (This)->lpVtbl -> ConnectionComplete(This,ConnectionID) ) 

#define IUPnPService_ConnectionManager1_GetCurrentConnectionIDs(This,pConnectionIDs)	\
    ( (This)->lpVtbl -> GetCurrentConnectionIDs(This,pConnectionIDs) ) 

#define IUPnPService_ConnectionManager1_GetCurrentConnectionInfo(This,ConnectionID,pRcsID,pAVTransportID,pProtocolInfo,pPeerConnectionManager,pPeerConnectionID,pDirection,pStatus)	\
    ( (This)->lpVtbl -> GetCurrentConnectionInfo(This,ConnectionID,pRcsID,pAVTransportID,pProtocolInfo,pPeerConnectionManager,pPeerConnectionID,pDirection,pStatus) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUPnPService_ConnectionManager1_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_av_dcp_0000_0001 */
/* [local] */ 

typedef /* [v1_enum] */ 
enum AVTRANSPORT1_DISPIDS
    {	DISPID_TRANSPORTSTATE	= 1,
	DISPID_TRANSPORTSTATUS	= ( DISPID_TRANSPORTSTATE + 1 ) ,
	DISPID_PLAYBACKSTORAGEMEDIUM	= ( DISPID_TRANSPORTSTATUS + 1 ) ,
	DISPID_RECORDSTORAGEMEDIUM	= ( DISPID_PLAYBACKSTORAGEMEDIUM + 1 ) ,
	DISPID_POSSIBLEPLAYBACKSTORAGEMEDIA	= ( DISPID_RECORDSTORAGEMEDIUM + 1 ) ,
	DISPID_POSSIBLERECORDSTORAGEMEDIA	= ( DISPID_POSSIBLEPLAYBACKSTORAGEMEDIA + 1 ) ,
	DISPID_CURRENTPLAYMODE	= ( DISPID_POSSIBLERECORDSTORAGEMEDIA + 1 ) ,
	DISPID_TRANSPORTPLAYSPEED	= ( DISPID_CURRENTPLAYMODE + 1 ) ,
	DISPID_RECORDMEDIUMWRITESTATUS	= ( DISPID_TRANSPORTPLAYSPEED + 1 ) ,
	DISPID_CURRENTRECORDQUALITYMODE	= ( DISPID_RECORDMEDIUMWRITESTATUS + 1 ) ,
	DISPID_POSSIBLERECORDQUALITYMODES	= ( DISPID_CURRENTRECORDQUALITYMODE + 1 ) ,
	DISPID_NUMBEROFTRACKS	= ( DISPID_POSSIBLERECORDQUALITYMODES + 1 ) ,
	DISPID_CURRENTTRACK	= ( DISPID_NUMBEROFTRACKS + 1 ) ,
	DISPID_CURRENTTRACKDURATION	= ( DISPID_CURRENTTRACK + 1 ) ,
	DISPID_CURRENTMEDIADURATION	= ( DISPID_CURRENTTRACKDURATION + 1 ) ,
	DISPID_CURRENTTRACKMETADATA	= ( DISPID_CURRENTMEDIADURATION + 1 ) ,
	DISPID_CURRENTTRACKURI	= ( DISPID_CURRENTTRACKMETADATA + 1 ) ,
	DISPID_AVTRANSPORTURI	= ( DISPID_CURRENTTRACKURI + 1 ) ,
	DISPID_AVTRANSPORTURIMETADATA	= ( DISPID_AVTRANSPORTURI + 1 ) ,
	DISPID_NEXTAVTRANSPORTURI	= ( DISPID_AVTRANSPORTURIMETADATA + 1 ) ,
	DISPID_NEXTAVTRANSPORTURIMETADATA	= ( DISPID_NEXTAVTRANSPORTURI + 1 ) ,
	DISPID_RELATIVETIMEPOSITION	= ( DISPID_NEXTAVTRANSPORTURIMETADATA + 1 ) ,
	DISPID_ABSOLUTETIMEPOSITION	= ( DISPID_RELATIVETIMEPOSITION + 1 ) ,
	DISPID_RELATIVECOUNTERPOSITION	= ( DISPID_ABSOLUTETIMEPOSITION + 1 ) ,
	DISPID_ABSOLUTECOUNTERPOSITION	= ( DISPID_RELATIVECOUNTERPOSITION + 1 ) ,
	DISPID_CURRENTTRANSPORTACTIONS	= ( DISPID_ABSOLUTECOUNTERPOSITION + 1 ) ,
	DISPID_LASTCHANGE_AVT	= ( DISPID_CURRENTTRANSPORTACTIONS + 1 ) ,
	DISPID_A_ARG_TYPE_SEEKMODE	= ( DISPID_LASTCHANGE_AVT + 1 ) ,
	DISPID_A_ARG_TYPE_SEEKTARGET	= ( DISPID_A_ARG_TYPE_SEEKMODE + 1 ) ,
	DISPID_A_ARG_TYPE_INSTANCEID_AVT	= ( DISPID_A_ARG_TYPE_SEEKTARGET + 1 ) ,
	DISPID_SETAVTRANSPORTURI	= ( DISPID_A_ARG_TYPE_INSTANCEID_AVT + 1 ) ,
	DISPID_SETNEXTAVTRANSPORTURI	= ( DISPID_SETAVTRANSPORTURI + 1 ) ,
	DISPID_GETMEDIAINFO	= ( DISPID_SETNEXTAVTRANSPORTURI + 1 ) ,
	DISPID_GETTRANSPORTINFO	= ( DISPID_GETMEDIAINFO + 1 ) ,
	DISPID_GETPOSITIONINFO	= ( DISPID_GETTRANSPORTINFO + 1 ) ,
	DISPID_GETDEVICECAPABILITIES	= ( DISPID_GETPOSITIONINFO + 1 ) ,
	DISPID_GETTRANSPORTSETTINGS	= ( DISPID_GETDEVICECAPABILITIES + 1 ) ,
	DISPID_STOP	= ( DISPID_GETTRANSPORTSETTINGS + 1 ) ,
	DISPID_PLAY	= ( DISPID_STOP + 1 ) ,
	DISPID_PAUSE	= ( DISPID_PLAY + 1 ) ,
	DISPID_RECORD	= ( DISPID_PAUSE + 1 ) ,
	DISPID_SEEK	= ( DISPID_RECORD + 1 ) ,
	DISPID_NEXT	= ( DISPID_SEEK + 1 ) ,
	DISPID_PREVIOUS	= ( DISPID_NEXT + 1 ) ,
	DISPID_SETPLAYMODE	= ( DISPID_PREVIOUS + 1 ) ,
	DISPID_SETRECORDQUALITYMODE	= ( DISPID_SETPLAYMODE + 1 ) ,
	DISPID_GETCURRENTTRANSPORTACTIONS	= ( DISPID_SETRECORDQUALITYMODE + 1 ) 
    } 	AVTRANSPORT1_DISPIDS;



extern RPC_IF_HANDLE __MIDL_itf_av_dcp_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_av_dcp_0000_0001_v0_0_s_ifspec;

#ifndef __IUPnPService_AVTransport1_INTERFACE_DEFINED__
#define __IUPnPService_AVTransport1_INTERFACE_DEFINED__

/* interface IUPnPService_AVTransport1 */
/* [object][unique][helpstring][oleautomation][uuid] */ 


EXTERN_C const IID IID_IUPnPService_AVTransport1;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("44ba72e2-6f72-477e-b3bf-297a677c84fa")
    IUPnPService_AVTransport1 : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TransportState( 
            /* [retval][out] */ BSTR *pTransportState) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TransportStatus( 
            /* [retval][out] */ BSTR *pTransportStatus) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PlaybackStorageMedium( 
            /* [retval][out] */ BSTR *pPlaybackStorageMedium) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RecordStorageMedium( 
            /* [retval][out] */ BSTR *pRecordStorageMedium) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PossiblePlaybackStorageMedia( 
            /* [retval][out] */ BSTR *pPossiblePlaybackStorageMedia) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PossibleRecordStorageMedia( 
            /* [retval][out] */ BSTR *pPossibleRecordStorageMedia) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentPlayMode( 
            /* [retval][out] */ BSTR *pCurrentPlayMode) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TransportPlaySpeed( 
            /* [retval][out] */ BSTR *pTransportPlaySpeed) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RecordMediumWriteStatus( 
            /* [retval][out] */ BSTR *pRecordMediumWriteStatus) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentRecordQualityMode( 
            /* [retval][out] */ BSTR *pCurrentRecordQualityMode) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PossibleRecordQualityModes( 
            /* [retval][out] */ BSTR *pPossibleRecordQualityModes) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NumberOfTracks( 
            /* [retval][out] */ unsigned long *pNumberOfTracks) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentTrack( 
            /* [retval][out] */ unsigned long *pCurrentTrack) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentTrackDuration( 
            /* [retval][out] */ BSTR *pCurrentTrackDuration) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentMediaDuration( 
            /* [retval][out] */ BSTR *pCurrentMediaDuration) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentTrackMetaData( 
            /* [retval][out] */ BSTR *pCurrentTrackMetaData) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentTrackURI( 
            /* [retval][out] */ BSTR *pCurrentTrackURI) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AVTransportURI( 
            /* [retval][out] */ BSTR *pAVTransportURI) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AVTransportURIMetaData( 
            /* [retval][out] */ BSTR *pAVTransportURIMetaData) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NextAVTransportURI( 
            /* [retval][out] */ BSTR *pNextAVTransportURI) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NextAVTransportURIMetaData( 
            /* [retval][out] */ BSTR *pNextAVTransportURIMetaData) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RelativeTimePosition( 
            /* [retval][out] */ BSTR *pRelativeTimePosition) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AbsoluteTimePosition( 
            /* [retval][out] */ BSTR *pAbsoluteTimePosition) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RelativeCounterPosition( 
            /* [retval][out] */ long *pRelativeCounterPosition) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AbsoluteCounterPosition( 
            /* [retval][out] */ long *pAbsoluteCounterPosition) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentTransportActions( 
            /* [retval][out] */ BSTR *pCurrentTransportActions) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastChange( 
            /* [retval][out] */ BSTR *pLastChange) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_A_ARG_TYPE_SeekMode( 
            /* [retval][out] */ BSTR *pA_ARG_TYPE_SeekMode) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_A_ARG_TYPE_SeekTarget( 
            /* [retval][out] */ BSTR *pA_ARG_TYPE_SeekTarget) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_A_ARG_TYPE_InstanceID( 
            /* [retval][out] */ unsigned long *pA_ARG_TYPE_InstanceID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetAVTransportURI( 
            /* [in] */ unsigned long InstanceID,
            /* [in] */ BSTR CurrentURI,
            /* [in] */ BSTR CurrentURIMetaData) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetNextAVTransportURI( 
            /* [in] */ unsigned long InstanceID,
            /* [in] */ BSTR NextURI,
            /* [in] */ BSTR NextURIMetaData) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMediaInfo( 
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ unsigned long *pNrTracks,
            /* [out][in] */ BSTR *pMediaDuration,
            /* [out][in] */ BSTR *pCurrentURI,
            /* [out][in] */ BSTR *pCurrentURIMetaData,
            /* [out][in] */ BSTR *pNextURI,
            /* [out][in] */ BSTR *pNextURIMetaData,
            /* [out][in] */ BSTR *pPlayMedium,
            /* [out][in] */ BSTR *pRecordMedium,
            /* [out][in] */ BSTR *pWriteStatus) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTransportInfo( 
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ BSTR *pCurrentTransportState,
            /* [out][in] */ BSTR *pCurrentTransportStatus,
            /* [out][in] */ BSTR *pCurrentSpeed) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPositionInfo( 
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ unsigned long *pTrack,
            /* [out][in] */ BSTR *pTrackDuration,
            /* [out][in] */ BSTR *pTrackMetaData,
            /* [out][in] */ BSTR *pTrackURI,
            /* [out][in] */ BSTR *pRelTime,
            /* [out][in] */ BSTR *pAbsTime,
            /* [out][in] */ long *pRelCount,
            /* [out][in] */ long *pAbsCount) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetDeviceCapabilities( 
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ BSTR *pPlayMedia,
            /* [out][in] */ BSTR *pRecMedia,
            /* [out][in] */ BSTR *pRecQualityModes) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTransportSettings( 
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ BSTR *pPlayMode,
            /* [out][in] */ BSTR *pRecQualityMode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Stop( 
            /* [in] */ unsigned long InstanceID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Play( 
            /* [in] */ unsigned long InstanceID,
            /* [in] */ BSTR Speed) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Pause( 
            /* [in] */ unsigned long InstanceID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Record( 
            /* [in] */ unsigned long InstanceID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Seek( 
            /* [in] */ unsigned long InstanceID,
            /* [in] */ BSTR Unit,
            /* [in] */ BSTR Target) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ unsigned long InstanceID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Previous( 
            /* [in] */ unsigned long InstanceID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetPlayMode( 
            /* [in] */ unsigned long InstanceID,
            /* [in] */ BSTR NewPlayMode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetRecordQualityMode( 
            /* [in] */ unsigned long InstanceID,
            /* [in] */ BSTR NewRecordQualityMode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetCurrentTransportActions( 
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ BSTR *pActions) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUPnPService_AVTransport1Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUPnPService_AVTransport1 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUPnPService_AVTransport1 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUPnPService_AVTransport1 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUPnPService_AVTransport1 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUPnPService_AVTransport1 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUPnPService_AVTransport1 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUPnPService_AVTransport1 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TransportState )( 
            IUPnPService_AVTransport1 * This,
            /* [retval][out] */ BSTR *pTransportState);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TransportStatus )( 
            IUPnPService_AVTransport1 * This,
            /* [retval][out] */ BSTR *pTransportStatus);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PlaybackStorageMedium )( 
            IUPnPService_AVTransport1 * This,
            /* [retval][out] */ BSTR *pPlaybackStorageMedium);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RecordStorageMedium )( 
            IUPnPService_AVTransport1 * This,
            /* [retval][out] */ BSTR *pRecordStorageMedium);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PossiblePlaybackStorageMedia )( 
            IUPnPService_AVTransport1 * This,
            /* [retval][out] */ BSTR *pPossiblePlaybackStorageMedia);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PossibleRecordStorageMedia )( 
            IUPnPService_AVTransport1 * This,
            /* [retval][out] */ BSTR *pPossibleRecordStorageMedia);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentPlayMode )( 
            IUPnPService_AVTransport1 * This,
            /* [retval][out] */ BSTR *pCurrentPlayMode);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TransportPlaySpeed )( 
            IUPnPService_AVTransport1 * This,
            /* [retval][out] */ BSTR *pTransportPlaySpeed);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RecordMediumWriteStatus )( 
            IUPnPService_AVTransport1 * This,
            /* [retval][out] */ BSTR *pRecordMediumWriteStatus);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentRecordQualityMode )( 
            IUPnPService_AVTransport1 * This,
            /* [retval][out] */ BSTR *pCurrentRecordQualityMode);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PossibleRecordQualityModes )( 
            IUPnPService_AVTransport1 * This,
            /* [retval][out] */ BSTR *pPossibleRecordQualityModes);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumberOfTracks )( 
            IUPnPService_AVTransport1 * This,
            /* [retval][out] */ unsigned long *pNumberOfTracks);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentTrack )( 
            IUPnPService_AVTransport1 * This,
            /* [retval][out] */ unsigned long *pCurrentTrack);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentTrackDuration )( 
            IUPnPService_AVTransport1 * This,
            /* [retval][out] */ BSTR *pCurrentTrackDuration);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentMediaDuration )( 
            IUPnPService_AVTransport1 * This,
            /* [retval][out] */ BSTR *pCurrentMediaDuration);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentTrackMetaData )( 
            IUPnPService_AVTransport1 * This,
            /* [retval][out] */ BSTR *pCurrentTrackMetaData);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentTrackURI )( 
            IUPnPService_AVTransport1 * This,
            /* [retval][out] */ BSTR *pCurrentTrackURI);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AVTransportURI )( 
            IUPnPService_AVTransport1 * This,
            /* [retval][out] */ BSTR *pAVTransportURI);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AVTransportURIMetaData )( 
            IUPnPService_AVTransport1 * This,
            /* [retval][out] */ BSTR *pAVTransportURIMetaData);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NextAVTransportURI )( 
            IUPnPService_AVTransport1 * This,
            /* [retval][out] */ BSTR *pNextAVTransportURI);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NextAVTransportURIMetaData )( 
            IUPnPService_AVTransport1 * This,
            /* [retval][out] */ BSTR *pNextAVTransportURIMetaData);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RelativeTimePosition )( 
            IUPnPService_AVTransport1 * This,
            /* [retval][out] */ BSTR *pRelativeTimePosition);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AbsoluteTimePosition )( 
            IUPnPService_AVTransport1 * This,
            /* [retval][out] */ BSTR *pAbsoluteTimePosition);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RelativeCounterPosition )( 
            IUPnPService_AVTransport1 * This,
            /* [retval][out] */ long *pRelativeCounterPosition);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AbsoluteCounterPosition )( 
            IUPnPService_AVTransport1 * This,
            /* [retval][out] */ long *pAbsoluteCounterPosition);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentTransportActions )( 
            IUPnPService_AVTransport1 * This,
            /* [retval][out] */ BSTR *pCurrentTransportActions);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastChange )( 
            IUPnPService_AVTransport1 * This,
            /* [retval][out] */ BSTR *pLastChange);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_A_ARG_TYPE_SeekMode )( 
            IUPnPService_AVTransport1 * This,
            /* [retval][out] */ BSTR *pA_ARG_TYPE_SeekMode);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_A_ARG_TYPE_SeekTarget )( 
            IUPnPService_AVTransport1 * This,
            /* [retval][out] */ BSTR *pA_ARG_TYPE_SeekTarget);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_A_ARG_TYPE_InstanceID )( 
            IUPnPService_AVTransport1 * This,
            /* [retval][out] */ unsigned long *pA_ARG_TYPE_InstanceID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetAVTransportURI )( 
            IUPnPService_AVTransport1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [in] */ BSTR CurrentURI,
            /* [in] */ BSTR CurrentURIMetaData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetNextAVTransportURI )( 
            IUPnPService_AVTransport1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [in] */ BSTR NextURI,
            /* [in] */ BSTR NextURIMetaData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMediaInfo )( 
            IUPnPService_AVTransport1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ unsigned long *pNrTracks,
            /* [out][in] */ BSTR *pMediaDuration,
            /* [out][in] */ BSTR *pCurrentURI,
            /* [out][in] */ BSTR *pCurrentURIMetaData,
            /* [out][in] */ BSTR *pNextURI,
            /* [out][in] */ BSTR *pNextURIMetaData,
            /* [out][in] */ BSTR *pPlayMedium,
            /* [out][in] */ BSTR *pRecordMedium,
            /* [out][in] */ BSTR *pWriteStatus);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTransportInfo )( 
            IUPnPService_AVTransport1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ BSTR *pCurrentTransportState,
            /* [out][in] */ BSTR *pCurrentTransportStatus,
            /* [out][in] */ BSTR *pCurrentSpeed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPositionInfo )( 
            IUPnPService_AVTransport1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ unsigned long *pTrack,
            /* [out][in] */ BSTR *pTrackDuration,
            /* [out][in] */ BSTR *pTrackMetaData,
            /* [out][in] */ BSTR *pTrackURI,
            /* [out][in] */ BSTR *pRelTime,
            /* [out][in] */ BSTR *pAbsTime,
            /* [out][in] */ long *pRelCount,
            /* [out][in] */ long *pAbsCount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDeviceCapabilities )( 
            IUPnPService_AVTransport1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ BSTR *pPlayMedia,
            /* [out][in] */ BSTR *pRecMedia,
            /* [out][in] */ BSTR *pRecQualityModes);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTransportSettings )( 
            IUPnPService_AVTransport1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ BSTR *pPlayMode,
            /* [out][in] */ BSTR *pRecQualityMode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Stop )( 
            IUPnPService_AVTransport1 * This,
            /* [in] */ unsigned long InstanceID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Play )( 
            IUPnPService_AVTransport1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [in] */ BSTR Speed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Pause )( 
            IUPnPService_AVTransport1 * This,
            /* [in] */ unsigned long InstanceID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Record )( 
            IUPnPService_AVTransport1 * This,
            /* [in] */ unsigned long InstanceID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Seek )( 
            IUPnPService_AVTransport1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [in] */ BSTR Unit,
            /* [in] */ BSTR Target);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IUPnPService_AVTransport1 * This,
            /* [in] */ unsigned long InstanceID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Previous )( 
            IUPnPService_AVTransport1 * This,
            /* [in] */ unsigned long InstanceID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetPlayMode )( 
            IUPnPService_AVTransport1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [in] */ BSTR NewPlayMode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetRecordQualityMode )( 
            IUPnPService_AVTransport1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [in] */ BSTR NewRecordQualityMode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCurrentTransportActions )( 
            IUPnPService_AVTransport1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ BSTR *pActions);
        
        END_INTERFACE
    } IUPnPService_AVTransport1Vtbl;

    interface IUPnPService_AVTransport1
    {
        CONST_VTBL struct IUPnPService_AVTransport1Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUPnPService_AVTransport1_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUPnPService_AVTransport1_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUPnPService_AVTransport1_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUPnPService_AVTransport1_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUPnPService_AVTransport1_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUPnPService_AVTransport1_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUPnPService_AVTransport1_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUPnPService_AVTransport1_get_TransportState(This,pTransportState)	\
    ( (This)->lpVtbl -> get_TransportState(This,pTransportState) ) 

#define IUPnPService_AVTransport1_get_TransportStatus(This,pTransportStatus)	\
    ( (This)->lpVtbl -> get_TransportStatus(This,pTransportStatus) ) 

#define IUPnPService_AVTransport1_get_PlaybackStorageMedium(This,pPlaybackStorageMedium)	\
    ( (This)->lpVtbl -> get_PlaybackStorageMedium(This,pPlaybackStorageMedium) ) 

#define IUPnPService_AVTransport1_get_RecordStorageMedium(This,pRecordStorageMedium)	\
    ( (This)->lpVtbl -> get_RecordStorageMedium(This,pRecordStorageMedium) ) 

#define IUPnPService_AVTransport1_get_PossiblePlaybackStorageMedia(This,pPossiblePlaybackStorageMedia)	\
    ( (This)->lpVtbl -> get_PossiblePlaybackStorageMedia(This,pPossiblePlaybackStorageMedia) ) 

#define IUPnPService_AVTransport1_get_PossibleRecordStorageMedia(This,pPossibleRecordStorageMedia)	\
    ( (This)->lpVtbl -> get_PossibleRecordStorageMedia(This,pPossibleRecordStorageMedia) ) 

#define IUPnPService_AVTransport1_get_CurrentPlayMode(This,pCurrentPlayMode)	\
    ( (This)->lpVtbl -> get_CurrentPlayMode(This,pCurrentPlayMode) ) 

#define IUPnPService_AVTransport1_get_TransportPlaySpeed(This,pTransportPlaySpeed)	\
    ( (This)->lpVtbl -> get_TransportPlaySpeed(This,pTransportPlaySpeed) ) 

#define IUPnPService_AVTransport1_get_RecordMediumWriteStatus(This,pRecordMediumWriteStatus)	\
    ( (This)->lpVtbl -> get_RecordMediumWriteStatus(This,pRecordMediumWriteStatus) ) 

#define IUPnPService_AVTransport1_get_CurrentRecordQualityMode(This,pCurrentRecordQualityMode)	\
    ( (This)->lpVtbl -> get_CurrentRecordQualityMode(This,pCurrentRecordQualityMode) ) 

#define IUPnPService_AVTransport1_get_PossibleRecordQualityModes(This,pPossibleRecordQualityModes)	\
    ( (This)->lpVtbl -> get_PossibleRecordQualityModes(This,pPossibleRecordQualityModes) ) 

#define IUPnPService_AVTransport1_get_NumberOfTracks(This,pNumberOfTracks)	\
    ( (This)->lpVtbl -> get_NumberOfTracks(This,pNumberOfTracks) ) 

#define IUPnPService_AVTransport1_get_CurrentTrack(This,pCurrentTrack)	\
    ( (This)->lpVtbl -> get_CurrentTrack(This,pCurrentTrack) ) 

#define IUPnPService_AVTransport1_get_CurrentTrackDuration(This,pCurrentTrackDuration)	\
    ( (This)->lpVtbl -> get_CurrentTrackDuration(This,pCurrentTrackDuration) ) 

#define IUPnPService_AVTransport1_get_CurrentMediaDuration(This,pCurrentMediaDuration)	\
    ( (This)->lpVtbl -> get_CurrentMediaDuration(This,pCurrentMediaDuration) ) 

#define IUPnPService_AVTransport1_get_CurrentTrackMetaData(This,pCurrentTrackMetaData)	\
    ( (This)->lpVtbl -> get_CurrentTrackMetaData(This,pCurrentTrackMetaData) ) 

#define IUPnPService_AVTransport1_get_CurrentTrackURI(This,pCurrentTrackURI)	\
    ( (This)->lpVtbl -> get_CurrentTrackURI(This,pCurrentTrackURI) ) 

#define IUPnPService_AVTransport1_get_AVTransportURI(This,pAVTransportURI)	\
    ( (This)->lpVtbl -> get_AVTransportURI(This,pAVTransportURI) ) 

#define IUPnPService_AVTransport1_get_AVTransportURIMetaData(This,pAVTransportURIMetaData)	\
    ( (This)->lpVtbl -> get_AVTransportURIMetaData(This,pAVTransportURIMetaData) ) 

#define IUPnPService_AVTransport1_get_NextAVTransportURI(This,pNextAVTransportURI)	\
    ( (This)->lpVtbl -> get_NextAVTransportURI(This,pNextAVTransportURI) ) 

#define IUPnPService_AVTransport1_get_NextAVTransportURIMetaData(This,pNextAVTransportURIMetaData)	\
    ( (This)->lpVtbl -> get_NextAVTransportURIMetaData(This,pNextAVTransportURIMetaData) ) 

#define IUPnPService_AVTransport1_get_RelativeTimePosition(This,pRelativeTimePosition)	\
    ( (This)->lpVtbl -> get_RelativeTimePosition(This,pRelativeTimePosition) ) 

#define IUPnPService_AVTransport1_get_AbsoluteTimePosition(This,pAbsoluteTimePosition)	\
    ( (This)->lpVtbl -> get_AbsoluteTimePosition(This,pAbsoluteTimePosition) ) 

#define IUPnPService_AVTransport1_get_RelativeCounterPosition(This,pRelativeCounterPosition)	\
    ( (This)->lpVtbl -> get_RelativeCounterPosition(This,pRelativeCounterPosition) ) 

#define IUPnPService_AVTransport1_get_AbsoluteCounterPosition(This,pAbsoluteCounterPosition)	\
    ( (This)->lpVtbl -> get_AbsoluteCounterPosition(This,pAbsoluteCounterPosition) ) 

#define IUPnPService_AVTransport1_get_CurrentTransportActions(This,pCurrentTransportActions)	\
    ( (This)->lpVtbl -> get_CurrentTransportActions(This,pCurrentTransportActions) ) 

#define IUPnPService_AVTransport1_get_LastChange(This,pLastChange)	\
    ( (This)->lpVtbl -> get_LastChange(This,pLastChange) ) 

#define IUPnPService_AVTransport1_get_A_ARG_TYPE_SeekMode(This,pA_ARG_TYPE_SeekMode)	\
    ( (This)->lpVtbl -> get_A_ARG_TYPE_SeekMode(This,pA_ARG_TYPE_SeekMode) ) 

#define IUPnPService_AVTransport1_get_A_ARG_TYPE_SeekTarget(This,pA_ARG_TYPE_SeekTarget)	\
    ( (This)->lpVtbl -> get_A_ARG_TYPE_SeekTarget(This,pA_ARG_TYPE_SeekTarget) ) 

#define IUPnPService_AVTransport1_get_A_ARG_TYPE_InstanceID(This,pA_ARG_TYPE_InstanceID)	\
    ( (This)->lpVtbl -> get_A_ARG_TYPE_InstanceID(This,pA_ARG_TYPE_InstanceID) ) 

#define IUPnPService_AVTransport1_SetAVTransportURI(This,InstanceID,CurrentURI,CurrentURIMetaData)	\
    ( (This)->lpVtbl -> SetAVTransportURI(This,InstanceID,CurrentURI,CurrentURIMetaData) ) 

#define IUPnPService_AVTransport1_SetNextAVTransportURI(This,InstanceID,NextURI,NextURIMetaData)	\
    ( (This)->lpVtbl -> SetNextAVTransportURI(This,InstanceID,NextURI,NextURIMetaData) ) 

#define IUPnPService_AVTransport1_GetMediaInfo(This,InstanceID,pNrTracks,pMediaDuration,pCurrentURI,pCurrentURIMetaData,pNextURI,pNextURIMetaData,pPlayMedium,pRecordMedium,pWriteStatus)	\
    ( (This)->lpVtbl -> GetMediaInfo(This,InstanceID,pNrTracks,pMediaDuration,pCurrentURI,pCurrentURIMetaData,pNextURI,pNextURIMetaData,pPlayMedium,pRecordMedium,pWriteStatus) ) 

#define IUPnPService_AVTransport1_GetTransportInfo(This,InstanceID,pCurrentTransportState,pCurrentTransportStatus,pCurrentSpeed)	\
    ( (This)->lpVtbl -> GetTransportInfo(This,InstanceID,pCurrentTransportState,pCurrentTransportStatus,pCurrentSpeed) ) 

#define IUPnPService_AVTransport1_GetPositionInfo(This,InstanceID,pTrack,pTrackDuration,pTrackMetaData,pTrackURI,pRelTime,pAbsTime,pRelCount,pAbsCount)	\
    ( (This)->lpVtbl -> GetPositionInfo(This,InstanceID,pTrack,pTrackDuration,pTrackMetaData,pTrackURI,pRelTime,pAbsTime,pRelCount,pAbsCount) ) 

#define IUPnPService_AVTransport1_GetDeviceCapabilities(This,InstanceID,pPlayMedia,pRecMedia,pRecQualityModes)	\
    ( (This)->lpVtbl -> GetDeviceCapabilities(This,InstanceID,pPlayMedia,pRecMedia,pRecQualityModes) ) 

#define IUPnPService_AVTransport1_GetTransportSettings(This,InstanceID,pPlayMode,pRecQualityMode)	\
    ( (This)->lpVtbl -> GetTransportSettings(This,InstanceID,pPlayMode,pRecQualityMode) ) 

#define IUPnPService_AVTransport1_Stop(This,InstanceID)	\
    ( (This)->lpVtbl -> Stop(This,InstanceID) ) 

#define IUPnPService_AVTransport1_Play(This,InstanceID,Speed)	\
    ( (This)->lpVtbl -> Play(This,InstanceID,Speed) ) 

#define IUPnPService_AVTransport1_Pause(This,InstanceID)	\
    ( (This)->lpVtbl -> Pause(This,InstanceID) ) 

#define IUPnPService_AVTransport1_Record(This,InstanceID)	\
    ( (This)->lpVtbl -> Record(This,InstanceID) ) 

#define IUPnPService_AVTransport1_Seek(This,InstanceID,Unit,Target)	\
    ( (This)->lpVtbl -> Seek(This,InstanceID,Unit,Target) ) 

#define IUPnPService_AVTransport1_Next(This,InstanceID)	\
    ( (This)->lpVtbl -> Next(This,InstanceID) ) 

#define IUPnPService_AVTransport1_Previous(This,InstanceID)	\
    ( (This)->lpVtbl -> Previous(This,InstanceID) ) 

#define IUPnPService_AVTransport1_SetPlayMode(This,InstanceID,NewPlayMode)	\
    ( (This)->lpVtbl -> SetPlayMode(This,InstanceID,NewPlayMode) ) 

#define IUPnPService_AVTransport1_SetRecordQualityMode(This,InstanceID,NewRecordQualityMode)	\
    ( (This)->lpVtbl -> SetRecordQualityMode(This,InstanceID,NewRecordQualityMode) ) 

#define IUPnPService_AVTransport1_GetCurrentTransportActions(This,InstanceID,pActions)	\
    ( (This)->lpVtbl -> GetCurrentTransportActions(This,InstanceID,pActions) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUPnPService_AVTransport1_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_av_dcp_0000_0002 */
/* [local] */ 

typedef /* [v1_enum] */ 
enum RENDERINGCONTROL1_DISPIDS
    {	DISPID_PRESETNAMELIST	= 1,
	DISPID_LASTCHANGE_RC	= ( DISPID_PRESETNAMELIST + 1 ) ,
	DISPID_BRIGHTNESS	= ( DISPID_LASTCHANGE_RC + 1 ) ,
	DISPID_CONTRAST	= ( DISPID_BRIGHTNESS + 1 ) ,
	DISPID_SHARPNESS	= ( DISPID_CONTRAST + 1 ) ,
	DISPID_REDVIDEOGAIN	= ( DISPID_SHARPNESS + 1 ) ,
	DISPID_GREENVIDEOGAIN	= ( DISPID_REDVIDEOGAIN + 1 ) ,
	DISPID_BLUEVIDEOGAIN	= ( DISPID_GREENVIDEOGAIN + 1 ) ,
	DISPID_REDVIDEOBLACKLEVEL	= ( DISPID_BLUEVIDEOGAIN + 1 ) ,
	DISPID_GREENVIDEOBLACKLEVEL	= ( DISPID_REDVIDEOBLACKLEVEL + 1 ) ,
	DISPID_BLUEVIDEOBLACKLEVEL	= ( DISPID_GREENVIDEOBLACKLEVEL + 1 ) ,
	DISPID_COLORTEMPERATURE	= ( DISPID_BLUEVIDEOBLACKLEVEL + 1 ) ,
	DISPID_HORIZONTALKEYSTONE	= ( DISPID_COLORTEMPERATURE + 1 ) ,
	DISPID_VERTICALKEYSTONE	= ( DISPID_HORIZONTALKEYSTONE + 1 ) ,
	DISPID_MUTE	= ( DISPID_VERTICALKEYSTONE + 1 ) ,
	DISPID_VOLUME	= ( DISPID_MUTE + 1 ) ,
	DISPID_VOLUMEDB	= ( DISPID_VOLUME + 1 ) ,
	DISPID_LOUDNESS	= ( DISPID_VOLUMEDB + 1 ) ,
	DISPID_A_ARG_TYPE_CHANNEL	= ( DISPID_LOUDNESS + 1 ) ,
	DISPID_A_ARG_TYPE_INSTANCEID_RC	= ( DISPID_A_ARG_TYPE_CHANNEL + 1 ) ,
	DISPID_A_ARG_TYPE_PRESETNAME	= ( DISPID_A_ARG_TYPE_INSTANCEID_RC + 1 ) ,
	DISPID_LISTPRESETS	= ( DISPID_A_ARG_TYPE_PRESETNAME + 1 ) ,
	DISPID_SELECTPRESET	= ( DISPID_LISTPRESETS + 1 ) ,
	DISPID_GETBRIGHTNESS	= ( DISPID_SELECTPRESET + 1 ) ,
	DISPID_SETBRIGHTNESS	= ( DISPID_GETBRIGHTNESS + 1 ) ,
	DISPID_GETCONTRAST	= ( DISPID_SETBRIGHTNESS + 1 ) ,
	DISPID_SETCONTRAST	= ( DISPID_GETCONTRAST + 1 ) ,
	DISPID_GETSHARPNESS	= ( DISPID_SETCONTRAST + 1 ) ,
	DISPID_SETSHARPNESS	= ( DISPID_GETSHARPNESS + 1 ) ,
	DISPID_GETREDVIDEOGAIN	= ( DISPID_SETSHARPNESS + 1 ) ,
	DISPID_SETREDVIDEOGAIN	= ( DISPID_GETREDVIDEOGAIN + 1 ) ,
	DISPID_GETGREENVIDEOGAIN	= ( DISPID_SETREDVIDEOGAIN + 1 ) ,
	DISPID_SETGREENVIDEOGAIN	= ( DISPID_GETGREENVIDEOGAIN + 1 ) ,
	DISPID_GETBLUEVIDEOGAIN	= ( DISPID_SETGREENVIDEOGAIN + 1 ) ,
	DISPID_SETBLUEVIDEOGAIN	= ( DISPID_GETBLUEVIDEOGAIN + 1 ) ,
	DISPID_GETREDVIDEOBLACKLEVEL	= ( DISPID_SETBLUEVIDEOGAIN + 1 ) ,
	DISPID_SETREDVIDEOBLACKLEVEL	= ( DISPID_GETREDVIDEOBLACKLEVEL + 1 ) ,
	DISPID_GETGREENVIDEOBLACKLEVEL	= ( DISPID_SETREDVIDEOBLACKLEVEL + 1 ) ,
	DISPID_SETGREENVIDEOBLACKLEVEL	= ( DISPID_GETGREENVIDEOBLACKLEVEL + 1 ) ,
	DISPID_GETBLUEVIDEOBLACKLEVEL	= ( DISPID_SETGREENVIDEOBLACKLEVEL + 1 ) ,
	DISPID_SETBLUEVIDEOBLACKLEVEL	= ( DISPID_GETBLUEVIDEOBLACKLEVEL + 1 ) ,
	DISPID_GETCOLORTEMPERATURE	= ( DISPID_SETBLUEVIDEOBLACKLEVEL + 1 ) ,
	DISPID_SETCOLORTEMPERATURE	= ( DISPID_GETCOLORTEMPERATURE + 1 ) ,
	DISPID_GETHORIZONTALKEYSTONE	= ( DISPID_SETCOLORTEMPERATURE + 1 ) ,
	DISPID_SETHORIZONTALKEYSTONE	= ( DISPID_GETHORIZONTALKEYSTONE + 1 ) ,
	DISPID_GETVERTICALKEYSTONE	= ( DISPID_SETHORIZONTALKEYSTONE + 1 ) ,
	DISPID_SETVERTICALKEYSTONE	= ( DISPID_GETVERTICALKEYSTONE + 1 ) ,
	DISPID_GETMUTE	= ( DISPID_SETVERTICALKEYSTONE + 1 ) ,
	DISPID_SETMUTE	= ( DISPID_GETMUTE + 1 ) ,
	DISPID_GETVOLUME	= ( DISPID_SETMUTE + 1 ) ,
	DISPID_SETVOLUME	= ( DISPID_GETVOLUME + 1 ) ,
	DISPID_GETVOLUMEDB	= ( DISPID_SETVOLUME + 1 ) ,
	DISPID_SETVOLUMEDB	= ( DISPID_GETVOLUMEDB + 1 ) ,
	DISPID_GETVOLUMEDBRANGE	= ( DISPID_SETVOLUMEDB + 1 ) ,
	DISPID_GETLOUDNESS	= ( DISPID_GETVOLUMEDBRANGE + 1 ) ,
	DISPID_SETLOUDNESS	= ( DISPID_GETLOUDNESS + 1 ) 
    } 	RENDERINGCONTROL1_DISPIDS;



extern RPC_IF_HANDLE __MIDL_itf_av_dcp_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_av_dcp_0000_0002_v0_0_s_ifspec;

#ifndef __IUPnPService_RenderingControl1_INTERFACE_DEFINED__
#define __IUPnPService_RenderingControl1_INTERFACE_DEFINED__

/* interface IUPnPService_RenderingControl1 */
/* [object][unique][helpstring][oleautomation][uuid] */ 


EXTERN_C const IID IID_IUPnPService_RenderingControl1;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0298b219-dd69-451d-bb93-2923839c6dc7")
    IUPnPService_RenderingControl1 : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PresetNameList( 
            /* [retval][out] */ BSTR *pPresetNameList) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LastChange( 
            /* [retval][out] */ BSTR *pLastChange) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Brightness( 
            /* [retval][out] */ unsigned short *pBrightness) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Contrast( 
            /* [retval][out] */ unsigned short *pContrast) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Sharpness( 
            /* [retval][out] */ unsigned short *pSharpness) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RedVideoGain( 
            /* [retval][out] */ unsigned short *pRedVideoGain) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GreenVideoGain( 
            /* [retval][out] */ unsigned short *pGreenVideoGain) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BlueVideoGain( 
            /* [retval][out] */ unsigned short *pBlueVideoGain) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RedVideoBlackLevel( 
            /* [retval][out] */ unsigned short *pRedVideoBlackLevel) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GreenVideoBlackLevel( 
            /* [retval][out] */ unsigned short *pGreenVideoBlackLevel) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BlueVideoBlackLevel( 
            /* [retval][out] */ unsigned short *pBlueVideoBlackLevel) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ColorTemperature( 
            /* [retval][out] */ unsigned short *pColorTemperature) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HorizontalKeystone( 
            /* [retval][out] */ short *pHorizontalKeystone) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VerticalKeystone( 
            /* [retval][out] */ short *pVerticalKeystone) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Mute( 
            /* [retval][out] */ VARIANT_BOOL *pMute) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Volume( 
            /* [retval][out] */ unsigned short *pVolume) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VolumeDB( 
            /* [retval][out] */ short *pVolumeDB) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Loudness( 
            /* [retval][out] */ VARIANT_BOOL *pLoudness) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_A_ARG_TYPE_Channel( 
            /* [retval][out] */ BSTR *pA_ARG_TYPE_Channel) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_A_ARG_TYPE_InstanceID( 
            /* [retval][out] */ unsigned long *pA_ARG_TYPE_InstanceID) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_A_ARG_TYPE_PresetName( 
            /* [retval][out] */ BSTR *pA_ARG_TYPE_PresetName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ListPresets( 
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ BSTR *pCurrentPresetNameList) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SelectPreset( 
            /* [in] */ unsigned long InstanceID,
            /* [in] */ BSTR PresetName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetBrightness( 
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ unsigned short *pCurrentBrightness) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetBrightness( 
            /* [in] */ unsigned long InstanceID,
            /* [in] */ unsigned short DesiredBrightness) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetContrast( 
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ unsigned short *pCurrentContrast) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetContrast( 
            /* [in] */ unsigned long InstanceID,
            /* [in] */ unsigned short DesiredContrast) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSharpness( 
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ unsigned short *pCurrentSharpness) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetSharpness( 
            /* [in] */ unsigned long InstanceID,
            /* [in] */ unsigned short DesiredSharpness) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetRedVideoGain( 
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ unsigned short *pCurrentRedVideoGain) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetRedVideoGain( 
            /* [in] */ unsigned long InstanceID,
            /* [in] */ unsigned short DesiredRedVideoGain) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetGreenVideoGain( 
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ unsigned short *pCurrentGreenVideoGain) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetGreenVideoGain( 
            /* [in] */ unsigned long InstanceID,
            /* [in] */ unsigned short DesiredGreenVideoGain) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetBlueVideoGain( 
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ unsigned short *pCurrentBlueVideoGain) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetBlueVideoGain( 
            /* [in] */ unsigned long InstanceID,
            /* [in] */ unsigned short DesiredBlueVideoGain) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetRedVideoBlackLevel( 
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ unsigned short *pCurrentRedVideoBlackLevel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetRedVideoBlackLevel( 
            /* [in] */ unsigned long InstanceID,
            /* [in] */ unsigned short DesiredRedVideoBlackLevel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetGreenVideoBlackLevel( 
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ unsigned short *pCurrentGreenVideoBlackLevel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetGreenVideoBlackLevel( 
            /* [in] */ unsigned long InstanceID,
            /* [in] */ unsigned short DesiredGreenVideoBlackLevel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetBlueVideoBlackLevel( 
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ unsigned short *pCurrentBlueVideoBlackLevel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetBlueVideoBlackLevel( 
            /* [in] */ unsigned long InstanceID,
            /* [in] */ unsigned short DesiredBlueVideoBlackLevel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetColorTemperature( 
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ unsigned short *pCurrentColorTemperature) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetColorTemperature( 
            /* [in] */ unsigned long InstanceID,
            /* [in] */ unsigned short DesiredColorTemperature) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetHorizontalKeystone( 
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ short *pCurrentHorizontalKeystone) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetHorizontalKeystone( 
            /* [in] */ unsigned long InstanceID,
            /* [in] */ short DesiredHorizontalKeystone) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetVerticalKeystone( 
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ short *pCurrentVerticalKeystone) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetVerticalKeystone( 
            /* [in] */ unsigned long InstanceID,
            /* [in] */ short DesiredVerticalKeystone) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMute( 
            /* [in] */ unsigned long InstanceID,
            /* [in] */ BSTR Channel,
            /* [out][in] */ VARIANT_BOOL *pCurrentMute) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetMute( 
            /* [in] */ unsigned long InstanceID,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL DesiredMute) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetVolume( 
            /* [in] */ unsigned long InstanceID,
            /* [in] */ BSTR Channel,
            /* [out][in] */ unsigned short *pCurrentVolume) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetVolume( 
            /* [in] */ unsigned long InstanceID,
            /* [in] */ BSTR Channel,
            /* [in] */ unsigned short DesiredVolume) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetVolumeDB( 
            /* [in] */ unsigned long InstanceID,
            /* [in] */ BSTR Channel,
            /* [out][in] */ short *pCurrentVolume) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetVolumeDB( 
            /* [in] */ unsigned long InstanceID,
            /* [in] */ BSTR Channel,
            /* [in] */ short DesiredVolume) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetVolumeDBRange( 
            /* [in] */ unsigned long InstanceID,
            /* [in] */ BSTR Channel,
            /* [out][in] */ short *pMinValue,
            /* [out][in] */ short *pMaxValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetLoudness( 
            /* [in] */ unsigned long InstanceID,
            /* [in] */ BSTR Channel,
            /* [out][in] */ VARIANT_BOOL *pCurrentLoudness) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetLoudness( 
            /* [in] */ unsigned long InstanceID,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL DesiredLoudness) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUPnPService_RenderingControl1Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUPnPService_RenderingControl1 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUPnPService_RenderingControl1 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUPnPService_RenderingControl1 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PresetNameList )( 
            IUPnPService_RenderingControl1 * This,
            /* [retval][out] */ BSTR *pPresetNameList);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastChange )( 
            IUPnPService_RenderingControl1 * This,
            /* [retval][out] */ BSTR *pLastChange);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Brightness )( 
            IUPnPService_RenderingControl1 * This,
            /* [retval][out] */ unsigned short *pBrightness);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Contrast )( 
            IUPnPService_RenderingControl1 * This,
            /* [retval][out] */ unsigned short *pContrast);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Sharpness )( 
            IUPnPService_RenderingControl1 * This,
            /* [retval][out] */ unsigned short *pSharpness);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedVideoGain )( 
            IUPnPService_RenderingControl1 * This,
            /* [retval][out] */ unsigned short *pRedVideoGain);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GreenVideoGain )( 
            IUPnPService_RenderingControl1 * This,
            /* [retval][out] */ unsigned short *pGreenVideoGain);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BlueVideoGain )( 
            IUPnPService_RenderingControl1 * This,
            /* [retval][out] */ unsigned short *pBlueVideoGain);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedVideoBlackLevel )( 
            IUPnPService_RenderingControl1 * This,
            /* [retval][out] */ unsigned short *pRedVideoBlackLevel);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GreenVideoBlackLevel )( 
            IUPnPService_RenderingControl1 * This,
            /* [retval][out] */ unsigned short *pGreenVideoBlackLevel);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BlueVideoBlackLevel )( 
            IUPnPService_RenderingControl1 * This,
            /* [retval][out] */ unsigned short *pBlueVideoBlackLevel);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColorTemperature )( 
            IUPnPService_RenderingControl1 * This,
            /* [retval][out] */ unsigned short *pColorTemperature);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HorizontalKeystone )( 
            IUPnPService_RenderingControl1 * This,
            /* [retval][out] */ short *pHorizontalKeystone);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VerticalKeystone )( 
            IUPnPService_RenderingControl1 * This,
            /* [retval][out] */ short *pVerticalKeystone);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mute )( 
            IUPnPService_RenderingControl1 * This,
            /* [retval][out] */ VARIANT_BOOL *pMute);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Volume )( 
            IUPnPService_RenderingControl1 * This,
            /* [retval][out] */ unsigned short *pVolume);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VolumeDB )( 
            IUPnPService_RenderingControl1 * This,
            /* [retval][out] */ short *pVolumeDB);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Loudness )( 
            IUPnPService_RenderingControl1 * This,
            /* [retval][out] */ VARIANT_BOOL *pLoudness);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_A_ARG_TYPE_Channel )( 
            IUPnPService_RenderingControl1 * This,
            /* [retval][out] */ BSTR *pA_ARG_TYPE_Channel);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_A_ARG_TYPE_InstanceID )( 
            IUPnPService_RenderingControl1 * This,
            /* [retval][out] */ unsigned long *pA_ARG_TYPE_InstanceID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_A_ARG_TYPE_PresetName )( 
            IUPnPService_RenderingControl1 * This,
            /* [retval][out] */ BSTR *pA_ARG_TYPE_PresetName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ListPresets )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ BSTR *pCurrentPresetNameList);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SelectPreset )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [in] */ BSTR PresetName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetBrightness )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ unsigned short *pCurrentBrightness);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetBrightness )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [in] */ unsigned short DesiredBrightness);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetContrast )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ unsigned short *pCurrentContrast);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetContrast )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [in] */ unsigned short DesiredContrast);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSharpness )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ unsigned short *pCurrentSharpness);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetSharpness )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [in] */ unsigned short DesiredSharpness);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRedVideoGain )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ unsigned short *pCurrentRedVideoGain);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetRedVideoGain )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [in] */ unsigned short DesiredRedVideoGain);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetGreenVideoGain )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ unsigned short *pCurrentGreenVideoGain);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetGreenVideoGain )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [in] */ unsigned short DesiredGreenVideoGain);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetBlueVideoGain )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ unsigned short *pCurrentBlueVideoGain);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetBlueVideoGain )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [in] */ unsigned short DesiredBlueVideoGain);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRedVideoBlackLevel )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ unsigned short *pCurrentRedVideoBlackLevel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetRedVideoBlackLevel )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [in] */ unsigned short DesiredRedVideoBlackLevel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetGreenVideoBlackLevel )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ unsigned short *pCurrentGreenVideoBlackLevel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetGreenVideoBlackLevel )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [in] */ unsigned short DesiredGreenVideoBlackLevel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetBlueVideoBlackLevel )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ unsigned short *pCurrentBlueVideoBlackLevel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetBlueVideoBlackLevel )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [in] */ unsigned short DesiredBlueVideoBlackLevel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetColorTemperature )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ unsigned short *pCurrentColorTemperature);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetColorTemperature )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [in] */ unsigned short DesiredColorTemperature);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetHorizontalKeystone )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ short *pCurrentHorizontalKeystone);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetHorizontalKeystone )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [in] */ short DesiredHorizontalKeystone);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetVerticalKeystone )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [out][in] */ short *pCurrentVerticalKeystone);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetVerticalKeystone )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [in] */ short DesiredVerticalKeystone);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMute )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [in] */ BSTR Channel,
            /* [out][in] */ VARIANT_BOOL *pCurrentMute);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetMute )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL DesiredMute);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetVolume )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [in] */ BSTR Channel,
            /* [out][in] */ unsigned short *pCurrentVolume);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetVolume )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [in] */ BSTR Channel,
            /* [in] */ unsigned short DesiredVolume);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetVolumeDB )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [in] */ BSTR Channel,
            /* [out][in] */ short *pCurrentVolume);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetVolumeDB )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [in] */ BSTR Channel,
            /* [in] */ short DesiredVolume);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetVolumeDBRange )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [in] */ BSTR Channel,
            /* [out][in] */ short *pMinValue,
            /* [out][in] */ short *pMaxValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLoudness )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [in] */ BSTR Channel,
            /* [out][in] */ VARIANT_BOOL *pCurrentLoudness);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetLoudness )( 
            IUPnPService_RenderingControl1 * This,
            /* [in] */ unsigned long InstanceID,
            /* [in] */ BSTR Channel,
            /* [in] */ VARIANT_BOOL DesiredLoudness);
        
        END_INTERFACE
    } IUPnPService_RenderingControl1Vtbl;

    interface IUPnPService_RenderingControl1
    {
        CONST_VTBL struct IUPnPService_RenderingControl1Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUPnPService_RenderingControl1_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUPnPService_RenderingControl1_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUPnPService_RenderingControl1_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUPnPService_RenderingControl1_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUPnPService_RenderingControl1_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUPnPService_RenderingControl1_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUPnPService_RenderingControl1_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUPnPService_RenderingControl1_get_PresetNameList(This,pPresetNameList)	\
    ( (This)->lpVtbl -> get_PresetNameList(This,pPresetNameList) ) 

#define IUPnPService_RenderingControl1_get_LastChange(This,pLastChange)	\
    ( (This)->lpVtbl -> get_LastChange(This,pLastChange) ) 

#define IUPnPService_RenderingControl1_get_Brightness(This,pBrightness)	\
    ( (This)->lpVtbl -> get_Brightness(This,pBrightness) ) 

#define IUPnPService_RenderingControl1_get_Contrast(This,pContrast)	\
    ( (This)->lpVtbl -> get_Contrast(This,pContrast) ) 

#define IUPnPService_RenderingControl1_get_Sharpness(This,pSharpness)	\
    ( (This)->lpVtbl -> get_Sharpness(This,pSharpness) ) 

#define IUPnPService_RenderingControl1_get_RedVideoGain(This,pRedVideoGain)	\
    ( (This)->lpVtbl -> get_RedVideoGain(This,pRedVideoGain) ) 

#define IUPnPService_RenderingControl1_get_GreenVideoGain(This,pGreenVideoGain)	\
    ( (This)->lpVtbl -> get_GreenVideoGain(This,pGreenVideoGain) ) 

#define IUPnPService_RenderingControl1_get_BlueVideoGain(This,pBlueVideoGain)	\
    ( (This)->lpVtbl -> get_BlueVideoGain(This,pBlueVideoGain) ) 

#define IUPnPService_RenderingControl1_get_RedVideoBlackLevel(This,pRedVideoBlackLevel)	\
    ( (This)->lpVtbl -> get_RedVideoBlackLevel(This,pRedVideoBlackLevel) ) 

#define IUPnPService_RenderingControl1_get_GreenVideoBlackLevel(This,pGreenVideoBlackLevel)	\
    ( (This)->lpVtbl -> get_GreenVideoBlackLevel(This,pGreenVideoBlackLevel) ) 

#define IUPnPService_RenderingControl1_get_BlueVideoBlackLevel(This,pBlueVideoBlackLevel)	\
    ( (This)->lpVtbl -> get_BlueVideoBlackLevel(This,pBlueVideoBlackLevel) ) 

#define IUPnPService_RenderingControl1_get_ColorTemperature(This,pColorTemperature)	\
    ( (This)->lpVtbl -> get_ColorTemperature(This,pColorTemperature) ) 

#define IUPnPService_RenderingControl1_get_HorizontalKeystone(This,pHorizontalKeystone)	\
    ( (This)->lpVtbl -> get_HorizontalKeystone(This,pHorizontalKeystone) ) 

#define IUPnPService_RenderingControl1_get_VerticalKeystone(This,pVerticalKeystone)	\
    ( (This)->lpVtbl -> get_VerticalKeystone(This,pVerticalKeystone) ) 

#define IUPnPService_RenderingControl1_get_Mute(This,pMute)	\
    ( (This)->lpVtbl -> get_Mute(This,pMute) ) 

#define IUPnPService_RenderingControl1_get_Volume(This,pVolume)	\
    ( (This)->lpVtbl -> get_Volume(This,pVolume) ) 

#define IUPnPService_RenderingControl1_get_VolumeDB(This,pVolumeDB)	\
    ( (This)->lpVtbl -> get_VolumeDB(This,pVolumeDB) ) 

#define IUPnPService_RenderingControl1_get_Loudness(This,pLoudness)	\
    ( (This)->lpVtbl -> get_Loudness(This,pLoudness) ) 

#define IUPnPService_RenderingControl1_get_A_ARG_TYPE_Channel(This,pA_ARG_TYPE_Channel)	\
    ( (This)->lpVtbl -> get_A_ARG_TYPE_Channel(This,pA_ARG_TYPE_Channel) ) 

#define IUPnPService_RenderingControl1_get_A_ARG_TYPE_InstanceID(This,pA_ARG_TYPE_InstanceID)	\
    ( (This)->lpVtbl -> get_A_ARG_TYPE_InstanceID(This,pA_ARG_TYPE_InstanceID) ) 

#define IUPnPService_RenderingControl1_get_A_ARG_TYPE_PresetName(This,pA_ARG_TYPE_PresetName)	\
    ( (This)->lpVtbl -> get_A_ARG_TYPE_PresetName(This,pA_ARG_TYPE_PresetName) ) 

#define IUPnPService_RenderingControl1_ListPresets(This,InstanceID,pCurrentPresetNameList)	\
    ( (This)->lpVtbl -> ListPresets(This,InstanceID,pCurrentPresetNameList) ) 

#define IUPnPService_RenderingControl1_SelectPreset(This,InstanceID,PresetName)	\
    ( (This)->lpVtbl -> SelectPreset(This,InstanceID,PresetName) ) 

#define IUPnPService_RenderingControl1_GetBrightness(This,InstanceID,pCurrentBrightness)	\
    ( (This)->lpVtbl -> GetBrightness(This,InstanceID,pCurrentBrightness) ) 

#define IUPnPService_RenderingControl1_SetBrightness(This,InstanceID,DesiredBrightness)	\
    ( (This)->lpVtbl -> SetBrightness(This,InstanceID,DesiredBrightness) ) 

#define IUPnPService_RenderingControl1_GetContrast(This,InstanceID,pCurrentContrast)	\
    ( (This)->lpVtbl -> GetContrast(This,InstanceID,pCurrentContrast) ) 

#define IUPnPService_RenderingControl1_SetContrast(This,InstanceID,DesiredContrast)	\
    ( (This)->lpVtbl -> SetContrast(This,InstanceID,DesiredContrast) ) 

#define IUPnPService_RenderingControl1_GetSharpness(This,InstanceID,pCurrentSharpness)	\
    ( (This)->lpVtbl -> GetSharpness(This,InstanceID,pCurrentSharpness) ) 

#define IUPnPService_RenderingControl1_SetSharpness(This,InstanceID,DesiredSharpness)	\
    ( (This)->lpVtbl -> SetSharpness(This,InstanceID,DesiredSharpness) ) 

#define IUPnPService_RenderingControl1_GetRedVideoGain(This,InstanceID,pCurrentRedVideoGain)	\
    ( (This)->lpVtbl -> GetRedVideoGain(This,InstanceID,pCurrentRedVideoGain) ) 

#define IUPnPService_RenderingControl1_SetRedVideoGain(This,InstanceID,DesiredRedVideoGain)	\
    ( (This)->lpVtbl -> SetRedVideoGain(This,InstanceID,DesiredRedVideoGain) ) 

#define IUPnPService_RenderingControl1_GetGreenVideoGain(This,InstanceID,pCurrentGreenVideoGain)	\
    ( (This)->lpVtbl -> GetGreenVideoGain(This,InstanceID,pCurrentGreenVideoGain) ) 

#define IUPnPService_RenderingControl1_SetGreenVideoGain(This,InstanceID,DesiredGreenVideoGain)	\
    ( (This)->lpVtbl -> SetGreenVideoGain(This,InstanceID,DesiredGreenVideoGain) ) 

#define IUPnPService_RenderingControl1_GetBlueVideoGain(This,InstanceID,pCurrentBlueVideoGain)	\
    ( (This)->lpVtbl -> GetBlueVideoGain(This,InstanceID,pCurrentBlueVideoGain) ) 

#define IUPnPService_RenderingControl1_SetBlueVideoGain(This,InstanceID,DesiredBlueVideoGain)	\
    ( (This)->lpVtbl -> SetBlueVideoGain(This,InstanceID,DesiredBlueVideoGain) ) 

#define IUPnPService_RenderingControl1_GetRedVideoBlackLevel(This,InstanceID,pCurrentRedVideoBlackLevel)	\
    ( (This)->lpVtbl -> GetRedVideoBlackLevel(This,InstanceID,pCurrentRedVideoBlackLevel) ) 

#define IUPnPService_RenderingControl1_SetRedVideoBlackLevel(This,InstanceID,DesiredRedVideoBlackLevel)	\
    ( (This)->lpVtbl -> SetRedVideoBlackLevel(This,InstanceID,DesiredRedVideoBlackLevel) ) 

#define IUPnPService_RenderingControl1_GetGreenVideoBlackLevel(This,InstanceID,pCurrentGreenVideoBlackLevel)	\
    ( (This)->lpVtbl -> GetGreenVideoBlackLevel(This,InstanceID,pCurrentGreenVideoBlackLevel) ) 

#define IUPnPService_RenderingControl1_SetGreenVideoBlackLevel(This,InstanceID,DesiredGreenVideoBlackLevel)	\
    ( (This)->lpVtbl -> SetGreenVideoBlackLevel(This,InstanceID,DesiredGreenVideoBlackLevel) ) 

#define IUPnPService_RenderingControl1_GetBlueVideoBlackLevel(This,InstanceID,pCurrentBlueVideoBlackLevel)	\
    ( (This)->lpVtbl -> GetBlueVideoBlackLevel(This,InstanceID,pCurrentBlueVideoBlackLevel) ) 

#define IUPnPService_RenderingControl1_SetBlueVideoBlackLevel(This,InstanceID,DesiredBlueVideoBlackLevel)	\
    ( (This)->lpVtbl -> SetBlueVideoBlackLevel(This,InstanceID,DesiredBlueVideoBlackLevel) ) 

#define IUPnPService_RenderingControl1_GetColorTemperature(This,InstanceID,pCurrentColorTemperature)	\
    ( (This)->lpVtbl -> GetColorTemperature(This,InstanceID,pCurrentColorTemperature) ) 

#define IUPnPService_RenderingControl1_SetColorTemperature(This,InstanceID,DesiredColorTemperature)	\
    ( (This)->lpVtbl -> SetColorTemperature(This,InstanceID,DesiredColorTemperature) ) 

#define IUPnPService_RenderingControl1_GetHorizontalKeystone(This,InstanceID,pCurrentHorizontalKeystone)	\
    ( (This)->lpVtbl -> GetHorizontalKeystone(This,InstanceID,pCurrentHorizontalKeystone) ) 

#define IUPnPService_RenderingControl1_SetHorizontalKeystone(This,InstanceID,DesiredHorizontalKeystone)	\
    ( (This)->lpVtbl -> SetHorizontalKeystone(This,InstanceID,DesiredHorizontalKeystone) ) 

#define IUPnPService_RenderingControl1_GetVerticalKeystone(This,InstanceID,pCurrentVerticalKeystone)	\
    ( (This)->lpVtbl -> GetVerticalKeystone(This,InstanceID,pCurrentVerticalKeystone) ) 

#define IUPnPService_RenderingControl1_SetVerticalKeystone(This,InstanceID,DesiredVerticalKeystone)	\
    ( (This)->lpVtbl -> SetVerticalKeystone(This,InstanceID,DesiredVerticalKeystone) ) 

#define IUPnPService_RenderingControl1_GetMute(This,InstanceID,Channel,pCurrentMute)	\
    ( (This)->lpVtbl -> GetMute(This,InstanceID,Channel,pCurrentMute) ) 

#define IUPnPService_RenderingControl1_SetMute(This,InstanceID,Channel,DesiredMute)	\
    ( (This)->lpVtbl -> SetMute(This,InstanceID,Channel,DesiredMute) ) 

#define IUPnPService_RenderingControl1_GetVolume(This,InstanceID,Channel,pCurrentVolume)	\
    ( (This)->lpVtbl -> GetVolume(This,InstanceID,Channel,pCurrentVolume) ) 

#define IUPnPService_RenderingControl1_SetVolume(This,InstanceID,Channel,DesiredVolume)	\
    ( (This)->lpVtbl -> SetVolume(This,InstanceID,Channel,DesiredVolume) ) 

#define IUPnPService_RenderingControl1_GetVolumeDB(This,InstanceID,Channel,pCurrentVolume)	\
    ( (This)->lpVtbl -> GetVolumeDB(This,InstanceID,Channel,pCurrentVolume) ) 

#define IUPnPService_RenderingControl1_SetVolumeDB(This,InstanceID,Channel,DesiredVolume)	\
    ( (This)->lpVtbl -> SetVolumeDB(This,InstanceID,Channel,DesiredVolume) ) 

#define IUPnPService_RenderingControl1_GetVolumeDBRange(This,InstanceID,Channel,pMinValue,pMaxValue)	\
    ( (This)->lpVtbl -> GetVolumeDBRange(This,InstanceID,Channel,pMinValue,pMaxValue) ) 

#define IUPnPService_RenderingControl1_GetLoudness(This,InstanceID,Channel,pCurrentLoudness)	\
    ( (This)->lpVtbl -> GetLoudness(This,InstanceID,Channel,pCurrentLoudness) ) 

#define IUPnPService_RenderingControl1_SetLoudness(This,InstanceID,Channel,DesiredLoudness)	\
    ( (This)->lpVtbl -> SetLoudness(This,InstanceID,Channel,DesiredLoudness) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUPnPService_RenderingControl1_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_av_dcp_0000_0003 */
/* [local] */ 

typedef /* [v1_enum] */ 
enum CONTENTDIRECTORY1_DISPIDS
    {	DISPID_TRANSFERIDS	= 1,
	DISPID_A_ARG_TYPE_OBJECTID	= ( DISPID_TRANSFERIDS + 1 ) ,
	DISPID_A_ARG_TYPE_RESULT	= ( DISPID_A_ARG_TYPE_OBJECTID + 1 ) ,
	DISPID_A_ARG_TYPE_SEARCHCRITERIA	= ( DISPID_A_ARG_TYPE_RESULT + 1 ) ,
	DISPID_A_ARG_TYPE_BROWSEFLAG	= ( DISPID_A_ARG_TYPE_SEARCHCRITERIA + 1 ) ,
	DISPID_A_ARG_TYPE_FILTER	= ( DISPID_A_ARG_TYPE_BROWSEFLAG + 1 ) ,
	DISPID_A_ARG_TYPE_SORTCRITERIA	= ( DISPID_A_ARG_TYPE_FILTER + 1 ) ,
	DISPID_A_ARG_TYPE_INDEX	= ( DISPID_A_ARG_TYPE_SORTCRITERIA + 1 ) ,
	DISPID_A_ARG_TYPE_COUNT	= ( DISPID_A_ARG_TYPE_INDEX + 1 ) ,
	DISPID_A_ARG_TYPE_UPDATEID	= ( DISPID_A_ARG_TYPE_COUNT + 1 ) ,
	DISPID_A_ARG_TYPE_TRANSFERID	= ( DISPID_A_ARG_TYPE_UPDATEID + 1 ) ,
	DISPID_A_ARG_TYPE_TRANSFERSTATUS	= ( DISPID_A_ARG_TYPE_TRANSFERID + 1 ) ,
	DISPID_A_ARG_TYPE_TRANSFERLENGTH	= ( DISPID_A_ARG_TYPE_TRANSFERSTATUS + 1 ) ,
	DISPID_A_ARG_TYPE_TRANSFERTOTAL	= ( DISPID_A_ARG_TYPE_TRANSFERLENGTH + 1 ) ,
	DISPID_A_ARG_TYPE_TAGVALUELIST	= ( DISPID_A_ARG_TYPE_TRANSFERTOTAL + 1 ) ,
	DISPID_A_ARG_TYPE_URI	= ( DISPID_A_ARG_TYPE_TAGVALUELIST + 1 ) ,
	DISPID_SEARCHCAPABILITIES	= ( DISPID_A_ARG_TYPE_URI + 1 ) ,
	DISPID_SORTCAPABILITIES	= ( DISPID_SEARCHCAPABILITIES + 1 ) ,
	DISPID_SYSTEMUPDATEID	= ( DISPID_SORTCAPABILITIES + 1 ) ,
	DISPID_CONTAINERUPDATEIDS	= ( DISPID_SYSTEMUPDATEID + 1 ) ,
	DISPID_GETSEARCHCAPABILITIES	= ( DISPID_CONTAINERUPDATEIDS + 1 ) ,
	DISPID_GETSORTCAPABILITIES	= ( DISPID_GETSEARCHCAPABILITIES + 1 ) ,
	DISPID_GETSYSTEMUPDATEID	= ( DISPID_GETSORTCAPABILITIES + 1 ) ,
	DISPID_BROWSE	= ( DISPID_GETSYSTEMUPDATEID + 1 ) ,
	DISPID_SEARCH	= ( DISPID_BROWSE + 1 ) ,
	DISPID_CREATEOBJECT	= ( DISPID_SEARCH + 1 ) ,
	DISPID_DESTROYOBJECT	= ( DISPID_CREATEOBJECT + 1 ) ,
	DISPID_UPDATEOBJECT	= ( DISPID_DESTROYOBJECT + 1 ) ,
	DISPID_IMPORTRESOURCE	= ( DISPID_UPDATEOBJECT + 1 ) ,
	DISPID_EXPORTRESOURCE	= ( DISPID_IMPORTRESOURCE + 1 ) ,
	DISPID_STOPTRANSFERRESOURCE	= ( DISPID_EXPORTRESOURCE + 1 ) ,
	DISPID_GETTRANSFERPROGRESS	= ( DISPID_STOPTRANSFERRESOURCE + 1 ) ,
	DISPID_DELETERESOURCE	= ( DISPID_GETTRANSFERPROGRESS + 1 ) ,
	DISPID_CREATEREFERENCE	= ( DISPID_DELETERESOURCE + 1 ) 
    } 	CONTENTDIRECTORY1_DISPIDS;



extern RPC_IF_HANDLE __MIDL_itf_av_dcp_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_av_dcp_0000_0003_v0_0_s_ifspec;

#ifndef __IUPnPService_ContentDirectory1_INTERFACE_DEFINED__
#define __IUPnPService_ContentDirectory1_INTERFACE_DEFINED__

/* interface IUPnPService_ContentDirectory1 */
/* [object][unique][helpstring][oleautomation][uuid] */ 


EXTERN_C const IID IID_IUPnPService_ContentDirectory1;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3eadfae5-00c9-4359-8952-950d832574a0")
    IUPnPService_ContentDirectory1 : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TransferIDs( 
            /* [retval][out] */ BSTR *pTransferIDs) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_A_ARG_TYPE_ObjectID( 
            /* [retval][out] */ BSTR *pA_ARG_TYPE_ObjectID) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_A_ARG_TYPE_Result( 
            /* [retval][out] */ BSTR *pA_ARG_TYPE_Result) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_A_ARG_TYPE_SearchCriteria( 
            /* [retval][out] */ BSTR *pA_ARG_TYPE_SearchCriteria) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_A_ARG_TYPE_BrowseFlag( 
            /* [retval][out] */ BSTR *pA_ARG_TYPE_BrowseFlag) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_A_ARG_TYPE_Filter( 
            /* [retval][out] */ BSTR *pA_ARG_TYPE_Filter) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_A_ARG_TYPE_SortCriteria( 
            /* [retval][out] */ BSTR *pA_ARG_TYPE_SortCriteria) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_A_ARG_TYPE_Index( 
            /* [retval][out] */ unsigned long *pA_ARG_TYPE_Index) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_A_ARG_TYPE_Count( 
            /* [retval][out] */ unsigned long *pA_ARG_TYPE_Count) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_A_ARG_TYPE_UpdateID( 
            /* [retval][out] */ unsigned long *pA_ARG_TYPE_UpdateID) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_A_ARG_TYPE_TransferID( 
            /* [retval][out] */ unsigned long *pA_ARG_TYPE_TransferID) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_A_ARG_TYPE_TransferStatus( 
            /* [retval][out] */ BSTR *pA_ARG_TYPE_TransferStatus) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_A_ARG_TYPE_TransferLength( 
            /* [retval][out] */ BSTR *pA_ARG_TYPE_TransferLength) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_A_ARG_TYPE_TransferTotal( 
            /* [retval][out] */ BSTR *pA_ARG_TYPE_TransferTotal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_A_ARG_TYPE_TagValueList( 
            /* [retval][out] */ BSTR *pA_ARG_TYPE_TagValueList) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_A_ARG_TYPE_URI( 
            /* [retval][out] */ BSTR *pA_ARG_TYPE_URI) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SearchCapabilities( 
            /* [retval][out] */ BSTR *pSearchCapabilities) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SortCapabilities( 
            /* [retval][out] */ BSTR *pSortCapabilities) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SystemUpdateID( 
            /* [retval][out] */ unsigned long *pSystemUpdateID) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ContainerUpdateIDs( 
            /* [retval][out] */ BSTR *pContainerUpdateIDs) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSearchCapabilities( 
            /* [out][in] */ BSTR *pSearchCaps) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSortCapabilities( 
            /* [out][in] */ BSTR *pSortCaps) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSystemUpdateID( 
            /* [out][in] */ unsigned long *pId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Browse( 
            /* [in] */ BSTR ObjectID,
            /* [in] */ BSTR BrowseFlag,
            /* [in] */ BSTR Filter,
            /* [in] */ unsigned long StartingIndex,
            /* [in] */ unsigned long RequestedCount,
            /* [in] */ BSTR SortCriteria,
            /* [out][in] */ BSTR *pResult,
            /* [out][in] */ unsigned long *pNumberReturned,
            /* [out][in] */ unsigned long *pTotalMatches,
            /* [out][in] */ unsigned long *pUpdateID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Search( 
            /* [in] */ BSTR ContainerID,
            /* [in] */ BSTR SearchCriteria,
            /* [in] */ BSTR Filter,
            /* [in] */ unsigned long StartingIndex,
            /* [in] */ unsigned long RequestedCount,
            /* [in] */ BSTR SortCriteria,
            /* [out][in] */ BSTR *pResult,
            /* [out][in] */ unsigned long *pNumberReturned,
            /* [out][in] */ unsigned long *pTotalMatches,
            /* [out][in] */ unsigned long *pUpdateID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateObject( 
            /* [in] */ BSTR ContainerID,
            /* [in] */ BSTR Elements,
            /* [out][in] */ BSTR *pObjectID,
            /* [out][in] */ BSTR *pResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DestroyObject( 
            /* [in] */ BSTR ObjectID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UpdateObject( 
            /* [in] */ BSTR ObjectID,
            /* [in] */ BSTR CurrentTagValue,
            /* [in] */ BSTR NewTagValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ImportResource( 
            /* [in] */ BSTR SourceURI,
            /* [in] */ BSTR DestinationURI,
            /* [out][in] */ unsigned long *pTransferID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExportResource( 
            /* [in] */ BSTR SourceURI,
            /* [in] */ BSTR DestinationURI,
            /* [out][in] */ unsigned long *pTransferID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StopTransferResource( 
            /* [in] */ unsigned long TransferID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTransferProgress( 
            /* [in] */ unsigned long TransferID,
            /* [out][in] */ BSTR *pTransferStatus,
            /* [out][in] */ BSTR *pTransferLength,
            /* [out][in] */ BSTR *pTransferTotal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteResource( 
            /* [in] */ BSTR ResourceURI) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateReference( 
            /* [in] */ BSTR ContainerID,
            /* [in] */ BSTR ObjectID,
            /* [out][in] */ BSTR *pNewID) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUPnPService_ContentDirectory1Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUPnPService_ContentDirectory1 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUPnPService_ContentDirectory1 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUPnPService_ContentDirectory1 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUPnPService_ContentDirectory1 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUPnPService_ContentDirectory1 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUPnPService_ContentDirectory1 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUPnPService_ContentDirectory1 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TransferIDs )( 
            IUPnPService_ContentDirectory1 * This,
            /* [retval][out] */ BSTR *pTransferIDs);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_A_ARG_TYPE_ObjectID )( 
            IUPnPService_ContentDirectory1 * This,
            /* [retval][out] */ BSTR *pA_ARG_TYPE_ObjectID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_A_ARG_TYPE_Result )( 
            IUPnPService_ContentDirectory1 * This,
            /* [retval][out] */ BSTR *pA_ARG_TYPE_Result);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_A_ARG_TYPE_SearchCriteria )( 
            IUPnPService_ContentDirectory1 * This,
            /* [retval][out] */ BSTR *pA_ARG_TYPE_SearchCriteria);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_A_ARG_TYPE_BrowseFlag )( 
            IUPnPService_ContentDirectory1 * This,
            /* [retval][out] */ BSTR *pA_ARG_TYPE_BrowseFlag);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_A_ARG_TYPE_Filter )( 
            IUPnPService_ContentDirectory1 * This,
            /* [retval][out] */ BSTR *pA_ARG_TYPE_Filter);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_A_ARG_TYPE_SortCriteria )( 
            IUPnPService_ContentDirectory1 * This,
            /* [retval][out] */ BSTR *pA_ARG_TYPE_SortCriteria);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_A_ARG_TYPE_Index )( 
            IUPnPService_ContentDirectory1 * This,
            /* [retval][out] */ unsigned long *pA_ARG_TYPE_Index);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_A_ARG_TYPE_Count )( 
            IUPnPService_ContentDirectory1 * This,
            /* [retval][out] */ unsigned long *pA_ARG_TYPE_Count);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_A_ARG_TYPE_UpdateID )( 
            IUPnPService_ContentDirectory1 * This,
            /* [retval][out] */ unsigned long *pA_ARG_TYPE_UpdateID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_A_ARG_TYPE_TransferID )( 
            IUPnPService_ContentDirectory1 * This,
            /* [retval][out] */ unsigned long *pA_ARG_TYPE_TransferID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_A_ARG_TYPE_TransferStatus )( 
            IUPnPService_ContentDirectory1 * This,
            /* [retval][out] */ BSTR *pA_ARG_TYPE_TransferStatus);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_A_ARG_TYPE_TransferLength )( 
            IUPnPService_ContentDirectory1 * This,
            /* [retval][out] */ BSTR *pA_ARG_TYPE_TransferLength);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_A_ARG_TYPE_TransferTotal )( 
            IUPnPService_ContentDirectory1 * This,
            /* [retval][out] */ BSTR *pA_ARG_TYPE_TransferTotal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_A_ARG_TYPE_TagValueList )( 
            IUPnPService_ContentDirectory1 * This,
            /* [retval][out] */ BSTR *pA_ARG_TYPE_TagValueList);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_A_ARG_TYPE_URI )( 
            IUPnPService_ContentDirectory1 * This,
            /* [retval][out] */ BSTR *pA_ARG_TYPE_URI);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SearchCapabilities )( 
            IUPnPService_ContentDirectory1 * This,
            /* [retval][out] */ BSTR *pSearchCapabilities);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SortCapabilities )( 
            IUPnPService_ContentDirectory1 * This,
            /* [retval][out] */ BSTR *pSortCapabilities);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SystemUpdateID )( 
            IUPnPService_ContentDirectory1 * This,
            /* [retval][out] */ unsigned long *pSystemUpdateID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContainerUpdateIDs )( 
            IUPnPService_ContentDirectory1 * This,
            /* [retval][out] */ BSTR *pContainerUpdateIDs);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSearchCapabilities )( 
            IUPnPService_ContentDirectory1 * This,
            /* [out][in] */ BSTR *pSearchCaps);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSortCapabilities )( 
            IUPnPService_ContentDirectory1 * This,
            /* [out][in] */ BSTR *pSortCaps);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSystemUpdateID )( 
            IUPnPService_ContentDirectory1 * This,
            /* [out][in] */ unsigned long *pId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Browse )( 
            IUPnPService_ContentDirectory1 * This,
            /* [in] */ BSTR ObjectID,
            /* [in] */ BSTR BrowseFlag,
            /* [in] */ BSTR Filter,
            /* [in] */ unsigned long StartingIndex,
            /* [in] */ unsigned long RequestedCount,
            /* [in] */ BSTR SortCriteria,
            /* [out][in] */ BSTR *pResult,
            /* [out][in] */ unsigned long *pNumberReturned,
            /* [out][in] */ unsigned long *pTotalMatches,
            /* [out][in] */ unsigned long *pUpdateID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Search )( 
            IUPnPService_ContentDirectory1 * This,
            /* [in] */ BSTR ContainerID,
            /* [in] */ BSTR SearchCriteria,
            /* [in] */ BSTR Filter,
            /* [in] */ unsigned long StartingIndex,
            /* [in] */ unsigned long RequestedCount,
            /* [in] */ BSTR SortCriteria,
            /* [out][in] */ BSTR *pResult,
            /* [out][in] */ unsigned long *pNumberReturned,
            /* [out][in] */ unsigned long *pTotalMatches,
            /* [out][in] */ unsigned long *pUpdateID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateObject )( 
            IUPnPService_ContentDirectory1 * This,
            /* [in] */ BSTR ContainerID,
            /* [in] */ BSTR Elements,
            /* [out][in] */ BSTR *pObjectID,
            /* [out][in] */ BSTR *pResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DestroyObject )( 
            IUPnPService_ContentDirectory1 * This,
            /* [in] */ BSTR ObjectID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UpdateObject )( 
            IUPnPService_ContentDirectory1 * This,
            /* [in] */ BSTR ObjectID,
            /* [in] */ BSTR CurrentTagValue,
            /* [in] */ BSTR NewTagValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ImportResource )( 
            IUPnPService_ContentDirectory1 * This,
            /* [in] */ BSTR SourceURI,
            /* [in] */ BSTR DestinationURI,
            /* [out][in] */ unsigned long *pTransferID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExportResource )( 
            IUPnPService_ContentDirectory1 * This,
            /* [in] */ BSTR SourceURI,
            /* [in] */ BSTR DestinationURI,
            /* [out][in] */ unsigned long *pTransferID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StopTransferResource )( 
            IUPnPService_ContentDirectory1 * This,
            /* [in] */ unsigned long TransferID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTransferProgress )( 
            IUPnPService_ContentDirectory1 * This,
            /* [in] */ unsigned long TransferID,
            /* [out][in] */ BSTR *pTransferStatus,
            /* [out][in] */ BSTR *pTransferLength,
            /* [out][in] */ BSTR *pTransferTotal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteResource )( 
            IUPnPService_ContentDirectory1 * This,
            /* [in] */ BSTR ResourceURI);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateReference )( 
            IUPnPService_ContentDirectory1 * This,
            /* [in] */ BSTR ContainerID,
            /* [in] */ BSTR ObjectID,
            /* [out][in] */ BSTR *pNewID);
        
        END_INTERFACE
    } IUPnPService_ContentDirectory1Vtbl;

    interface IUPnPService_ContentDirectory1
    {
        CONST_VTBL struct IUPnPService_ContentDirectory1Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUPnPService_ContentDirectory1_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUPnPService_ContentDirectory1_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUPnPService_ContentDirectory1_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUPnPService_ContentDirectory1_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUPnPService_ContentDirectory1_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUPnPService_ContentDirectory1_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUPnPService_ContentDirectory1_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUPnPService_ContentDirectory1_get_TransferIDs(This,pTransferIDs)	\
    ( (This)->lpVtbl -> get_TransferIDs(This,pTransferIDs) ) 

#define IUPnPService_ContentDirectory1_get_A_ARG_TYPE_ObjectID(This,pA_ARG_TYPE_ObjectID)	\
    ( (This)->lpVtbl -> get_A_ARG_TYPE_ObjectID(This,pA_ARG_TYPE_ObjectID) ) 

#define IUPnPService_ContentDirectory1_get_A_ARG_TYPE_Result(This,pA_ARG_TYPE_Result)	\
    ( (This)->lpVtbl -> get_A_ARG_TYPE_Result(This,pA_ARG_TYPE_Result) ) 

#define IUPnPService_ContentDirectory1_get_A_ARG_TYPE_SearchCriteria(This,pA_ARG_TYPE_SearchCriteria)	\
    ( (This)->lpVtbl -> get_A_ARG_TYPE_SearchCriteria(This,pA_ARG_TYPE_SearchCriteria) ) 

#define IUPnPService_ContentDirectory1_get_A_ARG_TYPE_BrowseFlag(This,pA_ARG_TYPE_BrowseFlag)	\
    ( (This)->lpVtbl -> get_A_ARG_TYPE_BrowseFlag(This,pA_ARG_TYPE_BrowseFlag) ) 

#define IUPnPService_ContentDirectory1_get_A_ARG_TYPE_Filter(This,pA_ARG_TYPE_Filter)	\
    ( (This)->lpVtbl -> get_A_ARG_TYPE_Filter(This,pA_ARG_TYPE_Filter) ) 

#define IUPnPService_ContentDirectory1_get_A_ARG_TYPE_SortCriteria(This,pA_ARG_TYPE_SortCriteria)	\
    ( (This)->lpVtbl -> get_A_ARG_TYPE_SortCriteria(This,pA_ARG_TYPE_SortCriteria) ) 

#define IUPnPService_ContentDirectory1_get_A_ARG_TYPE_Index(This,pA_ARG_TYPE_Index)	\
    ( (This)->lpVtbl -> get_A_ARG_TYPE_Index(This,pA_ARG_TYPE_Index) ) 

#define IUPnPService_ContentDirectory1_get_A_ARG_TYPE_Count(This,pA_ARG_TYPE_Count)	\
    ( (This)->lpVtbl -> get_A_ARG_TYPE_Count(This,pA_ARG_TYPE_Count) ) 

#define IUPnPService_ContentDirectory1_get_A_ARG_TYPE_UpdateID(This,pA_ARG_TYPE_UpdateID)	\
    ( (This)->lpVtbl -> get_A_ARG_TYPE_UpdateID(This,pA_ARG_TYPE_UpdateID) ) 

#define IUPnPService_ContentDirectory1_get_A_ARG_TYPE_TransferID(This,pA_ARG_TYPE_TransferID)	\
    ( (This)->lpVtbl -> get_A_ARG_TYPE_TransferID(This,pA_ARG_TYPE_TransferID) ) 

#define IUPnPService_ContentDirectory1_get_A_ARG_TYPE_TransferStatus(This,pA_ARG_TYPE_TransferStatus)	\
    ( (This)->lpVtbl -> get_A_ARG_TYPE_TransferStatus(This,pA_ARG_TYPE_TransferStatus) ) 

#define IUPnPService_ContentDirectory1_get_A_ARG_TYPE_TransferLength(This,pA_ARG_TYPE_TransferLength)	\
    ( (This)->lpVtbl -> get_A_ARG_TYPE_TransferLength(This,pA_ARG_TYPE_TransferLength) ) 

#define IUPnPService_ContentDirectory1_get_A_ARG_TYPE_TransferTotal(This,pA_ARG_TYPE_TransferTotal)	\
    ( (This)->lpVtbl -> get_A_ARG_TYPE_TransferTotal(This,pA_ARG_TYPE_TransferTotal) ) 

#define IUPnPService_ContentDirectory1_get_A_ARG_TYPE_TagValueList(This,pA_ARG_TYPE_TagValueList)	\
    ( (This)->lpVtbl -> get_A_ARG_TYPE_TagValueList(This,pA_ARG_TYPE_TagValueList) ) 

#define IUPnPService_ContentDirectory1_get_A_ARG_TYPE_URI(This,pA_ARG_TYPE_URI)	\
    ( (This)->lpVtbl -> get_A_ARG_TYPE_URI(This,pA_ARG_TYPE_URI) ) 

#define IUPnPService_ContentDirectory1_get_SearchCapabilities(This,pSearchCapabilities)	\
    ( (This)->lpVtbl -> get_SearchCapabilities(This,pSearchCapabilities) ) 

#define IUPnPService_ContentDirectory1_get_SortCapabilities(This,pSortCapabilities)	\
    ( (This)->lpVtbl -> get_SortCapabilities(This,pSortCapabilities) ) 

#define IUPnPService_ContentDirectory1_get_SystemUpdateID(This,pSystemUpdateID)	\
    ( (This)->lpVtbl -> get_SystemUpdateID(This,pSystemUpdateID) ) 

#define IUPnPService_ContentDirectory1_get_ContainerUpdateIDs(This,pContainerUpdateIDs)	\
    ( (This)->lpVtbl -> get_ContainerUpdateIDs(This,pContainerUpdateIDs) ) 

#define IUPnPService_ContentDirectory1_GetSearchCapabilities(This,pSearchCaps)	\
    ( (This)->lpVtbl -> GetSearchCapabilities(This,pSearchCaps) ) 

#define IUPnPService_ContentDirectory1_GetSortCapabilities(This,pSortCaps)	\
    ( (This)->lpVtbl -> GetSortCapabilities(This,pSortCaps) ) 

#define IUPnPService_ContentDirectory1_GetSystemUpdateID(This,pId)	\
    ( (This)->lpVtbl -> GetSystemUpdateID(This,pId) ) 

#define IUPnPService_ContentDirectory1_Browse(This,ObjectID,BrowseFlag,Filter,StartingIndex,RequestedCount,SortCriteria,pResult,pNumberReturned,pTotalMatches,pUpdateID)	\
    ( (This)->lpVtbl -> Browse(This,ObjectID,BrowseFlag,Filter,StartingIndex,RequestedCount,SortCriteria,pResult,pNumberReturned,pTotalMatches,pUpdateID) ) 

#define IUPnPService_ContentDirectory1_Search(This,ContainerID,SearchCriteria,Filter,StartingIndex,RequestedCount,SortCriteria,pResult,pNumberReturned,pTotalMatches,pUpdateID)	\
    ( (This)->lpVtbl -> Search(This,ContainerID,SearchCriteria,Filter,StartingIndex,RequestedCount,SortCriteria,pResult,pNumberReturned,pTotalMatches,pUpdateID) ) 

#define IUPnPService_ContentDirectory1_CreateObject(This,ContainerID,Elements,pObjectID,pResult)	\
    ( (This)->lpVtbl -> CreateObject(This,ContainerID,Elements,pObjectID,pResult) ) 

#define IUPnPService_ContentDirectory1_DestroyObject(This,ObjectID)	\
    ( (This)->lpVtbl -> DestroyObject(This,ObjectID) ) 

#define IUPnPService_ContentDirectory1_UpdateObject(This,ObjectID,CurrentTagValue,NewTagValue)	\
    ( (This)->lpVtbl -> UpdateObject(This,ObjectID,CurrentTagValue,NewTagValue) ) 

#define IUPnPService_ContentDirectory1_ImportResource(This,SourceURI,DestinationURI,pTransferID)	\
    ( (This)->lpVtbl -> ImportResource(This,SourceURI,DestinationURI,pTransferID) ) 

#define IUPnPService_ContentDirectory1_ExportResource(This,SourceURI,DestinationURI,pTransferID)	\
    ( (This)->lpVtbl -> ExportResource(This,SourceURI,DestinationURI,pTransferID) ) 

#define IUPnPService_ContentDirectory1_StopTransferResource(This,TransferID)	\
    ( (This)->lpVtbl -> StopTransferResource(This,TransferID) ) 

#define IUPnPService_ContentDirectory1_GetTransferProgress(This,TransferID,pTransferStatus,pTransferLength,pTransferTotal)	\
    ( (This)->lpVtbl -> GetTransferProgress(This,TransferID,pTransferStatus,pTransferLength,pTransferTotal) ) 

#define IUPnPService_ContentDirectory1_DeleteResource(This,ResourceURI)	\
    ( (This)->lpVtbl -> DeleteResource(This,ResourceURI) ) 

#define IUPnPService_ContentDirectory1_CreateReference(This,ContainerID,ObjectID,pNewID)	\
    ( (This)->lpVtbl -> CreateReference(This,ContainerID,ObjectID,pNewID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUPnPService_ContentDirectory1_INTERFACE_DEFINED__ */



#ifndef __UPNPAVTOOLKITlib_LIBRARY_DEFINED__
#define __UPNPAVTOOLKITlib_LIBRARY_DEFINED__

/* library UPNPAVTOOLKITlib */
/* [helpstring][version][uuid] */ 






EXTERN_C const IID LIBID_UPNPAVTOOLKITlib;
#endif /* __UPNPAVTOOLKITlib_LIBRARY_DEFINED__ */

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


