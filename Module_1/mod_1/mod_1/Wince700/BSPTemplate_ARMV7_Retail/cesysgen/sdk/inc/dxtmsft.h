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
/* at Mon Jan 22 12:13:22 2007
 */
/* Compiler settings for ..\dxtmsft.idl:
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

#ifndef __dxtmsft_h__
#define __dxtmsft_h__

/* Forward Declarations */ 

#ifndef __IDXLUTBuilder_FWD_DEFINED__
#define __IDXLUTBuilder_FWD_DEFINED__
typedef interface IDXLUTBuilder IDXLUTBuilder;
#endif 	/* __IDXLUTBuilder_FWD_DEFINED__ */


#ifndef __IDXDLUTBuilder_FWD_DEFINED__
#define __IDXDLUTBuilder_FWD_DEFINED__
typedef interface IDXDLUTBuilder IDXDLUTBuilder;
#endif 	/* __IDXDLUTBuilder_FWD_DEFINED__ */


#ifndef __IDXTGradientD_FWD_DEFINED__
#define __IDXTGradientD_FWD_DEFINED__
typedef interface IDXTGradientD IDXTGradientD;
#endif 	/* __IDXTGradientD_FWD_DEFINED__ */


#ifndef __IDXTConvolution_FWD_DEFINED__
#define __IDXTConvolution_FWD_DEFINED__
typedef interface IDXTConvolution IDXTConvolution;
#endif 	/* __IDXTConvolution_FWD_DEFINED__ */


#ifndef __IDXTComposite_FWD_DEFINED__
#define __IDXTComposite_FWD_DEFINED__
typedef interface IDXTComposite IDXTComposite;
#endif 	/* __IDXTComposite_FWD_DEFINED__ */


#ifndef __IDXTWipe_FWD_DEFINED__
#define __IDXTWipe_FWD_DEFINED__
typedef interface IDXTWipe IDXTWipe;
#endif 	/* __IDXTWipe_FWD_DEFINED__ */


#ifndef __IDXTWipe2_FWD_DEFINED__
#define __IDXTWipe2_FWD_DEFINED__
typedef interface IDXTWipe2 IDXTWipe2;
#endif 	/* __IDXTWipe2_FWD_DEFINED__ */


#ifndef __ICrBlur_FWD_DEFINED__
#define __ICrBlur_FWD_DEFINED__
typedef interface ICrBlur ICrBlur;
#endif 	/* __ICrBlur_FWD_DEFINED__ */


#ifndef __ICrEngrave_FWD_DEFINED__
#define __ICrEngrave_FWD_DEFINED__
typedef interface ICrEngrave ICrEngrave;
#endif 	/* __ICrEngrave_FWD_DEFINED__ */


#ifndef __ICrEmboss_FWD_DEFINED__
#define __ICrEmboss_FWD_DEFINED__
typedef interface ICrEmboss ICrEmboss;
#endif 	/* __ICrEmboss_FWD_DEFINED__ */


#ifndef __IDXTFade_FWD_DEFINED__
#define __IDXTFade_FWD_DEFINED__
typedef interface IDXTFade IDXTFade;
#endif 	/* __IDXTFade_FWD_DEFINED__ */


#ifndef __IDXBasicImage_FWD_DEFINED__
#define __IDXBasicImage_FWD_DEFINED__
typedef interface IDXBasicImage IDXBasicImage;
#endif 	/* __IDXBasicImage_FWD_DEFINED__ */


#ifndef __IDXPixelate_FWD_DEFINED__
#define __IDXPixelate_FWD_DEFINED__
typedef interface IDXPixelate IDXPixelate;
#endif 	/* __IDXPixelate_FWD_DEFINED__ */


#ifndef __ICrIris_FWD_DEFINED__
#define __ICrIris_FWD_DEFINED__
typedef interface ICrIris ICrIris;
#endif 	/* __ICrIris_FWD_DEFINED__ */


#ifndef __ICrIris2_FWD_DEFINED__
#define __ICrIris2_FWD_DEFINED__
typedef interface ICrIris2 ICrIris2;
#endif 	/* __ICrIris2_FWD_DEFINED__ */


#ifndef __ICrSlide_FWD_DEFINED__
#define __ICrSlide_FWD_DEFINED__
typedef interface ICrSlide ICrSlide;
#endif 	/* __ICrSlide_FWD_DEFINED__ */


#ifndef __ICrRadialWipe_FWD_DEFINED__
#define __ICrRadialWipe_FWD_DEFINED__
typedef interface ICrRadialWipe ICrRadialWipe;
#endif 	/* __ICrRadialWipe_FWD_DEFINED__ */


#ifndef __ICrBarn_FWD_DEFINED__
#define __ICrBarn_FWD_DEFINED__
typedef interface ICrBarn ICrBarn;
#endif 	/* __ICrBarn_FWD_DEFINED__ */


#ifndef __ICrBarn2_FWD_DEFINED__
#define __ICrBarn2_FWD_DEFINED__
typedef interface ICrBarn2 ICrBarn2;
#endif 	/* __ICrBarn2_FWD_DEFINED__ */


#ifndef __ICrBlinds_FWD_DEFINED__
#define __ICrBlinds_FWD_DEFINED__
typedef interface ICrBlinds ICrBlinds;
#endif 	/* __ICrBlinds_FWD_DEFINED__ */


#ifndef __ICrBlinds2_FWD_DEFINED__
#define __ICrBlinds2_FWD_DEFINED__
typedef interface ICrBlinds2 ICrBlinds2;
#endif 	/* __ICrBlinds2_FWD_DEFINED__ */


#ifndef __ICrInset_FWD_DEFINED__
#define __ICrInset_FWD_DEFINED__
typedef interface ICrInset ICrInset;
#endif 	/* __ICrInset_FWD_DEFINED__ */


#ifndef __ICrStretch_FWD_DEFINED__
#define __ICrStretch_FWD_DEFINED__
typedef interface ICrStretch ICrStretch;
#endif 	/* __ICrStretch_FWD_DEFINED__ */


#ifndef __IDXTGridSize_FWD_DEFINED__
#define __IDXTGridSize_FWD_DEFINED__
typedef interface IDXTGridSize IDXTGridSize;
#endif 	/* __IDXTGridSize_FWD_DEFINED__ */


#ifndef __ICrSpiral_FWD_DEFINED__
#define __ICrSpiral_FWD_DEFINED__
typedef interface ICrSpiral ICrSpiral;
#endif 	/* __ICrSpiral_FWD_DEFINED__ */


#ifndef __ICrZigzag_FWD_DEFINED__
#define __ICrZigzag_FWD_DEFINED__
typedef interface ICrZigzag ICrZigzag;
#endif 	/* __ICrZigzag_FWD_DEFINED__ */


#ifndef __ICrWheel_FWD_DEFINED__
#define __ICrWheel_FWD_DEFINED__
typedef interface ICrWheel ICrWheel;
#endif 	/* __ICrWheel_FWD_DEFINED__ */


#ifndef __IDXTChroma_FWD_DEFINED__
#define __IDXTChroma_FWD_DEFINED__
typedef interface IDXTChroma IDXTChroma;
#endif 	/* __IDXTChroma_FWD_DEFINED__ */


#ifndef __IDXTDropShadow_FWD_DEFINED__
#define __IDXTDropShadow_FWD_DEFINED__
typedef interface IDXTDropShadow IDXTDropShadow;
#endif 	/* __IDXTDropShadow_FWD_DEFINED__ */


#ifndef __IDXTCheckerBoard_FWD_DEFINED__
#define __IDXTCheckerBoard_FWD_DEFINED__
typedef interface IDXTCheckerBoard IDXTCheckerBoard;
#endif 	/* __IDXTCheckerBoard_FWD_DEFINED__ */


#ifndef __IDXTRevealTrans_FWD_DEFINED__
#define __IDXTRevealTrans_FWD_DEFINED__
typedef interface IDXTRevealTrans IDXTRevealTrans;
#endif 	/* __IDXTRevealTrans_FWD_DEFINED__ */


#ifndef __IDXTMask_FWD_DEFINED__
#define __IDXTMask_FWD_DEFINED__
typedef interface IDXTMask IDXTMask;
#endif 	/* __IDXTMask_FWD_DEFINED__ */


#ifndef __IDXTAlphaImageLoader_FWD_DEFINED__
#define __IDXTAlphaImageLoader_FWD_DEFINED__
typedef interface IDXTAlphaImageLoader IDXTAlphaImageLoader;
#endif 	/* __IDXTAlphaImageLoader_FWD_DEFINED__ */


#ifndef __IDXTRandomBars_FWD_DEFINED__
#define __IDXTRandomBars_FWD_DEFINED__
typedef interface IDXTRandomBars IDXTRandomBars;
#endif 	/* __IDXTRandomBars_FWD_DEFINED__ */


#ifndef __IDXTStrips_FWD_DEFINED__
#define __IDXTStrips_FWD_DEFINED__
typedef interface IDXTStrips IDXTStrips;
#endif 	/* __IDXTStrips_FWD_DEFINED__ */


#ifndef __IDXTAlpha_FWD_DEFINED__
#define __IDXTAlpha_FWD_DEFINED__
typedef interface IDXTAlpha IDXTAlpha;
#endif 	/* __IDXTAlpha_FWD_DEFINED__ */


#ifndef __IDXTGlow_FWD_DEFINED__
#define __IDXTGlow_FWD_DEFINED__
typedef interface IDXTGlow IDXTGlow;
#endif 	/* __IDXTGlow_FWD_DEFINED__ */


#ifndef __IDXTShadow_FWD_DEFINED__
#define __IDXTShadow_FWD_DEFINED__
typedef interface IDXTShadow IDXTShadow;
#endif 	/* __IDXTShadow_FWD_DEFINED__ */


#ifndef __IDXTWave_FWD_DEFINED__
#define __IDXTWave_FWD_DEFINED__
typedef interface IDXTWave IDXTWave;
#endif 	/* __IDXTWave_FWD_DEFINED__ */


#ifndef __IDXTLight_FWD_DEFINED__
#define __IDXTLight_FWD_DEFINED__
typedef interface IDXTLight IDXTLight;
#endif 	/* __IDXTLight_FWD_DEFINED__ */


#ifndef __IDXTMotionBlur_FWD_DEFINED__
#define __IDXTMotionBlur_FWD_DEFINED__
typedef interface IDXTMotionBlur IDXTMotionBlur;
#endif 	/* __IDXTMotionBlur_FWD_DEFINED__ */


#ifndef __IDXTMatrix_FWD_DEFINED__
#define __IDXTMatrix_FWD_DEFINED__
typedef interface IDXTMatrix IDXTMatrix;
#endif 	/* __IDXTMatrix_FWD_DEFINED__ */


#ifndef __IDXTICMFilter_FWD_DEFINED__
#define __IDXTICMFilter_FWD_DEFINED__
typedef interface IDXTICMFilter IDXTICMFilter;
#endif 	/* __IDXTICMFilter_FWD_DEFINED__ */


#ifndef __DXTComposite_FWD_DEFINED__
#define __DXTComposite_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTComposite DXTComposite;
#else
typedef struct DXTComposite DXTComposite;
#endif /* __cplusplus */

#endif 	/* __DXTComposite_FWD_DEFINED__ */


#ifndef __DXLUTBuilder_FWD_DEFINED__
#define __DXLUTBuilder_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXLUTBuilder DXLUTBuilder;
#else
typedef struct DXLUTBuilder DXLUTBuilder;
#endif /* __cplusplus */

#endif 	/* __DXLUTBuilder_FWD_DEFINED__ */


#ifndef __DXTGradientD_FWD_DEFINED__
#define __DXTGradientD_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTGradientD DXTGradientD;
#else
typedef struct DXTGradientD DXTGradientD;
#endif /* __cplusplus */

#endif 	/* __DXTGradientD_FWD_DEFINED__ */


#ifndef __DXTWipe_FWD_DEFINED__
#define __DXTWipe_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTWipe DXTWipe;
#else
typedef struct DXTWipe DXTWipe;
#endif /* __cplusplus */

#endif 	/* __DXTWipe_FWD_DEFINED__ */


#ifndef __DXTGradientWipe_FWD_DEFINED__
#define __DXTGradientWipe_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTGradientWipe DXTGradientWipe;
#else
typedef struct DXTGradientWipe DXTGradientWipe;
#endif /* __cplusplus */

#endif 	/* __DXTGradientWipe_FWD_DEFINED__ */


#ifndef __DXTConvolution_FWD_DEFINED__
#define __DXTConvolution_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTConvolution DXTConvolution;
#else
typedef struct DXTConvolution DXTConvolution;
#endif /* __cplusplus */

#endif 	/* __DXTConvolution_FWD_DEFINED__ */


#ifndef __CrBlur_FWD_DEFINED__
#define __CrBlur_FWD_DEFINED__

#ifdef __cplusplus
typedef class CrBlur CrBlur;
#else
typedef struct CrBlur CrBlur;
#endif /* __cplusplus */

#endif 	/* __CrBlur_FWD_DEFINED__ */


#ifndef __CrEmboss_FWD_DEFINED__
#define __CrEmboss_FWD_DEFINED__

#ifdef __cplusplus
typedef class CrEmboss CrEmboss;
#else
typedef struct CrEmboss CrEmboss;
#endif /* __cplusplus */

#endif 	/* __CrEmboss_FWD_DEFINED__ */


#ifndef __CrEngrave_FWD_DEFINED__
#define __CrEngrave_FWD_DEFINED__

#ifdef __cplusplus
typedef class CrEngrave CrEngrave;
#else
typedef struct CrEngrave CrEngrave;
#endif /* __cplusplus */

#endif 	/* __CrEngrave_FWD_DEFINED__ */


#ifndef __DXFade_FWD_DEFINED__
#define __DXFade_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXFade DXFade;
#else
typedef struct DXFade DXFade;
#endif /* __cplusplus */

#endif 	/* __DXFade_FWD_DEFINED__ */


#ifndef __BasicImageEffects_FWD_DEFINED__
#define __BasicImageEffects_FWD_DEFINED__

#ifdef __cplusplus
typedef class BasicImageEffects BasicImageEffects;
#else
typedef struct BasicImageEffects BasicImageEffects;
#endif /* __cplusplus */

#endif 	/* __BasicImageEffects_FWD_DEFINED__ */


#ifndef __Pixelate_FWD_DEFINED__
#define __Pixelate_FWD_DEFINED__

#ifdef __cplusplus
typedef class Pixelate Pixelate;
#else
typedef struct Pixelate Pixelate;
#endif /* __cplusplus */

#endif 	/* __Pixelate_FWD_DEFINED__ */


#ifndef __CrIris_FWD_DEFINED__
#define __CrIris_FWD_DEFINED__

#ifdef __cplusplus
typedef class CrIris CrIris;
#else
typedef struct CrIris CrIris;
#endif /* __cplusplus */

#endif 	/* __CrIris_FWD_DEFINED__ */


#ifndef __DXTIris_FWD_DEFINED__
#define __DXTIris_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTIris DXTIris;
#else
typedef struct DXTIris DXTIris;
#endif /* __cplusplus */

#endif 	/* __DXTIris_FWD_DEFINED__ */


#ifndef __CrSlide_FWD_DEFINED__
#define __CrSlide_FWD_DEFINED__

#ifdef __cplusplus
typedef class CrSlide CrSlide;
#else
typedef struct CrSlide CrSlide;
#endif /* __cplusplus */

#endif 	/* __CrSlide_FWD_DEFINED__ */


#ifndef __DXTSlide_FWD_DEFINED__
#define __DXTSlide_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTSlide DXTSlide;
#else
typedef struct DXTSlide DXTSlide;
#endif /* __cplusplus */

#endif 	/* __DXTSlide_FWD_DEFINED__ */


#ifndef __CrRadialWipe_FWD_DEFINED__
#define __CrRadialWipe_FWD_DEFINED__

#ifdef __cplusplus
typedef class CrRadialWipe CrRadialWipe;
#else
typedef struct CrRadialWipe CrRadialWipe;
#endif /* __cplusplus */

#endif 	/* __CrRadialWipe_FWD_DEFINED__ */


#ifndef __DXTRadialWipe_FWD_DEFINED__
#define __DXTRadialWipe_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTRadialWipe DXTRadialWipe;
#else
typedef struct DXTRadialWipe DXTRadialWipe;
#endif /* __cplusplus */

#endif 	/* __DXTRadialWipe_FWD_DEFINED__ */


#ifndef __CrBarn_FWD_DEFINED__
#define __CrBarn_FWD_DEFINED__

#ifdef __cplusplus
typedef class CrBarn CrBarn;
#else
typedef struct CrBarn CrBarn;
#endif /* __cplusplus */

#endif 	/* __CrBarn_FWD_DEFINED__ */


#ifndef __DXTBarn_FWD_DEFINED__
#define __DXTBarn_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTBarn DXTBarn;
#else
typedef struct DXTBarn DXTBarn;
#endif /* __cplusplus */

#endif 	/* __DXTBarn_FWD_DEFINED__ */


#ifndef __CrBlinds_FWD_DEFINED__
#define __CrBlinds_FWD_DEFINED__

#ifdef __cplusplus
typedef class CrBlinds CrBlinds;
#else
typedef struct CrBlinds CrBlinds;
#endif /* __cplusplus */

#endif 	/* __CrBlinds_FWD_DEFINED__ */


#ifndef __DXTBlinds_FWD_DEFINED__
#define __DXTBlinds_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTBlinds DXTBlinds;
#else
typedef struct DXTBlinds DXTBlinds;
#endif /* __cplusplus */

#endif 	/* __DXTBlinds_FWD_DEFINED__ */


#ifndef __CrStretch_FWD_DEFINED__
#define __CrStretch_FWD_DEFINED__

#ifdef __cplusplus
typedef class CrStretch CrStretch;
#else
typedef struct CrStretch CrStretch;
#endif /* __cplusplus */

#endif 	/* __CrStretch_FWD_DEFINED__ */


#ifndef __DXTStretch_FWD_DEFINED__
#define __DXTStretch_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTStretch DXTStretch;
#else
typedef struct DXTStretch DXTStretch;
#endif /* __cplusplus */

#endif 	/* __DXTStretch_FWD_DEFINED__ */


#ifndef __CrInset_FWD_DEFINED__
#define __CrInset_FWD_DEFINED__

#ifdef __cplusplus
typedef class CrInset CrInset;
#else
typedef struct CrInset CrInset;
#endif /* __cplusplus */

#endif 	/* __CrInset_FWD_DEFINED__ */


#ifndef __DXTInset_FWD_DEFINED__
#define __DXTInset_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTInset DXTInset;
#else
typedef struct DXTInset DXTInset;
#endif /* __cplusplus */

#endif 	/* __DXTInset_FWD_DEFINED__ */


#ifndef __CrSpiral_FWD_DEFINED__
#define __CrSpiral_FWD_DEFINED__

#ifdef __cplusplus
typedef class CrSpiral CrSpiral;
#else
typedef struct CrSpiral CrSpiral;
#endif /* __cplusplus */

#endif 	/* __CrSpiral_FWD_DEFINED__ */


#ifndef __DXTSpiral_FWD_DEFINED__
#define __DXTSpiral_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTSpiral DXTSpiral;
#else
typedef struct DXTSpiral DXTSpiral;
#endif /* __cplusplus */

#endif 	/* __DXTSpiral_FWD_DEFINED__ */


#ifndef __CrZigzag_FWD_DEFINED__
#define __CrZigzag_FWD_DEFINED__

#ifdef __cplusplus
typedef class CrZigzag CrZigzag;
#else
typedef struct CrZigzag CrZigzag;
#endif /* __cplusplus */

#endif 	/* __CrZigzag_FWD_DEFINED__ */


#ifndef __DXTZigzag_FWD_DEFINED__
#define __DXTZigzag_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTZigzag DXTZigzag;
#else
typedef struct DXTZigzag DXTZigzag;
#endif /* __cplusplus */

#endif 	/* __DXTZigzag_FWD_DEFINED__ */


#ifndef __CrWheel_FWD_DEFINED__
#define __CrWheel_FWD_DEFINED__

#ifdef __cplusplus
typedef class CrWheel CrWheel;
#else
typedef struct CrWheel CrWheel;
#endif /* __cplusplus */

#endif 	/* __CrWheel_FWD_DEFINED__ */


#ifndef __DXTChroma_FWD_DEFINED__
#define __DXTChroma_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTChroma DXTChroma;
#else
typedef struct DXTChroma DXTChroma;
#endif /* __cplusplus */

#endif 	/* __DXTChroma_FWD_DEFINED__ */


#ifndef __DXTDropShadow_FWD_DEFINED__
#define __DXTDropShadow_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTDropShadow DXTDropShadow;
#else
typedef struct DXTDropShadow DXTDropShadow;
#endif /* __cplusplus */

#endif 	/* __DXTDropShadow_FWD_DEFINED__ */


#ifndef __DXTCheckerBoard_FWD_DEFINED__
#define __DXTCheckerBoard_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTCheckerBoard DXTCheckerBoard;
#else
typedef struct DXTCheckerBoard DXTCheckerBoard;
#endif /* __cplusplus */

#endif 	/* __DXTCheckerBoard_FWD_DEFINED__ */


#ifndef __DXTRevealTrans_FWD_DEFINED__
#define __DXTRevealTrans_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTRevealTrans DXTRevealTrans;
#else
typedef struct DXTRevealTrans DXTRevealTrans;
#endif /* __cplusplus */

#endif 	/* __DXTRevealTrans_FWD_DEFINED__ */


#ifndef __DXTMaskFilter_FWD_DEFINED__
#define __DXTMaskFilter_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTMaskFilter DXTMaskFilter;
#else
typedef struct DXTMaskFilter DXTMaskFilter;
#endif /* __cplusplus */

#endif 	/* __DXTMaskFilter_FWD_DEFINED__ */


#ifndef __DXTAlphaImageLoader_FWD_DEFINED__
#define __DXTAlphaImageLoader_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTAlphaImageLoader DXTAlphaImageLoader;
#else
typedef struct DXTAlphaImageLoader DXTAlphaImageLoader;
#endif /* __cplusplus */

#endif 	/* __DXTAlphaImageLoader_FWD_DEFINED__ */


#ifndef __DXTRandomDissolve_FWD_DEFINED__
#define __DXTRandomDissolve_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTRandomDissolve DXTRandomDissolve;
#else
typedef struct DXTRandomDissolve DXTRandomDissolve;
#endif /* __cplusplus */

#endif 	/* __DXTRandomDissolve_FWD_DEFINED__ */


#ifndef __DXTRandomBars_FWD_DEFINED__
#define __DXTRandomBars_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTRandomBars DXTRandomBars;
#else
typedef struct DXTRandomBars DXTRandomBars;
#endif /* __cplusplus */

#endif 	/* __DXTRandomBars_FWD_DEFINED__ */


#ifndef __DXTStrips_FWD_DEFINED__
#define __DXTStrips_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTStrips DXTStrips;
#else
typedef struct DXTStrips DXTStrips;
#endif /* __cplusplus */

#endif 	/* __DXTStrips_FWD_DEFINED__ */


#ifndef __DXTGlow_FWD_DEFINED__
#define __DXTGlow_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTGlow DXTGlow;
#else
typedef struct DXTGlow DXTGlow;
#endif /* __cplusplus */

#endif 	/* __DXTGlow_FWD_DEFINED__ */


#ifndef __DXTShadow_FWD_DEFINED__
#define __DXTShadow_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTShadow DXTShadow;
#else
typedef struct DXTShadow DXTShadow;
#endif /* __cplusplus */

#endif 	/* __DXTShadow_FWD_DEFINED__ */


#ifndef __DXTAlpha_FWD_DEFINED__
#define __DXTAlpha_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTAlpha DXTAlpha;
#else
typedef struct DXTAlpha DXTAlpha;
#endif /* __cplusplus */

#endif 	/* __DXTAlpha_FWD_DEFINED__ */


#ifndef __DXTWave_FWD_DEFINED__
#define __DXTWave_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTWave DXTWave;
#else
typedef struct DXTWave DXTWave;
#endif /* __cplusplus */

#endif 	/* __DXTWave_FWD_DEFINED__ */


#ifndef __DXTLight_FWD_DEFINED__
#define __DXTLight_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTLight DXTLight;
#else
typedef struct DXTLight DXTLight;
#endif /* __cplusplus */

#endif 	/* __DXTLight_FWD_DEFINED__ */


#ifndef __DXTMotionBlur_FWD_DEFINED__
#define __DXTMotionBlur_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTMotionBlur DXTMotionBlur;
#else
typedef struct DXTMotionBlur DXTMotionBlur;
#endif /* __cplusplus */

#endif 	/* __DXTMotionBlur_FWD_DEFINED__ */


#ifndef __DXTMatrix_FWD_DEFINED__
#define __DXTMatrix_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTMatrix DXTMatrix;
#else
typedef struct DXTMatrix DXTMatrix;
#endif /* __cplusplus */

#endif 	/* __DXTMatrix_FWD_DEFINED__ */


#ifndef __DXTICMFilter_FWD_DEFINED__
#define __DXTICMFilter_FWD_DEFINED__

#ifdef __cplusplus
typedef class DXTICMFilter DXTICMFilter;
#else
typedef struct DXTICMFilter DXTICMFilter;
#endif /* __cplusplus */

#endif 	/* __DXTICMFilter_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "dxtrans.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_dxtmsft_0000 */
/* [local] */ 

#include <dxtmsft3.h>





//
//   DXTransforms Image Transforms Type Library Version Info
//
#define DXTMSFT_TLB_MAJOR_VER 1
#define DXTMSFT_TLB_MINOR_VER 1
typedef 
enum OPIDDXLUTBUILDER
    {	OPID_DXLUTBUILDER_Gamma	= 0,
	OPID_DXLUTBUILDER_Opacity	= OPID_DXLUTBUILDER_Gamma + 1,
	OPID_DXLUTBUILDER_Brightness	= OPID_DXLUTBUILDER_Opacity + 1,
	OPID_DXLUTBUILDER_Contrast	= OPID_DXLUTBUILDER_Brightness + 1,
	OPID_DXLUTBUILDER_ColorBalance	= OPID_DXLUTBUILDER_Contrast + 1,
	OPID_DXLUTBUILDER_Posterize	= OPID_DXLUTBUILDER_ColorBalance + 1,
	OPID_DXLUTBUILDER_Invert	= OPID_DXLUTBUILDER_Posterize + 1,
	OPID_DXLUTBUILDER_Threshold	= OPID_DXLUTBUILDER_Invert + 1,
	OPID_DXLUTBUILDER_NUM_OPS	= OPID_DXLUTBUILDER_Threshold + 1
    }	OPIDDXLUTBUILDER;

typedef 
enum DXLUTCOLOR
    {	DXLUTCOLOR_RED	= 0,
	DXLUTCOLOR_GREEN	= DXLUTCOLOR_RED + 1,
	DXLUTCOLOR_BLUE	= DXLUTCOLOR_GREEN + 1
    }	DXLUTCOLOR;



extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0000_v0_0_s_ifspec;

#ifndef __IDXLUTBuilder_INTERFACE_DEFINED__
#define __IDXLUTBuilder_INTERFACE_DEFINED__

/* interface IDXLUTBuilder */
/* [object][unique][helpstring][uuid] */ 


