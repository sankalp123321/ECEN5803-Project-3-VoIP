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
/*==========================================================================;
 *
 *  File:       dvp.h
 *  Content:    DirectDraw VideoPort include file
 *
 ***************************************************************************/

#pragma once

#include <windows.h>
#include <ddraw.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 * GUIDS used by DirectDrawVideoPort objects
 */


DEFINE_GUID(IID_IDirectDrawVideoPort,   0xB36D93E0,0x2B43,0x11CF,0xA2,0xDE,0x00,0xAA,0x00,0xB9,0x33,0x56);

DEFINE_GUID(DDVPTYPE_E_HREFH_VREFH,     0x54F39980,0xDA60,0x11CF,0x9B,0x06,0x00,0xA0,0xC9,0x03,0xA3,0xB8);
DEFINE_GUID(DDVPTYPE_E_HREFH_VREFL,     0x92783220,0xDA60,0x11CF,0x9B,0x06,0x00,0xA0,0xC9,0x03,0xA3,0xB8);
DEFINE_GUID(DDVPTYPE_E_HREFL_VREFH,     0xA07A02E0,0xDA60,0x11CF,0x9B,0x06,0x00,0xA0,0xC9,0x03,0xA3,0xB8);
DEFINE_GUID(DDVPTYPE_E_HREFL_VREFL,     0xE09C77E0,0xDA60,0x11CF,0x9B,0x06,0x00,0xA0,0xC9,0x03,0xA3,0xB8);
DEFINE_GUID(DDVPTYPE_CCIR656,           0xFCA326A0,0xDA60,0x11CF,0x9B,0x06,0x00,0xA0,0xC9,0x03,0xA3,0xB8);
DEFINE_GUID(DDVPTYPE_BROOKTREE,         0x1352A560,0xDA61,0x11CF,0x9B,0x06,0x00,0xA0,0xC9,0x03,0xA3,0xB8);
DEFINE_GUID(DDVPTYPE_PHILIPS,           0x332CF160,0xDA61,0x11CF,0x9B,0x06,0x00,0xA0,0xC9,0x03,0xA3,0xB8);

/*
 * Forward interface declerations
 */

struct IDDVideoPortContainer;
struct IDirectDrawVideoPort;

typedef struct IDDVideoPortContainer    *LPDDVIDEOPORTCONTAINER;
typedef struct IDirectDrawVideoPort     *LPDIRECTDRAWVIDEOPORT;

/*
 * DirectDraw Structures
 */

/*
 * DDVIDEOPORTCONNECT
 */

typedef struct _DDVIDEOPORTCONNECT
{
    DWORD dwSize;           // size of the DDVIDEOPORTCONNECT structure
    DWORD dwPortWidth;      // Width of the video port
    GUID  guidTypeID;       // Description of video port connection
    DWORD dwFlags;          // Connection flags

} DDVIDEOPORTCONNECT, * LPDDVIDEOPORTCONNECT;

/*
 * DVIDEOPORTCONNECT dwFlags values.
 */

#define DDVPCONNECT_DOUBLECLOCK         0x00000001
#define DDVPCONNECT_VACT                0x00000002
#define DDVPCONNECT_INVERTPOLARITY      0x00000004
#define DDVPCONNECT_DISCARDSVREFDATA    0x00000008
#define DDVPCONNECT_HALFLINE            0x00000010
#define DDVPCONNECT_INTERLACED          0x00000020
#define DDVPCONNECT_SHAREEVEN           0x00000040
#define DDVPCONNECT_SHAREODD            0x00000080

#define DDVPCONNECT_VALID               (DDVPCONNECT_DOUBLECLOCK      | \
                                         DDVPCONNECT_VACT             | \
                                         DDVPCONNECT_INVERTPOLARITY   | \
                                         DDVPCONNECT_DISCARDSVREFDATA | \
                                         DDVPCONNECT_HALFLINE         | \
                                         DDVPCONNECT_INTERLACED       | \
                                         DDVPCONNECT_SHAREEVEN        | \
                                         DDVPCONNECT_SHAREODD)

