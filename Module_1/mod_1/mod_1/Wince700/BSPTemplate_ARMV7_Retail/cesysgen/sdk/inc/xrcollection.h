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
#include <XRCustomEvent.h>
#include <vector.hxx>
using namespace ce;

#ifndef E_NOTFOUND
#define E_NOTFOUND HRESULT_FROM_WIN32(ERROR_NOT_FOUND)
#endif

#ifndef E_BUSY
#define E_BUSY HRESULT_FROM_WIN32(ERROR_BUSY)
#endif

/// <summary>
/// The basic template implementation of a XRValue collection. No type specific API exposed in this base.
/// IFace: the IXR* interface it implements.
/// ItemType: the type of each item in the collection. All items are stored as a ItemType vector.
/// ItemComparer: used to compare two given values for various ItemType.
/// ItemBoxer: used to box/unbox a ItemType to/from a XRValue
/// ItemLifeManager: used to Clone item and Release item for different ItemType.
/// </summary>
template<typename IFace, typename ItemType, typename ItemComparer, typename ItemConverter, typename ItemLifeManager>
class _XRValueCollectionBaseT : public IFace
{
    BEGIN_QI_MAP()
        QI_MAP_INTERFACE(IXRList)
        QI_MAP_INTERFACE(IXRValueCollection)
        QI_MAP_INTERFACE(IXREnumerable)
    END_QI_MAP()

protected:
    _XRValueCollectionBaseT() : m_nVersion(0) {};

public:
    virtual ~_XRValueCollectionBaseT()
    {
        Clear();
    }

    HRESULT STDMETHODCALLTYPE GetEnumerator(__out IXREnumerator ** ppEnumerator)
    {
        HRESULT hr = S_OK;
        XRValueCollectionEnumerator* pEnumerator = NULL;

        if (!ppEnumerator)
        {
            return E_POINTER;
        }

        hr = XRObject<XRValueCollectionEnumerator>::CreateInstance(&pEnumerator);
        if (SUCCEEDED(hr) && pEnumerator)
        {
            hr = pEnumerator->AttachOwner(this);
            if (SUCCEEDED(hr))
            {
                *ppEnumerator = pEnumerator;
                pEnumerator = NULL;
            }
        }

        if (pEnumerator)
        {
            pEnumerator->Release();
        }

        return hr;
    }

    HRESULT STDMETHODCALLTYPE Add(__in XRValue * pValue)
    {
        m_nVersion++;
        int count = 0;
        HRESULT hr = GetCount(&count);
        if (SUCCEEDED(hr))
        {
            hr = InsertItemImpl(count, pValue);
        };

        return hr;
    }

    HRESULT STDMETHODCALLTYPE Remove(__in XRValue * pValue)
    {
        m_nVersion++;
        ItemType item;
        HRESULT hr = ItemConverter::Convert(pValue, &item);

        if (SUCCEEDED(hr))
        {
            vector<ItemType>::iterator it = m_itemsList.begin();
            while (it != m_itemsList.end())
            {
                if (ItemComparer::AreObjectsEqual(item, *it))
                    break;
                it++;
            }

            if (it != m_itemsList.end())
            {
                hr = RemoveItemImpl(it - m_itemsList.begin());
            }
            else
            {
                hr = E_NOTFOUND;
            }
        }

        ItemLifeManager::ReleaseItem(item);
        return hr;
    }
    
    HRESULT STDMETHODCALLTYPE Contains(__in XRValue * pValue, __out bool * pResult)
    {
        int index = -1;
        if (!pResult)
        {
            return E_POINTER;
        }

        HRESULT hr = IndexOf(pValue, &index);
        if (SUCCEEDED(hr))
        {
            *pResult = index != -1;
        }

        return hr;
    }

    HRESULT STDMETHODCALLTYPE Clear()
    {
        m_nVersion++;
        return ClearItemsImpl();
    }

    HRESULT STDMETHODCALLTYPE GetCount(__out int * pCount)
    {
        if (!pCount)
        {
            return E_POINTER;
        }

        *pCount = m_itemsList.end() - m_itemsList.begin();

        return S_OK;
    }

