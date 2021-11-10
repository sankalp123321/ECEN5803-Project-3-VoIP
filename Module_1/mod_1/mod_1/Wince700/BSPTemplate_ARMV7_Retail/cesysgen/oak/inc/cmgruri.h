

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0543 */
/* Compiler settings for cmgruri.idl:
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

#ifndef __cmgruri_h__
#define __cmgruri_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IConfigManager2URI_FWD_DEFINED__
#define __IConfigManager2URI_FWD_DEFINED__
typedef interface IConfigManager2URI IConfigManager2URI;
#endif 	/* __IConfigManager2URI_FWD_DEFINED__ */


#ifndef __IConfigManager2MutableURI_FWD_DEFINED__
#define __IConfigManager2MutableURI_FWD_DEFINED__
typedef interface IConfigManager2MutableURI IConfigManager2MutableURI;
#endif 	/* __IConfigManager2MutableURI_FWD_DEFINED__ */


#ifndef __ICSPURITranslator_FWD_DEFINED__
#define __ICSPURITranslator_FWD_DEFINED__
typedef interface ICSPURITranslator ICSPURITranslator;
#endif 	/* __ICSPURITranslator_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_cmgruri_0000_0000 */
/* [local] */ 






extern RPC_IF_HANDLE __MIDL_itf_cmgruri_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cmgruri_0000_0000_v0_0_s_ifspec;

#ifndef __IConfigManager2URI_INTERFACE_DEFINED__
#define __IConfigManager2URI_INTERFACE_DEFINED__

/* interface IConfigManager2URI */
/* [object][uuid] */ 


