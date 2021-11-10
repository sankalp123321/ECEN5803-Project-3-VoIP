

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0543 */
/* Compiler settings for mlibdll.idl:
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

#ifndef __mlibdll_h__
#define __mlibdll_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IMLSortOrder_FWD_DEFINED__
#define __IMLSortOrder_FWD_DEFINED__
typedef interface IMLSortOrder IMLSortOrder;
#endif 	/* __IMLSortOrder_FWD_DEFINED__ */


#ifndef __IMLSortOrderSet_FWD_DEFINED__
#define __IMLSortOrderSet_FWD_DEFINED__
typedef interface IMLSortOrderSet IMLSortOrderSet;
#endif 	/* __IMLSortOrderSet_FWD_DEFINED__ */


#ifndef __IMLPropertySet_FWD_DEFINED__
#define __IMLPropertySet_FWD_DEFINED__
typedef interface IMLPropertySet IMLPropertySet;
#endif 	/* __IMLPropertySet_FWD_DEFINED__ */


#ifndef __IMLQuery_FWD_DEFINED__
#define __IMLQuery_FWD_DEFINED__
typedef interface IMLQuery IMLQuery;
#endif 	/* __IMLQuery_FWD_DEFINED__ */


#ifndef __IMLUserStore_FWD_DEFINED__
#define __IMLUserStore_FWD_DEFINED__
typedef interface IMLUserStore IMLUserStore;
#endif 	/* __IMLUserStore_FWD_DEFINED__ */


#ifndef __IMLNotify_FWD_DEFINED__
#define __IMLNotify_FWD_DEFINED__
typedef interface IMLNotify IMLNotify;
#endif 	/* __IMLNotify_FWD_DEFINED__ */


#ifndef __IMLNotificationManager_FWD_DEFINED__
#define __IMLNotificationManager_FWD_DEFINED__
typedef interface IMLNotificationManager IMLNotificationManager;
#endif 	/* __IMLNotificationManager_FWD_DEFINED__ */


#ifndef __IMLFactory_FWD_DEFINED__
#define __IMLFactory_FWD_DEFINED__
typedef interface IMLFactory IMLFactory;
#endif 	/* __IMLFactory_FWD_DEFINED__ */


#ifndef __IMLPushQueue_FWD_DEFINED__
#define __IMLPushQueue_FWD_DEFINED__
typedef interface IMLPushQueue IMLPushQueue;
#endif 	/* __IMLPushQueue_FWD_DEFINED__ */


#ifndef __IMLStoreMetadata_FWD_DEFINED__
#define __IMLStoreMetadata_FWD_DEFINED__
typedef interface IMLStoreMetadata IMLStoreMetadata;
#endif 	/* __IMLStoreMetadata_FWD_DEFINED__ */


#ifndef __IMLCore_FWD_DEFINED__
#define __IMLCore_FWD_DEFINED__
typedef interface IMLCore IMLCore;
#endif 	/* __IMLCore_FWD_DEFINED__ */


#ifndef __MLCore_FWD_DEFINED__
#define __MLCore_FWD_DEFINED__

#ifdef __cplusplus
typedef class MLCore MLCore;
#else
typedef struct MLCore MLCore;
#endif /* __cplusplus */

#endif 	/* __MLCore_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_mlibdll_0000_0000 */
/* [local] */ 

typedef struct _MLDateTime
    {
    SHORT year;
    USHORT month;
    USHORT day;
    USHORT hour;
    USHORT minute;
    USHORT second;
    ULONG fraction;
    } 	MLDateTime;

typedef 
enum _MLDataSourceId
    {	ML_DS_None	= 0,
	ML_DS_FileSystem	= 1,
	ML_DS_DLNA	= 2,
	ML_DS_MAX	= 16
    } 	MLDataSourceId;

typedef 
enum _MLDataSourceFlags
    {	ML_DSF_None	= 0,
	ML_DSF_Pull	= 1,
	ML_DSF_Push	= 2,
	ML_DSF_Browse	= 4
    } 	MLDataSourceFlags;

typedef struct _MLDataSource
    {
    MLDataSourceId Id;
    BSTR Name;
    BSTR Root;
    MLDataSourceFlags Flags;
    } 	MLDataSource;

typedef 
enum _MLNotificationType
    {	Inserted	= 0x1,
	Deleted	= 0x2,
	Modified	= 0x4,
	Connected	= 0x8,
	Disconnected	= 0x10,
	ScanStarted	= 0x20,
	ScanFinished	= 0x40,
	WatchListModified	= 0x80,
	ScanResultCode	= 0x100
    } 	MLNotificationType;

typedef /* [public][public][public][switch_type] */ union __MIDL___MIDL_itf_mlibdll_0000_0000_0001
    {
    struct __MIDL___MIDL_itf_mlibdll_0000_0000_0002
        {
        ULONG entity;
        ULONGLONG id;
        ULONG logicalStorage;
        WCHAR fileURL[ 260 ];
        } 	itemInfo;
    struct __MIDL___MIDL_itf_mlibdll_0000_0000_0003
        {
        HRESULT hr;
        WCHAR location[ 260 ];
        } 	scanInfo;
    struct __MIDL___MIDL_itf_mlibdll_0000_0000_0004
        {
        WCHAR location[ 260 ];
        } 	storageInfo;
     /* Empty union arm */ 
    } 	MLNotificationData;

typedef struct _MLNotificationItem
    {
    MLNotificationType eventType;
    MLNotificationData eventData;
    } 	MLNotificationItem;

typedef struct _MLDSItem
    {
    BSTR URL;
    FILETIME ftTimeStamp;
    ULONGLONG cbFileSize;
    } 	MLDSItem;

