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
/* Compiler settings for posyncservices.idl:
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

#ifndef __posyncservices_h__
#define __posyncservices_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IPOSyncServices_FWD_DEFINED__
#define __IPOSyncServices_FWD_DEFINED__
typedef interface IPOSyncServices IPOSyncServices;
#endif 	/* __IPOSyncServices_FWD_DEFINED__ */


#ifndef __IPOChangeInfo_FWD_DEFINED__
#define __IPOChangeInfo_FWD_DEFINED__
typedef interface IPOChangeInfo IPOChangeInfo;
#endif 	/* __IPOChangeInfo_FWD_DEFINED__ */


#ifndef __IPOChangeFilter_FWD_DEFINED__
#define __IPOChangeFilter_FWD_DEFINED__
typedef interface IPOChangeFilter IPOChangeFilter;
#endif 	/* __IPOChangeFilter_FWD_DEFINED__ */


#ifndef __IPOSyncPartner_FWD_DEFINED__
#define __IPOSyncPartner_FWD_DEFINED__
typedef interface IPOSyncPartner IPOSyncPartner;
#endif 	/* __IPOSyncPartner_FWD_DEFINED__ */


#ifndef __IPOMetadata_FWD_DEFINED__
#define __IPOMetadata_FWD_DEFINED__
typedef interface IPOMetadata IPOMetadata;
#endif 	/* __IPOMetadata_FWD_DEFINED__ */


#ifndef __IPOItemMetadata_FWD_DEFINED__
#define __IPOItemMetadata_FWD_DEFINED__
typedef interface IPOItemMetadata IPOItemMetadata;
#endif 	/* __IPOItemMetadata_FWD_DEFINED__ */


#ifndef __IPOFolderMetadata_FWD_DEFINED__
#define __IPOFolderMetadata_FWD_DEFINED__
typedef interface IPOFolderMetadata IPOFolderMetadata;
#endif 	/* __IPOFolderMetadata_FWD_DEFINED__ */


#ifndef __IEnumPOSyncPartners_FWD_DEFINED__
#define __IEnumPOSyncPartners_FWD_DEFINED__
typedef interface IEnumPOSyncPartners IEnumPOSyncPartners;
#endif 	/* __IEnumPOSyncPartners_FWD_DEFINED__ */


#ifndef __IEnumPOItemMetadata_FWD_DEFINED__
#define __IEnumPOItemMetadata_FWD_DEFINED__
typedef interface IEnumPOItemMetadata IEnumPOItemMetadata;
#endif 	/* __IEnumPOItemMetadata_FWD_DEFINED__ */


#ifndef __IEnumPOFolderMetadata_FWD_DEFINED__
#define __IEnumPOFolderMetadata_FWD_DEFINED__
typedef interface IEnumPOFolderMetadata IEnumPOFolderMetadata;
#endif 	/* __IEnumPOFolderMetadata_FWD_DEFINED__ */


#ifndef __POSyncServices_FWD_DEFINED__
#define __POSyncServices_FWD_DEFINED__

#ifdef __cplusplus
typedef class POSyncServices POSyncServices;
#else
typedef struct POSyncServices POSyncServices;
#endif /* __cplusplus */

#endif 	/* __POSyncServices_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_posyncservices_0000_0000 */
/* [local] */ 










typedef const BYTE *LPCBYTE;

typedef const void *LPCVOID;

#ifdef MIDL_PASS
typedef struct _CEBLOB
    {
    DWORD dwCount;
    BYTE *lpb;
    } 	CEBLOB;

typedef /* [switch_type] */ union __CEVALUNION
    {
    short iVal;
    USHORT uiVal;
    long lVal;
    ULONG ulVal;
    FILETIME filetime;
    WCHAR *lpwstr;
    CEBLOB blob;
    BOOL boolVal;
    double dblVal;
    } 	_CEVALUNION;

typedef struct _CEPROPVAL
    {
    DWORD propid;
    WORD wLenData;
    WORD wFlags;
    _CEVALUNION val;
    } 	CEPROPVAL;

typedef CEPROPVAL *LPCEPROPVAL;

typedef BYTE *LPBYTE;

#endif
typedef 
enum PO_IDTYPE
    {	PO_IDTYPE_POOM	= 0,
	PO_IDTYPE_CEMAPI	= ( PO_IDTYPE_POOM + 1 ) ,
	PO_IDTYPE_INTERNAL	= ( PO_IDTYPE_CEMAPI + 1 ) 
    } 	PO_IDTYPE;

typedef 
enum PO_TRACKLEVEL
    {	PO_TRACKLEVEL_NONE	= 0,
	PO_TRACKLEVEL_OBJECT	= 0x1,
	PO_TRACKLEVEL_UNIT	= 0x2
    } 	PO_TRACKLEVEL;

typedef 
enum PO_DATATYPE
    {	PO_DATATYPE_FOLDER	= 0,
	PO_DATATYPE_CONTACT	= ( PO_DATATYPE_FOLDER + 1 ) ,
	PO_DATATYPE_MESSAGE	= ( PO_DATATYPE_CONTACT + 1 ) ,
	PO_DATATYPE_APPOINTMENT	= ( PO_DATATYPE_MESSAGE + 1 ) ,
	PO_DATATYPE_TASK	= ( PO_DATATYPE_APPOINTMENT + 1 ) ,
	PO_DATATYPE_NOTE	= ( PO_DATATYPE_TASK + 1 ) ,
	PO_DATATYPE_COUNT	= ( PO_DATATYPE_NOTE + 1 ) ,
	PO_DATATYPE_INVALID	= PO_DATATYPE_COUNT
    } 	PO_DATATYPE;

typedef 
enum PO_FOLDERTYPE
    {	PO_FOLDERTYPE_UNDEFINED	= 0,
	PO_FOLDERTYPE_DEFAULT_FOLDER	= 0x10000,
	PO_FOLDERTYPE_MESSAGE	= PO_DATATYPE_MESSAGE,
	PO_FOLDERTYPE_APPOINTMENT	= PO_DATATYPE_APPOINTMENT,
	PO_FOLDERTYPE_TASK	= PO_DATATYPE_TASK,
	PO_FOLDERTYPE_NOTE	= PO_DATATYPE_NOTE,
	PO_FOLDERTYPE_CONTACT	= PO_DATATYPE_CONTACT,
	PO_FOLDERTYPE_DEFAULT_APPOINTMENT	= ( PO_FOLDERTYPE_DEFAULT_FOLDER | PO_FOLDERTYPE_APPOINTMENT ) ,
	PO_FOLDERTYPE_DEFAULT_TASK	= ( PO_FOLDERTYPE_DEFAULT_FOLDER | PO_FOLDERTYPE_TASK ) ,
	PO_FOLDERTYPE_DEFAULT_CONTACT	= ( PO_FOLDERTYPE_DEFAULT_FOLDER | PO_FOLDERTYPE_CONTACT ) ,
	PO_FOLDERTYPE_DEFAULT_NOTE	= ( PO_FOLDERTYPE_DEFAULT_FOLDER | PO_FOLDERTYPE_NOTE ) ,
	PO_FOLDERTYPE_INBOX	= ( PO_FOLDERTYPE_DEFAULT_FOLDER | PO_FOLDERTYPE_MESSAGE ) ,
	PO_FOLDERTYPE_IPM_ROOT	= ( 0x30000 | PO_FOLDERTYPE_MESSAGE ) ,
	PO_FOLDERTYPE_TRASH	= ( 0x40000 | PO_FOLDERTYPE_MESSAGE ) ,
	PO_FOLDERTYPE_SENTITEMS	= ( 0x50000 | PO_FOLDERTYPE_MESSAGE ) ,
	PO_FOLDERTYPE_DRAFTS	= ( 0x60000 | PO_FOLDERTYPE_MESSAGE ) ,
	PO_FOLDERTYPE_OUTBOX	= ( 0x70000 | PO_FOLDERTYPE_MESSAGE ) 
    } 	PO_FOLDERTYPE;

typedef 
enum PO_CHANGETYPE
    {	PO_CHANGETYPE_NONE	= 0,
	PO_CHANGETYPE_ADDITION	= 0x1,
	PO_CHANGETYPE_MODIFICATION	= 0x2,
	PO_CHANGETYPE_DELETION	= 0x4,
	PO_CHANGETYPE_MOVE	= 0x8,
	PO_CHANGETYPE_ANY	= ( ( ( PO_CHANGETYPE_ADDITION | PO_CHANGETYPE_MODIFICATION )  | PO_CHANGETYPE_DELETION )  | PO_CHANGETYPE_MOVE ) 
    } 	PO_CHANGETYPE;

typedef 
enum PO_CHANGEACTION
    {	PO_CHANGEACTION_ACCEPT	= 0,
	PO_CHANGEACTION_SKIP	= ( PO_CHANGEACTION_ACCEPT + 1 ) ,
	PO_CHANGEACTION_FORGET	= ( PO_CHANGEACTION_SKIP + 1 ) 
    } 	PO_CHANGEACTION;

typedef 
enum PO_CONFLICTPOLICY
    {	PO_CONFLICTPOLICY_KEEP_REMOTE	= 0,
	PO_CONFLICTPOLICY_KEEP_LOCAL	= ( PO_CONFLICTPOLICY_KEEP_REMOTE + 1 ) ,
	PO_CONFLICTPOLICY_DEFAULT	= PO_CONFLICTPOLICY_KEEP_REMOTE
    } 	PO_CONFLICTPOLICY;

typedef 
enum PO_SYNCSESSION_OUTCOME
    {	PO_SYNCSESSION_FAILED	= 0,
	PO_SYNCSESSION_SUSPEND	= ( PO_SYNCSESSION_FAILED + 1 ) ,
	PO_SYNCSESSION_FORGET	= ( PO_SYNCSESSION_SUSPEND + 1 ) 
    } 	PO_SYNCSESSION_OUTCOME;