    HRESULT STDMETHODCALLTYPE GetIsReadOnly(__out bool * pIsReadOnly)
    {
        if (!pIsReadOnly)
        {
            return E_POINTER;
        }

        *pIsReadOnly = false;

        return S_OK;
    }

    HRESULT STDMETHODCALLTYPE IndexOf(__in XRValue * pValue, __out int *pIndex)
    {
        if (!pIndex)
        {
            return E_POINTER;
        }

        ItemType item;
        HRESULT hr = ItemConverter::Convert(pValue, &item);
        if (SUCCEEDED(hr))
        {
            vector<ItemType>::iterator it = m_itemsList.begin();
            while (it != m_itemsList.end())
            {
                if (ItemComparer::AreObjectsEqual(item, *it))
                    break;
                it++;
            }

            *pIndex = (it == m_itemsList.end()) ? -1 : it - m_itemsList.begin();
        }

        ItemLifeManager::ReleaseItem(item);
        return hr;
    }

    HRESULT STDMETHODCALLTYPE Insert(__in int nIndex, __in XRValue * pValue)
    {
        m_nVersion++;
        return InsertItemImpl(nIndex, pValue);
    }

    HRESULT STDMETHODCALLTYPE GetItem(__in int nIndex, __out XRValue * pValue)
    {
        vector<ItemType>::iterator location = m_itemsList.begin() + nIndex;
        HRESULT hr = E_INVALIDARG;
        if (location >= m_itemsList.begin() && location < m_itemsList.end())
        {
            hr = ItemLifeManager::CloneToBox(m_itemsList[nIndex], pValue);
        }

        return hr;
    }

    HRESULT STDMETHODCALLTYPE SetItem(__in int nIndex, __out XRValue * pValue)
    {
        return SetItemImpl(nIndex, pValue);
    }

    HRESULT STDMETHODCALLTYPE RemoveAt(__in int nIndex)
    {
        m_nVersion++;
        return RemoveItemImpl(nIndex);
    }

protected:
    /// <summary>
    /// Implementation of collection operations. Can be overrided by derived class to implement ReadOnly collection or collection change notification supported collection.
    /// </summary>
    virtual HRESULT STDMETHODCALLTYPE InsertItemImpl(__in int nIndex, __in XRValue* pValue)
    {
        ItemType item;
        vector<ItemType>::iterator location = m_itemsList.begin() + nIndex;
        HRESULT hr = E_INVALIDARG;
        if (location >= m_itemsList.begin() && location <= m_itemsList.end())
        {
            hr = ItemConverter::Convert(pValue, &item);
            if (SUCCEEDED(hr))
            {
                m_itemsList.insert(location, item);
            }
        }

        return hr;
    }

    virtual HRESULT STDMETHODCALLTYPE RemoveItemImpl(__in int nIndex)
    {
        vector<ItemType>::iterator location = m_itemsList.begin() + nIndex;
        HRESULT hr = E_INVALIDARG;
        if (location >= m_itemsList.begin() && location < m_itemsList.end())
        {
            ItemLifeManager::ReleaseItem(*location);
            m_itemsList.erase(location);
            hr = S_OK;
        }

        return hr;
    }

    virtual HRESULT STDMETHODCALLTYPE ClearItemsImpl()
    {
        vector<ItemType>::iterator it = m_itemsList.begin();
        while (it != m_itemsList.end())
        {
            ItemLifeManager::ReleaseItem(*it);
            it++;
        }

        m_itemsList.clear();
        return S_OK;
    }

    virtual HRESULT STDMETHODCALLTYPE SetItemImpl(__in int nIndex, __in XRValue* pValue)
    {
        HRESULT hr = E_INVALIDARG;
        ItemType item;
        vector<ItemType>::iterator location = m_itemsList.begin() + nIndex;
        if (location >= m_itemsList.begin() && location < m_itemsList.end())
        {
            hr = ItemConverter::Convert(pValue, &item);
            if (SUCCEEDED(hr))
            {
                ItemLifeManager::ReleaseItem(*location);
                m_itemsList[nIndex] = item;
            }
        }

        return hr;
    }

protected:
    /// <summary>
    /// Store the collection by vector.
    /// </summary>
    vector<ItemType> m_itemsList;

private:
    /// <summary>
    /// Current version of the collection, make sure the enumerator and the collection is in-sync.
    /// </summary>
    int m_nVersion;

