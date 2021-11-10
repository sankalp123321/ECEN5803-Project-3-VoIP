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
#include "wincodec.h"

#ifdef WINCODECSDK
#include "wincodecsdk.h"
#endif

#ifndef __WINCODEC_PROXY_H__
#define __WINCODEC_PROXY_H__
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

//
// WindowsCodecs.dll
//

HRESULT WINAPI WICCreateImagingFactory_Proxy(
    __in UINT SDKVersion,
    __deref_out_ecount(1) IWICImagingFactory **ppIWICImagingFactory
    );

HRESULT WINAPI IWICImagingFactory_CreateDecoderFromStream_Proxy(
    __in_ecount(1) IWICImagingFactory *pFactory,
    __in_ecount(1) IStream *pIStream,
    __in_ecount_opt(1) const GUID * pvendorGuid,
    __in WICDecodeOptions metadataOptions,
    __deref_out_ecount(1) IWICBitmapDecoder **ppIDecoder
    );

HRESULT WINAPI IWICImagingFactory_CreateDecoderFromFileHandle_Proxy(
    __in_ecount(1) IWICImagingFactory *pFactory,
    __in ULONG_PTR hFile,
    __in_ecount_opt(1) const GUID * pvendorGuid,
    __in WICDecodeOptions metadataOptions,
    __deref_out_ecount(1) IWICBitmapDecoder **ppIDecoder
    );

HRESULT WINAPI IWICImagingFactory_CreateDecoderFromFilename_Proxy(
    __in_ecount(1) IWICImagingFactory *pFactory,
    __in __nullterminated const WCHAR *pwzFilename,
    __in_ecount_opt(1) const GUID * pvendorGuid,
    __in DWORD dwDesiredAccess,
    __in WICDecodeOptions metadataOptions,
    __deref_out_ecount(1) IWICBitmapDecoder **ppIDecoder
    );

HRESULT WINAPI IWICImagingFactory_CreateComponentInfo_Proxy(
    __in IWICImagingFactory *pFactory,
    __in_ecount(1) REFGUID pclsidComponent,
    __deref_out_ecount(1) IWICComponentInfo **ppiComponentInfo
    );

HRESULT WINAPI IWICImagingFactory_CreatePalette_Proxy(
    __in IWICImagingFactory *pFactory,
    __deref_out_ecount(1) IWICPalette **ppiPalette
    );

HRESULT WINAPI IWICImagingFactory_CreateFormatConverter_Proxy(
    __in IWICImagingFactory *pFactory,
    __deref_out_ecount(1) IWICFormatConverter **ppiFormatConverter
    );

HRESULT WINAPI IWICImagingFactory_CreateBitmapScaler_Proxy(
    __in IWICImagingFactory *pFactory,
    __deref_out_ecount(1) IWICBitmapScaler **ppiBitmapScaler
    );

HRESULT WINAPI IWICImagingFactory_CreateBitmapClipper_Proxy(
    __in IWICImagingFactory *pFactory,
    __deref_out_ecount(1) IWICBitmapClipper **ppiBitmapClipper
    );

HRESULT WINAPI IWICImagingFactory_CreateBitmapFlipRotator_Proxy(
    __in IWICImagingFactory *pFactory,
    __deref_out_ecount(1) IWICBitmapFlipRotator **ppiBitmapFlipRotator
    );

HRESULT WINAPI IWICImagingFactory_CreateStream_Proxy(
    __in IWICImagingFactory *pFactory,
    __deref_out_ecount(1) IWICStream **ppIWICStream
    );

HRESULT WINAPI IWICImagingFactory_CreateEncoder_Proxy(
    __in_ecount(1) IWICImagingFactory *pFactory,
    __in REFGUID guidContainerFormat,
    __in_ecount(1) const GUID *pguidVendor,
    __deref_out_ecount(1) IWICBitmapEncoder **ppIEncoder
    );

HRESULT WINAPI IWICImagingFactory_CreateBitmapFromSource_Proxy(
    IWICImagingFactory* THIS_PTR,
    IWICBitmapSource *pIBitmapSource,
    WICBitmapCreateCacheOption options,
    __deref_out_ecount(1) IWICBitmap **ppIBitmap
    );

