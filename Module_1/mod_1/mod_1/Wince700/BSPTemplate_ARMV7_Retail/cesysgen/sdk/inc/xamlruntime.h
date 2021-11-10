//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// Use of this source code is subject to the terms of the Microsoft
// premium shared source license agreement under which you licensed
// this source code. If you did not accept the terms of the license
// agreement, you are not authorized to use this source code.
// For the terms of the license, please see the license agreement
// signed by you and Microsoft.
// THE SOURCE CODE IS PROVIDED "AS IS", WITH NO WARRANTIES OR INDEMNITIES.
//
#pragma once

#ifndef __cplusplus
#error XamlRuntime Requires C++ for template usage
#endif

#include <unknwn.h>
#include <windows.h>

#if defined(DEFINE_GUID)
#undef DEFINE_GUID
#endif

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
   extern "C" const GUID __declspec(selectany) name \
                = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }


// The following macro declares an IID_X named GUID.

#define DEFINE_XR_IID(X,...) \
    extern "C" const GUID __declspec(selectany) IID_##X= __uuidof(X) __if_exists(__VA_ARG__) {__pragma( message("DEFINE_XR_IID has extra unused argument.") )}



//
// Dependency Property Info Handle Type,
//
DECLARE_HANDLE( DEPENDENCY_PROPERTY_ID );


// forward declaration
class    IXRDependencyObject;
class    IXRControlTemplate;
class    IXRScrollViewer;
class    IXREnumerable;
class    IXRUIElement;
class    XRValue;

class __declspec(novtable) __declspec(uuid("{A97CD44A-6B2C-48a1-BE0B-7EB3401B9E6C}")) IXRHitTestResults : public IUnknown
{
public:
    virtual HRESULT STDMETHODCALLTYPE GetItem(int ItemIndex, IXRDependencyObject** ppItem) = 0;
    virtual HRESULT STDMETHODCALLTYPE GetCount(int *pCount) = 0;

    template<typename XRObj> HRESULT GetItem(int ItemIndex,__out XRObj** ppFoundObject)
    { return __ts_converter2<IXRDependencyObject*>(this,&IXRHitTestResults::GetItem,ItemIndex,ppFoundObject); }
};

DEFINE_XR_IID( IXRHitTestResults );

/// <summary>
///     Represents time in ticks, a tick is 10,000,000th of a second
/// </summary>
struct XRTimeSpan
{
    /// <summary>
    ///     Default ctor
    /// </summary>
    XRTimeSpan(){};

    /// <summary>
    ///     ctor with Ticks 
    /// </summary>
    XRTimeSpan(__int64 TotalTicks)
    {
        Ticks = TotalTicks;
    }

    /// <summary>
    ///    ctor for Days, Hours, Minutes, Seconds and Milliseconds
    /// </summary>
    XRTimeSpan(int Days, int Hours, int Minutes, int Seconds, int Milliseconds)
    {    
        __int64 num = ((((((Days * MinutesPerDay) * HoursPerDay) + (Hours * MinutesPerDay)) + (Minutes * MinutesPerHour)) + Seconds) * MillisecondPerSecond) + Milliseconds;  
        Ticks = num * TicksPerMillisecond;        
    }


    /// <summary>
    ///     Minutes Per Day
    /// </summary>
    static const int MinutesPerDay = 3600;

    /// <summary>
    ///     Hours Per Day
    /// </summary>
    static const int HoursPerDay = 24;

    /// <summary>
    ///     Minutes Per Hour
    /// </summary>
    static const int MinutesPerHour = 60;

    /// <summary>
    ///     Millisecond Per Second
    /// </summary>
    static const int MillisecondPerSecond = 1000;

    /// <summary>
    ///     Total Seconds
    /// </summary>
    __int64 TotalSeconds()
    {
        return (__int64)(Ticks / TicksPerSecond);
    }

     /// <summary>
    ///     Total Minutes
    /// </summary>
    __int64 TotalMinutes()
    {
        return (__int64)(Ticks / TicksPerMinute);
    }

    /// <summary>
    ///     Total Hours
    /// </summary>
    __int64 TotalHours()
    {
        return (__int64)(Ticks / TicksPerHour);
    }

    /// <summary>
    ///     Total Milliseconds
    /// </summary>
    __int64 TotalMilliseconds()
    {
        return (__int64)(Ticks / TicksPerMillisecond);
    }

    /// <summary>
    ///     Returns the proper Ticks from the double value
    /// </summary>
    static __int64 FromSeconds(double Value)
    {
        return Interval(Value, MillisecondPerSecond);
    }

    /// <summary>
    ///     Gets the proper interval based on the scale
    /// </summary>
    static __int64 Interval(double Value, int scale)
    {
        double Number1 = Value * scale;
        double Number2 = Number1 + ((Value >= 0.0) ? 0.5 : -0.5);
        return (__int64) Number2 * TicksPerMillisecond;
    }

   
    /// <summary>
    ///     The time in ticks, a tick is 10,000,000th of a second
    /// </summary>
    __int64 Ticks;

    /// <summary>
    ///     Represents the number of ticks in 1 day. This field is constant.
    /// </summary>
    static const __int64 TicksPerDay = 864000000000;

    /// <summary>
    ///     Represents the number of ticks in 1 hour. This field is constant.
    /// </summary>
    static const __int64 TicksPerHour = 36000000000;

    /// <summary>
    ///     Represents the number of ticks in 1 minute. This field is constant.
    /// </summary>
    static const __int64 TicksPerMinute = 600000000;

    /// <summary>
    ///     Represents the number of ticks in 1 second. This field is constant.
    /// </summary>
    static const __int64 TicksPerSecond = 10000000;

    /// <summary>
    ///     Represents the number of ticks in 1 millisecond. This field is constant.
    /// </summary>
    static const __int64 TicksPerMillisecond = 10000;

};

struct XRDuration
{
    enum _DurationType
    {
        DurationType_Automatic,
        DurationType_TimeSpan,
        DurationType_Forever
    };

    XRTimeSpan TimeSpan;
    _DurationType DurationType;
};

enum XRGridUnitType;
struct XRGridLength
{
    float UnitValue;      //  unit value storage
    XRGridUnitType UnitType; //  unit type storage

    bool operator==(const XRGridLength& other)
    {
        return (
            (UnitValue == other.UnitValue) &&
            (UnitType == other.UnitType) 
            ); 
    }

};

enum XRScrollBarVisibility
{
    XRScrollBarVisibility_Disabled = 0,
    XRScrollBarVisibility_Auto,
    XRScrollBarVisibility_Hidden,
    XRScrollBarVisibility_Visible
};


enum XRTextWrapping
{
    XRTextWrapping_NoWrap = 1,
    XRTextWrapping_Wrap = 2
};

// Added for SL4_TEXT_STACK_DEPENDENCY.
// Describes how text is trimmed when it overflows the edge of its containing box.
enum XRTextTrimming
{
    // Default no trimming.
    XRTextTrimming_None = 0,

    // Text is trimmed at a character boundary. An ellipsis (...) is drawn in place of remaining text.
    // XRTextTrimming_CharacterEllipsis,  // not supported at this time
    
    // Text is trimmed at a word boundary. An ellipsis (...) is drawn in place of remaining text.
    XRTextTrimming_WordEllipsis = 2,
    // DONOT use this, to be deprecated
    XRTextTrimming_WordEllipsi = XRTextTrimming_WordEllipsis
};

struct XRRepeatBehavior
{
    enum RepeatBehaviorType
    {
        RepeatBehaviorType_IterationCount,
        RepeatBehaviorType_RepeatDuration,
        RepeatBehaviorType_Forever
    };

    float IterationCount;
    XRTimeSpan RepeatDuration;
    RepeatBehaviorType BehaviorType;
};

struct XRThickness
{
    float Left;
    float Top;
    float Right;
    float Bottom;

    bool operator==(const XRThickness& other)
    {
        return (
            (Left == other.Left) &&
            (Top == other.Top) &&
            (Right == other.Right) &&
            (Bottom == other.Bottom)
            ); 
    }
    
};

struct XRCornerRadius
{
    float TopLeft;
    float TopRight;
    float BottomRight;
    float BottomLeft;

    bool operator==(const XRCornerRadius& other)
    {
        return (
            (TopLeft == other.TopLeft) &&
            (TopRight == other.TopRight) &&
            (BottomRight == other.BottomRight) &&
            (BottomLeft == other.BottomLeft)
            ); 
    }

    

};

struct XRKeyTime : 
    public XRTimeSpan
{
};

enum XRVisibility
{
    XRVisibility_Visible = 0,
    XRVisibility_Collapsed = 1
};

struct XRRect
{
    float    Left;
    float    Top;
    float    Right;
    float    Bottom;

    float Width()
    {
        return (Right - Left); 
    }

    float Height()
    {
        return (Bottom - Top); 
    }

    void IntersectRect(const XRRect& TheOtherRect)
    {
        Left = max(Left, TheOtherRect.Left); 
        Top = max(Top, TheOtherRect.Top); 
        Right = min(Right, TheOtherRect.Right); 
        Bottom = min(Bottom, TheOtherRect.Bottom); 
    }

    bool operator==(const XRRect& other)
    {
        return (
            (Left == other.Left) &&
            (Top == other.Top) &&
            (Right == other.Right) &&
            (Bottom == other.Bottom)
            ); 
    }
};

struct XRPoint
{
    float  x;
    float  y;

    bool operator==(const XRPoint& other)
    {
        return ((x == other.x) && (y == other.y)); 
    }

};

struct XRSize
{
    float cx;
    float cy;

    bool operator==(const XRSize& other)
    {
        const float epsilon = 1.192092896e-07F;   // smallest such that 1.0+FLT_EPSILON != 1.0

        return ( (cx - other.cx) < epsilon && (cx - other.cx) > -epsilon && 
            (cy - other.cy) < epsilon && (cy - other.cy) > -epsilon);
    }

    bool operator!=(const XRSize& other)
    {
        return !(operator==(other));
    }
};

/// <summary>
/// The base event args structure. All event args derive from this struct.
/// </summary>
struct XREventArgs
{
    /// <summary>
    /// Size indicates the size (in bytes) of this structure
    /// </summary>
    UINT    Size;
};

/// <summary>
/// RoutedEventArgs represents a type of event args from a specific source
/// </summary>
struct XRRoutedEventArgs : XREventArgs
{
    /// <summary>
    /// The source of this event
    /// </summary>
    IXRDependencyObject*    pOriginalSource;
};

class IXRStylusInfo;
class IXRStylusPointCollection;

/// <summary>
/// MouseEventArgs is a type of RoutedEventArgs that contain information about
/// a mouse event.
/// </summary>
struct XRMouseEventArgs : XRRoutedEventArgs
{
    /// <summary>
    /// The X and Y position this event occurred at
    /// </summary>
    XRPoint                   Position;

    /// <summary>
    /// Information about the stylus if this event came as a result of a stylus movement
    /// </summary>
    IXRStylusInfo*            pStylusInfo;

    /// <summary>
    /// A collection of stylus points which caused this event
    /// </summary>
    IXRStylusPointCollection* pStylusPoints;
};

/// <summary>
/// SizeChangedEventArgs is a type of RoutedEventArgs that contain information about
/// the size of a component changing
/// </summary>
struct XRSizeChangedEventArgs : XRRoutedEventArgs
{
    /// <summary>
    /// The last size of this element
    /// </summary>
    XRSize    PreviousSize;

    /// <summary>
    /// The new (current) size of this element
    /// </summary>
    XRSize    NewSize;
};

/// <summary>
/// EventArgs representing a MouseEvent caused by a button press or unpress
/// </summary>
struct XRMouseButtonEventArgs : XRMouseEventArgs
{
    /// <summary>
    /// Represents whether this event has been handled or not. If set to true, this event will not
    /// bubble up to the object's parent.
    /// </summary>
    BOOL                      Handled;
};

/// <summary>
/// EventArgs representing a MouseEvent caused by use of the mouse wheel
/// </summary>
struct XRMouseWheelEventArgs : XRMouseEventArgs
{
    /// <summary>
    /// Represents whether this event has been handled or not. If set to true, this event will not
    /// bubble up to the object's parent.
    /// </summary>
    BOOL                      Handled;

    /// <summary>
    /// Represents the amount of change the mouse wheel has caused.
    /// </summary>
    int                       Delta;
};



/// <summary>
/// EventArgs representing a key up or down event
/// </summary>
struct XRKeyEventArgs : XRRoutedEventArgs
{
    /// <summary>
    /// Represents whether this event has been handled or not. If set to true, this event will not
    /// bubble up to the object's parent.
    /// </summary>
    BOOL    Handled;

    /// <summary>
    /// The platform key code (or VKey code) of the key that was pressed
    /// </summary>
    UINT    PlatformKeyCode;

    /// <summary>
    /// The modifier keys currently pressed
    /// </summary>
    UINT    Modifiers;
};

/// <summary>
/// EventArgs indicating that text has changed for the given control
/// </summary>
struct XRTextChangedEventArgs : XRRoutedEventArgs
{
};

struct XRDragStartedEventArgs : XRRoutedEventArgs
{
   float HorizontalOffset;
   float VerticalOffset;
};

struct XRDragDeltaEventArgs : XRRoutedEventArgs
{
    float HorizontalDelta;
    float VerticalDelta;
};

struct XRDragCompletedEventArgs : XRRoutedEventArgs
{
    float  HorizontalChange;
    float  VerticalChange;
    bool    Cancelled;
};

/// <summary>
/// Specifies the type of action used to raise the Scroll event. 
/// </summary>
enum XRScrollEventType
{
    /// <summary>
    /// The Thumb was being dragged to a new position and has stopped moving.
    /// </summary>
    XRScrollEventType_EndScroll = 8,

    /// <summary>
    /// The Thumb moved to the Minimum position of the ScrollBar. 
    /// </summary>
    XRScrollEventType_First = 6,

    /// <summary>
    /// Thumb was moved a large distance. 
    /// The user clicked the scroll bar to the left(horizontal) or above(vertical) the scroll box.
    /// </summary>
    XRScrollEventType_LargeDecrement = 2,

    /// <summary>
    /// Thumb was moved a large distance. 
    /// The user clicked the scroll bar to the right(horizontal) or below(vertical) the scroll box.
    /// </summary>
    XRScrollEventType_LargeIncrement = 3,

    /// <summary>
    /// The Thumb moved to the Maximum position of the ScrollBar. 
    /// </summary>
    XRScrollEventType_Last = 7,

    /// <summary>
    /// Thumb was moved a small distance. The user clicked the left(horizontal) or top(vertical) scroll arrow.
    /// </summary>
    XRScrollEventType_SmallDecrement = 0,

    /// <summary>
    /// Thumb was moved a small distance. The user clicked the right(horizontal) or bottom(vertical) scroll arrow.
    /// </summary>
    XRScrollEventType_SmallIncrement = 1,

    /// <summary>
    /// The Thumb moved to a new position because the user selected Scroll Here in the shortcut menu of the ScrollBar. This movement corresponds to the ScrollHereCommand. To view the shortcut menu, right-click the mouse when the pointer is over the ScrollBar.
    /// </summary>
    XRScrollEventType_ThumbPosition = 4,

    /// <summary>
    /// The Thumb was dragged and is currently being moved due to a MouseMove event. 
    /// </summary>
    XRScrollEventType_ThumbTrack = 5
};

struct XRScrollEventArgs : XRRoutedEventArgs
{
    float  NewValue;
    XRScrollEventType  ScrollEventType;
};

/// <summary>
/// EventArgs indicating that a scroll has happened
/// </summary>
struct XRScrollChangedEventArgs : XRRoutedEventArgs
{
    float XOffset;
    float YOffset;
};

/// <summary>
/// EventArgs indicating that a value has changed
/// </summary>
template <typename _ValueType>
struct XRValueChangedEventArgs : XRRoutedEventArgs
{
    _ValueType OldValue;
    _ValueType NewValue;
};

/// <summary>
/// Cursor enum for XR, matches Silverlight
/// </summary>
enum XRCursor
{
    XRCursor_Default = 0,
    XRCursor_Arrow = 1,
    XRCursor_Hand = 2,
    XRCursor_Wait = 3,
    XRCursor_IBeam = 4,
    XRCursor_Stylus = 5,
    XRCursor_Eraser = 6,
    XRCursor_SizeNS = 7,
    XRCursor_SizeWE = 8,
    XRCursor_None = 9
};

/// <summary>
/// PlacementMode enum for XR, matches Silverlight
/// </summary>
   enum XRPlacementMode
    {
        /// <summary>
        ///     Positions the popup below the parent element and aligns the left edges of each.
        ///     If the popup crosses the lower edge of the screen, the position will flip to position
        ///     the popup above the parent. If that causes the popup to cross the upper edge of the screen,
        ///     then the popup will be positioned with its lower edge at the bottom of the screen. If it still
        ///     crosses the upper edge of the screen, then the upper edge of the popup will be positioned at
        ///     at the top of the screen.
        /// </summary>
        XRPlacementMode_Bottom = 2,

        /// <summary>
        ///     Positions the popup to the right side of the parent element and aligns the top edges of each.
        ///     If the popup crosses the lower edge of the screen, the popup and the parent will be
        ///     realigned with their bottom edges. If the popup crosses the upper edge, then the popup will be 
        ///     nudged onscreen, favoring keeping the top and left edges on screen.
        ///     If the popup crosses the right edge of the screen, the popup will flip to the left side of the
        ///     parent element unless that causes it to cross the left side of the screen.
        /// </summary>
        XRPlacementMode_Right = 4,

        /// <summary>
        /// This setting has the same effect as Bottom except that the bounding box (the 
        /// box which would normally bound the control) is the bounding box of the mouse cursor.  
        /// This has the effect of displaying the popup below the area occupied by the mouse 
        /// cursor.  Edge behaviors are the same as those defined by bottom.
        /// </summary>
        XRPlacementMode_Mouse = 7,

        /// <summary>
        ///     This mode is just like Right except it favors the left side instead of the right.
        /// </summary>
        XRPlacementMode_Left = 9,

        /// <summary>
        ///     This mode is just like Bottom except it favors the top side instead of the bottom.
        /// </summary>
        XRPlacementMode_Top = 10,

        /// <summary>
        ///     To identify a nullable value
        /// </summary>
        XRPlacementMode_None = -1,

    };

/// <summary>
/// EventArgs communicating an element that is being prepared to be re-virtualized.
/// </summary>
struct XRCleanUpVirtualizedItemEventArgs : XRRoutedEventArgs
{
    XRValue* pValue;
    IXRUIElement* pElement;
    bool Cancel;
};

/// <summary>
/// Scroll data
/// </summary>
struct ScrollData
{
public:

    ScrollData(): pScrollOwner(NULL)
    {
        ClearLayout();
    }

    bool CanHorizontallyScroll;
    bool CanVerticallyScroll;

    XRPoint Offset;
    XRPoint ComputedOffset;

    XRSize Viewport;
    XRSize Extent;
    XRSize MaxDesiredSize;

    IXRScrollViewer *pScrollOwner;

    void ClearLayout()
    {
        Offset.x = 0.0;
        Offset.y = 0.0;
        ComputedOffset.x = 0.0;
        ComputedOffset.y = 0.0;
        Viewport.cx = 0.0;
        Viewport.cy = 0.0;
        Extent.cx = 0.0;
        Extent.cy = 0.0;
        MaxDesiredSize.cx = 0.0;
        MaxDesiredSize.cy = 0.0;
    }
};

// Added for SL4_TEXT_STACK_DEPENDENCY.
/// <summary>
/// EventArgs indicating that a text composition has happened
/// </summary>
struct XRTextCompositionEventArgs : XRRoutedEventArgs
{
    /// <summary>
    /// Represents whether this event has been handled or not. If set to true, this event will not
    /// bubble up to the object's parent.
    /// </summary>
    BOOL                      Handled;

    BSTR                      Text;
    BSTR                      CompositionText;
};

//
// forward declaration
class IXRCustomUserControl;
class IXRResourceDictionary;
class IXREnumerable;
class XRValue;
class IXRPropertyBag;
class IXRValueCollection;
class IXRToolTip;
enum XRBindingMode;


class __declspec(uuid("{545C909B-3DBD-4d12-80D5-6116F01E99BD}")) _template_IXRDelegate; 
extern "C" const GUID __declspec(selectany) IID_IXRDelegate = __uuidof(_template_IXRDelegate);

template <typename ArgType, typename SenderType = IXRDependencyObject>
class __declspec(novtable) IXRDelegate : public IUnknown
{
public:
    virtual HRESULT STDMETHODCALLTYPE Invoke(
        SenderType* pSender,
        ArgType* EventArg
        ) = 0;
};

//
//
// IXRDependencyObject
//
//
// The base object which all other objects derive from
// 
class __declspec(novtable) __declspec(uuid("{8232D76C-ACFD-4c89-B512-22443968EB37}")) 
IXRDependencyObject : public IUnknown
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetDependencyProperty(__in DEPENDENCY_PROPERTY_ID id,__in XRValue* pValue) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetDependencyProperty(__in const WCHAR* pName,__in XRValue* pValue) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetAttachedProperty(__in const WCHAR* pName,__in_opt const WCHAR* pNamespace,__in bool Value) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetAttachedProperty(__in const WCHAR* pName,__in_opt const WCHAR* pNamespace,__in UINT Value) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetAttachedProperty(__in const WCHAR* pName,__in_opt const WCHAR* pNamespace,__in int Value) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetAttachedProperty(__in const WCHAR* pName,__in_opt const WCHAR* pNamespace,__in float Value) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetAttachedProperty(__in const WCHAR* pName,__in_opt const WCHAR* pNamespace,__in const WCHAR* pValue) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetAttachedProperty(__in const WCHAR* pName,__in_opt const WCHAR* pNamespace,__in COLORREF Value) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetAttachedProperty(__in const WCHAR* pName,__in_opt const WCHAR* pNamespace,__in XRGridLength* pGridLength) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetAttachedProperty(__in const WCHAR* pName,__in_opt const WCHAR* pNamespace,__in XRPoint* pPoint) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetAttachedProperty(__in const WCHAR* pName,__in_opt const WCHAR* pNamespace,__in XRThickness* pThickness) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetAttachedProperty(__in const WCHAR* pName,__in_opt const WCHAR* pNamespace,__in XRRect* pRect) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetAttachedProperty(__in const WCHAR* pName,__in_opt const WCHAR* pNamespace,__in XRRepeatBehavior* pRepeatBehavior) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetAttachedProperty(__in const WCHAR* pName,__in_opt const WCHAR* pNamespace,__in XRCornerRadius* pCornerRadius) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetAttachedProperty(__in const WCHAR* pName,__in_opt const WCHAR* pNamespace,__in IXREnumerable* pEnumerable) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetAttachedProperty(__in const WCHAR* pName,__in_opt const WCHAR* pNamespace,__in IXRDependencyObject* pDependencyObject) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetDependencyProperty(__in DEPENDENCY_PROPERTY_ID id,__inout XRValue* pValue) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetDependencyProperty(__in const WCHAR* pName,__inout XRValue* pValue) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetAttachedProperty(__in const WCHAR* pName,__in_opt const WCHAR* pNamespace,__out bool* pBool) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetAttachedProperty(__in const WCHAR* pName,__in_opt const WCHAR* pNamespace,__out UINT* pUInt) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetAttachedProperty(__in const WCHAR* pName,__in_opt const WCHAR* pNamespace,__out int* pInt) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetAttachedProperty(__in const WCHAR* pName,__in_opt const WCHAR* pNamespace,__out float* pFloat) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetAttachedProperty(__in const WCHAR* pName,__in_opt const WCHAR* pNamespace,__out BSTR* pBSTR) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetAttachedProperty(__in const WCHAR* pName,__in_opt const WCHAR* pNamespace,__out COLORREF* pColorRef) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetAttachedProperty(__in const WCHAR* pName,__in_opt const WCHAR* pNamespace,__out XRGridLength* pGridLength) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetAttachedProperty(__in const WCHAR* pName,__in_opt const WCHAR* pNamespace,__out XRPoint* pPoint) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetAttachedProperty(__in const WCHAR* pName,__in_opt const WCHAR* pNamespace,__out XRThickness* pThickness) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetAttachedProperty(__in const WCHAR* pName,__in_opt const WCHAR* pNamespace,__out XRRect* pRect) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetAttachedProperty(__in const WCHAR* pName,__in_opt const WCHAR* pNamespace,__out XRRepeatBehavior* pRepeatBehavior) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetAttachedProperty(__in const WCHAR* pName,__in_opt const WCHAR* pNamespace,__out XRCornerRadius* pCornerRadius) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetAttachedProperty(__in const WCHAR* pName,__in_opt const WCHAR* pNamespace,__out IXREnumerable** ppEnumerable) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetAttachedProperty(__in const WCHAR* pName,__in_opt const WCHAR* pNamespace,__out IXRDependencyObject** ppDependencyObject) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetName(__in const WCHAR* pName) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetName(__out BSTR* pBSTR) = 0;
        virtual HRESULT STDMETHODCALLTYPE AddDestroyedEventHandler(__in IXRDelegate<XREventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveDestroyedEventHandler(__in IXRDelegate<XREventArgs>* pDelegate) = 0;

        // Get the attached property.
        // 
        template<typename XRObj> HRESULT GetAttachedProperty(__in const WCHAR* pName,__in_opt const WCHAR* pNamespace,__out XRObj** ppObject)
        {
            IXRDependencyObject* pTemp = NULL;
        
            HRESULT hr = GetAttachedProperty(pName,pNamespace,&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppObject));
        
                pTemp->Release();
            }
        
            return hr;
        }


        // Get the dependency property.
        // 
        template<typename Value> HRESULT GetDependencyProperty(__in DEPENDENCY_PROPERTY_ID id,__out Value* pValue)
        {
            XRValue value;
        
            HRESULT hr = GetDependencyProperty(id,&value);
        
            if(SUCCEEDED(hr))
            {
                hr = value.GetValue(pValue);
        
                FreeXRValue(&value);
            }
        
            return hr;
        }


        // Get the dependency property.
        // 
        template<typename Value> HRESULT GetDependencyProperty(__in const WCHAR* pName,__out Value* pValue)
        {
            XRValue value;
        
            HRESULT hr = GetDependencyProperty(pName,&value);
        
            if(SUCCEEDED(hr))
            {
                hr = value.GetValue(pValue);
        
                FreeXRValue(&value);
            }
        
            return hr;
        }


        // Set the dependency property.
        // 
        template<typename Value> HRESULT SetDependencyProperty(__in DEPENDENCY_PROPERTY_ID id,__in Value pValue)
        {
            XRValue BoxedValue(pValue);
        
            return SetDependencyProperty(id, &BoxedValue);
        }


        // Set the dependency property.
        // 
        template<typename Value> HRESULT SetDependencyProperty(__in const WCHAR* pName,__in Value pValue)
        {
            XRValue BoxedValue(pValue);
        
            return SetDependencyProperty(pName, &BoxedValue);
        }

};

DEFINE_XR_IID( IXRDependencyObject );



class __declspec(uuid("{3985A294-7FB8-4567-94CC-980DE7DC3404}")) _template_IXRCustomEvent; 
extern "C" const GUID __declspec(selectany) IID_IXRCustomEvent = __uuidof(_template_IXRCustomEvent);

#define SLWE_XAML       L"SLWE_XAML" // SLWE stands for Silver Light for Windows Embedded 

/// <summary>
/// Custom event of XamlRuntime.
/// </summary>
template <typename ArgType, typename SenderType>
class __declspec(novtable) IXRCustomEvent : public IUnknown
{
public:
    /// <summary>
    /// Add an event handler to the event.
    /// </summary>
    /// <param name="pDelegate">[in] The delegate to be added.</param>
    /// <returns>
    /// <para>Indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE Attach(
        IXRDelegate<ArgType, SenderType>* pDelegate
        ) = 0;

    /// <summary>
    /// Remove an event handler from the event.
    /// </summary>
    /// <param name="pDelegate">[in] The delegate to be removed.</param>
    /// <returns>
    /// <para>Indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE Detach(
        IXRDelegate<ArgType, SenderType>* pDelegate
        ) = 0;

    /// <summary>
    /// Raise the event.
    /// </summary>
    /// <param name="pSender">[in] The raiser of the event.</param>
    /// <param name="pEventArg">[in] Event args of the event.</param>
    /// <returns>
    /// <para>Indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE Raise(
        SenderType* pSender,
        ArgType* pEventArg
        ) = 0;
};

/// <summary>
/// PropertyChanged custom event args.
/// </summary>
struct XRPropertyChangedCustomEventArgs : public XREventArgs
{
    // Name of the changed property.
    const WCHAR * PropertyName;
};

/// <summary>
/// Interface used for DataBinding as Source object.
/// </summary>
class __declspec(novtable) __declspec(uuid("{47BD7E86-2309-46ae-A461-4C6582544CE9}")) IXRPropertyBag : public IUnknown
{
public:
    /// <summary>
    /// Get value for a property identified by pstrPropertyName.
    /// </summary>
    /// <param name="pstrPropertyName">[in] The name of the property to get.</param>
    /// <param name="pValue">[out] The value of the property.</param>
    /// <returns>
    /// <para>Indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE GetValue(__in const WCHAR* pstrPropertyName, __out XRValue *pValue) = 0;

    /// <summary>
    /// Set value for a property identified by pstrPropertyName.
    /// </summary>
    /// <param name="pstrPropertyName">[in] The name of the property to set.</param>
    /// <param name="pValue">[in] The value of the property.</param>
    /// <returns>
    /// <para>Indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE SetValue(__in const WCHAR* pstrPropertyName, __in XRValue *pValue) = 0;

    /// <summary>
    /// Get the PropertyChanged custom event.
    /// </summary>
    /// <param name="pstrPropertyName">[in] The name of the property to set.</param>
    /// <param name="ppEvent">[out] The PropertyChanged custom event.</param>
    /// <returns>
    /// <para>Indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE GetPropertyChangedEvent(__out IXRCustomEvent<XRPropertyChangedCustomEventArgs, IXRPropertyBag>** ppEvent) = 0;
};

DEFINE_XR_IID( IXRPropertyBag );

/// <summary>
/// Supports a simple iteration over a XRValue collection. 
/// </summary>
class __declspec(novtable) __declspec(uuid("{C91D257D-F5D4-4d83-9AE8-EBFEDAA94278}")) IXREnumerator : public IUnknown
{
public:
    /// <summary>
    /// Advances the enumerator to the next element of the collection.
    /// </summary>
    /// <param name="pHasValue">[out] Whether the enumerator was successfully advanced to the next element.</param>
    /// <returns>
    /// <para>Indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE MoveNext(__out bool * pHasValue) = 0;

    /// <summary>
    /// Sets the enumerator to its initial position, which is before the first element in the collection
    /// </summary>
    /// <returns>
    /// <para>Indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE Reset() = 0;

    /// <summary>
    /// Gets the element in the collection at the current position of the enumerator. 
    /// </summary>
    /// <param name="pValue">[out] The element at the current position.</param>
    /// <returns>
    /// <para>Indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE GetCurrent(__out XRValue * pValue) = 0;

    /// <summary>
    /// Gets the unboxed element.
    /// </summary>
    /// <param name="pValue">[out] The unboxed element at the current position.</param>
    /// <returns>
    /// <para>Indicating success or failure</para>
    /// </returns>
    template<typename ItemType> HRESULT GetCurrent(__out ItemType *pValue)
    { return __ts_unbox1(this, &IXREnumerator::GetCurrent, pValue); }
};

DEFINE_XR_IID( IXREnumerator );

/// <summary>
/// Exposes the enumerator, which supports a simple iteration over a collection of a specified type. 
/// </summary>
class __declspec(novtable) __declspec(uuid("{23AF57A5-EE49-4e0e-922A-9CD01C57BD4D}")) IXREnumerable : public IUnknown
{
public:
    /// <summary>
    /// Returns an enumerator that iterates through a collection.
    /// </summary>
    /// <param name="ppEnumerator">[out] The enumerator to get.</param>
    /// <returns>
    /// <para>Indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE GetEnumerator(__out IXREnumerator ** ppEnumerator) = 0;
};

DEFINE_XR_IID( IXREnumerable );

    // The enumeration for different possible value types for a Dependency Property
    //
    enum VALUE_TYPE
    {
        // Un-assigned type
        VTYPE_NONE = 0,
        // 32 bit float value.
        VTYPE_FLOAT = 1,
        // 32 bit signed integer value.
        VTYPE_INT = 2,
        // boolean type
        VTYPE_BOOL = 3,
        // 32 bit integer enumeration.
        VTYPE_UINT = 4,
        // A8R8G8B8 value.
        VTYPE_COLOR = 5,
        // Length specified Read only UNICODE string.
        VTYPE_READONLY_STRING = 6,
        // BSTR string.
        VTYPE_BSTR = 7,
        // Pair of float values.
        VTYPE_POINT = 8,
        // Pair of point values.
        VTYPE_RECT = 9,
        // left, top, right, bottom
        VTYPE_THICKNESS = 10,
        // Size (can be handled like Point for the most part)
        VTYPE_SIZE = 11,
        // GridLength for specifying grid row/column dimensions
        VTYPE_GRIDLENGTH = 12,
        // Used to describe the radius of rectangle's corners
        VTYPE_CORNER_RADIUS = 13,
        // specify that it is of IXRDependencyObject  type
        VTYPE_OBJECT = 14,
        // specify that it is of IXRPropertyBag type
        VTYPE_PROPERTYBAG = 15,
        // specify that it is of IXREnumerable type
        VTYPE_ENUMERABLE = 16,
    };

// This class is used to get or set dependency property values or attached property values. 
//
class XRValue
{
public:
    XRValue() 
    {
        SetNull();
    }

    /// <summary>
    /// Template constructors to construct various type XRValue. No reference counting.
    /// </summary>
    template<typename ValueType>
    XRValue(__in const ValueType& Value, __in bool NeedFreeValuePointer = false)
    {
        SetValue(Value);
        ShouldFreeValuePointer = NeedFreeValuePointer;
    }

    /// <summary>
    /// Copy constructor. Copy value and AddRef for IUnknown-derived type, clone string for string type.
    /// </summary>
    XRValue(__in const XRValue & Value)
    {
        operator=(Value);
    }

    /// <summary>
    /// Box the string value to the XRValue.
    /// </summary>
    void SetValue(__in const WCHAR* pValue)
    {
        if (pValue)
        {
            vType = VTYPE_READONLY_STRING;
            pReadOnlyStringVal = pValue;
        }
        else
        {
            SetNull();
        }
    }

    /// <summary>
    /// Box the BSTR string value to the XRValue.
    /// </summary>
    /// <remark>
    /// ShouldFreeValuePointer must be set here. Otherwise it will conflict with SetValue(const WCHAR*)
    /// </remark>
    void SetValue(__in const BSTR Value, bool NeedFreeValuePointer)
    {
        if (Value)
        {
            vType = VTYPE_BSTR;
            bstrStringVal = Value;
            ShouldFreeValuePointer = NeedFreeValuePointer;
        }
        else
        {
            SetNull();
        }
    }

    /// <summary>
    /// Box the bool value to the XRValue.
    /// </summary>
    void SetValue(__in bool Value)
    {
        vType = VTYPE_BOOL;
        BoolVal = Value;
    }

    /// <summary>
    /// Box the UINT value to the XRValue.
    /// </summary>
    void SetValue(__in UINT Value)
    {
        vType = VTYPE_UINT;
        UIntVal = Value;
    }

    /// <summary>
    /// Box the int value to the XRValue.
    /// </summary>
    void SetValue(__in int Value)
    {
        vType = VTYPE_INT;
        IntVal = Value;
    }

    /// <summary>
    /// Box the float value to the XRValue.
    /// </summary>
    void SetValue(__in float Value)
    {
        vType = VTYPE_FLOAT;
        FloatVal = Value;
    }

    /// <summary>
    /// Box the COLORREF value to the XRValue.
    /// </summary>
    void SetValue(__in const COLORREF& Value)
    {
        vType = VTYPE_COLOR;
        ColorVal = Value;
    }

    /// <summary>
    /// Box the XRRect value to the XRValue.
    /// </summary>
    void SetValue(__in const XRRect& Value)
    {
        vType = VTYPE_RECT;
        RectVal = Value;
    }

    /// <summary>
    /// Box the XRPoint value to the XRValue.
    /// </summary>
    void SetValue(__in const XRPoint& Value)
    {
        vType = VTYPE_POINT;
        PointVal = Value;
    }

    /// <summary>
    /// Box the XRSize value to the XRValue.
    /// </summary>
    void SetValue(__in const XRSize& Value)
    {
        vType = VTYPE_SIZE;
        SizeVal = Value;
    }

    /// <summary>
    /// Box the XRGridLength value to the XRValue.
    /// </summary>
    void SetValue(__in const XRGridLength& Value)
    {
        vType = VTYPE_GRIDLENGTH;
        GridLengthVal = Value;
    }

    /// <summary>
    /// Box the XRThickness value to the XRValue.
    /// </summary>
    void SetValue(__in const XRThickness& Value)
    {
        vType = VTYPE_THICKNESS;
        ThicknessVal = Value;
    }

    /// <summary>
    /// Box the XRCornerRadius value to the XRValue.
    /// </summary>
    void SetValue(__in const XRCornerRadius& Value)
    {
        vType = VTYPE_CORNER_RADIUS;
        CornerRadiusVal = Value;
    }

    /// <summary>
    /// Box the IXRDependencyObject* value to the XRValue.
    /// </summary>
    void SetValue(__in IXRDependencyObject * pValue, bool NeedFreeValuePointer = false)
    {
        if (pValue)
        {
            vType = VTYPE_OBJECT;
            pObjectVal = pValue;
            ShouldFreeValuePointer = NeedFreeValuePointer;
        }
        else
        {
            SetNull();
        }
    }

