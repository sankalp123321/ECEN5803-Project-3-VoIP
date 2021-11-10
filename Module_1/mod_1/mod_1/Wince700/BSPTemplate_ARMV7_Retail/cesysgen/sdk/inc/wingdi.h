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
/*++


Module Name: wingdi.h

--*/
#ifndef _WINGDI_H_
#define _WINGDI_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <windef.h>


typedef struct tagPALETTEENTRY {
    BYTE        peRed;
    BYTE        peGreen;
    BYTE        peBlue;
    BYTE        peFlags;
} PALETTEENTRY, *PPALETTEENTRY, FAR *LPPALETTEENTRY;

/* Logical Palette */
typedef struct tagLOGPALETTE {
    WORD        palVersion;
    WORD        palNumEntries;
    PALETTEENTRY        palPalEntry[1];
} LOGPALETTE, *PLOGPALETTE, NEAR *NPLOGPALETTE, FAR *LPLOGPALETTE;


#define TRUETYPE_FONTTYPE       0x0004  
#define LF_FACESIZE				32
#define INVALID_DISPLAY_CONFIGURATIONID (DWORD)0xFFFFFFFF

typedef struct tagLOGFONTA
{
    LONG      lfHeight;
    LONG      lfWidth;
    LONG      lfEscapement;
    LONG      lfOrientation;
    LONG      lfWeight;
    BYTE      lfItalic;
    BYTE      lfUnderline;
    BYTE      lfStrikeOut;
    BYTE      lfCharSet;
    BYTE      lfOutPrecision;
    BYTE      lfClipPrecision;
    BYTE      lfQuality;
    BYTE      lfPitchAndFamily;
    CHAR      lfFaceName[LF_FACESIZE];
} LOGFONTA, *PLOGFONTA, NEAR *NPLOGFONTA, FAR *LPLOGFONTA;

typedef struct tagLOGFONTW
{
    LONG      lfHeight;
    LONG      lfWidth;
    LONG      lfEscapement;
    LONG      lfOrientation;
    LONG      lfWeight;
    BYTE      lfItalic;
    BYTE      lfUnderline;
    BYTE      lfStrikeOut;
    BYTE      lfCharSet;
    BYTE      lfOutPrecision;
    BYTE      lfClipPrecision;
    BYTE      lfQuality;
    BYTE      lfPitchAndFamily;
    WCHAR     lfFaceName[LF_FACESIZE];
} LOGFONTW, *PLOGFONTW, NEAR *NPLOGFONTW, FAR *LPLOGFONTW;


#define WINUSERAPI


// @CESYSGEN IF GWES_PGDI || GWES_MGBASE
#define WINGDIAPI

#define GDI_ERROR            (0xFFFFFFFFL)
#define ERROR               0

#define OBJ_PEN             1
#define OBJ_BRUSH           2
#define OBJ_DC              3
#define OBJ_PAL             5
#define OBJ_FONT            6
#define OBJ_BITMAP          7
#define OBJ_REGION          8
#define OBJ_MEMDC           10
#define OBJ_ENHMETADC       12
#define OBJ_ENHMETAFILE     13
#define OBJ_DDRAWDEVICE     14
#define OBJ_DDRAWSURFACE    15
#define OBJ_DDRAWCLIPPER    16
#define OBJ_DDRAWCOLORCTRL  17
#define OBJ_DDRAWGAMMACTRL  18
#define OBJ_DDRAWVIDEOPORT  19
#define OBJ_ICON            21

#define MIN_OBJ_TYPE        OBJ_PEN
#define MAX_OBJ_TYPE        OBJ_ICON

#define CLR_INVALID            0xFFFFFFFF
#define BI_RGB                0

/* Parameters for GetStockObject */
#define WHITE_BRUSH         0
#define LTGRAY_BRUSH        1
#define GRAY_BRUSH          2
#define DKGRAY_BRUSH        3
#define BLACK_BRUSH         4
#define NULL_BRUSH          5
#define HOLLOW_BRUSH        NULL_BRUSH
#define WHITE_PEN           6
#define BLACK_PEN           7
#define NULL_PEN            8
#define SYSTEM_FONT         13
#define DEFAULT_PALETTE     15
#define BORDERX_PEN         32
#define BORDERY_PEN         33

/* Device Parameters for GetDeviceCaps() */
#define DRIVERVERSION 0     /* Device driver version                    */
#define TECHNOLOGY    2     /* Device classification                    */
#define HORZSIZE      4     /* Horizontal size in millimeters           */
#define VERTSIZE      6     /* Vertical size in millimeters             */
#define HORZRES       8     /* Horizontal width in pixels               */
#define VERTRES       10    /* Vertical height in pixels                */
#define BITSPIXEL     12    /* Number of bits per pixel                 */
#define PLANES        14    /* Number of planes                         */
#define NUMBRUSHES    16    /* Number of brushes the device has         */
#define NUMPENS       18    /* Number of pens the device has            */
#define NUMMARKERS    20    /* Number of markers the device has         */
#define NUMFONTS      22    /* Number of fonts the device has           */
#define NUMCOLORS     24    /* Number of colors the device supports     */
#define PDEVICESIZE   26    /* Size required for device descriptor      */
#define CURVECAPS     28    /* Curve capabilities                       */
#define LINECAPS      30    /* Line capabilities                        */
#define POLYGONALCAPS 32    /* Polygonal capabilities                   */
#define TEXTCAPS      34    /* Text capabilities                        */
#define CLIPCAPS      36    /* Clipping capabilities                    */
#define RASTERCAPS    38    /* Bitblt capabilities                      */
#define ASPECTX       40    /* Length of the X leg                      */
#define ASPECTY       42    /* Length of the Y leg                      */
#define ASPECTXY      44    /* Length of the hypotenuse                 */
#define TOUCHTARGETSIZE 46  /* Touch scale of the device                */

// Printing related DeviceCaps.

#define PHYSICALWIDTH   110 /* Physical Width in device units           */
#define PHYSICALHEIGHT  111 /* Physical Height in device units          */
#define PHYSICALOFFSETX 112 /* Physical Printable Area x margin         */
#define PHYSICALOFFSETY 113 /* Physical Printable Area y margin         */

#define SHADEBLENDCAPS  120 /* Shading and blending caps                */


// touch related DeviceCaps
#define TOUCHCAPS       130 /* touch specific capabilities              */

#define TC_NO_TOUCH             0x0001
#define TC_SINGLE_TOUCH         0x0002
#define TC_SYMMETRIC_TOUCH      0x0003
#define TC_MULTI_TOUCH          0x0004

#ifndef NOGDICAPMASKS

/* Device Capability Masks: */

/* Device Technologies */
#define DT_PLOTTER          0   /* Vector plotter                   */
#define DT_RASDISPLAY       1   /* Raster display                   */
#define DT_RASPRINTER       2   /* Raster printer                   */
#define DT_RASCAMERA        3   /* Raster camera                    */
#define DT_CHARSTREAM       4   /* Character-stream, PLP            */
#define DT_DISPFILE         6   /* Display-file                     */

/* Curve Capabilities */
#define CC_NONE             0   /* Curves not supported             */
#define CC_CIRCLES          1   /* Can do circles                   */
#define CC_PIE              2   /* Can do pie wedges                */
#define CC_CHORD            4   /* Can do chord arcs                */
#define CC_ELLIPSES         8   /* Can do ellipses                  */
#define CC_WIDE             16  /* Can do wide lines                */
#define CC_STYLED           32  /* Can do styled lines              */
#define CC_WIDESTYLED       64  /* Can do wide styled lines         */
#define CC_INTERIORS        128 /* Can do interiors                 */
#define CC_ROUNDRECT        256 /*                                  */

/* Line Capabilities */
#define LC_NONE             0   /* Lines not supported              */
#define LC_POLYLINE         2   /* Can do polylines                 */
#define LC_MARKER           4   /* Can do markers                   */
#define LC_POLYMARKER       8   /* Can do polymarkers               */
#define LC_WIDE             16  /* Can do wide lines                */
#define LC_STYLED           32  /* Can do styled lines              */
#define LC_WIDESTYLED       64  /* Can do wide styled lines         */
#define LC_INTERIORS        128 /* Can do interiors                 */

/* Polygonal Capabilities */
#define PC_NONE             0   /* Polygonals not supported         */
#define PC_POLYGON          1   /* Can do polygons                  */
#define PC_RECTANGLE        2   /* Can do rectangles                */
#define PC_WINDPOLYGON      4   /* Can do winding polygons          */
#define PC_TRAPEZOID        4   /* Can do trapezoids                */
#define PC_SCANLINE         8   /* Can do scanlines                 */
#define PC_WIDE             16  /* Can do wide borders              */
#define PC_STYLED           32  /* Can do styled borders            */
#define PC_WIDESTYLED       64  /* Can do wide styled borders       */
#define PC_INTERIORS        128 /* Can do interiors                 */

/* Clipping Capabilities */
#define CP_NONE             0   /* No clipping of output            */
#define CP_RECTANGLE        1   /* Output clipped to rects          */
#define CP_REGION           2   /* obsolete                         */

/* Text Capabilities */
#define TC_OP_CHARACTER     0x00000001  /* Can do OutputPrecision   CHARACTER      */
#define TC_OP_STROKE        0x00000002  /* Can do OutputPrecision   STROKE         */
#define TC_CP_STROKE        0x00000004  /* Can do ClipPrecision     STROKE         */
#define TC_CR_90            0x00000008  /* Can do CharRotAbility    90             */
#define TC_CR_ANY           0x00000010  /* Can do CharRotAbility    ANY            */
#define TC_SF_X_YINDEP      0x00000020  /* Can do ScaleFreedom      X_YINDEPENDENT */
#define TC_SA_DOUBLE        0x00000040  /* Can do ScaleAbility      DOUBLE         */
#define TC_SA_INTEGER       0x00000080  /* Can do ScaleAbility      INTEGER        */
#define TC_SA_CONTIN        0x00000100  /* Can do ScaleAbility      CONTINUOUS     */
#define TC_EA_DOUBLE        0x00000200  /* Can do EmboldenAbility   DOUBLE         */
#define TC_IA_ABLE          0x00000400  /* Can do ItalisizeAbility  ABLE           */
#define TC_UA_ABLE          0x00000800  /* Can do UnderlineAbility  ABLE           */
#define TC_SO_ABLE          0x00001000  /* Can do StrikeOutAbility  ABLE           */
#define TC_RA_ABLE          0x00002000  /* Can do RasterFontAble    ABLE           */
#define TC_VA_ABLE          0x00004000  /* Can do VectorFontAble    ABLE           */
#define TC_RESERVED         0x00008000
#define TC_SCROLLBLT        0x00010000  /* Don't do text scroll with blt           */

/* Touch Target Size Capabilities */
#define TTS_STYLUS          0           /* Stylus Display */
#define TTS_FINGER          1           /* Finger Display */

#endif /* NOGDICAPMASKS */

/* Raster Capabilities */
#define RC_NONE
#define RC_BITBLT           1       /* Can do standard BLT.             */
#define RC_BANDING          2       /* Device requires banding support  */
#define RC_SCALING          4       /* Device requires scaling support  */
#define RC_BITMAP64         8       /* Device can support >64K bitmap   */
#define RC_GDI20_OUTPUT     0x0010      /* has 2.0 output calls         */
#define RC_GDI20_STATE      0x0020
#define RC_SAVEBITMAP       0x0040
#define RC_DI_BITMAP        0x0080      /* supports DIB to memory       */
#define RC_PALETTE          0x0100      /* supports a palette           */
#define RC_DIBTODEV         0x0200      /* supports DIBitsToDevice      */
#define RC_BIGFONT          0x0400      /* supports >64K fonts          */
#define RC_STRETCHBLT       0x0800      /* supports StretchBlt          */
#define RC_STRETCHDIB       0x2000      /* supports StretchDIBits       */
#define RC_OP_DX_OUTPUT     0x4000
#define RC_DEVBITS          0x8000
#define RC_ROTATEBLT        0x10000