HRESULT WINAPI IWICImagingFactory_CreateBitmapFromMemory_Proxy(
    IWICImagingFactory* THIS_PTR,
    __in UINT width,
    __in UINT height,
    __in_ecount(1) REFWICPixelFormatGUID pixelFormat,
    __in UINT stride,
    __in UINT cbBufferSize,
    __in_bcount(cbBufferSize) BYTE *pvPixels,
    __deref_out_ecount(1) IWICBitmap **ppIBitmap
    );

HRESULT WINAPI IWICImagingFactory_CreateBitmap_Proxy(
    IWICImagingFactory* THIS_PTR,
    __in UINT width,
    __in UINT height,
    __in_ecount(1) REFWICPixelFormatGUID pixelFormat,
    __in WICBitmapCreateCacheOption options,
    __deref_out_ecount(1) IWICBitmap **ppIBitmap
    );

HRESULT WINAPI IWICImagingFactory_CreateBitmapFromHBITMAP_Proxy(
    IWICImagingFactory* THIS_PTR,
    __in HBITMAP hBitmap,
    __in HPALETTE hPalette,
    __in WICBitmapAlphaChannelOption options,
    __deref_out_ecount(1) IWICBitmap **ppIBitmap
    );

HRESULT WINAPI IWICImagingFactory_CreateBitmapFromHICON_Proxy(
    IWICImagingFactory* THIS_PTR,
    __in HICON hIcon,
    __deref_out_ecount(1) IWICBitmap **ppIBitmap
    );

HRESULT WINAPI IWICImagingFactory_CreateFastMetadataEncoderFromDecoder_Proxy(
    IWICImagingFactory* THIS_PTR,
    __in IWICBitmapDecoder *pIDecoder,
    __deref_out_ecount(1) IWICFastMetadataEncoder **ppIFME
    );

HRESULT WINAPI IWICImagingFactory_CreateFastMetadataEncoderFromFrameDecode_Proxy(
    IWICImagingFactory* THIS_PTR,
    __in IWICBitmapFrameDecode *pIFrameDecode,
    __deref_out_ecount(1) IWICFastMetadataEncoder **ppIFME
    );

HRESULT WINAPI IWICImagingFactory_CreateQueryWriter_Proxy(
    IWICImagingFactory* THIS_PTR,
    __in REFGUID guidMetadataFormat,
    __in_ecount_opt(1) const GUID *pguidVendor,
    __deref_out_ecount(1) IWICMetadataQueryWriter **ppIQueryWriter
    );

HRESULT WINAPI IWICImagingFactory_CreateQueryWriterFromReader_Proxy(
    IWICImagingFactory* THIS_PTR,
    __in_ecount(1) IWICMetadataQueryReader *pIQueryReader,
    __in_ecount_opt(1) const GUID *pguidVendor,
    __deref_out_ecount(1) IWICMetadataQueryWriter **ppIQueryWriter
    );

HRESULT WINAPI IWICBitmapDecoder_GetDecoderInfo_Proxy(
    IWICBitmapDecoder *THIS_PTR,
    __deref_out_ecount(1) IWICBitmapDecoderInfo **ppIDecodecInfo
    );

HRESULT WINAPI IWICBitmapDecoder_CopyPalette_Proxy(
    IWICBitmapDecoder *THIS_PTR,
    __inout IWICPalette *pIPalette
    );

HRESULT WINAPI IWICBitmapDecoder_GetPreview_Proxy(
    IWICBitmapDecoder *THIS_PTR,
    __deref_out_ecount(1) IWICBitmapSource **ppIPreview
    );

HRESULT WINAPI IWICBitmapDecoder_GetColorContexts_Proxy(
    IWICBitmapDecoder *THIS_PTR,
    __in UINT n,
    __deref_inout_ecount_part_opt(n, *pActualCount) IWICColorContext **ppIColorContext,
    __out_ecount(1) UINT *pActualCount
    );

HRESULT WINAPI IWICBitmapDecoder_GetThumbnail_Proxy(
    IWICBitmapDecoder *THIS_PTR,
    __deref_out_ecount(1) IWICBitmapSource **ppIThumbnail
    );

HRESULT WINAPI IWICBitmapDecoder_GetFrameCount_Proxy(
    IWICBitmapDecoder *THIS_PTR,
    __out_ecount(1) UINT *pCount
    );