    /// <summary>
    /// Box the IXRPropertyBag value to the XRValue.
    /// </summary>
    void SetValue(__in IXRPropertyBag *pValue, bool NeedFreeValuePointer = false)
    {
        if (pValue)
        {
            vType = VTYPE_PROPERTYBAG;
            pPropertyBagVal = pValue;
            ShouldFreeValuePointer = NeedFreeValuePointer;
        }
        else
        {
            SetNull();
        }
    }

    /// <summary>
    /// Box the IXREnumerable value to the XRValue.
    /// </summary>
    void SetValue(__in IXREnumerable *pValue, bool NeedFreeValuePointer = false)
    {
        if (pValue)
        {
            vType = VTYPE_ENUMERABLE;
            pEnumerableVal = pValue;
            ShouldFreeValuePointer = NeedFreeValuePointer;
        }
        else
        {
            SetNull();
        }
    }

    /// <summary>
    /// Get the bool value if it's VTYPE_BOOL type
    /// </summary>
    HRESULT GetValue(__out bool* pValue)
    {
        HRESULT hr = S_OK;
        if (!pValue)
        {
            return E_POINTER;
        }
        
        switch (vType)
        {
            case VTYPE_BOOL:
            {
                *pValue = BoolVal;
                break;
            }

            case VTYPE_UINT:
            {
                *pValue = (0 != UIntVal);
                break;
            }

            case VTYPE_INT:
            {
                *pValue = (0 != IntVal);
                break;
            }
            

            case VTYPE_FLOAT:
            {
                *pValue = (0 != FloatVal);
                break;
            }

            case VTYPE_NONE:
            {
                *pValue = (bool)NULL;
                break;
            }

            default:
                hr = E_FAIL;
        }

        return hr;
    }

    /// <summary>
    /// Get the UINT value if it's VTYPE_UINT type
    /// </summary>
    HRESULT GetValue(__out UINT* pValue)
    {
        HRESULT hr = S_OK;
        if (!pValue)
        {
            return E_POINTER;
        }
        
        switch (vType)
        {
            case VTYPE_BOOL:
            {
                *pValue = (unsigned int)BoolVal;
                break;
            }

            case VTYPE_UINT:
            {
                *pValue = UIntVal;
                break;
            }

            case VTYPE_INT:
            {
                *pValue = (unsigned int)IntVal;
                break;
            }

            case VTYPE_FLOAT:
            {
                *pValue = (unsigned int)FloatVal;
                break;
            }

            case VTYPE_NONE:
            {
                *pValue = (unsigned int)NULL;
                break;
            }

            default:
                hr = E_FAIL;
        }

        return hr;
    }

    /// <summary>
    /// Get the int value if it's VTYPE_INT type
    /// </summary>
    HRESULT GetValue(__out int* pValue)
    {
        HRESULT hr = S_OK;
        if (!pValue)
        {
            return E_POINTER;
        }
        
        switch (vType)
        {
            case VTYPE_BOOL:
            {
                *pValue = (int)BoolVal;
                break;
            }

            case VTYPE_UINT:
            {
                *pValue = (int)UIntVal;
                break;
            }

            case VTYPE_INT:
            {
                *pValue = IntVal;
                break;
            }

            case VTYPE_FLOAT:
            {
                *pValue = (int)FloatVal;
                break;
            }

            case VTYPE_NONE:
            {
                *pValue = (int)NULL;
                break;
            }

            default:
                hr = E_FAIL;
        }

        return hr;
    }

    /// <summary>
    /// Get the float value if it's VTYPE_FLOAT type
    /// </summary>
    HRESULT GetValue(__out float* pValue)
    {
        HRESULT hr = S_OK;
        if (!pValue)
        {
            return E_POINTER;
        }
        
        switch (vType)
        {
            case VTYPE_BOOL:
            {
                *pValue = (float)BoolVal;
                break;
            }

            case VTYPE_UINT:
            {
                *pValue = (float)UIntVal;
                break;
            }

            case VTYPE_INT:
            {
                *pValue = (float)IntVal;
                break;
            }

            case VTYPE_FLOAT:
            {
                *pValue = FloatVal;
                break;
            }

            case VTYPE_NONE:
            {
                *pValue = (float)NULL;
                break;
            }

            default:
                hr = E_FAIL;
        }

        return hr;
    }

    /// <summary>
    /// Get the allocated BSTR value from the XRValue if it's string. The value will be always cloned.
    /// </summary>
    HRESULT GetValue(__out BSTR* pValue)
    {
        HRESULT hr = S_OK;
        if (!pValue)
        {
            return E_POINTER;
        }

        switch (vType)
        {
            case VTYPE_READONLY_STRING:
            {
                *pValue = SysAllocString(pReadOnlyStringVal);
                break;
            }

            case VTYPE_BSTR:
            {
                *pValue = SysAllocString(bstrStringVal);
                break;
            }

            case VTYPE_NONE:
            {
                *pValue = NULL;
                break;
            }

            default:
                hr = E_FAIL;
        }

        return hr;
    }


    /// <summary>
    /// Get the COLORREF value if it's VTYPE_COLOR type
    /// </summary>
    HRESULT GetValue(__out COLORREF* pValue)
    {
        HRESULT hr = S_OK;
        if (!pValue)
        {
            return E_POINTER;
        }
        
        switch (vType)
        {
            case VTYPE_UINT:
            {
                *pValue = (COLORREF)UIntVal;
                break;
            }

            case VTYPE_COLOR:
            {
                *pValue = ColorVal;
                break;
            }

            case VTYPE_NONE:
            {
                *pValue = (COLORREF)NULL;
                break;
            }

            default:
                hr = E_FAIL;
        }

        return hr;
    }

    /// <summary>
    /// Get the XRRect value if it's VTYPE_RECT type
    /// </summary>
    HRESULT GetValue(__out XRRect* pValue)
    {
        HRESULT hr = S_OK;
        if (!pValue)
        {
            return E_POINTER;
        }
        
        switch (vType)
        {
            case VTYPE_RECT:
            {
                *pValue = RectVal;
                break;
            }

            case VTYPE_NONE:
            {
                XRRect Null = {0};
                *pValue = Null;
                break;
            }

            default:
                hr = E_FAIL;
        }

        return hr;
    }

    /// <summary>
    /// Get the XRPoint value if it's VTYPE_POINT type
    /// </summary>
    HRESULT GetValue(__out XRPoint* pValue)
    {
        HRESULT hr = S_OK;
        if (!pValue)
        {
            return E_POINTER;
        }
        
        switch (vType)
        {
            case VTYPE_POINT:
            {
                *pValue = PointVal;
                break;
            }

            case VTYPE_NONE:
            {
                XRPoint Null = {0};
                *pValue = Null;
                break;
            }

            default:
                hr = E_FAIL;
        }

        return hr;
    }

    /// <summary>
    /// Get the XRSize value if it's VTYPE_SIZE type
    /// </summary>
    HRESULT GetValue(__out XRSize* pValue)
    {
        HRESULT hr = S_OK;
        if (!pValue)
        {
            return E_POINTER;
        }
        
        switch (vType)
        {
            case VTYPE_SIZE:
            {
                *pValue = SizeVal;
                break;
            }

            case VTYPE_NONE:
            {
                XRSize Null = {0};
                *pValue = Null;
                break;
            }

            default:
                hr = E_FAIL;
        }

        return hr;
    }

    /// <summary>
    /// Get the XRGridLength value if it's VTYPE_GRIDLENGTH type
    /// </summary>
    HRESULT GetValue(__out XRGridLength* pValue)
    {
        HRESULT hr = S_OK;
        if (!pValue)
        {
            return E_POINTER;
        }
        
        switch (vType)
        {
            case VTYPE_GRIDLENGTH:
            {
                *pValue = GridLengthVal;
                break;
            }

            case VTYPE_NONE:
            {
                XRGridLength Null = {0};
                *pValue = Null;
                break;
            }

            default:
                hr = E_FAIL;
        }

        return hr;
    }

    /// <summary>
    /// Get the XRThickness value if it's VTYPE_THICKNESS type
    /// </summary>
    HRESULT GetValue(__out XRThickness* pValue)
    {
        HRESULT hr = S_OK;
        if (!pValue)
        {
            return E_POINTER;
        }
        
        switch (vType)
        {
            case VTYPE_THICKNESS:
            {
                *pValue = ThicknessVal;
                break;
            }

            case VTYPE_NONE:
            {
                XRThickness Null = {0};
                *pValue = Null;
                break;
            }

            default:
                hr = E_FAIL;
        }

        return hr;
    }

    /// <summary>
    /// Get the XRCornerRadius value if it's VTYPE_CORNER_RADIUS type
    /// </summary>
    HRESULT GetValue(__out XRCornerRadius* pValue)
    {
        HRESULT hr = S_OK;
        if (!pValue)
        {
            return E_POINTER;
        }
        
        switch (vType)
        {
            case VTYPE_CORNER_RADIUS:
            {
                *pValue = CornerRadiusVal;
                break;
            }

            case VTYPE_NONE:
            {
                XRCornerRadius Null = {0};
                *pValue = Null;
                break;
            }

            default:
                hr = E_FAIL;
        }

        return hr;
    }



    /// <summary>
    /// Get the IXRDependencyObject* value if it's VTYPE_OBJECT type
    /// </summary>
    HRESULT GetValue(__out IXRDependencyObject** ppValue)
    {
        HRESULT hr = S_OK;
        if (!ppValue)
        {
            return E_POINTER;
        }
        
        switch (vType)
        {
            case VTYPE_OBJECT:
            {
                *ppValue = pObjectVal;
                if (pObjectVal)
                {
                    pObjectVal->AddRef();
                }
                break;
            }

            case VTYPE_NONE:
            {
                *ppValue = NULL;
                break;
            }

            default:
                *ppValue = NULL;
                hr = E_FAIL;
        }

        return hr;
    }

    /// <summary>
    /// Get the IXRPropertyBag* value if it's VTYPE_PROPERTYBAG type
    /// </summary>
    HRESULT GetValue(__out IXRPropertyBag** ppValue)
    {
        HRESULT hr = S_OK;
        if (!ppValue)
        {
            return E_POINTER;
        }
        
        switch (vType)
        {
            case VTYPE_PROPERTYBAG:
            {
                *ppValue = pPropertyBagVal;
                if (pPropertyBagVal)
                {
                    pPropertyBagVal->AddRef();
                }
                break;
            }

            case VTYPE_NONE:
            {
                *ppValue = NULL;
                break;
            }

            default:
                *ppValue = NULL;
                hr = E_FAIL;
        }

        return hr;
    }

    /// <summary>
    /// Get the IXREnumerable* value if it's VTYPE_ENUMERABLE type
    /// </summary>
    HRESULT GetValue(__out IXREnumerable** ppValue)
    {
        HRESULT hr = S_OK;
        if (!ppValue)
        {
            return E_POINTER;
        }
        
        switch (vType)
        {
            case VTYPE_ENUMERABLE:
            {
                *ppValue = pEnumerableVal;
                if (pEnumerableVal)
                {
                    pEnumerableVal->AddRef();
                }
                break;
            }

            case VTYPE_NONE:
            {
                *ppValue = NULL;
                break;
            }

            default:
                *ppValue = NULL;
                hr = E_FAIL;
        }

        return hr;
    }

    /// <summary>
    /// Get the IXRDependencyObject/IXREnumerable/IXRPropertyBag-derived pointer value.
    /// </summary>
    template<typename XRObj> HRESULT GetValue(__out XRObj ** ppValue)
    {
        HRESULT hr = E_FAIL;
        switch(vType)
        {
        case VTYPE_OBJECT:
            {
                typedef HRESULT (XRValue::*Fn_GetValue_IXRDependencyObject)(IXRDependencyObject**);
                hr = __ts_converter1<IXRDependencyObject*>(this, (Fn_GetValue_IXRDependencyObject)&XRValue::GetValue, ppValue);
                break;
            }
        case VTYPE_PROPERTYBAG:
            {
                typedef HRESULT (XRValue::*Fn_GetValue_IXRPropertyBag)(IXRPropertyBag**);
                hr = __ts_converter1<IXRPropertyBag*>(this, (Fn_GetValue_IXRPropertyBag)&XRValue::GetValue, ppValue);
                break;
            }
        case VTYPE_ENUMERABLE:
            {
                typedef HRESULT (XRValue::*Fn_GetValue_IXREnumerable)(IXREnumerable**);
                hr = __ts_converter1<IXREnumerable*>(this, (Fn_GetValue_IXREnumerable)&XRValue::GetValue, ppValue);
                break;
            }
        case VTYPE_NONE:
            {
                if (ppValue)
                {
                    *ppValue = NULL;
                    hr = S_OK;
                }
                break;
            }
        }

        return hr;
    }

    void SetNull()
    {
        vType = VTYPE_NONE; 
        CornerRadiusVal.BottomLeft = 0;
        CornerRadiusVal.BottomRight = 0;
        CornerRadiusVal.TopLeft = 0;
        CornerRadiusVal.TopRight = 0;
        ShouldFreeValuePointer = false;
    }

    /// <summary>
    /// Assign vallue from other XRValue. Will AddRef for IUnknown-derived type, and clone string for VTYPE_BSTR type.
    /// </summary>
    /// <remark>
    /// If errors happen, VTYPE_NONE is set.
    /// </remark>
    const XRValue& operator=(const XRValue & Value)
    {
        ZeroMemory(this, sizeof(XRValue));
        vType = Value.vType; 

        // We'll copy string or AddRef, so set the flag. If the type is not string or IUnknown-derived, this flag will be copied from source Value below.
        ShouldFreeValuePointer = true;
        switch (vType)
        {
        case VTYPE_BSTR:
            {
                if (Value.bstrStringVal)
                {
                    bstrStringVal = SysAllocString(Value.bstrStringVal);
                    // OOM, set null.
                    if (!bstrStringVal)
                    {
                        SetNull();
                    }
                }
            }
            break;

        case VTYPE_READONLY_STRING:
            {
                if (Value.pReadOnlyStringVal)
                {
                    size_t StringLength = 0;
                    //First calculate the lenght to assertain a NULL terminated string
                    if (SUCCEEDED(StringCchLengthW(Value.pReadOnlyStringVal, STRSAFE_MAX_CCH, &StringLength)))
                    {
                        bstrStringVal = SysAllocString(Value.pReadOnlyStringVal);
                        // OOM, set null.
                        if (!bstrStringVal)
                        {
                            SetNull();
                        }
                        else
                        {
                            vType = VTYPE_BSTR;
                        }
                    }
                    else
                    {
                        SetNull();
                    }
                }
            }
            break;

        case VTYPE_OBJECT:
            pObjectVal = Value.pObjectVal; 
            if (pObjectVal)
            {
                pObjectVal->AddRef();
            }
            break; 

        case VTYPE_PROPERTYBAG:
            pPropertyBagVal = Value.pPropertyBagVal;
            if (pPropertyBagVal)
            {
                pPropertyBagVal->AddRef();
            }
            break;

        case VTYPE_ENUMERABLE:
            pEnumerableVal = Value.pEnumerableVal;
            if (pEnumerableVal)
            {
                pEnumerableVal->AddRef();
            }
            break;

        default:
            memcpy(this, &Value, sizeof(XRValue)); 
            break;
        }

        return *this;
    }

    // Flag used to indicate whether XRValue is strongly refering the value.
    // True when XRValue owns the vlaue. Then the user of the XRValue should FreeXRValue after using it. 
    // False in other case. It can prevent FreeXRValue freeing the value if false is set.
    // This flag is checked in FreeXRValue. FreeXRValue only works when this flag is set to true.
    //
    bool ShouldFreeValuePointer;
    VALUE_TYPE vType;
    union 
    {
        // 32 bit float value.
        float FloatVal;
        // 32 bit signed integer value.
        int IntVal;
        // 0 = false, other = true.
        bool BoolVal;
        // 32 bit integer enumeration.
        unsigned int UIntVal;
        // A8R8G8B8 value.
        COLORREF ColorVal;
        // Length specified ReadOnly UNICODE string.
        const WCHAR* pReadOnlyStringVal;
        // BSTR for passing Allocated string values
        BSTR bstrStringVal; 
        // Pair of float values.
        XRPoint PointVal;
        // Pair of point values.
        XRRect RectVal;
        // left, top, right, bottom
        XRThickness ThicknessVal;
        // Size (can be handled like Point for the most part)
        XRSize SizeVal;
        // GridLength for specifying grid row/column dimensions
        XRGridLength GridLengthVal;
        // Used to describe the radius of rectangle's corners
        XRCornerRadius CornerRadiusVal;
        // used to specify an XR object
        IXRDependencyObject* pObjectVal;
        // used to specify an IXRPropertyBag object
        IXRPropertyBag* pPropertyBagVal;
        // used to specify an IXREnumerable object
        IXREnumerable* pEnumerableVal;
    };

};



/// <summary>
/// Frees the memory of an XRValue object and clears up all refs
/// </summary>
extern "C" void WINAPI FreeXRValue(__in XRValue* pValue);


// Function Pointer for creating a Control. The XamlRuntime calls this function when it encounters an unknown XAML tag.
// Register this function along with the object registration, so that the XamlRuntime will call this when the object tag is encountered.
//
typedef HRESULT (CALLBACK *PFN_CREATE_CONTROL)(IXRDependencyObject *pExistingXRDO, IXRDependencyObject** pNewXRDO);

// Function Pointer for creating a XAML object. The XamlRuntime calls this function when it encounters an unknown XAML tag.
// Register this function along with the object registration, so that the XamlRuntime will call this when the object tag is encountered.
//
typedef HRESULT (CALLBACK *PFN_CREATE_XAMLOBJECT)(IXRDependencyObject *pExistingXRDO, UINT objectId);

// Function Pointer for specifying a type converter of a Dependency Property. This is part of the Property Metadata structure.
// When specified in the Property Metadata, XamlRuntime calls this function so that the function has the ability to convert to the right object type and value.
//
typedef HRESULT (CALLBACK* PFN_TYPE_CONVERTER)(XRValue *pValIn, XRValue *pValOut);

// Function Pointer for recieiving property change notifications of a Dependency Property Value. This is part of the Property Metadata structure.
// When specified in the Property Metadata, XamlRuntime calls this function when the value of Dependency Property changes. 
//
typedef void    (CALLBACK* PFN_PROPERTY_CHANGE)(IXRDependencyObject* pControl, XRValue* pOldValue, XRValue* pNewValue);

// Function Pointer for creating the container for an enumerable Dependency Property. This is part of the Property Metadata structure.
// When specified in the Property Metadata, XamlRuntime calls this function when an enumerable Dependency Property is encountered. 
//
typedef void    (CALLBACK* PFN_ENUMERABLE_PROPERTY_CREATE)(IXRValueCollection** ppCollection);

/// <summary>
/// XRDependencyPropertyMetaData: Dependency Property metadata for a Custom User Control. Pass this to the Registration API to specify any metadata for the Dependency Property
/// </summary>
///
struct XRDependencyPropertyMetaData
{
    DWORD                           Size;
    PFN_PROPERTY_CHANGE             pfnPropertyChangeNotification;
    PFN_TYPE_CONVERTER              pfnTypeConverter;
    PFN_ENUMERABLE_PROPERTY_CREATE  pfnEnumerableCreation;
    XRValue                         DefaultValue;
    bool                            IsContent;

    XRDependencyPropertyMetaData()
    {
        Size                            = sizeof(XRDependencyPropertyMetaData);
        pfnPropertyChangeNotification   = NULL;
        pfnTypeConverter                = NULL;
        pfnEnumerableCreation           = NULL;
        IsContent                       = false;
    }
    ~XRDependencyPropertyMetaData()
    {
        // ensure that any DefaultValue references (IXRDO, IXREnumerable, 
        // etc) are released
        FreeXRValue(&DefaultValue);
    }
};



// forward declaration
interface IWICBitmap;
class IXRDependencyObject;

/// <doc_scope tref="Shell" visibility="SDK">

// Enter Shell\XamlRuntime
/// <topic name="XamlRuntime" displayname="XamlRuntime"></topic>
/// <doc_scope tref="XamlRuntime" visibility="SDK">
///


// Enter Shell\XamlRuntime\Error Codes
/// <topic name="XamlRuntime_error" displayname="Error Codes"></topic>
/// <doc_scope tref="XamlRuntime_error" visibility="SDK">

// 47 is the atomic weight of Silver...
#define XR_FACILITY_CODE        0x47
#define XR_E_BASE               MAKE_HRESULT(SEVERITY_ERROR, XR_FACILITY_CODE, 0)
//Parser Errors
#define XR_E_PARSER_BASE        (XR_E_BASE + 100)
//Type Errors
#define XR_E_TYPE_BASE          (XR_E_BASE + 200)
//Collection Errors
#define XR_E_COLLECTION_BASE    (XR_E_BASE + 300)


/// <summary>
/// XRInitialize hasn't been successfully called yet
/// </summary>
#define XR_E_NOT_INITIALIZED        (XR_E_BASE + 1)

/// <summary>
/// The majority of the XR APIs can only be accessed from a single thread. 
/// This error code indicates that the API was called from a different thread than
/// the system was initialized on
/// </summary>
#define XR_E_INVALID_THREAD_ACCESS  (XR_E_BASE + 2)

/// <summary>
/// This API was called on an object in an invalid state. For example a host that has already been
/// destroyed or a dialog that is being closed without EndDialog
/// </summary>
#define XR_E_INVALID_STATE          (XR_E_BASE + 3)

/// <summary>
/// This API was unable to locate the type requested.
/// </summary>
#define XR_E_ELEMENT_NOT_FOUND      (XR_E_BASE + 4)

/// <summary>
/// An attempt was made to register a custom control with a name that already exists
/// </summary>
#define XR_E_DUPLICATE_REGISTRATION (XR_E_BASE + 5)

/// <summary>
/// An attempt was made to use an non XR object
/// </summary>
#define XR_E_INVALID_OBJECT         (XR_E_BASE + 6)

/// <summary>
/// This API was unable to locate the Property requested.
/// </summary>
#define XR_E_INVALID_PROPERTY      (XR_E_BASE + 7)

/// <summary>
/// An invalid root (child or already belongs to a valid scene) is used to create a host from
/// </summary>
#define XR_E_INVALID_ROOT_FOR_CREATING_HOST     (XR_E_BASE + 8)

/// <summary>
/// Trying to instantiate an abstract base class - you must use a derived class
/// </summary>
#define XR_E_ABSTRACT_BASE_CLASS     (XR_E_BASE + 9)

/// <summary>
/// The specified dependency property cannot be resolved because is not an attached property.
/// </summary>
#define XR_E_NOT_AN_ATTACHED_PROPERTY (XR_E_BASE + 10)

/// <summary>
/// The action is not supported by the API
/// </summary>
#define XR_E_NOT_SUPPORTED (XR_E_BASE + 11)

/// <summary>
/// The content for this element is resource name not set
/// </summary>
#define XR_E_DO_RESOURCE_NAMENOTSET     (XR_E_BASE + 12)

/// <summary>
/// The content for this element is resource key and name set
/// </summary>
#define XR_E_DO_RESOURCE_KEYANDNAMESET  (XR_E_BASE + 13)

/// The content for this element is invalid operation
/// </summary>
#define XR_E_NER_INVALID_OPERATION      (XR_E_BASE + 14)

/// <summary>
/// The root element is missing the default namespace declaration
/// </summary>
#define XR_E_PARSER_MISSING_DEFAULT_NAMESPACE (XR_E_PARSER_BASE + 1)

/// <summary>
/// The element being parsed is unknown
/// </summary>
#define XR_E_PARSER_UNKNOWN_ELEMENT     (XR_E_PARSER_BASE + 2)

/// <summary>
/// The attribute being parsed is unknown 
/// </summary>
#define XR_E_PARSER_UNKNOWN_ATTRIBUTE   (XR_E_PARSER_BASE + 3)

/// <summary>
/// The element or attribute being parsed belongs to an unknown namespace
/// </summary>
#define XR_E_PARSER_UNKNOWN_NAMESPACE   (XR_E_PARSER_BASE + 4)

/// <summary>
/// The property being parsed is invalid in this context
/// </summary>
#define XR_E_PARSER_INVALID_PROPERTY     (XR_E_PARSER_BASE + 5)

/// <summary>
/// There are multiple property element values for the given element
/// for example: 
///  <foo>
///     <foo.bar>10</foo.bar>
///     <foo.bar>12</foo.bar>
///  </foo>
///
/// </summary>
#define XR_E_PARSER_MULTIPLE_PROPERTY_ELEMENT_VALUES (XR_E_PARSER_BASE + 6)

/// <summary>
/// Both x:Name and Name cannot be specified on an element
/// </summary>
#define XR_E_PARSER_INVALID_ATTRIBUTE       (XR_E_PARSER_BASE + 7)

/// <summary>
/// The value for this attribute is invalid
/// </summary>
#define XR_E_PARSER_INVALID_ATTRIBUTE_VALUE (XR_E_PARSER_BASE + 8)

/// <summary>
/// The value for this attribute is out of acceptable range
/// </summary>
#define XR_E_PARSER_ATTRIBUTE_OUT_OF_RANGE  (XR_E_PARSER_BASE + 9)

/// <summary>
/// This attribute is read-only and cannot be set in XAML
/// </summary>
#define XR_E_PARSER_ATTRIBUTE_READONLY      (XR_E_PARSER_BASE + 10)

/// <summary>
/// The static resource could not be resolved
/// </summary>
#define XR_E_PARSER_FAILED_RESOURCE_FIND (XR_E_PARSER_BASE + 11)

/// <summary>
/// Both Key and Name cannot be set in this element inside a resource dictionary
/// </summary>
#define XR_E_PARSER_RESOURCE_KEY_AND_NAME_SET     (XR_E_PARSER_BASE + 12)

/// <summary>
/// This element does not support text as content
/// </summary>
#define XR_E_PARSER_TEXT_CONTENT_UNSUPPORTED (XR_E_PARSER_BASE + 13)

/// <summary>
/// The content for this element is invalid
/// </summary>
#define XR_E_PARSER_INVALID_CONTENT          (XR_E_PARSER_BASE + 14)

//Type Specific Errors

/// <summary>
/// Cannot beging this storyboard. The property to be animated is invalid
/// </summary>
#define XR_E_STORYBOARD_BEGIN_INVALID_PROPERTY  (XR_E_TYPE_BASE + 1)

/// <summary>
/// Cannot beging this storyboard. The specified target is invalid
/// </summary>
#define XR_E_STORYBOARD_BEGIN_INVALID_TARGET    (XR_E_TYPE_BASE + 2)

/// <summary>
/// Cannot beging this storyboard. There is no target to animate
/// </summary>
#define XR_E_STORYBOARD_BEGIN_NO_TARGET         (XR_E_TYPE_BASE + 3)

/// <summary>
/// Cannot beging this storyboard. There is no conversion available between the target properties and object
/// </summary>
#define XR_E_STORYBOARD_BEGIN_INCOMPATIBLE_TYPE (XR_E_TYPE_BASE + 4)

/// <summary>
/// Cannot compose this animation with the currently running animation
/// </summary>
#define XR_E_STORYBOARD_BEGIN_ANIMATION_COMPOSITION (XR_E_TYPE_BASE + 5)

/// <summary>
/// Invalid Keytime specific for the beginning of this storyboard
/// </summary>
#define XR_E_STORYBOARD_BEGIN_INVALID_KEYTIME   (XR_E_TYPE_BASE + 6)

/// <summary>
/// "Storyboard" must be the root element of this timeline collection
/// </summary>
#define XR_E_STORYBOARD_MUST_BE_ROOT            (XR_E_TYPE_BASE + 7)

/// <summary>
/// No valid duration specified for this skip-to-fill operation
/// </summary>
#define XR_E_STORYBOARD_SKIPTOFILL_NO_DURATION  (XR_E_TYPE_BASE + 8)

/// <summary>
/// Cannot modify this active animation
/// </summary>
#define XR_E_STORYBOARD_MODIFY_ACTIVE_ANIMATION (XR_E_TYPE_BASE + 9)

/// <summary>
/// Cannot add an element with the same name as another element in this collection
/// </summary>
#define XR_E_COLLECTION_DUPLICATE_NAME          (XR_E_TYPE_BASE + 10)

/// <summary>
/// This element is already associated with another collection. You must remove it
/// from the old collection first
/// </summary>
#define XR_E_COLLECTION_ELEMENT_ALREADY_ASSOCIATED (XR_E_TYPE_BASE + 11)

/// <summary>
/// This element is not yet created.
/// </summary>
#define XR_E_ELEMENT_NOT_CREATED (XR_E_TYPE_BASE + 12)


#define XR_MAXIMUM_CUSTOM_CONTROL_NAME_LENGTH 64 // including null


#define XR_MAXIMUM_NAMESPACE_LENGTH 256// including null

// Exit Shell\XamlRuntime\Error Codes
/// </doc_scope>

// Enter Shell\XamlRuntime\Enumerations
/// <topic name="XamlRuntime_types" displayname="Enumerations"></topic>
/// <doc_scope tref="XamlRuntime_types" visibility="SDK">

// Exit Shell\XamlRuntime\Enumerations
/// </doc_scope>

// Enter Shell\XamlRuntime\Structures
/// <topic name="XamlRuntime_structs" displayname="Structures" ></topic>
/// <doc_scope tref="XamlRuntime_structs">


/// <summary>
/// A source containing XAML for the XamlRuntime to load
/// </summary>
/// <remarks>
/// The user of this struct is responsible for managing the lifetime of the
/// data set into the object and ensuring that it is available when 
/// used as a XAML source.
/// </remarks>
struct XRXamlSource
{
    // Enumeration listing the possible types for
    // the source XAML
    enum SourceType
    {
        XRS_STRING = 0,
        XRS_FILENAME,
        XRS_RESOURCE,
        XRS_STREAM
    };

    /// <summary>
    /// The type of this structure.
    /// </summary>
    SourceType    Type;

    
    /// <summary>
    /// The data in this structure.
    /// </summary>
    union
    {
        /// <summary>
        /// XAML or File Name whose contents are XAML as a null-terminated string.
        /// </summary>
        const WCHAR* pStr; 

        /// <summary>
        /// An IStream interface containing XAML content.
        /// </summary>
        IStream*     pStream;

        /// <summary>
        /// A location and resource containing XAML content.
        /// </summary>
        struct tagResouce
        {
            HMODULE      hMod;
            const WCHAR* pResType;
            const WCHAR* pResID;
        } Resource;
    } Value;

    // Helper methods to simplify initilization

    /// <summary>
    /// Setup the struct to contain a file name as the XAML source.
    /// </summary>
    void SetFile(const WCHAR* psz) 
    {
        Type        = XRS_FILENAME; 
        Value.pStr  = psz;
    }

    /// <summary>
    /// Setup the struct to contain a string that contains the XAML source.
    /// </summary>
    void SetString(const WCHAR* psz) 
    {
        Type        = XRS_STRING; 
        Value.pStr  = psz;
    }

    /// <summary>
    /// Setup the struct to contain information to locate the XAML source in 
    /// a resource.
    /// </summary>
    /// <param name="h">This is the HMODULE that contains the XAML resource.</param>
    /// <param name="pType">The string value of the type of resource.</param>
    /// <param name="pID">The resource ID of the XAML.</param>
    void SetResource(HMODULE h, const WCHAR* pType, const WCHAR* pID)
    {
        Type                    = XRS_RESOURCE;
        Value.Resource.hMod     = h;
        Value.Resource.pResType = pType;
        Value.Resource.pResID   = pID;
    }

    /// <summary>
    /// Setup the struct to contain information to locate the XAML source in 
    /// a resource.
    /// </summary>
    /// <param name="h">This is the HMODULE that contains the XAML resource.</param>
    /// <param name="ResID">The resource ID of the XAML.</param>
    void SetResource(HMODULE h,UINT ResID)
    {
        Type                    = XRS_RESOURCE;
        Value.Resource.hMod     = h;
        Value.Resource.pResType = SLWE_XAML;
        Value.Resource.pResID   = MAKEINTRESOURCE(ResID);
    }


    /// <summary>
    /// Setup the struct to contain a COM IStream interface implementation.
    /// </summary>
    /// <param name="p">A pointer to the IStream interface.</param>
    /// <remarks>
    /// The XamlRuntime may AddRef this object.
    /// </remarks>
    void SetStream(IStream* p) 
    {
        Type            = XRS_STREAM; 
        Value.pStream   = p; 
    }


    /// <summary>
    /// Default constructor used to assure proper structure initilization.
    /// </summary>
    XRXamlSource()
    {
        Type    =  XRS_STRING;
        ZeroMemory(&Value,sizeof(Value));
    }

    /// <summary>
    /// Setup the struct to contain a string that contains a file name.
    /// </summary>
    XRXamlSource(const WCHAR* psz) 
    {
        SetFile(psz);
    }

    /// <summary>
    /// Setup the struct to contain information to locate the XAML source in 
    /// a resource.
    /// </summary>
    /// <param name="h">This is the HMODULE that contains the XAML resource.</param>
    /// <param name="pType">The string value of the type of resource.</param>
    /// <param name="pID">The resource ID of the XAML.</param>
    XRXamlSource(HMODULE h, const WCHAR* pType, const WCHAR* pID)
    {
        SetResource(h,pType,pID);
    }

    /// <summary>
    /// Setup the struct to contain information to locate the XAML source in 
    /// a resource by a resource identifier.
    /// </summary>
    /// <param name="h">This is the HMODULE that contains the XAML resource.</param>
    /// <param name="ResID">The resource ID of the xaml.</param>
    XRXamlSource(HMODULE h,UINT ResID)
    {
        SetResource(h,ResID);
    }


    /// <summary>
    /// Setup the struct to contain a COM IStream interface implementation.
    /// </summary>
    /// <param name="p">A pointer to the IStream interface.</param>
    /// <remarks>
    /// The XamlRuntime may AddRef this object.
    /// </remarks>
    XRXamlSource(IStream* p) 
    {
        SetStream(p);
    }
};

/// <summary>
/// HookProc used in VisualHosts for filtering or custom handling of windows messages
/// </summary>
typedef BOOL (CALLBACK *XR_HOOKPROC)(VOID*, HWND, UINT, WPARAM, LPARAM, LRESULT*);

/// <summary>
/// Structure used to create a host window for a visual host.
/// </summary>
struct XRWindowCreateParams
{
    /// <summary>
    /// Window Styles (WS_ values) used to create the HWND for this visual host.
    /// </summary>
    DWORD           Style;

    /// <summary>
    /// [optional] Extended Window Styles (WS_EX_ values) used to create the HWND for this visual host.
    /// </summary>
    DWORD           ExStyle;

    /// <summary>
    /// [optional] The default title of this host window ,
    /// </summary>
    const WCHAR*    pTitle;


    /// <summary>
    /// The starting left position of this host window.
    /// </summary>
    UINT            Left;

    /// <summary>
    /// The starting top position of this host window.
    /// </summary>
    UINT            Top;

    /// <summary>
    /// [optional] The starting width of this host window. Leave zero to use width specified in XAML.
    /// </summary>
    UINT            Width;

    /// <summary>
    /// [optional] The starting height of this host window. Leave zero to use height specified in XAML.
    /// </summary>
    UINT            Height;

    /// <summary>
    /// [optional] Custom hook proc for the created visual host.
    /// </summary>
    XR_HOOKPROC     pHookProc;

    /// <summary>
    /// [optional] Custom parameter passed into the hook proc.
    /// </summary>
    VOID*           pvUserParam;

    /// <summary>
    /// [Optional] Set to true to allow "multiple thread access" to this host.
    /// </summary>
    bool            AllowsMultipleThreadAccess; 

    /// <summary>
    /// [optional] The parent window handle.
    /// </summary>
    HWND            ParentWindow; 
};


/// <summary>
/// EventArgs pertaining to a gesture event. 
/// </summary>
struct XRGestureEventArgs : XREventArgs
{
    /// <summary>
    /// Controls event bubbling. If this is set to true, this event will not
    /// bubble up to the parent of this control. Otherwise, this event will 
    /// continue upwards until there are no parents left
    /// </summary>
    BOOL                Handled;

    /// <summary>
    /// The hosting HWND which received this event 
    /// </summary>
    HWND                hWnd;

    /// <summary>
    /// The GESTUREINFO structure obtained via GetGestureInfo.
    /// All coordinates are in system coordinates.
    /// </summary>

    GESTUREINFO         GestureInfo;
};



// Exit Shell\XamlRuntime\Structures
/// </doc_scope>

// Enter Shell\XamlRuntime\Classes
/// <topic name="XamlRuntime_classes" displayname="Classes"></topic>
/// <doc_scope tref="XamlRuntime_classes">


class IXRUIElement;
class IXRFrameworkElement;
class IXRGeometry;


