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
/* at Mon Jan 22 12:13:56 2007
 */
/* Compiler settings for ..\icontact.idl:
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

#ifndef __icontact_h__
#define __icontact_h__

/* Forward Declarations */ 

#ifndef __IContactManager_FWD_DEFINED__
#define __IContactManager_FWD_DEFINED__
typedef interface IContactManager IContactManager;
#endif 	/* __IContactManager_FWD_DEFINED__ */


#ifndef __IContactCollection_FWD_DEFINED__
#define __IContactCollection_FWD_DEFINED__
typedef interface IContactCollection IContactCollection;
#endif 	/* __IContactCollection_FWD_DEFINED__ */


#ifndef __IContactProperties_FWD_DEFINED__
#define __IContactProperties_FWD_DEFINED__
typedef interface IContactProperties IContactProperties;
#endif 	/* __IContactProperties_FWD_DEFINED__ */


#ifndef __IContact_FWD_DEFINED__
#define __IContact_FWD_DEFINED__
typedef interface IContact IContact;
#endif 	/* __IContact_FWD_DEFINED__ */


#ifndef __IContactPropertyCollection_FWD_DEFINED__
#define __IContactPropertyCollection_FWD_DEFINED__
typedef interface IContactPropertyCollection IContactPropertyCollection;
#endif 	/* __IContactPropertyCollection_FWD_DEFINED__ */


#ifndef __Contact_FWD_DEFINED__
#define __Contact_FWD_DEFINED__

#ifdef __cplusplus
typedef class Contact Contact;
#else
typedef struct Contact Contact;
#endif /* __cplusplus */

#endif 	/* __Contact_FWD_DEFINED__ */


#ifndef __ContactManager_FWD_DEFINED__
#define __ContactManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class ContactManager ContactManager;
#else
typedef struct ContactManager ContactManager;
#endif /* __cplusplus */

#endif 	/* __ContactManager_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_icontact_0000 */
/* [local] */ 







extern RPC_IF_HANDLE __MIDL_itf_icontact_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_icontact_0000_v0_0_s_ifspec;

#ifndef __IContactManager_INTERFACE_DEFINED__
#define __IContactManager_INTERFACE_DEFINED__

