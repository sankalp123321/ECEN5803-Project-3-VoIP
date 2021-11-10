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
#include <XRPtr.h>
#include <XRCustomEvent.h>
#include <vector.hxx>
#include <hash_map.hxx>
#include <string.hxx>

// Forward declaration
class iXRPropertyBagBinding;

/// <summary>
/// This XRPropertyBag is used to provide life time management and property changed event management.
/// Users still need to implement GetValue/SetValue by themselves.
/// TPropertyBag is a better helper class that implements GetValue/SetValue as well.
/// </summary>
class __declspec(novtable) __declspec(uuid("{F604D973-DAFB-434f-B7A2-6F3B305427F0}")) XRPropertyBag : public IXRPropertyBag
{
    BEGIN_QI_MAP()
        QI_MAP_INTERFACE(XRPropertyBag)
        QI_MAP_INTERFACE(IXRPropertyBag)
    END_QI_MAP()

protected:
    XRPropertyBag() {};

public:
    virtual ~XRPropertyBag() {};

    /// <summary>
    /// This is implementation of IXRPropertyBag
    /// </summary>
    virtual HRESULT STDMETHODCALLTYPE GetPropertyChangedEvent(__out IXRCustomEvent<XRPropertyChangedCustomEventArgs, IXRPropertyBag> ** ppEvent)
    {
        if (!ppEvent)
        {
            return E_POINTER;
        }

        HRESULT hr = E_FAIL;
        if (!m_pPropertyChangedEvent)
        {
            m_pPropertyChangedEvent.Attach(CreateCustomEvent<XRPropertyChangedCustomEventArgs, IXRPropertyBag>());
        }

        if (m_pPropertyChangedEvent)
        {
            *ppEvent = m_pPropertyChangedEvent;
            (*ppEvent)->AddRef();
            hr = S_OK;
        }

        return hr;
    }

protected:
    /// <summary>
    /// The property changed event.
    /// </summary>
    XRPtr<IXRCustomEvent<XRPropertyChangedCustomEventArgs, IXRPropertyBag>> m_pPropertyChangedEvent;
};

/// <summary>
/// This class is a smart critical section, which create a critical section at constructor and delete it in destructor.
/// </summary>
class XRAutoCriticalSection
{
public:
    XRAutoCriticalSection()
    {
        InitializeCriticalSection(&m_CriticalSection);
    }

    ~XRAutoCriticalSection()
    {
        DeleteCriticalSection(&m_CriticalSection);
    }

    operator CRITICAL_SECTION&()
    {
        return m_CriticalSection;
    }

    LPCRITICAL_SECTION operator&()
    {
        return &m_CriticalSection;
    }

private:
    CRITICAL_SECTION m_CriticalSection;
};

#ifdef SHIP_BUILD
#define _xr_propertybag_error(...)
#else
void inline _xr_propertybag_error(const char * pMethod,HRESULT hr,const char * szDescription = "")
{
    UNREFERENCED_PARAMETER(pMethod);
    UNREFERENCED_PARAMETER(hr);
    UNREFERENCED_PARAMETER(szDescription);

    // If you are at this point looking at an error you are using a
    // TPropertyBag incorrectly.  This is bad.

    #ifdef ERRORMSG
    ERRORMSG(1, (L"HR=0x%08x PropertyBag Error (%S) in %S", hr,szDescription,pMethod));
    #endif
    DebugBreak();
}
#endif

/// <summary>
/// This is abstract of TBoundProperty/TBoundPointerProperty, and is mainly used to retrieve/put a value of a property by XAMLRuntime.
/// </summary>
interface iXRPropertyBinding
{
public:
    /// <summary>
    /// Initialize the property and attach the owner property bag. Called by TPropertyBag.
    /// </summary>
    /// <param name="pPropertyBag">[in] The owner property bag of the property.</param>
    virtual void STDMETHODCALLTYPE SetOwner(iXRPropertyBagBinding* pPropertyBag) = 0;

    /// <summary>
    /// Get the value of this property. Called by XAMLRuntime.
    /// </summary>
    /// <param name="pValue">[out] The value of the property.</param>
    virtual HRESULT STDMETHODCALLTYPE Get(XRValue * pValue) = 0;

    /// <summary>
    /// Set the value of this property. Called by XAMLRuntime.
    /// </summary>
    /// <param name="pValue">[in] The value to be set to the property.</param>
    virtual HRESULT STDMETHODCALLTYPE Set(XRValue * pValue) = 0;
};