/// <summary>
/// Class representing a visual host container. This host presents Silverlight content in an OS window
/// </summary>
class __declspec(novtable) __declspec(uuid("{E49694F5-FE5B-45A3-877B-3A49FDE2DD86}")) 
IXRVisualHost : public IUnknown
{
public:
    /// <summary>
    /// Get the top-level UIElement being hosted.
    /// </summary>
    /// <param name="ppRoot">[out] The top-level FrameworkElement being hosted. This function adds a 
    /// reference on this object which the caller is responsible for releasing.
    /// </param>
    /// <returns>
    /// <para>HRESULT indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE GetRootElement(
        IXRFrameworkElement** ppRoot
        ) = 0;

    template<typename XRObj> HRESULT GetRootElement(__out XRObj** ppObject)
    { return __ts_converter1<IXRFrameworkElement*>(this,&IXRVisualHost::GetRootElement,ppObject); }


    /// <summary>
    /// Retrieve the element in this visual host's hierarchy that current has input focus
    /// </summary>
    /// <param name="ppFocused">[out] The current framework element object which has focus. This function adds a 
    /// reference on this object which the caller is responsible for releasing.
    /// </param>
    /// <returns>
    /// <para>HRESULT indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE GetFocusedElement(
        IXRFrameworkElement** ppFocused
        ) = 0;

    template<typename XRObj> HRESULT GetFocusedElement(__out XRObj** ppObject)
    { return __ts_converter1<IXRFrameworkElement*>(this,&IXRVisualHost::GetFocusedElement,ppObject); }

    
    /// <summary>
    /// Close and destroy this host.
    /// </summary>
    /// <returns>
    /// <para>HRESULT indicating success or failure</para>
    /// </returns>
    /// <remarks>
    /// This releases a reference on the visual root of this host thereby orphaning the element tree. The orphaned tree is 
    /// now able to be attached to another element tree. 
    /// </remarks>
    virtual HRESULT STDMETHODCALLTYPE DestroyWindow() = 0;

    /// <summary>
    /// Show this host (if previously hidden) and render the element tree. 
    /// </summary>
    /// <returns>
    /// <para>HRESULT indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE ShowWindow() = 0;

    /// <summary>
    /// Hide this host (if showing) and stop rendering the element tree
    /// </summary>
    /// <returns>
    /// <para>HRESULT indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE HideWindow() = 0;

    /// <summary>
    /// Show this host as a modal dialog. This function will not return until EndDialog is called.
    /// </summary>
    /// <param name="Parent">[optional] The owner of this host</param>
    /// <param name="pExitCode">The code returned to EndDialog</param>
    /// <returns>
    /// <para>HRESULT indicating success or failure (and not the value of EndDialog)</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE StartDialog(
        UINT* pExitCode
        ) = 0;

    /// <summary>
    /// Closes and Destroys this modal dialog.
    /// </summary>
    /// <param name="ExitCode">Value to return to the caller of ShowDialog()</param>
    /// <returns>
    /// <para>HRESULT indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE EndDialog(
        UINT ExitCode
        ) = 0;

    /// <summary>
    /// Move this host to a new location on the screen.
    /// </summary>
    /// <param name="XCoordinate">X-coordinate (left) for the new upper left corner of the host</param>
    /// <param name="YCoordinate">Y-coordinate (top) for the new upper left corner of the host</param>
    /// <returns>
    /// <para>Indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE SetPosition(
        INT XCoordinate,
        INT YCoordinate
        ) = 0;

    /// <summary>
    /// Get the current on-screen position of this host
    /// </summary>
    /// <param name="pXCoordinate">[out] The x-coordinate of this host</param>
    /// <param name="pYCoordinate">[out] The y-coordinate of this host</param>
    /// <returns>
    /// <para>HRESULT indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE GetPosition(
        INT* pXCoordinate,
        INT* pYCoordinate
        ) = 0;

    /// <summary>
    /// Set the size of this container. 
    /// </summary>
    /// <param name="Width">The new width of this host</param>
    /// <param name="Height">The new height of this host</param>
    /// <returns>
    /// <para>HRESULT indicating success or failure</para>
    /// </returns>
    /// <remarks>
    /// Note, this will cause a reflow of any proportionally sized content
    /// </remarks>
    virtual HRESULT STDMETHODCALLTYPE SetSize(
        UINT Width,
        UINT Height
        ) = 0;

    /// <summary>
    /// Gets the size of this container
    /// </summary>
    /// <param name="pWidth">[out] The width of this host</param>
    /// <param name="pHeight">[out] The height of this host</param>
    /// <returns>
    /// <para>HRESULT indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE GetSize(
        UINT* pWidth,
        UINT* pHeight
        ) = 0;

    /// <summary>
    /// Provide access to the raw OS window underlying this host. Use with caution
    /// </summary>
    /// <param name="pHwnd">[out] The HWND underlying this host</param>
    /// <returns>
    /// <para>HRESULT indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE GetContainerHWND(
        HWND* pHwnd
        ) = 0;

    /// <summary>
    /// Disable hardware acceleration for this host.  
    /// </summary>
    /// <returns>
    /// <para>HRESULT indicating success or failure</para>
    /// </returns>
    /// <remarks>
    /// This must be called before the first call to ShowWindow() or StartDialog().
    /// If the host has previously been shown, the method has no effect and returns E_FAIL.
    /// </remarks>
    virtual HRESULT STDMETHODCALLTYPE DisableHardwareAcceleration() = 0;
};

DEFINE_XR_IID( IXRVisualHost );

/// <summary>
/// Object which assists the imaging factory in resolving and loading resources.  
/// </summary>
class __declspec(novtable) __declspec(uuid("{D6AA4B23-69D7-40c2-B28B-5074C4EBF6CB}")) 
IXRResourceManager : public IUnknown
{
public:
    /// <summary>
    /// Custom way to load an image resource into a format compatible with the XamlRuntime
    /// </summary>
    /// <param name="pUri">The URI from the XAML file specifying the desired resource</param>
    /// <param name="ppRetrievedImage">The result as IWICBitmap</param>
    /// <returns>
    /// <para>HRESULT indicating to XamlRuntime whether this operation was successful or not. 
    ///  If this result FAILED() then this value will be returned from the parsing operation.
    /// </para>
    /// </returns>
    /// <remarks>
    /// Use the IXRApplication object to convert files or resource streams into IWICBitmaps
    /// </remarks>
    virtual BOOL STDMETHODCALLTYPE ResolveImageResource(
        const WCHAR* pUri,
        IWICBitmap** ppRetrievedImage
        ) = 0;

    /// <summary>
    /// Custom way to load a font into a format compatible with the XamlRuntime
    /// </summary>
    /// <param name="pUri">The URI from the XAML file specifying the desired font file</param>
    /// <param name="ppRetrievedImage">The result as a windows HANDLE</param>
    /// <returns>
    /// <para>BOOL indicating to XamlRuntime whether this operation was successful or not. 
    /// </para>
    /// </returns>
    /// <remarks>
    /// The XamlRuntime will call CloseHandle on this object when the file is no longer needed
    /// </remarks>
    virtual BOOL STDMETHODCALLTYPE ResolveFontResource(
        const WCHAR* pUri,
        HANDLE* pFile
        ) = 0;

    /// <summary>
    /// Custom way to load an string resource
    /// </summary>
    /// <param name="ResourceID">The Resource ID from the res_str token in Binding extension of the XAML file specifying the desired resource</param>
    /// <param name="pbstrString">The result as BSTR</param>
    /// <returns>
    /// <para>HRESULT indicating to XamlRuntime whether this operation was successful or not.</para>
    /// </returns>
    virtual BOOL STDMETHODCALLTYPE ResolveStringResource(
        UINT ResourceID,
        BSTR* pbstrString
        ) = 0;
};

DEFINE_XR_IID( IXRResourceManager );


/// <summary>
///  User implemented custom control factory.
/// </summary>
class __declspec(novtable) __declspec(uuid("{93911658-A646-41c0-8284-D3318182340E}")) 
IXRCustomControlFactory : public IUnknown
{
public:

    /// <summary>
    /// Called while parsing Xaml to resolve a control by name for the namespace.
    /// </summary>
    /// <param name="pNamespace">The namespace of the Control.  (Useful when the factory is registered against multiple namespaces.)</param>
    /// <param name="pName">The name of the Control.</param>
    /// <param name="pControlCookie">A implementation defined 16bit value.  The high order word will be masked 0x0000FFFF.</param>
    /// <param name="pIID">An IID for the control.</param>
    /// <returns>
    /// <para>HRESULT indicating to XamlRuntime whether this operation was successful or not.</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE ResolveControlByName
                                        (
                                            __in  const WCHAR*  pNamespace,
                                            __in  const WCHAR*  pName,
                                            __out UINT*         pControlCookie,
                                            __out IID*          pIID
                                        ) = 0;

    /// <summary>
    /// Called if a user tries to create a control via CreateObject that is implemented in the factory.  This is an optional
    /// implementation.  Return E_NOTIMPL if not required for your application.
    /// </summary>
    /// <param name="iid">The iid of a control</param>
    /// <param name="pControlCookie">A implementation defined 16bit value.  The high order word will be masked 0x0000FFFF.</param>
    /// <returns>
    /// <para>HRESULT indicating to XamlRuntime whether this operation was successful or not.</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE ResolveControlByIID
                                        (
                                            __in  REFIID        iid,
                                            __out UINT*         pControlCookie
                                        ) = 0;


    /// <summary>
    /// Called to create an instance of a control.
    /// </summary>
    /// <param name="ControlCookie">16bit value returned by ResolveControlByName.</param>
    /// <param name="pExisting">The internal object that hosts the control.</param>
    /// <param name="ppNew">The newly created control.</param>
    /// <returns>
    /// <para>HRESULT indicating to XamlRuntime whether this operation was successful or not.</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE CreateInstance
                                        (
                                            __in        UINT                  ControlCookie,
                                            __in        IXRDependencyObject * pExisting, 
                                            __deref_out IXRDependencyObject** ppNew
                                        ) = 0;
};

/// <summary>
/// Singleton object which retrieves layout information
/// </summary>
class __declspec(novtable) __declspec(uuid("{134A0E42-417A-46a2-8280-65226601DEE0}")) 
IXRLayoutInformation : public IUnknown
{
public:
    /// <summary>
    /// Called to retrieve the layout slot for a given FrameworkElement.
    /// </summary>
    /// <param name="pElement">Element to retrieve the layout slot for..</param>
    /// <param name="pLayoutSlot">Rect containing the layout slot information.</param>
    virtual HRESULT GetLayoutSlot(IXRFrameworkElement *pElement, XRRect *pLayoutSlot) = 0;

    /// <summary>
    /// Called to retrieve the layout clip for a given FrameworkElement.
    /// </summary>
    /// <param name="pElement">Element to retrieve the layout slot for..</param>
    /// <param name="ppGeometry">IXRGeometry object containing the layout clip.</param>
    virtual HRESULT GetLayoutClip(IXRFrameworkElement *pElement, IXRGeometry **ppGeometry) = 0;
};

DEFINE_XR_IID( IXRLayoutInformation );


/// <summary>
/// Singleton object which runs XamlRuntime applications
/// </summary>
class __declspec(novtable) __declspec(uuid("{27CB6133-DD53-4E54-9ACF-9E5BF64CFE6F}")) 
IXRApplication : public IUnknown
{
public:
    /// <summary>
    /// Begin processing messages for this thread and all OS windows on this thread. Will not return until StopProcessing() is called
    /// </summary>
    /// <param name="pExitCode">[out] The value passed into StopProcessing()</param>
    /// <returns>
    /// <para>HRESULT indicating success or failure. </para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE StartProcessing(
        UINT* pExitCode
        ) = 0;

    /// <summary>
    /// Stop processing messages for this thread. 
    /// </summary>
    /// <param name="ExitCode"></param>
    /// <returns>
    /// <para>HRESULT indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE StopProcessing(
        UINT ExitCode
        ) = 0;


    /// <summary>
    /// Parse the XAML source and use the subsequent element tree to instantiate a visual host
    /// </summary>
    /// <param name="pSource">[in] The XAML defining the element tree to be created</param>
    /// <param name="pCreateParams"> OPTIONAL - parameters used to create the host window</param>
    /// <param name="ppHost">[out] The newly created host with its element tree already setup</param>
    /// <returns>
    /// HRESULT indicating success or failure
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE  CreateHostFromXaml(
        XRXamlSource*         pSource,
        XRWindowCreateParams* pCreateParams,
        IXRVisualHost**       ppHost
        ) = 0;

    /// <summary>
    /// Parse the XAML source into a dependency object. This object can be later inserted to an existing element tree
    /// or become the root of a new visual host
    /// </summary>
    /// <param name="pSource">[in] The XAML to be parsed</param>
    /// <param name="ppDependencyObject">[out] The dependency object created from the XAML</param>
    /// <returns>
    /// HRESULT indicating success or failure
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE ParseXaml(
        XRXamlSource* pSource,
        IXRDependencyObject**   ppDependencyObject
        ) = 0;

    template<typename XRObj> HRESULT ParseXaml(XRXamlSource* pSource,__out XRObj** ppFoundObject)
    { return __ts_converter2<IXRDependencyObject*>(this,&IXRApplication::ParseXaml,pSource,ppFoundObject); }


    /// <summary>
    /// Parse the Xaml and add it to the Existing Root passed
    /// </summary>
    /// <param name="pSource">Xaml Source that need to be parsed </param>
    /// <param name="pExistingRoot"> Root element into which the Xaml need to be parsed</param>
    /// <returns>
    /// HRESULT indicating success or failure
    /// </returns>
     virtual HRESULT STDMETHODCALLTYPE ParseXamlWithExistingRoot(
        __in XRXamlSource* pSource,
        __in IXRDependencyObject*   pExistingRoot      
        ) = 0;
    
    /// <summary>
    /// Create a host from an existing element tree
    /// </summary>
    /// <param name="pElementTree">The element tree root of the new host</param>
    /// <param name="pCreateParams"> OPTIONAL - parameters used to create the host window</param>
    /// <param name="ppHost">[out] The newly created host</param>
    /// <returns>
    /// HRESULT indicating success or failure
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE CreateHostFromElementTree(
        IXRFrameworkElement* pElementTree,
        XRWindowCreateParams* pCreateParams,
        IXRVisualHost** ppHost
        ) = 0;

    /// <summary>
    /// Create a new element disconnected from an element tree. This element can be added into an existing element tree.
    /// </summary>
    /// <param name="riid">The IID of the object to create - for example IID_IXREllipse would create an IXREllipse</param>
    /// <param name="ppObject">[out] The newly created object as an IXRDependencyObject.</param>
    /// <returns>
    /// HRESULT indicating success or failure
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE CreateObject(
        REFIID  riid,
        IXRDependencyObject**  ppObject
        ) = 0;

    /// <summary>
    /// Create a new element disconnected from an element tree. This element can be added into an existing element tree.
    /// </summary>
    /// <param name="riid">The IID of the object to create - for example IID_IXREllipse or __uuidof(IXREllipse) would create an IXREllipse.</param>
    /// <param name="ppObject">[out] The newly created object returned as the IXR____ object type.</param>
    /// <returns>
    /// HRESULT indicating success or failure
    /// </returns>
    template<typename XRObj> 
    HRESULT CreateObject(__in REFIID riid,__out XRObj** ppObject)
    { 
        IXRDependencyObject* pTemp = NULL;

        HRESULT hr = CreateObject(riid,&pTemp);

        if(SUCCEEDED(hr) && pTemp)
        {
            hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppObject));

            pTemp->Release();
        }

        return hr;
    }

    /// <summary>
    /// Create a new element disconnected from an element tree. This element can be added into an existing element tree.
    /// </summary>
    /// <param name="ppObject">[out] The newly created object returned as the IXR____ object type.</param>
    /// <returns>
    /// HRESULT indicating success or failure
    /// </returns>
    template<typename XRObj> 
    HRESULT CreateObject(__out XRObj** ppObject)
    { 
        IXRDependencyObject* pTemp = NULL;

        HRESULT hr = CreateObject(__uuidof(XRObj),&pTemp);

        if(SUCCEEDED(hr) && pTemp)
        {
            hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppObject));

            pTemp->Release();
        }

        return hr;
    }


    /// <summary>
    /// Create a new element disconnected from an element tree. This element can be added into an existing element tree. 
    /// </summary>
    /// <param name="pNamespace">The namespace of the object to create.</param>
    /// <param name="pName">The name of the object to create.</param>
    /// <param name="ppObject">[out] The newly created object.</param>
    /// <returns>
    /// HRESULT indicating success or failure
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE CreateControlByName(
        __in const WCHAR* pNamespace,
        __in const WCHAR* pName,
        IXRDependencyObject**  ppObject
        ) = 0;


    /// <summary>
    /// Create a new element disconnected from an element tree. This element can be added into an existing element tree.
    /// </summary>
    /// <param name="pNamespace">The namespace of the object to create.</param>
    /// <param name="pName">The name of the object to create.</param>
    /// <param name="ppObject">[out] The newly created object.</param>
    /// <returns>
    /// HRESULT indicating success or failure
    /// </returns>
    template<typename XRObj> 
    HRESULT STDMETHODCALLTYPE CreateControlByName(
        __in const WCHAR* pNamespace,
        __in const WCHAR* pName,
        __out XRObj** ppObject
        )
    {
        IXRDependencyObject* pTemp = NULL;

        HRESULT hr = CreateControlByName(pNamespace,pName,&pTemp);

        if(SUCCEEDED(hr) && pTemp)
        {
            hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppObject));

            pTemp->Release();
        }

        return hr;
    }



    /// <summary>
    /// Register a user defined Control that will be used in  Xaml as a an object tag.
    /// </summary>
    /// <param name="iid">The Interface ID for the control. This can be used for creating the control using CreateObject API.</param>
    /// <param name="pNamespace">The CLR Namespace that the Control belongs to. Use the same value that has been used in managed application.</param>
    /// <param name="pControlName">The Name of the Control which will be specified in the XAML. Use the same Name that has been used in managed application.</param>
    /// <param name="pfCreation">Name of the function that is used for Creation.</param>
    /// <param name="pObjectID">Stores the ID associated with the registered type..</param>
    /// <returns>
    /// <para>Indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE RegisterControl(
        __in    REFIID              iid,
        __in    const WCHAR*        pControlName,
        __in    const WCHAR*        pNamespace,
        __in    PFN_CREATE_CONTROL  pfCreation,
        __out   UINT*               pObjectId
        ) = 0;

    /// <summary>
    /// Register a user defined object that will be accessible in Xaml as a an object tag.
    /// </summary>
    /// <param name="iid">The Interface ID for the control. This can be used for creating the control using CreateObject API.</param>
    /// <param name="pXamlName">The Name of the Object which will be specified in the XAML. Use the same Name that has been used in managed application.</param>
    /// <param name="pNamespace">The CLR Namespace that the Control belongs to. Use the same value that has been used in managed application.</param>
    /// <param name="pfXamlObjectCreation">Name of the function that is used for Creation.</param>
    /// <param name="coreIID">The Interface ID for the base type. This determines how EXR understands instantiations of this type.</param>
    /// <param name="pXAMLObjectId">Stores the ID associated with the registered type..</param>
    /// <returns>
    /// <para>Indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE RegisterXamlObject(
        __in    REFIID                  iid,
        __in    LPCWCHAR                pXamlName,
        __in    LPCWCHAR                pNamespace,
        __in    PFN_CREATE_XAMLOBJECT   pfXamlObjectCreation,
        __in    REFIID                  coreIID,
        __out   UINT*                   pObjectId
        ) = 0;


    /// <summary>
    /// Register a user defined Factory for a namespace.
    /// </summary>
    /// <param name="pNamespace">The CLR Namespace that the factory implments.</param>
    /// <param name="pFactory">User implementation of a control factory.</param>
    /// <returns>
    /// <para>Indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE RegisterControlFactory(
        __in    LPCWCHAR                    pNamespace,
        __in    IXRCustomControlFactory*    pFactory
        ) = 0;


    /// <summary>
    /// Register a Dependency Property for a Custom User Control
    /// </summary>
    /// <param name="pPropertyName"></param>
    /// <param name="vType"></param>
    /// <param name="objectlId"></param>
    /// <param name="metaData"></param>
    /// <param name="pDependencyPropertyInfo"></param>
    /// <para>Indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE RegisterDependencyProperty(
        __in    LPCWCHAR                        pPropertyName,
        __in    VALUE_TYPE                      vType,
        __in    UINT                            objectId,
        __in    XRDependencyPropertyMetaData*   pMetaData,
        __out   DEPENDENCY_PROPERTY_ID*         pDependencyPropertyIdentifier
        ) = 0;

    /// <summary>
    /// Register an Attached Property for a Custom User Control
    /// </summary>
    /// <param name="pPropertyName"></param>

    /// <param name="vType"></param>
    /// <param name="objectId">
    ///  ObjectID returned from RegisterControl / RegisterXamlObject or ControlFactory Implementation
    /// </param>
    /// <param name="metaData"></param>
    /// <para>Indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE RegisterAttachedProperty(
        __in        LPCWCHAR                        pPropertyName,
        __in        VALUE_TYPE                      vType,
        __in_opt    UINT                            objectId,  
        __in        XRDependencyPropertyMetaData*   pMetaData,
        __out_opt   DEPENDENCY_PROPERTY_ID*         pDependencyPropertyIdentifier
        ) = 0;

    /// <summary>
    /// Register a ResourceManager instance for this application. This object will get callbacks when resources
    /// need to be resolved.
    /// </summary>
    /// <param name="pResourceManager">The ResourceManager object to be called for resolving resources.</param>
    /// <returns>
    /// <para>Indicating success or failure</para>
    /// </returns>
    /// <remarks>
    /// Calling this function will release any previously registered ResourceManager. Calling this with NULL 
    /// will clear the ResourceManager.
    /// </remarks>
    virtual HRESULT STDMETHODCALLTYPE RegisterResourceManager(
        IXRResourceManager* pResourceManager
        ) = 0;

    /// <summary>
    /// Add this module for the XamlRuntime to use when automatically resolving Image 
    /// Source URIs as presented in XAML
    /// </summary>
    /// <param name="hInstResource">HINSTANCE which the XamlRuntime will use to 
    /// resolve image sources by exact name with type="XAML_RESOURCE"
    /// </param>
    /// <returns>
    /// <para>Indicating success or failure</para>
    /// </returns>
    /// <remarks>
    /// The XamlRuntime will use this resource binary to search for image resources 
    /// which are specified in XAML. If multiple resource libraries are 
    /// added, the XamlRuntime will search linearly through its internal collections 
    /// when resolving resources.
    /// </remarks>
    virtual HRESULT STDMETHODCALLTYPE AddResourceModule(
        HINSTANCE hInstResource
        ) = 0;

    /// <summary>
    /// Remove this module from the XamlRuntime's automatic resolution cache. 
    /// </summary>
    /// <param name="hInstResource">HINSTANCE to remove from the XamlRuntime's module cache
    /// </param>
    /// <returns>
    /// <para>Indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE RemoveResourceModule(
        HINSTANCE hInstResource
        ) = 0;
    
    /// <summary>
    /// Create an IWICBitmap from a binary resource (BMP, JPG, PNG, GIF, etc)
    /// </summary>
    /// <param name="hInstResource">The binary module containing the resource to be loaded</param>
    /// <param name="pResourceName">The resource name. (e.g. "Background" or MAKEINTRESOURCE(IDB_BACKGROUND))</param>
    /// <param name="pResourceType">The resource type. (e.g. "PNG" or RT_BITMAP)</param>
    /// <param name="ppImage">[OUT] The decoded image for use in the resource manager</param>
    /// <returns>
    /// <para>Indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE LoadImageFromResource(
        HINSTANCE    hInstResource,
        const WCHAR* pResourceName,
        const WCHAR* pResourceType,
        IWICBitmap** ppImage
        ) = 0;

    /// <summary>
    /// Create an IWICBitmap from a local file
    /// </summary>
    /// <param name="pFileName">The file containing the resource to be loaded</param>
    /// <param name="ppImage">[OUT] The decoded image for use in the resource manager</param>
    /// <returns>
    /// <para>Indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE LoadImageFromFile(
        const WCHAR* pFileName,
        IWICBitmap** ppImage
        ) = 0;

    /// <summary>
    /// Parse a XAML file containing this application's resources
    /// in parsing
    /// </summary>
    /// <param name="pResourceDictionary">The XAML source to parse</param>
    /// <param name="ppResourceDictionary">Optional - The created resource dictionary object</param>
    /// <returns>
    /// <para>Indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE LoadResourceDictionary(
        __in XRXamlSource* pSource,
        __out_opt IXRResourceDictionary** ppDictionary
        ) = 0;
    
    /// <summary>
    /// Get the toplevel ResourceDictionary being used for {StaticResource} resolution
    /// while parsing
    /// </summary>
    /// <param name="ppResourceDictionary">[out] The resource dictionary object</param>
    /// <returns>
    /// <para>Indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE GetResourceDictionary(
        __out IXRResourceDictionary** ppResourceDictionary
        ) = 0;

    /// <summary>
    /// Get LayoutInformation singleton object that can be used to retrieve layout informtion
    /// </summary>
    /// <param name="ppLayoutInformation">[out] The layout information object</param>
    /// <returns>
    /// <para>Indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE GetLayoutInformation(
        __out IXRLayoutInformation** ppLayoutInformation
        ) = 0;

};

DEFINE_XR_IID( IXRApplication );

/// <summary>
/// Binding information description.
/// </summary>
struct XRBinding
{
    /// <summary>
    /// Mode of this binding.
    /// </summary>
    XRBindingMode Mode;

    /// <summary>
    /// The Path of source property of the binding source property-bag.
    /// </summary>
    const WCHAR* Path;
};

/// <summary>
/// EventArgs indicating that Selector's Selection has happened
/// As we do not support multi-select at this time we are just exposing a single item.
/// </summary>
struct XRSingleSelectionChangedEventArgs : XRRoutedEventArgs
{
    /// <summary>
    /// The item that used to have the selection.
    /// </summary>
    XRValue RemovedItem;

    /// <summary>
    /// The item that now has the selection
    /// </summary>
    XRValue AddedItem;
};

//forward declare IXRList
class IXRList;
/// <summary>
/// EventArgs indicating that Selector's Selection has happened
/// As we do not support multi-select at this time we are just exposing a single item.
/// </summary>
struct XRSelectionChangedEventArgs : XRRoutedEventArgs
{
    /// <summary>
    /// The List of items which have been removed from the selection
    /// </summary>
    IXRList *pRemovedItemsList;

    /// <summary>
    /// The List of items which have been added to the selection
    /// </summary>
    IXRList *pAddedItemsList;
};

// Exit Shell\XamlRuntime\Classes
/// </doc_scope>

/// <summary>
/// Forward declaration of a Custom Effect. Used by OEMs to implement hardware accelerated effects.
/// </summary>
class  IXRCustomEffect;


// Enter Shell\XamlRuntime\Public
/// <topic name="XamlRuntime_public" displayname="Public Functions"></topic>
/// <doc_scope tref="XamlRuntime_public" visibility="SDK">

/// <summary>
/// Public API exported from XR.dll. Obtain a reference to the XRApplication object singleton.
/// </summary>
/// <param name="ppApplication">[out] The application object</param>
/// <returns>
/// HRESULT indicating success or failure
/// </returns>
/// <remarks>
/// This function adds a reference to the object which the caller is responsible for releasing.
/// </remarks>
extern "C" HRESULT WINAPI  GetXRApplicationInstance(
    __deref_out_opt IXRApplication** ppApplication
    );


/// <summary>
/// Public API exported from XamlRumtime.dll. Initialize the system
/// </summary>
/// <returns>
/// TRUE on success, FALSE on failure
/// </returns>
extern "C" BOOL WINAPI XamlRuntimeInitialize();

/// <summary>
/// Public API exported from XR.dll. Remove all references to the application singleton
/// </summary>
/// <returns>
/// TRUE on success, FALSE if the singleton was never created
/// </returns>
extern "C" BOOL WINAPI XamlRuntimeUninitialize();

enum XRAlignmentX
{
    XRAlignmentX_Left=0,
    XRAlignmentX_Center=1,
    XRAlignmentX_Right=2,
};

enum XRAlignmentY
{
    XRAlignmentY_Top=0,
    XRAlignmentY_Center=1,
    XRAlignmentY_Bottom=2,
};

enum XRBindingMode
{
    XRBindingMode_OneWay=1,
    XRBindingMode_OneTime=2,
    XRBindingMode_TwoWay=3,
};

enum XRBitmapCreateOptions
{
    XRBitmapCreateOptions_None=0x00,
    XRBitmapCreateOptions_DelayCreation=0x02,
    XRBitmapCreateOptions_IgnoreImageCache=0x08,
};

enum XRBrushMappingMode
{
    XRBrushMappingMode_Absolute=0,
    XRBrushMappingMode_RelativeToBoundingBox=1,
};

enum XRClickMode
{
    XRClickMode_Release,
    XRClickMode_Press,
    XRClickMode_Hover,
};

enum XRClockState
{
    XRClockState_Active=0,
    XRClockState_Filling=1,
    XRClockState_Stopped=2,
};

enum XRColorInterpolationMode
{
    XRColorInterpolationMode_ScRgbLinearInterpolation=0,
    XRColorInterpolationMode_SRgbLinearInterpolation=1,
};

enum XREasingMode
{
    XREasingMode_EaseOut=0,
    XREasingMode_EaseIn=1,
    XREasingMode_EaseInOut=2,
};

enum XRFillBehavior
{
    XRFillBehavior_HoldEnd=0,
    XRFillBehavior_Stop=1,
};

enum XRFillRule
{
    XRFillRule_EvenOdd=0,
    XRFillRule_Nonzero=1,
};

// FlowDirection enumerates ways in which text can flow on the page.
// 
enum XRFlowDirection
{

    // Text flows from left to right.
    // 
    XRFlowDirection_LeftToRight=0,

    // Text flows from right to left.
    // 
    XRFlowDirection_RightToLeft=1,
};

enum XRFontStretch
{
    XRFontStretch_UltraCondensed=1,
    XRFontStretch_ExtraCondensed=2,
    XRFontStretch_Condensed=3,
    XRFontStretch_SemiCondensed=4,
    XRFontStretch_Normal=5,
    XRFontStretch_Medium=5,
    XRFontStretch_SemiExpanded=6,
    XRFontStretch_Expanded=7,
    XRFontStretch_ExtraExpanded=8,
    XRFontStretch_UltraExpanded=9,
};

enum XRFontStyle
{
    XRFontStyle_Normal=0,
    XRFontStyle_Oblique=1,
    XRFontStyle_Italic=2,
};

enum XRFontWeight
{
    XRFontWeight_Thin=100,
    XRFontWeight_ExtraLight=200,
    XRFontWeight_Light=300,
    XRFontWeight_Normal=400,
    XRFontWeight_Medium=500,
    XRFontWeight_SemiBold=600,
    XRFontWeight_Bold=700,
    XRFontWeight_ExtraBold=800,
    XRFontWeight_Black=900,
    XRFontWeight_ExtraBlack=950,
};

enum XRGeneratorDirection
{
    XRGeneratorDirection_Forward,
    XRGeneratorDirection_Backward,
};

enum XRGradientSpreadMethod
{
    XRGradientSpreadMethod_Pad=0,
    XRGradientSpreadMethod_Reflect=1,
    XRGradientSpreadMethod_Repeat=2,
};

enum XRGridUnitType
{
    XRGridUnitType_Auto=0,
    XRGridUnitType_Pixel=1,
    XRGridUnitType_Star=2,
};

enum XRHorizontalAlignment
{
    XRHorizontalAlignment_Left=0,
    XRHorizontalAlignment_Center=1,
    XRHorizontalAlignment_Right=2,
    XRHorizontalAlignment_Stretch=3,
};

// Describes a mode of input conversion to be performed by an input method. This enumeration allows a bitwise combination of its member values.
// 
enum XRImeConversionModeValues
{

    // The input method uses a native character (Hiragana, Hangul, Chinese) conversion mode.
    // 
    XRImeConversionModeValues_Native,

    // The input method uses Katakana conversion mode.
    // 
    XRImeConversionModeValues_Katakana,

    // The input method uses full-shape conversion mode.
    // 
    XRImeConversionModeValues_FullShape,

    // The input method uses Roman character conversion mode.
    // 
    XRImeConversionModeValues_Roman,

    // The input method uses character code conversion mode.
    // 
    XRImeConversionModeValues_CharCode,

    // The input method will not perform any input conversion.
    // 
    XRImeConversionModeValues_NoConversion,

    // The input method uses EUDC (end user defined character) conversion mode.
    // 
    XRImeConversionModeValues_Eudc,

    // The input method uses symbol conversion mode.
    // 
    XRImeConversionModeValues_Symbol,

    // The input method uses fixed conversion mode.
    // 
    XRImeConversionModeValues_Fixed,

    // The input method uses alphanumeric conversion mode.
    // 
    XRImeConversionModeValues_Alphanumeric,

    // The input method does not care what input conversion method is used; the actual conversion method is indeterminate.
    // 
    XRImeConversionModeValues_DoNotCare,
};

// Describes the state of an InputMethod.
// 
enum XRInputMethodState
{

    // The input method is off.
    // 
    XRInputMethodState_Off,

    // The input method is on.
    // 
    XRInputMethodState_On,

    // The input method is in an indeterminate state.
    // 
    XRInputMethodState_DoNotCare,
};

enum XRKeyboardNavigationMode
{
    XRKeyboardNavigationMode_Local=0,
    XRKeyboardNavigationMode_Cycle=1,
    XRKeyboardNavigationMode_Once=2,
};

enum XRLineStackingStrategy
{
    XRLineStackingStrategy_MaxHeight=0,
    XRLineStackingStrategy_BlockLineHeight=1,
};

enum XROrientation
{
    XROrientation_Vertical=0,
    XROrientation_Horizontal=1,
};

enum XRPenLineCap
{
    XRPenLineCap_Flat=0,
    XRPenLineCap_Square=1,
    XRPenLineCap_Round=2,
    XRPenLineCap_Triangle=3,
};

enum XRPenLineJoin
{
    XRPenLineJoin_Miter=0,
    XRPenLineJoin_Bevel=1,
    XRPenLineJoin_Round=2,
};

// XRSelectionMode_Single - Only one item can be selected at a time
// XRSelectionMode_Multiple - Multiple items can be selected without holding down a modifier key
// XRSelectionMode_Extended - Multiple items can be selected by holding down modifier keys
// 
enum XRSelectionMode
{
    XRSelectionMode_Single,
    XRSelectionMode_Multiple,
    XRSelectionMode_Extended,
};

enum XRStretch
{
    XRStretch_None=0,
    XRStretch_Fill=1,
    XRStretch_Uniform=2,
    XRStretch_UniformToFill=3,
};

enum XRStyleSimulations
{
    XRStyleSimulations_None=0,
    XRStyleSimulations_BoldSimulation=1,
    XRStyleSimulations_ItalicSimulation=2,
    XRStyleSimulations_BoldItalicSimulation=3,
};

enum XRSweepDirection
{
    XRSweepDirection_Counterclockwise=0,
    XRSweepDirection_Clockwise=1,
};

enum XRTabletDeviceType
{
    XRTabletDeviceType_Mouse=0,
    XRTabletDeviceType_Stylus=1,
    XRTabletDeviceType_Touch=2,
};

enum XRTextAlignment
{
    XRTextAlignment_Center=0,
    XRTextAlignment_Left=1,
    XRTextAlignment_Right=2,
};

// TextDecorationCollection, either None or Underline.
// 
enum XRTextDecorationCollection
{

    // None decoration, default value.
    // 
    XRDecorationsNone,

    // Underline decoration.
    // 
    XRDecorationsUnderline,
};

enum XRTextHintingMode
{
    XRTextHintingMode_Fixed=0,
    XRTextHintingMode_Animated=1,
};

enum XRThreeState
{
    XRThreeState_Unchecked,
    XRThreeState_Checked,
    XRThreeState_Indeterminate,
};

enum XRVerticalAlignment
{
    XRVerticalAlignment_Top=0,
    XRVerticalAlignment_Center=1,
    XRVerticalAlignment_Bottom=2,
    XRVerticalAlignment_Stretch=3,
};

enum XRVirtualizationMode
{
    XRVirtualizationMode_Standard,
    XRVirtualizationMode_Recycling,
};

//
//
// IXRDoubleCollection
//
//
// Represents an ordered collection of float values.
// 
class __declspec(novtable) __declspec(uuid("{6127128F-71F1-457E-AA70-CD009C1E3B16}")) 
IXRDoubleCollection : public IXRDependencyObject
{
    public:

        // Add a float to the end of the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Add(__in float Value,__out_opt int* pIndex) = 0;

        // Removes all values from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Clear() = 0;

        // Returns true if the collection contains the float value.
        // 
        virtual bool STDMETHODCALLTYPE Contains(__in float Value) = 0;

        // Get the index in the collection of the specified float.
        // 
        virtual HRESULT STDMETHODCALLTYPE IndexOf(__in float Value,__out_opt int* pIndex) = 0;

        // Inserts a float into the collection at the specified index.
        // 
        virtual HRESULT STDMETHODCALLTYPE Insert(__in int Index,__in float Value) = 0;

        // Removes the specified float from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Remove(__in float Value) = 0;

        // Remove the float at the specified index from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE RemoveAt(__in int Index) = 0;

        // Return the number of floats in the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetCount(__out int* pCount) = 0;

        // Retrieves the float at the specified index.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetItem(__in int ItemIndex,__out float* pFloat) = 0;
};

DEFINE_XR_IID( IXRDoubleCollection );

//
//
// IXRPointCollection
//
//
// Represents a collection of XRPoint values that can be individually accessed by index. 
// 
class __declspec(novtable) __declspec(uuid("{C47B9D92-3FBC-4DD3-A0C3-F9758135216F}")) 
IXRPointCollection : public IXRDependencyObject
{
    public:

        // Adds a XRPoint to the end of the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Add(__in XRPoint* pPoint,__out_opt int* pIndex) = 0;

        // Removes all objects from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Clear() = 0;

        // Returns true if the collection contains the point.
        // 
        virtual bool STDMETHODCALLTYPE Contains(__in XRPoint* pPoint) = 0;

        // Get the index in the collection of the specified point.
        // 
        virtual HRESULT STDMETHODCALLTYPE IndexOf(__in XRPoint* pPoint,__out_opt int* pIndex) = 0;

        // Inserts a point into the collection at the specified index.
        // 
        virtual HRESULT STDMETHODCALLTYPE Insert(__in int Index,__in XRPoint* pPoint) = 0;

        // Removes the specified point from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Remove(__in XRPoint* pPoint) = 0;

        // Removes the point at the specified index from collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE RemoveAt(__in int Index) = 0;

        // Returns the number of points in the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetCount(__out int* pCount) = 0;

        // Retrieves the point at the specified index from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetItem(__in int ItemIndex,__out XRPoint* pPoint) = 0;
};

DEFINE_XR_IID( IXRPointCollection );

