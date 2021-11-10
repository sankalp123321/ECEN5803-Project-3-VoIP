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

#ifndef DEFINE_XR_IID
#include <XamlRuntime.h>
#endif

#ifdef SHIP_BUILD 
#define _xr_ptr_error(...) 
#else
void inline _xr_ptr_error(const char * pMethod,HRESULT hr,const char * szDescription = "")
{
    UNREFERENCED_PARAMETER(pMethod);
    UNREFERENCED_PARAMETER(hr);
    UNREFERENCED_PARAMETER(szDescription);

    // If you are at this point looking at an error you are using a
    // XRPtr incorrectly.  This is bad.

    #ifdef ERRORMSG
    ERRORMSG(1, (L"HR=0x%08x XRPtr Error (%S) in %S", hr,szDescription,pMethod));
    #endif
    DebugBreak();
}
#endif



//
//  The following template is borrowed from the ATL to prevent
//  the explicit calling of AddRef and Release on a pointer 
//  returned by operator->  this is a very dangerous thing to
//  do because you will circumvent the lifetime managment protection 
//  offered by using the XRPtr class in the first place.
//
#pragma warning(push)
#pragma warning(disable: 4510 4610 4624)
template <class T>
class _NoAddRefReleaseOnXRPtr : public T
{
private:
    // The idea is that by re-defining these items in the v-table as private
    // you get a build error.  
    //
    unsigned long __stdcall AddRef()=0;
    unsigned long __stdcall Release()=0;
};
#pragma warning(pop)


