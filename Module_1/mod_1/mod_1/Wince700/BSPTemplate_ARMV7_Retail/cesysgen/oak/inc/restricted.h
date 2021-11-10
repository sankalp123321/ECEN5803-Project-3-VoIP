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

#ifdef __cplusplus
extern "C" {
#endif

BOOL SHIsRestrictedProcess(LPCTSTR pszApp);
BOOL SHIsFileOperationRestricted(LPCTSTR pszFrom, LPCTSTR pszTo);
BOOL SHIsFileOperationRestrictedEx(LPCTSTR pszFrom, LPCTSTR pszTo, BOOL fCheckMetabase);
BOOL PathIsRestricted(LPCTSTR pszFile);
BOOL PathIsRestrictedEx(LPCTSTR pszFile, BOOL fCheckMetabase);

#ifdef __cplusplus
}
#endif

