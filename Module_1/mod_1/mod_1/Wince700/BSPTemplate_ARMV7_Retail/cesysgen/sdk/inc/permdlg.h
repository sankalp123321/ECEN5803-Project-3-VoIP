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
/* at Mon Jan 22 12:15:36 2007
 */
/* Compiler settings for ..\permdlg.idl:
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

#ifndef __permdlg_h__
#define __permdlg_h__

/* Forward Declarations */ 

#ifndef __IJavaZonePermissionEditor_FWD_DEFINED__
#define __IJavaZonePermissionEditor_FWD_DEFINED__
typedef interface IJavaZonePermissionEditor IJavaZonePermissionEditor;
#endif 	/* __IJavaZonePermissionEditor_FWD_DEFINED__ */


#ifndef __JavaRuntimeConfiguration_FWD_DEFINED__
#define __JavaRuntimeConfiguration_FWD_DEFINED__

#ifdef __cplusplus
typedef class JavaRuntimeConfiguration JavaRuntimeConfiguration;
#else
typedef struct JavaRuntimeConfiguration JavaRuntimeConfiguration;
#endif /* __cplusplus */

#endif 	/* __JavaRuntimeConfiguration_FWD_DEFINED__ */


/* header files for imported files */
#include "urlmon.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_permdlg_0000 */
/* [local] */ 

EXTERN_C const CLSID CLSID_JavaRuntimeConfiguration;


extern RPC_IF_HANDLE __MIDL_itf_permdlg_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_permdlg_0000_v0_0_s_ifspec;

#ifndef __IJavaZonePermissionEditor_INTERFACE_DEFINED__
#define __IJavaZonePermissionEditor_INTERFACE_DEFINED__

/* interface IJavaZonePermissionEditor */
/* [unique][uuid][object] */ 

typedef 
enum _JAVADISPLAYMODES
    {	JAVADISPLAY_DEFAULT	= 0,
	JAVADISPLAY_FULL	= 1,
	JAVAEDIT	= 2
    }	JAVADISPLAYMODES;


EXTERN_C const IID IID_IJavaZonePermissionEditor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("85347F8A-C8B7-11d0-8823-00C04FB67C84")
    IJavaZonePermissionEditor : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ShowUI( 
            /* [in] */ HWND phwnd,
            /* [in] */ DWORD dwFlags,
            /* [in] */ DWORD dwMode,
            /* [in] */ URLZONEREG urlZoneReg,
            /* [in] */ DWORD dwZone,
            /* [in] */ DWORD dwPerms,
            /* [in] */ IUnknown __RPC_FAR *pManager) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IJavaZonePermissionEditorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IJavaZonePermissionEditor __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IJavaZonePermissionEditor __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IJavaZonePermissionEditor __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ShowUI )( 
            IJavaZonePermissionEditor __RPC_FAR * This,
            /* [in] */ HWND phwnd,
            /* [in] */ DWORD dwFlags,
            /* [in] */ DWORD dwMode,
            /* [in] */ URLZONEREG urlZoneReg,
            /* [in] */ DWORD dwZone,
            /* [in] */ DWORD dwPerms,
            /* [in] */ IUnknown __RPC_FAR *pManager);
        
        END_INTERFACE
    } IJavaZonePermissionEditorVtbl;

    interface IJavaZonePermissionEditor
    {
        CONST_VTBL struct IJavaZonePermissionEditorVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IJavaZonePermissionEditor_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IJavaZonePermissionEditor_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IJavaZonePermissionEditor_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IJavaZonePermissionEditor_ShowUI(This,phwnd,dwFlags,dwMode,urlZoneReg,dwZone,dwPerms,pManager)	\
    (This)->lpVtbl -> ShowUI(This,phwnd,dwFlags,dwMode,urlZoneReg,dwZone,dwPerms,pManager)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IJavaZonePermissionEditor_ShowUI_Proxy( 
    IJavaZonePermissionEditor __RPC_FAR * This,
    /* [in] */ HWND phwnd,
    /* [in] */ DWORD dwFlags,
    /* [in] */ DWORD dwMode,
    /* [in] */ URLZONEREG urlZoneReg,
    /* [in] */ DWORD dwZone,
    /* [in] */ DWORD dwPerms,
    /* [in] */ IUnknown __RPC_FAR *pManager);


void __RPC_STUB IJavaZonePermissionEditor_ShowUI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IJavaZonePermissionEditor_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HWND_UserSize(     unsigned long __RPC_FAR *, unsigned long            , HWND __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  HWND_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, HWND __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  HWND_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, HWND __RPC_FAR * ); 
void                      __RPC_USER  HWND_UserFree(     unsigned long __RPC_FAR *, HWND __RPC_FAR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


