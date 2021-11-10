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

//-------------------------------------------------------------------------------------------------
// XRObject
// 
// This is a simple wrapper class that implements the IUnknown portion of an object 
// at the point of creation.
//
// Objects that use this class must implement a QI_MAP.  There are macros
// declared below that assist in this.
//
// For the XRCustomUserControl, implementing a QI_MAP is optional as the 
// underlying class will implement one for you.  If you DO need to add extra interfaces
// to the QI map, make sure that you CHAIN the QI mapping to the base class.
//
// For example if you want to assure that a given IXRDependencyObject IS implemented 
// via YOUR concrete class you would add a map like this:
//
//
//    BEGIN_QI_MAP()
//        XR_MAPPING(YourConcreteObject)      // Allows a safe way to get back to this implementation from an arbitrary pointer.
//        QI_CHAIN(XRCustomUserControlImpl)   // Chain into the base implementation of the XRCustomUserControlImpl
//    END_QI_MAP()
//
// 
//
//


template<typename Base>
class XRObject : public Base
{
    private:
        long m_lRefCount;

        XRObject() 
        {
            m_lRefCount = 0;
        }

        ~XRObject()
        {

        }

    public:

        // The IUnknown::AddRef implementation
        //
        ULONG __stdcall AddRef() 
        { 
            return InterlockedIncrement(&m_lRefCount);
        }

        // The IUnknown::Release implementation
        //
        ULONG __stdcall Release() 
        { 
            ULONG l = InterlockedDecrement(&m_lRefCount);

            if( l == 0 )
            {
                delete this;
            }

            return l;
        }

        // The IUnknown::QueryInterface implementation
        //
        HRESULT __stdcall QueryInterface(const IID& riid,void ** ppvObj) 
        { 
            HRESULT hr = E_FAIL;
            if(ppvObj)
            {
                *ppvObj = NULL;

                if(riid == __uuidof(IUnknown))
                {
                    *ppvObj = static_cast<Base*>(this);
                    hr = S_OK;
                }
                else
                {
                    hr = Base::_QIMap_(riid, ppvObj);
                }

                if(SUCCEEDED(hr))
                {
                    AddRef();
                }
            }
            else
            {
                hr = E_POINTER;
            }
            return hr;
        }

        // Create an instance of the object
        //
        static HRESULT CreateInstance(XRObject<Base> ** pp)
        {
            HRESULT hr = E_FAIL;

            if(pp)
            {
                *pp = NULL;

                XRObject<Base> * pNew = new XRObject<Base>();

                if(pNew)
                {
                    // Internal init is a good place to do initialization
                    // that could fail.
                    __if_exists(Base::InternalInit)
                    {
                        hr = pNew->InternalInit();

                        if(SUCCEEDED(hr))
                        {
                            pNew->AddRef();
                            *pp = pNew;
                            pNew = NULL;
                        }
                    }

                    __if_not_exists(Base::InternalInit)
                    {
                        pNew->AddRef();
                        *pp = pNew;
                        pNew = NULL;
                        hr = S_OK;
                    }

                    // Make sure no leak if Init failed.
                    if (pNew)
                    {
                        delete pNew;
                        pNew = NULL;
                    }
                }
                else
                {
                    hr = E_OUTOFMEMORY;
                }
            }
            else
            {
                hr = E_POINTER;
            }

            return hr;
        }

        // This version creates object as Base class.
        // It doesn't require __uuid of Base, but the generic one does.
        //
        static HRESULT CreateInstance(Base ** ppBase)
        {
            HRESULT hr = E_FAIL;
            XRObject<Base>* pObject = NULL;

            if (ppBase)
            {
                *ppBase = NULL;
                hr = XRObject<Base>::CreateInstance(&pObject);
                if (SUCCEEDED(hr) && pObject)
                {
                    *ppBase = pObject;
                }
            }
            else
            {
                hr = E_INVALIDARG;
            }

            return hr;
        }

        // This version allows a generic wrapper type of class 
        // to create instances of objects as one of the 
        // implemented interfaces.  This is an analog to
        // how COM class factories work.
        // 
        template<typename As>
        static HRESULT CreateInstance(As ** ppRet)
        {
            HRESULT hr = S_OK;

            XRObject<Base> * pNew = NULL;
            hr = XRObject<Base>::CreateInstance(&pNew);

            if(SUCCEEDED(hr) && pNew)
            {
                hr = pNew->QueryInterface(__uuidof(As),(void**)ppRet);
                pNew->Release();
            }
            
            return hr;
        }

};



// Define the begining of the QI map in this object
#define BEGIN_QI_MAP() \
    public:\
    HRESULT _QIMap_(REFIID riid, void** ppvObj) \
    { \
        HRESULT hr = E_FAIL;\

// Redirect the QI Map into specific object without declaring any QI mappings in this object
#define REDIRECT_QI_MAP(ClassName) \
    public:\
    HRESULT _QIMap_(REFIID riid, void** ppvObj) \
    { \
        return ClassName::_QIMap_(riid,ppvObj); \
    }\
    private:


// Bounce the chain into another object
#define QI_MAP_CHAIN(Base) \
        if(SUCCEEDED(Base::_QIMap_(riid,ppvObj)))\
        {\
            hr = S_OK;\
        } else

// Use the uuid declared as part of the interface definition
// to resolve the interface
#define QI_MAP_INTERFACE(iface) \
        if (riid == __uuidof(iface)) \
        { \
            *ppvObj = static_cast<iface*>(this); \
            hr = S_OK; \
        } else

// Use an externally declared IID to associate the 
// interface with the object
#define QI_MAP_IID(iid, iface) \
        if (riid == iid) \
        { \
            *ppvObj = static_cast<iface*>(this); \
            hr = S_OK; \
        } else

// End the QI map in this object
#define END_QI_MAP()\
     { /* Empty Else Statement */} \
     return hr; }\
     private:

// Shortcut for mapping identity without other interfaces
#define QI_IDENTITY_MAPPING(Self,Base) \
    BEGIN_QI_MAP()\
        QI_MAP_INTERFACE(Self)\
        QI_MAP_CHAIN(Base)\
    END_QI_MAP()

