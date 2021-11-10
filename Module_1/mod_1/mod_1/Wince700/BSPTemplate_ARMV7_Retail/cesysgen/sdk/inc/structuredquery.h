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

#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 5.03.0286 */
/* at Thu Apr 19 12:01:46 2007
 */
/* Compiler settings for ..\structuredquery.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32 (32b run), ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
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

#ifndef __structuredquery_h__
#define __structuredquery_h__

/* Forward Declarations */ 

#ifndef __IQueryParser_FWD_DEFINED__
#define __IQueryParser_FWD_DEFINED__
typedef interface IQueryParser IQueryParser;
#endif 	/* __IQueryParser_FWD_DEFINED__ */


#ifndef __IConditionFactory_FWD_DEFINED__
#define __IConditionFactory_FWD_DEFINED__
typedef interface IConditionFactory IConditionFactory;
#endif 	/* __IConditionFactory_FWD_DEFINED__ */


#ifndef __IQuerySolution_FWD_DEFINED__
#define __IQuerySolution_FWD_DEFINED__
typedef interface IQuerySolution IQuerySolution;
#endif 	/* __IQuerySolution_FWD_DEFINED__ */


#ifndef __ICondition_FWD_DEFINED__
#define __ICondition_FWD_DEFINED__
typedef interface ICondition ICondition;
#endif 	/* __ICondition_FWD_DEFINED__ */


#ifndef __IConditionGenerator_FWD_DEFINED__
#define __IConditionGenerator_FWD_DEFINED__
typedef interface IConditionGenerator IConditionGenerator;
#endif 	/* __IConditionGenerator_FWD_DEFINED__ */


#ifndef __IRichChunk_FWD_DEFINED__
#define __IRichChunk_FWD_DEFINED__
typedef interface IRichChunk IRichChunk;
#endif 	/* __IRichChunk_FWD_DEFINED__ */


#ifndef __IInterval_FWD_DEFINED__
#define __IInterval_FWD_DEFINED__
typedef interface IInterval IInterval;
#endif 	/* __IInterval_FWD_DEFINED__ */


#ifndef __IMetaData_FWD_DEFINED__
#define __IMetaData_FWD_DEFINED__
typedef interface IMetaData IMetaData;
#endif 	/* __IMetaData_FWD_DEFINED__ */


#ifndef __IEntity_FWD_DEFINED__
#define __IEntity_FWD_DEFINED__
typedef interface IEntity IEntity;
#endif 	/* __IEntity_FWD_DEFINED__ */


#ifndef __IRelationship_FWD_DEFINED__
#define __IRelationship_FWD_DEFINED__
typedef interface IRelationship IRelationship;
#endif 	/* __IRelationship_FWD_DEFINED__ */


#ifndef __INamedEntity_FWD_DEFINED__
#define __INamedEntity_FWD_DEFINED__
typedef interface INamedEntity INamedEntity;
#endif 	/* __INamedEntity_FWD_DEFINED__ */


#ifndef __ISchemaProvider_FWD_DEFINED__
#define __ISchemaProvider_FWD_DEFINED__
typedef interface ISchemaProvider ISchemaProvider;
#endif 	/* __ISchemaProvider_FWD_DEFINED__ */


#ifndef __ITokenCollection_FWD_DEFINED__
#define __ITokenCollection_FWD_DEFINED__
typedef interface ITokenCollection ITokenCollection;
#endif 	/* __ITokenCollection_FWD_DEFINED__ */


#ifndef __INamedEntityCollector_FWD_DEFINED__
#define __INamedEntityCollector_FWD_DEFINED__
typedef interface INamedEntityCollector INamedEntityCollector;
#endif 	/* __INamedEntityCollector_FWD_DEFINED__ */


#ifndef __ISchemaLocalizerSupport_FWD_DEFINED__
#define __ISchemaLocalizerSupport_FWD_DEFINED__
typedef interface ISchemaLocalizerSupport ISchemaLocalizerSupport;
#endif 	/* __ISchemaLocalizerSupport_FWD_DEFINED__ */


#ifndef __IQueryParserManager_FWD_DEFINED__
#define __IQueryParserManager_FWD_DEFINED__
typedef interface IQueryParserManager IQueryParserManager;
#endif 	/* __IQueryParserManager_FWD_DEFINED__ */


#ifndef __QueryParser_FWD_DEFINED__
#define __QueryParser_FWD_DEFINED__

#ifdef __cplusplus
typedef class QueryParser QueryParser;
#else
typedef struct QueryParser QueryParser;
#endif /* __cplusplus */

#endif 	/* __QueryParser_FWD_DEFINED__ */


#ifndef __NegationCondition_FWD_DEFINED__
#define __NegationCondition_FWD_DEFINED__

#ifdef __cplusplus
typedef class NegationCondition NegationCondition;
#else
typedef struct NegationCondition NegationCondition;
#endif /* __cplusplus */

#endif 	/* __NegationCondition_FWD_DEFINED__ */


#ifndef __CompoundCondition_FWD_DEFINED__
#define __CompoundCondition_FWD_DEFINED__

#ifdef __cplusplus
typedef class CompoundCondition CompoundCondition;
#else
typedef struct CompoundCondition CompoundCondition;
#endif /* __cplusplus */

#endif 	/* __CompoundCondition_FWD_DEFINED__ */


#ifndef __LeafCondition_FWD_DEFINED__
#define __LeafCondition_FWD_DEFINED__

#ifdef __cplusplus
typedef class LeafCondition LeafCondition;
#else
typedef struct LeafCondition LeafCondition;
#endif /* __cplusplus */

#endif 	/* __LeafCondition_FWD_DEFINED__ */


#ifndef __ConditionFactory_FWD_DEFINED__
#define __ConditionFactory_FWD_DEFINED__

#ifdef __cplusplus
typedef class ConditionFactory ConditionFactory;
#else
typedef struct ConditionFactory ConditionFactory;
#endif /* __cplusplus */

#endif 	/* __ConditionFactory_FWD_DEFINED__ */


#ifndef __QueryParserManager_FWD_DEFINED__
#define __QueryParserManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class QueryParserManager QueryParserManager;
#else
typedef struct QueryParserManager QueryParserManager;
#endif /* __cplusplus */

#endif 	/* __QueryParserManager_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_structuredquery_0000 */
/* [local] */ 











typedef /* [v1_enum] */ 
enum tagCONDITION_TYPE
    {	CT_AND_CONDITION	= 0,
	CT_OR_CONDITION	= CT_AND_CONDITION + 1,
	CT_NOT_CONDITION	= CT_OR_CONDITION + 1,
	CT_LEAF_CONDITION	= CT_NOT_CONDITION + 1
    }	CONDITION_TYPE;

typedef /* [v1_enum] */ 
enum tagCONDITION_OPERATION
    {	COP_IMPLICIT	= 0,
	COP_EQUAL	= COP_IMPLICIT + 1,
	COP_NOTEQUAL	= COP_EQUAL + 1,
	COP_LESSTHAN	= COP_NOTEQUAL + 1,
	COP_GREATERTHAN	= COP_LESSTHAN + 1,
	COP_LESSTHANOREQUAL	= COP_GREATERTHAN + 1,
	COP_GREATERTHANOREQUAL	= COP_LESSTHANOREQUAL + 1,
	COP_VALUE_STARTSWITH	= COP_GREATERTHANOREQUAL + 1,
	COP_VALUE_ENDSWITH	= COP_VALUE_STARTSWITH + 1,
	COP_VALUE_CONTAINS	= COP_VALUE_ENDSWITH + 1,
	COP_VALUE_NOTCONTAINS	= COP_VALUE_CONTAINS + 1,
	COP_DOSWILDCARDS	= COP_VALUE_NOTCONTAINS + 1,
	COP_WORD_EQUAL	= COP_DOSWILDCARDS + 1,
	COP_WORD_STARTSWITH	= COP_WORD_EQUAL + 1,
	COP_APPLICATION_SPECIFIC	= COP_WORD_STARTSWITH + 1
    }	CONDITION_OPERATION;

typedef /* [v1_enum] */ 
enum tagSTRUCTURED_QUERY_SINGLE_OPTION
    {	SQSO_SCHEMA	= 0,
	SQSO_LOCALE_WORD_BREAKING	= SQSO_SCHEMA + 1,
	SQSO_WORD_BREAKER	= SQSO_LOCALE_WORD_BREAKING + 1,
	SQSO_NATURAL_SYNTAX	= SQSO_WORD_BREAKER + 1,
	SQSO_AUTOMATIC_WILDCARD	= SQSO_NATURAL_SYNTAX + 1,
	SQSO_TRACE_LEVEL	= SQSO_AUTOMATIC_WILDCARD + 1,
	SQSO_LANGUAGE_KEYWORDS	= SQSO_TRACE_LEVEL + 1
    }	STRUCTURED_QUERY_SINGLE_OPTION;

typedef /* [v1_enum] */ 
enum tagSTRUCTURED_QUERY_MULTIOPTION
    {	SQMO_VIRTUAL_PROPERTY	= 0,
	SQMO_DEFAULT_PROPERTY	= SQMO_VIRTUAL_PROPERTY + 1,
	SQMO_GENERATOR_FOR_TYPE	= SQMO_DEFAULT_PROPERTY + 1
    }	STRUCTURED_QUERY_MULTIOPTION;

typedef /* [v1_enum] */ 
enum tagSTRUCTURED_QUERY_PARSE_ERROR
    {	SQPE_NONE	= 0,
	SQPE_EXTRA_OPENING_PARENTHESIS	= SQPE_NONE + 1,
	SQPE_EXTRA_CLOSING_PARENTHESIS	= SQPE_EXTRA_OPENING_PARENTHESIS + 1,
	SQPE_IGNORED_MODIFIER	= SQPE_EXTRA_CLOSING_PARENTHESIS + 1,
	SQPE_IGNORED_CONNECTOR	= SQPE_IGNORED_MODIFIER + 1,
	SQPE_IGNORED_KEYWORD	= SQPE_IGNORED_CONNECTOR + 1,
	SQPE_UNHANDLED	= SQPE_IGNORED_KEYWORD + 1
    }	STRUCTURED_QUERY_PARSE_ERROR;

/* [v1_enum] */ 
enum tagSTRUCTURED_QUERY_RESOLVE_OPTION
    {	SQRO_DONT_RESOLVE_DATETIME	= 0x1,
	SQRO_ALWAYS_ONE_INTERVAL	= 0x2,
	SQRO_DONT_SIMPLIFY_CONDITION_TREES	= 0x4,
	SQRO_DONT_MAP_RELATIONS	= 0x8,
	SQRO_DONT_RESOLVE_RANGES	= 0x10,
	SQRO_DONT_REMOVE_UNRESTRICTED_KEYWORDS	= 0x20,
	SQRO_DONT_SPLIT_WORDS	= 0x40,
	SQRO_IGNORE_PHRASE_ORDER	= 0x80
    };
typedef int STRUCTURED_QUERY_RESOLVE_OPTION;