/*
 * DDVIDEOPORTCAPS
 */

typedef struct _DDVIDEOPORTCAPS
{
    DWORD dwSize;                           // size of the DDVIDEOPORTCAPS structure
    DWORD dwFlags;                          // indicates which fields contain data
    DWORD dwMaxWidth;                       // max width of the video port field
    DWORD dwMaxVBIWidth;                    // max width of the VBI data
    DWORD dwMaxHeight;                      // max height of the video port field
    DWORD dwVideoPortID;                    // Video port ID (0 - (dwMaxVideoPorts -1))
    DWORD dwCaps;                           // Video port capabilities
    DWORD dwFX;                             // More video port capabilities
    DWORD dwNumAutoFlipSurfaces;            // Max number of autoflippable surfaces allowed
    DWORD dwAlignVideoPortBoundary;         // Byte restriction of placement within the surface
    DWORD dwAlignVideoPortPrescaleWidth;    // Byte restriction of width after prescaling
    DWORD dwAlignVideoPortCropBoundary;     // Byte restriction of left cropping
    DWORD dwAlignVideoPortCropWidth;        // Byte restriction of cropping width
    DWORD dwPreshrinkXStep;                 // Width can be shrunk in steps of 1/x
    DWORD dwPreshrinkYStep;                 // Height can be shrunk in steps of 1/x
    DWORD dwNumVBIAutoFlipSurfaces;         // Max number of VBI autoflippable surfaces allowed
    DWORD dwNumPreferredAutoflip;           // Optimal number of autoflippable surfaces for hardware
    WORD  wNumFilterTapsX;                  // Number of taps the prescaler uses in the X direction (0 - no prescale, 1 - replication, etc.)
    WORD  wNumFilterTapsY;                  // Number of taps the prescaler uses in the Y direction (0 - no prescale, 1 - replication, etc.)

} DDVIDEOPORTCAPS, * LPDDVIDEOPORTCAPS;

/*
 * DDVIDEOPORTCAPS dwFlags values.
 */

#define DDVPD_WIDTH             0x00000001
#define DDVPD_HEIGHT            0x00000002
#define DDVPD_ID                0x00000004
#define DDVPD_CAPS              0x00000008
#define DDVPD_FX                0x00000010
#define DDVPD_AUTOFLIP          0x00000020
#define DDVPD_ALIGN             0x00000040
#define DDVPD_PREFERREDAUTOFLIP 0x00000080
#define DDVPD_FILTERQUALITY     0x00000100

#define DDVPD_VALID             (DDVPD_WIDTH             | \
                                 DDVPD_HEIGHT            | \
                                 DDVPD_ID                | \
                                 DDVPD_CAPS              | \
                                 DDVPD_FX                | \
                                 DDVPD_AUTOFLIP          | \
                                 DDVPD_ALIGN             | \
                                 DDVPD_PREFERREDAUTOFLIP | \
                                 DDVPD_FILTERQUALITY)

/*
 * DDVIDEOPORTCAPS dwCaps values.
 */

#define DDVPCAPS_AUTOFLIP               0x00000001
#define DDVPCAPS_INTERLACED             0x00000002
#define DDVPCAPS_NONINTERLACED          0x00000004
#define DDVPCAPS_READBACKFIELD          0x00000008
#define DDVPCAPS_READBACKLINE           0x00000010
#define DDVPCAPS_SHAREABLE              0x00000020
#define DDVPCAPS_SKIPEVENFIELDS         0x00000040
#define DDVPCAPS_SKIPODDFIELDS          0x00000080
#define DDVPCAPS_SYNCMASTER             0x00000100
#define DDVPCAPS_VBISURFACE             0x00000200
#define DDVPCAPS_COLORCONTROL           0x00000400
#define DDVPCAPS_OVERSAMPLEDVBI         0x00000800
#define DDVPCAPS_SYSTEMMEMORY           0x00001000
#define DDVPCAPS_VBIANDVIDEOINDEPENDENT 0x00002000
#define DDVPCAPS_HARDWAREDEINTERLACE    0x00004000

