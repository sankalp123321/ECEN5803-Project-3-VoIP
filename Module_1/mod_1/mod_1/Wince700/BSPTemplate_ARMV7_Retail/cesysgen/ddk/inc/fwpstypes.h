

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0543 */
/* Compiler settings for fwpstypes.idl:
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


#ifndef __fwpstypes_h__
#define __fwpstypes_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "fwptypes.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_fwpstypes_0000_0000 */
/* [local] */ 

#if _MSC_VER >=  800
#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning(disable:4201)
#endif
typedef struct FWPS_FILTER_CONDITION0_
    {
    UINT16 fieldId;
    UINT16 reserved;
    FWP_MATCH_TYPE matchType;
    FWP_CONDITION_VALUE0 conditionValue;
    } 	FWPS_FILTER_CONDITION0;

typedef struct FWPS_ACTION0_
    {
    FWP_ACTION_TYPE type;
    UINT32 calloutId;
    } 	FWPS_ACTION0;

#define FWPS_FILTER_FLAG_CLEAR_ACTION_RIGHT    (0x0001)
#define FWPS_FILTER_FLAG_PERMIT_IF_CALLOUT_UNREGISTERED   (0x0002)
typedef struct FWPM_PROVIDER_CONTEXT0_ FWPM_PROVIDER_CONTEXT0;

typedef struct FWPS_FILTER0_
    {
    UNALIGNEDUINT64 filterId;
    FWP_VALUE0 weight;
    UINT16 subLayerWeight;
    UINT16 flags;
    UINT32 numFilterConditions;
    FWPS_FILTER_CONDITION0 *filterCondition;
    FWPS_ACTION0 action;
    UNALIGNEDUINT64 context;
    FWPM_PROVIDER_CONTEXT0 *providerContext;
    } 	FWPS_FILTER0;

typedef struct FWPS_INCOMING_VALUE0_
    {
    FWP_VALUE0 value;
    } 	FWPS_INCOMING_VALUE0;

typedef struct FWPS_INCOMING_VALUES0_
    {
    UINT16 layerId;
    UINT32 valueCount;
    FWPS_INCOMING_VALUE0 *incomingValue;
    } 	FWPS_INCOMING_VALUES0;

typedef 
enum FWPS_DISCARD_MODULE0_
    {	FWPS_DISCARD_MODULE_NETWORK	= 0,
	FWPS_DISCARD_MODULE_TRANSPORT	= ( FWPS_DISCARD_MODULE_NETWORK + 1 ) ,
	FWPS_DISCARD_MODULE_GENERAL	= ( FWPS_DISCARD_MODULE_TRANSPORT + 1 ) ,
	FWPS_DISCARD_MODULE_MAX	= ( FWPS_DISCARD_MODULE_GENERAL + 1 ) 
    } 	FWPS_DISCARD_MODULE0;

typedef 
enum FWPS_GENERAL_DISCARD_REASON_
    {	FWPS_DISCARD_FIREWALL_POLICY	= 0,
	FWPS_DISCARD_IPSEC	= ( FWPS_DISCARD_FIREWALL_POLICY + 1 ) ,
	FWPS_GENERAL_DISCARD_REASON_MAX	= ( FWPS_DISCARD_IPSEC + 1 ) 
    } 	FWPS_GENERAL_DISCARD_REASON;

typedef struct FWPS_DISCARD_METADATA0_
    {
    FWPS_DISCARD_MODULE0 discardModule;
    UINT32 discardReason;
    UNALIGNEDUINT64 filterId;
    } 	FWPS_DISCARD_METADATA0;

typedef struct FWPS_INBOUND_FRAGMENT_METADATA0_
    {
    UINT32 fragmentIdentification;
    UINT16 fragmentOffset;
    ULONG fragmentLength;
    } 	FWPS_INBOUND_FRAGMENT_METADATA0;

#define FWPS_INCOMING_FLAG_CACHE_SAFE                         (0x00000001)
#define FWPS_INCOMING_FLAG_ENFORCE_QUERY                      (0x00000002)
#define FWPS_INCOMING_FLAG_ABSORB                             (0x00000004)
#define FWPS_INCOMING_FLAG_CONNECTION_FAILING_INDICATION      (0x00000008)
#define FWPS_RIGHT_ACTION_WRITE          (0x00000001)
#define FWPS_CLASSIFY_OUT_FLAG_ABSORB                      (0x00000001)
#define FWPS_CLASSIFY_OUT_FLAG_BUFFER_LIMIT_REACHED        (0x00000002)
#define FWPS_CLASSIFY_OUT_FLAG_NO_MORE_DATA                (0x00000004)
typedef struct FWPS_CLASSIFY_OUT0_
    {
    FWP_ACTION_TYPE actionType;
    UNALIGNEDUINT64 outContext;
    UNALIGNEDUINT64 filterId;
    UINT32 rights;
    UINT32 flags;
    UINT32 reserved;
    } 	FWPS_CLASSIFY_OUT0;

typedef 
enum FWPS_CALLOUT_NOTIFY_TYPE_
    {	FWPS_CALLOUT_NOTIFY_ADD_FILTER	= 0,
	FWPS_CALLOUT_NOTIFY_DELETE_FILTER	= ( FWPS_CALLOUT_NOTIFY_ADD_FILTER + 1 ) ,
	FWPS_CALLOUT_NOTIFY_TYPE_MAX	= ( FWPS_CALLOUT_NOTIFY_DELETE_FILTER + 1 ) 
    } 	FWPS_CALLOUT_NOTIFY_TYPE;

#if _MSC_VER >=  800
#if _MSC_VER >= 1200
#pragma warning(pop)
#else
#pragma warning(default:4201)
#endif
#endif


extern RPC_IF_HANDLE __MIDL_itf_fwpstypes_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fwpstypes_0000_0000_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


