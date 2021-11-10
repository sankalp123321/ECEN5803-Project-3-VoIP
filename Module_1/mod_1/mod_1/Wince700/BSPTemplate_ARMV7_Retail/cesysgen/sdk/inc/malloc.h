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

#if     _MSC_VER > 1000
#pragma once
#endif

#ifndef _INC_MALLOC
#define _INC_MALLOC

#include <stdlib.h> // STDLIB is included for legacy reasons.  It contains the "old" function declarations.

#include <crtdefs.h>

#ifdef  _MSC_VER
/*
 * Currently, all MS C compilers for Win32 platforms default to 8 byte
 * alignment.
 */
#pragma pack(push,_CRT_PACKING)
#endif  /* _MSC_VER */

#ifdef  __cplusplus
extern "C" {
#endif

/* _STATIC_ASSERT is for enforcing boolean/integral conditions at compile time. */

#ifndef _STATIC_ASSERT
#define _STATIC_ASSERT(expr) typedef char __static_assert_t[ (expr) ]
#endif

#define _HEAP_MAXREQ    0xFFFFFFE0

_CRTIMP _CRTNOALIAS _CRTRESTRICT __checkReturn __bcount_opt(_Size*_Count) void * __cdecl _recalloc(__in_opt void * _Memory, __in size_t _Count, __in size_t _Size);

#define _ALLOCA_S_THRESHOLD     1024
#define _ALLOCA_S_STACK_MARKER  0xCCCC
#define _ALLOCA_S_HEAP_MARKER   0xDDDD

#define _ALLOCA_S_MARKER_SIZE   8

_STATIC_ASSERT(sizeof(unsigned int) <= _ALLOCA_S_MARKER_SIZE);

#if !defined(__midl) && !defined(RC_INVOKED)
__inline void *_MarkAllocaS(__out_opt __crt_typefix(unsigned int*) void *_Ptr, unsigned int _Marker)
{
    if (_Ptr)
    {
        *((unsigned int*)_Ptr) = _Marker;
        _Ptr = (char*)_Ptr + _ALLOCA_S_MARKER_SIZE;
    }
    return _Ptr;
}
#endif

#if defined(_DEBUG)
#if !defined(_CRTDBG_MAP_ALLOC)
#undef _malloca
#define _malloca(size) \
__pragma(warning(suppress: 4996 6255)) \
        _MarkAllocaS(malloc((size) + _ALLOCA_S_MARKER_SIZE), _ALLOCA_S_HEAP_MARKER)
#endif
#else
#undef _malloca
#define _malloca(size) \
__pragma(warning(suppress: 4996 6255)) \
    ((((size) + _ALLOCA_S_MARKER_SIZE) <= _ALLOCA_S_THRESHOLD) ? \
        _MarkAllocaS(_alloca((size) + _ALLOCA_S_MARKER_SIZE), _ALLOCA_S_STACK_MARKER) : \
        _MarkAllocaS(malloc((size) + _ALLOCA_S_MARKER_SIZE), _ALLOCA_S_HEAP_MARKER))
#endif

#undef _FREEA_INLINE
#define _FREEA_INLINE

#ifdef _FREEA_INLINE
/* _freea must be in the header so that its allocator matches _malloca */
#if !defined(__midl) && !defined(RC_INVOKED)
#undef _freea
_CRTNOALIAS __inline void __CRTDECL _freea(__inout_opt void * _Memory)
{
    unsigned int _Marker;
    if (_Memory)
    {
        _Memory = (char*)_Memory - _ALLOCA_S_MARKER_SIZE;
        _Marker = *(unsigned int *)_Memory;
        if (_Marker == _ALLOCA_S_HEAP_MARKER)
        {
            free(_Memory);
        }
#if defined(_ASSERTE)
        else if (_Marker != _ALLOCA_S_STACK_MARKER)
        {
            _ASSERTE(("Corrupted pointer passed to _freea", 0));
        }
#endif
    }
}
#endif
#endif

#ifdef  __cplusplus
}
#endif

#ifdef  _MSC_VER
#pragma pack(pop)
#endif  /* _MSC_VER */

#endif  /* _INC_MALLOC */