#define DDVPCAPS_VALID          (DDVPCAPS_AUTOFLIP               |\
                                 DDVPCAPS_INTERLACED             |\
                                 DDVPCAPS_NONINTERLACED          |\
                                 DDVPCAPS_READBACKFIELD          |\
                                 DDVPCAPS_READBACKLINE           |\
                                 DDVPCAPS_SHAREABLE              |\
                                 DDVPCAPS_SKIPEVENFIELDS         |\
                                 DDVPCAPS_SKIPODDFIELDS          |\
                                 DDVPCAPS_SYNCMASTER             |\
                                 DDVPCAPS_VBISURFACE             |\
                                 DDVPCAPS_COLORCONTROL           |\
                                 DDVPCAPS_OVERSAMPLEDVBI         |\
                                 DDVPCAPS_SYSTEMMEMORY           |\
                                 DDVPCAPS_VBIANDVIDEOINDEPENDENT |\
                                 DDVPCAPS_HARDWAREDEINTERLACE)

/*
 * DDVIDEOPORTCAPS dwFX values.
 */

#define DDVPFX_CROPTOPDATA      0x00000001
#define DDVPFX_CROPX            0x00000002
#define DDVPFX_CROPY            0x00000004
#define DDVPFX_INTERLEAVE       0x00000008
#define DDVPFX_MIRRORLEFTRIGHT  0x00000010
#define DDVPFX_MIRRORUPDOWN     0x00000020
#define DDVPFX_PRESHRINKX       0x00000040
#define DDVPFX_PRESHRINKY       0x00000080
#define DDVPFX_PRESHRINKXB      0x00000100
#define DDVPFX_PRESHRINKYB      0x00000200
#define DDVPFX_PRESHRINKXS      0x00000400
#define DDVPFX_PRESHRINKYS      0x00000800
#define DDVPFX_PRESTRETCHX      0x00001000
#define DDVPFX_PRESTRETCHY      0x00002000
#define DDVPFX_PRESTRETCHXN     0x00004000
#define DDVPFX_PRESTRETCHYN     0x00008000
#define DDVPFX_VBICONVERT       0x00010000
#define DDVPFX_VBINOSCALE       0x00020000
#define DDVPFX_IGNOREVBIXCROP   0x00040000
#define DDVPFX_VBINOINTERLEAVE  0x00080000

#define DDVPFX_VALID            (DDVPFX_CROPTOPDATA     |\
                                 DDVPFX_CROPX           |\
                                 DDVPFX_CROPY           |\
                                 DDVPFX_INTERLEAVE      |\
                                 DDVPFX_MIRRORLEFTRIGHT |\
                                 DDVPFX_MIRRORUPDOWN    |\
                                 DDVPFX_PRESHRINKX      |\
                                 DDVPFX_PRESHRINKY      |\
                                 DDVPFX_PRESHRINKXB     |\
                                 DDVPFX_PRESHRINKYB     |\
                                 DDVPFX_PRESHRINKXS     |\
                                 DDVPFX_PRESHRINKYS     |\
                                 DDVPFX_PRESTRETCHX     |\
                                 DDVPFX_PRESTRETCHY     |\
                                 DDVPFX_PRESTRETCHXN    |\
                                 DDVPFX_PRESTRETCHYN    |\
                                 DDVPFX_VBICONVERT      |\
                                 DDVPFX_VBINOSCALE      |\
                                 DDVPFX_IGNOREVBIXCROP  |\
                                 DDVPFX_VBINOINTERLEAVE)

/*
 * DDVIDEOPORTDESC
 */