//
//
// IXRStylusPoint
//
//
class __declspec(novtable) __declspec(uuid("{65AE984E-F13B-4F63-AAC1-3710A409DE5F}")) 
IXRStylusPoint : public IXRDependencyObject
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetX(__in float X) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetX(__out float* pX) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetY(__in float Y) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetY(__out float* pY) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetPressureFactor(__in float PressureFactor) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetPressureFactor(__out float* pPressureFactor) = 0;
};

DEFINE_XR_IID( IXRStylusPoint );

//
//
// IXRStylusPointCollection
//
//
// Represents a collection of related IXRStylusPoint objects.
// 
class __declspec(novtable) __declspec(uuid("{2E8C2303-272C-40AD-9F63-4BEE84FAD60D}")) 
IXRStylusPointCollection : public IXRDependencyObject
{
    public:

        // Adds an object to the end of the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Add(__in IXRStylusPoint* pStylusPoint,__out_opt int* pIndex) = 0;

        // Removes all objects from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Clear() = 0;

        // Returns true if the collection contains the item.
        // 
        virtual bool STDMETHODCALLTYPE Contains(__in IXRStylusPoint* pStylusPoint) = 0;

        // Get the index in the collection of the specified item.
        // 
        virtual HRESULT STDMETHODCALLTYPE IndexOf(__in IXRStylusPoint* pStylusPoint,__out_opt int* pIndex) = 0;

        // Inserts an object into the collection at the specified index.
        // 
        virtual HRESULT STDMETHODCALLTYPE Insert(__in int Index,__in IXRStylusPoint* pStylusPoint) = 0;

        // Removes the specified object from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Remove(__in IXRStylusPoint* pStylusPoint) = 0;

        // Removes the object at the specified index from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE RemoveAt(__in int Index) = 0;

        // Returns the number of items in the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetCount(__out int* pCount) = 0;

        // Retrieves the object at the specified index from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetItem(__in int ItemIndex,__out IXRStylusPoint** ppStylusPoint) = 0;
};

DEFINE_XR_IID( IXRStylusPointCollection );

//
//
// IXRDrawingAttributes
//
//
class __declspec(novtable) __declspec(uuid("{4B8B2B26-28FA-46B6-AEC9-2285580A6D23}")) 
IXRDrawingAttributes : public IXRDependencyObject
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetColor(__in COLORREF Color) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetColor(__out COLORREF* pColor) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetOutlineColor(__in COLORREF OutlineColor) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetOutlineColor(__out COLORREF* pOutlineColor) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetWidth(__in float Width) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetWidth(__out float* pWidth) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetHeight(__in float Height) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetHeight(__out float* pHeight) = 0;
};

DEFINE_XR_IID( IXRDrawingAttributes );

//
//
// IXRStroke
//
//
class __declspec(novtable) __declspec(uuid("{8A85708A-98C2-4A52-A93C-080CDE652940}")) 
IXRStroke : public IXRDependencyObject
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetStylusPoints(__in IXRStylusPointCollection* pStylusPoints) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetStylusPoints(__out IXRStylusPointCollection** ppStylusPoints) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetDrawingAttributes(__in IXRDrawingAttributes* pDrawingAttributes) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetDrawingAttributes(__out IXRDrawingAttributes** ppDrawingAttributes) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetBounds(__out XRRect* pRect) = 0;
        virtual HRESULT STDMETHODCALLTYPE HitTest(__in IXRStylusPointCollection* pStylusPointCollection,__out bool* pBool) = 0;
};

DEFINE_XR_IID( IXRStroke );

//
//
// IXRStrokeCollection
//
//
// Represents IXRStroke objects that are grouped together for presentation.
// 
class __declspec(novtable) __declspec(uuid("{FC9714E3-6636-498A-A673-642512C01C08}")) 
IXRStrokeCollection : public IXRDependencyObject
{
    public:
        virtual HRESULT STDMETHODCALLTYPE GetBounds(__out XRRect* pRect) = 0;
        virtual HRESULT STDMETHODCALLTYPE HitTest(__in IXRStylusPointCollection* pStylusPointCollection,__out IXRStrokeCollection** ppStrokeCollection) = 0;

        // Adds an object to the end of the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Add(__in IXRStroke* pObject,__out_opt int* pIndex) = 0;

        // Removes all objects from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Clear() = 0;

        // Returns true if the collection contains the item.
        // 
        virtual bool STDMETHODCALLTYPE Contains(__in IXRStroke* pObject) = 0;

        // Get the index in the collection of the specified item.
        // 
        virtual HRESULT STDMETHODCALLTYPE IndexOf(__in IXRStroke* pObject,__out_opt int* pIndex) = 0;

        // Inserts an object into the collection at the specified index.
        // 
        virtual HRESULT STDMETHODCALLTYPE Insert(__in int Index,__in IXRStroke* pObject) = 0;

        // Removes the specified object from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Remove(__in IXRStroke* pObject) = 0;

        // Removes the object at the specified index from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE RemoveAt(__in int Index) = 0;

        // Returns the number of items in the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetCount(__out int* pCount) = 0;

        // Retrieves the object at the specified index from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetItem(__in int ItemIndex,__out IXRStroke** ppObject) = 0;
};

DEFINE_XR_IID( IXRStrokeCollection );

//
//
// IXRGeneralTransform
//
//
class __declspec(novtable) __declspec(uuid("{7D0E30E2-5175-4A86-9D5B-229F99E052E9}")) 
IXRGeneralTransform : public IXRDependencyObject
{
    public:
        virtual HRESULT STDMETHODCALLTYPE Transform(__inout XRPoint* pPoint) = 0;
        virtual HRESULT STDMETHODCALLTYPE TransformBounds(__inout XRRect* pBounds) = 0;
};

DEFINE_XR_IID( IXRGeneralTransform );

//
//
// IXRInternalTransform
//
//
class __declspec(novtable) __declspec(uuid("{24114ccd-9322-4c6a-bb92-1bfbd6467c3c}")) 
IXRInternalTransform : public IXRGeneralTransform
{
    public:
};

DEFINE_XR_IID( IXRInternalTransform );

//
//
// IXRTransform
//
//
class __declspec(novtable) __declspec(uuid("{F6436A75-DC74-4D44-80C4-6E2B63A853CE}")) 
IXRTransform : public IXRInternalTransform
{
    public:
};

DEFINE_XR_IID( IXRTransform );

//
//
// IXRPathSegment
//
//
class __declspec(novtable) __declspec(uuid("{9D8E6705-EB53-4BBE-87B2-96680A21540F}")) 
IXRPathSegment : public IXRDependencyObject
{
    public:
};

DEFINE_XR_IID( IXRPathSegment );

//
//
// IXRBrush
//
//
class __declspec(novtable) __declspec(uuid("{93CC2270-ABF8-4324-9BA6-9980D3B21F33}")) 
IXRBrush : public IXRDependencyObject
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetOpacity(__in float Opacity) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetOpacity(__out float* pOpacity) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetTransform(__in IXRTransform* pTransform) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetTransform(__out IXRTransform** ppTransform) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetRelativeTransform(__in IXRTransform* pRelativeTransform) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetRelativeTransform(__out IXRTransform** ppRelativeTransform) = 0;

        // This typesafe version will return the value only if the
        // destination interface (ppTransform) matches.
        // 
        template<typename XRObj> HRESULT GetTransform(__out XRObj** ppTransform)
        {
            IXRTransform* pTemp = NULL;
        
            HRESULT hr = GetTransform(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppTransform));
        
                pTemp->Release();
            }
        
            return hr;
        }


        // This typesafe version will return the value only if the
        // destination interface (ppRelativeTransform) matches.
        // 
        template<typename XRObj> HRESULT GetRelativeTransform(__out XRObj** ppRelativeTransform)
        {
            IXRTransform* pTemp = NULL;
        
            HRESULT hr = GetRelativeTransform(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppRelativeTransform));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRBrush );

//
//
// IXRTileBrush
//
//
class __declspec(novtable) __declspec(uuid("{DEC10CCA-A3E6-444A-8E6A-2092AAA5884C}")) 
IXRTileBrush : public IXRBrush
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetAlignmentX(__in XRAlignmentX AlignmentX) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetAlignmentX(__out XRAlignmentX* pAlignmentX) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetAlignmentY(__in XRAlignmentY AlignmentY) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetAlignmentY(__out XRAlignmentY* pAlignmentY) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetStretch(__in XRStretch Stretch) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetStretch(__out XRStretch* pStretch) = 0;
};

DEFINE_XR_IID( IXRTileBrush );

//
//
// IXRGeometry
//
//
class __declspec(novtable) __declspec(uuid("{41DE9AC3-3D26-4FF8-97D2-F68814554CB0}")) 
IXRGeometry : public IXRDependencyObject
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetTransform(__in IXRTransform* pTransform) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetTransform(__out IXRTransform** ppTransform) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetBounds(__out XRRect* pBounds) = 0;

        // This typesafe version will return the value only if the
        // destination interface (ppTransform) matches.
        // 
        template<typename XRObj> HRESULT GetTransform(__out XRObj** ppTransform)
        {
            IXRTransform* pTemp = NULL;
        
            HRESULT hr = GetTransform(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppTransform));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRGeometry );

//
//
// IXRTimeline
//
//
class __declspec(novtable) __declspec(uuid("{74DB438C-7E84-4BBE-AFFB-CD059EB90B21}")) 
IXRTimeline : public IXRDependencyObject
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetAutoReverse(__in bool AutoReverse) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetAutoReverse(__out bool* pAutoReverse) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetBeginTime(__in XRTimeSpan* pBeginTime) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetBeginTime(__out XRTimeSpan* pBeginTime) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetDuration(__in XRDuration* pDuration) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetDuration(__out XRDuration* pDuration) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetSpeedRatio(__in float SpeedRatio) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetSpeedRatio(__out float* pSpeedRatio) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetFillBehavior(__in XRFillBehavior FillBehavior) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetFillBehavior(__out XRFillBehavior* pFillBehavior) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetRepeatBehavior(__in XRRepeatBehavior* pRepeatBehavior) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetRepeatBehavior(__out XRRepeatBehavior* pRepeatBehavior) = 0;
        virtual HRESULT STDMETHODCALLTYPE AddCompletedEventHandler(__in IXRDelegate<XREventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveCompletedEventHandler(__in IXRDelegate<XREventArgs>* pDelegate) = 0;
};

DEFINE_XR_IID( IXRTimeline );

//
//
// IXREasingFunctionBase
//
//
class __declspec(novtable) __declspec(uuid("{47fa8eb1-b96b-4e41-aa5f-b5333fb3b9af}")) 
IXREasingFunctionBase : public IXRDependencyObject
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetEasingMode(__in XREasingMode EasingMode) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetEasingMode(__out XREasingMode* pEasingMode) = 0;
        virtual HRESULT STDMETHODCALLTYPE Ease(__in float NormalizedTime,__out float* pNormalizedTime) = 0;
};

DEFINE_XR_IID( IXREasingFunctionBase );

//
//
// IXRCircleEase
//
//
class __declspec(novtable) __declspec(uuid("{a4500b58-50f2-4a45-8001-1215aa4272f0}")) 
IXRCircleEase : public IXREasingFunctionBase
{
    public:
};

DEFINE_XR_IID( IXRCircleEase );

//
//
// IXRBackEase
//
//
class __declspec(novtable) __declspec(uuid("{8dcfc089-af71-469e-b597-4c1e1e97224a}")) 
IXRBackEase : public IXREasingFunctionBase
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetAmplitude(__in float Amplitude) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetAmplitude(__out float* pAmplitude) = 0;
};

DEFINE_XR_IID( IXRBackEase );

//
//
// IXRExponentialEase
//
//
class __declspec(novtable) __declspec(uuid("{bc94bc16-e44e-4d59-8ab5-bbb9c5b83e97}")) 
IXRExponentialEase : public IXREasingFunctionBase
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetExponent(__in float Exponent) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetExponent(__out float* pExponent) = 0;
};

DEFINE_XR_IID( IXRExponentialEase );

//
//
// IXRPowerEase
//
//
class __declspec(novtable) __declspec(uuid("{c7192c3c-fbb4-425e-8426-1f92859933e8}")) 
IXRPowerEase : public IXREasingFunctionBase
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetPower(__in float Power) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetPower(__out float* pPower) = 0;
};

DEFINE_XR_IID( IXRPowerEase );

//
//
// IXRQuadraticEase
//
//
class __declspec(novtable) __declspec(uuid("{0ddfa6d1-4819-4bcb-af87-4dcd2eb6e7f3}")) 
IXRQuadraticEase : public IXREasingFunctionBase
{
    public:
};

DEFINE_XR_IID( IXRQuadraticEase );

//
//
// IXRCubicEase
//
//
class __declspec(novtable) __declspec(uuid("{56dc9c4c-d216-43cc-aced-0665e1a915ac}")) 
IXRCubicEase : public IXREasingFunctionBase
{
    public:
};

DEFINE_XR_IID( IXRCubicEase );

//
//
// IXRQuarticEase
//
//
class __declspec(novtable) __declspec(uuid("{6cf04aee-c933-4d6d-b03f-8e045e64f4d3}")) 
IXRQuarticEase : public IXREasingFunctionBase
{
    public:
};

DEFINE_XR_IID( IXRQuarticEase );

//
//
// IXRQuinticEase
//
//
class __declspec(novtable) __declspec(uuid("{ee4b8545-a983-4367-9e9a-11bf6efefa28}")) 
IXRQuinticEase : public IXREasingFunctionBase
{
    public:
};

DEFINE_XR_IID( IXRQuinticEase );

//
//
// IXRElasticEase
//
//
class __declspec(novtable) __declspec(uuid("{5b9fbd21-2ead-4863-b7de-8860c0174733}")) 
IXRElasticEase : public IXREasingFunctionBase
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetOscillations(__in int Oscillations) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetOscillations(__out int* pOscillations) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetSpringiness(__in float Springiness) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetSpringiness(__out float* pSpringiness) = 0;
};

DEFINE_XR_IID( IXRElasticEase );

//
//
// IXRBounceEase
//
//
class __declspec(novtable) __declspec(uuid("{142b6bd5-fe6d-4390-b79f-1bd3d5c9e3dc}")) 
IXRBounceEase : public IXREasingFunctionBase
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetBounces(__in int Bounces) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetBounces(__out int* pBounces) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetBounciness(__in float Bounciness) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetBounciness(__out float* pBounciness) = 0;
};

DEFINE_XR_IID( IXRBounceEase );

//
//
// IXRSineEase
//
//
class __declspec(novtable) __declspec(uuid("{024176e9-d085-4e4c-9eb9-f3e0c8c5c269}")) 
IXRSineEase : public IXREasingFunctionBase
{
    public:
};

DEFINE_XR_IID( IXRSineEase );

//
//
// IXREffect
//
//
class __declspec(novtable) __declspec(uuid("{966081bb-5117-434a-807d-71d8be859ef0}")) 
IXREffect : public IXRDependencyObject
{
    public:

        // Gets the pointer of the class that actually does the effect rendering.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetCustomEffect(__out IXRCustomEffect** ppCustomEffect) = 0;

        // Sets the pointer of the class that actually does the effect rendering.
        // 
        virtual HRESULT STDMETHODCALLTYPE SetCustomEffect(__in IXRCustomEffect* pCustomEffect) = 0;
};

DEFINE_XR_IID( IXREffect );

//
//
// IXRProjection
//
//
class __declspec(novtable) __declspec(uuid("{b176ed3d-844b-4197-952b-1dde802f297d}")) 
IXRProjection : public IXRDependencyObject
{
    public:
};

DEFINE_XR_IID( IXRProjection );

//
//
// IXRCacheMode
//
//
class __declspec(novtable) __declspec(uuid("{10863250-A026-4A23-820A-81C3894E90DA}")) 
IXRCacheMode : public IXRDependencyObject
{
    public:
};

DEFINE_XR_IID( IXRCacheMode );