HRESULT WINAPI IWICBitmapDecoder_GetMetadataQueryReader_Proxy(
    IWICBitmapDecoder *THIS_PTR,
    __deref_out_ecount(1) IWICMetadataQueryReader **ppIQueryReader
    );

HRESULT WINAPI IWICBitmapDecoder_GetFrame_Proxy(
    IWICBitmapDecoder *THIS_PTR,
    __in UINT index,
    __deref_out_ecount(1) IWICBitmapFrameDecode **ppIBitmapFrame
    );

HRESULT WINAPI IWICBitmapFrameDecode_GetColorContexts_Proxy(
    IWICBitmapFrameDecode* THIS_PTR,
    __in UINT n,
    __deref_inout_ecount_part_opt(n, *pActualCount) IWICColorContext **ppIColorContext,
    __out_ecount(1) UINT *pActualCount
    );

HRESULT WINAPI IWICBitmapFrameDecode_GetThumbnail_Proxy(
    IWICBitmapFrameDecode* THIS_PTR,
    __deref_out_ecount(1) IWICBitmapSource **ppIThumbnail
    );

HRESULT WINAPI IWICBitmapFrameDecode_GetMetadataQueryReader_Proxy(
    IWICBitmapFrameDecode* THIS_PTR,
    __deref_out_ecount(1) IWICMetadataQueryReader **ppIQueryReader
    );

HRESULT WINAPI IWICFastMetadataEncoder_Commit_Proxy(
    IWICFastMetadataEncoder *THIS_PTR
    );

HRESULT WINAPI IWICFastMetadataEncoder_GetMetadataQueryWriter_Proxy(
    IWICFastMetadataEncoder *THIS_PTR,
    __deref_out_ecount(1) IWICMetadataQueryWriter **ppIQueryWriter
    );

HRESULT WINAPI IWICPalette_InitializePredefined_Proxy(
    IWICPalette* THIS_PTR,
    WICBitmapPaletteType ePaletteType,
    BOOL fAddTransparentColor
    );

HRESULT WINAPI IWICPalette_InitializeCustom_Proxy(
    IWICPalette* THIS_PTR,
    WICColor *pColors,
    UINT colorCount
    );

HRESULT WINAPI IWICPalette_InitializeFromBitmap_Proxy(
    IWICPalette* THIS_PTR,
    IWICBitmapSource *pISurface,
    UINT colorCount,
    BOOL fAddTransparentColor
    );

HRESULT WINAPI IWICPalette_InitializeFromPalette_Proxy(
    IWICPalette* THIS_PTR,
    IWICPalette *pIWICPalette
    );

HRESULT WINAPI IWICPalette_GetType_Proxy(
    IWICPalette* THIS_PTR,
    WICBitmapPaletteType *pePaletteType
    );

HRESULT WINAPI IWICPalette_GetColorCount_Proxy(
    IWICPalette* THIS_PTR,
    UINT *pColorCount
    );

HRESULT WINAPI IWICPalette_GetColors_Proxy(
    IWICPalette* THIS_PTR,
    UINT colorCount,
    WICColor *pColors,
    UINT *pcActualColors
    );

HRESULT WINAPI IWICPalette_HasAlpha_Proxy(
    IWICPalette* THIS_PTR,
    BOOL *pfHasAlpha
    );

HRESULT WINAPI IWICBitmapFrameEncode_Initialize_Proxy(
    __in_ecount(1) IWICBitmapFrameEncode* THIS_PTR,
    __in_ecount_opt(1) IPropertyBag2 *pIEncoderOptions
    );

HRESULT WINAPI IWICBitmapFrameEncode_Commit_Proxy(
    __in_ecount(1) IWICBitmapFrameEncode* THIS_PTR
    );

HRESULT WINAPI IWICBitmapFrameEncode_SetSize_Proxy(
    __in_ecount(1) IWICBitmapFrameEncode* THIS_PTR,
    __in UINT width,
    __in UINT height
    );

HRESULT WINAPI IWICBitmapFrameEncode_SetResolution_Proxy(
    __in_ecount(1) IWICBitmapFrameEncode* THIS_PTR,
    __in double dpiX,
    __in double dpiY
    );