EXTERN_C const IID IID_IConfigManager2URI;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E34E5896-40B2-45c4-A9C0-8A9601C3B0A6")
    IConfigManager2URI : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE IsAbsoluteURI( 
            /* [out] */ BOOL *pfIsAbsolute) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HasQuery( 
            /* [out] */ BOOL *pfHasQuery) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeFromString( 
            /* [string][in] */ const wchar_t *pwszURI) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeFromStream( 
            /* [in] */ ISequentialStream *pStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveToStream( 
            /* [in] */ ISequentialStream *pStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCanonicalRelativeURI( 
            /* [in] */ DWORD idwSegIndex,
            /* [in] */ BOOL fIncludeQuery,
            /* [out] */ BSTR *pbstrRelURI) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRelativeURI( 
            /* [in] */ DWORD dwSegIndex,
            /* [in] */ BOOL fIncludeQuery,
            /* [out] */ IConfigManager2URI **pURI) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SplitURI( 
            /* [in] */ DWORD idwSegSplit,
            /* [in] */ BOOL fIncludeQuery,
            /* [out] */ IConfigManager2URI **pURI1,
            /* [out] */ IConfigManager2URI **pURI2) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSegment( 
            /* [in] */ DWORD idwSegIndex,
            /* [out] */ const wchar_t **pwszSegment) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSegmentCopy( 
            /* [in] */ DWORD idwSegIndex,
            /* [out] */ BSTR *pbstrSegment) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CompareURI( 
            /* [in] */ IConfigManager2URI *pURI2,
            /* [in] */ BOOL fIgnoreCase,
            /* [out] */ int *pnCompare) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindLastCommonSegment( 
            /* [in] */ IConfigManager2URI *pURI,
            /* [in] */ BOOL fIgnoreCase,
            /* [out] */ DWORD *dwCommonSegIndex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetJoinedSegments( 
            /* [in] */ DWORD dwSegIndex,
            /* [in] */ wchar_t wchJoin,
            /* [out] */ BSTR *pbstrJoined) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetQueryValue( 
            /* [string][in] */ const wchar_t *pwszName,
            /* [out] */ BSTR *pbstrValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSegmentCount( 
            /* [out] */ DWORD *pcdwSegments) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [in] */ BOOL fIncludeQuery,
            /* [out] */ IConfigManager2MutableURI **ppMutableURI) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHash( 
            /* [in] */ BOOL fIgnoreCase,
            /* [out] */ DWORD *pdwHash) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AppendSegmentToCopy( 
            /* [string][in] */ const wchar_t *pwszSegment,
            /* [in] */ BOOL fSegmentIsEncoded,
            /* [in] */ BOOL fIncludeQuery,
            /* [out] */ IConfigManager2URI **ppURI) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AppendRelativeURIToCopy( 
            /* [in] */ IConfigManager2URI *pRelativeURI,
            /* [in] */ DWORD dwSegIndex,
            /* [in] */ BOOL fIncludeQuery,
            /* [out] */ IConfigManager2URI **ppURI) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IConfigManager2URIVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IConfigManager2URI * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IConfigManager2URI * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IConfigManager2URI * This);
        
        HRESULT ( STDMETHODCALLTYPE *IsAbsoluteURI )( 
            IConfigManager2URI * This,
            /* [out] */ BOOL *pfIsAbsolute);
        
        HRESULT ( STDMETHODCALLTYPE *HasQuery )( 
            IConfigManager2URI * This,
            /* [out] */ BOOL *pfHasQuery);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromString )( 
            IConfigManager2URI * This,
            /* [string][in] */ const wchar_t *pwszURI);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromStream )( 
            IConfigManager2URI * This,
            /* [in] */ ISequentialStream *pStream);
        
        HRESULT ( STDMETHODCALLTYPE *SaveToStream )( 
            IConfigManager2URI * This,
            /* [in] */ ISequentialStream *pStream);
        
        HRESULT ( STDMETHODCALLTYPE *GetCanonicalRelativeURI )( 
            IConfigManager2URI * This,
            /* [in] */ DWORD idwSegIndex,
            /* [in] */ BOOL fIncludeQuery,
            /* [out] */ BSTR *pbstrRelURI);
        
        HRESULT ( STDMETHODCALLTYPE *GetRelativeURI )( 
            IConfigManager2URI * This,
            /* [in] */ DWORD dwSegIndex,
            /* [in] */ BOOL fIncludeQuery,
            /* [out] */ IConfigManager2URI **pURI);
        
        HRESULT ( STDMETHODCALLTYPE *SplitURI )( 
            IConfigManager2URI * This,
            /* [in] */ DWORD idwSegSplit,
            /* [in] */ BOOL fIncludeQuery,
            /* [out] */ IConfigManager2URI **pURI1,
            /* [out] */ IConfigManager2URI **pURI2);
        
        HRESULT ( STDMETHODCALLTYPE *GetSegment )( 
            IConfigManager2URI * This,
            /* [in] */ DWORD idwSegIndex,
            /* [out] */ const wchar_t **pwszSegment);
        
        HRESULT ( STDMETHODCALLTYPE *GetSegmentCopy )( 
            IConfigManager2URI * This,
            /* [in] */ DWORD idwSegIndex,
            /* [out] */ BSTR *pbstrSegment);
        
        HRESULT ( STDMETHODCALLTYPE *CompareURI )( 
            IConfigManager2URI * This,
            /* [in] */ IConfigManager2URI *pURI2,
            /* [in] */ BOOL fIgnoreCase,
            /* [out] */ int *pnCompare);
        
        HRESULT ( STDMETHODCALLTYPE *FindLastCommonSegment )( 
            IConfigManager2URI * This,
            /* [in] */ IConfigManager2URI *pURI,
            /* [in] */ BOOL fIgnoreCase,
            /* [out] */ DWORD *dwCommonSegIndex);
        
        HRESULT ( STDMETHODCALLTYPE *GetJoinedSegments )( 
            IConfigManager2URI * This,
            /* [in] */ DWORD dwSegIndex,
            /* [in] */ wchar_t wchJoin,
            /* [out] */ BSTR *pbstrJoined);
        
        HRESULT ( STDMETHODCALLTYPE *GetQueryValue )( 
            IConfigManager2URI * This,
            /* [string][in] */ const wchar_t *pwszName,
            /* [out] */ BSTR *pbstrValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetSegmentCount )( 
            IConfigManager2URI * This,
            /* [out] */ DWORD *pcdwSegments);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IConfigManager2URI * This,
            /* [in] */ BOOL fIncludeQuery,
            /* [out] */ IConfigManager2MutableURI **ppMutableURI);
        
        HRESULT ( STDMETHODCALLTYPE *GetHash )( 
            IConfigManager2URI * This,
            /* [in] */ BOOL fIgnoreCase,
            /* [out] */ DWORD *pdwHash);
        
        HRESULT ( STDMETHODCALLTYPE *AppendSegmentToCopy )( 
            IConfigManager2URI * This,
            /* [string][in] */ const wchar_t *pwszSegment,
            /* [in] */ BOOL fSegmentIsEncoded,
            /* [in] */ BOOL fIncludeQuery,
            /* [out] */ IConfigManager2URI **ppURI);
        
        HRESULT ( STDMETHODCALLTYPE *AppendRelativeURIToCopy )( 
            IConfigManager2URI * This,
            /* [in] */ IConfigManager2URI *pRelativeURI,
            /* [in] */ DWORD dwSegIndex,
            /* [in] */ BOOL fIncludeQuery,
            /* [out] */ IConfigManager2URI **ppURI);
        
        END_INTERFACE
    } IConfigManager2URIVtbl;

    interface IConfigManager2URI
    {
        CONST_VTBL struct IConfigManager2URIVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConfigManager2URI_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IConfigManager2URI_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IConfigManager2URI_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IConfigManager2URI_IsAbsoluteURI(This,pfIsAbsolute)	\
    ( (This)->lpVtbl -> IsAbsoluteURI(This,pfIsAbsolute) ) 

#define IConfigManager2URI_HasQuery(This,pfHasQuery)	\
    ( (This)->lpVtbl -> HasQuery(This,pfHasQuery) ) 

#define IConfigManager2URI_InitializeFromString(This,pwszURI)	\
    ( (This)->lpVtbl -> InitializeFromString(This,pwszURI) ) 

#define IConfigManager2URI_InitializeFromStream(This,pStream)	\
    ( (This)->lpVtbl -> InitializeFromStream(This,pStream) ) 

#define IConfigManager2URI_SaveToStream(This,pStream)	\
    ( (This)->lpVtbl -> SaveToStream(This,pStream) ) 

#define IConfigManager2URI_GetCanonicalRelativeURI(This,idwSegIndex,fIncludeQuery,pbstrRelURI)	\
    ( (This)->lpVtbl -> GetCanonicalRelativeURI(This,idwSegIndex,fIncludeQuery,pbstrRelURI) ) 

#define IConfigManager2URI_GetRelativeURI(This,dwSegIndex,fIncludeQuery,pURI)	\
    ( (This)->lpVtbl -> GetRelativeURI(This,dwSegIndex,fIncludeQuery,pURI) ) 

#define IConfigManager2URI_SplitURI(This,idwSegSplit,fIncludeQuery,pURI1,pURI2)	\
    ( (This)->lpVtbl -> SplitURI(This,idwSegSplit,fIncludeQuery,pURI1,pURI2) ) 

#define IConfigManager2URI_GetSegment(This,idwSegIndex,pwszSegment)	\
    ( (This)->lpVtbl -> GetSegment(This,idwSegIndex,pwszSegment) ) 

#define IConfigManager2URI_GetSegmentCopy(This,idwSegIndex,pbstrSegment)	\
    ( (This)->lpVtbl -> GetSegmentCopy(This,idwSegIndex,pbstrSegment) ) 

#define IConfigManager2URI_CompareURI(This,pURI2,fIgnoreCase,pnCompare)	\
    ( (This)->lpVtbl -> CompareURI(This,pURI2,fIgnoreCase,pnCompare) ) 

#define IConfigManager2URI_FindLastCommonSegment(This,pURI,fIgnoreCase,dwCommonSegIndex)	\
    ( (This)->lpVtbl -> FindLastCommonSegment(This,pURI,fIgnoreCase,dwCommonSegIndex) ) 

#define IConfigManager2URI_GetJoinedSegments(This,dwSegIndex,wchJoin,pbstrJoined)	\
    ( (This)->lpVtbl -> GetJoinedSegments(This,dwSegIndex,wchJoin,pbstrJoined) ) 

#define IConfigManager2URI_GetQueryValue(This,pwszName,pbstrValue)	\
    ( (This)->lpVtbl -> GetQueryValue(This,pwszName,pbstrValue) ) 

#define IConfigManager2URI_GetSegmentCount(This,pcdwSegments)	\
    ( (This)->lpVtbl -> GetSegmentCount(This,pcdwSegments) ) 

#define IConfigManager2URI_Clone(This,fIncludeQuery,ppMutableURI)	\
    ( (This)->lpVtbl -> Clone(This,fIncludeQuery,ppMutableURI) ) 

#define IConfigManager2URI_GetHash(This,fIgnoreCase,pdwHash)	\
    ( (This)->lpVtbl -> GetHash(This,fIgnoreCase,pdwHash) ) 

#define IConfigManager2URI_AppendSegmentToCopy(This,pwszSegment,fSegmentIsEncoded,fIncludeQuery,ppURI)	\
    ( (This)->lpVtbl -> AppendSegmentToCopy(This,pwszSegment,fSegmentIsEncoded,fIncludeQuery,ppURI) ) 

#define IConfigManager2URI_AppendRelativeURIToCopy(This,pRelativeURI,dwSegIndex,fIncludeQuery,ppURI)	\
    ( (This)->lpVtbl -> AppendRelativeURIToCopy(This,pRelativeURI,dwSegIndex,fIncludeQuery,ppURI) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IConfigManager2URI_INTERFACE_DEFINED__ */


#ifndef __IConfigManager2MutableURI_INTERFACE_DEFINED__
#define __IConfigManager2MutableURI_INTERFACE_DEFINED__

/* interface IConfigManager2MutableURI */
/* [object][uuid] */ 


EXTERN_C const IID IID_IConfigManager2MutableURI;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4B965405-F21F-4702-95DD-4E81C3D1BB30")
    IConfigManager2MutableURI : public IConfigManager2URI
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AppendSegment( 
            /* [string][in] */ const wchar_t *pwszSegment,
            /* [in] */ BOOL fSegmentIsEncoded) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AppendRelativeURI( 
            /* [in] */ IConfigManager2URI *pURI,
            /* [in] */ DWORD idwSegment) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReplaceSegment( 
            /* [in] */ DWORD idwSegIndex,
            /* [string][in] */ const wchar_t *pwszSegment,
            /* [in] */ BOOL fSegmentIsEncoded) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteSegment( 
            /* [in] */ DWORD idwSegIndex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InsertSegment( 
            /* [in] */ DWORD idwInsertBefore,
            /* [string][in] */ const wchar_t *pwszSegment,
            /* [in] */ BOOL fSegmentIsEncoded) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AppendQueryValue( 
            /* [string][in] */ const wchar_t *pwszQueryName,
            /* [string][in] */ const wchar_t *pwszQueryValue,
            /* [in] */ BOOL fIsEncoded) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateNonMutableURI( 
            /* [out] */ IConfigManager2URI **ppURI) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IConfigManager2MutableURIVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IConfigManager2MutableURI * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IConfigManager2MutableURI * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IConfigManager2MutableURI * This);
        
        HRESULT ( STDMETHODCALLTYPE *IsAbsoluteURI )( 
            IConfigManager2MutableURI * This,
            /* [out] */ BOOL *pfIsAbsolute);
        
        HRESULT ( STDMETHODCALLTYPE *HasQuery )( 
            IConfigManager2MutableURI * This,
            /* [out] */ BOOL *pfHasQuery);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromString )( 
            IConfigManager2MutableURI * This,
            /* [string][in] */ const wchar_t *pwszURI);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromStream )( 
            IConfigManager2MutableURI * This,
            /* [in] */ ISequentialStream *pStream);
        
        HRESULT ( STDMETHODCALLTYPE *SaveToStream )( 
            IConfigManager2MutableURI * This,
            /* [in] */ ISequentialStream *pStream);
        
        HRESULT ( STDMETHODCALLTYPE *GetCanonicalRelativeURI )( 
            IConfigManager2MutableURI * This,
            /* [in] */ DWORD idwSegIndex,
            /* [in] */ BOOL fIncludeQuery,
            /* [out] */ BSTR *pbstrRelURI);
        
        HRESULT ( STDMETHODCALLTYPE *GetRelativeURI )( 
            IConfigManager2MutableURI * This,
            /* [in] */ DWORD dwSegIndex,
            /* [in] */ BOOL fIncludeQuery,
            /* [out] */ IConfigManager2URI **pURI);
        
        HRESULT ( STDMETHODCALLTYPE *SplitURI )( 
            IConfigManager2MutableURI * This,
            /* [in] */ DWORD idwSegSplit,
            /* [in] */ BOOL fIncludeQuery,
            /* [out] */ IConfigManager2URI **pURI1,
            /* [out] */ IConfigManager2URI **pURI2);
        
        HRESULT ( STDMETHODCALLTYPE *GetSegment )( 
            IConfigManager2MutableURI * This,
            /* [in] */ DWORD idwSegIndex,
            /* [out] */ const wchar_t **pwszSegment);
        
        HRESULT ( STDMETHODCALLTYPE *GetSegmentCopy )( 
            IConfigManager2MutableURI * This,
            /* [in] */ DWORD idwSegIndex,
            /* [out] */ BSTR *pbstrSegment);
        
        HRESULT ( STDMETHODCALLTYPE *CompareURI )( 
            IConfigManager2MutableURI * This,
            /* [in] */ IConfigManager2URI *pURI2,
            /* [in] */ BOOL fIgnoreCase,
            /* [out] */ int *pnCompare);
        
        HRESULT ( STDMETHODCALLTYPE *FindLastCommonSegment )( 
            IConfigManager2MutableURI * This,
            /* [in] */ IConfigManager2URI *pURI,
            /* [in] */ BOOL fIgnoreCase,
            /* [out] */ DWORD *dwCommonSegIndex);
        
        HRESULT ( STDMETHODCALLTYPE *GetJoinedSegments )( 
            IConfigManager2MutableURI * This,
            /* [in] */ DWORD dwSegIndex,
            /* [in] */ wchar_t wchJoin,
            /* [out] */ BSTR *pbstrJoined);
        
        HRESULT ( STDMETHODCALLTYPE *GetQueryValue )( 
            IConfigManager2MutableURI * This,
            /* [string][in] */ const wchar_t *pwszName,
            /* [out] */ BSTR *pbstrValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetSegmentCount )( 
            IConfigManager2MutableURI * This,
            /* [out] */ DWORD *pcdwSegments);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IConfigManager2MutableURI * This,
            /* [in] */ BOOL fIncludeQuery,
            /* [out] */ IConfigManager2MutableURI **ppMutableURI);
        
        HRESULT ( STDMETHODCALLTYPE *GetHash )( 
            IConfigManager2MutableURI * This,
            /* [in] */ BOOL fIgnoreCase,
            /* [out] */ DWORD *pdwHash);
        
        HRESULT ( STDMETHODCALLTYPE *AppendSegmentToCopy )( 
            IConfigManager2MutableURI * This,
            /* [string][in] */ const wchar_t *pwszSegment,
            /* [in] */ BOOL fSegmentIsEncoded,
            /* [in] */ BOOL fIncludeQuery,
            /* [out] */ IConfigManager2URI **ppURI);
        
        HRESULT ( STDMETHODCALLTYPE *AppendRelativeURIToCopy )( 
            IConfigManager2MutableURI * This,
            /* [in] */ IConfigManager2URI *pRelativeURI,
            /* [in] */ DWORD dwSegIndex,
            /* [in] */ BOOL fIncludeQuery,
            /* [out] */ IConfigManager2URI **ppURI);
        
        HRESULT ( STDMETHODCALLTYPE *AppendSegment )( 
            IConfigManager2MutableURI * This,
            /* [string][in] */ const wchar_t *pwszSegment,
            /* [in] */ BOOL fSegmentIsEncoded);
        
        HRESULT ( STDMETHODCALLTYPE *AppendRelativeURI )( 
            IConfigManager2MutableURI * This,
            /* [in] */ IConfigManager2URI *pURI,
            /* [in] */ DWORD idwSegment);
        
        HRESULT ( STDMETHODCALLTYPE *ReplaceSegment )( 
            IConfigManager2MutableURI * This,
            /* [in] */ DWORD idwSegIndex,
            /* [string][in] */ const wchar_t *pwszSegment,
            /* [in] */ BOOL fSegmentIsEncoded);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteSegment )( 
            IConfigManager2MutableURI * This,
            /* [in] */ DWORD idwSegIndex);
        
        HRESULT ( STDMETHODCALLTYPE *InsertSegment )( 
            IConfigManager2MutableURI * This,
            /* [in] */ DWORD idwInsertBefore,
            /* [string][in] */ const wchar_t *pwszSegment,
            /* [in] */ BOOL fSegmentIsEncoded);
        
        HRESULT ( STDMETHODCALLTYPE *AppendQueryValue )( 
            IConfigManager2MutableURI * This,
            /* [string][in] */ const wchar_t *pwszQueryName,
            /* [string][in] */ const wchar_t *pwszQueryValue,
            /* [in] */ BOOL fIsEncoded);
        
        HRESULT ( STDMETHODCALLTYPE *CreateNonMutableURI )( 
            IConfigManager2MutableURI * This,
            /* [out] */ IConfigManager2URI **ppURI);
        
        END_INTERFACE
    } IConfigManager2MutableURIVtbl;

    interface IConfigManager2MutableURI
    {
        CONST_VTBL struct IConfigManager2MutableURIVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConfigManager2MutableURI_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IConfigManager2MutableURI_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IConfigManager2MutableURI_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IConfigManager2MutableURI_IsAbsoluteURI(This,pfIsAbsolute)	\
    ( (This)->lpVtbl -> IsAbsoluteURI(This,pfIsAbsolute) ) 

#define IConfigManager2MutableURI_HasQuery(This,pfHasQuery)	\
    ( (This)->lpVtbl -> HasQuery(This,pfHasQuery) ) 

#define IConfigManager2MutableURI_InitializeFromString(This,pwszURI)	\
    ( (This)->lpVtbl -> InitializeFromString(This,pwszURI) ) 

#define IConfigManager2MutableURI_InitializeFromStream(This,pStream)	\
    ( (This)->lpVtbl -> InitializeFromStream(This,pStream) ) 

#define IConfigManager2MutableURI_SaveToStream(This,pStream)	\
    ( (This)->lpVtbl -> SaveToStream(This,pStream) ) 

#define IConfigManager2MutableURI_GetCanonicalRelativeURI(This,idwSegIndex,fIncludeQuery,pbstrRelURI)	\
    ( (This)->lpVtbl -> GetCanonicalRelativeURI(This,idwSegIndex,fIncludeQuery,pbstrRelURI) ) 

#define IConfigManager2MutableURI_GetRelativeURI(This,dwSegIndex,fIncludeQuery,pURI)	\
    ( (This)->lpVtbl -> GetRelativeURI(This,dwSegIndex,fIncludeQuery,pURI) ) 

#define IConfigManager2MutableURI_SplitURI(This,idwSegSplit,fIncludeQuery,pURI1,pURI2)	\
    ( (This)->lpVtbl -> SplitURI(This,idwSegSplit,fIncludeQuery,pURI1,pURI2) ) 

#define IConfigManager2MutableURI_GetSegment(This,idwSegIndex,pwszSegment)	\
    ( (This)->lpVtbl -> GetSegment(This,idwSegIndex,pwszSegment) ) 

#define IConfigManager2MutableURI_GetSegmentCopy(This,idwSegIndex,pbstrSegment)	\
    ( (This)->lpVtbl -> GetSegmentCopy(This,idwSegIndex,pbstrSegment) ) 

#define IConfigManager2MutableURI_CompareURI(This,pURI2,fIgnoreCase,pnCompare)	\
    ( (This)->lpVtbl -> CompareURI(This,pURI2,fIgnoreCase,pnCompare) ) 

#define IConfigManager2MutableURI_FindLastCommonSegment(This,pURI,fIgnoreCase,dwCommonSegIndex)	\
    ( (This)->lpVtbl -> FindLastCommonSegment(This,pURI,fIgnoreCase,dwCommonSegIndex) ) 

#define IConfigManager2MutableURI_GetJoinedSegments(This,dwSegIndex,wchJoin,pbstrJoined)	\
    ( (This)->lpVtbl -> GetJoinedSegments(This,dwSegIndex,wchJoin,pbstrJoined) ) 

#define IConfigManager2MutableURI_GetQueryValue(This,pwszName,pbstrValue)	\
    ( (This)->lpVtbl -> GetQueryValue(This,pwszName,pbstrValue) ) 

#define IConfigManager2MutableURI_GetSegmentCount(This,pcdwSegments)	\
    ( (This)->lpVtbl -> GetSegmentCount(This,pcdwSegments) ) 

#define IConfigManager2MutableURI_Clone(This,fIncludeQuery,ppMutableURI)	\
    ( (This)->lpVtbl -> Clone(This,fIncludeQuery,ppMutableURI) ) 

#define IConfigManager2MutableURI_GetHash(This,fIgnoreCase,pdwHash)	\
    ( (This)->lpVtbl -> GetHash(This,fIgnoreCase,pdwHash) ) 

#define IConfigManager2MutableURI_AppendSegmentToCopy(This,pwszSegment,fSegmentIsEncoded,fIncludeQuery,ppURI)	\
    ( (This)->lpVtbl -> AppendSegmentToCopy(This,pwszSegment,fSegmentIsEncoded,fIncludeQuery,ppURI) ) 

#define IConfigManager2MutableURI_AppendRelativeURIToCopy(This,pRelativeURI,dwSegIndex,fIncludeQuery,ppURI)	\
    ( (This)->lpVtbl -> AppendRelativeURIToCopy(This,pRelativeURI,dwSegIndex,fIncludeQuery,ppURI) ) 


#define IConfigManager2MutableURI_AppendSegment(This,pwszSegment,fSegmentIsEncoded)	\
    ( (This)->lpVtbl -> AppendSegment(This,pwszSegment,fSegmentIsEncoded) ) 

#define IConfigManager2MutableURI_AppendRelativeURI(This,pURI,idwSegment)	\
    ( (This)->lpVtbl -> AppendRelativeURI(This,pURI,idwSegment) ) 

#define IConfigManager2MutableURI_ReplaceSegment(This,idwSegIndex,pwszSegment,fSegmentIsEncoded)	\
    ( (This)->lpVtbl -> ReplaceSegment(This,idwSegIndex,pwszSegment,fSegmentIsEncoded) ) 

#define IConfigManager2MutableURI_DeleteSegment(This,idwSegIndex)	\
    ( (This)->lpVtbl -> DeleteSegment(This,idwSegIndex) ) 

#define IConfigManager2MutableURI_InsertSegment(This,idwInsertBefore,pwszSegment,fSegmentIsEncoded)	\
    ( (This)->lpVtbl -> InsertSegment(This,idwInsertBefore,pwszSegment,fSegmentIsEncoded) ) 

#define IConfigManager2MutableURI_AppendQueryValue(This,pwszQueryName,pwszQueryValue,fIsEncoded)	\
    ( (This)->lpVtbl -> AppendQueryValue(This,pwszQueryName,pwszQueryValue,fIsEncoded) ) 

#define IConfigManager2MutableURI_CreateNonMutableURI(This,ppURI)	\
    ( (This)->lpVtbl -> CreateNonMutableURI(This,ppURI) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IConfigManager2MutableURI_INTERFACE_DEFINED__ */


#ifndef __ICSPURITranslator_INTERFACE_DEFINED__
#define __ICSPURITranslator_INTERFACE_DEFINED__

/* interface ICSPURITranslator */
/* [object][uuid] */ 


EXTERN_C const IID IID_ICSPURITranslator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0190E18E-3A45-4634-BB1F-7A5B0C753DED")
    ICSPURITranslator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE TranslateURI( 
            /* [in] */ IConfigManager2MutableURI *puriTranslate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TranslateValue( 
            /* [in] */ IConfigManager2URI *puriNode,
            /* [out][in] */ VARIANT *pvarValue) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICSPURITranslatorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICSPURITranslator * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICSPURITranslator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICSPURITranslator * This);
        
        HRESULT ( STDMETHODCALLTYPE *TranslateURI )( 
            ICSPURITranslator * This,
            /* [in] */ IConfigManager2MutableURI *puriTranslate);
        
        HRESULT ( STDMETHODCALLTYPE *TranslateValue )( 
            ICSPURITranslator * This,
            /* [in] */ IConfigManager2URI *puriNode,
            /* [out][in] */ VARIANT *pvarValue);
        
        END_INTERFACE
    } ICSPURITranslatorVtbl;

    interface ICSPURITranslator
    {
        CONST_VTBL struct ICSPURITranslatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICSPURITranslator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICSPURITranslator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICSPURITranslator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICSPURITranslator_TranslateURI(This,puriTranslate)	\
    ( (This)->lpVtbl -> TranslateURI(This,puriTranslate) ) 

#define ICSPURITranslator_TranslateValue(This,puriNode,pvarValue)	\
    ( (This)->lpVtbl -> TranslateValue(This,puriNode,pvarValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICSPURITranslator_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_cmgruri_0000_0003 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_cmgruri_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cmgruri_0000_0003_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