/* interface IContactManager */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IContactManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ad553d98-deb1-474a-8e17-fc0c2075b738")
    IContactManager : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [unique][string][in] */ LPCWSTR pszAppName,
            /* [unique][string][in] */ LPCWSTR pszAppVersion) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Load( 
            /* [unique][string][in] */ LPCWSTR pszContactID,
            /* [out] */ IContact __RPC_FAR *__RPC_FAR *ppContact) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MergeContactIDs( 
            /* [unique][string][in] */ LPCWSTR pszNewContactID,
            /* [unique][string][in] */ LPCWSTR pszOldContactID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMeContact( 
            /* [out] */ IContact __RPC_FAR *__RPC_FAR *ppMeContact) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMeContact( 
            /* [in] */ IContact __RPC_FAR *pMeContact) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetContactCollection( 
            /* [out] */ IContactCollection __RPC_FAR *__RPC_FAR *ppContactCollection) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IContactManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IContactManager __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IContactManager __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IContactManager __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Initialize )( 
            IContactManager __RPC_FAR * This,
            /* [unique][string][in] */ LPCWSTR pszAppName,
            /* [unique][string][in] */ LPCWSTR pszAppVersion);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Load )( 
            IContactManager __RPC_FAR * This,
            /* [unique][string][in] */ LPCWSTR pszContactID,
            /* [out] */ IContact __RPC_FAR *__RPC_FAR *ppContact);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *MergeContactIDs )( 
            IContactManager __RPC_FAR * This,
            /* [unique][string][in] */ LPCWSTR pszNewContactID,
            /* [unique][string][in] */ LPCWSTR pszOldContactID);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetMeContact )( 
            IContactManager __RPC_FAR * This,
            /* [out] */ IContact __RPC_FAR *__RPC_FAR *ppMeContact);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetMeContact )( 
            IContactManager __RPC_FAR * This,
            /* [in] */ IContact __RPC_FAR *pMeContact);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetContactCollection )( 
            IContactManager __RPC_FAR * This,
            /* [out] */ IContactCollection __RPC_FAR *__RPC_FAR *ppContactCollection);
        
        END_INTERFACE
    } IContactManagerVtbl;

    interface IContactManager
    {
        CONST_VTBL struct IContactManagerVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IContactManager_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IContactManager_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IContactManager_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IContactManager_Initialize(This,pszAppName,pszAppVersion)	\
    (This)->lpVtbl -> Initialize(This,pszAppName,pszAppVersion)

#define IContactManager_Load(This,pszContactID,ppContact)	\
    (This)->lpVtbl -> Load(This,pszContactID,ppContact)

#define IContactManager_MergeContactIDs(This,pszNewContactID,pszOldContactID)	\
    (This)->lpVtbl -> MergeContactIDs(This,pszNewContactID,pszOldContactID)

#define IContactManager_GetMeContact(This,ppMeContact)	\
    (This)->lpVtbl -> GetMeContact(This,ppMeContact)

#define IContactManager_SetMeContact(This,pMeContact)	\
    (This)->lpVtbl -> SetMeContact(This,pMeContact)

#define IContactManager_GetContactCollection(This,ppContactCollection)	\
    (This)->lpVtbl -> GetContactCollection(This,ppContactCollection)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IContactManager_Initialize_Proxy( 
    IContactManager __RPC_FAR * This,
    /* [unique][string][in] */ LPCWSTR pszAppName,
    /* [unique][string][in] */ LPCWSTR pszAppVersion);


void __RPC_STUB IContactManager_Initialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IContactManager_Load_Proxy( 
    IContactManager __RPC_FAR * This,
    /* [unique][string][in] */ LPCWSTR pszContactID,
    /* [out] */ IContact __RPC_FAR *__RPC_FAR *ppContact);


void __RPC_STUB IContactManager_Load_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IContactManager_MergeContactIDs_Proxy( 
    IContactManager __RPC_FAR * This,
    /* [unique][string][in] */ LPCWSTR pszNewContactID,
    /* [unique][string][in] */ LPCWSTR pszOldContactID);


void __RPC_STUB IContactManager_MergeContactIDs_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IContactManager_GetMeContact_Proxy( 
    IContactManager __RPC_FAR * This,
    /* [out] */ IContact __RPC_FAR *__RPC_FAR *ppMeContact);


void __RPC_STUB IContactManager_GetMeContact_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IContactManager_SetMeContact_Proxy( 
    IContactManager __RPC_FAR * This,
    /* [in] */ IContact __RPC_FAR *pMeContact);


void __RPC_STUB IContactManager_SetMeContact_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IContactManager_GetContactCollection_Proxy( 
    IContactManager __RPC_FAR * This,
    /* [out] */ IContactCollection __RPC_FAR *__RPC_FAR *ppContactCollection);


void __RPC_STUB IContactManager_GetContactCollection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IContactManager_INTERFACE_DEFINED__ */


#ifndef __IContactCollection_INTERFACE_DEFINED__
#define __IContactCollection_INTERFACE_DEFINED__

/* interface IContactCollection */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IContactCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b6afa338-d779-11d9-8bde-f66bad1e3f3a")
    IContactCollection : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Next( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrent( 
            /* [out] */ IContact __RPC_FAR *__RPC_FAR *ppContact) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IContactCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IContactCollection __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IContactCollection __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IContactCollection __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Reset )( 
            IContactCollection __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Next )( 
            IContactCollection __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCurrent )( 
            IContactCollection __RPC_FAR * This,
            /* [out] */ IContact __RPC_FAR *__RPC_FAR *ppContact);
        
        END_INTERFACE
    } IContactCollectionVtbl;

    interface IContactCollection
    {
        CONST_VTBL struct IContactCollectionVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IContactCollection_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IContactCollection_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IContactCollection_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IContactCollection_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IContactCollection_Next(This)	\
    (This)->lpVtbl -> Next(This)

#define IContactCollection_GetCurrent(This,ppContact)	\
    (This)->lpVtbl -> GetCurrent(This,ppContact)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IContactCollection_Reset_Proxy( 
    IContactCollection __RPC_FAR * This);


void __RPC_STUB IContactCollection_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IContactCollection_Next_Proxy( 
    IContactCollection __RPC_FAR * This);


void __RPC_STUB IContactCollection_Next_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IContactCollection_GetCurrent_Proxy( 
    IContactCollection __RPC_FAR * This,
    /* [out] */ IContact __RPC_FAR *__RPC_FAR *ppContact);


void __RPC_STUB IContactCollection_GetCurrent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IContactCollection_INTERFACE_DEFINED__ */


#ifndef __IContactProperties_INTERFACE_DEFINED__
#define __IContactProperties_INTERFACE_DEFINED__

/* interface IContactProperties */
/* [unique][helpstring][uuid][object] */ 

#define CGD_DEFAULT                      0x00000000

EXTERN_C const IID IID_IContactProperties;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("70dd27dd-5cbd-46e8-bef0-23b6b346288f")
    IContactProperties : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetString( 
            /* [unique][string][in] */ LPCWSTR pszPropertyName,
            DWORD dwFlags,
            /* [size_is][unique][string][out][in] */ LPWSTR pszValue,
            /* [in] */ DWORD cchValue,
            /* [unique][out][in] */ DWORD __RPC_FAR *pdwcchPropertyValueRequired) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDate( 
            /* [unique][string][in] */ LPCWSTR pszPropertyName,
            DWORD dwFlags,
            /* [unique][out][in] */ FILETIME __RPC_FAR *pftDateTime) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBinary( 
            /* [unique][string][in] */ LPCWSTR pszPropertyName,
            DWORD dwFlags,
            /* [size_is][unique][out][in] */ LPWSTR pszContentType,
            /* [in] */ DWORD cchContentType,
            /* [unique][out][in] */ DWORD __RPC_FAR *pdwcchContentTypeRequired,
            /* [out] */ IStream __RPC_FAR *__RPC_FAR *ppStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLabels( 
            /* [unique][string][in] */ LPCWSTR pszArrayElementName,
            DWORD dwFlags,
            /* [size_is][unique][out][in] */ LPWSTR pszLabels,
            /* [in] */ DWORD cchLabels,
            /* [unique][out][in] */ DWORD __RPC_FAR *pdwcchLabelsRequired) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetString( 
            /* [unique][string][in] */ LPCWSTR pszPropertyName,
            DWORD dwFlags,
            /* [unique][string][in] */ LPCWSTR pszValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDate( 
            /* [unique][string][in] */ LPCWSTR pszPropertyName,
            DWORD dwFlags,
            /* [in] */ FILETIME ftDateTime) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBinary( 
            /* [unique][string][in] */ LPCWSTR pszPropertyName,
            DWORD dwFlags,
            /* [unique][string][in] */ LPCWSTR pszContentType,
            /* [unique][in] */ IStream __RPC_FAR *pStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLabels( 
            /* [unique][string][in] */ LPCWSTR pszArrayElementName,
            DWORD dwFlags,
            /* [in] */ DWORD dwLabelCount,
            /* [unique][size_is][in] */ LPCWSTR __RPC_FAR ppszLabels[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateArrayNode( 
            /* [unique][string][in] */ LPCWSTR pszArrayName,
            DWORD dwFlags,
            BOOL fAppend,
            /* [size_is][string][unique][out][in] */ LPWSTR pszNewArrayElementName,
            DWORD cchNewArrayElementName,
            /* [unique][out][in] */ DWORD __RPC_FAR *pdwcchNewArrayElementNameRequired) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteProperty( 
            /* [unique][string][in] */ LPCWSTR pszPropertyName,
            DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteArrayNode( 
            /* [unique][string][in] */ LPCWSTR pszArrayElementName,
            DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteLabels( 
            /* [unique][string][in] */ LPCWSTR pszArrayElementName,
            DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyCollection( 
            /* [out] */ IContactPropertyCollection __RPC_FAR *__RPC_FAR *ppPropertyCollection,
            DWORD dwFlags,
            /* [unique][string][in] */ LPCWSTR pszMultiValueName,
            /* [in] */ DWORD dwLabelCount,
            /* [unique][size_is][in] */ LPCWSTR __RPC_FAR ppszLabels[  ],
            BOOL fAnyLabelMatches) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IContactPropertiesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IContactProperties __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IContactProperties __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IContactProperties __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetString )( 
            IContactProperties __RPC_FAR * This,
            /* [unique][string][in] */ LPCWSTR pszPropertyName,
            DWORD dwFlags,
            /* [size_is][unique][string][out][in] */ LPWSTR pszValue,
            /* [in] */ DWORD cchValue,
            /* [unique][out][in] */ DWORD __RPC_FAR *pdwcchPropertyValueRequired);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetDate )( 
            IContactProperties __RPC_FAR * This,
            /* [unique][string][in] */ LPCWSTR pszPropertyName,
            DWORD dwFlags,
            /* [unique][out][in] */ FILETIME __RPC_FAR *pftDateTime);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetBinary )( 
            IContactProperties __RPC_FAR * This,
            /* [unique][string][in] */ LPCWSTR pszPropertyName,
            DWORD dwFlags,
            /* [size_is][unique][out][in] */ LPWSTR pszContentType,
            /* [in] */ DWORD cchContentType,
            /* [unique][out][in] */ DWORD __RPC_FAR *pdwcchContentTypeRequired,
            /* [out] */ IStream __RPC_FAR *__RPC_FAR *ppStream);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetLabels )( 
            IContactProperties __RPC_FAR * This,
            /* [unique][string][in] */ LPCWSTR pszArrayElementName,
            DWORD dwFlags,
            /* [size_is][unique][out][in] */ LPWSTR pszLabels,
            /* [in] */ DWORD cchLabels,
            /* [unique][out][in] */ DWORD __RPC_FAR *pdwcchLabelsRequired);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetString )( 
            IContactProperties __RPC_FAR * This,
            /* [unique][string][in] */ LPCWSTR pszPropertyName,
            DWORD dwFlags,
            /* [unique][string][in] */ LPCWSTR pszValue);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetDate )( 
            IContactProperties __RPC_FAR * This,
            /* [unique][string][in] */ LPCWSTR pszPropertyName,
            DWORD dwFlags,
            /* [in] */ FILETIME ftDateTime);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetBinary )( 
            IContactProperties __RPC_FAR * This,
            /* [unique][string][in] */ LPCWSTR pszPropertyName,
            DWORD dwFlags,
            /* [unique][string][in] */ LPCWSTR pszContentType,
            /* [unique][in] */ IStream __RPC_FAR *pStream);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetLabels )( 
            IContactProperties __RPC_FAR * This,
            /* [unique][string][in] */ LPCWSTR pszArrayElementName,
            DWORD dwFlags,
            /* [in] */ DWORD dwLabelCount,
            /* [unique][size_is][in] */ LPCWSTR __RPC_FAR ppszLabels[  ]);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateArrayNode )( 
            IContactProperties __RPC_FAR * This,
            /* [unique][string][in] */ LPCWSTR pszArrayName,
            DWORD dwFlags,
            BOOL fAppend,
            /* [size_is][string][unique][out][in] */ LPWSTR pszNewArrayElementName,
            DWORD cchNewArrayElementName,
            /* [unique][out][in] */ DWORD __RPC_FAR *pdwcchNewArrayElementNameRequired);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DeleteProperty )( 
            IContactProperties __RPC_FAR * This,
            /* [unique][string][in] */ LPCWSTR pszPropertyName,
            DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DeleteArrayNode )( 
            IContactProperties __RPC_FAR * This,
            /* [unique][string][in] */ LPCWSTR pszArrayElementName,
            DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DeleteLabels )( 
            IContactProperties __RPC_FAR * This,
            /* [unique][string][in] */ LPCWSTR pszArrayElementName,
            DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPropertyCollection )( 
            IContactProperties __RPC_FAR * This,
            /* [out] */ IContactPropertyCollection __RPC_FAR *__RPC_FAR *ppPropertyCollection,
            DWORD dwFlags,
            /* [unique][string][in] */ LPCWSTR pszMultiValueName,
            /* [in] */ DWORD dwLabelCount,
            /* [unique][size_is][in] */ LPCWSTR __RPC_FAR ppszLabels[  ],
            BOOL fAnyLabelMatches);
        
        END_INTERFACE
    } IContactPropertiesVtbl;

    interface IContactProperties
    {
        CONST_VTBL struct IContactPropertiesVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IContactProperties_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IContactProperties_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IContactProperties_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IContactProperties_GetString(This,pszPropertyName,dwFlags,pszValue,cchValue,pdwcchPropertyValueRequired)	\
    (This)->lpVtbl -> GetString(This,pszPropertyName,dwFlags,pszValue,cchValue,pdwcchPropertyValueRequired)

#define IContactProperties_GetDate(This,pszPropertyName,dwFlags,pftDateTime)	\
    (This)->lpVtbl -> GetDate(This,pszPropertyName,dwFlags,pftDateTime)

#define IContactProperties_GetBinary(This,pszPropertyName,dwFlags,pszContentType,cchContentType,pdwcchContentTypeRequired,ppStream)	\
    (This)->lpVtbl -> GetBinary(This,pszPropertyName,dwFlags,pszContentType,cchContentType,pdwcchContentTypeRequired,ppStream)

#define IContactProperties_GetLabels(This,pszArrayElementName,dwFlags,pszLabels,cchLabels,pdwcchLabelsRequired)	\
    (This)->lpVtbl -> GetLabels(This,pszArrayElementName,dwFlags,pszLabels,cchLabels,pdwcchLabelsRequired)

#define IContactProperties_SetString(This,pszPropertyName,dwFlags,pszValue)	\
    (This)->lpVtbl -> SetString(This,pszPropertyName,dwFlags,pszValue)

#define IContactProperties_SetDate(This,pszPropertyName,dwFlags,ftDateTime)	\
    (This)->lpVtbl -> SetDate(This,pszPropertyName,dwFlags,ftDateTime)

#define IContactProperties_SetBinary(This,pszPropertyName,dwFlags,pszContentType,pStream)	\
    (This)->lpVtbl -> SetBinary(This,pszPropertyName,dwFlags,pszContentType,pStream)

#define IContactProperties_SetLabels(This,pszArrayElementName,dwFlags,dwLabelCount,ppszLabels)	\
    (This)->lpVtbl -> SetLabels(This,pszArrayElementName,dwFlags,dwLabelCount,ppszLabels)

#define IContactProperties_CreateArrayNode(This,pszArrayName,dwFlags,fAppend,pszNewArrayElementName,cchNewArrayElementName,pdwcchNewArrayElementNameRequired)	\
    (This)->lpVtbl -> CreateArrayNode(This,pszArrayName,dwFlags,fAppend,pszNewArrayElementName,cchNewArrayElementName,pdwcchNewArrayElementNameRequired)

#define IContactProperties_DeleteProperty(This,pszPropertyName,dwFlags)	\
    (This)->lpVtbl -> DeleteProperty(This,pszPropertyName,dwFlags)

#define IContactProperties_DeleteArrayNode(This,pszArrayElementName,dwFlags)	\
    (This)->lpVtbl -> DeleteArrayNode(This,pszArrayElementName,dwFlags)

#define IContactProperties_DeleteLabels(This,pszArrayElementName,dwFlags)	\
    (This)->lpVtbl -> DeleteLabels(This,pszArrayElementName,dwFlags)

#define IContactProperties_GetPropertyCollection(This,ppPropertyCollection,dwFlags,pszMultiValueName,dwLabelCount,ppszLabels,fAnyLabelMatches)	\
    (This)->lpVtbl -> GetPropertyCollection(This,ppPropertyCollection,dwFlags,pszMultiValueName,dwLabelCount,ppszLabels,fAnyLabelMatches)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IContactProperties_GetString_Proxy( 
    IContactProperties __RPC_FAR * This,
    /* [unique][string][in] */ LPCWSTR pszPropertyName,
    DWORD dwFlags,
    /* [size_is][unique][string][out][in] */ LPWSTR pszValue,
    /* [in] */ DWORD cchValue,
    /* [unique][out][in] */ DWORD __RPC_FAR *pdwcchPropertyValueRequired);


void __RPC_STUB IContactProperties_GetString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IContactProperties_GetDate_Proxy( 
    IContactProperties __RPC_FAR * This,
    /* [unique][string][in] */ LPCWSTR pszPropertyName,
    DWORD dwFlags,
    /* [unique][out][in] */ FILETIME __RPC_FAR *pftDateTime);


void __RPC_STUB IContactProperties_GetDate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IContactProperties_GetBinary_Proxy( 
    IContactProperties __RPC_FAR * This,
    /* [unique][string][in] */ LPCWSTR pszPropertyName,
    DWORD dwFlags,
    /* [size_is][unique][out][in] */ LPWSTR pszContentType,
    /* [in] */ DWORD cchContentType,
    /* [unique][out][in] */ DWORD __RPC_FAR *pdwcchContentTypeRequired,
    /* [out] */ IStream __RPC_FAR *__RPC_FAR *ppStream);


void __RPC_STUB IContactProperties_GetBinary_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IContactProperties_GetLabels_Proxy( 
    IContactProperties __RPC_FAR * This,
    /* [unique][string][in] */ LPCWSTR pszArrayElementName,
    DWORD dwFlags,
    /* [size_is][unique][out][in] */ LPWSTR pszLabels,
    /* [in] */ DWORD cchLabels,
    /* [unique][out][in] */ DWORD __RPC_FAR *pdwcchLabelsRequired);


void __RPC_STUB IContactProperties_GetLabels_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IContactProperties_SetString_Proxy( 
    IContactProperties __RPC_FAR * This,
    /* [unique][string][in] */ LPCWSTR pszPropertyName,
    DWORD dwFlags,
    /* [unique][string][in] */ LPCWSTR pszValue);


void __RPC_STUB IContactProperties_SetString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IContactProperties_SetDate_Proxy( 
    IContactProperties __RPC_FAR * This,
    /* [unique][string][in] */ LPCWSTR pszPropertyName,
    DWORD dwFlags,
    /* [in] */ FILETIME ftDateTime);


void __RPC_STUB IContactProperties_SetDate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IContactProperties_SetBinary_Proxy( 
    IContactProperties __RPC_FAR * This,
    /* [unique][string][in] */ LPCWSTR pszPropertyName,
    DWORD dwFlags,
    /* [unique][string][in] */ LPCWSTR pszContentType,
    /* [unique][in] */ IStream __RPC_FAR *pStream);


void __RPC_STUB IContactProperties_SetBinary_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IContactProperties_SetLabels_Proxy( 
    IContactProperties __RPC_FAR * This,
    /* [unique][string][in] */ LPCWSTR pszArrayElementName,
    DWORD dwFlags,
    /* [in] */ DWORD dwLabelCount,
    /* [unique][size_is][in] */ LPCWSTR __RPC_FAR ppszLabels[  ]);


void __RPC_STUB IContactProperties_SetLabels_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IContactProperties_CreateArrayNode_Proxy( 
    IContactProperties __RPC_FAR * This,
    /* [unique][string][in] */ LPCWSTR pszArrayName,
    DWORD dwFlags,
    BOOL fAppend,
    /* [size_is][string][unique][out][in] */ LPWSTR pszNewArrayElementName,
    DWORD cchNewArrayElementName,
    /* [unique][out][in] */ DWORD __RPC_FAR *pdwcchNewArrayElementNameRequired);


void __RPC_STUB IContactProperties_CreateArrayNode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IContactProperties_DeleteProperty_Proxy( 
    IContactProperties __RPC_FAR * This,
    /* [unique][string][in] */ LPCWSTR pszPropertyName,
    DWORD dwFlags);


void __RPC_STUB IContactProperties_DeleteProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IContactProperties_DeleteArrayNode_Proxy( 
    IContactProperties __RPC_FAR * This,
    /* [unique][string][in] */ LPCWSTR pszArrayElementName,
    DWORD dwFlags);


void __RPC_STUB IContactProperties_DeleteArrayNode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IContactProperties_DeleteLabels_Proxy( 
    IContactProperties __RPC_FAR * This,
    /* [unique][string][in] */ LPCWSTR pszArrayElementName,
    DWORD dwFlags);


void __RPC_STUB IContactProperties_DeleteLabels_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IContactProperties_GetPropertyCollection_Proxy( 
    IContactProperties __RPC_FAR * This,
    /* [out] */ IContactPropertyCollection __RPC_FAR *__RPC_FAR *ppPropertyCollection,
    DWORD dwFlags,
    /* [unique][string][in] */ LPCWSTR pszMultiValueName,
    /* [in] */ DWORD dwLabelCount,
    /* [unique][size_is][in] */ LPCWSTR __RPC_FAR ppszLabels[  ],
    BOOL fAnyLabelMatches);


void __RPC_STUB IContactProperties_GetPropertyCollection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IContactProperties_INTERFACE_DEFINED__ */


#ifndef __IContact_INTERFACE_DEFINED__
#define __IContact_INTERFACE_DEFINED__

/* interface IContact */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IContact;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F941B671-BDA7-4f77-884A-F46462F226A7")
    IContact : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetContactID( 
            /* [size_is][string][out][in] */ LPWSTR pszContactID,
            /* [in] */ DWORD cchContactID,
            /* [unique][out][in] */ DWORD __RPC_FAR *pdwcchContactIDRequired) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPath( 
            /* [size_is][string][out][in] */ LPWSTR pszPath,
            /* [in] */ DWORD cchPath,
            /* [unique][out][in] */ DWORD __RPC_FAR *pdwcchPathRequired) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CommitChanges( 
            /* [in] */ DWORD dwCommitFlags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IContactVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IContact __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IContact __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IContact __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetContactID )( 
            IContact __RPC_FAR * This,
            /* [size_is][string][out][in] */ LPWSTR pszContactID,
            /* [in] */ DWORD cchContactID,
            /* [unique][out][in] */ DWORD __RPC_FAR *pdwcchContactIDRequired);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPath )( 
            IContact __RPC_FAR * This,
            /* [size_is][string][out][in] */ LPWSTR pszPath,
            /* [in] */ DWORD cchPath,
            /* [unique][out][in] */ DWORD __RPC_FAR *pdwcchPathRequired);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CommitChanges )( 
            IContact __RPC_FAR * This,
            /* [in] */ DWORD dwCommitFlags);
        
        END_INTERFACE
    } IContactVtbl;

    interface IContact
    {
        CONST_VTBL struct IContactVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IContact_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IContact_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IContact_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IContact_GetContactID(This,pszContactID,cchContactID,pdwcchContactIDRequired)	\
    (This)->lpVtbl -> GetContactID(This,pszContactID,cchContactID,pdwcchContactIDRequired)

#define IContact_GetPath(This,pszPath,cchPath,pdwcchPathRequired)	\
    (This)->lpVtbl -> GetPath(This,pszPath,cchPath,pdwcchPathRequired)

#define IContact_CommitChanges(This,dwCommitFlags)	\
    (This)->lpVtbl -> CommitChanges(This,dwCommitFlags)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IContact_GetContactID_Proxy( 
    IContact __RPC_FAR * This,
    /* [size_is][string][out][in] */ LPWSTR pszContactID,
    /* [in] */ DWORD cchContactID,
    /* [unique][out][in] */ DWORD __RPC_FAR *pdwcchContactIDRequired);


void __RPC_STUB IContact_GetContactID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IContact_GetPath_Proxy( 
    IContact __RPC_FAR * This,
    /* [size_is][string][out][in] */ LPWSTR pszPath,
    /* [in] */ DWORD cchPath,
    /* [unique][out][in] */ DWORD __RPC_FAR *pdwcchPathRequired);


void __RPC_STUB IContact_GetPath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IContact_CommitChanges_Proxy( 
    IContact __RPC_FAR * This,
    /* [in] */ DWORD dwCommitFlags);


void __RPC_STUB IContact_CommitChanges_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IContact_INTERFACE_DEFINED__ */


#ifndef __IContactPropertyCollection_INTERFACE_DEFINED__
#define __IContactPropertyCollection_INTERFACE_DEFINED__

/* interface IContactPropertyCollection */
/* [unique][helpstring][uuid][object] */ 

#define CGD_UNKNOWN_PROPERTY     0x00000000
#define CGD_STRING_PROPERTY      0x00000001
#define CGD_DATE_PROPERTY        0x00000002
#define CGD_BINARY_PROPERTY      0x00000004
#define CGD_ARRAY_NODE           0x00000008

EXTERN_C const IID IID_IContactPropertyCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ffd3adf8-fa64-4328-b1b6-2e0db509cb3c")
    IContactPropertyCollection : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Next( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyName( 
            /* [unique][size_is][string][unique][out][in] */ LPWSTR pszPropertyName,
            /* [in] */ DWORD cchPropertyName,
            /* [unique][out][in] */ DWORD __RPC_FAR *pdwcchPropertyNameRequired) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyType( 
            /* [unique][out][in] */ DWORD __RPC_FAR *pdwType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyVersion( 
            /* [unique][out][in] */ DWORD __RPC_FAR *pdwVersion) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyModificationDate( 
            /* [unique][out][in] */ FILETIME __RPC_FAR *pftModificationDate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyArrayElementID( 
            /* [unique][size_is][string][unique][out][in] */ LPWSTR pszArrayElementID,
            /* [in] */ DWORD cchArrayElementID,
            /* [unique][out][in] */ DWORD __RPC_FAR *pdwcchArrayElementIDRequired) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IContactPropertyCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IContactPropertyCollection __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IContactPropertyCollection __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IContactPropertyCollection __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Reset )( 
            IContactPropertyCollection __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Next )( 
            IContactPropertyCollection __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPropertyName )( 
            IContactPropertyCollection __RPC_FAR * This,
            /* [unique][size_is][string][unique][out][in] */ LPWSTR pszPropertyName,
            /* [in] */ DWORD cchPropertyName,
            /* [unique][out][in] */ DWORD __RPC_FAR *pdwcchPropertyNameRequired);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPropertyType )( 
            IContactPropertyCollection __RPC_FAR * This,
            /* [unique][out][in] */ DWORD __RPC_FAR *pdwType);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPropertyVersion )( 
            IContactPropertyCollection __RPC_FAR * This,
            /* [unique][out][in] */ DWORD __RPC_FAR *pdwVersion);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPropertyModificationDate )( 
            IContactPropertyCollection __RPC_FAR * This,
            /* [unique][out][in] */ FILETIME __RPC_FAR *pftModificationDate);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPropertyArrayElementID )( 
            IContactPropertyCollection __RPC_FAR * This,
            /* [unique][size_is][string][unique][out][in] */ LPWSTR pszArrayElementID,
            /* [in] */ DWORD cchArrayElementID,
            /* [unique][out][in] */ DWORD __RPC_FAR *pdwcchArrayElementIDRequired);
        
        END_INTERFACE
    } IContactPropertyCollectionVtbl;

    interface IContactPropertyCollection
    {
        CONST_VTBL struct IContactPropertyCollectionVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IContactPropertyCollection_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IContactPropertyCollection_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IContactPropertyCollection_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IContactPropertyCollection_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IContactPropertyCollection_Next(This)	\
    (This)->lpVtbl -> Next(This)

#define IContactPropertyCollection_GetPropertyName(This,pszPropertyName,cchPropertyName,pdwcchPropertyNameRequired)	\
    (This)->lpVtbl -> GetPropertyName(This,pszPropertyName,cchPropertyName,pdwcchPropertyNameRequired)

#define IContactPropertyCollection_GetPropertyType(This,pdwType)	\
    (This)->lpVtbl -> GetPropertyType(This,pdwType)

#define IContactPropertyCollection_GetPropertyVersion(This,pdwVersion)	\
    (This)->lpVtbl -> GetPropertyVersion(This,pdwVersion)

#define IContactPropertyCollection_GetPropertyModificationDate(This,pftModificationDate)	\
    (This)->lpVtbl -> GetPropertyModificationDate(This,pftModificationDate)

#define IContactPropertyCollection_GetPropertyArrayElementID(This,pszArrayElementID,cchArrayElementID,pdwcchArrayElementIDRequired)	\
    (This)->lpVtbl -> GetPropertyArrayElementID(This,pszArrayElementID,cchArrayElementID,pdwcchArrayElementIDRequired)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IContactPropertyCollection_Reset_Proxy( 
    IContactPropertyCollection __RPC_FAR * This);


void __RPC_STUB IContactPropertyCollection_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IContactPropertyCollection_Next_Proxy( 
    IContactPropertyCollection __RPC_FAR * This);


void __RPC_STUB IContactPropertyCollection_Next_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IContactPropertyCollection_GetPropertyName_Proxy( 
    IContactPropertyCollection __RPC_FAR * This,
    /* [unique][size_is][string][unique][out][in] */ LPWSTR pszPropertyName,
    /* [in] */ DWORD cchPropertyName,
    /* [unique][out][in] */ DWORD __RPC_FAR *pdwcchPropertyNameRequired);


void __RPC_STUB IContactPropertyCollection_GetPropertyName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IContactPropertyCollection_GetPropertyType_Proxy( 
    IContactPropertyCollection __RPC_FAR * This,
    /* [unique][out][in] */ DWORD __RPC_FAR *pdwType);


void __RPC_STUB IContactPropertyCollection_GetPropertyType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IContactPropertyCollection_GetPropertyVersion_Proxy( 
    IContactPropertyCollection __RPC_FAR * This,
    /* [unique][out][in] */ DWORD __RPC_FAR *pdwVersion);


void __RPC_STUB IContactPropertyCollection_GetPropertyVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IContactPropertyCollection_GetPropertyModificationDate_Proxy( 
    IContactPropertyCollection __RPC_FAR * This,
    /* [unique][out][in] */ FILETIME __RPC_FAR *pftModificationDate);


void __RPC_STUB IContactPropertyCollection_GetPropertyModificationDate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IContactPropertyCollection_GetPropertyArrayElementID_Proxy( 
    IContactPropertyCollection __RPC_FAR * This,
    /* [unique][size_is][string][unique][out][in] */ LPWSTR pszArrayElementID,
    /* [in] */ DWORD cchArrayElementID,
    /* [unique][out][in] */ DWORD __RPC_FAR *pdwcchArrayElementIDRequired);


void __RPC_STUB IContactPropertyCollection_GetPropertyArrayElementID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IContactPropertyCollection_INTERFACE_DEFINED__ */



#ifndef __CONTACT_LIBRARY_DEFINED__
#define __CONTACT_LIBRARY_DEFINED__

/* library CONTACT */
/* [version][lcid][helpstring][uuid] */ 


EXTERN_C const IID LIBID_CONTACT;

EXTERN_C const CLSID CLSID_Contact;

#ifdef __cplusplus

class DECLSPEC_UUID("61b68808-8eee-4fd1-acb8-3d804c8db056")
Contact;
#endif

EXTERN_C const CLSID CLSID_ContactManager;

#ifdef __cplusplus

class DECLSPEC_UUID("7165c8ab-af88-42bd-86fd-5310b4285a02")
ContactManager;
#endif
#endif /* __CONTACT_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