/// <summary>
/// The base class of all bound property. Contains the basic logic of bould property.
/// It implements iXRPropertyBinding and has ability to raise property changed event.
/// </summary>
/// <param name="PropertyType">The actual type of the property</param>
/// <param name="PropertyType">The store type of the property</param>
/// <remark>
/// PropertyType and StoreType are the same in most cases, but if the PropertyType is a pointer or a string,
/// the StoreType can be its smart type such as XRPtr or ce::auto_bstr to auto AddRef/allocate or Release/Free its reference/memory.
/// </remark>
template<typename PropertyType, typename StoreType>
class TBoundPropertyBase : public iXRPropertyBinding
{
public:
    TBoundPropertyBase() : m_pBag(NULL) {}

    ~TBoundPropertyBase() {}

    void STDMETHODCALLTYPE SetOwner(iXRPropertyBagBinding * pBag)
    {
        // Weak reference. Property lives in PropertyBag, no need to count reference.
        //
        m_pBag  = pBag;
    }

    /// <summary>
    /// Set the value of this property. Called by XAMLRuntime.
    /// </summary>
    /// <param name="pValue">[in] The value to be set to the property.</param>
    virtual HRESULT STDMETHODCALLTYPE Set(XRValue * pValue)
    {
        HRESULT hr = S_OK;
        StoreType value;

        if (!pValue)
        {
            return E_POINTER;
        }

        hr = pValue->GetValue(&value);
        if (S_OK != hr)
        {
           goto Error;
        }
        Set(value);
    Error:
            return hr;
    }

    /// <summary>
    /// Get the value of this property. Called by XAMLRuntime.
    /// </summary>
    /// <param name="pValue">[out] The value of the property.</param>
    virtual HRESULT STDMETHODCALLTYPE Get(XRValue * pValue)
    {
        if (!pValue)
        {
            return E_POINTER;
        }

        pValue->SetValue(m_Value);
        return S_OK;
    }

    /// <summary>
    /// Returns the actual value that is wrapped by the bound property.
    /// </summary>
    /// <remark>
    /// This doesn't count reference and doesn't allocate memory for string as this returns "itself".
    /// </remark>
    PropertyType Get()
    {
        return m_Value;
    }

    /// <summary>
    /// Set value and wrap it to the bound property.
    /// </summary>
    /// <remark>
    /// This counts reference and allocates memory for string if the StoreType is smart pointer or auto_bstr.
    /// </remark>
    void Set(const PropertyType& value)
    {
        m_Value = value;
        HRESULT hr = RaisePropertyChangedEvent();
        if (FAILED(hr))
        {
            _xr_propertybag_error(__FUNCTION__, hr, "Cannot raise the property changed event.");
        }
    }

protected:
    HRESULT RaisePropertyChangedEvent()
    {
        if (!m_pBag)
        {
            return E_POINTER;
        }

        IXRCustomEvent<XRPropertyChangedCustomEventArgs, IXRPropertyBag> * pBagPropertyChangedEvent = NULL;

        // Get the property changed event.
        //
        HRESULT hr = m_pBag->GetPropertyChangedEvent(&pBagPropertyChangedEvent);
        if (SUCCEEDED(hr) && pBagPropertyChangedEvent)
        {
            XRPropertyChangedCustomEventArgs Args;

            // Get the property name from the property bag. Property name is only stored in the property meta data table to save memory.
            //
            Args.PropertyName = (const WCHAR*)m_pBag->GetPropertyName(this);

            // Raise the event.
            //
            hr = pBagPropertyChangedEvent->Raise(m_pBag, &Args);

            pBagPropertyChangedEvent->Release();
        }

        return hr;
    }

protected:
    /// <summary>
    /// Stores the value of the property.
    /// The value can be a smart pointer such as XRPtr or ce::auto_bstr to auto AddRef/allocate or Release/Free its reference/memory.
    /// </summary>
    StoreType               m_Value;

    /// <summary>
    /// The owner property bag of this property.
    /// </summary>
    iXRPropertyBagBinding*  m_pBag;
};