//
//
// IXRUIElement
//
//
class __declspec(novtable) __declspec(uuid("{5D756691-1021-40E2-801B-D27EACA67FBC}")) 
IXRUIElement : public IXRDependencyObject
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetOpacity(__in float Opacity) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetOpacity(__out float* pOpacity) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetClip(__in IXRGeometry* pClip) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetClip(__out IXRGeometry** ppClip) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetRenderTransform(__in IXRTransform* pRenderTransform) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetRenderTransform(__out IXRTransform** ppRenderTransform) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetEffect(__in IXREffect* pEffect) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetEffect(__out IXREffect** ppEffect) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetProjection(__in IXRProjection* pProjection) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetProjection(__out IXRProjection** ppProjection) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetOpacityMask(__in IXRBrush* pOpacityMask) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetOpacityMask(__out IXRBrush** ppOpacityMask) = 0;
        virtual HRESULT STDMETHODCALLTYPE AddMouseMoveEventHandler(__in IXRDelegate<XRMouseEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveMouseMoveEventHandler(__in IXRDelegate<XRMouseEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE AddMouseEnterEventHandler(__in IXRDelegate<XRMouseEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveMouseEnterEventHandler(__in IXRDelegate<XRMouseEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE AddMouseLeaveEventHandler(__in IXRDelegate<XRMouseEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveMouseLeaveEventHandler(__in IXRDelegate<XRMouseEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE AddMouseLeftButtonDownEventHandler(__in IXRDelegate<XRMouseButtonEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveMouseLeftButtonDownEventHandler(__in IXRDelegate<XRMouseButtonEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE AddMouseLeftButtonUpEventHandler(__in IXRDelegate<XRMouseButtonEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveMouseLeftButtonUpEventHandler(__in IXRDelegate<XRMouseButtonEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE AddMouseWheelEventHandler(__in IXRDelegate<XRMouseWheelEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveMouseWheelEventHandler(__in IXRDelegate<XRMouseWheelEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE AddKeyUpEventHandler(__in IXRDelegate<XRKeyEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveKeyUpEventHandler(__in IXRDelegate<XRKeyEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE AddKeyDownEventHandler(__in IXRDelegate<XRKeyEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveKeyDownEventHandler(__in IXRDelegate<XRKeyEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE AddGotFocusEventHandler(__in IXRDelegate<XRRoutedEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveGotFocusEventHandler(__in IXRDelegate<XRRoutedEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE AddLostFocusEventHandler(__in IXRDelegate<XRRoutedEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveLostFocusEventHandler(__in IXRDelegate<XRRoutedEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE AddLostMouseCaptureEventHandler(__in IXRDelegate<XRMouseEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveLostMouseCaptureEventHandler(__in IXRDelegate<XRMouseEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetRenderTransformOrigin(__in XRPoint* pRenderTransformOrigin) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetRenderTransformOrigin(__out XRPoint* pRenderTransformOrigin) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetIsHitTestVisible(__in bool IsHitTestVisible) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetIsHitTestVisible(__out bool* pIsHitTestVisible) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetVisibility(__in XRVisibility Visibility) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetVisibility(__out XRVisibility* pVisibility) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetRenderSize(__out XRSize* pRenderSize) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetUseLayoutRounding(__in bool UseLayoutRounding) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetUseLayoutRounding(__out bool* pUseLayoutRounding) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetCacheMode(__in IXRCacheMode* pCacheMode) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetCacheMode(__out IXRCacheMode** ppCacheMode) = 0;
        virtual HRESULT STDMETHODCALLTYPE CaptureMouse(__out bool* pBool) = 0;
        virtual HRESULT STDMETHODCALLTYPE ReleaseMouseCapture() = 0;
        virtual HRESULT STDMETHODCALLTYPE TransformToVisual(__in IXRUIElement* pVisual,__out IXRGeneralTransform** ppGeneralTransform) = 0;
        virtual HRESULT STDMETHODCALLTYPE InvalidateMeasure() = 0;
        virtual HRESULT STDMETHODCALLTYPE InvalidateArrange() = 0;
        virtual HRESULT STDMETHODCALLTYPE UpdateLayout() = 0;
        virtual HRESULT STDMETHODCALLTYPE AddGestureEventHandler(__in IXRDelegate<XRGestureEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveGestureEventHandler(__in IXRDelegate<XRGestureEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE Measure( XRSize* pSize) = 0;
        virtual HRESULT STDMETHODCALLTYPE Arrange( XRRect* pRect) = 0;
        virtual HRESULT STDMETHODCALLTYPE TransformPointRelative(__inout XRPoint* pPoint) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetDesiredSize(__out XRSize* pSize) = 0;
        virtual HRESULT STDMETHODCALLTYPE HitTest(__in XRRect* pRect,__out IXRHitTestResults** ppElements) = 0;
        virtual HRESULT STDMETHODCALLTYPE HitTest(__in XRPoint* pPoint,__out IXRHitTestResults** ppElements) = 0;

        // This typesafe version will return the value only if the
        // destination interface (ppClip) matches.
        // 
        template<typename XRObj> HRESULT GetClip(__out XRObj** ppClip)
        {
            IXRGeometry* pTemp = NULL;
        
            HRESULT hr = GetClip(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppClip));
        
                pTemp->Release();
            }
        
            return hr;
        }


        // This typesafe version will return the value only if the
        // destination interface (ppRenderTransform) matches.
        // 
        template<typename XRObj> HRESULT GetRenderTransform(__out XRObj** ppRenderTransform)
        {
            IXRTransform* pTemp = NULL;
        
            HRESULT hr = GetRenderTransform(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppRenderTransform));
        
                pTemp->Release();
            }
        
            return hr;
        }


        // This typesafe version will return the value only if the
        // destination interface (ppEffect) matches.
        // 
        template<typename XRObj> HRESULT GetEffect(__out XRObj** ppEffect)
        {
            IXREffect* pTemp = NULL;
        
            HRESULT hr = GetEffect(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppEffect));
        
                pTemp->Release();
            }
        
            return hr;
        }


        // This typesafe version will return the value only if the
        // destination interface (ppProjection) matches.
        // 
        template<typename XRObj> HRESULT GetProjection(__out XRObj** ppProjection)
        {
            IXRProjection* pTemp = NULL;
        
            HRESULT hr = GetProjection(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppProjection));
        
                pTemp->Release();
            }
        
            return hr;
        }


        // This typesafe version will return the value only if the
        // destination interface (ppOpacityMask) matches.
        // 
        template<typename XRObj> HRESULT GetOpacityMask(__out XRObj** ppOpacityMask)
        {
            IXRBrush* pTemp = NULL;
        
            HRESULT hr = GetOpacityMask(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppOpacityMask));
        
                pTemp->Release();
            }
        
            return hr;
        }


        // This typesafe version will return the value only if the
        // destination interface (ppCacheMode) matches.
        // 
        template<typename XRObj> HRESULT GetCacheMode(__out XRObj** ppCacheMode)
        {
            IXRCacheMode* pTemp = NULL;
        
            HRESULT hr = GetCacheMode(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppCacheMode));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRUIElement );

//
//
// IXRTriggerBase
//
//
class __declspec(novtable) __declspec(uuid("{D3F6D14A-CC63-4E25-9395-CE1A6BA1A408}")) 
IXRTriggerBase : public IXRDependencyObject
{
    public:
};

DEFINE_XR_IID( IXRTriggerBase );

//
//
// IXRTriggerCollection
//
//
// Represents a collection of IXRTriggerBase objects. 
// 
class __declspec(novtable) __declspec(uuid("{23AE5BDA-AEB2-48D1-9598-3FBCC95CB206}")) 
IXRTriggerCollection : public IXRDependencyObject
{
    public:

        // Adds an object to the end of the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Add(__in IXRTriggerBase* pObject,__out_opt int* pIndex) = 0;

        // Removes all objects from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Clear() = 0;

        // Returns true if the collection contains the item.
        // 
        virtual bool STDMETHODCALLTYPE Contains(__in IXRTriggerBase* pObject) = 0;

        // Get the index in the collection of the specified item.
        // 
        virtual HRESULT STDMETHODCALLTYPE IndexOf(__in IXRTriggerBase* pObject,__out_opt int* pIndex) = 0;

        // Inserts an object into the collection at the specified index.
        // 
        virtual HRESULT STDMETHODCALLTYPE Insert(__in int Index,__in IXRTriggerBase* pObject) = 0;

        // Removes the specified object from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Remove(__in IXRTriggerBase* pObject) = 0;

        // Removes the object at the specified index from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE RemoveAt(__in int Index) = 0;

        // Returns the number of items in the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetCount(__out int* pCount) = 0;

        // Retrieves the object at the specified index from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetItem(__in int ItemIndex,__out IXRTriggerBase** ppObject) = 0;

        // Retrieves the object at the specified index from the collection.
        //  
        // This typesafe version will return the value only if the
        // destination interface (ppTriggerBase) matches element in the collection.
        // 
        template<typename XRObj> HRESULT GetItem(__in int ItemIndex,__out XRObj** ppTriggerBase)
        {
            IXRTriggerBase* pTemp = NULL;
        
            HRESULT hr = GetItem(ItemIndex,&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppTriggerBase));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRTriggerCollection );

//
//
// IXRResourceDictionaryCollection
//
//
class __declspec(novtable) __declspec(uuid("{2775d5f8-d6d8-40c9-85db-8c5fbdb5539c}")) 
IXRResourceDictionaryCollection : public IXRDependencyObject
{
    public:

        // Adds an object to the end of the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Add(__in IXRDependencyObject* pObject,__out_opt int* pIndex) = 0;

        // Removes all objects from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Clear() = 0;

        // Returns true if the collection contains the item.
        // 
        virtual bool STDMETHODCALLTYPE Contains(__in IXRDependencyObject* pObject) = 0;

        // Get the index in the collection of the specified item.
        // 
        virtual HRESULT STDMETHODCALLTYPE IndexOf(__in IXRDependencyObject* pObject,__out_opt int* pIndex) = 0;

        // Inserts an object into the collection at the specified index.
        // 
        virtual HRESULT STDMETHODCALLTYPE Insert(__in int Index,__in IXRDependencyObject* pObject) = 0;

        // Removes the specified object from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Remove(__in IXRDependencyObject* pObject) = 0;

        // Removes the object at the specified index from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE RemoveAt(__in int Index) = 0;

        // Returns the number of items in the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetCount(__out int* pCount) = 0;

        // Retrieves the object at the specified index from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetItem(__in int ItemIndex,__out IXRDependencyObject** ppObject) = 0;

        // Retrieves the object at the specified index from the collection.
        //  
        // This typesafe version will return the value only if the
        // destination interface (ppObject) matches element in the collection.
        // 
        template<typename XRObj> HRESULT GetItem(__in int ItemIndex,__out XRObj** ppObject)
        {
            IXRDependencyObject* pTemp = NULL;
        
            HRESULT hr = GetItem(ItemIndex,&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppObject));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRResourceDictionaryCollection );

//
//
// IXRSetterBase
//
//
class __declspec(novtable) __declspec(uuid("{3484C036-696E-487F-879A-F011AAE8490C}")) 
IXRSetterBase : public IXRDependencyObject
{
    public:
        virtual HRESULT STDMETHODCALLTYPE GetIsSealed(__out bool* pIsSealed) = 0;
};

DEFINE_XR_IID( IXRSetterBase );

//
//
// IXRSetterBaseCollection
//
//
// Represents a collection of IXRSetterBase objects.
// 
class __declspec(novtable) __declspec(uuid("{89CD597E-68CF-4BFD-8C64-E57BA9E5A943}")) 
IXRSetterBaseCollection : public IXRDependencyObject
{
    public:
        virtual HRESULT STDMETHODCALLTYPE GetIsSealed(__out bool* pIsSealed) = 0;

        // Adds an object to the end of the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Add(__in IXRSetterBase* pObject,__out_opt int* pIndex) = 0;

        // Removes all objects from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Clear() = 0;

        // Returns true if the collection contains the item.
        // 
        virtual bool STDMETHODCALLTYPE Contains(__in IXRSetterBase* pObject) = 0;

        // Get the index in the collection of the specified item.
        // 
        virtual HRESULT STDMETHODCALLTYPE IndexOf(__in IXRSetterBase* pObject,__out_opt int* pIndex) = 0;

        // Inserts an object into the collection at the specified index.
        // 
        virtual HRESULT STDMETHODCALLTYPE Insert(__in int Index,__in IXRSetterBase* pObject) = 0;

        // Removes the specified object from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Remove(__in IXRSetterBase* pObject) = 0;

        // Removes the object at the specified index from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE RemoveAt(__in int Index) = 0;

        // Returns the number of items in the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetCount(__out int* pCount) = 0;

        // Retrieves the object at the specified index from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetItem(__in int ItemIndex,__out IXRSetterBase** ppObject) = 0;

        // Retrieves the object at the specified index from the collection.
        //  
        // This typesafe version will return the value only if the
        // destination interface (ppSetterBase) matches element in the collection.
        // 
        template<typename XRObj> HRESULT GetItem(__in int ItemIndex,__out XRObj** ppSetterBase)
        {
            IXRSetterBase* pTemp = NULL;
        
            HRESULT hr = GetItem(ItemIndex,&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppSetterBase));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRSetterBaseCollection );

//
//
// IXRStyle
//
//
class __declspec(novtable) __declspec(uuid("{2871DB06-DA84-47AA-8B46-87CAA486348B}")) 
IXRStyle : public IXRDependencyObject
{
    public:
        virtual HRESULT STDMETHODCALLTYPE GetIsSealed(__out bool* pIsSealed) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetSetters(__out IXRSetterBaseCollection** ppSetters) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetBasedOn(__in IXRStyle* pBasedOn) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetBasedOn(__out IXRStyle** ppBasedOn) = 0;
        virtual HRESULT STDMETHODCALLTYPE Seal() = 0;
        virtual HRESULT STDMETHODCALLTYPE SetTargetType(__in const IID iid) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetTargetType(__out IID* pIID) = 0;
};

DEFINE_XR_IID( IXRStyle );

//
//
// IXRTimelineCollection
//
//
// Represents a collection of objects that derive from IXRTimeline, such as IXRStoryboard
// or the various IXRColorAnimation, IXRDoubleAnimation, and IXRPointAnimation animations.
// 
class __declspec(novtable) __declspec(uuid("{C1C9172C-8577-46EB-BDEB-2A064D632523}")) 
IXRTimelineCollection : public IXRDependencyObject
{
    public:

        // Adds an object to the end of the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Add(__in IXRTimeline* pTimeline,__out_opt int* pIndex) = 0;

        // Removes all objects from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Clear() = 0;

        // Returns true if the collection contains the item.
        // 
        virtual bool STDMETHODCALLTYPE Contains(__in IXRTimeline* pTimeline) = 0;

        // Get the index in the collection of the specified item.
        // 
        virtual HRESULT STDMETHODCALLTYPE IndexOf(__in IXRTimeline* pTimeline,__out_opt int* pIndex) = 0;

        // Inserts an object into the collection at the specified index.
        // 
        virtual HRESULT STDMETHODCALLTYPE Insert(__in int Index,__in IXRTimeline* pTimeline) = 0;

        // Removes the specified object from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Remove(__in IXRTimeline* pTimeline) = 0;

        // Removes the object at the specified index from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE RemoveAt(__in int Index) = 0;

        // Returns the number of items in the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetCount(__out int* pCount) = 0;

        // Retrieves the object at the specified index from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetItem(__in int ItemIndex,__out IXRTimeline** ppTimeline) = 0;

        // Retrieves the object at the specified index from the collection.
        //  
        // This typesafe version will return the value only if the
        // destination interface (ppTimeline) matches element in the collection.
        // 
        template<typename XRObj> HRESULT GetItem(__in int ItemIndex,__out XRObj** ppTimeline)
        {
            IXRTimeline* pTemp = NULL;
        
            HRESULT hr = GetItem(ItemIndex,&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppTimeline));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRTimelineCollection );

//
//
// IXRStoryboard
//
//
class __declspec(novtable) __declspec(uuid("{12B85F6E-E8A6-495D-9B51-1A827AEAE8F2}")) 
IXRStoryboard : public IXRTimeline
{
    public:
        virtual HRESULT STDMETHODCALLTYPE GetChildren(__out IXRTimelineCollection** ppChildren) = 0;
        virtual HRESULT STDMETHODCALLTYPE Seek(__in XRTimeSpan* pOffset) = 0;
        virtual HRESULT STDMETHODCALLTYPE Stop() = 0;
        virtual HRESULT STDMETHODCALLTYPE Begin() = 0;
        virtual HRESULT STDMETHODCALLTYPE Pause() = 0;
        virtual HRESULT STDMETHODCALLTYPE Resume() = 0;
        virtual HRESULT STDMETHODCALLTYPE SeekAlignedToLastTick(__in XRTimeSpan* pTimeSpan) = 0;
        virtual HRESULT STDMETHODCALLTYPE SkipToFill() = 0;
        virtual HRESULT STDMETHODCALLTYPE GetCurrentState(__out XRClockState* pClockState) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetCurrentTime(__out XRTimeSpan* pTimeSpan) = 0;
};

DEFINE_XR_IID( IXRStoryboard );

//
//
// IXRVisualTransition
//
//
class __declspec(novtable) __declspec(uuid("{0FBE344C-2CE4-47C4-A346-BB3A23B6A160}")) 
IXRVisualTransition : public IXRDependencyObject
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetGeneratedDuration(__in XRDuration* pGeneratedDuration) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetGeneratedDuration(__out XRDuration* pGeneratedDuration) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetGeneratedEasingFunction(__in IXRDependencyObject* pGeneratedEasingFunction) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetGeneratedEasingFunction(__out IXRDependencyObject** ppGeneratedEasingFunction) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetTo(__in const WCHAR* pTo) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetTo(__out BSTR* pTo) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetFrom(__in const WCHAR* pFrom) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetFrom(__out BSTR* pFrom) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetStoryboard(__in IXRStoryboard* pStoryboard) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetStoryboard(__out IXRStoryboard** ppStoryboard) = 0;
};

DEFINE_XR_IID( IXRVisualTransition );

//
//
// IXRVisualTransitionCollection
//
//
class __declspec(novtable) __declspec(uuid("{FAFC03D1-2BF0-46C7-A1EE-823393A5E392}")) 
IXRVisualTransitionCollection : public IXRDependencyObject
{
    public:

        // Adds an object to the end of the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Add(__in IXRVisualTransition* pObject,__out_opt int* pIndex) = 0;

        // Removes all objects from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Clear() = 0;

        // Returns true if the collection contains the item.
        // 
        virtual bool STDMETHODCALLTYPE Contains(__in IXRVisualTransition* pObject) = 0;

        // Get the index in the collection of the specified item.
        // 
        virtual HRESULT STDMETHODCALLTYPE IndexOf(__in IXRVisualTransition* pObject,__out_opt int* pIndex) = 0;

        // Inserts an object into the collection at the specified index.
        // 
        virtual HRESULT STDMETHODCALLTYPE Insert(__in int Index,__in IXRVisualTransition* pObject) = 0;

        // Removes the specified object from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Remove(__in IXRVisualTransition* pObject) = 0;

        // Removes the object at the specified index from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE RemoveAt(__in int Index) = 0;

        // Returns the number of items in the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetCount(__out int* pCount) = 0;

        // Retrieves the object at the specified index from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetItem(__in int ItemIndex,__out IXRVisualTransition** ppObject) = 0;
};

DEFINE_XR_IID( IXRVisualTransitionCollection );

//
//
// IXRVisualState
//
//
class __declspec(novtable) __declspec(uuid("{CBE76BF6-FA6C-4138-BE95-38F4A37F3F20}")) 
IXRVisualState : public IXRDependencyObject
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetStoryboard(__in IXRStoryboard* pStoryboard) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetStoryboard(__out IXRStoryboard** ppStoryboard) = 0;
};

DEFINE_XR_IID( IXRVisualState );

//
//
// IXRVisualStateCollection
//
//
class __declspec(novtable) __declspec(uuid("{A36B7F3B-1EAF-48BD-8C0B-6B501F8B26DC}")) 
IXRVisualStateCollection : public IXRDependencyObject
{
    public:

        // Adds an object to the end of the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Add(__in IXRVisualState* pObject,__out_opt int* pIndex) = 0;

        // Removes all objects from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Clear() = 0;

        // Returns true if the collection contains the item.
        // 
        virtual bool STDMETHODCALLTYPE Contains(__in IXRVisualState* pObject) = 0;

        // Get the index in the collection of the specified item.
        // 
        virtual HRESULT STDMETHODCALLTYPE IndexOf(__in IXRVisualState* pObject,__out_opt int* pIndex) = 0;

        // Inserts an object into the collection at the specified index.
        // 
        virtual HRESULT STDMETHODCALLTYPE Insert(__in int Index,__in IXRVisualState* pObject) = 0;

        // Removes the specified object from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Remove(__in IXRVisualState* pObject) = 0;

        // Removes the object at the specified index from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE RemoveAt(__in int Index) = 0;

        // Returns the number of items in the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetCount(__out int* pCount) = 0;

        // Retrieves the object at the specified index from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetItem(__in int ItemIndex,__out IXRVisualState** ppObject) = 0;
};

DEFINE_XR_IID( IXRVisualStateCollection );

//
//
// IXRVisualStateGroup
//
//
class __declspec(novtable) __declspec(uuid("{419E0412-E665-4374-B471-8482852B2DAD}")) 
IXRVisualStateGroup : public IXRDependencyObject
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetTransitions(__in IXRVisualTransitionCollection* pTransitions) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetTransitions(__out IXRVisualTransitionCollection** ppTransitions) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetStates(__in IXRVisualStateCollection* pStates) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetStates(__out IXRVisualStateCollection** ppStates) = 0;
        virtual HRESULT STDMETHODCALLTYPE AddVisualStateChangedEventHandler(__in IXRDelegate<XRValueChangedEventArgs<IXRVisualState *>>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveVisualStateChangedEventHandler(__in IXRDelegate<XRValueChangedEventArgs<IXRVisualState *>>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE AddCurrentStateChangedEventHandler(__in IXRDelegate<XRValueChangedEventArgs<IXRVisualState *>>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveCurrentStateChangedEventHandler(__in IXRDelegate<XRValueChangedEventArgs<IXRVisualState *>>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE AddVisualStateChangingEventHandler(__in IXRDelegate<XRValueChangedEventArgs<IXRVisualState *>>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveVisualStateChangingEventHandler(__in IXRDelegate<XRValueChangedEventArgs<IXRVisualState *>>* pDelegate) = 0;
};

DEFINE_XR_IID( IXRVisualStateGroup );

//
//
// IXRVisualStateGroupCollection
//
//
class __declspec(novtable) __declspec(uuid("{DB02B543-347A-4B57-A11F-5234889EF060}")) 
IXRVisualStateGroupCollection : public IXRDependencyObject
{
    public:

        // Adds an object to the end of the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Add(__in IXRVisualStateGroup* pObject,__out_opt int* pIndex) = 0;

        // Removes all objects from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Clear() = 0;

        // Returns true if the collection contains the item.
        // 
        virtual bool STDMETHODCALLTYPE Contains(__in IXRVisualStateGroup* pObject) = 0;

        // Get the index in the collection of the specified item.
        // 
        virtual HRESULT STDMETHODCALLTYPE IndexOf(__in IXRVisualStateGroup* pObject,__out_opt int* pIndex) = 0;

        // Inserts an object into the collection at the specified index.
        // 
        virtual HRESULT STDMETHODCALLTYPE Insert(__in int Index,__in IXRVisualStateGroup* pObject) = 0;

        // Removes the specified object from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Remove(__in IXRVisualStateGroup* pObject) = 0;

        // Removes the object at the specified index from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE RemoveAt(__in int Index) = 0;

        // Returns the number of items in the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetCount(__out int* pCount) = 0;

        // Retrieves the object at the specified index from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetItem(__in int ItemIndex,__out IXRVisualStateGroup** ppObject) = 0;
};

DEFINE_XR_IID( IXRVisualStateGroupCollection );

//
//
// IXRFrameworkElement
//
//
class __declspec(novtable) __declspec(uuid("{BE9DFE50-585B-44C9-B5B1-2E0A09AC6914}")) 
IXRFrameworkElement : public IXRUIElement
{
    public:
        virtual HRESULT STDMETHODCALLTYPE GetTriggers(__out IXRTriggerCollection** ppTriggers) = 0;
        virtual HRESULT STDMETHODCALLTYPE AddSizeChangedEventHandler(__in IXRDelegate<XRSizeChangedEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveSizeChangedEventHandler(__in IXRDelegate<XRSizeChangedEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE AddLayoutUpdatedEventHandler(__in IXRDelegate<XREventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveLayoutUpdatedEventHandler(__in IXRDelegate<XREventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE AddLoadedEventHandler(__in IXRDelegate<XRRoutedEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveLoadedEventHandler(__in IXRDelegate<XRRoutedEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetTag(__in const WCHAR* pTag) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetTag(__out BSTR* pTag) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetActualWidth(__out float* pActualWidth) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetActualHeight(__out float* pActualHeight) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetActualX(__out float* pActualX) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetActualY(__out float* pActualY) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetWidth(__in float Width) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetWidth(__out float* pWidth) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetHeight(__in float Height) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetHeight(__out float* pHeight) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetMinWidth(__in float MinWidth) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetMinWidth(__out float* pMinWidth) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetMaxWidth(__in float MaxWidth) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetMaxWidth(__out float* pMaxWidth) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetMinHeight(__in float MinHeight) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetMinHeight(__out float* pMinHeight) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetMaxHeight(__in float MaxHeight) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetMaxHeight(__out float* pMaxHeight) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetHorizontalAlignment(__in XRHorizontalAlignment HorizontalAlignment) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetHorizontalAlignment(__out XRHorizontalAlignment* pHorizontalAlignment) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetVerticalAlignment(__in XRVerticalAlignment VerticalAlignment) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetVerticalAlignment(__out XRVerticalAlignment* pVerticalAlignment) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetMargin(__in XRThickness* pMargin) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetMargin(__out XRThickness* pMargin) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetStyle(__in IXRStyle* pStyle) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetStyle(__out IXRStyle** ppStyle) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetParent(__out IXRDependencyObject** ppParent) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetFlowDirection(__in XRFlowDirection FlowDirection) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetFlowDirection(__out XRFlowDirection* pFlowDirection) = 0;
        virtual HRESULT STDMETHODCALLTYPE ApplyTemplate(__out bool* pBool) = 0;

        // Finds an element that has the provided identifier name.
        // 
        virtual HRESULT STDMETHODCALLTYPE FindName(__in const WCHAR* pName,__out IXRDependencyObject** ppFoundObject) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetCursor(__in XRCursor Cursor) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetCursor(__out XRCursor* pCursor) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetResources(__out IXRResourceDictionary** ppResources) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetDataContext(__in XRValue* Value) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetDataContext(__out XRValue* pValue) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetBinding(__in const WCHAR* pTargetProperty,__in XRBinding* pBindingInfo) = 0;

        // Get the parent of this object.
        //  
        // This typesafe version will return the value only if the
        // destination interface (ppParent) matches the parent element.
        // 
        template<typename XRObj> HRESULT GetParent(__out XRObj** ppParent)
        {
            IXRDependencyObject* pTemp = NULL;
        
            HRESULT hr = GetParent(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppParent));
        
                pTemp->Release();
            }
        
            return hr;
        }


        // Finds an element that has the provided identifier name.
        //  
        // This typesafe version will return an object only if the
        // destination interface (ppFoundObject) matches the found 
        // element. 
        // 
        // ppFoundObject :
        //     a pointer to an interface storage pointer
        // 
        template<typename XRObj> HRESULT FindName(__in const WCHAR* pName,__out XRObj** ppFoundObject)
        {
            IXRDependencyObject* pTemp = NULL;
        
            HRESULT hr = FindName(pName,&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppFoundObject));
        
                pTemp->Release();
            }
        
            return hr;
        }


        // Set the data context to any supported XRValue type.
        // 
        template<typename ValueType> HRESULT SetDataContext(__in const ValueType& Value)
        {
            XRValue BoxedValue(Value);
        
            return SetDataContext(&BoxedValue);
        }


        // Get the data context to any supported XRValue type.
        //  
        // This method will only return S_OK if the DataContext type
        // matches the target type.
        // 
        template<typename ValueType> HRESULT GetDataContext(__out ValueType* pValue)
        {
            XRValue value;
        
            HRESULT hr = GetDataContext(&value);
        
            if (SUCCEEDED(hr))
            {
                hr = value.GetValue(pValue);
        
                FreeXRValue(&value);
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRFrameworkElement );

//
//
// IXRUIElementCollection
//
//
// Represents an ordered collection of IXRUIElement child elements.
// 
class __declspec(novtable) __declspec(uuid("{6BD7D0D6-07EC-4842-BE7F-D9BEB534ED1A}")) 
IXRUIElementCollection : public IXRDependencyObject
{
    public:

        // Adds an object to the end of the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Add(__in IXRUIElement* pObject,__out_opt int* pIndex) = 0;

        // Removes all objects from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Clear() = 0;

        // Returns true if the collection contains the item.
        // 
        virtual bool STDMETHODCALLTYPE Contains(__in IXRUIElement* pObject) = 0;

        // Get the index in the collection of the specified item.
        // 
        virtual HRESULT STDMETHODCALLTYPE IndexOf(__in IXRUIElement* pObject,__out_opt int* pIndex) = 0;

        // Inserts an object into the collection at the specified index.
        // 
        virtual HRESULT STDMETHODCALLTYPE Insert(__in int Index,__in IXRUIElement* pObject) = 0;

        // Removes the specified object from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Remove(__in IXRUIElement* pObject) = 0;

        // Removes the object at the specified index from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE RemoveAt(__in int Index) = 0;

        // Returns the number of items in the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetCount(__out int* pCount) = 0;

        // Retrieves the object at the specified index from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetItem(__in int ItemIndex,__out IXRUIElement** ppObject) = 0;

        // Move an object to the collection at the specified index.
        // 
        virtual HRESULT STDMETHODCALLTYPE Move(__in int Index,__in int Position) = 0;

        // Retrieves the object at the specified index from the collection.
        //  
        // This typesafe version will return the value only if the
        // destination interface (ppUIElement) matches element in the collection.
        // 
        template<typename XRObj> HRESULT GetItem(__in int ItemIndex,__out XRObj** ppUIElement)
        {
            IXRUIElement* pTemp = NULL;
        
            HRESULT hr = GetItem(ItemIndex,&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppUIElement));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRUIElementCollection );

//
//
// IXRPanel
//
//
class __declspec(novtable) __declspec(uuid("{EC817231-2E91-4E2C-8D07-8242CC4B7177}")) 
IXRPanel : public IXRFrameworkElement
{
    public:
        virtual HRESULT STDMETHODCALLTYPE GetChildren(__out IXRUIElementCollection** ppChildren) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetBackground(__in IXRBrush* pBackground) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetBackground(__out IXRBrush** ppBackground) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetIsItemsHost(__out bool* pIsItemsHost) = 0;

        // This typesafe version will return the value only if the
        // destination interface (ppBackground) matches.
        // 
        template<typename XRObj> HRESULT GetBackground(__out XRObj** ppBackground)
        {
            IXRBrush* pTemp = NULL;
        
            HRESULT hr = GetBackground(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppBackground));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRPanel );

//
//
// IXRMatrix
//
//
class __declspec(novtable) __declspec(uuid("{6A76EE00-CDCA-4E85-976C-6FC25C566CEF}")) 
IXRMatrix : public IXRDependencyObject
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetM11(__in float M11) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetM11(__out float* pM11) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetM12(__in float M12) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetM12(__out float* pM12) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetM21(__in float M21) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetM21(__out float* pM21) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetM22(__in float M22) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetM22(__out float* pM22) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetOffsetX(__in float OffsetX) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetOffsetX(__out float* pOffsetX) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetOffsetY(__in float OffsetY) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetOffsetY(__out float* pOffsetY) = 0;
        virtual HRESULT STDMETHODCALLTYPE Transform(__in XRPoint* pPoint,__out XRPoint* pPointOut) = 0;
        virtual HRESULT STDMETHODCALLTYPE IsIdentity(__out bool* pBool) = 0;
};

DEFINE_XR_IID( IXRMatrix );

//
//
// IXRShape
//
//
class __declspec(novtable) __declspec(uuid("{4FB72600-5AB8-49B9-9D00-00E617C62AB5}")) 
IXRShape : public IXRFrameworkElement
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFill(__in IXRBrush* pFill) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetFill(__out IXRBrush** ppFill) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetStroke(__in IXRBrush* pStroke) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetStroke(__out IXRBrush** ppStroke) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetStrokeMiterLimit(__in float StrokeMiterLimit) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetStrokeMiterLimit(__out float* pStrokeMiterLimit) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetStrokeThickness(__in float StrokeThickness) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetStrokeThickness(__out float* pStrokeThickness) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetStrokeStartLineCap(__in XRPenLineCap StrokeStartLineCap) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetStrokeStartLineCap(__out XRPenLineCap* pStrokeStartLineCap) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetStrokeEndLineCap(__in XRPenLineCap StrokeEndLineCap) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetStrokeEndLineCap(__out XRPenLineCap* pStrokeEndLineCap) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetStrokeLineJoin(__in XRPenLineJoin StrokeLineJoin) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetStrokeLineJoin(__out XRPenLineJoin* pStrokeLineJoin) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetStrokeDashOffset(__in float StrokeDashOffset) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetStrokeDashOffset(__out float* pStrokeDashOffset) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetStrokeDashCap(__in XRPenLineCap StrokeDashCap) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetStrokeDashCap(__out XRPenLineCap* pStrokeDashCap) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetStrokeDashArray(__in IXRDoubleCollection* pStrokeDashArray) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetStrokeDashArray(__out IXRDoubleCollection** ppStrokeDashArray) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetStretch(__in XRStretch Stretch) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetStretch(__out XRStretch* pStretch) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetGeometryTransform(__out IXRMatrix** ppGeometryTransform) = 0;

        // This typesafe version will return the value only if the
        // destination interface (ppFill) matches.
        // 
        template<typename XRObj> HRESULT GetFill(__out XRObj** ppFill)
        {
            IXRBrush* pTemp = NULL;
        
            HRESULT hr = GetFill(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppFill));
        
                pTemp->Release();
            }
        
            return hr;
        }


        // This typesafe version will return the value only if the
        // destination interface (ppStroke) matches.
        // 
        template<typename XRObj> HRESULT GetStroke(__out XRObj** ppStroke)
        {
            IXRBrush* pTemp = NULL;
        
            HRESULT hr = GetStroke(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppStroke));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRShape );

//
//
// IXRTextElement
//
//
class __declspec(novtable) __declspec(uuid("{19950A23-CEE6-457e-9A39-EFA0EEBBB96E}")) 
IXRTextElement : public IXRDependencyObject
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFontSize(__in float FontSize) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetFontSize(__out float* pFontSize) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetFontWeight(__in XRFontWeight FontWeight) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetFontWeight(__out XRFontWeight* pFontWeight) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetFontStyle(__in XRFontStyle FontStyle) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetFontStyle(__out XRFontStyle* pFontStyle) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetFontStretch(__in XRFontStretch FontStretch) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetFontStretch(__out XRFontStretch* pFontStretch) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetForeground(__in IXRBrush* pForeground) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetForeground(__out IXRBrush** ppForeground) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetTextDecorations(__in XRTextDecorationCollection TextDecorations) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetTextDecorations(__out XRTextDecorationCollection* pTextDecorations) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetLanguage(__in const WCHAR* pLanguage) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetLanguage(__out BSTR* pLanguage) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetFontFamily(__in const WCHAR* pFontFamily) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetFontFamily(__out BSTR* pFontFamily) = 0;

        // This typesafe version will return the value only if the
        // destination interface (ppForeground) matches.
        // 
        template<typename XRObj> HRESULT GetForeground(__out XRObj** ppForeground)
        {
            IXRBrush* pTemp = NULL;
        
            HRESULT hr = GetForeground(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppForeground));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRTextElement );

//
//
// IXRInline
//
//
class __declspec(novtable) __declspec(uuid("{530FC8D5-3F1F-4C7E-B1DC-1B7BA326DA40}")) 
IXRInline : public IXRTextElement
{
    public:
};

DEFINE_XR_IID( IXRInline );

//
//
// IXRInlineCollection
//
//
//  Represents a collection of IXRInline elements. 
// 
class __declspec(novtable) __declspec(uuid("{2643ADE6-8FAB-4F00-B560-F2F6A8954CCF}")) 
IXRInlineCollection : public IXRDependencyObject
{
    public:

        // Adds an object to the end of the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Add(__in IXRInline* pObject,__out_opt int* pIndex) = 0;

        // Removes all objects from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Clear() = 0;

        // Returns true if the collection contains the item.
        // 
        virtual bool STDMETHODCALLTYPE Contains(__in IXRInline* pObject) = 0;

        // Get the index in the collection of the specified item.
        // 
        virtual HRESULT STDMETHODCALLTYPE IndexOf(__in IXRInline* pObject,__out_opt int* pIndex) = 0;

        // Inserts an object into the collection at the specified index.
        // 
        virtual HRESULT STDMETHODCALLTYPE Insert(__in int Index,__in IXRInline* pObject) = 0;

        // Removes the specified object from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Remove(__in IXRInline* pObject) = 0;

        // Removes the object at the specified index from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE RemoveAt(__in int Index) = 0;

        // Returns the number of items in the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetCount(__out int* pCount) = 0;

        // Retrieves the object at the specified index from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetItem(__in int ItemIndex,__out IXRInline** ppObject) = 0;

        // Retrieves the object at the specified index from the collection.
        //  
        // This typesafe version will return the value only if the
        // destination interface (ppInline) matches element in the collection.
        // 
        template<typename XRObj> HRESULT GetItem(__in int ItemIndex,__out XRObj** ppInline)
        {
            IXRInline* pTemp = NULL;
        
            HRESULT hr = GetItem(ItemIndex,&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppInline));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRInlineCollection );

//
//
// IXRImageSource
//
//
class __declspec(novtable) __declspec(uuid("{8EABB9D1-E317-45D6-8C64-7F8630639B2E}")) 
IXRImageSource : public IXRDependencyObject
{
    public:
};

DEFINE_XR_IID( IXRImageSource );

//
//
// IXRImage
//
//
class __declspec(novtable) __declspec(uuid("{1CD77278-CA73-4E27-AC13-151E2E257612}")) 
IXRImage : public IXRFrameworkElement
{
    public:
        virtual HRESULT STDMETHODCALLTYPE AddImageFailedEventHandler(__in IXRDelegate<XREventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveImageFailedEventHandler(__in IXRDelegate<XREventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE AddImageOpenedEventHandler(__in IXRDelegate<XRRoutedEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveImageOpenedEventHandler(__in IXRDelegate<XRRoutedEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetSource(__in IXRImageSource* pSource) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetSource(__out IXRImageSource** ppSource) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetStretch(__in XRStretch Stretch) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetStretch(__out XRStretch* pStretch) = 0;

        // This typesafe version will return the value only if the
        // destination interface (ppSource) matches.
        // 
        template<typename XRObj> HRESULT GetSource(__out XRObj** ppSource)
        {
            IXRImageSource* pTemp = NULL;
        
            HRESULT hr = GetSource(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppSource));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRImage );

//
//
// IXRBitmapSource
//
//
class __declspec(novtable) __declspec(uuid("{e4c09384-95d2-4a4c-8472-cf094f862be9}")) 
IXRBitmapSource : public IXRImageSource
{
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPixelWidth(__out int* pPixelWidth) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetPixelHeight(__out int* pPixelHeight) = 0;

        // Set the bitmap source as a window.
        // 
        // hBitmap :
        //     hBitmap : HWND
        // 
        virtual HRESULT STDMETHODCALLTYPE SetBitmapSource(__in HBITMAP hBitmap) = 0;

        // Set the bitmap source as a window.
        // 
        virtual HRESULT STDMETHODCALLTYPE SetSource(__in IWICBitmap* pBitmap) = 0;
};

DEFINE_XR_IID( IXRBitmapSource );

//
//
// IXRWriteableBitmap
//
//
class __declspec(novtable) __declspec(uuid("{044D6BCE-5E83-4623-A1AD-7962EF15702D}")) 
IXRWriteableBitmap : public IXRBitmapSource
{
    public:
        virtual HRESULT STDMETHODCALLTYPE Init(__in IXRBitmapSource* pBitmapSource,__in bool UseBackBuffer) = 0;
        virtual HRESULT STDMETHODCALLTYPE Init(__in IXRUIElement* pUIElement,__in_opt IXRTransform* pTransform,__in bool UseBackBuffer) = 0;
        virtual HRESULT STDMETHODCALLTYPE Init(__in UINT PixelWidth,__in UINT PixelHeight,__in bool UseBackBuffer) = 0;
        virtual HRESULT STDMETHODCALLTYPE Render(__in IXRUIElement* pElement,__in_opt IXRTransform* pTransform) = 0;
        virtual HRESULT STDMETHODCALLTYPE Invalidate() = 0;
        virtual HRESULT STDMETHODCALLTYPE Lock() = 0;
        virtual HRESULT STDMETHODCALLTYPE Unlock() = 0;
        virtual HRESULT STDMETHODCALLTYPE GetPixels(__out UINT** ppPixels) = 0;
};

DEFINE_XR_IID( IXRWriteableBitmap );

//
//
// IXRBitmapImage
//
//
class __declspec(novtable) __declspec(uuid("{3F6D25C5-A111-4155-9F4B-029121EC6516}")) 
IXRBitmapImage : public IXRBitmapSource
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetCreateOptions(__in XRBitmapCreateOptions CreateOptions) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetCreateOptions(__out XRBitmapCreateOptions* pCreateOptions) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetUriSource(__in const WCHAR* pUriSource) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetUriSource(__out BSTR* pUriSource) = 0;
};

DEFINE_XR_IID( IXRBitmapImage );

//
//
// IXRRotateTransform
//
//
class __declspec(novtable) __declspec(uuid("{CABA5E4B-5DE1-4807-A6EC-220F7091AD25}")) 
IXRRotateTransform : public IXRTransform
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetCenterX(__in float CenterX) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetCenterX(__out float* pCenterX) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetCenterY(__in float CenterY) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetCenterY(__out float* pCenterY) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetAngle(__in float Angle) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetAngle(__out float* pAngle) = 0;
};

DEFINE_XR_IID( IXRRotateTransform );

//
//
// IXRScaleTransform
//
//
class __declspec(novtable) __declspec(uuid("{7F67EFBA-139A-4D15-AB1C-DDADEBF0D777}")) 
IXRScaleTransform : public IXRTransform
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetCenterX(__in float CenterX) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetCenterX(__out float* pCenterX) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetCenterY(__in float CenterY) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetCenterY(__out float* pCenterY) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetScaleX(__in float ScaleX) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetScaleX(__out float* pScaleX) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetScaleY(__in float ScaleY) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetScaleY(__out float* pScaleY) = 0;
};

DEFINE_XR_IID( IXRScaleTransform );

//
//
// IXRSkewTransform
//
//
class __declspec(novtable) __declspec(uuid("{558AE235-2C95-481B-A473-330F33742A74}")) 
IXRSkewTransform : public IXRTransform
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetCenterX(__in float CenterX) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetCenterX(__out float* pCenterX) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetCenterY(__in float CenterY) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetCenterY(__out float* pCenterY) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetAngleX(__in float AngleX) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetAngleX(__out float* pAngleX) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetAngleY(__in float AngleY) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetAngleY(__out float* pAngleY) = 0;
};

DEFINE_XR_IID( IXRSkewTransform );

//
//
// IXRTranslateTransform
//
//
class __declspec(novtable) __declspec(uuid("{D7BA66B6-EB88-49E3-A9EB-2ED602CC74FF}")) 
IXRTranslateTransform : public IXRTransform
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetX(__in float X) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetX(__out float* pX) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetY(__in float Y) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetY(__out float* pY) = 0;
};

DEFINE_XR_IID( IXRTranslateTransform );

//
//
// IXRTransformCollection
//
//
// Represents a collection of IXRTransform objects that can be individually accessed by index.
// 
class __declspec(novtable) __declspec(uuid("{066225BF-7A6D-42C7-86FF-B85EB60597D8}")) 
IXRTransformCollection : public IXRDependencyObject
{
    public:

        // Adds an object to the end of the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Add(__in IXRTransform* pObject,__out_opt int* pIndex) = 0;

        // Removes all objects from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Clear() = 0;

        // Returns true if the collection contains the item.
        // 
        virtual bool STDMETHODCALLTYPE Contains(__in IXRTransform* pObject) = 0;

        // Get the index in the collection of the specified item.
        // 
        virtual HRESULT STDMETHODCALLTYPE IndexOf(__in IXRTransform* pObject,__out_opt int* pIndex) = 0;

        // Inserts an object into the collection at the specified index.
        // 
        virtual HRESULT STDMETHODCALLTYPE Insert(__in int Index,__in IXRTransform* pObject) = 0;

        // Removes the specified object from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Remove(__in IXRTransform* pObject) = 0;

        // Removes the object at the specified index from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE RemoveAt(__in int Index) = 0;

        // Returns the number of items in the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetCount(__out int* pCount) = 0;

        // Retrieves the object at the specified index from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetItem(__in int ItemIndex,__out IXRTransform** ppObject) = 0;

        // Retrieves the object at the specified index from the collection.
        //  
        // This typesafe version will return the value only if the
        // destination interface (ppTransform) matches element in the collection.
        // 
        template<typename XRObj> HRESULT GetItem(__in int ItemIndex,__out XRObj** ppTransform)
        {
            IXRTransform* pTemp = NULL;
        
            HRESULT hr = GetItem(ItemIndex,&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppTransform));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRTransformCollection );

//
//
// IXRTransformGroup
//
//
class __declspec(novtable) __declspec(uuid("{5FF46413-D25C-4B65-980F-351416EECB9F}")) 
IXRTransformGroup : public IXRTransform
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetChildren(__in IXRTransformCollection* pChildren) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetChildren(__out IXRTransformCollection** ppChildren) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetValue(__out IXRMatrix** ppValue) = 0;
};

DEFINE_XR_IID( IXRTransformGroup );

//
//
// IXRMatrixTransform
//
//
class __declspec(novtable) __declspec(uuid("{932323D8-58C7-41CC-84BA-B0CC37B27B65}")) 
IXRMatrixTransform : public IXRTransform
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetMatrix(__in IXRMatrix* pMatrix) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetMatrix(__out IXRMatrix** ppMatrix) = 0;
};

DEFINE_XR_IID( IXRMatrixTransform );

//
//
// IXRCompositeTransform
//
//
class __declspec(novtable) __declspec(uuid("{47E4C185-AC3F-4f53-A44F-85307F67DD72}")) 
IXRCompositeTransform : public IXRTransform
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetCenterX(__in float CenterX) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetCenterX(__out float* pCenterX) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetCenterY(__in float CenterY) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetCenterY(__out float* pCenterY) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetScaleX(__in float ScaleX) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetScaleX(__out float* pScaleX) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetScaleY(__in float ScaleY) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetScaleY(__out float* pScaleY) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetSkewX(__in float SkewX) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetSkewX(__out float* pSkewX) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetSkewY(__in float SkewY) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetSkewY(__out float* pSkewY) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetRotation(__in float Rotation) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetRotation(__out float* pRotation) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetTranslateX(__in float TranslateX) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetTranslateX(__out float* pTranslateX) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetTranslateY(__in float TranslateY) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetTranslateY(__out float* pTranslateY) = 0;
};

DEFINE_XR_IID( IXRCompositeTransform );

//
//
// IXRMatrix3D
//
//
class __declspec(novtable) __declspec(uuid("{DE772558-1085-4bfa-A668-E241621B9871}")) 
IXRMatrix3D : public IXRDependencyObject
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetM11(__in float M11) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetM11(__out float* pM11) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetM12(__in float M12) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetM12(__out float* pM12) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetM13(__in float M13) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetM13(__out float* pM13) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetM14(__in float M14) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetM14(__out float* pM14) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetM21(__in float M21) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetM21(__out float* pM21) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetM22(__in float M22) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetM22(__out float* pM22) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetM23(__in float M23) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetM23(__out float* pM23) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetM24(__in float M24) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetM24(__out float* pM24) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetM31(__in float M31) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetM31(__out float* pM31) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetM32(__in float M32) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetM32(__out float* pM32) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetM33(__in float M33) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetM33(__out float* pM33) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetM34(__in float M34) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetM34(__out float* pM34) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetOffsetX(__in float OffsetX) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetOffsetX(__out float* pOffsetX) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetOffsetY(__in float OffsetY) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetOffsetY(__out float* pOffsetY) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetOffsetZ(__in float OffsetZ) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetOffsetZ(__out float* pOffsetZ) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetM44(__in float M44) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetM44(__out float* pM44) = 0;
};

DEFINE_XR_IID( IXRMatrix3D );

//
//
// IXRLineSegment
//
//
class __declspec(novtable) __declspec(uuid("{8B946461-CE0C-40F3-B33D-5175A1685870}")) 
IXRLineSegment : public IXRPathSegment
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetPoint(__in XRPoint* pPoint) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetPoint(__out XRPoint* pPoint) = 0;
};

DEFINE_XR_IID( IXRLineSegment );

//
//
// IXRBezierSegment
//
//
class __declspec(novtable) __declspec(uuid("{B4ABC605-6DAC-4EB9-8976-17923DED914C}")) 
IXRBezierSegment : public IXRPathSegment
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetPoint1(__in XRPoint* pPoint1) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetPoint1(__out XRPoint* pPoint1) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetPoint2(__in XRPoint* pPoint2) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetPoint2(__out XRPoint* pPoint2) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetPoint3(__in XRPoint* pPoint3) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetPoint3(__out XRPoint* pPoint3) = 0;
};

DEFINE_XR_IID( IXRBezierSegment );

//
//
// IXRQuadraticBezierSegment
//
//
class __declspec(novtable) __declspec(uuid("{C6007B52-891A-4163-AD37-8AAC78660E7C}")) 
IXRQuadraticBezierSegment : public IXRPathSegment
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetPoint1(__in XRPoint* pPoint1) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetPoint1(__out XRPoint* pPoint1) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetPoint2(__in XRPoint* pPoint2) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetPoint2(__out XRPoint* pPoint2) = 0;
};

DEFINE_XR_IID( IXRQuadraticBezierSegment );

//
//
// IXRArcSegment
//
//
class __declspec(novtable) __declspec(uuid("{E12A47B9-74B6-410A-9D91-B9C0F6A87197}")) 
IXRArcSegment : public IXRPathSegment
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetPoint(__in XRPoint* pPoint) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetPoint(__out XRPoint* pPoint) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetSize(__in XRSize* pSize) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetSize(__out XRSize* pSize) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetRotationAngle(__in float RotationAngle) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetRotationAngle(__out float* pRotationAngle) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetIsLargeArc(__in bool IsLargeArc) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetIsLargeArc(__out bool* pIsLargeArc) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetSweepDirection(__in XRSweepDirection SweepDirection) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetSweepDirection(__out XRSweepDirection* pSweepDirection) = 0;
};

DEFINE_XR_IID( IXRArcSegment );

//
//
// IXRPolyLineSegment
//
//
class __declspec(novtable) __declspec(uuid("{96CA805E-F558-416D-BBD3-DE6BCD4279F1}")) 
IXRPolyLineSegment : public IXRPathSegment
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetPoints(__in IXRPointCollection* pPoints) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetPoints(__out IXRPointCollection** ppPoints) = 0;
};

DEFINE_XR_IID( IXRPolyLineSegment );

//
//
// IXRPolyBezierSegment
//
//
class __declspec(novtable) __declspec(uuid("{D5E7E952-6357-41CF-A204-874CBB32C21B}")) 
IXRPolyBezierSegment : public IXRPathSegment
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetPoints(__in IXRPointCollection* pPoints) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetPoints(__out IXRPointCollection** ppPoints) = 0;
};

DEFINE_XR_IID( IXRPolyBezierSegment );

//
//
// IXRPolyQuadraticBezierSegment
//
//
class __declspec(novtable) __declspec(uuid("{EC53AF44-0C1B-4793-B44A-A89096736F63}")) 
IXRPolyQuadraticBezierSegment : public IXRPathSegment
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetPoints(__in IXRPointCollection* pPoints) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetPoints(__out IXRPointCollection** ppPoints) = 0;
};

DEFINE_XR_IID( IXRPolyQuadraticBezierSegment );

//
//
// IXRPathSegmentCollection
//
//
// Represents a collection of IXRPathSegment objects that can be individually accessed by index.
// 
class __declspec(novtable) __declspec(uuid("{FE61670C-389F-4B72-B21C-E507F2885977}")) 
IXRPathSegmentCollection : public IXRDependencyObject
{
    public:

        // Adds an object to the end of the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Add(__in IXRPathSegment* pObject,__out_opt int* pIndex) = 0;

        // Removes all objects from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Clear() = 0;

        // Returns true if the collection contains the item.
        // 
        virtual bool STDMETHODCALLTYPE Contains(__in IXRPathSegment* pObject) = 0;

        // Get the index in the collection of the specified item.
        // 
        virtual HRESULT STDMETHODCALLTYPE IndexOf(__in IXRPathSegment* pObject,__out_opt int* pIndex) = 0;

        // Inserts an object into the collection at the specified index.
        // 
        virtual HRESULT STDMETHODCALLTYPE Insert(__in int Index,__in IXRPathSegment* pObject) = 0;

        // Removes the specified object from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Remove(__in IXRPathSegment* pObject) = 0;

        // Removes the object at the specified index from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE RemoveAt(__in int Index) = 0;

        // Returns the number of items in the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetCount(__out int* pCount) = 0;

        // Retrieves the object at the specified index from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetItem(__in int ItemIndex,__out IXRPathSegment** ppObject) = 0;

        // Retrieves the object at the specified index from the collection.
        //  
        // This typesafe version will return the value only if the
        // destination interface (ppPathSegment) matches element in the collection.
        // 
        template<typename XRObj> HRESULT GetItem(__in int ItemIndex,__out XRObj** ppPathSegment)
        {
            IXRPathSegment* pTemp = NULL;
        
            HRESULT hr = GetItem(ItemIndex,&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppPathSegment));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRPathSegmentCollection );

//
//
// IXRPathFigure
//
//
class __declspec(novtable) __declspec(uuid("{DC974117-206A-4615-B6E7-67B8FF6D2BF3}")) 
IXRPathFigure : public IXRDependencyObject
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetSegments(__in IXRPathSegmentCollection* pSegments) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetSegments(__out IXRPathSegmentCollection** ppSegments) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetStartPoint(__in XRPoint* pStartPoint) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetStartPoint(__out XRPoint* pStartPoint) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetIsClosed(__in bool IsClosed) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetIsClosed(__out bool* pIsClosed) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetIsFilled(__in bool IsFilled) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetIsFilled(__out bool* pIsFilled) = 0;
};

DEFINE_XR_IID( IXRPathFigure );

//
//
// IXRPathFigureCollection
//
//
// Represents a collection of IXRPathFigure objects that collectively make up the geometry of an IXRPathGeometry object.
// 
class __declspec(novtable) __declspec(uuid("{57B7BA53-4CE3-4928-ABF6-51A7B7238E6C}")) 
IXRPathFigureCollection : public IXRDependencyObject
{
    public:

        // Adds an object to the end of the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Add(__in IXRPathFigure* pObject,__out_opt int* pIndex) = 0;

        // Removes all objects from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Clear() = 0;

        // Returns true if the collection contains the item.
        // 
        virtual bool STDMETHODCALLTYPE Contains(__in IXRPathFigure* pObject) = 0;

        // Get the index in the collection of the specified item.
        // 
        virtual HRESULT STDMETHODCALLTYPE IndexOf(__in IXRPathFigure* pObject,__out_opt int* pIndex) = 0;

        // Inserts an object into the collection at the specified index.
        // 
        virtual HRESULT STDMETHODCALLTYPE Insert(__in int Index,__in IXRPathFigure* pObject) = 0;

        // Removes the specified object from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Remove(__in IXRPathFigure* pObject) = 0;

        // Removes the object at the specified index from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE RemoveAt(__in int Index) = 0;

        // Returns the number of items in the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetCount(__out int* pCount) = 0;

        // Retrieves the object at the specified index from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetItem(__in int ItemIndex,__out IXRPathFigure** ppObject) = 0;
};

DEFINE_XR_IID( IXRPathFigureCollection );

//
//
// IXRPathGeometry
//
//
class __declspec(novtable) __declspec(uuid("{33345C2F-1653-44B3-ABB5-11DBEFA4805D}")) 
IXRPathGeometry : public IXRGeometry
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFillRule(__in XRFillRule FillRule) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetFillRule(__out XRFillRule* pFillRule) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetFigures(__in IXRPathFigureCollection* pFigures) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetFigures(__out IXRPathFigureCollection** ppFigures) = 0;
};

DEFINE_XR_IID( IXRPathGeometry );

//
//
// IXREllipseGeometry
//
//
class __declspec(novtable) __declspec(uuid("{8CB3D4CA-1B9B-4F14-AF96-9F584887BADF}")) 
IXREllipseGeometry : public IXRGeometry
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetCenter(__in XRPoint* pCenter) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetCenter(__out XRPoint* pCenter) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetRadiusX(__in float RadiusX) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetRadiusX(__out float* pRadiusX) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetRadiusY(__in float RadiusY) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetRadiusY(__out float* pRadiusY) = 0;
};

DEFINE_XR_IID( IXREllipseGeometry );

//
//
// IXRRectangleGeometry
//
//
class __declspec(novtable) __declspec(uuid("{B2B95FED-7415-47D4-9C47-1C9E67EC723C}")) 
IXRRectangleGeometry : public IXRGeometry
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetRect(__in XRRect* pRect) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetRect(__out XRRect* pRect) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetRadiusX(__in float RadiusX) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetRadiusX(__out float* pRadiusX) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetRadiusY(__in float RadiusY) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetRadiusY(__out float* pRadiusY) = 0;
};

DEFINE_XR_IID( IXRRectangleGeometry );

//
//
// IXRLineGeometry
//
//
class __declspec(novtable) __declspec(uuid("{6C4DFCDA-AFF5-4DB4-A487-0D7A03880CAD}")) 
IXRLineGeometry : public IXRGeometry
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetStartPoint(__in XRPoint* pStartPoint) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetStartPoint(__out XRPoint* pStartPoint) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetEndPoint(__in XRPoint* pEndPoint) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetEndPoint(__out XRPoint* pEndPoint) = 0;
};

DEFINE_XR_IID( IXRLineGeometry );

//
//
// IXRGeometryCollection
//
//
//  Represents a collection of IXRGeometry objects.
// 
class __declspec(novtable) __declspec(uuid("{56F393DD-1849-4125-88BF-8419C980C78C}")) 
IXRGeometryCollection : public IXRDependencyObject
{
    public:

        // Adds an object to the end of the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Add(__in IXRGeometry* pObject,__out_opt int* pIndex) = 0;

        // Removes all objects from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Clear() = 0;

        // Returns true if the collection contains the item.
        // 
        virtual bool STDMETHODCALLTYPE Contains(__in IXRGeometry* pObject) = 0;

        // Get the index in the collection of the specified item.
        // 
        virtual HRESULT STDMETHODCALLTYPE IndexOf(__in IXRGeometry* pObject,__out_opt int* pIndex) = 0;

        // Inserts an object into the collection at the specified index.
        // 
        virtual HRESULT STDMETHODCALLTYPE Insert(__in int Index,__in IXRGeometry* pObject) = 0;

        // Removes the specified object from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Remove(__in IXRGeometry* pObject) = 0;

        // Removes the object at the specified index from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE RemoveAt(__in int Index) = 0;

        // Returns the number of items in the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetCount(__out int* pCount) = 0;

        // Retrieves the object at the specified index from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetItem(__in int ItemIndex,__out IXRGeometry** ppObject) = 0;

        // Retrieves the object at the specified index from the collection.
        //  
        // This typesafe version will return the value only if the
        // destination interface (ppGeometry) matches element in the collection.
        // 
        template<typename XRObj> HRESULT GetItem(__in int ItemIndex,__out XRObj** ppGeometry)
        {
            IXRGeometry* pTemp = NULL;
        
            HRESULT hr = GetItem(ItemIndex,&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppGeometry));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRGeometryCollection );

