

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0543 */
/* Compiler settings for provdpu.idl:
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

#ifndef __provdpu_h__
#define __provdpu_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ISyncMLCmd_FWD_DEFINED__
#define __ISyncMLCmd_FWD_DEFINED__
typedef interface ISyncMLCmd ISyncMLCmd;
#endif 	/* __ISyncMLCmd_FWD_DEFINED__ */


#ifndef __IProvisioningDPU_FWD_DEFINED__
#define __IProvisioningDPU_FWD_DEFINED__
typedef interface IProvisioningDPU IProvisioningDPU;
#endif 	/* __IProvisioningDPU_FWD_DEFINED__ */


#ifndef __CProvisioningDPU_FWD_DEFINED__
#define __CProvisioningDPU_FWD_DEFINED__

#ifdef __cplusplus
typedef class CProvisioningDPU CProvisioningDPU;
#else
typedef struct CProvisioningDPU CProvisioningDPU;
#endif /* __cplusplus */

#endif 	/* __CProvisioningDPU_FWD_DEFINED__ */


#ifndef __CSyncMLDPU_FWD_DEFINED__
#define __CSyncMLDPU_FWD_DEFINED__

#ifdef __cplusplus
typedef class CSyncMLDPU CSyncMLDPU;
#else
typedef struct CSyncMLDPU CSyncMLDPU;
#endif /* __cplusplus */

#endif 	/* __CSyncMLDPU_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "msxml2.h"
#include "cfgmgr2.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_provdpu_0000_0000 */
/* [local] */ 

#ifndef _LPBYTE_DEFINED
#define _LPBYTE_DEFINED
typedef /* [public] */ BYTE *LPBYTE;

#endif // !_LPBYTE_DEFINED
typedef 
enum PROV_LOG_LEVEL
    {	PROV_LOG_LEVEL_NONE	= 0,
	PROV_LOG_LEVEL_ERROR	= 1,
	PROV_LOG_LEVEL_DEBUG	= 2,
	PROV_LOG_LEVEL_TRACE	= 3
    } 	PROV_LOG_LEVEL;

typedef struct tagSyncMLDPUInit
    {
    BOOL fVerboseLogging;
    DWORD dwSessionRoles;
    LPCTSTR pszServerID;
    LPCTSTR pszDisplayedSrc;
    PROV_LOG_LEVEL filterloglevel;
    } 	SYNCMLDPUINIT;

typedef struct tagSyncMLDPUInit *PSYNCMLDPUINIT;

typedef struct tagSyncMLDPUParams
    {
    LPCTSTR pszBody;
    DWORD dwMsgID;
    DWORD dwClientMsgID;
    BOOL fParseOnlySyncHdrStatus;
    HRESULT hrParseOnly;
    } 	SYNCMLDPUPARAMS;

typedef struct tagSyncMLDPUParams *PSYNCMLDPUPARAMS;

typedef 
enum AuthType
    {	at_basic	= 0,
	at_md5	= ( at_basic + 1 ) ,
	at_Unknown	= ( at_md5 + 1 ) 
    } 	AUTH_TYPE;

typedef struct ALERTINFORESULT
    {
    LPTSTR pszCmdIDRef;
    DWORD dwStatusCode;
    } 	ALERTINFORESULT;

typedef struct ALERTINFORESULT *PALERTINFORESULT;

typedef struct tagSyncMLDPUResults
    {
    DWORD dwCmdCount;
    DWORD dwSyncHdrStatus;
    LPTSTR pszResultsXML;
    LPTSTR pszNextNonce;
    AUTH_TYPE atAuthType;
    BOOL fSessionAborted;
    PALERTINFORESULT rgairAlertStatuses;
    DWORD cairAlertStatuses;
    } 	SYNCMLDPURESULTS;

typedef struct tagSyncMLDPUResults *PSYNCMLDPURESULTS;



extern RPC_IF_HANDLE __MIDL_itf_provdpu_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_provdpu_0000_0000_v0_0_s_ifspec;

#ifndef __ISyncMLCmd_INTERFACE_DEFINED__
#define __ISyncMLCmd_INTERFACE_DEFINED__

/* interface ISyncMLCmd */
/* [object][uuid] */ 