template<typename Interface,typename Disambiguation = IUnknown> class XRPtr 
{
public:

    // Constructs a smart-pointer from any interface pointer.
    //
    template<typename _InterfacePtr> XRPtr(const _InterfacePtr& p)
        : m_pInterface(NULL)
    {
        if (p) 
        {
            HRESULT hr = _QueryInterface(p);

            if (FAILED(hr) && (hr != E_NOINTERFACE)) 
            {
                // _QueryInterface really should only return S_OK and
                // E_NOINTERFACE at this point.
                _xr_ptr_error(__FUNCTION__,hr,"Unexpected Error.");

                // For properly constructed code this isn't likely to 
                // cause a major issue.  Because the constructor CAN fail
                // if the inbound interface doesn't support the interface
                // implemented by this container it is important to ALWAYS
                // check the pointer after construction!
            }
        }
    }

    // Disable conversion using XRPtr* specialization of
    // template<typename _InterfacePtr> XRPtr(const _InterfacePtr& p)
    template<> explicit XRPtr(XRPtr* const & p)
    {
        if (p == NULL) 
        {
            // We are going to prevent the (imediate) crash, but 
            // the user should know that something went wrong.
            _xr_ptr_error(__FUNCTION__,E_POINTER);
        }
        else 
        {
            m_pInterface = p->m_pInterface;
            AddRef();
        }
    }

    // Default constructor.
    //
    XRPtr() : m_pInterface(NULL)
    {
    }

    // This constructor is provided to allow NULL assignment. It will issue
    // an error if any value other than null is assigned to the object.
    //
    XRPtr(int null) : m_pInterface(NULL)
    {
        if (null != 0) 
        {
            // The highly uneducated construction of something other than 0 (NULL) to
            // this object is just really wrong.  In addition, why whould you even 
            // WANT to construct this object this way when you can just use the default
            // constructor.  This error is not fatal, but the user should be aware of 
            // the issue.
            _xr_ptr_error(__FUNCTION__,E_POINTER,"Illegal construction of object.");
        }
    }

    // Copy the pointer and AddRef().
    //
    XRPtr(const XRPtr& cp) : m_pInterface(cp.m_pInterface)
    { 
        _AddRef(); 
    }

    // Saves the interface.
    //
    XRPtr(Interface* pInterface) : m_pInterface(pInterface)
    { 
        _AddRef(); 
    }

    // Copies the pointer. If fAddRef is TRUE, the interface will
    // be AddRef()ed.
    //
    XRPtr(Interface* pInterface, bool fAddRef) : m_pInterface(pInterface)
    {
        if (fAddRef) 
        {
            _AddRef();
        }
    }

    // Queries for interface.
    // Any existing interface is released.
    //
    template<typename _InterfacePtr> XRPtr& operator=(const _InterfacePtr& p)
    {
        if(p)
        {
            HRESULT hr = _QueryInterface(p);

            if (FAILED(hr) && (hr != E_NOINTERFACE)) 
            {
                // _QueryInterface really should only return S_OK and
                // E_NOINTERFACE at this point
                _xr_ptr_error(__FUNCTION__,hr,"Unexpected Error During Assignment");
            }
        }

        return *this;
    }

    // Set the interface.
    // Any existing interface is released.
    //
    XRPtr& operator=(Interface* pInterface)
    {
        if (m_pInterface != pInterface) 
        {
            Interface* pOldInterface = m_pInterface;

            m_pInterface = pInterface;

            _AddRef();

            if (pOldInterface != NULL) 
            {
                pOldInterface->Release();
            }
        }

        return *this;
    }

    // Copies and AddRef()'s the interface.
    // Any existing interface is released.
    //
    XRPtr& operator=(const XRPtr& cp)
    { 
        return operator=(cp.m_pInterface); 
    }

    // This operator is provided to permit the assignment of NULL to the class.
    // Any existing interface is released.
    // 
    XRPtr& operator=(int null)
    {
        if (null != 0) 
        {
            // Not fatal, but an error if the user was expecting 
            // other behavior.  Let them know...
            _xr_ptr_error(__FUNCTION__,E_POINTER);
        }

        return operator=(reinterpret_cast<Interface*>(NULL));
    }


    // If we still have an interface then Release() it. The interface
    // may be NULL if Detach() has previously been called, or if it was
    // never set.
    //
    ~XRPtr()
    { 
        _Release(); 
    }

    // Saves/sets the interface without AddRef()ing. This call
    // will release any previously acquired interface.
    //
    void Attach(Interface* pInterface)
    {
        _Release();
        m_pInterface = pInterface;
    }

    // Saves/sets the interface only AddRef()ing if fAddRef is TRUE.
    // This call will release any previously acquired interface.
    //
    void Attach(Interface* pInterface, bool fAddRef)
    {
        _Release();
        m_pInterface = pInterface;

        if(fAddRef) 
        {
            if (pInterface != NULL) 
            {
                static_cast<Disambiguation*>(pInterface)->AddRef();
            }
        }
    }

    // Returns the contained interface and relinquishes ownership
    // so that the returned interface will NOT be released by
    // this class.
    //
    Interface* Detach()
    {
        Interface* const old=m_pInterface;
        m_pInterface = NULL;
        return old;
    }

    // Return the interface. This value may be NULL.
    //
    operator Interface*() const
    { 
        return m_pInterface; 
    }

    // Returns the address of the interface pointer contained in this
    // class. This is useful when for using XamlRuntime API's like 
    // FindName and CreateObject.
    //
    Interface** operator&()
    {
        _Release();
        m_pInterface = NULL;
        return &m_pInterface;
    }


    // Allows this class to be used as the interface itself. Protecting 
    // against erroneously calling the native AddRef or Release on IUnknown.
    //
    _NoAddRefReleaseOnXRPtr<Interface>*  operator->() const
    { 
        if (m_pInterface == NULL) 
        {
            // See the error text...
            _xr_ptr_error(__FUNCTION__,E_POINTER,"You are about to dereference a NULL pointer!");
        }


        // Program won't crash here (if m_pInterface is NULL).. 
        //
        // BUT the next stament that tries to USE the returned value 
        // WILL cause a crash.
        // 
        // Use the m_pInterface v-table, but pretend that it is the 
        // v-table of the _NoAddRefReleaseOnXRPtr stand-in.  This 
        // prevents (at build time) the user from using a XRPtr 
        // and calling the ->AddRef() or ->Release() directly. 
        //
        // In almost ALL cases this is a really bad idea.  In the 
        // few cases where this is something that ~should~ be done
        // special code (calling attention to the special case) will have
        // to be written.  In the case of returning a pointer you should 
        // always use .Detach() to transfer ownership or .AddRef() when you 
        // want to keep your own reference.
        //
        return reinterpret_cast<_NoAddRefReleaseOnXRPtr<Interface>*>(m_pInterface);
    }

    // Compare two pointers
    //
    template<typename _InterfacePtr> bool operator==(_InterfacePtr p)
    {
        return _CompareUnknown(p) == 0;
    }

    // Compare with other interface
    //
    template<> bool operator==(Interface* p)
    {
        return (m_pInterface == p) ? true : _CompareUnknown(p) == 0;
    }

    // Compares 2 XRPtr's
    //
    template<> bool operator==(XRPtr& p)
    {
        return operator==(p.m_pInterface);
    }

    // For comparison to NULL
    //
    template<> bool operator==(int null)
    {
        if (null != 0) 
        {
            // This method will always do what it was intened to do even IF the user 
            // doesn't!  
            _xr_ptr_error(__FUNCTION__,E_POINTER);
        }

        return m_pInterface == NULL;
    }

    // Compare two pointers
    //
    template<typename _InterfacePtr> bool operator!=(_InterfacePtr p)
    {
        return !(operator==(p));
    }

    // Compare with other interface
    //
    template<> bool operator!=(Interface* p)
    {
        return !(operator==(p));
    }

    // Compares 2 XRPtr's
    //
    template<> bool operator!=(XRPtr& p)
    {
        return !(operator==(p));
    }

    // For comparison to NULL
    //
    template<> bool operator!=(int null)
    {
        return !(operator==(null));
    }

    // Compare two pointers
    //
    template<typename _InterfacePtr> bool operator<(_InterfacePtr p)
    {
        return _CompareUnknown(p) < 0;
    }

    // Compare two pointers
    //
    template<typename _InterfacePtr> bool operator>(_InterfacePtr p)
    {
        return _CompareUnknown(p) > 0;
    }

    // Compare two pointers
    //
    template<typename _InterfacePtr> bool operator<=(_InterfacePtr p)
    {
        return _CompareUnknown(p) <= 0;
    }

    // Compare two pointers
    //
    template<typename _InterfacePtr> bool operator>=(_InterfacePtr p)
    {
        return _CompareUnknown(p) >= 0;
    }

    // Explicitly release the contained interface if not NULL.
    //
    void Release()
    {
        if(m_pInterface != NULL) 
        {
            static_cast<Disambiguation*>(m_pInterface)->Release();
            m_pInterface = NULL;
        }
        else
        {
            // The user is really doing something wrong here.  
            // We are going to prevent the crash, but we want to notify them 
            // about the error!
            _xr_ptr_error(__FUNCTION__,E_POINTER,"Can not Release() a NULL interface.");
        }
    }

    // Explicitly AddRef the contained interface if not NULL.
    //
    void AddRef()
    { 
        if (m_pInterface != NULL) 
        {
            static_cast<Disambiguation*>(m_pInterface)->AddRef(); 
        }
        else
        {
            // The user is really doing something wrong here.  
            // We are going to prevent the crash, but we want to notify them 
            // about the error!
            _xr_ptr_error(__FUNCTION__,E_POINTER,"Can not AddRef() a NULL interface.");
        }
    }

    // Another way to get the interface pointer without casting.
    //
    Interface* GetInterfacePtr() const
    { 
        return m_pInterface; 
    }

    // Performs the QI for the specified XamlRuntime interface.
    // As with all QIs, the interface will be AddRef'd.
    //
    template<typename _XamlRuntimeInterface> HRESULT QueryInterface(_XamlRuntimeInterface** p)
    {
        return QueryInterface(__uuidof(_XamlRuntimeInterface), *p);
    }

    // Performs the QI for the specified XamlRuntime interface.
    // As with all QIs, the interface will be AddRef'd.
    //
    template<typename _XamlRuntimeInterface> HRESULT QueryInterface(_XamlRuntimeInterface* &p)
    {
        return QueryInterface(__uuidof(_XamlRuntimeInterface), &p);
    }

    // Performs the QI for the specified IID and returns it in p.
    // As with all QIs, the interface will be AddRef'd.
    //
    template<typename _InterfaceType> HRESULT QueryInterface(const IID& iid, _InterfaceType** p)
    {
        return QueryInterface(iid, *p);
    }

    // Performs the QI for the specified IID and returns it in p.
    // As with all QIs, the interface will be AddRef'd.
    //
    template<typename _InterfaceType> HRESULT QueryInterface(const IID& iid, _InterfaceType*& p)
    {
        if (m_pInterface != NULL) 
        {
            return m_pInterface->QueryInterface(iid, reinterpret_cast<void**>(&p));
        }

        return E_POINTER;
    }

private:
    // The Interface.
    //
    Interface* m_pInterface;

    // Releases only if the interface is not null.
    // The interface is not set to NULL.
    //
    void _Release()
    {
        if (m_pInterface != NULL) 
        {
            static_cast<Disambiguation*>(m_pInterface)->Release();
        }
    }

    // AddRefs only if the interface is not NULL
    //
    void _AddRef()
    {
        if (m_pInterface != NULL) 
        {
            static_cast<Disambiguation*>(m_pInterface)->AddRef();
        }
    }

    // Performs a QI on pUnknown for the interface type returned
    // for this class.  The interface is stored.  If pUnknown is
    // NULL, or the QI fails, E_NOINTERFACE is returned and
    // _pInterface is set to NULL.
    //
    template<typename _InterfacePtr> HRESULT _QueryInterface(const _InterfacePtr& p)
    {
        HRESULT hr = E_NOINTERFACE;

        // Can't QI NULL
        //
        if (p) 
        {
            // Query for this interface
            //
            Interface*          pInterface;
            Disambiguation*     pUnk = p;

            hr = pUnk->QueryInterface(__uuidof(Interface), reinterpret_cast<void**>(&pInterface));

            if(SUCCEEDED(hr))
            {
                // Save the interface without AddRef()ing.
                //
                Attach(pInterface);
            }
            else
            {
                // If failed initialize interface to NULL
                //
                Attach(NULL);
                hr = E_NOINTERFACE;
            }
        }
        else 
        {
            operator=(static_cast<Interface*>(NULL));
        }

        return hr;
    }

    // Compares the provided pointer with this by obtaining IUnknown interfaces
    // for each pointer and then returning the difference.
    //
    template<typename _InterfacePtr> int _CompareUnknown(_InterfacePtr p)
    {
        IUnknown *pu1 = NULL;
        IUnknown *pu2 = NULL;

        if (m_pInterface != NULL) 
        {
            HRESULT hr = m_pInterface->QueryInterface(__uuidof(IUnknown), reinterpret_cast<void**>(&pu1));

            if(SUCCEEDED(hr))
            {
                pu1->Release();
            }
            else 
            {
                // This isn't particularaly fatal, but it IS a bad thing.
                // ALL interfaces MUST support IUnknown.
                // We are going to avoid a crash, but the user should really know
                // that something is wrong!
                _xr_ptr_error(__FUNCTION__,hr,"Interface doesn't support IUnknown!");
            }
        }

        if (p) 
        {
            HRESULT hr = p->QueryInterface(__uuidof(IUnknown), reinterpret_cast<void**>(&pu2));

            if(SUCCEEDED(hr))
            {
                pu2->Release();
            }
            else 
            {
                // This isn't particularaly fatal, but it IS a bad thing.
                // ALL interfaces MUST support IUnknown.
                // We are going to avoid a crash, but the user should really know
                // that something is wrong!
                _xr_ptr_error(__FUNCTION__,hr,"Interface doesn't support IUnknown!");
            }
        }

        return pu1 - pu2;
    }

};


