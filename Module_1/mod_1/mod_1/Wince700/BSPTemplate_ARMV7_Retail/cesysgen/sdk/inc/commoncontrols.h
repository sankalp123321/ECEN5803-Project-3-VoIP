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
/* at Tue Jan 23 14:30:37 2007
 */
/* Compiler settings for ..\CommonControls.idl:
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

#ifndef __CommonControls_h__
#define __CommonControls_h__

/* Forward Declarations */ 

#ifndef __IImageList_FWD_DEFINED__
#define __IImageList_FWD_DEFINED__
typedef interface IImageList IImageList;
#endif 	/* __IImageList_FWD_DEFINED__ */


#ifndef __IImageList2_FWD_DEFINED__
#define __IImageList2_FWD_DEFINED__
typedef interface IImageList2 IImageList2;
#endif 	/* __IImageList2_FWD_DEFINED__ */


#ifndef __ImageList_FWD_DEFINED__
#define __ImageList_FWD_DEFINED__

#ifdef __cplusplus
typedef class ImageList ImageList;
#else
typedef struct ImageList ImageList;
#endif /* __cplusplus */

#endif 	/* __ImageList_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_CommonControls_0000 */
/* [local] */ 

#if (_WIN32_IE >= 0x0501)
#ifndef WINCOMMCTRLAPI
#if !defined(_COMCTL32_) && defined(_WIN32)
#define WINCOMMCTRLAPI DECLSPEC_IMPORT
#else
#define WINCOMMCTRLAPI
#endif
#endif // WINCOMMCTRLAPI
#ifdef MIDL_PASS
typedef DWORD RGBQUAD;

typedef IUnknown __RPC_FAR *HIMAGELIST;

typedef struct _IMAGELIST* HIMAGELIST;
typedef struct _IMAGELISTDRAWPARAMS
    {
    DWORD cbSize;
    HIMAGELIST himl;
    int i;
    HDC hdcDst;
    int x;
    int y;
    int cx;
    int cy;
    int xBitmap;
    int yBitmap;
    COLORREF rgbBk;
    COLORREF rgbFg;
    UINT fStyle;
    DWORD dwRop;
    DWORD fState;
    DWORD Frame;
    COLORREF crEffect;
    }	IMAGELISTDRAWPARAMS;

typedef IMAGELISTDRAWPARAMS __RPC_FAR *LPIMAGELISTDRAWPARAMS;

typedef struct tagIMAGEINFO
    {
    HBITMAP hbmImage;
    HBITMAP hbmMask;
    int Unused1;
    int Unused2;
    RECT rcImage;
    }	IMAGEINFO;

typedef IMAGEINFO __RPC_FAR *LPIMAGEINFO;

#endif
#if _WIN32_WINNT >= 0x0600
WINCOMMCTRLAPI HRESULT WINAPI ImageList_CoCreateInstance(
         __in  REFCLSID rclsid,
         __in  const IUnknown *punkOuter,
         __in  REFIID riid,
         __out void **ppv);
#endif
#define ILIF_ALPHA               0x00000001
#define ILIF_LOWQUALITY          0x00000002
#define ILDRF_IMAGELOWQUALITY    0x00000001
#define ILDRF_OVERLAYLOWQUALITY  0x00000010


extern RPC_IF_HANDLE __MIDL_itf_CommonControls_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_CommonControls_0000_v0_0_s_ifspec;

#ifndef __IImageList_INTERFACE_DEFINED__
#define __IImageList_INTERFACE_DEFINED__

/* interface IImageList */
/* [object][local][uuid] */ 


