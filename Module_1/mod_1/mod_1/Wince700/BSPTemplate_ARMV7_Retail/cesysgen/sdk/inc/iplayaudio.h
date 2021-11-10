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
/* at Sun Feb 24 19:37:38 2008
 */
/* Compiler settings for .\IPlayAudio.idl:
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

#ifndef __IPlayAudio_h__
#define __IPlayAudio_h__

/* Forward Declarations */

#ifndef __IPlayAudio_FWD_DEFINED__
#define __IPlayAudio_FWD_DEFINED__
typedef interface IPlayAudio IPlayAudio;
#endif  /* __IPlayAudio_FWD_DEFINED__ */


#ifndef __IPlayAudioFactory_FWD_DEFINED__
#define __IPlayAudioFactory_FWD_DEFINED__
typedef interface IPlayAudioFactory IPlayAudioFactory;
#endif  /* __IPlayAudioFactory_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "objidl.h"

#ifdef __cplusplus
extern "C"{
#endif

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * );

#ifndef __IPlayAudio_INTERFACE_DEFINED__
#define __IPlayAudio_INTERFACE_DEFINED__

/* interface IPlayAudio */
/* [unique][uuid][local][object] */


EXTERN_C const IID IID_IPlayAudio;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("0EDB016A-3F26-4116-B1CA-448C861B0DBD")
    IPlayAudio : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Play( void) = 0;

        virtual HRESULT STDMETHODCALLTYPE Pause( void) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetDoneEvent(
            /* [out] */ HANDLE __RPC_FAR *phDoneEvent) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetDuration(
            /* [out] */ LONGLONG __RPC_FAR *pRefTime) = 0;

        virtual HRESULT STDMETHODCALLTYPE SetPosition(
            /* [in] */ LONGLONG __RPC_FAR *pRefTime) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetPosition(
            /* [out] */ LONGLONG __RPC_FAR *pRefTime) = 0;

        virtual HRESULT STDMETHODCALLTYPE SetVolume(
            /* [in] */ LONG Volume) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetVolume(
            /* [out] */ LONG __RPC_FAR *pVolume) = 0;

    };

#else   /* C style interface */

    typedef struct IPlayAudioVtbl
    {
        BEGIN_INTERFACE

        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
            IPlayAudio __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);

        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
            IPlayAudio __RPC_FAR * This);

        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
            IPlayAudio __RPC_FAR * This);

        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Play )(
            IPlayAudio __RPC_FAR * This);

        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Pause )(
            IPlayAudio __RPC_FAR * This);

        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetDoneEvent )(
            IPlayAudio __RPC_FAR * This,
            /* [out] */ HANDLE __RPC_FAR *phDoneEvent);

        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetDuration )(
            IPlayAudio __RPC_FAR * This,
            /* [out] */ LONGLONG __RPC_FAR *pRefTime);

        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetPosition )(
            IPlayAudio __RPC_FAR * This,
            /* [in] */ LONGLONG __RPC_FAR *pRefTime);

        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPosition )(
            IPlayAudio __RPC_FAR * This,
            /* [out] */ LONGLONG __RPC_FAR *pRefTime);

        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetVolume )(
            IPlayAudio __RPC_FAR * This,
            /* [in] */ LONG Volume);

        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetVolume )(
            IPlayAudio __RPC_FAR * This,
            /* [out] */ LONG __RPC_FAR *pVolume);

        END_INTERFACE
    } IPlayAudioVtbl;

    interface IPlayAudio
    {
        CONST_VTBL struct IPlayAudioVtbl __RPC_FAR *lpVtbl;
    };



#ifdef COBJMACROS


#define IPlayAudio_QueryInterface(This,riid,ppvObject)  \
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPlayAudio_AddRef(This) \
    (This)->lpVtbl -> AddRef(This)

#define IPlayAudio_Release(This)        \
    (This)->lpVtbl -> Release(This)


#define IPlayAudio_Play(This)   \
    (This)->lpVtbl -> Play(This)

#define IPlayAudio_Pause(This)  \
    (This)->lpVtbl -> Pause(This)

#define IPlayAudio_GetDoneEvent(This,phDoneEvent)       \
    (This)->lpVtbl -> GetDoneEvent(This,phDoneEvent)

#define IPlayAudio_GetDuration(This,pRefTime)   \
    (This)->lpVtbl -> GetDuration(This,pRefTime)

#define IPlayAudio_SetPosition(This,pRefTime)   \
    (This)->lpVtbl -> SetPosition(This,pRefTime)

#define IPlayAudio_GetPosition(This,pRefTime)   \
    (This)->lpVtbl -> GetPosition(This,pRefTime)

#define IPlayAudio_SetVolume(This,Volume)       \
    (This)->lpVtbl -> SetVolume(This,Volume)

#define IPlayAudio_GetVolume(This,pVolume)      \
    (This)->lpVtbl -> GetVolume(This,pVolume)

#endif /* COBJMACROS */


#endif  /* C style interface */



HRESULT STDMETHODCALLTYPE IPlayAudio_Play_Proxy(
    IPlayAudio __RPC_FAR * This);


void __RPC_STUB IPlayAudio_Play_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPlayAudio_Pause_Proxy(
    IPlayAudio __RPC_FAR * This);


void __RPC_STUB IPlayAudio_Pause_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPlayAudio_GetDoneEvent_Proxy(
    IPlayAudio __RPC_FAR * This,
    /* [out] */ HANDLE __RPC_FAR *phDoneEvent);