/* Shading and blending caps */
#define SB_CONST_ALPHA      0x00000001
#define SB_PIXEL_ALPHA      0x00000002
#define SB_PREMULT_ALPHA    0x00000004

#define SB_GRAD_RECT        0x00000010
#define SB_GRAD_TRI         0x00000020

#define LOGPIXELSX    88    /* Logical pixels/inch in X                 */
#define LOGPIXELSY    90    /* Logical pixels/inch in Y                 */

#define SIZEPALETTE  104    /* Number of entries in physical palette    */
#define NUMRESERVED  106    /* Number of reserved entries in palette    */
#define COLORRES     108    /* Actual color resolution                  */

/* Device Capability Masks: */

/* Device Technologies */
#define DT_RASDISPLAY       1   /* Raster display                   */

#define RDH_RECTANGLES        1

#define TRANSPARENT         1
#define OPAQUE              2

#define RGB(r,g,b)          ((COLORREF)(((BYTE)(r)|((WORD)((BYTE)(g))<<8))|(((DWORD)(BYTE)(b))<<16)))
#define PALETTERGB(r,g,b)   (0x02000000 | RGB(r,g,b))
/* The PALETTEINDEX macro has been removed.  Use RGB or PALETTEINDEX2BPP instead. */
#define PALETTEINDEX2BPP(i)  (((i)==0)?0x00000000:(((i)==1)?0x00808080:(((i)==2)?0x00C0C0C0:0x00FFFFFF)))
#define RGBA(r,g,b,a)        ((COLORREF)( (((DWORD)(BYTE)(a))<<24) | RGB(r,g,b) ))

#define GetRValue(rgb)  ((BYTE)(rgb))
#define GetGValue(rgb)  ((BYTE)(((WORD)(rgb)) >> 8))
#define GetBValue(rgb)  ((BYTE)((rgb) >> 16))

typedef DWORD COLORREF;

typedef struct tagRGBQUAD {
        BYTE    rgbBlue;
        BYTE    rgbGreen;
        BYTE    rgbRed;
        BYTE    rgbReserved;
} RGBQUAD, FAR *LPRGBQUAD;

typedef struct tagBITMAP {
    LONG        bmType;
    LONG        bmWidth;
    LONG        bmHeight;
    LONG        bmWidthBytes;
    WORD        bmPlanes;
    WORD        bmBitsPixel;
    LPVOID      bmBits;
} BITMAP, *PBITMAP, FAR *LPBITMAP;

typedef struct tagBITMAPINFOHEADER {
        DWORD      biSize;
        LONG       biWidth;
        LONG       biHeight;
        WORD       biPlanes;
        WORD       biBitCount;
        DWORD      biCompression;
        DWORD      biSizeImage;
        LONG       biXPelsPerMeter;
        LONG       biYPelsPerMeter;
        DWORD      biClrUsed;
        DWORD      biClrImportant;
} BITMAPINFOHEADER, FAR *LPBITMAPINFOHEADER, *PBITMAPINFOHEADER;

typedef struct tagBITMAPINFO {
    BITMAPINFOHEADER    bmiHeader;
    RGBQUAD             bmiColors[1];
} BITMAPINFO, FAR *LPBITMAPINFO, *PBITMAPINFO;

#include "pshpack2.h"
typedef struct _tagBITMAPFILEHEADER {
    WORD    bfType;
    DWORD   bfSize;
    WORD    bfReserved1;
    WORD    bfReserved2;
    DWORD   bfOffBits;
} BITMAPFILEHEADER, *LPBITMAPFILEHEADER, *PBITMAPFILEHEADER;
#include "poppack.h"

typedef struct tagHANDLETABLE {
    HGDIOBJ     objectHandle[1];
} HANDLETABLE, *PHANDLETABLE, FAR *LPHANDLETABLE;

WINGDIAPI  HDC       WINAPI CreateCompatibleDC(HDC);
WINGDIAPI  BOOL      WINAPI DeleteDC(HDC);
WINGDIAPI  BOOL      WINAPI DeleteObject(HGDIOBJ);
WINGDIAPI  COLORREF  WINAPI GetBkColor(HDC);
WINGDIAPI  int       WINAPI GetBkMode(HDC);
WINGDIAPI  HGDIOBJ   WINAPI GetCurrentObject(HDC,UINT);
WINGDIAPI  int       WINAPI GetDeviceCaps(HDC,int);
WINGDIAPI  int       WINAPI GetObjectA(HGDIOBJ, int, LPVOID);
WINGDIAPI  int       WINAPI GetObjectW(HGDIOBJ hgdiObj, int cbBuffer, __out_bcount_opt(cbBuffer) LPVOID lpvBuffer);
WINGDIAPI  DWORD     WINAPI GetObjectType(HGDIOBJ h);
WINGDIAPI  HGDIOBJ   WINAPI GetStockObject(int);
WINGDIAPI  COLORREF  WINAPI GetTextColor(HDC);
WINGDIAPI  HGDIOBJ   WINAPI SelectObject(HDC,HGDIOBJ);
WINGDIAPI  COLORREF  WINAPI SetBkColor(HDC,COLORREF);
WINGDIAPI  int       WINAPI SetBkMode(HDC,int);
WINGDIAPI  COLORREF  WINAPI SetTextColor(HDC,COLORREF);
WINGDIAPI  UINT      WINAPI GetDIBColorTable(HDC hdc, UINT uStartIndex, UINT cEntries, __out_ecount(cEntries) RGBQUAD * pColors);
WINGDIAPI  UINT   WINAPI SetDIBColorTable(HDC hdc, UINT uStartIndex, UINT cEntries, __in_ecount(cEntries) CONST RGBQUAD * pColors);

WINGDIAPI DWORD WINAPI OpenDisplayConfiguration(HDC hDC);
WINGDIAPI BOOL WINAPI CloseDisplayConfiguration(DWORD dwDisplayConfigurationID);

#ifdef UNICODE
#define GetObject   GetObjectW
#else
#define GetObject   GetObjectA
#endif //UNICODE
// @CESYSGEN ENDIF


// @CESYSGEN IF GWES_MGBASE
/* palette entry flags */
#define PC_RESERVED     0x01    /* palette index used for animation */
#define PC_EXPLICIT     0x02    /* palette index is explicit to device */

/* constants for the biCompression field */
#define BI_BITFIELDS  3L
// Constant values 4 and 5 are BI_JPEG and BI_PNG.
#define BI_ALPHABITFIELDS  6L
#define BI_FOURCC          7L

// Flag value to specify the source DIB section has the same rotation angle
// as the destination.
#define BI_SRCPREROTATE    0x8000

#include <pshpack1.h>
typedef struct tagRGBTRIPLE {
        BYTE    rgbtBlue;
        BYTE    rgbtGreen;
        BYTE    rgbtRed;
} RGBTRIPLE;
#include <poppack.h>

typedef struct  tagCOLORADJUSTMENT {
    WORD   caSize;
    WORD   caFlags;
    WORD   caIlluminantIndex;
    WORD   caRedGamma;
    WORD   caGreenGamma;
    WORD   caBlueGamma;
    WORD   caReferenceBlack;
    WORD   caReferenceWhite;
    SHORT  caContrast;
    SHORT  caBrightness;
    SHORT  caColorfulness;
    SHORT  caRedGreenTint;
} COLORADJUSTMENT, *PCOLORADJUSTMENT, FAR *LPCOLORADJUSTMENT;

/* size of a device name string */
#define CCHDEVICENAME 32

/* size of a form name string */
#define CCHFORMNAME 32

typedef struct _devicemodeA {
    BYTE   dmDeviceName[CCHDEVICENAME];
    WORD dmSpecVersion;
    WORD dmDriverVersion;
    WORD dmSize;
    WORD dmDriverExtra;
    DWORD dmFields;
    short dmOrientation;
    short dmPaperSize;
    short dmPaperLength;
    short dmPaperWidth;
    short dmScale;
    short dmCopies;
    short dmDefaultSource;
    short dmPrintQuality;
    short dmColor;
    short dmDuplex;
    short dmYResolution;
    short dmTTOption;
    short dmCollate;
    BYTE   dmFormName[CCHFORMNAME];
    WORD   dmLogPixels;
    DWORD  dmBitsPerPel;
    DWORD  dmPelsWidth;
    DWORD  dmPelsHeight;
    DWORD  dmDisplayFlags;
    DWORD  dmDisplayFrequency;
    DWORD  dmICMMethod;
    DWORD  dmICMIntent;
    DWORD  dmMediaType;
    DWORD  dmDitherType;
    DWORD  dmICCManufacturer;
    DWORD  dmICCModel;
    DWORD  dmPanningWidth;
    DWORD  dmPanningHeight;
    DWORD  dmDisplayOrientation;
} DEVMODEA, *PDEVMODEA, *NPDEVMODEA, *LPDEVMODEA;

typedef struct _devicemodeW {
    WCHAR  dmDeviceName[CCHDEVICENAME];
    WORD dmSpecVersion;
    WORD dmDriverVersion;
    WORD dmSize;
    WORD dmDriverExtra;
    DWORD dmFields;
    short dmOrientation;
    short dmPaperSize;
    short dmPaperLength;
    short dmPaperWidth;
    short dmScale;
    short dmCopies;
    short dmDefaultSource;
    short dmPrintQuality;
    short dmColor;
    short dmDuplex;
    short dmYResolution;
    short dmTTOption;
    short dmCollate;
    WCHAR  dmFormName[CCHFORMNAME];
    WORD   dmLogPixels;
    DWORD  dmBitsPerPel;
    DWORD  dmPelsWidth;
    DWORD  dmPelsHeight;
    DWORD  dmDisplayFlags;
    DWORD  dmDisplayFrequency;
    DWORD  dmDisplayOrientation;
// #if (WINVER >= 0x0400)
//     DWORD  dmICMMethod;
//     DWORD  dmICMIntent;
//     DWORD  dmMediaType;
//     DWORD  dmDitherType;
//     DWORD  dmReserved1;
//     DWORD  dmReserved2;
// #endif /* WINVER */
} DEVMODEW, *PDEVMODEW, *NPDEVMODEW, *LPDEVMODEW;

#ifdef UNICODE
typedef DEVMODEW DEVMODE;
typedef PDEVMODEW PDEVMODE;
typedef NPDEVMODEW NPDEVMODE;
typedef LPDEVMODEW LPDEVMODE;
#else
typedef DEVMODEA DEVMODE;
typedef PDEVMODEA PDEVMODE;
typedef NPDEVMODEA NPDEVMODE;
typedef LPDEVMODEA LPDEVMODE;
#endif

/* field selection bits */
#define DM_ORIENTATION      0x00000001L
#define DM_PAPERSIZE        0x00000002L
#define DM_PAPERLENGTH      0x00000004L
#define DM_PAPERWIDTH       0x00000008L
#define DM_SCALE            0x00000010L
#define DM_COPIES           0x00000100L
#define DM_DEFAULTSOURCE    0x00000200L
#define DM_PRINTQUALITY     0x00000400L
#define DM_COLOR            0x00000800L
#define DM_DUPLEX           0x00001000L
#define DM_YRESOLUTION      0x00002000L
#define DM_TTOPTION         0x00004000L
#define DM_COLLATE          0x00008000L
#define DM_FORMNAME         0x00010000L
#define DM_LOGPIXELS        0x00020000L
#define DM_BITSPERPEL       0x00040000L
#define DM_PELSWIDTH        0x00080000L
#define DM_PELSHEIGHT       0x00100000L
#define DM_DISPLAYFLAGS     0x00200000L
#define DM_DISPLAYFREQUENCY 0x00400000L
#define DM_DISPLAYORIENTATION 0x00800000L
#define DM_DISPLAYQUERYORIENTATION 0x01000000L

/* orientation selections */
#define DMORIENT_PORTRAIT   1
#define DMORIENT_LANDSCAPE  2

/* rotation angle for screen rotation */
#define DMDO_0      0
#define DMDO_90     1
#define DMDO_180    2
#define DMDO_270    4
#define DMDO_DEFAULT DMDO_0