typedef 
enum PO_SCOPETYPE
    {	PO_SCOPETYPE_FOLDER	= 0,
	PO_SCOPETYPE_HIERARCHY	= ( PO_SCOPETYPE_FOLDER + 1 ) ,
	PO_SCOPETYPE_MOVES	= ( PO_SCOPETYPE_HIERARCHY + 1 ) 
    } 	PO_SCOPETYPE;

typedef 
enum PO_PROPKIND
    {	PO_PROPKIND_ID	= 0,
	PO_PROPKIND_NAMED	= ( PO_PROPKIND_ID + 1 ) 
    } 	PO_PROPKIND;

typedef 
enum PO_NAMEKIND
    {	PO_NAMEKIND_STRING	= 0,
	PO_NAMEKIND_ID	= ( PO_NAMEKIND_STRING + 1 ) 
    } 	PO_NAMEKIND;

typedef 
enum PO_UNITTYPE
    {	PO_UNITTYPE_INCLUSIVE	= 0,
	PO_UNITTYPE_EXCLUSIVE	= ( PO_UNITTYPE_INCLUSIVE + 1 ) 
    } 	PO_UNITTYPE;

typedef /* [switch_type] */ union POPropName
    {
    ULONG lID;
    LPCWSTR lpwstrName;
    } 	POPropName;

typedef struct POPropNamed
    {
    DWORD dwPropType;
    PO_NAMEKIND eNameKind;
    POPropName Name;
    } 	POPropNamed;

typedef struct POPropId
    {
    PO_IDTYPE eIdType;
    DWORD dwPropId;
    } 	POPropId;

typedef struct POTrackProp
    {
    PO_PROPKIND ePropKind;
    /* [switch_type] */ union __MIDL___MIDL_itf_posyncservices_0000_0000_0001
        {
        POPropId Id;
        POPropNamed Named;
        } 	Prop;
    } 	POTrackProp;

typedef struct POTrackUnit
    {
    PO_UNITTYPE eType;
    DWORD cProps;
    const POTrackProp *rgProps;
    } 	POTrackUnit;

typedef struct POTrackType
    {
    PO_TRACKLEVEL eTrackLevel;
    DWORD cUnits;
    const POTrackUnit *rgUnits;
    } 	POTrackType;

typedef struct POTrackSchema
    {
    POTrackType rgTypes[ 6 ];
    } 	POTrackSchema;



extern RPC_IF_HANDLE __MIDL_itf_posyncservices_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_posyncservices_0000_0000_v0_0_s_ifspec;

#ifndef __IPOSyncServices_INTERFACE_DEFINED__
#define __IPOSyncServices_INTERFACE_DEFINED__

/* interface IPOSyncServices */
/* [uuid][object] */ 