/// <summary>
/// Bound property used for wrapping common type and automatically implements the GetValue/SetValue logic of property bag.
/// StoreType and PropertyType are the same in this bound property, which can only be used for common type that doesn't require reference counting.
/// </summary>
template<typename PropertyType>
class TBoundProperty : public TBoundPropertyBase<PropertyType, PropertyType>
{
public:
    /// <summary>
    /// Set value and wrap it to the bound property.
    /// </summary>
    const PropertyType& operator=(const PropertyType& value)
    {
        Set(value);
        return m_Value;
    }

    /// <summary>
    /// Returns the actual value that is wrapped by the bound property.
    /// This makes the property can be implicitly converted to the actual property type.
    /// </summary>
    operator PropertyType() const
    {
        return m_Value;
    }

    // The following operators are returning m_Value's directly.
    //

    TBoundProperty* operator&()
    {
        return &m_Value;
    }

    bool operator==(TBoundProperty& value)
    {
        return (m_Value == value.m_Value);
    }

    bool operator==(PropertyType& value)
    {
        return (m_Value == value);
    }

    bool operator!=(TBoundProperty& value)
    {
        return (m_Value != value.m_Value);
    }

    bool operator!=(PropertyType& value)
    {
        return (m_Value != value);
    }

    bool operator<(TBoundProperty& value)
    {
        return (m_Value < value.m_Value);
    }

    bool operator<(PropertyType& value)
    {
        return (m_Value < value);
    }

    bool operator>(TBoundProperty& value)
    {
        return (m_Value > value.m_Value);
    }

    bool operator>(PropertyType& value)
    {
        return (m_Value > value);
    }

    bool operator<=(TBoundProperty& value)
    {
        return (m_Value <= value.m_Value);
    }

    bool operator<=(PropertyType& value)
    {
        return (m_Value <= value);
    }

    bool operator>=(TBoundProperty& value)
    {
        return (m_Value >= value.m_Value);
    }

    bool operator>=(PropertyType& value)
    {
        return (m_Value >= value);
    }
};

/// <summary>
/// Bound property used for wrapping BSTR. It's a specialization of common TBoundProperty
/// StoreType is ce::auto_bstr in this bound property, which can be used to automatically allocate/release memory of string.
/// </summary>
/// <remark>
/// Client need to allocate BSTR but don't need to release it.
/// </remark>
template<>
class TBoundProperty<BSTR> : public TBoundPropertyBase<BSTR, ce::auto_bstr>
{
public:
    /// <summary>
    /// Set value and wrap it to the bound property.
    /// </summary>
    /// <remark> This doesn't allocate memory. Please allocate BSTR before use this.</remark>
    const BSTR operator=(const BSTR value)
    {
        TBoundPropertyBase::Set(value);
        return m_Value;
    }

    /// <summary>
    /// Set(XRValue*) hides base::Set(const BSTR&), so redefine here.
    /// </summary>
    void Set(const BSTR value)
    {
        return TBoundPropertyBase::Set(value);
    }

    /// <summary>
    /// Returns the actual value that is wrapped by the bound property.
    /// This makes the property can be implicitly converted to the actual property type.
    /// </summary>
    /// <remark>
    /// This doesn't allocate memory as this returns "itself".
    /// </remark>
    operator BSTR() const
    {
        return m_Value;
    }

    /// <summary>
    /// Returns the actual value that is wrapped by the bound property.
    /// </summary>
    /// <remark>
    /// This doesn't count reference and doesn't allocate memory for string as this returns "itself".
    /// </remark>
    BSTR Get()
    {
        return m_Value;
    }

    // The following operators are returning m_Value's directly.
    //

    BSTR* operator&()
    {
        return &m_Value;
    }

    bool operator==(BSTR value)
    {
        return (_wcsicmp(m_Value,value) == 0);
    }

    bool operator==(TBoundProperty& value)
    {
        return (_wcsicmp(m_Value,value.m_Value) == 0);
    }

    bool operator!=(BSTR value)
    {
        return (_wcsicmp(m_Value,value) != 0);
    }

    bool operator!=(TBoundProperty& value)
    {
        return (_wcsicmp(m_Value,value.m_Value) != 0);
    }

    bool operator<(BSTR value)
    {
        return (_wcsicmp(m_Value,value) < 0);
    }

    bool operator<(TBoundProperty& value)
    {
        return (_wcsicmp(m_Value,value.m_Value) < 0);
    }

    bool operator>(BSTR value)
    {
        return (_wcsicmp(m_Value,value) > 0);
    }

    bool operator>(TBoundProperty& value)
    {
        return (_wcsicmp(m_Value,value.m_Value) > 0);
    }