//
//
// IXRGeometryGroup
//
//
class __declspec(novtable) __declspec(uuid("{B80ABD15-2651-4D12-BCE9-716C8CD79F27}")) 
IXRGeometryGroup : public IXRGeometry
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFillRule(__in XRFillRule FillRule) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetFillRule(__out XRFillRule* pFillRule) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetChildren(__in IXRGeometryCollection* pChildren) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetChildren(__out IXRGeometryCollection** ppChildren) = 0;
};

DEFINE_XR_IID( IXRGeometryGroup );

//
//
// IXRSolidColorBrush
//
//
class __declspec(novtable) __declspec(uuid("{41BC462B-AF6B-4138-A325-310CB6239ED1}")) 
IXRSolidColorBrush : public IXRBrush
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetColor(__in COLORREF Color) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetColor(__out COLORREF* pColor) = 0;
};

DEFINE_XR_IID( IXRSolidColorBrush );

//
//
// IXRGradientStop
//
//
class __declspec(novtable) __declspec(uuid("{206F2265-BE08-44CA-853C-ABD1DD851BE8}")) 
IXRGradientStop : public IXRDependencyObject
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetColor(__in COLORREF Color) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetColor(__out COLORREF* pColor) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetOffset(__in float Offset) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetOffset(__out float* pOffset) = 0;
};

DEFINE_XR_IID( IXRGradientStop );

//
//
// IXRGradientStopCollection
//
//
//  Represents a collection of IXRGradientStop objects that can be individually accessed by index. 
// 
class __declspec(novtable) __declspec(uuid("{F9AEA16E-12CB-41F5-B632-B0AF29614D63}")) 
IXRGradientStopCollection : public IXRDependencyObject
{
    public:

        // Adds an object to the end of the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Add(__in IXRGradientStop* pObject,__out_opt int* pIndex) = 0;

        // Removes all objects from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Clear() = 0;

        // Returns true if the collection contains the item.
        // 
        virtual bool STDMETHODCALLTYPE Contains(__in IXRGradientStop* pObject) = 0;

        // Get the index in the collection of the specified item.
        // 
        virtual HRESULT STDMETHODCALLTYPE IndexOf(__in IXRGradientStop* pObject,__out_opt int* pIndex) = 0;

        // Inserts an object into the collection at the specified index.
        // 
        virtual HRESULT STDMETHODCALLTYPE Insert(__in int Index,__in IXRGradientStop* pObject) = 0;

        // Removes the specified object from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Remove(__in IXRGradientStop* pObject) = 0;

        // Removes the object at the specified index from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE RemoveAt(__in int Index) = 0;

        // Returns the number of items in the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetCount(__out int* pCount) = 0;

        // Retrieves the object at the specified index from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetItem(__in int ItemIndex,__out IXRGradientStop** ppObject) = 0;
};

DEFINE_XR_IID( IXRGradientStopCollection );

//
//
// IXRGradientBrush
//
//
class __declspec(novtable) __declspec(uuid("{F9C799FD-E091-4CFE-AF1D-D94E19EF148A}")) 
IXRGradientBrush : public IXRBrush
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetSpreadMethod(__in XRGradientSpreadMethod SpreadMethod) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetSpreadMethod(__out XRGradientSpreadMethod* pSpreadMethod) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetMappingMode(__in XRBrushMappingMode MappingMode) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetMappingMode(__out XRBrushMappingMode* pMappingMode) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetColorInterpolationMode(__in XRColorInterpolationMode ColorInterpolationMode) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetColorInterpolationMode(__out XRColorInterpolationMode* pColorInterpolationMode) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetGradientStops(__in IXRGradientStopCollection* pGradientStops) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetGradientStops(__out IXRGradientStopCollection** ppGradientStops) = 0;
};

DEFINE_XR_IID( IXRGradientBrush );

//
//
// IXRLinearGradientBrush
//
//
class __declspec(novtable) __declspec(uuid("{BA77DC12-F444-47EA-B3DC-BF9B1A088416}")) 
IXRLinearGradientBrush : public IXRGradientBrush
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetStartPoint(__in XRPoint* pStartPoint) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetStartPoint(__out XRPoint* pStartPoint) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetEndPoint(__in XRPoint* pEndPoint) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetEndPoint(__out XRPoint* pEndPoint) = 0;
};

DEFINE_XR_IID( IXRLinearGradientBrush );

//
//
// IXRRadialGradientBrush
//
//
class __declspec(novtable) __declspec(uuid("{F06341D7-4C65-4A57-863A-F44A449A5AE9}")) 
IXRRadialGradientBrush : public IXRGradientBrush
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetCenter(__in XRPoint* pCenter) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetCenter(__out XRPoint* pCenter) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetGradientOrigin(__in XRPoint* pGradientOrigin) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetGradientOrigin(__out XRPoint* pGradientOrigin) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetRadiusX(__in float RadiusX) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetRadiusX(__out float* pRadiusX) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetRadiusY(__in float RadiusY) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetRadiusY(__out float* pRadiusY) = 0;
};

DEFINE_XR_IID( IXRRadialGradientBrush );

//
//
// IXRImageBrush
//
//
class __declspec(novtable) __declspec(uuid("{8BE2CBF1-8611-446B-9F8D-C59360A66770}")) 
IXRImageBrush : public IXRTileBrush
{
    public:
        virtual HRESULT STDMETHODCALLTYPE AddImageFailedEventHandler(__in IXRDelegate<XREventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveImageFailedEventHandler(__in IXRDelegate<XREventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetImageSource(__in IXRImageSource* pImageSource) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetImageSource(__out IXRImageSource** ppImageSource) = 0;

        // This typesafe version will return the value only if the
        // destination interface (ppImageSource) matches.
        // 
        template<typename XRObj> HRESULT GetImageSource(__out XRObj** ppImageSource)
        {
            IXRImageSource* pTemp = NULL;
        
            HRESULT hr = GetImageSource(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppImageSource));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRImageBrush );

//
//
// IXRCanvas
//
//
class __declspec(novtable) __declspec(uuid("{582633C5-6550-4881-8A7A-E1CAC6EB2BA6}")) 
IXRCanvas : public IXRPanel
{
    public:
};

DEFINE_XR_IID( IXRCanvas );

//
//
// IXRPath
//
//
class __declspec(novtable) __declspec(uuid("{62B9B1D3-6F23-4091-ABC9-790CE803214E}")) 
IXRPath : public IXRShape
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetData(__in IXRGeometry* pData) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetData(__out IXRGeometry** ppData) = 0;

        // This typesafe version will return the value only if the
        // destination interface (ppData) matches.
        // 
        template<typename XRObj> HRESULT GetData(__out XRObj** ppData)
        {
            IXRGeometry* pTemp = NULL;
        
            HRESULT hr = GetData(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppData));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRPath );

//
//
// IXREllipse
//
//
class __declspec(novtable) __declspec(uuid("{53082EB5-668B-4DE6-AEFA-8AA80F4B0A69}")) 
IXREllipse : public IXRShape
{
    public:
};

DEFINE_XR_IID( IXREllipse );

//
//
// IXRLine
//
//
class __declspec(novtable) __declspec(uuid("{072A183C-2A02-4B42-A9F9-337FAE955CEF}")) 
IXRLine : public IXRShape
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetX1(__in float X1) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetX1(__out float* pX1) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetY1(__in float Y1) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetY1(__out float* pY1) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetX2(__in float X2) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetX2(__out float* pX2) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetY2(__in float Y2) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetY2(__out float* pY2) = 0;
};

DEFINE_XR_IID( IXRLine );

//
//
// IXRPolygon
//
//
class __declspec(novtable) __declspec(uuid("{031D1B20-6FAA-453B-88D4-A8E88C02F86F}")) 
IXRPolygon : public IXRShape
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFillRule(__in XRFillRule FillRule) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetFillRule(__out XRFillRule* pFillRule) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetPoints(__in IXRPointCollection* pPoints) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetPoints(__out IXRPointCollection** ppPoints) = 0;
};

DEFINE_XR_IID( IXRPolygon );

//
//
// IXRPolyline
//
//
class __declspec(novtable) __declspec(uuid("{AB6EC033-9B77-435D-8D8E-0A3F0182AB08}")) 
IXRPolyline : public IXRShape
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFillRule(__in XRFillRule FillRule) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetFillRule(__out XRFillRule* pFillRule) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetPoints(__in IXRPointCollection* pPoints) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetPoints(__out IXRPointCollection** ppPoints) = 0;
};

DEFINE_XR_IID( IXRPolyline );

//
//
// IXRRectangle
//
//
class __declspec(novtable) __declspec(uuid("{23CFE3CE-6468-46FB-9388-34F1B87F4505}")) 
IXRRectangle : public IXRShape
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetRadiusX(__in float RadiusX) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetRadiusX(__out float* pRadiusX) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetRadiusY(__in float RadiusY) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetRadiusY(__out float* pRadiusY) = 0;
};

DEFINE_XR_IID( IXRRectangle );

//
//
// IXRGlyphs
//
//
class __declspec(novtable) __declspec(uuid("{6D92097C-CB0B-47A4-8614-CF42BDA2B819}")) 
IXRGlyphs : public IXRFrameworkElement
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetUnicodeString(__in const WCHAR* pUnicodeString) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetUnicodeString(__out BSTR* pUnicodeString) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetIndices(__in const WCHAR* pIndices) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetIndices(__out BSTR* pIndices) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetFontUri(__in const WCHAR* pFontUri) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetFontUri(__out BSTR* pFontUri) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetStyleSimulations(__in XRStyleSimulations StyleSimulations) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetStyleSimulations(__out XRStyleSimulations* pStyleSimulations) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetFontRenderingEmSize(__in float FontRenderingEmSize) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetFontRenderingEmSize(__out float* pFontRenderingEmSize) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetOriginX(__in float OriginX) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetOriginX(__out float* pOriginX) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetOriginY(__in float OriginY) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetOriginY(__out float* pOriginY) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetFill(__in IXRBrush* pFill) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetFill(__out IXRBrush** ppFill) = 0;

        // This typesafe version will return the value only if the
        // destination interface (ppFill) matches.
        // 
        template<typename XRObj> HRESULT GetFill(__out XRObj** ppFill)
        {
            IXRBrush* pTemp = NULL;
        
            HRESULT hr = GetFill(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppFill));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRGlyphs );

//
//
// IXRTextBlock
//
//
class __declspec(novtable) __declspec(uuid("{662E8F6B-BF89-4E30-9414-29B241E9E6F1}")) 
IXRTextBlock : public IXRFrameworkElement
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFontSize(__in float FontSize) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetFontSize(__out float* pFontSize) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetFontWeight(__in XRFontWeight FontWeight) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetFontWeight(__out XRFontWeight* pFontWeight) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetFontStyle(__in XRFontStyle FontStyle) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetFontStyle(__out XRFontStyle* pFontStyle) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetFontStretch(__in XRFontStretch FontStretch) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetFontStretch(__out XRFontStretch* pFontStretch) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetForeground(__in IXRBrush* pForeground) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetForeground(__out IXRBrush** ppForeground) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetTextDecorations(__in XRTextDecorationCollection TextDecorations) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetTextDecorations(__out XRTextDecorationCollection* pTextDecorations) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetTextWrapping(__in XRTextWrapping TextWrapping) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetTextWrapping(__out XRTextWrapping* pTextWrapping) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetTextTrimming(__in XRTextTrimming TextTrimming) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetTextTrimming(__out XRTextTrimming* pTextTrimming) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetTextAlignment(__in XRTextAlignment TextAlignment) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetTextAlignment(__out XRTextAlignment* pTextAlignment) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetText(__in const WCHAR* pText) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetText(__out BSTR* pText) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetInlines(__in IXRInlineCollection* pInlines) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetInlines(__out IXRInlineCollection** ppInlines) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetPadding(__in XRThickness* pPadding) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetPadding(__out XRThickness* pPadding) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetLineHeight(__in float LineHeight) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetLineHeight(__out float* pLineHeight) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetLineStackingStrategy(__in XRLineStackingStrategy LineStackingStrategy) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetLineStackingStrategy(__out XRLineStackingStrategy* pLineStackingStrategy) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetFontSource(__in HANDLE hFile) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetFontSource(__out HANDLE* phFile) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetFontFamily(__in const WCHAR* pFontFamily) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetFontFamily(__out BSTR* pFontFamily) = 0;

        // This typesafe version will return the value only if the
        // destination interface (ppForeground) matches.
        // 
        template<typename XRObj> HRESULT GetForeground(__out XRObj** ppForeground)
        {
            IXRBrush* pTemp = NULL;
        
            HRESULT hr = GetForeground(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppForeground));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRTextBlock );

//
//
// IXRRun
//
//
class __declspec(novtable) __declspec(uuid("{6C1D6CCE-2CE3-4EA6-AF0D-DDF1339ACC38}")) 
IXRRun : public IXRInline
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetText(__in const WCHAR* pText) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetText(__out BSTR* pText) = 0;
};

DEFINE_XR_IID( IXRRun );

//
//
// IXRLineBreak
//
//
class __declspec(novtable) __declspec(uuid("{CB6A153A-36E4-4FBE-BBC9-B143BAE1B753}")) 
IXRLineBreak : public IXRInline
{
    public:
};

DEFINE_XR_IID( IXRLineBreak );

//
//
// IXRTriggerAction
//
//
class __declspec(novtable) __declspec(uuid("{F1C66E39-C188-4876-9044-414FC7149E21}")) 
IXRTriggerAction : public IXRDependencyObject
{
    public:
};

DEFINE_XR_IID( IXRTriggerAction );

//
//
// IXRTriggerActionCollection
//
//
// Represents a collection of trigger actions that can be individually accessed by index.
// 
class __declspec(novtable) __declspec(uuid("{4634349D-EC1E-463A-8A71-C2FBE88BDCAA}")) 
IXRTriggerActionCollection : public IXRDependencyObject
{
    public:

        // Adds an object to the end of the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Add(__in IXRTriggerAction* pObject,__out_opt int* pIndex) = 0;

        // Removes all objects from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Clear() = 0;

        // Returns true if the collection contains the item.
        // 
        virtual bool STDMETHODCALLTYPE Contains(__in IXRTriggerAction* pObject) = 0;

        // Get the index in the collection of the specified item.
        // 
        virtual HRESULT STDMETHODCALLTYPE IndexOf(__in IXRTriggerAction* pObject,__out_opt int* pIndex) = 0;

        // Inserts an object into the collection at the specified index.
        // 
        virtual HRESULT STDMETHODCALLTYPE Insert(__in int Index,__in IXRTriggerAction* pObject) = 0;

        // Removes the specified object from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Remove(__in IXRTriggerAction* pObject) = 0;

        // Removes the object at the specified index from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE RemoveAt(__in int Index) = 0;

        // Returns the number of items in the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetCount(__out int* pCount) = 0;

        // Retrieves the object at the specified index from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetItem(__in int ItemIndex,__out IXRTriggerAction** ppObject) = 0;

        // Retrieves the object at the specified index from the collection.
        //  
        // This typesafe version will return the value only if the
        // destination interface (ppTriggerAction) matches element in the collection.
        // 
        template<typename XRObj> HRESULT GetItem(__in int ItemIndex,__out XRObj** ppTriggerAction)
        {
            IXRTriggerAction* pTemp = NULL;
        
            HRESULT hr = GetItem(ItemIndex,&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppTriggerAction));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRTriggerActionCollection );

//
//
// IXREventTrigger
//
//
class __declspec(novtable) __declspec(uuid("{A3B5D06E-851B-47B7-B6BF-152485184923}")) 
IXREventTrigger : public IXRTriggerBase
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetRoutedEvent(__in const WCHAR* pRoutedEvent) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetRoutedEvent(__out BSTR* pRoutedEvent) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetActions(__out IXRTriggerActionCollection** ppActions) = 0;
};

DEFINE_XR_IID( IXREventTrigger );

//
//
// IXRBeginStoryboard
//
//
class __declspec(novtable) __declspec(uuid("{6AF50375-AB4A-4C82-B11F-325E5AE1E14E}")) 
IXRBeginStoryboard : public IXRTriggerAction
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetStoryboard(__in IXRStoryboard* pStoryboard) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetStoryboard(__out IXRStoryboard** ppStoryboard) = 0;
};

DEFINE_XR_IID( IXRBeginStoryboard );

//
//
// IXRDoubleAnimation
//
//
class __declspec(novtable) __declspec(uuid("{C00B0A34-6100-4693-9593-719DBB997822}")) 
IXRDoubleAnimation : public IXRTimeline
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFrom(__in float From) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetFrom(__out float* pFrom) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetTo(__in float To) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetTo(__out float* pTo) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetBy(__in float By) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetBy(__out float* pBy) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetEasingFunction(__in IXRDependencyObject* pEasingFunction) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetEasingFunction(__out IXRDependencyObject** ppEasingFunction) = 0;

        // This typesafe version will return the value only if the
        // destination interface (ppEasingFunction) matches.
        // 
        template<typename XRObj> HRESULT GetEasingFunction(__deref_out XRObj** ppEasingFunction)
        {
            IXRDependencyObject* pTemp = NULL;
        
            HRESULT hr = GetEasingFunction(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppEasingFunction));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRDoubleAnimation );

//
//
// IXRColorAnimation
//
//
class __declspec(novtable) __declspec(uuid("{009335B7-2D5A-4766-9981-A06703ED4C53}")) 
IXRColorAnimation : public IXRTimeline
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFrom(__in COLORREF From) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetFrom(__out COLORREF* pFrom) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetTo(__in COLORREF To) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetTo(__out COLORREF* pTo) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetBy(__in COLORREF By) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetBy(__out COLORREF* pBy) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetEasingFunction(__in IXRDependencyObject* pEasingFunction) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetEasingFunction(__out IXRDependencyObject** ppEasingFunction) = 0;

        // This typesafe version will return the value only if the
        // destination interface (ppEasingFunction) matches.
        // 
        template<typename XRObj> HRESULT GetEasingFunction(__deref_out XRObj** ppEasingFunction)
        {
            IXRDependencyObject* pTemp = NULL;
        
            HRESULT hr = GetEasingFunction(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppEasingFunction));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRColorAnimation );

//
//
// IXRPointAnimation
//
//
class __declspec(novtable) __declspec(uuid("{82697507-63E3-46B6-A889-32C386743401}")) 
IXRPointAnimation : public IXRTimeline
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFrom(__in XRPoint* pFrom) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetFrom(__out XRPoint* pFrom) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetTo(__in XRPoint* pTo) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetTo(__out XRPoint* pTo) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetBy(__in XRPoint* pBy) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetBy(__out XRPoint* pBy) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetEasingFunction(__in IXRDependencyObject* pEasingFunction) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetEasingFunction(__out IXRDependencyObject** ppEasingFunction) = 0;

        // This typesafe version will return the value only if the
        // destination interface (ppEasingFunction) matches.
        // 
        template<typename XRObj> HRESULT GetEasingFunction(__deref_out XRObj** ppEasingFunction)
        {
            IXRDependencyObject* pTemp = NULL;
        
            HRESULT hr = GetEasingFunction(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppEasingFunction));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRPointAnimation );

//
//
// IXRKeySpline
//
//
class __declspec(novtable) __declspec(uuid("{AAD4AF14-BAD6-4C56-AD76-D62ECC238550}")) 
IXRKeySpline : public IXRDependencyObject
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetControlPoint1(__in XRPoint* pControlPoint1) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetControlPoint1(__out XRPoint* pControlPoint1) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetControlPoint2(__in XRPoint* pControlPoint2) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetControlPoint2(__out XRPoint* pControlPoint2) = 0;
};

DEFINE_XR_IID( IXRKeySpline );

//
//
// IXRColorKeyFrame
//
//
class __declspec(novtable) __declspec(uuid("{AFB61F78-7853-49F1-977A-8694B6300A71}")) 
IXRColorKeyFrame : public IXRDependencyObject
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetValue(__in COLORREF Value) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetValue(__out COLORREF* pValue) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetKeyTime(__in XRKeyTime* pKeyTime) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetKeyTime(__out XRKeyTime* pKeyTime) = 0;
};

DEFINE_XR_IID( IXRColorKeyFrame );

//
//
// IXRColorKeyFrameCollection
//
//
// Represents a collection of IXRColorKeyFrame objects that can be individually accessed by index.
// 
class __declspec(novtable) __declspec(uuid("{0A413AA8-0655-4E70-B115-F471A1FE8439}")) 
IXRColorKeyFrameCollection : public IXRDependencyObject
{
    public:

        // Add an IXRColorKeyFrame object to the end of the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Add(__in IXRColorKeyFrame* pColorKeyFrame,__out_opt int* pIndex) = 0;

        // Removes all objects from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Clear() = 0;

        // Returns true if the collection contains the IXRColorKeyFrame.
        // 
        virtual bool STDMETHODCALLTYPE Contains(__in IXRColorKeyFrame* pColorKeyFrame) = 0;

        // Get the index in the collection of the specified IXRColorKeyFrame.
        // 
        virtual HRESULT STDMETHODCALLTYPE IndexOf(__in IXRColorKeyFrame* pColorKeyFrame,__out_opt int* pIndex) = 0;

        // Inserts an IXRColorKeyFrame into the collection at the specified index.
        // 
        virtual HRESULT STDMETHODCALLTYPE Insert(__in int Index,__in IXRColorKeyFrame* pColorKeyFrame) = 0;

        // Removes the specified IXRColorKeyFrame from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Remove(__in IXRColorKeyFrame* pColorKeyFrame) = 0;

        // Removes the IXRColorKeyFrame at the specified index from this collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE RemoveAt(__in int Index) = 0;

        // Returns the number of IXRColorKeyFrames in the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetCount(__out int* pCount) = 0;

        // Retrieves the IXRColorKeyFrame at the specified index from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetItem(__in int ItemIndex,__out IXRColorKeyFrame** ppColorKeyFrame) = 0;

        // Retrieves the object at the specified index from the collection.
        //  
        // This typesafe version will return the value only if the
        // destination interface (ppKeyFrame) matches element in the collection.
        // 
        template<typename XRObj> HRESULT GetItem(__in int ItemIndex,__out XRObj** ppKeyFrame)
        {
            IXRColorKeyFrame* pTemp = NULL;
        
            HRESULT hr = GetItem(ItemIndex,&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppKeyFrame));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRColorKeyFrameCollection );

//
//
// IXRDoubleKeyFrame
//
//
class __declspec(novtable) __declspec(uuid("{ED1DE25B-D5D4-47A4-8362-EF9974A06B90}")) 
IXRDoubleKeyFrame : public IXRDependencyObject
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetValue(__in float Value) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetValue(__out float* pValue) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetKeyTime(__in XRKeyTime* pKeyTime) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetKeyTime(__out XRKeyTime* pKeyTime) = 0;
};

DEFINE_XR_IID( IXRDoubleKeyFrame );

//
//
// IXRDoubleKeyFrameCollection
//
//
//  Provides access to an ordered collection of IXRDoubleKeyFrame objects.
// 
class __declspec(novtable) __declspec(uuid("{C9D496A0-0298-40B4-BE63-9D7DE19442D4}")) 
IXRDoubleKeyFrameCollection : public IXRDependencyObject
{
    public:

        // Adds an IXRDoubleKeyFrame object to the end of the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Add(__in IXRDoubleKeyFrame* pObject,__out_opt int* pIndex) = 0;

        // Removes all IXRDoubleKeyFrame objects from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Clear() = 0;

        // Returns true if the collection contains the item.
        // 
        virtual bool STDMETHODCALLTYPE Contains(__in IXRDoubleKeyFrame* pObject) = 0;

        // Get the index in the collection of the specified item.
        // 
        virtual HRESULT STDMETHODCALLTYPE IndexOf(__in IXRDoubleKeyFrame* pObject,__out_opt int* pIndex) = 0;

        // Inserts an object into the collection at the specified index.
        // 
        virtual HRESULT STDMETHODCALLTYPE Insert(__in int Index,__in IXRDoubleKeyFrame* pObject) = 0;

        // Removes the specified object from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Remove(__in IXRDoubleKeyFrame* pObject) = 0;

        // Removes the object at the specified index from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE RemoveAt(__in int Index) = 0;

        // Returns the number of items in the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetCount(__out int* pCount) = 0;

        // Retrieves the object at the specified index from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetItem(__in int ItemIndex,__out IXRDoubleKeyFrame** ppObject) = 0;

        // Retrieves the object at the specified index from the collection.
        //  
        // This typesafe version will return the value only if the
        // destination interface (ppKeyFrame) matches element in the collection.
        // 
        template<typename XRObj> HRESULT GetItem(__in int ItemIndex,__out XRObj** ppKeyFrame)
        {
            IXRDoubleKeyFrame* pTemp = NULL;
        
            HRESULT hr = GetItem(ItemIndex,&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppKeyFrame));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRDoubleKeyFrameCollection );

//
//
// IXRPointKeyFrame
//
//
class __declspec(novtable) __declspec(uuid("{1E4ECF83-B584-4912-8D10-307EC489EA58}")) 
IXRPointKeyFrame : public IXRDependencyObject
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetValue(__in XRPoint* pValue) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetValue(__out XRPoint* pValue) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetKeyTime(__in XRKeyTime* pKeyTime) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetKeyTime(__out XRKeyTime* pKeyTime) = 0;
};

DEFINE_XR_IID( IXRPointKeyFrame );

//
//
// IXRPointKeyFrameCollection
//
//
// Represents a collection of IXRPointKeyFrame objects that can be individually accessed by index.
// 
class __declspec(novtable) __declspec(uuid("{6E05C6A4-CF15-44AF-BEA2-13B078C80EEC}")) 
IXRPointKeyFrameCollection : public IXRDependencyObject
{
    public:

        // Adds an object to the end of the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Add(__in IXRPointKeyFrame* pObject,__out_opt int* pIndex) = 0;

        // Removes all objects from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Clear() = 0;

        // Returns true if the collection contains the item.
        // 
        virtual bool STDMETHODCALLTYPE Contains(__in IXRPointKeyFrame* pObject) = 0;

        // Get the index in the collection of the specified item.
        // 
        virtual HRESULT STDMETHODCALLTYPE IndexOf(__in IXRPointKeyFrame* pObject,__out_opt int* pIndex) = 0;

        // Inserts an object into the collection at the specified index.
        // 
        virtual HRESULT STDMETHODCALLTYPE Insert(__in int Index,__in IXRPointKeyFrame* pObject) = 0;

        // Removes the specified object from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Remove(__in IXRPointKeyFrame* pObject) = 0;

        // Removes the object at the specified index from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE RemoveAt(__in int Index) = 0;

        // Returns the number of items in the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetCount(__out int* pCount) = 0;

        // Retrieves the object at the specified index from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetItem(__in int ItemIndex,__out IXRPointKeyFrame** ppObject) = 0;

        // Retrieves the object at the specified index from the collection.
        //  
        // This typesafe version will return the value only if the
        // destination interface (ppKeyFrame) matches element in the collection.
        // 
        template<typename XRObj> HRESULT GetItem(__in int ItemIndex,__out XRObj** ppKeyFrame)
        {
            IXRPointKeyFrame* pTemp = NULL;
        
            HRESULT hr = GetItem(ItemIndex,&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppKeyFrame));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRPointKeyFrameCollection );

//
//
// IXRObjectKeyFrame
//
//
class __declspec(novtable) __declspec(uuid("{C8D50BF7-943A-44B5-9346-694EF12DDEBE}")) 
IXRObjectKeyFrame : public IXRDependencyObject
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetValue(__in IXRDependencyObject* pValue) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetValue(__out IXRDependencyObject** ppValue) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetKeyTime(__in XRKeyTime* pKeyTime) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetKeyTime(__out XRKeyTime* pKeyTime) = 0;

        // This typesafe version will return the value only if the
        // destination interface (ppValue) matches.
        // 
        template<typename XRObj> HRESULT GetValue(__out XRObj** ppValue)
        {
            IXRDependencyObject* pTemp = NULL;
        
            HRESULT hr = GetValue(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppValue));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRObjectKeyFrame );

//
//
// IXRObjectKeyFrameCollection
//
//
// Represents a collection of IXRObjectKeyFrame objects that can be individually accessed by index.
// 
class __declspec(novtable) __declspec(uuid("{2D79972A-7059-423E-B470-67EE45744A3B}")) 
IXRObjectKeyFrameCollection : public IXRDependencyObject
{
    public:

        // Adds an object to the end of the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Add(__in IXRObjectKeyFrame* pObject,__out_opt int* pIndex) = 0;

        // Removes all objects from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Clear() = 0;

        // Returns true if the collection contains the item.
        // 
        virtual bool STDMETHODCALLTYPE Contains(__in IXRObjectKeyFrame* pObject) = 0;

        // Get the index in the collection of the specified item.
        // 
        virtual HRESULT STDMETHODCALLTYPE IndexOf(__in IXRObjectKeyFrame* pObject,__out_opt int* pIndex) = 0;

        // Inserts an object into the collection at the specified index.
        // 
        virtual HRESULT STDMETHODCALLTYPE Insert(__in int Index,__in IXRObjectKeyFrame* pObject) = 0;

        // Removes the specified object from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Remove(__in IXRObjectKeyFrame* pObject) = 0;

        // Removes the object at the specified index from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE RemoveAt(__in int Index) = 0;

        // Returns the number of items in the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetCount(__out int* pCount) = 0;

        // Retrieves the object at the specified index from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetItem(__in int ItemIndex,__out IXRObjectKeyFrame** ppObject) = 0;

        // Retrieves the object at the specified index from the collection.
        //  
        // This typesafe version will return the value only if the
        // destination interface (ppKeyFrame) matches element in the collection.
        // 
        template<typename XRObj> HRESULT GetItem(__in int ItemIndex,__out XRObj** ppKeyFrame)
        {
            IXRObjectKeyFrame* pTemp = NULL;
        
            HRESULT hr = GetItem(ItemIndex,&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppKeyFrame));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRObjectKeyFrameCollection );

//
//
// IXRDoubleAnimationUsingKeyFrames
//
//
class __declspec(novtable) __declspec(uuid("{5C960EF1-14CD-4EF3-A3B5-3836E0B4B6A9}")) 
IXRDoubleAnimationUsingKeyFrames : public IXRTimeline
{
    public:
        virtual HRESULT STDMETHODCALLTYPE GetKeyFrames(__out IXRDoubleKeyFrameCollection** ppKeyFrames) = 0;
};

DEFINE_XR_IID( IXRDoubleAnimationUsingKeyFrames );

//
//
// IXRDiscreteDoubleKeyFrame
//
//
class __declspec(novtable) __declspec(uuid("{4AE0AA70-0066-4F21-BC02-F2D99B73C88D}")) 
IXRDiscreteDoubleKeyFrame : public IXRDoubleKeyFrame
{
    public:
};

DEFINE_XR_IID( IXRDiscreteDoubleKeyFrame );

//
//
// IXRLinearDoubleKeyFrame
//
//
class __declspec(novtable) __declspec(uuid("{552F11F0-A7D7-4897-BCF7-F429F986617C}")) 
IXRLinearDoubleKeyFrame : public IXRDoubleKeyFrame
{
    public:
};

DEFINE_XR_IID( IXRLinearDoubleKeyFrame );

//
//
// IXRSplineDoubleKeyFrame
//
//
class __declspec(novtable) __declspec(uuid("{8581C12E-A956-4F42-AE52-3CAD6883AF1A}")) 
IXRSplineDoubleKeyFrame : public IXRDoubleKeyFrame
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetKeySpline(__in IXRKeySpline* pKeySpline) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetKeySpline(__out IXRKeySpline** ppKeySpline) = 0;
};

DEFINE_XR_IID( IXRSplineDoubleKeyFrame );

//
//
// IXREasingDoubleKeyFrame
//
//
class __declspec(novtable) __declspec(uuid("{fbddf96c-d31c-4221-b6bd-5ecf6c476617}")) 
IXREasingDoubleKeyFrame : public IXRDoubleKeyFrame
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetEasingFunction(__in IXRDependencyObject* pEasingFunction) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetEasingFunction(__out IXRDependencyObject** ppEasingFunction) = 0;
};

DEFINE_XR_IID( IXREasingDoubleKeyFrame );

//
//
// IXRColorAnimationUsingKeyFrames
//
//
class __declspec(novtable) __declspec(uuid("{F68A8362-A985-4E40-B5FF-11DFCD61619D}")) 
IXRColorAnimationUsingKeyFrames : public IXRTimeline
{
    public:
        virtual HRESULT STDMETHODCALLTYPE GetKeyFrames(__out IXRColorKeyFrameCollection** ppKeyFrames) = 0;
};

DEFINE_XR_IID( IXRColorAnimationUsingKeyFrames );

//
//
// IXRDiscreteColorKeyFrame
//
//
class __declspec(novtable) __declspec(uuid("{B664EF54-B09E-48CC-B279-6C79D95CDB71}")) 
IXRDiscreteColorKeyFrame : public IXRColorKeyFrame
{
    public:
};

DEFINE_XR_IID( IXRDiscreteColorKeyFrame );

//
//
// IXRLinearColorKeyFrame
//
//
class __declspec(novtable) __declspec(uuid("{134DA44F-05B9-4E1F-B9BB-8A40A512D07C}")) 
IXRLinearColorKeyFrame : public IXRColorKeyFrame
{
    public:
};

DEFINE_XR_IID( IXRLinearColorKeyFrame );

//
//
// IXRSplineColorKeyFrame
//
//
class __declspec(novtable) __declspec(uuid("{96559F6C-5378-4746-A76C-6D5CFF71C928}")) 
IXRSplineColorKeyFrame : public IXRColorKeyFrame
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetKeySpline(__in IXRKeySpline* pKeySpline) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetKeySpline(__out IXRKeySpline** ppKeySpline) = 0;
};

DEFINE_XR_IID( IXRSplineColorKeyFrame );

//
//
// IXREasingColorKeyFrame
//
//
class __declspec(novtable) __declspec(uuid("{3292ca81-bbb0-4de5-81ac-d23778885f84}")) 
IXREasingColorKeyFrame : public IXRColorKeyFrame
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetEasingFunction(__in IXRDependencyObject* pEasingFunction) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetEasingFunction(__out IXRDependencyObject** ppEasingFunction) = 0;
};

DEFINE_XR_IID( IXREasingColorKeyFrame );

//
//
// IXRPointAnimationUsingKeyFrames
//
//
class __declspec(novtable) __declspec(uuid("{D79C852B-B650-4257-ADF1-2235451B26FE}")) 
IXRPointAnimationUsingKeyFrames : public IXRTimeline
{
    public:
        virtual HRESULT STDMETHODCALLTYPE GetKeyFrames(__out IXRPointKeyFrameCollection** ppKeyFrames) = 0;
};

DEFINE_XR_IID( IXRPointAnimationUsingKeyFrames );

//
//
// IXRDiscretePointKeyFrame
//
//
class __declspec(novtable) __declspec(uuid("{BB1E2522-2FA1-45BC-86CE-19ED561EDD62}")) 
IXRDiscretePointKeyFrame : public IXRPointKeyFrame
{
    public:
};

DEFINE_XR_IID( IXRDiscretePointKeyFrame );

//
//
// IXRLinearPointKeyFrame
//
//
class __declspec(novtable) __declspec(uuid("{6B84F082-C9D0-4B26-A0ED-8F6939D713BF}")) 
IXRLinearPointKeyFrame : public IXRPointKeyFrame
{
    public:
};

DEFINE_XR_IID( IXRLinearPointKeyFrame );

//
//
// IXRSplinePointKeyFrame
//
//
class __declspec(novtable) __declspec(uuid("{15B30023-FC78-4079-8D76-8ED60B416044}")) 
IXRSplinePointKeyFrame : public IXRPointKeyFrame
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetKeySpline(__in IXRKeySpline* pKeySpline) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetKeySpline(__out IXRKeySpline** ppKeySpline) = 0;
};

DEFINE_XR_IID( IXRSplinePointKeyFrame );

//
//
// IXREasingPointKeyFrame
//
//
class __declspec(novtable) __declspec(uuid("{d18fe54d-0da3-402a-a0c9-96733b62b3b1}")) 
IXREasingPointKeyFrame : public IXRPointKeyFrame
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetEasingFunction(__in IXRDependencyObject* pEasingFunction) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetEasingFunction(__out IXRDependencyObject** ppEasingFunction) = 0;
};

DEFINE_XR_IID( IXREasingPointKeyFrame );

//
//
// IXRObjectAnimationUsingKeyFrames
//
//
class __declspec(novtable) __declspec(uuid("{2BBC1D88-49EE-424A-9093-F1DB931A155D}")) 
IXRObjectAnimationUsingKeyFrames : public IXRTimeline
{
    public:
        virtual HRESULT STDMETHODCALLTYPE GetKeyFrames(__out IXRObjectKeyFrameCollection** ppKeyFrames) = 0;
};

DEFINE_XR_IID( IXRObjectAnimationUsingKeyFrames );

//
//
// IXRDiscreteObjectKeyFrame
//
//
class __declspec(novtable) __declspec(uuid("{FF30B917-BF93-45C9-8BD3-83AA2D88C68D}")) 
IXRDiscreteObjectKeyFrame : public IXRObjectKeyFrame
{
    public:
};

DEFINE_XR_IID( IXRDiscreteObjectKeyFrame );