EXTERN_C const IID IID_IPOSyncServices;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("21E1B5A4-0010-437a-BFA7-9D1455238F39")
    IPOSyncServices : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Logon( 
            /* [in] */ HWND hWnd,
            /* [in] */ PO_IDTYPE eIdType,
            /* [in] */ REFIID riid,
            /* [iid_is][retval][out] */ IUnknown **ppSession) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIDsFromNames( 
            /* [in] */ DWORD dwStoreId,
            /* [in] */ DWORD ceProps,
            /* [size_is][in] */ const POPropNamed *rgNamedProps,
            /* [size_is][retval][out] */ DWORD *rgPropIds) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateStore( 
            /* [in] */ LPCWSTR pwszName,
            /* [in] */ DWORD ceInitProps,
            /* [size_is][in] */ const CEPROPVAL *rgInitProps,
            /* [retval][out] */ DWORD *pdwStoreId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindStore( 
            /* [in] */ LPCWSTR pwszName,
            /* [retval][out] */ DWORD *pdwStoreId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteStore( 
            /* [in] */ DWORD dwStoreId) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE GetStoreIdFromObjectId( 
            /* [in] */ PO_IDTYPE eIdType,
            /* [in] */ ULONG cbObjectId,
            /* [size_is][in] */ LPCVOID pvObjectId,
            /* [out] */ DWORD *pdwStoreId) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE GetObjectIdFromStoreId( 
            /* [in] */ DWORD dwStoreId,
            /* [in] */ PO_IDTYPE eIdType,
            /* [out][in] */ ULONG *pcbObjectId,
            /* [size_is][out] */ LPVOID pvObjectId) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE ConvertIdToString( 
            /* [in] */ PO_IDTYPE eIdType,
            /* [in] */ ULONG cbObjectId,
            /* [size_is][in] */ LPCVOID pvObjectId,
            /* [retval][out] */ BSTR *pbstrObjectId) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE ConvertStringToId( 
            /* [in] */ LPCWSTR pwszObjectId,
            /* [in] */ PO_IDTYPE eIdType,
            /* [out][in] */ ULONG *pcbObjectId,
            /* [size_is][out] */ LPVOID pvObjectId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddSyncPartner( 
            /* [in] */ DWORD dwStoreId,
            /* [in] */ REFGUID gidPartner,
            /* [in] */ LPCWSTR pwszDisplayName,
            /* [in] */ const POTrackSchema *pSyncSchema,
            /* [retval][out] */ IPOSyncPartner **ppPartner) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSyncPartner( 
            /* [in] */ DWORD dwStoreId,
            /* [in] */ REFGUID gidPartner,
            /* [retval][out] */ IPOSyncPartner **ppPartner) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSyncPartners( 
            /* [in] */ DWORD dwStoreId,
            /* [retval][out] */ IEnumPOSyncPartners **ppEnum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPOSyncServicesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPOSyncServices * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPOSyncServices * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPOSyncServices * This);
        
        HRESULT ( STDMETHODCALLTYPE *Logon )( 
            IPOSyncServices * This,
            /* [in] */ HWND hWnd,
            /* [in] */ PO_IDTYPE eIdType,
            /* [in] */ REFIID riid,
            /* [iid_is][retval][out] */ IUnknown **ppSession);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsFromNames )( 
            IPOSyncServices * This,
            /* [in] */ DWORD dwStoreId,
            /* [in] */ DWORD ceProps,
            /* [size_is][in] */ const POPropNamed *rgNamedProps,
            /* [size_is][retval][out] */ DWORD *rgPropIds);
        
        HRESULT ( STDMETHODCALLTYPE *CreateStore )( 
            IPOSyncServices * This,
            /* [in] */ LPCWSTR pwszName,
            /* [in] */ DWORD ceInitProps,
            /* [size_is][in] */ const CEPROPVAL *rgInitProps,
            /* [retval][out] */ DWORD *pdwStoreId);
        
        HRESULT ( STDMETHODCALLTYPE *FindStore )( 
            IPOSyncServices * This,
            /* [in] */ LPCWSTR pwszName,
            /* [retval][out] */ DWORD *pdwStoreId);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteStore )( 
            IPOSyncServices * This,
            /* [in] */ DWORD dwStoreId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *GetStoreIdFromObjectId )( 
            IPOSyncServices * This,
            /* [in] */ PO_IDTYPE eIdType,
            /* [in] */ ULONG cbObjectId,
            /* [size_is][in] */ LPCVOID pvObjectId,
            /* [out] */ DWORD *pdwStoreId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *GetObjectIdFromStoreId )( 
            IPOSyncServices * This,
            /* [in] */ DWORD dwStoreId,
            /* [in] */ PO_IDTYPE eIdType,
            /* [out][in] */ ULONG *pcbObjectId,
            /* [size_is][out] */ LPVOID pvObjectId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *ConvertIdToString )( 
            IPOSyncServices * This,
            /* [in] */ PO_IDTYPE eIdType,
            /* [in] */ ULONG cbObjectId,
            /* [size_is][in] */ LPCVOID pvObjectId,
            /* [retval][out] */ BSTR *pbstrObjectId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *ConvertStringToId )( 
            IPOSyncServices * This,
            /* [in] */ LPCWSTR pwszObjectId,
            /* [in] */ PO_IDTYPE eIdType,
            /* [out][in] */ ULONG *pcbObjectId,
            /* [size_is][out] */ LPVOID pvObjectId);
        
        HRESULT ( STDMETHODCALLTYPE *AddSyncPartner )( 
            IPOSyncServices * This,
            /* [in] */ DWORD dwStoreId,
            /* [in] */ REFGUID gidPartner,
            /* [in] */ LPCWSTR pwszDisplayName,
            /* [in] */ const POTrackSchema *pSyncSchema,
            /* [retval][out] */ IPOSyncPartner **ppPartner);
        
        HRESULT ( STDMETHODCALLTYPE *GetSyncPartner )( 
            IPOSyncServices * This,
            /* [in] */ DWORD dwStoreId,
            /* [in] */ REFGUID gidPartner,
            /* [retval][out] */ IPOSyncPartner **ppPartner);
        
        HRESULT ( STDMETHODCALLTYPE *GetSyncPartners )( 
            IPOSyncServices * This,
            /* [in] */ DWORD dwStoreId,
            /* [retval][out] */ IEnumPOSyncPartners **ppEnum);
        
        END_INTERFACE
    } IPOSyncServicesVtbl;

    interface IPOSyncServices
    {
        CONST_VTBL struct IPOSyncServicesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPOSyncServices_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPOSyncServices_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPOSyncServices_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPOSyncServices_Logon(This,hWnd,eIdType,riid,ppSession)	\
    ( (This)->lpVtbl -> Logon(This,hWnd,eIdType,riid,ppSession) ) 

#define IPOSyncServices_GetIDsFromNames(This,dwStoreId,ceProps,rgNamedProps,rgPropIds)	\
    ( (This)->lpVtbl -> GetIDsFromNames(This,dwStoreId,ceProps,rgNamedProps,rgPropIds) ) 

#define IPOSyncServices_CreateStore(This,pwszName,ceInitProps,rgInitProps,pdwStoreId)	\
    ( (This)->lpVtbl -> CreateStore(This,pwszName,ceInitProps,rgInitProps,pdwStoreId) ) 

#define IPOSyncServices_FindStore(This,pwszName,pdwStoreId)	\
    ( (This)->lpVtbl -> FindStore(This,pwszName,pdwStoreId) ) 

#define IPOSyncServices_DeleteStore(This,dwStoreId)	\
    ( (This)->lpVtbl -> DeleteStore(This,dwStoreId) ) 

#define IPOSyncServices_GetStoreIdFromObjectId(This,eIdType,cbObjectId,pvObjectId,pdwStoreId)	\
    ( (This)->lpVtbl -> GetStoreIdFromObjectId(This,eIdType,cbObjectId,pvObjectId,pdwStoreId) ) 

#define IPOSyncServices_GetObjectIdFromStoreId(This,dwStoreId,eIdType,pcbObjectId,pvObjectId)	\
    ( (This)->lpVtbl -> GetObjectIdFromStoreId(This,dwStoreId,eIdType,pcbObjectId,pvObjectId) ) 

#define IPOSyncServices_ConvertIdToString(This,eIdType,cbObjectId,pvObjectId,pbstrObjectId)	\
    ( (This)->lpVtbl -> ConvertIdToString(This,eIdType,cbObjectId,pvObjectId,pbstrObjectId) ) 

#define IPOSyncServices_ConvertStringToId(This,pwszObjectId,eIdType,pcbObjectId,pvObjectId)	\
    ( (This)->lpVtbl -> ConvertStringToId(This,pwszObjectId,eIdType,pcbObjectId,pvObjectId) ) 

#define IPOSyncServices_AddSyncPartner(This,dwStoreId,gidPartner,pwszDisplayName,pSyncSchema,ppPartner)	\
    ( (This)->lpVtbl -> AddSyncPartner(This,dwStoreId,gidPartner,pwszDisplayName,pSyncSchema,ppPartner) ) 

#define IPOSyncServices_GetSyncPartner(This,dwStoreId,gidPartner,ppPartner)	\
    ( (This)->lpVtbl -> GetSyncPartner(This,dwStoreId,gidPartner,ppPartner) ) 

#define IPOSyncServices_GetSyncPartners(This,dwStoreId,ppEnum)	\
    ( (This)->lpVtbl -> GetSyncPartners(This,dwStoreId,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [call_as] */ HRESULT STDMETHODCALLTYPE IPOSyncServices_RemoteGetStoreIdFromObjectId_Proxy( 
    IPOSyncServices * This,
    /* [in] */ PO_IDTYPE eIdType,
    /* [in] */ ULONG cbObjectId,
    /* [size_is][in] */ LPCBYTE pbObjectId,
    /* [out] */ DWORD *pdwStoreId);


void __RPC_STUB IPOSyncServices_RemoteGetStoreIdFromObjectId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IPOSyncServices_RemoteGetObjectIdFromStoreId_Proxy( 
    IPOSyncServices * This,
    /* [in] */ DWORD dwStoreId,
    /* [in] */ PO_IDTYPE eIdType,
    /* [out][in] */ ULONG *pcbObjectId,
    /* [size_is][out] */ LPBYTE pvObjectId);


void __RPC_STUB IPOSyncServices_RemoteGetObjectIdFromStoreId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IPOSyncServices_RemoteConvertIdToString_Proxy( 
    IPOSyncServices * This,
    /* [in] */ PO_IDTYPE eIdType,
    /* [in] */ ULONG cbObjectId,
    /* [size_is][in] */ LPCBYTE pbObjectId,
    /* [retval][out] */ BSTR *pbstrObjectId);


void __RPC_STUB IPOSyncServices_RemoteConvertIdToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IPOSyncServices_RemoteConvertStringToId_Proxy( 
    IPOSyncServices * This,
    /* [in] */ LPCWSTR pwszObjectId,
    /* [in] */ PO_IDTYPE eIdType,
    /* [out][in] */ ULONG *pcbObjectId,
    /* [size_is][out] */ LPBYTE pbObjectId);


void __RPC_STUB IPOSyncServices_RemoteConvertStringToId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IPOSyncServices_INTERFACE_DEFINED__ */


#ifndef __IPOChangeInfo_INTERFACE_DEFINED__
#define __IPOChangeInfo_INTERFACE_DEFINED__

/* interface IPOChangeInfo */
/* [uuid][object] */ 


EXTERN_C const IID IID_IPOChangeInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("466740DB-D9BB-4dea-8DFA-0211DF31520B")
    IPOChangeInfo : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetChangeType( 
            /* [retval][out] */ PO_CHANGETYPE *peChangeType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetObjectId( 
            /* [in] */ PO_IDTYPE eIdType,
            /* [out][in] */ ULONG *pcbObjectId,
            /* [size_is][out] */ LPBYTE pbObjectId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNewParentId( 
            /* [in] */ PO_IDTYPE eIdType,
            /* [out][in] */ ULONG *pcbParentId,
            /* [size_is][out] */ LPBYTE pbParentId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPrevParentId( 
            /* [in] */ PO_IDTYPE eIdType,
            /* [out][in] */ ULONG *pcbParentId,
            /* [size_is][out] */ LPBYTE pbParentId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetChangeMask( 
            /* [retval][out] */ ULONGLONG *pullChangedUnits) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPOChangeInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPOChangeInfo * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPOChangeInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPOChangeInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetChangeType )( 
            IPOChangeInfo * This,
            /* [retval][out] */ PO_CHANGETYPE *peChangeType);
        
        HRESULT ( STDMETHODCALLTYPE *GetObjectId )( 
            IPOChangeInfo * This,
            /* [in] */ PO_IDTYPE eIdType,
            /* [out][in] */ ULONG *pcbObjectId,
            /* [size_is][out] */ LPBYTE pbObjectId);
        
        HRESULT ( STDMETHODCALLTYPE *GetNewParentId )( 
            IPOChangeInfo * This,
            /* [in] */ PO_IDTYPE eIdType,
            /* [out][in] */ ULONG *pcbParentId,
            /* [size_is][out] */ LPBYTE pbParentId);
        
        HRESULT ( STDMETHODCALLTYPE *GetPrevParentId )( 
            IPOChangeInfo * This,
            /* [in] */ PO_IDTYPE eIdType,
            /* [out][in] */ ULONG *pcbParentId,
            /* [size_is][out] */ LPBYTE pbParentId);
        
        HRESULT ( STDMETHODCALLTYPE *GetChangeMask )( 
            IPOChangeInfo * This,
            /* [retval][out] */ ULONGLONG *pullChangedUnits);
        
        END_INTERFACE
    } IPOChangeInfoVtbl;

    interface IPOChangeInfo
    {
        CONST_VTBL struct IPOChangeInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPOChangeInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPOChangeInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPOChangeInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPOChangeInfo_GetChangeType(This,peChangeType)	\
    ( (This)->lpVtbl -> GetChangeType(This,peChangeType) ) 

#define IPOChangeInfo_GetObjectId(This,eIdType,pcbObjectId,pbObjectId)	\
    ( (This)->lpVtbl -> GetObjectId(This,eIdType,pcbObjectId,pbObjectId) ) 

#define IPOChangeInfo_GetNewParentId(This,eIdType,pcbParentId,pbParentId)	\
    ( (This)->lpVtbl -> GetNewParentId(This,eIdType,pcbParentId,pbParentId) ) 

#define IPOChangeInfo_GetPrevParentId(This,eIdType,pcbParentId,pbParentId)	\
    ( (This)->lpVtbl -> GetPrevParentId(This,eIdType,pcbParentId,pbParentId) ) 

#define IPOChangeInfo_GetChangeMask(This,pullChangedUnits)	\
    ( (This)->lpVtbl -> GetChangeMask(This,pullChangedUnits) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPOChangeInfo_INTERFACE_DEFINED__ */


#ifndef __IPOChangeFilter_INTERFACE_DEFINED__
#define __IPOChangeFilter_INTERFACE_DEFINED__

/* interface IPOChangeFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID_IPOChangeFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FFCB64D1-6C7B-496b-B5DA-3EC2C1EB16CA")
    IPOChangeFilter : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetActionForChange( 
            /* [in] */ IPOChangeInfo *pChangeInfo,
            /* [retval][out] */ PO_CHANGEACTION *peAction) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPOChangeFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPOChangeFilter * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPOChangeFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPOChangeFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetActionForChange )( 
            IPOChangeFilter * This,
            /* [in] */ IPOChangeInfo *pChangeInfo,
            /* [retval][out] */ PO_CHANGEACTION *peAction);
        
        END_INTERFACE
    } IPOChangeFilterVtbl;

    interface IPOChangeFilter
    {
        CONST_VTBL struct IPOChangeFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPOChangeFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPOChangeFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPOChangeFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPOChangeFilter_GetActionForChange(This,pChangeInfo,peAction)	\
    ( (This)->lpVtbl -> GetActionForChange(This,pChangeInfo,peAction) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPOChangeFilter_INTERFACE_DEFINED__ */


#ifndef __IPOSyncPartner_INTERFACE_DEFINED__
#define __IPOSyncPartner_INTERFACE_DEFINED__

/* interface IPOSyncPartner */
/* [uuid][object] */ 


EXTERN_C const IID IID_IPOSyncPartner;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("01D32BF7-62DA-4e94-A9A6-A73CC22F8F7C")
    IPOSyncPartner : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetIDsFromNames( 
            /* [in] */ DWORD ceProps,
            /* [size_is][in] */ const POPropNamed *rgNamedProps,
            /* [size_is][retval][out] */ DWORD *rgPropIds) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProps( 
            /* [in] */ DWORD ceProps,
            /* [size_is][in] */ DWORD *rgPropIds,
            /* [size_is][retval][out] */ CEPROPVAL **prgProps) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProps( 
            /* [in] */ DWORD ceProps,
            /* [size_is][in] */ const CEPROPVAL *rgProps) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGuid( 
            /* [retval][out] */ GUID *pgidPartner) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStoreId( 
            /* [in] */ PO_IDTYPE eIdType,
            /* [out][in] */ ULONG *pcbStoreId,
            /* [size_is][out] */ LPBYTE pbStoreId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSpecialFolderId( 
            /* [in] */ PO_FOLDERTYPE eFolderType,
            /* [in] */ PO_IDTYPE eIdType,
            /* [out][in] */ ULONG *pcbFolderId,
            /* [size_is][out] */ LPBYTE pbFolderId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnableFolderForSync( 
            /* [in] */ PO_IDTYPE eIdType,
            /* [in] */ ULONG cbFolderId,
            /* [size_is][in] */ LPCBYTE pbFolderId,
            /* [in] */ BOOL fEnable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsFolderEnabledForSync( 
            /* [in] */ PO_IDTYPE eIdType,
            /* [in] */ ULONG cbFolderId,
            /* [size_is][in] */ LPCBYTE pbFolderId,
            /* [retval][out] */ BOOL *pfEnabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HasChanges( 
            /* [in] */ PO_SCOPETYPE eScopeType,
            /* [in] */ PO_IDTYPE eIdType,
            /* [in] */ ULONG cbFolderId,
            /* [size_is][in] */ LPCBYTE pbFolderId,
            /* [in] */ IPOChangeFilter *pFilter,
            /* [out] */ BOOL *pfHasChanges) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetChangeCount( 
            /* [in] */ PO_SCOPETYPE eScopeType,
            /* [in] */ PO_IDTYPE eIdType,
            /* [in] */ ULONG cbFolderId,
            /* [size_is][in] */ LPCBYTE pbFolderId,
            /* [in] */ IPOChangeFilter *pFilter,
            /* [out] */ ULONG *pulAdditions,
            /* [out] */ ULONG *pulModification,
            /* [out] */ ULONG *pulDeletions,
            /* [out] */ ULONG *pulMoves) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartSyncSession( 
            /* [in] */ PO_SCOPETYPE eScopeType,
            /* [in] */ PO_IDTYPE eIdType,
            /* [in] */ ULONG cbFolderId,
            /* [size_is][in] */ LPCBYTE pbFolderId,
            /* [in] */ PO_CONFLICTPOLICY eConflictPolicy,
            /* [in] */ IPOChangeFilter *pFilter,
            /* [in] */ IUnknown *pUnkPrevState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNextChange( 
            /* [retval][out] */ IPOChangeInfo **ppChange) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetChangeForObject( 
            /* [in] */ PO_IDTYPE eIdType,
            /* [in] */ ULONG cbObjectId,
            /* [size_is][in] */ LPCBYTE pbObjectId,
            /* [retval][out] */ IPOChangeInfo **ppChange) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetExceptionOnChange( 
            /* [in] */ PO_IDTYPE eIdType,
            /* [in] */ ULONG cbObjectId,
            /* [size_is][in] */ LPCBYTE pbObjectId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetExceptionOnChangeUnits( 
            /* [in] */ PO_IDTYPE eIdType,
            /* [in] */ ULONG cbObjectId,
            /* [size_is][in] */ LPCBYTE pbObjectId,
            /* [in] */ ULONGLONG ullChangeUnits) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetChangeEnumeration( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndSyncSession( 
            /* [in] */ PO_SYNCSESSION_OUTCOME eOutcome,
            /* [retval][out] */ IUnknown **ppUnkState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRootFolder( 
            /* [retval][out] */ IPOFolderMetadata **ppMetadata) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LookupFolderObjectId( 
            /* [in] */ PO_IDTYPE eIdType,
            /* [in] */ ULONG cbObjectId,
            /* [size_is][in] */ LPCBYTE pbObjectId,
            /* [retval][out] */ IPOFolderMetadata **ppMetadata) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LookupFolderRemoteId( 
            /* [in] */ LPCWSTR pwszFolderId,
            /* [retval][out] */ IPOFolderMetadata **ppMetadata) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFolders( 
            /* [retval][out] */ IEnumPOFolderMetadata **ppEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Delete( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPOSyncPartnerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPOSyncPartner * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPOSyncPartner * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPOSyncPartner * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsFromNames )( 
            IPOSyncPartner * This,
            /* [in] */ DWORD ceProps,
            /* [size_is][in] */ const POPropNamed *rgNamedProps,
            /* [size_is][retval][out] */ DWORD *rgPropIds);
        
        HRESULT ( STDMETHODCALLTYPE *GetProps )( 
            IPOSyncPartner * This,
            /* [in] */ DWORD ceProps,
            /* [size_is][in] */ DWORD *rgPropIds,
            /* [size_is][retval][out] */ CEPROPVAL **prgProps);
        
        HRESULT ( STDMETHODCALLTYPE *SetProps )( 
            IPOSyncPartner * This,
            /* [in] */ DWORD ceProps,
            /* [size_is][in] */ const CEPROPVAL *rgProps);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IPOSyncPartner * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        HRESULT ( STDMETHODCALLTYPE *GetGuid )( 
            IPOSyncPartner * This,
            /* [retval][out] */ GUID *pgidPartner);
        
        HRESULT ( STDMETHODCALLTYPE *GetStoreId )( 
            IPOSyncPartner * This,
            /* [in] */ PO_IDTYPE eIdType,
            /* [out][in] */ ULONG *pcbStoreId,
            /* [size_is][out] */ LPBYTE pbStoreId);
        
        HRESULT ( STDMETHODCALLTYPE *GetSpecialFolderId )( 
            IPOSyncPartner * This,
            /* [in] */ PO_FOLDERTYPE eFolderType,
            /* [in] */ PO_IDTYPE eIdType,
            /* [out][in] */ ULONG *pcbFolderId,
            /* [size_is][out] */ LPBYTE pbFolderId);
        
        HRESULT ( STDMETHODCALLTYPE *EnableFolderForSync )( 
            IPOSyncPartner * This,
            /* [in] */ PO_IDTYPE eIdType,
            /* [in] */ ULONG cbFolderId,
            /* [size_is][in] */ LPCBYTE pbFolderId,
            /* [in] */ BOOL fEnable);
        
        HRESULT ( STDMETHODCALLTYPE *IsFolderEnabledForSync )( 
            IPOSyncPartner * This,
            /* [in] */ PO_IDTYPE eIdType,
            /* [in] */ ULONG cbFolderId,
            /* [size_is][in] */ LPCBYTE pbFolderId,
            /* [retval][out] */ BOOL *pfEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *HasChanges )( 
            IPOSyncPartner * This,
            /* [in] */ PO_SCOPETYPE eScopeType,
            /* [in] */ PO_IDTYPE eIdType,
            /* [in] */ ULONG cbFolderId,
            /* [size_is][in] */ LPCBYTE pbFolderId,
            /* [in] */ IPOChangeFilter *pFilter,
            /* [out] */ BOOL *pfHasChanges);
        
        HRESULT ( STDMETHODCALLTYPE *GetChangeCount )( 
            IPOSyncPartner * This,
            /* [in] */ PO_SCOPETYPE eScopeType,
            /* [in] */ PO_IDTYPE eIdType,
            /* [in] */ ULONG cbFolderId,
            /* [size_is][in] */ LPCBYTE pbFolderId,
            /* [in] */ IPOChangeFilter *pFilter,
            /* [out] */ ULONG *pulAdditions,
            /* [out] */ ULONG *pulModification,
            /* [out] */ ULONG *pulDeletions,
            /* [out] */ ULONG *pulMoves);
        
        HRESULT ( STDMETHODCALLTYPE *StartSyncSession )( 
            IPOSyncPartner * This,
            /* [in] */ PO_SCOPETYPE eScopeType,
            /* [in] */ PO_IDTYPE eIdType,
            /* [in] */ ULONG cbFolderId,
            /* [size_is][in] */ LPCBYTE pbFolderId,
            /* [in] */ PO_CONFLICTPOLICY eConflictPolicy,
            /* [in] */ IPOChangeFilter *pFilter,
            /* [in] */ IUnknown *pUnkPrevState);
        
        HRESULT ( STDMETHODCALLTYPE *GetNextChange )( 
            IPOSyncPartner * This,
            /* [retval][out] */ IPOChangeInfo **ppChange);
        
        HRESULT ( STDMETHODCALLTYPE *GetChangeForObject )( 
            IPOSyncPartner * This,
            /* [in] */ PO_IDTYPE eIdType,
            /* [in] */ ULONG cbObjectId,
            /* [size_is][in] */ LPCBYTE pbObjectId,
            /* [retval][out] */ IPOChangeInfo **ppChange);
        
        HRESULT ( STDMETHODCALLTYPE *SetExceptionOnChange )( 
            IPOSyncPartner * This,
            /* [in] */ PO_IDTYPE eIdType,
            /* [in] */ ULONG cbObjectId,
            /* [size_is][in] */ LPCBYTE pbObjectId);
        
        HRESULT ( STDMETHODCALLTYPE *SetExceptionOnChangeUnits )( 
            IPOSyncPartner * This,
            /* [in] */ PO_IDTYPE eIdType,
            /* [in] */ ULONG cbObjectId,
            /* [size_is][in] */ LPCBYTE pbObjectId,
            /* [in] */ ULONGLONG ullChangeUnits);
        
        HRESULT ( STDMETHODCALLTYPE *ResetChangeEnumeration )( 
            IPOSyncPartner * This);
        
        HRESULT ( STDMETHODCALLTYPE *EndSyncSession )( 
            IPOSyncPartner * This,
            /* [in] */ PO_SYNCSESSION_OUTCOME eOutcome,
            /* [retval][out] */ IUnknown **ppUnkState);
        
        HRESULT ( STDMETHODCALLTYPE *GetRootFolder )( 
            IPOSyncPartner * This,
            /* [retval][out] */ IPOFolderMetadata **ppMetadata);
        
        HRESULT ( STDMETHODCALLTYPE *LookupFolderObjectId )( 
            IPOSyncPartner * This,
            /* [in] */ PO_IDTYPE eIdType,
            /* [in] */ ULONG cbObjectId,
            /* [size_is][in] */ LPCBYTE pbObjectId,
            /* [retval][out] */ IPOFolderMetadata **ppMetadata);
        
        HRESULT ( STDMETHODCALLTYPE *LookupFolderRemoteId )( 
            IPOSyncPartner * This,
            /* [in] */ LPCWSTR pwszFolderId,
            /* [retval][out] */ IPOFolderMetadata **ppMetadata);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolders )( 
            IPOSyncPartner * This,
            /* [retval][out] */ IEnumPOFolderMetadata **ppEnum);
        
        HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IPOSyncPartner * This);
        
        END_INTERFACE
    } IPOSyncPartnerVtbl;

    interface IPOSyncPartner
    {
        CONST_VTBL struct IPOSyncPartnerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPOSyncPartner_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPOSyncPartner_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPOSyncPartner_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPOSyncPartner_GetIDsFromNames(This,ceProps,rgNamedProps,rgPropIds)	\
    ( (This)->lpVtbl -> GetIDsFromNames(This,ceProps,rgNamedProps,rgPropIds) ) 

#define IPOSyncPartner_GetProps(This,ceProps,rgPropIds,prgProps)	\
    ( (This)->lpVtbl -> GetProps(This,ceProps,rgPropIds,prgProps) ) 

#define IPOSyncPartner_SetProps(This,ceProps,rgProps)	\
    ( (This)->lpVtbl -> SetProps(This,ceProps,rgProps) ) 

#define IPOSyncPartner_GetName(This,pbstrName)	\
    ( (This)->lpVtbl -> GetName(This,pbstrName) ) 

#define IPOSyncPartner_GetGuid(This,pgidPartner)	\
    ( (This)->lpVtbl -> GetGuid(This,pgidPartner) ) 

#define IPOSyncPartner_GetStoreId(This,eIdType,pcbStoreId,pbStoreId)	\
    ( (This)->lpVtbl -> GetStoreId(This,eIdType,pcbStoreId,pbStoreId) ) 

#define IPOSyncPartner_GetSpecialFolderId(This,eFolderType,eIdType,pcbFolderId,pbFolderId)	\
    ( (This)->lpVtbl -> GetSpecialFolderId(This,eFolderType,eIdType,pcbFolderId,pbFolderId) ) 

#define IPOSyncPartner_EnableFolderForSync(This,eIdType,cbFolderId,pbFolderId,fEnable)	\
    ( (This)->lpVtbl -> EnableFolderForSync(This,eIdType,cbFolderId,pbFolderId,fEnable) ) 

#define IPOSyncPartner_IsFolderEnabledForSync(This,eIdType,cbFolderId,pbFolderId,pfEnabled)	\
    ( (This)->lpVtbl -> IsFolderEnabledForSync(This,eIdType,cbFolderId,pbFolderId,pfEnabled) ) 

#define IPOSyncPartner_HasChanges(This,eScopeType,eIdType,cbFolderId,pbFolderId,pFilter,pfHasChanges)	\
    ( (This)->lpVtbl -> HasChanges(This,eScopeType,eIdType,cbFolderId,pbFolderId,pFilter,pfHasChanges) ) 

#define IPOSyncPartner_GetChangeCount(This,eScopeType,eIdType,cbFolderId,pbFolderId,pFilter,pulAdditions,pulModification,pulDeletions,pulMoves)	\
    ( (This)->lpVtbl -> GetChangeCount(This,eScopeType,eIdType,cbFolderId,pbFolderId,pFilter,pulAdditions,pulModification,pulDeletions,pulMoves) ) 

#define IPOSyncPartner_StartSyncSession(This,eScopeType,eIdType,cbFolderId,pbFolderId,eConflictPolicy,pFilter,pUnkPrevState)	\
    ( (This)->lpVtbl -> StartSyncSession(This,eScopeType,eIdType,cbFolderId,pbFolderId,eConflictPolicy,pFilter,pUnkPrevState) ) 

#define IPOSyncPartner_GetNextChange(This,ppChange)	\
    ( (This)->lpVtbl -> GetNextChange(This,ppChange) ) 

#define IPOSyncPartner_GetChangeForObject(This,eIdType,cbObjectId,pbObjectId,ppChange)	\
    ( (This)->lpVtbl -> GetChangeForObject(This,eIdType,cbObjectId,pbObjectId,ppChange) ) 

#define IPOSyncPartner_SetExceptionOnChange(This,eIdType,cbObjectId,pbObjectId)	\
    ( (This)->lpVtbl -> SetExceptionOnChange(This,eIdType,cbObjectId,pbObjectId) ) 

#define IPOSyncPartner_SetExceptionOnChangeUnits(This,eIdType,cbObjectId,pbObjectId,ullChangeUnits)	\
    ( (This)->lpVtbl -> SetExceptionOnChangeUnits(This,eIdType,cbObjectId,pbObjectId,ullChangeUnits) ) 

#define IPOSyncPartner_ResetChangeEnumeration(This)	\
    ( (This)->lpVtbl -> ResetChangeEnumeration(This) ) 

#define IPOSyncPartner_EndSyncSession(This,eOutcome,ppUnkState)	\
    ( (This)->lpVtbl -> EndSyncSession(This,eOutcome,ppUnkState) ) 

#define IPOSyncPartner_GetRootFolder(This,ppMetadata)	\
    ( (This)->lpVtbl -> GetRootFolder(This,ppMetadata) ) 

#define IPOSyncPartner_LookupFolderObjectId(This,eIdType,cbObjectId,pbObjectId,ppMetadata)	\
    ( (This)->lpVtbl -> LookupFolderObjectId(This,eIdType,cbObjectId,pbObjectId,ppMetadata) ) 

#define IPOSyncPartner_LookupFolderRemoteId(This,pwszFolderId,ppMetadata)	\
    ( (This)->lpVtbl -> LookupFolderRemoteId(This,pwszFolderId,ppMetadata) ) 

#define IPOSyncPartner_GetFolders(This,ppEnum)	\
    ( (This)->lpVtbl -> GetFolders(This,ppEnum) ) 

#define IPOSyncPartner_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPOSyncPartner_INTERFACE_DEFINED__ */


#ifndef __IPOMetadata_INTERFACE_DEFINED__
#define __IPOMetadata_INTERFACE_DEFINED__

/* interface IPOMetadata */
/* [uuid][object] */ 


EXTERN_C const IID IID_IPOMetadata;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EDD49A70-1907-4417-AE3E-583447851BB6")
    IPOMetadata : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetIDsFromNames( 
            /* [in] */ DWORD ceProps,
            /* [size_is][in] */ const POPropNamed *rgNamedProps,
            /* [size_is][retval][out] */ DWORD *rgPropIds) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProps( 
            /* [in] */ DWORD ceProps,
            /* [size_is][in] */ DWORD *rgPropIds,
            /* [size_is][retval][out] */ CEPROPVAL **prgProps) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProps( 
            /* [in] */ DWORD ceProps,
            /* [size_is][in] */ const CEPROPVAL *rgProps) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDataType( 
            /* [retval][out] */ PO_DATATYPE *peType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetObjectId( 
            /* [in] */ PO_IDTYPE eIdType,
            /* [out][in] */ ULONG *pcbObjectId,
            /* [size_is][out] */ LPBYTE pbObjectId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPartner( 
            /* [retval][out] */ IPOSyncPartner **ppPartner) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRemoteId( 
            /* [retval][out] */ BSTR *pbstrObjectId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRemoteId( 
            /* [in] */ LPCWSTR pwszObjectId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetParent( 
            /* [retval][out] */ IPOFolderMetadata **ppMetadata) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetParent( 
            /* [in] */ IPOFolderMetadata *pMetadata) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPOMetadataVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPOMetadata * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPOMetadata * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPOMetadata * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsFromNames )( 
            IPOMetadata * This,
            /* [in] */ DWORD ceProps,
            /* [size_is][in] */ const POPropNamed *rgNamedProps,
            /* [size_is][retval][out] */ DWORD *rgPropIds);
        
        HRESULT ( STDMETHODCALLTYPE *GetProps )( 
            IPOMetadata * This,
            /* [in] */ DWORD ceProps,
            /* [size_is][in] */ DWORD *rgPropIds,
            /* [size_is][retval][out] */ CEPROPVAL **prgProps);
        
        HRESULT ( STDMETHODCALLTYPE *SetProps )( 
            IPOMetadata * This,
            /* [in] */ DWORD ceProps,
            /* [size_is][in] */ const CEPROPVAL *rgProps);
        
        HRESULT ( STDMETHODCALLTYPE *GetDataType )( 
            IPOMetadata * This,
            /* [retval][out] */ PO_DATATYPE *peType);
        
        HRESULT ( STDMETHODCALLTYPE *GetObjectId )( 
            IPOMetadata * This,
            /* [in] */ PO_IDTYPE eIdType,
            /* [out][in] */ ULONG *pcbObjectId,
            /* [size_is][out] */ LPBYTE pbObjectId);
        
        HRESULT ( STDMETHODCALLTYPE *GetPartner )( 
            IPOMetadata * This,
            /* [retval][out] */ IPOSyncPartner **ppPartner);
        
        HRESULT ( STDMETHODCALLTYPE *GetRemoteId )( 
            IPOMetadata * This,
            /* [retval][out] */ BSTR *pbstrObjectId);
        
        HRESULT ( STDMETHODCALLTYPE *SetRemoteId )( 
            IPOMetadata * This,
            /* [in] */ LPCWSTR pwszObjectId);
        
        HRESULT ( STDMETHODCALLTYPE *GetParent )( 
            IPOMetadata * This,
            /* [retval][out] */ IPOFolderMetadata **ppMetadata);
        
        HRESULT ( STDMETHODCALLTYPE *SetParent )( 
            IPOMetadata * This,
            /* [in] */ IPOFolderMetadata *pMetadata);
        
        END_INTERFACE
    } IPOMetadataVtbl;

    interface IPOMetadata
    {
        CONST_VTBL struct IPOMetadataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPOMetadata_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPOMetadata_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPOMetadata_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPOMetadata_GetIDsFromNames(This,ceProps,rgNamedProps,rgPropIds)	\
    ( (This)->lpVtbl -> GetIDsFromNames(This,ceProps,rgNamedProps,rgPropIds) ) 

#define IPOMetadata_GetProps(This,ceProps,rgPropIds,prgProps)	\
    ( (This)->lpVtbl -> GetProps(This,ceProps,rgPropIds,prgProps) ) 

#define IPOMetadata_SetProps(This,ceProps,rgProps)	\
    ( (This)->lpVtbl -> SetProps(This,ceProps,rgProps) ) 

#define IPOMetadata_GetDataType(This,peType)	\
    ( (This)->lpVtbl -> GetDataType(This,peType) ) 

#define IPOMetadata_GetObjectId(This,eIdType,pcbObjectId,pbObjectId)	\
    ( (This)->lpVtbl -> GetObjectId(This,eIdType,pcbObjectId,pbObjectId) ) 

#define IPOMetadata_GetPartner(This,ppPartner)	\
    ( (This)->lpVtbl -> GetPartner(This,ppPartner) ) 

#define IPOMetadata_GetRemoteId(This,pbstrObjectId)	\
    ( (This)->lpVtbl -> GetRemoteId(This,pbstrObjectId) ) 

#define IPOMetadata_SetRemoteId(This,pwszObjectId)	\
    ( (This)->lpVtbl -> SetRemoteId(This,pwszObjectId) ) 

#define IPOMetadata_GetParent(This,ppMetadata)	\
    ( (This)->lpVtbl -> GetParent(This,ppMetadata) ) 

#define IPOMetadata_SetParent(This,pMetadata)	\
    ( (This)->lpVtbl -> SetParent(This,pMetadata) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPOMetadata_INTERFACE_DEFINED__ */


#ifndef __IPOItemMetadata_INTERFACE_DEFINED__
#define __IPOItemMetadata_INTERFACE_DEFINED__

/* interface IPOItemMetadata */
/* [uuid][object] */ 


EXTERN_C const IID IID_IPOItemMetadata;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("57F86452-F49D-4478-8BFF-4A35D8E540C9")
    IPOItemMetadata : public IPOMetadata
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Delete( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPOItemMetadataVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPOItemMetadata * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPOItemMetadata * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPOItemMetadata * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsFromNames )( 
            IPOItemMetadata * This,
            /* [in] */ DWORD ceProps,
            /* [size_is][in] */ const POPropNamed *rgNamedProps,
            /* [size_is][retval][out] */ DWORD *rgPropIds);
        
        HRESULT ( STDMETHODCALLTYPE *GetProps )( 
            IPOItemMetadata * This,
            /* [in] */ DWORD ceProps,
            /* [size_is][in] */ DWORD *rgPropIds,
            /* [size_is][retval][out] */ CEPROPVAL **prgProps);
        
        HRESULT ( STDMETHODCALLTYPE *SetProps )( 
            IPOItemMetadata * This,
            /* [in] */ DWORD ceProps,
            /* [size_is][in] */ const CEPROPVAL *rgProps);
        
        HRESULT ( STDMETHODCALLTYPE *GetDataType )( 
            IPOItemMetadata * This,
            /* [retval][out] */ PO_DATATYPE *peType);
        
        HRESULT ( STDMETHODCALLTYPE *GetObjectId )( 
            IPOItemMetadata * This,
            /* [in] */ PO_IDTYPE eIdType,
            /* [out][in] */ ULONG *pcbObjectId,
            /* [size_is][out] */ LPBYTE pbObjectId);
        
        HRESULT ( STDMETHODCALLTYPE *GetPartner )( 
            IPOItemMetadata * This,
            /* [retval][out] */ IPOSyncPartner **ppPartner);
        
        HRESULT ( STDMETHODCALLTYPE *GetRemoteId )( 
            IPOItemMetadata * This,
            /* [retval][out] */ BSTR *pbstrObjectId);
        
        HRESULT ( STDMETHODCALLTYPE *SetRemoteId )( 
            IPOItemMetadata * This,
            /* [in] */ LPCWSTR pwszObjectId);
        
        HRESULT ( STDMETHODCALLTYPE *GetParent )( 
            IPOItemMetadata * This,
            /* [retval][out] */ IPOFolderMetadata **ppMetadata);
        
        HRESULT ( STDMETHODCALLTYPE *SetParent )( 
            IPOItemMetadata * This,
            /* [in] */ IPOFolderMetadata *pMetadata);
        
        HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IPOItemMetadata * This);
        
        END_INTERFACE
    } IPOItemMetadataVtbl;

    interface IPOItemMetadata
    {
        CONST_VTBL struct IPOItemMetadataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPOItemMetadata_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPOItemMetadata_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPOItemMetadata_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPOItemMetadata_GetIDsFromNames(This,ceProps,rgNamedProps,rgPropIds)	\
    ( (This)->lpVtbl -> GetIDsFromNames(This,ceProps,rgNamedProps,rgPropIds) ) 

#define IPOItemMetadata_GetProps(This,ceProps,rgPropIds,prgProps)	\
    ( (This)->lpVtbl -> GetProps(This,ceProps,rgPropIds,prgProps) ) 

#define IPOItemMetadata_SetProps(This,ceProps,rgProps)	\
    ( (This)->lpVtbl -> SetProps(This,ceProps,rgProps) ) 

#define IPOItemMetadata_GetDataType(This,peType)	\
    ( (This)->lpVtbl -> GetDataType(This,peType) ) 

#define IPOItemMetadata_GetObjectId(This,eIdType,pcbObjectId,pbObjectId)	\
    ( (This)->lpVtbl -> GetObjectId(This,eIdType,pcbObjectId,pbObjectId) ) 

#define IPOItemMetadata_GetPartner(This,ppPartner)	\
    ( (This)->lpVtbl -> GetPartner(This,ppPartner) ) 

#define IPOItemMetadata_GetRemoteId(This,pbstrObjectId)	\
    ( (This)->lpVtbl -> GetRemoteId(This,pbstrObjectId) ) 

#define IPOItemMetadata_SetRemoteId(This,pwszObjectId)	\
    ( (This)->lpVtbl -> SetRemoteId(This,pwszObjectId) ) 

#define IPOItemMetadata_GetParent(This,ppMetadata)	\
    ( (This)->lpVtbl -> GetParent(This,ppMetadata) ) 

#define IPOItemMetadata_SetParent(This,pMetadata)	\
    ( (This)->lpVtbl -> SetParent(This,pMetadata) ) 


#define IPOItemMetadata_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPOItemMetadata_INTERFACE_DEFINED__ */


#ifndef __IPOFolderMetadata_INTERFACE_DEFINED__
#define __IPOFolderMetadata_INTERFACE_DEFINED__

/* interface IPOFolderMetadata */
/* [uuid][object] */ 


EXTERN_C const IID IID_IPOFolderMetadata;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1DAD6E8E-2DD5-4b0b-BB79-AEB88FF6F288")
    IPOFolderMetadata : public IPOMetadata
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFolderName( 
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFolderType( 
            /* [retval][out] */ PO_FOLDERTYPE *peType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRemoteKnowledge( 
            /* [retval][out] */ BSTR *pbstrRemoteKnowledge) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRemoteKnowledge( 
            /* [in] */ LPCWSTR pwszRemoteKnowledge) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddItem( 
            /* [in] */ PO_IDTYPE eIdType,
            /* [in] */ ULONG cbObjectId,
            /* [size_is][in] */ LPCBYTE pbObjectId,
            /* [in] */ LPCWSTR pwszObjectId,
            /* [retval][out] */ IPOItemMetadata **ppMetadata) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LookupItemObjectId( 
            /* [in] */ PO_IDTYPE eIdType,
            /* [in] */ ULONG cbObjectId,
            /* [size_is][in] */ LPCBYTE pbObjectId,
            /* [retval][out] */ IPOItemMetadata **ppMetadata) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LookupItemRemoteId( 
            /* [in] */ LPCWSTR pwszItemId,
            /* [retval][out] */ IPOItemMetadata **ppMetadata) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItems( 
            /* [retval][out] */ IEnumPOItemMetadata **ppEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddFolder( 
            /* [in] */ PO_IDTYPE eIdType,
            /* [in] */ ULONG cbObjectId,
            /* [size_is][in] */ LPCBYTE pbObjectId,
            /* [in] */ LPCWSTR pwszObjectId,
            /* [retval][out] */ IPOFolderMetadata **ppMetadata) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LookupFolderObjectId( 
            /* [in] */ PO_IDTYPE eIdType,
            /* [in] */ ULONG cbObjectId,
            /* [size_is][in] */ LPCBYTE pbObjectId,
            /* [retval][out] */ IPOFolderMetadata **ppMetadata) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LookupFolderRemoteId( 
            /* [in] */ LPCWSTR pwszFolderId,
            /* [retval][out] */ IPOFolderMetadata **ppMetadata) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetChildFolders( 
            /* [retval][out] */ IEnumPOFolderMetadata **ppEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Delete( 
            /* [in] */ BOOL fDeleteChildFolders) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPOFolderMetadataVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPOFolderMetadata * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPOFolderMetadata * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPOFolderMetadata * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsFromNames )( 
            IPOFolderMetadata * This,
            /* [in] */ DWORD ceProps,
            /* [size_is][in] */ const POPropNamed *rgNamedProps,
            /* [size_is][retval][out] */ DWORD *rgPropIds);
        
        HRESULT ( STDMETHODCALLTYPE *GetProps )( 
            IPOFolderMetadata * This,
            /* [in] */ DWORD ceProps,
            /* [size_is][in] */ DWORD *rgPropIds,
            /* [size_is][retval][out] */ CEPROPVAL **prgProps);
        
        HRESULT ( STDMETHODCALLTYPE *SetProps )( 
            IPOFolderMetadata * This,
            /* [in] */ DWORD ceProps,
            /* [size_is][in] */ const CEPROPVAL *rgProps);
        
        HRESULT ( STDMETHODCALLTYPE *GetDataType )( 
            IPOFolderMetadata * This,
            /* [retval][out] */ PO_DATATYPE *peType);
        
        HRESULT ( STDMETHODCALLTYPE *GetObjectId )( 
            IPOFolderMetadata * This,
            /* [in] */ PO_IDTYPE eIdType,
            /* [out][in] */ ULONG *pcbObjectId,
            /* [size_is][out] */ LPBYTE pbObjectId);
        
        HRESULT ( STDMETHODCALLTYPE *GetPartner )( 
            IPOFolderMetadata * This,
            /* [retval][out] */ IPOSyncPartner **ppPartner);
        
        HRESULT ( STDMETHODCALLTYPE *GetRemoteId )( 
            IPOFolderMetadata * This,
            /* [retval][out] */ BSTR *pbstrObjectId);
        
        HRESULT ( STDMETHODCALLTYPE *SetRemoteId )( 
            IPOFolderMetadata * This,
            /* [in] */ LPCWSTR pwszObjectId);
        
        HRESULT ( STDMETHODCALLTYPE *GetParent )( 
            IPOFolderMetadata * This,
            /* [retval][out] */ IPOFolderMetadata **ppMetadata);
        
        HRESULT ( STDMETHODCALLTYPE *SetParent )( 
            IPOFolderMetadata * This,
            /* [in] */ IPOFolderMetadata *pMetadata);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolderName )( 
            IPOFolderMetadata * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolderType )( 
            IPOFolderMetadata * This,
            /* [retval][out] */ PO_FOLDERTYPE *peType);
        
        HRESULT ( STDMETHODCALLTYPE *GetRemoteKnowledge )( 
            IPOFolderMetadata * This,
            /* [retval][out] */ BSTR *pbstrRemoteKnowledge);
        
        HRESULT ( STDMETHODCALLTYPE *SetRemoteKnowledge )( 
            IPOFolderMetadata * This,
            /* [in] */ LPCWSTR pwszRemoteKnowledge);
        
        HRESULT ( STDMETHODCALLTYPE *AddItem )( 
            IPOFolderMetadata * This,
            /* [in] */ PO_IDTYPE eIdType,
            /* [in] */ ULONG cbObjectId,
            /* [size_is][in] */ LPCBYTE pbObjectId,
            /* [in] */ LPCWSTR pwszObjectId,
            /* [retval][out] */ IPOItemMetadata **ppMetadata);
        
        HRESULT ( STDMETHODCALLTYPE *LookupItemObjectId )( 
            IPOFolderMetadata * This,
            /* [in] */ PO_IDTYPE eIdType,
            /* [in] */ ULONG cbObjectId,
            /* [size_is][in] */ LPCBYTE pbObjectId,
            /* [retval][out] */ IPOItemMetadata **ppMetadata);
        
        HRESULT ( STDMETHODCALLTYPE *LookupItemRemoteId )( 
            IPOFolderMetadata * This,
            /* [in] */ LPCWSTR pwszItemId,
            /* [retval][out] */ IPOItemMetadata **ppMetadata);
        
        HRESULT ( STDMETHODCALLTYPE *GetItems )( 
            IPOFolderMetadata * This,
            /* [retval][out] */ IEnumPOItemMetadata **ppEnum);
        
        HRESULT ( STDMETHODCALLTYPE *AddFolder )( 
            IPOFolderMetadata * This,
            /* [in] */ PO_IDTYPE eIdType,
            /* [in] */ ULONG cbObjectId,
            /* [size_is][in] */ LPCBYTE pbObjectId,
            /* [in] */ LPCWSTR pwszObjectId,
            /* [retval][out] */ IPOFolderMetadata **ppMetadata);
        
        HRESULT ( STDMETHODCALLTYPE *LookupFolderObjectId )( 
            IPOFolderMetadata * This,
            /* [in] */ PO_IDTYPE eIdType,
            /* [in] */ ULONG cbObjectId,
            /* [size_is][in] */ LPCBYTE pbObjectId,
            /* [retval][out] */ IPOFolderMetadata **ppMetadata);
        
        HRESULT ( STDMETHODCALLTYPE *LookupFolderRemoteId )( 
            IPOFolderMetadata * This,
            /* [in] */ LPCWSTR pwszFolderId,
            /* [retval][out] */ IPOFolderMetadata **ppMetadata);
        
        HRESULT ( STDMETHODCALLTYPE *GetChildFolders )( 
            IPOFolderMetadata * This,
            /* [retval][out] */ IEnumPOFolderMetadata **ppEnum);
        
        HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IPOFolderMetadata * This,
            /* [in] */ BOOL fDeleteChildFolders);
        
        END_INTERFACE
    } IPOFolderMetadataVtbl;

    interface IPOFolderMetadata
    {
        CONST_VTBL struct IPOFolderMetadataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPOFolderMetadata_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPOFolderMetadata_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPOFolderMetadata_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPOFolderMetadata_GetIDsFromNames(This,ceProps,rgNamedProps,rgPropIds)	\
    ( (This)->lpVtbl -> GetIDsFromNames(This,ceProps,rgNamedProps,rgPropIds) ) 

#define IPOFolderMetadata_GetProps(This,ceProps,rgPropIds,prgProps)	\
    ( (This)->lpVtbl -> GetProps(This,ceProps,rgPropIds,prgProps) ) 

#define IPOFolderMetadata_SetProps(This,ceProps,rgProps)	\
    ( (This)->lpVtbl -> SetProps(This,ceProps,rgProps) ) 

#define IPOFolderMetadata_GetDataType(This,peType)	\
    ( (This)->lpVtbl -> GetDataType(This,peType) ) 

#define IPOFolderMetadata_GetObjectId(This,eIdType,pcbObjectId,pbObjectId)	\
    ( (This)->lpVtbl -> GetObjectId(This,eIdType,pcbObjectId,pbObjectId) ) 

#define IPOFolderMetadata_GetPartner(This,ppPartner)	\
    ( (This)->lpVtbl -> GetPartner(This,ppPartner) ) 

#define IPOFolderMetadata_GetRemoteId(This,pbstrObjectId)	\
    ( (This)->lpVtbl -> GetRemoteId(This,pbstrObjectId) ) 

#define IPOFolderMetadata_SetRemoteId(This,pwszObjectId)	\
    ( (This)->lpVtbl -> SetRemoteId(This,pwszObjectId) ) 

#define IPOFolderMetadata_GetParent(This,ppMetadata)	\
    ( (This)->lpVtbl -> GetParent(This,ppMetadata) ) 

#define IPOFolderMetadata_SetParent(This,pMetadata)	\
    ( (This)->lpVtbl -> SetParent(This,pMetadata) ) 


#define IPOFolderMetadata_GetFolderName(This,pbstrName)	\
    ( (This)->lpVtbl -> GetFolderName(This,pbstrName) ) 

#define IPOFolderMetadata_GetFolderType(This,peType)	\
    ( (This)->lpVtbl -> GetFolderType(This,peType) ) 

#define IPOFolderMetadata_GetRemoteKnowledge(This,pbstrRemoteKnowledge)	\
    ( (This)->lpVtbl -> GetRemoteKnowledge(This,pbstrRemoteKnowledge) ) 

#define IPOFolderMetadata_SetRemoteKnowledge(This,pwszRemoteKnowledge)	\
    ( (This)->lpVtbl -> SetRemoteKnowledge(This,pwszRemoteKnowledge) ) 

#define IPOFolderMetadata_AddItem(This,eIdType,cbObjectId,pbObjectId,pwszObjectId,ppMetadata)	\
    ( (This)->lpVtbl -> AddItem(This,eIdType,cbObjectId,pbObjectId,pwszObjectId,ppMetadata) ) 

#define IPOFolderMetadata_LookupItemObjectId(This,eIdType,cbObjectId,pbObjectId,ppMetadata)	\
    ( (This)->lpVtbl -> LookupItemObjectId(This,eIdType,cbObjectId,pbObjectId,ppMetadata) ) 

#define IPOFolderMetadata_LookupItemRemoteId(This,pwszItemId,ppMetadata)	\
    ( (This)->lpVtbl -> LookupItemRemoteId(This,pwszItemId,ppMetadata) ) 

#define IPOFolderMetadata_GetItems(This,ppEnum)	\
    ( (This)->lpVtbl -> GetItems(This,ppEnum) ) 

#define IPOFolderMetadata_AddFolder(This,eIdType,cbObjectId,pbObjectId,pwszObjectId,ppMetadata)	\
    ( (This)->lpVtbl -> AddFolder(This,eIdType,cbObjectId,pbObjectId,pwszObjectId,ppMetadata) ) 

#define IPOFolderMetadata_LookupFolderObjectId(This,eIdType,cbObjectId,pbObjectId,ppMetadata)	\
    ( (This)->lpVtbl -> LookupFolderObjectId(This,eIdType,cbObjectId,pbObjectId,ppMetadata) ) 

#define IPOFolderMetadata_LookupFolderRemoteId(This,pwszFolderId,ppMetadata)	\
    ( (This)->lpVtbl -> LookupFolderRemoteId(This,pwszFolderId,ppMetadata) ) 

#define IPOFolderMetadata_GetChildFolders(This,ppEnum)	\
    ( (This)->lpVtbl -> GetChildFolders(This,ppEnum) ) 

#define IPOFolderMetadata_Delete(This,fDeleteChildFolders)	\
    ( (This)->lpVtbl -> Delete(This,fDeleteChildFolders) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPOFolderMetadata_INTERFACE_DEFINED__ */


#ifndef __IEnumPOSyncPartners_INTERFACE_DEFINED__
#define __IEnumPOSyncPartners_INTERFACE_DEFINED__

/* interface IEnumPOSyncPartners */
/* [uuid][object] */ 


EXTERN_C const IID IID_IEnumPOSyncPartners;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D8706AE2-7EE3-443f-B85F-0309E3D8747F")
    IEnumPOSyncPartners : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG ceRequested,
            /* [length_is][size_is][out] */ IPOSyncPartner **rgpPartners,
            /* [out] */ ULONG *pceFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG ceSkip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [retval][out] */ IEnumPOSyncPartners **ppEnum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumPOSyncPartnersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumPOSyncPartners * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumPOSyncPartners * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumPOSyncPartners * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumPOSyncPartners * This,
            /* [in] */ ULONG ceRequested,
            /* [length_is][size_is][out] */ IPOSyncPartner **rgpPartners,
            /* [out] */ ULONG *pceFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumPOSyncPartners * This,
            /* [in] */ ULONG ceSkip);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumPOSyncPartners * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumPOSyncPartners * This,
            /* [retval][out] */ IEnumPOSyncPartners **ppEnum);
        
        END_INTERFACE
    } IEnumPOSyncPartnersVtbl;

    interface IEnumPOSyncPartners
    {
        CONST_VTBL struct IEnumPOSyncPartnersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumPOSyncPartners_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumPOSyncPartners_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumPOSyncPartners_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumPOSyncPartners_Next(This,ceRequested,rgpPartners,pceFetched)	\
    ( (This)->lpVtbl -> Next(This,ceRequested,rgpPartners,pceFetched) ) 

#define IEnumPOSyncPartners_Skip(This,ceSkip)	\
    ( (This)->lpVtbl -> Skip(This,ceSkip) ) 

#define IEnumPOSyncPartners_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumPOSyncPartners_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumPOSyncPartners_INTERFACE_DEFINED__ */


#ifndef __IEnumPOItemMetadata_INTERFACE_DEFINED__
#define __IEnumPOItemMetadata_INTERFACE_DEFINED__

/* interface IEnumPOItemMetadata */
/* [uuid][object] */ 


EXTERN_C const IID IID_IEnumPOItemMetadata;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("03DE8910-2B3A-4919-A7CB-398E6769B9F0")
    IEnumPOItemMetadata : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG ceRequested,
            /* [length_is][size_is][out] */ IPOItemMetadata **rgpMetadata,
            /* [out] */ ULONG *pceFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG ceSkip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [retval][out] */ IEnumPOItemMetadata **ppEnum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumPOItemMetadataVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumPOItemMetadata * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumPOItemMetadata * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumPOItemMetadata * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumPOItemMetadata * This,
            /* [in] */ ULONG ceRequested,
            /* [length_is][size_is][out] */ IPOItemMetadata **rgpMetadata,
            /* [out] */ ULONG *pceFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumPOItemMetadata * This,
            /* [in] */ ULONG ceSkip);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumPOItemMetadata * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumPOItemMetadata * This,
            /* [retval][out] */ IEnumPOItemMetadata **ppEnum);
        
        END_INTERFACE
    } IEnumPOItemMetadataVtbl;

    interface IEnumPOItemMetadata
    {
        CONST_VTBL struct IEnumPOItemMetadataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumPOItemMetadata_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumPOItemMetadata_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumPOItemMetadata_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumPOItemMetadata_Next(This,ceRequested,rgpMetadata,pceFetched)	\
    ( (This)->lpVtbl -> Next(This,ceRequested,rgpMetadata,pceFetched) ) 

#define IEnumPOItemMetadata_Skip(This,ceSkip)	\
    ( (This)->lpVtbl -> Skip(This,ceSkip) ) 

#define IEnumPOItemMetadata_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumPOItemMetadata_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumPOItemMetadata_INTERFACE_DEFINED__ */


#ifndef __IEnumPOFolderMetadata_INTERFACE_DEFINED__
#define __IEnumPOFolderMetadata_INTERFACE_DEFINED__

/* interface IEnumPOFolderMetadata */
/* [uuid][object] */ 


EXTERN_C const IID IID_IEnumPOFolderMetadata;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("757B7146-7BCD-44f7-83BB-886D33B4D909")
    IEnumPOFolderMetadata : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG ceRequested,
            /* [length_is][size_is][out] */ IPOFolderMetadata **rgpMetadata,
            /* [out] */ ULONG *pceFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG ceSkip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [retval][out] */ IEnumPOFolderMetadata **ppEnum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumPOFolderMetadataVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumPOFolderMetadata * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumPOFolderMetadata * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumPOFolderMetadata * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumPOFolderMetadata * This,
            /* [in] */ ULONG ceRequested,
            /* [length_is][size_is][out] */ IPOFolderMetadata **rgpMetadata,
            /* [out] */ ULONG *pceFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumPOFolderMetadata * This,
            /* [in] */ ULONG ceSkip);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumPOFolderMetadata * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumPOFolderMetadata * This,
            /* [retval][out] */ IEnumPOFolderMetadata **ppEnum);
        
        END_INTERFACE
    } IEnumPOFolderMetadataVtbl;

    interface IEnumPOFolderMetadata
    {
        CONST_VTBL struct IEnumPOFolderMetadataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumPOFolderMetadata_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumPOFolderMetadata_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumPOFolderMetadata_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumPOFolderMetadata_Next(This,ceRequested,rgpMetadata,pceFetched)	\
    ( (This)->lpVtbl -> Next(This,ceRequested,rgpMetadata,pceFetched) ) 

#define IEnumPOFolderMetadata_Skip(This,ceSkip)	\
    ( (This)->lpVtbl -> Skip(This,ceSkip) ) 

#define IEnumPOFolderMetadata_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumPOFolderMetadata_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumPOFolderMetadata_INTERFACE_DEFINED__ */



#ifndef __POSyncServicesLib_LIBRARY_DEFINED__
#define __POSyncServicesLib_LIBRARY_DEFINED__

/* library POSyncServicesLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_POSyncServicesLib;

EXTERN_C const CLSID CLSID_POSyncServices;

#ifdef __cplusplus

class DECLSPEC_UUID("40B47A8F-C442-4f06-8304-AA1058EDEEA0")
POSyncServices;
#endif
#endif /* __POSyncServicesLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  HWND_UserSize(     unsigned long *, unsigned long            , HWND * ); 
unsigned char * __RPC_USER  HWND_UserMarshal(  unsigned long *, unsigned char *, HWND * ); 
unsigned char * __RPC_USER  HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND * ); 
void                      __RPC_USER  HWND_UserFree(     unsigned long *, HWND * ); 

/* [local] */ HRESULT STDMETHODCALLTYPE IPOSyncServices_GetStoreIdFromObjectId_Proxy( 
    IPOSyncServices * This,
    /* [in] */ PO_IDTYPE eIdType,
    /* [in] */ ULONG cbObjectId,
    /* [size_is][in] */ LPCVOID pvObjectId,
    /* [out] */ DWORD *pdwStoreId);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IPOSyncServices_GetStoreIdFromObjectId_Stub( 
    IPOSyncServices * This,
    /* [in] */ PO_IDTYPE eIdType,
    /* [in] */ ULONG cbObjectId,
    /* [size_is][in] */ LPCBYTE pbObjectId,
    /* [out] */ DWORD *pdwStoreId);

/* [local] */ HRESULT STDMETHODCALLTYPE IPOSyncServices_GetObjectIdFromStoreId_Proxy( 
    IPOSyncServices * This,
    /* [in] */ DWORD dwStoreId,
    /* [in] */ PO_IDTYPE eIdType,
    /* [out][in] */ ULONG *pcbObjectId,
    /* [size_is][out] */ LPVOID pvObjectId);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IPOSyncServices_GetObjectIdFromStoreId_Stub( 
    IPOSyncServices * This,
    /* [in] */ DWORD dwStoreId,
    /* [in] */ PO_IDTYPE eIdType,
    /* [out][in] */ ULONG *pcbObjectId,
    /* [size_is][out] */ LPBYTE pvObjectId);

/* [local] */ HRESULT STDMETHODCALLTYPE IPOSyncServices_ConvertIdToString_Proxy( 
    IPOSyncServices * This,
    /* [in] */ PO_IDTYPE eIdType,
    /* [in] */ ULONG cbObjectId,
    /* [size_is][in] */ LPCVOID pvObjectId,
    /* [retval][out] */ BSTR *pbstrObjectId);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IPOSyncServices_ConvertIdToString_Stub( 
    IPOSyncServices * This,
    /* [in] */ PO_IDTYPE eIdType,
    /* [in] */ ULONG cbObjectId,
    /* [size_is][in] */ LPCBYTE pbObjectId,
    /* [retval][out] */ BSTR *pbstrObjectId);

/* [local] */ HRESULT STDMETHODCALLTYPE IPOSyncServices_ConvertStringToId_Proxy( 
    IPOSyncServices * This,
    /* [in] */ LPCWSTR pwszObjectId,
    /* [in] */ PO_IDTYPE eIdType,
    /* [out][in] */ ULONG *pcbObjectId,
    /* [size_is][out] */ LPVOID pvObjectId);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IPOSyncServices_ConvertStringToId_Stub( 
    IPOSyncServices * This,
    /* [in] */ LPCWSTR pwszObjectId,
    /* [in] */ PO_IDTYPE eIdType,
    /* [out][in] */ ULONG *pcbObjectId,
    /* [size_is][out] */ LPBYTE pbObjectId);



/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


