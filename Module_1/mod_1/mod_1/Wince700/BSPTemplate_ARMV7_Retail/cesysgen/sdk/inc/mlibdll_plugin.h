

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0543 */
/* Compiler settings for mlibdll_plugin.idl:
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

#ifndef __mlibdll_plugin_h__
#define __mlibdll_plugin_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IMLDSItemSink_FWD_DEFINED__
#define __IMLDSItemSink_FWD_DEFINED__
typedef interface IMLDSItemSink IMLDSItemSink;
#endif 	/* __IMLDSItemSink_FWD_DEFINED__ */


#ifndef __IMLDSPlugin_FWD_DEFINED__
#define __IMLDSPlugin_FWD_DEFINED__
typedef interface IMLDSPlugin IMLDSPlugin;
#endif 	/* __IMLDSPlugin_FWD_DEFINED__ */


#ifndef __IMLMediaParser_FWD_DEFINED__
#define __IMLMediaParser_FWD_DEFINED__
typedef interface IMLMediaParser IMLMediaParser;
#endif 	/* __IMLMediaParser_FWD_DEFINED__ */


#ifndef __MLDSFileSystemPlugin_FWD_DEFINED__
#define __MLDSFileSystemPlugin_FWD_DEFINED__

#ifdef __cplusplus
typedef class MLDSFileSystemPlugin MLDSFileSystemPlugin;
#else
typedef struct MLDSFileSystemPlugin MLDSFileSystemPlugin;
#endif /* __cplusplus */

#endif 	/* __MLDSFileSystemPlugin_FWD_DEFINED__ */


#ifndef __MLDSDLNAPlugin_FWD_DEFINED__
#define __MLDSDLNAPlugin_FWD_DEFINED__

#ifdef __cplusplus
typedef class MLDSDLNAPlugin MLDSDLNAPlugin;
#else
typedef struct MLDSDLNAPlugin MLDSDLNAPlugin;
#endif /* __cplusplus */

#endif 	/* __MLDSDLNAPlugin_FWD_DEFINED__ */


#ifndef __MLASFMetadataParser_FWD_DEFINED__
#define __MLASFMetadataParser_FWD_DEFINED__

#ifdef __cplusplus
typedef class MLASFMetadataParser MLASFMetadataParser;
#else
typedef struct MLASFMetadataParser MLASFMetadataParser;
#endif /* __cplusplus */

#endif 	/* __MLASFMetadataParser_FWD_DEFINED__ */


#ifndef __MLAVIMetadataParser_FWD_DEFINED__
#define __MLAVIMetadataParser_FWD_DEFINED__

#ifdef __cplusplus
typedef class MLAVIMetadataParser MLAVIMetadataParser;
#else
typedef struct MLAVIMetadataParser MLAVIMetadataParser;
#endif /* __cplusplus */

#endif 	/* __MLAVIMetadataParser_FWD_DEFINED__ */


#ifndef __MLMP3MetadataParser_FWD_DEFINED__
#define __MLMP3MetadataParser_FWD_DEFINED__

#ifdef __cplusplus
typedef class MLMP3MetadataParser MLMP3MetadataParser;
#else
typedef struct MLMP3MetadataParser MLMP3MetadataParser;
#endif /* __cplusplus */

#endif 	/* __MLMP3MetadataParser_FWD_DEFINED__ */


#ifndef __MLImageMetadataParser_FWD_DEFINED__
#define __MLImageMetadataParser_FWD_DEFINED__

#ifdef __cplusplus
typedef class MLImageMetadataParser MLImageMetadataParser;
#else
typedef struct MLImageMetadataParser MLImageMetadataParser;
#endif /* __cplusplus */

#endif 	/* __MLImageMetadataParser_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "mlibdll.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IMLDSItemSink_INTERFACE_DEFINED__
#define __IMLDSItemSink_INTERFACE_DEFINED__