//
//
// IXRInkPresenter
//
//
class __declspec(novtable) __declspec(uuid("{7B05E516-7642-4A97-9C13-039BE336C262}")) 
IXRInkPresenter : public IXRCanvas
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetStrokes(__in IXRStrokeCollection* pStrokes) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetStrokes(__out IXRStrokeCollection** ppStrokes) = 0;
};

DEFINE_XR_IID( IXRInkPresenter );

//
//
// IXRStylusInfo
//
//
class __declspec(novtable) __declspec(uuid("{205AC290-D766-48A6-BD69-B218A1A4D107}")) 
IXRStylusInfo : public IXRDependencyObject
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetDeviceType(__in XRTabletDeviceType DeviceType) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetDeviceType(__out XRTabletDeviceType* pDeviceType) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetIsInverted(__in bool IsInverted) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetIsInverted(__out bool* pIsInverted) = 0;
};

DEFINE_XR_IID( IXRStylusInfo );

//
//
// IXRFrameworkTemplate
//
//
class __declspec(novtable) __declspec(uuid("{1407CB5F-3413-488c-804B-FDDC4F0E3631}")) 
IXRFrameworkTemplate : public IXRDependencyObject
{
    public:
};

DEFINE_XR_IID( IXRFrameworkTemplate );

//
//
// IXRControlTemplate
//
//
class __declspec(novtable) __declspec(uuid("{04752423-AC0A-4E76-A609-3F6DA287B485}")) 
IXRControlTemplate : public IXRFrameworkTemplate
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetTargetType(__in const IID iid) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetTargetType(__out IID* pIID) = 0;
};

DEFINE_XR_IID( IXRControlTemplate );

//
//
// IXRControl
//
//
class __declspec(novtable) __declspec(uuid("{D83247C1-0BCD-43D1-AAEE-FD1FCF5505EF}")) 
IXRControl : public IXRFrameworkElement
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFontSize(__in float FontSize) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetFontSize(__out float* pFontSize) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetFontWeight(__in XRFontWeight FontWeight) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetFontWeight(__out XRFontWeight* pFontWeight) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetFontStyle(__in XRFontStyle FontStyle) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetFontStyle(__out XRFontStyle* pFontStyle) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetFontStretch(__in XRFontStretch FontStretch) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetFontStretch(__out XRFontStretch* pFontStretch) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetForeground(__in IXRBrush* pForeground) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetForeground(__out IXRBrush** ppForeground) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetIsTabStop(__in bool IsTabStop) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetIsTabStop(__out bool* pIsTabStop) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetIsEnabled(__in bool IsEnabled) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetIsEnabled(__out bool* pIsEnabled) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetTabIndex(__in int TabIndex) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetTabIndex(__out int* pTabIndex) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetTabNavigation(__in XRKeyboardNavigationMode TabNavigation) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetTabNavigation(__out XRKeyboardNavigationMode* pTabNavigation) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetTemplate(__in IXRControlTemplate* pTemplate) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetTemplate(__out IXRControlTemplate** ppTemplate) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetPadding(__in XRThickness* pPadding) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetPadding(__out XRThickness* pPadding) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetHorizontalContentAlignment(__in XRHorizontalAlignment HorizontalContentAlignment) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetHorizontalContentAlignment(__out XRHorizontalAlignment* pHorizontalContentAlignment) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetVerticalContentAlignment(__in XRVerticalAlignment VerticalContentAlignment) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetVerticalContentAlignment(__out XRVerticalAlignment* pVerticalContentAlignment) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetBackground(__in IXRBrush* pBackground) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetBackground(__out IXRBrush** ppBackground) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetBorderThickness(__in XRThickness* pBorderThickness) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetBorderThickness(__out XRThickness* pBorderThickness) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetBorderBrush(__in IXRBrush* pBorderBrush) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetBorderBrush(__out IXRBrush** ppBorderBrush) = 0;
        virtual HRESULT STDMETHODCALLTYPE AddIsEnabledChangedEventHandler(__in IXRDelegate<XRValueChangedEventArgs<bool> >* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveIsEnabledChangedEventHandler(__in IXRDelegate<XRValueChangedEventArgs<bool> >* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE Focus(__out bool* pBool) = 0;
        virtual HRESULT STDMETHODCALLTYPE GoToVisualState(__in const WCHAR* pStateName,__in bool UseTransitions) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetFontFamily(__in const WCHAR* pFontFamily) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetFontFamily(__out BSTR* pFontFamily) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetTemplateChild(__in const WCHAR * pChildName,__out IXRDependencyObject ** ppValue) = 0;

        // This typesafe version will return the value only if the
        // destination interface (ppValue) matches.
        // 
        template<typename XRObj> HRESULT GetTemplateChild(__in const WCHAR * ChildName,__out XRObj** ppValue)
        {
            IXRDependencyObject * pTemp = NULL;
        
            HRESULT hr = GetTemplateChild(ChildName,&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppValue));
        
                pTemp->Release();
            }
        
            return hr;
        }


        // This typesafe version will return the value only if the
        // destination interface (ppForeground) matches.
        // 
        template<typename XRObj> HRESULT GetForeground(__out XRObj** ppForeground)
        {
            IXRBrush* pTemp = NULL;
        
            HRESULT hr = GetForeground(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppForeground));
        
                pTemp->Release();
            }
        
            return hr;
        }


        // This typesafe version will return the value only if the
        // destination interface (ppBackground) matches.
        // 
        template<typename XRObj> HRESULT GetBackground(__out XRObj** ppBackground)
        {
            IXRBrush* pTemp = NULL;
        
            HRESULT hr = GetBackground(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppBackground));
        
                pTemp->Release();
            }
        
            return hr;
        }


        // This typesafe version will return the value only if the
        // destination interface (ppBorderBrush) matches.
        // 
        template<typename XRObj> HRESULT GetBorderBrush(__out XRObj** ppBorderBrush)
        {
            IXRBrush* pTemp = NULL;
        
            HRESULT hr = GetBorderBrush(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppBorderBrush));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRControl );

//
//
// IXRStackPanel
//
//
class __declspec(novtable) __declspec(uuid("{92AF968D-AE1C-417B-A5DA-5ED9A84481DB}")) 
IXRStackPanel : public IXRPanel
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetOrientation(__in XROrientation Orientation) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetOrientation(__out XROrientation* pOrientation) = 0;
};

DEFINE_XR_IID( IXRStackPanel );

//
//
// IXRTextBox
//
//
class __declspec(novtable) __declspec(uuid("{8F5BC2B9-B7D6-4961-9F5A-DDFAA43A2118}")) 
IXRTextBox : public IXRControl
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetHorizontalScrollBarVisibility(__in XRScrollBarVisibility pHorizontalScrollBarVisibility) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetHorizontalScrollBarVisibility(__out XRScrollBarVisibility* ppHorizontalScrollBarVisibility) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetVerticalScrollBarVisibility(__in XRScrollBarVisibility pVerticalScrollBarVisibility) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetVerticalScrollBarVisibility(__out XRScrollBarVisibility* ppVerticalScrollBarVisibility) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetText(__in const WCHAR* pText) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetText(__out BSTR* pText) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetSelectedText(__in const WCHAR* pSelectedText) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetSelectedText(__out BSTR* pSelectedText) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetSelectionLength(__in int SelectionLength) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetSelectionLength(__out int* pSelectionLength) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetSelectionStart(__in int SelectionStart) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetSelectionStart(__out int* pSelectionStart) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetMaxLength(__in int MaxLength) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetMaxLength(__out int* pMaxLength) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetIsReadOnly(__in bool IsReadOnly) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetIsReadOnly(__out bool* pIsReadOnly) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetAcceptsReturn(__in bool AcceptsReturn) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetAcceptsReturn(__out bool* pAcceptsReturn) = 0;
        virtual HRESULT STDMETHODCALLTYPE AddTextChangedEventHandler(__in IXRDelegate<XRTextChangedEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveTextChangedEventHandler(__in IXRDelegate<XRTextChangedEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE AddSelectionChangedEventHandler(__in IXRDelegate<XRRoutedEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveSelectionChangedEventHandler(__in IXRDelegate<XRRoutedEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetSelectionBackground(__in IXRBrush* pSelectionBackground) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetSelectionBackground(__out IXRBrush** ppSelectionBackground) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetSelectionForeground(__in IXRBrush* pSelectionForeground) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetSelectionForeground(__out IXRBrush** ppSelectionForeground) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetTextAlignment(__in XRTextAlignment TextAlignment) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetTextAlignment(__out XRTextAlignment* pTextAlignment) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetTextWrapping(__in XRTextWrapping TextWrapping) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetTextWrapping(__out XRTextWrapping* pTextWrapping) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetCaretBrush(__in IXRBrush* pCaretBrush) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetCaretBrush(__out IXRBrush** ppCaretBrush) = 0;
        virtual HRESULT STDMETHODCALLTYPE SelectAll() = 0;
        virtual HRESULT STDMETHODCALLTYPE Select(__in int start,__in int length) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetFontSource(__in HANDLE hFile) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetFontSource(__out HANDLE* phFile) = 0;

        // This typesafe version will return the value only if the
        // destination interface (ppSelectionBackground) matches.
        // 
        template<typename XRObj> HRESULT GetSelectionBackground(__out XRObj** ppSelectionBackground)
        {
            IXRBrush* pTemp = NULL;
        
            HRESULT hr = GetSelectionBackground(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppSelectionBackground));
        
                pTemp->Release();
            }
        
            return hr;
        }


        // This typesafe version will return the value only if the
        // destination interface (ppSelectionForeground) matches.
        // 
        template<typename XRObj> HRESULT GetSelectionForeground(__out XRObj** ppSelectionForeground)
        {
            IXRBrush* pTemp = NULL;
        
            HRESULT hr = GetSelectionForeground(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppSelectionForeground));
        
                pTemp->Release();
            }
        
            return hr;
        }


        // This typesafe version will return the value only if the
        // destination interface (ppCaretBrush) matches.
        // 
        template<typename XRObj> HRESULT GetCaretBrush(__out XRObj** ppCaretBrush)
        {
            IXRBrush* pTemp = NULL;
        
            HRESULT hr = GetCaretBrush(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppCaretBrush));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRTextBox );

//
//
// IXRPasswordBox
//
//
class __declspec(novtable) __declspec(uuid("{1301E21F-7D33-4D9A-8611-6DDDFBC57E32}")) 
IXRPasswordBox : public IXRControl
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetPassword(__in const WCHAR* pPassword) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetPassword(__out BSTR* pPassword) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetMaxLength(__in int MaxLength) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetMaxLength(__out int* pMaxLength) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetSelectionBackground(__in IXRBrush* pSelectionBackground) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetSelectionBackground(__out IXRBrush** ppSelectionBackground) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetSelectionForeground(__in IXRBrush* pSelectionForeground) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetSelectionForeground(__out IXRBrush** ppSelectionForeground) = 0;
        virtual HRESULT STDMETHODCALLTYPE AddPasswordChangedEventHandler(__in IXRDelegate<XRRoutedEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemovePasswordChangedEventHandler(__in IXRDelegate<XRRoutedEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetCaretBrush(__in IXRBrush* pCaretBrush) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetCaretBrush(__out IXRBrush** ppCaretBrush) = 0;
        virtual HRESULT STDMETHODCALLTYPE SelectAll() = 0;
        virtual HRESULT STDMETHODCALLTYPE GetPasswordChar(__out WCHAR* pPasswordChar) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetPasswordChar(__in WCHAR PasswordChar) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetFontSource(__in HANDLE hFile) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetFontSource(__out HANDLE* phFile) = 0;

        // This typesafe version will return the value only if the
        // destination interface (ppSelectionBackground) matches.
        // 
        template<typename XRObj> HRESULT GetSelectionBackground(__out XRObj** ppSelectionBackground)
        {
            IXRBrush* pTemp = NULL;
        
            HRESULT hr = GetSelectionBackground(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppSelectionBackground));
        
                pTemp->Release();
            }
        
            return hr;
        }


        // This typesafe version will return the value only if the
        // destination interface (ppSelectionForeground) matches.
        // 
        template<typename XRObj> HRESULT GetSelectionForeground(__out XRObj** ppSelectionForeground)
        {
            IXRBrush* pTemp = NULL;
        
            HRESULT hr = GetSelectionForeground(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppSelectionForeground));
        
                pTemp->Release();
            }
        
            return hr;
        }


        // This typesafe version will return the value only if the
        // destination interface (ppCaretBrush) matches.
        // 
        template<typename XRObj> HRESULT GetCaretBrush(__out XRObj** ppCaretBrush)
        {
            IXRBrush* pTemp = NULL;
        
            HRESULT hr = GetCaretBrush(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppCaretBrush));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRPasswordBox );

//
//
// IXRRowDefinition
//
//
class __declspec(novtable) __declspec(uuid("{CA78540D-018B-427C-93AE-5AC09F69B906}")) 
IXRRowDefinition : public IXRDependencyObject
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetHeight(__in XRGridLength* pHeight) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetHeight(__out XRGridLength* pHeight) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetMaxHeight(__in float MaxHeight) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetMaxHeight(__out float* pMaxHeight) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetMinHeight(__in float MinHeight) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetMinHeight(__out float* pMinHeight) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetActualHeight(__out float* pActualHeight) = 0;
};

DEFINE_XR_IID( IXRRowDefinition );

//
//
// IXRColumnDefinition
//
//
class __declspec(novtable) __declspec(uuid("{B9B37D7D-5B28-431B-B452-625966192F47}")) 
IXRColumnDefinition : public IXRDependencyObject
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetWidth(__in XRGridLength* pWidth) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetWidth(__out XRGridLength* pWidth) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetMaxWidth(__in float MaxWidth) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetMaxWidth(__out float* pMaxWidth) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetMinWidth(__in float MinWidth) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetMinWidth(__out float* pMinWidth) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetActualWidth(__out float* pActualWidth) = 0;
};

DEFINE_XR_IID( IXRColumnDefinition );

//
//
// IXRRowDefinitionCollection
//
//
// Provides access to an ordered, strongly typed collection of IXRRowDefinition objects.
// 
class __declspec(novtable) __declspec(uuid("{B8A78A7E-9A28-4171-A570-381059AA2EA4}")) 
IXRRowDefinitionCollection : public IXRDependencyObject
{
    public:

        // Adds an object to the end of the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Add(__in IXRRowDefinition* pRowDefinition,__out_opt int* pIndex) = 0;

        // Removes all objects from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Clear() = 0;

        // Returns true if the collection contains the item.
        // 
        virtual bool STDMETHODCALLTYPE Contains(__in IXRRowDefinition* pRowDefinition) = 0;

        // Get the index in the collection of the specified item.
        // 
        virtual HRESULT STDMETHODCALLTYPE IndexOf(__in IXRRowDefinition* pRowDefinition,__out_opt int* pIndex) = 0;

        // Inserts a IXRRowDefinition into the collection at the specified index.
        // 
        virtual HRESULT STDMETHODCALLTYPE Insert(__in int Index,__in IXRRowDefinition* pRowDefinition) = 0;

        // Removes the specified IXRRowDefinition from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Remove(__in IXRRowDefinition* pRowDefinition) = 0;

        // Removes the IXRRowDefinition at the specified index from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE RemoveAt(__in int Index) = 0;

        // Returns the number of items in the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetCount(__out int* pCount) = 0;

        // Retrieves the IXRRowDefinition at the specified index from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetItem(__in int ItemIndex,__out IXRRowDefinition** ppRowDefinition) = 0;
};

DEFINE_XR_IID( IXRRowDefinitionCollection );

//
//
// IXRColumnDefinitionCollection
//
//
//  Provides access to an ordered, strongly typed collection of IXRColumnDefinition objects.
// 
class __declspec(novtable) __declspec(uuid("{23005808-DCE1-4C7C-8D6F-77943F701D11}")) 
IXRColumnDefinitionCollection : public IXRDependencyObject
{
    public:

        // Adds an object to the end of the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Add(__in IXRColumnDefinition* pObject,__out_opt int* pIndex) = 0;

        // Removes all objects from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Clear() = 0;

        // Returns true if the collection contains the item.
        // 
        virtual bool STDMETHODCALLTYPE Contains(__in IXRColumnDefinition* pObject) = 0;

        // Get the index in the collection of the specified item.
        // 
        virtual HRESULT STDMETHODCALLTYPE IndexOf(__in IXRColumnDefinition* pObject,__out_opt int* pIndex) = 0;

        // Inserts an object into the collection at the specified index.
        // 
        virtual HRESULT STDMETHODCALLTYPE Insert(__in int Index,__in IXRColumnDefinition* pObject) = 0;

        // Removes the specified object from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Remove(__in IXRColumnDefinition* pObject) = 0;

        // Removes the object at the specified index from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE RemoveAt(__in int Index) = 0;

        // Returns the number of items in the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetCount(__out int* pCount) = 0;

        // Retrieves the object at the specified index from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetItem(__in int ItemIndex,__out IXRColumnDefinition** ppObject) = 0;
};

DEFINE_XR_IID( IXRColumnDefinitionCollection );

//
//
// IXRGrid
//
//
class __declspec(novtable) __declspec(uuid("{99466A3D-C815-4B0E-A222-55774C0933A1}")) 
IXRGrid : public IXRPanel
{
    public:
        virtual HRESULT STDMETHODCALLTYPE GetRowDefinitions(__out IXRRowDefinitionCollection** ppRowDefinitions) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetColumnDefinitions(__out IXRColumnDefinitionCollection** ppColumnDefinitions) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetShowGridLines(__in bool ShowGridLines) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetShowGridLines(__out bool* pShowGridLines) = 0;
};

DEFINE_XR_IID( IXRGrid );

//
//
// IXRUserControl
//
//
class __declspec(novtable) __declspec(uuid("{65E34A2A-5E76-4F9F-AAFD-94B7143AC1F1}")) 
IXRUserControl : public IXRControl
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetContent(__in IXRUIElement* pContent) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetContent(__out IXRUIElement** ppContent) = 0;

        // This typesafe version will return the value only if the
        // destination interface (ppContent) matches.
        // 
        template<typename XRObj> HRESULT GetContent(__out XRObj** ppContent)
        {
            IXRUIElement* pTemp = NULL;
        
            HRESULT hr = GetContent(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppContent));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRUserControl );

//
//
// IXRDataTemplate
//
//
class __declspec(novtable) __declspec(uuid("{14CB1683-77EA-4f38-A1DB-A5090A89F24A}")) 
IXRDataTemplate : public IXRFrameworkTemplate
{
    public:
        virtual HRESULT STDMETHODCALLTYPE LoadContent(__out IXRDependencyObject** ppDependencyObject) = 0;
};

DEFINE_XR_IID( IXRDataTemplate );

//
//
// IXRItemCollection
//
//
// Represents a collection of items.
// 
class __declspec(novtable) __declspec(uuid("{72EA3E67-678C-4E65-8FE6-A2E047073203}")) 
IXRItemCollection : public IXRDependencyObject
{
    public:

        // Adds an item to the end of the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Add(__in XRValue* pValue,__out_opt int* pIndex) = 0;

        // Removes all items from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Clear() = 0;

        // Returns true if the collection contains the item.
        // 
        virtual bool STDMETHODCALLTYPE Contains(__in XRValue* pValue) = 0;

        // Get the index in the collection of the specified item.
        // 
        virtual HRESULT STDMETHODCALLTYPE IndexOf(__in XRValue* pValue,__out_opt int* pIndex) = 0;

        // Inserts an item into the collection at the specified index.
        // 
        virtual HRESULT STDMETHODCALLTYPE Insert(__in int Index,__in XRValue* pValue) = 0;

        // Removes the specified item from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE Remove(__in XRValue* pValue) = 0;

        // Removes the item at the specified index from a collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE RemoveAt(__in int Index) = 0;

        // Returns the number of items in the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetCount(__out int* pCount) = 0;

        // Retrieves the object at the specified index from the collection.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetItem(__in int ItemIndex,__out XRValue* pValue) = 0;

        // Add an item of a specific type to the collection.
        // 
        template<typename ValueType> HRESULT Add(__in const ValueType& Value,__out_opt int* pIndex)
        {
            XRValue BoxedValue(Value);
        
            return Add(&BoxedValue, pIndex);
        }


        // Test to see if the item exists in the collection.
        // 
        template<typename ValueType> HRESULT Contains(__in const ValueType& Value)
        {
            XRValue BoxedValue(Value);
        
            return Contains(&BoxedValue);
        }


        // Return the index of the item if it exists in the collection.
        // 
        template<typename ValueType> HRESULT IndexOf(__in const ValueType& Value,__out int* pIndex)
        {
            XRValue BoxedValue(Value);
        
            return IndexOf(&BoxedValue, pIndex);
        }


        // Insert the item in the collection at the specified index.
        // 
        template<typename ValueType> HRESULT Insert(__in int ItemIndex,__in const ValueType& Value)
        {
            XRValue BoxedValue(Value);
        
            return Insert(ItemIndex, &BoxedValue);
        }


        // Remove the item from the collection.
        // 
        template<typename ValueType> HRESULT Remove(__in const ValueType& Value)
        {
            XRValue BoxedValue(Value);
        
            return Remove(&BoxedValue);
        }


        // Retrieves the item at the specified index from the collection.
        // 
        template<typename ValueType> HRESULT GetItem(__in int ItemIndex,__out ValueType* pValue)
        {
            XRValue value;
        
            HRESULT hr = GetItem(ItemIndex,&value);
        
            if(SUCCEEDED(hr))
            {
                hr = value.GetValue(pValue);
        
                FreeXRValue(&value);
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRItemCollection );

//
//
// IXRItemsPanelTemplate
//
//
class __declspec(novtable) __declspec(uuid("{8D425663-7261-4b1e-A556-0C409BA0DC0B}")) 
IXRItemsPanelTemplate : public IXRFrameworkTemplate
{
    public:
};

DEFINE_XR_IID( IXRItemsPanelTemplate );

//
//
// IXRItemsControl
//
//
class __declspec(novtable) __declspec(uuid("{21648858-9F9A-4C4F-AB2C-0C3ECD248E1C}")) 
IXRItemsControl : public IXRControl
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetItemsSource(__in IXREnumerable* pItemsSource) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetItemsSource(__out IXREnumerable** ppItemsSource) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetItems(__out IXRItemCollection** ppItems) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetItemTemplate(__in IXRDataTemplate* pItemTemplate) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetItemTemplate(__out IXRDataTemplate** ppItemTemplate) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetItemsPanel(__in IXRItemsPanelTemplate* pItemsPanel) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetItemsPanel(__out IXRItemsPanelTemplate** ppItemsPanel) = 0;
};

DEFINE_XR_IID( IXRItemsControl );

//
//
// IXRPopup
//
//
class __declspec(novtable) __declspec(uuid("{54081CB5-DDC1-4D7C-AB8A-37CC9A1A4BF9}")) 
IXRPopup : public IXRFrameworkElement
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetChild(__in IXRUIElement* pChild) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetChild(__out IXRUIElement** ppChild) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetIsOpen(__in bool IsOpen) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetIsOpen(__out bool* pIsOpen) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetHorizontalOffset(__in float HorizontalOffset) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetHorizontalOffset(__out float* pHorizontalOffset) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetVerticalOffset(__in float VerticalOffset) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetVerticalOffset(__out float* pVerticalOffset) = 0;
        virtual HRESULT STDMETHODCALLTYPE AddOpenedEventHandler(__in IXRDelegate<XREventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveOpenedEventHandler(__in IXRDelegate<XREventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE AddClosedEventHandler(__in IXRDelegate<XREventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveClosedEventHandler(__in IXRDelegate<XREventArgs>* pDelegate) = 0;

        // This typesafe version will return the value only if the
        // destination interface (ppChild) matches.
        // 
        template<typename XRObj> HRESULT GetChild(__out XRObj** ppChild)
        {
            IXRUIElement* pTemp = NULL;
        
            HRESULT hr = GetChild(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppChild));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRPopup );

//
//
// IXRBorder
//
//
class __declspec(novtable) __declspec(uuid("{CB767F85-C6D3-4BE0-B86B-00B9FE1D6827}")) 
IXRBorder : public IXRFrameworkElement
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetBorderBrush(__in IXRBrush* pBorderBrush) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetBorderBrush(__out IXRBrush** ppBorderBrush) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetBorderThickness(__in XRThickness* pBorderThickness) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetBorderThickness(__out XRThickness* pBorderThickness) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetBackground(__in IXRBrush* pBackground) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetBackground(__out IXRBrush** ppBackground) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetCornerRadius(__in XRCornerRadius* pCornerRadius) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetCornerRadius(__out XRCornerRadius* pCornerRadius) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetPadding(__in XRThickness* pPadding) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetPadding(__out XRThickness* pPadding) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetChild(__in IXRUIElement* pChild) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetChild(__out IXRUIElement** ppChild) = 0;

        // This typesafe version will return the value only if the
        // destination interface (ppBorderBrush) matches.
        // 
        template<typename XRObj> HRESULT GetBorderBrush(__out XRObj** ppBorderBrush)
        {
            IXRBrush* pTemp = NULL;
        
            HRESULT hr = GetBorderBrush(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppBorderBrush));
        
                pTemp->Release();
            }
        
            return hr;
        }


        // This typesafe version will return the value only if the
        // destination interface (ppBackground) matches.
        // 
        template<typename XRObj> HRESULT GetBackground(__out XRObj** ppBackground)
        {
            IXRBrush* pTemp = NULL;
        
            HRESULT hr = GetBackground(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppBackground));
        
                pTemp->Release();
            }
        
            return hr;
        }


        // This typesafe version will return the value only if the
        // destination interface (ppChild) matches.
        // 
        template<typename XRObj> HRESULT GetChild(__out XRObj** ppChild)
        {
            IXRUIElement* pTemp = NULL;
        
            HRESULT hr = GetChild(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppChild));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRBorder );

//
//
// IXRPlaneProjection
//
//
class __declspec(novtable) __declspec(uuid("{2ee1fc68-1ce7-42c7-a43f-4f99967884c7}")) 
IXRPlaneProjection : public IXRProjection
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetLocalOffsetX(__in float LocalOffsetX) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetLocalOffsetX(__out float* pLocalOffsetX) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetLocalOffsetY(__in float LocalOffsetY) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetLocalOffsetY(__out float* pLocalOffsetY) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetLocalOffsetZ(__in float LocalOffsetZ) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetLocalOffsetZ(__out float* pLocalOffsetZ) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetRotationX(__in float RotationX) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetRotationX(__out float* pRotationX) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetRotationY(__in float RotationY) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetRotationY(__out float* pRotationY) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetRotationZ(__in float RotationZ) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetRotationZ(__out float* pRotationZ) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetCenterOfRotationX(__in float CenterOfRotationX) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetCenterOfRotationX(__out float* pCenterOfRotationX) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetCenterOfRotationY(__in float CenterOfRotationY) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetCenterOfRotationY(__out float* pCenterOfRotationY) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetCenterOfRotationZ(__in float CenterOfRotationZ) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetCenterOfRotationZ(__out float* pCenterOfRotationZ) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetGlobalOffsetX(__in float GlobalOffsetX) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetGlobalOffsetX(__out float* pGlobalOffsetX) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetGlobalOffsetY(__in float GlobalOffsetY) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetGlobalOffsetY(__out float* pGlobalOffsetY) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetGlobalOffsetZ(__in float GlobalOffsetZ) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetGlobalOffsetZ(__out float* pGlobalOffsetZ) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetProjectionMatrix(__out IXRMatrix3D** ppProjectionMatrix) = 0;
};

DEFINE_XR_IID( IXRPlaneProjection );

//
//
// IXRMatrix3DProjection
//
//
class __declspec(novtable) __declspec(uuid("{3A63FA45-E54E-4e69-914D-9402195CF667}")) 
IXRMatrix3DProjection : public IXRProjection
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetProjectionMatrix(__in IXRMatrix3D* pProjectionMatrix) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetProjectionMatrix(__out IXRMatrix3D** ppProjectionMatrix) = 0;
};

DEFINE_XR_IID( IXRMatrix3DProjection );

