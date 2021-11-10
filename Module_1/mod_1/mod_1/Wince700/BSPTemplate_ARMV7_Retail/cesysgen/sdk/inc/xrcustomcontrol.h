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
#include <XRPtr.h>
#include <XRUnknown.h>

//-------------------------------------------------------------------------------------------------                               
//
// The term THUNK here is used loosely.  The current implementation of this wrapper is NOT 
// technially thunked.  The methods as implemented recreate a stack frame and then re-call
// the underlying implementation.  They ~can~ be implemented as a true thunk in the future.
//
// The folowing 5 macros define the thunking behavior for the XRControlThunk implementation.
// 
// __THUNK_TEMPLATE(func)
// __THUNK_TEMPLATE_NAMED(func,sig,name)
//
// These two macros implement the thunks for the handy typesafe template versions
// of the methods.  The typesafe versions allow safe coercion to the return 
// type from a more generic implementation.
//
// __THUNK_0(func)
// __THUNK_1(func,sig)
// __THUNK_2(func, sig1, sig2)
//
// The above macro's standardize the thunking of the internal interface into 
// three "standard" function signatures.  The macros below define short cut
// variations on the three standard types of calls above.
//
// __THUNK_1_GET(func, sig) 
// __THUNK_1_SET(func, sig)
// __THUNK_1_GETSET( func, sig )
// __THUNK_DEL( func, sig )
// __THUNK_AP( sig )
// __THUNK_APp( sig )
//
//

// typesafe template helper for unnamed interfaces
#define __THUNK_TEMPLATE(func) \
        template<typename XRObj> HRESULT func(__out XRObj** ppObject) \
        { \
            HRESULT hr = E_FAIL; \
            if(m_pBase) \
            { \
                hr = m_pBase->func(ppObject); \
            } \
            return hr; \
        }

// typesafe template helper for named interfaces
#define __THUNK_TEMPLATE_NAMED(func,sig,name) \
        template<typename XRObj> HRESULT func(sig name,__out XRObj** ppObject) \
        { \
            HRESULT hr = E_FAIL; \
            if(m_pBase) \
            { \
                hr = m_pBase->func(name,ppObject); \
            } \
            return hr; \
        }

// typesafe template helper for named interfaces
#define __THUNK_TEMPLATE_GETAP() \
        template<typename XRObj> HRESULT GetAttachedProperty(const WCHAR * pAP,const WCHAR * pNS,__out XRObj** ppObject) \
        { \
            HRESULT hr = E_FAIL; \
            if(m_pBase) \
            { \
                hr = m_pBase->GetAttachedProperty(pAP,pNS,ppObject); \
            } \
            return hr; \
        }


// thunk method with no arguments
#define __THUNK_0(func)\
            virtual HRESULT STDMETHODCALLTYPE func()\
            {\
                HRESULT hr = E_FAIL;\
                if(m_pBase)\
                {\
                    hr = m_pBase->func();\
                }\
                return hr;\
            }

// thunk method with 1 argument
#define __THUNK_1(func,sig)\
            virtual HRESULT STDMETHODCALLTYPE func(sig item)\
            {\
                HRESULT hr = E_FAIL;\
                if(m_pBase)\
                {\
                    hr = m_pBase->func(item);\
                }\
                return hr;\
            }

// thunk method with 2 arguments
#define __THUNK_2(func, sig1, sig2)\
            virtual HRESULT STDMETHODCALLTYPE func(sig1 item1,sig2 item2)\
            {\
                HRESULT hr = E_FAIL;\
                if(m_pBase)\
                {\
                    hr = m_pBase->func(item1,item2);\
                }\
                return hr;\
            }

// thunk method with 3 arguments
#define __THUNK_3(func, sig1, sig2, sig3)\
            virtual HRESULT STDMETHODCALLTYPE func(sig1 item1,sig2 item2,sig3 item3)\
            {\
                HRESULT hr = E_FAIL;\
                if(m_pBase)\
                {\
                    hr = m_pBase->func(item1,item2,item3);\
                }\
                return hr;\
            }


