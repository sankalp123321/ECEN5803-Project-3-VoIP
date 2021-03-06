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
//-----------------------------------------------------------------------------------
// Microsoft OLE DB Provider For Oracle 
// (C) Copyright 1998 By Microsoft Corporation.
//
// @doc
//
// @module GUIDS.H | Internal GUIDS
//
// $Header: /Canoe/source/guids.h 6     6/23/98 2:47p Stevesta $
//

#ifndef __MSDAORAGUIDS_DEFINED__
#define __MSDAORAGUIDS_DEFINED__

#ifdef DBINITCONSTANTS

EXTERN_C const CLSID CLSID_MSDAORA			= {0xE8CC4CBE,0xFDFF,0x11D0,{0xB8,0x65,0x00,0xA0,0xC9,0x08,0x1C,0x1D}};
EXTERN_C const CLSID CLSID_MSDAORA_ERROR	= {0xE8CC4CBF,0xFDFF,0x11D0,{0xB8,0x65,0x00,0xA0,0xC9,0x08,0x1C,0x1D}};

#else //DBINITCONSTANTS

EXTERN_C const CLSID CLSID_MSDAORA;
EXTERN_C const CLSID CLSID_MSDAORA_ERROR;

#endif //DBINITCONSTANTS

class DECLSPEC_UUID("E8CC4CBE-FDFF-11D0-B865-00A0C9081C1D")
MSDAORA;

class DECLSPEC_UUID("E8CC4CBF-FDFF-11D0-B865-00A0C9081C1D")
MSDAORA_ERROR;



//----------------------------------------------------------------------------
// MSDAORA specific properties
//
#ifdef DBINITCONSTANTS

extern const GUID OLEDBDECLSPEC DBPROPSET_MSDAORA_ROWSET	= {0xE8CC4CBD,0xFDFF,0x11D0,{0xB8,0x65,0x00,0xA0,0xC9,0x08,0x1C,0x1D}};

#else // !DBINITCONSTANTS

extern const GUID DBPROPSET_MSDAORA_ROWSET;

#endif // DBINITCONSTANTS

// PropIds under DBPROPSET_MSDAORA_ROWSET 
#define DBPROP_MSDAORA_DETERMINEKEYCOLUMNS	1


#endif // __MSDAORAGUIDS_DEFINED__
