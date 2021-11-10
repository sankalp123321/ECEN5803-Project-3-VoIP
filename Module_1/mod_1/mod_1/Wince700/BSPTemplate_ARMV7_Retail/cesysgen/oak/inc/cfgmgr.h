

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0543 */
/* Compiler settings for cfgmgr.idl:
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

#ifndef __cfgmgr_h__
#define __cfgmgr_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IConfigTransaction_FWD_DEFINED__
#define __IConfigTransaction_FWD_DEFINED__
typedef interface IConfigTransaction IConfigTransaction;
#endif 	/* __IConfigTransaction_FWD_DEFINED__ */


#ifndef __IConfigSession_FWD_DEFINED__
#define __IConfigSession_FWD_DEFINED__
typedef interface IConfigSession IConfigSession;
#endif 	/* __IConfigSession_FWD_DEFINED__ */


#ifndef __IConfigServiceProviderBase_FWD_DEFINED__
#define __IConfigServiceProviderBase_FWD_DEFINED__
typedef interface IConfigServiceProviderBase IConfigServiceProviderBase;
#endif 	/* __IConfigServiceProviderBase_FWD_DEFINED__ */


#ifndef __IConfigServiceProviderRaw_FWD_DEFINED__
#define __IConfigServiceProviderRaw_FWD_DEFINED__
typedef interface IConfigServiceProviderRaw IConfigServiceProviderRaw;
#endif 	/* __IConfigServiceProviderRaw_FWD_DEFINED__ */


#ifndef __IConfigServiceProvider_FWD_DEFINED__
#define __IConfigServiceProvider_FWD_DEFINED__
typedef interface IConfigServiceProvider IConfigServiceProvider;
#endif 	/* __IConfigServiceProvider_FWD_DEFINED__ */


#ifndef __IConfigManager_FWD_DEFINED__
#define __IConfigManager_FWD_DEFINED__
typedef interface IConfigManager IConfigManager;
#endif 	/* __IConfigManager_FWD_DEFINED__ */


#ifndef __IConfigUninstallHost_FWD_DEFINED__
#define __IConfigUninstallHost_FWD_DEFINED__
typedef interface IConfigUninstallHost IConfigUninstallHost;
#endif 	/* __IConfigUninstallHost_FWD_DEFINED__ */


#ifndef __IConfigInstallResult_FWD_DEFINED__
#define __IConfigInstallResult_FWD_DEFINED__
typedef interface IConfigInstallResult IConfigInstallResult;
#endif 	/* __IConfigInstallResult_FWD_DEFINED__ */


#ifndef __CConfigManager_FWD_DEFINED__
#define __CConfigManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class CConfigManager CConfigManager;
#else
typedef struct CConfigManager CConfigManager;
#endif /* __cplusplus */

#endif 	/* __CConfigManager_FWD_DEFINED__ */


#ifndef __CConfigUninstallHost_FWD_DEFINED__
#define __CConfigUninstallHost_FWD_DEFINED__

#ifdef __cplusplus
typedef class CConfigUninstallHost CConfigUninstallHost;
#else
typedef struct CConfigUninstallHost CConfigUninstallHost;
#endif /* __cplusplus */

#endif 	/* __CConfigUninstallHost_FWD_DEFINED__ */


/* header files for imported files */
#include "msxml2.h"
#include "cfgdata.h"
#include "cmgruri.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_cfgmgr_0000_0000 */
/* [local] */ 

#pragma once
#include <cfgmgrapi.h>
#define CONFIG_S_METABASEQUERY           _HRESULT_TYPEDEF_(0x00042003)
#define CONFIG_S_NOTFOUND                _HRESULT_TYPEDEF_(0x00042006)
#define CONFIG_S_REBOOTREQUIRED          _HRESULT_TYPEDEF_(0x00042010)
#define CONFIG_E_CABVERSIONINVALID       _HRESULT_TYPEDEF_(0x80042011)
#define CONFIG_E_CABPLATFORMINVALID      _HRESULT_TYPEDEF_(0x80042012)
#define CONFIG_E_CABPROCESSORINVALID     _HRESULT_TYPEDEF_(0x80042013)
#define CONFIG_E_CABOSVERSIONINVALID     _HRESULT_TYPEDEF_(0x80042014)
#define CONFIG_E_PREPROCESSINSTALL       _HRESULT_TYPEDEF_(0x80042015)
#define CONFIG_E_CABPLATFORMNOTSUPPORTED _HRESULT_TYPEDEF_(0x80042016)
#define CONFIG_E_PREPROCESSUNINSTALL     _HRESULT_TYPEDEF_(0x80042017)
#define CONFIG_E_NEEDUNINSTALLHOST       _HRESULT_TYPEDEF_(0x80042018)
#define CONFIG_E_UNINSTALLINITCANCELLED  _HRESULT_TYPEDEF_(0x80042019)
#define SECROLE_NONE                     0x00
#define SECROLE_CARRIER                  0x04
#define SECROLE_MANAGER                  0x08
#define SECROLE_USER_AUTH                0x10
#define SECROLE_ENTERPRISE               0x20
#define SECROLE_USER_UNAUTH              0x40
#define SECROLE_CARRIER_TPS              0x80
#define SECROLE_KNOWN_PPG                0x100
#define SECROLE_TRUSTED_PPG              0x200
#define SECROLE_PPG_AUTH                 0x400
#define SECROLE_PPG_TRUSTED              0x800
#define SECROLE_ANY_PUSH_SOURCE          0x1000
#define AUTHENTICATION_ROLES             (SECROLE_CARRIER|SECROLE_MANAGER|SECROLE_USER_AUTH|SECROLE_USER_UNAUTH)
#define ORIGIN_ROLES                     (SECROLE_CARRIER_TPS|SECROLE_KNOWN_PPG|SECROLE_TRUSTED_PPG|SECROLE_PPG_AUTH|SECROLE_PPG_TRUSTED|SECROLE_ANY_PUSH_SOURCE)
#define ALL_SEC_ROLES (SECROLE_NONE|SECROLE_CARRIER|SECROLE_MANAGER|SECROLE_USER_AUTH|SECROLE_ENTERPRISE|SECROLE_USER_UNAUTH|SECROLE_CARRIER_TPS|SECROLE_KNOWN_PPG|SECROLE_TRUSTED_PPG|SECROLE_PPG_AUTH|SECROLE_PPG_TRUSTED|SECROLE_ANY_PUSH_SOURCE)
#define METABASE_QF_EXACT          0x00000001
#define METABASE_QF_NEAR           0x00000002
#define METABASE_QF_SUB_PATH       0x00000004
#define METABASE_QF_ALL            (METABASE_QF_EXACT | METABASE_QF_NEAR | METABASE_QF_SUB_PATH)
#define OPTIONS_EQUALS_SEPARATOR         (0xF001)
#define OPTIONS_EQUALS_SEPARATOR_STRING  TEXT("\xF001")
#define OPTIONS_ITEM_SEPARATOR           (0xF000)
#define OPTIONS_ITEM_SEPARATOR_STRING    TEXT("\xF000")
typedef 
enum ConfigTransactioningMode
    {	CFGTRANSACTIONING_CFGMGR	= 0,
	CFGTRANSACTIONING_CSPINTERNAL	= ( CFGTRANSACTIONING_CFGMGR + 1 ) ,
	CFGTRANSACTIONING_HYBRID	= ( CFGTRANSACTIONING_CSPINTERNAL + 1 ) ,
	CFGTRANSACTIONING_CSPINTERNALHEADER	= ( CFGTRANSACTIONING_HYBRID + 1 ) ,
	CFGTRANSACTIONING_NOTALLOWED	= ( CFGTRANSACTIONING_CSPINTERNALHEADER + 1 ) 
    } 	CONFIGTRANSACTIONINGMODE;