typedef struct _MLRange
    {
    ULONG cSkip;
    ULONG cRequested;
    BOOL fReverse;
    } 	MLRange;

typedef struct _MLQueryFlags
    {
    BOOL includeChildren;
    BOOL includeFolders;
    } 	MLQueryFlags;

typedef 
enum _MLOperatorType
    {	EQU	= 0,
	NE	= ( EQU + 1 ) ,
	LT	= ( NE + 1 ) ,
	LE	= ( LT + 1 ) ,
	GT	= ( LE + 1 ) ,
	GE	= ( GT + 1 ) ,
	LIKE	= ( GE + 1 ) ,
	MAX_OP	= ( LIKE + 1 ) 
    } 	MLOperatorType;

typedef struct _MLSortOrder
    {
    BOOL descending;
    ULONG propertyId;
    } 	MLSortOrder;



extern RPC_IF_HANDLE __MIDL_itf_mlibdll_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mlibdll_0000_0000_v0_0_s_ifspec;

#ifndef __IMLSortOrder_INTERFACE_DEFINED__
#define __IMLSortOrder_INTERFACE_DEFINED__

/* interface IMLSortOrder */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IMLSortOrder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("379ECC33-EADC-454d-815D-5BF63EE199AC")
    IMLSortOrder : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Count( 
            /* [out] */ ULONG *pcSortOrders) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAt( 
            /* [in] */ ULONG index,
            /* [out] */ MLSortOrder **pSortOrder) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Compare( 
            /* [in] */ IMLSortOrder *pSortOrderOther,
            /* [out] */ BOOL *pfResult) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMLSortOrderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMLSortOrder * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMLSortOrder * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMLSortOrder * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Count )( 
            IMLSortOrder * This,
            /* [out] */ ULONG *pcSortOrders);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAt )( 
            IMLSortOrder * This,
            /* [in] */ ULONG index,
            /* [out] */ MLSortOrder **pSortOrder);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Compare )( 
            IMLSortOrder * This,
            /* [in] */ IMLSortOrder *pSortOrderOther,
            /* [out] */ BOOL *pfResult);
        
        END_INTERFACE
    } IMLSortOrderVtbl;

    interface IMLSortOrder
    {
        CONST_VTBL struct IMLSortOrderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMLSortOrder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMLSortOrder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMLSortOrder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMLSortOrder_Count(This,pcSortOrders)	\
    ( (This)->lpVtbl -> Count(This,pcSortOrders) ) 

#define IMLSortOrder_GetAt(This,index,pSortOrder)	\
    ( (This)->lpVtbl -> GetAt(This,index,pSortOrder) ) 

#define IMLSortOrder_Compare(This,pSortOrderOther,pfResult)	\
    ( (This)->lpVtbl -> Compare(This,pSortOrderOther,pfResult) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMLSortOrder_INTERFACE_DEFINED__ */


#ifndef __IMLSortOrderSet_INTERFACE_DEFINED__
#define __IMLSortOrderSet_INTERFACE_DEFINED__

/* interface IMLSortOrderSet */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IMLSortOrderSet;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1CFF49C8-5302-4eec-90A7-5C515E0F986B")
    IMLSortOrderSet : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Set( 
            /* [in] */ ULONG cSortOrder,
            /* [size_is][in] */ MLSortOrder *pSortOrder) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Dup( 
            /* [in] */ IMLSortOrder *pSortOrders) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMLSortOrderSetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMLSortOrderSet * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMLSortOrderSet * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMLSortOrderSet * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Set )( 
            IMLSortOrderSet * This,
            /* [in] */ ULONG cSortOrder,
            /* [size_is][in] */ MLSortOrder *pSortOrder);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Dup )( 
            IMLSortOrderSet * This,
            /* [in] */ IMLSortOrder *pSortOrders);
        
        END_INTERFACE
    } IMLSortOrderSetVtbl;

    interface IMLSortOrderSet
    {
        CONST_VTBL struct IMLSortOrderSetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMLSortOrderSet_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMLSortOrderSet_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMLSortOrderSet_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMLSortOrderSet_Set(This,cSortOrder,pSortOrder)	\
    ( (This)->lpVtbl -> Set(This,cSortOrder,pSortOrder) ) 

#define IMLSortOrderSet_Dup(This,pSortOrders)	\
    ( (This)->lpVtbl -> Dup(This,pSortOrders) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMLSortOrderSet_INTERFACE_DEFINED__ */


#ifndef __IMLPropertySet_INTERFACE_DEFINED__
#define __IMLPropertySet_INTERFACE_DEFINED__

/* interface IMLPropertySet */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IMLPropertySet;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6219E8FE-A728-4570-82F2-24E132E4D324")
    IMLPropertySet : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Count( 
            /* [out] */ ULONG *cPropertyBinding) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsWritable( 
            /* [out] */ BOOL *pfWritable) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE HasID( 
            /* [in] */ ULONG propertyID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetIDByIndex( 
            /* [in] */ ULONG iProperty,
            /* [out] */ ULONG *pPropertyID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetTypeByIndex( 
            /* [in] */ ULONG iProperty,
            /* [out] */ VARTYPE *pType) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetValid( 
            /* [in] */ ULONG propertyID,
            /* [out] */ BOOL *pfValid) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetBOOL( 
            /* [in] */ ULONG propertyID,
            /* [out] */ BOOL *pfValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetBOOL( 
            /* [in] */ ULONG propertyID,
            /* [in] */ BOOL fValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSHORT( 
            /* [in] */ ULONG propertyID,
            /* [out] */ SHORT *psValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetSHORT( 
            /* [in] */ ULONG propertyID,
            /* [in] */ SHORT sValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetLONG( 
            /* [in] */ ULONG propertyID,
            /* [out] */ LONG *plValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetLONG( 
            /* [in] */ ULONG propertyID,
            /* [in] */ LONG lValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetLONGLONG( 
            /* [in] */ ULONG propertyID,
            /* [out] */ LONGLONG *pllValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetLONGLONG( 
            /* [in] */ ULONG propertyID,
            /* [in] */ LONGLONG llValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDATE( 
            /* [in] */ ULONG propertyID,
            /* [out] */ MLDateTime *pdtValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetDATE( 
            /* [in] */ ULONG propertyID,
            /* [in] */ MLDateTime *pdtValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetBSTR( 
            /* [in] */ ULONG propertyID,
            /* [out] */ BSTR *pbstrValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetBSTR( 
            /* [in] */ ULONG propertyID,
            /* [in] */ BSTR bstrValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSTRING( 
            /* [in] */ ULONG propertyID,
            /* [out] */ WCHAR *pwchValue,
            /* [out] */ ULONG *pcchValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetSTRING( 
            /* [in] */ ULONG propertyID,
            /* [in] */ WCHAR *pwchValue,
            /* [in] */ ULONG cchValue) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMLPropertySetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMLPropertySet * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMLPropertySet * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMLPropertySet * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Count )( 
            IMLPropertySet * This,
            /* [out] */ ULONG *cPropertyBinding);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsWritable )( 
            IMLPropertySet * This,
            /* [out] */ BOOL *pfWritable);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HasID )( 
            IMLPropertySet * This,
            /* [in] */ ULONG propertyID);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIDByIndex )( 
            IMLPropertySet * This,
            /* [in] */ ULONG iProperty,
            /* [out] */ ULONG *pPropertyID);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTypeByIndex )( 
            IMLPropertySet * This,
            /* [in] */ ULONG iProperty,
            /* [out] */ VARTYPE *pType);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetValid )( 
            IMLPropertySet * This,
            /* [in] */ ULONG propertyID,
            /* [out] */ BOOL *pfValid);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetBOOL )( 
            IMLPropertySet * This,
            /* [in] */ ULONG propertyID,
            /* [out] */ BOOL *pfValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetBOOL )( 
            IMLPropertySet * This,
            /* [in] */ ULONG propertyID,
            /* [in] */ BOOL fValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSHORT )( 
            IMLPropertySet * This,
            /* [in] */ ULONG propertyID,
            /* [out] */ SHORT *psValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetSHORT )( 
            IMLPropertySet * This,
            /* [in] */ ULONG propertyID,
            /* [in] */ SHORT sValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetLONG )( 
            IMLPropertySet * This,
            /* [in] */ ULONG propertyID,
            /* [out] */ LONG *plValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetLONG )( 
            IMLPropertySet * This,
            /* [in] */ ULONG propertyID,
            /* [in] */ LONG lValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetLONGLONG )( 
            IMLPropertySet * This,
            /* [in] */ ULONG propertyID,
            /* [out] */ LONGLONG *pllValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetLONGLONG )( 
            IMLPropertySet * This,
            /* [in] */ ULONG propertyID,
            /* [in] */ LONGLONG llValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDATE )( 
            IMLPropertySet * This,
            /* [in] */ ULONG propertyID,
            /* [out] */ MLDateTime *pdtValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDATE )( 
            IMLPropertySet * This,
            /* [in] */ ULONG propertyID,
            /* [in] */ MLDateTime *pdtValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetBSTR )( 
            IMLPropertySet * This,
            /* [in] */ ULONG propertyID,
            /* [out] */ BSTR *pbstrValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetBSTR )( 
            IMLPropertySet * This,
            /* [in] */ ULONG propertyID,
            /* [in] */ BSTR bstrValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSTRING )( 
            IMLPropertySet * This,
            /* [in] */ ULONG propertyID,
            /* [out] */ WCHAR *pwchValue,
            /* [out] */ ULONG *pcchValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetSTRING )( 
            IMLPropertySet * This,
            /* [in] */ ULONG propertyID,
            /* [in] */ WCHAR *pwchValue,
            /* [in] */ ULONG cchValue);
        
        END_INTERFACE
    } IMLPropertySetVtbl;

    interface IMLPropertySet
    {
        CONST_VTBL struct IMLPropertySetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMLPropertySet_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMLPropertySet_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMLPropertySet_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMLPropertySet_Count(This,cPropertyBinding)	\
    ( (This)->lpVtbl -> Count(This,cPropertyBinding) ) 

#define IMLPropertySet_IsWritable(This,pfWritable)	\
    ( (This)->lpVtbl -> IsWritable(This,pfWritable) ) 

#define IMLPropertySet_HasID(This,propertyID)	\
    ( (This)->lpVtbl -> HasID(This,propertyID) ) 

#define IMLPropertySet_GetIDByIndex(This,iProperty,pPropertyID)	\
    ( (This)->lpVtbl -> GetIDByIndex(This,iProperty,pPropertyID) ) 

#define IMLPropertySet_GetTypeByIndex(This,iProperty,pType)	\
    ( (This)->lpVtbl -> GetTypeByIndex(This,iProperty,pType) ) 

#define IMLPropertySet_GetValid(This,propertyID,pfValid)	\
    ( (This)->lpVtbl -> GetValid(This,propertyID,pfValid) ) 

#define IMLPropertySet_GetBOOL(This,propertyID,pfValue)	\
    ( (This)->lpVtbl -> GetBOOL(This,propertyID,pfValue) ) 

#define IMLPropertySet_SetBOOL(This,propertyID,fValue)	\
    ( (This)->lpVtbl -> SetBOOL(This,propertyID,fValue) ) 

#define IMLPropertySet_GetSHORT(This,propertyID,psValue)	\
    ( (This)->lpVtbl -> GetSHORT(This,propertyID,psValue) ) 

#define IMLPropertySet_SetSHORT(This,propertyID,sValue)	\
    ( (This)->lpVtbl -> SetSHORT(This,propertyID,sValue) ) 

#define IMLPropertySet_GetLONG(This,propertyID,plValue)	\
    ( (This)->lpVtbl -> GetLONG(This,propertyID,plValue) ) 

#define IMLPropertySet_SetLONG(This,propertyID,lValue)	\
    ( (This)->lpVtbl -> SetLONG(This,propertyID,lValue) ) 

#define IMLPropertySet_GetLONGLONG(This,propertyID,pllValue)	\
    ( (This)->lpVtbl -> GetLONGLONG(This,propertyID,pllValue) ) 

#define IMLPropertySet_SetLONGLONG(This,propertyID,llValue)	\
    ( (This)->lpVtbl -> SetLONGLONG(This,propertyID,llValue) ) 

#define IMLPropertySet_GetDATE(This,propertyID,pdtValue)	\
    ( (This)->lpVtbl -> GetDATE(This,propertyID,pdtValue) ) 

#define IMLPropertySet_SetDATE(This,propertyID,pdtValue)	\
    ( (This)->lpVtbl -> SetDATE(This,propertyID,pdtValue) ) 

#define IMLPropertySet_GetBSTR(This,propertyID,pbstrValue)	\
    ( (This)->lpVtbl -> GetBSTR(This,propertyID,pbstrValue) ) 

#define IMLPropertySet_SetBSTR(This,propertyID,bstrValue)	\
    ( (This)->lpVtbl -> SetBSTR(This,propertyID,bstrValue) ) 

#define IMLPropertySet_GetSTRING(This,propertyID,pwchValue,pcchValue)	\
    ( (This)->lpVtbl -> GetSTRING(This,propertyID,pwchValue,pcchValue) ) 

#define IMLPropertySet_SetSTRING(This,propertyID,pwchValue,cchValue)	\
    ( (This)->lpVtbl -> SetSTRING(This,propertyID,pwchValue,cchValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMLPropertySet_INTERFACE_DEFINED__ */


#ifndef __IMLQuery_INTERFACE_DEFINED__
#define __IMLQuery_INTERFACE_DEFINED__

/* interface IMLQuery */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IMLQuery;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("811DCA37-22F6-4508-BBDA-4D22CE56BBFE")
    IMLQuery : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetMAXResultsCount( 
            /* [in] */ ULONG cResultCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddResultID( 
            /* [in] */ ULONG propertyID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AndBOOL( 
            /* [in] */ ULONG propertyID,
            /* [in] */ MLOperatorType operatorType,
            /* [in] */ BOOL fValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AndSHORT( 
            /* [in] */ ULONG propertyID,
            /* [in] */ MLOperatorType operatorType,
            /* [in] */ SHORT sValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AndLONG( 
            /* [in] */ ULONG propertyID,
            /* [in] */ MLOperatorType operatorType,
            /* [in] */ LONG lValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AndLONGLONG( 
            /* [in] */ ULONG propertyID,
            /* [in] */ MLOperatorType operatorType,
            /* [in] */ LONGLONG llValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AndDATE( 
            /* [in] */ ULONG propertyID,
            /* [in] */ MLOperatorType operatorType,
            /* [in] */ MLDateTime *pdtValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AndBSTR( 
            /* [in] */ ULONG propertyID,
            /* [in] */ MLOperatorType operatorType,
            /* [in] */ BSTR bstrValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AndSTRING( 
            /* [in] */ ULONG propertyID,
            /* [in] */ MLOperatorType operatorType,
            /* [in] */ WCHAR *pwchValue,
            /* [in] */ ULONG cchValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetDistinct( 
            /* [in] */ BOOL fDistinct) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Prepare( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetResultCount( 
            /* [out] */ ULONG *pcResults) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetResultByIndex( 
            /* [in] */ ULONG iResult,
            /* [out] */ IMLPropertySet **pPropertySet) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMLQueryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMLQuery * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMLQuery * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMLQuery * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IMLQuery * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetMAXResultsCount )( 
            IMLQuery * This,
            /* [in] */ ULONG cResultCount);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddResultID )( 
            IMLQuery * This,
            /* [in] */ ULONG propertyID);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AndBOOL )( 
            IMLQuery * This,
            /* [in] */ ULONG propertyID,
            /* [in] */ MLOperatorType operatorType,
            /* [in] */ BOOL fValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AndSHORT )( 
            IMLQuery * This,
            /* [in] */ ULONG propertyID,
            /* [in] */ MLOperatorType operatorType,
            /* [in] */ SHORT sValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AndLONG )( 
            IMLQuery * This,
            /* [in] */ ULONG propertyID,
            /* [in] */ MLOperatorType operatorType,
            /* [in] */ LONG lValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AndLONGLONG )( 
            IMLQuery * This,
            /* [in] */ ULONG propertyID,
            /* [in] */ MLOperatorType operatorType,
            /* [in] */ LONGLONG llValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AndDATE )( 
            IMLQuery * This,
            /* [in] */ ULONG propertyID,
            /* [in] */ MLOperatorType operatorType,
            /* [in] */ MLDateTime *pdtValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AndBSTR )( 
            IMLQuery * This,
            /* [in] */ ULONG propertyID,
            /* [in] */ MLOperatorType operatorType,
            /* [in] */ BSTR bstrValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AndSTRING )( 
            IMLQuery * This,
            /* [in] */ ULONG propertyID,
            /* [in] */ MLOperatorType operatorType,
            /* [in] */ WCHAR *pwchValue,
            /* [in] */ ULONG cchValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDistinct )( 
            IMLQuery * This,
            /* [in] */ BOOL fDistinct);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Prepare )( 
            IMLQuery * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetResultCount )( 
            IMLQuery * This,
            /* [out] */ ULONG *pcResults);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetResultByIndex )( 
            IMLQuery * This,
            /* [in] */ ULONG iResult,
            /* [out] */ IMLPropertySet **pPropertySet);
        
        END_INTERFACE
    } IMLQueryVtbl;

    interface IMLQuery
    {
        CONST_VTBL struct IMLQueryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMLQuery_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMLQuery_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMLQuery_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMLQuery_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IMLQuery_SetMAXResultsCount(This,cResultCount)	\
    ( (This)->lpVtbl -> SetMAXResultsCount(This,cResultCount) ) 

#define IMLQuery_AddResultID(This,propertyID)	\
    ( (This)->lpVtbl -> AddResultID(This,propertyID) ) 

#define IMLQuery_AndBOOL(This,propertyID,operatorType,fValue)	\
    ( (This)->lpVtbl -> AndBOOL(This,propertyID,operatorType,fValue) ) 

#define IMLQuery_AndSHORT(This,propertyID,operatorType,sValue)	\
    ( (This)->lpVtbl -> AndSHORT(This,propertyID,operatorType,sValue) ) 

#define IMLQuery_AndLONG(This,propertyID,operatorType,lValue)	\
    ( (This)->lpVtbl -> AndLONG(This,propertyID,operatorType,lValue) ) 

#define IMLQuery_AndLONGLONG(This,propertyID,operatorType,llValue)	\
    ( (This)->lpVtbl -> AndLONGLONG(This,propertyID,operatorType,llValue) ) 

#define IMLQuery_AndDATE(This,propertyID,operatorType,pdtValue)	\
    ( (This)->lpVtbl -> AndDATE(This,propertyID,operatorType,pdtValue) ) 

#define IMLQuery_AndBSTR(This,propertyID,operatorType,bstrValue)	\
    ( (This)->lpVtbl -> AndBSTR(This,propertyID,operatorType,bstrValue) ) 

#define IMLQuery_AndSTRING(This,propertyID,operatorType,pwchValue,cchValue)	\
    ( (This)->lpVtbl -> AndSTRING(This,propertyID,operatorType,pwchValue,cchValue) ) 

#define IMLQuery_SetDistinct(This,fDistinct)	\
    ( (This)->lpVtbl -> SetDistinct(This,fDistinct) ) 

#define IMLQuery_Prepare(This)	\
    ( (This)->lpVtbl -> Prepare(This) ) 

#define IMLQuery_GetResultCount(This,pcResults)	\
    ( (This)->lpVtbl -> GetResultCount(This,pcResults) ) 

#define IMLQuery_GetResultByIndex(This,iResult,pPropertySet)	\
    ( (This)->lpVtbl -> GetResultByIndex(This,iResult,pPropertySet) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMLQuery_INTERFACE_DEFINED__ */


#ifndef __IMLUserStore_INTERFACE_DEFINED__
#define __IMLUserStore_INTERFACE_DEFINED__

/* interface IMLUserStore */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IMLUserStore;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("33F8A19B-D842-4911-9681-1063745B3936")
    IMLUserStore : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetValue( 
            /* [in] */ BSTR applicationName,
            /* [in] */ BSTR key,
            /* [out] */ BSTR *pValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PutValue( 
            /* [in] */ BSTR applicationName,
            /* [in] */ BSTR key,
            /* [in] */ BSTR pValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteKey( 
            /* [in] */ BSTR applicationName,
            /* [in] */ BSTR key) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMLUserStoreVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMLUserStore * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMLUserStore * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMLUserStore * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetValue )( 
            IMLUserStore * This,
            /* [in] */ BSTR applicationName,
            /* [in] */ BSTR key,
            /* [out] */ BSTR *pValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutValue )( 
            IMLUserStore * This,
            /* [in] */ BSTR applicationName,
            /* [in] */ BSTR key,
            /* [in] */ BSTR pValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteKey )( 
            IMLUserStore * This,
            /* [in] */ BSTR applicationName,
            /* [in] */ BSTR key);
        
        END_INTERFACE
    } IMLUserStoreVtbl;

    interface IMLUserStore
    {
        CONST_VTBL struct IMLUserStoreVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMLUserStore_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMLUserStore_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMLUserStore_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMLUserStore_GetValue(This,applicationName,key,pValue)	\
    ( (This)->lpVtbl -> GetValue(This,applicationName,key,pValue) ) 

#define IMLUserStore_PutValue(This,applicationName,key,pValue)	\
    ( (This)->lpVtbl -> PutValue(This,applicationName,key,pValue) ) 

#define IMLUserStore_DeleteKey(This,applicationName,key)	\
    ( (This)->lpVtbl -> DeleteKey(This,applicationName,key) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMLUserStore_INTERFACE_DEFINED__ */


#ifndef __IMLNotify_INTERFACE_DEFINED__
#define __IMLNotify_INTERFACE_DEFINED__

/* interface IMLNotify */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IMLNotify;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9033B38E-89E0-4ee2-9F88-6205D7A86AAD")
    IMLNotify : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ ULONG cNotificationItems,
            /* [size_is][in] */ MLNotificationItem *rgNotificationItems) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMLNotifyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMLNotify * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMLNotify * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMLNotify * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IMLNotify * This,
            /* [in] */ ULONG cNotificationItems,
            /* [size_is][in] */ MLNotificationItem *rgNotificationItems);
        
        END_INTERFACE
    } IMLNotifyVtbl;

    interface IMLNotify
    {
        CONST_VTBL struct IMLNotifyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMLNotify_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMLNotify_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMLNotify_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMLNotify_Notify(This,cNotificationItems,rgNotificationItems)	\
    ( (This)->lpVtbl -> Notify(This,cNotificationItems,rgNotificationItems) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMLNotify_INTERFACE_DEFINED__ */


#ifndef __IMLNotificationManager_INTERFACE_DEFINED__
#define __IMLNotificationManager_INTERFACE_DEFINED__

/* interface IMLNotificationManager */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IMLNotificationManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0B8D1C1F-7C9B-4b09-AE91-2A0CB78F3B16")
    IMLNotificationManager : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Subscribe( 
            /* [in] */ IMLNotify *notificationPort,
            /* [out] */ DWORD *pdwHandle,
            /* [in] */ BOOL fNotifySelf) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UnSubscribe( 
            /* [in] */ DWORD dwHandle) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMLNotificationManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMLNotificationManager * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMLNotificationManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMLNotificationManager * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Subscribe )( 
            IMLNotificationManager * This,
            /* [in] */ IMLNotify *notificationPort,
            /* [out] */ DWORD *pdwHandle,
            /* [in] */ BOOL fNotifySelf);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UnSubscribe )( 
            IMLNotificationManager * This,
            /* [in] */ DWORD dwHandle);
        
        END_INTERFACE
    } IMLNotificationManagerVtbl;

    interface IMLNotificationManager
    {
        CONST_VTBL struct IMLNotificationManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMLNotificationManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMLNotificationManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMLNotificationManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMLNotificationManager_Subscribe(This,notificationPort,pdwHandle,fNotifySelf)	\
    ( (This)->lpVtbl -> Subscribe(This,notificationPort,pdwHandle,fNotifySelf) ) 

#define IMLNotificationManager_UnSubscribe(This,dwHandle)	\
    ( (This)->lpVtbl -> UnSubscribe(This,dwHandle) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMLNotificationManager_INTERFACE_DEFINED__ */


#ifndef __IMLFactory_INTERFACE_DEFINED__
#define __IMLFactory_INTERFACE_DEFINED__

/* interface IMLFactory */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IMLFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DD95E8CC-A3FB-4c1b-AD4B-6A3965ED40A9")
    IMLFactory : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateMLSortOrder( 
            /* [out] */ IMLSortOrder **pSortOrder) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateMLPropertySet( 
            /* [out] */ IMLPropertySet **pPropertySet) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateMLQuery( 
            /* [out] */ IMLQuery **ppQuery) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateStreamOnFile( 
            /* [in] */ BSTR bstrFile,
            /* [in] */ BOOL fRead,
            /* [out] */ IStream **pStream) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMLFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMLFactory * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMLFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMLFactory * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateMLSortOrder )( 
            IMLFactory * This,
            /* [out] */ IMLSortOrder **pSortOrder);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateMLPropertySet )( 
            IMLFactory * This,
            /* [out] */ IMLPropertySet **pPropertySet);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateMLQuery )( 
            IMLFactory * This,
            /* [out] */ IMLQuery **ppQuery);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateStreamOnFile )( 
            IMLFactory * This,
            /* [in] */ BSTR bstrFile,
            /* [in] */ BOOL fRead,
            /* [out] */ IStream **pStream);
        
        END_INTERFACE
    } IMLFactoryVtbl;

    interface IMLFactory
    {
        CONST_VTBL struct IMLFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMLFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMLFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMLFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMLFactory_CreateMLSortOrder(This,pSortOrder)	\
    ( (This)->lpVtbl -> CreateMLSortOrder(This,pSortOrder) ) 

#define IMLFactory_CreateMLPropertySet(This,pPropertySet)	\
    ( (This)->lpVtbl -> CreateMLPropertySet(This,pPropertySet) ) 

#define IMLFactory_CreateMLQuery(This,ppQuery)	\
    ( (This)->lpVtbl -> CreateMLQuery(This,ppQuery) ) 

#define IMLFactory_CreateStreamOnFile(This,bstrFile,fRead,pStream)	\
    ( (This)->lpVtbl -> CreateStreamOnFile(This,bstrFile,fRead,pStream) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMLFactory_INTERFACE_DEFINED__ */


#ifndef __IMLPushQueue_INTERFACE_DEFINED__
#define __IMLPushQueue_INTERFACE_DEFINED__

/* interface IMLPushQueue */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IMLPushQueue;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C390FB80-6295-426a-BF16-CC87AB8029F1")
    IMLPushQueue : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Start( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRunningState( 
            /* [out] */ BOOL *pIsRunning) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EnqueueLocation( 
            /* [in] */ MLDataSource datasource,
            /* [in] */ MLQueryFlags flags,
            /* [in] */ BSTR location) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddWatchedLocation( 
            /* [in] */ MLDataSource datasource,
            /* [in] */ BSTR location,
            /* [out] */ BOOL *pHandled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemoveWatchedLocation( 
            /* [in] */ MLDataSource datasource,
            /* [in] */ BSTR location,
            /* [out] */ BOOL *pHandled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetWatchListCount( 
            /* [in] */ MLDataSource datasource,
            /* [out] */ ULONG *pcWatchList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetWatchList( 
            /* [in] */ MLDataSource datasource,
            /* [out] */ BSTR **prgWatchList,
            /* [out] */ ULONG *pcWatchList) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMLPushQueueVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMLPushQueue * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMLPushQueue * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMLPushQueue * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Start )( 
            IMLPushQueue * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Stop )( 
            IMLPushQueue * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRunningState )( 
            IMLPushQueue * This,
            /* [out] */ BOOL *pIsRunning);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *EnqueueLocation )( 
            IMLPushQueue * This,
            /* [in] */ MLDataSource datasource,
            /* [in] */ MLQueryFlags flags,
            /* [in] */ BSTR location);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IMLPushQueue * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddWatchedLocation )( 
            IMLPushQueue * This,
            /* [in] */ MLDataSource datasource,
            /* [in] */ BSTR location,
            /* [out] */ BOOL *pHandled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveWatchedLocation )( 
            IMLPushQueue * This,
            /* [in] */ MLDataSource datasource,
            /* [in] */ BSTR location,
            /* [out] */ BOOL *pHandled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetWatchListCount )( 
            IMLPushQueue * This,
            /* [in] */ MLDataSource datasource,
            /* [out] */ ULONG *pcWatchList);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetWatchList )( 
            IMLPushQueue * This,
            /* [in] */ MLDataSource datasource,
            /* [out] */ BSTR **prgWatchList,
            /* [out] */ ULONG *pcWatchList);
        
        END_INTERFACE
    } IMLPushQueueVtbl;

    interface IMLPushQueue
    {
        CONST_VTBL struct IMLPushQueueVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMLPushQueue_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMLPushQueue_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMLPushQueue_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMLPushQueue_Start(This)	\
    ( (This)->lpVtbl -> Start(This) ) 

#define IMLPushQueue_Stop(This)	\
    ( (This)->lpVtbl -> Stop(This) ) 

#define IMLPushQueue_GetRunningState(This,pIsRunning)	\
    ( (This)->lpVtbl -> GetRunningState(This,pIsRunning) ) 

#define IMLPushQueue_EnqueueLocation(This,datasource,flags,location)	\
    ( (This)->lpVtbl -> EnqueueLocation(This,datasource,flags,location) ) 

#define IMLPushQueue_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IMLPushQueue_AddWatchedLocation(This,datasource,location,pHandled)	\
    ( (This)->lpVtbl -> AddWatchedLocation(This,datasource,location,pHandled) ) 

#define IMLPushQueue_RemoveWatchedLocation(This,datasource,location,pHandled)	\
    ( (This)->lpVtbl -> RemoveWatchedLocation(This,datasource,location,pHandled) ) 

#define IMLPushQueue_GetWatchListCount(This,datasource,pcWatchList)	\
    ( (This)->lpVtbl -> GetWatchListCount(This,datasource,pcWatchList) ) 

#define IMLPushQueue_GetWatchList(This,datasource,prgWatchList,pcWatchList)	\
    ( (This)->lpVtbl -> GetWatchList(This,datasource,prgWatchList,pcWatchList) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMLPushQueue_INTERFACE_DEFINED__ */


#ifndef __IMLStoreMetadata_INTERFACE_DEFINED__
#define __IMLStoreMetadata_INTERFACE_DEFINED__

/* interface IMLStoreMetadata */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IMLStoreMetadata;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3CE921FD-ED44-4bae-AB74-119BFC596C52")
    IMLStoreMetadata : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StoreMetadata( 
            /* [in] */ MLDSItem *pFile,
            /* [in] */ ULONG entityId,
            /* [in] */ IMLPropertySet *pPropertySet) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMLStoreMetadataVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMLStoreMetadata * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMLStoreMetadata * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMLStoreMetadata * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *StoreMetadata )( 
            IMLStoreMetadata * This,
            /* [in] */ MLDSItem *pFile,
            /* [in] */ ULONG entityId,
            /* [in] */ IMLPropertySet *pPropertySet);
        
        END_INTERFACE
    } IMLStoreMetadataVtbl;

    interface IMLStoreMetadata
    {
        CONST_VTBL struct IMLStoreMetadataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMLStoreMetadata_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMLStoreMetadata_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMLStoreMetadata_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMLStoreMetadata_StoreMetadata(This,pFile,entityId,pPropertySet)	\
    ( (This)->lpVtbl -> StoreMetadata(This,pFile,entityId,pPropertySet) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMLStoreMetadata_INTERFACE_DEFINED__ */


#ifndef __IMLCore_INTERFACE_DEFINED__
#define __IMLCore_INTERFACE_DEFINED__

/* interface IMLCore */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IMLCore;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("116A00E5-9507-4DDE-AD26-99239F0479A4")
    IMLCore : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDataSources( 
            /* [in] */ BOOL fForceRefresh,
            /* [in] */ USHORT *pcDataSources,
            /* [size_is][size_is][out] */ MLDataSource **prgDataSources) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ScanLocation( 
            /* [in] */ MLDataSource datasource,
            /* [in] */ MLQueryFlags flags,
            /* [in] */ BSTR location) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CountItems( 
            /* [in] */ IMLQuery *pQuery,
            /* [out] */ ULONG *pcCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RunQuery( 
            /* [in] */ IMLQuery *pQuery,
            /* [in] */ MLRange range,
            /* [in] */ IMLSortOrder *sortOrder) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InsertItem( 
            /* [in] */ ULONG entityID,
            /* [in] */ IMLPropertySet *pPropertySet) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UpdateItems( 
            /* [in] */ IMLQuery *pQuery,
            /* [in] */ IMLPropertySet *pPropertySet) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteItems( 
            /* [in] */ IMLQuery *pQuery) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryLocation( 
            /* [in] */ MLDataSource datasource,
            /* [in] */ MLQueryFlags flags,
            /* [in] */ BSTR location,
            /* [in] */ IMLQuery *pQuery,
            /* [in] */ MLRange range,
            /* [in] */ IMLSortOrder *sortOrder,
            /* [in] */ IMLStoreMetadata *pStoreMetadataCallback) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PurgeDatabase( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetNotificationManager( 
            /* [out] */ IMLNotificationManager **pNotificationManager) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetUserStore( 
            /* [out] */ IMLUserStore **pUserStore) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetFactory( 
            /* [out] */ IMLFactory **pFactory) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPushQueue( 
            /* [out] */ IMLPushQueue **pPushQueue) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMLCoreVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMLCore * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMLCore * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMLCore * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDataSources )( 
            IMLCore * This,
            /* [in] */ BOOL fForceRefresh,
            /* [in] */ USHORT *pcDataSources,
            /* [size_is][size_is][out] */ MLDataSource **prgDataSources);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ScanLocation )( 
            IMLCore * This,
            /* [in] */ MLDataSource datasource,
            /* [in] */ MLQueryFlags flags,
            /* [in] */ BSTR location);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CountItems )( 
            IMLCore * This,
            /* [in] */ IMLQuery *pQuery,
            /* [out] */ ULONG *pcCount);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RunQuery )( 
            IMLCore * This,
            /* [in] */ IMLQuery *pQuery,
            /* [in] */ MLRange range,
            /* [in] */ IMLSortOrder *sortOrder);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InsertItem )( 
            IMLCore * This,
            /* [in] */ ULONG entityID,
            /* [in] */ IMLPropertySet *pPropertySet);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UpdateItems )( 
            IMLCore * This,
            /* [in] */ IMLQuery *pQuery,
            /* [in] */ IMLPropertySet *pPropertySet);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteItems )( 
            IMLCore * This,
            /* [in] */ IMLQuery *pQuery);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryLocation )( 
            IMLCore * This,
            /* [in] */ MLDataSource datasource,
            /* [in] */ MLQueryFlags flags,
            /* [in] */ BSTR location,
            /* [in] */ IMLQuery *pQuery,
            /* [in] */ MLRange range,
            /* [in] */ IMLSortOrder *sortOrder,
            /* [in] */ IMLStoreMetadata *pStoreMetadataCallback);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PurgeDatabase )( 
            IMLCore * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNotificationManager )( 
            IMLCore * This,
            /* [out] */ IMLNotificationManager **pNotificationManager);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetUserStore )( 
            IMLCore * This,
            /* [out] */ IMLUserStore **pUserStore);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFactory )( 
            IMLCore * This,
            /* [out] */ IMLFactory **pFactory);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPushQueue )( 
            IMLCore * This,
            /* [out] */ IMLPushQueue **pPushQueue);
        
        END_INTERFACE
    } IMLCoreVtbl;

    interface IMLCore
    {
        CONST_VTBL struct IMLCoreVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMLCore_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMLCore_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMLCore_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMLCore_GetDataSources(This,fForceRefresh,pcDataSources,prgDataSources)	\
    ( (This)->lpVtbl -> GetDataSources(This,fForceRefresh,pcDataSources,prgDataSources) ) 

#define IMLCore_ScanLocation(This,datasource,flags,location)	\
    ( (This)->lpVtbl -> ScanLocation(This,datasource,flags,location) ) 

#define IMLCore_CountItems(This,pQuery,pcCount)	\
    ( (This)->lpVtbl -> CountItems(This,pQuery,pcCount) ) 

#define IMLCore_RunQuery(This,pQuery,range,sortOrder)	\
    ( (This)->lpVtbl -> RunQuery(This,pQuery,range,sortOrder) ) 

#define IMLCore_InsertItem(This,entityID,pPropertySet)	\
    ( (This)->lpVtbl -> InsertItem(This,entityID,pPropertySet) ) 

#define IMLCore_UpdateItems(This,pQuery,pPropertySet)	\
    ( (This)->lpVtbl -> UpdateItems(This,pQuery,pPropertySet) ) 

#define IMLCore_DeleteItems(This,pQuery)	\
    ( (This)->lpVtbl -> DeleteItems(This,pQuery) ) 

#define IMLCore_QueryLocation(This,datasource,flags,location,pQuery,range,sortOrder,pStoreMetadataCallback)	\
    ( (This)->lpVtbl -> QueryLocation(This,datasource,flags,location,pQuery,range,sortOrder,pStoreMetadataCallback) ) 

#define IMLCore_PurgeDatabase(This)	\
    ( (This)->lpVtbl -> PurgeDatabase(This) ) 

#define IMLCore_GetNotificationManager(This,pNotificationManager)	\
    ( (This)->lpVtbl -> GetNotificationManager(This,pNotificationManager) ) 

#define IMLCore_GetUserStore(This,pUserStore)	\
    ( (This)->lpVtbl -> GetUserStore(This,pUserStore) ) 

#define IMLCore_GetFactory(This,pFactory)	\
    ( (This)->lpVtbl -> GetFactory(This,pFactory) ) 

#define IMLCore_GetPushQueue(This,pPushQueue)	\
    ( (This)->lpVtbl -> GetPushQueue(This,pPushQueue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMLCore_INTERFACE_DEFINED__ */



#ifndef __MLibDll_LIBRARY_DEFINED__
#define __MLibDll_LIBRARY_DEFINED__

/* library MLibDll */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_MLibDll;

EXTERN_C const CLSID CLSID_MLCore;

#ifdef __cplusplus

class DECLSPEC_UUID("CE7919AB-BF65-4ABB-A5EB-16B1B8F0DD7D")
MLCore;
#endif
#endif /* __MLibDll_LIBRARY_DEFINED__ */

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