// shortcut for a "Get" thunk method 
#define __THUNK_1_GET(func, sig)\
            __THUNK_1(Get##func,sig)

// shortcut for a "Set" thunk method 
#define __THUNK_1_SET(func, sig)\
            __THUNK_1(Set##func,sig)

// shortcut for both "Get/Set" thunk methods
#define __THUNK_1_GETSET( func, sig )\
            __THUNK_1_GET(func,sig*)\
            __THUNK_1_SET(func,sig)

// shortcut for Delegate thunk methods
#define __THUNK_DEL( func, sig )\
            __THUNK_1(Add##func##EventHandler,IXRDelegate<sig> *)\
            __THUNK_1(Remove##func##EventHandler,IXRDelegate<sig> *)

// shortcut for a Attached Property thunk methods
#define __THUNK_AP( sig ) \
            __THUNK_3( SetAttachedProperty, const WCHAR *,const WCHAR *, sig) \
            __THUNK_3( GetAttachedProperty, const WCHAR *,const WCHAR *, sig*)


// shortcut for a Attached Property thunk methods with different signature style
#define __THUNK_APp( sig, ...) \
            __THUNK_3( SetAttachedProperty, const WCHAR *,const WCHAR *, sig) \
            __THUNK_3( GetAttachedProperty, const WCHAR *,const WCHAR *, sig)


// 
// XRControlThunk
//
//  Custom User controls are hosted by an "empty" container in the XamlRuntime.
//  Layout and other important details are handled by the contained interface
//  in this class.  
//
//  The XRControlThunk implements all of the interface methods of the object that 
//  the XamlRuntime uses to host your control.  When one of these methods is called
//  this thunking class will bounce the call to the underlying implementation.
//
template<typename IFace>
class XRControlThunk : public IFace
{
    // This the interface heiracrhy that this class implements
    BEGIN_QI_MAP()
        QI_MAP_INTERFACE(IFace)
        QI_MAP_INTERFACE(IXRCustomUserControl)
        QI_MAP_INTERFACE(IXRCustomUserControlBase)
        QI_MAP_INTERFACE(IXRUserControl)
        QI_MAP_INTERFACE(IXRControl)
        QI_MAP_INTERFACE(IXRFrameworkElement)
        QI_MAP_INTERFACE(IXRUIElement)
        QI_MAP_INTERFACE(IXRDependencyObject)
    END_QI_MAP()

    private:
        // The underlying XamlRuntime object
        IXRCustomUserControlBasePtr m_pBase;

    protected:

    public:
        XRControlThunk() { }
        virtual ~XRControlThunk() 
        { 
            m_pBase = NULL;
        }

        //
        // The initilalize method is called by the Create method
        // that is defined in any class that would derive from this
        // implementation.  XamlRuntime calls the registered Create
        // method when it encounters the UserControl declaration in
        // Xaml or when you explicitly create an instance of your
        // user control via CreateObject.
        //
        HRESULT Initialize(__in IXRDependencyObject * pBase)
        {
            HRESULT hr = E_FAIL;

            // Is the pointer NULL?
            if(pBase)
            {
                // Have we already been initialized?
                if(!m_pBase)
                {
                    // m_pBase is an XRPtr.  XRPtr always
                    // does a QI to assure that the object is 
                    // the correct type for the target.
                    m_pBase = pBase;

                    // Did the object implement IXRCustomUserControlBase?
                    if(m_pBase)
                    {
                        // Life is good
                        hr = S_OK;
                    }
                    else
                    {
                        // The base object DOES NOT implement IXRCustomUserControlBase!
                        hr = E_INVALIDARG;
                    }
                }
            }
            else
            {
                // pBase is NULL;
                hr = E_INVALIDARG;
            }

            return hr;
        }

        //
        // Allows you to check to see if the object is properly 
        // initialized.
        //
        bool IsInitialized()
        {
            // Calls operator bool() on the XRPtr.
            // operator bool returns true if the 
            // smart pointer has a value and false 
            // if not.
            return m_pBase;
        }

        //
        // IXRCustomUserControl implementation
        // 
        HRESULT STDMETHODCALLTYPE GetXRObject(IXRDependencyObject** ppXRObject)
        {
            HRESULT hr = E_FAIL;

            // Make sure that we have a valid back pointer
            if(ppXRObject)
            {
                // Check to make sure we are initailized
                if(m_pBase)
                {
                    m_pBase.AddRef();  // We are giving out the interface, AddRef()

                    *ppXRObject = m_pBase;
                    
                    hr = S_OK;
                }
            }
            else
            {
                hr = E_INVALIDARG;
            }

            return hr;
        }

        //
        // IXRCustomUserControlBase implementation
        // 
        __THUNK_2( GetPropertyValue, DEPENDENCY_PROPERTY_ID, XRValue*)
        __THUNK_2( SetPropertyValue, DEPENDENCY_PROPERTY_ID, XRValue*)

        //
        // IXRUserControl implementation
        // 
        __THUNK_1_GETSET( Content, IXRUIElement*)
        __THUNK_TEMPLATE(GetContent)

        //
        // IXRControl implementation
        //
        __THUNK_1_GETSET(   FontSize,        float)
        __THUNK_1_GET(      FontFamily,      BSTR*)
        __THUNK_1_SET(      FontFamily,      const WCHAR*)
        __THUNK_1_GETSET(   FontWeight,      XRFontWeight)
        __THUNK_1_GETSET(   FontStyle,       XRFontStyle)
        __THUNK_1_GETSET(   FontStretch,     XRFontStretch)
        __THUNK_1_GETSET(   Foreground,      IXRBrush*)
        __THUNK_TEMPLATE(GetForeground)

        __THUNK_2(GetTemplateChild,const WCHAR *, IXRDependencyObject **)

        __THUNK_1_GETSET(   IsTabStop,       bool)
        __THUNK_1_GETSET(   IsEnabled,       bool)
        __THUNK_1_GETSET(   TabIndex,        int)
        __THUNK_1_GETSET(   TabNavigation,   XRKeyboardNavigationMode)
        __THUNK_1_GET(      Padding,         XRThickness*)
        __THUNK_1_SET(      Padding,         XRThickness*)

        __THUNK_1_GETSET(   HorizontalContentAlignment,  XRHorizontalAlignment)
        __THUNK_1_GETSET(   VerticalContentAlignment,    XRVerticalAlignment)

        __THUNK_1_GETSET(   Background,         IXRBrush*)
        __THUNK_TEMPLATE(GetBackground)

        __THUNK_1_GET(      BorderThickness,    XRThickness*)
        __THUNK_1_SET(      BorderThickness,    XRThickness*)
        __THUNK_1_GETSET(   BorderBrush,        IXRBrush*)
        __THUNK_TEMPLATE(GetBorderBrush)

        __THUNK_1_GET( DataContext,             XRValue*)
        __THUNK_1_SET( DataContext,             XRValue*)

        __THUNK_1( Focus, bool* )
        __THUNK_DEL( IsEnabledChanged, XRValueChangedEventArgs<bool> )

        //
        // IXRFrameworkElement implementation
        //
        __THUNK_1( ApplyTemplate, bool* )

        __THUNK_2( SetBinding, const WCHAR*, XRBinding*)

        __THUNK_1_GET(Triggers,IXRTriggerCollection**)
        __THUNK_TEMPLATE(GetTriggers)

        __THUNK_DEL( Loaded, XRRoutedEventArgs )
        __THUNK_DEL( Destroyed, XREventArgs )

        __THUNK_1_GET( Resources, IXRResourceDictionary**)
        __THUNK_TEMPLATE(GetResources)

        __THUNK_1_GET(  Tag,            BSTR*)
        __THUNK_1_SET(  Tag,            const WCHAR*)
        __THUNK_1_GET( ActualWidth,     float*)
        __THUNK_1_GET( ActualHeight,    float*)

        __THUNK_1_GETSET( Width,        float);
        __THUNK_1_GETSET( Height,       float);
        __THUNK_1_GETSET( MinWidth,     float);
        __THUNK_1_GETSET( MinHeight,    float);
        __THUNK_1_GETSET( MaxWidth,     float);
        __THUNK_1_GETSET( MaxHeight,    float);

        __THUNK_1_GETSET( HorizontalAlignment, XRHorizontalAlignment);
        __THUNK_1_GETSET( VerticalAlignment, XRVerticalAlignment);

        __THUNK_1_GET(      Margin,     XRThickness*)
        __THUNK_1_SET(      Margin,     XRThickness*)

        __THUNK_1_GETSET(   Style,      IXRStyle*)
        __THUNK_TEMPLATE(GetStyle)

        // Added for SL4_TEXT_STACK_DEPENDENCY
        __THUNK_1_GETSET(   FlowDirection,      XRFlowDirection)

        __THUNK_1_GET(      Parent,     IXRDependencyObject**)
        __THUNK_TEMPLATE(GetParent);

        __THUNK_1_GET(      Name,       BSTR*)
        __THUNK_1_SET(      Name,       const WCHAR*)

        __THUNK_2( FindName, const WCHAR *, IXRDependencyObject**)
        __THUNK_TEMPLATE_NAMED(FindName,__in const WCHAR *,pName)


        //
        // IXRUIElement implementation
        //
        __THUNK_1_GETSET( Opacity,      float)
        __THUNK_1_GETSET( Clip,         IXRGeometry*)
        __THUNK_TEMPLATE(GetClip)

        __THUNK_1_GETSET( RenderTransform, IXRTransform*)
        __THUNK_TEMPLATE(GetRenderTransform);

        __THUNK_1_GETSET(   OpacityMask,    IXRBrush*)
        __THUNK_TEMPLATE(GetOpacityMask);

        __THUNK_DEL( MouseMove,               XRMouseEventArgs )
        __THUNK_DEL( MouseEnter,              XRMouseEventArgs )
        __THUNK_DEL( MouseLeave,              XRMouseEventArgs )
        __THUNK_DEL( MouseLeftButtonDown,     XRMouseButtonEventArgs )
        __THUNK_DEL( MouseLeftButtonUp,       XRMouseButtonEventArgs )
        __THUNK_DEL( MouseWheel,              XRMouseWheelEventArgs )

        __THUNK_DEL( KeyUp,                   XRKeyEventArgs )
        __THUNK_DEL( KeyDown,                 XRKeyEventArgs )

        __THUNK_DEL( GotFocus,                XRRoutedEventArgs )
        __THUNK_DEL( LostFocus,               XRRoutedEventArgs )
        __THUNK_DEL( LostMouseCapture,        XRMouseEventArgs )

        __THUNK_1_GETSET( CacheMode, IXRCacheMode*)
        __THUNK_TEMPLATE(GetCacheMode);

        __THUNK_1_GET( RenderTransformOrigin,   XRPoint*)
        __THUNK_1_SET( RenderTransformOrigin,   XRPoint*)
        __THUNK_1_GETSET( IsHitTestVisible,     bool)
        __THUNK_1_GETSET( Visibility,           XRVisibility)
        __THUNK_1_GET( RenderSize, XRSize*)
        __THUNK_1_GETSET( UseLayoutRounding, bool)

        __THUNK_DEL( SizeChanged, XRSizeChangedEventArgs)
        __THUNK_DEL( LayoutUpdated, XREventArgs)

        __THUNK_1( CaptureMouse, bool*)

        __THUNK_0( ReleaseMouseCapture )
        __THUNK_0( InvalidateMeasure )
        __THUNK_0( InvalidateArrange )
        __THUNK_0( UpdateLayout )

        __THUNK_DEL( Gesture, XRGestureEventArgs )

        __THUNK_1( Measure,                 XRSize *)
        __THUNK_1( Arrange,                 XRRect *)
        __THUNK_1( TransformPointRelative,  XRPoint*)

        __THUNK_1_GET( ActualX, float *)
        __THUNK_1_GET( ActualY, float *)

        __THUNK_1_GET( DesiredSize, XRSize* )

        __THUNK_1_GETSET( Effect,       IXREffect *)
        __THUNK_1_GETSET( Projection,   IXRProjection *)

        __THUNK_1_GETSET( Cursor, XRCursor)

        __THUNK_2( TransformToVisual, IXRUIElement*, IXRGeneralTransform** )

        //
        // IXRDependencyObject implementation
        //
        __THUNK_AP(bool)
        __THUNK_AP(UINT)
        __THUNK_AP(int)
        __THUNK_AP(float)
        __THUNK_3( SetAttachedProperty, const WCHAR *, const WCHAR *,const WCHAR *)
        __THUNK_3( GetAttachedProperty, const WCHAR *, const WCHAR *,WCHAR **)
        __THUNK_2( SetDependencyProperty, DEPENDENCY_PROPERTY_ID, XRValue*)
        __THUNK_2( GetDependencyProperty, DEPENDENCY_PROPERTY_ID, XRValue*)
        __THUNK_2( SetDependencyProperty, const WCHAR *, XRValue*)
        __THUNK_2( GetDependencyProperty, const WCHAR *, XRValue*)
        __THUNK_AP(COLORREF)
        __THUNK_APp(XRGridLength *)
        __THUNK_APp(XRPoint *)
        __THUNK_APp(XRThickness *)
        __THUNK_APp(XRRect*)
        __THUNK_APp(XRRepeatBehavior *)
        __THUNK_APp(XRCornerRadius *)
        __THUNK_AP(IXREnumerable *)
        __THUNK_AP(IXRDependencyObject *)
        __THUNK_TEMPLATE_GETAP()
        __THUNK_2( GoToVisualState,     const WCHAR *,  bool)
        __THUNK_2( HitTest,             XRRect*,        IXRHitTestResults**)
        __THUNK_2( HitTest,             XRPoint*,       IXRHitTestResults**)
        __THUNK_1_GETSET(Template,IXRControlTemplate*)
};



//
// template<> XRCustomUserControlImpl
//
//  This template implements the basic functions needed to create a UserControl
//  in the XamlRuntime.
//
//  The important steps that need to be done for all UserControls are:
// 
//  1.  Register the control with XamlRuntime.  
// 
//      The static method Register provides a simple shortcut for handling 
//      registration for most UserControl types.
//  
//  2.  Create an instance when the XamlRuntime calls the registered Creation
//      method.  
//
//      This template handles the basic's using some required static methods
//      implemented by the template parameter "Base."
//
//

template<typename Base,typename IFace = IXRCustomUserControl>
class XRCustomUserControlImpl : public XRControlThunk<IFace>
{
    // This implementation doesn't define any interfaces for the object.
    // We are just going to chain the QI mapping to the base implementation
    // that implements the interfaces for us.
    REDIRECT_QI_MAP(XRControlThunk)

    private:
        // The control ID is assigned by XamlRuntime during registration.
        // It is not used by this class, but included as a reference.
        static UINT     s_ControlId;  

        //
        // This function is registered with the XamlRuntime during the call to the static method Register below.
        // The runtime calls this function to create the custom user control when it is encountered in Xaml or
        // if the user explicitly creates an instance via CreateObject.
        //
        static HRESULT CALLBACK Create(__in IXRDependencyObject* pExistingDependencyObject, __out IXRDependencyObject **ppNewDp)
        {
            HRESULT hr = E_FAIL;

            IXRApplicationPtr pApplication;
            //
            // Get the globla XamlRuntime application instance
            //
            hr = GetXRApplicationInstance(&pApplication);
            if(FAILED(hr)) {goto Error;}

            // Create an instance of the object.  
            XRObject<Base>* pNew = NULL;
            XRObject<Base>::CreateInstance(&pNew);

            if(pNew)
            {
                XRXamlSource XamlSource;

                // Attach the copy to a smart pointer to 
                // manage the life time of the object.
                IXRDependencyObjectPtr pDO;
                pDO.Attach(pNew);

                // Get the Xaml source from the base class
                hr = Base::GetXamlSource(&XamlSource);
                if(FAILED(hr)){goto Error;}

                // Intialize the newly created object by passing
                // in the IXRDependencyObject that XamlRuntime uses
                // to host the UserControl
                hr = pNew->Initialize(pExistingDependencyObject);
                if(FAILED(hr)){goto Error;}

                // Parse the Xaml provided using the newly created object
                // as the target.
                hr = pApplication->ParseXamlWithExistingRoot(&XamlSource, pDO);
                if(FAILED(hr)){goto Error;}

                // Call the virtual method OnLoaded which allows users the 
                // ability to attach to elements in the newly created 
                // tree.
                hr = pNew->OnLoaded(pDO);
                if(FAILED(hr)){goto Error;}

                // Transfer ownership of the new object to the caller
                *ppNewDp  = pDO.Detach();
            }

        Error:
            return hr;
        }

    public:

        XRCustomUserControlImpl() { }
        virtual ~XRCustomUserControlImpl() { }

        static UINT ControlID() { return s_ControlId; }

        //
        // Overload this function to attach delegates for this custom control.
        // 
        virtual HRESULT OnLoaded(__in IXRDependencyObject* pRoot)
        {
            return S_OK;
        }

        //
        // Registers the Custom User Control with the XamlRuntime.
        //
        static HRESULT Register(REFIID iid, const WCHAR* pControlName, const WCHAR* pNamespace)
        {
            HRESULT hr = E_FAIL;
            IXRApplicationPtr pApplication;

            // Get the XR Application 
            //
            hr = GetXRApplicationInstance(&pApplication);

            if(SUCCEEDED(hr))
            {
                hr = pApplication->RegisterControl(iid, pControlName,pNamespace,Create,&s_ControlId);
            }

            return hr;
        }

        // For CUC's that do NOT need to be created by the user and ARE ONLY
        // created in Xaml.
        static HRESULT Register(const WCHAR* pControlName, const WCHAR* pNamespace)
        {
            return Register(__uuidof(IXRCustomUserControl),pControlName,pNamespace);
        }

};

//
// Initialize static variables
template <typename Base,typename IFace>
UINT XRCustomUserControlImpl<Base,IFace>::s_ControlId = 0;


