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


/// <topic name="CE_REFCNT" displayname="Reference Counting Class">
/// <summary>simple reference counting class</summary>
/// </topic>
/// <topic_scope tref="CE_REFCNT">

namespace ce {

//
//  ce::refcnt
//
/// <summary>
///     provides standard interlocked reference counting
/// </summary>
//
class refcnt
{
public:
    inline refcnt() : m_cRefCnt(0) {}
    inline ~refcnt() { ASSERT(0 == m_cRefCnt); }
    inline LONG addref() { return InterlockedIncrement(&m_cRefCnt); }
    inline LONG release() { return InterlockedDecrement(&m_cRefCnt); }

private:
    volatile LONG m_cRefCnt;
};

};  // namespace ce
