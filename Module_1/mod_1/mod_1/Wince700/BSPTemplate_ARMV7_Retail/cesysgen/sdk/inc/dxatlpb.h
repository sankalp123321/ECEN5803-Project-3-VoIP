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
#ifndef dxatlpb_h
#define dxatlpb_h

#include <atlctl.h>

#ifndef DXTDbg_h
#include <dxtdbg.h>
#endif

#define COM_INTERFACE_ENTRY_DXIMPL(x)\
    COM_INTERFACE_ENTRY_IID(IID_##x, x##DXImpl<_ComMapClass>)

/*** IOleObjectDXImpl
*   This is a simplified version used to allow a transform
*   to be hosted by IE
*/
template <class T>
class ATL_NO_VTABLE IOleObjectDXImpl
{
  public:
    // IUnknown
    //
    STDMETHOD(QueryInterface)(REFIID riid, void ** ppvObject) = 0;
        STDMETHOD_(ULONG,AddRef)() = 0;
        STDMETHOD_(ULONG,Release)() = 0;

    // IOleObject
    //
    STDMETHOD(SetClientSite)(IOleClientSite *pClientSite)
    {
        DXTDBG_FUNC( "IOleObjectDXImpl::SetClientSite" );
        HRESULT hr = S_OK;
        if( pClientSite && DXIsBadInterfacePtr( pClientSite ) )
        {
            hr = E_INVALIDARG;
        }
        else
        {
            T* pT = static_cast<T*>(this);
            pT->m_cpOleClientSite = pClientSite;
        }
        return hr;
    }

    STDMETHOD(GetClientSite)(IOleClientSite **ppClientSite)
    {
        DXTDBG_FUNC( "IOleObjectDXImpl::GetClientSite" );
        HRESULT hr = S_OK;
        if( DXIsBadWritePtr( ppClientSite, sizeof( *ppClientSite )) )
        {
            hr = E_POINTER;
        }
        else
        {
            T* pT = static_cast<T*>(this);
            *ppClientSite = pT->m_cpOleClientSite;
        }
        return hr;
    }

    STDMETHOD(SetHostNames)(LPCOLESTR /* szContainerApp */, LPCOLESTR /* szContainerObj */)
    {
        DXTDBG_FUNC( "IOleObjectDXImpl::SetHostNames" );
        return S_OK;
    }
    STDMETHOD(Close)(DWORD dwSaveOption)
    {
        DXTDBG_FUNC( "IOleObjectDXImpl::Close" );
        return S_OK;
    }
    STDMETHOD(SetMoniker)(DWORD /* dwWhichMoniker */, IMoniker* /* pmk */)
    {
        DXTDBG_FUNC( "IOleObjectDXImpl::SetMoniker" );
        return E_NOTIMPL;
    }
    STDMETHOD(GetMoniker)(DWORD /* dwAssign */, DWORD /* dwWhichMoniker */, IMoniker** /* ppmk */)
    {
        DXTDBG_FUNC( "IOleObjectDXImpl::GetMoniker" );
        return E_NOTIMPL;
    }
    STDMETHOD(InitFromData)(IDataObject* /* pDataObject */, BOOL /* fCreation */, DWORD /* dwReserved */)
    {
        DXTDBG_FUNC( "IOleObjectDXImpl::InitFromData" );
        return E_NOTIMPL;
    }
    STDMETHOD(GetClipboardData)(DWORD /* dwReserved */, IDataObject** /* ppDataObject */)
    {
        DXTDBG_FUNC( "IOleObjectDXImpl::GetClipboardData" );
        return E_NOTIMPL;
    }

    STDMETHOD(DoVerb)(LONG iVerb, LPMSG /* lpmsg */, IOleClientSite* /* pActiveSite */, LONG /* lindex */,
                                     HWND hwndParent, LPCRECT lprcPosRect)
    {
        DXTDBG_FUNC( "IOleObjectDXImpl::DoVerb" );
        return S_OK;
    }
    STDMETHOD(EnumVerbs)(IEnumOLEVERB **ppEnumOleVerb)
    {
        DXTDBG_FUNC( "IOleObjectDXImpl::DoVerb" );
        return OLEOBJ_E_NOVERBS;
    }
    STDMETHOD(Update)(void)
    {
        DXTDBG_FUNC( "IOleObjectDXImpl::Update" );
        return S_OK;
    }
    STDMETHOD(IsUpToDate)(void)
    {
        DXTDBG_FUNC( "IOleObjectDXImpl::IsUpToDate" );
        return S_OK;
    }
    STDMETHOD(GetUserClassID)(CLSID *pClsid)
    {
        DXTDBG_FUNC( "IOleObjectDXImpl::GetUserClassID" );
        _ASSERTE(pClsid);
        if( DXIsBadWritePtr( pClsid, sizeof( *pClsid ) ) )
        {
            return E_POINTER;
        }
        else
        {
            *pClsid = T::GetObjectCLSID();
            return S_OK;
        }
    }
    STDMETHOD(GetUserType)(DWORD dwFormOfType, LPOLESTR *pszUserType)
    {
        DXTDBG_FUNC( "IOleObjectDXImpl::GetUserType" );
        return OLE_S_USEREG;
    }
    STDMETHOD(SetExtent)(DWORD dwDrawAspect, SIZEL *psizel)
    {
        DXTDBG_FUNC( "IOleObjectDXImpl::SetExtent" );
        return S_OK;
    }
    STDMETHOD(GetExtent)(DWORD dwDrawAspect, SIZEL *psizel)
    {
        DXTDBG_FUNC( "IOleObjectDXImpl::GetExtent" );
        HRESULT hr = S_OK;
        if( DXIsBadWritePtr( psizel, sizeof( *psizel ) ) )
        {
            hr = E_POINTER;
        }
        else
        {
            psizel->cx = 0;
            psizel->cy = 0;
        }
        return hr;
    }
    STDMETHOD(Advise)(IAdviseSink *pAdvSink, DWORD *pdwConnection)
    {
        DXTDBG_FUNC( "IOleObjectDXImpl::Advise" );
        return S_OK;
    }
    STDMETHOD(Unadvise)(DWORD dwConnection)
    {
        DXTDBG_FUNC( "IOleObjectDXImpl::Unadvise" );
        return S_OK;
    }
    STDMETHOD(EnumAdvise)(IEnumSTATDATA **ppenumAdvise)
    {
        DXTDBG_FUNC( "IOleObjectDXImpl::EnumAdvise" );
        return E_FAIL;
    }
    STDMETHOD(GetMiscStatus)(DWORD dwAspect, DWORD *pdwStatus)
    {
        DXTDBG_FUNC( "IOleObjectDXImpl::GetMiscStatus" );
        return OLE_S_USEREG;
    }
    STDMETHOD(SetColorScheme)(LOGPALETTE* /* pLogpal */)
    {
        DXTDBG_FUNC( "IOleObjectDXImpl::SetColorScheme" );
        return E_NOTIMPL;
    }
};

/*** CComPropBase
*
*/
class ATL_NO_VTABLE CComPropBase
{
public:
    HRESULT IPersistPropertyBag_Load(LPPROPERTYBAG pPropBag,
        LPERRORLOG pErrorLog, const ATL_PROPMAP_ENTRY* pMap)
    {
        USES_CONVERSION;
        CComPtr<IDispatch> pDispatch;
        const IID* piidOld = NULL;
        for(int i = 0; pMap[i].pclsidPropPage != NULL; i++)
        {
            if (pMap[i].szDesc == NULL)
                continue;
            CComVariant var;

            if(pMap[i].piidDispatch != piidOld)
            {
                pDispatch.Release();
                if(FAILED(PropQueryInterface(*pMap[i].piidDispatch, (void**)&pDispatch)))
                {
                    ATLTRACE(_T("Failed to get a dispatch pointer for property #%i\n"), i);
                    return E_FAIL;
                }
                piidOld = pMap[i].piidDispatch;
            }

            if (FAILED(CComDispatchDriver::GetProperty(pDispatch, pMap[i].dispid, &var)))
            {
                ATLTRACE(_T("Invoked failed on DISPID %x\n"), pMap[i].dispid);
                return E_FAIL;
            }
            
            HRESULT hr = pPropBag->Read(pMap[i].szDesc, &var, pErrorLog);
            if (FAILED(hr))
            {
                if (hr == E_INVALIDARG)
                {
                    ATLTRACE(_T("Property %s not in Bag\n"), OLE2CT(pMap[i].szDesc));
                }
                else
                {
                    // Many containers return different ERROR values for Member not found
                    ATLTRACE(_T("Error attempting to read Property %s from PropertyBag \n"), OLE2CT(pMap[i].szDesc));
                }
                continue;
            }

            if (FAILED(CComDispatchDriver::PutProperty(pDispatch, pMap[i].dispid, &var)))
            {
                ATLTRACE(_T("Invoked failed on DISPID %x\n"), pMap[i].dispid);
                return E_FAIL;
            }
        }
        return S_OK;

    }

    HRESULT IPersistPropertyBag_Save(LPPROPERTYBAG pPropBag,
        BOOL fClearDirty, BOOL /*fSaveAllProperties*/, const ATL_PROPMAP_ENTRY* pMap)
    {
        if (pPropBag == NULL)
        {
            ATLTRACE(_T("PropBag pointer passed in was invalid\n"));
            return E_POINTER;
        }

        CComPtr<IDispatch> pDispatch;
        const IID* piidOld = NULL;
        for(int i = 0; pMap[i].pclsidPropPage != NULL; i++)
        {
            if (pMap[i].szDesc == NULL)
                continue;
            CComVariant var;

            if(pMap[i].piidDispatch != piidOld)
            {
                pDispatch.Release();
                if(FAILED(PropQueryInterface(*pMap[i].piidDispatch, (void**)&pDispatch)))
                {
                    ATLTRACE(_T("Failed to get a dispatch pointer for property #%i\n"), i);
                    return E_FAIL;
                }
                piidOld = pMap[i].piidDispatch;
            }

            if (FAILED(CComDispatchDriver::GetProperty(pDispatch, pMap[i].dispid, &var)))
            {
                ATLTRACE(_T("Invoked failed on DISPID %x\n"), pMap[i].dispid);
                return E_FAIL;
            }

            if (var.vt == VT_UNKNOWN || var.vt == VT_DISPATCH)
            {
                if (var.punkVal == NULL)
                {
                    ATLTRACE(_T("Warning skipping empty IUnknown in Save\n"));
                    continue;
                }
            }

            HRESULT hr = pPropBag->Write(pMap[i].szDesc, &var);
            if (FAILED(hr))
                return hr;
        }
        m_bRequiresSave = FALSE;
        return S_OK;
    }

    HRESULT ISpecifyPropertyPages_GetPages(CAUUID* pPages,
        const ATL_PROPMAP_ENTRY* pMap)
    {
        _ASSERTE(pMap != NULL);
        int nCnt = 0;
        // Get count of unique pages
            int i;
        for(i = 0; pMap[i].pclsidPropPage != NULL; i++)
        {
            if (!InlineIsEqualGUID(*pMap[i].pclsidPropPage, CLSID_NULL))
                nCnt++;
        }
        pPages->pElems = NULL;
        pPages->pElems = (GUID*) CoTaskMemAlloc(sizeof(CLSID)*nCnt);
        if (pPages->pElems == NULL)
            return E_OUTOFMEMORY;
        nCnt = 0;
        for(i = 0; pMap[i].pclsidPropPage != NULL; i++)
        {
            if (!InlineIsEqualGUID(*pMap[i].pclsidPropPage, CLSID_NULL))
            {
                BOOL bMatch = FALSE;
                for (int j=0;j<nCnt;j++)
                {
                    if (InlineIsEqualGUID(*(pMap[i].pclsidPropPage), pPages->pElems[j]))
                    {
                        bMatch = TRUE;
                        break;
                    }
                }
                if (!bMatch)
                    pPages->pElems[nCnt++] = *pMap[i].pclsidPropPage;
            }
        }
        pPages->cElems = nCnt;
        return S_OK;
    }
    virtual HRESULT PropQueryInterface(const IID& iid, void** ppv) = 0;
    BOOL m_bRequiresSave;
};


template <class T>
class ATL_NO_VTABLE CComPropertySupport :  public CComPropBase
{
public:
    virtual HRESULT PropQueryInterface(const IID& iid, void** ppv)
    {
        T* pT = static_cast<T*>(this);
    return pT->_InternalQueryInterface(iid, ppv);
    }
};


#ifdef IEMOBILE
// on ATL 80, the IPersistPropertyBag_Load and IPersistPropertyBag_Save are implemented in 
// IPersistPropertyBagImpl class, which is different with ATL 21(did NOT implement these helpers in
// IPersistPropertyBagImpl class)
// since some legacy classes may derive from both 
// CComPropBase and IPersistPropertyBagImpl, there is a name ambigious error. The derived 
// classes can use this MACRO to cover the IPersistPropertyBag_Load and 
// IPersistPropertyBag_Save in IPersistPropertyBagImpl with CComPropBase impl
// A sample is: IPERSISTPROPERTYBAG_HELPERS_IMPL(CComPropBase)
#define IPERSISTPROPERTYBAG_HELPERS_IMPL(X) \
    HRESULT IPersistPropertyBag_Load(LPPROPERTYBAG pPropBag, \
        LPERRORLOG pErrorLog, const ATL_PROPMAP_ENTRY* pMap) \
    { \
        return X::IPersistPropertyBag_Load(pPropBag, pErrorLog, pMap); \
    } \
    HRESULT IPersistPropertyBag_Save(LPPROPERTYBAG pPropBag, \
        BOOL fClearDirty, BOOL fSaveAllProperties, const ATL_PROPMAP_ENTRY* pMap) \
    { \
        return X::IPersistPropertyBag_Save(pPropBag, fClearDirty, fSaveAllProperties, pMap); \
    }
#endif

//////////////////////////////////////////////////////////////////////////////
// IObjectSafety
//

template <class T> 
class ATL_NO_VTABLE IObjectSafetyImpl2 : public IObjectSafety
{
public:
        DWORD m_dwSafety[4];
        const IID *m_pIID[4];

        IObjectSafetyImpl2()
    {
            m_pIID[0] = &IID_IDispatch;
            m_pIID[1] = &IID_IPersistPropertyBag;
            m_pIID[2] = &IID_IPersistStorage;
            m_pIID[3] = &IID_IPersistStream;
            for (int i = 0; i < 4; i++)
            {
        m_dwSafety[i] = 0;
            }
    }

    // IUnknown
    //
    STDMETHOD(QueryInterface)(REFIID riid, void ** ppvObject) = 0;
    _ATL_DEBUG_ADDREF_RELEASE_IMPL(IObjectSafetyImpl2)

    // IObjectSafety
    //
    STDMETHOD(GetInterfaceSafetyOptions)(REFIID riid, DWORD *pdwSupportedOptions, DWORD *pdwEnabledOptions)
    {
        ATLTRACE(_T("IObjectSafetyImpl::GetInterfaceSafetyOptions\n"));
        
        if (pdwSupportedOptions == NULL || pdwEnabledOptions == NULL)
            return E_POINTER;
        
        for (int i = 0; i < 4 && m_pIID[i]; i++)
        {
            DWORD dwSupportedOptions;

            if (i == 0)
            {
                // IDispatch
                dwSupportedOptions = INTERFACESAFE_FOR_UNTRUSTED_CALLER;
            }
            else
            {
                // IPersist*
                dwSupportedOptions = INTERFACESAFE_FOR_UNTRUSTED_DATA;
            }

            if (riid == *m_pIID[i]) 
            {
                *pdwSupportedOptions = dwSupportedOptions;
                *pdwEnabledOptions = m_dwSafety[i];
                return S_OK;
            }
        }
                *pdwSupportedOptions = 0;
        *pdwEnabledOptions = 0;
        return E_NOINTERFACE;
    }
    STDMETHOD(SetInterfaceSafetyOptions)(REFIID riid, DWORD dwOptionSetMask, DWORD dwEnabledOptions)
    {
        ATLTRACE(_T("IObjectSafetyImpl::SetInterfaceSafetyOptions\n"));
        
        // If we're being asked to set our safe for scripting option then oblige
        for (int i = 0; (i < 4) && m_pIID[i]; i++)
        {
            if (riid == *m_pIID[i])
            {
                DWORD dwSupportedOptions;

                if (i == 0)
                {
                    // IDispatch
                    dwSupportedOptions = INTERFACESAFE_FOR_UNTRUSTED_CALLER;
                }
                else
                {
                    // IPersist*
                    dwSupportedOptions = INTERFACESAFE_FOR_UNTRUSTED_DATA;
                }
                
                // If we are asked to set options we don't support then fail
                if (dwOptionSetMask & ~dwSupportedOptions)
                {
                    return E_FAIL;
                }
                DWORD dwNewSafety = (m_dwSafety[i] & ~dwOptionSetMask) | (dwOptionSetMask & dwEnabledOptions);
                // Store our current safety level to return in GetInterfaceSafetyOptions
                m_dwSafety[i] = dwNewSafety;
                return S_OK;
            }

        }
        return E_NOINTERFACE;
    }

};

#endif // This must be the last line in the file