typedef enum ConfigTransactioningMode *PCONFIGTRANSACTIONINGMODE;



extern RPC_IF_HANDLE __MIDL_itf_cfgmgr_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cfgmgr_0000_0000_v0_0_s_ifspec;

#ifndef __IConfigTransaction_INTERFACE_DEFINED__
#define __IConfigTransaction_INTERFACE_DEFINED__

/* interface IConfigTransaction */
/* [object][uuid] */ 


EXTERN_C const IID IID_IConfigTransaction;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D83013B6-9EC6-464f-A188-1854CD5B4E99")
    IConfigTransaction : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Begin( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Commit( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Rollback( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RecoveryRollback( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUninstallNode( 
            /* [in] */ IXMLDOMDocument *pDoc,
            /* [out] */ IXMLDOMNode **ppNode) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IConfigTransactionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IConfigTransaction * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IConfigTransaction * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IConfigTransaction * This);
        
        HRESULT ( STDMETHODCALLTYPE *Begin )( 
            IConfigTransaction * This);
        
        HRESULT ( STDMETHODCALLTYPE *Commit )( 
            IConfigTransaction * This);
        
        HRESULT ( STDMETHODCALLTYPE *Rollback )( 
            IConfigTransaction * This);
        
        HRESULT ( STDMETHODCALLTYPE *RecoveryRollback )( 
            IConfigTransaction * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetUninstallNode )( 
            IConfigTransaction * This,
            /* [in] */ IXMLDOMDocument *pDoc,
            /* [out] */ IXMLDOMNode **ppNode);
        
        END_INTERFACE
    } IConfigTransactionVtbl;

    interface IConfigTransaction
    {
        CONST_VTBL struct IConfigTransactionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConfigTransaction_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IConfigTransaction_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IConfigTransaction_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IConfigTransaction_Begin(This)	\
    ( (This)->lpVtbl -> Begin(This) ) 

#define IConfigTransaction_Commit(This)	\
    ( (This)->lpVtbl -> Commit(This) ) 

#define IConfigTransaction_Rollback(This)	\
    ( (This)->lpVtbl -> Rollback(This) ) 

#define IConfigTransaction_RecoveryRollback(This)	\
    ( (This)->lpVtbl -> RecoveryRollback(This) ) 

#define IConfigTransaction_GetUninstallNode(This,pDoc,ppNode)	\
    ( (This)->lpVtbl -> GetUninstallNode(This,pDoc,ppNode) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IConfigTransaction_INTERFACE_DEFINED__ */


#ifndef __IConfigSession_INTERFACE_DEFINED__
#define __IConfigSession_INTERFACE_DEFINED__

/* interface IConfigSession */
/* [object][uuid] */ 


EXTERN_C const IID IID_IConfigSession;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D83013B7-9EC6-464f-A188-1854CD5B4E99")
    IConfigSession : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSecurityRoleMask( 
            /* [out] */ DWORD *pdwRoleMask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBaseRoleMask( 
            /* [out] */ DWORD *pdwMappedRoles) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProcessingFlags( 
            /* [out] */ DWORD *pdwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QueryHost( 
            /* [in] */ REFIID riid,
            /* [out] */ LPUNKNOWN *ppUnk) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSessionVariable( 
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResolveSessionVariables( 
            /* [in] */ BSTR szText,
            /* [out] */ BSTR *pbstrResolvedText) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IConfigSessionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IConfigSession * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IConfigSession * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IConfigSession * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSecurityRoleMask )( 
            IConfigSession * This,
            /* [out] */ DWORD *pdwRoleMask);
        
        HRESULT ( STDMETHODCALLTYPE *GetBaseRoleMask )( 
            IConfigSession * This,
            /* [out] */ DWORD *pdwMappedRoles);
        
        HRESULT ( STDMETHODCALLTYPE *GetProcessingFlags )( 
            IConfigSession * This,
            /* [out] */ DWORD *pdwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *QueryHost )( 
            IConfigSession * This,
            /* [in] */ REFIID riid,
            /* [out] */ LPUNKNOWN *ppUnk);
        
        HRESULT ( STDMETHODCALLTYPE *SetSessionVariable )( 
            IConfigSession * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrValue);
        
        HRESULT ( STDMETHODCALLTYPE *ResolveSessionVariables )( 
            IConfigSession * This,
            /* [in] */ BSTR szText,
            /* [out] */ BSTR *pbstrResolvedText);
        
        END_INTERFACE
    } IConfigSessionVtbl;

    interface IConfigSession
    {
        CONST_VTBL struct IConfigSessionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConfigSession_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IConfigSession_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IConfigSession_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IConfigSession_GetSecurityRoleMask(This,pdwRoleMask)	\
    ( (This)->lpVtbl -> GetSecurityRoleMask(This,pdwRoleMask) ) 

#define IConfigSession_GetBaseRoleMask(This,pdwMappedRoles)	\
    ( (This)->lpVtbl -> GetBaseRoleMask(This,pdwMappedRoles) ) 

#define IConfigSession_GetProcessingFlags(This,pdwFlags)	\
    ( (This)->lpVtbl -> GetProcessingFlags(This,pdwFlags) ) 

#define IConfigSession_QueryHost(This,riid,ppUnk)	\
    ( (This)->lpVtbl -> QueryHost(This,riid,ppUnk) ) 

#define IConfigSession_SetSessionVariable(This,bstrName,bstrValue)	\
    ( (This)->lpVtbl -> SetSessionVariable(This,bstrName,bstrValue) ) 

#define IConfigSession_ResolveSessionVariables(This,szText,pbstrResolvedText)	\
    ( (This)->lpVtbl -> ResolveSessionVariables(This,szText,pbstrResolvedText) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IConfigSession_INTERFACE_DEFINED__ */


#ifndef __IConfigServiceProviderBase_INTERFACE_DEFINED__
#define __IConfigServiceProviderBase_INTERFACE_DEFINED__

/* interface IConfigServiceProviderBase */
/* [object][uuid] */ 


EXTERN_C const IID IID_IConfigServiceProviderBase;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D83013B3-9EC6-464f-A188-1854CD5B4E99")
    IConfigServiceProviderBase : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE QueryTransactioningMode( 
            /* [out] */ PCONFIGTRANSACTIONINGMODE pTransactioningMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CancelProcessing( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginProcessing( 
            /* [in] */ IConfigSession *pSession) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndProcessing( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginTransaction( 
            /* [out] */ IConfigTransaction **ppTransaction) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IConfigServiceProviderBaseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IConfigServiceProviderBase * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IConfigServiceProviderBase * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IConfigServiceProviderBase * This);
        
        HRESULT ( STDMETHODCALLTYPE *QueryTransactioningMode )( 
            IConfigServiceProviderBase * This,
            /* [out] */ PCONFIGTRANSACTIONINGMODE pTransactioningMode);
        
        HRESULT ( STDMETHODCALLTYPE *CancelProcessing )( 
            IConfigServiceProviderBase * This);
        
        HRESULT ( STDMETHODCALLTYPE *BeginProcessing )( 
            IConfigServiceProviderBase * This,
            /* [in] */ IConfigSession *pSession);
        
        HRESULT ( STDMETHODCALLTYPE *EndProcessing )( 
            IConfigServiceProviderBase * This);
        
        HRESULT ( STDMETHODCALLTYPE *BeginTransaction )( 
            IConfigServiceProviderBase * This,
            /* [out] */ IConfigTransaction **ppTransaction);
        
        END_INTERFACE
    } IConfigServiceProviderBaseVtbl;

    interface IConfigServiceProviderBase
    {
        CONST_VTBL struct IConfigServiceProviderBaseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConfigServiceProviderBase_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IConfigServiceProviderBase_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IConfigServiceProviderBase_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IConfigServiceProviderBase_QueryTransactioningMode(This,pTransactioningMode)	\
    ( (This)->lpVtbl -> QueryTransactioningMode(This,pTransactioningMode) ) 

#define IConfigServiceProviderBase_CancelProcessing(This)	\
    ( (This)->lpVtbl -> CancelProcessing(This) ) 

#define IConfigServiceProviderBase_BeginProcessing(This,pSession)	\
    ( (This)->lpVtbl -> BeginProcessing(This,pSession) ) 

#define IConfigServiceProviderBase_EndProcessing(This)	\
    ( (This)->lpVtbl -> EndProcessing(This) ) 

#define IConfigServiceProviderBase_BeginTransaction(This,ppTransaction)	\
    ( (This)->lpVtbl -> BeginTransaction(This,ppTransaction) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IConfigServiceProviderBase_INTERFACE_DEFINED__ */


#ifndef __IConfigServiceProviderRaw_INTERFACE_DEFINED__
#define __IConfigServiceProviderRaw_INTERFACE_DEFINED__

/* interface IConfigServiceProviderRaw */
/* [object][uuid] */ 


EXTERN_C const IID IID_IConfigServiceProviderRaw;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D83013B5-9EC6-464f-A188-1854CD5B4E99")
    IConfigServiceProviderRaw : public IConfigServiceProviderBase
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ProcessNode( 
            /* [in] */ IXMLDOMNode *nodeXML) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PopulateMetadata( 
            /* [in] */ IXMLDOMNode *nodeXML) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IConfigServiceProviderRawVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IConfigServiceProviderRaw * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IConfigServiceProviderRaw * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IConfigServiceProviderRaw * This);
        
        HRESULT ( STDMETHODCALLTYPE *QueryTransactioningMode )( 
            IConfigServiceProviderRaw * This,
            /* [out] */ PCONFIGTRANSACTIONINGMODE pTransactioningMode);
        
        HRESULT ( STDMETHODCALLTYPE *CancelProcessing )( 
            IConfigServiceProviderRaw * This);
        
        HRESULT ( STDMETHODCALLTYPE *BeginProcessing )( 
            IConfigServiceProviderRaw * This,
            /* [in] */ IConfigSession *pSession);
        
        HRESULT ( STDMETHODCALLTYPE *EndProcessing )( 
            IConfigServiceProviderRaw * This);
        
        HRESULT ( STDMETHODCALLTYPE *BeginTransaction )( 
            IConfigServiceProviderRaw * This,
            /* [out] */ IConfigTransaction **ppTransaction);
        
        HRESULT ( STDMETHODCALLTYPE *ProcessNode )( 
            IConfigServiceProviderRaw * This,
            /* [in] */ IXMLDOMNode *nodeXML);
        
        HRESULT ( STDMETHODCALLTYPE *PopulateMetadata )( 
            IConfigServiceProviderRaw * This,
            /* [in] */ IXMLDOMNode *nodeXML);
        
        END_INTERFACE
    } IConfigServiceProviderRawVtbl;

    interface IConfigServiceProviderRaw
    {
        CONST_VTBL struct IConfigServiceProviderRawVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConfigServiceProviderRaw_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IConfigServiceProviderRaw_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IConfigServiceProviderRaw_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IConfigServiceProviderRaw_QueryTransactioningMode(This,pTransactioningMode)	\
    ( (This)->lpVtbl -> QueryTransactioningMode(This,pTransactioningMode) ) 

#define IConfigServiceProviderRaw_CancelProcessing(This)	\
    ( (This)->lpVtbl -> CancelProcessing(This) ) 

#define IConfigServiceProviderRaw_BeginProcessing(This,pSession)	\
    ( (This)->lpVtbl -> BeginProcessing(This,pSession) ) 

#define IConfigServiceProviderRaw_EndProcessing(This)	\
    ( (This)->lpVtbl -> EndProcessing(This) ) 

#define IConfigServiceProviderRaw_BeginTransaction(This,ppTransaction)	\
    ( (This)->lpVtbl -> BeginTransaction(This,ppTransaction) ) 


#define IConfigServiceProviderRaw_ProcessNode(This,nodeXML)	\
    ( (This)->lpVtbl -> ProcessNode(This,nodeXML) ) 

#define IConfigServiceProviderRaw_PopulateMetadata(This,nodeXML)	\
    ( (This)->lpVtbl -> PopulateMetadata(This,nodeXML) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IConfigServiceProviderRaw_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_cfgmgr_0000_0004 */
/* [local] */ 

#define CFGFLAG_RECURSIVE                0x0004
#define CFGFLAG_RECOVERYROLLBACK         0x0008
#define CFGFLAG_PROCESSINSECURE          0x0010
#define CFGFLAG_IN_UNINSTALL             0x0020
#define CFGFLAG_IN_TRANSACTIONING        0x1000
#define CFGFLAG_IN_ROLLBACK              0x2000
#define CFGFLAG_NO_CHANGE_NOTIFICATION   0x4000


extern RPC_IF_HANDLE __MIDL_itf_cfgmgr_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cfgmgr_0000_0004_v0_0_s_ifspec;

#ifndef __IConfigServiceProvider_INTERFACE_DEFINED__
#define __IConfigServiceProvider_INTERFACE_DEFINED__

/* interface IConfigServiceProvider */
/* [object][uuid] */ 


EXTERN_C const IID IID_IConfigServiceProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D83013B4-9EC6-464f-A188-1854CD5B4E99")
    IConfigServiceProvider : public IConfigServiceProviderBase
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE HandleParm( 
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrValue,
            /* [in] */ IXMLDOMElement *pNode,
            /* [in] */ BSTR bstrPath,
            /* [in] */ DWORD dwUserData,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HandleNoParm( 
            /* [in] */ BSTR bstrName,
            /* [in] */ IXMLDOMElement *pNode,
            /* [in] */ BSTR bstrPath,
            /* [in] */ DWORD dwUserData,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HandleParmQuery( 
            /* [in] */ BSTR bstrName,
            /* [out][in] */ VARIANT *pvarValue,
            /* [in] */ IXMLDOMElement *pNode,
            /* [in] */ BSTR bstrPath,
            /* [in] */ DWORD dwUserData,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HandleCharacteristic( 
            /* [in] */ BSTR bstrType,
            /* [in] */ IXMLDOMElement *pNode,
            /* [in] */ BSTR bstrPath,
            /* [in] */ DWORD dwUserData,
            /* [out] */ DWORD *pdwUserDataChild,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndCharacteristic( 
            /* [in] */ BSTR bstrType,
            /* [in] */ IXMLDOMElement *pNode,
            /* [in] */ BSTR bstrPath,
            /* [in] */ DWORD dwUserData,
            /* [in] */ DWORD dwUserDataChild,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HandleNoCharacteristic( 
            /* [in] */ BSTR bstrType,
            /* [in] */ IXMLDOMElement *pNode,
            /* [in] */ BSTR bstrPath,
            /* [in] */ DWORD dwUserData,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HandleCharacteristicQuery( 
            /* [in] */ BSTR bstrType,
            /* [in] */ IXMLDOMElement *pNode,
            /* [in] */ BSTR bstrPath,
            /* [in] */ DWORD dwUserData,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            /* [out] */ BSTR *pbstrError) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IConfigServiceProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IConfigServiceProvider * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IConfigServiceProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IConfigServiceProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *QueryTransactioningMode )( 
            IConfigServiceProvider * This,
            /* [out] */ PCONFIGTRANSACTIONINGMODE pTransactioningMode);
        
        HRESULT ( STDMETHODCALLTYPE *CancelProcessing )( 
            IConfigServiceProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *BeginProcessing )( 
            IConfigServiceProvider * This,
            /* [in] */ IConfigSession *pSession);
        
        HRESULT ( STDMETHODCALLTYPE *EndProcessing )( 
            IConfigServiceProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *BeginTransaction )( 
            IConfigServiceProvider * This,
            /* [out] */ IConfigTransaction **ppTransaction);
        
        HRESULT ( STDMETHODCALLTYPE *HandleParm )( 
            IConfigServiceProvider * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrValue,
            /* [in] */ IXMLDOMElement *pNode,
            /* [in] */ BSTR bstrPath,
            /* [in] */ DWORD dwUserData,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *HandleNoParm )( 
            IConfigServiceProvider * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ IXMLDOMElement *pNode,
            /* [in] */ BSTR bstrPath,
            /* [in] */ DWORD dwUserData,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *HandleParmQuery )( 
            IConfigServiceProvider * This,
            /* [in] */ BSTR bstrName,
            /* [out][in] */ VARIANT *pvarValue,
            /* [in] */ IXMLDOMElement *pNode,
            /* [in] */ BSTR bstrPath,
            /* [in] */ DWORD dwUserData,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *HandleCharacteristic )( 
            IConfigServiceProvider * This,
            /* [in] */ BSTR bstrType,
            /* [in] */ IXMLDOMElement *pNode,
            /* [in] */ BSTR bstrPath,
            /* [in] */ DWORD dwUserData,
            /* [out] */ DWORD *pdwUserDataChild,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *EndCharacteristic )( 
            IConfigServiceProvider * This,
            /* [in] */ BSTR bstrType,
            /* [in] */ IXMLDOMElement *pNode,
            /* [in] */ BSTR bstrPath,
            /* [in] */ DWORD dwUserData,
            /* [in] */ DWORD dwUserDataChild,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *HandleNoCharacteristic )( 
            IConfigServiceProvider * This,
            /* [in] */ BSTR bstrType,
            /* [in] */ IXMLDOMElement *pNode,
            /* [in] */ BSTR bstrPath,
            /* [in] */ DWORD dwUserData,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *HandleCharacteristicQuery )( 
            IConfigServiceProvider * This,
            /* [in] */ BSTR bstrType,
            /* [in] */ IXMLDOMElement *pNode,
            /* [in] */ BSTR bstrPath,
            /* [in] */ DWORD dwUserData,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IConfigServiceProvider * This,
            /* [out] */ BSTR *pbstrError);
        
        END_INTERFACE
    } IConfigServiceProviderVtbl;

    interface IConfigServiceProvider
    {
        CONST_VTBL struct IConfigServiceProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConfigServiceProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IConfigServiceProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IConfigServiceProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IConfigServiceProvider_QueryTransactioningMode(This,pTransactioningMode)	\
    ( (This)->lpVtbl -> QueryTransactioningMode(This,pTransactioningMode) ) 

#define IConfigServiceProvider_CancelProcessing(This)	\
    ( (This)->lpVtbl -> CancelProcessing(This) ) 

#define IConfigServiceProvider_BeginProcessing(This,pSession)	\
    ( (This)->lpVtbl -> BeginProcessing(This,pSession) ) 

#define IConfigServiceProvider_EndProcessing(This)	\
    ( (This)->lpVtbl -> EndProcessing(This) ) 

#define IConfigServiceProvider_BeginTransaction(This,ppTransaction)	\
    ( (This)->lpVtbl -> BeginTransaction(This,ppTransaction) ) 


#define IConfigServiceProvider_HandleParm(This,bstrName,bstrValue,pNode,bstrPath,dwUserData,dwFlags)	\
    ( (This)->lpVtbl -> HandleParm(This,bstrName,bstrValue,pNode,bstrPath,dwUserData,dwFlags) ) 

#define IConfigServiceProvider_HandleNoParm(This,bstrName,pNode,bstrPath,dwUserData,dwFlags)	\
    ( (This)->lpVtbl -> HandleNoParm(This,bstrName,pNode,bstrPath,dwUserData,dwFlags) ) 

#define IConfigServiceProvider_HandleParmQuery(This,bstrName,pvarValue,pNode,bstrPath,dwUserData,dwFlags)	\
    ( (This)->lpVtbl -> HandleParmQuery(This,bstrName,pvarValue,pNode,bstrPath,dwUserData,dwFlags) ) 

#define IConfigServiceProvider_HandleCharacteristic(This,bstrType,pNode,bstrPath,dwUserData,pdwUserDataChild,dwFlags)	\
    ( (This)->lpVtbl -> HandleCharacteristic(This,bstrType,pNode,bstrPath,dwUserData,pdwUserDataChild,dwFlags) ) 

#define IConfigServiceProvider_EndCharacteristic(This,bstrType,pNode,bstrPath,dwUserData,dwUserDataChild,dwFlags)	\
    ( (This)->lpVtbl -> EndCharacteristic(This,bstrType,pNode,bstrPath,dwUserData,dwUserDataChild,dwFlags) ) 

#define IConfigServiceProvider_HandleNoCharacteristic(This,bstrType,pNode,bstrPath,dwUserData,dwFlags)	\
    ( (This)->lpVtbl -> HandleNoCharacteristic(This,bstrType,pNode,bstrPath,dwUserData,dwFlags) ) 

#define IConfigServiceProvider_HandleCharacteristicQuery(This,bstrType,pNode,bstrPath,dwUserData,dwFlags)	\
    ( (This)->lpVtbl -> HandleCharacteristicQuery(This,bstrType,pNode,bstrPath,dwUserData,dwFlags) ) 

#define IConfigServiceProvider_GetErrorDescription(This,pbstrError)	\
    ( (This)->lpVtbl -> GetErrorDescription(This,pbstrError) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IConfigServiceProvider_INTERFACE_DEFINED__ */


#ifndef __IConfigManager_INTERFACE_DEFINED__
#define __IConfigManager_INTERFACE_DEFINED__

/* interface IConfigManager */
/* [object][uuid] */ 


EXTERN_C const IID IID_IConfigManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("483B6126-59B4-493b-A9E3-972BDAFEB341")
    IConfigManager : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ProcessDocument( 
            /* [in] */ IXMLDOMNode *nodeXML,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ProcessXML( 
            /* [out][in] */ BSTR *pbstrXML,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveMetadata( 
            /* [in] */ IXMLDOMNode *nodeXML) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CancelProcessing( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSecurityRoleMask( 
            /* [in] */ DWORD dwRoleMask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetHost( 
            /* [in] */ IUnknown *pUnk) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRecoveryFilePath( 
            /* [in] */ BSTR bstrFilePath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRecoveryFileDeletion( 
            /* [in] */ BOOL fDelete) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUninstallDocument( 
            /* [out] */ IXMLDOMDocument **ppDoc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPretransactioningResult( 
            /* [out] */ HRESULT *pHR) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IConfigManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IConfigManager * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IConfigManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IConfigManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *ProcessDocument )( 
            IConfigManager * This,
            /* [in] */ IXMLDOMNode *nodeXML,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *ProcessXML )( 
            IConfigManager * This,
            /* [out][in] */ BSTR *pbstrXML,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveMetadata )( 
            IConfigManager * This,
            /* [in] */ IXMLDOMNode *nodeXML);
        
        HRESULT ( STDMETHODCALLTYPE *CancelProcessing )( 
            IConfigManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetSecurityRoleMask )( 
            IConfigManager * This,
            /* [in] */ DWORD dwRoleMask);
        
        HRESULT ( STDMETHODCALLTYPE *SetHost )( 
            IConfigManager * This,
            /* [in] */ IUnknown *pUnk);
        
        HRESULT ( STDMETHODCALLTYPE *SetRecoveryFilePath )( 
            IConfigManager * This,
            /* [in] */ BSTR bstrFilePath);
        
        HRESULT ( STDMETHODCALLTYPE *SetRecoveryFileDeletion )( 
            IConfigManager * This,
            /* [in] */ BOOL fDelete);
        
        HRESULT ( STDMETHODCALLTYPE *GetUninstallDocument )( 
            IConfigManager * This,
            /* [out] */ IXMLDOMDocument **ppDoc);
        
        HRESULT ( STDMETHODCALLTYPE *GetPretransactioningResult )( 
            IConfigManager * This,
            /* [out] */ HRESULT *pHR);
        
        END_INTERFACE
    } IConfigManagerVtbl;

    interface IConfigManager
    {
        CONST_VTBL struct IConfigManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConfigManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IConfigManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IConfigManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IConfigManager_ProcessDocument(This,nodeXML,dwFlags)	\
    ( (This)->lpVtbl -> ProcessDocument(This,nodeXML,dwFlags) ) 

#define IConfigManager_ProcessXML(This,pbstrXML,dwFlags)	\
    ( (This)->lpVtbl -> ProcessXML(This,pbstrXML,dwFlags) ) 

#define IConfigManager_RemoveMetadata(This,nodeXML)	\
    ( (This)->lpVtbl -> RemoveMetadata(This,nodeXML) ) 

#define IConfigManager_CancelProcessing(This)	\
    ( (This)->lpVtbl -> CancelProcessing(This) ) 

#define IConfigManager_SetSecurityRoleMask(This,dwRoleMask)	\
    ( (This)->lpVtbl -> SetSecurityRoleMask(This,dwRoleMask) ) 

#define IConfigManager_SetHost(This,pUnk)	\
    ( (This)->lpVtbl -> SetHost(This,pUnk) ) 

#define IConfigManager_SetRecoveryFilePath(This,bstrFilePath)	\
    ( (This)->lpVtbl -> SetRecoveryFilePath(This,bstrFilePath) ) 

#define IConfigManager_SetRecoveryFileDeletion(This,fDelete)	\
    ( (This)->lpVtbl -> SetRecoveryFileDeletion(This,fDelete) ) 

#define IConfigManager_GetUninstallDocument(This,ppDoc)	\
    ( (This)->lpVtbl -> GetUninstallDocument(This,ppDoc) ) 

#define IConfigManager_GetPretransactioningResult(This,pHR)	\
    ( (This)->lpVtbl -> GetPretransactioningResult(This,pHR) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IConfigManager_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_cfgmgr_0000_0006 */
/* [local] */ 

typedef 
enum ConfigNodeType
    {	CFGNODE_PARM	= 0,
	CFGNODE_NOPARM	= ( CFGNODE_PARM + 1 ) ,
	CFGNODE_PARM_QUERY	= ( CFGNODE_NOPARM + 1 ) ,
	CFGNODE_CHARACTERISTIC	= ( CFGNODE_PARM_QUERY + 1 ) ,
	CFGNODE_NOCHARACTERISTIC	= ( CFGNODE_CHARACTERISTIC + 1 ) ,
	CFGNODE_CHARACTERISTIC_QUERY	= ( CFGNODE_NOCHARACTERISTIC + 1 ) ,
	CFGNODE_PARM_ERROR	= ( CFGNODE_CHARACTERISTIC_QUERY + 1 ) ,
	CFGNODE_NOPARM_ERROR	= ( CFGNODE_PARM_ERROR + 1 ) ,
	CFGNODE_PARM_QUERY_ERROR	= ( CFGNODE_NOPARM_ERROR + 1 ) ,
	CFGNODE_CHARACTERISTIC_ERROR	= ( CFGNODE_PARM_QUERY_ERROR + 1 ) ,
	CFGNODE_NOCHARACTERISTIC_ERROR	= ( CFGNODE_CHARACTERISTIC_ERROR + 1 ) ,
	CFGNODE_CHARACTERISTIC_QUERY_ERROR	= ( CFGNODE_NOCHARACTERISTIC_ERROR + 1 ) ,
	CFGNODE_UNKNOWN	= ( CFGNODE_CHARACTERISTIC_QUERY_ERROR + 1 ) 
    } 	CFGNODE;

typedef enum ConfigNodeType *PCFGNODE;

typedef 
enum ConfigParmAttributeType
    {	CFGPARM_ATTR_NAME	= 0,
	CFGPARM_ATTR_VALUE	= ( CFGPARM_ATTR_NAME + 1 ) ,
	CFGPARM_ATTR_DATA_TYPE	= ( CFGPARM_ATTR_VALUE + 1 ) ,
	CFGPARM_ATTR_SEMANTIC_TYPE	= ( CFGPARM_ATTR_DATA_TYPE + 1 ) ,
	CFGPARM_ATTR_MAX_VALUE	= ( CFGPARM_ATTR_SEMANTIC_TYPE + 1 ) ,
	CFGPARM_ATTR_MIN_VALUE	= ( CFGPARM_ATTR_MAX_VALUE + 1 ) ,
	CFGPARM_ATTR_MAX_LENGTH	= ( CFGPARM_ATTR_MIN_VALUE + 1 ) ,
	CFGPARM_ATTR_OPTIONS	= ( CFGPARM_ATTR_MAX_LENGTH + 1 ) ,
	CFGPARM_ATTR_MULTIPLE	= ( CFGPARM_ATTR_OPTIONS + 1 ) ,
	CFGPARM_ATTR_RW_ACCESS	= ( CFGPARM_ATTR_MULTIPLE + 1 ) ,
	CFGPARM_ATTR_LABEL	= ( CFGPARM_ATTR_RW_ACCESS + 1 ) ,
	CFGPARM_ATTR_ACL	= ( CFGPARM_ATTR_LABEL + 1 ) ,
	CFGPARM_ATTR_UNKNOWN	= ( CFGPARM_ATTR_ACL + 1 ) 
    } 	CFGPARM_ATTR;

typedef enum ConfigParmAttributeType *PCFGPARM_ATTR;

typedef 
enum ConfigSemanticType
    {	CFG_SEMANTICTYPE_EMAIL	= 0,
	CFG_SEMANTICTYPE_FILENAME	= ( CFG_SEMANTICTYPE_EMAIL + 1 ) ,
	CFG_SEMANTICTYPE_TEXT	= ( CFG_SEMANTICTYPE_FILENAME + 1 ) ,
	CFG_SEMANTICTYPE_URL	= ( CFG_SEMANTICTYPE_TEXT + 1 ) ,
	CFG_SEMANTICTYPE_PHONENUMBER	= ( CFG_SEMANTICTYPE_URL + 1 ) ,
	CFG_SEMANTICTYPE_PASSWORD_ALPHANUMERIC	= ( CFG_SEMANTICTYPE_PHONENUMBER + 1 ) ,
	CFG_SEMANTICTYPE_CURRENCY	= ( CFG_SEMANTICTYPE_PASSWORD_ALPHANUMERIC + 1 ) ,
	CFG_SEMANTICTYPE_LABEL	= ( CFG_SEMANTICTYPE_CURRENCY + 1 ) ,
	CFG_SEMANTICTYPE_LINK	= ( CFG_SEMANTICTYPE_LABEL + 1 ) ,
	CFG_SEMANTICTYPE_LEVEL	= ( CFG_SEMANTICTYPE_LINK + 1 ) ,
	CFG_SEMANTICTYPE_SHORTDATETIME	= ( CFG_SEMANTICTYPE_LEVEL + 1 ) ,
	CFG_SEMANTICTYPE_PASSWORD_NUMERIC	= ( CFG_SEMANTICTYPE_SHORTDATETIME + 1 ) ,
	CFG_SEMANTICTYPE_INVISIBLE	= ( CFG_SEMANTICTYPE_PASSWORD_NUMERIC + 1 ) ,
	CFG_SEMANTICTYPE_UNKNOWN	= ( CFG_SEMANTICTYPE_INVISIBLE + 1 ) 
    } 	CFG_SEMANTICTYPE;

typedef enum ConfigSemanticType *PCFG_SEMANTICTYPE;

typedef 
enum ConfigTranslationType
    {	CFG_TRANSLATIONTYPE_INSTALL	= 0,
	CFG_TRANSLATIONTYPE_FILESYSTEM	= ( CFG_TRANSLATIONTYPE_INSTALL + 1 ) ,
	CFG_TRANSLATIONTYPE_UNKNOWN	= ( CFG_TRANSLATIONTYPE_FILESYSTEM + 1 ) 
    } 	CFG_TRANSLATIONTYPE;

typedef enum ConfigTranslationType *PCFG_TRANSLATIONTYPE;

typedef 
enum ConfigRWFlags
    {	CFGFLAG_READ_ENABLED	= 1,
	CFGFLAG_WRITE_ENABLED	= 2,
	CFGFLAG_READWRITE	= 3
    } 	CFG_RW_ACCESS;

typedef enum ConfigRWFlags *PCFG_RW_ACCESS;



extern RPC_IF_HANDLE __MIDL_itf_cfgmgr_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cfgmgr_0000_0006_v0_0_s_ifspec;

#ifndef __IConfigUninstallHost_INTERFACE_DEFINED__
#define __IConfigUninstallHost_INTERFACE_DEFINED__

/* interface IConfigUninstallHost */
/* [object][uuid] */ 


EXTERN_C const IID IID_IConfigUninstallHost;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("08A9104D-19AD-4fb3-88FA-11D918FC7F21")
    IConfigUninstallHost : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetAppName( 
            /* [in] */ BSTR bstrAppName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSetupDllPath( 
            /* [in] */ BSTR bstrSetupDllPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInstallDir( 
            /* [in] */ BSTR bstrInstallDir) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetHwnd( 
            /* [in] */ HWND hWnd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFlags( 
            /* [in] */ DWORD grfFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFlags( 
            /* [out] */ DWORD *pgrfFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoUninstallInitProcessing( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoUninstallExitProcessing( 
            /* [in] */ BOOL fSuccess) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoXMLUninstall( 
            /* [in] */ IConfigManager *pConfigMan,
            /* [out][in] */ BSTR *pbstrXML,
            /* [in] */ DWORD dwFlags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IConfigUninstallHostVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IConfigUninstallHost * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IConfigUninstallHost * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IConfigUninstallHost * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetAppName )( 
            IConfigUninstallHost * This,
            /* [in] */ BSTR bstrAppName);
        
        HRESULT ( STDMETHODCALLTYPE *SetSetupDllPath )( 
            IConfigUninstallHost * This,
            /* [in] */ BSTR bstrSetupDllPath);
        
        HRESULT ( STDMETHODCALLTYPE *SetInstallDir )( 
            IConfigUninstallHost * This,
            /* [in] */ BSTR bstrInstallDir);
        
        HRESULT ( STDMETHODCALLTYPE *SetHwnd )( 
            IConfigUninstallHost * This,
            /* [in] */ HWND hWnd);
        
        HRESULT ( STDMETHODCALLTYPE *SetFlags )( 
            IConfigUninstallHost * This,
            /* [in] */ DWORD grfFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlags )( 
            IConfigUninstallHost * This,
            /* [out] */ DWORD *pgrfFlags);
        
        HRESULT ( STDMETHODCALLTYPE *DoUninstallInitProcessing )( 
            IConfigUninstallHost * This);
        
        HRESULT ( STDMETHODCALLTYPE *DoUninstallExitProcessing )( 
            IConfigUninstallHost * This,
            /* [in] */ BOOL fSuccess);
        
        HRESULT ( STDMETHODCALLTYPE *DoXMLUninstall )( 
            IConfigUninstallHost * This,
            /* [in] */ IConfigManager *pConfigMan,
            /* [out][in] */ BSTR *pbstrXML,
            /* [in] */ DWORD dwFlags);
        
        END_INTERFACE
    } IConfigUninstallHostVtbl;

    interface IConfigUninstallHost
    {
        CONST_VTBL struct IConfigUninstallHostVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConfigUninstallHost_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IConfigUninstallHost_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IConfigUninstallHost_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IConfigUninstallHost_SetAppName(This,bstrAppName)	\
    ( (This)->lpVtbl -> SetAppName(This,bstrAppName) ) 

#define IConfigUninstallHost_SetSetupDllPath(This,bstrSetupDllPath)	\
    ( (This)->lpVtbl -> SetSetupDllPath(This,bstrSetupDllPath) ) 

#define IConfigUninstallHost_SetInstallDir(This,bstrInstallDir)	\
    ( (This)->lpVtbl -> SetInstallDir(This,bstrInstallDir) ) 

#define IConfigUninstallHost_SetHwnd(This,hWnd)	\
    ( (This)->lpVtbl -> SetHwnd(This,hWnd) ) 

#define IConfigUninstallHost_SetFlags(This,grfFlags)	\
    ( (This)->lpVtbl -> SetFlags(This,grfFlags) ) 

#define IConfigUninstallHost_GetFlags(This,pgrfFlags)	\
    ( (This)->lpVtbl -> GetFlags(This,pgrfFlags) ) 

#define IConfigUninstallHost_DoUninstallInitProcessing(This)	\
    ( (This)->lpVtbl -> DoUninstallInitProcessing(This) ) 

#define IConfigUninstallHost_DoUninstallExitProcessing(This,fSuccess)	\
    ( (This)->lpVtbl -> DoUninstallExitProcessing(This,fSuccess) ) 

#define IConfigUninstallHost_DoXMLUninstall(This,pConfigMan,pbstrXML,dwFlags)	\
    ( (This)->lpVtbl -> DoXMLUninstall(This,pConfigMan,pbstrXML,dwFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IConfigUninstallHost_INTERFACE_DEFINED__ */


#ifndef __IConfigInstallResult_INTERFACE_DEFINED__
#define __IConfigInstallResult_INTERFACE_DEFINED__

/* interface IConfigInstallResult */
/* [object][uuid] */ 


EXTERN_C const IID IID_IConfigInstallResult;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("60F75EA1-6D7B-4563-BBC4-B4F3CB251330")
    IConfigInstallResult : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetRebootRequiredStatus( 
            /* [in] */ BOOL fRebootReqd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRebootRequiredStatus( 
            /* [out] */ BOOL *pfRebootReqd) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IConfigInstallResultVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IConfigInstallResult * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IConfigInstallResult * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IConfigInstallResult * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetRebootRequiredStatus )( 
            IConfigInstallResult * This,
            /* [in] */ BOOL fRebootReqd);
        
        HRESULT ( STDMETHODCALLTYPE *GetRebootRequiredStatus )( 
            IConfigInstallResult * This,
            /* [out] */ BOOL *pfRebootReqd);
        
        END_INTERFACE
    } IConfigInstallResultVtbl;

    interface IConfigInstallResult
    {
        CONST_VTBL struct IConfigInstallResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConfigInstallResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IConfigInstallResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IConfigInstallResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IConfigInstallResult_SetRebootRequiredStatus(This,fRebootReqd)	\
    ( (This)->lpVtbl -> SetRebootRequiredStatus(This,fRebootReqd) ) 

#define IConfigInstallResult_GetRebootRequiredStatus(This,pfRebootReqd)	\
    ( (This)->lpVtbl -> GetRebootRequiredStatus(This,pfRebootReqd) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IConfigInstallResult_INTERFACE_DEFINED__ */



#ifndef __ConfigurationManager_LIBRARY_DEFINED__
#define __ConfigurationManager_LIBRARY_DEFINED__

/* library ConfigurationManager */
/* [helpstring][uuid] */ 


EXTERN_C const IID LIBID_ConfigurationManager;

EXTERN_C const CLSID CLSID_CConfigManager;

#ifdef __cplusplus

class DECLSPEC_UUID("67C73FBF-999E-44dd-AF32-480E86CB7EA3")
CConfigManager;
#endif

EXTERN_C const CLSID CLSID_CConfigUninstallHost;

#ifdef __cplusplus

class DECLSPEC_UUID("EB0AE09E-5DDC-4e40-AB81-5668F012EC97")
CConfigUninstallHost;
#endif
#endif /* __ConfigurationManager_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  HWND_UserSize(     unsigned long *, unsigned long            , HWND * ); 
unsigned char * __RPC_USER  HWND_UserMarshal(  unsigned long *, unsigned char *, HWND * ); 
unsigned char * __RPC_USER  HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND * ); 
void                      __RPC_USER  HWND_UserFree(     unsigned long *, HWND * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