/* paper selections */
#define DMPAPER_LETTER               1  /* Letter 8 1/2 x 11 in               */
#define DMPAPER_LEGAL                5  /* Legal 8 1/2 x 14 in                */
#define DMPAPER_A4                   9  /* A4 210 x 297 mm                    */
#define DMPAPER_B4                  12  /* B4 (JIS) 250 x 354                 */
#define DMPAPER_B5                  13  /* B5 (JIS) 182 x 257 mm              */

/* print qualities */
#define DMRES_DRAFT         (-1)
#define DMRES_HIGH          (-4)

/* color enable/disable for color printers */
#define DMCOLOR_MONOCHROME  1
#define DMCOLOR_COLOR       2

WINGDIAPI BOOL     WINAPI SetViewportOrgEx(HDC,int,int,__out_opt LPPOINT);
WINGDIAPI BOOL     WINAPI SetWindowOrgEx(HDC,int,int,__out_opt LPPOINT);
WINGDIAPI BOOL     WINAPI GetWindowOrgEx(HDC,__out LPPOINT);
WINGDIAPI BOOL     WINAPI GetWindowExtEx(HDC,__out LPSIZE);
WINGDIAPI BOOL     WINAPI OffsetViewportOrgEx( __in HDC hdc, int x, __in int y, __out_opt LPPOINT lppt);
WINGDIAPI BOOL     WINAPI GetViewportOrgEx(HDC,__out LPPOINT);
WINGDIAPI BOOL     WINAPI GetViewportExtEx(HDC,__out LPSIZE);


// @CESYSGEN ENDIF


// @CESYSGEN IF GWES_MGDRAW
/* Binary raster ops */
#define R2_BLACK            1   /*  0       */
#define R2_NOTMERGEPEN      2   /* DPon     */
#define R2_MASKNOTPEN       3   /* DPna     */
#define R2_NOTCOPYPEN       4   /* PN       */
#define R2_MASKPENNOT       5   /* PDna     */
#define R2_NOT              6   /* Dn       */
#define R2_XORPEN           7   /* DPx      */
#define R2_NOTMASKPEN       8   /* DPan     */
#define R2_MASKPEN          9   /* DPa      */
#define R2_NOTXORPEN        10  /* DPxn     */
#define R2_NOP              11  /* D        */
#define R2_MERGENOTPEN      12  /* DPno     */
#define R2_COPYPEN          13  /* P        */
#define R2_MERGEPENNOT      14  /* PDno     */
#define R2_MERGEPEN         15  /* DPo      */
#define R2_WHITE            16  /*  1       */
#define R2_LAST             16

/* Brush Styles */
#define BS_PATTERN          3
#define BS_INDEXED          4
#define BS_DIBPATTERN       5
#define BS_PATTERN8X8       7
#define BS_DIBPATTERN8X8    8
#define BS_MONOPATTERN      9

WINGDIAPI HBRUSH WINAPI CreatePatternBrush(HBITMAP);
WINGDIAPI HPEN   WINAPI CreatePen(int, int, COLORREF);
WINGDIAPI BOOL   WINAPI FillRgn(HDC, HRGN, HBRUSH);
WINGDIAPI int    WINAPI SetROP2(HDC, int);
WINGDIAPI int    WINAPI GetROP2(HDC);

// @CESYSGEN ENDIF


// @CESYSGEN IF GWES_PGDI || GWES_MGDRAW
#define BS_SOLID            0
#define BS_NULL             1
#define BS_HOLLOW           BS_NULL
#define BS_DIBPATTERNPT     6

#define PS_SOLID            0
#define PS_DASH             1
#define PS_NULL             5

typedef struct tagLOGBRUSH {
    UINT        lbStyle;
    COLORREF    lbColor;
    LONG        lbHatch;
} LOGBRUSH, *PLOGBRUSH, NEAR *NPLOGBRUSH, FAR *LPLOGBRUSH;

typedef struct tagLOGPEN {
    UINT        lopnStyle;
    POINT       lopnWidth;
    COLORREF    lopnColor;
} LOGPEN, *PLOGPEN, NEAR *NPLOGPEN, FAR *LPLOGPEN;

WINGDIAPI HBRUSH   WINAPI CreateDIBPatternBrushPt(CONST VOID *,UINT);
WINGDIAPI HPEN     WINAPI CreatePenIndirect(__in CONST LOGPEN *);
WINGDIAPI HBRUSH   WINAPI CreateSolidBrush(COLORREF);
WINGDIAPI BOOL     WINAPI DrawEdge(HDC,RECT *,UINT,UINT);
WINGDIAPI BOOL     WINAPI DrawFocusRect(HDC,CONST RECT *);
WINGDIAPI BOOL     WINAPI Ellipse(HDC,int,int,int,int);
WINGDIAPI int      WINAPI FillRect(HDC,__in CONST RECT *,HBRUSH);
WINGDIAPI COLORREF WINAPI GetPixel(HDC,int,int);
WINGDIAPI HBRUSH   WINAPI GetSysColorBrush(int);
WINGDIAPI BOOL     WINAPI Polygon( __in HDC hdc, __in_ecount(c) CONST POINT * lppt, int c);
WINGDIAPI BOOL     WINAPI Polyline(__in HDC hdc,__in_ecount(c) CONST POINT * lppt, int c);
WINGDIAPI BOOL     WINAPI Rectangle(HDC,int,int,int,int);
WINGDIAPI BOOL     WINAPI RoundRect(HDC,int,int,int,int,int,int);
WINGDIAPI BOOL     WINAPI SetBrushOrgEx( __in HDC hdc, int x, int y, __out_opt LPPOINT lppt);
WINGDIAPI COLORREF WINAPI SetPixel(HDC,int,int,COLORREF);
WINGDIAPI BOOL     WINAPI MoveToEx(HDC,int,int,__out_opt LPPOINT);
WINGDIAPI BOOL     WINAPI LineTo(HDC,int,int);
WINGDIAPI BOOL     WINAPI GetCurrentPositionEx(HDC,__out LPPOINT);
// @CESYSGEN ENDIF


// @CESYSGEN IF GWES_PGDI || GWES_MGBITMAP
WINGDIAPI  HBITMAP   WINAPI CreateBitmap(int,int,UINT,UINT,__in_opt CONST VOID *);
WINGDIAPI  HBITMAP   WINAPI CreateCompatibleBitmap(HDC,int,int);
WINGDIAPI  LONG      WINAPI SetBitmapBits(HBITMAP hbmp, DWORD cBytes, __in_bcount(cBytes) CONST VOID* lpvBits);
// @CESYSGEN ENDIF


// @CESYSGEN IF GWES_MGBITMAP || GWES_MGDX
/* structures for defining DIBs */
typedef struct tagBITMAPCOREHEADER {
        DWORD   bcSize;                 /* used to get to color table */
        WORD    bcWidth;
        WORD    bcHeight;
        WORD    bcPlanes;
        WORD    bcBitCount;
} BITMAPCOREHEADER, FAR *LPBITMAPCOREHEADER, *PBITMAPCOREHEADER;

typedef struct tagBITMAPCOREINFO {
    BITMAPCOREHEADER    bmciHeader;
    RGBTRIPLE           bmciColors[1];
} BITMAPCOREINFO, FAR *LPBITMAPCOREINFO, *PBITMAPCOREINFO;
// @CESYSGEN ENDIF


// @CESYSGEN IF GWES_PGDI || GWES_MGRGN
typedef struct _RGNDATAHEADER {
    DWORD   dwSize;
    DWORD   iType;
    DWORD   nCount;
    DWORD   nRgnSize;
    RECT    rcBound;
} RGNDATAHEADER, *PRGNDATAHEADER;

typedef struct _RGNDATA {
    RGNDATAHEADER   rdh;
    char            Buffer[1];
} RGNDATA, *PRGNDATA, NEAR *NPRGNDATA, FAR *LPRGNDATA;

typedef struct  tagXFORM
  {
    FLOAT   eM11;
    FLOAT   eM12;
    FLOAT   eM21;
    FLOAT   eM22;
    FLOAT   eDx;
    FLOAT   eDy;
  } XFORM, *PXFORM, FAR *LPXFORM;
// @CESYSGEN ENDIF


// @CESYSGEN IF GWES_PGDI || GWES_MGRGN
#define NULLREGION          1
#define SIMPLEREGION        2
#define COMPLEXREGION       3
#define RGN_ERROR            ERROR

#define RGN_AND             1
#define RGN_OR              2
#define RGN_XOR             3
#define RGN_DIFF            4
#define RGN_COPY            5
#define RGN_MIN             RGN_AND
#define RGN_MAX             RGN_COPY

WINGDIAPI  int       WINAPI CombineRgn(HRGN,HRGN,HRGN,int);
WINGDIAPI  HRGN      WINAPI CreateRectRgnIndirect(__in CONST RECT *);
WINGDIAPI  BOOL      WINAPI EqualRgn(HRGN,HRGN);
WINGDIAPI  int       WINAPI ExcludeClipRect(HDC,int,int,int,int);
WINGDIAPI  int       WINAPI GetClipBox(HDC,__out LPRECT);
WINGDIAPI  int       WINAPI GetClipRgn(HDC,HRGN);
WINGDIAPI  DWORD     WINAPI GetRegionData(HRGN hrgn, DWORD dwCount, __out_bcount_opt(dwCount) LPRGNDATA lpRgnData);
WINGDIAPI  int       WINAPI GetRgnBox(HRGN,__out RECT *);
WINGDIAPI  int       WINAPI IntersectClipRect(HDC,int,int,int,int);
WINGDIAPI  int       WINAPI OffsetRgn(HRGN,int,int);
WINGDIAPI  BOOL      WINAPI PtInRegion(HRGN,int,int);
WINGDIAPI  BOOL      WINAPI RectInRegion(HRGN,__in CONST RECT *);
WINGDIAPI  int       WINAPI SelectClipRgn(HDC,HRGN);
// @CESYSGEN ENDIF


// @CESYSGEN IF GWES_MGRGN
WINGDIAPI HRGN  WINAPI  CreateRectRgn(int, int, int, int); 
WINGDIAPI BOOL  WINAPI  RectVisible(HDC, __in CONST RECT *);
WINGDIAPI BOOL  WINAPI  SetRectRgn(HRGN, int, int, int, int);
WINGDIAPI HRGN  WINAPI  ExtCreateRegion(__in_opt CONST XFORM *lpXform, DWORD nCount, __in_bcount(nCount) CONST RGNDATA *lpRgnData);

// @CESYSGEN ENDIF


// @CESYSGEN IF GWES_PGDI || GWES_MGBLT
/* Ternary raster operations */
#define SRCCOPY             (DWORD)0x00CC0020 /* dest = source                   */
#define SRCPAINT            (DWORD)0x00EE0086 /* dest = source OR dest           */
#define SRCAND              (DWORD)0x008800C6 /* dest = source AND dest          */
#define SRCINVERT           (DWORD)0x00660046 /* dest = source XOR dest          */
#define SRCERASE            (DWORD)0x00440328 /* dest = source AND (NOT dest )   */
#define NOTSRCCOPY          (DWORD)0x00330008 /* dest = (NOT source)             */
#define NOTSRCERASE         (DWORD)0x001100A6 /* dest = (NOT src) AND (NOT dest) */
#define MERGECOPY           (DWORD)0x00C000CA /* dest = (source AND pattern)     */
#define MERGEPAINT          (DWORD)0x00BB0226 /* dest = (NOT source) OR dest     */
#define PATCOPY             (DWORD)0x00F00021 /* dest = pattern                  */
#define PATPAINT            (DWORD)0x00FB0A09 /* dest = DPSnoo                   */
#define PATINVERT           (DWORD)0x005A0049 /* dest = pattern XOR dest         */
#define DSTINVERT           (DWORD)0x00550009 /* dest = (NOT dest)               */
#define BLACKNESS           (DWORD)0x00000042 /* dest = BLACK                    */
#define WHITENESS           (DWORD)0x00FF0062 /* dest = WHITE                    */