HRESULT WINAPI IWICBitmapFrameEncode_GetMetadataQueryWriter_Proxy(
    __in_ecount(1) IWICBitmapFrameEncode *THIS_PTR,
    __deref_out_ecount(1) IWICMetadataQueryWriter **ppIQueryWriter
    );

HRESULT WINAPI IWICBitmapFrameEncode_WriteSource_Proxy(
    __in_ecount(1) IWICBitmapFrameEncode* THIS_PTR,
    __in_ecount(1) IWICBitmapSource *pIBitmapSource,
    __in_ecount_opt(1) WICRect *prc
    );

HRESULT WINAPI IWICBitmapFrameEncode_SetThumbnail_Proxy(
    __in_ecount(1) IWICBitmapFrameEncode* THIS_PTR,
    __in_ecount(1) IWICBitmapSource *pIThumbnail
    );

HRESULT WINAPI IWICBitmapFrameEncode_SetColorContexts_Proxy(
    __in_ecount(1) IWICBitmapFrameEncode* THIS_PTR,
    __in UINT n,
    __deref_in_ecount(n) IWICColorContext **ppIColorContext
    );

HRESULT WINAPI IWICBitmapEncoder_Initialize_Proxy(
    __in_ecount(1) IWICBitmapEncoder* THIS_PTR,
    __in_ecount(1) IStream *pIStream,
    __in WICBitmapEncoderCacheOption cacheOption
    );

HRESULT WINAPI IWICBitmapEncoder_GetEncoderInfo_Proxy(
    __in_ecount(1) IWICBitmapEncoder* THIS_PTR,
    __deref_out_ecount(1) IWICBitmapEncoderInfo **ppIEncoderInfo
    );

HRESULT WINAPI IWICBitmapEncoder_CreateNewFrame_Proxy(
    __in_ecount(1) IWICBitmapEncoder* THIS_PTR,
    __deref_out_ecount(1) IWICBitmapFrameEncode **ppIFrameEncode,
    __deref_out_ecount_opt(1) IPropertyBag2 **ppIEncoderOptions
    );

HRESULT WINAPI IWICBitmapEncoder_SetThumbnail_Proxy(
    __in_ecount(1) IWICBitmapEncoder* THIS_PTR,
    __in_ecount(1) IWICBitmapSource *pIThumbnail
    );

HRESULT WINAPI IWICBitmapEncoder_SetPalette_Proxy(
    __in_ecount(1) IWICBitmapEncoder* THIS_PTR,
    __in_ecount(1) IWICPalette *pIPalette
    );

HRESULT WINAPI IWICBitmapEncoder_GetMetadataQueryWriter_Proxy(
    __in_ecount(1) IWICBitmapEncoder *THIS_PTR,
    __deref_out_ecount(1) IWICMetadataQueryWriter **ppIQueryWriter
    );

HRESULT WINAPI IWICBitmapEncoder_Commit_Proxy(
    __in_ecount(1) IWICBitmapEncoder* THIS_PTR
    );

HRESULT WINAPI IWICBitmapSource_GetSize_Proxy(
    IWICBitmapSource* THIS_PTR,
    __out_ecount(1) UINT *puiWidth,
    __out_ecount(1) UINT *puiHeight
    );

HRESULT WINAPI IWICBitmapSource_GetPixelFormat_Proxy(
    IWICBitmapSource* THIS_PTR,
    __out_ecount(1) WICPixelFormatGUID *pPixelFormat
    );

HRESULT WINAPI IWICBitmapSource_GetResolution_Proxy(
    IWICBitmapSource* THIS_PTR,
    __out_ecount(1) double *pDpiX,
    __out_ecount(1) double *pDpiY
    );

HRESULT WINAPI IWICBitmapSource_CopyPalette_Proxy(
    IWICBitmapSource* THIS_PTR,
    __in IWICPalette *pIPalette
    );

HRESULT WINAPI IWICBitmapSource_CopyPixels_Proxy(
    __in_ecount(1) IWICBitmapSource* THIS_PTR,
    __in_ecount_opt(1) const WICRect *prc,
    __in UINT cbStride,
    __in UINT cbBufferSize,
    __out_ecount(cbBufferSize) BYTE *pbBuffer
    );

HRESULT WINAPI IWICBitmapLock_GetStride_Proxy(
    IWICBitmapLock* THIS_PTR,
    __out_ecount(1) UINT *pcbStride
    );