#define XR_SMARTPTR(x) typedef XRPtr< x > x##Ptr


XR_SMARTPTR(IXRArcSegment);
XR_SMARTPTR(IXRBeginStoryboard);
XR_SMARTPTR(IXRBezierSegment);
XR_SMARTPTR(IXRBitmapCache);
XR_SMARTPTR(IXRBitmapImage);
XR_SMARTPTR(IXRBorder);
XR_SMARTPTR(IXRBrush);
XR_SMARTPTR(IXRCanvas);
XR_SMARTPTR(IXRCacheMode);
XR_SMARTPTR(IXRColorAnimation);
XR_SMARTPTR(IXRColorAnimationUsingKeyFrames);
XR_SMARTPTR(IXRColorKeyFrame);
XR_SMARTPTR(IXRColorKeyFrameCollection);
XR_SMARTPTR(IXRColumnDefinition);
XR_SMARTPTR(IXRColumnDefinitionCollection);
XR_SMARTPTR(IXRContentControl);
XR_SMARTPTR(IXRContentPresenter);
XR_SMARTPTR(IXRControlTemplate);
XR_SMARTPTR(IXRControl);
XR_SMARTPTR(IXRDataTemplate);
XR_SMARTPTR(IXRDiscreteColorKeyFrame);
XR_SMARTPTR(IXRDiscreteDoubleKeyFrame);
XR_SMARTPTR(IXRDiscreteObjectKeyFrame);
XR_SMARTPTR(IXRDiscretePointKeyFrame);
XR_SMARTPTR(IXRDoubleAnimation);
XR_SMARTPTR(IXRDoubleAnimationUsingKeyFrames);
XR_SMARTPTR(IXRDoubleCollection);
XR_SMARTPTR(IXRDoubleKeyFrame);
XR_SMARTPTR(IXRDoubleKeyFrameCollection);
XR_SMARTPTR(IXRDrawingAttributes);
XR_SMARTPTR(IXREllipse);
XR_SMARTPTR(IXREllipseGeometry);
XR_SMARTPTR(IXREnumerable);
XR_SMARTPTR(IXREnumerator);
XR_SMARTPTR(IXREventTrigger);
XR_SMARTPTR(IXRFrameworkElement);
XR_SMARTPTR(IXRFrameworkTemplate);
XR_SMARTPTR(IXRGeneralTransform);
XR_SMARTPTR(IXRGeometry);
XR_SMARTPTR(IXRGeometryCollection);
XR_SMARTPTR(IXRGeometryGroup);
XR_SMARTPTR(IXRGlyphs);
XR_SMARTPTR(IXRGradientBrush);
XR_SMARTPTR(IXRGradientStop);
XR_SMARTPTR(IXRGradientStopCollection);
XR_SMARTPTR(IXRGrid);
XR_SMARTPTR(IXRImage);
XR_SMARTPTR(IXRImageBrush);
XR_SMARTPTR(IXRImageSource);
XR_SMARTPTR(IXRInkPresenter);
XR_SMARTPTR(IXRInline);
XR_SMARTPTR(IXRInlineCollection);
XR_SMARTPTR(IXRItemCollection);
XR_SMARTPTR(IXRItemsControl);
XR_SMARTPTR(IXRItemsPanelTemplate);
XR_SMARTPTR(IXRItemsPresenter);
XR_SMARTPTR(IXRKeySpline);
XR_SMARTPTR(IXRLine);
XR_SMARTPTR(IXRLinearColorKeyFrame);
XR_SMARTPTR(IXRLinearDoubleKeyFrame);
XR_SMARTPTR(IXRLinearGradientBrush);
XR_SMARTPTR(IXRLinearPointKeyFrame);
XR_SMARTPTR(IXRLineBreak);
XR_SMARTPTR(IXRLineGeometry);
XR_SMARTPTR(IXRLineSegment);
XR_SMARTPTR(IXRList);
XR_SMARTPTR(IXRMatrix);
XR_SMARTPTR(IXRMatrixTransform);
XR_SMARTPTR(IXRNotifyCollectionChanged);
XR_SMARTPTR(IXRObjectAnimationUsingKeyFrames);
XR_SMARTPTR(IXRObjectKeyFrame);
XR_SMARTPTR(IXRObjectKeyFrameCollection);
XR_SMARTPTR(IXRPanel);
XR_SMARTPTR(IXRPasswordBox);
XR_SMARTPTR(IXRPath);
XR_SMARTPTR(IXRPathFigure);
XR_SMARTPTR(IXRPathFigureCollection);
XR_SMARTPTR(IXRPathGeometry);
XR_SMARTPTR(IXRPathSegment);
XR_SMARTPTR(IXRPathSegmentCollection);
XR_SMARTPTR(IXRPointAnimation);
XR_SMARTPTR(IXRPointAnimationUsingKeyFrames);
XR_SMARTPTR(IXRPointCollection);
XR_SMARTPTR(IXRPointKeyFrame);
XR_SMARTPTR(IXRPointKeyFrameCollection);
XR_SMARTPTR(IXRPolyBezierSegment);
XR_SMARTPTR(IXRPolygon);
XR_SMARTPTR(IXRPolyline);
XR_SMARTPTR(IXRPolyLineSegment);
XR_SMARTPTR(IXRPolyQuadraticBezierSegment);
XR_SMARTPTR(IXRPopup);
XR_SMARTPTR(IXRPropertyBag);
XR_SMARTPTR(IXRQuadraticBezierSegment);
XR_SMARTPTR(IXRRadialGradientBrush);
XR_SMARTPTR(IXRRectangle);
XR_SMARTPTR(IXRRectangleGeometry);
XR_SMARTPTR(IXRResourceDictionary);
XR_SMARTPTR(IXRRotateTransform);
XR_SMARTPTR(IXRRowDefinition);
XR_SMARTPTR(IXRRowDefinitionCollection);
XR_SMARTPTR(IXRRun);
XR_SMARTPTR(IXRScaleTransform);
XR_SMARTPTR(IXRSetter);
XR_SMARTPTR(IXRSetterBase);
XR_SMARTPTR(IXRSetterBaseCollection);
XR_SMARTPTR(IXRShape);
XR_SMARTPTR(IXRSkewTransform);
XR_SMARTPTR(IXRSolidColorBrush);
XR_SMARTPTR(IXRSplineColorKeyFrame);
XR_SMARTPTR(IXRSplineDoubleKeyFrame);
XR_SMARTPTR(IXRSplinePointKeyFrame);
XR_SMARTPTR(IXRStackPanel);
XR_SMARTPTR(IXRStoryboard);
XR_SMARTPTR(IXRStroke);
XR_SMARTPTR(IXRStrokeCollection);
XR_SMARTPTR(IXRStyle);
XR_SMARTPTR(IXRStylusInfo);
XR_SMARTPTR(IXRStylusPoint);
XR_SMARTPTR(IXRStylusPointCollection);
XR_SMARTPTR(IXRTextBlock);
XR_SMARTPTR(IXRTextBox);
XR_SMARTPTR(IXRTileBrush);
XR_SMARTPTR(IXRTimeline);
XR_SMARTPTR(IXRTimelineCollection);
XR_SMARTPTR(IXRTransform);
XR_SMARTPTR(IXRTransformCollection);
XR_SMARTPTR(IXRTransformGroup);
XR_SMARTPTR(IXRTranslateTransform);
XR_SMARTPTR(IXRTriggerAction);
XR_SMARTPTR(IXRTriggerActionCollection);
XR_SMARTPTR(IXRTriggerBase);
XR_SMARTPTR(IXRTriggerCollection);
XR_SMARTPTR(IXRUIElement);
XR_SMARTPTR(IXRUserControl);
XR_SMARTPTR(IXRValueCollection);
XR_SMARTPTR(IXRVisualStateCollection);
XR_SMARTPTR(IXRVisualStateGroup);
XR_SMARTPTR(IXRVisualStateGroupCollection);
XR_SMARTPTR(IXRVisualTransition);
XR_SMARTPTR(IXRVisualTransitionCollection);