typedef struct _DDVIDEOPORTDESC
{
    DWORD              dwSize;                   // size of the DDVIDEOPORTDESC structure
    DWORD              dwFieldWidth;             // width of the video port field
    DWORD              dwVBIWidth;               // width of the VBI data
    DWORD              dwFieldHeight;            // height of the video port field
    DWORD              dwMicrosecondsPerField;   // Microseconds per video field
    DWORD              dwMaxPixelsPerSecond;     // Maximum pixel rate per second
    DWORD              dwVideoPortID;            // Video port ID (0 - (dwMaxVideoPorts -1))
    DDVIDEOPORTCONNECT VideoPortType;            // Description of video port connection

} DDVIDEOPORTDESC, * LPDDVIDEOPORTDESC;

/*
 * DDVIDEOPORTINFO
 */

typedef struct _DDVIDEOPORTINFO
{
    DWORD           dwSize;                 // Size of the structure
    DWORD           dwOriginX;              // Placement of the video data within the surface.
    DWORD           dwOriginY;              // Placement of the video data within the surface.
    DWORD           dwVPFlags;              // Video port options
    RECT            rCrop;                  // Cropping rectangle (optional).
    DWORD           dwPrescaleWidth;        // Determines pre-scaling/zooming in the X direction (optional).
    DWORD           dwPrescaleHeight;       // Determines pre-scaling/zooming in the Y direction (optional).
    LPDDPIXELFORMAT lpddpfInputFormat;      // Video format written to the video port
    LPDDPIXELFORMAT lpddpfVBIInputFormat;   // Input format of the VBI data
    LPDDPIXELFORMAT lpddpfVBIOutputFormat;  // Output format of the data
    DWORD           dwVBIHeight;            // Specifies the number of lines of data within the vertical blanking interval.

} DDVIDEOPORTINFO, * LPDDVIDEOPORTINFO;

/*
 * DDVIDEOPORTINFO dwVPFlags values.
 */

#define DDVP_AUTOFLIP               0x00000001
#define DDVP_CONVERT                0x00000002
#define DDVP_CROP                   0x00000004
#define DDVP_INTERLEAVE             0x00000008
#define DDVP_MIRRORLEFTRIGHT        0x00000010
#define DDVP_MIRRORUPDOWN           0x00000020
#define DDVP_PRESCALE               0x00000040
#define DDVP_SKIPEVENFIELDS         0x00000080
#define DDVP_SKIPODDFIELDS          0x00000100
#define DDVP_SYNCMASTER             0x00000200
#define DDVP_VBICONVERT             0x00000400
#define DDVP_VBINOSCALE             0x00000800
#define DDVP_OVERRIDEBOBWEAVE       0x00001000
#define DDVP_IGNOREVBIXCROP         0x00002000
#define DDVP_VBINOINTERLEAVE        0x00004000
#define DDVP_HARDWAREDEINTERLACE    0x00008000
#define DDVP_COLORCONTROL           0x00010000
#define DDVP_READBACKFIELD          0x00020000
#define DDVP_READBACKLINE           0x00040000

#define DDVP_VALID                  (DDVP_AUTOFLIP            | \
                                     DDVP_CONVERT             | \
                                     DDVP_CROP                | \
                                     DDVP_INTERLEAVE          | \
                                     DDVP_MIRRORLEFTRIGHT     | \
                                     DDVP_MIRRORUPDOWN        | \
                                     DDVP_PRESCALE            | \
                                     DDVP_SKIPEVENFIELDS      | \
                                     DDVP_SKIPODDFIELDS       | \
                                     DDVP_SYNCMASTER          | \
                                     DDVP_VBICONVERT          | \
                                     DDVP_VBINOSCALE          | \
                                     DDVP_OVERRIDEBOBWEAVE    | \
                                     DDVP_IGNOREVBIXCROP      | \
                                     DDVP_VBINOINTERLEAVE     | \
                                     DDVP_HARDWAREDEINTERLACE | \
                                     DDVP_COLORCONTROL        | \
                                     DDVP_READBACKFIELD       | \
                                     DDVP_READBACKLINE)