/* interface IMLDSItemSink */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IMLDSItemSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("308CCAD2-B71F-4e27-828E-6296257052A8")
    IMLDSItemSink : public IMLStoreMetadata
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ProcessFile( 
            /* [in] */ MLDSItem file) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMLDSItemSinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMLDSItemSink * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMLDSItemSink * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMLDSItemSink * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *StoreMetadata )( 
            IMLDSItemSink * This,
            /* [in] */ MLDSItem *pFile,
            /* [in] */ ULONG entityId,
            /* [in] */ IMLPropertySet *pPropertySet);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ProcessFile )( 
            IMLDSItemSink * This,
            /* [in] */ MLDSItem file);
        
        END_INTERFACE
    } IMLDSItemSinkVtbl;

    interface IMLDSItemSink
    {
        CONST_VTBL struct IMLDSItemSinkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMLDSItemSink_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMLDSItemSink_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMLDSItemSink_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMLDSItemSink_StoreMetadata(This,pFile,entityId,pPropertySet)	\
    ( (This)->lpVtbl -> StoreMetadata(This,pFile,entityId,pPropertySet) ) 


#define IMLDSItemSink_ProcessFile(This,file)	\
    ( (This)->lpVtbl -> ProcessFile(This,file) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMLDSItemSink_INTERFACE_DEFINED__ */


#ifndef __IMLDSPlugin_INTERFACE_DEFINED__
#define __IMLDSPlugin_INTERFACE_DEFINED__

/* interface IMLDSPlugin */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IMLDSPlugin;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B7986A03-6C88-4c5a-BB4A-89C3B26A5CEF")
    IMLDSPlugin : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ IMLDSItemSink *pDSItemSink,
            /* [in] */ IMLCore *pCore) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDataSources( 
            /* [in] */ BOOL fForceRefresh,
            /* [in] */ USHORT *pcDataSources,
            /* [size_is][size_is][out] */ MLDataSource **prgDataSources) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UpdateWatchList( 
            /* [in] */ MLDataSource datasource,
            /* [in] */ BSTR location,
            /* [in] */ BOOL fAdd,
            /* [out] */ BOOL *pfHandled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetWatchListCount( 
            /* [in] */ MLDataSource datasource,
            /* [out] */ ULONG *pcWatchList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetWatchList( 
            /* [in] */ MLDataSource datasource,
            /* [out] */ BSTR **prgWatchList,
            /* [out] */ ULONG *pcWatchList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetFileList( 
            /* [in] */ MLDataSource datasource,
            /* [in] */ IMLSortOrder *sortOrder,
            /* [in] */ MLRange range,
            /* [in] */ IMLPropertySet *pPropertySetWanted,
            /* [in] */ BSTR folderName,
            /* [in] */ MLQueryFlags flags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPluginCaps( 
            /* [out] */ DWORD *pdwPluginCaps) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMLDSPluginVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMLDSPlugin * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMLDSPlugin * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMLDSPlugin * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IMLDSPlugin * This,
            /* [in] */ IMLDSItemSink *pDSItemSink,
            /* [in] */ IMLCore *pCore);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDataSources )( 
            IMLDSPlugin * This,
            /* [in] */ BOOL fForceRefresh,
            /* [in] */ USHORT *pcDataSources,
            /* [size_is][size_is][out] */ MLDataSource **prgDataSources);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UpdateWatchList )( 
            IMLDSPlugin * This,
            /* [in] */ MLDataSource datasource,
            /* [in] */ BSTR location,
            /* [in] */ BOOL fAdd,
            /* [out] */ BOOL *pfHandled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetWatchListCount )( 
            IMLDSPlugin * This,
            /* [in] */ MLDataSource datasource,
            /* [out] */ ULONG *pcWatchList);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetWatchList )( 
            IMLDSPlugin * This,
            /* [in] */ MLDataSource datasource,
            /* [out] */ BSTR **prgWatchList,
            /* [out] */ ULONG *pcWatchList);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFileList )( 
            IMLDSPlugin * This,
            /* [in] */ MLDataSource datasource,
            /* [in] */ IMLSortOrder *sortOrder,
            /* [in] */ MLRange range,
            /* [in] */ IMLPropertySet *pPropertySetWanted,
            /* [in] */ BSTR folderName,
            /* [in] */ MLQueryFlags flags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPluginCaps )( 
            IMLDSPlugin * This,
            /* [out] */ DWORD *pdwPluginCaps);
        
        END_INTERFACE
    } IMLDSPluginVtbl;

    interface IMLDSPlugin
    {
        CONST_VTBL struct IMLDSPluginVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMLDSPlugin_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMLDSPlugin_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMLDSPlugin_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMLDSPlugin_Init(This,pDSItemSink,pCore)	\
    ( (This)->lpVtbl -> Init(This,pDSItemSink,pCore) ) 

#define IMLDSPlugin_GetDataSources(This,fForceRefresh,pcDataSources,prgDataSources)	\
    ( (This)->lpVtbl -> GetDataSources(This,fForceRefresh,pcDataSources,prgDataSources) ) 

#define IMLDSPlugin_UpdateWatchList(This,datasource,location,fAdd,pfHandled)	\
    ( (This)->lpVtbl -> UpdateWatchList(This,datasource,location,fAdd,pfHandled) ) 

#define IMLDSPlugin_GetWatchListCount(This,datasource,pcWatchList)	\
    ( (This)->lpVtbl -> GetWatchListCount(This,datasource,pcWatchList) ) 

#define IMLDSPlugin_GetWatchList(This,datasource,prgWatchList,pcWatchList)	\
    ( (This)->lpVtbl -> GetWatchList(This,datasource,prgWatchList,pcWatchList) ) 

#define IMLDSPlugin_GetFileList(This,datasource,sortOrder,range,pPropertySetWanted,folderName,flags)	\
    ( (This)->lpVtbl -> GetFileList(This,datasource,sortOrder,range,pPropertySetWanted,folderName,flags) ) 

#define IMLDSPlugin_GetPluginCaps(This,pdwPluginCaps)	\
    ( (This)->lpVtbl -> GetPluginCaps(This,pdwPluginCaps) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMLDSPlugin_INTERFACE_DEFINED__ */


#ifndef __IMLMediaParser_INTERFACE_DEFINED__
#define __IMLMediaParser_INTERFACE_DEFINED__

/* interface IMLMediaParser */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IMLMediaParser;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A3B4056A-C068-4c2e-ADE6-797F855216EE")
    IMLMediaParser : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Init( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetKnownFileExtensions( 
            /* [out] */ ULONG *pcFileExtensions,
            /* [size_is][size_is][out] */ BSTR **prgFileExtensions) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetEntityType( 
            /* [in] */ MLDSItem file,
            /* [out] */ ULONG *pEntityType) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ExtractMetadata( 
            /* [in] */ MLDSItem file,
            /* [in] */ IMLPropertySet *pPropertySetWanted,
            /* [in] */ IMLPropertySet *pFileMetadata) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMLMediaParserVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMLMediaParser * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMLMediaParser * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMLMediaParser * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IMLMediaParser * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetKnownFileExtensions )( 
            IMLMediaParser * This,
            /* [out] */ ULONG *pcFileExtensions,
            /* [size_is][size_is][out] */ BSTR **prgFileExtensions);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetEntityType )( 
            IMLMediaParser * This,
            /* [in] */ MLDSItem file,
            /* [out] */ ULONG *pEntityType);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ExtractMetadata )( 
            IMLMediaParser * This,
            /* [in] */ MLDSItem file,
            /* [in] */ IMLPropertySet *pPropertySetWanted,
            /* [in] */ IMLPropertySet *pFileMetadata);
        
        END_INTERFACE
    } IMLMediaParserVtbl;

    interface IMLMediaParser
    {
        CONST_VTBL struct IMLMediaParserVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMLMediaParser_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMLMediaParser_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMLMediaParser_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMLMediaParser_Init(This)	\
    ( (This)->lpVtbl -> Init(This) ) 

#define IMLMediaParser_GetKnownFileExtensions(This,pcFileExtensions,prgFileExtensions)	\
    ( (This)->lpVtbl -> GetKnownFileExtensions(This,pcFileExtensions,prgFileExtensions) ) 

#define IMLMediaParser_GetEntityType(This,file,pEntityType)	\
    ( (This)->lpVtbl -> GetEntityType(This,file,pEntityType) ) 

#define IMLMediaParser_ExtractMetadata(This,file,pPropertySetWanted,pFileMetadata)	\
    ( (This)->lpVtbl -> ExtractMetadata(This,file,pPropertySetWanted,pFileMetadata) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMLMediaParser_INTERFACE_DEFINED__ */



#ifndef __MLibDllPlugin_LIBRARY_DEFINED__
#define __MLibDllPlugin_LIBRARY_DEFINED__

/* library MLibDllPlugin */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_MLibDllPlugin;

EXTERN_C const CLSID CLSID_MLDSFileSystemPlugin;

#ifdef __cplusplus

class DECLSPEC_UUID("14A8EF7D-9580-4386-A4CB-AC34B2DC6C2C")
MLDSFileSystemPlugin;
#endif

EXTERN_C const CLSID CLSID_MLDSDLNAPlugin;

#ifdef __cplusplus

class DECLSPEC_UUID("60F69E85-C73A-4827-8E40-C9861A44703A")
MLDSDLNAPlugin;
#endif

EXTERN_C const CLSID CLSID_MLASFMetadataParser;

#ifdef __cplusplus

class DECLSPEC_UUID("9ABC2CD4-3CE0-4fb3-95D5-A6DFCACFF9AA")
MLASFMetadataParser;
#endif

EXTERN_C const CLSID CLSID_MLAVIMetadataParser;

#ifdef __cplusplus

class DECLSPEC_UUID("289CEE60-D768-4574-9BF3-E00D2EE14AD6")
MLAVIMetadataParser;
#endif

EXTERN_C const CLSID CLSID_MLMP3MetadataParser;

#ifdef __cplusplus

class DECLSPEC_UUID("1C19C217-6908-4390-A801-995C800BAE5F")
MLMP3MetadataParser;
#endif

EXTERN_C const CLSID CLSID_MLImageMetadataParser;

#ifdef __cplusplus

class DECLSPEC_UUID("C52555CE-7E5F-4f3c-98EF-9BDEBE8C443D")
MLImageMetadataParser;
#endif
#endif /* __MLibDllPlugin_LIBRARY_DEFINED__ */

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