XR_SMARTPTR(IXRDependencyObject);
XR_SMARTPTR(IXRApplication);
XR_SMARTPTR(IXRVisualHost);
XR_SMARTPTR(IXRUIElementCollection);
XR_SMARTPTR(IXRRangeBase);
XR_SMARTPTR(IXRButtonBase);
XR_SMARTPTR(IXRVisualState);
XR_SMARTPTR(IXRCustomUserControlBase);
XR_SMARTPTR(IXRCustomUserControl);

//XR_SMARTPTR(IXRDelegate); 


XR_SMARTPTR(IXRButton);
XR_SMARTPTR(IXRHyperlinkButton);
XR_SMARTPTR(IXRToggleButton);
XR_SMARTPTR(IXRRepeatButton);
XR_SMARTPTR(IXRRadioButton);
XR_SMARTPTR(IXRScrollBar);
XR_SMARTPTR(IXRSlider);
XR_SMARTPTR(IXRThumb);
XR_SMARTPTR(IXRCheckBox);
XR_SMARTPTR(IXRWin32Control); 
XR_SMARTPTR(IXRScrollContentPresenter);
XR_SMARTPTR(IXRScrollViewer);
XR_SMARTPTR(IXRProgressBar);
XR_SMARTPTR(IXRToolTip);
XR_SMARTPTR(IXRSelector);
XR_SMARTPTR(IXRListBox);
XR_SMARTPTR(IXRListBoxItem);
XR_SMARTPTR(IXRComboBox);
XR_SMARTPTR(IXRComboBoxItem);
XR_SMARTPTR(IXRWriteableBitmap);
XR_SMARTPTR(IXRLayoutInformation);
XR_SMARTPTR(IXRVirtualizingStackPanel);
XR_SMARTPTR(IXRMatrix3DProjection);
XR_SMARTPTR(IXRProjection);
XR_SMARTPTR(IXRMatrix3D);
XR_SMARTPTR(IXRPlaneProjection);
