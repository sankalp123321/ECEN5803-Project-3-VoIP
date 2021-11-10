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
/* at Tue Jan 23 14:31:04 2007
 */
/* Compiler settings for ..\shimgdata.idl:
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

#ifndef __shimgdata_h__
#define __shimgdata_h__

/* Forward Declarations */ 

#ifndef __IShellImageDataFactory_FWD_DEFINED__
#define __IShellImageDataFactory_FWD_DEFINED__
typedef interface IShellImageDataFactory IShellImageDataFactory;
#endif 	/* __IShellImageDataFactory_FWD_DEFINED__ */


#ifndef __IShellImageData_FWD_DEFINED__
#define __IShellImageData_FWD_DEFINED__
typedef interface IShellImageData IShellImageData;
#endif 	/* __IShellImageData_FWD_DEFINED__ */


#ifndef __IShellImageDataAbort_FWD_DEFINED__
#define __IShellImageDataAbort_FWD_DEFINED__
typedef interface IShellImageDataAbort IShellImageDataAbort;
#endif 	/* __IShellImageDataAbort_FWD_DEFINED__ */


#ifndef __ShellImageDataFactory_FWD_DEFINED__
#define __ShellImageDataFactory_FWD_DEFINED__

#ifdef __cplusplus
typedef class ShellImageDataFactory ShellImageDataFactory;
#else
typedef struct ShellImageDataFactory ShellImageDataFactory;
#endif /* __cplusplus */

#endif 	/* __ShellImageDataFactory_FWD_DEFINED__ */


/* header files for imported files */
#include "oleidl.h"
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_shimgdata_0000 */
/* [local] */ 




#if !defined(_GDIPLUSPIXELFORMATS_H)
typedef DWORD PixelFormat;

#endif
#if !defined(_GDIPLUSENUMS_H)
typedef DWORD InterpolationMode;

#endif
#if !defined(_GDIPLUSHEADERS_H)
typedef BYTE EncoderParameters;

typedef BYTE Image;

#endif
#define  SHIMGKEY_QUALITY    L"Compression"
#define  SHIMGKEY_RAWFORMAT  L"RawDataFormat"

#define  SHIMGDEC_DEFAULT            0x00000000
#define  SHIMGDEC_THUMBNAIL          0x00000001
#define  SHIMGDEC_LOADFULL           0x00000002
#define  E_NOTVALIDFORANIMATEDIMAGE  MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x01)
// This helper function is used to determine if a given file is a B&W document image (fax, etc)
BOOL WINAPI SHIsFileADocumentImage(PCIDLIST_ABSOLUTE pidl);


extern RPC_IF_HANDLE __MIDL_itf_shimgdata_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shimgdata_0000_v0_0_s_ifspec;

#ifndef __IShellImageDataFactory_INTERFACE_DEFINED__
#define __IShellImageDataFactory_INTERFACE_DEFINED__

/* interface IShellImageDataFactory */
/* [unique][object][uuid][helpstring] */ 