HRESULT WINAPI IWICBitmapLock_GetDataPointer_Proxy(
    IWICBitmapLock* THIS_PTR,
    __out_ecount(1) UINT *pcbBufferSize,
    __deref_out_bcount(*pcbBufferSize) BYTE **ppbData
    );

HRESULT WINAPI IWICBitmap_Lock_Proxy(
    IWICBitmap* THIS_PTR,
    __in_ecount(1) const WICRect *prcLock,
    __in DWORD flags,
    __deref_out_ecount(1) IWICBitmapLock **ppILock
    );

HRESULT WINAPI IWICBitmap_SetPalette_Proxy(
    IWICBitmap* THIS_PTR,
    __in IWICPalette *pIPalette
    );

HRESULT WINAPI IWICBitmap_SetResolution_Proxy(
    IWICBitmap* THIS_PTR,
    __in double dpiX,
    __in double dpiY
    );

HRESULT WINAPI IWICFormatConverter_Initialize_Proxy(
    __in_ecount(1) IWICFormatConverter* THIS_PTR,
    __in_ecount(1) IWICBitmapSource *pISource,
    __in_ecount(1) REFWICPixelFormatGUID dstFormat,
    WICBitmapDitherType dither,
    IWICPalette *pIPalette,
    double alphaThresholdPercent,
    WICBitmapPaletteType paletteTranslate
    );

HRESULT WINAPI IWICBitmapScaler_Initialize_Proxy(
    IWICBitmapScaler* THIS_PTR,
    __in IWICBitmapSource *pISource,
    __in UINT width,
    __in UINT height,
    __in WICBitmapInterpolationMode mode
    );

HRESULT WINAPI IWICBitmapClipper_Initialize_Proxy(
    IWICBitmapClipper* THIS_PTR,
    __in IWICBitmapSource *pISource,
    __in const WICRect *prect
    );

HRESULT WINAPI IWICBitmapFlipRotator_Initialize_Proxy(
    IWICBitmapFlipRotator* THIS_PTR,
    __in IWICBitmapSource *pISource,
    __in WICBitmapTransformOptions options
    );

HRESULT WINAPI IWICStream_InitializeFromIStream_Proxy(
    __in_ecount(1) IWICStream * THIS_PTR,
    __in_ecount(1) IStream *pIStream
    );

HRESULT WINAPI IWICStream_InitializeFromMemory_Proxy(
    __in_ecount(1) IWICStream * THIS_PTR,
    __in_bcount(cbSize) BYTE *pbBuffer,
    __in DWORD cbSize
    );

HRESULT WINAPI WICSetEncoderFormat_Proxy(
    __in IWICBitmapSource  *pSourceIn,
    __in IWICPalette *pIPalette,
    __in IWICBitmapFrameEncode *pIFrameEncode,
    __deref_out_ecount(1) IWICBitmapSource **ppSourceOut
    );

HRESULT WINAPI IWICMetadataQueryReader_GetContainerFormat_Proxy(
    __in_ecount(1) IWICMetadataQueryReader* THIS_PTR,
    __out_ecount(1) GUID *pguidContainerFormat
    );

HRESULT WINAPI IWICMetadataQueryReader_GetLocation_Proxy(
    __in_ecount(1) IWICMetadataQueryReader* THIS_PTR,
    __in UINT cchMaxLength,
    __inout_ecount_part_opt(cchMaxLength, *pcchActualLength) WCHAR *pwzNamespace,
    __out_ecount(1) UINT *pcchActualLength
    );

HRESULT WINAPI IWICMetadataQueryReader_GetMetadataByName_Proxy(
    __in_ecount(1) IWICMetadataQueryReader* THIS_PTR,
    __in_ecount(1) LPCWSTR pwzName,
    __inout_ecount_opt(1) PROPVARIANT *pvarValue
    );

HRESULT WINAPI IWICMetadataQueryReader_GetEnumerator_Proxy(
    __in_ecount(1) IWICMetadataQueryReader* THIS_PTR,
    __deref_in_ecount(1) IEnumString **ppIEnum
    );

HRESULT WINAPI IWICMetadataQueryWriter_SetMetadataByName_Proxy(
    __in_ecount(1) IWICMetadataQueryWriter* THIS_PTR,
    __in_ecount(1) LPCWSTR pwzName,
    __in_ecount(1) const PROPVARIANT *pvarValue
    );

