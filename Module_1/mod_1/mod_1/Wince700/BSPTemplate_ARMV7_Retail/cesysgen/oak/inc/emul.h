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
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


Module Name:

    emul.h

Abstract:

    Prototypes for special-case fast Blt functions for display drivers to use.


-------------------------------------------------------------------*/

#ifndef __EMUL_H__
#define __EMUL_H__

#include <gpe.h>

#ifdef __cplusplus
extern "C" {
#endif


/////////////////////////////////////////////
//                                         //
//      Helper functions to select         //
//      from available blit routines       //
//                                         //
//      Please update these functions      //
//      whenever you add a new             //
//      accelerated blit function          //
//                                         //
/////////////////////////////////////////////

SCODE FastBltSelect( GPEBltParms * );

SCODE EmulatedBltSelect02( GPEBltParms * );
SCODE EmulatedBltSelect08( GPEBltParms * );
SCODE EmulatedBltSelect16( GPEBltParms * );
SCODE EmulatedBltSelect32( GPEBltParms * );

class Emulator : public GPE
{

public:

    /////////////////////////////////////////////
    //                                         //
    //              2bpp Methods               //
    //                                         //
    /////////////////////////////////////////////

    //
    // Sourceless blts
    //
    SCODE EmulatedBltFill02( GPEBltParms * );
    SCODE EmulatedBltDstInvert02( GPEBltParms * );
    SCODE EmulatedBltPatInvert02( GPEBltParms * );

    //
    // Sourced blts
    //
    SCODE EmulatedBltSrcCopy0202( GPEBltParms * );
    SCODE EmulatedBltSrcAnd0202( GPEBltParms * );
    SCODE EmulatedBltSrcPaint0202( GPEBltParms * );
    SCODE EmulatedBltSrcInvert0202( GPEBltParms * );

    //
    // Text expansion
    //
    SCODE EmulatedBltText02     ( GPEBltParms * );
    SCODE EmulatedBltAlphaText02( GPEBltParms * );

    /////////////////////////////////////////////
    //                                         //
    //              8bpp Methods               //
    //                                         //
    /////////////////////////////////////////////

    //
    // Sourceless blts
    //
    SCODE EmulatedBltFill08( GPEBltParms * );
    SCODE EmulatedBltDstInvert08( GPEBltParms * );
    SCODE EmulatedBltPatInvert08( GPEBltParms * );

    //
    // Sourced blts
    //
    SCODE EmulatedBltSrcCopy0808  ( GPEBltParms * );
    SCODE EmulatedBltSrcAnd0808   ( GPEBltParms * );
    SCODE EmulatedBltSrcPaint0808 ( GPEBltParms * );
    SCODE EmulatedBltSrcInvert0808( GPEBltParms * );
    SCODE EmulatedBltSrcCopy0408  ( GPEBltParms * );
    SCODE EmulatedBltSrcCopy0108  ( GPEBltParms * );

    //
    // Pattern blts
    //
    SCODE EmulatedBltPatternCopy08  ( GPEBltParms * );
    SCODE EmulatedBltPatternInvert08( GPEBltParms * );
    SCODE EmulatedBltB8B80808       ( GPEBltParms * );

    //
    // Text expansion
    //
    SCODE EmulatedBltText08     ( GPEBltParms * );
    SCODE EmulatedBltAlphaText08( GPEBltParms * );

    /////////////////////////////////////////////
    //                                         //
    //              16bpp Methods              //
    //                                         //
    /////////////////////////////////////////////

    //
    // Sourceless blts
    //
    SCODE EmulatedBltFill16( GPEBltParms * );
    SCODE EmulatedBltDstInvert16( GPEBltParms * );

    //
    // Sourced blts
    //
    SCODE EmulatedBltSrcCopy1616  ( GPEBltParms * );
    SCODE EmulatedBltSrcAnd1616   ( GPEBltParms * );
    SCODE EmulatedBltSrcPaint1616 ( GPEBltParms * );
    SCODE EmulatedBltSrcInvert1616( GPEBltParms * );
    SCODE EmulatedBltSrcCopy0416  ( GPEBltParms * );
    SCODE EmulatedBltSrcCopy0116  ( GPEBltParms * );

    //
    // Pattern blts
    //
    SCODE EmulatedBltB8B81616( GPEBltParms * );

    //
    // Text expansion
    //
    SCODE EmulatedBltText16     ( GPEBltParms * );
    SCODE EmulatedBltAlphaText16( GPEBltParms * );

    /////////////////////////////////////////////
    //                                         //
    //              FastBlt Methods            //
    //                                         //
    /////////////////////////////////////////////

    SCODE Blt_NoStretch_Alpha_32To16at565( GPEBltParms * );
    SCODE Blt_Stretch_Alpha_32To16at565( GPEBltParms * );
    SCODE Blt_NoStretch_NoTrans_32To16at565( GPEBltParms * );
    SCODE Blt_NoStretch_NoTrans_16To16( GPEBltParms * );
    SCODE Blt_NoStretch_Alpha_16To16( GPEBltParms * );
    SCODE Blt_NoStretch_Trans_16To16( GPEBltParms * );
    SCODE Blt_Stretch_Trans_16To16( GPEBltParms * );

    SCODE Blt_NoStretch_Alpha_24To24( GPEBltParms * );
    SCODE Blt_NoStretch_NoTrans_24To24( GPEBltParms * );
    SCODE Blt_Fill_24( GPEBltParms * );

    SCODE Blt_NoStretch_NoTrans_16at565To32( GPEBltParms * );
    SCODE Blt_Fill_32( GPEBltParms * );
    SCODE Blt_Text_32( GPEBltParms * );

    /////////////////////////////////////////////
    //                                         //
    //              32bpp Methods              //
    //                                         //
    /////////////////////////////////////////////

    //
    // Sourceless blts
    //
    SCODE EmulatedBltFill32     ( GPEBltParms * );
    SCODE EmulatedBltDstInvert32( GPEBltParms * );

    //
    // Sourced blts
    //
    SCODE EmulatedBltSrcCopy32  ( GPEBltParms * );
    SCODE EmulatedBltSrcCopy0132( GPEBltParms * );

    //
    // Text expansion
    //
    SCODE EmulatedBltText32( GPEBltParms * );
};

#ifdef __cplusplus
}
#endif

#endif __EMUL_H__