typedef /* [v1_enum] */ 
enum tagINTERVAL_LIMIT_KIND
    {	ILK_EXPLICIT_INCLUDED	= 0,
	ILK_EXPLICIT_EXCLUDED	= ILK_EXPLICIT_INCLUDED + 1,
	ILK_NEGATIVE_INFINITY	= ILK_EXPLICIT_EXCLUDED + 1,
	ILK_POSITIVE_INFINITY	= ILK_NEGATIVE_INFINITY + 1
    }	INTERVAL_LIMIT_KIND;

typedef /* [v1_enum] */ 
enum tagQUERY_PARSER_MANAGER_OPTION
    {	QPMO_SCHEMA_BINARY_NAME	= 0,
	QPMO_PRELOCALIZED_SCHEMA_BINARY_PATH	= QPMO_SCHEMA_BINARY_NAME + 1,
	QPMO_UNLOCALIZED_SCHEMA_BINARY_PATH	= QPMO_PRELOCALIZED_SCHEMA_BINARY_PATH + 1,
	QPMO_LOCALIZED_SCHEMA_BINARY_PATH	= QPMO_UNLOCALIZED_SCHEMA_BINARY_PATH + 1,
	QPMO_APPEND_LCID_TO_LOCALIZED_PATH	= QPMO_LOCALIZED_SCHEMA_BINARY_PATH + 1,
	QPMO_LOCALIZER_SUPPORT	= QPMO_APPEND_LCID_TO_LOCALIZED_PATH + 1
    }	QUERY_PARSER_MANAGER_OPTION;



extern RPC_IF_HANDLE __MIDL_itf_structuredquery_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_structuredquery_0000_v0_0_s_ifspec;

#ifndef __IQueryParser_INTERFACE_DEFINED__
#define __IQueryParser_INTERFACE_DEFINED__