HRESULT WINAPI IWICMetadataQueryWriter_RemoveMetadataByName_Proxy(
    __in_ecount(1) IWICMetadataQueryWriter* THIS_PTR,
    __in_ecount(1) LPCWSTR pwzName
    );

HRESULT WINAPI IEnumString_Next_WIC_Proxy(
   __in_ecount(1) IEnumString* THIS_PTR,
    __in ULONG celt,
    __out_ecount_part(celt, *pceltFetched) LPOLESTR  *rgelt,
    __out_ecount(1) ULONG *pceltFetched
   );

HRESULT WINAPI IEnumString_Reset_WIC_Proxy(
   __in_ecount(1) IEnumString* THIS_PTR
   );

HRESULT WINAPI IPropertyBag2_Write_Proxy(
   __in_ecount(1) IPropertyBag2* THIS_PTR,
    __in ULONG cProperties,
    __in_ecount(cProperties) PROPBAG2 *ppropBag,
    __in_ecount(cProperties) VARIANT *pvarValue
   );


HRESULT WINAPI IWICComponentInfo_GetCLSID_Proxy(
    __in_ecount(1) IWICComponentInfo * THIS_PTR,
    __out_ecount(1) CLSID *pclsid
    );

HRESULT WINAPI IWICComponentInfo_GetAuthor_Proxy(
    __in_ecount(1) IWICComponentInfo * THIS_PTR,
    __in UINT cchAuthor,
    __inout_ecount_part_opt(cchAuthor, *pcchActual) WCHAR *wzAuthor,
    __out_ecount(1) UINT *pcchActual
    );

HRESULT WINAPI IWICComponentInfo_GetVersion_Proxy(
    __in_ecount(1) IWICComponentInfo * THIS_PTR,
    __in UINT cchVersion,
    __inout_ecount_part_opt(cchVersion, *pcchActual) WCHAR *wzVersion,
    __out_ecount(1) UINT *pcchActual
    );

HRESULT WINAPI IWICComponentInfo_GetSpecVersion_Proxy(
    __in_ecount(1) IWICComponentInfo * THIS_PTR,
    __in UINT cchSpecVersion,
    __inout_ecount_part_opt(cchSpecVersion, *pcchActual) WCHAR *wzSpecVersion,
    __out_ecount(1) UINT *pcchActual
    );

HRESULT WINAPI IWICComponentInfo_GetFriendlyName_Proxy(
    __in_ecount(1) IWICComponentInfo * THIS_PTR,
    __in UINT cchFriendlyName,
    __inout_ecount_part_opt(cchFriendlyName, *pcchActual) WCHAR *wzFriendlyName,
    __out_ecount(1) UINT *pcchActual
    );

HRESULT WINAPI IWICBitmapCodecInfo_GetContainerFormat_Proxy(
    __in_ecount(1) IWICBitmapCodecInfo * THIS_PTR,
    __out_ecount(1) GUID *pguidContainerFormat
    );

HRESULT WINAPI IWICBitmapCodecInfo_GetDeviceManufacturer_Proxy(
    __in_ecount(1) IWICBitmapCodecInfo * THIS_PTR,
    __in UINT cchDeviceManufacturer,
    __inout_ecount_part_opt(cchDeviceManufacturer, *pcchActual) WCHAR *wzDeviceManufacturer,
    __out_ecount(1) UINT *pcchActual
    );

HRESULT WINAPI IWICBitmapCodecInfo_GetDeviceModels_Proxy(
    __in_ecount(1) IWICBitmapCodecInfo * THIS_PTR,
    __in UINT cchDeviceModels,
    __inout_ecount_part_opt(cchDeviceModels, *pcchActual) WCHAR *wzDeviceModels,
    __out_ecount(1) UINT *pcchActual
    );

HRESULT WINAPI IWICBitmapCodecInfo_GetMimeTypes_Proxy(
    __in_ecount(1) IWICBitmapCodecInfo * THIS_PTR,
    __in UINT cchMimeTypes,
    __inout_ecount_part_opt(cchMimeTypes, *pcchActual) WCHAR *wzMimeTypes,
    __out_ecount(1) UINT *pcchActual
    );

