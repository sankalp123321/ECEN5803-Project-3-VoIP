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

#include <XamlRuntime.h>
#include <XRUnknown.h>

/// <summary>
/// This class template defines a delegate list implementation for Custom Event
/// </summary>
template<typename ArgType, typename SenderType>
class _CustomEvent : public IXRCustomEvent<ArgType, SenderType>
{
    BEGIN_QI_MAP()
        QI_MAP_INTERFACE(IXRCustomEvent)
        // Explitily adding IID QI so that QI using IID_IXRCustomEvent succeds. 
        // Without this, we can do QI only using __uuidof (the IXRCustomEvent interface with template parameters).
        QI_MAP_IID(IID_IXRCustomEvent, IXRCustomEvent) 
    END_QI_MAP()

protected:
    typedef IXRDelegate<ArgType, SenderType>    DelegateType;
    DelegateType**  m_pList;
    short           m_cnt;
    short           m_limit;
    long            m_RefCount;

    // In order to save an allocation of one address unit in the vast majority of cases where there
    // only one delegate.  We will use m_pList to point to the single delegate if there is
    // only one instead of having it point to a list of delegates (that only has one entry in it)
    // that needs to be allocated.  Note also, that once we allocate a memory block for a 
    // delegate list, we just keep it around until destruction.
    DelegateType** GetDelegateList()
    {
        ASSERT((m_cnt == 0 && m_limit == 0) || m_pList != NULL);
        ASSERT(m_limit == 0 || m_pList != NULL);
        return m_limit == 0 ? (DelegateType**) &m_pList : m_pList;
    }

public:
    _CustomEvent() : 
        m_pList(NULL), 
        m_cnt(0), 
        m_limit(0)
        {}

    virtual ~_CustomEvent()
    {
        DelegateType** pList = GetDelegateList();
        for (int i = 0; i < m_cnt; i++)
        {
            pList[i]->Release();
        }
        if (m_limit > 0)
        {
            delete m_pList;
        }
    }

    HRESULT STDMETHODCALLTYPE Attach(__in IXRDelegate<ArgType, SenderType>* pDelegate)
    {
        HRESULT hr = S_OK;
        DelegateType** ppList = NULL;
        DelegateType** ppNewList = NULL;

        if (!pDelegate)
        {
            return E_INVALIDARG;
        }
        
        // add a pinning reference (See DependencyObject::Attach for an explanation)
        //
        pDelegate->AddRef();
        
        ppList = GetDelegateList();
        if (m_cnt + 1 > m_limit && m_cnt != 0)
        {
            ppNewList = new DelegateType*[m_cnt + 1];
            if (!ppNewList)
            {
                return E_OUTOFMEMORY;
            }

            memcpy(ppNewList, ppList, sizeof(DelegateType*) * m_cnt);
            if (m_limit > 0 && m_pList)
            {
                delete m_pList;
            }
            m_pList = ppNewList;
            ppList  = m_pList;

            m_limit = m_cnt + 1;
        }
        ppList[m_cnt++] = pDelegate;
        pDelegate->AddRef();

        if (pDelegate)
        {
            pDelegate->Release();
            pDelegate = NULL;
        }
        return hr;
    }

    HRESULT STDMETHODCALLTYPE Detach(__in IXRDelegate<ArgType, SenderType>* pDelegate)
    {
        if (!pDelegate)
        {
            return E_INVALIDARG;
        }

        DelegateType** pList = GetDelegateList();
        // Find the item to remove
        int i = 0;
        while (i < m_cnt)
        {
            if (pList[i] == pDelegate)
            {
                pList[i]->Release();
                m_cnt--;
                break;
            }
            i++;
        }
        // Now shift everything else down to maintain order
        while (i < m_cnt)
        {
            pList[i] = pList[i+1];
            i++;
        }
        return S_OK;
    }

    bool HasDelegates()
    {
        return 0 != m_cnt;
    }

    HRESULT STDMETHODCALLTYPE Raise(__in SenderType* pSender, __inout ArgType* pArg)
    {
        HRESULT hr = S_OK;
        if (!pSender)
        {
            return E_INVALIDARG;
        }
        DelegateType** pList = GetDelegateList();
        for (int i = 0; i < m_cnt; i ++)
        {
            // Note: Right now we aren't worrying about whether
            //       the Invoke fails or not.  In other words, if
            //       one event handler fails, we still call the others.
            pList[i]->Invoke(pSender, pArg);
        }
        return hr;
    }

};

template <typename ArgType, typename SenderType>
IXRCustomEvent<ArgType, SenderType>* CreateCustomEvent()
{
    IXRCustomEvent<ArgType, SenderType>* pResult = NULL;

    // hr is ignored since NULL indicates failure.
    //
    XRObject<_CustomEvent<ArgType, SenderType>>::CreateInstance(&pResult);

    return pResult;
}