    bool operator<=(BSTR value)
    {
        return (_wcsicmp(m_Value,value) <= 0);
    }

    bool operator<=(TBoundProperty& value)
    {
        return (_wcsicmp(m_Value,value.m_Value) <= 0);
    }

    bool operator>=(BSTR value)
    {
        return (_wcsicmp(m_Value,value) >= 0);
    }

    bool operator>=(TBoundProperty& value)
    {
        return (_wcsicmp(m_Value,value.m_Value) >= 0);
    }

    /// <summary>
    /// Set the value of this property. Called by XAMLRuntime.
    /// </summary>
    /// <param name="pValue">[in] The value to be set to the property.</param>
    virtual HRESULT STDMETHODCALLTYPE Set(XRValue * pValue)
    {
        BSTR bstrVal = NULL;
        HRESULT hr = S_OK;
        if (!pValue)
        {
            return E_POINTER;
        }

        hr = pValue->GetValue(&bstrVal);
        if (SUCCEEDED(hr))
        {
            Set(bstrVal);
        }

        return hr;
    }

    /// <summary>
    /// Get the value of this property. It overrides base's. Called by XAMLRuntime.
    /// </summary>
    /// <param name="pValue">[out] The value of the property.</param>
    /// <remark>This allocates a new bstr and passes it to the XRValue.</remark>
    virtual HRESULT STDMETHODCALLTYPE Get(XRValue * pValue)
    {
        if (!pValue)
        {
            return E_POINTER;
        }

        BSTR Value = NULL;
        if (m_Value)
        {
            Value = SysAllocString(m_Value);
        }

        // Pack as VTYPE_BSTR, caller should release it.
        pValue->SetValue(Value, true/*NeedFreeValuePointer*/);
        return S_OK;
    }
};

/// <summary>
/// Bound property used for wrapping IUnknown-derived pointer.
/// StoreType is XRPtr in this bound property, which can be used to automatically count the reference.
/// </summary>
template<typename PropertyType>
class TBoundPointerProperty : public TBoundPropertyBase<PropertyType*, XRPtr<PropertyType>>
{
public:
    TBoundPointerProperty() {}

    ~TBoundPointerProperty() {}

    /// <summary>
    /// Set value and wrap it to the bound property.
    /// </summary>
    /// <remark>This will AddRef in Set since the StoreType is XRPtr.</remark>
    const PropertyType* operator=(const PropertyType* value)
    {
        // This tells compiler to call Set(const PropertyType& value), not Set(XRValue* pValue).
        //
        typedef PropertyType* BasePropertyType;
        Set((BasePropertyType)value);
        return m_Value;
    }

    /// <summary>
    /// Returns the actual value that is wrapped by the bound property.
    /// This makes the property can be implicitly converted to the actual property type.
    /// </summary>
    /// <remark>
    /// This doesn't AddRef as this returns "itself".
    /// </remark>
    operator PropertyType*() const
    {
        return m_Value;
    }

    /// <summary>
    /// Return the value of this property. Get(XRValue*) hides base's Get().
    /// </summary>
    PropertyType* Get()
    {
        return m_Value;
    }

    // The following operators are returning m_Value's directly.
    //

    PropertyType** operator&()
    {
        return m_Value.operator&();
    }

    PropertyType* operator->() const
    {
        return m_Value.operator->();
    }

    template<typename _InterfacePtr> bool operator==(_InterfacePtr p)
    {
        return m_Value.operator==(p);
    }

    template<typename _InterfacePtr> bool operator!=(_InterfacePtr p)
    {
        return m_Value.operator!=(p);
    }

    template<typename _InterfacePtr> bool operator<(_InterfacePtr p)
    {
        return m_Value.operator<(p);
    }

    template<typename _InterfacePtr> bool operator>(_InterfacePtr p)
    {
        return m_Value.operator>(p);
    }

    template<typename _InterfacePtr> bool operator<=(_InterfacePtr p)
    {
        return m_Value.operator<=(p);
    }

    template<typename _InterfacePtr> bool operator>=(_InterfacePtr p)
    {
        return m_Value.operator>=(p);
    }

