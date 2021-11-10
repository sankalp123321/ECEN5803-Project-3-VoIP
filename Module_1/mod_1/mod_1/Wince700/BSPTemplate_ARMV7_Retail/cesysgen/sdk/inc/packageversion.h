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


// version information for a System File
typedef struct _PackageVersion
{
    WORD wMajor;
    WORD wMinor;
    WORD wQFELevel;
    WORD wBuildNumber;
} PackageVersion;

extern "C" 
{
/// <summary>
/// GetPackageVersionOfFile
/// </summary>
/// <param name="szFileName">name of the file to get the version of.</param>
/// <param name="psfv">pointer to a VersionInfo struct that will receive the version information</param>
/// <returns>
/// S_OK means that the file was found in ROM.  S_FALSE means that the file was not found.  
/// E_INVALIDARG is returned if either the parameters are NULL
/// E_FAIL is return in all other failures.
/// </returns>
/// <remarks>
/// </remarks>
HRESULT GetPackageVersionOfFile(__in LPCTSTR szFileName, __out PackageVersion* psfv);

}
