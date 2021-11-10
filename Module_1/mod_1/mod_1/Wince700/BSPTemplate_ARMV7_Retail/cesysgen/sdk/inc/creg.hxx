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
/*--
Module Name: CREG.HXX
Abstract: Registry helper class
--*/

#pragma once

#ifndef __CREG_HXX
#define __CREG_HXX

#include <windows.h>
#include "svsutil.hxx"

/////////////////////////////////////////////////////////////////////////////
// CReg: Registry helper class
/////////////////////////////////////////////////////////////////////////////
class CReg
{
private:
	HKEY	m_hKey;
	int		m_Index;
	LPBYTE	m_lpbValue;  // last value read, if any
	DWORD   m_iValueLen; // Length of m_lpbValue.

	void ZeroEntries() {
		m_hKey      = NULL;
		m_Index     = 0;
		m_lpbValue  = NULL;
		m_iValueLen = 0;
	}

public:
	BOOL Create(HKEY hkRoot, LPCTSTR pszKey) {
		DWORD dwDisp;
		Reset();
		return ERROR_SUCCESS==RegCreateKeyEx(hkRoot, pszKey, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, NULL, &m_hKey, &dwDisp);
	}

	BOOL Open(HKEY hkRoot, LPCTSTR pszKey, REGSAM sam=0) {
		Reset();
		return ERROR_SUCCESS==RegOpenKeyEx(hkRoot, pszKey, 0, sam, &m_hKey);
	}

	BOOL OpenOrCreateRegKey(HKEY hkRoot, LPCTSTR pszKey, REGSAM sam=0) {
		return Open(hkRoot,pszKey,sam) ? TRUE : Create(hkRoot,pszKey);
	}

	CReg(HKEY hkRoot, LPCTSTR pszKey) {
		ZeroEntries();
		Open(hkRoot, pszKey);
	}

	CReg() {
		ZeroEntries();
	}

	~CReg() { 
		if(m_hKey) RegCloseKey(m_hKey); 
		if (m_lpbValue) {
			ASSERT(m_iValueLen != 0);
			LocalFree(m_lpbValue);
		}
	}

	void Reset() { 
		if(m_hKey) {
			RegCloseKey(m_hKey); 
			m_hKey = NULL;
		}
		m_Index = 0;
	}

	operator HKEY() { return m_hKey; }

	BOOL IsOK(void) { return m_hKey!=NULL; }

	DWORD NumSubkeys()
	{
		DWORD nSubKeys = 0;
		RegQueryInfoKey(m_hKey,0,0,0, &nSubKeys,0,0,0,0,0,0,0);
		return nSubKeys;
	}

	DWORD NumValues()
	{
		DWORD nValues = 0;
		RegQueryInfoKey(m_hKey,0,0,0,0,0,0,&nValues,0,0,0,0);
		return nValues;
	}

	BOOL EnumKey(__out_ecount(dwLen) LPTSTR psz, DWORD dwLen) {
		if(!m_hKey) 
			return FALSE;

		// Note: EnumKey takes size in chars, not bytes!
		return ERROR_SUCCESS==RegEnumKeyEx(m_hKey, m_Index++, psz, &dwLen, NULL, NULL, NULL, NULL);
	}

	BOOL EnumValue(__out_ecount(dwLenName) LPTSTR pszName, DWORD dwLenName, LPTSTR pszValue, DWORD dwLenValue) {
		DWORD dwType;
		if(!m_hKey) 
			return FALSE;

		dwLenValue *= sizeof(TCHAR); // convert length in chars to bytes
		// Note: EnumValue takes size of Key in chars, but size of Value in bytes!!!
		return ERROR_SUCCESS==RegEnumValue(m_hKey, m_Index++, pszName, &dwLenName, NULL, &dwType, (LPBYTE)pszValue, &dwLenValue);
	}

	BOOL GetLengthAndType(LPCTSTR szName, DWORD *pdwLength, DWORD *pdwType) {
		if(!m_hKey) 
			return FALSE;

		return (ERROR_SUCCESS==RegQueryValueEx(m_hKey, szName, NULL, pdwType, NULL, pdwLength));
	}

	BOOL ValueSZ(LPCTSTR szName, __out_ecount(dwLen) LPTSTR szValue, DWORD dwLen) {
		if(!m_hKey) 
			return FALSE;

		dwLen *= sizeof(TCHAR); // convert length in chars to bytes
		return ERROR_SUCCESS==RegQueryValueEx(m_hKey, szName, NULL, NULL, (LPBYTE)szValue, &dwLen);
	}

	DWORD ValueBinary(LPCTSTR szName, __out_bcount(dwLen) LPBYTE lpbValue, DWORD dwLen) {
		if(!m_hKey) 
			return 0;

		if(ERROR_SUCCESS==RegQueryValueEx(m_hKey, szName, NULL, NULL, lpbValue, &dwLen))
			return dwLen;
		else
			return 0;
	}