/* interface IQueryParser */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IQueryParser;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2EBDEE67-3505-43f8-9946-EA44ABC8E5B0")
    IQueryParser : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Parse( 
            /* [in] */ LPCWSTR pszInputString,
            /* [in] */ IEnumUnknown __RPC_FAR *pCustomProperties,
            /* [retval][out] */ IQuerySolution __RPC_FAR *__RPC_FAR *ppSolution) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOption( 
            /* [in] */ STRUCTURED_QUERY_SINGLE_OPTION option,
            /* [in] */ const PROPVARIANT __RPC_FAR *pOptionValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOption( 
            /* [in] */ STRUCTURED_QUERY_SINGLE_OPTION option,
            /* [retval][out] */ PROPVARIANT __RPC_FAR *pOptionValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMultiOption( 
            /* [in] */ STRUCTURED_QUERY_MULTIOPTION option,
            /* [in] */ LPCWSTR pszOptionKey,
            /* [in] */ const PROPVARIANT __RPC_FAR *pOptionValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSchemaProvider( 
            /* [retval][out] */ ISchemaProvider __RPC_FAR *__RPC_FAR *ppSchemaProvider) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RestateToString( 
            /* [in] */ ICondition __RPC_FAR *pCondition,
            /* [in] */ BOOL fUseEnglish,
            /* [out] */ LPWSTR __RPC_FAR *ppszQueryString) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ParsePropertyValue( 
            /* [in] */ LPCWSTR pszPropertyName,
            /* [in] */ LPCWSTR pszInputString,
            /* [retval][out] */ IQuerySolution __RPC_FAR *__RPC_FAR *ppSolution) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RestatePropertyValueToString( 
            /* [in] */ ICondition __RPC_FAR *pCondition,
            /* [in] */ BOOL fUseEnglish,
            /* [out] */ LPWSTR __RPC_FAR *ppszPropertyName,
            /* [out] */ LPWSTR __RPC_FAR *ppszQueryString) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IQueryParserVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IQueryParser __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IQueryParser __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IQueryParser __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Parse )( 
            IQueryParser __RPC_FAR * This,
            /* [in] */ LPCWSTR pszInputString,
            /* [in] */ IEnumUnknown __RPC_FAR *pCustomProperties,
            /* [retval][out] */ IQuerySolution __RPC_FAR *__RPC_FAR *ppSolution);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetOption )( 
            IQueryParser __RPC_FAR * This,
            /* [in] */ STRUCTURED_QUERY_SINGLE_OPTION option,
            /* [in] */ const PROPVARIANT __RPC_FAR *pOptionValue);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetOption )( 
            IQueryParser __RPC_FAR * This,
            /* [in] */ STRUCTURED_QUERY_SINGLE_OPTION option,
            /* [retval][out] */ PROPVARIANT __RPC_FAR *pOptionValue);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetMultiOption )( 
            IQueryParser __RPC_FAR * This,
            /* [in] */ STRUCTURED_QUERY_MULTIOPTION option,
            /* [in] */ LPCWSTR pszOptionKey,
            /* [in] */ const PROPVARIANT __RPC_FAR *pOptionValue);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetSchemaProvider )( 
            IQueryParser __RPC_FAR * This,
            /* [retval][out] */ ISchemaProvider __RPC_FAR *__RPC_FAR *ppSchemaProvider);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RestateToString )( 
            IQueryParser __RPC_FAR * This,
            /* [in] */ ICondition __RPC_FAR *pCondition,
            /* [in] */ BOOL fUseEnglish,
            /* [out] */ LPWSTR __RPC_FAR *ppszQueryString);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ParsePropertyValue )( 
            IQueryParser __RPC_FAR * This,
            /* [in] */ LPCWSTR pszPropertyName,
            /* [in] */ LPCWSTR pszInputString,
            /* [retval][out] */ IQuerySolution __RPC_FAR *__RPC_FAR *ppSolution);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RestatePropertyValueToString )( 
            IQueryParser __RPC_FAR * This,
            /* [in] */ ICondition __RPC_FAR *pCondition,
            /* [in] */ BOOL fUseEnglish,
            /* [out] */ LPWSTR __RPC_FAR *ppszPropertyName,
            /* [out] */ LPWSTR __RPC_FAR *ppszQueryString);
        
        END_INTERFACE
    } IQueryParserVtbl;

    interface IQueryParser
    {
        CONST_VTBL struct IQueryParserVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IQueryParser_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IQueryParser_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IQueryParser_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IQueryParser_Parse(This,pszInputString,pCustomProperties,ppSolution)	\
    (This)->lpVtbl -> Parse(This,pszInputString,pCustomProperties,ppSolution)

#define IQueryParser_SetOption(This,option,pOptionValue)	\
    (This)->lpVtbl -> SetOption(This,option,pOptionValue)

#define IQueryParser_GetOption(This,option,pOptionValue)	\
    (This)->lpVtbl -> GetOption(This,option,pOptionValue)

#define IQueryParser_SetMultiOption(This,option,pszOptionKey,pOptionValue)	\
    (This)->lpVtbl -> SetMultiOption(This,option,pszOptionKey,pOptionValue)

#define IQueryParser_GetSchemaProvider(This,ppSchemaProvider)	\
    (This)->lpVtbl -> GetSchemaProvider(This,ppSchemaProvider)

#define IQueryParser_RestateToString(This,pCondition,fUseEnglish,ppszQueryString)	\
    (This)->lpVtbl -> RestateToString(This,pCondition,fUseEnglish,ppszQueryString)

#define IQueryParser_ParsePropertyValue(This,pszPropertyName,pszInputString,ppSolution)	\
    (This)->lpVtbl -> ParsePropertyValue(This,pszPropertyName,pszInputString,ppSolution)

#define IQueryParser_RestatePropertyValueToString(This,pCondition,fUseEnglish,ppszPropertyName,ppszQueryString)	\
    (This)->lpVtbl -> RestatePropertyValueToString(This,pCondition,fUseEnglish,ppszPropertyName,ppszQueryString)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IQueryParser_Parse_Proxy( 
    IQueryParser __RPC_FAR * This,
    /* [in] */ LPCWSTR pszInputString,
    /* [in] */ IEnumUnknown __RPC_FAR *pCustomProperties,
    /* [retval][out] */ IQuerySolution __RPC_FAR *__RPC_FAR *ppSolution);


void __RPC_STUB IQueryParser_Parse_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IQueryParser_SetOption_Proxy( 
    IQueryParser __RPC_FAR * This,
    /* [in] */ STRUCTURED_QUERY_SINGLE_OPTION option,
    /* [in] */ const PROPVARIANT __RPC_FAR *pOptionValue);


void __RPC_STUB IQueryParser_SetOption_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IQueryParser_GetOption_Proxy( 
    IQueryParser __RPC_FAR * This,
    /* [in] */ STRUCTURED_QUERY_SINGLE_OPTION option,
    /* [retval][out] */ PROPVARIANT __RPC_FAR *pOptionValue);


void __RPC_STUB IQueryParser_GetOption_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IQueryParser_SetMultiOption_Proxy( 
    IQueryParser __RPC_FAR * This,
    /* [in] */ STRUCTURED_QUERY_MULTIOPTION option,
    /* [in] */ LPCWSTR pszOptionKey,
    /* [in] */ const PROPVARIANT __RPC_FAR *pOptionValue);


void __RPC_STUB IQueryParser_SetMultiOption_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IQueryParser_GetSchemaProvider_Proxy( 
    IQueryParser __RPC_FAR * This,
    /* [retval][out] */ ISchemaProvider __RPC_FAR *__RPC_FAR *ppSchemaProvider);


void __RPC_STUB IQueryParser_GetSchemaProvider_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IQueryParser_RestateToString_Proxy( 
    IQueryParser __RPC_FAR * This,
    /* [in] */ ICondition __RPC_FAR *pCondition,
    /* [in] */ BOOL fUseEnglish,
    /* [out] */ LPWSTR __RPC_FAR *ppszQueryString);


void __RPC_STUB IQueryParser_RestateToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IQueryParser_ParsePropertyValue_Proxy( 
    IQueryParser __RPC_FAR * This,
    /* [in] */ LPCWSTR pszPropertyName,
    /* [in] */ LPCWSTR pszInputString,
    /* [retval][out] */ IQuerySolution __RPC_FAR *__RPC_FAR *ppSolution);


void __RPC_STUB IQueryParser_ParsePropertyValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IQueryParser_RestatePropertyValueToString_Proxy( 
    IQueryParser __RPC_FAR * This,
    /* [in] */ ICondition __RPC_FAR *pCondition,
    /* [in] */ BOOL fUseEnglish,
    /* [out] */ LPWSTR __RPC_FAR *ppszPropertyName,
    /* [out] */ LPWSTR __RPC_FAR *ppszQueryString);


void __RPC_STUB IQueryParser_RestatePropertyValueToString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IQueryParser_INTERFACE_DEFINED__ */


#ifndef __IConditionFactory_INTERFACE_DEFINED__
#define __IConditionFactory_INTERFACE_DEFINED__

/* interface IConditionFactory */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IConditionFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A5EFE073-B16F-474f-9F3E-9F8B497A3E08")
    IConditionFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE MakeNot( 
            /* [in] */ ICondition __RPC_FAR *pSubCondition,
            /* [in] */ BOOL simplify,
            /* [retval][out] */ ICondition __RPC_FAR *__RPC_FAR *ppResultQuery) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MakeAndOr( 
            /* [in] */ CONDITION_TYPE nodeType,
            /* [in] */ IEnumUnknown __RPC_FAR *pSubConditions,
            /* [in] */ BOOL simplify,
            /* [retval][out] */ ICondition __RPC_FAR *__RPC_FAR *ppResultQuery) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MakeLeaf( 
            /* [unique][in] */ LPCWSTR pszPropertyName,
            /* [in] */ CONDITION_OPERATION op,
            /* [unique][in] */ LPCWSTR pszValueType,
            /* [in] */ const PROPVARIANT __RPC_FAR *pValue,
            /* [in] */ IRichChunk __RPC_FAR *pPropertyNameTerm,
            /* [in] */ IRichChunk __RPC_FAR *pOperationTerm,
            /* [in] */ IRichChunk __RPC_FAR *pValueTerm,
            /* [in] */ BOOL expand,
            /* [retval][out] */ ICondition __RPC_FAR *__RPC_FAR *ppResultQuery) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE Resolve( 
            /* [in] */ ICondition __RPC_FAR *pConditionTree,
            /* [in] */ STRUCTURED_QUERY_RESOLVE_OPTION sqro,
            /* [ref][in] */ const SYSTEMTIME __RPC_FAR *pstReferenceTime,
            /* [retval][out] */ ICondition __RPC_FAR *__RPC_FAR *ppResolvedConditionTree) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IConditionFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IConditionFactory __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IConditionFactory __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IConditionFactory __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *MakeNot )( 
            IConditionFactory __RPC_FAR * This,
            /* [in] */ ICondition __RPC_FAR *pSubCondition,
            /* [in] */ BOOL simplify,
            /* [retval][out] */ ICondition __RPC_FAR *__RPC_FAR *ppResultQuery);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *MakeAndOr )( 
            IConditionFactory __RPC_FAR * This,
            /* [in] */ CONDITION_TYPE nodeType,
            /* [in] */ IEnumUnknown __RPC_FAR *pSubConditions,
            /* [in] */ BOOL simplify,
            /* [retval][out] */ ICondition __RPC_FAR *__RPC_FAR *ppResultQuery);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *MakeLeaf )( 
            IConditionFactory __RPC_FAR * This,
            /* [unique][in] */ LPCWSTR pszPropertyName,
            /* [in] */ CONDITION_OPERATION op,
            /* [unique][in] */ LPCWSTR pszValueType,
            /* [in] */ const PROPVARIANT __RPC_FAR *pValue,
            /* [in] */ IRichChunk __RPC_FAR *pPropertyNameTerm,
            /* [in] */ IRichChunk __RPC_FAR *pOperationTerm,
            /* [in] */ IRichChunk __RPC_FAR *pValueTerm,
            /* [in] */ BOOL expand,
            /* [retval][out] */ ICondition __RPC_FAR *__RPC_FAR *ppResultQuery);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Resolve )( 
            IConditionFactory __RPC_FAR * This,
            /* [in] */ ICondition __RPC_FAR *pConditionTree,
            /* [in] */ STRUCTURED_QUERY_RESOLVE_OPTION sqro,
            /* [ref][in] */ const SYSTEMTIME __RPC_FAR *pstReferenceTime,
            /* [retval][out] */ ICondition __RPC_FAR *__RPC_FAR *ppResolvedConditionTree);
        
        END_INTERFACE
    } IConditionFactoryVtbl;

    interface IConditionFactory
    {
        CONST_VTBL struct IConditionFactoryVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConditionFactory_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IConditionFactory_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IConditionFactory_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IConditionFactory_MakeNot(This,pSubCondition,simplify,ppResultQuery)	\
    (This)->lpVtbl -> MakeNot(This,pSubCondition,simplify,ppResultQuery)

#define IConditionFactory_MakeAndOr(This,nodeType,pSubConditions,simplify,ppResultQuery)	\
    (This)->lpVtbl -> MakeAndOr(This,nodeType,pSubConditions,simplify,ppResultQuery)

#define IConditionFactory_MakeLeaf(This,pszPropertyName,op,pszValueType,pValue,pPropertyNameTerm,pOperationTerm,pValueTerm,expand,ppResultQuery)	\
    (This)->lpVtbl -> MakeLeaf(This,pszPropertyName,op,pszValueType,pValue,pPropertyNameTerm,pOperationTerm,pValueTerm,expand,ppResultQuery)

#define IConditionFactory_Resolve(This,pConditionTree,sqro,pstReferenceTime,ppResolvedConditionTree)	\
    (This)->lpVtbl -> Resolve(This,pConditionTree,sqro,pstReferenceTime,ppResolvedConditionTree)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IConditionFactory_MakeNot_Proxy( 
    IConditionFactory __RPC_FAR * This,
    /* [in] */ ICondition __RPC_FAR *pSubCondition,
    /* [in] */ BOOL simplify,
    /* [retval][out] */ ICondition __RPC_FAR *__RPC_FAR *ppResultQuery);


void __RPC_STUB IConditionFactory_MakeNot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IConditionFactory_MakeAndOr_Proxy( 
    IConditionFactory __RPC_FAR * This,
    /* [in] */ CONDITION_TYPE nodeType,
    /* [in] */ IEnumUnknown __RPC_FAR *pSubConditions,
    /* [in] */ BOOL simplify,
    /* [retval][out] */ ICondition __RPC_FAR *__RPC_FAR *ppResultQuery);


void __RPC_STUB IConditionFactory_MakeAndOr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IConditionFactory_MakeLeaf_Proxy( 
    IConditionFactory __RPC_FAR * This,
    /* [unique][in] */ LPCWSTR pszPropertyName,
    /* [in] */ CONDITION_OPERATION op,
    /* [unique][in] */ LPCWSTR pszValueType,
    /* [in] */ const PROPVARIANT __RPC_FAR *pValue,
    /* [in] */ IRichChunk __RPC_FAR *pPropertyNameTerm,
    /* [in] */ IRichChunk __RPC_FAR *pOperationTerm,
    /* [in] */ IRichChunk __RPC_FAR *pValueTerm,
    /* [in] */ BOOL expand,
    /* [retval][out] */ ICondition __RPC_FAR *__RPC_FAR *ppResultQuery);


void __RPC_STUB IConditionFactory_MakeLeaf_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [local] */ HRESULT STDMETHODCALLTYPE IConditionFactory_Resolve_Proxy( 
    IConditionFactory __RPC_FAR * This,
    /* [in] */ ICondition __RPC_FAR *pConditionTree,
    /* [in] */ STRUCTURED_QUERY_RESOLVE_OPTION sqro,
    /* [ref][in] */ const SYSTEMTIME __RPC_FAR *pstReferenceTime,
    /* [retval][out] */ ICondition __RPC_FAR *__RPC_FAR *ppResolvedConditionTree);


void __RPC_STUB IConditionFactory_Resolve_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IConditionFactory_INTERFACE_DEFINED__ */


#ifndef __IQuerySolution_INTERFACE_DEFINED__
#define __IQuerySolution_INTERFACE_DEFINED__

/* interface IQuerySolution */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IQuerySolution;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D6EBC66B-8921-4193-AFDD-A1789FB7FF57")
    IQuerySolution : public IConditionFactory
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE GetQuery( 
            /* [out] */ ICondition __RPC_FAR *__RPC_FAR *ppQueryNode,
            /* [out] */ IEntity __RPC_FAR *__RPC_FAR *ppMainType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetErrors( 
            /* [in] */ REFIID riid,
            /* [iid_is][retval][out] */ void __RPC_FAR *__RPC_FAR *ppParseErrors) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE GetLexicalData( 
            /* [out] */ LPWSTR __RPC_FAR *ppszInputString,
            /* [out] */ ITokenCollection __RPC_FAR *__RPC_FAR *ppTokens,
            /* [out] */ LCID __RPC_FAR *pLocale,
            /* [out] */ IUnknown __RPC_FAR *__RPC_FAR *ppWordBreaker) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IQuerySolutionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IQuerySolution __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IQuerySolution __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IQuerySolution __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *MakeNot )( 
            IQuerySolution __RPC_FAR * This,
            /* [in] */ ICondition __RPC_FAR *pSubCondition,
            /* [in] */ BOOL simplify,
            /* [retval][out] */ ICondition __RPC_FAR *__RPC_FAR *ppResultQuery);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *MakeAndOr )( 
            IQuerySolution __RPC_FAR * This,
            /* [in] */ CONDITION_TYPE nodeType,
            /* [in] */ IEnumUnknown __RPC_FAR *pSubConditions,
            /* [in] */ BOOL simplify,
            /* [retval][out] */ ICondition __RPC_FAR *__RPC_FAR *ppResultQuery);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *MakeLeaf )( 
            IQuerySolution __RPC_FAR * This,
            /* [unique][in] */ LPCWSTR pszPropertyName,
            /* [in] */ CONDITION_OPERATION op,
            /* [unique][in] */ LPCWSTR pszValueType,
            /* [in] */ const PROPVARIANT __RPC_FAR *pValue,
            /* [in] */ IRichChunk __RPC_FAR *pPropertyNameTerm,
            /* [in] */ IRichChunk __RPC_FAR *pOperationTerm,
            /* [in] */ IRichChunk __RPC_FAR *pValueTerm,
            /* [in] */ BOOL expand,
            /* [retval][out] */ ICondition __RPC_FAR *__RPC_FAR *ppResultQuery);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Resolve )( 
            IQuerySolution __RPC_FAR * This,
            /* [in] */ ICondition __RPC_FAR *pConditionTree,
            /* [in] */ STRUCTURED_QUERY_RESOLVE_OPTION sqro,
            /* [ref][in] */ const SYSTEMTIME __RPC_FAR *pstReferenceTime,
            /* [retval][out] */ ICondition __RPC_FAR *__RPC_FAR *ppResolvedConditionTree);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetQuery )( 
            IQuerySolution __RPC_FAR * This,
            /* [out] */ ICondition __RPC_FAR *__RPC_FAR *ppQueryNode,
            /* [out] */ IEntity __RPC_FAR *__RPC_FAR *ppMainType);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetErrors )( 
            IQuerySolution __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][retval][out] */ void __RPC_FAR *__RPC_FAR *ppParseErrors);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetLexicalData )( 
            IQuerySolution __RPC_FAR * This,
            /* [out] */ LPWSTR __RPC_FAR *ppszInputString,
            /* [out] */ ITokenCollection __RPC_FAR *__RPC_FAR *ppTokens,
            /* [out] */ LCID __RPC_FAR *pLocale,
            /* [out] */ IUnknown __RPC_FAR *__RPC_FAR *ppWordBreaker);
        
        END_INTERFACE
    } IQuerySolutionVtbl;

    interface IQuerySolution
    {
        CONST_VTBL struct IQuerySolutionVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IQuerySolution_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IQuerySolution_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IQuerySolution_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IQuerySolution_MakeNot(This,pSubCondition,simplify,ppResultQuery)	\
    (This)->lpVtbl -> MakeNot(This,pSubCondition,simplify,ppResultQuery)

#define IQuerySolution_MakeAndOr(This,nodeType,pSubConditions,simplify,ppResultQuery)	\
    (This)->lpVtbl -> MakeAndOr(This,nodeType,pSubConditions,simplify,ppResultQuery)

#define IQuerySolution_MakeLeaf(This,pszPropertyName,op,pszValueType,pValue,pPropertyNameTerm,pOperationTerm,pValueTerm,expand,ppResultQuery)	\
    (This)->lpVtbl -> MakeLeaf(This,pszPropertyName,op,pszValueType,pValue,pPropertyNameTerm,pOperationTerm,pValueTerm,expand,ppResultQuery)

#define IQuerySolution_Resolve(This,pConditionTree,sqro,pstReferenceTime,ppResolvedConditionTree)	\
    (This)->lpVtbl -> Resolve(This,pConditionTree,sqro,pstReferenceTime,ppResolvedConditionTree)


#define IQuerySolution_GetQuery(This,ppQueryNode,ppMainType)	\
    (This)->lpVtbl -> GetQuery(This,ppQueryNode,ppMainType)

#define IQuerySolution_GetErrors(This,riid,ppParseErrors)	\
    (This)->lpVtbl -> GetErrors(This,riid,ppParseErrors)

#define IQuerySolution_GetLexicalData(This,ppszInputString,ppTokens,pLocale,ppWordBreaker)	\
    (This)->lpVtbl -> GetLexicalData(This,ppszInputString,ppTokens,pLocale,ppWordBreaker)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [local] */ HRESULT STDMETHODCALLTYPE IQuerySolution_GetQuery_Proxy( 
    IQuerySolution __RPC_FAR * This,
    /* [out] */ ICondition __RPC_FAR *__RPC_FAR *ppQueryNode,
    /* [out] */ IEntity __RPC_FAR *__RPC_FAR *ppMainType);


void __RPC_STUB IQuerySolution_GetQuery_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IQuerySolution_GetErrors_Proxy( 
    IQuerySolution __RPC_FAR * This,
    /* [in] */ REFIID riid,
    /* [iid_is][retval][out] */ void __RPC_FAR *__RPC_FAR *ppParseErrors);


void __RPC_STUB IQuerySolution_GetErrors_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [local] */ HRESULT STDMETHODCALLTYPE IQuerySolution_GetLexicalData_Proxy( 
    IQuerySolution __RPC_FAR * This,
    /* [out] */ LPWSTR __RPC_FAR *ppszInputString,
    /* [out] */ ITokenCollection __RPC_FAR *__RPC_FAR *ppTokens,
    /* [out] */ LCID __RPC_FAR *pLocale,
    /* [out] */ IUnknown __RPC_FAR *__RPC_FAR *ppWordBreaker);


void __RPC_STUB IQuerySolution_GetLexicalData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IQuerySolution_INTERFACE_DEFINED__ */


#ifndef __ICondition_INTERFACE_DEFINED__
#define __ICondition_INTERFACE_DEFINED__

/* interface ICondition */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ICondition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0FC988D4-C935-4b97-A973-46282EA175C8")
    ICondition : public IPersistStream
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetConditionType( 
            /* [retval][out] */ CONDITION_TYPE __RPC_FAR *pNodeType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSubConditions( 
            /* [in] */ REFIID riid,
            /* [iid_is][retval][out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE GetComparisonInfo( 
            /* [out] */ LPWSTR __RPC_FAR *ppszPropertyName,
            /* [out] */ CONDITION_OPERATION __RPC_FAR *pOperation,
            /* [out] */ PROPVARIANT __RPC_FAR *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetValueType( 
            /* [retval][out] */ LPWSTR __RPC_FAR *ppszValueTypeName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetValueNormalization( 
            /* [retval][out] */ LPWSTR __RPC_FAR *ppszNormalization) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE GetInputTerms( 
            /* [out] */ IRichChunk __RPC_FAR *__RPC_FAR *ppPropertyTerm,
            /* [out] */ IRichChunk __RPC_FAR *__RPC_FAR *ppOperationTerm,
            /* [out] */ IRichChunk __RPC_FAR *__RPC_FAR *ppValueTerm) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [retval][out] */ ICondition __RPC_FAR *__RPC_FAR *ppc) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IConditionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ICondition __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ICondition __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ICondition __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetClassID )( 
            ICondition __RPC_FAR * This,
            /* [out] */ CLSID __RPC_FAR *pClassID);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsDirty )( 
            ICondition __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Load )( 
            ICondition __RPC_FAR * This,
            /* [unique][in] */ IStream __RPC_FAR *pStm);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Save )( 
            ICondition __RPC_FAR * This,
            /* [unique][in] */ IStream __RPC_FAR *pStm,
            /* [in] */ BOOL fClearDirty);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetSizeMax )( 
            ICondition __RPC_FAR * This,
            /* [out] */ ULARGE_INTEGER __RPC_FAR *pcbSize);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetConditionType )( 
            ICondition __RPC_FAR * This,
            /* [retval][out] */ CONDITION_TYPE __RPC_FAR *pNodeType);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetSubConditions )( 
            ICondition __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][retval][out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetComparisonInfo )( 
            ICondition __RPC_FAR * This,
            /* [out] */ LPWSTR __RPC_FAR *ppszPropertyName,
            /* [out] */ CONDITION_OPERATION __RPC_FAR *pOperation,
            /* [out] */ PROPVARIANT __RPC_FAR *pValue);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetValueType )( 
            ICondition __RPC_FAR * This,
            /* [retval][out] */ LPWSTR __RPC_FAR *ppszValueTypeName);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetValueNormalization )( 
            ICondition __RPC_FAR * This,
            /* [retval][out] */ LPWSTR __RPC_FAR *ppszNormalization);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetInputTerms )( 
            ICondition __RPC_FAR * This,
            /* [out] */ IRichChunk __RPC_FAR *__RPC_FAR *ppPropertyTerm,
            /* [out] */ IRichChunk __RPC_FAR *__RPC_FAR *ppOperationTerm,
            /* [out] */ IRichChunk __RPC_FAR *__RPC_FAR *ppValueTerm);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clone )( 
            ICondition __RPC_FAR * This,
            /* [retval][out] */ ICondition __RPC_FAR *__RPC_FAR *ppc);
        
        END_INTERFACE
    } IConditionVtbl;

    interface ICondition
    {
        CONST_VTBL struct IConditionVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICondition_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICondition_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICondition_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICondition_GetClassID(This,pClassID)	\
    (This)->lpVtbl -> GetClassID(This,pClassID)


#define ICondition_IsDirty(This)	\
    (This)->lpVtbl -> IsDirty(This)

#define ICondition_Load(This,pStm)	\
    (This)->lpVtbl -> Load(This,pStm)

#define ICondition_Save(This,pStm,fClearDirty)	\
    (This)->lpVtbl -> Save(This,pStm,fClearDirty)

#define ICondition_GetSizeMax(This,pcbSize)	\
    (This)->lpVtbl -> GetSizeMax(This,pcbSize)


#define ICondition_GetConditionType(This,pNodeType)	\
    (This)->lpVtbl -> GetConditionType(This,pNodeType)

#define ICondition_GetSubConditions(This,riid,ppv)	\
    (This)->lpVtbl -> GetSubConditions(This,riid,ppv)

#define ICondition_GetComparisonInfo(This,ppszPropertyName,pOperation,pValue)	\
    (This)->lpVtbl -> GetComparisonInfo(This,ppszPropertyName,pOperation,pValue)

#define ICondition_GetValueType(This,ppszValueTypeName)	\
    (This)->lpVtbl -> GetValueType(This,ppszValueTypeName)

#define ICondition_GetValueNormalization(This,ppszNormalization)	\
    (This)->lpVtbl -> GetValueNormalization(This,ppszNormalization)

#define ICondition_GetInputTerms(This,ppPropertyTerm,ppOperationTerm,ppValueTerm)	\
    (This)->lpVtbl -> GetInputTerms(This,ppPropertyTerm,ppOperationTerm,ppValueTerm)

#define ICondition_Clone(This,ppc)	\
    (This)->lpVtbl -> Clone(This,ppc)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ICondition_GetConditionType_Proxy( 
    ICondition __RPC_FAR * This,
    /* [retval][out] */ CONDITION_TYPE __RPC_FAR *pNodeType);


void __RPC_STUB ICondition_GetConditionType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICondition_GetSubConditions_Proxy( 
    ICondition __RPC_FAR * This,
    /* [in] */ REFIID riid,
    /* [iid_is][retval][out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB ICondition_GetSubConditions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [local] */ HRESULT STDMETHODCALLTYPE ICondition_GetComparisonInfo_Proxy( 
    ICondition __RPC_FAR * This,
    /* [out] */ LPWSTR __RPC_FAR *ppszPropertyName,
    /* [out] */ CONDITION_OPERATION __RPC_FAR *pOperation,
    /* [out] */ PROPVARIANT __RPC_FAR *pValue);


void __RPC_STUB ICondition_GetComparisonInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICondition_GetValueType_Proxy( 
    ICondition __RPC_FAR * This,
    /* [retval][out] */ LPWSTR __RPC_FAR *ppszValueTypeName);


void __RPC_STUB ICondition_GetValueType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICondition_GetValueNormalization_Proxy( 
    ICondition __RPC_FAR * This,
    /* [retval][out] */ LPWSTR __RPC_FAR *ppszNormalization);


void __RPC_STUB ICondition_GetValueNormalization_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [local] */ HRESULT STDMETHODCALLTYPE ICondition_GetInputTerms_Proxy( 
    ICondition __RPC_FAR * This,
    /* [out] */ IRichChunk __RPC_FAR *__RPC_FAR *ppPropertyTerm,
    /* [out] */ IRichChunk __RPC_FAR *__RPC_FAR *ppOperationTerm,
    /* [out] */ IRichChunk __RPC_FAR *__RPC_FAR *ppValueTerm);


void __RPC_STUB ICondition_GetInputTerms_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICondition_Clone_Proxy( 
    ICondition __RPC_FAR * This,
    /* [retval][out] */ ICondition __RPC_FAR *__RPC_FAR *ppc);


void __RPC_STUB ICondition_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICondition_INTERFACE_DEFINED__ */


#ifndef __IConditionGenerator_INTERFACE_DEFINED__
#define __IConditionGenerator_INTERFACE_DEFINED__

/* interface IConditionGenerator */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IConditionGenerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("92D2CC58-4386-45a3-B98C-7E0CE64A4117")
    IConditionGenerator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ ISchemaProvider __RPC_FAR *pSchemaProvider) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RecognizeNamedEntities( 
            /* [in] */ LPCWSTR pszInputString,
            /* [in] */ LCID lcid,
            /* [in] */ ITokenCollection __RPC_FAR *pTokenCollection,
            /* [out][in] */ INamedEntityCollector __RPC_FAR *pNamedEntities) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GenerateForLeaf( 
            /* [in] */ IConditionFactory __RPC_FAR *pConditionFactory,
            /* [unique][in] */ LPCWSTR pszPropertyName,
            /* [in] */ CONDITION_OPERATION op,
            /* [unique][in] */ LPCWSTR pszValueType,
            /* [in] */ LPCWSTR pszValue,
            /* [unique][in] */ LPCWSTR pszValue2,
            /* [in] */ IRichChunk __RPC_FAR *pPropertyNameTerm,
            /* [in] */ IRichChunk __RPC_FAR *pOperationTerm,
            /* [in] */ IRichChunk __RPC_FAR *pValueTerm,
            /* [in] */ BOOL automaticWildcard,
            /* [out] */ BOOL __RPC_FAR *pNoStringQuery,
            /* [retval][out] */ ICondition __RPC_FAR *__RPC_FAR *ppQueryExpression) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE DefaultPhrase( 
            /* [unique][in] */ LPCWSTR pszValueType,
            /* [in] */ const PROPVARIANT __RPC_FAR *ppropvar,
            /* [in] */ BOOL fUseEnglish,
            /* [retval][out] */ LPWSTR __RPC_FAR *ppszPhrase) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IConditionGeneratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IConditionGenerator __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IConditionGenerator __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IConditionGenerator __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Initialize )( 
            IConditionGenerator __RPC_FAR * This,
            /* [in] */ ISchemaProvider __RPC_FAR *pSchemaProvider);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RecognizeNamedEntities )( 
            IConditionGenerator __RPC_FAR * This,
            /* [in] */ LPCWSTR pszInputString,
            /* [in] */ LCID lcid,
            /* [in] */ ITokenCollection __RPC_FAR *pTokenCollection,
            /* [out][in] */ INamedEntityCollector __RPC_FAR *pNamedEntities);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GenerateForLeaf )( 
            IConditionGenerator __RPC_FAR * This,
            /* [in] */ IConditionFactory __RPC_FAR *pConditionFactory,
            /* [unique][in] */ LPCWSTR pszPropertyName,
            /* [in] */ CONDITION_OPERATION op,
            /* [unique][in] */ LPCWSTR pszValueType,
            /* [in] */ LPCWSTR pszValue,
            /* [unique][in] */ LPCWSTR pszValue2,
            /* [in] */ IRichChunk __RPC_FAR *pPropertyNameTerm,
            /* [in] */ IRichChunk __RPC_FAR *pOperationTerm,
            /* [in] */ IRichChunk __RPC_FAR *pValueTerm,
            /* [in] */ BOOL automaticWildcard,
            /* [out] */ BOOL __RPC_FAR *pNoStringQuery,
            /* [retval][out] */ ICondition __RPC_FAR *__RPC_FAR *ppQueryExpression);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DefaultPhrase )( 
            IConditionGenerator __RPC_FAR * This,
            /* [unique][in] */ LPCWSTR pszValueType,
            /* [in] */ const PROPVARIANT __RPC_FAR *ppropvar,
            /* [in] */ BOOL fUseEnglish,
            /* [retval][out] */ LPWSTR __RPC_FAR *ppszPhrase);
        
        END_INTERFACE
    } IConditionGeneratorVtbl;

    interface IConditionGenerator
    {
        CONST_VTBL struct IConditionGeneratorVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConditionGenerator_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IConditionGenerator_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IConditionGenerator_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IConditionGenerator_Initialize(This,pSchemaProvider)	\
    (This)->lpVtbl -> Initialize(This,pSchemaProvider)

#define IConditionGenerator_RecognizeNamedEntities(This,pszInputString,lcid,pTokenCollection,pNamedEntities)	\
    (This)->lpVtbl -> RecognizeNamedEntities(This,pszInputString,lcid,pTokenCollection,pNamedEntities)

#define IConditionGenerator_GenerateForLeaf(This,pConditionFactory,pszPropertyName,op,pszValueType,pszValue,pszValue2,pPropertyNameTerm,pOperationTerm,pValueTerm,automaticWildcard,pNoStringQuery,ppQueryExpression)	\
    (This)->lpVtbl -> GenerateForLeaf(This,pConditionFactory,pszPropertyName,op,pszValueType,pszValue,pszValue2,pPropertyNameTerm,pOperationTerm,pValueTerm,automaticWildcard,pNoStringQuery,ppQueryExpression)

#define IConditionGenerator_DefaultPhrase(This,pszValueType,ppropvar,fUseEnglish,ppszPhrase)	\
    (This)->lpVtbl -> DefaultPhrase(This,pszValueType,ppropvar,fUseEnglish,ppszPhrase)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IConditionGenerator_Initialize_Proxy( 
    IConditionGenerator __RPC_FAR * This,
    /* [in] */ ISchemaProvider __RPC_FAR *pSchemaProvider);


void __RPC_STUB IConditionGenerator_Initialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IConditionGenerator_RecognizeNamedEntities_Proxy( 
    IConditionGenerator __RPC_FAR * This,
    /* [in] */ LPCWSTR pszInputString,
    /* [in] */ LCID lcid,
    /* [in] */ ITokenCollection __RPC_FAR *pTokenCollection,
    /* [out][in] */ INamedEntityCollector __RPC_FAR *pNamedEntities);


void __RPC_STUB IConditionGenerator_RecognizeNamedEntities_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IConditionGenerator_GenerateForLeaf_Proxy( 
    IConditionGenerator __RPC_FAR * This,
    /* [in] */ IConditionFactory __RPC_FAR *pConditionFactory,
    /* [unique][in] */ LPCWSTR pszPropertyName,
    /* [in] */ CONDITION_OPERATION op,
    /* [unique][in] */ LPCWSTR pszValueType,
    /* [in] */ LPCWSTR pszValue,
    /* [unique][in] */ LPCWSTR pszValue2,
    /* [in] */ IRichChunk __RPC_FAR *pPropertyNameTerm,
    /* [in] */ IRichChunk __RPC_FAR *pOperationTerm,
    /* [in] */ IRichChunk __RPC_FAR *pValueTerm,
    /* [in] */ BOOL automaticWildcard,
    /* [out] */ BOOL __RPC_FAR *pNoStringQuery,
    /* [retval][out] */ ICondition __RPC_FAR *__RPC_FAR *ppQueryExpression);


void __RPC_STUB IConditionGenerator_GenerateForLeaf_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [local] */ HRESULT STDMETHODCALLTYPE IConditionGenerator_DefaultPhrase_Proxy( 
    IConditionGenerator __RPC_FAR * This,
    /* [unique][in] */ LPCWSTR pszValueType,
    /* [in] */ const PROPVARIANT __RPC_FAR *ppropvar,
    /* [in] */ BOOL fUseEnglish,
    /* [retval][out] */ LPWSTR __RPC_FAR *ppszPhrase);


void __RPC_STUB IConditionGenerator_DefaultPhrase_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IConditionGenerator_INTERFACE_DEFINED__ */


#ifndef __IRichChunk_INTERFACE_DEFINED__
#define __IRichChunk_INTERFACE_DEFINED__

/* interface IRichChunk */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IRichChunk;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4FDEF69C-DBC9-454e-9910-B34F3C64B510")
    IRichChunk : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE GetData( 
            /* [out] */ ULONG __RPC_FAR *pFirstPos,
            /* [out] */ ULONG __RPC_FAR *pLength,
            /* [out] */ LPWSTR __RPC_FAR *ppsz,
            /* [out] */ PROPVARIANT __RPC_FAR *pValue) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRichChunkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IRichChunk __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IRichChunk __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IRichChunk __RPC_FAR * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetData )( 
            IRichChunk __RPC_FAR * This,
            /* [out] */ ULONG __RPC_FAR *pFirstPos,
            /* [out] */ ULONG __RPC_FAR *pLength,
            /* [out] */ LPWSTR __RPC_FAR *ppsz,
            /* [out] */ PROPVARIANT __RPC_FAR *pValue);
        
        END_INTERFACE
    } IRichChunkVtbl;

    interface IRichChunk
    {
        CONST_VTBL struct IRichChunkVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRichChunk_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IRichChunk_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IRichChunk_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IRichChunk_GetData(This,pFirstPos,pLength,ppsz,pValue)	\
    (This)->lpVtbl -> GetData(This,pFirstPos,pLength,ppsz,pValue)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [local] */ HRESULT STDMETHODCALLTYPE IRichChunk_GetData_Proxy( 
    IRichChunk __RPC_FAR * This,
    /* [out] */ ULONG __RPC_FAR *pFirstPos,
    /* [out] */ ULONG __RPC_FAR *pLength,
    /* [out] */ LPWSTR __RPC_FAR *ppsz,
    /* [out] */ PROPVARIANT __RPC_FAR *pValue);


void __RPC_STUB IRichChunk_GetData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IRichChunk_INTERFACE_DEFINED__ */


#ifndef __IInterval_INTERFACE_DEFINED__
#define __IInterval_INTERFACE_DEFINED__

/* interface IInterval */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IInterval;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6BF0A714-3C18-430b-8B5D-83B1C234D3DB")
    IInterval : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetLimits( 
            /* [out] */ INTERVAL_LIMIT_KIND __RPC_FAR *pilkLower,
            /* [out] */ PROPVARIANT __RPC_FAR *ppropvarLower,
            /* [out] */ INTERVAL_LIMIT_KIND __RPC_FAR *pilkUpper,
            /* [out] */ PROPVARIANT __RPC_FAR *ppropvarUpper) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IIntervalVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IInterval __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IInterval __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IInterval __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetLimits )( 
            IInterval __RPC_FAR * This,
            /* [out] */ INTERVAL_LIMIT_KIND __RPC_FAR *pilkLower,
            /* [out] */ PROPVARIANT __RPC_FAR *ppropvarLower,
            /* [out] */ INTERVAL_LIMIT_KIND __RPC_FAR *pilkUpper,
            /* [out] */ PROPVARIANT __RPC_FAR *ppropvarUpper);
        
        END_INTERFACE
    } IIntervalVtbl;

    interface IInterval
    {
        CONST_VTBL struct IIntervalVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInterval_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IInterval_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IInterval_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IInterval_GetLimits(This,pilkLower,ppropvarLower,pilkUpper,ppropvarUpper)	\
    (This)->lpVtbl -> GetLimits(This,pilkLower,ppropvarLower,pilkUpper,ppropvarUpper)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IInterval_GetLimits_Proxy( 
    IInterval __RPC_FAR * This,
    /* [out] */ INTERVAL_LIMIT_KIND __RPC_FAR *pilkLower,
    /* [out] */ PROPVARIANT __RPC_FAR *ppropvarLower,
    /* [out] */ INTERVAL_LIMIT_KIND __RPC_FAR *pilkUpper,
    /* [out] */ PROPVARIANT __RPC_FAR *ppropvarUpper);


void __RPC_STUB IInterval_GetLimits_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IInterval_INTERFACE_DEFINED__ */


#ifndef __IMetaData_INTERFACE_DEFINED__
#define __IMetaData_INTERFACE_DEFINED__

/* interface IMetaData */
/* [unique][uuid][object][helpstring] */ 


EXTERN_C const IID IID_IMetaData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("780102B0-C43B-4876-BC7B-5E9BA5C88794")
    IMetaData : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE GetData( 
            /* [out] */ LPWSTR __RPC_FAR *ppszKey,
            /* [out] */ LPWSTR __RPC_FAR *ppszValue) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMetaDataVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMetaData __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMetaData __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMetaData __RPC_FAR * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetData )( 
            IMetaData __RPC_FAR * This,
            /* [out] */ LPWSTR __RPC_FAR *ppszKey,
            /* [out] */ LPWSTR __RPC_FAR *ppszValue);
        
        END_INTERFACE
    } IMetaDataVtbl;

    interface IMetaData
    {
        CONST_VTBL struct IMetaDataVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMetaData_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMetaData_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMetaData_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMetaData_GetData(This,ppszKey,ppszValue)	\
    (This)->lpVtbl -> GetData(This,ppszKey,ppszValue)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [local] */ HRESULT STDMETHODCALLTYPE IMetaData_GetData_Proxy( 
    IMetaData __RPC_FAR * This,
    /* [out] */ LPWSTR __RPC_FAR *ppszKey,
    /* [out] */ LPWSTR __RPC_FAR *ppszValue);


void __RPC_STUB IMetaData_GetData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMetaData_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_structuredquery_0164 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_structuredquery_0164_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_structuredquery_0164_v0_0_s_ifspec;

#ifndef __IEntity_INTERFACE_DEFINED__
#define __IEntity_INTERFACE_DEFINED__

/* interface IEntity */
/* [unique][object][uuid][helpstring] */ 


EXTERN_C const IID IID_IEntity;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("24264891-E80B-4fd3-B7CE-4FF2FAE8931F")
    IEntity : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE Name( 
            /* [retval][out] */ LPWSTR __RPC_FAR *ppszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Base( 
            /* [retval][out] */ IEntity __RPC_FAR *__RPC_FAR *pBaseEntity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Relationships( 
            /* [in] */ REFIID riid,
            /* [iid_is][retval][out] */ void __RPC_FAR *__RPC_FAR *pRelationships) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRelationship( 
            /* [in] */ LPCWSTR pszRelationName,
            /* [retval][out] */ IRelationship __RPC_FAR *__RPC_FAR *pRelationship) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MetaData( 
            /* [in] */ REFIID riid,
            /* [iid_is][retval][out] */ void __RPC_FAR *__RPC_FAR *pMetaData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NamedEntities( 
            /* [in] */ REFIID riid,
            /* [iid_is][retval][out] */ void __RPC_FAR *__RPC_FAR *pNamedEntities) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNamedEntity( 
            /* [in] */ LPCWSTR pszValue,
            /* [retval][out] */ INamedEntity __RPC_FAR *__RPC_FAR *ppNamedEntity) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE DefaultPhrase( 
            /* [retval][out] */ LPWSTR __RPC_FAR *ppszPhrase) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEntityVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IEntity __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IEntity __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IEntity __RPC_FAR * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Name )( 
            IEntity __RPC_FAR * This,
            /* [retval][out] */ LPWSTR __RPC_FAR *ppszName);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Base )( 
            IEntity __RPC_FAR * This,
            /* [retval][out] */ IEntity __RPC_FAR *__RPC_FAR *pBaseEntity);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Relationships )( 
            IEntity __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][retval][out] */ void __RPC_FAR *__RPC_FAR *pRelationships);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetRelationship )( 
            IEntity __RPC_FAR * This,
            /* [in] */ LPCWSTR pszRelationName,
            /* [retval][out] */ IRelationship __RPC_FAR *__RPC_FAR *pRelationship);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *MetaData )( 
            IEntity __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][retval][out] */ void __RPC_FAR *__RPC_FAR *pMetaData);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *NamedEntities )( 
            IEntity __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][retval][out] */ void __RPC_FAR *__RPC_FAR *pNamedEntities);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetNamedEntity )( 
            IEntity __RPC_FAR * This,
            /* [in] */ LPCWSTR pszValue,
            /* [retval][out] */ INamedEntity __RPC_FAR *__RPC_FAR *ppNamedEntity);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DefaultPhrase )( 
            IEntity __RPC_FAR * This,
            /* [retval][out] */ LPWSTR __RPC_FAR *ppszPhrase);
        
        END_INTERFACE
    } IEntityVtbl;

    interface IEntity
    {
        CONST_VTBL struct IEntityVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEntity_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IEntity_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IEntity_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IEntity_Name(This,ppszName)	\
    (This)->lpVtbl -> Name(This,ppszName)

#define IEntity_Base(This,pBaseEntity)	\
    (This)->lpVtbl -> Base(This,pBaseEntity)

#define IEntity_Relationships(This,riid,pRelationships)	\
    (This)->lpVtbl -> Relationships(This,riid,pRelationships)

#define IEntity_GetRelationship(This,pszRelationName,pRelationship)	\
    (This)->lpVtbl -> GetRelationship(This,pszRelationName,pRelationship)

#define IEntity_MetaData(This,riid,pMetaData)	\
    (This)->lpVtbl -> MetaData(This,riid,pMetaData)

#define IEntity_NamedEntities(This,riid,pNamedEntities)	\
    (This)->lpVtbl -> NamedEntities(This,riid,pNamedEntities)

#define IEntity_GetNamedEntity(This,pszValue,ppNamedEntity)	\
    (This)->lpVtbl -> GetNamedEntity(This,pszValue,ppNamedEntity)

#define IEntity_DefaultPhrase(This,ppszPhrase)	\
    (This)->lpVtbl -> DefaultPhrase(This,ppszPhrase)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [local] */ HRESULT STDMETHODCALLTYPE IEntity_Name_Proxy( 
    IEntity __RPC_FAR * This,
    /* [retval][out] */ LPWSTR __RPC_FAR *ppszName);


void __RPC_STUB IEntity_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEntity_Base_Proxy( 
    IEntity __RPC_FAR * This,
    /* [retval][out] */ IEntity __RPC_FAR *__RPC_FAR *pBaseEntity);


void __RPC_STUB IEntity_Base_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEntity_Relationships_Proxy( 
    IEntity __RPC_FAR * This,
    /* [in] */ REFIID riid,
    /* [iid_is][retval][out] */ void __RPC_FAR *__RPC_FAR *pRelationships);


void __RPC_STUB IEntity_Relationships_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEntity_GetRelationship_Proxy( 
    IEntity __RPC_FAR * This,
    /* [in] */ LPCWSTR pszRelationName,
    /* [retval][out] */ IRelationship __RPC_FAR *__RPC_FAR *pRelationship);


void __RPC_STUB IEntity_GetRelationship_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEntity_MetaData_Proxy( 
    IEntity __RPC_FAR * This,
    /* [in] */ REFIID riid,
    /* [iid_is][retval][out] */ void __RPC_FAR *__RPC_FAR *pMetaData);


void __RPC_STUB IEntity_MetaData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEntity_NamedEntities_Proxy( 
    IEntity __RPC_FAR * This,
    /* [in] */ REFIID riid,
    /* [iid_is][retval][out] */ void __RPC_FAR *__RPC_FAR *pNamedEntities);


void __RPC_STUB IEntity_NamedEntities_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEntity_GetNamedEntity_Proxy( 
    IEntity __RPC_FAR * This,
    /* [in] */ LPCWSTR pszValue,
    /* [retval][out] */ INamedEntity __RPC_FAR *__RPC_FAR *ppNamedEntity);


void __RPC_STUB IEntity_GetNamedEntity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [local] */ HRESULT STDMETHODCALLTYPE IEntity_DefaultPhrase_Proxy( 
    IEntity __RPC_FAR * This,
    /* [retval][out] */ LPWSTR __RPC_FAR *ppszPhrase);


void __RPC_STUB IEntity_DefaultPhrase_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEntity_INTERFACE_DEFINED__ */


#ifndef __IRelationship_INTERFACE_DEFINED__
#define __IRelationship_INTERFACE_DEFINED__

/* interface IRelationship */
/* [unique][object][uuid][helpstring] */ 


EXTERN_C const IID IID_IRelationship;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2769280B-5108-498c-9C7F-A51239B63147")
    IRelationship : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE Name( 
            /* [retval][out] */ LPWSTR __RPC_FAR *ppszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsReal( 
            /* [retval][out] */ BOOL __RPC_FAR *pIsReal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Destination( 
            /* [retval][out] */ IEntity __RPC_FAR *__RPC_FAR *pDestinationEntity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MetaData( 
            /* [in] */ REFIID riid,
            /* [iid_is][retval][out] */ void __RPC_FAR *__RPC_FAR *pMetaData) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE DefaultPhrase( 
            /* [retval][out] */ LPWSTR __RPC_FAR *ppszPhrase) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRelationshipVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IRelationship __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IRelationship __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IRelationship __RPC_FAR * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Name )( 
            IRelationship __RPC_FAR * This,
            /* [retval][out] */ LPWSTR __RPC_FAR *ppszName);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsReal )( 
            IRelationship __RPC_FAR * This,
            /* [retval][out] */ BOOL __RPC_FAR *pIsReal);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Destination )( 
            IRelationship __RPC_FAR * This,
            /* [retval][out] */ IEntity __RPC_FAR *__RPC_FAR *pDestinationEntity);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *MetaData )( 
            IRelationship __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][retval][out] */ void __RPC_FAR *__RPC_FAR *pMetaData);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DefaultPhrase )( 
            IRelationship __RPC_FAR * This,
            /* [retval][out] */ LPWSTR __RPC_FAR *ppszPhrase);
        
        END_INTERFACE
    } IRelationshipVtbl;

    interface IRelationship
    {
        CONST_VTBL struct IRelationshipVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRelationship_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IRelationship_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IRelationship_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IRelationship_Name(This,ppszName)	\
    (This)->lpVtbl -> Name(This,ppszName)

#define IRelationship_IsReal(This,pIsReal)	\
    (This)->lpVtbl -> IsReal(This,pIsReal)

#define IRelationship_Destination(This,pDestinationEntity)	\
    (This)->lpVtbl -> Destination(This,pDestinationEntity)

#define IRelationship_MetaData(This,riid,pMetaData)	\
    (This)->lpVtbl -> MetaData(This,riid,pMetaData)

#define IRelationship_DefaultPhrase(This,ppszPhrase)	\
    (This)->lpVtbl -> DefaultPhrase(This,ppszPhrase)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [local] */ HRESULT STDMETHODCALLTYPE IRelationship_Name_Proxy( 
    IRelationship __RPC_FAR * This,
    /* [retval][out] */ LPWSTR __RPC_FAR *ppszName);


void __RPC_STUB IRelationship_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IRelationship_IsReal_Proxy( 
    IRelationship __RPC_FAR * This,
    /* [retval][out] */ BOOL __RPC_FAR *pIsReal);


void __RPC_STUB IRelationship_IsReal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IRelationship_Destination_Proxy( 
    IRelationship __RPC_FAR * This,
    /* [retval][out] */ IEntity __RPC_FAR *__RPC_FAR *pDestinationEntity);


void __RPC_STUB IRelationship_Destination_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IRelationship_MetaData_Proxy( 
    IRelationship __RPC_FAR * This,
    /* [in] */ REFIID riid,
    /* [iid_is][retval][out] */ void __RPC_FAR *__RPC_FAR *pMetaData);


void __RPC_STUB IRelationship_MetaData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [local] */ HRESULT STDMETHODCALLTYPE IRelationship_DefaultPhrase_Proxy( 
    IRelationship __RPC_FAR * This,
    /* [retval][out] */ LPWSTR __RPC_FAR *ppszPhrase);


void __RPC_STUB IRelationship_DefaultPhrase_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IRelationship_INTERFACE_DEFINED__ */


#ifndef __INamedEntity_INTERFACE_DEFINED__
#define __INamedEntity_INTERFACE_DEFINED__

/* interface INamedEntity */
/* [unique][uuid][object][helpstring] */ 


EXTERN_C const IID IID_INamedEntity;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ABDBD0B1-7D54-49fb-AB5C-BFF4130004CD")
    INamedEntity : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetValue( 
            /* [retval][out] */ LPWSTR __RPC_FAR *ppszValue) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE DefaultPhrase( 
            /* [retval][out] */ LPWSTR __RPC_FAR *ppszPhrase) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct INamedEntityVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            INamedEntity __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            INamedEntity __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            INamedEntity __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetValue )( 
            INamedEntity __RPC_FAR * This,
            /* [retval][out] */ LPWSTR __RPC_FAR *ppszValue);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DefaultPhrase )( 
            INamedEntity __RPC_FAR * This,
            /* [retval][out] */ LPWSTR __RPC_FAR *ppszPhrase);
        
        END_INTERFACE
    } INamedEntityVtbl;

    interface INamedEntity
    {
        CONST_VTBL struct INamedEntityVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INamedEntity_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define INamedEntity_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define INamedEntity_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define INamedEntity_GetValue(This,ppszValue)	\
    (This)->lpVtbl -> GetValue(This,ppszValue)

#define INamedEntity_DefaultPhrase(This,ppszPhrase)	\
    (This)->lpVtbl -> DefaultPhrase(This,ppszPhrase)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE INamedEntity_GetValue_Proxy( 
    INamedEntity __RPC_FAR * This,
    /* [retval][out] */ LPWSTR __RPC_FAR *ppszValue);


void __RPC_STUB INamedEntity_GetValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [local] */ HRESULT STDMETHODCALLTYPE INamedEntity_DefaultPhrase_Proxy( 
    INamedEntity __RPC_FAR * This,
    /* [retval][out] */ LPWSTR __RPC_FAR *ppszPhrase);


void __RPC_STUB INamedEntity_DefaultPhrase_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __INamedEntity_INTERFACE_DEFINED__ */


#ifndef __ISchemaProvider_INTERFACE_DEFINED__
#define __ISchemaProvider_INTERFACE_DEFINED__

/* interface ISchemaProvider */
/* [unique][object][uuid][helpstring] */ 


EXTERN_C const IID IID_ISchemaProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8CF89BCB-394C-49b2-AE28-A59DD4ED7F68")
    ISchemaProvider : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Entities( 
            /* [in] */ REFIID riid,
            /* [iid_is][retval][out] */ void __RPC_FAR *__RPC_FAR *pEntities) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RootEntity( 
            /* [retval][out] */ IEntity __RPC_FAR *__RPC_FAR *pRootEntity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEntity( 
            /* [in] */ LPCWSTR pszEntityName,
            /* [retval][out] */ IEntity __RPC_FAR *__RPC_FAR *pEntity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MetaData( 
            /* [in] */ REFIID riid,
            /* [iid_is][retval][out] */ void __RPC_FAR *__RPC_FAR *pMetaData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Localize( 
            /* [in] */ LCID lcid,
            /* [in] */ ISchemaLocalizerSupport __RPC_FAR *pSchemaLocalizerSupport) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveBinary( 
            /* [in] */ LPCWSTR pszSchemaBinaryPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LookupAuthoredNamedEntity( 
            /* [in] */ IEntity __RPC_FAR *pEntity,
            /* [in] */ LPCWSTR pszInputString,
            /* [in] */ ITokenCollection __RPC_FAR *pTokenCollection,
            /* [in] */ ULONG cTokensBegin,
            /* [out] */ ULONG __RPC_FAR *pcTokensLength,
            /* [out] */ LPWSTR __RPC_FAR *ppszValue) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISchemaProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ISchemaProvider __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ISchemaProvider __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ISchemaProvider __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Entities )( 
            ISchemaProvider __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][retval][out] */ void __RPC_FAR *__RPC_FAR *pEntities);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RootEntity )( 
            ISchemaProvider __RPC_FAR * This,
            /* [retval][out] */ IEntity __RPC_FAR *__RPC_FAR *pRootEntity);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetEntity )( 
            ISchemaProvider __RPC_FAR * This,
            /* [in] */ LPCWSTR pszEntityName,
            /* [retval][out] */ IEntity __RPC_FAR *__RPC_FAR *pEntity);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *MetaData )( 
            ISchemaProvider __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][retval][out] */ void __RPC_FAR *__RPC_FAR *pMetaData);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Localize )( 
            ISchemaProvider __RPC_FAR * This,
            /* [in] */ LCID lcid,
            /* [in] */ ISchemaLocalizerSupport __RPC_FAR *pSchemaLocalizerSupport);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SaveBinary )( 
            ISchemaProvider __RPC_FAR * This,
            /* [in] */ LPCWSTR pszSchemaBinaryPath);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LookupAuthoredNamedEntity )( 
            ISchemaProvider __RPC_FAR * This,
            /* [in] */ IEntity __RPC_FAR *pEntity,
            /* [in] */ LPCWSTR pszInputString,
            /* [in] */ ITokenCollection __RPC_FAR *pTokenCollection,
            /* [in] */ ULONG cTokensBegin,
            /* [out] */ ULONG __RPC_FAR *pcTokensLength,
            /* [out] */ LPWSTR __RPC_FAR *ppszValue);
        
        END_INTERFACE
    } ISchemaProviderVtbl;

    interface ISchemaProvider
    {
        CONST_VTBL struct ISchemaProviderVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISchemaProvider_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISchemaProvider_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISchemaProvider_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISchemaProvider_Entities(This,riid,pEntities)	\
    (This)->lpVtbl -> Entities(This,riid,pEntities)

#define ISchemaProvider_RootEntity(This,pRootEntity)	\
    (This)->lpVtbl -> RootEntity(This,pRootEntity)

#define ISchemaProvider_GetEntity(This,pszEntityName,pEntity)	\
    (This)->lpVtbl -> GetEntity(This,pszEntityName,pEntity)

#define ISchemaProvider_MetaData(This,riid,pMetaData)	\
    (This)->lpVtbl -> MetaData(This,riid,pMetaData)

#define ISchemaProvider_Localize(This,lcid,pSchemaLocalizerSupport)	\
    (This)->lpVtbl -> Localize(This,lcid,pSchemaLocalizerSupport)

#define ISchemaProvider_SaveBinary(This,pszSchemaBinaryPath)	\
    (This)->lpVtbl -> SaveBinary(This,pszSchemaBinaryPath)

#define ISchemaProvider_LookupAuthoredNamedEntity(This,pEntity,pszInputString,pTokenCollection,cTokensBegin,pcTokensLength,ppszValue)	\
    (This)->lpVtbl -> LookupAuthoredNamedEntity(This,pEntity,pszInputString,pTokenCollection,cTokensBegin,pcTokensLength,ppszValue)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISchemaProvider_Entities_Proxy( 
    ISchemaProvider __RPC_FAR * This,
    /* [in] */ REFIID riid,
    /* [iid_is][retval][out] */ void __RPC_FAR *__RPC_FAR *pEntities);


void __RPC_STUB ISchemaProvider_Entities_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISchemaProvider_RootEntity_Proxy( 
    ISchemaProvider __RPC_FAR * This,
    /* [retval][out] */ IEntity __RPC_FAR *__RPC_FAR *pRootEntity);


void __RPC_STUB ISchemaProvider_RootEntity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISchemaProvider_GetEntity_Proxy( 
    ISchemaProvider __RPC_FAR * This,
    /* [in] */ LPCWSTR pszEntityName,
    /* [retval][out] */ IEntity __RPC_FAR *__RPC_FAR *pEntity);


void __RPC_STUB ISchemaProvider_GetEntity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISchemaProvider_MetaData_Proxy( 
    ISchemaProvider __RPC_FAR * This,
    /* [in] */ REFIID riid,
    /* [iid_is][retval][out] */ void __RPC_FAR *__RPC_FAR *pMetaData);


void __RPC_STUB ISchemaProvider_MetaData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISchemaProvider_Localize_Proxy( 
    ISchemaProvider __RPC_FAR * This,
    /* [in] */ LCID lcid,
    /* [in] */ ISchemaLocalizerSupport __RPC_FAR *pSchemaLocalizerSupport);


void __RPC_STUB ISchemaProvider_Localize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISchemaProvider_SaveBinary_Proxy( 
    ISchemaProvider __RPC_FAR * This,
    /* [in] */ LPCWSTR pszSchemaBinaryPath);


void __RPC_STUB ISchemaProvider_SaveBinary_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISchemaProvider_LookupAuthoredNamedEntity_Proxy( 
    ISchemaProvider __RPC_FAR * This,
    /* [in] */ IEntity __RPC_FAR *pEntity,
    /* [in] */ LPCWSTR pszInputString,
    /* [in] */ ITokenCollection __RPC_FAR *pTokenCollection,
    /* [in] */ ULONG cTokensBegin,
    /* [out] */ ULONG __RPC_FAR *pcTokensLength,
    /* [out] */ LPWSTR __RPC_FAR *ppszValue);


void __RPC_STUB ISchemaProvider_LookupAuthoredNamedEntity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISchemaProvider_INTERFACE_DEFINED__ */


#ifndef __ITokenCollection_INTERFACE_DEFINED__
#define __ITokenCollection_INTERFACE_DEFINED__

/* interface ITokenCollection */
/* [unique][object][uuid][helpstring] */ 


EXTERN_C const IID IID_ITokenCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("22D8B4F2-F577-4adb-A335-C2AE88416FAB")
    ITokenCollection : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE NumberOfTokens( 
            ULONG __RPC_FAR *pCount) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE GetToken( 
            /* [in] */ ULONG i,
            /* [out] */ ULONG __RPC_FAR *pBegin,
            /* [out] */ ULONG __RPC_FAR *pLength,
            /* [out] */ LPWSTR __RPC_FAR *ppsz) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITokenCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITokenCollection __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITokenCollection __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITokenCollection __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *NumberOfTokens )( 
            ITokenCollection __RPC_FAR * This,
            ULONG __RPC_FAR *pCount);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetToken )( 
            ITokenCollection __RPC_FAR * This,
            /* [in] */ ULONG i,
            /* [out] */ ULONG __RPC_FAR *pBegin,
            /* [out] */ ULONG __RPC_FAR *pLength,
            /* [out] */ LPWSTR __RPC_FAR *ppsz);
        
        END_INTERFACE
    } ITokenCollectionVtbl;

    interface ITokenCollection
    {
        CONST_VTBL struct ITokenCollectionVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITokenCollection_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITokenCollection_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITokenCollection_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITokenCollection_NumberOfTokens(This,pCount)	\
    (This)->lpVtbl -> NumberOfTokens(This,pCount)

#define ITokenCollection_GetToken(This,i,pBegin,pLength,ppsz)	\
    (This)->lpVtbl -> GetToken(This,i,pBegin,pLength,ppsz)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITokenCollection_NumberOfTokens_Proxy( 
    ITokenCollection __RPC_FAR * This,
    ULONG __RPC_FAR *pCount);


void __RPC_STUB ITokenCollection_NumberOfTokens_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [local] */ HRESULT STDMETHODCALLTYPE ITokenCollection_GetToken_Proxy( 
    ITokenCollection __RPC_FAR * This,
    /* [in] */ ULONG i,
    /* [out] */ ULONG __RPC_FAR *pBegin,
    /* [out] */ ULONG __RPC_FAR *pLength,
    /* [out] */ LPWSTR __RPC_FAR *ppsz);


void __RPC_STUB ITokenCollection_GetToken_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITokenCollection_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_structuredquery_0169 */
/* [local] */ 

typedef /* [public][public][v1_enum] */ 
enum __MIDL___MIDL_itf_structuredquery_0169_0001
    {	NEC_LOW	= 0,
	NEC_MEDIUM	= NEC_LOW + 1,
	NEC_HIGH	= NEC_MEDIUM + 1
    }	NAMED_ENTITY_CERTAINTY;



extern RPC_IF_HANDLE __MIDL_itf_structuredquery_0169_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_structuredquery_0169_v0_0_s_ifspec;

#ifndef __INamedEntityCollector_INTERFACE_DEFINED__
#define __INamedEntityCollector_INTERFACE_DEFINED__

/* interface INamedEntityCollector */
/* [unique][object][uuid][helpstring] */ 


EXTERN_C const IID IID_INamedEntityCollector;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AF2440F6-8AFC-47d0-9A7F-396A0ACFB43D")
    INamedEntityCollector : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ ULONG beginSpan,
            /* [in] */ ULONG endSpan,
            /* [in] */ ULONG beginActual,
            /* [in] */ ULONG endActual,
            /* [in] */ IEntity __RPC_FAR *pType,
            /* [in] */ LPCWSTR pszValue,
            /* [in] */ NAMED_ENTITY_CERTAINTY certainty) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct INamedEntityCollectorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            INamedEntityCollector __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            INamedEntityCollector __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            INamedEntityCollector __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Add )( 
            INamedEntityCollector __RPC_FAR * This,
            /* [in] */ ULONG beginSpan,
            /* [in] */ ULONG endSpan,
            /* [in] */ ULONG beginActual,
            /* [in] */ ULONG endActual,
            /* [in] */ IEntity __RPC_FAR *pType,
            /* [in] */ LPCWSTR pszValue,
            /* [in] */ NAMED_ENTITY_CERTAINTY certainty);
        
        END_INTERFACE
    } INamedEntityCollectorVtbl;

    interface INamedEntityCollector
    {
        CONST_VTBL struct INamedEntityCollectorVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INamedEntityCollector_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define INamedEntityCollector_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define INamedEntityCollector_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define INamedEntityCollector_Add(This,beginSpan,endSpan,beginActual,endActual,pType,pszValue,certainty)	\
    (This)->lpVtbl -> Add(This,beginSpan,endSpan,beginActual,endActual,pType,pszValue,certainty)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE INamedEntityCollector_Add_Proxy( 
    INamedEntityCollector __RPC_FAR * This,
    /* [in] */ ULONG beginSpan,
    /* [in] */ ULONG endSpan,
    /* [in] */ ULONG beginActual,
    /* [in] */ ULONG endActual,
    /* [in] */ IEntity __RPC_FAR *pType,
    /* [in] */ LPCWSTR pszValue,
    /* [in] */ NAMED_ENTITY_CERTAINTY certainty);


void __RPC_STUB INamedEntityCollector_Add_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __INamedEntityCollector_INTERFACE_DEFINED__ */


#ifndef __ISchemaLocalizerSupport_INTERFACE_DEFINED__
#define __ISchemaLocalizerSupport_INTERFACE_DEFINED__

/* interface ISchemaLocalizerSupport */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_ISchemaLocalizerSupport;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CA3FDCA2-BFBE-4eed-90D7-0CAEF0A1BDA1")
    ISchemaLocalizerSupport : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Localize( 
            /* [in] */ LPCWSTR pszGlobalString,
            /* [retval][out] */ LPWSTR __RPC_FAR *ppszLocalString) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISchemaLocalizerSupportVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ISchemaLocalizerSupport __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ISchemaLocalizerSupport __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ISchemaLocalizerSupport __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Localize )( 
            ISchemaLocalizerSupport __RPC_FAR * This,
            /* [in] */ LPCWSTR pszGlobalString,
            /* [retval][out] */ LPWSTR __RPC_FAR *ppszLocalString);
        
        END_INTERFACE
    } ISchemaLocalizerSupportVtbl;

    interface ISchemaLocalizerSupport
    {
        CONST_VTBL struct ISchemaLocalizerSupportVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISchemaLocalizerSupport_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISchemaLocalizerSupport_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISchemaLocalizerSupport_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISchemaLocalizerSupport_Localize(This,pszGlobalString,ppszLocalString)	\
    (This)->lpVtbl -> Localize(This,pszGlobalString,ppszLocalString)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISchemaLocalizerSupport_Localize_Proxy( 
    ISchemaLocalizerSupport __RPC_FAR * This,
    /* [in] */ LPCWSTR pszGlobalString,
    /* [retval][out] */ LPWSTR __RPC_FAR *ppszLocalString);


void __RPC_STUB ISchemaLocalizerSupport_Localize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISchemaLocalizerSupport_INTERFACE_DEFINED__ */


#ifndef __IQueryParserManager_INTERFACE_DEFINED__
#define __IQueryParserManager_INTERFACE_DEFINED__

/* interface IQueryParserManager */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IQueryParserManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A879E3C4-AF77-44fb-8F37-EBD1487CF920")
    IQueryParserManager : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateLoadedParser( 
            /* [in] */ LPCWSTR pszCatalog,
            /* [in] */ LANGID langidForKeywords,
            /* [in] */ REFIID riid,
            /* [iid_is][retval][out] */ void __RPC_FAR *__RPC_FAR *ppQueryParser) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeOptions( 
            /* [in] */ BOOL fUnderstandNQS,
            /* [in] */ BOOL fAutoWildCard,
            /* [in] */ IQueryParser __RPC_FAR *pQueryParser) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOption( 
            /* [in] */ QUERY_PARSER_MANAGER_OPTION option,
            /* [in] */ const PROPVARIANT __RPC_FAR *pOptionValue) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IQueryParserManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IQueryParserManager __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IQueryParserManager __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IQueryParserManager __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateLoadedParser )( 
            IQueryParserManager __RPC_FAR * This,
            /* [in] */ LPCWSTR pszCatalog,
            /* [in] */ LANGID langidForKeywords,
            /* [in] */ REFIID riid,
            /* [iid_is][retval][out] */ void __RPC_FAR *__RPC_FAR *ppQueryParser);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InitializeOptions )( 
            IQueryParserManager __RPC_FAR * This,
            /* [in] */ BOOL fUnderstandNQS,
            /* [in] */ BOOL fAutoWildCard,
            /* [in] */ IQueryParser __RPC_FAR *pQueryParser);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetOption )( 
            IQueryParserManager __RPC_FAR * This,
            /* [in] */ QUERY_PARSER_MANAGER_OPTION option,
            /* [in] */ const PROPVARIANT __RPC_FAR *pOptionValue);
        
        END_INTERFACE
    } IQueryParserManagerVtbl;

    interface IQueryParserManager
    {
        CONST_VTBL struct IQueryParserManagerVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IQueryParserManager_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IQueryParserManager_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IQueryParserManager_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IQueryParserManager_CreateLoadedParser(This,pszCatalog,langidForKeywords,riid,ppQueryParser)	\
    (This)->lpVtbl -> CreateLoadedParser(This,pszCatalog,langidForKeywords,riid,ppQueryParser)

#define IQueryParserManager_InitializeOptions(This,fUnderstandNQS,fAutoWildCard,pQueryParser)	\
    (This)->lpVtbl -> InitializeOptions(This,fUnderstandNQS,fAutoWildCard,pQueryParser)

#define IQueryParserManager_SetOption(This,option,pOptionValue)	\
    (This)->lpVtbl -> SetOption(This,option,pOptionValue)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IQueryParserManager_CreateLoadedParser_Proxy( 
    IQueryParserManager __RPC_FAR * This,
    /* [in] */ LPCWSTR pszCatalog,
    /* [in] */ LANGID langidForKeywords,
    /* [in] */ REFIID riid,
    /* [iid_is][retval][out] */ void __RPC_FAR *__RPC_FAR *ppQueryParser);


void __RPC_STUB IQueryParserManager_CreateLoadedParser_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IQueryParserManager_InitializeOptions_Proxy( 
    IQueryParserManager __RPC_FAR * This,
    /* [in] */ BOOL fUnderstandNQS,
    /* [in] */ BOOL fAutoWildCard,
    /* [in] */ IQueryParser __RPC_FAR *pQueryParser);


void __RPC_STUB IQueryParserManager_InitializeOptions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IQueryParserManager_SetOption_Proxy( 
    IQueryParserManager __RPC_FAR * This,
    /* [in] */ QUERY_PARSER_MANAGER_OPTION option,
    /* [in] */ const PROPVARIANT __RPC_FAR *pOptionValue);


void __RPC_STUB IQueryParserManager_SetOption_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IQueryParserManager_INTERFACE_DEFINED__ */



#ifndef __StructuredQuery1_LIBRARY_DEFINED__
#define __StructuredQuery1_LIBRARY_DEFINED__

/* library StructuredQuery1 */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_StructuredQuery1;

EXTERN_C const CLSID CLSID_QueryParser;

#ifdef __cplusplus

class DECLSPEC_UUID("B72F8FD8-0FAB-4dd9-BDBF-245A6CE1485B")
QueryParser;
#endif

EXTERN_C const CLSID CLSID_NegationCondition;

#ifdef __cplusplus

class DECLSPEC_UUID("8DE9C74C-605A-4acd-BEE3-2B222AA2D23D")
NegationCondition;
#endif

EXTERN_C const CLSID CLSID_CompoundCondition;

#ifdef __cplusplus

class DECLSPEC_UUID("116F8D13-101E-4fa5-84D4-FF8279381935")
CompoundCondition;
#endif

EXTERN_C const CLSID CLSID_LeafCondition;

#ifdef __cplusplus

class DECLSPEC_UUID("52F15C89-5A17-48e1-BBCD-46A3F89C7CC2")
LeafCondition;
#endif

EXTERN_C const CLSID CLSID_ConditionFactory;

#ifdef __cplusplus

class DECLSPEC_UUID("E03E85B0-7BE3-4000-BA98-6C13DE9FA486")
ConditionFactory;
#endif

EXTERN_C const CLSID CLSID_QueryParserManager;

#ifdef __cplusplus

class DECLSPEC_UUID("5088B39A-29B4-4d9d-8245-4EE289222F66")
QueryParserManager;
#endif
#endif /* __StructuredQuery1_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long __RPC_FAR *, unsigned long            , BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long __RPC_FAR *, BSTR __RPC_FAR * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     unsigned long __RPC_FAR *, unsigned long            , LPSAFEARRAY __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  LPSAFEARRAY_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, LPSAFEARRAY __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  LPSAFEARRAY_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, LPSAFEARRAY __RPC_FAR * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     unsigned long __RPC_FAR *, LPSAFEARRAY __RPC_FAR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