WINGDIAPI  BOOL      WINAPI BitBlt(HDC,int,int,int,int,HDC,int,int,DWORD);
// @CESYSGEN ENDIF


// @CESYSGEN IF GWES_PGDI || GWES_MGBLT2
/* Quaternary raster codes */
#define MAKEROP4(fore,back) (DWORD)((((back) << 8) & 0xFF000000) | (fore))

// StretchBlt() Modes
#define BLACKONWHITE     1
#define COLORONCOLOR     3
#define HALFTONE         4
#define BILINEAR         5

WINGDIAPI  BOOL      WINAPI MaskBlt(HDC,int,int,int,int,HDC,int,int,HBITMAP,int,int,DWORD);
WINGDIAPI  BOOL      WINAPI PatBlt(HDC,int,int,int,int,DWORD);
WINGDIAPI  BOOL      WINAPI StretchBlt(HDC,int,int,int,int,HDC,int,int,int,int,DWORD);
WINGDIAPI  BOOL      WINAPI InvertRect(HDC hDC, __in CONST RECT * lprc);
WINGDIAPI  int       WINAPI SetStretchBltMode(HDC, int);
WINGDIAPI  int       WINAPI GetStretchBltMode(HDC);
// @CESYSGEN ENDIF

// @CESYSGEN IF GWES_PGDI || GWES_MGDIBSEC
WINGDIAPI  BOOL         WINAPI StretchDIBits(HDC, int, int, int, int, int, int, int, int, CONST VOID *, CONST BITMAPINFO *, UINT, DWORD);
WINGDIAPI  int       WINAPI SetDIBitsToDevice(HDC,int, int,DWORD,DWORD,int,int,UINT,UINT,CONST VOID *,CONST BITMAPINFO *, UINT);
// @CESYSGEN ENDIF

// @CESYSGEN IF GWES_MGBLT2
WINGDIAPI  BOOL      WINAPI TransparentImage(HDC,int,int,int,int,HANDLE,int,int,int,int,COLORREF);
#define TransparentBlt(hdcDest,xDestOrg,yDestOrg,dxDest,dyDest,hdcSrc,xSrcOrg,ySrcOrg,dxSrc,dySrc,colorref) \
    TransparentImage(hdcDest,xDestOrg,yDestOrg,dxDest,dyDest,hdcSrc,xSrcOrg,ySrcOrg,dxSrc,dySrc,colorref)
// @CESYSGEN ENDIF


// @CESYSGEN IF GWES_PGDI || GWES_MGTT || GWES_MGRAST
#define ETO_OPAQUE                   0x0002
#define ETO_CLIPPED                  0x0004
#define ETO_RTLREADING               0x0080
#define ETO_IGNORELANGUAGE           0x1000

#define OUT_DEFAULT_PRECIS      0
#define OUT_STRING_PRECIS       1
#define OUT_RASTER_PRECIS       6
#define CLIP_DEFAULT_PRECIS     0
#define CLIP_CHARACTER_PRECIS   1
#define CLIP_STROKE_PRECIS      2

#define DEFAULT_QUALITY            0
#define DRAFT_QUALITY            1
#define RASTER_FONTTYPE            0x0001
#define NONANTIALIASED_QUALITY  3
#define ANTIALIASED_QUALITY     4
#define CLEARTYPE_QUALITY       5
#define CLEARTYPE_COMPAT_QUALITY 6

#ifdef UNICODE
#define LOGFONT                    LOGFONTW
#define PLOGFONT                PLOGFONTW
#define NPLOGFONT                NPLOGFONTW
#define LPLOGFONT                LPLOGFONTW
#else
#define LOGFONT                    LOGFONTA
#define PLOGFONT                PLOGFONTA
#define NPLOGFONT                NPLOGFONTA
#define LPLOGFONT                LPLOGFONTA
#endif //!UNICODE

#define DEFAULT_PITCH           0
#define FIXED_PITCH             1
#define VARIABLE_PITCH          2

#define ANSI_CHARSET            0
#define DEFAULT_CHARSET         1
#define SYMBOL_CHARSET          2
#define SHIFTJIS_CHARSET        128
#define HANGEUL_CHARSET         129
#define HANGUL_CHARSET          129
#define GB2312_CHARSET          134
#define CHINESEBIG5_CHARSET     136
#define OEM_CHARSET             255

#define JOHAB_CHARSET           130
#define HEBREW_CHARSET          177
#define ARABIC_CHARSET          178
#define GREEK_CHARSET           161
#define TURKISH_CHARSET         162
#define VIETNAMESE_CHARSET      163
#define THAI_CHARSET            222
#define EASTEUROPE_CHARSET      238
#define RUSSIAN_CHARSET         204
#define MAC_CHARSET             77
#define BALTIC_CHARSET          186

#define FS_LATIN1               0x00000001L
#define FS_LATIN2               0x00000002L
#define FS_CYRILLIC             0x00000004L
#define FS_GREEK                0x00000008L
#define FS_TURKISH              0x00000010L
#define FS_HEBREW               0x00000020L
#define FS_ARABIC               0x00000040L
#define FS_BALTIC               0x00000080L
#define FS_VIETNAMESE           0x00000100L
#define FS_THAI                 0x00010000L
#define FS_JISJAPAN             0x00020000L
#define FS_CHINESESIMP          0x00040000L
#define FS_WANSUNG              0x00080000L
#define FS_CHINESETRAD          0x00100000L
#define FS_JOHAB                0x00200000L
#define FS_SYMBOL               0x80000000L

/* Font Families */
#define FF_DONTCARE         (0<<4)  /* Don't care or don't know. */
#define FF_ROMAN            (1<<4)  /* Variable stroke width, serifed. */
                                    /* Times Roman, Century Schoolbook, etc. */
#define FF_SWISS            (2<<4)  /* Variable stroke width, sans-serifed. */
                                    /* Helvetica, Swiss, etc. */
#define FF_MODERN           (3<<4)  /* Constant stroke width, serifed or sans-serifed. */
                                    /* Pica, Elite, Courier, etc. */
#define FF_SCRIPT           (4<<4)  /* Cursive, etc. */
#define FF_DECORATIVE       (5<<4)  /* Old English, etc. */

/* Font Weights */
#define FW_DONTCARE         0
#define FW_THIN             100
#define FW_EXTRALIGHT       200
#define FW_LIGHT            300
#define FW_NORMAL           400
#define FW_MEDIUM           500
#define FW_SEMIBOLD         600
#define FW_BOLD             700
#define FW_EXTRABOLD        800
#define FW_HEAVY            900

/* tmPitchAndFamily flags */
#define TMPF_FIXED_PITCH    0x01
#define TMPF_VECTOR         0x02
#define TMPF_DEVICE         0x08
#define TMPF_TRUETYPE       0x04

#define TA_NOUPDATECP                0
#define TA_UPDATECP                  1

#define TA_LEFT                      0
#define TA_RIGHT                     2
#define TA_CENTER                    6

#define TA_TOP                       0
#define TA_BOTTOM                    8
#define TA_BASELINE                  24
#define TA_RTLREADING                256
#define TA_MASK                      (TA_BASELINE | TA_CENTER |TA_UPDATECP |TA_RTLREADING)
#define TA_ALIGNMASK                 (TA_BASELINE | TA_CENTER )


// @CESYSGEN ENDIF

typedef struct tagTEXTMETRICA
{
    LONG        tmHeight;
    LONG        tmAscent;
    LONG        tmDescent;
    LONG        tmInternalLeading;
    LONG        tmExternalLeading;
    LONG        tmAveCharWidth;
    LONG        tmMaxCharWidth;
    LONG        tmWeight;
    LONG        tmOverhang;
    LONG        tmDigitizedAspectX;
    LONG        tmDigitizedAspectY;
    char        tmFirstChar;
    char        tmLastChar;
    char        tmDefaultChar;
    char        tmBreakChar;
    BYTE        tmItalic;
    BYTE        tmUnderlined;
    BYTE        tmStruckOut;
    BYTE        tmPitchAndFamily;
    BYTE        tmCharSet;
} TEXTMETRICA, *PTEXTMETRICA, NEAR *NPTEXTMETRICA, FAR *LPTEXTMETRICA;

typedef struct tagTEXTMETRICW
{
    LONG        tmHeight;
    LONG        tmAscent;
    LONG        tmDescent;
    LONG        tmInternalLeading;
    LONG        tmExternalLeading;
    LONG        tmAveCharWidth;
    LONG        tmMaxCharWidth;
    LONG        tmWeight;
    LONG        tmOverhang;
    LONG        tmDigitizedAspectX;
    LONG        tmDigitizedAspectY;
    WCHAR       tmFirstChar;
    WCHAR       tmLastChar;
    WCHAR       tmDefaultChar;
    WCHAR       tmBreakChar;
    BYTE        tmItalic;
    BYTE        tmUnderlined;
    BYTE        tmStruckOut;
    BYTE        tmPitchAndFamily;
    BYTE        tmCharSet;
} TEXTMETRICW, *PTEXTMETRICW, NEAR *NPTEXTMETRICW, FAR *LPTEXTMETRICW;

#ifdef UNICODE
typedef TEXTMETRICW TEXTMETRIC;
typedef PTEXTMETRICW PTEXTMETRIC;
typedef NPTEXTMETRICW NPTEXTMETRIC;
typedef LPTEXTMETRICW LPTEXTMETRIC;
#else
typedef TEXTMETRICA TEXTMETRIC;
typedef PTEXTMETRICA PTEXTMETRIC;
typedef NPTEXTMETRICA NPTEXTMETRIC;
typedef LPTEXTMETRICA LPTEXTMETRIC;
#endif // UNICODE

#define PAN_ANY                         0 /* Any                            */
#define PAN_NO_FIT                      1 /* No Fit                         */

#define PAN_FAMILY_TEXT_DISPLAY         2 /* Text and Display               */
#define PAN_FAMILY_SCRIPT               3 /* Script                         */
#define PAN_FAMILY_DECORATIVE           4 /* Decorative                     */
#define PAN_FAMILY_PICTORIAL            5 /* Pictorial                      */

#define PAN_SERIF_COVE                  2 /* Cove                           */
#define PAN_SERIF_OBTUSE_COVE           3 /* Obtuse Cove                    */
#define PAN_SERIF_SQUARE_COVE           4 /* Square Cove                    */
#define PAN_SERIF_OBTUSE_SQUARE_COVE    5 /* Obtuse Square Cove             */
#define PAN_SERIF_SQUARE                6 /* Square                         */
#define PAN_SERIF_THIN                  7 /* Thin                           */
#define PAN_SERIF_BONE                  8 /* Bone                           */
#define PAN_SERIF_EXAGGERATED           9 /* Exaggerated                    */
#define PAN_SERIF_TRIANGLE             10 /* Triangle                       */
#define PAN_SERIF_NORMAL_SANS          11 /* Normal Sans                    */
#define PAN_SERIF_OBTUSE_SANS          12 /* Obtuse Sans                    */
#define PAN_SERIF_PERP_SANS            13 /* Prep Sans                      */
#define PAN_SERIF_FLARED               14 /* Flared                         */
#define PAN_SERIF_ROUNDED              15 /* Rounded                        */

#define PAN_WEIGHT_VERY_LIGHT           2 /* Very Light                     */
#define PAN_WEIGHT_LIGHT                3 /* Light                          */
#define PAN_WEIGHT_THIN                 4 /* Thin                           */
#define PAN_WEIGHT_BOOK                 5 /* Book                           */
#define PAN_WEIGHT_MEDIUM               6 /* Medium                         */
#define PAN_WEIGHT_DEMI                 7 /* Demi                           */
#define PAN_WEIGHT_BOLD                 8 /* Bold                           */
#define PAN_WEIGHT_HEAVY                9 /* Heavy                          */
#define PAN_WEIGHT_BLACK               10 /* Black                          */
#define PAN_WEIGHT_NORD                11 /* Nord                           */