//
//
// IXRContentControl
//
//
// Represents a control with a single piece of content. 
// 
class __declspec(novtable) __declspec(uuid("{BCEBEB77-76FA-4EE5-B7E7-ED2410E02D03}")) 
IXRContentControl : public IXRControl
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetContentTemplate(__in IXRDataTemplate* pContentTemplate) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetContentTemplate(__out IXRDataTemplate** ppContentTemplate) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetContent(__out XRValue* pContent) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetContent(__in XRValue* pContent) = 0;

        // Set the data content to any supported XRValue type.
        //  
        // Example:
        //    float f = 5.5f;
        //    pContentControl->SetContent(f);
        // 
        template<typename ValueType> HRESULT SetContent(__in const ValueType& Value)
        {
            XRValue BoxedValue(Value);
        
            return SetContent(&BoxedValue);
        }


        // Retrieve the data content as a specific type.  This method will return S_OK only
        // if the target type (pContent) matches the type of the supplied argument.
        //  
        // Example:
        //    float f = 0f;
        //    if(SUCCEEDED(pContentControl->GetContent(&f)))
        //    { 
        //      // The content was a float and f contains the value 
        //    } 
        // 
        template<typename ValueType> HRESULT GetContent(__out ValueType* pValue)
        {
            XRValue value;
        
            HRESULT hr = GetContent(&value);
        
            if (SUCCEEDED(hr))
            {
                hr = value.GetValue(pValue);
        
                FreeXRValue(&value);
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRContentControl );

//
//
// IXRContentPresenter
//
//
// Displays the content of a ContentControl.
// 
class __declspec(novtable) __declspec(uuid("{41244641-49DE-4350-8788-25519360544E}")) 
IXRContentPresenter : public IXRControl
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetContentTemplate(__in IXRDataTemplate* pContentTemplate) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetContentTemplate(__out IXRDataTemplate** ppContentTemplate) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetContent(__out XRValue* pContent) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetContent(__in XRValue* pContent) = 0;

        // Set the data content to any supported XRValue type.
        //  
        // Example:
        //    float f = 5.5f;
        //    pContentControl->SetContent(f);
        // 
        template<typename ValueType> HRESULT SetContent(__in const ValueType& Value)
        {
            XRValue BoxedValue(Value);
        
            return SetContent(&BoxedValue);
        }


        // Retrieve the data content as a specific type.  This method will return S_OK only
        // if the target type (pContent) matches the type of the supplied argument.
        //  
        // Example:
        //    float f = 0f;
        //    if(SUCCEEDED(pContentControl->GetContent(&f)))
        //    { 
        //      // The content was a float and f contains the value 
        //    } 
        // 
        template<typename ValueType> HRESULT GetContent(__out ValueType* pValue)
        {
            XRValue value;
        
            HRESULT hr = GetContent(&value);
        
            if (SUCCEEDED(hr))
            {
                hr = value.GetValue(pValue);
        
                FreeXRValue(&value);
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRContentPresenter );

//
//
// IXRItemsPresenter
//
//
class __declspec(novtable) __declspec(uuid("{D031089B-AC6E-4406-844A-0BDB3F71121C}")) 
IXRItemsPresenter : public IXRFrameworkElement
{
    public:
};

DEFINE_XR_IID( IXRItemsPresenter );

//
//
// IXRSetter
//
//
class __declspec(novtable) __declspec(uuid("{2EE8EEB9-A264-4D5F-99B4-F4C7A426C95D}")) 
IXRSetter : public IXRSetterBase
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetValue(__in IXRDependencyObject* pValue) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetValue(__out IXRDependencyObject** ppValue) = 0;

        // This typesafe version will return the value only if the
        // destination interface (ppValue) matches.
        // 
        template<typename XRObj> HRESULT GetValue(__out XRObj** ppValue)
        {
            IXRDependencyObject* pTemp = NULL;
        
            HRESULT hr = GetValue(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppValue));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRSetter );

//
//
// IXRBitmapCache
//
//
class __declspec(novtable) __declspec(uuid("{ED15A81C-4974-4BD7-A3C1-227A2F5516AD}")) 
IXRBitmapCache : public IXRCacheMode
{
    public:
        virtual HRESULT STDMETHODCALLTYPE SetRenderAtScale(__in float RenderAtScale) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetRenderAtScale(__out float* pRenderAtScale) = 0;
};

DEFINE_XR_IID( IXRBitmapCache );

//
//
// IXRResourceDictionary
//
//
// Represents a collection of resource objects.
// 
class __declspec(novtable) __declspec(uuid("{2AE88E6A-9907-4F8A-A2AE-8E104DEBEA12}")) 
IXRResourceDictionary : public IXRDependencyObject
{
    public:
        virtual HRESULT STDMETHODCALLTYPE Add(__in const WCHAR* pKey,__in IXRDependencyObject* pObject) = 0;
        virtual HRESULT STDMETHODCALLTYPE Remove(__in const WCHAR* pKey) = 0;
        virtual HRESULT STDMETHODCALLTYPE Clear() = 0;
        virtual HRESULT STDMETHODCALLTYPE GetCount(__out int* pCount) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetItem(__in const WCHAR* pKey,__out IXRDependencyObject** ppObject) = 0;
        virtual HRESULT STDMETHODCALLTYPE Contains(__in const WCHAR* pKey,__out bool* pContains) = 0;

        // Retrieves the object at the specified index from the collection.
        //  
        // This typesafe version will return the value only if the
        // destination interface (ppObject) matches element in the collection.
        // 
        template<typename XRObj> HRESULT GetItem(__in const WCHAR* pKey,__out XRObj** ppObject)
        {
            IXRDependencyObject* pTemp = NULL;
        
            HRESULT hr = GetItem(pKey,&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppObject));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRResourceDictionary );


/// <summary>
/// Defines methods to manipulate XRValue collections.
/// </summary>
class __declspec(novtable) __declspec(uuid("{C73DEFD0-3C64-4b06-B689-5B4279EDFDB9}")) IXRValueCollection : public IXREnumerable
{
public:
    /// <summary>
    /// Add a element to the collection.
    /// </summary>
    /// <param name="pValue">[in] The element to add.</param>
    /// <returns>
    /// <para>Indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE Add(__in XRValue * pValue) = 0;
    template<typename ItemType> HRESULT Add(__in const ItemType & Value)
    { return __ts_box1(this, &IXRValueCollection::Add, Value); }

    /// <summary>
    /// Remove a element to the collection.
    /// </summary>
    /// <param name="pValue">[in] The element to remove.</param>
    /// <returns>
    /// <para>Indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE Remove(__in XRValue * pValue) = 0;
    template<typename ItemType> HRESULT Remove(__in ItemType & Value)
    { return __ts_box1(this, &IXRValueCollection::Remove, Value); }

    /// <summary>
    /// Return whether the collection contains the given element.
    /// </summary>
    /// <param name="pValue">[in] The element to find.</param>
    /// <param name="pResult">[out] Whether contains the element.</param>
    /// <returns>
    /// <para>Indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE Contains(__in XRValue * pValue, __out bool * pResult) = 0;
    template<typename ItemType> HRESULT Contains(__in const ItemType & Value, __out bool * pResult)
    { return __ts_box2_output(this, &IXRValueCollection::Contains, Value, pResult); }

    /// <summary>
    /// Get elements count.
    /// </summary>
    /// <param name="pCount">[out] The count of the elements.</param>
    /// <returns>
    /// <para>Indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE GetCount(__out int * pCount) = 0;

    /// <summary>
    /// Get whether it is readonly.
    /// </summary>
    /// <param name="pIsReadOnly">[out] Whether it is readonly.</param>
    /// <returns>
    /// <para>Indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE GetIsReadOnly(__out bool * pIsReadOnly) = 0;

    /// <summary>
    /// Clear the collection.
    /// </summary>
    /// <returns>
    /// <para>Indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE Clear() = 0;
};

DEFINE_XR_IID( IXRValueCollection );

/// <summary>
/// Represents a collection of objects that can be individually accessed by index. 
/// </summary>
class __declspec(novtable) __declspec(uuid("{A79E9628-06A9-429b-AA79-2CFCF25633BA}")) IXRList : public IXRValueCollection
{
public:
    /// <summary>
    /// Return the given element's index in the collection.
    /// </summary>
    /// <param name="pValue">[in] The element to find.</param>
    /// <param name="pIndex">[out] The found element's index. -1 if not found.</param>
    /// <returns>
    /// <para>Indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE IndexOf(__in XRValue * pValue, __out int *pIndex) = 0;
    template<typename ItemType> HRESULT IndexOf(__in const ItemType & Value, __out int *pIndex)
    { return __ts_box2_output(this, &IXRList::IndexOf, Value, pIndex); }

    /// <summary>
    /// Insert an element to the given location.
    /// </summary>
    /// <param name="nIndex">[in] The location to insert.</param>
    /// <param name="pValue">[in] The element to insert.</param>
    /// <returns>
    /// <para>Indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE Insert(__in int nIndex, __in XRValue * pValue) = 0;
    template<typename ItemType> HRESULT Insert(__in int nIndex, __in const ItemType & Value)
    { return __ts_box2_input(this, &IXRList::Insert, nIndex, Value); }

    /// <summary>
    /// Get the element at the given location.
    /// </summary>
    /// <param name="nIndex">[in] The location to the element.</param>
    /// <param name="pValue">[out] The element of the location.</param>
    /// <returns>
    /// <para>Indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE GetItem(__in int nIndex, __out XRValue * pValue) = 0;
    template<typename ItemType> HRESULT GetItem(__in int nIndex, __out ItemType * pValue)
    { return __ts_unbox2(this, &IXRList::GetItem, nIndex, pValue); }

    /// <summary>
    /// Set an element at the given location.
    /// </summary>
    /// <param name="nIndex">[in] The location to the element.</param>
    /// <param name="pValue">[in] The element of the location.</param>
    /// <returns>
    /// <para>Indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE SetItem(__in int nIndex, __in XRValue * pValue) = 0;
    template<typename ItemType> HRESULT SetItem(__in int nIndex, __in const ItemType & Value)
    { return __ts_box2_input(this, &IXRList::SetItem, nIndex, Value); }

    /// <summary>
    /// Remove the element at the given location.
    /// </summary>
    /// <param name="nIndex">[in] The location to the element to remove.</param>
    /// <returns>
    /// <para>Indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE RemoveAt(__in int nIndex) = 0;
};

DEFINE_XR_IID( IXRList );

/// <summary>
/// Enum of the collection change action.
/// </summary>
enum XRCollectionChangeAction
{
    XRCollectionChangeAction_Add = 0,
    XRCollectionChangeAction_Remove,
    XRCollectionChangeAction_Replace,
    XRCollectionChangeAction_Move,
    XRCollectionChangeAction_Reset
};

/// <summary>
/// The custom event args for CollectionChanged event in IXRNotifyCollectionChanged.
/// </summary>
struct XRCollectionChangedCustomEventArgs
{
    /// <summary>
    /// The elements have been removed.
    /// </summary>
    IXRList * pOldItems;

    /// <summary>
    /// The starting index of the removed elements.
    /// </summary>
    int OldStartingIndex;

    /// <summary>
    /// The elements have been added to the collection.
    /// </summary>
    IXRList * pNewItems;

    /// <summary>
    /// The starting index of the added elements.
    /// </summary>
    int NewStartingIndex;

    /// <summary>
    /// The action of the change.
    /// </summary>
    XRCollectionChangeAction Action;

    /// <summary>
    /// Constructor
    /// </summary>
    XRCollectionChangedCustomEventArgs() :
        pOldItems(NULL),
        pNewItems(NULL),
        OldStartingIndex(-1),
        NewStartingIndex(-1)
    {
    }
};

/// <summary>
/// Notifies listeners of dynamic changes, such as when items get added and removed or the whole list is refreshed.
/// </summary>
class __declspec(novtable) __declspec(uuid("{579A6DDE-D8BE-427c-8E7D-91890965438D}")) IXRNotifyCollectionChanged : public IUnknown
{
public:
    /// <summary>
    /// Get the CollectionChanged custom event. Occurs when the collection changes.
    /// </summary>
    /// <param name="ppEvent">[out] The IXRCustomEvent instance of the CollectionChanged event.</param>
    /// <returns>
    /// <para>Indicating success or failure</para>
    /// </returns>
    virtual HRESULT STDMETHODCALLTYPE GetCollectionChangedEvent(__out IXRCustomEvent<XRCollectionChangedCustomEventArgs, IXRNotifyCollectionChanged> ** ppEvent) = 0;
};

DEFINE_XR_IID( IXRNotifyCollectionChanged );
//
//
// IXRButtonBase
//
//
class __declspec(novtable) __declspec(uuid("{23C6147F-F4C7-480A-AE38-C275990C1781}")) 
IXRButtonBase : public IXRContentControl
{
    public:
        // ClickMode Property
        //
        virtual HRESULT STDMETHODCALLTYPE SetClickMode(__in  XRClickMode   ClickMode) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetClickMode(__out XRClickMode* pClickMode) = 0;

        // IsFocused Property
        //
        virtual HRESULT STDMETHODCALLTYPE GetIsFocused(__out bool* pIsFocused) = 0;

        // IsPressed Property
        //
        virtual HRESULT STDMETHODCALLTYPE GetIsPressed(__out bool* pIsPressed) = 0;

        // IsMouseOver Property
        //
        virtual HRESULT STDMETHODCALLTYPE GetIsMouseOver(__out bool* pIsMouseOver) = 0;

        // Add or Remove the Click Event Deletgate.
        // 
        virtual HRESULT STDMETHODCALLTYPE AddClickEventHandler   (__in IXRDelegate<XRMouseButtonEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveClickEventHandler(__in IXRDelegate<XRMouseButtonEventArgs>* pDelegate) = 0;

};

DEFINE_XR_IID( IXRButtonBase );


//
//
// IXRButton
//
//
class __declspec(novtable) __declspec(uuid("{0C5E2B32-8F4F-46C7-B563-1C3FC8770440}")) 
IXRButton : public IXRButtonBase
{
    public:
};

DEFINE_XR_IID( IXRButton );


//
//
// IXRToggleButton
//
//
class __declspec(novtable) __declspec(uuid("{DE9C5403-88D8-481C-9D5B-F3AAC60A8D6F}")) 
IXRToggleButton : public IXRButtonBase
{
    public:
        // IsChecked Property
        //
        virtual HRESULT STDMETHODCALLTYPE SetIsChecked(__in  XRThreeState   IsChecked) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetIsChecked(__out XRThreeState* pIsChecked) = 0;

        // IsThreeState Property
        //
        virtual HRESULT STDMETHODCALLTYPE SetIsThreeState(__in  bool   IsThreeState) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetIsThreeState(__out bool* pIsThreeState) = 0;

        // Checked Event
        virtual HRESULT STDMETHODCALLTYPE AddCheckedEventHandler   (__in IXRDelegate<XRRoutedEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveCheckedEventHandler(__in IXRDelegate<XRRoutedEventArgs>* pDelegate) = 0;

        // Unchecked Event
        virtual HRESULT STDMETHODCALLTYPE AddUncheckedEventHandler   (__in IXRDelegate<XRRoutedEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveUncheckedEventHandler(__in IXRDelegate<XRRoutedEventArgs>* pDelegate) = 0;

        // Indeterminate Event
        virtual HRESULT STDMETHODCALLTYPE AddIndeterminateEventHandler   (__in IXRDelegate<XRRoutedEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveIndeterminateEventHandler(__in IXRDelegate<XRRoutedEventArgs>* pDelegate) = 0;

};

DEFINE_XR_IID( IXRToggleButton );


//
//
// IXRRadioButton
//
//
class __declspec(novtable) __declspec(uuid("{5D8A8F70-3DF6-403E-824A-043054529A39}")) 
IXRRadioButton : public IXRToggleButton
{
    public:
        // GroupName Property
        //
        virtual HRESULT STDMETHODCALLTYPE SetGroupName(__in  const WCHAR* szGroupName) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetGroupName(__out        BSTR* pbstrGroupName) = 0;

};

DEFINE_XR_IID( IXRRadioButton );


//
//
// IXRHyperlinkButton
//
//
class __declspec(novtable) __declspec(uuid("{1CDE447E-1EF7-4b2e-84B6-58CBE992E99E}")) 
IXRHyperlinkButton : public IXRButtonBase
{
    public:
        // NavigateUri Property
        //
        virtual HRESULT STDMETHODCALLTYPE SetNavigateUri(__in  const WCHAR* szNavigateUri) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetNavigateUri(__out        BSTR* pbstrNavigateUri) = 0;

        // TargetName Property
        //
        virtual HRESULT STDMETHODCALLTYPE SetTargetName(__in  const WCHAR* szTargetName) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetTargetName(__out        BSTR* pbstrTargetName) = 0;

};

DEFINE_XR_IID( IXRHyperlinkButton );


//
//
// IXRCheckBox
//
//
class __declspec(novtable) __declspec(uuid("{C3461389-B0CA-4CDD-BD6D-419D7CF37970}")) 
IXRCheckBox : public IXRToggleButton
{
    public:
};

DEFINE_XR_IID( IXRCheckBox );


//
//
// IXRRepeatButton
//
//
class __declspec(novtable) __declspec(uuid("{A67E6717-D45C-4725-9FF3-0A0B439F7D45}")) 
IXRRepeatButton : public IXRButton
{
    public:
        // Interval Property
        //
        virtual HRESULT STDMETHODCALLTYPE SetInterval(__in  int   Interval) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetInterval(__out int* pInterval) = 0;

        // Delay Property
        //
        virtual HRESULT STDMETHODCALLTYPE SetDelay(__in  int   Delay) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetDelay(__out int* pDelay) = 0;

};

DEFINE_XR_IID( IXRRepeatButton );


//
//
// IXRRangeBase
//
//
class __declspec(novtable) __declspec(uuid("{E071FF08-F0E8-4CF0-A879-800D6234406D}")) 
IXRRangeBase : public IXRControl
{
    public:
        // LargeChange Property
        //
        virtual HRESULT STDMETHODCALLTYPE SetLargeChange(__in  float   LargeChange) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetLargeChange(__out float* pLargeChange) = 0;

        // SmallChange Property
        //
        virtual HRESULT STDMETHODCALLTYPE SetSmallChange(__in  float   SmallChange) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetSmallChange(__out float* pSmallChange) = 0;

        // Maximum Property
        //
        virtual HRESULT STDMETHODCALLTYPE SetMaximum(__in  float   Maximum) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetMaximum(__out float* pMaximum) = 0;

        // Minimum Property
        //
        virtual HRESULT STDMETHODCALLTYPE SetMinimum(__in  float   Minimum) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetMinimum(__out float* pMinimum) = 0;

        // Value Property
        //
        virtual HRESULT STDMETHODCALLTYPE SetValue(__in  float   Value) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetValue(__out float* pValue) = 0;

        // ValueChanged Event
        virtual HRESULT STDMETHODCALLTYPE AddValueChangedEventHandler   (__in IXRDelegate<XRValueChangedEventArgs<float>>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveValueChangedEventHandler(__in IXRDelegate<XRValueChangedEventArgs<float>>* pDelegate) = 0;

};

DEFINE_XR_IID( IXRRangeBase );


//
//
// IXRScrollBar
//
//
class __declspec(novtable) __declspec(uuid("{5AAB1E17-1493-4A45-B2C5-A114CEE3998D}")) 
IXRScrollBar : public IXRRangeBase
{
    public:
        // ViewportSize Property
        //
        virtual HRESULT STDMETHODCALLTYPE SetViewportSize(__in  float   ViewportSize) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetViewportSize(__out float* pViewportSize) = 0;

        // Orientation Property
        //
        virtual HRESULT STDMETHODCALLTYPE SetOrientation(__in  XROrientation   Orientation) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetOrientation(__out XROrientation* pOrientation) = 0;

        // Scroll Event
        virtual HRESULT STDMETHODCALLTYPE AddScrollEventHandler   (__in IXRDelegate<XRScrollEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveScrollEventHandler(__in IXRDelegate<XRScrollEventArgs>* pDelegate) = 0;

};

DEFINE_XR_IID( IXRScrollBar );


//
//
// IXRSlider
//
//
class __declspec(novtable) __declspec(uuid("{45B89087-084E-4972-8F55-F9A9DF9BF6F6}")) 
IXRSlider : public IXRRangeBase
{
    public:
        // Orientation Property
        //
        virtual HRESULT STDMETHODCALLTYPE SetOrientation(__in  XROrientation   Orientation) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetOrientation(__out XROrientation* pOrientation) = 0;

        // IsDirectionReversed Property
        //
        virtual HRESULT STDMETHODCALLTYPE SetIsDirectionReversed(__in  bool   IsDirectionReversed) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetIsDirectionReversed(__out bool* pIsDirectionReversed) = 0;

        // IsFocused Property
        //
        virtual HRESULT STDMETHODCALLTYPE GetIsFocused(__out bool* pIsFocused) = 0;

};

DEFINE_XR_IID( IXRSlider );


//
//
// IXRProgressBar
//
//
class __declspec(novtable) __declspec(uuid("{C5E41932-98CA-4DC6-9DEA-19A4C91ADCD0}")) 
IXRProgressBar : public IXRRangeBase
{
    public:
        // IsIndeterminate Property
        //
        virtual HRESULT STDMETHODCALLTYPE SetIsIndeterminate(__in  bool   IsIndeterminate) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetIsIndeterminate(__out bool* pIsIndeterminate) = 0;

};

DEFINE_XR_IID( IXRProgressBar );


//
//
// IXRThumb
//
//
class __declspec(novtable) __declspec(uuid("{EC411D7E-E5CB-406F-B16F-4F7EACF251AD}")) 
IXRThumb : public IXRControl
{
    public:
        // IsDragging Property
        //
        virtual HRESULT STDMETHODCALLTYPE GetIsDragging(__out bool* pIsDragging) = 0;

        // IsFocused Property
        //
        virtual HRESULT STDMETHODCALLTYPE GetIsFocused(__out bool* pIsFocused) = 0;

        // DragStarted Event
        virtual HRESULT STDMETHODCALLTYPE AddDragStartedEventHandler   (__in IXRDelegate<XRDragStartedEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveDragStartedEventHandler(__in IXRDelegate<XRDragStartedEventArgs>* pDelegate) = 0;

        // DragCompleted Event
        virtual HRESULT STDMETHODCALLTYPE AddDragCompletedEventHandler   (__in IXRDelegate<XRDragCompletedEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveDragCompletedEventHandler(__in IXRDelegate<XRDragCompletedEventArgs>* pDelegate) = 0;

        // DragDelta Event
        virtual HRESULT STDMETHODCALLTYPE AddDragDeltaEventHandler   (__in IXRDelegate<XRDragDeltaEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveDragDeltaEventHandler(__in IXRDelegate<XRDragDeltaEventArgs>* pDelegate) = 0;

};

DEFINE_XR_IID( IXRThumb );


//
//
// IXRToolTip
//
//
class __declspec(novtable) __declspec(uuid("{A583192F-8819-4BC4-9EA8-B99F69A25A50}")) 
IXRToolTip : public IXRContentControl
{
    public:
        // HorizontalOffset Property
        //
        virtual HRESULT STDMETHODCALLTYPE SetHorizontalOffset(__in  float   HorizontalOffset) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetHorizontalOffset(__out float* pHorizontalOffset) = 0;

        // IsOpen Property
        //
        virtual HRESULT STDMETHODCALLTYPE SetIsOpen(__in  bool   IsOpen) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetIsOpen(__out bool* pIsOpen) = 0;

        // VerticalOffset Property
        //
        virtual HRESULT STDMETHODCALLTYPE SetVerticalOffset(__in  float   VerticalOffset) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetVerticalOffset(__out float* pVerticalOffset) = 0;

        // PlacementTarget Property (Read/Write)
        // 
        // Gets or sets a value that specifies the preferred location for positioning a ToolTip relative to a visual element
        // 
        virtual HRESULT STDMETHODCALLTYPE SetPlacementTarget(__in  IXRUIElement*   PlacementTarget) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetPlacementTarget(__out IXRUIElement** pPlacementTarget) = 0;

        // PlacementMode Property (Read/Write)
        // 
        // Gets or sets the visual element or control that the tool tip should be positioned in relation to when opened by the ToolTipService.
        // 
        virtual HRESULT STDMETHODCALLTYPE SetPlacement(__in  XRPlacementMode   Placement) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetPlacement(__out XRPlacementMode* pPlacement) = 0;

        // Opened Event
        virtual HRESULT STDMETHODCALLTYPE AddOpenedEventHandler   (__in IXRDelegate<XRRoutedEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveOpenedEventHandler(__in IXRDelegate<XRRoutedEventArgs>* pDelegate) = 0;

        // Closed Event
        virtual HRESULT STDMETHODCALLTYPE AddClosedEventHandler   (__in IXRDelegate<XRRoutedEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveClosedEventHandler(__in IXRDelegate<XRRoutedEventArgs>* pDelegate) = 0;

};

DEFINE_XR_IID( IXRToolTip );


//
//
// IXRScrollViewer
//
//
// Represents a scrollable area that can contain other visible elements. 
// 
class __declspec(novtable) __declspec(uuid("{E8109083-9F79-4854-B418-B4855C7FB8C7}")) 
IXRScrollViewer : public IXRContentControl
{
    public:
        // HorizontalScrollBarVisibility Property (Read/Write)
        // 
        // Gets or sets a value that indicates whether a horizontal ScrollBar should be displayed.
        // 
        virtual HRESULT STDMETHODCALLTYPE SetHorizontalScrollBarVisibility(__in  XRScrollBarVisibility   HorizontalScrollBarVisibility) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetHorizontalScrollBarVisibility(__out XRScrollBarVisibility* pHorizontalScrollBarVisibility) = 0;

        // VerticalScrollBarVisibility Property (Read/Write)
        // 
        // Gets or sets a value that indicates whether a horizontal ScrollBar should be displayed.
        // 
        virtual HRESULT STDMETHODCALLTYPE SetVerticalScrollBarVisibility(__in  XRScrollBarVisibility   VerticalScrollBarVisibility) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetVerticalScrollBarVisibility(__out XRScrollBarVisibility* pVerticalScrollBarVisibility) = 0;

        // HorizontalOffset Property (Read Only)
        // 
        // Returns a float that contains the horizontal offset of the scrolled content.
        // 
        // The default value is 0.0.
        // 
        virtual HRESULT STDMETHODCALLTYPE GetHorizontalOffset(__out float* pHorizontalOffset) = 0;

        // VerticalOffset Property
        //
        virtual HRESULT STDMETHODCALLTYPE GetVerticalOffset(__out float* pVerticalOffset) = 0;

        // ViewportWidth Property
        //
        virtual HRESULT STDMETHODCALLTYPE GetViewportWidth(__out float* pViewportWidth) = 0;

        // ViewportHeight Property
        //
        virtual HRESULT STDMETHODCALLTYPE GetViewportHeight(__out float* pViewportHeight) = 0;

        // ScrollableWidth Property
        //
        virtual HRESULT STDMETHODCALLTYPE GetScrollableWidth(__out float* pScrollableWidth) = 0;

        // ScrollableHeight Property
        //
        virtual HRESULT STDMETHODCALLTYPE GetScrollableHeight(__out float* pScrollableHeight) = 0;

        // ExtentWidth Property
        //
        virtual HRESULT STDMETHODCALLTYPE GetExtentWidth(__out float* pExtentWidth) = 0;

        // ExtentHeight Property
        //
        virtual HRESULT STDMETHODCALLTYPE GetExtentHeight(__out float* pExtentHeight) = 0;

        // ComputedHorizontalScrollBarVisibility Property
        //
        virtual HRESULT STDMETHODCALLTYPE GetComputedHorizontalScrollBarVisibility(__out XRVisibility* pComputedHorizontalScrollBarVisibility) = 0;

        // ComputedVerticalScrollBarVisibility Property
        //
        virtual HRESULT STDMETHODCALLTYPE GetComputedVerticalScrollBarVisibility(__out XRVisibility* pComputedVerticalScrollBarVisibility) = 0;

        // Methods
        virtual HRESULT STDMETHODCALLTYPE ScrollToHorizontalOffset(__in float Offset) = 0;
        virtual HRESULT STDMETHODCALLTYPE ScrollToVerticalOffset(__in float Offset) = 0;
};

DEFINE_XR_IID( IXRScrollViewer );


//
//
// IXRScrollContentPresenter
//
//
class __declspec(novtable) __declspec(uuid("{99F55E89-4BE1-4804-9D50-3304898BF04E}")) 
IXRScrollContentPresenter : public IXRContentPresenter
{
    public:
        // Methods
        virtual HRESULT STDMETHODCALLTYPE SetScrollOwner(__in IXRScrollViewer* pValue) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetScrollOwner(__out IXRScrollViewer** ppValue) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetHorizontalOffset(__out float* pValue) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetVerticalOffset(__out float* pValue) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetExtentWidth(__out float* pValue) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetExtentHeight(__out float* pValue) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetViewportWidth(__out float* pValue) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetViewportHeight(__out float* pValue) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetCanVerticallyScroll(__in bool bValue) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetCanVerticallyScroll(__out bool* pValue) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetCanHorizontallyScroll(__in bool bValue) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetCanHorizontallyScroll(__out bool* pValue) = 0;
};

DEFINE_XR_IID( IXRScrollContentPresenter );


//
//
// IXRSelector
//
//
class __declspec(novtable) __declspec(uuid("{3AC03E19-9A78-4E76-B8A9-437514594D49}")) 
IXRSelector : public IXRItemsControl
{
    public:
        // IsSelectionActive Property
        //
        virtual HRESULT STDMETHODCALLTYPE SetIsSelectionActive(__in  bool   IsSelectionActive) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetIsSelectionActive(__out bool* pIsSelectionActive) = 0;

        // SelectedIndex Property
        //
        virtual HRESULT STDMETHODCALLTYPE SetSelectedIndex(__in  int   SelectedIndex) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetSelectedIndex(__out int* pSelectedIndex) = 0;

        // SelectedItem Property
        //
        virtual HRESULT STDMETHODCALLTYPE SetSelectedItem(__in  XRValue*   SelectedItem) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetSelectedItem(__out XRValue* pSelectedItem) = 0;

        // SelectionChanged Event
        virtual HRESULT STDMETHODCALLTYPE AddSelectionChangedEventHandler   (__in IXRDelegate<XRSelectionChangedEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveSelectionChangedEventHandler(__in IXRDelegate<XRSelectionChangedEventArgs>* pDelegate) = 0;


        // Set the selected item to any supported XRValue type.
        //  
        // Example:
        //    float f = 5.5f;
        //    pSelector->SetContent(f);
        // 
        template<typename ValueType> HRESULT SetSelectedItem(__in const ValueType& Value)
        {
            XRValue BoxedValue(Value);
        
            return SetSelectedItem(&BoxedValue);
        }


        // Retrieve the selected item as a specific type.  This method will return S_OK only
        // if the target type (pValue) matches the type of the supplied argument.
        //  
        // Example:
        //    float f = 0f;
        //    if(SUCCEEDED(pSelector->GetSelectedItem(&f)))
        //    { 
        //      // The selected item was a float and f contains the value 
        //    } 
        // 
        template<typename ValueType> HRESULT GetSelectedItem(__out ValueType* pValue)
        {
            XRValue value;
        
            HRESULT hr = GetSelectedItem(&value);
        
            if (SUCCEEDED(hr))
            {
                hr = value.GetValue(pValue);
        
                FreeXRValue(&value);
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRSelector );


//
//
// IXRListBox
//
//
class __declspec(novtable) __declspec(uuid("{42B31462-17A8-470B-9452-AAFF56825073}")) 
IXRListBox : public IXRSelector
{
    public:
        // ItemContainerStyle Property
        //
        virtual HRESULT STDMETHODCALLTYPE SetItemContainerStyle(__in  IXRStyle*   ItemContainerStyle) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetItemContainerStyle(__out IXRStyle** pItemContainerStyle) = 0;

        // SelectionMode Property
        //
        virtual HRESULT STDMETHODCALLTYPE SetSelectionMode(__in  XRSelectionMode   SelectionMode) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetSelectionMode(__out XRSelectionMode* pSelectionMode) = 0;

        // Methods
        virtual HRESULT STDMETHODCALLTYPE GetSelectedItems(__out IXRList** ppValue) = 0;
        virtual HRESULT STDMETHODCALLTYPE ScrollIntoView(__in XRValue* pItem) = 0;

        // Scroll the item identified by specific XRValue type into view.
        //  
        // Example:
        //    float f = 5.5f;
        //    pSelector->ScrollIntoView(f);
        // 
        template<typename ValueType> HRESULT ScrollIntoView(__in const ValueType& Value)
        {
            XRValue BoxedValue(Value);
        
            return ScrollIntoView(&BoxedValue);
        }

};

DEFINE_XR_IID( IXRListBox );


//
//
// IXRListBoxItem
//
//
class __declspec(novtable) __declspec(uuid("{9740751C-A525-43CA-85F4-37E64BB08676}")) 
IXRListBoxItem : public IXRContentControl
{
    public:
        // IsSelected Property
        //
        virtual HRESULT STDMETHODCALLTYPE SetIsSelected(__in  bool   IsSelected) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetIsSelected(__out bool* pIsSelected) = 0;

};

DEFINE_XR_IID( IXRListBoxItem );


//
//
// IXRComboBox
//
//
class __declspec(novtable) __declspec(uuid("{01D8C5E3-9286-469A-8FFA-EF7EC1661A99}")) 
IXRComboBox : public IXRSelector
{
    public:
        // IsEditable Property
        //
        virtual HRESULT STDMETHODCALLTYPE GetIsEditable(__out bool* pIsEditable) = 0;

        // IsDropDownOpen Property
        //
        virtual HRESULT STDMETHODCALLTYPE SetIsDropDownOpen(__in  bool   IsDropDownOpen) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetIsDropDownOpen(__out bool* pIsDropDownOpen) = 0;

        // IsSelectionBoxHighlighted Property
        //
        virtual HRESULT STDMETHODCALLTYPE GetIsSelectionBoxHighlighted(__out bool* pIsSelectionBoxHighlighted) = 0;

        // ItemContainerStyle Property
        //
        virtual HRESULT STDMETHODCALLTYPE SetItemContainerStyle(__in  IXRStyle*   ItemContainerStyle) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetItemContainerStyle(__out IXRStyle** pItemContainerStyle) = 0;

        // MaxDropDownHeight Property
        //
        virtual HRESULT STDMETHODCALLTYPE SetMaxDropDownHeight(__in  float   MaxDropDownHeight) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetMaxDropDownHeight(__out float* pMaxDropDownHeight) = 0;

        // SelectionBoxItem Property
        //
        virtual HRESULT STDMETHODCALLTYPE GetSelectionBoxItem(__out XRValue* pSelectionBoxItem) = 0;

        // DropDownClosed Event
        virtual HRESULT STDMETHODCALLTYPE AddDropDownClosedEventHandler   (__in IXRDelegate<XREventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveDropDownClosedEventHandler(__in IXRDelegate<XREventArgs>* pDelegate) = 0;

        // DropDownOpened Event
        virtual HRESULT STDMETHODCALLTYPE AddDropDownOpenedEventHandler   (__in IXRDelegate<XREventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveDropDownOpenedEventHandler(__in IXRDelegate<XREventArgs>* pDelegate) = 0;


        // Retrieve the value of the current Selection Box item item as a specific type.  
        // This method will return S_OK only if the target type (pValue) matches
        // the type of the supplied argument.
        //  
        // Example:
        //    float f = 0f;
        //    if(SUCCEEDED(pComboBox->GetSelectionBoxItem(&f)))
        //    { 
        //      // The selected item was a float and f contains the value 
        //    } 
        // 
        template<typename ValueType> HRESULT GetSelectionBoxItem(__out ValueType* pValue)
        {
            XRValue value;
        
            HRESULT hr = GetSelectionBoxItem(&value);
        
            if (SUCCEEDED(hr))
            {
                hr = value.GetValue(pValue);
        
                FreeXRValue(&value);
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRComboBox );


//
//
// IXRComboBoxItem
//
//
class __declspec(novtable) __declspec(uuid("{45BD2902-E4CF-4FC9-AA32-3922DA5D5EA9}")) 
IXRComboBoxItem : public IXRListBoxItem
{
    public:
};

DEFINE_XR_IID( IXRComboBoxItem );


//
//
// IXRCustomUserControlBase
//
//
class __declspec(novtable) __declspec(uuid("{D7005A25-6965-4813-A817-A3E0C143AFBB}")) 
IXRCustomUserControlBase : public IXRUserControl
{
    public:
        // Methods
        virtual HRESULT STDMETHODCALLTYPE GetPropertyValue(__in DEPENDENCY_PROPERTY_ID dependencyPropertyId,__inout XRValue* pXRValue) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetPropertyValue(__in DEPENDENCY_PROPERTY_ID dependencyPropertyId,__in XRValue* pXRValue) = 0;
};

DEFINE_XR_IID( IXRCustomUserControlBase );


//
//
// IXRCustomUserControl
//
//
class __declspec(novtable) __declspec(uuid("{D761E2E9-EC0B-4BE8-9C3E-1DB688BD4896}")) 
IXRCustomUserControl : public IXRCustomUserControlBase
{
    public:
        // XRObject Property
        //
        virtual HRESULT STDMETHODCALLTYPE GetXRObject(__out IXRDependencyObject** pXRObject) = 0;


        // Get the IXRDependencyObject property.
        // 
        template<typename XRObj> HRESULT GetXRObject(__out XRObj** ppXRObject)
        {
            IXRDependencyObject* pTemp = NULL;
        
            HRESULT hr = GetXRObject(&pTemp);
        
            if(SUCCEEDED(hr) && pTemp)
            {
                hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppXRObject));
        
                pTemp->Release();
            }
        
            return hr;
        }

};

DEFINE_XR_IID( IXRCustomUserControl );


//
//
// IXRVirtualizingPanel
//
//
class __declspec(novtable) __declspec(uuid("{06CE6596-3F09-458d-8361-A5D0A00E7E9F}")) 
IXRVirtualizingPanel : public IXRPanel
{
    public:
};

DEFINE_XR_IID( IXRVirtualizingPanel );


//
//
// IXRVirtualizingStackPanel
//
//
class __declspec(novtable) __declspec(uuid("{99AFA431-B76E-4342-88CD-C0CF3E6F7EBD}")) 
IXRVirtualizingStackPanel : public IXRVirtualizingPanel
{
    public:
        // VirtualizationMode Property
        //
        virtual HRESULT STDMETHODCALLTYPE SetVirtualizationMode(__in  XRVirtualizationMode   VirtualizationMode) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetVirtualizationMode(__out XRVirtualizationMode* pVirtualizationMode) = 0;

        // IsVirtualizing Property
        //
        virtual HRESULT STDMETHODCALLTYPE SetIsVirtualizing(__in  bool   IsVirtualizing) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetIsVirtualizing(__out bool* pIsVirtualizing) = 0;

        // Orientation Property
        //
        virtual HRESULT STDMETHODCALLTYPE SetOrientation(__in  XROrientation   Orientation) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetOrientation(__out XROrientation* pOrientation) = 0;

        // CleanUpVirtualizedItem Event
        virtual HRESULT STDMETHODCALLTYPE AddCleanUpVirtualizedItemEventHandler   (__in IXRDelegate<XRCleanUpVirtualizedItemEventArgs>* pDelegate) = 0;
        virtual HRESULT STDMETHODCALLTYPE RemoveCleanUpVirtualizedItemEventHandler(__in IXRDelegate<XRCleanUpVirtualizedItemEventArgs>* pDelegate) = 0;

};

DEFINE_XR_IID( IXRVirtualizingStackPanel );


//
//
// IXRWin32Control
//
//
// IXRWin32Control for devices
// 
class __declspec(novtable) __declspec(uuid("{EF7F17FE-EEC1-4856-9143-1BF89CB301F5}")) 
IXRWin32Control : public IXRControl
{
    public:
        // ClassName Property
        //
        virtual HRESULT STDMETHODCALLTYPE SetClassName(__in  const WCHAR* szClassName) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetClassName(__out        BSTR* pbstrClassName) = 0;

        // Methods

        // Set the control to use a specific HWND.
        // 
        // hWnd :
        //     The handle to the window you want to associate with the control.
        // 
        // DestroyPreviousWindow :
        //     Call DestroyWindow on any existing HWND used by the control.
        // 
        virtual HRESULT STDMETHODCALLTYPE SetHandle(__in HWND hWnd,__in bool DestroyPreviousWindow) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetHandle(__out HWND* hWnd) = 0;
};

DEFINE_XR_IID( IXRWin32Control );




#ifdef DBG
#define __TS_FORCEINLINE __forceinline
#else
#define __TS_FORCEINLINE
#endif

/// <summary>
/// The following helper templates are use by a number of IXR interfaces
/// that return coercible types.
///
///     __ts_converter1 : Single Parameter converter
///     __ts_converter2 : Named  Parameter converter
///
///     __ts_nmdo_converter: Named Dependency Object
///     __ts_undo_converter: Unnamed Dependency Object
///     __ts_brdo_converter: Brush
///     __ts_uido_converter: UIElement
///     __ts_trdo_converter: Transform
///     __ts_geom_converter: Geometry
///     __ts_cach_converter: CacheMode
///     __ts_imgs_converter: ImageSource
/// 
/// These template functions implement a type-safe coersion of the returned 
/// IXR* by calling QueryInterface for the intended interface.  All of the IXR 
/// interfaces attach a uuid to the declaration of the interface allowing this 
/// generalized abstraction.
/// </summary>
/// InterfacePointer
/// <param name="InterfacePointer">The type of interface that the member function returns.</param>
/// <param name="Base">A pointer to an interface that has a member returning a named IXRDependencyObject.</param>
/// <param name="PMF">A pointer to the member function that returns a named IXRDependencyObject.</param>
/// <param name="XRObj">The resultant object type.</param>
template<typename InterfacePointer,typename Base,typename PMF,typename XRObj>
__TS_FORCEINLINE HRESULT __ts_converter1(Base * pThis,PMF pmf,XRObj ** ppObject)
{
    InterfacePointer pTemp = NULL;

    HRESULT hr = (pThis->*pmf)(&pTemp);

    if(SUCCEEDED(hr) && pTemp)
    {
        hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppObject));

        pTemp->Release();
    }

    return hr;
}


template<typename InterfacePointer,typename Base,typename PMF,typename First,typename XRObj>
__TS_FORCEINLINE HRESULT __ts_converter2(Base * pThis,PMF pmf,First first,XRObj ** ppObject)
{
    InterfacePointer pTemp = NULL;

    HRESULT hr = (pThis->*pmf)(first,&pTemp);

    if(SUCCEEDED(hr) && pTemp)
    {
        hr = pTemp->QueryInterface(__uuidof(XRObj),reinterpret_cast<void**>(ppObject));

        pTemp->Release();
    }

    return hr;
}


template<typename Base,typename PMF,typename XRObj>
__TS_FORCEINLINE HRESULT __ts_nmdo_converter(Base * pThis,PMF pmf,const WCHAR *pName,XRObj ** ppObject)
{
    return __ts_converter2<IXRDependencyObject*>(pThis,pmf,pName,ppObject);
}

template<typename Base,typename PMF,typename XRObj>
__TS_FORCEINLINE HRESULT __ts_undo_converter(Base * pThis,PMF pmf,XRObj ** ppObject)
{
    return __ts_converter1<IXRDependencyObject*>(pThis,pmf,ppObject);
}

template<typename Base,typename PMF,typename XRObj>
__TS_FORCEINLINE HRESULT __ts_brdo_converter(Base * pThis,PMF pmf,XRObj ** ppObject)
{
    return __ts_converter1<IXRBrush*>(pThis,pmf,ppObject);
}

template<typename Base,typename PMF,typename XRObj>
__TS_FORCEINLINE HRESULT __ts_uido_converter(Base * pThis,PMF pmf,XRObj ** ppObject)
{
    return __ts_converter1<IXRUIElement*>(pThis,pmf,ppObject);
}

template<typename Base,typename PMF,typename XRObj>
__TS_FORCEINLINE HRESULT __ts_trdo_converter(Base * pThis,PMF pmf,XRObj ** ppObject)
{
    return __ts_converter1<IXRTransform*>(pThis,pmf,ppObject);
}

template<typename Base,typename PMF,typename XRObj>
__TS_FORCEINLINE HRESULT __ts_geom_converter(Base * pThis,PMF pmf,XRObj ** ppObject)
{
    return __ts_converter1<IXRGeometry*>(pThis,pmf,ppObject);
}

template<typename Base,typename PMF,typename XRObj>
__TS_FORCEINLINE HRESULT __ts_cach_converter(Base * pThis,PMF pmf,XRObj ** ppObject)
{
    return __ts_converter1<IXRCacheMode*>(pThis,pmf,ppObject);
}

template<typename Base,typename PMF,typename XRObj>
__TS_FORCEINLINE HRESULT __ts_imgs_converter(Base * pThis,PMF pmf,XRObj ** ppObject)
{
    return __ts_converter1<IXRImageSource*>(pThis,pmf,ppObject);
}

/// <summary>
/// The following helper templates are use by a number of APIs
/// that take or return XRValue.
///
///     __ts_unbox1 : Single Parameter unboxer
///     __ts_unbox2 : Named  Parameter unboxer
///     __ts_box1   : Single Parameter boxer
///     __ts_box2_input: 2 Parameters boxer - Named Parameter and the value to box
///     __ts_box2_output: 2 Parameters boxer - value to box and with an output parameter
///
/// 
/// These template functions call XRValueBoxer::Box and Unbox to put/get the value to/from a XRValue
/// that is taken by a number of APIs as input/output parameter.
/// </summary>
/// <param name="Base">A pointer to an interface that has a member returning a named IXRDependencyObject.</param>
/// <param name="PMF">A pointer to the member function that takes/returns a XRValue.</param>
/// <param name="ValueType">The resultant value type.</param>
template<typename Base, typename PMF, typename ValueType>
__TS_FORCEINLINE HRESULT __ts_unbox1(Base * pThis, PMF pmf, ValueType* pValue)
{
    XRValue value;

    HRESULT hr = (pThis->*pmf)(&value);

    if (SUCCEEDED(hr))
    {
        hr = value.GetValue(pValue);

        FreeXRValue(&value);
    }

    return hr;
}

template<typename Base,typename PMF,typename First,typename ValueType>
__TS_FORCEINLINE HRESULT __ts_unbox2(Base * pThis,PMF pmf,First first,ValueType * pValue)
{
    XRValue value;

    HRESULT hr = (pThis->*pmf)(first,&value);

    if(SUCCEEDED(hr))
    {
        hr = value.GetValue(pValue);

        FreeXRValue(&value);
    }

    return hr;
}

template<typename Base, typename PMF, typename ValueType>
__TS_FORCEINLINE HRESULT __ts_box1(Base * pThis, PMF pmf, const ValueType& Value)
{
    XRValue BoxedValue(Value);

    return (pThis->*pmf)(&BoxedValue);
}

template<typename Base,typename PMF,typename First,typename ValueType>
__TS_FORCEINLINE HRESULT __ts_box2_input(Base * pThis,PMF pmf,First first,const ValueType& Value)
{
    XRValue BoxedValue(Value);

    return (pThis->*pmf)(first, &BoxedValue);
}

template<typename Base,typename PMF,typename ValueType, typename Second>
__TS_FORCEINLINE HRESULT __ts_box2_output(Base * pThis,PMF pmf,const ValueType& Value,Second second)
{
    XRValue BoxedValue(Value);

    return (pThis->*pmf)(&BoxedValue, second);
}

#undef __TS_FORCEINLINE