    /// <summary>
    /// The IXREnumerator for this IXREnumerable(XRValueCollectionT).
    /// </summary>
    class XRValueCollectionEnumerator : public IXREnumerator
    {
        BEGIN_QI_MAP()
            QI_MAP_INTERFACE(IXREnumerator)
        END_QI_MAP()

    protected:
        XRValueCollectionEnumerator() {};

    public:
        HRESULT AttachOwner(__in _XRValueCollectionBaseT * pOwner)
        {
            HRESULT hr = E_FAIL;
            m_pOwner = pOwner;
            m_position = -1;

            if (m_pOwner)
            {
                m_pOwner->AddRef();
                m_nVersion = m_pOwner->m_nVersion;
                hr = S_OK;
            }
            else
            {
                hr = E_INVALIDARG;
            }

            return hr;
        };

        virtual ~XRValueCollectionEnumerator()
        {
            if (m_pOwner)
            {
                m_pOwner->Release();
                m_pOwner = NULL;
            }
        }

        /// <summary>
        /// Move the enumerator to the next position
        /// </summary>
        /// <param name="pHasValue">[out] Indicates whether there is more element(s).</param>
        /// <returns>
        /// S_OK if successully moved to the next element. S_FALSE if there is no more element, pHasValue is valid.
        /// E_POINTER if pHasValue is NULL. E_BUSY if the collection was changed during enumeration.
        /// </returns>
        HRESULT STDMETHODCALLTYPE MoveNext(__out bool * pHasValue)
        {
            if (!m_pOwner || !pHasValue)
            {
                return E_POINTER;
            }

            HRESULT hr = E_BUSY;
            if (m_nVersion == m_pOwner->m_nVersion)
            {
                *pHasValue = false;
                if (m_pOwner->m_itemsList.begin() + m_position != m_pOwner->m_itemsList.end())
                {
                    m_position++;
                    vector<ItemType>::iterator it = m_pOwner->m_itemsList.begin() + m_position;
                    *pHasValue = (it != m_pOwner->m_itemsList.end());
                    hr = S_OK;
                }
                else
                {
                    // Don't have value anymore, but should also be success because this is allowed when the collection is empty.
                    hr = S_FALSE;
                }
            }

            return hr;
        }

        HRESULT STDMETHODCALLTYPE Reset()
        {
            m_position = -1;
            return S_OK;
        }

        HRESULT STDMETHODCALLTYPE GetCurrent(__out XRValue * pValue)
        {
            if (!m_pOwner || !pValue)
            {
                return E_POINTER;
            }

            HRESULT hr = E_BUSY;
            if (m_nVersion == m_pOwner->m_nVersion && m_position >= 0)
            {
                vector<ItemType>::iterator it = m_pOwner->m_itemsList.begin() + m_position;
                if (it != m_pOwner->m_itemsList.end())
                {
                    hr = ItemLifeManager::CloneToBox(*it, pValue);
                }
            }

            return hr;
        }

    private:
        _XRValueCollectionBaseT * m_pOwner;
        int m_position;

        /// <summary>
        /// Keep sync with the collection. Fail if version different from the original version.
        /// </summary>
        int m_nVersion;
    };

};

/// <summary>
/// This class provides AddRef/Release overloads for template types.
/// </summary>
class _ItemLifeManager
{
public:
    /// <summary>
    /// Clone the value to the target XRValue. 
    /// </summary>
    /// <remark>
    /// The pointer type must support AddRef.
    /// </remark>
    template<typename Obj>
    static HRESULT CloneToBox(__in Obj* pItem, __out XRValue* pValue)
    {
        if (!pValue)
        {
            return E_POINTER;
        }

        pValue->SetValue(pItem, true/*NeedFreeValuePointer*/);

        if (pItem)
        {
            pItem->AddRef();
        }

        return S_OK;
    }

