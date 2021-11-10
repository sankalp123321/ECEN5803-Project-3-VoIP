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
#ifndef _INPUTSCOPES_H_
#define _INPUTSCOPES_H_

#if (_MSC_VER >= 1000)
#pragma once
#endif

#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif

enum InputScope
{
    // Extended InputScope values
    IS_PHRASELIST           = -1,
    IS_REGULAREXPRESSION    = -2,   // Reserved.  Not currently supported.
    IS_SRGS                 = -3,
    IS_XML                  = -4,   // Reserved.  Not currently supported.
    IS_ENUMSTRING           = -5,   // Reserved.  Not currently supported.

    // Standard InputScope values
    IS_DEFAULT                          = 0x0000,
    IS_URL                              = 0x0001,
    IS_FILE_FULLFILEPATH                = 0x0002,
    IS_FILE_FILENAME                    = 0x0003,
    IS_EMAIL_USERNAME                   = 0x0004,
    IS_EMAIL_SMTPEMAILADDRESS           = 0x0005,
    IS_LOGINNAME                        = 0x0006,
    IS_PERSONALNAME_FULLNAME            = 0x0007,
    IS_PERSONALNAME_PREFIX              = 0x0008,
    IS_PERSONALNAME_GIVENNAME           = 0x0009,
    IS_PERSONALNAME_MIDDLENAME          = 0x000A,
    IS_PERSONALNAME_SURNAME             = 0x000B,
    IS_PERSONALNAME_SUFFIX              = 0x000C,
    IS_ADDRESS_FULLPOSTALADDRESS        = 0x000D,
    IS_ADDRESS_POSTALCODE               = 0x000E,
    IS_ADDRESS_STREET                   = 0x000F,
    IS_ADDRESS_STATEORPROVINCE          = 0x0010,
    IS_ADDRESS_CITY                     = 0x0011,
    IS_ADDRESS_COUNTRYNAME              = 0x0012,
    IS_ADDRESS_COUNTRYSHORTNAME         = 0x0013,
    IS_CURRENCY_AMOUNTANDSYMBOL         = 0x0014,
    IS_CURRENCY_AMOUNT                  = 0x0015,
    IS_DATE_FULLDATE                    = 0x0016,
    IS_DATE_MONTH                       = 0x0017,
    IS_DATE_DAY                         = 0x0018,
    IS_DATE_YEAR                        = 0x0019,
    IS_DATE_MONTHNAME                   = 0x001A,
    IS_DATE_DAYNAME                     = 0x001B,
    IS_DIGITS                           = 0x001C,
    IS_NUMBER                           = 0x001D,
    IS_ONECHAR                          = 0x001E,
    IS_PASSWORD                         = 0x001F,
    IS_TELEPHONE_FULLTELEPHONENUMBER    = 0x0020,
    IS_TELEPHONE_COUNTRYCODE            = 0x0021,
    IS_TELEPHONE_AREACODE               = 0x0022,
    IS_TELEPHONE_LOCALNUMBER            = 0x0023,
    IS_TIME_FULLTIME                    = 0x0024,
    IS_TIME_HOUR                        = 0x0025,
    IS_TIME_MINORSEC                    = 0x0026,
    IS_NUMBER_FULLWIDTH                 = 0x0027,
    IS_ALPHANUMERIC_HALFWIDTH           = 0x0028,
    IS_ALPHANUMERIC_FULLWIDTH           = 0x0029,
    IS_CURRENCY_CHINESE                 = 0x002A,
    IS_BOPOMOFO                         = 0x002B,
    IS_HIRAGANA                         = 0x002C,
    IS_KATAKANA_HALFWIDTH               = 0x002D,
    IS_KATAKANA_FULLWIDTH               = 0x002E,
    IS_HANJA                            = 0x002F,
    IS_YOMI                             = 0x0030,
    IS_APPLICATION_END                  = 0x0030
};
typedef enum InputScope InputScope;

HRESULT
SetInputScope(
    HWND hwnd,
    InputScope inputScope
);

HRESULT
SetInputScopes(
    HWND hwnd,
    __in_ecount_opt(cInputScopes) const InputScope *pInputScopes,
    UINT cInputScopes,
    __in_ecount_opt(cPhrases) WCHAR **pszPhraseList,
    UINT cPhrases,
    __in_opt const WCHAR *pszRegExp,
    __in_opt const WCHAR *pszSrgs
);

HRESULT
GetInputScopes(
    HWND hwnd,
    _Deref_out_opt_ InputScope **ppInputScopes,
    __out UINT *pcInputScopes
);

HRESULT
GetInputScopePhrases(
    HWND hwnd,
    _Deref_out_opt_ LPWSTR **ppszPhraseList,
    __out UINT *pcCount
);

HRESULT
GetInputScopeSrgs(
    HWND hwnd,
    __out LPWSTR *pszSrgs
);

#ifdef __cplusplus
}
#endif

#endif // _INPUTSCOPES_H_