/*
 * DDVIDEOPORTBANDWIDTH
 */

typedef struct _DDVIDEOPORTBANDWIDTH
{
    DWORD dwSize;               // Size of the structure
    DWORD dwCaps;               // Caps bits.
    DWORD dwOverlay;            // Zoom factor at which overlay is supported
    DWORD dwColorkey;           // Zoom factor at which overlay w/ colorkey is supported
    DWORD dwYInterpolate;       // Zoom factor at which overlay w/ Y interpolation is supported
    DWORD dwYInterpAndColorkey; // Zoom factor at which ovelray w/ Y interpolation and colorkeying is supported

} DDVIDEOPORTBANDWIDTH, * LPDDVIDEOPORTBANDWIDTH;

/*
 * DDVIDEOPORTBANDWIDTH dwFlags values.
 */

#define DDVPB_VIDEOPORT         0x00000001
#define DDVPB_OVERLAY           0x00000002
#define DDVPB_TYPE              0x00000004

#define DDVPB_VALID             (DDVPB_VIDEOPORT | \
                                 DDVPB_OVERLAY   | \
                                 DDVPB_TYPE)

/*
 * DDVIDEOPORTBANDWIDTH dwCaps values.
 */

#define DDVPBCAPS_SOURCE        0x00000001
#define DDVPBCAPS_DESTINATION   0x00000002

#define DDVPBCAPS_VALID         (DDVPBCAPS_SOURCE      | \
                                 DDVPBCAPS_DESTINATION)

/*
 * DDVIDEOPORTSTATUS
 */

typedef struct _DDVIDEOPORTSTATUS
{
    DWORD              dwSize;          // Size of the structure
    BOOL               bInUse;          // TRUE if video port is currently being used
    DWORD              dwFlags;         // Currently not used
    DDVIDEOPORTCONNECT VideoPortType;   // Information about the connection

} DDVIDEOPORTSTATUS, * LPDDVIDEOPORTSTATUS;

/*
 * DDVIDEOPORTSTATUS dwFlags values.
 */

#define DDVPSTATUS_VBIONLY      0x00000001
#define DDVPSTATUS_VIDEOONLY    0x00000002

#define DDVPSTATUS_VALID        (DDVPSTATUS_VBIONLY | \
                                 DDVPSTATUS_VIDEOONLY)

/*
 * API's
 */

typedef HRESULT (FAR PASCAL * LPDDENUMVIDEOCALLBACK)(LPDDVIDEOPORTCAPS, LPVOID);

/*
 * IDirectDrawVideoPortContainer
 */

#undef INTERFACE
#define INTERFACE IDDVideoPortContainer
DECLARE_INTERFACE_( IDDVideoPortContainer, IUnknown )
{
    /*** IUnknown methods ***/
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID * ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS)  PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;

    /*** IDirectDrawVideoPort methods ***/
    STDMETHOD(CreateVideoPort)(THIS_ DWORD, LPDDVIDEOPORTDESC, LPDIRECTDRAWVIDEOPORT *, IUnknown *) PURE;
    STDMETHOD(EnumVideoPorts)(THIS_ DWORD, LPDDVIDEOPORTCAPS, LPVOID, LPDDENUMVIDEOCALLBACK) PURE;
    STDMETHOD(GetVideoPortConnectInfo)(THIS_ DWORD, LPDWORD, LPDDVIDEOPORTCONNECT) PURE;
    STDMETHOD(QueryVideoPortStatus)(THIS_ DWORD, LPDDVIDEOPORTSTATUS) PURE;
};

/*
 * IDirectDrawVideoPort
 */