    /// <summary>
    /// Get the value of this property. It overrides base's. Called by XAMLRuntime.
    /// </summary>
    /// <param name="pValue">[out] The value of the property.</param>
    /// <remark>This AddRef to the pointer.</remark>
    virtual HRESULT STDMETHODCALLTYPE Get(XRValue * pValue)
    {
        if (!pValue)
        {
            return E_POINTER;
        }

        HRESULT hr = TBoundPropertyBase::Get(pValue);
        if (m_Value)
        {
            m_Value.AddRef();
            pValue->ShouldFreeValuePointer = true;
        }

        return hr;
    }
};

/// <summary>
/// The interface that is used by TBoundProperty to retrieve its property name from the static meta data table.
/// </summary>
class __declspec(novtable) iXRPropertyBagBinding : public IXRPropertyBag
{
public:
    virtual const WCHAR* STDMETHODCALLTYPE GetPropertyName(iXRPropertyBinding * pBinder) = 0;
};

class __declspec(uuid("{9F0AF9DD-4618-495d-99FF-77445225832F}")) _template_TPropertyBag;
extern "C" const GUID __declspec(selectany) IID_TPropertyBag = __uuidof(_template_TPropertyBag);

/// <summary>
/// Template helper of IXRPropertyBag. It automatically handles GetValue/SetValue/PropertyChangedEvent logic.
/// Users only need to register all properties of this property bag, and then don't need to care about those logic any more.
/// </summary>
/// <param name="Derived">The final data class. This is used to make sure the static meta data tables are different from each other in all the property bags.</param>
template<typename Derived>
class __declspec(novtable) TPropertyBag : public iXRPropertyBagBinding
{
    BEGIN_QI_MAP()
        QI_MAP_INTERFACE(Derived)
        QI_MAP_INTERFACE(TPropertyBag)
        QI_MAP_INTERFACE(IXRPropertyBag)
    END_QI_MAP()

protected:
    TPropertyBag() : m_CurrentPropertyCount(0) {}

public:
    ~TPropertyBag() {}

    static HRESULT CreateInstance(__out Derived** ppBag)
    {
        return XRObject<Derived>::CreateInstance(ppBag);
    }

    /// <summary>
    /// Prepare to register bound properties.
    /// </summary>
    /// <returns>
    /// HRESULT indicating success or failure
    /// </returns>
    HRESULT BeginRegisterProperties()
    {
        // If the properties meta table is not initialized yet, Enter the critical section and initialize the table.
        if (!s_AddProperties)
        {
            EnterCriticalSection(&s_InitializationCriticalSection);

            // After the critical section is entered, if the properties meta table has been initialized in other thread, we should leave.
            if (s_AddProperties)
            {
                LeaveCriticalSection(&s_InitializationCriticalSection);
            }
            s_AddProperties = true;
        }
        return S_OK;
    }

    /// <summary>
    /// Finish registering bound properties.
    /// </summary>
    /// <returns>
    /// HRESULT indicating success or failure
    /// </returns>
    HRESULT EndRegisterProperties()
    {
        // If we are in the process of intializing properties meta data hash_map, we should mark the map intialized and leave the critical section.
        if (!s_AddProperties)
        {
            s_AddProperties = false;
            LeaveCriticalSection(&s_InitializationCriticalSection);
        }

        return S_OK;
    }

    /// <summary>
    /// Register a bound property to this property bag.
    /// </summary>
    /// <param name="PropertyName">[in] The name of the property to be registered.</param>
    /// <param name="Binder">[in] The corresponding bound property of this property bag.</param>
    /// <returns>
    /// HRESULT indicating success or failure
    /// </returns>
    /// <remark>
    /// For each TPropertyBag-Derived instance, the registeration order of all properties should always be the same.
    /// </remark>
    HRESULT RegisterBoundProperty(const ce::wstring& PropertyName, iXRPropertyBinding & Binder)
    {
        bool IsPropertytoAdd = true;
        // If the meta map is not initialized, then add the property to the map.

        if (s_AddProperties)
        {
            if(PropertyName.empty())
            {
                return E_INVALIDARG;
            }
            // This property not exists add to s_PropertyNames
            ce::vector<ce::wstring>::iterator it = s_PropertyNames.begin();

            while(it != s_PropertyNames.end())
            {
                if(!it->compare(PropertyName))
                {
                    IsPropertytoAdd = false;
                    break;
                }
                it++;
            }

            if(IsPropertytoAdd == true)
            {
                s_PropertyNames.push_back(PropertyName);
            }

            if(m_PropertiesMap.find(PropertyName) != m_PropertiesMap.end())
            {
                return E_INVALIDARG;
            }
            *m_PropertiesMap[PropertyName] = &Binder;
            Binder.SetOwner(this);
        }
        else
        {
            return E_FAIL;
        }
        return S_OK;
    }

