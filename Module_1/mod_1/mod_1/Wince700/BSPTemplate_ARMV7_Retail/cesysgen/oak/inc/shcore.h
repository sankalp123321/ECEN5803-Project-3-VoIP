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

#pragma once

#include <windows.h>
#include <shtypes.h>

#define FindFirstStorageCard FindFirstStorageCardPriv
#define FindNextStorageCard  FindNextStorageCardPriv

#ifdef __cplusplus
extern "C" 
{
#endif

// These definitions should match the ones in storagecard.h
HANDLE FindFirstStorageCardPriv(LPWIN32_FIND_DATA lpFindData);
BOOL FindNextStorageCardPriv(HANDLE hFind, LPWIN32_FIND_DATA lpFindData);

#ifdef __cplusplus
}
#endif




////////////////////////////////////////////////////////////////////////////////
// IDLIST Functions

#define IL_ALL                         ((UINT)-1)

LPITEMIDLIST ILConcatenate(LPCITEMIDLIST pidl1, LPCITEMIDLIST pidl2);
LPITEMIDLIST ILCopy(LPCITEMIDLIST pidl, UINT cbItems);
DWORD ILCount(LPCITEMIDLIST pidl);
LPITEMIDLIST ILFindLast(LPCITEMIDLIST pidl);


BOOL ILRemoveLast(LPITEMIDLIST pidl);
size_t ILSize(LPCITEMIDLIST pidl, UINT cbItems);


////////////////////////////////////////////////////////////////////////////////
// Path Functions

#define GCT_INVALID             0x0000
#define GCT_LFNCHAR             0x0001
#define GCT_SHORTCHAR           0x0002
#define GCT_WILD                0x0004
#define GCT_SEPERATOR           0x0008

STDAPI_(void) PathCompactSlashes(__inout LPTSTR lpszPath);
STDAPI_(LPCTSTR) PathFindRootDevice(__inout LPTSTR szPath);
STDAPI_(BOOL) PathGetAssociation(__in LPCTSTR pszPath, __out_ecount(MAX_PATH) LPTSTR pszAssoc);
STDAPI_(BOOL) PathIsDatabase(__in LPCTSTR pszPath);
STDAPI_(BOOL) PathIsExe(__in LPCTSTR szFile);
STDAPI_(BOOL) PathIsExtension(__in LPCTSTR szFile, __in LPCTSTR szExt);
STDAPI PathIsGUID(__in LPCTSTR pszPath);
STDAPI_(BOOL) PathIsLink(__in LPCTSTR szFile);
STDAPI_(BOOL) PathIsImage(__in LPCTSTR szFile);
STDAPI_(BOOL) PathIsRemovableDevice(__in LPCTSTR lpszPath);
STDAPI_(BOOL) PathIsSameDevice(__in LPCTSTR sz1, __in LPCTSTR sz2);
STDAPI_(BOOL) PathIsValidFileName(__in LPCTSTR pPath);
STDAPI_(BOOL) PathIsValidPath(__in LPCTSTR pPath);
STDAPI_(BOOL) PathMakeUniqueName(__in LPCTSTR lpszPath, __in_opt LPCTSTR lpszT1, __in_opt LPCTSTR lpszT2, 
                                 BOOL bLink, __out_ecount(cchUniqueName) LPTSTR  lpszUniqueName, UINT cchUniqueName);
STDAPI_(BOOL) PathMakeUniqueNameEx(__in LPCTSTR lpszPath, __in_opt LPCTSTR lpszT1, __in_opt LPCTSTR lpszT2, 
                                 BOOL bLink, BOOL bSourceIsDirectory, __out_ecount(cchUniqueName) LPTSTR lpszUniqueName, UINT cchUniqueName);
STDAPI_(BOOL) PathOnExtList(__in LPCTSTR pszExtList, __in LPCTSTR pszExt);
STDAPI_(void) PathRemoveQuotesAndArgs(__inout LPTSTR pszPath);
STDAPI_(void) PathRemoveQuotes(__inout LPTSTR pszPath);
STDAPI_(void) PathRemoveTrailingSlashes(__inout LPTSTR lpszString);
STDAPI_(BOOL) PathIsLocal(LPCTSTR pszPath);

STDAPI_(HRESULT) FixupPath(__in const TCHAR* pszPath, __out_ecount(cchOut) TCHAR* pszPathOut, int cchOut);
STDAPI_(HRESULT) CreateDirectoryPath(LPCWSTR _pszPath);
STDAPI_(BOOL) PathIsNandFlash(__in LPCTSTR lpszPath);

//  *************************************************************************
//@func BOOL | IsCompactFlashPath | Helper function to determine if the specified directory is a  
//                                  removable storage card.
//
//@parm LPCTSTR | lpszFileName     | IN - a directory file name
//@parm DWORD   | dwFileAttributes | IN - the directory's file attributes
//
//@rdesc Returns TRUE iff the directory is a removable storage card
//
//@comm This helper function is created to abstract the details for what
//      determines that a directory is in fact removable storage. Prior
//      implementations depended on the file attributes to distinguish
//      removable storage, but this is not sufficient since the mount
//      directory for persistent storage has the same file attributes yet
//      it is not removable.
//      
//  *************************************************************************
STDAPI_(BOOL) IsCompactFlashPath(LPCTSTR lpszFileName, DWORD dwFileAttributes);

//  *************************************************************************
//@func BOOL | IsCompactFlashPath | Helper function to determine if the specified directory is a  
//                                  removable storage card.
//
//@parm LPWIN32_FIND_DATA | lpfdCF | IN - a pointer to a WIN32_FIND_DATA structure
//
//@rdesc Returns TRUE iff the directory is a removable storage card
//
//@comm This helper function exists to reduce code churn in existing code
//      that used to call its own version of IsCompactFlash.
//      
//  *************************************************************************
#pragma warning(disable : 4211)     // 4211 = redefined extern to static
static __inline BOOL IsCompactFlash(WIN32_FIND_DATA *lpfdCF)
{
    return IsCompactFlashPath(lpfdCF->cFileName, lpfdCF->dwFileAttributes);
}
#pragma warning(default : 4211)     // 4211 = redefined extern to static