EXTERN_C const IID IID_IImageList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("46EB5926-582E-4017-9FDF-E8998DAA0950")
    IImageList : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Add( 
            HBITMAP hbmImage,
            HBITMAP hbmMask,
            int __RPC_FAR *pi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReplaceIcon( 
            int i,
            HICON hicon,
            int __RPC_FAR *pi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOverlayImage( 
            int iImage,
            int iOverlay) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Replace( 
            int i,
            HBITMAP hbmImage,
            HBITMAP hbmMask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddMasked( 
            HBITMAP hbmImage,
            COLORREF crMask,
            int __RPC_FAR *pi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Draw( 
            IMAGELISTDRAWPARAMS __RPC_FAR *pimldp) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Remove( 
            int i) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIcon( 
            int i,
            UINT flags,
            HICON __RPC_FAR *picon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetImageInfo( 
            int i,
            IMAGEINFO __RPC_FAR *pImageInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Copy( 
            int iDst,
            IUnknown __RPC_FAR *punkSrc,
            int iSrc,
            UINT uFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Merge( 
            int i1,
            IUnknown __RPC_FAR *punk2,
            int i2,
            int dx,
            int dy,
            REFIID riid,
            void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            REFIID riid,
            void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetImageRect( 
            int i,
            RECT __RPC_FAR *prc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIconSize( 
            int __RPC_FAR *cx,
            int __RPC_FAR *cy) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetIconSize( 
            int cx,
            int cy) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetImageCount( 
            int __RPC_FAR *pi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetImageCount( 
            UINT uNewCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBkColor( 
            COLORREF clrBk,
            COLORREF __RPC_FAR *pclr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBkColor( 
            COLORREF __RPC_FAR *pclr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginDrag( 
            int iTrack,
            int dxHotspot,
            int dyHotspot) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndDrag( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DragEnter( 
            HWND hwndLock,
            int x,
            int y) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DragLeave( 
            HWND hwndLock) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DragMove( 
            int x,
            int y) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDragCursorImage( 
            IUnknown __RPC_FAR *punk,
            int iDrag,
            int dxHotspot,
            int dyHotspot) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DragShowNolock( 
            BOOL fShow) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDragImage( 
            POINT __RPC_FAR *ppt,
            POINT __RPC_FAR *pptHotspot,
            REFIID riid,
            void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItemFlags( 
            int i,
            DWORD __RPC_FAR *dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOverlayImage( 
            int iOverlay,
            int __RPC_FAR *piIndex) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IImageListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IImageList __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IImageList __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IImageList __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Add )( 
            IImageList __RPC_FAR * This,
            HBITMAP hbmImage,
            HBITMAP hbmMask,
            int __RPC_FAR *pi);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ReplaceIcon )( 
            IImageList __RPC_FAR * This,
            int i,
            HICON hicon,
            int __RPC_FAR *pi);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetOverlayImage )( 
            IImageList __RPC_FAR * This,
            int iImage,
            int iOverlay);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Replace )( 
            IImageList __RPC_FAR * This,
            int i,
            HBITMAP hbmImage,
            HBITMAP hbmMask);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddMasked )( 
            IImageList __RPC_FAR * This,
            HBITMAP hbmImage,
            COLORREF crMask,
            int __RPC_FAR *pi);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Draw )( 
            IImageList __RPC_FAR * This,
            IMAGELISTDRAWPARAMS __RPC_FAR *pimldp);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Remove )( 
            IImageList __RPC_FAR * This,
            int i);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIcon )( 
            IImageList __RPC_FAR * This,
            int i,
            UINT flags,
            HICON __RPC_FAR *picon);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetImageInfo )( 
            IImageList __RPC_FAR * This,
            int i,
            IMAGEINFO __RPC_FAR *pImageInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Copy )( 
            IImageList __RPC_FAR * This,
            int iDst,
            IUnknown __RPC_FAR *punkSrc,
            int iSrc,
            UINT uFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Merge )( 
            IImageList __RPC_FAR * This,
            int i1,
            IUnknown __RPC_FAR *punk2,
            int i2,
            int dx,
            int dy,
            REFIID riid,
            void __RPC_FAR *__RPC_FAR *ppv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clone )( 
            IImageList __RPC_FAR * This,
            REFIID riid,
            void __RPC_FAR *__RPC_FAR *ppv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetImageRect )( 
            IImageList __RPC_FAR * This,
            int i,
            RECT __RPC_FAR *prc);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIconSize )( 
            IImageList __RPC_FAR * This,
            int __RPC_FAR *cx,
            int __RPC_FAR *cy);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetIconSize )( 
            IImageList __RPC_FAR * This,
            int cx,
            int cy);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetImageCount )( 
            IImageList __RPC_FAR * This,
            int __RPC_FAR *pi);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetImageCount )( 
            IImageList __RPC_FAR * This,
            UINT uNewCount);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetBkColor )( 
            IImageList __RPC_FAR * This,
            COLORREF clrBk,
            COLORREF __RPC_FAR *pclr);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetBkColor )( 
            IImageList __RPC_FAR * This,
            COLORREF __RPC_FAR *pclr);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *BeginDrag )( 
            IImageList __RPC_FAR * This,
            int iTrack,
            int dxHotspot,
            int dyHotspot);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *EndDrag )( 
            IImageList __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DragEnter )( 
            IImageList __RPC_FAR * This,
            HWND hwndLock,
            int x,
            int y);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DragLeave )( 
            IImageList __RPC_FAR * This,
            HWND hwndLock);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DragMove )( 
            IImageList __RPC_FAR * This,
            int x,
            int y);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetDragCursorImage )( 
            IImageList __RPC_FAR * This,
            IUnknown __RPC_FAR *punk,
            int iDrag,
            int dxHotspot,
            int dyHotspot);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DragShowNolock )( 
            IImageList __RPC_FAR * This,
            BOOL fShow);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetDragImage )( 
            IImageList __RPC_FAR * This,
            POINT __RPC_FAR *ppt,
            POINT __RPC_FAR *pptHotspot,
            REFIID riid,
            void __RPC_FAR *__RPC_FAR *ppv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetItemFlags )( 
            IImageList __RPC_FAR * This,
            int i,
            DWORD __RPC_FAR *dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetOverlayImage )( 
            IImageList __RPC_FAR * This,
            int iOverlay,
            int __RPC_FAR *piIndex);
        
        END_INTERFACE
    } IImageListVtbl;

    interface IImageList
    {
        CONST_VTBL struct IImageListVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IImageList_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IImageList_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IImageList_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IImageList_Add(This,hbmImage,hbmMask,pi)	\
    (This)->lpVtbl -> Add(This,hbmImage,hbmMask,pi)

#define IImageList_ReplaceIcon(This,i,hicon,pi)	\
    (This)->lpVtbl -> ReplaceIcon(This,i,hicon,pi)

#define IImageList_SetOverlayImage(This,iImage,iOverlay)	\
    (This)->lpVtbl -> SetOverlayImage(This,iImage,iOverlay)

#define IImageList_Replace(This,i,hbmImage,hbmMask)	\
    (This)->lpVtbl -> Replace(This,i,hbmImage,hbmMask)

#define IImageList_AddMasked(This,hbmImage,crMask,pi)	\
    (This)->lpVtbl -> AddMasked(This,hbmImage,crMask,pi)

#define IImageList_Draw(This,pimldp)	\
    (This)->lpVtbl -> Draw(This,pimldp)

#define IImageList_Remove(This,i)	\
    (This)->lpVtbl -> Remove(This,i)

#define IImageList_GetIcon(This,i,flags,picon)	\
    (This)->lpVtbl -> GetIcon(This,i,flags,picon)

#define IImageList_GetImageInfo(This,i,pImageInfo)	\
    (This)->lpVtbl -> GetImageInfo(This,i,pImageInfo)

#define IImageList_Copy(This,iDst,punkSrc,iSrc,uFlags)	\
    (This)->lpVtbl -> Copy(This,iDst,punkSrc,iSrc,uFlags)

#define IImageList_Merge(This,i1,punk2,i2,dx,dy,riid,ppv)	\
    (This)->lpVtbl -> Merge(This,i1,punk2,i2,dx,dy,riid,ppv)

#define IImageList_Clone(This,riid,ppv)	\
    (This)->lpVtbl -> Clone(This,riid,ppv)

#define IImageList_GetImageRect(This,i,prc)	\
    (This)->lpVtbl -> GetImageRect(This,i,prc)

#define IImageList_GetIconSize(This,cx,cy)	\
    (This)->lpVtbl -> GetIconSize(This,cx,cy)

#define IImageList_SetIconSize(This,cx,cy)	\
    (This)->lpVtbl -> SetIconSize(This,cx,cy)

#define IImageList_GetImageCount(This,pi)	\
    (This)->lpVtbl -> GetImageCount(This,pi)

#define IImageList_SetImageCount(This,uNewCount)	\
    (This)->lpVtbl -> SetImageCount(This,uNewCount)

#define IImageList_SetBkColor(This,clrBk,pclr)	\
    (This)->lpVtbl -> SetBkColor(This,clrBk,pclr)

#define IImageList_GetBkColor(This,pclr)	\
    (This)->lpVtbl -> GetBkColor(This,pclr)

#define IImageList_BeginDrag(This,iTrack,dxHotspot,dyHotspot)	\
    (This)->lpVtbl -> BeginDrag(This,iTrack,dxHotspot,dyHotspot)

#define IImageList_EndDrag(This)	\
    (This)->lpVtbl -> EndDrag(This)

#define IImageList_DragEnter(This,hwndLock,x,y)	\
    (This)->lpVtbl -> DragEnter(This,hwndLock,x,y)

#define IImageList_DragLeave(This,hwndLock)	\
    (This)->lpVtbl -> DragLeave(This,hwndLock)

#define IImageList_DragMove(This,x,y)	\
    (This)->lpVtbl -> DragMove(This,x,y)

#define IImageList_SetDragCursorImage(This,punk,iDrag,dxHotspot,dyHotspot)	\
    (This)->lpVtbl -> SetDragCursorImage(This,punk,iDrag,dxHotspot,dyHotspot)

#define IImageList_DragShowNolock(This,fShow)	\
    (This)->lpVtbl -> DragShowNolock(This,fShow)

#define IImageList_GetDragImage(This,ppt,pptHotspot,riid,ppv)	\
    (This)->lpVtbl -> GetDragImage(This,ppt,pptHotspot,riid,ppv)

#define IImageList_GetItemFlags(This,i,dwFlags)	\
    (This)->lpVtbl -> GetItemFlags(This,i,dwFlags)

#define IImageList_GetOverlayImage(This,iOverlay,piIndex)	\
    (This)->lpVtbl -> GetOverlayImage(This,iOverlay,piIndex)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IImageList_Add_Proxy( 
    IImageList __RPC_FAR * This,
    HBITMAP hbmImage,
    HBITMAP hbmMask,
    int __RPC_FAR *pi);


void __RPC_STUB IImageList_Add_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList_ReplaceIcon_Proxy( 
    IImageList __RPC_FAR * This,
    int i,
    HICON hicon,
    int __RPC_FAR *pi);


void __RPC_STUB IImageList_ReplaceIcon_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList_SetOverlayImage_Proxy( 
    IImageList __RPC_FAR * This,
    int iImage,
    int iOverlay);


void __RPC_STUB IImageList_SetOverlayImage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList_Replace_Proxy( 
    IImageList __RPC_FAR * This,
    int i,
    HBITMAP hbmImage,
    HBITMAP hbmMask);


void __RPC_STUB IImageList_Replace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList_AddMasked_Proxy( 
    IImageList __RPC_FAR * This,
    HBITMAP hbmImage,
    COLORREF crMask,
    int __RPC_FAR *pi);


void __RPC_STUB IImageList_AddMasked_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList_Draw_Proxy( 
    IImageList __RPC_FAR * This,
    IMAGELISTDRAWPARAMS __RPC_FAR *pimldp);


void __RPC_STUB IImageList_Draw_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList_Remove_Proxy( 
    IImageList __RPC_FAR * This,
    int i);


void __RPC_STUB IImageList_Remove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList_GetIcon_Proxy( 
    IImageList __RPC_FAR * This,
    int i,
    UINT flags,
    HICON __RPC_FAR *picon);


void __RPC_STUB IImageList_GetIcon_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList_GetImageInfo_Proxy( 
    IImageList __RPC_FAR * This,
    int i,
    IMAGEINFO __RPC_FAR *pImageInfo);


void __RPC_STUB IImageList_GetImageInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList_Copy_Proxy( 
    IImageList __RPC_FAR * This,
    int iDst,
    IUnknown __RPC_FAR *punkSrc,
    int iSrc,
    UINT uFlags);


void __RPC_STUB IImageList_Copy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList_Merge_Proxy( 
    IImageList __RPC_FAR * This,
    int i1,
    IUnknown __RPC_FAR *punk2,
    int i2,
    int dx,
    int dy,
    REFIID riid,
    void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IImageList_Merge_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList_Clone_Proxy( 
    IImageList __RPC_FAR * This,
    REFIID riid,
    void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IImageList_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList_GetImageRect_Proxy( 
    IImageList __RPC_FAR * This,
    int i,
    RECT __RPC_FAR *prc);


void __RPC_STUB IImageList_GetImageRect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList_GetIconSize_Proxy( 
    IImageList __RPC_FAR * This,
    int __RPC_FAR *cx,
    int __RPC_FAR *cy);


void __RPC_STUB IImageList_GetIconSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList_SetIconSize_Proxy( 
    IImageList __RPC_FAR * This,
    int cx,
    int cy);


void __RPC_STUB IImageList_SetIconSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList_GetImageCount_Proxy( 
    IImageList __RPC_FAR * This,
    int __RPC_FAR *pi);


void __RPC_STUB IImageList_GetImageCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList_SetImageCount_Proxy( 
    IImageList __RPC_FAR * This,
    UINT uNewCount);


void __RPC_STUB IImageList_SetImageCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList_SetBkColor_Proxy( 
    IImageList __RPC_FAR * This,
    COLORREF clrBk,
    COLORREF __RPC_FAR *pclr);


void __RPC_STUB IImageList_SetBkColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList_GetBkColor_Proxy( 
    IImageList __RPC_FAR * This,
    COLORREF __RPC_FAR *pclr);


void __RPC_STUB IImageList_GetBkColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList_BeginDrag_Proxy( 
    IImageList __RPC_FAR * This,
    int iTrack,
    int dxHotspot,
    int dyHotspot);


void __RPC_STUB IImageList_BeginDrag_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList_EndDrag_Proxy( 
    IImageList __RPC_FAR * This);


void __RPC_STUB IImageList_EndDrag_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList_DragEnter_Proxy( 
    IImageList __RPC_FAR * This,
    HWND hwndLock,
    int x,
    int y);


void __RPC_STUB IImageList_DragEnter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList_DragLeave_Proxy( 
    IImageList __RPC_FAR * This,
    HWND hwndLock);


void __RPC_STUB IImageList_DragLeave_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList_DragMove_Proxy( 
    IImageList __RPC_FAR * This,
    int x,
    int y);


void __RPC_STUB IImageList_DragMove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList_SetDragCursorImage_Proxy( 
    IImageList __RPC_FAR * This,
    IUnknown __RPC_FAR *punk,
    int iDrag,
    int dxHotspot,
    int dyHotspot);


void __RPC_STUB IImageList_SetDragCursorImage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList_DragShowNolock_Proxy( 
    IImageList __RPC_FAR * This,
    BOOL fShow);


void __RPC_STUB IImageList_DragShowNolock_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList_GetDragImage_Proxy( 
    IImageList __RPC_FAR * This,
    POINT __RPC_FAR *ppt,
    POINT __RPC_FAR *pptHotspot,
    REFIID riid,
    void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IImageList_GetDragImage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList_GetItemFlags_Proxy( 
    IImageList __RPC_FAR * This,
    int i,
    DWORD __RPC_FAR *dwFlags);


void __RPC_STUB IImageList_GetItemFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList_GetOverlayImage_Proxy( 
    IImageList __RPC_FAR * This,
    int iOverlay,
    int __RPC_FAR *piIndex);


void __RPC_STUB IImageList_GetOverlayImage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IImageList_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_CommonControls_0148 */
/* [local] */ 

#define ILR_DEFAULT                  0x0000
#define ILR_HORIZONTAL_LEFT          0x0000
#define ILR_HORIZONTAL_CENTER        0x0001
#define ILR_HORIZONTAL_RIGHT         0x0002
#define ILR_VERTICAL_TOP             0x0000
#define ILR_VERTICAL_CENTER          0x0010
#define ILR_VERTICAL_BOTTOM          0x0020
#define ILR_SCALE_CLIP               0x0000
#define ILR_SCALE_ASPECTRATIO        0x0100


extern RPC_IF_HANDLE __MIDL_itf_CommonControls_0148_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_CommonControls_0148_v0_0_s_ifspec;

#ifndef __IImageList2_INTERFACE_DEFINED__
#define __IImageList2_INTERFACE_DEFINED__

/* interface IImageList2 */
/* [object][local][uuid] */ 

#define ILGOS_ALWAYS         0x00000000
#define ILGOS_FROMSTANDBY    0x00000001
#define ILFIP_ALWAYS         0x00000000
#define ILFIP_FROMSTANDBY    0x00000001
#define ILDI_PURGE       0x00000001
#define ILDI_STANDBY     0x00000002
#define ILDI_RESETACCESS 0x00000004
#define ILDI_QUERYACCESS 0x00000008
typedef struct tagIMAGELISTSTATS
    {
    DWORD cbSize;
    int cAlloc;
    int cUsed;
    int cStandby;
    }	IMAGELISTSTATS;


EXTERN_C const IID IID_IImageList2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("192b9d83-50fc-457b-90a0-2b82a8b5dae1")
    IImageList2 : public IImageList
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Resize( 
            int cxNewIconSize,
            int cyNewIconSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOriginalSize( 
            /* [in] */ int iImage,
            /* [in] */ DWORD dwFlags,
            int __RPC_FAR *pcx,
            int __RPC_FAR *pcy) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOriginalSize( 
            /* [in] */ int iImage,
            /* [in] */ int cx,
            /* [in] */ int cy) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCallback( 
            IUnknown __RPC_FAR *punk) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCallback( 
            /* [in] */ REFIID riid,
            /* [out] */ void __RPC_FAR *__RPC_FAR *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ForceImagePresent( 
            /* [in] */ int iImage,
            DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DiscardImages( 
            /* [in] */ int iFirstImage,
            /* [in] */ int iLastImage,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PreloadImages( 
            /* [in] */ IMAGELISTDRAWPARAMS __RPC_FAR *pimldp) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStatistics( 
            /* [out][in] */ IMAGELISTSTATS __RPC_FAR *pils) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ int cx,
            /* [in] */ int cy,
            /* [in] */ UINT flags,
            /* [in] */ int cInitial,
            /* [in] */ int cGrow) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Replace2( 
            int i,
            /* [in] */ HBITMAP hbmImage,
            /* [in] */ HBITMAP hbmMask,
            /* [in] */ IUnknown __RPC_FAR *punk,
            DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReplaceFromImageList( 
            int i,
            /* [in] */ IImageList __RPC_FAR *pil,
            int iSrc,
            /* [in] */ IUnknown __RPC_FAR *punk,
            DWORD dwFlags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IImageList2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IImageList2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IImageList2 __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IImageList2 __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Add )( 
            IImageList2 __RPC_FAR * This,
            HBITMAP hbmImage,
            HBITMAP hbmMask,
            int __RPC_FAR *pi);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ReplaceIcon )( 
            IImageList2 __RPC_FAR * This,
            int i,
            HICON hicon,
            int __RPC_FAR *pi);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetOverlayImage )( 
            IImageList2 __RPC_FAR * This,
            int iImage,
            int iOverlay);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Replace )( 
            IImageList2 __RPC_FAR * This,
            int i,
            HBITMAP hbmImage,
            HBITMAP hbmMask);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddMasked )( 
            IImageList2 __RPC_FAR * This,
            HBITMAP hbmImage,
            COLORREF crMask,
            int __RPC_FAR *pi);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Draw )( 
            IImageList2 __RPC_FAR * This,
            IMAGELISTDRAWPARAMS __RPC_FAR *pimldp);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Remove )( 
            IImageList2 __RPC_FAR * This,
            int i);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIcon )( 
            IImageList2 __RPC_FAR * This,
            int i,
            UINT flags,
            HICON __RPC_FAR *picon);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetImageInfo )( 
            IImageList2 __RPC_FAR * This,
            int i,
            IMAGEINFO __RPC_FAR *pImageInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Copy )( 
            IImageList2 __RPC_FAR * This,
            int iDst,
            IUnknown __RPC_FAR *punkSrc,
            int iSrc,
            UINT uFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Merge )( 
            IImageList2 __RPC_FAR * This,
            int i1,
            IUnknown __RPC_FAR *punk2,
            int i2,
            int dx,
            int dy,
            REFIID riid,
            void __RPC_FAR *__RPC_FAR *ppv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clone )( 
            IImageList2 __RPC_FAR * This,
            REFIID riid,
            void __RPC_FAR *__RPC_FAR *ppv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetImageRect )( 
            IImageList2 __RPC_FAR * This,
            int i,
            RECT __RPC_FAR *prc);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIconSize )( 
            IImageList2 __RPC_FAR * This,
            int __RPC_FAR *cx,
            int __RPC_FAR *cy);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetIconSize )( 
            IImageList2 __RPC_FAR * This,
            int cx,
            int cy);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetImageCount )( 
            IImageList2 __RPC_FAR * This,
            int __RPC_FAR *pi);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetImageCount )( 
            IImageList2 __RPC_FAR * This,
            UINT uNewCount);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetBkColor )( 
            IImageList2 __RPC_FAR * This,
            COLORREF clrBk,
            COLORREF __RPC_FAR *pclr);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetBkColor )( 
            IImageList2 __RPC_FAR * This,
            COLORREF __RPC_FAR *pclr);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *BeginDrag )( 
            IImageList2 __RPC_FAR * This,
            int iTrack,
            int dxHotspot,
            int dyHotspot);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *EndDrag )( 
            IImageList2 __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DragEnter )( 
            IImageList2 __RPC_FAR * This,
            HWND hwndLock,
            int x,
            int y);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DragLeave )( 
            IImageList2 __RPC_FAR * This,
            HWND hwndLock);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DragMove )( 
            IImageList2 __RPC_FAR * This,
            int x,
            int y);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetDragCursorImage )( 
            IImageList2 __RPC_FAR * This,
            IUnknown __RPC_FAR *punk,
            int iDrag,
            int dxHotspot,
            int dyHotspot);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DragShowNolock )( 
            IImageList2 __RPC_FAR * This,
            BOOL fShow);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetDragImage )( 
            IImageList2 __RPC_FAR * This,
            POINT __RPC_FAR *ppt,
            POINT __RPC_FAR *pptHotspot,
            REFIID riid,
            void __RPC_FAR *__RPC_FAR *ppv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetItemFlags )( 
            IImageList2 __RPC_FAR * This,
            int i,
            DWORD __RPC_FAR *dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetOverlayImage )( 
            IImageList2 __RPC_FAR * This,
            int iOverlay,
            int __RPC_FAR *piIndex);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Resize )( 
            IImageList2 __RPC_FAR * This,
            int cxNewIconSize,
            int cyNewIconSize);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetOriginalSize )( 
            IImageList2 __RPC_FAR * This,
            /* [in] */ int iImage,
            /* [in] */ DWORD dwFlags,
            int __RPC_FAR *pcx,
            int __RPC_FAR *pcy);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetOriginalSize )( 
            IImageList2 __RPC_FAR * This,
            /* [in] */ int iImage,
            /* [in] */ int cx,
            /* [in] */ int cy);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetCallback )( 
            IImageList2 __RPC_FAR * This,
            IUnknown __RPC_FAR *punk);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCallback )( 
            IImageList2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [out] */ void __RPC_FAR *__RPC_FAR *ppv);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ForceImagePresent )( 
            IImageList2 __RPC_FAR * This,
            /* [in] */ int iImage,
            DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DiscardImages )( 
            IImageList2 __RPC_FAR * This,
            /* [in] */ int iFirstImage,
            /* [in] */ int iLastImage,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *PreloadImages )( 
            IImageList2 __RPC_FAR * This,
            /* [in] */ IMAGELISTDRAWPARAMS __RPC_FAR *pimldp);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetStatistics )( 
            IImageList2 __RPC_FAR * This,
            /* [out][in] */ IMAGELISTSTATS __RPC_FAR *pils);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Initialize )( 
            IImageList2 __RPC_FAR * This,
            /* [in] */ int cx,
            /* [in] */ int cy,
            /* [in] */ UINT flags,
            /* [in] */ int cInitial,
            /* [in] */ int cGrow);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Replace2 )( 
            IImageList2 __RPC_FAR * This,
            int i,
            /* [in] */ HBITMAP hbmImage,
            /* [in] */ HBITMAP hbmMask,
            /* [in] */ IUnknown __RPC_FAR *punk,
            DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ReplaceFromImageList )( 
            IImageList2 __RPC_FAR * This,
            int i,
            /* [in] */ IImageList __RPC_FAR *pil,
            int iSrc,
            /* [in] */ IUnknown __RPC_FAR *punk,
            DWORD dwFlags);
        
        END_INTERFACE
    } IImageList2Vtbl;

    interface IImageList2
    {
        CONST_VTBL struct IImageList2Vtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IImageList2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IImageList2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IImageList2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IImageList2_Add(This,hbmImage,hbmMask,pi)	\
    (This)->lpVtbl -> Add(This,hbmImage,hbmMask,pi)

#define IImageList2_ReplaceIcon(This,i,hicon,pi)	\
    (This)->lpVtbl -> ReplaceIcon(This,i,hicon,pi)

#define IImageList2_SetOverlayImage(This,iImage,iOverlay)	\
    (This)->lpVtbl -> SetOverlayImage(This,iImage,iOverlay)

#define IImageList2_Replace(This,i,hbmImage,hbmMask)	\
    (This)->lpVtbl -> Replace(This,i,hbmImage,hbmMask)

#define IImageList2_AddMasked(This,hbmImage,crMask,pi)	\
    (This)->lpVtbl -> AddMasked(This,hbmImage,crMask,pi)

#define IImageList2_Draw(This,pimldp)	\
    (This)->lpVtbl -> Draw(This,pimldp)

#define IImageList2_Remove(This,i)	\
    (This)->lpVtbl -> Remove(This,i)

#define IImageList2_GetIcon(This,i,flags,picon)	\
    (This)->lpVtbl -> GetIcon(This,i,flags,picon)

#define IImageList2_GetImageInfo(This,i,pImageInfo)	\
    (This)->lpVtbl -> GetImageInfo(This,i,pImageInfo)

#define IImageList2_Copy(This,iDst,punkSrc,iSrc,uFlags)	\
    (This)->lpVtbl -> Copy(This,iDst,punkSrc,iSrc,uFlags)

#define IImageList2_Merge(This,i1,punk2,i2,dx,dy,riid,ppv)	\
    (This)->lpVtbl -> Merge(This,i1,punk2,i2,dx,dy,riid,ppv)

#define IImageList2_Clone(This,riid,ppv)	\
    (This)->lpVtbl -> Clone(This,riid,ppv)

#define IImageList2_GetImageRect(This,i,prc)	\
    (This)->lpVtbl -> GetImageRect(This,i,prc)

#define IImageList2_GetIconSize(This,cx,cy)	\
    (This)->lpVtbl -> GetIconSize(This,cx,cy)

#define IImageList2_SetIconSize(This,cx,cy)	\
    (This)->lpVtbl -> SetIconSize(This,cx,cy)

#define IImageList2_GetImageCount(This,pi)	\
    (This)->lpVtbl -> GetImageCount(This,pi)

#define IImageList2_SetImageCount(This,uNewCount)	\
    (This)->lpVtbl -> SetImageCount(This,uNewCount)

#define IImageList2_SetBkColor(This,clrBk,pclr)	\
    (This)->lpVtbl -> SetBkColor(This,clrBk,pclr)

#define IImageList2_GetBkColor(This,pclr)	\
    (This)->lpVtbl -> GetBkColor(This,pclr)

#define IImageList2_BeginDrag(This,iTrack,dxHotspot,dyHotspot)	\
    (This)->lpVtbl -> BeginDrag(This,iTrack,dxHotspot,dyHotspot)

#define IImageList2_EndDrag(This)	\
    (This)->lpVtbl -> EndDrag(This)

#define IImageList2_DragEnter(This,hwndLock,x,y)	\
    (This)->lpVtbl -> DragEnter(This,hwndLock,x,y)

#define IImageList2_DragLeave(This,hwndLock)	\
    (This)->lpVtbl -> DragLeave(This,hwndLock)

#define IImageList2_DragMove(This,x,y)	\
    (This)->lpVtbl -> DragMove(This,x,y)

#define IImageList2_SetDragCursorImage(This,punk,iDrag,dxHotspot,dyHotspot)	\
    (This)->lpVtbl -> SetDragCursorImage(This,punk,iDrag,dxHotspot,dyHotspot)

#define IImageList2_DragShowNolock(This,fShow)	\
    (This)->lpVtbl -> DragShowNolock(This,fShow)

#define IImageList2_GetDragImage(This,ppt,pptHotspot,riid,ppv)	\
    (This)->lpVtbl -> GetDragImage(This,ppt,pptHotspot,riid,ppv)

#define IImageList2_GetItemFlags(This,i,dwFlags)	\
    (This)->lpVtbl -> GetItemFlags(This,i,dwFlags)

#define IImageList2_GetOverlayImage(This,iOverlay,piIndex)	\
    (This)->lpVtbl -> GetOverlayImage(This,iOverlay,piIndex)


#define IImageList2_Resize(This,cxNewIconSize,cyNewIconSize)	\
    (This)->lpVtbl -> Resize(This,cxNewIconSize,cyNewIconSize)

#define IImageList2_GetOriginalSize(This,iImage,dwFlags,pcx,pcy)	\
    (This)->lpVtbl -> GetOriginalSize(This,iImage,dwFlags,pcx,pcy)

#define IImageList2_SetOriginalSize(This,iImage,cx,cy)	\
    (This)->lpVtbl -> SetOriginalSize(This,iImage,cx,cy)

#define IImageList2_SetCallback(This,punk)	\
    (This)->lpVtbl -> SetCallback(This,punk)

#define IImageList2_GetCallback(This,riid,ppv)	\
    (This)->lpVtbl -> GetCallback(This,riid,ppv)

#define IImageList2_ForceImagePresent(This,iImage,dwFlags)	\
    (This)->lpVtbl -> ForceImagePresent(This,iImage,dwFlags)

#define IImageList2_DiscardImages(This,iFirstImage,iLastImage,dwFlags)	\
    (This)->lpVtbl -> DiscardImages(This,iFirstImage,iLastImage,dwFlags)

#define IImageList2_PreloadImages(This,pimldp)	\
    (This)->lpVtbl -> PreloadImages(This,pimldp)

#define IImageList2_GetStatistics(This,pils)	\
    (This)->lpVtbl -> GetStatistics(This,pils)

#define IImageList2_Initialize(This,cx,cy,flags,cInitial,cGrow)	\
    (This)->lpVtbl -> Initialize(This,cx,cy,flags,cInitial,cGrow)

#define IImageList2_Replace2(This,i,hbmImage,hbmMask,punk,dwFlags)	\
    (This)->lpVtbl -> Replace2(This,i,hbmImage,hbmMask,punk,dwFlags)

#define IImageList2_ReplaceFromImageList(This,i,pil,iSrc,punk,dwFlags)	\
    (This)->lpVtbl -> ReplaceFromImageList(This,i,pil,iSrc,punk,dwFlags)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IImageList2_Resize_Proxy( 
    IImageList2 __RPC_FAR * This,
    int cxNewIconSize,
    int cyNewIconSize);


void __RPC_STUB IImageList2_Resize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList2_GetOriginalSize_Proxy( 
    IImageList2 __RPC_FAR * This,
    /* [in] */ int iImage,
    /* [in] */ DWORD dwFlags,
    int __RPC_FAR *pcx,
    int __RPC_FAR *pcy);


void __RPC_STUB IImageList2_GetOriginalSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList2_SetOriginalSize_Proxy( 
    IImageList2 __RPC_FAR * This,
    /* [in] */ int iImage,
    /* [in] */ int cx,
    /* [in] */ int cy);


void __RPC_STUB IImageList2_SetOriginalSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList2_SetCallback_Proxy( 
    IImageList2 __RPC_FAR * This,
    IUnknown __RPC_FAR *punk);


void __RPC_STUB IImageList2_SetCallback_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList2_GetCallback_Proxy( 
    IImageList2 __RPC_FAR * This,
    /* [in] */ REFIID riid,
    /* [out] */ void __RPC_FAR *__RPC_FAR *ppv);


void __RPC_STUB IImageList2_GetCallback_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList2_ForceImagePresent_Proxy( 
    IImageList2 __RPC_FAR * This,
    /* [in] */ int iImage,
    DWORD dwFlags);


void __RPC_STUB IImageList2_ForceImagePresent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList2_DiscardImages_Proxy( 
    IImageList2 __RPC_FAR * This,
    /* [in] */ int iFirstImage,
    /* [in] */ int iLastImage,
    /* [in] */ DWORD dwFlags);


void __RPC_STUB IImageList2_DiscardImages_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList2_PreloadImages_Proxy( 
    IImageList2 __RPC_FAR * This,
    /* [in] */ IMAGELISTDRAWPARAMS __RPC_FAR *pimldp);


void __RPC_STUB IImageList2_PreloadImages_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList2_GetStatistics_Proxy( 
    IImageList2 __RPC_FAR * This,
    /* [out][in] */ IMAGELISTSTATS __RPC_FAR *pils);


void __RPC_STUB IImageList2_GetStatistics_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList2_Initialize_Proxy( 
    IImageList2 __RPC_FAR * This,
    /* [in] */ int cx,
    /* [in] */ int cy,
    /* [in] */ UINT flags,
    /* [in] */ int cInitial,
    /* [in] */ int cGrow);


void __RPC_STUB IImageList2_Initialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList2_Replace2_Proxy( 
    IImageList2 __RPC_FAR * This,
    int i,
    /* [in] */ HBITMAP hbmImage,
    /* [in] */ HBITMAP hbmMask,
    /* [in] */ IUnknown __RPC_FAR *punk,
    DWORD dwFlags);


void __RPC_STUB IImageList2_Replace2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IImageList2_ReplaceFromImageList_Proxy( 
    IImageList2 __RPC_FAR * This,
    int i,
    /* [in] */ IImageList __RPC_FAR *pil,
    int iSrc,
    /* [in] */ IUnknown __RPC_FAR *punk,
    DWORD dwFlags);


void __RPC_STUB IImageList2_ReplaceFromImageList_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IImageList2_INTERFACE_DEFINED__ */



#ifndef __CommonControlObjects_LIBRARY_DEFINED__
#define __CommonControlObjects_LIBRARY_DEFINED__

/* library CommonControlObjects */
/* [uuid] */ 


EXTERN_C const IID LIBID_CommonControlObjects;

EXTERN_C const CLSID CLSID_ImageList;

#ifdef __cplusplus

class DECLSPEC_UUID("7C476BA2-02B1-48f4-8048-B24619DDC058")
ImageList;
#endif
#endif /* __CommonControlObjects_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_CommonControls_0149 */
/* [local] */ 

#endif // if (_WIN32_IE >= 0x0501)


extern RPC_IF_HANDLE __MIDL_itf_CommonControls_0149_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_CommonControls_0149_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