#define PAN_PROP_OLD_STYLE              2 /* Old Style                      */
#define PAN_PROP_MODERN                 3 /* Modern                         */
#define PAN_PROP_EVEN_WIDTH             4 /* Even Width                     */
#define PAN_PROP_EXPANDED               5 /* Expanded                       */
#define PAN_PROP_CONDENSED              6 /* Condensed                      */
#define PAN_PROP_VERY_EXPANDED          7 /* Very Expanded                  */
#define PAN_PROP_VERY_CONDENSED         8 /* Very Condensed                 */
#define PAN_PROP_MONOSPACED             9 /* Monospaced                     */

#define PAN_CONTRAST_NONE               2 /* None                           */
#define PAN_CONTRAST_VERY_LOW           3 /* Very Low                       */
#define PAN_CONTRAST_LOW                4 /* Low                            */
#define PAN_CONTRAST_MEDIUM_LOW         5 /* Medium Low                     */
#define PAN_CONTRAST_MEDIUM             6 /* Medium                         */
#define PAN_CONTRAST_MEDIUM_HIGH        7 /* Mediim High                    */
#define PAN_CONTRAST_HIGH               8 /* High                           */
#define PAN_CONTRAST_VERY_HIGH          9 /* Very High                      */

#define PAN_STROKE_GRADUAL_DIAG         2 /* Gradual/Diagonal               */
#define PAN_STROKE_GRADUAL_TRAN         3 /* Gradual/Transitional           */
#define PAN_STROKE_GRADUAL_VERT         4 /* Gradual/Vertical               */
#define PAN_STROKE_GRADUAL_HORZ         5 /* Gradual/Horizontal             */
#define PAN_STROKE_RAPID_VERT           6 /* Rapid/Vertical                 */
#define PAN_STROKE_RAPID_HORZ           7 /* Rapid/Horizontal               */
#define PAN_STROKE_INSTANT_VERT         8 /* Instant/Vertical               */

#define PAN_STRAIGHT_ARMS_HORZ          2 /* Straight Arms/Horizontal       */
#define PAN_STRAIGHT_ARMS_WEDGE         3 /* Straight Arms/Wedge            */
#define PAN_STRAIGHT_ARMS_VERT          4 /* Straight Arms/Vertical         */
#define PAN_STRAIGHT_ARMS_SINGLE_SERIF  5 /* Straight Arms/Single-Serif     */
#define PAN_STRAIGHT_ARMS_DOUBLE_SERIF  6 /* Straight Arms/Double-Serif     */
#define PAN_BENT_ARMS_HORZ              7 /* Non-Straight Arms/Horizontal   */
#define PAN_BENT_ARMS_WEDGE             8 /* Non-Straight Arms/Wedge        */
#define PAN_BENT_ARMS_VERT              9 /* Non-Straight Arms/Vertical     */
#define PAN_BENT_ARMS_SINGLE_SERIF     10 /* Non-Straight Arms/Single-Serif */
#define PAN_BENT_ARMS_DOUBLE_SERIF     11 /* Non-Straight Arms/Double-Serif */

#define PAN_LETT_NORMAL_CONTACT         2 /* Normal/Contact                 */
#define PAN_LETT_NORMAL_WEIGHTED        3 /* Normal/Weighted                */
#define PAN_LETT_NORMAL_BOXED           4 /* Normal/Boxed                   */
#define PAN_LETT_NORMAL_FLATTENED       5 /* Normal/Flattened               */
#define PAN_LETT_NORMAL_ROUNDED         6 /* Normal/Rounded                 */
#define PAN_LETT_NORMAL_OFF_CENTER      7 /* Normal/Off Center              */
#define PAN_LETT_NORMAL_SQUARE          8 /* Normal/Square                  */
#define PAN_LETT_OBLIQUE_CONTACT        9 /* Oblique/Contact                */
#define PAN_LETT_OBLIQUE_WEIGHTED      10 /* Oblique/Weighted               */
#define PAN_LETT_OBLIQUE_BOXED         11 /* Oblique/Boxed                  */
#define PAN_LETT_OBLIQUE_FLATTENED     12 /* Oblique/Flattened              */
#define PAN_LETT_OBLIQUE_ROUNDED       13 /* Oblique/Rounded                */
#define PAN_LETT_OBLIQUE_OFF_CENTER    14 /* Oblique/Off Center             */
#define PAN_LETT_OBLIQUE_SQUARE        15 /* Oblique/Square                 */

#define PAN_MIDLINE_STANDARD_TRIMMED    2 /* Standard/Trimmed               */
#define PAN_MIDLINE_STANDARD_POINTED    3 /* Standard/Pointed               */
#define PAN_MIDLINE_STANDARD_SERIFED    4 /* Standard/Serifed               */
#define PAN_MIDLINE_HIGH_TRIMMED        5 /* High/Trimmed                   */
#define PAN_MIDLINE_HIGH_POINTED        6 /* High/Pointed                   */
#define PAN_MIDLINE_HIGH_SERIFED        7 /* High/Serifed                   */
#define PAN_MIDLINE_CONSTANT_TRIMMED    8 /* Constant/Trimmed               */
#define PAN_MIDLINE_CONSTANT_POINTED    9 /* Constant/Pointed               */
#define PAN_MIDLINE_CONSTANT_SERIFED   10 /* Constant/Serifed               */
#define PAN_MIDLINE_LOW_TRIMMED        11 /* Low/Trimmed                    */
#define PAN_MIDLINE_LOW_POINTED        12 /* Low/Pointed                    */
#define PAN_MIDLINE_LOW_SERIFED        13 /* Low/Serifed                    */

#define PAN_XHEIGHT_CONSTANT_SMALL      2 /* Constant/Small                 */
#define PAN_XHEIGHT_CONSTANT_STD        3 /* Constant/Standard              */
#define PAN_XHEIGHT_CONSTANT_LARGE      4 /* Constant/Large                 */
#define PAN_XHEIGHT_DUCKING_SMALL       5 /* Ducking/Small                  */
#define PAN_XHEIGHT_DUCKING_STD         6 /* Ducking/Standard               */
#define PAN_XHEIGHT_DUCKING_LARGE       7 /* Ducking/Large                  */

/* paper selections */
#define DMPAPER_FIRST                DMPAPER_LETTER
#define DMPAPER_LETTER               1  /* Letter 8 1/2 x 11 in               */
#define DMPAPER_LETTERSMALL          2  /* Letter Small 8 1/2 x 11 in         */
#define DMPAPER_TABLOID              3  /* Tabloid 11 x 17 in                 */
#define DMPAPER_LEDGER               4  /* Ledger 17 x 11 in                  */
#define DMPAPER_LEGAL                5  /* Legal 8 1/2 x 14 in                */
#define DMPAPER_STATEMENT            6  /* Statement 5 1/2 x 8 1/2 in         */
#define DMPAPER_EXECUTIVE            7  /* Executive 7 1/4 x 10 1/2 in        */
#define DMPAPER_A3                   8  /* A3 297 x 420 mm                    */
#define DMPAPER_A4                   9  /* A4 210 x 297 mm                    */
#define DMPAPER_A4SMALL             10  /* A4 Small 210 x 297 mm              */
#define DMPAPER_A5                  11  /* A5 148 x 210 mm                    */
#define DMPAPER_B4                  12  /* B4 (JIS) 250 x 354                 */
#define DMPAPER_B5                  13  /* B5 (JIS) 182 x 257 mm              */
#define DMPAPER_FOLIO               14  /* Folio 8 1/2 x 13 in                */
#define DMPAPER_QUARTO              15  /* Quarto 215 x 275 mm                */
#define DMPAPER_10X14               16  /* 10x14 in                           */
#define DMPAPER_11X17               17  /* 11x17 in                           */
#define DMPAPER_NOTE                18  /* Note 8 1/2 x 11 in                 */
#define DMPAPER_ENV_9               19  /* Envelope #9 3 7/8 x 8 7/8          */
#define DMPAPER_ENV_10              20  /* Envelope #10 4 1/8 x 9 1/2         */
#define DMPAPER_ENV_11              21  /* Envelope #11 4 1/2 x 10 3/8        */
#define DMPAPER_ENV_12              22  /* Envelope #12 4 \276 x 11           */
#define DMPAPER_ENV_14              23  /* Envelope #14 5 x 11 1/2            */
#define DMPAPER_CSHEET              24  /* C size sheet                       */
#define DMPAPER_DSHEET              25  /* D size sheet                       */
#define DMPAPER_ESHEET              26  /* E size sheet                       */
#define DMPAPER_ENV_DL              27  /* Envelope DL 110 x 220mm            */
#define DMPAPER_ENV_C5              28  /* Envelope C5 162 x 229 mm           */
#define DMPAPER_ENV_C3              29  /* Envelope C3  324 x 458 mm          */
#define DMPAPER_ENV_C4              30  /* Envelope C4  229 x 324 mm          */
#define DMPAPER_ENV_C6              31  /* Envelope C6  114 x 162 mm          */
#define DMPAPER_ENV_C65             32  /* Envelope C65 114 x 229 mm          */
#define DMPAPER_ENV_B4              33  /* Envelope B4  250 x 353 mm          */
#define DMPAPER_ENV_B5              34  /* Envelope B5  176 x 250 mm          */
#define DMPAPER_ENV_B6              35  /* Envelope B6  176 x 125 mm          */
#define DMPAPER_ENV_ITALY           36  /* Envelope 110 x 230 mm              */
#define DMPAPER_ENV_MONARCH         37  /* Envelope Monarch 3.875 x 7.5 in    */
#define DMPAPER_ENV_PERSONAL        38  /* 6 3/4 Envelope 3 5/8 x 6 1/2 in    */
#define DMPAPER_FANFOLD_US          39  /* US Std Fanfold 14 7/8 x 11 in      */
#define DMPAPER_FANFOLD_STD_GERMAN  40  /* German Std Fanfold 8 1/2 x 12 in   */
#define DMPAPER_FANFOLD_LGL_GERMAN  41  /* German Legal Fanfold 8 1/2 x 13 in */
#if(WINVER >= 0x0400)
#define DMPAPER_ISO_B4              42  /* B4 (ISO) 250 x 353 mm              */
#define DMPAPER_JAPANESE_POSTCARD   43  /* Japanese Postcard 100 x 148 mm     */
#define DMPAPER_9X11                44  /* 9 x 11 in                          */
#define DMPAPER_10X11               45  /* 10 x 11 in                         */
#define DMPAPER_15X11               46  /* 15 x 11 in                         */
#define DMPAPER_ENV_INVITE          47  /* Envelope Invite 220 x 220 mm       */
#define DMPAPER_RESERVED_48         48  /* RESERVED--DO NOT USE               */
#define DMPAPER_RESERVED_49         49  /* RESERVED--DO NOT USE               */
#define DMPAPER_LETTER_EXTRA        50  /* Letter Extra 9 \275 x 12 in        */
#define DMPAPER_LEGAL_EXTRA         51  /* Legal Extra 9 \275 x 15 in         */
#define DMPAPER_TABLOID_EXTRA       52  /* Tabloid Extra 11.69 x 18 in        */
#define DMPAPER_A4_EXTRA            53  /* A4 Extra 9.27 x 12.69 in           */
#define DMPAPER_LETTER_TRANSVERSE   54  /* Letter Transverse 8 \275 x 11 in   */
#define DMPAPER_A4_TRANSVERSE       55  /* A4 Transverse 210 x 297 mm         */
#define DMPAPER_LETTER_EXTRA_TRANSVERSE 56 /* Letter Extra Transverse 9\275 x 12 in */
#define DMPAPER_A_PLUS              57  /* SuperA/SuperA/A4 227 x 356 mm      */
#define DMPAPER_B_PLUS              58  /* SuperB/SuperB/A3 305 x 487 mm      */
#define DMPAPER_LETTER_PLUS         59  /* Letter Plus 8.5 x 12.69 in         */
#define DMPAPER_A4_PLUS             60  /* A4 Plus 210 x 330 mm               */
#define DMPAPER_A5_TRANSVERSE       61  /* A5 Transverse 148 x 210 mm         */
#define DMPAPER_B5_TRANSVERSE       62  /* B5 (JIS) Transverse 182 x 257 mm   */
#define DMPAPER_A3_EXTRA            63  /* A3 Extra 322 x 445 mm              */
#define DMPAPER_A5_EXTRA            64  /* A5 Extra 174 x 235 mm              */
#define DMPAPER_B5_EXTRA            65  /* B5 (ISO) Extra 201 x 276 mm        */
#define DMPAPER_A2                  66  /* A2 420 x 594 mm                    */
#define DMPAPER_A3_TRANSVERSE       67  /* A3 Transverse 297 x 420 mm         */
#define DMPAPER_A3_EXTRA_TRANSVERSE 68  /* A3 Extra Transverse 322 x 445 mm   */
#endif /* WINVER >= 0x0400 */