EXTERN_C const IID IID_IDXLUTBuilder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F4370FC1-CADB-11D0-B52C-00A0C9054373")
    IDXLUTBuilder : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetNumBuildSteps( 
            /* [out] */ ULONG __RPC_FAR *pulNumSteps) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBuildOrder( 
            /* [size_is][out] */ OPIDDXLUTBUILDER __RPC_FAR OpOrder[  ],
            /* [in] */ ULONG ulSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBuildOrder( 
            /* [size_is][in] */ const OPIDDXLUTBUILDER __RPC_FAR OpOrder[  ],
            /* [in] */ ULONG ulNumSteps) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetGamma( 
            /* [in] */ float newVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGamma( 
            /* [out] */ float __RPC_FAR *pVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOpacity( 
            /* [out] */ float __RPC_FAR *pVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOpacity( 
            /* [in] */ float newVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBrightness( 
            /* [out][in] */ ULONG __RPC_FAR *pulCount,
            /* [size_is][out] */ float __RPC_FAR Weights[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBrightness( 
            /* [in] */ ULONG ulCount,
            /* [size_is][in] */ const float __RPC_FAR Weights[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetContrast( 
            /* [out][in] */ ULONG __RPC_FAR *pulCount,
            /* [size_is][out] */ float __RPC_FAR Weights[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetContrast( 
            /* [in] */ ULONG ulCount,
            /* [size_is][in] */ const float __RPC_FAR Weights[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetColorBalance( 
            /* [in] */ DXLUTCOLOR Color,
            /* [out][in] */ ULONG __RPC_FAR *pulCount,
            /* [size_is][out] */ float __RPC_FAR Weights[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetColorBalance( 
            /* [in] */ DXLUTCOLOR Color,
            /* [in] */ ULONG ulCount,
            /* [size_is][in] */ const float __RPC_FAR Weights[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLevelsPerChannel( 
            /* [out] */ ULONG __RPC_FAR *pVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLevelsPerChannel( 
            /* [in] */ ULONG newVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInvert( 
            /* [out] */ float __RPC_FAR *pThreshold) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInvert( 
            /* [in] */ float Threshold) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetThreshold( 
            /* [out] */ float __RPC_FAR *pVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetThreshold( 
            /* [in] */ float newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXLUTBuilderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXLUTBuilder __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXLUTBuilder __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXLUTBuilder __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetNumBuildSteps )( 
            IDXLUTBuilder __RPC_FAR * This,
            /* [out] */ ULONG __RPC_FAR *pulNumSteps);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetBuildOrder )( 
            IDXLUTBuilder __RPC_FAR * This,
            /* [size_is][out] */ OPIDDXLUTBUILDER __RPC_FAR OpOrder[  ],
            /* [in] */ ULONG ulSize);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetBuildOrder )( 
            IDXLUTBuilder __RPC_FAR * This,
            /* [size_is][in] */ const OPIDDXLUTBUILDER __RPC_FAR OpOrder[  ],
            /* [in] */ ULONG ulNumSteps);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetGamma )( 
            IDXLUTBuilder __RPC_FAR * This,
            /* [in] */ float newVal);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetGamma )( 
            IDXLUTBuilder __RPC_FAR * This,
            /* [out] */ float __RPC_FAR *pVal);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetOpacity )( 
            IDXLUTBuilder __RPC_FAR * This,
            /* [out] */ float __RPC_FAR *pVal);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetOpacity )( 
            IDXLUTBuilder __RPC_FAR * This,
            /* [in] */ float newVal);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetBrightness )( 
            IDXLUTBuilder __RPC_FAR * This,
            /* [out][in] */ ULONG __RPC_FAR *pulCount,
            /* [size_is][out] */ float __RPC_FAR Weights[  ]);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetBrightness )( 
            IDXLUTBuilder __RPC_FAR * This,
            /* [in] */ ULONG ulCount,
            /* [size_is][in] */ const float __RPC_FAR Weights[  ]);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetContrast )( 
            IDXLUTBuilder __RPC_FAR * This,
            /* [out][in] */ ULONG __RPC_FAR *pulCount,
            /* [size_is][out] */ float __RPC_FAR Weights[  ]);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetContrast )( 
            IDXLUTBuilder __RPC_FAR * This,
            /* [in] */ ULONG ulCount,
            /* [size_is][in] */ const float __RPC_FAR Weights[  ]);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetColorBalance )( 
            IDXLUTBuilder __RPC_FAR * This,
            /* [in] */ DXLUTCOLOR Color,
            /* [out][in] */ ULONG __RPC_FAR *pulCount,
            /* [size_is][out] */ float __RPC_FAR Weights[  ]);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetColorBalance )( 
            IDXLUTBuilder __RPC_FAR * This,
            /* [in] */ DXLUTCOLOR Color,
            /* [in] */ ULONG ulCount,
            /* [size_is][in] */ const float __RPC_FAR Weights[  ]);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetLevelsPerChannel )( 
            IDXLUTBuilder __RPC_FAR * This,
            /* [out] */ ULONG __RPC_FAR *pVal);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetLevelsPerChannel )( 
            IDXLUTBuilder __RPC_FAR * This,
            /* [in] */ ULONG newVal);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetInvert )( 
            IDXLUTBuilder __RPC_FAR * This,
            /* [out] */ float __RPC_FAR *pThreshold);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetInvert )( 
            IDXLUTBuilder __RPC_FAR * This,
            /* [in] */ float Threshold);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetThreshold )( 
            IDXLUTBuilder __RPC_FAR * This,
            /* [out] */ float __RPC_FAR *pVal);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetThreshold )( 
            IDXLUTBuilder __RPC_FAR * This,
            /* [in] */ float newVal);
        
        END_INTERFACE
    } IDXLUTBuilderVtbl;

    interface IDXLUTBuilder
    {
        CONST_VTBL struct IDXLUTBuilderVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXLUTBuilder_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXLUTBuilder_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXLUTBuilder_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXLUTBuilder_GetNumBuildSteps(This,pulNumSteps)	\
    (This)->lpVtbl -> GetNumBuildSteps(This,pulNumSteps)

#define IDXLUTBuilder_GetBuildOrder(This,OpOrder,ulSize)	\
    (This)->lpVtbl -> GetBuildOrder(This,OpOrder,ulSize)

#define IDXLUTBuilder_SetBuildOrder(This,OpOrder,ulNumSteps)	\
    (This)->lpVtbl -> SetBuildOrder(This,OpOrder,ulNumSteps)

#define IDXLUTBuilder_SetGamma(This,newVal)	\
    (This)->lpVtbl -> SetGamma(This,newVal)

#define IDXLUTBuilder_GetGamma(This,pVal)	\
    (This)->lpVtbl -> GetGamma(This,pVal)

#define IDXLUTBuilder_GetOpacity(This,pVal)	\
    (This)->lpVtbl -> GetOpacity(This,pVal)

#define IDXLUTBuilder_SetOpacity(This,newVal)	\
    (This)->lpVtbl -> SetOpacity(This,newVal)

#define IDXLUTBuilder_GetBrightness(This,pulCount,Weights)	\
    (This)->lpVtbl -> GetBrightness(This,pulCount,Weights)

#define IDXLUTBuilder_SetBrightness(This,ulCount,Weights)	\
    (This)->lpVtbl -> SetBrightness(This,ulCount,Weights)

#define IDXLUTBuilder_GetContrast(This,pulCount,Weights)	\
    (This)->lpVtbl -> GetContrast(This,pulCount,Weights)

#define IDXLUTBuilder_SetContrast(This,ulCount,Weights)	\
    (This)->lpVtbl -> SetContrast(This,ulCount,Weights)

#define IDXLUTBuilder_GetColorBalance(This,Color,pulCount,Weights)	\
    (This)->lpVtbl -> GetColorBalance(This,Color,pulCount,Weights)

#define IDXLUTBuilder_SetColorBalance(This,Color,ulCount,Weights)	\
    (This)->lpVtbl -> SetColorBalance(This,Color,ulCount,Weights)

#define IDXLUTBuilder_GetLevelsPerChannel(This,pVal)	\
    (This)->lpVtbl -> GetLevelsPerChannel(This,pVal)

#define IDXLUTBuilder_SetLevelsPerChannel(This,newVal)	\
    (This)->lpVtbl -> SetLevelsPerChannel(This,newVal)

#define IDXLUTBuilder_GetInvert(This,pThreshold)	\
    (This)->lpVtbl -> GetInvert(This,pThreshold)

#define IDXLUTBuilder_SetInvert(This,Threshold)	\
    (This)->lpVtbl -> SetInvert(This,Threshold)

#define IDXLUTBuilder_GetThreshold(This,pVal)	\
    (This)->lpVtbl -> GetThreshold(This,pVal)

#define IDXLUTBuilder_SetThreshold(This,newVal)	\
    (This)->lpVtbl -> SetThreshold(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDXLUTBuilder_GetNumBuildSteps_Proxy( 
    IDXLUTBuilder __RPC_FAR * This,
    /* [out] */ ULONG __RPC_FAR *pulNumSteps);


void __RPC_STUB IDXLUTBuilder_GetNumBuildSteps_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXLUTBuilder_GetBuildOrder_Proxy( 
    IDXLUTBuilder __RPC_FAR * This,
    /* [size_is][out] */ OPIDDXLUTBUILDER __RPC_FAR OpOrder[  ],
    /* [in] */ ULONG ulSize);


void __RPC_STUB IDXLUTBuilder_GetBuildOrder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXLUTBuilder_SetBuildOrder_Proxy( 
    IDXLUTBuilder __RPC_FAR * This,
    /* [size_is][in] */ const OPIDDXLUTBUILDER __RPC_FAR OpOrder[  ],
    /* [in] */ ULONG ulNumSteps);


void __RPC_STUB IDXLUTBuilder_SetBuildOrder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXLUTBuilder_SetGamma_Proxy( 
    IDXLUTBuilder __RPC_FAR * This,
    /* [in] */ float newVal);


void __RPC_STUB IDXLUTBuilder_SetGamma_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXLUTBuilder_GetGamma_Proxy( 
    IDXLUTBuilder __RPC_FAR * This,
    /* [out] */ float __RPC_FAR *pVal);


void __RPC_STUB IDXLUTBuilder_GetGamma_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXLUTBuilder_GetOpacity_Proxy( 
    IDXLUTBuilder __RPC_FAR * This,
    /* [out] */ float __RPC_FAR *pVal);


void __RPC_STUB IDXLUTBuilder_GetOpacity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXLUTBuilder_SetOpacity_Proxy( 
    IDXLUTBuilder __RPC_FAR * This,
    /* [in] */ float newVal);


void __RPC_STUB IDXLUTBuilder_SetOpacity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXLUTBuilder_GetBrightness_Proxy( 
    IDXLUTBuilder __RPC_FAR * This,
    /* [out][in] */ ULONG __RPC_FAR *pulCount,
    /* [size_is][out] */ float __RPC_FAR Weights[  ]);


void __RPC_STUB IDXLUTBuilder_GetBrightness_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXLUTBuilder_SetBrightness_Proxy( 
    IDXLUTBuilder __RPC_FAR * This,
    /* [in] */ ULONG ulCount,
    /* [size_is][in] */ const float __RPC_FAR Weights[  ]);


void __RPC_STUB IDXLUTBuilder_SetBrightness_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXLUTBuilder_GetContrast_Proxy( 
    IDXLUTBuilder __RPC_FAR * This,
    /* [out][in] */ ULONG __RPC_FAR *pulCount,
    /* [size_is][out] */ float __RPC_FAR Weights[  ]);


void __RPC_STUB IDXLUTBuilder_GetContrast_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXLUTBuilder_SetContrast_Proxy( 
    IDXLUTBuilder __RPC_FAR * This,
    /* [in] */ ULONG ulCount,
    /* [size_is][in] */ const float __RPC_FAR Weights[  ]);


void __RPC_STUB IDXLUTBuilder_SetContrast_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXLUTBuilder_GetColorBalance_Proxy( 
    IDXLUTBuilder __RPC_FAR * This,
    /* [in] */ DXLUTCOLOR Color,
    /* [out][in] */ ULONG __RPC_FAR *pulCount,
    /* [size_is][out] */ float __RPC_FAR Weights[  ]);


void __RPC_STUB IDXLUTBuilder_GetColorBalance_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXLUTBuilder_SetColorBalance_Proxy( 
    IDXLUTBuilder __RPC_FAR * This,
    /* [in] */ DXLUTCOLOR Color,
    /* [in] */ ULONG ulCount,
    /* [size_is][in] */ const float __RPC_FAR Weights[  ]);


void __RPC_STUB IDXLUTBuilder_SetColorBalance_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXLUTBuilder_GetLevelsPerChannel_Proxy( 
    IDXLUTBuilder __RPC_FAR * This,
    /* [out] */ ULONG __RPC_FAR *pVal);


void __RPC_STUB IDXLUTBuilder_GetLevelsPerChannel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXLUTBuilder_SetLevelsPerChannel_Proxy( 
    IDXLUTBuilder __RPC_FAR * This,
    /* [in] */ ULONG newVal);


void __RPC_STUB IDXLUTBuilder_SetLevelsPerChannel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXLUTBuilder_GetInvert_Proxy( 
    IDXLUTBuilder __RPC_FAR * This,
    /* [out] */ float __RPC_FAR *pThreshold);


void __RPC_STUB IDXLUTBuilder_GetInvert_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXLUTBuilder_SetInvert_Proxy( 
    IDXLUTBuilder __RPC_FAR * This,
    /* [in] */ float Threshold);


void __RPC_STUB IDXLUTBuilder_SetInvert_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXLUTBuilder_GetThreshold_Proxy( 
    IDXLUTBuilder __RPC_FAR * This,
    /* [out] */ float __RPC_FAR *pVal);


void __RPC_STUB IDXLUTBuilder_GetThreshold_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXLUTBuilder_SetThreshold_Proxy( 
    IDXLUTBuilder __RPC_FAR * This,
    /* [in] */ float newVal);


void __RPC_STUB IDXLUTBuilder_SetThreshold_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXLUTBuilder_INTERFACE_DEFINED__ */


#ifndef __IDXDLUTBuilder_INTERFACE_DEFINED__
#define __IDXDLUTBuilder_INTERFACE_DEFINED__

/* interface IDXDLUTBuilder */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDXDLUTBuilder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("73068231-35EE-11d1-81A1-0000F87557DB")
    IDXDLUTBuilder : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_NumBuildSteps( 
            /* [retval][out] */ long __RPC_FAR *pNumSteps) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BuildOrder( 
            /* [retval][out] */ VARIANT __RPC_FAR *pOpOrder) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_BuildOrder( 
            /* [in] */ VARIANT __RPC_FAR *pOpOrder) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Gamma( 
            /* [retval][out] */ float __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Gamma( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Opacity( 
            /* [retval][out] */ float __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Opacity( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Brightness( 
            /* [retval][out] */ VARIANT __RPC_FAR *pWeights) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Brightness( 
            /* [in] */ VARIANT __RPC_FAR *pWeights) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Contrast( 
            /* [retval][out] */ VARIANT __RPC_FAR *pWeights) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Contrast( 
            /* [in] */ VARIANT __RPC_FAR *pWeights) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ColorBalance( 
            /* [in] */ DXLUTCOLOR Color,
            /* [retval][out] */ VARIANT __RPC_FAR *pWeights) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ColorBalance( 
            /* [in] */ DXLUTCOLOR Color,
            /* [in] */ VARIANT __RPC_FAR *pWeights) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LevelsPerChannel( 
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LevelsPerChannel( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Invert( 
            /* [retval][out] */ float __RPC_FAR *pThreshold) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Invert( 
            /* [in] */ float Threshold) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Threshold( 
            /* [retval][out] */ float __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Threshold( 
            /* [in] */ float newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXDLUTBuilderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXDLUTBuilder __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXDLUTBuilder __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXDLUTBuilder __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IDXDLUTBuilder __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IDXDLUTBuilder __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IDXDLUTBuilder __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IDXDLUTBuilder __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_NumBuildSteps )( 
            IDXDLUTBuilder __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pNumSteps);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_BuildOrder )( 
            IDXDLUTBuilder __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *pOpOrder);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_BuildOrder )( 
            IDXDLUTBuilder __RPC_FAR * This,
            /* [in] */ VARIANT __RPC_FAR *pOpOrder);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Gamma )( 
            IDXDLUTBuilder __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Gamma )( 
            IDXDLUTBuilder __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Opacity )( 
            IDXDLUTBuilder __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Opacity )( 
            IDXDLUTBuilder __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Brightness )( 
            IDXDLUTBuilder __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *pWeights);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Brightness )( 
            IDXDLUTBuilder __RPC_FAR * This,
            /* [in] */ VARIANT __RPC_FAR *pWeights);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Contrast )( 
            IDXDLUTBuilder __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *pWeights);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Contrast )( 
            IDXDLUTBuilder __RPC_FAR * This,
            /* [in] */ VARIANT __RPC_FAR *pWeights);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ColorBalance )( 
            IDXDLUTBuilder __RPC_FAR * This,
            /* [in] */ DXLUTCOLOR Color,
            /* [retval][out] */ VARIANT __RPC_FAR *pWeights);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_ColorBalance )( 
            IDXDLUTBuilder __RPC_FAR * This,
            /* [in] */ DXLUTCOLOR Color,
            /* [in] */ VARIANT __RPC_FAR *pWeights);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_LevelsPerChannel )( 
            IDXDLUTBuilder __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_LevelsPerChannel )( 
            IDXDLUTBuilder __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Invert )( 
            IDXDLUTBuilder __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pThreshold);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Invert )( 
            IDXDLUTBuilder __RPC_FAR * This,
            /* [in] */ float Threshold);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Threshold )( 
            IDXDLUTBuilder __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Threshold )( 
            IDXDLUTBuilder __RPC_FAR * This,
            /* [in] */ float newVal);
        
        END_INTERFACE
    } IDXDLUTBuilderVtbl;

    interface IDXDLUTBuilder
    {
        CONST_VTBL struct IDXDLUTBuilderVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXDLUTBuilder_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXDLUTBuilder_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXDLUTBuilder_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXDLUTBuilder_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDXDLUTBuilder_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDXDLUTBuilder_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDXDLUTBuilder_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDXDLUTBuilder_get_NumBuildSteps(This,pNumSteps)	\
    (This)->lpVtbl -> get_NumBuildSteps(This,pNumSteps)

#define IDXDLUTBuilder_get_BuildOrder(This,pOpOrder)	\
    (This)->lpVtbl -> get_BuildOrder(This,pOpOrder)

#define IDXDLUTBuilder_put_BuildOrder(This,pOpOrder)	\
    (This)->lpVtbl -> put_BuildOrder(This,pOpOrder)

#define IDXDLUTBuilder_get_Gamma(This,pVal)	\
    (This)->lpVtbl -> get_Gamma(This,pVal)

#define IDXDLUTBuilder_put_Gamma(This,newVal)	\
    (This)->lpVtbl -> put_Gamma(This,newVal)

#define IDXDLUTBuilder_get_Opacity(This,pVal)	\
    (This)->lpVtbl -> get_Opacity(This,pVal)

#define IDXDLUTBuilder_put_Opacity(This,newVal)	\
    (This)->lpVtbl -> put_Opacity(This,newVal)

#define IDXDLUTBuilder_get_Brightness(This,pWeights)	\
    (This)->lpVtbl -> get_Brightness(This,pWeights)

#define IDXDLUTBuilder_put_Brightness(This,pWeights)	\
    (This)->lpVtbl -> put_Brightness(This,pWeights)

#define IDXDLUTBuilder_get_Contrast(This,pWeights)	\
    (This)->lpVtbl -> get_Contrast(This,pWeights)

#define IDXDLUTBuilder_put_Contrast(This,pWeights)	\
    (This)->lpVtbl -> put_Contrast(This,pWeights)

#define IDXDLUTBuilder_get_ColorBalance(This,Color,pWeights)	\
    (This)->lpVtbl -> get_ColorBalance(This,Color,pWeights)

#define IDXDLUTBuilder_put_ColorBalance(This,Color,pWeights)	\
    (This)->lpVtbl -> put_ColorBalance(This,Color,pWeights)

#define IDXDLUTBuilder_get_LevelsPerChannel(This,pVal)	\
    (This)->lpVtbl -> get_LevelsPerChannel(This,pVal)

#define IDXDLUTBuilder_put_LevelsPerChannel(This,newVal)	\
    (This)->lpVtbl -> put_LevelsPerChannel(This,newVal)

#define IDXDLUTBuilder_get_Invert(This,pThreshold)	\
    (This)->lpVtbl -> get_Invert(This,pThreshold)

#define IDXDLUTBuilder_put_Invert(This,Threshold)	\
    (This)->lpVtbl -> put_Invert(This,Threshold)

#define IDXDLUTBuilder_get_Threshold(This,pVal)	\
    (This)->lpVtbl -> get_Threshold(This,pVal)

#define IDXDLUTBuilder_put_Threshold(This,newVal)	\
    (This)->lpVtbl -> put_Threshold(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXDLUTBuilder_get_NumBuildSteps_Proxy( 
    IDXDLUTBuilder __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pNumSteps);


void __RPC_STUB IDXDLUTBuilder_get_NumBuildSteps_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXDLUTBuilder_get_BuildOrder_Proxy( 
    IDXDLUTBuilder __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *pOpOrder);


void __RPC_STUB IDXDLUTBuilder_get_BuildOrder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXDLUTBuilder_put_BuildOrder_Proxy( 
    IDXDLUTBuilder __RPC_FAR * This,
    /* [in] */ VARIANT __RPC_FAR *pOpOrder);


void __RPC_STUB IDXDLUTBuilder_put_BuildOrder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXDLUTBuilder_get_Gamma_Proxy( 
    IDXDLUTBuilder __RPC_FAR * This,
    /* [retval][out] */ float __RPC_FAR *pVal);


void __RPC_STUB IDXDLUTBuilder_get_Gamma_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXDLUTBuilder_put_Gamma_Proxy( 
    IDXDLUTBuilder __RPC_FAR * This,
    /* [in] */ float newVal);


void __RPC_STUB IDXDLUTBuilder_put_Gamma_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXDLUTBuilder_get_Opacity_Proxy( 
    IDXDLUTBuilder __RPC_FAR * This,
    /* [retval][out] */ float __RPC_FAR *pVal);


void __RPC_STUB IDXDLUTBuilder_get_Opacity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXDLUTBuilder_put_Opacity_Proxy( 
    IDXDLUTBuilder __RPC_FAR * This,
    /* [in] */ float newVal);


void __RPC_STUB IDXDLUTBuilder_put_Opacity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXDLUTBuilder_get_Brightness_Proxy( 
    IDXDLUTBuilder __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *pWeights);


void __RPC_STUB IDXDLUTBuilder_get_Brightness_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXDLUTBuilder_put_Brightness_Proxy( 
    IDXDLUTBuilder __RPC_FAR * This,
    /* [in] */ VARIANT __RPC_FAR *pWeights);


void __RPC_STUB IDXDLUTBuilder_put_Brightness_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXDLUTBuilder_get_Contrast_Proxy( 
    IDXDLUTBuilder __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *pWeights);


void __RPC_STUB IDXDLUTBuilder_get_Contrast_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXDLUTBuilder_put_Contrast_Proxy( 
    IDXDLUTBuilder __RPC_FAR * This,
    /* [in] */ VARIANT __RPC_FAR *pWeights);


void __RPC_STUB IDXDLUTBuilder_put_Contrast_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXDLUTBuilder_get_ColorBalance_Proxy( 
    IDXDLUTBuilder __RPC_FAR * This,
    /* [in] */ DXLUTCOLOR Color,
    /* [retval][out] */ VARIANT __RPC_FAR *pWeights);


void __RPC_STUB IDXDLUTBuilder_get_ColorBalance_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXDLUTBuilder_put_ColorBalance_Proxy( 
    IDXDLUTBuilder __RPC_FAR * This,
    /* [in] */ DXLUTCOLOR Color,
    /* [in] */ VARIANT __RPC_FAR *pWeights);


void __RPC_STUB IDXDLUTBuilder_put_ColorBalance_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXDLUTBuilder_get_LevelsPerChannel_Proxy( 
    IDXDLUTBuilder __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IDXDLUTBuilder_get_LevelsPerChannel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXDLUTBuilder_put_LevelsPerChannel_Proxy( 
    IDXDLUTBuilder __RPC_FAR * This,
    /* [in] */ long newVal);


void __RPC_STUB IDXDLUTBuilder_put_LevelsPerChannel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXDLUTBuilder_get_Invert_Proxy( 
    IDXDLUTBuilder __RPC_FAR * This,
    /* [retval][out] */ float __RPC_FAR *pThreshold);


void __RPC_STUB IDXDLUTBuilder_get_Invert_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXDLUTBuilder_put_Invert_Proxy( 
    IDXDLUTBuilder __RPC_FAR * This,
    /* [in] */ float Threshold);


void __RPC_STUB IDXDLUTBuilder_put_Invert_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXDLUTBuilder_get_Threshold_Proxy( 
    IDXDLUTBuilder __RPC_FAR * This,
    /* [retval][out] */ float __RPC_FAR *pVal);


void __RPC_STUB IDXDLUTBuilder_get_Threshold_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXDLUTBuilder_put_Threshold_Proxy( 
    IDXDLUTBuilder __RPC_FAR * This,
    /* [in] */ float newVal);


void __RPC_STUB IDXDLUTBuilder_put_Threshold_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXDLUTBuilder_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dxtmsft_0184 */
/* [local] */ 

typedef 
enum DXGRADIENTTYPE
    {	DXGRADIENT_VERTICAL	= 0,
	DXGRADIENT_HORIZONTAL	= DXGRADIENT_VERTICAL + 1,
	DXGRADIENT_NUM_GRADIENTS	= DXGRADIENT_HORIZONTAL + 1
    }	DXGRADIENTTYPE;

typedef 
enum DXGRADDISPID
    {	DISPID_GradientType	= 1,
	DISPID_StartColor	= DISPID_GradientType + 1,
	DISPID_EndColor	= DISPID_StartColor + 1,
	DISPID_GradientWidth	= DISPID_EndColor + 1,
	DISPID_GradientHeight	= DISPID_GradientWidth + 1,
	DISPID_GradientAspect	= DISPID_GradientHeight + 1,
	DISPID_StartColorStr	= DISPID_GradientAspect + 1,
	DISPID_EndColorStr	= DISPID_StartColorStr + 1
    }	DXGRADDISPID;



extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0184_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0184_v0_0_s_ifspec;

#ifndef __IDXTGradientD_INTERFACE_DEFINED__
#define __IDXTGradientD_INTERFACE_DEFINED__

/* interface IDXTGradientD */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDXTGradientD;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("623E2881-FC0E-11d1-9A77-0000F8756A10")
    IDXTGradientD : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_GradientType( 
            /* [in] */ DXGRADIENTTYPE eType) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GradientType( 
            /* [retval][out] */ DXGRADIENTTYPE __RPC_FAR *peType) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_StartColor( 
            /* [in] */ OLE_COLOR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_StartColor( 
            /* [retval][out] */ OLE_COLOR __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_EndColor( 
            /* [in] */ OLE_COLOR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_EndColor( 
            /* [retval][out] */ OLE_COLOR __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_GradientWidth( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GradientWidth( 
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_GradientHeight( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GradientHeight( 
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_KeepAspectRatio( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_KeepAspectRatio( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_StartColorStr( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_StartColorStr( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_EndColorStr( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_EndColorStr( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXTGradientDVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXTGradientD __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXTGradientD __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXTGradientD __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IDXTGradientD __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IDXTGradientD __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IDXTGradientD __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IDXTGradientD __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_GradientType )( 
            IDXTGradientD __RPC_FAR * This,
            /* [in] */ DXGRADIENTTYPE eType);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_GradientType )( 
            IDXTGradientD __RPC_FAR * This,
            /* [retval][out] */ DXGRADIENTTYPE __RPC_FAR *peType);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_StartColor )( 
            IDXTGradientD __RPC_FAR * This,
            /* [in] */ OLE_COLOR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StartColor )( 
            IDXTGradientD __RPC_FAR * This,
            /* [retval][out] */ OLE_COLOR __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_EndColor )( 
            IDXTGradientD __RPC_FAR * This,
            /* [in] */ OLE_COLOR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_EndColor )( 
            IDXTGradientD __RPC_FAR * This,
            /* [retval][out] */ OLE_COLOR __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_GradientWidth )( 
            IDXTGradientD __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_GradientWidth )( 
            IDXTGradientD __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_GradientHeight )( 
            IDXTGradientD __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_GradientHeight )( 
            IDXTGradientD __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_KeepAspectRatio )( 
            IDXTGradientD __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_KeepAspectRatio )( 
            IDXTGradientD __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_StartColorStr )( 
            IDXTGradientD __RPC_FAR * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StartColorStr )( 
            IDXTGradientD __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_EndColorStr )( 
            IDXTGradientD __RPC_FAR * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_EndColorStr )( 
            IDXTGradientD __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        END_INTERFACE
    } IDXTGradientDVtbl;

    interface IDXTGradientD
    {
        CONST_VTBL struct IDXTGradientDVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXTGradientD_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXTGradientD_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXTGradientD_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXTGradientD_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDXTGradientD_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDXTGradientD_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDXTGradientD_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDXTGradientD_put_GradientType(This,eType)	\
    (This)->lpVtbl -> put_GradientType(This,eType)

#define IDXTGradientD_get_GradientType(This,peType)	\
    (This)->lpVtbl -> get_GradientType(This,peType)

#define IDXTGradientD_put_StartColor(This,newVal)	\
    (This)->lpVtbl -> put_StartColor(This,newVal)

#define IDXTGradientD_get_StartColor(This,pVal)	\
    (This)->lpVtbl -> get_StartColor(This,pVal)

#define IDXTGradientD_put_EndColor(This,newVal)	\
    (This)->lpVtbl -> put_EndColor(This,newVal)

#define IDXTGradientD_get_EndColor(This,pVal)	\
    (This)->lpVtbl -> get_EndColor(This,pVal)

#define IDXTGradientD_put_GradientWidth(This,newVal)	\
    (This)->lpVtbl -> put_GradientWidth(This,newVal)

#define IDXTGradientD_get_GradientWidth(This,pVal)	\
    (This)->lpVtbl -> get_GradientWidth(This,pVal)

#define IDXTGradientD_put_GradientHeight(This,newVal)	\
    (This)->lpVtbl -> put_GradientHeight(This,newVal)

#define IDXTGradientD_get_GradientHeight(This,pVal)	\
    (This)->lpVtbl -> get_GradientHeight(This,pVal)

#define IDXTGradientD_put_KeepAspectRatio(This,newVal)	\
    (This)->lpVtbl -> put_KeepAspectRatio(This,newVal)

#define IDXTGradientD_get_KeepAspectRatio(This,pVal)	\
    (This)->lpVtbl -> get_KeepAspectRatio(This,pVal)

#define IDXTGradientD_put_StartColorStr(This,newVal)	\
    (This)->lpVtbl -> put_StartColorStr(This,newVal)

#define IDXTGradientD_get_StartColorStr(This,pVal)	\
    (This)->lpVtbl -> get_StartColorStr(This,pVal)

#define IDXTGradientD_put_EndColorStr(This,newVal)	\
    (This)->lpVtbl -> put_EndColorStr(This,newVal)

#define IDXTGradientD_get_EndColorStr(This,pVal)	\
    (This)->lpVtbl -> get_EndColorStr(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTGradientD_put_GradientType_Proxy( 
    IDXTGradientD __RPC_FAR * This,
    /* [in] */ DXGRADIENTTYPE eType);


void __RPC_STUB IDXTGradientD_put_GradientType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTGradientD_get_GradientType_Proxy( 
    IDXTGradientD __RPC_FAR * This,
    /* [retval][out] */ DXGRADIENTTYPE __RPC_FAR *peType);


void __RPC_STUB IDXTGradientD_get_GradientType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTGradientD_put_StartColor_Proxy( 
    IDXTGradientD __RPC_FAR * This,
    /* [in] */ OLE_COLOR newVal);


void __RPC_STUB IDXTGradientD_put_StartColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTGradientD_get_StartColor_Proxy( 
    IDXTGradientD __RPC_FAR * This,
    /* [retval][out] */ OLE_COLOR __RPC_FAR *pVal);


void __RPC_STUB IDXTGradientD_get_StartColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTGradientD_put_EndColor_Proxy( 
    IDXTGradientD __RPC_FAR * This,
    /* [in] */ OLE_COLOR newVal);


void __RPC_STUB IDXTGradientD_put_EndColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTGradientD_get_EndColor_Proxy( 
    IDXTGradientD __RPC_FAR * This,
    /* [retval][out] */ OLE_COLOR __RPC_FAR *pVal);


void __RPC_STUB IDXTGradientD_get_EndColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTGradientD_put_GradientWidth_Proxy( 
    IDXTGradientD __RPC_FAR * This,
    /* [in] */ long newVal);


void __RPC_STUB IDXTGradientD_put_GradientWidth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTGradientD_get_GradientWidth_Proxy( 
    IDXTGradientD __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IDXTGradientD_get_GradientWidth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTGradientD_put_GradientHeight_Proxy( 
    IDXTGradientD __RPC_FAR * This,
    /* [in] */ long newVal);


void __RPC_STUB IDXTGradientD_put_GradientHeight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTGradientD_get_GradientHeight_Proxy( 
    IDXTGradientD __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IDXTGradientD_get_GradientHeight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTGradientD_put_KeepAspectRatio_Proxy( 
    IDXTGradientD __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IDXTGradientD_put_KeepAspectRatio_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTGradientD_get_KeepAspectRatio_Proxy( 
    IDXTGradientD __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pVal);


void __RPC_STUB IDXTGradientD_get_KeepAspectRatio_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTGradientD_put_StartColorStr_Proxy( 
    IDXTGradientD __RPC_FAR * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IDXTGradientD_put_StartColorStr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTGradientD_get_StartColorStr_Proxy( 
    IDXTGradientD __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IDXTGradientD_get_StartColorStr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTGradientD_put_EndColorStr_Proxy( 
    IDXTGradientD __RPC_FAR * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IDXTGradientD_put_EndColorStr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTGradientD_get_EndColorStr_Proxy( 
    IDXTGradientD __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IDXTGradientD_get_EndColorStr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXTGradientD_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dxtmsft_0185 */
/* [local] */ 

typedef 
enum DXCONVFILTERTYPE
    {	DXCFILTER_SRCCOPY	= 0,
	DXCFILTER_BOX7X7	= DXCFILTER_SRCCOPY + 1,
	DXCFILTER_BLUR3X3	= DXCFILTER_BOX7X7 + 1,
	DXCFILTER_SHARPEN	= DXCFILTER_BLUR3X3 + 1,
	DXCFILTER_EMBOSS	= DXCFILTER_SHARPEN + 1,
	DXCFILTER_ENGRAVE	= DXCFILTER_EMBOSS + 1,
	DXCFILTER_NUM_FILTERS	= DXCFILTER_ENGRAVE + 1,
	DXCFILTER_CUSTOM	= DXCFILTER_NUM_FILTERS + 1
    }	DXCONVFILTERTYPE;



extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0185_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0185_v0_0_s_ifspec;

#ifndef __IDXTConvolution_INTERFACE_DEFINED__
#define __IDXTConvolution_INTERFACE_DEFINED__

/* interface IDXTConvolution */
/* [object][unique][helpstring][uuid] */ 


EXTERN_C const IID IID_IDXTConvolution;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7BA7F8AF-E5EA-11d1-81DD-0000F87557DB")
    IDXTConvolution : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFilterType( 
            /* [in] */ DXCONVFILTERTYPE eType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFilterType( 
            /* [out] */ DXCONVFILTERTYPE __RPC_FAR *peType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCustomFilter( 
            /* [in] */ float __RPC_FAR *pFilter,
            /* [in] */ SIZE Size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetConvertToGray( 
            /* [in] */ BOOL bConvertToGray) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetConvertToGray( 
            /* [out] */ BOOL __RPC_FAR *pbConvertToGray) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBias( 
            /* [in] */ float Bias) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBias( 
            /* [out] */ float __RPC_FAR *pBias) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetExcludeAlpha( 
            /* [in] */ BOOL bExcludeAlpha) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetExcludeAlpha( 
            /* [out] */ BOOL __RPC_FAR *pbExcludeAlpha) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXTConvolutionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXTConvolution __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXTConvolution __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXTConvolution __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetFilterType )( 
            IDXTConvolution __RPC_FAR * This,
            /* [in] */ DXCONVFILTERTYPE eType);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetFilterType )( 
            IDXTConvolution __RPC_FAR * This,
            /* [out] */ DXCONVFILTERTYPE __RPC_FAR *peType);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetCustomFilter )( 
            IDXTConvolution __RPC_FAR * This,
            /* [in] */ float __RPC_FAR *pFilter,
            /* [in] */ SIZE Size);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetConvertToGray )( 
            IDXTConvolution __RPC_FAR * This,
            /* [in] */ BOOL bConvertToGray);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetConvertToGray )( 
            IDXTConvolution __RPC_FAR * This,
            /* [out] */ BOOL __RPC_FAR *pbConvertToGray);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetBias )( 
            IDXTConvolution __RPC_FAR * This,
            /* [in] */ float Bias);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetBias )( 
            IDXTConvolution __RPC_FAR * This,
            /* [out] */ float __RPC_FAR *pBias);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetExcludeAlpha )( 
            IDXTConvolution __RPC_FAR * This,
            /* [in] */ BOOL bExcludeAlpha);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetExcludeAlpha )( 
            IDXTConvolution __RPC_FAR * This,
            /* [out] */ BOOL __RPC_FAR *pbExcludeAlpha);
        
        END_INTERFACE
    } IDXTConvolutionVtbl;

    interface IDXTConvolution
    {
        CONST_VTBL struct IDXTConvolutionVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXTConvolution_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXTConvolution_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXTConvolution_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXTConvolution_SetFilterType(This,eType)	\
    (This)->lpVtbl -> SetFilterType(This,eType)

#define IDXTConvolution_GetFilterType(This,peType)	\
    (This)->lpVtbl -> GetFilterType(This,peType)

#define IDXTConvolution_SetCustomFilter(This,pFilter,Size)	\
    (This)->lpVtbl -> SetCustomFilter(This,pFilter,Size)

#define IDXTConvolution_SetConvertToGray(This,bConvertToGray)	\
    (This)->lpVtbl -> SetConvertToGray(This,bConvertToGray)

#define IDXTConvolution_GetConvertToGray(This,pbConvertToGray)	\
    (This)->lpVtbl -> GetConvertToGray(This,pbConvertToGray)

#define IDXTConvolution_SetBias(This,Bias)	\
    (This)->lpVtbl -> SetBias(This,Bias)

#define IDXTConvolution_GetBias(This,pBias)	\
    (This)->lpVtbl -> GetBias(This,pBias)

#define IDXTConvolution_SetExcludeAlpha(This,bExcludeAlpha)	\
    (This)->lpVtbl -> SetExcludeAlpha(This,bExcludeAlpha)

#define IDXTConvolution_GetExcludeAlpha(This,pbExcludeAlpha)	\
    (This)->lpVtbl -> GetExcludeAlpha(This,pbExcludeAlpha)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDXTConvolution_SetFilterType_Proxy( 
    IDXTConvolution __RPC_FAR * This,
    /* [in] */ DXCONVFILTERTYPE eType);


void __RPC_STUB IDXTConvolution_SetFilterType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTConvolution_GetFilterType_Proxy( 
    IDXTConvolution __RPC_FAR * This,
    /* [out] */ DXCONVFILTERTYPE __RPC_FAR *peType);


void __RPC_STUB IDXTConvolution_GetFilterType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTConvolution_SetCustomFilter_Proxy( 
    IDXTConvolution __RPC_FAR * This,
    /* [in] */ float __RPC_FAR *pFilter,
    /* [in] */ SIZE Size);


void __RPC_STUB IDXTConvolution_SetCustomFilter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTConvolution_SetConvertToGray_Proxy( 
    IDXTConvolution __RPC_FAR * This,
    /* [in] */ BOOL bConvertToGray);


void __RPC_STUB IDXTConvolution_SetConvertToGray_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTConvolution_GetConvertToGray_Proxy( 
    IDXTConvolution __RPC_FAR * This,
    /* [out] */ BOOL __RPC_FAR *pbConvertToGray);


void __RPC_STUB IDXTConvolution_GetConvertToGray_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTConvolution_SetBias_Proxy( 
    IDXTConvolution __RPC_FAR * This,
    /* [in] */ float Bias);


void __RPC_STUB IDXTConvolution_SetBias_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTConvolution_GetBias_Proxy( 
    IDXTConvolution __RPC_FAR * This,
    /* [out] */ float __RPC_FAR *pBias);


void __RPC_STUB IDXTConvolution_GetBias_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTConvolution_SetExcludeAlpha_Proxy( 
    IDXTConvolution __RPC_FAR * This,
    /* [in] */ BOOL bExcludeAlpha);


void __RPC_STUB IDXTConvolution_SetExcludeAlpha_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDXTConvolution_GetExcludeAlpha_Proxy( 
    IDXTConvolution __RPC_FAR * This,
    /* [out] */ BOOL __RPC_FAR *pbExcludeAlpha);


void __RPC_STUB IDXTConvolution_GetExcludeAlpha_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXTConvolution_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dxtmsft_0186 */
/* [local] */ 

typedef 
enum DXCOMPFUNC
    {	DXCOMPFUNC_SWAP_AB	= 0x10,
	DXCOMPFUNC_FUNCMASK	= 0xf,
	DXCOMPFUNC_CLEAR	= 0,
	DXCOMPFUNC_MIN	= DXCOMPFUNC_CLEAR + 1,
	DXCOMPFUNC_MAX	= DXCOMPFUNC_MIN + 1,
	DXCOMPFUNC_A	= DXCOMPFUNC_MAX + 1,
	DXCOMPFUNC_A_OVER_B	= DXCOMPFUNC_A + 1,
	DXCOMPFUNC_A_IN_B	= DXCOMPFUNC_A_OVER_B + 1,
	DXCOMPFUNC_A_OUT_B	= DXCOMPFUNC_A_IN_B + 1,
	DXCOMPFUNC_A_ATOP_B	= DXCOMPFUNC_A_OUT_B + 1,
	DXCOMPFUNC_A_SUBTRACT_B	= DXCOMPFUNC_A_ATOP_B + 1,
	DXCOMPFUNC_A_ADD_B	= DXCOMPFUNC_A_SUBTRACT_B + 1,
	DXCOMPFUNC_A_XOR_B	= DXCOMPFUNC_A_ADD_B + 1,
	DXCOMPFUNC_B	= DXCOMPFUNC_A | DXCOMPFUNC_SWAP_AB,
	DXCOMPFUNC_B_OVER_A	= DXCOMPFUNC_A_OVER_B | DXCOMPFUNC_SWAP_AB,
	DXCOMPFUNC_B_IN_A	= DXCOMPFUNC_A_IN_B | DXCOMPFUNC_SWAP_AB,
	DXCOMPFUNC_B_OUT_A	= DXCOMPFUNC_A_OUT_B | DXCOMPFUNC_SWAP_AB,
	DXCOMPFUNC_B_ATOP_A	= DXCOMPFUNC_A_ATOP_B | DXCOMPFUNC_SWAP_AB,
	DXCOMPFUNC_B_SUBTRACT_A	= DXCOMPFUNC_A_SUBTRACT_B | DXCOMPFUNC_SWAP_AB,
	DXCOMPFUNC_B_ADD_A	= DXCOMPFUNC_A_ADD_B | DXCOMPFUNC_SWAP_AB,
	DXCOMPFUNC_NUMFUNCS	= DXCOMPFUNC_B_ADD_A + 1
    }	DXCOMPFUNC;

typedef 
enum DXCOMPOSITEDISPID
    {	DISPID_DXCOMPOSITE_Function	= 1
    }	DXCOMPOSITEDISPID;



extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0186_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0186_v0_0_s_ifspec;

#ifndef __IDXTComposite_INTERFACE_DEFINED__
#define __IDXTComposite_INTERFACE_DEFINED__

/* interface IDXTComposite */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDXTComposite;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9A43A843-0831-11D1-817F-0000F87557DB")
    IDXTComposite : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Function( 
            /* [in] */ DXCOMPFUNC eFunc) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Function( 
            /* [retval][out] */ DXCOMPFUNC __RPC_FAR *peFunc) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXTCompositeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXTComposite __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXTComposite __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXTComposite __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IDXTComposite __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IDXTComposite __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IDXTComposite __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IDXTComposite __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Function )( 
            IDXTComposite __RPC_FAR * This,
            /* [in] */ DXCOMPFUNC eFunc);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Function )( 
            IDXTComposite __RPC_FAR * This,
            /* [retval][out] */ DXCOMPFUNC __RPC_FAR *peFunc);
        
        END_INTERFACE
    } IDXTCompositeVtbl;

    interface IDXTComposite
    {
        CONST_VTBL struct IDXTCompositeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXTComposite_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXTComposite_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXTComposite_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXTComposite_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDXTComposite_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDXTComposite_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDXTComposite_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDXTComposite_put_Function(This,eFunc)	\
    (This)->lpVtbl -> put_Function(This,eFunc)

#define IDXTComposite_get_Function(This,peFunc)	\
    (This)->lpVtbl -> get_Function(This,peFunc)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTComposite_put_Function_Proxy( 
    IDXTComposite __RPC_FAR * This,
    /* [in] */ DXCOMPFUNC eFunc);


void __RPC_STUB IDXTComposite_put_Function_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTComposite_get_Function_Proxy( 
    IDXTComposite __RPC_FAR * This,
    /* [retval][out] */ DXCOMPFUNC __RPC_FAR *peFunc);


void __RPC_STUB IDXTComposite_get_Function_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXTComposite_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dxtmsft_0187 */
/* [local] */ 

typedef 
enum DXWIPEDIRECTION
    {	DXWD_HORIZONTAL	= 0,
	DXWD_VERTICAL	= DXWD_HORIZONTAL + 1
    }	DXWIPEDIRECTION;

typedef 
enum DXWIPEDISPID
    {	DISPID_DXW_GradientSize	= DISPID_DXE_NEXT_ID,
	DISPID_DXW_WipeStyle	= DISPID_DXW_GradientSize + 1,
	DISPID_DXW_Motion	= DISPID_DXW_WipeStyle + 1
    }	DXWIPEDISPID;



extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0187_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0187_v0_0_s_ifspec;

#ifndef __IDXTWipe_INTERFACE_DEFINED__
#define __IDXTWipe_INTERFACE_DEFINED__

/* interface IDXTWipe */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDXTWipe;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AF279B2F-86EB-11D1-81BF-0000F87557DB")
    IDXTWipe : public IDXEffect
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GradientSize( 
            /* [retval][out] */ float __RPC_FAR *pPercentSize) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_GradientSize( 
            /* [in] */ float PercentSize) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_WipeStyle( 
            /* [retval][out] */ DXWIPEDIRECTION __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_WipeStyle( 
            /* [in] */ DXWIPEDIRECTION newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXTWipeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXTWipe __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXTWipe __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXTWipe __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IDXTWipe __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IDXTWipe __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IDXTWipe __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IDXTWipe __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Capabilities )( 
            IDXTWipe __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Progress )( 
            IDXTWipe __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Progress )( 
            IDXTWipe __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StepResolution )( 
            IDXTWipe __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Duration )( 
            IDXTWipe __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Duration )( 
            IDXTWipe __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_GradientSize )( 
            IDXTWipe __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pPercentSize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_GradientSize )( 
            IDXTWipe __RPC_FAR * This,
            /* [in] */ float PercentSize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_WipeStyle )( 
            IDXTWipe __RPC_FAR * This,
            /* [retval][out] */ DXWIPEDIRECTION __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_WipeStyle )( 
            IDXTWipe __RPC_FAR * This,
            /* [in] */ DXWIPEDIRECTION newVal);
        
        END_INTERFACE
    } IDXTWipeVtbl;

    interface IDXTWipe
    {
        CONST_VTBL struct IDXTWipeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXTWipe_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXTWipe_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXTWipe_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXTWipe_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDXTWipe_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDXTWipe_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDXTWipe_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDXTWipe_get_Capabilities(This,pVal)	\
    (This)->lpVtbl -> get_Capabilities(This,pVal)

#define IDXTWipe_get_Progress(This,pVal)	\
    (This)->lpVtbl -> get_Progress(This,pVal)

#define IDXTWipe_put_Progress(This,newVal)	\
    (This)->lpVtbl -> put_Progress(This,newVal)

#define IDXTWipe_get_StepResolution(This,pVal)	\
    (This)->lpVtbl -> get_StepResolution(This,pVal)

#define IDXTWipe_get_Duration(This,pVal)	\
    (This)->lpVtbl -> get_Duration(This,pVal)

#define IDXTWipe_put_Duration(This,newVal)	\
    (This)->lpVtbl -> put_Duration(This,newVal)


#define IDXTWipe_get_GradientSize(This,pPercentSize)	\
    (This)->lpVtbl -> get_GradientSize(This,pPercentSize)

#define IDXTWipe_put_GradientSize(This,PercentSize)	\
    (This)->lpVtbl -> put_GradientSize(This,PercentSize)

#define IDXTWipe_get_WipeStyle(This,pVal)	\
    (This)->lpVtbl -> get_WipeStyle(This,pVal)

#define IDXTWipe_put_WipeStyle(This,newVal)	\
    (This)->lpVtbl -> put_WipeStyle(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTWipe_get_GradientSize_Proxy( 
    IDXTWipe __RPC_FAR * This,
    /* [retval][out] */ float __RPC_FAR *pPercentSize);


void __RPC_STUB IDXTWipe_get_GradientSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTWipe_put_GradientSize_Proxy( 
    IDXTWipe __RPC_FAR * This,
    /* [in] */ float PercentSize);


void __RPC_STUB IDXTWipe_put_GradientSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTWipe_get_WipeStyle_Proxy( 
    IDXTWipe __RPC_FAR * This,
    /* [retval][out] */ DXWIPEDIRECTION __RPC_FAR *pVal);


void __RPC_STUB IDXTWipe_get_WipeStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTWipe_put_WipeStyle_Proxy( 
    IDXTWipe __RPC_FAR * This,
    /* [in] */ DXWIPEDIRECTION newVal);


void __RPC_STUB IDXTWipe_put_WipeStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXTWipe_INTERFACE_DEFINED__ */


#ifndef __IDXTWipe2_INTERFACE_DEFINED__
#define __IDXTWipe2_INTERFACE_DEFINED__

/* interface IDXTWipe2 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDXTWipe2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E1FF8091-442B-4801-88B6-2B47B1611FD2")
    IDXTWipe2 : public IDXTWipe
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Motion( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrMotion) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Motion( 
            /* [in] */ BSTR bstrMotion) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXTWipe2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXTWipe2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXTWipe2 __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXTWipe2 __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IDXTWipe2 __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IDXTWipe2 __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IDXTWipe2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IDXTWipe2 __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Capabilities )( 
            IDXTWipe2 __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Progress )( 
            IDXTWipe2 __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Progress )( 
            IDXTWipe2 __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StepResolution )( 
            IDXTWipe2 __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Duration )( 
            IDXTWipe2 __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Duration )( 
            IDXTWipe2 __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_GradientSize )( 
            IDXTWipe2 __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pPercentSize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_GradientSize )( 
            IDXTWipe2 __RPC_FAR * This,
            /* [in] */ float PercentSize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_WipeStyle )( 
            IDXTWipe2 __RPC_FAR * This,
            /* [retval][out] */ DXWIPEDIRECTION __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_WipeStyle )( 
            IDXTWipe2 __RPC_FAR * This,
            /* [in] */ DXWIPEDIRECTION newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Motion )( 
            IDXTWipe2 __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrMotion);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Motion )( 
            IDXTWipe2 __RPC_FAR * This,
            /* [in] */ BSTR bstrMotion);
        
        END_INTERFACE
    } IDXTWipe2Vtbl;

    interface IDXTWipe2
    {
        CONST_VTBL struct IDXTWipe2Vtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXTWipe2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXTWipe2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXTWipe2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXTWipe2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDXTWipe2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDXTWipe2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDXTWipe2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDXTWipe2_get_Capabilities(This,pVal)	\
    (This)->lpVtbl -> get_Capabilities(This,pVal)

#define IDXTWipe2_get_Progress(This,pVal)	\
    (This)->lpVtbl -> get_Progress(This,pVal)

#define IDXTWipe2_put_Progress(This,newVal)	\
    (This)->lpVtbl -> put_Progress(This,newVal)

#define IDXTWipe2_get_StepResolution(This,pVal)	\
    (This)->lpVtbl -> get_StepResolution(This,pVal)

#define IDXTWipe2_get_Duration(This,pVal)	\
    (This)->lpVtbl -> get_Duration(This,pVal)

#define IDXTWipe2_put_Duration(This,newVal)	\
    (This)->lpVtbl -> put_Duration(This,newVal)


#define IDXTWipe2_get_GradientSize(This,pPercentSize)	\
    (This)->lpVtbl -> get_GradientSize(This,pPercentSize)

#define IDXTWipe2_put_GradientSize(This,PercentSize)	\
    (This)->lpVtbl -> put_GradientSize(This,PercentSize)

#define IDXTWipe2_get_WipeStyle(This,pVal)	\
    (This)->lpVtbl -> get_WipeStyle(This,pVal)

#define IDXTWipe2_put_WipeStyle(This,newVal)	\
    (This)->lpVtbl -> put_WipeStyle(This,newVal)


#define IDXTWipe2_get_Motion(This,pbstrMotion)	\
    (This)->lpVtbl -> get_Motion(This,pbstrMotion)

#define IDXTWipe2_put_Motion(This,bstrMotion)	\
    (This)->lpVtbl -> put_Motion(This,bstrMotion)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTWipe2_get_Motion_Proxy( 
    IDXTWipe2 __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrMotion);


void __RPC_STUB IDXTWipe2_get_Motion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTWipe2_put_Motion_Proxy( 
    IDXTWipe2 __RPC_FAR * This,
    /* [in] */ BSTR bstrMotion);


void __RPC_STUB IDXTWipe2_put_Motion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXTWipe2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dxtmsft_0189 */
/* [local] */ 

typedef 
enum CRBLURDISPID
    {	DISPID_CRB_MakeShadow	= 1,
	DISPID_CRB_ShadowOpacity	= DISPID_CRB_MakeShadow + 1,
	DISPID_CRB_PixelRadius	= DISPID_CRB_ShadowOpacity + 1
    }	CRBLURDISPID;



extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0189_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0189_v0_0_s_ifspec;

#ifndef __ICrBlur_INTERFACE_DEFINED__
#define __ICrBlur_INTERFACE_DEFINED__

/* interface ICrBlur */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICrBlur;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9F7C7827-E87A-11d1-81E0-0000F87557DB")
    ICrBlur : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MakeShadow( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MakeShadow( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ShadowOpacity( 
            /* [retval][out] */ float __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ShadowOpacity( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PixelRadius( 
            /* [retval][out] */ float __RPC_FAR *pPixelRadius) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_PixelRadius( 
            /* [in] */ float PixelRadius) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICrBlurVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ICrBlur __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ICrBlur __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ICrBlur __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ICrBlur __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ICrBlur __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ICrBlur __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ICrBlur __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MakeShadow )( 
            ICrBlur __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_MakeShadow )( 
            ICrBlur __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ShadowOpacity )( 
            ICrBlur __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_ShadowOpacity )( 
            ICrBlur __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_PixelRadius )( 
            ICrBlur __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pPixelRadius);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_PixelRadius )( 
            ICrBlur __RPC_FAR * This,
            /* [in] */ float PixelRadius);
        
        END_INTERFACE
    } ICrBlurVtbl;

    interface ICrBlur
    {
        CONST_VTBL struct ICrBlurVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICrBlur_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICrBlur_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICrBlur_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICrBlur_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ICrBlur_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ICrBlur_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ICrBlur_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ICrBlur_get_MakeShadow(This,pVal)	\
    (This)->lpVtbl -> get_MakeShadow(This,pVal)

#define ICrBlur_put_MakeShadow(This,newVal)	\
    (This)->lpVtbl -> put_MakeShadow(This,newVal)

#define ICrBlur_get_ShadowOpacity(This,pVal)	\
    (This)->lpVtbl -> get_ShadowOpacity(This,pVal)

#define ICrBlur_put_ShadowOpacity(This,newVal)	\
    (This)->lpVtbl -> put_ShadowOpacity(This,newVal)

#define ICrBlur_get_PixelRadius(This,pPixelRadius)	\
    (This)->lpVtbl -> get_PixelRadius(This,pPixelRadius)

#define ICrBlur_put_PixelRadius(This,PixelRadius)	\
    (This)->lpVtbl -> put_PixelRadius(This,PixelRadius)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE ICrBlur_get_MakeShadow_Proxy( 
    ICrBlur __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pVal);


void __RPC_STUB ICrBlur_get_MakeShadow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ICrBlur_put_MakeShadow_Proxy( 
    ICrBlur __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB ICrBlur_put_MakeShadow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ICrBlur_get_ShadowOpacity_Proxy( 
    ICrBlur __RPC_FAR * This,
    /* [retval][out] */ float __RPC_FAR *pVal);


void __RPC_STUB ICrBlur_get_ShadowOpacity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ICrBlur_put_ShadowOpacity_Proxy( 
    ICrBlur __RPC_FAR * This,
    /* [in] */ float newVal);


void __RPC_STUB ICrBlur_put_ShadowOpacity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ICrBlur_get_PixelRadius_Proxy( 
    ICrBlur __RPC_FAR * This,
    /* [retval][out] */ float __RPC_FAR *pPixelRadius);


void __RPC_STUB ICrBlur_get_PixelRadius_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ICrBlur_put_PixelRadius_Proxy( 
    ICrBlur __RPC_FAR * This,
    /* [in] */ float PixelRadius);


void __RPC_STUB ICrBlur_put_PixelRadius_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICrBlur_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dxtmsft_0190 */
/* [local] */ 

typedef 
enum CRENGRAVEDISPID
    {	DISPID_CREN_Bias	= 1
    }	CRENGRAVEDISPID;



extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0190_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0190_v0_0_s_ifspec;

#ifndef __ICrEngrave_INTERFACE_DEFINED__
#define __ICrEngrave_INTERFACE_DEFINED__

/* interface ICrEngrave */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICrEngrave;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E4ACFB7F-053E-11d2-81EA-0000F87557DB")
    ICrEngrave : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Bias( 
            /* [retval][out] */ float __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Bias( 
            /* [in] */ float newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICrEngraveVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ICrEngrave __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ICrEngrave __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ICrEngrave __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ICrEngrave __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ICrEngrave __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ICrEngrave __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ICrEngrave __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Bias )( 
            ICrEngrave __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Bias )( 
            ICrEngrave __RPC_FAR * This,
            /* [in] */ float newVal);
        
        END_INTERFACE
    } ICrEngraveVtbl;

    interface ICrEngrave
    {
        CONST_VTBL struct ICrEngraveVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICrEngrave_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICrEngrave_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICrEngrave_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICrEngrave_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ICrEngrave_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ICrEngrave_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ICrEngrave_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ICrEngrave_get_Bias(This,pVal)	\
    (This)->lpVtbl -> get_Bias(This,pVal)

#define ICrEngrave_put_Bias(This,newVal)	\
    (This)->lpVtbl -> put_Bias(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE ICrEngrave_get_Bias_Proxy( 
    ICrEngrave __RPC_FAR * This,
    /* [retval][out] */ float __RPC_FAR *pVal);


void __RPC_STUB ICrEngrave_get_Bias_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ICrEngrave_put_Bias_Proxy( 
    ICrEngrave __RPC_FAR * This,
    /* [in] */ float newVal);


void __RPC_STUB ICrEngrave_put_Bias_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICrEngrave_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dxtmsft_0191 */
/* [local] */ 

typedef 
enum CREMBOSSDISPID
    {	DISPID_CREM_Bias	= 1
    }	CREMBOSSDISPID;



extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0191_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0191_v0_0_s_ifspec;

#ifndef __ICrEmboss_INTERFACE_DEFINED__
#define __ICrEmboss_INTERFACE_DEFINED__

/* interface ICrEmboss */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICrEmboss;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E4ACFB80-053E-11d2-81EA-0000F87557DB")
    ICrEmboss : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Bias( 
            /* [retval][out] */ float __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Bias( 
            /* [in] */ float newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICrEmbossVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ICrEmboss __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ICrEmboss __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ICrEmboss __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ICrEmboss __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ICrEmboss __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ICrEmboss __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ICrEmboss __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Bias )( 
            ICrEmboss __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Bias )( 
            ICrEmboss __RPC_FAR * This,
            /* [in] */ float newVal);
        
        END_INTERFACE
    } ICrEmbossVtbl;

    interface ICrEmboss
    {
        CONST_VTBL struct ICrEmbossVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICrEmboss_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICrEmboss_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICrEmboss_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICrEmboss_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ICrEmboss_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ICrEmboss_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ICrEmboss_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ICrEmboss_get_Bias(This,pVal)	\
    (This)->lpVtbl -> get_Bias(This,pVal)

#define ICrEmboss_put_Bias(This,newVal)	\
    (This)->lpVtbl -> put_Bias(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE ICrEmboss_get_Bias_Proxy( 
    ICrEmboss __RPC_FAR * This,
    /* [retval][out] */ float __RPC_FAR *pVal);


void __RPC_STUB ICrEmboss_get_Bias_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ICrEmboss_put_Bias_Proxy( 
    ICrEmboss __RPC_FAR * This,
    /* [in] */ float newVal);


void __RPC_STUB ICrEmboss_put_Bias_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICrEmboss_INTERFACE_DEFINED__ */


#ifndef __IDXTFade_INTERFACE_DEFINED__
#define __IDXTFade_INTERFACE_DEFINED__

/* interface IDXTFade */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDXTFade;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("16B280C4-EE70-11D1-9066-00C04FD9189D")
    IDXTFade : public IDXEffect
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Overlap( 
            /* [retval][out] */ float __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Overlap( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Center( 
            /* [retval][out] */ BOOL __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Center( 
            /* [in] */ BOOL newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXTFadeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXTFade __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXTFade __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXTFade __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IDXTFade __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IDXTFade __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IDXTFade __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IDXTFade __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Capabilities )( 
            IDXTFade __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Progress )( 
            IDXTFade __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Progress )( 
            IDXTFade __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StepResolution )( 
            IDXTFade __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Duration )( 
            IDXTFade __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Duration )( 
            IDXTFade __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Overlap )( 
            IDXTFade __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Overlap )( 
            IDXTFade __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Center )( 
            IDXTFade __RPC_FAR * This,
            /* [retval][out] */ BOOL __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Center )( 
            IDXTFade __RPC_FAR * This,
            /* [in] */ BOOL newVal);
        
        END_INTERFACE
    } IDXTFadeVtbl;

    interface IDXTFade
    {
        CONST_VTBL struct IDXTFadeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXTFade_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXTFade_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXTFade_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXTFade_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDXTFade_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDXTFade_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDXTFade_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDXTFade_get_Capabilities(This,pVal)	\
    (This)->lpVtbl -> get_Capabilities(This,pVal)

#define IDXTFade_get_Progress(This,pVal)	\
    (This)->lpVtbl -> get_Progress(This,pVal)

#define IDXTFade_put_Progress(This,newVal)	\
    (This)->lpVtbl -> put_Progress(This,newVal)

#define IDXTFade_get_StepResolution(This,pVal)	\
    (This)->lpVtbl -> get_StepResolution(This,pVal)

#define IDXTFade_get_Duration(This,pVal)	\
    (This)->lpVtbl -> get_Duration(This,pVal)

#define IDXTFade_put_Duration(This,newVal)	\
    (This)->lpVtbl -> put_Duration(This,newVal)


#define IDXTFade_get_Overlap(This,pVal)	\
    (This)->lpVtbl -> get_Overlap(This,pVal)

#define IDXTFade_put_Overlap(This,newVal)	\
    (This)->lpVtbl -> put_Overlap(This,newVal)

#define IDXTFade_get_Center(This,pVal)	\
    (This)->lpVtbl -> get_Center(This,pVal)

#define IDXTFade_put_Center(This,newVal)	\
    (This)->lpVtbl -> put_Center(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTFade_get_Overlap_Proxy( 
    IDXTFade __RPC_FAR * This,
    /* [retval][out] */ float __RPC_FAR *pVal);


void __RPC_STUB IDXTFade_get_Overlap_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTFade_put_Overlap_Proxy( 
    IDXTFade __RPC_FAR * This,
    /* [in] */ float newVal);


void __RPC_STUB IDXTFade_put_Overlap_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTFade_get_Center_Proxy( 
    IDXTFade __RPC_FAR * This,
    /* [retval][out] */ BOOL __RPC_FAR *pVal);


void __RPC_STUB IDXTFade_get_Center_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTFade_put_Center_Proxy( 
    IDXTFade __RPC_FAR * This,
    /* [in] */ BOOL newVal);


void __RPC_STUB IDXTFade_put_Center_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXTFade_INTERFACE_DEFINED__ */


#ifndef __IDXBasicImage_INTERFACE_DEFINED__
#define __IDXBasicImage_INTERFACE_DEFINED__

/* interface IDXBasicImage */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDXBasicImage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("16B280C7-EE70-11D1-9066-00C04FD9189D")
    IDXBasicImage : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Rotation( 
            /* [retval][out] */ int __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Rotation( 
            /* [in] */ int newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Mirror( 
            /* [retval][out] */ BOOL __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Mirror( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GrayScale( 
            /* [retval][out] */ BOOL __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_GrayScale( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Opacity( 
            /* [retval][out] */ float __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Opacity( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Invert( 
            /* [retval][out] */ BOOL __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Invert( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_XRay( 
            /* [retval][out] */ BOOL __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_XRay( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Mask( 
            /* [retval][out] */ BOOL __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Mask( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MaskColor( 
            /* [retval][out] */ int __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MaskColor( 
            /* [in] */ int newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXBasicImageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXBasicImage __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXBasicImage __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXBasicImage __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IDXBasicImage __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IDXBasicImage __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IDXBasicImage __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IDXBasicImage __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Rotation )( 
            IDXBasicImage __RPC_FAR * This,
            /* [retval][out] */ int __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Rotation )( 
            IDXBasicImage __RPC_FAR * This,
            /* [in] */ int newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Mirror )( 
            IDXBasicImage __RPC_FAR * This,
            /* [retval][out] */ BOOL __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Mirror )( 
            IDXBasicImage __RPC_FAR * This,
            /* [in] */ BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_GrayScale )( 
            IDXBasicImage __RPC_FAR * This,
            /* [retval][out] */ BOOL __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_GrayScale )( 
            IDXBasicImage __RPC_FAR * This,
            /* [in] */ BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Opacity )( 
            IDXBasicImage __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Opacity )( 
            IDXBasicImage __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Invert )( 
            IDXBasicImage __RPC_FAR * This,
            /* [retval][out] */ BOOL __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Invert )( 
            IDXBasicImage __RPC_FAR * This,
            /* [in] */ BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_XRay )( 
            IDXBasicImage __RPC_FAR * This,
            /* [retval][out] */ BOOL __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_XRay )( 
            IDXBasicImage __RPC_FAR * This,
            /* [in] */ BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Mask )( 
            IDXBasicImage __RPC_FAR * This,
            /* [retval][out] */ BOOL __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Mask )( 
            IDXBasicImage __RPC_FAR * This,
            /* [in] */ BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MaskColor )( 
            IDXBasicImage __RPC_FAR * This,
            /* [retval][out] */ int __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_MaskColor )( 
            IDXBasicImage __RPC_FAR * This,
            /* [in] */ int newVal);
        
        END_INTERFACE
    } IDXBasicImageVtbl;

    interface IDXBasicImage
    {
        CONST_VTBL struct IDXBasicImageVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXBasicImage_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXBasicImage_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXBasicImage_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXBasicImage_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDXBasicImage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDXBasicImage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDXBasicImage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDXBasicImage_get_Rotation(This,pVal)	\
    (This)->lpVtbl -> get_Rotation(This,pVal)

#define IDXBasicImage_put_Rotation(This,newVal)	\
    (This)->lpVtbl -> put_Rotation(This,newVal)

#define IDXBasicImage_get_Mirror(This,pVal)	\
    (This)->lpVtbl -> get_Mirror(This,pVal)

#define IDXBasicImage_put_Mirror(This,newVal)	\
    (This)->lpVtbl -> put_Mirror(This,newVal)

#define IDXBasicImage_get_GrayScale(This,pVal)	\
    (This)->lpVtbl -> get_GrayScale(This,pVal)

#define IDXBasicImage_put_GrayScale(This,newVal)	\
    (This)->lpVtbl -> put_GrayScale(This,newVal)

#define IDXBasicImage_get_Opacity(This,pVal)	\
    (This)->lpVtbl -> get_Opacity(This,pVal)

#define IDXBasicImage_put_Opacity(This,newVal)	\
    (This)->lpVtbl -> put_Opacity(This,newVal)

#define IDXBasicImage_get_Invert(This,pVal)	\
    (This)->lpVtbl -> get_Invert(This,pVal)

#define IDXBasicImage_put_Invert(This,newVal)	\
    (This)->lpVtbl -> put_Invert(This,newVal)

#define IDXBasicImage_get_XRay(This,pVal)	\
    (This)->lpVtbl -> get_XRay(This,pVal)

#define IDXBasicImage_put_XRay(This,newVal)	\
    (This)->lpVtbl -> put_XRay(This,newVal)

#define IDXBasicImage_get_Mask(This,pVal)	\
    (This)->lpVtbl -> get_Mask(This,pVal)

#define IDXBasicImage_put_Mask(This,newVal)	\
    (This)->lpVtbl -> put_Mask(This,newVal)

#define IDXBasicImage_get_MaskColor(This,pVal)	\
    (This)->lpVtbl -> get_MaskColor(This,pVal)

#define IDXBasicImage_put_MaskColor(This,newVal)	\
    (This)->lpVtbl -> put_MaskColor(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXBasicImage_get_Rotation_Proxy( 
    IDXBasicImage __RPC_FAR * This,
    /* [retval][out] */ int __RPC_FAR *pVal);


void __RPC_STUB IDXBasicImage_get_Rotation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXBasicImage_put_Rotation_Proxy( 
    IDXBasicImage __RPC_FAR * This,
    /* [in] */ int newVal);


void __RPC_STUB IDXBasicImage_put_Rotation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXBasicImage_get_Mirror_Proxy( 
    IDXBasicImage __RPC_FAR * This,
    /* [retval][out] */ BOOL __RPC_FAR *pVal);


void __RPC_STUB IDXBasicImage_get_Mirror_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXBasicImage_put_Mirror_Proxy( 
    IDXBasicImage __RPC_FAR * This,
    /* [in] */ BOOL newVal);


void __RPC_STUB IDXBasicImage_put_Mirror_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXBasicImage_get_GrayScale_Proxy( 
    IDXBasicImage __RPC_FAR * This,
    /* [retval][out] */ BOOL __RPC_FAR *pVal);


void __RPC_STUB IDXBasicImage_get_GrayScale_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXBasicImage_put_GrayScale_Proxy( 
    IDXBasicImage __RPC_FAR * This,
    /* [in] */ BOOL newVal);


void __RPC_STUB IDXBasicImage_put_GrayScale_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXBasicImage_get_Opacity_Proxy( 
    IDXBasicImage __RPC_FAR * This,
    /* [retval][out] */ float __RPC_FAR *pVal);


void __RPC_STUB IDXBasicImage_get_Opacity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXBasicImage_put_Opacity_Proxy( 
    IDXBasicImage __RPC_FAR * This,
    /* [in] */ float newVal);


void __RPC_STUB IDXBasicImage_put_Opacity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXBasicImage_get_Invert_Proxy( 
    IDXBasicImage __RPC_FAR * This,
    /* [retval][out] */ BOOL __RPC_FAR *pVal);


void __RPC_STUB IDXBasicImage_get_Invert_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXBasicImage_put_Invert_Proxy( 
    IDXBasicImage __RPC_FAR * This,
    /* [in] */ BOOL newVal);


void __RPC_STUB IDXBasicImage_put_Invert_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXBasicImage_get_XRay_Proxy( 
    IDXBasicImage __RPC_FAR * This,
    /* [retval][out] */ BOOL __RPC_FAR *pVal);


void __RPC_STUB IDXBasicImage_get_XRay_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXBasicImage_put_XRay_Proxy( 
    IDXBasicImage __RPC_FAR * This,
    /* [in] */ BOOL newVal);


void __RPC_STUB IDXBasicImage_put_XRay_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXBasicImage_get_Mask_Proxy( 
    IDXBasicImage __RPC_FAR * This,
    /* [retval][out] */ BOOL __RPC_FAR *pVal);


void __RPC_STUB IDXBasicImage_get_Mask_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXBasicImage_put_Mask_Proxy( 
    IDXBasicImage __RPC_FAR * This,
    /* [in] */ BOOL newVal);


void __RPC_STUB IDXBasicImage_put_Mask_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXBasicImage_get_MaskColor_Proxy( 
    IDXBasicImage __RPC_FAR * This,
    /* [retval][out] */ int __RPC_FAR *pVal);


void __RPC_STUB IDXBasicImage_get_MaskColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXBasicImage_put_MaskColor_Proxy( 
    IDXBasicImage __RPC_FAR * This,
    /* [in] */ int newVal);


void __RPC_STUB IDXBasicImage_put_MaskColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXBasicImage_INTERFACE_DEFINED__ */


#ifndef __IDXPixelate_INTERFACE_DEFINED__
#define __IDXPixelate_INTERFACE_DEFINED__

/* interface IDXPixelate */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDXPixelate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D33E180F-FBE9-11d1-906A-00C04FD9189D")
    IDXPixelate : public IDXEffect
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxSquare( 
            /* [retval][out] */ int __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxSquare( 
            /* [in] */ int newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXPixelateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXPixelate __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXPixelate __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXPixelate __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IDXPixelate __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IDXPixelate __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IDXPixelate __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IDXPixelate __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Capabilities )( 
            IDXPixelate __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Progress )( 
            IDXPixelate __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Progress )( 
            IDXPixelate __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StepResolution )( 
            IDXPixelate __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Duration )( 
            IDXPixelate __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Duration )( 
            IDXPixelate __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MaxSquare )( 
            IDXPixelate __RPC_FAR * This,
            /* [retval][out] */ int __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_MaxSquare )( 
            IDXPixelate __RPC_FAR * This,
            /* [in] */ int newVal);
        
        END_INTERFACE
    } IDXPixelateVtbl;

    interface IDXPixelate
    {
        CONST_VTBL struct IDXPixelateVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXPixelate_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXPixelate_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXPixelate_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXPixelate_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDXPixelate_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDXPixelate_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDXPixelate_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDXPixelate_get_Capabilities(This,pVal)	\
    (This)->lpVtbl -> get_Capabilities(This,pVal)

#define IDXPixelate_get_Progress(This,pVal)	\
    (This)->lpVtbl -> get_Progress(This,pVal)

#define IDXPixelate_put_Progress(This,newVal)	\
    (This)->lpVtbl -> put_Progress(This,newVal)

#define IDXPixelate_get_StepResolution(This,pVal)	\
    (This)->lpVtbl -> get_StepResolution(This,pVal)

#define IDXPixelate_get_Duration(This,pVal)	\
    (This)->lpVtbl -> get_Duration(This,pVal)

#define IDXPixelate_put_Duration(This,newVal)	\
    (This)->lpVtbl -> put_Duration(This,newVal)


#define IDXPixelate_get_MaxSquare(This,pVal)	\
    (This)->lpVtbl -> get_MaxSquare(This,pVal)

#define IDXPixelate_put_MaxSquare(This,newVal)	\
    (This)->lpVtbl -> put_MaxSquare(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXPixelate_get_MaxSquare_Proxy( 
    IDXPixelate __RPC_FAR * This,
    /* [retval][out] */ int __RPC_FAR *pVal);


void __RPC_STUB IDXPixelate_get_MaxSquare_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXPixelate_put_MaxSquare_Proxy( 
    IDXPixelate __RPC_FAR * This,
    /* [in] */ int newVal);


void __RPC_STUB IDXPixelate_put_MaxSquare_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXPixelate_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dxtmsft_0195 */
/* [local] */ 

typedef 
enum DISPID_CRIRIS
    {	DISPID_CRIRIS_IRISSTYLE	= 1,
	DISPID_CRIRIS_MOTION	= DISPID_CRIRIS_IRISSTYLE + 1
    }	DISPID_CRIRIS;



extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0195_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0195_v0_0_s_ifspec;

#ifndef __ICrIris_INTERFACE_DEFINED__
#define __ICrIris_INTERFACE_DEFINED__

/* interface ICrIris */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICrIris;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3F69F350-0379-11D2-A484-00C04F8EFB69")
    ICrIris : public IDXEffect
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_irisStyle( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_irisStyle( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICrIrisVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ICrIris __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ICrIris __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ICrIris __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ICrIris __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ICrIris __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ICrIris __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ICrIris __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Capabilities )( 
            ICrIris __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Progress )( 
            ICrIris __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Progress )( 
            ICrIris __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StepResolution )( 
            ICrIris __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Duration )( 
            ICrIris __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Duration )( 
            ICrIris __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_irisStyle )( 
            ICrIris __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_irisStyle )( 
            ICrIris __RPC_FAR * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } ICrIrisVtbl;

    interface ICrIris
    {
        CONST_VTBL struct ICrIrisVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICrIris_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICrIris_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICrIris_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICrIris_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ICrIris_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ICrIris_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ICrIris_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ICrIris_get_Capabilities(This,pVal)	\
    (This)->lpVtbl -> get_Capabilities(This,pVal)

#define ICrIris_get_Progress(This,pVal)	\
    (This)->lpVtbl -> get_Progress(This,pVal)

#define ICrIris_put_Progress(This,newVal)	\
    (This)->lpVtbl -> put_Progress(This,newVal)

#define ICrIris_get_StepResolution(This,pVal)	\
    (This)->lpVtbl -> get_StepResolution(This,pVal)

#define ICrIris_get_Duration(This,pVal)	\
    (This)->lpVtbl -> get_Duration(This,pVal)

#define ICrIris_put_Duration(This,newVal)	\
    (This)->lpVtbl -> put_Duration(This,newVal)


#define ICrIris_get_irisStyle(This,pVal)	\
    (This)->lpVtbl -> get_irisStyle(This,pVal)

#define ICrIris_put_irisStyle(This,newVal)	\
    (This)->lpVtbl -> put_irisStyle(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE ICrIris_get_irisStyle_Proxy( 
    ICrIris __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB ICrIris_get_irisStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ICrIris_put_irisStyle_Proxy( 
    ICrIris __RPC_FAR * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ICrIris_put_irisStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICrIris_INTERFACE_DEFINED__ */


#ifndef __ICrIris2_INTERFACE_DEFINED__
#define __ICrIris2_INTERFACE_DEFINED__

/* interface ICrIris2 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICrIris2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F7B06961-BA8C-4970-918B-1C60CB9FF180")
    ICrIris2 : public ICrIris
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Motion( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrMotion) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Motion( 
            /* [in] */ BSTR bstrMotion) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICrIris2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ICrIris2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ICrIris2 __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ICrIris2 __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ICrIris2 __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ICrIris2 __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ICrIris2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ICrIris2 __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Capabilities )( 
            ICrIris2 __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Progress )( 
            ICrIris2 __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Progress )( 
            ICrIris2 __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StepResolution )( 
            ICrIris2 __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Duration )( 
            ICrIris2 __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Duration )( 
            ICrIris2 __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_irisStyle )( 
            ICrIris2 __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_irisStyle )( 
            ICrIris2 __RPC_FAR * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Motion )( 
            ICrIris2 __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrMotion);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Motion )( 
            ICrIris2 __RPC_FAR * This,
            /* [in] */ BSTR bstrMotion);
        
        END_INTERFACE
    } ICrIris2Vtbl;

    interface ICrIris2
    {
        CONST_VTBL struct ICrIris2Vtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICrIris2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICrIris2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICrIris2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICrIris2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ICrIris2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ICrIris2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ICrIris2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ICrIris2_get_Capabilities(This,pVal)	\
    (This)->lpVtbl -> get_Capabilities(This,pVal)

#define ICrIris2_get_Progress(This,pVal)	\
    (This)->lpVtbl -> get_Progress(This,pVal)

#define ICrIris2_put_Progress(This,newVal)	\
    (This)->lpVtbl -> put_Progress(This,newVal)

#define ICrIris2_get_StepResolution(This,pVal)	\
    (This)->lpVtbl -> get_StepResolution(This,pVal)

#define ICrIris2_get_Duration(This,pVal)	\
    (This)->lpVtbl -> get_Duration(This,pVal)

#define ICrIris2_put_Duration(This,newVal)	\
    (This)->lpVtbl -> put_Duration(This,newVal)


#define ICrIris2_get_irisStyle(This,pVal)	\
    (This)->lpVtbl -> get_irisStyle(This,pVal)

#define ICrIris2_put_irisStyle(This,newVal)	\
    (This)->lpVtbl -> put_irisStyle(This,newVal)


#define ICrIris2_get_Motion(This,pbstrMotion)	\
    (This)->lpVtbl -> get_Motion(This,pbstrMotion)

#define ICrIris2_put_Motion(This,bstrMotion)	\
    (This)->lpVtbl -> put_Motion(This,bstrMotion)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE ICrIris2_get_Motion_Proxy( 
    ICrIris2 __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrMotion);


void __RPC_STUB ICrIris2_get_Motion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ICrIris2_put_Motion_Proxy( 
    ICrIris2 __RPC_FAR * This,
    /* [in] */ BSTR bstrMotion);


void __RPC_STUB ICrIris2_put_Motion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICrIris2_INTERFACE_DEFINED__ */


#ifndef __ICrSlide_INTERFACE_DEFINED__
#define __ICrSlide_INTERFACE_DEFINED__

/* interface ICrSlide */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICrSlide;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("810E402E-056B-11D2-A484-00C04F8EFB69")
    ICrSlide : public IDXEffect
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_bands( 
            /* [retval][out] */ short __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_bands( 
            /* [in] */ short newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_slideStyle( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_slideStyle( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICrSlideVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ICrSlide __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ICrSlide __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ICrSlide __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ICrSlide __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ICrSlide __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ICrSlide __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ICrSlide __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Capabilities )( 
            ICrSlide __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Progress )( 
            ICrSlide __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Progress )( 
            ICrSlide __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StepResolution )( 
            ICrSlide __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Duration )( 
            ICrSlide __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Duration )( 
            ICrSlide __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_bands )( 
            ICrSlide __RPC_FAR * This,
            /* [retval][out] */ short __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_bands )( 
            ICrSlide __RPC_FAR * This,
            /* [in] */ short newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_slideStyle )( 
            ICrSlide __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_slideStyle )( 
            ICrSlide __RPC_FAR * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } ICrSlideVtbl;

    interface ICrSlide
    {
        CONST_VTBL struct ICrSlideVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICrSlide_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICrSlide_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICrSlide_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICrSlide_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ICrSlide_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ICrSlide_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ICrSlide_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ICrSlide_get_Capabilities(This,pVal)	\
    (This)->lpVtbl -> get_Capabilities(This,pVal)

#define ICrSlide_get_Progress(This,pVal)	\
    (This)->lpVtbl -> get_Progress(This,pVal)

#define ICrSlide_put_Progress(This,newVal)	\
    (This)->lpVtbl -> put_Progress(This,newVal)

#define ICrSlide_get_StepResolution(This,pVal)	\
    (This)->lpVtbl -> get_StepResolution(This,pVal)

#define ICrSlide_get_Duration(This,pVal)	\
    (This)->lpVtbl -> get_Duration(This,pVal)

#define ICrSlide_put_Duration(This,newVal)	\
    (This)->lpVtbl -> put_Duration(This,newVal)


#define ICrSlide_get_bands(This,pVal)	\
    (This)->lpVtbl -> get_bands(This,pVal)

#define ICrSlide_put_bands(This,newVal)	\
    (This)->lpVtbl -> put_bands(This,newVal)

#define ICrSlide_get_slideStyle(This,pVal)	\
    (This)->lpVtbl -> get_slideStyle(This,pVal)

#define ICrSlide_put_slideStyle(This,newVal)	\
    (This)->lpVtbl -> put_slideStyle(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE ICrSlide_get_bands_Proxy( 
    ICrSlide __RPC_FAR * This,
    /* [retval][out] */ short __RPC_FAR *pVal);


void __RPC_STUB ICrSlide_get_bands_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ICrSlide_put_bands_Proxy( 
    ICrSlide __RPC_FAR * This,
    /* [in] */ short newVal);


void __RPC_STUB ICrSlide_put_bands_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ICrSlide_get_slideStyle_Proxy( 
    ICrSlide __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB ICrSlide_get_slideStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ICrSlide_put_slideStyle_Proxy( 
    ICrSlide __RPC_FAR * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ICrSlide_put_slideStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICrSlide_INTERFACE_DEFINED__ */


#ifndef __ICrRadialWipe_INTERFACE_DEFINED__
#define __ICrRadialWipe_INTERFACE_DEFINED__

/* interface ICrRadialWipe */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICrRadialWipe;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("424B71AE-0695-11D2-A484-00C04F8EFB69")
    ICrRadialWipe : public IDXEffect
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_wipeStyle( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_wipeStyle( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICrRadialWipeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ICrRadialWipe __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ICrRadialWipe __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ICrRadialWipe __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ICrRadialWipe __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ICrRadialWipe __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ICrRadialWipe __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ICrRadialWipe __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Capabilities )( 
            ICrRadialWipe __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Progress )( 
            ICrRadialWipe __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Progress )( 
            ICrRadialWipe __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StepResolution )( 
            ICrRadialWipe __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Duration )( 
            ICrRadialWipe __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Duration )( 
            ICrRadialWipe __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_wipeStyle )( 
            ICrRadialWipe __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_wipeStyle )( 
            ICrRadialWipe __RPC_FAR * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } ICrRadialWipeVtbl;

    interface ICrRadialWipe
    {
        CONST_VTBL struct ICrRadialWipeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICrRadialWipe_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICrRadialWipe_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICrRadialWipe_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICrRadialWipe_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ICrRadialWipe_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ICrRadialWipe_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ICrRadialWipe_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ICrRadialWipe_get_Capabilities(This,pVal)	\
    (This)->lpVtbl -> get_Capabilities(This,pVal)

#define ICrRadialWipe_get_Progress(This,pVal)	\
    (This)->lpVtbl -> get_Progress(This,pVal)

#define ICrRadialWipe_put_Progress(This,newVal)	\
    (This)->lpVtbl -> put_Progress(This,newVal)

#define ICrRadialWipe_get_StepResolution(This,pVal)	\
    (This)->lpVtbl -> get_StepResolution(This,pVal)

#define ICrRadialWipe_get_Duration(This,pVal)	\
    (This)->lpVtbl -> get_Duration(This,pVal)

#define ICrRadialWipe_put_Duration(This,newVal)	\
    (This)->lpVtbl -> put_Duration(This,newVal)


#define ICrRadialWipe_get_wipeStyle(This,pVal)	\
    (This)->lpVtbl -> get_wipeStyle(This,pVal)

#define ICrRadialWipe_put_wipeStyle(This,newVal)	\
    (This)->lpVtbl -> put_wipeStyle(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE ICrRadialWipe_get_wipeStyle_Proxy( 
    ICrRadialWipe __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB ICrRadialWipe_get_wipeStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ICrRadialWipe_put_wipeStyle_Proxy( 
    ICrRadialWipe __RPC_FAR * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ICrRadialWipe_put_wipeStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICrRadialWipe_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dxtmsft_0199 */
/* [local] */ 

typedef 
enum DISPID_CRBARN
    {	DISPID_CRBARN_MOTION	= 1,
	DISPID_CRBARN_ORIENTATION	= DISPID_CRBARN_MOTION + 1
    }	DISPID_CRBARN;



extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0199_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0199_v0_0_s_ifspec;

#ifndef __ICrBarn_INTERFACE_DEFINED__
#define __ICrBarn_INTERFACE_DEFINED__

/* interface ICrBarn */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICrBarn;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("276A2EE0-0B5D-11D2-A484-00C04F8EFB69")
    ICrBarn : public IDXEffect
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ICrBarnVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ICrBarn __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ICrBarn __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ICrBarn __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ICrBarn __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ICrBarn __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ICrBarn __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ICrBarn __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Capabilities )( 
            ICrBarn __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Progress )( 
            ICrBarn __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Progress )( 
            ICrBarn __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StepResolution )( 
            ICrBarn __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Duration )( 
            ICrBarn __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Duration )( 
            ICrBarn __RPC_FAR * This,
            /* [in] */ float newVal);
        
        END_INTERFACE
    } ICrBarnVtbl;

    interface ICrBarn
    {
        CONST_VTBL struct ICrBarnVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICrBarn_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICrBarn_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICrBarn_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICrBarn_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ICrBarn_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ICrBarn_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ICrBarn_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ICrBarn_get_Capabilities(This,pVal)	\
    (This)->lpVtbl -> get_Capabilities(This,pVal)

#define ICrBarn_get_Progress(This,pVal)	\
    (This)->lpVtbl -> get_Progress(This,pVal)

#define ICrBarn_put_Progress(This,newVal)	\
    (This)->lpVtbl -> put_Progress(This,newVal)

#define ICrBarn_get_StepResolution(This,pVal)	\
    (This)->lpVtbl -> get_StepResolution(This,pVal)

#define ICrBarn_get_Duration(This,pVal)	\
    (This)->lpVtbl -> get_Duration(This,pVal)

#define ICrBarn_put_Duration(This,newVal)	\
    (This)->lpVtbl -> put_Duration(This,newVal)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICrBarn_INTERFACE_DEFINED__ */


#ifndef __ICrBarn2_INTERFACE_DEFINED__
#define __ICrBarn2_INTERFACE_DEFINED__

/* interface ICrBarn2 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICrBarn2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B66A7A1B-8FC6-448C-A2EB-3C55957478A1")
    ICrBarn2 : public ICrBarn
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Motion( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrMotion) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Motion( 
            /* [in] */ BSTR bstrMotion) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Orientation( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrOrientation) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Orientation( 
            /* [in] */ BSTR bstrOrientation) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICrBarn2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ICrBarn2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ICrBarn2 __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ICrBarn2 __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ICrBarn2 __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ICrBarn2 __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ICrBarn2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ICrBarn2 __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Capabilities )( 
            ICrBarn2 __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Progress )( 
            ICrBarn2 __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Progress )( 
            ICrBarn2 __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StepResolution )( 
            ICrBarn2 __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Duration )( 
            ICrBarn2 __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Duration )( 
            ICrBarn2 __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Motion )( 
            ICrBarn2 __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrMotion);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Motion )( 
            ICrBarn2 __RPC_FAR * This,
            /* [in] */ BSTR bstrMotion);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Orientation )( 
            ICrBarn2 __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrOrientation);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Orientation )( 
            ICrBarn2 __RPC_FAR * This,
            /* [in] */ BSTR bstrOrientation);
        
        END_INTERFACE
    } ICrBarn2Vtbl;

    interface ICrBarn2
    {
        CONST_VTBL struct ICrBarn2Vtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICrBarn2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICrBarn2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICrBarn2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICrBarn2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ICrBarn2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ICrBarn2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ICrBarn2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ICrBarn2_get_Capabilities(This,pVal)	\
    (This)->lpVtbl -> get_Capabilities(This,pVal)

#define ICrBarn2_get_Progress(This,pVal)	\
    (This)->lpVtbl -> get_Progress(This,pVal)

#define ICrBarn2_put_Progress(This,newVal)	\
    (This)->lpVtbl -> put_Progress(This,newVal)

#define ICrBarn2_get_StepResolution(This,pVal)	\
    (This)->lpVtbl -> get_StepResolution(This,pVal)

#define ICrBarn2_get_Duration(This,pVal)	\
    (This)->lpVtbl -> get_Duration(This,pVal)

#define ICrBarn2_put_Duration(This,newVal)	\
    (This)->lpVtbl -> put_Duration(This,newVal)



#define ICrBarn2_get_Motion(This,pbstrMotion)	\
    (This)->lpVtbl -> get_Motion(This,pbstrMotion)

#define ICrBarn2_put_Motion(This,bstrMotion)	\
    (This)->lpVtbl -> put_Motion(This,bstrMotion)

#define ICrBarn2_get_Orientation(This,pbstrOrientation)	\
    (This)->lpVtbl -> get_Orientation(This,pbstrOrientation)

#define ICrBarn2_put_Orientation(This,bstrOrientation)	\
    (This)->lpVtbl -> put_Orientation(This,bstrOrientation)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE ICrBarn2_get_Motion_Proxy( 
    ICrBarn2 __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrMotion);


void __RPC_STUB ICrBarn2_get_Motion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ICrBarn2_put_Motion_Proxy( 
    ICrBarn2 __RPC_FAR * This,
    /* [in] */ BSTR bstrMotion);


void __RPC_STUB ICrBarn2_put_Motion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ICrBarn2_get_Orientation_Proxy( 
    ICrBarn2 __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrOrientation);


void __RPC_STUB ICrBarn2_get_Orientation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ICrBarn2_put_Orientation_Proxy( 
    ICrBarn2 __RPC_FAR * This,
    /* [in] */ BSTR bstrOrientation);


void __RPC_STUB ICrBarn2_put_Orientation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICrBarn2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dxtmsft_0201 */
/* [local] */ 

typedef 
enum DISPID_CRBLINDS
    {	DISPID_CRBLINDS_BANDS	= 1,
	DISPID_CRBLINDS_DIRECTION	= DISPID_CRBLINDS_BANDS + 1
    }	DISPID_CRBLINDS;



extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0201_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0201_v0_0_s_ifspec;

#ifndef __ICrBlinds_INTERFACE_DEFINED__
#define __ICrBlinds_INTERFACE_DEFINED__

/* interface ICrBlinds */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICrBlinds;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5AF5C340-0BA9-11d2-A484-00C04F8EFB69")
    ICrBlinds : public IDXEffect
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_bands( 
            /* [retval][out] */ short __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_bands( 
            /* [in] */ short newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICrBlindsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ICrBlinds __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ICrBlinds __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ICrBlinds __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ICrBlinds __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ICrBlinds __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ICrBlinds __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ICrBlinds __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Capabilities )( 
            ICrBlinds __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Progress )( 
            ICrBlinds __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Progress )( 
            ICrBlinds __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StepResolution )( 
            ICrBlinds __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Duration )( 
            ICrBlinds __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Duration )( 
            ICrBlinds __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_bands )( 
            ICrBlinds __RPC_FAR * This,
            /* [retval][out] */ short __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_bands )( 
            ICrBlinds __RPC_FAR * This,
            /* [in] */ short newVal);
        
        END_INTERFACE
    } ICrBlindsVtbl;

    interface ICrBlinds
    {
        CONST_VTBL struct ICrBlindsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICrBlinds_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICrBlinds_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICrBlinds_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICrBlinds_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ICrBlinds_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ICrBlinds_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ICrBlinds_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ICrBlinds_get_Capabilities(This,pVal)	\
    (This)->lpVtbl -> get_Capabilities(This,pVal)

#define ICrBlinds_get_Progress(This,pVal)	\
    (This)->lpVtbl -> get_Progress(This,pVal)

#define ICrBlinds_put_Progress(This,newVal)	\
    (This)->lpVtbl -> put_Progress(This,newVal)

#define ICrBlinds_get_StepResolution(This,pVal)	\
    (This)->lpVtbl -> get_StepResolution(This,pVal)

#define ICrBlinds_get_Duration(This,pVal)	\
    (This)->lpVtbl -> get_Duration(This,pVal)

#define ICrBlinds_put_Duration(This,newVal)	\
    (This)->lpVtbl -> put_Duration(This,newVal)


#define ICrBlinds_get_bands(This,pVal)	\
    (This)->lpVtbl -> get_bands(This,pVal)

#define ICrBlinds_put_bands(This,newVal)	\
    (This)->lpVtbl -> put_bands(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE ICrBlinds_get_bands_Proxy( 
    ICrBlinds __RPC_FAR * This,
    /* [retval][out] */ short __RPC_FAR *pVal);


void __RPC_STUB ICrBlinds_get_bands_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ICrBlinds_put_bands_Proxy( 
    ICrBlinds __RPC_FAR * This,
    /* [in] */ short newVal);


void __RPC_STUB ICrBlinds_put_bands_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICrBlinds_INTERFACE_DEFINED__ */


#ifndef __ICrBlinds2_INTERFACE_DEFINED__
#define __ICrBlinds2_INTERFACE_DEFINED__

/* interface ICrBlinds2 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICrBlinds2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7059D403-599A-4264-8140-641EB8AE1F64")
    ICrBlinds2 : public ICrBlinds
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Direction( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrDirection) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Direction( 
            /* [in] */ BSTR bstrDirection) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICrBlinds2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ICrBlinds2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ICrBlinds2 __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ICrBlinds2 __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ICrBlinds2 __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ICrBlinds2 __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ICrBlinds2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ICrBlinds2 __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Capabilities )( 
            ICrBlinds2 __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Progress )( 
            ICrBlinds2 __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Progress )( 
            ICrBlinds2 __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StepResolution )( 
            ICrBlinds2 __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Duration )( 
            ICrBlinds2 __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Duration )( 
            ICrBlinds2 __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_bands )( 
            ICrBlinds2 __RPC_FAR * This,
            /* [retval][out] */ short __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_bands )( 
            ICrBlinds2 __RPC_FAR * This,
            /* [in] */ short newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Direction )( 
            ICrBlinds2 __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrDirection);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Direction )( 
            ICrBlinds2 __RPC_FAR * This,
            /* [in] */ BSTR bstrDirection);
        
        END_INTERFACE
    } ICrBlinds2Vtbl;

    interface ICrBlinds2
    {
        CONST_VTBL struct ICrBlinds2Vtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICrBlinds2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICrBlinds2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICrBlinds2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICrBlinds2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ICrBlinds2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ICrBlinds2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ICrBlinds2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ICrBlinds2_get_Capabilities(This,pVal)	\
    (This)->lpVtbl -> get_Capabilities(This,pVal)

#define ICrBlinds2_get_Progress(This,pVal)	\
    (This)->lpVtbl -> get_Progress(This,pVal)

#define ICrBlinds2_put_Progress(This,newVal)	\
    (This)->lpVtbl -> put_Progress(This,newVal)

#define ICrBlinds2_get_StepResolution(This,pVal)	\
    (This)->lpVtbl -> get_StepResolution(This,pVal)

#define ICrBlinds2_get_Duration(This,pVal)	\
    (This)->lpVtbl -> get_Duration(This,pVal)

#define ICrBlinds2_put_Duration(This,newVal)	\
    (This)->lpVtbl -> put_Duration(This,newVal)


#define ICrBlinds2_get_bands(This,pVal)	\
    (This)->lpVtbl -> get_bands(This,pVal)

#define ICrBlinds2_put_bands(This,newVal)	\
    (This)->lpVtbl -> put_bands(This,newVal)


#define ICrBlinds2_get_Direction(This,pbstrDirection)	\
    (This)->lpVtbl -> get_Direction(This,pbstrDirection)

#define ICrBlinds2_put_Direction(This,bstrDirection)	\
    (This)->lpVtbl -> put_Direction(This,bstrDirection)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE ICrBlinds2_get_Direction_Proxy( 
    ICrBlinds2 __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrDirection);


void __RPC_STUB ICrBlinds2_get_Direction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ICrBlinds2_put_Direction_Proxy( 
    ICrBlinds2 __RPC_FAR * This,
    /* [in] */ BSTR bstrDirection);


void __RPC_STUB ICrBlinds2_put_Direction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICrBlinds2_INTERFACE_DEFINED__ */


#ifndef __ICrInset_INTERFACE_DEFINED__
#define __ICrInset_INTERFACE_DEFINED__

/* interface ICrInset */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICrInset;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("05C5EE20-0BA6-11d2-A484-00C04F8EFB69")
    ICrInset : public IDXEffect
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ICrInsetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ICrInset __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ICrInset __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ICrInset __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ICrInset __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ICrInset __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ICrInset __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ICrInset __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Capabilities )( 
            ICrInset __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Progress )( 
            ICrInset __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Progress )( 
            ICrInset __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StepResolution )( 
            ICrInset __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Duration )( 
            ICrInset __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Duration )( 
            ICrInset __RPC_FAR * This,
            /* [in] */ float newVal);
        
        END_INTERFACE
    } ICrInsetVtbl;

    interface ICrInset
    {
        CONST_VTBL struct ICrInsetVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICrInset_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICrInset_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICrInset_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICrInset_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ICrInset_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ICrInset_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ICrInset_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ICrInset_get_Capabilities(This,pVal)	\
    (This)->lpVtbl -> get_Capabilities(This,pVal)

#define ICrInset_get_Progress(This,pVal)	\
    (This)->lpVtbl -> get_Progress(This,pVal)

#define ICrInset_put_Progress(This,newVal)	\
    (This)->lpVtbl -> put_Progress(This,newVal)

#define ICrInset_get_StepResolution(This,pVal)	\
    (This)->lpVtbl -> get_StepResolution(This,pVal)

#define ICrInset_get_Duration(This,pVal)	\
    (This)->lpVtbl -> get_Duration(This,pVal)

#define ICrInset_put_Duration(This,newVal)	\
    (This)->lpVtbl -> put_Duration(This,newVal)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICrInset_INTERFACE_DEFINED__ */


#ifndef __ICrStretch_INTERFACE_DEFINED__
#define __ICrStretch_INTERFACE_DEFINED__

/* interface ICrStretch */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICrStretch;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6684AF00-0A87-11d2-A484-00C04F8EFB69")
    ICrStretch : public IDXEffect
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_stretchStyle( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_stretchStyle( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICrStretchVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ICrStretch __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ICrStretch __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ICrStretch __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ICrStretch __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ICrStretch __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ICrStretch __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ICrStretch __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Capabilities )( 
            ICrStretch __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Progress )( 
            ICrStretch __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Progress )( 
            ICrStretch __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StepResolution )( 
            ICrStretch __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Duration )( 
            ICrStretch __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Duration )( 
            ICrStretch __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_stretchStyle )( 
            ICrStretch __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_stretchStyle )( 
            ICrStretch __RPC_FAR * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } ICrStretchVtbl;

    interface ICrStretch
    {
        CONST_VTBL struct ICrStretchVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICrStretch_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICrStretch_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICrStretch_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICrStretch_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ICrStretch_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ICrStretch_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ICrStretch_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ICrStretch_get_Capabilities(This,pVal)	\
    (This)->lpVtbl -> get_Capabilities(This,pVal)

#define ICrStretch_get_Progress(This,pVal)	\
    (This)->lpVtbl -> get_Progress(This,pVal)

#define ICrStretch_put_Progress(This,newVal)	\
    (This)->lpVtbl -> put_Progress(This,newVal)

#define ICrStretch_get_StepResolution(This,pVal)	\
    (This)->lpVtbl -> get_StepResolution(This,pVal)

#define ICrStretch_get_Duration(This,pVal)	\
    (This)->lpVtbl -> get_Duration(This,pVal)

#define ICrStretch_put_Duration(This,newVal)	\
    (This)->lpVtbl -> put_Duration(This,newVal)


#define ICrStretch_get_stretchStyle(This,pVal)	\
    (This)->lpVtbl -> get_stretchStyle(This,pVal)

#define ICrStretch_put_stretchStyle(This,newVal)	\
    (This)->lpVtbl -> put_stretchStyle(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE ICrStretch_get_stretchStyle_Proxy( 
    ICrStretch __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB ICrStretch_get_stretchStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ICrStretch_put_stretchStyle_Proxy( 
    ICrStretch __RPC_FAR * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ICrStretch_put_stretchStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICrStretch_INTERFACE_DEFINED__ */


#ifndef __IDXTGridSize_INTERFACE_DEFINED__
#define __IDXTGridSize_INTERFACE_DEFINED__

/* interface IDXTGridSize */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDXTGridSize;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D6BBE91E-FF60-11d2-8F6E-00A0C9697274")
    IDXTGridSize : public IDXEffect
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_gridSizeX( 
            /* [retval][out] */ short __RPC_FAR *pX) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_gridSizeX( 
            /* [in] */ short newX) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_gridSizeY( 
            /* [retval][out] */ short __RPC_FAR *pY) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_gridSizeY( 
            /* [in] */ short newY) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXTGridSizeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXTGridSize __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXTGridSize __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXTGridSize __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IDXTGridSize __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IDXTGridSize __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IDXTGridSize __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IDXTGridSize __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Capabilities )( 
            IDXTGridSize __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Progress )( 
            IDXTGridSize __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Progress )( 
            IDXTGridSize __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StepResolution )( 
            IDXTGridSize __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Duration )( 
            IDXTGridSize __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Duration )( 
            IDXTGridSize __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_gridSizeX )( 
            IDXTGridSize __RPC_FAR * This,
            /* [retval][out] */ short __RPC_FAR *pX);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_gridSizeX )( 
            IDXTGridSize __RPC_FAR * This,
            /* [in] */ short newX);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_gridSizeY )( 
            IDXTGridSize __RPC_FAR * This,
            /* [retval][out] */ short __RPC_FAR *pY);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_gridSizeY )( 
            IDXTGridSize __RPC_FAR * This,
            /* [in] */ short newY);
        
        END_INTERFACE
    } IDXTGridSizeVtbl;

    interface IDXTGridSize
    {
        CONST_VTBL struct IDXTGridSizeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXTGridSize_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXTGridSize_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXTGridSize_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXTGridSize_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDXTGridSize_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDXTGridSize_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDXTGridSize_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDXTGridSize_get_Capabilities(This,pVal)	\
    (This)->lpVtbl -> get_Capabilities(This,pVal)

#define IDXTGridSize_get_Progress(This,pVal)	\
    (This)->lpVtbl -> get_Progress(This,pVal)

#define IDXTGridSize_put_Progress(This,newVal)	\
    (This)->lpVtbl -> put_Progress(This,newVal)

#define IDXTGridSize_get_StepResolution(This,pVal)	\
    (This)->lpVtbl -> get_StepResolution(This,pVal)

#define IDXTGridSize_get_Duration(This,pVal)	\
    (This)->lpVtbl -> get_Duration(This,pVal)

#define IDXTGridSize_put_Duration(This,newVal)	\
    (This)->lpVtbl -> put_Duration(This,newVal)


#define IDXTGridSize_get_gridSizeX(This,pX)	\
    (This)->lpVtbl -> get_gridSizeX(This,pX)

#define IDXTGridSize_put_gridSizeX(This,newX)	\
    (This)->lpVtbl -> put_gridSizeX(This,newX)

#define IDXTGridSize_get_gridSizeY(This,pY)	\
    (This)->lpVtbl -> get_gridSizeY(This,pY)

#define IDXTGridSize_put_gridSizeY(This,newY)	\
    (This)->lpVtbl -> put_gridSizeY(This,newY)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTGridSize_get_gridSizeX_Proxy( 
    IDXTGridSize __RPC_FAR * This,
    /* [retval][out] */ short __RPC_FAR *pX);


void __RPC_STUB IDXTGridSize_get_gridSizeX_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTGridSize_put_gridSizeX_Proxy( 
    IDXTGridSize __RPC_FAR * This,
    /* [in] */ short newX);


void __RPC_STUB IDXTGridSize_put_gridSizeX_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTGridSize_get_gridSizeY_Proxy( 
    IDXTGridSize __RPC_FAR * This,
    /* [retval][out] */ short __RPC_FAR *pY);


void __RPC_STUB IDXTGridSize_get_gridSizeY_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTGridSize_put_gridSizeY_Proxy( 
    IDXTGridSize __RPC_FAR * This,
    /* [in] */ short newY);


void __RPC_STUB IDXTGridSize_put_gridSizeY_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXTGridSize_INTERFACE_DEFINED__ */


#ifndef __ICrSpiral_INTERFACE_DEFINED__
#define __ICrSpiral_INTERFACE_DEFINED__

/* interface ICrSpiral */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICrSpiral;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0DE527A0-0C7E-11d2-A484-00C04F8EFB69")
    ICrSpiral : public IDXTGridSize
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ICrSpiralVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ICrSpiral __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ICrSpiral __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ICrSpiral __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ICrSpiral __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ICrSpiral __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ICrSpiral __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ICrSpiral __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Capabilities )( 
            ICrSpiral __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Progress )( 
            ICrSpiral __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Progress )( 
            ICrSpiral __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StepResolution )( 
            ICrSpiral __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Duration )( 
            ICrSpiral __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Duration )( 
            ICrSpiral __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_gridSizeX )( 
            ICrSpiral __RPC_FAR * This,
            /* [retval][out] */ short __RPC_FAR *pX);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_gridSizeX )( 
            ICrSpiral __RPC_FAR * This,
            /* [in] */ short newX);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_gridSizeY )( 
            ICrSpiral __RPC_FAR * This,
            /* [retval][out] */ short __RPC_FAR *pY);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_gridSizeY )( 
            ICrSpiral __RPC_FAR * This,
            /* [in] */ short newY);
        
        END_INTERFACE
    } ICrSpiralVtbl;

    interface ICrSpiral
    {
        CONST_VTBL struct ICrSpiralVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICrSpiral_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICrSpiral_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICrSpiral_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICrSpiral_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ICrSpiral_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ICrSpiral_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ICrSpiral_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ICrSpiral_get_Capabilities(This,pVal)	\
    (This)->lpVtbl -> get_Capabilities(This,pVal)

#define ICrSpiral_get_Progress(This,pVal)	\
    (This)->lpVtbl -> get_Progress(This,pVal)

#define ICrSpiral_put_Progress(This,newVal)	\
    (This)->lpVtbl -> put_Progress(This,newVal)

#define ICrSpiral_get_StepResolution(This,pVal)	\
    (This)->lpVtbl -> get_StepResolution(This,pVal)

#define ICrSpiral_get_Duration(This,pVal)	\
    (This)->lpVtbl -> get_Duration(This,pVal)

#define ICrSpiral_put_Duration(This,newVal)	\
    (This)->lpVtbl -> put_Duration(This,newVal)


#define ICrSpiral_get_gridSizeX(This,pX)	\
    (This)->lpVtbl -> get_gridSizeX(This,pX)

#define ICrSpiral_put_gridSizeX(This,newX)	\
    (This)->lpVtbl -> put_gridSizeX(This,newX)

#define ICrSpiral_get_gridSizeY(This,pY)	\
    (This)->lpVtbl -> get_gridSizeY(This,pY)

#define ICrSpiral_put_gridSizeY(This,newY)	\
    (This)->lpVtbl -> put_gridSizeY(This,newY)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICrSpiral_INTERFACE_DEFINED__ */


#ifndef __ICrZigzag_INTERFACE_DEFINED__
#define __ICrZigzag_INTERFACE_DEFINED__

/* interface ICrZigzag */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICrZigzag;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4E5A64A0-0C8B-11d2-A484-00C04F8EFB69")
    ICrZigzag : public IDXTGridSize
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ICrZigzagVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ICrZigzag __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ICrZigzag __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ICrZigzag __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ICrZigzag __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ICrZigzag __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ICrZigzag __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ICrZigzag __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Capabilities )( 
            ICrZigzag __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Progress )( 
            ICrZigzag __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Progress )( 
            ICrZigzag __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StepResolution )( 
            ICrZigzag __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Duration )( 
            ICrZigzag __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Duration )( 
            ICrZigzag __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_gridSizeX )( 
            ICrZigzag __RPC_FAR * This,
            /* [retval][out] */ short __RPC_FAR *pX);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_gridSizeX )( 
            ICrZigzag __RPC_FAR * This,
            /* [in] */ short newX);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_gridSizeY )( 
            ICrZigzag __RPC_FAR * This,
            /* [retval][out] */ short __RPC_FAR *pY);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_gridSizeY )( 
            ICrZigzag __RPC_FAR * This,
            /* [in] */ short newY);
        
        END_INTERFACE
    } ICrZigzagVtbl;

    interface ICrZigzag
    {
        CONST_VTBL struct ICrZigzagVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICrZigzag_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICrZigzag_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICrZigzag_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICrZigzag_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ICrZigzag_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ICrZigzag_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ICrZigzag_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ICrZigzag_get_Capabilities(This,pVal)	\
    (This)->lpVtbl -> get_Capabilities(This,pVal)

#define ICrZigzag_get_Progress(This,pVal)	\
    (This)->lpVtbl -> get_Progress(This,pVal)

#define ICrZigzag_put_Progress(This,newVal)	\
    (This)->lpVtbl -> put_Progress(This,newVal)

#define ICrZigzag_get_StepResolution(This,pVal)	\
    (This)->lpVtbl -> get_StepResolution(This,pVal)

#define ICrZigzag_get_Duration(This,pVal)	\
    (This)->lpVtbl -> get_Duration(This,pVal)

#define ICrZigzag_put_Duration(This,newVal)	\
    (This)->lpVtbl -> put_Duration(This,newVal)


#define ICrZigzag_get_gridSizeX(This,pX)	\
    (This)->lpVtbl -> get_gridSizeX(This,pX)

#define ICrZigzag_put_gridSizeX(This,newX)	\
    (This)->lpVtbl -> put_gridSizeX(This,newX)

#define ICrZigzag_get_gridSizeY(This,pY)	\
    (This)->lpVtbl -> get_gridSizeY(This,pY)

#define ICrZigzag_put_gridSizeY(This,newY)	\
    (This)->lpVtbl -> put_gridSizeY(This,newY)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICrZigzag_INTERFACE_DEFINED__ */


#ifndef __ICrWheel_INTERFACE_DEFINED__
#define __ICrWheel_INTERFACE_DEFINED__

/* interface ICrWheel */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICrWheel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3943DE80-1464-11d2-A484-00C04F8EFB69")
    ICrWheel : public IDXEffect
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_spokes( 
            /* [retval][out] */ short __RPC_FAR *pX) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_spokes( 
            /* [in] */ short newX) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICrWheelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ICrWheel __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ICrWheel __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ICrWheel __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ICrWheel __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ICrWheel __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ICrWheel __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ICrWheel __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Capabilities )( 
            ICrWheel __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Progress )( 
            ICrWheel __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Progress )( 
            ICrWheel __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StepResolution )( 
            ICrWheel __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Duration )( 
            ICrWheel __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Duration )( 
            ICrWheel __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_spokes )( 
            ICrWheel __RPC_FAR * This,
            /* [retval][out] */ short __RPC_FAR *pX);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_spokes )( 
            ICrWheel __RPC_FAR * This,
            /* [in] */ short newX);
        
        END_INTERFACE
    } ICrWheelVtbl;

    interface ICrWheel
    {
        CONST_VTBL struct ICrWheelVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICrWheel_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICrWheel_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICrWheel_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICrWheel_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ICrWheel_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ICrWheel_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ICrWheel_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ICrWheel_get_Capabilities(This,pVal)	\
    (This)->lpVtbl -> get_Capabilities(This,pVal)

#define ICrWheel_get_Progress(This,pVal)	\
    (This)->lpVtbl -> get_Progress(This,pVal)

#define ICrWheel_put_Progress(This,newVal)	\
    (This)->lpVtbl -> put_Progress(This,newVal)

#define ICrWheel_get_StepResolution(This,pVal)	\
    (This)->lpVtbl -> get_StepResolution(This,pVal)

#define ICrWheel_get_Duration(This,pVal)	\
    (This)->lpVtbl -> get_Duration(This,pVal)

#define ICrWheel_put_Duration(This,newVal)	\
    (This)->lpVtbl -> put_Duration(This,newVal)


#define ICrWheel_get_spokes(This,pX)	\
    (This)->lpVtbl -> get_spokes(This,pX)

#define ICrWheel_put_spokes(This,newX)	\
    (This)->lpVtbl -> put_spokes(This,newX)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE ICrWheel_get_spokes_Proxy( 
    ICrWheel __RPC_FAR * This,
    /* [retval][out] */ short __RPC_FAR *pX);


void __RPC_STUB ICrWheel_get_spokes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ICrWheel_put_spokes_Proxy( 
    ICrWheel __RPC_FAR * This,
    /* [in] */ short newX);


void __RPC_STUB ICrWheel_put_spokes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICrWheel_INTERFACE_DEFINED__ */


#ifndef __IDXTChroma_INTERFACE_DEFINED__
#define __IDXTChroma_INTERFACE_DEFINED__

/* interface IDXTChroma */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDXTChroma;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1D4637E2-383C-11d2-952A-00C04FA34F05")
    IDXTChroma : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Color( 
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
            /* [retval][out] */ VARIANT __RPC_FAR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXTChromaVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXTChroma __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXTChroma __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXTChroma __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IDXTChroma __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IDXTChroma __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IDXTChroma __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IDXTChroma __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Color )( 
            IDXTChroma __RPC_FAR * This,
            /* [in] */ VARIANT newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Color )( 
            IDXTChroma __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *pVal);
        
        END_INTERFACE
    } IDXTChromaVtbl;

    interface IDXTChroma
    {
        CONST_VTBL struct IDXTChromaVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXTChroma_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXTChroma_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXTChroma_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXTChroma_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDXTChroma_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDXTChroma_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDXTChroma_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDXTChroma_put_Color(This,newVal)	\
    (This)->lpVtbl -> put_Color(This,newVal)

#define IDXTChroma_get_Color(This,pVal)	\
    (This)->lpVtbl -> get_Color(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTChroma_put_Color_Proxy( 
    IDXTChroma __RPC_FAR * This,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IDXTChroma_put_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTChroma_get_Color_Proxy( 
    IDXTChroma __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *pVal);


void __RPC_STUB IDXTChroma_get_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXTChroma_INTERFACE_DEFINED__ */


#ifndef __IDXTDropShadow_INTERFACE_DEFINED__
#define __IDXTDropShadow_INTERFACE_DEFINED__

/* interface IDXTDropShadow */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDXTDropShadow;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1D4637E3-383C-11d2-952A-00C04FA34F05")
    IDXTDropShadow : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
            /* [retval][out] */ VARIANT __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Color( 
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_OffX( 
            /* [retval][out] */ int __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_OffX( 
            /* [in] */ int newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_OffY( 
            /* [retval][out] */ int __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_OffY( 
            /* [in] */ int newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Positive( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Positive( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXTDropShadowVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXTDropShadow __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXTDropShadow __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXTDropShadow __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IDXTDropShadow __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IDXTDropShadow __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IDXTDropShadow __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IDXTDropShadow __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Color )( 
            IDXTDropShadow __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Color )( 
            IDXTDropShadow __RPC_FAR * This,
            /* [in] */ VARIANT newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_OffX )( 
            IDXTDropShadow __RPC_FAR * This,
            /* [retval][out] */ int __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_OffX )( 
            IDXTDropShadow __RPC_FAR * This,
            /* [in] */ int newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_OffY )( 
            IDXTDropShadow __RPC_FAR * This,
            /* [retval][out] */ int __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_OffY )( 
            IDXTDropShadow __RPC_FAR * This,
            /* [in] */ int newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Positive )( 
            IDXTDropShadow __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Positive )( 
            IDXTDropShadow __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        END_INTERFACE
    } IDXTDropShadowVtbl;

    interface IDXTDropShadow
    {
        CONST_VTBL struct IDXTDropShadowVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXTDropShadow_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXTDropShadow_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXTDropShadow_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXTDropShadow_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDXTDropShadow_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDXTDropShadow_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDXTDropShadow_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDXTDropShadow_get_Color(This,pVal)	\
    (This)->lpVtbl -> get_Color(This,pVal)

#define IDXTDropShadow_put_Color(This,newVal)	\
    (This)->lpVtbl -> put_Color(This,newVal)

#define IDXTDropShadow_get_OffX(This,pVal)	\
    (This)->lpVtbl -> get_OffX(This,pVal)

#define IDXTDropShadow_put_OffX(This,newVal)	\
    (This)->lpVtbl -> put_OffX(This,newVal)

#define IDXTDropShadow_get_OffY(This,pVal)	\
    (This)->lpVtbl -> get_OffY(This,pVal)

#define IDXTDropShadow_put_OffY(This,newVal)	\
    (This)->lpVtbl -> put_OffY(This,newVal)

#define IDXTDropShadow_get_Positive(This,pVal)	\
    (This)->lpVtbl -> get_Positive(This,pVal)

#define IDXTDropShadow_put_Positive(This,newVal)	\
    (This)->lpVtbl -> put_Positive(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTDropShadow_get_Color_Proxy( 
    IDXTDropShadow __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *pVal);


void __RPC_STUB IDXTDropShadow_get_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTDropShadow_put_Color_Proxy( 
    IDXTDropShadow __RPC_FAR * This,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IDXTDropShadow_put_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTDropShadow_get_OffX_Proxy( 
    IDXTDropShadow __RPC_FAR * This,
    /* [retval][out] */ int __RPC_FAR *pVal);


void __RPC_STUB IDXTDropShadow_get_OffX_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTDropShadow_put_OffX_Proxy( 
    IDXTDropShadow __RPC_FAR * This,
    /* [in] */ int newVal);


void __RPC_STUB IDXTDropShadow_put_OffX_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTDropShadow_get_OffY_Proxy( 
    IDXTDropShadow __RPC_FAR * This,
    /* [retval][out] */ int __RPC_FAR *pVal);


void __RPC_STUB IDXTDropShadow_get_OffY_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTDropShadow_put_OffY_Proxy( 
    IDXTDropShadow __RPC_FAR * This,
    /* [in] */ int newVal);


void __RPC_STUB IDXTDropShadow_put_OffY_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTDropShadow_get_Positive_Proxy( 
    IDXTDropShadow __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pVal);


void __RPC_STUB IDXTDropShadow_get_Positive_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTDropShadow_put_Positive_Proxy( 
    IDXTDropShadow __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IDXTDropShadow_put_Positive_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXTDropShadow_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dxtmsft_0211 */
/* [local] */ 

typedef 
enum DISPID_DXTCHECKERBOARD
    {	DISPID_DXTCHECKERBOARD_DIRECTION	= 1,
	DISPID_DXTCHECKERBOARD_SQUARESX	= DISPID_DXTCHECKERBOARD_DIRECTION + 1,
	DISPID_DXTCHECKERBOARD_SQUARESY	= DISPID_DXTCHECKERBOARD_SQUARESX + 1
    }	DISPID_DXTCHECKERBOARD;



extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0211_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0211_v0_0_s_ifspec;

#ifndef __IDXTCheckerBoard_INTERFACE_DEFINED__
#define __IDXTCheckerBoard_INTERFACE_DEFINED__

/* interface IDXTCheckerBoard */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDXTCheckerBoard;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AD3C2576-117C-4510-84DD-B668971DCFD1")
    IDXTCheckerBoard : public IDXEffect
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Direction( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrDirection) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Direction( 
            /* [in] */ BSTR bstrDirection) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SquaresX( 
            /* [retval][out] */ int __RPC_FAR *pnSquaresX) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SquaresX( 
            /* [in] */ int nSquaresX) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SquaresY( 
            /* [retval][out] */ int __RPC_FAR *pnSquaresY) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SquaresY( 
            /* [in] */ int nSquaresY) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXTCheckerBoardVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXTCheckerBoard __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXTCheckerBoard __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXTCheckerBoard __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IDXTCheckerBoard __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IDXTCheckerBoard __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IDXTCheckerBoard __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IDXTCheckerBoard __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Capabilities )( 
            IDXTCheckerBoard __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Progress )( 
            IDXTCheckerBoard __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Progress )( 
            IDXTCheckerBoard __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StepResolution )( 
            IDXTCheckerBoard __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Duration )( 
            IDXTCheckerBoard __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Duration )( 
            IDXTCheckerBoard __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Direction )( 
            IDXTCheckerBoard __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrDirection);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Direction )( 
            IDXTCheckerBoard __RPC_FAR * This,
            /* [in] */ BSTR bstrDirection);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_SquaresX )( 
            IDXTCheckerBoard __RPC_FAR * This,
            /* [retval][out] */ int __RPC_FAR *pnSquaresX);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_SquaresX )( 
            IDXTCheckerBoard __RPC_FAR * This,
            /* [in] */ int nSquaresX);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_SquaresY )( 
            IDXTCheckerBoard __RPC_FAR * This,
            /* [retval][out] */ int __RPC_FAR *pnSquaresY);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_SquaresY )( 
            IDXTCheckerBoard __RPC_FAR * This,
            /* [in] */ int nSquaresY);
        
        END_INTERFACE
    } IDXTCheckerBoardVtbl;

    interface IDXTCheckerBoard
    {
        CONST_VTBL struct IDXTCheckerBoardVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXTCheckerBoard_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXTCheckerBoard_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXTCheckerBoard_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXTCheckerBoard_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDXTCheckerBoard_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDXTCheckerBoard_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDXTCheckerBoard_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDXTCheckerBoard_get_Capabilities(This,pVal)	\
    (This)->lpVtbl -> get_Capabilities(This,pVal)

#define IDXTCheckerBoard_get_Progress(This,pVal)	\
    (This)->lpVtbl -> get_Progress(This,pVal)

#define IDXTCheckerBoard_put_Progress(This,newVal)	\
    (This)->lpVtbl -> put_Progress(This,newVal)

#define IDXTCheckerBoard_get_StepResolution(This,pVal)	\
    (This)->lpVtbl -> get_StepResolution(This,pVal)

#define IDXTCheckerBoard_get_Duration(This,pVal)	\
    (This)->lpVtbl -> get_Duration(This,pVal)

#define IDXTCheckerBoard_put_Duration(This,newVal)	\
    (This)->lpVtbl -> put_Duration(This,newVal)


#define IDXTCheckerBoard_get_Direction(This,pbstrDirection)	\
    (This)->lpVtbl -> get_Direction(This,pbstrDirection)

#define IDXTCheckerBoard_put_Direction(This,bstrDirection)	\
    (This)->lpVtbl -> put_Direction(This,bstrDirection)

#define IDXTCheckerBoard_get_SquaresX(This,pnSquaresX)	\
    (This)->lpVtbl -> get_SquaresX(This,pnSquaresX)

#define IDXTCheckerBoard_put_SquaresX(This,nSquaresX)	\
    (This)->lpVtbl -> put_SquaresX(This,nSquaresX)

#define IDXTCheckerBoard_get_SquaresY(This,pnSquaresY)	\
    (This)->lpVtbl -> get_SquaresY(This,pnSquaresY)

#define IDXTCheckerBoard_put_SquaresY(This,nSquaresY)	\
    (This)->lpVtbl -> put_SquaresY(This,nSquaresY)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTCheckerBoard_get_Direction_Proxy( 
    IDXTCheckerBoard __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrDirection);


void __RPC_STUB IDXTCheckerBoard_get_Direction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTCheckerBoard_put_Direction_Proxy( 
    IDXTCheckerBoard __RPC_FAR * This,
    /* [in] */ BSTR bstrDirection);


void __RPC_STUB IDXTCheckerBoard_put_Direction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTCheckerBoard_get_SquaresX_Proxy( 
    IDXTCheckerBoard __RPC_FAR * This,
    /* [retval][out] */ int __RPC_FAR *pnSquaresX);


void __RPC_STUB IDXTCheckerBoard_get_SquaresX_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTCheckerBoard_put_SquaresX_Proxy( 
    IDXTCheckerBoard __RPC_FAR * This,
    /* [in] */ int nSquaresX);


void __RPC_STUB IDXTCheckerBoard_put_SquaresX_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTCheckerBoard_get_SquaresY_Proxy( 
    IDXTCheckerBoard __RPC_FAR * This,
    /* [retval][out] */ int __RPC_FAR *pnSquaresY);


void __RPC_STUB IDXTCheckerBoard_get_SquaresY_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTCheckerBoard_put_SquaresY_Proxy( 
    IDXTCheckerBoard __RPC_FAR * This,
    /* [in] */ int nSquaresY);


void __RPC_STUB IDXTCheckerBoard_put_SquaresY_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXTCheckerBoard_INTERFACE_DEFINED__ */


#ifndef __IDXTRevealTrans_INTERFACE_DEFINED__
#define __IDXTRevealTrans_INTERFACE_DEFINED__

/* interface IDXTRevealTrans */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDXTRevealTrans;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B8095006-A128-464B-8B2D-90580AEE2B05")
    IDXTRevealTrans : public IDXEffect
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Transition( 
            /* [retval][out] */ int __RPC_FAR *pnTransition) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Transition( 
            /* [in] */ int nTransition) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXTRevealTransVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXTRevealTrans __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXTRevealTrans __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXTRevealTrans __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IDXTRevealTrans __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IDXTRevealTrans __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IDXTRevealTrans __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IDXTRevealTrans __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Capabilities )( 
            IDXTRevealTrans __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Progress )( 
            IDXTRevealTrans __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Progress )( 
            IDXTRevealTrans __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StepResolution )( 
            IDXTRevealTrans __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Duration )( 
            IDXTRevealTrans __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Duration )( 
            IDXTRevealTrans __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Transition )( 
            IDXTRevealTrans __RPC_FAR * This,
            /* [retval][out] */ int __RPC_FAR *pnTransition);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Transition )( 
            IDXTRevealTrans __RPC_FAR * This,
            /* [in] */ int nTransition);
        
        END_INTERFACE
    } IDXTRevealTransVtbl;

    interface IDXTRevealTrans
    {
        CONST_VTBL struct IDXTRevealTransVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXTRevealTrans_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXTRevealTrans_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXTRevealTrans_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXTRevealTrans_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDXTRevealTrans_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDXTRevealTrans_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDXTRevealTrans_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDXTRevealTrans_get_Capabilities(This,pVal)	\
    (This)->lpVtbl -> get_Capabilities(This,pVal)

#define IDXTRevealTrans_get_Progress(This,pVal)	\
    (This)->lpVtbl -> get_Progress(This,pVal)

#define IDXTRevealTrans_put_Progress(This,newVal)	\
    (This)->lpVtbl -> put_Progress(This,newVal)

#define IDXTRevealTrans_get_StepResolution(This,pVal)	\
    (This)->lpVtbl -> get_StepResolution(This,pVal)

#define IDXTRevealTrans_get_Duration(This,pVal)	\
    (This)->lpVtbl -> get_Duration(This,pVal)

#define IDXTRevealTrans_put_Duration(This,newVal)	\
    (This)->lpVtbl -> put_Duration(This,newVal)


#define IDXTRevealTrans_get_Transition(This,pnTransition)	\
    (This)->lpVtbl -> get_Transition(This,pnTransition)

#define IDXTRevealTrans_put_Transition(This,nTransition)	\
    (This)->lpVtbl -> put_Transition(This,nTransition)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTRevealTrans_get_Transition_Proxy( 
    IDXTRevealTrans __RPC_FAR * This,
    /* [retval][out] */ int __RPC_FAR *pnTransition);


void __RPC_STUB IDXTRevealTrans_get_Transition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTRevealTrans_put_Transition_Proxy( 
    IDXTRevealTrans __RPC_FAR * This,
    /* [in] */ int nTransition);


void __RPC_STUB IDXTRevealTrans_put_Transition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXTRevealTrans_INTERFACE_DEFINED__ */


#ifndef __IDXTMask_INTERFACE_DEFINED__
#define __IDXTMask_INTERFACE_DEFINED__

/* interface IDXTMask */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDXTMask;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A1067146-B063-47d7-A54A-2C2309E9889D")
    IDXTMask : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
            /* [retval][out] */ VARIANT __RPC_FAR *pvarColor) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Color( 
            /* [in] */ VARIANT varColor) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXTMaskVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXTMask __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXTMask __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXTMask __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IDXTMask __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IDXTMask __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IDXTMask __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IDXTMask __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Color )( 
            IDXTMask __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *pvarColor);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Color )( 
            IDXTMask __RPC_FAR * This,
            /* [in] */ VARIANT varColor);
        
        END_INTERFACE
    } IDXTMaskVtbl;

    interface IDXTMask
    {
        CONST_VTBL struct IDXTMaskVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXTMask_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXTMask_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXTMask_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXTMask_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDXTMask_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDXTMask_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDXTMask_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDXTMask_get_Color(This,pvarColor)	\
    (This)->lpVtbl -> get_Color(This,pvarColor)

#define IDXTMask_put_Color(This,varColor)	\
    (This)->lpVtbl -> put_Color(This,varColor)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTMask_get_Color_Proxy( 
    IDXTMask __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *pvarColor);


void __RPC_STUB IDXTMask_get_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTMask_put_Color_Proxy( 
    IDXTMask __RPC_FAR * This,
    /* [in] */ VARIANT varColor);


void __RPC_STUB IDXTMask_put_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXTMask_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dxtmsft_0214 */
/* [local] */ 

typedef 
enum DISPID_DXTALPHAIMAGELOADER
    {	DISPID_DXTALPHAIMAGELOADER_SRC	= 1,
	DISPID_DXTALPHAIMAGELOADER_SIZINGMETHOD	= DISPID_DXTALPHAIMAGELOADER_SRC + 1
    }	DISPID_DXTALPHAIMAGELOADER;



extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0214_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0214_v0_0_s_ifspec;

#ifndef __IDXTAlphaImageLoader_INTERFACE_DEFINED__
#define __IDXTAlphaImageLoader_INTERFACE_DEFINED__

/* interface IDXTAlphaImageLoader */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDXTAlphaImageLoader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A5F2D3E8-7A7E-48E5-BC75-40790BE4A941")
    IDXTAlphaImageLoader : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Src( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrSrc) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Src( 
            /* [in] */ BSTR bstrSrc) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SizingMethod( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrSizingMethod) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SizingMethod( 
            /* [in] */ BSTR bstrSizingMethod) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXTAlphaImageLoaderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXTAlphaImageLoader __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXTAlphaImageLoader __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXTAlphaImageLoader __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IDXTAlphaImageLoader __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IDXTAlphaImageLoader __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IDXTAlphaImageLoader __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IDXTAlphaImageLoader __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Src )( 
            IDXTAlphaImageLoader __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrSrc);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Src )( 
            IDXTAlphaImageLoader __RPC_FAR * This,
            /* [in] */ BSTR bstrSrc);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_SizingMethod )( 
            IDXTAlphaImageLoader __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrSizingMethod);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_SizingMethod )( 
            IDXTAlphaImageLoader __RPC_FAR * This,
            /* [in] */ BSTR bstrSizingMethod);
        
        END_INTERFACE
    } IDXTAlphaImageLoaderVtbl;

    interface IDXTAlphaImageLoader
    {
        CONST_VTBL struct IDXTAlphaImageLoaderVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXTAlphaImageLoader_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXTAlphaImageLoader_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXTAlphaImageLoader_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXTAlphaImageLoader_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDXTAlphaImageLoader_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDXTAlphaImageLoader_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDXTAlphaImageLoader_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDXTAlphaImageLoader_get_Src(This,pbstrSrc)	\
    (This)->lpVtbl -> get_Src(This,pbstrSrc)

#define IDXTAlphaImageLoader_put_Src(This,bstrSrc)	\
    (This)->lpVtbl -> put_Src(This,bstrSrc)

#define IDXTAlphaImageLoader_get_SizingMethod(This,pbstrSizingMethod)	\
    (This)->lpVtbl -> get_SizingMethod(This,pbstrSizingMethod)

#define IDXTAlphaImageLoader_put_SizingMethod(This,bstrSizingMethod)	\
    (This)->lpVtbl -> put_SizingMethod(This,bstrSizingMethod)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTAlphaImageLoader_get_Src_Proxy( 
    IDXTAlphaImageLoader __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrSrc);


void __RPC_STUB IDXTAlphaImageLoader_get_Src_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTAlphaImageLoader_put_Src_Proxy( 
    IDXTAlphaImageLoader __RPC_FAR * This,
    /* [in] */ BSTR bstrSrc);


void __RPC_STUB IDXTAlphaImageLoader_put_Src_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTAlphaImageLoader_get_SizingMethod_Proxy( 
    IDXTAlphaImageLoader __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrSizingMethod);


void __RPC_STUB IDXTAlphaImageLoader_get_SizingMethod_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTAlphaImageLoader_put_SizingMethod_Proxy( 
    IDXTAlphaImageLoader __RPC_FAR * This,
    /* [in] */ BSTR bstrSizingMethod);


void __RPC_STUB IDXTAlphaImageLoader_put_SizingMethod_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXTAlphaImageLoader_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dxtmsft_0215 */
/* [local] */ 

typedef 
enum DISPID_DXTRANDOMBARS
    {	DISPID_DXTRANDOMBARS_ORIENTATION	= 1
    }	DISPID_DXTRANDOMBARS;



extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0215_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0215_v0_0_s_ifspec;

#ifndef __IDXTRandomBars_INTERFACE_DEFINED__
#define __IDXTRandomBars_INTERFACE_DEFINED__

/* interface IDXTRandomBars */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDXTRandomBars;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8A6D2022-4A8F-4EB9-BB25-AA05201F9C84")
    IDXTRandomBars : public IDXEffect
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Orientation( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrOrientation) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Orientation( 
            /* [in] */ BSTR bstrOrientation) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXTRandomBarsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXTRandomBars __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXTRandomBars __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXTRandomBars __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IDXTRandomBars __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IDXTRandomBars __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IDXTRandomBars __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IDXTRandomBars __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Capabilities )( 
            IDXTRandomBars __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Progress )( 
            IDXTRandomBars __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Progress )( 
            IDXTRandomBars __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StepResolution )( 
            IDXTRandomBars __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Duration )( 
            IDXTRandomBars __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Duration )( 
            IDXTRandomBars __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Orientation )( 
            IDXTRandomBars __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrOrientation);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Orientation )( 
            IDXTRandomBars __RPC_FAR * This,
            /* [in] */ BSTR bstrOrientation);
        
        END_INTERFACE
    } IDXTRandomBarsVtbl;

    interface IDXTRandomBars
    {
        CONST_VTBL struct IDXTRandomBarsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXTRandomBars_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXTRandomBars_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXTRandomBars_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXTRandomBars_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDXTRandomBars_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDXTRandomBars_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDXTRandomBars_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDXTRandomBars_get_Capabilities(This,pVal)	\
    (This)->lpVtbl -> get_Capabilities(This,pVal)

#define IDXTRandomBars_get_Progress(This,pVal)	\
    (This)->lpVtbl -> get_Progress(This,pVal)

#define IDXTRandomBars_put_Progress(This,newVal)	\
    (This)->lpVtbl -> put_Progress(This,newVal)

#define IDXTRandomBars_get_StepResolution(This,pVal)	\
    (This)->lpVtbl -> get_StepResolution(This,pVal)

#define IDXTRandomBars_get_Duration(This,pVal)	\
    (This)->lpVtbl -> get_Duration(This,pVal)

#define IDXTRandomBars_put_Duration(This,newVal)	\
    (This)->lpVtbl -> put_Duration(This,newVal)


#define IDXTRandomBars_get_Orientation(This,pbstrOrientation)	\
    (This)->lpVtbl -> get_Orientation(This,pbstrOrientation)

#define IDXTRandomBars_put_Orientation(This,bstrOrientation)	\
    (This)->lpVtbl -> put_Orientation(This,bstrOrientation)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTRandomBars_get_Orientation_Proxy( 
    IDXTRandomBars __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrOrientation);


void __RPC_STUB IDXTRandomBars_get_Orientation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTRandomBars_put_Orientation_Proxy( 
    IDXTRandomBars __RPC_FAR * This,
    /* [in] */ BSTR bstrOrientation);


void __RPC_STUB IDXTRandomBars_put_Orientation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXTRandomBars_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dxtmsft_0216 */
/* [local] */ 

typedef 
enum DISPID_DXTSTRIPS
    {	DISPID_DXTSTRIPS_MOTION	= 1
    }	DISPID_DXTSTRIPS;



extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0216_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0216_v0_0_s_ifspec;

#ifndef __IDXTStrips_INTERFACE_DEFINED__
#define __IDXTStrips_INTERFACE_DEFINED__

/* interface IDXTStrips */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDXTStrips;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A83C9B5C-FB11-4AF5-8F65-D03F151D3ED5")
    IDXTStrips : public IDXEffect
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Motion( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrMotion) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Motion( 
            /* [in] */ BSTR bstrMotion) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXTStripsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXTStrips __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXTStrips __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXTStrips __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IDXTStrips __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IDXTStrips __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IDXTStrips __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IDXTStrips __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Capabilities )( 
            IDXTStrips __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Progress )( 
            IDXTStrips __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Progress )( 
            IDXTStrips __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StepResolution )( 
            IDXTStrips __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Duration )( 
            IDXTStrips __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Duration )( 
            IDXTStrips __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Motion )( 
            IDXTStrips __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrMotion);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Motion )( 
            IDXTStrips __RPC_FAR * This,
            /* [in] */ BSTR bstrMotion);
        
        END_INTERFACE
    } IDXTStripsVtbl;

    interface IDXTStrips
    {
        CONST_VTBL struct IDXTStripsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXTStrips_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXTStrips_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXTStrips_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXTStrips_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDXTStrips_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDXTStrips_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDXTStrips_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDXTStrips_get_Capabilities(This,pVal)	\
    (This)->lpVtbl -> get_Capabilities(This,pVal)

#define IDXTStrips_get_Progress(This,pVal)	\
    (This)->lpVtbl -> get_Progress(This,pVal)

#define IDXTStrips_put_Progress(This,newVal)	\
    (This)->lpVtbl -> put_Progress(This,newVal)

#define IDXTStrips_get_StepResolution(This,pVal)	\
    (This)->lpVtbl -> get_StepResolution(This,pVal)

#define IDXTStrips_get_Duration(This,pVal)	\
    (This)->lpVtbl -> get_Duration(This,pVal)

#define IDXTStrips_put_Duration(This,newVal)	\
    (This)->lpVtbl -> put_Duration(This,newVal)


#define IDXTStrips_get_Motion(This,pbstrMotion)	\
    (This)->lpVtbl -> get_Motion(This,pbstrMotion)

#define IDXTStrips_put_Motion(This,bstrMotion)	\
    (This)->lpVtbl -> put_Motion(This,bstrMotion)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTStrips_get_Motion_Proxy( 
    IDXTStrips __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrMotion);


void __RPC_STUB IDXTStrips_get_Motion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTStrips_put_Motion_Proxy( 
    IDXTStrips __RPC_FAR * This,
    /* [in] */ BSTR bstrMotion);


void __RPC_STUB IDXTStrips_put_Motion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXTStrips_INTERFACE_DEFINED__ */


#ifndef __IDXTAlpha_INTERFACE_DEFINED__
#define __IDXTAlpha_INTERFACE_DEFINED__

/* interface IDXTAlpha */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDXTAlpha;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1D4637E0-383C-11d2-952A-00C04FA34F05")
    IDXTAlpha : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Opacity( 
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Opacity( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FinishOpacity( 
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_FinishOpacity( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Style( 
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Style( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_StartX( 
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_StartX( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_StartY( 
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_StartY( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FinishX( 
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_FinishX( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FinishY( 
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_FinishY( 
            /* [in] */ long newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXTAlphaVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXTAlpha __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXTAlpha __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXTAlpha __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IDXTAlpha __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IDXTAlpha __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IDXTAlpha __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IDXTAlpha __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Opacity )( 
            IDXTAlpha __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Opacity )( 
            IDXTAlpha __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_FinishOpacity )( 
            IDXTAlpha __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_FinishOpacity )( 
            IDXTAlpha __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Style )( 
            IDXTAlpha __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Style )( 
            IDXTAlpha __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StartX )( 
            IDXTAlpha __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_StartX )( 
            IDXTAlpha __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StartY )( 
            IDXTAlpha __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_StartY )( 
            IDXTAlpha __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_FinishX )( 
            IDXTAlpha __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_FinishX )( 
            IDXTAlpha __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_FinishY )( 
            IDXTAlpha __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_FinishY )( 
            IDXTAlpha __RPC_FAR * This,
            /* [in] */ long newVal);
        
        END_INTERFACE
    } IDXTAlphaVtbl;

    interface IDXTAlpha
    {
        CONST_VTBL struct IDXTAlphaVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXTAlpha_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXTAlpha_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXTAlpha_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXTAlpha_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDXTAlpha_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDXTAlpha_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDXTAlpha_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDXTAlpha_get_Opacity(This,pVal)	\
    (This)->lpVtbl -> get_Opacity(This,pVal)

#define IDXTAlpha_put_Opacity(This,newVal)	\
    (This)->lpVtbl -> put_Opacity(This,newVal)

#define IDXTAlpha_get_FinishOpacity(This,pVal)	\
    (This)->lpVtbl -> get_FinishOpacity(This,pVal)

#define IDXTAlpha_put_FinishOpacity(This,newVal)	\
    (This)->lpVtbl -> put_FinishOpacity(This,newVal)

#define IDXTAlpha_get_Style(This,pVal)	\
    (This)->lpVtbl -> get_Style(This,pVal)

#define IDXTAlpha_put_Style(This,newVal)	\
    (This)->lpVtbl -> put_Style(This,newVal)

#define IDXTAlpha_get_StartX(This,pVal)	\
    (This)->lpVtbl -> get_StartX(This,pVal)

#define IDXTAlpha_put_StartX(This,newVal)	\
    (This)->lpVtbl -> put_StartX(This,newVal)

#define IDXTAlpha_get_StartY(This,pVal)	\
    (This)->lpVtbl -> get_StartY(This,pVal)

#define IDXTAlpha_put_StartY(This,newVal)	\
    (This)->lpVtbl -> put_StartY(This,newVal)

#define IDXTAlpha_get_FinishX(This,pVal)	\
    (This)->lpVtbl -> get_FinishX(This,pVal)

#define IDXTAlpha_put_FinishX(This,newVal)	\
    (This)->lpVtbl -> put_FinishX(This,newVal)

#define IDXTAlpha_get_FinishY(This,pVal)	\
    (This)->lpVtbl -> get_FinishY(This,pVal)

#define IDXTAlpha_put_FinishY(This,newVal)	\
    (This)->lpVtbl -> put_FinishY(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTAlpha_get_Opacity_Proxy( 
    IDXTAlpha __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IDXTAlpha_get_Opacity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTAlpha_put_Opacity_Proxy( 
    IDXTAlpha __RPC_FAR * This,
    /* [in] */ long newVal);


void __RPC_STUB IDXTAlpha_put_Opacity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTAlpha_get_FinishOpacity_Proxy( 
    IDXTAlpha __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IDXTAlpha_get_FinishOpacity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTAlpha_put_FinishOpacity_Proxy( 
    IDXTAlpha __RPC_FAR * This,
    /* [in] */ long newVal);


void __RPC_STUB IDXTAlpha_put_FinishOpacity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTAlpha_get_Style_Proxy( 
    IDXTAlpha __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IDXTAlpha_get_Style_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTAlpha_put_Style_Proxy( 
    IDXTAlpha __RPC_FAR * This,
    /* [in] */ long newVal);


void __RPC_STUB IDXTAlpha_put_Style_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTAlpha_get_StartX_Proxy( 
    IDXTAlpha __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IDXTAlpha_get_StartX_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTAlpha_put_StartX_Proxy( 
    IDXTAlpha __RPC_FAR * This,
    /* [in] */ long newVal);


void __RPC_STUB IDXTAlpha_put_StartX_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTAlpha_get_StartY_Proxy( 
    IDXTAlpha __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IDXTAlpha_get_StartY_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTAlpha_put_StartY_Proxy( 
    IDXTAlpha __RPC_FAR * This,
    /* [in] */ long newVal);


void __RPC_STUB IDXTAlpha_put_StartY_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTAlpha_get_FinishX_Proxy( 
    IDXTAlpha __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IDXTAlpha_get_FinishX_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTAlpha_put_FinishX_Proxy( 
    IDXTAlpha __RPC_FAR * This,
    /* [in] */ long newVal);


void __RPC_STUB IDXTAlpha_put_FinishX_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTAlpha_get_FinishY_Proxy( 
    IDXTAlpha __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IDXTAlpha_get_FinishY_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTAlpha_put_FinishY_Proxy( 
    IDXTAlpha __RPC_FAR * This,
    /* [in] */ long newVal);


void __RPC_STUB IDXTAlpha_put_FinishY_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXTAlpha_INTERFACE_DEFINED__ */


#ifndef __IDXTGlow_INTERFACE_DEFINED__
#define __IDXTGlow_INTERFACE_DEFINED__

/* interface IDXTGlow */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDXTGlow;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1D4637E4-383C-11d2-952A-00C04FA34F05")
    IDXTGlow : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
            /* [retval][out] */ VARIANT __RPC_FAR *pvarColor) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Color( 
            /* [in] */ VARIANT varColor) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Strength( 
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Strength( 
            /* [in] */ long newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXTGlowVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXTGlow __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXTGlow __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXTGlow __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IDXTGlow __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IDXTGlow __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IDXTGlow __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IDXTGlow __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Color )( 
            IDXTGlow __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *pvarColor);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Color )( 
            IDXTGlow __RPC_FAR * This,
            /* [in] */ VARIANT varColor);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Strength )( 
            IDXTGlow __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Strength )( 
            IDXTGlow __RPC_FAR * This,
            /* [in] */ long newVal);
        
        END_INTERFACE
    } IDXTGlowVtbl;

    interface IDXTGlow
    {
        CONST_VTBL struct IDXTGlowVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXTGlow_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXTGlow_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXTGlow_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXTGlow_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDXTGlow_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDXTGlow_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDXTGlow_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDXTGlow_get_Color(This,pvarColor)	\
    (This)->lpVtbl -> get_Color(This,pvarColor)

#define IDXTGlow_put_Color(This,varColor)	\
    (This)->lpVtbl -> put_Color(This,varColor)

#define IDXTGlow_get_Strength(This,pVal)	\
    (This)->lpVtbl -> get_Strength(This,pVal)

#define IDXTGlow_put_Strength(This,newVal)	\
    (This)->lpVtbl -> put_Strength(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTGlow_get_Color_Proxy( 
    IDXTGlow __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *pvarColor);


void __RPC_STUB IDXTGlow_get_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTGlow_put_Color_Proxy( 
    IDXTGlow __RPC_FAR * This,
    /* [in] */ VARIANT varColor);


void __RPC_STUB IDXTGlow_put_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTGlow_get_Strength_Proxy( 
    IDXTGlow __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IDXTGlow_get_Strength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTGlow_put_Strength_Proxy( 
    IDXTGlow __RPC_FAR * This,
    /* [in] */ long newVal);


void __RPC_STUB IDXTGlow_put_Strength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXTGlow_INTERFACE_DEFINED__ */


#ifndef __IDXTShadow_INTERFACE_DEFINED__
#define __IDXTShadow_INTERFACE_DEFINED__

/* interface IDXTShadow */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDXTShadow;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1D4637E6-383C-11d2-952A-00C04FA34F05")
    IDXTShadow : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Color( 
            /* [in] */ BSTR bstrColor) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrColor) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Direction( 
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Direction( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Strength( 
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Strength( 
            /* [in] */ long newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXTShadowVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXTShadow __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXTShadow __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXTShadow __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IDXTShadow __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IDXTShadow __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IDXTShadow __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IDXTShadow __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Color )( 
            IDXTShadow __RPC_FAR * This,
            /* [in] */ BSTR bstrColor);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Color )( 
            IDXTShadow __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrColor);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Direction )( 
            IDXTShadow __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Direction )( 
            IDXTShadow __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Strength )( 
            IDXTShadow __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Strength )( 
            IDXTShadow __RPC_FAR * This,
            /* [in] */ long newVal);
        
        END_INTERFACE
    } IDXTShadowVtbl;

    interface IDXTShadow
    {
        CONST_VTBL struct IDXTShadowVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXTShadow_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXTShadow_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXTShadow_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXTShadow_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDXTShadow_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDXTShadow_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDXTShadow_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDXTShadow_put_Color(This,bstrColor)	\
    (This)->lpVtbl -> put_Color(This,bstrColor)

#define IDXTShadow_get_Color(This,pbstrColor)	\
    (This)->lpVtbl -> get_Color(This,pbstrColor)

#define IDXTShadow_get_Direction(This,pVal)	\
    (This)->lpVtbl -> get_Direction(This,pVal)

#define IDXTShadow_put_Direction(This,newVal)	\
    (This)->lpVtbl -> put_Direction(This,newVal)

#define IDXTShadow_get_Strength(This,pVal)	\
    (This)->lpVtbl -> get_Strength(This,pVal)

#define IDXTShadow_put_Strength(This,newVal)	\
    (This)->lpVtbl -> put_Strength(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTShadow_put_Color_Proxy( 
    IDXTShadow __RPC_FAR * This,
    /* [in] */ BSTR bstrColor);


void __RPC_STUB IDXTShadow_put_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTShadow_get_Color_Proxy( 
    IDXTShadow __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrColor);


void __RPC_STUB IDXTShadow_get_Color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTShadow_get_Direction_Proxy( 
    IDXTShadow __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IDXTShadow_get_Direction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTShadow_put_Direction_Proxy( 
    IDXTShadow __RPC_FAR * This,
    /* [in] */ long newVal);


void __RPC_STUB IDXTShadow_put_Direction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTShadow_get_Strength_Proxy( 
    IDXTShadow __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IDXTShadow_get_Strength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTShadow_put_Strength_Proxy( 
    IDXTShadow __RPC_FAR * This,
    /* [in] */ long newVal);


void __RPC_STUB IDXTShadow_put_Strength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXTShadow_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dxtmsft_0220 */
/* [local] */ 

typedef 
enum DISPID_DXTWAVE
    {	DISPID_DXTWAVE_ADD	= 1,
	DISPID_DXTWAVE_FREQ	= DISPID_DXTWAVE_ADD + 1,
	DISPID_DXTWAVE_LIGHTSTRENGTH	= DISPID_DXTWAVE_FREQ + 1,
	DISPID_DXTWAVE_PHASE	= DISPID_DXTWAVE_LIGHTSTRENGTH + 1,
	DISPID_DXTWAVE_STRENGTH	= DISPID_DXTWAVE_PHASE + 1
    }	DISPID_DXTWAVE;



extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0220_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0220_v0_0_s_ifspec;

#ifndef __IDXTWave_INTERFACE_DEFINED__
#define __IDXTWave_INTERFACE_DEFINED__

/* interface IDXTWave */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDXTWave;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1D4637E7-383C-11d2-952A-00C04FA34F05")
    IDXTWave : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Add( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Add( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Freq( 
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Freq( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LightStrength( 
            /* [retval][out] */ int __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LightStrength( 
            /* [in] */ int newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Phase( 
            /* [retval][out] */ int __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Phase( 
            /* [in] */ int newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Strength( 
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Strength( 
            /* [in] */ long newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXTWaveVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXTWave __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXTWave __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXTWave __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IDXTWave __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IDXTWave __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IDXTWave __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IDXTWave __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Add )( 
            IDXTWave __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Add )( 
            IDXTWave __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Freq )( 
            IDXTWave __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Freq )( 
            IDXTWave __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_LightStrength )( 
            IDXTWave __RPC_FAR * This,
            /* [retval][out] */ int __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_LightStrength )( 
            IDXTWave __RPC_FAR * This,
            /* [in] */ int newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Phase )( 
            IDXTWave __RPC_FAR * This,
            /* [retval][out] */ int __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Phase )( 
            IDXTWave __RPC_FAR * This,
            /* [in] */ int newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Strength )( 
            IDXTWave __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Strength )( 
            IDXTWave __RPC_FAR * This,
            /* [in] */ long newVal);
        
        END_INTERFACE
    } IDXTWaveVtbl;

    interface IDXTWave
    {
        CONST_VTBL struct IDXTWaveVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXTWave_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXTWave_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXTWave_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXTWave_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDXTWave_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDXTWave_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDXTWave_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDXTWave_get_Add(This,pVal)	\
    (This)->lpVtbl -> get_Add(This,pVal)

#define IDXTWave_put_Add(This,newVal)	\
    (This)->lpVtbl -> put_Add(This,newVal)

#define IDXTWave_get_Freq(This,pVal)	\
    (This)->lpVtbl -> get_Freq(This,pVal)

#define IDXTWave_put_Freq(This,newVal)	\
    (This)->lpVtbl -> put_Freq(This,newVal)

#define IDXTWave_get_LightStrength(This,pVal)	\
    (This)->lpVtbl -> get_LightStrength(This,pVal)

#define IDXTWave_put_LightStrength(This,newVal)	\
    (This)->lpVtbl -> put_LightStrength(This,newVal)

#define IDXTWave_get_Phase(This,pVal)	\
    (This)->lpVtbl -> get_Phase(This,pVal)

#define IDXTWave_put_Phase(This,newVal)	\
    (This)->lpVtbl -> put_Phase(This,newVal)

#define IDXTWave_get_Strength(This,pVal)	\
    (This)->lpVtbl -> get_Strength(This,pVal)

#define IDXTWave_put_Strength(This,newVal)	\
    (This)->lpVtbl -> put_Strength(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTWave_get_Add_Proxy( 
    IDXTWave __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pVal);


void __RPC_STUB IDXTWave_get_Add_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTWave_put_Add_Proxy( 
    IDXTWave __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IDXTWave_put_Add_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTWave_get_Freq_Proxy( 
    IDXTWave __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IDXTWave_get_Freq_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTWave_put_Freq_Proxy( 
    IDXTWave __RPC_FAR * This,
    /* [in] */ long newVal);


void __RPC_STUB IDXTWave_put_Freq_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTWave_get_LightStrength_Proxy( 
    IDXTWave __RPC_FAR * This,
    /* [retval][out] */ int __RPC_FAR *pVal);


void __RPC_STUB IDXTWave_get_LightStrength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTWave_put_LightStrength_Proxy( 
    IDXTWave __RPC_FAR * This,
    /* [in] */ int newVal);


void __RPC_STUB IDXTWave_put_LightStrength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTWave_get_Phase_Proxy( 
    IDXTWave __RPC_FAR * This,
    /* [retval][out] */ int __RPC_FAR *pVal);


void __RPC_STUB IDXTWave_get_Phase_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTWave_put_Phase_Proxy( 
    IDXTWave __RPC_FAR * This,
    /* [in] */ int newVal);


void __RPC_STUB IDXTWave_put_Phase_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTWave_get_Strength_Proxy( 
    IDXTWave __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IDXTWave_get_Strength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTWave_put_Strength_Proxy( 
    IDXTWave __RPC_FAR * This,
    /* [in] */ long newVal);


void __RPC_STUB IDXTWave_put_Strength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXTWave_INTERFACE_DEFINED__ */


#ifndef __IDXTLight_INTERFACE_DEFINED__
#define __IDXTLight_INTERFACE_DEFINED__

/* interface IDXTLight */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDXTLight;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F9EFBEC1-4302-11D2-952A-00C04FA34F05")
    IDXTLight : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE addAmbient( 
            int r,
            int g,
            int b,
            int strength) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE addPoint( 
            int x,
            int y,
            int z,
            int r,
            int g,
            int b,
            int strength) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE addCone( 
            int x,
            int y,
            int z,
            int tx,
            int ty,
            int r,
            int g,
            int b,
            int strength,
            int spread) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE moveLight( 
            int lightNum,
            int x,
            int y,
            int z,
            BOOL fAbsolute) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ChangeStrength( 
            int lightNum,
            int dStrength,
            BOOL fAbsolute) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ChangeColor( 
            int lightNum,
            int R,
            int G,
            int B,
            BOOL fAbsolute) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXTLightVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXTLight __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXTLight __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXTLight __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IDXTLight __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IDXTLight __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IDXTLight __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IDXTLight __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *addAmbient )( 
            IDXTLight __RPC_FAR * This,
            int r,
            int g,
            int b,
            int strength);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *addPoint )( 
            IDXTLight __RPC_FAR * This,
            int x,
            int y,
            int z,
            int r,
            int g,
            int b,
            int strength);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *addCone )( 
            IDXTLight __RPC_FAR * This,
            int x,
            int y,
            int z,
            int tx,
            int ty,
            int r,
            int g,
            int b,
            int strength,
            int spread);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *moveLight )( 
            IDXTLight __RPC_FAR * This,
            int lightNum,
            int x,
            int y,
            int z,
            BOOL fAbsolute);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ChangeStrength )( 
            IDXTLight __RPC_FAR * This,
            int lightNum,
            int dStrength,
            BOOL fAbsolute);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ChangeColor )( 
            IDXTLight __RPC_FAR * This,
            int lightNum,
            int R,
            int G,
            int B,
            BOOL fAbsolute);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clear )( 
            IDXTLight __RPC_FAR * This);
        
        END_INTERFACE
    } IDXTLightVtbl;

    interface IDXTLight
    {
        CONST_VTBL struct IDXTLightVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXTLight_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXTLight_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXTLight_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXTLight_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDXTLight_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDXTLight_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDXTLight_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDXTLight_addAmbient(This,r,g,b,strength)	\
    (This)->lpVtbl -> addAmbient(This,r,g,b,strength)

#define IDXTLight_addPoint(This,x,y,z,r,g,b,strength)	\
    (This)->lpVtbl -> addPoint(This,x,y,z,r,g,b,strength)

#define IDXTLight_addCone(This,x,y,z,tx,ty,r,g,b,strength,spread)	\
    (This)->lpVtbl -> addCone(This,x,y,z,tx,ty,r,g,b,strength,spread)

#define IDXTLight_moveLight(This,lightNum,x,y,z,fAbsolute)	\
    (This)->lpVtbl -> moveLight(This,lightNum,x,y,z,fAbsolute)

#define IDXTLight_ChangeStrength(This,lightNum,dStrength,fAbsolute)	\
    (This)->lpVtbl -> ChangeStrength(This,lightNum,dStrength,fAbsolute)

#define IDXTLight_ChangeColor(This,lightNum,R,G,B,fAbsolute)	\
    (This)->lpVtbl -> ChangeColor(This,lightNum,R,G,B,fAbsolute)

#define IDXTLight_Clear(This)	\
    (This)->lpVtbl -> Clear(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id] */ HRESULT STDMETHODCALLTYPE IDXTLight_addAmbient_Proxy( 
    IDXTLight __RPC_FAR * This,
    int r,
    int g,
    int b,
    int strength);


void __RPC_STUB IDXTLight_addAmbient_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IDXTLight_addPoint_Proxy( 
    IDXTLight __RPC_FAR * This,
    int x,
    int y,
    int z,
    int r,
    int g,
    int b,
    int strength);


void __RPC_STUB IDXTLight_addPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IDXTLight_addCone_Proxy( 
    IDXTLight __RPC_FAR * This,
    int x,
    int y,
    int z,
    int tx,
    int ty,
    int r,
    int g,
    int b,
    int strength,
    int spread);


void __RPC_STUB IDXTLight_addCone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IDXTLight_moveLight_Proxy( 
    IDXTLight __RPC_FAR * This,
    int lightNum,
    int x,
    int y,
    int z,
    BOOL fAbsolute);


void __RPC_STUB IDXTLight_moveLight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IDXTLight_ChangeStrength_Proxy( 
    IDXTLight __RPC_FAR * This,
    int lightNum,
    int dStrength,
    BOOL fAbsolute);


void __RPC_STUB IDXTLight_ChangeStrength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IDXTLight_ChangeColor_Proxy( 
    IDXTLight __RPC_FAR * This,
    int lightNum,
    int R,
    int G,
    int B,
    BOOL fAbsolute);


void __RPC_STUB IDXTLight_ChangeColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IDXTLight_Clear_Proxy( 
    IDXTLight __RPC_FAR * This);


void __RPC_STUB IDXTLight_Clear_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXTLight_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dxtmsft_0222 */
/* [local] */ 

typedef 
enum DISPID_DXTMOTIONBLUR
    {	DISPID_DXTMOTIONBLUR_ADD	= 1,
	DISPID_DXTMOTIONBLUR_DIRECTION	= DISPID_DXTMOTIONBLUR_ADD + 1,
	DISPID_DXTMOTIONBLUR_STRENGTH	= DISPID_DXTMOTIONBLUR_DIRECTION + 1
    }	DISPID_DXTMOTIONBLUR;



extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0222_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0222_v0_0_s_ifspec;

#ifndef __IDXTMotionBlur_INTERFACE_DEFINED__
#define __IDXTMotionBlur_INTERFACE_DEFINED__

/* interface IDXTMotionBlur */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDXTMotionBlur;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("089057BE-D3F5-4A2C-B10A-A5130184A0F7")
    IDXTMotionBlur : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Add( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pfAdd) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Add( 
            /* [in] */ VARIANT_BOOL fAdd) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Direction( 
            /* [retval][out] */ short __RPC_FAR *pnDirection) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Direction( 
            /* [in] */ short nDirection) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Strength( 
            /* [retval][out] */ long __RPC_FAR *pnStrength) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Strength( 
            /* [in] */ long nStrength) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXTMotionBlurVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXTMotionBlur __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXTMotionBlur __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXTMotionBlur __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IDXTMotionBlur __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IDXTMotionBlur __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IDXTMotionBlur __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IDXTMotionBlur __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Add )( 
            IDXTMotionBlur __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pfAdd);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Add )( 
            IDXTMotionBlur __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL fAdd);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Direction )( 
            IDXTMotionBlur __RPC_FAR * This,
            /* [retval][out] */ short __RPC_FAR *pnDirection);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Direction )( 
            IDXTMotionBlur __RPC_FAR * This,
            /* [in] */ short nDirection);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Strength )( 
            IDXTMotionBlur __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pnStrength);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Strength )( 
            IDXTMotionBlur __RPC_FAR * This,
            /* [in] */ long nStrength);
        
        END_INTERFACE
    } IDXTMotionBlurVtbl;

    interface IDXTMotionBlur
    {
        CONST_VTBL struct IDXTMotionBlurVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXTMotionBlur_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXTMotionBlur_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXTMotionBlur_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXTMotionBlur_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDXTMotionBlur_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDXTMotionBlur_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDXTMotionBlur_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDXTMotionBlur_get_Add(This,pfAdd)	\
    (This)->lpVtbl -> get_Add(This,pfAdd)

#define IDXTMotionBlur_put_Add(This,fAdd)	\
    (This)->lpVtbl -> put_Add(This,fAdd)

#define IDXTMotionBlur_get_Direction(This,pnDirection)	\
    (This)->lpVtbl -> get_Direction(This,pnDirection)

#define IDXTMotionBlur_put_Direction(This,nDirection)	\
    (This)->lpVtbl -> put_Direction(This,nDirection)

#define IDXTMotionBlur_get_Strength(This,pnStrength)	\
    (This)->lpVtbl -> get_Strength(This,pnStrength)

#define IDXTMotionBlur_put_Strength(This,nStrength)	\
    (This)->lpVtbl -> put_Strength(This,nStrength)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTMotionBlur_get_Add_Proxy( 
    IDXTMotionBlur __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pfAdd);


void __RPC_STUB IDXTMotionBlur_get_Add_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTMotionBlur_put_Add_Proxy( 
    IDXTMotionBlur __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL fAdd);


void __RPC_STUB IDXTMotionBlur_put_Add_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTMotionBlur_get_Direction_Proxy( 
    IDXTMotionBlur __RPC_FAR * This,
    /* [retval][out] */ short __RPC_FAR *pnDirection);


void __RPC_STUB IDXTMotionBlur_get_Direction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTMotionBlur_put_Direction_Proxy( 
    IDXTMotionBlur __RPC_FAR * This,
    /* [in] */ short nDirection);


void __RPC_STUB IDXTMotionBlur_put_Direction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTMotionBlur_get_Strength_Proxy( 
    IDXTMotionBlur __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pnStrength);


void __RPC_STUB IDXTMotionBlur_get_Strength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTMotionBlur_put_Strength_Proxy( 
    IDXTMotionBlur __RPC_FAR * This,
    /* [in] */ long nStrength);


void __RPC_STUB IDXTMotionBlur_put_Strength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXTMotionBlur_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dxtmsft_0223 */
/* [local] */ 

typedef 
enum DISPID_DXTMATRIX
    {	DISPID_DXTMATRIX_M11	= 1,
	DISPID_DXTMATRIX_M12	= DISPID_DXTMATRIX_M11 + 1,
	DISPID_DXTMATRIX_DX	= DISPID_DXTMATRIX_M12 + 1,
	DISPID_DXTMATRIX_M21	= DISPID_DXTMATRIX_DX + 1,
	DISPID_DXTMATRIX_M22	= DISPID_DXTMATRIX_M21 + 1,
	DISPID_DXTMATRIX_DY	= DISPID_DXTMATRIX_M22 + 1,
	DISPID_DXTMATRIX_SIZINGMETHOD	= DISPID_DXTMATRIX_DY + 1,
	DISPID_DXTMATRIX_FILTERTYPE	= DISPID_DXTMATRIX_SIZINGMETHOD + 1
    }	DISPID_DXTMATRIX;



extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0223_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0223_v0_0_s_ifspec;

#ifndef __IDXTMatrix_INTERFACE_DEFINED__
#define __IDXTMatrix_INTERFACE_DEFINED__

/* interface IDXTMatrix */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDXTMatrix;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AC66A493-0F0C-4C76-825C-9D68BEDE9188")
    IDXTMatrix : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_M11( 
            /* [retval][out] */ float __RPC_FAR *pflM11) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_M11( 
            /* [in] */ const float flM11) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_M12( 
            /* [retval][out] */ float __RPC_FAR *pflM12) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_M12( 
            /* [in] */ const float flM12) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Dx( 
            /* [retval][out] */ float __RPC_FAR *pfldx) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Dx( 
            /* [in] */ const float fldx) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_M21( 
            /* [retval][out] */ float __RPC_FAR *pflM21) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_M21( 
            /* [in] */ const float flM21) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_M22( 
            /* [retval][out] */ float __RPC_FAR *pflM22) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_M22( 
            /* [in] */ const float flM22) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Dy( 
            /* [retval][out] */ float __RPC_FAR *pfldy) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Dy( 
            /* [in] */ const float fldy) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SizingMethod( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrSizingMethod) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SizingMethod( 
            /* [in] */ const BSTR bstrSizingMethod) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FilterType( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrFilterType) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_FilterType( 
            /* [in] */ const BSTR bstrFilterType) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXTMatrixVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXTMatrix __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXTMatrix __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXTMatrix __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IDXTMatrix __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IDXTMatrix __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IDXTMatrix __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IDXTMatrix __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_M11 )( 
            IDXTMatrix __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pflM11);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_M11 )( 
            IDXTMatrix __RPC_FAR * This,
            /* [in] */ const float flM11);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_M12 )( 
            IDXTMatrix __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pflM12);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_M12 )( 
            IDXTMatrix __RPC_FAR * This,
            /* [in] */ const float flM12);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Dx )( 
            IDXTMatrix __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pfldx);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Dx )( 
            IDXTMatrix __RPC_FAR * This,
            /* [in] */ const float fldx);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_M21 )( 
            IDXTMatrix __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pflM21);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_M21 )( 
            IDXTMatrix __RPC_FAR * This,
            /* [in] */ const float flM21);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_M22 )( 
            IDXTMatrix __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pflM22);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_M22 )( 
            IDXTMatrix __RPC_FAR * This,
            /* [in] */ const float flM22);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Dy )( 
            IDXTMatrix __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pfldy);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Dy )( 
            IDXTMatrix __RPC_FAR * This,
            /* [in] */ const float fldy);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_SizingMethod )( 
            IDXTMatrix __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrSizingMethod);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_SizingMethod )( 
            IDXTMatrix __RPC_FAR * This,
            /* [in] */ const BSTR bstrSizingMethod);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_FilterType )( 
            IDXTMatrix __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrFilterType);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_FilterType )( 
            IDXTMatrix __RPC_FAR * This,
            /* [in] */ const BSTR bstrFilterType);
        
        END_INTERFACE
    } IDXTMatrixVtbl;

    interface IDXTMatrix
    {
        CONST_VTBL struct IDXTMatrixVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXTMatrix_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXTMatrix_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXTMatrix_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXTMatrix_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDXTMatrix_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDXTMatrix_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDXTMatrix_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDXTMatrix_get_M11(This,pflM11)	\
    (This)->lpVtbl -> get_M11(This,pflM11)

#define IDXTMatrix_put_M11(This,flM11)	\
    (This)->lpVtbl -> put_M11(This,flM11)

#define IDXTMatrix_get_M12(This,pflM12)	\
    (This)->lpVtbl -> get_M12(This,pflM12)

#define IDXTMatrix_put_M12(This,flM12)	\
    (This)->lpVtbl -> put_M12(This,flM12)

#define IDXTMatrix_get_Dx(This,pfldx)	\
    (This)->lpVtbl -> get_Dx(This,pfldx)

#define IDXTMatrix_put_Dx(This,fldx)	\
    (This)->lpVtbl -> put_Dx(This,fldx)

#define IDXTMatrix_get_M21(This,pflM21)	\
    (This)->lpVtbl -> get_M21(This,pflM21)

#define IDXTMatrix_put_M21(This,flM21)	\
    (This)->lpVtbl -> put_M21(This,flM21)

#define IDXTMatrix_get_M22(This,pflM22)	\
    (This)->lpVtbl -> get_M22(This,pflM22)

#define IDXTMatrix_put_M22(This,flM22)	\
    (This)->lpVtbl -> put_M22(This,flM22)

#define IDXTMatrix_get_Dy(This,pfldy)	\
    (This)->lpVtbl -> get_Dy(This,pfldy)

#define IDXTMatrix_put_Dy(This,fldy)	\
    (This)->lpVtbl -> put_Dy(This,fldy)

#define IDXTMatrix_get_SizingMethod(This,pbstrSizingMethod)	\
    (This)->lpVtbl -> get_SizingMethod(This,pbstrSizingMethod)

#define IDXTMatrix_put_SizingMethod(This,bstrSizingMethod)	\
    (This)->lpVtbl -> put_SizingMethod(This,bstrSizingMethod)

#define IDXTMatrix_get_FilterType(This,pbstrFilterType)	\
    (This)->lpVtbl -> get_FilterType(This,pbstrFilterType)

#define IDXTMatrix_put_FilterType(This,bstrFilterType)	\
    (This)->lpVtbl -> put_FilterType(This,bstrFilterType)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTMatrix_get_M11_Proxy( 
    IDXTMatrix __RPC_FAR * This,
    /* [retval][out] */ float __RPC_FAR *pflM11);


void __RPC_STUB IDXTMatrix_get_M11_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTMatrix_put_M11_Proxy( 
    IDXTMatrix __RPC_FAR * This,
    /* [in] */ const float flM11);


void __RPC_STUB IDXTMatrix_put_M11_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTMatrix_get_M12_Proxy( 
    IDXTMatrix __RPC_FAR * This,
    /* [retval][out] */ float __RPC_FAR *pflM12);


void __RPC_STUB IDXTMatrix_get_M12_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTMatrix_put_M12_Proxy( 
    IDXTMatrix __RPC_FAR * This,
    /* [in] */ const float flM12);


void __RPC_STUB IDXTMatrix_put_M12_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTMatrix_get_Dx_Proxy( 
    IDXTMatrix __RPC_FAR * This,
    /* [retval][out] */ float __RPC_FAR *pfldx);


void __RPC_STUB IDXTMatrix_get_Dx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTMatrix_put_Dx_Proxy( 
    IDXTMatrix __RPC_FAR * This,
    /* [in] */ const float fldx);


void __RPC_STUB IDXTMatrix_put_Dx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTMatrix_get_M21_Proxy( 
    IDXTMatrix __RPC_FAR * This,
    /* [retval][out] */ float __RPC_FAR *pflM21);


void __RPC_STUB IDXTMatrix_get_M21_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTMatrix_put_M21_Proxy( 
    IDXTMatrix __RPC_FAR * This,
    /* [in] */ const float flM21);


void __RPC_STUB IDXTMatrix_put_M21_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTMatrix_get_M22_Proxy( 
    IDXTMatrix __RPC_FAR * This,
    /* [retval][out] */ float __RPC_FAR *pflM22);


void __RPC_STUB IDXTMatrix_get_M22_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTMatrix_put_M22_Proxy( 
    IDXTMatrix __RPC_FAR * This,
    /* [in] */ const float flM22);


void __RPC_STUB IDXTMatrix_put_M22_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTMatrix_get_Dy_Proxy( 
    IDXTMatrix __RPC_FAR * This,
    /* [retval][out] */ float __RPC_FAR *pfldy);


void __RPC_STUB IDXTMatrix_get_Dy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTMatrix_put_Dy_Proxy( 
    IDXTMatrix __RPC_FAR * This,
    /* [in] */ const float fldy);


void __RPC_STUB IDXTMatrix_put_Dy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTMatrix_get_SizingMethod_Proxy( 
    IDXTMatrix __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrSizingMethod);


void __RPC_STUB IDXTMatrix_get_SizingMethod_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTMatrix_put_SizingMethod_Proxy( 
    IDXTMatrix __RPC_FAR * This,
    /* [in] */ const BSTR bstrSizingMethod);


void __RPC_STUB IDXTMatrix_put_SizingMethod_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTMatrix_get_FilterType_Proxy( 
    IDXTMatrix __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrFilterType);


void __RPC_STUB IDXTMatrix_get_FilterType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTMatrix_put_FilterType_Proxy( 
    IDXTMatrix __RPC_FAR * This,
    /* [in] */ const BSTR bstrFilterType);


void __RPC_STUB IDXTMatrix_put_FilterType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXTMatrix_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dxtmsft_0224 */
/* [local] */ 

typedef 
enum DISPID_DXTICMFILTER
    {	DISPID_DXTICMFILTER_COLORSPACE	= 1,
	DISPID_DXTICMFILTER_INTENT	= DISPID_DXTICMFILTER_COLORSPACE + 1
    }	DISPID_DXTICMFILTER;



extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0224_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxtmsft_0224_v0_0_s_ifspec;

#ifndef __IDXTICMFilter_INTERFACE_DEFINED__
#define __IDXTICMFilter_INTERFACE_DEFINED__

/* interface IDXTICMFilter */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDXTICMFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("734321ED-1E7B-4E1C-BBFA-89C819800E2F")
    IDXTICMFilter : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ColorSpace( 
            /* [retval][out] */ BSTR __RPC_FAR *pbstrColorSpace) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ColorSpace( 
            /* [in] */ BSTR bstrColorSpace) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Intent( 
            /* [retval][out] */ short __RPC_FAR *pnIntent) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Intent( 
            /* [in] */ short nIntent) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXTICMFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXTICMFilter __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXTICMFilter __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXTICMFilter __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IDXTICMFilter __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IDXTICMFilter __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IDXTICMFilter __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IDXTICMFilter __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ColorSpace )( 
            IDXTICMFilter __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pbstrColorSpace);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_ColorSpace )( 
            IDXTICMFilter __RPC_FAR * This,
            /* [in] */ BSTR bstrColorSpace);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Intent )( 
            IDXTICMFilter __RPC_FAR * This,
            /* [retval][out] */ short __RPC_FAR *pnIntent);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Intent )( 
            IDXTICMFilter __RPC_FAR * This,
            /* [in] */ short nIntent);
        
        END_INTERFACE
    } IDXTICMFilterVtbl;

    interface IDXTICMFilter
    {
        CONST_VTBL struct IDXTICMFilterVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXTICMFilter_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXTICMFilter_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXTICMFilter_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXTICMFilter_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDXTICMFilter_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDXTICMFilter_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDXTICMFilter_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDXTICMFilter_get_ColorSpace(This,pbstrColorSpace)	\
    (This)->lpVtbl -> get_ColorSpace(This,pbstrColorSpace)

#define IDXTICMFilter_put_ColorSpace(This,bstrColorSpace)	\
    (This)->lpVtbl -> put_ColorSpace(This,bstrColorSpace)

#define IDXTICMFilter_get_Intent(This,pnIntent)	\
    (This)->lpVtbl -> get_Intent(This,pnIntent)

#define IDXTICMFilter_put_Intent(This,nIntent)	\
    (This)->lpVtbl -> put_Intent(This,nIntent)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTICMFilter_get_ColorSpace_Proxy( 
    IDXTICMFilter __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pbstrColorSpace);


void __RPC_STUB IDXTICMFilter_get_ColorSpace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTICMFilter_put_ColorSpace_Proxy( 
    IDXTICMFilter __RPC_FAR * This,
    /* [in] */ BSTR bstrColorSpace);


void __RPC_STUB IDXTICMFilter_put_ColorSpace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IDXTICMFilter_get_Intent_Proxy( 
    IDXTICMFilter __RPC_FAR * This,
    /* [retval][out] */ short __RPC_FAR *pnIntent);


void __RPC_STUB IDXTICMFilter_get_Intent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IDXTICMFilter_put_Intent_Proxy( 
    IDXTICMFilter __RPC_FAR * This,
    /* [in] */ short nIntent);


void __RPC_STUB IDXTICMFilter_put_Intent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXTICMFilter_INTERFACE_DEFINED__ */



#ifndef __DXTMSFTLib_LIBRARY_DEFINED__
#define __DXTMSFTLib_LIBRARY_DEFINED__

/* library DXTMSFTLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_DXTMSFTLib;

EXTERN_C const CLSID CLSID_DXTComposite;

#ifdef __cplusplus

class DECLSPEC_UUID("9A43A844-0831-11D1-817F-0000F87557DB")
DXTComposite;
#endif

EXTERN_C const CLSID CLSID_DXLUTBuilder;

#ifdef __cplusplus

class DECLSPEC_UUID("1E54333B-2A00-11d1-8198-0000F87557DB")
DXLUTBuilder;
#endif

EXTERN_C const CLSID CLSID_DXTGradientD;

#ifdef __cplusplus

class DECLSPEC_UUID("623E2882-FC0E-11d1-9A77-0000F8756A10")
DXTGradientD;
#endif

EXTERN_C const CLSID CLSID_DXTWipe;

#ifdef __cplusplus

class DECLSPEC_UUID("AF279B30-86EB-11D1-81BF-0000F87557DB")
DXTWipe;
#endif

EXTERN_C const CLSID CLSID_DXTGradientWipe;

#ifdef __cplusplus

class DECLSPEC_UUID("B96F67A2-30C2-47E8-BD85-70A2C948B50F")
DXTGradientWipe;
#endif

EXTERN_C const CLSID CLSID_DXTConvolution;

#ifdef __cplusplus

class DECLSPEC_UUID("2BC0EF29-E6BA-11d1-81DD-0000F87557DB")
DXTConvolution;
#endif

EXTERN_C const CLSID CLSID_CrBlur;

#ifdef __cplusplus

class DECLSPEC_UUID("7312498D-E87A-11d1-81E0-0000F87557DB")
CrBlur;
#endif

EXTERN_C const CLSID CLSID_CrEmboss;

#ifdef __cplusplus

class DECLSPEC_UUID("F515306D-0156-11d2-81EA-0000F87557DB")
CrEmboss;
#endif

EXTERN_C const CLSID CLSID_CrEngrave;

#ifdef __cplusplus

class DECLSPEC_UUID("F515306E-0156-11d2-81EA-0000F87557DB")
CrEngrave;
#endif

EXTERN_C const CLSID CLSID_DXFade;

#ifdef __cplusplus

class DECLSPEC_UUID("16B280C5-EE70-11D1-9066-00C04FD9189D")
DXFade;
#endif

EXTERN_C const CLSID CLSID_BasicImageEffects;

#ifdef __cplusplus

class DECLSPEC_UUID("16B280C8-EE70-11D1-9066-00C04FD9189D")
BasicImageEffects;
#endif

EXTERN_C const CLSID CLSID_Pixelate;

#ifdef __cplusplus

class DECLSPEC_UUID("4CCEA634-FBE0-11d1-906A-00C04FD9189D")
Pixelate;
#endif

EXTERN_C const CLSID CLSID_CrIris;

#ifdef __cplusplus

class DECLSPEC_UUID("3F69F351-0379-11D2-A484-00C04F8EFB69")
CrIris;
#endif

EXTERN_C const CLSID CLSID_DXTIris;

#ifdef __cplusplus

class DECLSPEC_UUID("049F2CE6-D996-4721-897A-DB15CE9EB73D")
DXTIris;
#endif

EXTERN_C const CLSID CLSID_CrSlide;

#ifdef __cplusplus

class DECLSPEC_UUID("810E402F-056B-11D2-A484-00C04F8EFB69")
CrSlide;
#endif

EXTERN_C const CLSID CLSID_DXTSlide;

#ifdef __cplusplus

class DECLSPEC_UUID("D1C5A1E7-CC47-4E32-BDD2-4B3C5FC50AF5")
DXTSlide;
#endif

EXTERN_C const CLSID CLSID_CrRadialWipe;

#ifdef __cplusplus

class DECLSPEC_UUID("424B71AF-0695-11D2-A484-00C04F8EFB69")
CrRadialWipe;
#endif

EXTERN_C const CLSID CLSID_DXTRadialWipe;

#ifdef __cplusplus

class DECLSPEC_UUID("164484A9-35D9-4FB7-9FAB-48273B96AA1D")
DXTRadialWipe;
#endif

EXTERN_C const CLSID CLSID_CrBarn;

#ifdef __cplusplus

class DECLSPEC_UUID("C3BDF740-0B58-11d2-A484-00C04F8EFB69")
CrBarn;
#endif

EXTERN_C const CLSID CLSID_DXTBarn;

#ifdef __cplusplus

class DECLSPEC_UUID("EC9BA17D-60B5-462B-A6D8-14B89057E22A")
DXTBarn;
#endif

EXTERN_C const CLSID CLSID_CrBlinds;

#ifdef __cplusplus

class DECLSPEC_UUID("00C429C0-0BA9-11d2-A484-00C04F8EFB69")
CrBlinds;
#endif

EXTERN_C const CLSID CLSID_DXTBlinds;

#ifdef __cplusplus

class DECLSPEC_UUID("9A4A4A51-FB3A-4F4B-9B57-A2912A289769")
DXTBlinds;
#endif

EXTERN_C const CLSID CLSID_CrStretch;

#ifdef __cplusplus

class DECLSPEC_UUID("7658F2A2-0A83-11d2-A484-00C04F8EFB69")
CrStretch;
#endif

EXTERN_C const CLSID CLSID_DXTStretch;

#ifdef __cplusplus

class DECLSPEC_UUID("F088DE73-BDD0-4E3C-81F8-6D32F4FE9D28")
DXTStretch;
#endif

EXTERN_C const CLSID CLSID_CrInset;

#ifdef __cplusplus

class DECLSPEC_UUID("93073C40-0BA5-11d2-A484-00C04F8EFB69")
CrInset;
#endif

EXTERN_C const CLSID CLSID_DXTInset;

#ifdef __cplusplus

class DECLSPEC_UUID("76F363F2-7E9F-4ED7-A6A7-EE30351B6628")
DXTInset;
#endif

EXTERN_C const CLSID CLSID_CrSpiral;

#ifdef __cplusplus

class DECLSPEC_UUID("ACA97E00-0C7D-11d2-A484-00C04F8EFB69")
CrSpiral;
#endif

EXTERN_C const CLSID CLSID_DXTSpiral;

#ifdef __cplusplus

class DECLSPEC_UUID("4A03DCB9-6E17-4A39-8845-4EE7DC5331A5")
DXTSpiral;
#endif

EXTERN_C const CLSID CLSID_CrZigzag;

#ifdef __cplusplus

class DECLSPEC_UUID("E6E73D20-0C8A-11D2-A484-00C04F8EFB69")
CrZigzag;
#endif

EXTERN_C const CLSID CLSID_DXTZigzag;

#ifdef __cplusplus

class DECLSPEC_UUID("23E26328-3928-40F2-95E5-93CAD69016EB")
DXTZigzag;
#endif

EXTERN_C const CLSID CLSID_CrWheel;

#ifdef __cplusplus

class DECLSPEC_UUID("5AE1DAE0-1461-11d2-A484-00C04F8EFB69")
CrWheel;
#endif

EXTERN_C const CLSID CLSID_DXTChroma;

#ifdef __cplusplus

class DECLSPEC_UUID("421516C1-3CF8-11D2-952A-00C04FA34F05")
DXTChroma;
#endif

EXTERN_C const CLSID CLSID_DXTDropShadow;

#ifdef __cplusplus

class DECLSPEC_UUID("ADC6CB86-424C-11D2-952A-00C04FA34F05")
DXTDropShadow;
#endif

EXTERN_C const CLSID CLSID_DXTCheckerBoard;

#ifdef __cplusplus

class DECLSPEC_UUID("B3EE7802-8224-4787-A1EA-F0DE16DEABD3")
DXTCheckerBoard;
#endif

EXTERN_C const CLSID CLSID_DXTRevealTrans;

#ifdef __cplusplus

class DECLSPEC_UUID("E31E87C4-86EA-4940-9B8A-5BD5D179A737")
DXTRevealTrans;
#endif

EXTERN_C const CLSID CLSID_DXTMaskFilter;

#ifdef __cplusplus

class DECLSPEC_UUID("3A04D93B-1EDD-4f3f-A375-A03EC19572C4")
DXTMaskFilter;
#endif

EXTERN_C const CLSID CLSID_DXTAlphaImageLoader;

#ifdef __cplusplus

class DECLSPEC_UUID("0C7EFBDE-0303-4C6F-A4F7-31FA2BE5E397")
DXTAlphaImageLoader;
#endif

EXTERN_C const CLSID CLSID_DXTRandomDissolve;

#ifdef __cplusplus

class DECLSPEC_UUID("F7F4A1B6-8E87-452F-A2D7-3077F508DBC0")
DXTRandomDissolve;
#endif

EXTERN_C const CLSID CLSID_DXTRandomBars;

#ifdef __cplusplus

class DECLSPEC_UUID("2E7700B7-27C4-437F-9FBF-1E8BE2817566")
DXTRandomBars;
#endif

EXTERN_C const CLSID CLSID_DXTStrips;

#ifdef __cplusplus

class DECLSPEC_UUID("63A4B1FC-259A-4A5B-8129-A83B8C9E6F4F")
DXTStrips;
#endif

EXTERN_C const CLSID CLSID_DXTGlow;

#ifdef __cplusplus

class DECLSPEC_UUID("9F8E6421-3D9B-11D2-952A-00C04FA34F05")
DXTGlow;
#endif

EXTERN_C const CLSID CLSID_DXTShadow;

#ifdef __cplusplus

class DECLSPEC_UUID("E71B4063-3E59-11D2-952A-00C04FA34F05")
DXTShadow;
#endif

EXTERN_C const CLSID CLSID_DXTAlpha;

#ifdef __cplusplus

class DECLSPEC_UUID("ADC6CB82-424C-11D2-952A-00C04FA34F05")
DXTAlpha;
#endif

EXTERN_C const CLSID CLSID_DXTWave;

#ifdef __cplusplus

class DECLSPEC_UUID("ADC6CB88-424C-11D2-952A-00C04FA34F05")
DXTWave;
#endif

EXTERN_C const CLSID CLSID_DXTLight;

#ifdef __cplusplus

class DECLSPEC_UUID("F9EFBEC2-4302-11D2-952A-00C04FA34F05")
DXTLight;
#endif

EXTERN_C const CLSID CLSID_DXTMotionBlur;

#ifdef __cplusplus

class DECLSPEC_UUID("DD13DE77-D3BA-42D4-B5C6-7745FA4E2D4B")
DXTMotionBlur;
#endif

EXTERN_C const CLSID CLSID_DXTMatrix;

#ifdef __cplusplus

class DECLSPEC_UUID("4ABF5A06-5568-4834-BEE3-327A6D95A685")
DXTMatrix;
#endif

EXTERN_C const CLSID CLSID_DXTICMFilter;

#ifdef __cplusplus

class DECLSPEC_UUID("A1BFB370-5A9F-4429-BB72-B13E2FEAEDEF")
DXTICMFilter;
#endif
#endif /* __DXTMSFTLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long __RPC_FAR *, unsigned long            , BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long __RPC_FAR *, BSTR __RPC_FAR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long __RPC_FAR *, unsigned long            , VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long __RPC_FAR *, VARIANT __RPC_FAR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