EXTERN_C const IID IID_IShellImageDataFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9be8ed5c-edab-4d75-90f3-bd5bdbb21c82")
    IShellImageDataFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateIShellImageData( 
            /* [out] */ IShellImageData __RPC_FAR *__RPC_FAR *ppshimg) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateImageFromFile( 
            /* [in] */ LPCWSTR pszPath,
            /* [out] */ IShellImageData __RPC_FAR *__RPC_FAR *ppshimg) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateImageFromStream( 
            /* [in] */ IStream __RPC_FAR *pStream,
            /* [out] */ IShellImageData __RPC_FAR *__RPC_FAR *ppshimg) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDataFormatFromPath( 
            /* [in] */ LPCWSTR pszPath,
            /* [out] */ GUID __RPC_FAR *pDataFormat) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShellImageDataFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IShellImageDataFactory __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IShellImageDataFactory __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IShellImageDataFactory __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateIShellImageData )( 
            IShellImageDataFactory __RPC_FAR * This,
            /* [out] */ IShellImageData __RPC_FAR *__RPC_FAR *ppshimg);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateImageFromFile )( 
            IShellImageDataFactory __RPC_FAR * This,
            /* [in] */ LPCWSTR pszPath,
            /* [out] */ IShellImageData __RPC_FAR *__RPC_FAR *ppshimg);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateImageFromStream )( 
            IShellImageDataFactory __RPC_FAR * This,
            /* [in] */ IStream __RPC_FAR *pStream,
            /* [out] */ IShellImageData __RPC_FAR *__RPC_FAR *ppshimg);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetDataFormatFromPath )( 
            IShellImageDataFactory __RPC_FAR * This,
            /* [in] */ LPCWSTR pszPath,
            /* [out] */ GUID __RPC_FAR *pDataFormat);
        
        END_INTERFACE
    } IShellImageDataFactoryVtbl;

    interface IShellImageDataFactory
    {
        CONST_VTBL struct IShellImageDataFactoryVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellImageDataFactory_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IShellImageDataFactory_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IShellImageDataFactory_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IShellImageDataFactory_CreateIShellImageData(This,ppshimg)	\
    (This)->lpVtbl -> CreateIShellImageData(This,ppshimg)

#define IShellImageDataFactory_CreateImageFromFile(This,pszPath,ppshimg)	\
    (This)->lpVtbl -> CreateImageFromFile(This,pszPath,ppshimg)

#define IShellImageDataFactory_CreateImageFromStream(This,pStream,ppshimg)	\
    (This)->lpVtbl -> CreateImageFromStream(This,pStream,ppshimg)

#define IShellImageDataFactory_GetDataFormatFromPath(This,pszPath,pDataFormat)	\
    (This)->lpVtbl -> GetDataFormatFromPath(This,pszPath,pDataFormat)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IShellImageDataFactory_CreateIShellImageData_Proxy( 
    IShellImageDataFactory __RPC_FAR * This,
    /* [out] */ IShellImageData __RPC_FAR *__RPC_FAR *ppshimg);


void __RPC_STUB IShellImageDataFactory_CreateIShellImageData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellImageDataFactory_CreateImageFromFile_Proxy( 
    IShellImageDataFactory __RPC_FAR * This,
    /* [in] */ LPCWSTR pszPath,
    /* [out] */ IShellImageData __RPC_FAR *__RPC_FAR *ppshimg);


void __RPC_STUB IShellImageDataFactory_CreateImageFromFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellImageDataFactory_CreateImageFromStream_Proxy( 
    IShellImageDataFactory __RPC_FAR * This,
    /* [in] */ IStream __RPC_FAR *pStream,
    /* [out] */ IShellImageData __RPC_FAR *__RPC_FAR *ppshimg);


void __RPC_STUB IShellImageDataFactory_CreateImageFromStream_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellImageDataFactory_GetDataFormatFromPath_Proxy( 
    IShellImageDataFactory __RPC_FAR * This,
    /* [in] */ LPCWSTR pszPath,
    /* [out] */ GUID __RPC_FAR *pDataFormat);


void __RPC_STUB IShellImageDataFactory_GetDataFormatFromPath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IShellImageDataFactory_INTERFACE_DEFINED__ */


#ifndef __IShellImageData_INTERFACE_DEFINED__
#define __IShellImageData_INTERFACE_DEFINED__

/* interface IShellImageData */
/* [local][unique][object][uuid][helpstring] */ 


EXTERN_C const IID IID_IShellImageData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("bfdeec12-8040-4403-a5ea-9e07dafcf530")
    IShellImageData : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Decode( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ ULONG cxDesired,
            /* [in] */ ULONG cyDesired) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Draw( 
            /* [in] */ HDC hdc,
            /* [in] */ LPRECT prcDest,
            /* [in] */ LPRECT prcSrc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NextFrame( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NextPage( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PrevPage( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsTransparent( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsAnimated( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsVector( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsMultipage( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsEditable( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsPrintable( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsDecoded( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentPage( 
            /* [out] */ ULONG __RPC_FAR *pnPage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPageCount( 
            /* [out] */ ULONG __RPC_FAR *pcPages) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SelectPage( 
            /* [in] */ ULONG iPage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSize( 
            /* [out] */ SIZE __RPC_FAR *pSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRawDataFormat( 
            /* [out] */ GUID __RPC_FAR *pDataFormat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPixelFormat( 
            /* [out] */ PixelFormat __RPC_FAR *pFormat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDelay( 
            /* [out] */ DWORD __RPC_FAR *pdwDelay) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProperties( 
            /* [in] */ DWORD dwMode,
            /* [out] */ IPropertySetStorage __RPC_FAR *__RPC_FAR *ppPropSet) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Rotate( 
            /* [in] */ DWORD dwAngle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Scale( 
            /* [in] */ ULONG cx,
            /* [in] */ ULONG cy,
            /* [in] */ InterpolationMode hints) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DiscardEdit( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetEncoderParams( 
            /* [in] */ IPropertyBag __RPC_FAR *pbagEnc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DisplayName( 
            /* [size_is][out][in] */ LPWSTR wszName,
            /* [in] */ UINT cch) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResolution( 
            /* [out] */ ULONG __RPC_FAR *puResolutionX,
            /* [out] */ ULONG __RPC_FAR *puResolutionY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEncoderParams( 
            /* [in] */ GUID __RPC_FAR *pguidFmt,
            /* [out] */ EncoderParameters __RPC_FAR *__RPC_FAR *ppEncParams) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterAbort( 
            /* [in] */ IShellImageDataAbort __RPC_FAR *pAbort,
            /* [out] */ IShellImageDataAbort __RPC_FAR *__RPC_FAR *ppAbortPrev) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CloneFrame( 
            /* [out] */ Image __RPC_FAR *__RPC_FAR *ppImg) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReplaceFrame( 
            /* [in] */ Image __RPC_FAR *pImg) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShellImageDataVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IShellImageData __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IShellImageData __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IShellImageData __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Decode )( 
            IShellImageData __RPC_FAR * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ ULONG cxDesired,
            /* [in] */ ULONG cyDesired);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Draw )( 
            IShellImageData __RPC_FAR * This,
            /* [in] */ HDC hdc,
            /* [in] */ LPRECT prcDest,
            /* [in] */ LPRECT prcSrc);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *NextFrame )( 
            IShellImageData __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *NextPage )( 
            IShellImageData __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *PrevPage )( 
            IShellImageData __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsTransparent )( 
            IShellImageData __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsAnimated )( 
            IShellImageData __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsVector )( 
            IShellImageData __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsMultipage )( 
            IShellImageData __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsEditable )( 
            IShellImageData __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsPrintable )( 
            IShellImageData __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsDecoded )( 
            IShellImageData __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCurrentPage )( 
            IShellImageData __RPC_FAR * This,
            /* [out] */ ULONG __RPC_FAR *pnPage);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPageCount )( 
            IShellImageData __RPC_FAR * This,
            /* [out] */ ULONG __RPC_FAR *pcPages);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SelectPage )( 
            IShellImageData __RPC_FAR * This,
            /* [in] */ ULONG iPage);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetSize )( 
            IShellImageData __RPC_FAR * This,
            /* [out] */ SIZE __RPC_FAR *pSize);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetRawDataFormat )( 
            IShellImageData __RPC_FAR * This,
            /* [out] */ GUID __RPC_FAR *pDataFormat);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPixelFormat )( 
            IShellImageData __RPC_FAR * This,
            /* [out] */ PixelFormat __RPC_FAR *pFormat);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetDelay )( 
            IShellImageData __RPC_FAR * This,
            /* [out] */ DWORD __RPC_FAR *pdwDelay);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetProperties )( 
            IShellImageData __RPC_FAR * This,
            /* [in] */ DWORD dwMode,
            /* [out] */ IPropertySetStorage __RPC_FAR *__RPC_FAR *ppPropSet);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Rotate )( 
            IShellImageData __RPC_FAR * This,
            /* [in] */ DWORD dwAngle);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Scale )( 
            IShellImageData __RPC_FAR * This,
            /* [in] */ ULONG cx,
            /* [in] */ ULONG cy,
            /* [in] */ InterpolationMode hints);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DiscardEdit )( 
            IShellImageData __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetEncoderParams )( 
            IShellImageData __RPC_FAR * This,
            /* [in] */ IPropertyBag __RPC_FAR *pbagEnc);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DisplayName )( 
            IShellImageData __RPC_FAR * This,
            /* [size_is][out][in] */ LPWSTR wszName,
            /* [in] */ UINT cch);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetResolution )( 
            IShellImageData __RPC_FAR * This,
            /* [out] */ ULONG __RPC_FAR *puResolutionX,
            /* [out] */ ULONG __RPC_FAR *puResolutionY);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetEncoderParams )( 
            IShellImageData __RPC_FAR * This,
            /* [in] */ GUID __RPC_FAR *pguidFmt,
            /* [out] */ EncoderParameters __RPC_FAR *__RPC_FAR *ppEncParams);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RegisterAbort )( 
            IShellImageData __RPC_FAR * This,
            /* [in] */ IShellImageDataAbort __RPC_FAR *pAbort,
            /* [out] */ IShellImageDataAbort __RPC_FAR *__RPC_FAR *ppAbortPrev);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CloneFrame )( 
            IShellImageData __RPC_FAR * This,
            /* [out] */ Image __RPC_FAR *__RPC_FAR *ppImg);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ReplaceFrame )( 
            IShellImageData __RPC_FAR * This,
            /* [in] */ Image __RPC_FAR *pImg);
        
        END_INTERFACE
    } IShellImageDataVtbl;

    interface IShellImageData
    {
        CONST_VTBL struct IShellImageDataVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellImageData_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IShellImageData_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IShellImageData_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IShellImageData_Decode(This,dwFlags,cxDesired,cyDesired)	\
    (This)->lpVtbl -> Decode(This,dwFlags,cxDesired,cyDesired)

#define IShellImageData_Draw(This,hdc,prcDest,prcSrc)	\
    (This)->lpVtbl -> Draw(This,hdc,prcDest,prcSrc)

#define IShellImageData_NextFrame(This)	\
    (This)->lpVtbl -> NextFrame(This)

#define IShellImageData_NextPage(This)	\
    (This)->lpVtbl -> NextPage(This)

#define IShellImageData_PrevPage(This)	\
    (This)->lpVtbl -> PrevPage(This)

#define IShellImageData_IsTransparent(This)	\
    (This)->lpVtbl -> IsTransparent(This)

#define IShellImageData_IsAnimated(This)	\
    (This)->lpVtbl -> IsAnimated(This)

#define IShellImageData_IsVector(This)	\
    (This)->lpVtbl -> IsVector(This)

#define IShellImageData_IsMultipage(This)	\
    (This)->lpVtbl -> IsMultipage(This)

#define IShellImageData_IsEditable(This)	\
    (This)->lpVtbl -> IsEditable(This)

#define IShellImageData_IsPrintable(This)	\
    (This)->lpVtbl -> IsPrintable(This)

#define IShellImageData_IsDecoded(This)	\
    (This)->lpVtbl -> IsDecoded(This)

#define IShellImageData_GetCurrentPage(This,pnPage)	\
    (This)->lpVtbl -> GetCurrentPage(This,pnPage)

#define IShellImageData_GetPageCount(This,pcPages)	\
    (This)->lpVtbl -> GetPageCount(This,pcPages)

#define IShellImageData_SelectPage(This,iPage)	\
    (This)->lpVtbl -> SelectPage(This,iPage)

#define IShellImageData_GetSize(This,pSize)	\
    (This)->lpVtbl -> GetSize(This,pSize)

#define IShellImageData_GetRawDataFormat(This,pDataFormat)	\
    (This)->lpVtbl -> GetRawDataFormat(This,pDataFormat)

#define IShellImageData_GetPixelFormat(This,pFormat)	\
    (This)->lpVtbl -> GetPixelFormat(This,pFormat)

#define IShellImageData_GetDelay(This,pdwDelay)	\
    (This)->lpVtbl -> GetDelay(This,pdwDelay)

#define IShellImageData_GetProperties(This,dwMode,ppPropSet)	\
    (This)->lpVtbl -> GetProperties(This,dwMode,ppPropSet)

#define IShellImageData_Rotate(This,dwAngle)	\
    (This)->lpVtbl -> Rotate(This,dwAngle)

#define IShellImageData_Scale(This,cx,cy,hints)	\
    (This)->lpVtbl -> Scale(This,cx,cy,hints)

#define IShellImageData_DiscardEdit(This)	\
    (This)->lpVtbl -> DiscardEdit(This)

#define IShellImageData_SetEncoderParams(This,pbagEnc)	\
    (This)->lpVtbl -> SetEncoderParams(This,pbagEnc)

#define IShellImageData_DisplayName(This,wszName,cch)	\
    (This)->lpVtbl -> DisplayName(This,wszName,cch)

#define IShellImageData_GetResolution(This,puResolutionX,puResolutionY)	\
    (This)->lpVtbl -> GetResolution(This,puResolutionX,puResolutionY)

#define IShellImageData_GetEncoderParams(This,pguidFmt,ppEncParams)	\
    (This)->lpVtbl -> GetEncoderParams(This,pguidFmt,ppEncParams)

#define IShellImageData_RegisterAbort(This,pAbort,ppAbortPrev)	\
    (This)->lpVtbl -> RegisterAbort(This,pAbort,ppAbortPrev)

#define IShellImageData_CloneFrame(This,ppImg)	\
    (This)->lpVtbl -> CloneFrame(This,ppImg)

#define IShellImageData_ReplaceFrame(This,pImg)	\
    (This)->lpVtbl -> ReplaceFrame(This,pImg)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IShellImageData_Decode_Proxy( 
    IShellImageData __RPC_FAR * This,
    /* [in] */ DWORD dwFlags,
    /* [in] */ ULONG cxDesired,
    /* [in] */ ULONG cyDesired);


void __RPC_STUB IShellImageData_Decode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellImageData_Draw_Proxy( 
    IShellImageData __RPC_FAR * This,
    /* [in] */ HDC hdc,
    /* [in] */ LPRECT prcDest,
    /* [in] */ LPRECT prcSrc);


void __RPC_STUB IShellImageData_Draw_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellImageData_NextFrame_Proxy( 
    IShellImageData __RPC_FAR * This);


void __RPC_STUB IShellImageData_NextFrame_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellImageData_NextPage_Proxy( 
    IShellImageData __RPC_FAR * This);


void __RPC_STUB IShellImageData_NextPage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellImageData_PrevPage_Proxy( 
    IShellImageData __RPC_FAR * This);


void __RPC_STUB IShellImageData_PrevPage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellImageData_IsTransparent_Proxy( 
    IShellImageData __RPC_FAR * This);


void __RPC_STUB IShellImageData_IsTransparent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellImageData_IsAnimated_Proxy( 
    IShellImageData __RPC_FAR * This);


void __RPC_STUB IShellImageData_IsAnimated_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellImageData_IsVector_Proxy( 
    IShellImageData __RPC_FAR * This);


void __RPC_STUB IShellImageData_IsVector_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellImageData_IsMultipage_Proxy( 
    IShellImageData __RPC_FAR * This);


void __RPC_STUB IShellImageData_IsMultipage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellImageData_IsEditable_Proxy( 
    IShellImageData __RPC_FAR * This);


void __RPC_STUB IShellImageData_IsEditable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellImageData_IsPrintable_Proxy( 
    IShellImageData __RPC_FAR * This);


void __RPC_STUB IShellImageData_IsPrintable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellImageData_IsDecoded_Proxy( 
    IShellImageData __RPC_FAR * This);


void __RPC_STUB IShellImageData_IsDecoded_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellImageData_GetCurrentPage_Proxy( 
    IShellImageData __RPC_FAR * This,
    /* [out] */ ULONG __RPC_FAR *pnPage);


void __RPC_STUB IShellImageData_GetCurrentPage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellImageData_GetPageCount_Proxy( 
    IShellImageData __RPC_FAR * This,
    /* [out] */ ULONG __RPC_FAR *pcPages);


void __RPC_STUB IShellImageData_GetPageCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellImageData_SelectPage_Proxy( 
    IShellImageData __RPC_FAR * This,
    /* [in] */ ULONG iPage);


void __RPC_STUB IShellImageData_SelectPage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellImageData_GetSize_Proxy( 
    IShellImageData __RPC_FAR * This,
    /* [out] */ SIZE __RPC_FAR *pSize);


void __RPC_STUB IShellImageData_GetSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellImageData_GetRawDataFormat_Proxy( 
    IShellImageData __RPC_FAR * This,
    /* [out] */ GUID __RPC_FAR *pDataFormat);


void __RPC_STUB IShellImageData_GetRawDataFormat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellImageData_GetPixelFormat_Proxy( 
    IShellImageData __RPC_FAR * This,
    /* [out] */ PixelFormat __RPC_FAR *pFormat);


void __RPC_STUB IShellImageData_GetPixelFormat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellImageData_GetDelay_Proxy( 
    IShellImageData __RPC_FAR * This,
    /* [out] */ DWORD __RPC_FAR *pdwDelay);


void __RPC_STUB IShellImageData_GetDelay_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellImageData_GetProperties_Proxy( 
    IShellImageData __RPC_FAR * This,
    /* [in] */ DWORD dwMode,
    /* [out] */ IPropertySetStorage __RPC_FAR *__RPC_FAR *ppPropSet);


void __RPC_STUB IShellImageData_GetProperties_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellImageData_Rotate_Proxy( 
    IShellImageData __RPC_FAR * This,
    /* [in] */ DWORD dwAngle);


void __RPC_STUB IShellImageData_Rotate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellImageData_Scale_Proxy( 
    IShellImageData __RPC_FAR * This,
    /* [in] */ ULONG cx,
    /* [in] */ ULONG cy,
    /* [in] */ InterpolationMode hints);


void __RPC_STUB IShellImageData_Scale_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellImageData_DiscardEdit_Proxy( 
    IShellImageData __RPC_FAR * This);


void __RPC_STUB IShellImageData_DiscardEdit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellImageData_SetEncoderParams_Proxy( 
    IShellImageData __RPC_FAR * This,
    /* [in] */ IPropertyBag __RPC_FAR *pbagEnc);


void __RPC_STUB IShellImageData_SetEncoderParams_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellImageData_DisplayName_Proxy( 
    IShellImageData __RPC_FAR * This,
    /* [size_is][out][in] */ LPWSTR wszName,
    /* [in] */ UINT cch);


void __RPC_STUB IShellImageData_DisplayName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellImageData_GetResolution_Proxy( 
    IShellImageData __RPC_FAR * This,
    /* [out] */ ULONG __RPC_FAR *puResolutionX,
    /* [out] */ ULONG __RPC_FAR *puResolutionY);


void __RPC_STUB IShellImageData_GetResolution_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellImageData_GetEncoderParams_Proxy( 
    IShellImageData __RPC_FAR * This,
    /* [in] */ GUID __RPC_FAR *pguidFmt,
    /* [out] */ EncoderParameters __RPC_FAR *__RPC_FAR *ppEncParams);


void __RPC_STUB IShellImageData_GetEncoderParams_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellImageData_RegisterAbort_Proxy( 
    IShellImageData __RPC_FAR * This,
    /* [in] */ IShellImageDataAbort __RPC_FAR *pAbort,
    /* [out] */ IShellImageDataAbort __RPC_FAR *__RPC_FAR *ppAbortPrev);


void __RPC_STUB IShellImageData_RegisterAbort_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellImageData_CloneFrame_Proxy( 
    IShellImageData __RPC_FAR * This,
    /* [out] */ Image __RPC_FAR *__RPC_FAR *ppImg);


void __RPC_STUB IShellImageData_CloneFrame_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IShellImageData_ReplaceFrame_Proxy( 
    IShellImageData __RPC_FAR * This,
    /* [in] */ Image __RPC_FAR *pImg);


void __RPC_STUB IShellImageData_ReplaceFrame_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IShellImageData_INTERFACE_DEFINED__ */


#ifndef __IShellImageDataAbort_INTERFACE_DEFINED__
#define __IShellImageDataAbort_INTERFACE_DEFINED__

/* interface IShellImageDataAbort */
/* [unique][object][uuid][helpstring] */ 


EXTERN_C const IID IID_IShellImageDataAbort;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("53fb8e58-50c0-4003-b4aa-0c8df28e7f3a")
    IShellImageDataAbort : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE QueryAbort( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShellImageDataAbortVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IShellImageDataAbort __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IShellImageDataAbort __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IShellImageDataAbort __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryAbort )( 
            IShellImageDataAbort __RPC_FAR * This);
        
        END_INTERFACE
    } IShellImageDataAbortVtbl;

    interface IShellImageDataAbort
    {
        CONST_VTBL struct IShellImageDataAbortVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellImageDataAbort_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IShellImageDataAbort_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IShellImageDataAbort_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IShellImageDataAbort_QueryAbort(This)	\
    (This)->lpVtbl -> QueryAbort(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IShellImageDataAbort_QueryAbort_Proxy( 
    IShellImageDataAbort __RPC_FAR * This);


void __RPC_STUB IShellImageDataAbort_QueryAbort_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IShellImageDataAbort_INTERFACE_DEFINED__ */



#ifndef __ShellImageData_LIBRARY_DEFINED__
#define __ShellImageData_LIBRARY_DEFINED__

/* library ShellImageData */
/* [version][lcid][helpstring][uuid] */ 


EXTERN_C const IID LIBID_ShellImageData;

EXTERN_C const CLSID CLSID_ShellImageDataFactory;

#ifdef __cplusplus

class DECLSPEC_UUID("66e4e4fb-f385-4dd0-8d74-a2efd1bc6178")
ShellImageDataFactory;
#endif
#endif /* __ShellImageData_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