	LPCTSTR CReg::ValueSZ(LPCTSTR szName)
	{
		ASSERT( ((m_lpbValue==NULL) && (m_iValueLen==0)) ||
		                ((m_lpbValue!=NULL) && (m_iValueLen!=0)));

		if(!m_hKey) 
			return NULL;

		DWORD dwLen = m_iValueLen;
		DWORD dwErr = RegQueryValueEx(m_hKey, szName, NULL, NULL, m_lpbValue, &dwLen);

		if ((ERROR_SUCCESS == dwErr) && (m_lpbValue != NULL)) {
			ASSERT(m_iValueLen!=0);
			ASSERT(m_iValueLen >= dwLen);
			return (LPTSTR)m_lpbValue;
		}

		// some error other than buffer not being big enough.
		if ((dwErr != ERROR_MORE_DATA) && (dwErr != ERROR_SUCCESS))
			return NULL;

		if (m_lpbValue) {
			ASSERT(m_iValueLen != 0);
			ASSERT(m_iValueLen < dwLen);

			// Current buffer is too small.
			// Do not do LocalReAlloc() because if it has to allocate a 
			// new pointer, LocalReAlloc() performs a memcpy to the new buffer
			// which we do not want (because old data is going to be overwritten
			// anyway in the RegQueryValueEx call)
			LocalFree(m_lpbValue);
			m_lpbValue  = NULL;
			m_iValueLen = 0;
		}
		ASSERT(m_iValueLen == 0);

		m_lpbValue = (BYTE*)LocalAlloc(0,dwLen);
		if (m_lpbValue == NULL)
			return NULL;

		m_iValueLen = dwLen;

		if (ERROR_SUCCESS != RegQueryValueEx(m_hKey, szName, NULL, NULL, m_lpbValue, &dwLen))
			return NULL;

		return (LPTSTR)m_lpbValue;
	}

	LPBYTE ValueBinary(LPCTSTR szName) {
		return (LPBYTE)ValueSZ(szName);
	}

	DWORD ValueDW(LPCTSTR szName, DWORD dwDefault=0) {
		DWORD dwValue = dwDefault;
		if(m_hKey) 
		{
			DWORD dwLen = sizeof(DWORD);
			RegQueryValueEx(m_hKey, szName, NULL, NULL, (LPBYTE)&dwValue, &dwLen);
		}
		return dwValue;
	}

	BOOL SetSZ(LPCTSTR szName, LPCTSTR szValue, DWORD dwLen) {
		return ERROR_SUCCESS==RegSetValueEx(m_hKey, szName, 0, REG_SZ, (LPBYTE)szValue, sizeof(TCHAR)*dwLen);
	}
	
	BOOL SetSZ(LPCTSTR szName, LPCTSTR szValue) {
		return SetSZ(szName, szValue, 1+lstrlen(szValue));
	}

	BOOL SetDW(LPCTSTR szName, DWORD dwValue) {
		return ERROR_SUCCESS==RegSetValueEx(m_hKey, szName, 0, REG_DWORD, (LPBYTE)&dwValue, sizeof(DWORD));
	}
	
	BOOL SetBinary(LPCTSTR szName, __in_bcount(dwLen) BYTE const * const  lpbValue, DWORD dwLen) {
		return ERROR_SUCCESS==RegSetValueEx(m_hKey, szName, 0, REG_BINARY, lpbValue, dwLen);
	}

	BOOL SetMultiSZ(LPCTSTR szName, LPCTSTR lpszValue, DWORD dwLen) {
		return ERROR_SUCCESS==RegSetValueEx(m_hKey, szName, 0, REG_MULTI_SZ, (LPBYTE)lpszValue, sizeof(TCHAR)*dwLen);
	}


	// verifies that the value being read from the registry
	// is of type dword.  a flag is used to specify whether
	// a default value should be used in the event that the
	// value is not found.
	// expects that GetLengthAndType returns false if the
	// value cannot be found in the registry or if the key is
	// invalid.
	BOOL ValueDWVerifyType(LPCTSTR szName, DWORD *pdwValue, DWORD dwDefault=0, BOOL fUseDefault=TRUE) {
		DWORD dwLen;
		DWORD dwType;

		if(!GetLengthAndType(szName, &dwLen, &dwType))
		{
		    if(fUseDefault)
		    {
		        *pdwValue = dwDefault;
		        return TRUE;
		    }
		    else
		        return FALSE;
		}

		if(dwType != REG_DWORD)
		    return FALSE;

		*pdwValue = ValueDW(szName, dwDefault);
		return TRUE;
	}


	// deletes the specified key and returns true only if
	// the deletion was successful.  if the key did not exist
	// to begin with then false is returned.
	BOOL DeleteKey(LPCTSTR szName) {
		return ERROR_SUCCESS==RegDeleteKey(m_hKey, szName);
	}


	// deletes the specified value and returns true only if
	// the deletion was successful.  if the value did not exist
	// to begin with then false is returned.
	BOOL DeleteValue(LPCTSTR szName) {
		return ERROR_SUCCESS==RegDeleteValue(m_hKey, szName);
	}

	// Flush() has perf implications. Please read documentation 
	// for RegFlushKey before using.
	BOOL Flush() {
		return ERROR_SUCCESS==RegFlushKey(m_hKey);
	}

};

#endif // __CREG_HXX 


