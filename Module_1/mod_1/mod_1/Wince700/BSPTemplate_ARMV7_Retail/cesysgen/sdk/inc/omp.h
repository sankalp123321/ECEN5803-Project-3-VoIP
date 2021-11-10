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
*
*Purpose:
*        This file has declarations of OpenMP 2.0 API 
****/

#pragma once

#if defined(__cplusplus)
extern "C" {
#endif

#define _OMPAPI     __cdecl

#if !defined(_OMP_LOCK_T)
#define _OMP_LOCK_T
typedef void * omp_lock_t;
#endif

#if !defined(_OMP_NEST_LOCK_T)
#define _OMP_NEST_LOCK_T
typedef void * omp_nest_lock_t;
#endif

#if !defined(_OPENMP)

#if defined(_DEBUG)
    #pragma comment(lib, "vcompd")
#else   // _DEBUG
    #pragma comment(lib, "vcomp")
#endif  // _DEBUG

#endif // _OPENMP


#if !defined(_OMPIMP)
#define _OMPIMP
#endif

_OMPIMP void _OMPAPI
omp_set_num_threads(
    int _Num_threads
    );

_OMPIMP int _OMPAPI
omp_get_num_threads(
    void
    );

_OMPIMP int _OMPAPI
omp_get_max_threads(
    void
    );

_OMPIMP int _OMPAPI
omp_get_thread_num(
    void
    );

_OMPIMP int _OMPAPI
omp_get_num_procs(
    void
    );

_OMPIMP void _OMPAPI
omp_set_dynamic(
    int _Dynamic_threads
    );

_OMPIMP int _OMPAPI
omp_get_dynamic(
    void
    );

_OMPIMP int _OMPAPI
omp_in_parallel(
    void
    );

_OMPIMP void _OMPAPI
omp_set_nested(
    int _Nested
    );

_OMPIMP int _OMPAPI
omp_get_nested(
    void
    );

_OMPIMP void _OMPAPI
omp_init_lock(
    omp_lock_t * _Lock
    );

_OMPIMP void _OMPAPI
omp_destroy_lock(
    omp_lock_t * _Lock
    );

_OMPIMP void _OMPAPI
omp_set_lock(
    omp_lock_t * _Lock
    );

_OMPIMP void _OMPAPI
omp_unset_lock(
    omp_lock_t * _Lock
    );

_OMPIMP int _OMPAPI
omp_test_lock(
    omp_lock_t * _Lock
    );

_OMPIMP void _OMPAPI
omp_init_nest_lock(
    omp_nest_lock_t * _Lock
    );

_OMPIMP void _OMPAPI
omp_destroy_nest_lock(
    omp_nest_lock_t * _Lock
    );

_OMPIMP void _OMPAPI
omp_set_nest_lock(
    omp_nest_lock_t * _Lock
    );

_OMPIMP void _OMPAPI
omp_unset_nest_lock(
    omp_nest_lock_t * _Lock
    );

_OMPIMP int _OMPAPI
omp_test_nest_lock(
    omp_nest_lock_t * _Lock
    );

_OMPIMP double _OMPAPI
omp_get_wtime(
    void
    );

_OMPIMP double _OMPAPI
omp_get_wtick(
    void
    );

#if defined(__cplusplus)
}
#endif