    /// <summary>
    /// Specialization for string pointer.
    /// </summary>
    template<>
    static HRESULT CloneToBox(__in WCHAR* pItem, __out XRValue * pValue)
    {
        if (!pValue)
        {
            return E_POINTER;
        }

        BSTR bstr = SysAllocString(pItem);

        pValue->SetValue(bstr, true/*NeedFreeValuePointer*/);

        return S_OK;
    }

    /// <summary>
    /// In case of the Type is not a pointer.
    /// </summary>
    template<typename Type>
    static HRESULT CloneToBox(__in const Type& Item, __out XRValue * pValue)
    {
        if (!pValue)
        {
            return E_POINTER;
        }

        pValue->SetValue(Item);

        return S_OK;
    }

    /// <summary>
    /// Release the item if it is IUnknown.
    /// </summary>
    /// <remark>
    /// The pointer type must support Release().
    /// </remark>
    template<typename Obj>
    static HRESULT ReleaseItem(__in Obj* pItem)
    {
        if (pItem)
        {
            pItem->Release();
            pItem = NULL;
        }

        return S_OK;
    }

    /// <summary>
    /// In case of the Type is not a pointer.
    /// </summary>
    template<typename Type>
    static HRESULT ReleaseItem(__in Type&)
    {
        return S_FALSE;
    }

    /// <summary>
    /// Specialization for BSTR
    /// </summary>
    static HRESULT ReleaseItem(__in BSTR bstr)
    {
        if (bstr)
        {
            SysFreeString(bstr);
            bstr = NULL;
        }

        return S_OK;
    }
};

/// <summary>
/// Overloads AreObjectsEuqal for different types. Used to compare two objects.
/// </summary>
class _ItemComparer
{
public:
    typedef WCHAR* StringType;

    /// <summary>
    /// Most of the cases, just return the result of the == operator.
    /// </summary>
    template<typename Type>
    static bool AreObjectsEqual(__in const Type& Object, __in const Type& ObjectToCompare)
    {
        return Object == ObjectToCompare;
    }

    /// <summary>
    /// Specialization for WCHAR* type, use wcscmp to compare.
    /// </summary>
    template<>
    static bool AreObjectsEqual(__in const StringType & pString, __in const StringType & pStringToCompare)
    {
        if (pString && pStringToCompare)
        {
            return wcscmp(pString, pStringToCompare) == 0;
        }
        else
        {
            return pString == pStringToCompare;
        }
    }
};

/// <summary>
/// This class is used to convert from XRValue to a specific type. If users want to extend convertion, 
/// such as convert a XRValue to any IXRPropertyBag derived custom type or IXREnumerable derived custom type,
/// they can simply define their own one and pass it to the template parameter of _XRValueCollectionBaseT
/// </summary>
class _ItemConverter
{
public:
    template<typename ItemType>
    static HRESULT Convert(__in XRValue* pSourceValue, __out ItemType* pValue)
    {
        if (!pSourceValue)
        {
            return E_POINTER;
        }

        return pSourceValue->GetValue(pValue);
    }
};

/// <summary>
/// Defines collection APIs of specific item type.
/// </summary>
template<typename IFace, typename ItemType>
class XRValueCollectionT : public _XRValueCollectionBaseT<IFace, ItemType, _ItemComparer, _ItemConverter, _ItemLifeManager>
{
protected:
    XRValueCollectionT() {};

public:
    HRESULT Add(__in const ItemType& Value)
    {
        return IXRValueCollection::Add(Value);
    }

    HRESULT Remove(__in const ItemType& Value)
    {
        return IXRValueCollection::Remove(Value);
    }
    
    HRESULT Contains(__in const ItemType& Value, __out bool * pResult)
    {
        return IXRValueCollection::Contains(Value, pResult);
    }

    // IXRList
    HRESULT IndexOf(__in const ItemType& Value, __out int *pIndex)
    {
        return IXRList::IndexOf(Value, pIndex);
    }

    HRESULT Insert(__in int nIndex, __in const ItemType& Value)
    {
        return IXRList::Insert(nIndex, Value);
    }

    HRESULT GetItem(__in int nIndex, __out ItemType * pValue)
    {
        return IXRList::GetItem(nIndex, pValue);
    }