    virtual const WCHAR* STDMETHODCALLTYPE GetPropertyName(iXRPropertyBinding * pBinder)
    {
        ce::hash_map<ce::wstring,iXRPropertyBinding*>::iterator it = m_PropertiesMap.begin();
        while (it != m_PropertiesMap.end())
        {
            if (it->second == pBinder)
            {
                return it->first.c_str();
            }

            it++;
        }

        // We shouldn't get here. The given property is not registered.
        //
        DebugBreak();

        return L"";
    }

    /// <summary>
    /// This is implementation of IXRPropertyBag
    /// </summary>
    virtual HRESULT STDMETHODCALLTYPE GetValue(__in const WCHAR* PropertyName, __out XRValue * pValue)
    {
        HRESULT hr = E_FAIL;
        iXRPropertyBinding* pBinder = GetPropertyByName(PropertyName);
        if (pBinder != NULL)
        {
            hr = pBinder->Get(pValue);
        }

        return hr;
    }

    /// <summary>
    /// This is implementation of IXRPropertyBag
    /// </summary>
    virtual HRESULT STDMETHODCALLTYPE SetValue(__in const WCHAR* PropertyName, __in XRValue* pValue)
    {
        HRESULT hr = E_FAIL;
        iXRPropertyBinding* pBinder = GetPropertyByName(PropertyName);
        if (pBinder != NULL)
        {
            hr = pBinder->Set(pValue);
        }

        return hr;
    }

    /// <summary>
    /// This is implementation of IXRPropertyBag
    /// </summary>
    virtual HRESULT STDMETHODCALLTYPE GetPropertyChangedEvent(__out IXRCustomEvent<XRPropertyChangedCustomEventArgs, IXRPropertyBag>** ppEvent)
    {
        if (!ppEvent)
        {
            return E_POINTER;
        }

        HRESULT hr = E_FAIL;
        if (!m_pPropertyChangedEvent)
        {
            m_pPropertyChangedEvent.Attach(CreateCustomEvent<XRPropertyChangedCustomEventArgs, IXRPropertyBag>());
        }

        if (m_pPropertyChangedEvent)
        {
            *ppEvent = m_pPropertyChangedEvent;
            (*ppEvent)->AddRef();
            hr = S_OK;
        }

        return hr;
    }

    iXRPropertyBinding* GetPropertyByName(__in const ce::wstring& PropertyName)
    {
        iXRPropertyBinding* pResult = NULL;
        ce::hash_map<ce::wstring,iXRPropertyBinding*>::iterator it = m_PropertiesMap.find(PropertyName);

        if (it != m_PropertiesMap.end())
        {
            pResult = it->second;
        }

        return pResult;
    }

protected:
    /// <summary>
    /// This is the meta data table which stores all property names.
    /// The key is property name and the value is the property.
    /// </summary>
    ce::hash_map<ce::wstring,iXRPropertyBinding*> m_PropertiesMap;

    /// <summary>
    /// Stores all property names for property name look up.
    /// </summary>
    static ce::vector<ce::wstring>       s_PropertyNames;

    /// <summary>
    /// Indicates whether s_PropertiesMap is initialized.
    /// </summary>
    static bool                         s_AddProperties;

    /// <summary>
    /// This CriticalSection is used to safely initialize s_PropertyNames;
    /// </summary>
    static XRAutoCriticalSection        s_InitializationCriticalSection;

    /// <summary>
    /// This is the value table of all properties. Values are stored in the registration order.
    /// </summary>
    ce::vector<iXRPropertyBinding*>         m_ValueTable;

    /// <summary>
    /// This interger is used to count the properties for registration.
    /// </summary>
    int                                 m_CurrentPropertyCount;

    /// <summary>
    /// The property changed event.
    /// </summary>
    XRPtr<IXRCustomEvent<XRPropertyChangedCustomEventArgs, IXRPropertyBag>> m_pPropertyChangedEvent;
};

template<typename Derived>
bool TPropertyBag<Derived>::s_AddProperties = false;

template<typename Derived>
ce::vector<ce::wstring> TPropertyBag<Derived>::s_PropertyNames;

template<typename Derived>
XRAutoCriticalSection TPropertyBag<Derived>::s_InitializationCriticalSection;