EXTERN_C const IID IID_ISyncMLCmd;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B0660074-FA76-4442-88F5-99134E8D3B0B")
    ISyncMLCmd : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BatchUpExecution( 
            /* [in] */ IConfigManager2 *pCfgMgr2) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResultsData( 
            /* [in] */ IMXWriter *pMXWriter) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISyncMLCmdVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISyncMLCmd * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISyncMLCmd * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISyncMLCmd * This);
        
        HRESULT ( STDMETHODCALLTYPE *BatchUpExecution )( 
            ISyncMLCmd * This,
            /* [in] */ IConfigManager2 *pCfgMgr2);
        
        HRESULT ( STDMETHODCALLTYPE *GetResultsData )( 
            ISyncMLCmd * This,
            /* [in] */ IMXWriter *pMXWriter);
        
        END_INTERFACE
    } ISyncMLCmdVtbl;

    interface ISyncMLCmd
    {
        CONST_VTBL struct ISyncMLCmdVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISyncMLCmd_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISyncMLCmd_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISyncMLCmd_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISyncMLCmd_BatchUpExecution(This,pCfgMgr2)	\
    ( (This)->lpVtbl -> BatchUpExecution(This,pCfgMgr2) ) 

#define ISyncMLCmd_GetResultsData(This,pMXWriter)	\
    ( (This)->lpVtbl -> GetResultsData(This,pMXWriter) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISyncMLCmd_INTERFACE_DEFINED__ */


#ifndef __IProvisioningDPU_INTERFACE_DEFINED__
#define __IProvisioningDPU_INTERFACE_DEFINED__

/* interface IProvisioningDPU */
/* [object][uuid] */ 


EXTERN_C const IID IID_IProvisioningDPU;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ED3799A5-8188-4414-B9AB-BD37F064DDCD")
    IProvisioningDPU : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ LPBYTE pbData,
            /* [in] */ DWORD cbData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ProcessData( 
            /* [in] */ LPBYTE pbData,
            /* [in] */ DWORD cbData,
            /* [out] */ LPBYTE *ppbResults,
            /* [out] */ DWORD *pcbResults) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResultsData( 
            /* [out][in] */ LPBYTE pbData,
            /* [in] */ DWORD cbData) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IProvisioningDPUVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IProvisioningDPU * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IProvisioningDPU * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IProvisioningDPU * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IProvisioningDPU * This,
            /* [in] */ LPBYTE pbData,
            /* [in] */ DWORD cbData);
        
        HRESULT ( STDMETHODCALLTYPE *ProcessData )( 
            IProvisioningDPU * This,
            /* [in] */ LPBYTE pbData,
            /* [in] */ DWORD cbData,
            /* [out] */ LPBYTE *ppbResults,
            /* [out] */ DWORD *pcbResults);
        
        HRESULT ( STDMETHODCALLTYPE *GetResultsData )( 
            IProvisioningDPU * This,
            /* [out][in] */ LPBYTE pbData,
            /* [in] */ DWORD cbData);
        
        END_INTERFACE
    } IProvisioningDPUVtbl;

    interface IProvisioningDPU
    {
        CONST_VTBL struct IProvisioningDPUVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IProvisioningDPU_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IProvisioningDPU_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IProvisioningDPU_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IProvisioningDPU_Initialize(This,pbData,cbData)	\
    ( (This)->lpVtbl -> Initialize(This,pbData,cbData) ) 

#define IProvisioningDPU_ProcessData(This,pbData,cbData,ppbResults,pcbResults)	\
    ( (This)->lpVtbl -> ProcessData(This,pbData,cbData,ppbResults,pcbResults) ) 

#define IProvisioningDPU_GetResultsData(This,pbData,cbData)	\
    ( (This)->lpVtbl -> GetResultsData(This,pbData,cbData) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IProvisioningDPU_INTERFACE_DEFINED__ */



#ifndef __ProvisioningDPU_LIBRARY_DEFINED__
#define __ProvisioningDPU_LIBRARY_DEFINED__

/* library ProvisioningDPU */
/* [helpstring][uuid] */ 


EXTERN_C const IID LIBID_ProvisioningDPU;

EXTERN_C const CLSID CLSID_CProvisioningDPU;

#ifdef __cplusplus

class DECLSPEC_UUID("5AF61EC4-BF8D-4094-A340-F50E3D52B8B1")
CProvisioningDPU;
#endif

EXTERN_C const CLSID CLSID_CSyncMLDPU;

#ifdef __cplusplus

class DECLSPEC_UUID("E3784839-6BD5-4702-A7B0-59C7592FB7B8")
CSyncMLDPU;
#endif
#endif /* __ProvisioningDPU_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


