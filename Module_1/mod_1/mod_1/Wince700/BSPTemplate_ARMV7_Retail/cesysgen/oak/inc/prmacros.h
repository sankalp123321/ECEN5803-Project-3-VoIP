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

/*---------------------------------------------------------------------------*\
 *
 *  module: prmacros.h
 *
\*---------------------------------------------------------------------------*/

#ifndef _prmacros_h_
#define _prmacros_h_

/////////////////////////////////////////////////////////////////////////////

#ifdef UNDER_CE

#ifndef _T
#ifdef  _UNICODE
#define _T(x)      L ## x
#else
#define _T(x)      x
#endif
#endif

#ifndef _W32EM_H_
//already def'd in w32em.h
#define RegOpenKey(hkey, lpsz, phk) \
        RegOpenKeyEx((hkey), (lpsz), 0, 0, (phk))
#endif //_W32EM_H_

#ifndef MulDiv
#define MulDiv(a,b,c)   (((a)*(b))/(c))
#endif
#endif //UNDER_CE

#ifdef __cplusplus

#define ADDREF(x)    if ((x) != NULL) { (x)->AddRef(); } else 
#define RELEASE(x)   if ((x) != NULL) { (x)->Release(); (x) = NULL; } else

#define METHOD_PROLOGUE(theClass, localClass) \
    theClass* pThis = \
		((theClass *)((BYTE *)this - offsetof(theClass, m_x##localClass))); \

#define DEFINE_INTERFACE_PART(localClass) \
	friend localClass; \
	localClass m_x##localClass; \

#define BEGIN_INTERFACE_PART(localClass, baseClass) \
	class localClass : public baseClass \
	{ \
	public: \
		STDMETHOD_(ULONG, AddRef)(); \
		STDMETHOD_(ULONG, Release)(); \
		STDMETHOD(QueryInterface)(REFIID riid, LPVOID FAR* ppvObj); \

#define END_INTERFACE_PART(localClass) \
	};

#define INTERFACE_PART(localClass)  (&m_x##localClass)
#define CONTROLING_UNKNOWN  (pThis->m_pUnkOuter)

#else

#define ADDREF(x)    if ((x) != NULL) {(x)->lpVtbl->AddRef((x)); } else 
#define RELEASE(x)   if ((x) != NULL) {(x)->lpVtbl->Release((x)); (x) = NULL;} else 

#endif // __cplusplus

/////////////////////////////////////////////////////////////////////////////
// Safe macros
/////////////////////////////////////////////////////////////////////////////

#ifndef LOCALFREE
#define LOCALFREE(p) { LocalFree(p); (p) = NULL; }
#endif

#ifndef SAFEDELETE
#define SAFEDELETE(p) { delete (p); (p) = NULL; }
#endif

#ifndef SAFEDELETEARRAY
#define SAFEDELETEARRAY(p) { delete[] (p); (p) = NULL; }
#endif

#ifndef CLOSEHANDLE
#define CLOSEHANDLE(h) { CloseHandle(h); (h) = INVALID_HANDLE_VALUE; }
#endif

#ifndef SYSFREESTRING
#define SYSFREESTRING(x) { SysFreeString(x); (x) = NULL; }
#endif

/////////////////////////////////////////////////////////////////////////////
// copied from <guts.h>
/////////////////////////////////////////////////////////////////////////////

//***   CASSERT -- compile-time assert
#ifndef CASSERT
#define CASSERT(e)  extern int dummary_array[(e)]
#endif

#ifndef ARRAYSIZE
#define ARRAYSIZE(a)   (sizeof(a)/sizeof((a)[0]))
#endif

#ifndef BOOLIFY
#define BOOLIFY(e)      (!!(e))
#endif

#ifndef SIZEOF
#define SIZEOF(a)       sizeof(a)
#endif

/////////////////////////////////////////////////////////////////////////////
	
#endif /* _prmacros_h_ */
