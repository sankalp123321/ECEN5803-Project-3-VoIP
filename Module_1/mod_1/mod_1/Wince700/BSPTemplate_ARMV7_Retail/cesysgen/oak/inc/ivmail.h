

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0543 */
/* Compiler settings for ivmail.idl:
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

#ifndef __ivmail_h__
#define __ivmail_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVMailServerCaller_FWD_DEFINED__
#define __IVMailServerCaller_FWD_DEFINED__
typedef interface IVMailServerCaller IVMailServerCaller;
#endif 	/* __IVMailServerCaller_FWD_DEFINED__ */


#ifndef __VMailServerCaller_FWD_DEFINED__
#define __VMailServerCaller_FWD_DEFINED__

#ifdef __cplusplus
typedef class VMailServerCaller VMailServerCaller;
#else
typedef struct VMailServerCaller VMailServerCaller;
#endif /* __cplusplus */

#endif 	/* __VMailServerCaller_FWD_DEFINED__ */


/* header files for imported files */
#include "wtypes.h"
#include "oaidl.h"
#include "oleidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IVMailServerCaller_INTERFACE_DEFINED__
#define __IVMailServerCaller_INTERFACE_DEFINED__

/* interface IVMailServerCaller */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVMailServerCaller;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("78C038E8-F522-41b8-90C9-E57A3CB76E50")
    IVMailServerCaller : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Dial( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVMailServerNumber( 
            /* [out] */ BSTR *pbstrNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetVMailServerNumber( 
            /* [in] */ BSTR pbstrNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DialEx( 
            /* [in] */ UINT nLineNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVMailServerNumberEx( 
            /* [out] */ BSTR *pbstrNumber,
            /* [in] */ UINT nLineNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetVMailServerNumberEx( 
            /* [in] */ BSTR pbstrNumber,
            /* [in] */ UINT nLineNumber) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVMailServerCallerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVMailServerCaller * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVMailServerCaller * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVMailServerCaller * This);
        
        HRESULT ( STDMETHODCALLTYPE *Dial )( 
            IVMailServerCaller * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetVMailServerNumber )( 
            IVMailServerCaller * This,
            /* [out] */ BSTR *pbstrNumber);
        
        HRESULT ( STDMETHODCALLTYPE *SetVMailServerNumber )( 
            IVMailServerCaller * This,
            /* [in] */ BSTR pbstrNumber);
        
        HRESULT ( STDMETHODCALLTYPE *DialEx )( 
            IVMailServerCaller * This,
            /* [in] */ UINT nLineNumber);
        
        HRESULT ( STDMETHODCALLTYPE *GetVMailServerNumberEx )( 
            IVMailServerCaller * This,
            /* [out] */ BSTR *pbstrNumber,
            /* [in] */ UINT nLineNumber);
        
        HRESULT ( STDMETHODCALLTYPE *SetVMailServerNumberEx )( 
            IVMailServerCaller * This,
            /* [in] */ BSTR pbstrNumber,
            /* [in] */ UINT nLineNumber);
        
        END_INTERFACE
    } IVMailServerCallerVtbl;

    interface IVMailServerCaller
    {
        CONST_VTBL struct IVMailServerCallerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVMailServerCaller_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVMailServerCaller_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVMailServerCaller_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVMailServerCaller_Dial(This)	\
    ( (This)->lpVtbl -> Dial(This) ) 

#define IVMailServerCaller_GetVMailServerNumber(This,pbstrNumber)	\
    ( (This)->lpVtbl -> GetVMailServerNumber(This,pbstrNumber) ) 

#define IVMailServerCaller_SetVMailServerNumber(This,pbstrNumber)	\
    ( (This)->lpVtbl -> SetVMailServerNumber(This,pbstrNumber) ) 

#define IVMailServerCaller_DialEx(This,nLineNumber)	\
    ( (This)->lpVtbl -> DialEx(This,nLineNumber) ) 

#define IVMailServerCaller_GetVMailServerNumberEx(This,pbstrNumber,nLineNumber)	\
    ( (This)->lpVtbl -> GetVMailServerNumberEx(This,pbstrNumber,nLineNumber) ) 

#define IVMailServerCaller_SetVMailServerNumberEx(This,pbstrNumber,nLineNumber)	\
    ( (This)->lpVtbl -> SetVMailServerNumberEx(This,pbstrNumber,nLineNumber) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVMailServerCaller_INTERFACE_DEFINED__ */



#ifndef __VMailLibrary_LIBRARY_DEFINED__
#define __VMailLibrary_LIBRARY_DEFINED__

/* library VMailLibrary */
/* [uuid] */ 


EXTERN_C const IID LIBID_VMailLibrary;

EXTERN_C const CLSID CLSID_VMailServerCaller;

#ifdef __cplusplus

class DECLSPEC_UUID("09438D64-7037-4d67-A056-7BF3703309A9")
VMailServerCaller;
#endif
#endif /* __VMailLibrary_LIBRARY_DEFINED__ */

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


