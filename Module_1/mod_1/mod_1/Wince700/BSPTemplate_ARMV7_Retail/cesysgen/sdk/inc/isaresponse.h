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


/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0543 */
/* Compiler settings for isaresponse.idl:
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

#ifndef __isaresponse_h__
#define __isaresponse_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ISOAPIsapiResponse_FWD_DEFINED__
#define __ISOAPIsapiResponse_FWD_DEFINED__
typedef interface ISOAPIsapiResponse ISOAPIsapiResponse;
#endif 	/* __ISOAPIsapiResponse_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_isaresponse_0000_0000 */
/* [local] */ 

#pragma once


extern RPC_IF_HANDLE __MIDL_itf_isaresponse_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_isaresponse_0000_0000_v0_0_s_ifspec;

#ifndef __ISOAPIsapiResponse_INTERFACE_DEFINED__
#define __ISOAPIsapiResponse_INTERFACE_DEFINED__

/* interface ISOAPIsapiResponse */
/* [helpstring][unique][object][version][uuid][oleautomation] */ 


EXTERN_C const IID IID_ISOAPIsapiResponse;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("714C6C40-4531-442E-A498-3AC614200295")
    ISOAPIsapiResponse : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_HTTPStatus( 
            BSTR *pbstrStatus) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_HTTPStatus( 
            BSTR bstrStatus) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_HTTPCharset( 
            BSTR *pbstrCharset) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_HTTPCharset( 
            BSTR bstrCharset) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISOAPIsapiResponseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISOAPIsapiResponse * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISOAPIsapiResponse * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISOAPIsapiResponse * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HTTPStatus )( 
            ISOAPIsapiResponse * This,
            BSTR *pbstrStatus);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HTTPStatus )( 
            ISOAPIsapiResponse * This,
            BSTR bstrStatus);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HTTPCharset )( 
            ISOAPIsapiResponse * This,
            BSTR *pbstrCharset);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HTTPCharset )( 
            ISOAPIsapiResponse * This,
            BSTR bstrCharset);
        
        END_INTERFACE
    } ISOAPIsapiResponseVtbl;

    interface ISOAPIsapiResponse
    {
        CONST_VTBL struct ISOAPIsapiResponseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISOAPIsapiResponse_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISOAPIsapiResponse_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISOAPIsapiResponse_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISOAPIsapiResponse_get_HTTPStatus(This,pbstrStatus)	\
    ( (This)->lpVtbl -> get_HTTPStatus(This,pbstrStatus) ) 

#define ISOAPIsapiResponse_put_HTTPStatus(This,bstrStatus)	\
    ( (This)->lpVtbl -> put_HTTPStatus(This,bstrStatus) ) 

#define ISOAPIsapiResponse_get_HTTPCharset(This,pbstrCharset)	\
    ( (This)->lpVtbl -> get_HTTPCharset(This,pbstrCharset) ) 

#define ISOAPIsapiResponse_put_HTTPCharset(This,bstrCharset)	\
    ( (This)->lpVtbl -> put_HTTPCharset(This,bstrCharset) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISOAPIsapiResponse_INTERFACE_DEFINED__ */


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


