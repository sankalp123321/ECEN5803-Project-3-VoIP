

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0543 */
/* Compiler settings for thumbnailstore.idl:
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

#ifndef __thumbnailstore_h__
#define __thumbnailstore_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IThumbnailStore_FWD_DEFINED__
#define __IThumbnailStore_FWD_DEFINED__
typedef interface IThumbnailStore IThumbnailStore;
#endif 	/* __IThumbnailStore_FWD_DEFINED__ */


#ifndef __ThumbnailStore_FWD_DEFINED__
#define __ThumbnailStore_FWD_DEFINED__

#ifdef __cplusplus
typedef class ThumbnailStore ThumbnailStore;
#else
typedef struct ThumbnailStore ThumbnailStore;
#endif /* __cplusplus */

#endif 	/* __ThumbnailStore_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IThumbnailStore_INTERFACE_DEFINED__
#define __IThumbnailStore_INTERFACE_DEFINED__

/* interface IThumbnailStore */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IThumbnailStore;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6AD5852E-827B-473f-B7F1-B574F763908E")
    IThumbnailStore : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateThumbnailFilepath( 
            /* [in] */ LPCWSTR lpszExtension,
            /* [out] */ WCHAR *lpszDest,
            /* [in] */ DWORD *pcchDest) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetThumbnailSizeConstraints( 
            /* [out] */ DWORD *pdwMinimumSize,
            /* [out] */ DWORD *pdwMaximumSize,
            /* [out] */ DWORD *pdwStepSize) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetThumbnailWidthConstraints( 
            /* [out] */ DWORD *pdwMinimumWidth,
            /* [out] */ DWORD *pdwMaximumWidth,
            /* [out] */ DWORD *pdwStepWidth) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetThumbnailHeightConstraints( 
            /* [out] */ DWORD *pdwMinimumHeight,
            /* [out] */ DWORD *pdwMaximumHeight,
            /* [out] */ DWORD *pdwStepHeight) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IThumbnailStoreVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IThumbnailStore * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IThumbnailStore * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IThumbnailStore * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateThumbnailFilepath )( 
            IThumbnailStore * This,
            /* [in] */ LPCWSTR lpszExtension,
            /* [out] */ WCHAR *lpszDest,
            /* [in] */ DWORD *pcchDest);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetThumbnailSizeConstraints )( 
            IThumbnailStore * This,
            /* [out] */ DWORD *pdwMinimumSize,
            /* [out] */ DWORD *pdwMaximumSize,
            /* [out] */ DWORD *pdwStepSize);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetThumbnailWidthConstraints )( 
            IThumbnailStore * This,
            /* [out] */ DWORD *pdwMinimumWidth,
            /* [out] */ DWORD *pdwMaximumWidth,
            /* [out] */ DWORD *pdwStepWidth);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetThumbnailHeightConstraints )( 
            IThumbnailStore * This,
            /* [out] */ DWORD *pdwMinimumHeight,
            /* [out] */ DWORD *pdwMaximumHeight,
            /* [out] */ DWORD *pdwStepHeight);
        
        END_INTERFACE
    } IThumbnailStoreVtbl;

    interface IThumbnailStore
    {
        CONST_VTBL struct IThumbnailStoreVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IThumbnailStore_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IThumbnailStore_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IThumbnailStore_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IThumbnailStore_CreateThumbnailFilepath(This,lpszExtension,lpszDest,pcchDest)	\
    ( (This)->lpVtbl -> CreateThumbnailFilepath(This,lpszExtension,lpszDest,pcchDest) ) 

#define IThumbnailStore_GetThumbnailSizeConstraints(This,pdwMinimumSize,pdwMaximumSize,pdwStepSize)	\
    ( (This)->lpVtbl -> GetThumbnailSizeConstraints(This,pdwMinimumSize,pdwMaximumSize,pdwStepSize) ) 

#define IThumbnailStore_GetThumbnailWidthConstraints(This,pdwMinimumWidth,pdwMaximumWidth,pdwStepWidth)	\
    ( (This)->lpVtbl -> GetThumbnailWidthConstraints(This,pdwMinimumWidth,pdwMaximumWidth,pdwStepWidth) ) 

#define IThumbnailStore_GetThumbnailHeightConstraints(This,pdwMinimumHeight,pdwMaximumHeight,pdwStepHeight)	\
    ( (This)->lpVtbl -> GetThumbnailHeightConstraints(This,pdwMinimumHeight,pdwMaximumHeight,pdwStepHeight) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IThumbnailStore_INTERFACE_DEFINED__ */



#ifndef __ThumbnailStoreLib_LIBRARY_DEFINED__
#define __ThumbnailStoreLib_LIBRARY_DEFINED__

/* library ThumbnailStoreLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_ThumbnailStoreLib;

EXTERN_C const CLSID CLSID_ThumbnailStore;

#ifdef __cplusplus

class DECLSPEC_UUID("F5DF83A3-047F-44d2-9C2B-884E50C80F8E")
ThumbnailStore;
#endif
#endif /* __ThumbnailStoreLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