#if(WINVER >= 0x0500)
#define DMPAPER_DBL_JAPANESE_POSTCARD 69 /* Japanese Double Postcard 200 x 148 mm */
#define DMPAPER_A6                  70  /* A6 105 x 148 mm                 */
#define DMPAPER_JENV_KAKU2          71  /* Japanese Envelope Kaku #2       */
#define DMPAPER_JENV_KAKU3          72  /* Japanese Envelope Kaku #3       */
#define DMPAPER_JENV_CHOU3          73  /* Japanese Envelope Chou #3       */
#define DMPAPER_JENV_CHOU4          74  /* Japanese Envelope Chou #4       */
#define DMPAPER_LETTER_ROTATED      75  /* Letter Rotated 11 x 8 1/2 11 in */
#define DMPAPER_A3_ROTATED          76  /* A3 Rotated 420 x 297 mm         */
#define DMPAPER_A4_ROTATED          77  /* A4 Rotated 297 x 210 mm         */
#define DMPAPER_A5_ROTATED          78  /* A5 Rotated 210 x 148 mm         */
#define DMPAPER_B4_JIS_ROTATED      79  /* B4 (JIS) Rotated 364 x 257 mm   */
#define DMPAPER_B5_JIS_ROTATED      80  /* B5 (JIS) Rotated 257 x 182 mm   */
#define DMPAPER_JAPANESE_POSTCARD_ROTATED 81 /* Japanese Postcard Rotated 148 x 100 mm */
#define DMPAPER_DBL_JAPANESE_POSTCARD_ROTATED 82 /* Double Japanese Postcard Rotated 148 x 200 mm */
#define DMPAPER_A6_ROTATED          83  /* A6 Rotated 148 x 105 mm         */
#define DMPAPER_JENV_KAKU2_ROTATED  84  /* Japanese Envelope Kaku #2 Rotated */
#define DMPAPER_JENV_KAKU3_ROTATED  85  /* Japanese Envelope Kaku #3 Rotated */
#define DMPAPER_JENV_CHOU3_ROTATED  86  /* Japanese Envelope Chou #3 Rotated */
#define DMPAPER_JENV_CHOU4_ROTATED  87  /* Japanese Envelope Chou #4 Rotated */
#define DMPAPER_B6_JIS              88  /* B6 (JIS) 128 x 182 mm           */
#define DMPAPER_B6_JIS_ROTATED      89  /* B6 (JIS) Rotated 182 x 128 mm   */
#define DMPAPER_12X11               90  /* 12 x 11 in                      */
#define DMPAPER_JENV_YOU4           91  /* Japanese Envelope You #4        */
#define DMPAPER_JENV_YOU4_ROTATED   92  /* Japanese Envelope You #4 Rotated*/
#define DMPAPER_P16K                93  /* PRC 16K 146 x 215 mm            */
#define DMPAPER_P32K                94  /* PRC 32K 97 x 151 mm             */
#define DMPAPER_P32KBIG             95  /* PRC 32K(Big) 97 x 151 mm        */
#define DMPAPER_PENV_1              96  /* PRC Envelope #1 102 x 165 mm    */
#define DMPAPER_PENV_2              97  /* PRC Envelope #2 102 x 176 mm    */
#define DMPAPER_PENV_3              98  /* PRC Envelope #3 125 x 176 mm    */
#define DMPAPER_PENV_4              99  /* PRC Envelope #4 110 x 208 mm    */
#define DMPAPER_PENV_5              100 /* PRC Envelope #5 110 x 220 mm    */
#define DMPAPER_PENV_6              101 /* PRC Envelope #6 120 x 230 mm    */
#define DMPAPER_PENV_7              102 /* PRC Envelope #7 160 x 230 mm    */
#define DMPAPER_PENV_8              103 /* PRC Envelope #8 120 x 309 mm    */
#define DMPAPER_PENV_9              104 /* PRC Envelope #9 229 x 324 mm    */
#define DMPAPER_PENV_10             105 /* PRC Envelope #10 324 x 458 mm   */
#define DMPAPER_P16K_ROTATED        106 /* PRC 16K Rotated                 */
#define DMPAPER_P32K_ROTATED        107 /* PRC 32K Rotated                 */
#define DMPAPER_P32KBIG_ROTATED     108 /* PRC 32K(Big) Rotated            */
#define DMPAPER_PENV_1_ROTATED      109 /* PRC Envelope #1 Rotated 165 x 102 mm */
#define DMPAPER_PENV_2_ROTATED      110 /* PRC Envelope #2 Rotated 176 x 102 mm */
#define DMPAPER_PENV_3_ROTATED      111 /* PRC Envelope #3 Rotated 176 x 125 mm */
#define DMPAPER_PENV_4_ROTATED      112 /* PRC Envelope #4 Rotated 208 x 110 mm */
#define DMPAPER_PENV_5_ROTATED      113 /* PRC Envelope #5 Rotated 220 x 110 mm */
#define DMPAPER_PENV_6_ROTATED      114 /* PRC Envelope #6 Rotated 230 x 120 mm */
#define DMPAPER_PENV_7_ROTATED      115 /* PRC Envelope #7 Rotated 230 x 160 mm */
#define DMPAPER_PENV_8_ROTATED      116 /* PRC Envelope #8 Rotated 309 x 120 mm */
#define DMPAPER_PENV_9_ROTATED      117 /* PRC Envelope #9 Rotated 324 x 229 mm */
#define DMPAPER_PENV_10_ROTATED     118 /* PRC Envelope #10 Rotated 458 x 324 mm */
#endif /* WINVER >= 0x0500 */

#if (WINVER >= 0x0500)
#define DMPAPER_LAST                DMPAPER_PENV_10_ROTATED
#elif (WINVER >= 0x0400)
#define DMPAPER_LAST                DMPAPER_A3_EXTRA_TRANSVERSE
#else
#define DMPAPER_LAST                DMPAPER_FANFOLD_LGL_GERMAN
#endif

#define DMPAPER_USER                256


typedef struct tagPANOSE
{
    BYTE    bFamilyType;
    BYTE    bSerifStyle;
    BYTE    bWeight;
    BYTE    bProportion;
    BYTE    bContrast;
    BYTE    bStrokeVariation;
    BYTE    bArmStyle;
    BYTE    bLetterform;
    BYTE    bMidline;
    BYTE    bXHeight;
} PANOSE, * LPPANOSE;


#pragma warning(push)
#pragma warning(disable : 4121)

typedef struct _OUTLINETEXTMETRICA {
    UINT    otmSize;
    TEXTMETRICW otmTextMetrics;
    BYTE    otmFiller;
    PANOSE  otmPanoseNumber;
    UINT    otmfsSelection;
    UINT    otmfsType;
     int    otmsCharSlopeRise;
     int    otmsCharSlopeRun;
     int    otmItalicAngle;
    UINT    otmEMSquare;
     int    otmAscent;
     int    otmDescent;
    UINT    otmLineGap;
    UINT    otmsCapEmHeight;
    UINT    otmsXHeight;
    RECT    otmrcFontBox;
     int    otmMacAscent;
     int    otmMacDescent;
    UINT    otmMacLineGap;
    UINT    otmusMinimumPPEM;
    POINT   otmptSubscriptSize;
    POINT   otmptSubscriptOffset;
    POINT   otmptSuperscriptSize;
    POINT   otmptSuperscriptOffset;
    UINT    otmsStrikeoutSize;
     int    otmsStrikeoutPosition;
     int    otmsUnderscoreSize;
     int    otmsUnderscorePosition;
    PSTR    otmpFamilyName;
    PSTR    otmpFaceName;
    PSTR    otmpStyleName;
    PSTR    otmpFullName;
} OUTLINETEXTMETRICA, *POUTLINETEXTMETRICA, NEAR *NPOUTLINETEXTMETRICA, FAR *LPOUTLINETEXTMETRICA;

typedef struct _OUTLINETEXTMETRICW {
    UINT    otmSize;
    TEXTMETRICW otmTextMetrics;
    BYTE    otmFiller;
    PANOSE  otmPanoseNumber;
    UINT    otmfsSelection;
    UINT    otmfsType;
     int    otmsCharSlopeRise;
     int    otmsCharSlopeRun;
     int    otmItalicAngle;
    UINT    otmEMSquare;
     int    otmAscent;
     int    otmDescent;
    UINT    otmLineGap;
    UINT    otmsCapEmHeight;
    UINT    otmsXHeight;
    RECT    otmrcFontBox;
     int    otmMacAscent;
     int    otmMacDescent;
    UINT    otmMacLineGap;
    UINT    otmusMinimumPPEM;
    POINT   otmptSubscriptSize;
    POINT   otmptSubscriptOffset;
    POINT   otmptSuperscriptSize;
    POINT   otmptSuperscriptOffset;
    UINT    otmsStrikeoutSize;
     int    otmsStrikeoutPosition;
     int    otmsUnderscoreSize;
     int    otmsUnderscorePosition;
    PSTR    otmpFamilyName;
    PSTR    otmpFaceName;
    PSTR    otmpStyleName;
    PSTR    otmpFullName;
} OUTLINETEXTMETRICW, *POUTLINETEXTMETRICW, NEAR *NPOUTLINETEXTMETRICW, FAR *LPOUTLINETEXTMETRICW;

#pragma warning(pop)


#ifdef UNICODE
typedef OUTLINETEXTMETRICW OUTLINETEXTMETRIC;
typedef POUTLINETEXTMETRICW POUTLINETEXTMETRIC;
typedef NPOUTLINETEXTMETRICW NPOUTLINETEXTMETRIC;
typedef LPTEXTMETRICW LPTEXTMETRIC;
#else
typedef OUTLINETEXTMETRICA OUTLINETEXTMETRIC;
typedef POUTLINETEXTMETRICA POUTLINETEXTMETRIC;
typedef NPOUTLINETEXTMETRICA NPOUTLINETEXTMETRIC;
typedef LPOUTLINETEXTMETRICA LPOUTLINETEXTMETRIC;
#endif // UNICODE


// @CESYSGEN IF GWES_PGDI || GWES_MGTT || GWES_MGRAST

/* ntmFlags field flags */
#define NTM_REGULAR     0x00000040L
#define NTM_BOLD        0x00000020L
#define NTM_ITALIC      0x00000001L


#pragma warning(push)
#pragma warning(disable : 4121)

typedef struct tagNEWTEXTMETRICA
{
    LONG        tmHeight;
    LONG        tmAscent;
    LONG        tmDescent;
    LONG        tmInternalLeading;
    LONG        tmExternalLeading;
    LONG        tmAveCharWidth;
    LONG        tmMaxCharWidth;
    LONG        tmWeight;
    LONG        tmOverhang;
    LONG        tmDigitizedAspectX;
    LONG        tmDigitizedAspectY;
    BYTE        tmFirstChar;
    BYTE        tmLastChar;
    BYTE        tmDefaultChar;
    BYTE        tmBreakChar;
    BYTE        tmItalic;
    BYTE        tmUnderlined;
    BYTE        tmStruckOut;
    BYTE        tmPitchAndFamily;
    BYTE        tmCharSet;
    DWORD       ntmFlags;
    UINT        ntmSizeEM;
    UINT        ntmCellHeight;
    UINT        ntmAvgWidth;
} NEWTEXTMETRICA, *PNEWTEXTMETRICA, NEAR *NPNEWTEXTMETRICA, FAR *LPNEWTEXTMETRICA;

