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
/***
* Purpose:
*       This include file contains a list of banned API which should not be used in new code and 
*       removed from legacy code over time
*
***/

#ifndef _INC_BANNED
#	define _INC_BANNED

#ifdef _MSC_VER
// Some of these functions are Windows specific
#	pragma once
#	pragma deprecated (strcpyA, strcpyW, _mbscpy, StrCpy, StrCpyA, StrCpyW, lstrcpy, lstrcpyA, lstrcpyW, _tccpy, _mbccpy)
#	pragma deprecated (strcatA, strcatW, _mbscat, StrCat, StrCatA, StrCatW, lstrcat, lstrcatA, lstrcatW, StrCatBuff, StrCatBuffA, StrCatBuffW, StrCatChainW, _tccat, _mbccat)
#	pragma deprecated (wnsprintf, wnsprintfA, wnsprintfW, sprintfW, sprintfA, wsprintf, wsprintfW, wsprintfA)
#	pragma deprecated (wvsprintf, wvsprintfA, wvsprintfW)
#	pragma deprecated (wvnsprintf, wvnsprintfA, wvnsprintfW)
#	pragma deprecated (_mbsncpy, _mbsnbcpy, StrCpyN, StrCpyNA, StrCpyNW, StrNCpy, strcpynA, StrNCpyA, StrNCpyW, lstrcpyn, lstrcpynA, lstrcpynW)
#	pragma deprecated (_mbsncat, _mbsnbcat, StrCatN, StrCatNA, StrCatNW, StrNCat, StrNCatA, StrNCatW, lstrncat, lstrcatnA, lstrcatnW, lstrcatn)
#	pragma deprecated (_mbstok)
#	pragma deprecated (makepath, _tmakepath,  _makepath, _wmakepath)
#	pragma deprecated (_splitpath, _tsplitpath, _wsplitpath)
#	pragma deprecated (snscanf, snwscanf)
#	pragma deprecated (_i64toa, _i64tow, _ui64toa, _ui64tot, _ui64tow, _ultot)
#	pragma deprecated (_gettws)
#	pragma deprecated (IsBadWritePtr, IsBadHugeWritePtr, IsBadReadPtr, IsBadHugeReadPtr, IsBadCodePtr, IsBadStringPtr)
#	pragma deprecated (CharToOem, CharToOemA, CharToOemW, OemToChar, OemToCharA, OemToCharW, CharToOemBuffA, CharToOemBuffW)
#endif /* _MSC_VER */

#endif  /* _INC_BANNED */