    template<typename Obj>
    HRESULT GetItem(__in int nIndex, __out Obj** ppObj)
    {
        return IXRList::GetItem(nIndex, ppObj);
    }

    HRESULT SetItem(__in int nIndex, __in const ItemType& Value)
    {
        return IXRList::SetItem(nIndex, Value);
    }
};


/// <summary>
/// Define the IFace of XRValueCollectionT: IXRList
/// </summary>
template<typename ItemType>
class XRValueCollection : public XRValueCollectionT<IXRList, ItemType>
{
protected:
    XRValueCollection() {}

public:
    static HRESULT CreateInstance(__out XRValueCollection** ppXRValueCollection)
    {
        return XRObject<XRValueCollection>::CreateInstance(ppXRValueCollection);
    }
};

/// <summary>
/// Represents a dynamic data collection that provides notifications when items get added, removed, or when the whole list is refreshed.
/// </summary>
template<typename ItemType>
class XRObservableCollection : public XRValueCollectionT<IXRList, ItemType>, public IXRNotifyCollectionChanged
{
    BEGIN_QI_MAP()
        QI_MAP_INTERFACE(IXRNotifyCollectionChanged)
        QI_MAP_CHAIN(XRValueCollectionT)
    END_QI_MAP()

protected:
    XRObservableCollection()
    {
        m_IsBusy = false;
        m_pCollectionChangedEvent = CreateCustomEvent<XRCollectionChangedCustomEventArgs, IXRNotifyCollectionChanged>();
    }

public:
    /// <remark>
    /// Re-define IUnknown interfaces to avoid compile error "ambiguous call" since both IXRNotifiCollectionChanged and XRValueCollectionT have IUnknown interface.
    /// They will be implemented in XRObject.
    /// </remark>
    using IXRNotifyCollectionChanged::AddRef;
    using IXRNotifyCollectionChanged::Release;
    using IXRNotifyCollectionChanged::QueryInterface;

    static HRESULT CreateInstance(__out XRObservableCollection** ppCollection)
    {
        return XRObject<XRObservableCollection>::CreateInstance(ppCollection);
    }

    ~XRObservableCollection()
    {
        if (m_pCollectionChangedEvent)
        {
            m_pCollectionChangedEvent->Release();
            m_pCollectionChangedEvent = NULL;
        }
    }

    HRESULT STDMETHODCALLTYPE GetCollectionChangedEvent(__out IXRCustomEvent<XRCollectionChangedCustomEventArgs, IXRNotifyCollectionChanged> ** ppEvent)
    {
        if (!ppEvent)
        {
            return E_POINTER;
        }

        *ppEvent = m_pCollectionChangedEvent;
        if (m_pCollectionChangedEvent)
        {
            m_pCollectionChangedEvent->AddRef();
        }
        return S_OK;
    }

protected:
    HRESULT STDMETHODCALLTYPE ClearItemsImpl()
    {
        if (m_IsBusy)
        {
            return E_BUSY;
        }

        XRCollectionChangedCustomEventArgs Args;
        HRESULT hr = XRValueCollectionT<IXRList, ItemType>::ClearItemsImpl();
        if (SUCCEEDED(hr))
        {
            BuildCollectionChangedCustomEventArgs(&Args, XRCollectionChangeAction_Reset);
            hr = OnCollectionChanged(&Args);
        }

        return hr;
    }

    HRESULT STDMETHODCALLTYPE InsertItemImpl(int nIndex, XRValue* pValue)
    {
        if (m_IsBusy)
        {
            return E_BUSY;
        }

        XRCollectionChangedCustomEventArgs Args;
        XRPtr<IXRList> pNewItems;
        HRESULT hr = XRObject<XRValueCollection<ItemType>>::CreateInstance(&pNewItems);

        if (SUCCEEDED(hr))
        {
            hr = XRValueCollectionT<IXRList, ItemType>::InsertItemImpl(nIndex, pValue);
            if (SUCCEEDED(hr))
            {
                BuildCollectionChangedCustomEventArgs(&Args, XRCollectionChangeAction_Add);
                Args.pNewItems = pNewItems;
                hr = pNewItems->Add(pValue);
                if (SUCCEEDED(hr))
                {
                    Args.NewStartingIndex = nIndex;
                    hr = OnCollectionChanged(&Args);
                }
            }
        }

        return hr;
    }