typedef struct tagNEWTEXTMETRICW
{
    LONG        tmHeight;
    LONG        tmAscent;
    LONG        tmDescent;
    LONG        tmInternalLeading;
    LONG        tmExternalLeading;
    LONG        tmAveCharWidth;
    LONG        tmMaxCharWidth;
    LONG        tmWeight;
    LONG        tmOverhang;
    LONG        tmDigitizedAspectX;
    LONG        tmDigitizedAspectY;
    WCHAR       tmFirstChar;
    WCHAR       tmLastChar;
    WCHAR       tmDefaultChar;
    WCHAR       tmBreakChar;
    BYTE        tmItalic;
    BYTE        tmUnderlined;
    BYTE        tmStruckOut;
    BYTE        tmPitchAndFamily;
    BYTE        tmCharSet;
    DWORD       ntmFlags;
    UINT        ntmSizeEM;
    UINT        ntmCellHeight;
    UINT        ntmAvgWidth;
} NEWTEXTMETRICW, *PNEWTEXTMETRICW, NEAR *NPNEWTEXTMETRICW, FAR *LPNEWTEXTMETRICW;

#pragma warning(pop)


typedef struct _ABC {
    int     abcA;
    UINT    abcB;
    int     abcC;
} ABC, *PABC, NEAR *NPABC, FAR *LPABC;

#ifdef UNICODE
typedef NEWTEXTMETRICW NEWTEXTMETRIC;
typedef PNEWTEXTMETRICW PNEWTEXTMETRIC;
typedef NPNEWTEXTMETRICW NPNEWTEXTMETRIC;
typedef LPNEWTEXTMETRICW LPNEWTEXTMETRIC;
#else
typedef NEWTEXTMETRICA NEWTEXTMETRIC;
typedef PNEWTEXTMETRICA PNEWTEXTMETRIC;
typedef NPNEWTEXTMETRICA NPNEWTEXTMETRIC;
typedef LPNEWTEXTMETRICA LPNEWTEXTMETRIC;
#endif // UNICODE

typedef struct tagFONTSIGNATURE
{
    DWORD fsUsb[4];
    DWORD fsCsb[2];
} FONTSIGNATURE, *PFONTSIGNATURE,FAR *LPFONTSIGNATURE;

typedef struct tagNEWTEXTMETRICEXA
{
    NEWTEXTMETRICA  ntmTm;
    FONTSIGNATURE   ntmFontSig;
} NEWTEXTMETRICEXA;
typedef struct tagNEWTEXTMETRICEXW
{
    NEWTEXTMETRICW  ntmTm;
    FONTSIGNATURE   ntmFontSig;
} NEWTEXTMETRICEXW;
#ifdef UNICODE
typedef NEWTEXTMETRICEXW NEWTEXTMETRICEX;
#else
typedef NEWTEXTMETRICEXA NEWTEXTMETRICEX;
#endif

WINGDIAPI  int       WINAPI AddFontResourceA(LPWSTR);
WINGDIAPI  int       WINAPI AddFontResourceW(__in LPCWSTR);
WINGDIAPI  HFONT     WINAPI CreateFontIndirectA(CONST LOGFONTA *);
WINGDIAPI  HFONT     WINAPI CreateFontIndirectW(__in CONST LOGFONTW *);
WINGDIAPI  BOOL      WINAPI ExtTextOutA( __in HDC hdc, int x, int y, UINT options, __in_opt CONST RECT * lprect, __in_ecount_opt(c) LPCSTR lpString,  UINT c, CONST INT * lpDx);
WINGDIAPI  BOOL      WINAPI ExtTextOutW( __in HDC hdc, int x, int y, UINT options, __in_opt CONST RECT * lprect, __in_ecount_opt(c) LPCWSTR lpString,  UINT c, CONST INT * lpDx);
WINGDIAPI  BOOL      WINAPI GetTextExtentExPointA(HDC,LPCSTR,int,int,LPINT,LPINT,LPSIZE);
WINGDIAPI  BOOL      WINAPI GetTextExtentExPointW(HDC hdc, __in_ecount_opt(cchStr) LPCWSTR lpszStr, int cchStr, int nMaxExtent, __out_opt LPINT lpnFit, __out_ecount_opt(cchStr) LPINT alpDx, __out LPSIZE lpSize);
WINGDIAPI  BOOL      WINAPI GetTextMetricsA(HDC,LPTEXTMETRICA);
WINGDIAPI  BOOL      WINAPI GetTextMetricsW(HDC,__out LPTEXTMETRICW);
WINGDIAPI  BOOL      WINAPI RemoveFontResourceA(LPCSTR);
WINGDIAPI  BOOL      WINAPI RemoveFontResourceW(__in LPCWSTR);
WINGDIAPI  UINT      WINAPI SetTextAlign(HDC,UINT);
WINGDIAPI  UINT      WINAPI GetTextAlign(HDC);
WINGDIAPI  int       WINAPI SetTextCharacterExtra(HDC,int);
WINGDIAPI  int       WINAPI GetTextCharacterExtra(HDC);
WINGDIAPI  BOOL      WINAPI GetCharWidth32(HDC,UINT,UINT,__out LPINT);
WINGDIAPI  BOOL      WINAPI GetCharABCWidths(HDC,UINT,UINT,__out LPABC);
WINGDIAPI  DWORD     WINAPI GetFontData(HDC hdc, DWORD dwTable, DWORD dwOffset, __out_bcount(cbData) LPVOID lpvBuffer, DWORD cbData);
WINGDIAPI  BOOL      WINAPI GetCharABCWidthsI(HDC hdc,UINT giFirst,UINT cgi,__in_ecount_opt(cgi) LPWORD pgi,__out_ecount(cgi) LPABC lpabc);
WINGDIAPI  UINT      WINAPI GetOutlineTextMetricsA(HDC,UINT,LPOUTLINETEXTMETRICA);
WINGDIAPI  UINT      WINAPI GetOutlineTextMetricsW(HDC hdc, UINT cbData, __out_bcount_opt(cbData) LPOUTLINETEXTMETRICW lpOTRM);
WINGDIAPI  HANDLE    WINAPI AddFontMemResourceEx(__in_bcount(cbFont) PVOID pbFont, DWORD cbFont, __in_opt PVOID pdv, __out DWORD* pcFonts);
WINGDIAPI  BOOL      WINAPI RemoveFontMemResourceEx(HANDLE);

#define FR_PRIVATE     0x10
#define FR_NOT_ENUM    0x20

/* GetTextExtentPoint variants */
#define GetTextExtentPointW(hdc, lpString, cbString, lpSize) \
        GetTextExtentExPointW(hdc, lpString, cbString, 0, NULL, NULL, lpSize)

#define GetTextExtentPointA(hdc, lpString, cbString, lpSize) \
        GetTextExtentExPointA(hdc, lpString, cbString, 0, NULL, NULL, lpSize)

#ifdef UNICODE
#define GetTextExtentPoint(hdc, lpString, cbString, lpSize) \
        GetTextExtentPointW(hdc, lpString, cbString, lpSize)
#else
#define GetTextExtentPoint(hdc, lpString, cbString, lpSize) \
        GetTextExtentPointA(hdc, lpString, cbString, lpSize)
#endif


/* GetTextExtentPoint32 variants */
#define GetTextExtentPoint32W(hdc, lpString, cbString, lpSize) \
        GetTextExtentPointW(hdc, lpString, cbString, lpSize)

#define GetTextExtentPoint32A(hdc, lpString, cbString, lpSize) \
        GetTextExtentPointA(hdc, lpString, cbString, lpSize)

#define GetTextExtentPoint32(hdc, lpString, cbString, lpSize) \
        GetTextExtentPoint(hdc, lpString, cbString, lpSize)


#ifdef UNICODE
#define AddFontResource         AddFontResourceW
#define CreateFontIndirect      CreateFontIndirectW
#define ExtTextOut              ExtTextOutW
#define GetTextExtentExPoint    GetTextExtentExPointW
#define GetTextMetrics          GetTextMetricsW
#define RemoveFontResource      RemoveFontResourceW
#define GetOutlineTextMetrics   GetOutlineTextMetricsW
#else
#define AddFontResource         AddFontResourceA
#define CreateFontIndirect      CreateFontIndirectA
#define ExtTextOut              ExtTextOutA
#define GetTextExtentExPoint    GetTextExtentExPointA
#define GetTextMetrics          GetTextMetricsA
#define RemoveFontResource      RemoveFontResourceA
#define GetOutlineTextMetrics   GetOutlineTextMetricsA
#endif //UNICODE
// @CESYSGEN ENDIF


// @CESYSGEN IF GWES_PGDI || GWES_MGDRWTXT
/* DrawText() Format Flags */
#define DT_TOP              0x00000000
#define DT_LEFT             0x00000000
#define DT_CENTER           0x00000001
#define DT_RIGHT            0x00000002
#define DT_VCENTER          0x00000004
#define DT_BOTTOM           0x00000008
#define DT_WORDBREAK        0x00000010
#define DT_SINGLELINE       0x00000020
#define DT_EXPANDTABS       0x00000040
#define DT_TABSTOP          0x00000080
#define DT_NOCLIP           0x00000100
#define DT_EXTERNALLEADING  0x00000200
#define DT_CALCRECT         0x00000400
#define DT_NOPREFIX         0x00000800
#define DT_INTERNAL         0x00001000
#define DT_EDITCONTROL      0x00002000
#define DT_END_ELLIPSIS     0x00008000
#define DT_RTLREADING       0x00020000
#define DT_WORD_ELLIPSIS    0x00040000

WINUSERAPI int WINAPI DrawTextA(HDC,LPCSTR,int,RECT *,UINT);
WINUSERAPI int WINAPI WINAPI DrawTextW(HDC hdc,__in_ecount(cchString) LPCWSTR pszString,int cchString,__in RECT *pRect,UINT uFormats);

#ifdef UNICODE
#define DrawText                DrawTextW
#else
#define DrawText                DrawTextA
#endif
// @CESYSGEN ENDIF


// @CESYSGEN IF GWES_PGDI || GWES_MGTT || GWES_MGRAST2
#define LF_FULLFACESIZE     64
typedef struct tagENUMLOGFONT
{
    LOGFONT   elfLogFont;
    TCHAR     elfFullName[LF_FULLFACESIZE];
    TCHAR     elfStyle[LF_FACESIZE];
} ENUMLOGFONT, FAR* LPENUMLOGFONT;

typedef struct tagENUMLOGFONTEXA
{
    LOGFONT   elfLogFont;
    BYTE      elfFullName[LF_FULLFACESIZE];
    BYTE      elfStyle[LF_FACESIZE];
    BYTE      elfScript[LF_FACESIZE];
} ENUMLOGFONTEXA, FAR* LPENUMLOGFONTEXA;
typedef struct tagENUMLOGFONTEXW
{
    LOGFONT   elfLogFont;
    TCHAR     elfFullName[LF_FULLFACESIZE];
    TCHAR     elfStyle[LF_FACESIZE];
    TCHAR     elfScript[LF_FACESIZE];
} ENUMLOGFONTEXW, FAR* LPENUMLOGFONTEXW;
#ifdef UNICODE
typedef ENUMLOGFONTEXW ENUMLOGFONTEX;
typedef LPENUMLOGFONTEXW LPENUMLOGFONTEX;
#else
typedef ENUMLOGFONTEXA ENUMLOGFONTEX;
typedef LPENUMLOGFONTEXA LPENUMLOGFONTEX;
#endif

typedef int (CALLBACK* FONTENUMPROC)(CONST LOGFONT *, CONST TEXTMETRIC *, DWORD, LPARAM);