void __RPC_STUB IPlayAudio_GetDoneEvent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPlayAudio_GetDuration_Proxy(
    IPlayAudio __RPC_FAR * This,
    /* [out] */ LONGLONG __RPC_FAR *pRefTime);


void __RPC_STUB IPlayAudio_GetDuration_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPlayAudio_SetPosition_Proxy(
    IPlayAudio __RPC_FAR * This,
    /* [in] */ LONGLONG __RPC_FAR *pRefTime);


void __RPC_STUB IPlayAudio_SetPosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPlayAudio_GetPosition_Proxy(
    IPlayAudio __RPC_FAR * This,
    /* [out] */ LONGLONG __RPC_FAR *pRefTime);


void __RPC_STUB IPlayAudio_GetPosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPlayAudio_SetVolume_Proxy(
    IPlayAudio __RPC_FAR * This,
    /* [in] */ LONG Volume);


void __RPC_STUB IPlayAudio_SetVolume_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPlayAudio_GetVolume_Proxy(
    IPlayAudio __RPC_FAR * This,
    /* [out] */ LONG __RPC_FAR *pVolume);


void __RPC_STUB IPlayAudio_GetVolume_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif  /* __IPlayAudio_INTERFACE_DEFINED__ */


#ifndef __IPlayAudioFactory_INTERFACE_DEFINED__
#define __IPlayAudioFactory_INTERFACE_DEFINED__

/* interface IPlayAudioFactory */
/* [unique][uuid][local][object] */


EXTERN_C const IID IID_IPlayAudioFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("F2A74447-B681-451a-8A67-CCA245AF561E")
    IPlayAudioFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Open(
            /* [in] */ LPCWSTR lpcwstrFile,
            /* [in] */ UINT DeviceId,
            /* [out] */ IPlayAudio __RPC_FAR *__RPC_FAR *ppIPlayAudio) = 0;

        virtual HRESULT STDMETHODCALLTYPE OpenIStream(
            /* [in] */ LPCWSTR lpcwstrFile,
            /* [in] */ IStream __RPC_FAR *pStream,
            /* [in] */ UINT DeviceId,
            /* [out] */ IPlayAudio __RPC_FAR *__RPC_FAR *ppIPlayAudio) = 0;

    };

#else   /* C style interface */

    typedef struct IPlayAudioFactoryVtbl
    {
        BEGIN_INTERFACE

        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
            IPlayAudioFactory __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);

        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
            IPlayAudioFactory __RPC_FAR * This);

        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
            IPlayAudioFactory __RPC_FAR * This);

        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Open )(
            IPlayAudioFactory __RPC_FAR * This,
            /* [in] */ LPCWSTR lpcwstrFile,
            /* [in] */ UINT DeviceId,
            /* [out] */ IPlayAudio __RPC_FAR *__RPC_FAR *ppIPlayAudio);

        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OpenIStream )(
            IPlayAudioFactory __RPC_FAR * This,
            /* [in] */ LPCWSTR lpcwstrFile,
            /* [in] */ IStream __RPC_FAR *pStream,
            /* [in] */ UINT DeviceId,
            /* [out] */ IPlayAudio __RPC_FAR *__RPC_FAR *ppIPlayAudio);

        END_INTERFACE
    } IPlayAudioFactoryVtbl;

    interface IPlayAudioFactory
    {
        CONST_VTBL struct IPlayAudioFactoryVtbl __RPC_FAR *lpVtbl;
    };



#ifdef COBJMACROS


#define IPlayAudioFactory_QueryInterface(This,riid,ppvObject)   \
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPlayAudioFactory_AddRef(This)  \
    (This)->lpVtbl -> AddRef(This)

#define IPlayAudioFactory_Release(This) \
    (This)->lpVtbl -> Release(This)


#define IPlayAudioFactory_Open(This,lpcwstrFile,DeviceId,ppIPlayAudio)  \
    (This)->lpVtbl -> Open(This,lpcwstrFile,DeviceId,ppIPlayAudio)

#define IPlayAudioFactory_OpenIStream(This,lpcwstrFile,pStream,DeviceId,ppIPlayAudio)   \
    (This)->lpVtbl -> OpenIStream(This,lpcwstrFile,pStream,DeviceId,ppIPlayAudio)

#endif /* COBJMACROS */


#endif  /* C style interface */



HRESULT STDMETHODCALLTYPE IPlayAudioFactory_Open_Proxy(
    IPlayAudioFactory __RPC_FAR * This,
    /* [in] */ LPCWSTR lpcwstrFile,
    /* [in] */ UINT DeviceId,
    /* [out] */ IPlayAudio __RPC_FAR *__RPC_FAR *ppIPlayAudio);


void __RPC_STUB IPlayAudioFactory_Open_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IPlayAudioFactory_OpenIStream_Proxy(
    IPlayAudioFactory __RPC_FAR * This,
    /* [in] */ LPCWSTR lpcwstrFile,
    /* [in] */ IStream __RPC_FAR *pStream,
    /* [in] */ UINT DeviceId,
    /* [out] */ IPlayAudio __RPC_FAR *__RPC_FAR *ppIPlayAudio);


void __RPC_STUB IPlayAudioFactory_OpenIStream_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif  /* __IPlayAudioFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_IPlayAudio_0065 */
/* [local] */

DEFINE_GUID(CLSID_IPlayAudioFactory,   0x9bf60f60, 0x7987, 0x4df2, 0xbe, 0x61, 0xcf, 0x21, 0xce, 0x2a, 0xb8, 0xc0);


extern RPC_IF_HANDLE __MIDL_itf_IPlayAudio_0065_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_IPlayAudio_0065_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