    HRESULT STDMETHODCALLTYPE RemoveItemImpl(int nIndex)
    {
        if (m_IsBusy)
        {
            return E_BUSY;
        }

        XRCollectionChangedCustomEventArgs Args;
        XRValue RemovedItem;
        XRPtr<IXRList> pOldItems;
        HRESULT hr = XRObject<XRValueCollection<ItemType>>::CreateInstance(&pOldItems);

        if (SUCCEEDED(hr))
        {
            hr = _XRValueCollectionBaseT::GetItem(nIndex, &RemovedItem);
            if (SUCCEEDED(hr))
            {
                BuildCollectionChangedCustomEventArgs(&Args, XRCollectionChangeAction_Remove);
                Args.pOldItems = pOldItems;

                hr = pOldItems->Add(&RemovedItem);
                if (SUCCEEDED(hr))
                {
                    Args.OldStartingIndex = nIndex;
                    hr = OnCollectionChanged(&Args);
                    if(SUCCEEDED(hr))
                    {
                        hr = XRValueCollectionT<IXRList, ItemType>::RemoveItemImpl(nIndex);
                    } 
                }
            }
        }

        FreeXRValue(&RemovedItem);
        return hr;
    }

    HRESULT STDMETHODCALLTYPE SetItemImpl(int nIndex, XRValue* pValue)
    {
        if (m_IsBusy)
        {
            return E_BUSY;
        }

        HRESULT hr = S_OK;
        XRCollectionChangedCustomEventArgs Args;
        XRValue RemovedItem;
        XRPtr<IXRList> pOldItems;
        XRPtr<IXRList> pNewItems;
        hr = XRObject<XRValueCollection<ItemType>>::CreateInstance(&pOldItems);
        if (FAILED(hr))
        {
            goto Exit;
        }

        hr = XRObject<XRValueCollection<ItemType>>::CreateInstance(&pNewItems);
        if (FAILED(hr))
        {
            goto Exit;
        }

        hr = _XRValueCollectionBaseT::GetItem(nIndex, &RemovedItem);
        if (SUCCEEDED(hr))
        {
            hr = XRValueCollectionT<IXRList, ItemType>::SetItemImpl(nIndex, pValue);
            if (SUCCEEDED(hr))
            {
                BuildCollectionChangedCustomEventArgs(&Args, XRCollectionChangeAction_Replace);
                Args.pOldItems = pOldItems;
                Args.pNewItems = pNewItems;

                hr = pOldItems->Add(&RemovedItem);
                if (SUCCEEDED(hr))
                {
                    hr = pNewItems->Add(pValue);
                    if (SUCCEEDED(hr))
                    {
                        Args.NewStartingIndex = nIndex;
                        hr = OnCollectionChanged(&Args);
                    }
                }
            }
        }

    Exit:
        FreeXRValue(&RemovedItem);
        return hr;
    }

    virtual HRESULT STDMETHODCALLTYPE OnCollectionChanged(XRCollectionChangedCustomEventArgs* pArgs)
    {
        if (!m_pCollectionChangedEvent)
        {
            return E_POINTER;
        }

        m_IsBusy = true;
        HRESULT hr = m_pCollectionChangedEvent->Raise(this, pArgs);
        m_IsBusy = false;

        return hr;
    }

private:
    static void BuildCollectionChangedCustomEventArgs(XRCollectionChangedCustomEventArgs* pArgs, XRCollectionChangeAction Action)
    {
        if (pArgs)
        {
            ZeroMemory(pArgs, sizeof(XRCollectionChangedCustomEventArgs));
            pArgs->Action = Action;
            pArgs->NewStartingIndex = -1;
            pArgs->OldStartingIndex = -1;
        }
    }

private:
    /// <summary>
    // true when the calling stack is in a CollectionChanged event handler.
    /// </summary>
    bool m_IsBusy;

    /// <summary>
    /// The collection changed event.
    /// </summary>
    IXRCustomEvent<XRCollectionChangedCustomEventArgs, IXRNotifyCollectionChanged> *m_pCollectionChangedEvent;
};

