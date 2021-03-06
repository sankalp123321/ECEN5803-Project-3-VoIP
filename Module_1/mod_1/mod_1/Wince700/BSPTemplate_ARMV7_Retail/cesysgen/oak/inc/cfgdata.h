

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0543 */
/* Compiler settings for cfgdata.idl:
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


#ifndef __cfgdata_h__
#define __cfgdata_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_cfgdata_0000_0000 */
/* [local] */ 

typedef 
enum ConfigDataType
    {	CFG_DATATYPE_INTEGER	= 0,
	CFG_DATATYPE_STRING	= ( CFG_DATATYPE_INTEGER + 1 ) ,
	CFG_DATATYPE_FLOAT	= ( CFG_DATATYPE_STRING + 1 ) ,
	CFG_DATATYPE_DATE	= ( CFG_DATATYPE_FLOAT + 1 ) ,
	CFG_DATATYPE_TIME	= ( CFG_DATATYPE_DATE + 1 ) ,
	CFG_DATATYPE_BOOLEAN	= ( CFG_DATATYPE_TIME + 1 ) ,
	CFG_DATATYPE_BINARY	= ( CFG_DATATYPE_BOOLEAN + 1 ) ,
	CFG_DATATYPE_MULTIPLE_STRING	= ( CFG_DATATYPE_BINARY + 1 ) ,
	CFG_DATATYPE_NODE	= ( CFG_DATATYPE_MULTIPLE_STRING + 1 ) ,
	CFG_DATATYPE_NULL	= ( CFG_DATATYPE_NODE + 1 ) ,
	CFG_DATATYPE_UNKNOWN	= ( CFG_DATATYPE_NULL + 1 ) 
    } 	CFG_DATATYPE;

typedef enum ConfigDataType *PCFG_DATATYPE;



extern RPC_IF_HANDLE __MIDL_itf_cfgdata_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cfgdata_0000_0000_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