#undef INTERFACE
#define INTERFACE IDirectDrawVideoPort
DECLARE_INTERFACE_( IDirectDrawVideoPort, IUnknown )
{
    /*** IUnknown methods ***/
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID * ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS)  PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;

    /*** IVideoPort methods ***/
    STDMETHOD(Flip)(THIS_ LPDIRECTDRAWSURFACE, DWORD) PURE;
    STDMETHOD(GetBandwidthInfo)(THIS_ LPDDPIXELFORMAT, DWORD, DWORD, DWORD, LPDDVIDEOPORTBANDWIDTH) PURE;
    STDMETHOD(GetColorControls)(THIS_ LPDDCOLORCONTROL) PURE;
    STDMETHOD(GetInputFormats)(THIS_ LPDWORD, LPDDPIXELFORMAT, DWORD) PURE;
    STDMETHOD(GetOutputFormats)(THIS_ LPDDPIXELFORMAT, LPDWORD, LPDDPIXELFORMAT, DWORD) PURE;
    STDMETHOD(GetFieldPolarity)(THIS_ LPBOOL) PURE;
    STDMETHOD(GetVideoLine)(THIS_ LPDWORD) PURE;
    STDMETHOD(GetVideoSignalStatus)(THIS_ LPDWORD) PURE;
    STDMETHOD(SetColorControls)(THIS_ LPDDCOLORCONTROL) PURE;
    STDMETHOD(SetTargetSurface)(THIS_ LPDIRECTDRAWSURFACE, DWORD) PURE;
    STDMETHOD(StartVideo)(THIS_ LPDDVIDEOPORTINFO) PURE;
    STDMETHOD(StopVideo)(THIS) PURE;
    STDMETHOD(UpdateVideo)(THIS_ LPDDVIDEOPORTINFO) PURE;
    STDMETHOD(WaitForSync)(THIS_ DWORD, DWORD, DWORD) PURE;
};

/*
 * DirectDraw Video Port method flags
 */

/*
 * Flags for IDirectDrawVideoPort::GetInputFormats and
 * IDirectDrawVideoPort::GetOutputFormats
 */

#define DDVPFORMAT_VIDEO    0x00000001
#define DDVPFORMAT_VBI      0x00000002

#define DDVPFORMAT_VALID    (DDVPFORMAT_VIDEO | \
                             DDVPFORMAT_VBI)

/*
 * Flags for IDirectDrawVideoPort::SetTargetSurface
 */

#define DDVPTARGET_VIDEO    0x00000001
#define DDVPTARGET_VBI      0x00000002

#define DDVPTARGET_VALID    (DDVPTARGET_VIDEO | \
                             DDVPTARGET_VBI)

/*
 * Flags for IDirectDrawVideoPort::WaitForSync
 */

#define DDVPWAIT_BEGIN      0x00000001
#define DDVPWAIT_END        0x00000002
#define DDVPWAIT_LINE       0x00000003

#define DDVPWAIT_VALID      (DDVPWAIT_BEGIN | \
                             DDVPWAIT_END   | \
                             DDVPWAIT_LINE)

/*
 * Flags for IDirectDrawVideoPort::Flip
 */

#define DDVPFLIP_VIDEO      0x00000001
#define DDVPFLIP_VBI        0x00000002

#define DDVPFLIP_VALID      (DDVPFLIP_VIDEO | \
                             DDVPFLIP_VBI)

/*
 * Flags for IDirectDrawVideoPort::GetVideoSignalStatus
 */

#define DDVPSQ_NOSIGNAL     0x00000001
#define DDVPSQ_SIGNALOK     0x00000002

/*
 * Flags for IDDVideoPortContainer::CreateVideoPort
 */

#define DDVPCREATE_VBIONLY      0x00000001
#define DDVPCREATE_VIDEOONLY    0x00000002

#define DDVPCREATE_VALID        (DDVPCREATE_VIDEOONLY | \
                                 DDVPCREATE_VBIONLY)

#ifdef __cplusplus
};
#endif