HRESULT WINAPI IWICBitmapCodecInfo_GetFileExtensions_Proxy(
    __in_ecount(1) IWICBitmapCodecInfo * THIS_PTR,
    __in UINT cchFileExtensions,
    __inout_ecount_part_opt(cchFileExtensions, *pcchActual) WCHAR *wzFileExtensions,
    __out_ecount(1) UINT *pcchActual
    );

HRESULT WINAPI IWICBitmapCodecInfo_DoesSupportAnimation_Proxy(
    __in_ecount(1) IWICBitmapCodecInfo * THIS_PTR,
    __out_ecount(1) BOOL *pfSupportAnimation
    );

HRESULT WINAPI IWICBitmapCodecInfo_DoesSupportLossless_Proxy(
    __in_ecount(1) IWICBitmapCodecInfo * THIS_PTR,
    __out_ecount(1) BOOL *pfSupportLossless
    );

HRESULT WINAPI IWICBitmapCodecInfo_DoesSupportMultiframe_Proxy(
    __in_ecount(1) IWICBitmapCodecInfo * THIS_PTR,
    __out_ecount(1) BOOL *pfSupportMultiframe
    );

HRESULT WINAPI IWICPixelFormatInfo_GetBitsPerPixel_Proxy(
    __in_ecount(1) IWICPixelFormatInfo * THIS_PTR,
    __out_ecount(1) UINT *puiBitsPerPixel
    );

HRESULT WINAPI IWICPixelFormatInfo_GetChannelCount_Proxy(
    __in_ecount(1) IWICPixelFormatInfo * THIS_PTR,
    __out_ecount(1) UINT *puiChannelCount
    );

HRESULT WINAPI IWICPixelFormatInfo_GetChannelMask_Proxy(
    __in_ecount(1) IWICPixelFormatInfo * THIS_PTR,
    __in UINT uiChannelIndex,
    __in UINT cbMaskBuffer,
    __inout_bcount_part_opt(cbMaskBuffer, *pcbActual) BYTE *pbMaskBuffer,
    __out_ecount(1) UINT *pcbActual
    );

HRESULT WINAPI WICCreateColorContext_Proxy(
    __in_ecount(1) IWICImagingFactory *THIS_PTR,
    __deref_out_ecount(1) IWICColorContext **ppIColorContext
    );

HRESULT WINAPI IWICColorContext_InitializeFromMemory_Proxy(
    IWICColorContext *THIS_PTR,
    __in_bcount(cbBufferSize) BYTE *pbBuffer,
    __in UINT cbBufferSize
    );

#ifdef WINCODECSDK
HRESULT WINAPI IWICComponentFactory_CreateMetadataWriterFromReader_Proxy(
    IWICComponentFactory* THIS_PTR,
    __in_ecount(1) IWICMetadataReader *pIReader,
    __in_ecount_opt(1) const GUID *pguidVendor,
    __deref_out_ecount(1) IWICMetadataWriter **ppIWriter
    );

HRESULT WINAPI IWICComponentFactory_CreateQueryWriterFromBlockWriter_Proxy(
    IWICComponentFactory* THIS_PTR,
    __in_ecount(1) IWICMetadataBlockWriter *pIBlockWriter,
    __deref_out_ecount(1) IWICMetadataQueryWriter **ppIQueryWriter
    );

HRESULT WINAPI IWICMetadataBlockReader_GetCount_Proxy(
    IWICMetadataBlockReader *THIS_PTR,
    __out_ecount(1) UINT *pcCount
    );

HRESULT WINAPI IWICMetadataBlockReader_GetReaderByIndex_Proxy(
    IWICMetadataBlockReader *THIS_PTR,
    __in UINT nIndex,
    __deref_out_ecount(1) IWICMetadataReader **ppIMetadataReader
    );
#endif

//
// WindowsCodecsExt.dll
//

HRESULT WINAPI WICCreateColorTransform_Proxy(
    IWICColorTransform **ppIWICColorTransform
    );

HRESULT WINAPI IWICColorTransform_Initialize_Proxy(
    IWICColorTransform* THIS_PTR,
    __in IWICBitmapSource *pISource,
    __in IWICColorContext *pIContextSource,
    __in IWICColorContext *pIContextDest,
    __in REFWICPixelFormatGUID pixelFmtDest
    );

#ifdef __cplusplus
}
#endif

#endif
