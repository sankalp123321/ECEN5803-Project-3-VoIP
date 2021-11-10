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

template <class T, typename ArgType, typename SenderType = IXRDependencyObject>
class _Delegate :
    public IXRDelegate<ArgType, SenderType>
{
private:
    typedef HRESULT (T::*PFN_CALLBACK)(SenderType* pObj, ArgType* pArg);

public:    
    _Delegate(
        T* pT, 
        PFN_CALLBACK pfnCallback
        )
    {
        m_pT = pT;
        m_pfnCallback = pfnCallback;

        m_RefCount = 0; // caller must add a ref if they want to use this object 
    }

    // IUnknown (not thread-safe)
    //
    ULONG STDMETHODCALLTYPE AddRef()
    {
        return ++m_RefCount;
    }

    ULONG STDMETHODCALLTYPE Release()
    {
        --m_RefCount;
        if (m_RefCount <= 0) // count can fall below 0!
        {
            delete this;
            return 0;
        }

        return m_RefCount;
    }

    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, VOID** ppvObject)
    {
        if (! ppvObject)
        {
            return E_POINTER;
        }

        if (
            riid == IID_IUnknown ||
            riid == IID_IXRDelegate
            )
        {
            *ppvObject = static_cast< IXRDelegate<ArgType, SenderType>* >(this);
            AddRef();
            return S_OK;
        }
        else
        {
            *ppvObject = NULL;
            return E_NOINTERFACE;
        }
    }

    // IXRDelegate
    //
    HRESULT STDMETHODCALLTYPE Invoke(
        SenderType* pDO,
        ArgType* pArg
        )
    {
        return ((m_pT)->*(m_pfnCallback))(pDO, pArg);
    }

private:
    T*           m_pT;
    PFN_CALLBACK m_pfnCallback;
    LONG         m_RefCount; //signed
};

template <class T, typename ArgType, typename SenderType>
IXRDelegate<ArgType, SenderType>*   
CreateDelegate(T* pT, HRESULT (T::*pfn)(SenderType*, ArgType*))
{
    if (! pT || ! pfn)
    {
#ifndef ALCHEMY_DESKTOP
        // This breaks the Desktop build!
        ASSERT(FALSE);
#endif
        return NULL;
    }
    return new _Delegate<T, ArgType, SenderType>(pT, pfn);
}

template <class T, typename ArgType, typename SenderType>
HRESULT   
CreateDelegate(T* pT, HRESULT (T::*pfn)(SenderType*, ArgType*), IXRDelegate<ArgType, SenderType>** ppResult)
{
    if (! pT || ! pfn || !ppResult)
    {
#ifndef ALCHEMY_DESKTOP
        // This breaks the Desktop build!
        ASSERT(FALSE);
#endif
        return E_POINTER;
    }

    *ppResult = new _Delegate<T, ArgType, SenderType>(pT, pfn);
    if (*ppResult)
    {
        (*ppResult)->AddRef();
        return S_OK;
    }
    else
    {
        return E_OUTOFMEMORY;
    }
}