WINGDIAPI  int       WINAPI EnumFontFamiliesExA(HDC,LPLOGFONTA,FONTENUMPROC,LPARAM,DWORD);
WINGDIAPI  int       WINAPI EnumFontFamiliesExW(HDC,__in LPLOGFONTW,FONTENUMPROC,LPARAM,DWORD);
WINGDIAPI  int       WINAPI EnumFontFamiliesA(HDC,LPCSTR,FONTENUMPROC,LPARAM);
WINGDIAPI  int       WINAPI EnumFontFamiliesW(HDC,__in_opt LPCWSTR,FONTENUMPROC,LPARAM);
WINGDIAPI  int       WINAPI EnumFontsA(HDC,LPCSTR,FONTENUMPROC,LPARAM);
WINGDIAPI  int       WINAPI EnumFontsW(HDC,__in_opt LPCWSTR,FONTENUMPROC,LPARAM);
WINGDIAPI  int       WINAPI GetTextFaceA( __in HDC hdc, int c, __out_ecount_opt(c) LPSTR lpName);
WINGDIAPI  int       WINAPI GetTextFaceW( __in HDC hdc, int c, __out_ecount_opt(c) LPWSTR lpName);

#ifdef UNICODE
#define EnumFontFamiliesEx      EnumFontFamiliesExW
#define EnumFontFamilies        EnumFontFamiliesW
#define EnumFonts               EnumFontsW
#define GetTextFace             GetTextFaceW
#else
#define EnumFontFamiliesEx      EnumFontFamiliesExA
#define EnumFontFamilies        EnumFontFamiliesA
#define EnumFonts               EnumFontsA
#define GetTextFace             GetTextFaceA
#endif //UNICODE
// @CESYSGEN ENDIF


// @CESYSGEN IF GWES_MGTT
WINGDIAPI  BOOL      WINAPI EnableEUDC(BOOL);
// @CESYSGEN ENDIF


// @CESYSGEN IF GWES_MGTCI
typedef struct tagCHARSETINFO
{
    UINT ciCharset;
    UINT ciACP;
    FONTSIGNATURE fs;
} CHARSETINFO, *PCHARSETINFO, NEAR *NPCHARSETINFO, FAR *LPCHARSETINFO;

#define TCI_SRCCHARSET  1
#define TCI_SRCCODEPAGE 2
#define TCI_SRCFONTSIG  3

WINGDIAPI   BOOL    WINAPI TranslateCharsetInfo(__inout DWORD *, __out LPCHARSETINFO, DWORD dwFlags);
// @CESYSGEN ENDIF


// @CESYSGEN IF GWES_PGDI || GWES_MGDIBSEC
#define DIB_RGB_COLORS      0 /* color table in RGBs */
#define DIB_PAL_COLORS      1 /* color table in palette indices */

typedef struct tagDIBSECTION {
    BITMAP              dsBm;
    BITMAPINFOHEADER    dsBmih;
    DWORD               dsBitfields[3];
    HANDLE              dshSection;
    DWORD               dsOffset;
} DIBSECTION, FAR *LPDIBSECTION, *PDIBSECTION;

typedef struct tagDIBSECTION2 {
    BITMAP              dsBm;
    BITMAPINFOHEADER    dsBmih;
    DWORD               dsBitfields[3];
    HANDLE              dshSection;
    DWORD               dsOffset;
    DWORD               dsAlphaBitfield;
} DIBSECTION2, FAR *LPDIBSECTION2, *PDIBSECTION2;

WINGDIAPI  HBITMAP   WINAPI CreateDIBSection(HDC,CONST BITMAPINFO *,UINT,VOID **,HANDLE,DWORD);
// @CESYSGEN ENDIF


// @CESYSGEN IF GWES_PGDI || GWES_MGDC
WINGDIAPI BOOL WINAPI RestoreDC(HDC,int);
WINGDIAPI int  WINAPI SaveDC(HDC);
// @CESYSGEN ENDIF


// @CESYSGEN IF GWES_MGDC
WINGDIAPI HDC  WINAPI CreateDCA(LPCSTR, LPCSTR , LPCSTR , CONST DEVMODEA *);
WINGDIAPI HDC  WINAPI CreateDCW(__in_opt LPCWSTR, __in LPCWSTR , __in LPCWSTR , __in_opt CONST DEVMODEW *);
WINGDIAPI int  WINAPI ExtEscape(HDC hdc, int nEscape, int cbInput, __in_bcount_opt(cbInput) LPCSTR lpszInData, int cbOutput, __out_bcount_opt(cbOutput) LPSTR lpszOutData);
WINGDIAPI int  WINAPI BitmapEscape(HBITMAP hbmp, int nEscape, int cbInput, __in_bcount_opt(cbInput) LPCSTR lpszInData, int cbOutput, __out_bcount_opt(cbOutput) LPSTR lpszOutData);

#ifdef UNICODE
#define CreateDC  CreateDCW
#else
#define CreateDC  CreateDCA
#endif // !UNICODE
// @CESYSGEN ENDIF


// @CESYSGEN IF GWES_MGPAL
WINGDIAPI HPALETTE WINAPI CreatePalette(__in CONST LOGPALETTE *);
WINGDIAPI UINT     WINAPI GetNearestPaletteIndex(HPALETTE, COLORREF);
WINGDIAPI UINT     WINAPI GetPaletteEntries( __in HPALETTE h, UINT start, UINT count, __out_ecount_opt(count) LPPALETTEENTRY lppe);
WINGDIAPI UINT     WINAPI GetSystemPaletteEntries(__in HDC hdc, UINT iStart, UINT n, __out_ecount_opt(n) LPPALETTEENTRY lppe);
WINGDIAPI UINT     WINAPI RealizePalette(HDC);
WINGDIAPI HPALETTE WINAPI SelectPalette(HDC, HPALETTE, BOOL);
WINGDIAPI UINT     WINAPI SetPaletteEntries(HPALETTE h, UINT start, UINT count, __in_ecount(count) CONST PALETTEENTRY * lppe);
// @CESYSGEN ENDIF


// @CESYSGEN IF GWES_PGDI || GWES_MGPAL
WINGDIAPI COLORREF WINAPI GetNearestColor(HDC, COLORREF);
// @CESYSGEN ENDIF


// @CESYSGEN IF GWES_MGPRINT
/* Spooler Error Codes */
#define SP_ERROR                     (-1)

#ifdef STRICT
typedef BOOL (CALLBACK* ABORTPROC)(HDC, int);
#else
typedef FARPROC ABORTPROC;
#endif

typedef struct _DOCINFOA {
    int     cbSize;
    LPCSTR   lpszDocName;
    LPCSTR   lpszOutput;
    LPCSTR   lpszDatatype;
    DWORD    fwType;
} DOCINFOA, *LPDOCINFOA;

typedef struct _DOCINFOW {
    int     cbSize;
    LPCWSTR  lpszDocName;
    LPCWSTR  lpszOutput;
    LPCWSTR  lpszDatatype;
    DWORD    fwType;
} DOCINFOW, *LPDOCINFOW;

#ifdef UNICODE
typedef DOCINFOW DOCINFO;
typedef LPDOCINFOW LPDOCINFO;
#else
typedef DOCINFOA DOCINFO;
typedef LPDOCINFOA LPDOCINFO;
#endif // UNICODE

WINGDIAPI int WINAPI AbortDoc(HDC);
WINGDIAPI int WINAPI EndDoc(HDC);
WINGDIAPI int WINAPI EndPage(HDC);
WINGDIAPI int WINAPI SetAbortProc(HDC, ABORTPROC);
WINGDIAPI int WINAPI StartDocA(HDC, CONST DOCINFOA *);
WINGDIAPI int WINAPI StartDocW(HDC, __in CONST DOCINFOW *);
WINGDIAPI int WINAPI StartPage(HDC);

#define LAYOUT_LTR                0
#define LAYOUT_RTL                1
WINGDIAPI DWORD WINAPI SetLayout(HDC , DWORD);
WINGDIAPI DWORD WINAPI GetLayout(HDC);
#ifdef UNICODE
#define StartDoc  StartDocW
#else
#define StartDoc  StartDocA
#endif // !UNICODE
// @CESYSGEN ENDIF

#ifdef UNDER_NT
           int   WINAPI MulDiv(int,int,int);
WINGDIAPI int   WINAPI SetMapMode(HDC, int);
WINGDIAPI BOOL  WINAPI SetViewportExtEx( __in HDC hdc, int x, int y, __out_opt LPSIZE lpsz);
WINGDIAPI BOOL  WINAPI SetViewportOrgEx( __in HDC hdc, int x, int y, __out_opt LPPOINT lppt);
WINGDIAPI int   WINAPI GetDIBits(HDC, HBITMAP, UINT, UINT, LPVOID, LPBITMAPINFO, UINT);
WINGDIAPI LONG  WINAPI GetBitmapBits(HBITMAP, LONG, LPVOID);
WINGDIAPI UINT  WINAPI GetDIBColorTable(HDC, UINT, UINT, RGBQUAD *);
WINGDIAPI int   WINAPI StretchDIBits(HDC, int, int, int, int, int, int, int, 
                         int, CONST VOID *, CONST BITMAPINFO *, UINT, DWORD);
WINGDIAPI BOOL  WINAPI SetWindowExtEx( __in HDC hdc, int x, int y, __out_opt LPSIZE lpsz);
WINGDIAPI BOOL  WINAPI SetWindowOrgEx( __in HDC hdc, int x, int y, __out_opt LPPOINT lppt);
WINGDIAPI int   WINAPI SetStretchBltMode(HDC, int);

#define COLORONCOLOR   3
#define MM_ANISOTROPIC 8
#endif // UNDER_NT



typedef USHORT COLOR16;

typedef struct _TRIVERTEX
{
    LONG x;
    LONG y;
    COLOR16 Red;
    COLOR16 Green;
    COLOR16 Blue;
    COLOR16 Alpha;
    
}TRIVERTEX,*PTRIVERTEX, *LPTRIVERTEX;


// @CESYSGEN IF GWES_MGGRADFILL
typedef struct _GRADIENT_TRIANGLE
{
    ULONG Vertex1;
    ULONG Vertex2;
    ULONG Vertex3;
}GRADIENT_TRIANGLE, *PGRADIENT_TRIANGLE, *LPGRADIENT_TRIANGLE;


typedef struct _GRADIENT_RECT
{
    ULONG UpperLeft;
    ULONG LowerRight;
}GRADIENT_RECT, *PGRADIENT_RECT, *LPGRADIENT_RECT;


//
// gradient drawing modes
//

#define GRADIENT_FILL_RECT_H    0x00000000
#define GRADIENT_FILL_RECT_V    0x00000001
#define GRADIENT_FILL_TRIANGLE  0x00000002
#define GRADIENT_FILL_OP_FLAG   0x000000ff

WINGDIAPI    BOOL        WINAPI GradientFill(
                            HDC hdc,
                            __in_ecount(nVertex) PTRIVERTEX pVertex,
                            ULONG nVertex,
                            __in_ecount(nCount) PVOID pMesh,
                            ULONG nCount,
                            ULONG ulMode
                            );

// @CESYSGEN ENDIF 

typedef struct _BLENDFUNCTION
{
    BYTE   BlendOp;
    BYTE   BlendFlags;
    BYTE   SourceConstantAlpha;
    BYTE   AlphaFormat;
}BLENDFUNCTION,*PBLENDFUNCTION;


//
// currentlly defined blend function
//

#define AC_SRC_OVER                 0x00

//
// alpha format flags
//

#define AC_SRC_ALPHA                0x01      // premultiplied alpha
#define AC_SRC_ALPHA_NONPREMULT     0x02      // non-premultiplied alpha

// @CESYSGEN IF GWES_MGALPHABLEND

WINGDIAPI    BOOL    WINAPI AlphaBlend(HDC,int,int,int,int,HDC,int,int,int,int,BLENDFUNCTION);

// @CESYSGEN ENDIF

typedef struct tagLOCALESIGNATURE
{
    DWORD lsUsb[4];
    DWORD lsCsbDefault[2];
    DWORD lsCsbSupported[2];
} LOCALESIGNATURE, *PLOCALESIGNATURE,FAR *LPLOCALESIGNATURE;

#ifdef __cplusplus
}
#endif


#ifdef WINCEOEM
#include <pwingdi.h>    // internal defines 
#endif


#endif /* _WINGDI_H_ */
