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

#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 5.03.0286 */
/* at Tue Jan 23 14:30:47 2007
 */
/* Compiler settings for ..\imapi.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32 (32b run), ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __imapi_h__
#define __imapi_h__

/* Forward Declarations */ 

#ifndef __IDiscRecorder_FWD_DEFINED__
#define __IDiscRecorder_FWD_DEFINED__
typedef interface IDiscRecorder IDiscRecorder;
#endif 	/* __IDiscRecorder_FWD_DEFINED__ */


#ifndef __IEnumDiscRecorders_FWD_DEFINED__
#define __IEnumDiscRecorders_FWD_DEFINED__
typedef interface IEnumDiscRecorders IEnumDiscRecorders;
#endif 	/* __IEnumDiscRecorders_FWD_DEFINED__ */


#ifndef __IEnumDiscMasterFormats_FWD_DEFINED__
#define __IEnumDiscMasterFormats_FWD_DEFINED__
typedef interface IEnumDiscMasterFormats IEnumDiscMasterFormats;
#endif 	/* __IEnumDiscMasterFormats_FWD_DEFINED__ */


#ifndef __IRedbookDiscMaster_FWD_DEFINED__
#define __IRedbookDiscMaster_FWD_DEFINED__
typedef interface IRedbookDiscMaster IRedbookDiscMaster;
#endif 	/* __IRedbookDiscMaster_FWD_DEFINED__ */


#ifndef __IJolietDiscMaster_FWD_DEFINED__
#define __IJolietDiscMaster_FWD_DEFINED__
typedef interface IJolietDiscMaster IJolietDiscMaster;
#endif 	/* __IJolietDiscMaster_FWD_DEFINED__ */


#ifndef __IDiscMasterProgressEvents_FWD_DEFINED__
#define __IDiscMasterProgressEvents_FWD_DEFINED__
typedef interface IDiscMasterProgressEvents IDiscMasterProgressEvents;
#endif 	/* __IDiscMasterProgressEvents_FWD_DEFINED__ */


#ifndef __IDiscMaster_FWD_DEFINED__
#define __IDiscMaster_FWD_DEFINED__
typedef interface IDiscMaster IDiscMaster;
#endif 	/* __IDiscMaster_FWD_DEFINED__ */


#ifndef __MSDiscRecorderObj_FWD_DEFINED__
#define __MSDiscRecorderObj_FWD_DEFINED__

#ifdef __cplusplus
typedef class MSDiscRecorderObj MSDiscRecorderObj;
#else
typedef struct MSDiscRecorderObj MSDiscRecorderObj;
#endif /* __cplusplus */

#endif 	/* __MSDiscRecorderObj_FWD_DEFINED__ */


#ifndef __MSDiscMasterObj_FWD_DEFINED__
#define __MSDiscMasterObj_FWD_DEFINED__

#ifdef __cplusplus
typedef class MSDiscMasterObj MSDiscMasterObj;
#else
typedef struct MSDiscMasterObj MSDiscMasterObj;
#endif /* __cplusplus */

#endif 	/* __MSDiscMasterObj_FWD_DEFINED__ */


#ifndef __MSEnumDiscRecordersObj_FWD_DEFINED__
#define __MSEnumDiscRecordersObj_FWD_DEFINED__

#ifdef __cplusplus
typedef class MSEnumDiscRecordersObj MSEnumDiscRecordersObj;
#else
typedef struct MSEnumDiscRecordersObj MSEnumDiscRecordersObj;
#endif /* __cplusplus */

#endif 	/* __MSEnumDiscRecordersObj_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_imapi_0000 */
/* [local] */ 

// this assert will cause compilation breaks in clients whose code would cause stack corruption
// when writing to our boolean pointer
C_ASSERT(sizeof(boolean) == 1);


extern RPC_IF_HANDLE __MIDL_itf_imapi_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi_0000_v0_0_s_ifspec;

#ifndef __IDiscRecorder_INTERFACE_DEFINED__
#define __IDiscRecorder_INTERFACE_DEFINED__

/* interface IDiscRecorder */
/* [unique][helpstring][uuid][object] */ 


enum MEDIA_TYPES
    {	MEDIA_CDDA_CDROM	= 1,
	MEDIA_CD_ROM_XA	= MEDIA_CDDA_CDROM + 1,
	MEDIA_CD_I	= MEDIA_CD_ROM_XA + 1,
	MEDIA_CD_EXTRA	= MEDIA_CD_I + 1,
	MEDIA_CD_OTHER	= MEDIA_CD_EXTRA + 1,
	MEDIA_SPECIAL	= MEDIA_CD_OTHER + 1
    };

enum MEDIA_FLAGS
    {	MEDIA_BLANK	= 0x1,
	MEDIA_RW	= 0x2,
	MEDIA_WRITABLE	= 0x4,
	MEDIA_FORMAT_UNUSABLE_BY_IMAPI	= 0x8
    };

enum RECORDER_TYPES
    {	RECORDER_CDR	= 0x1,
	RECORDER_CDRW	= 0x2
    };
#define	RECORDER_DOING_NOTHING	( 0 )

#define	RECORDER_OPENED	( 0x1 )

#define	RECORDER_BURNING	( 0x2 )


EXTERN_C const IID IID_IDiscRecorder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("85AC9776-CA88-4cf2-894E-09598C078A41")
    IDiscRecorder : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [size_is][in] */ byte __RPC_FAR *pbyUniqueID,
            /* [in] */ ULONG nulIDSize,
            /* [in] */ ULONG nulDriveNumber) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRecorderGUID( 
            /* [size_is][unique][out][in] */ byte __RPC_FAR *pbyUniqueID,
            /* [in] */ ULONG ulBufferSize,
            /* [out] */ ULONG __RPC_FAR *pulReturnSizeRequired) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRecorderType( 
            /* [out] */ long __RPC_FAR *fTypeCode) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDisplayNames( 
            /* [unique][out][in] */ BSTR __RPC_FAR *pbstrVendorID,
            /* [unique][out][in] */ BSTR __RPC_FAR *pbstrProductID,
            /* [unique][out][in] */ BSTR __RPC_FAR *pbstrRevision) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetBasePnPID( 
            /* [out] */ BSTR __RPC_FAR *pbstrBasePnPID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPath( 
            /* [out] */ BSTR __RPC_FAR *pbstrPath) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRecorderProperties( 
            /* [out] */ IPropertyStorage __RPC_FAR *__RPC_FAR *ppPropStg) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetRecorderProperties( 
            /* [in] */ IPropertyStorage __RPC_FAR *pPropStg) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRecorderState( 
            /* [out] */ ULONG __RPC_FAR *pulDevStateFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OpenExclusive( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryMediaType( 
            /* [out] */ long __RPC_FAR *fMediaType,
            /* [out] */ long __RPC_FAR *fMediaFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryMediaInfo( 
            /* [out] */ byte __RPC_FAR *pbSessions,
            /* [out] */ byte __RPC_FAR *pbLastTrack,
            /* [out] */ ULONG __RPC_FAR *ulStartAddress,
            /* [out] */ ULONG __RPC_FAR *ulNextWritable,
            /* [out] */ ULONG __RPC_FAR *ulFreeBlocks) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Eject( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Erase( 
            /* [in] */ boolean bFullErase) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDiscRecorderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDiscRecorder __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDiscRecorder __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDiscRecorder __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Init )( 
            IDiscRecorder __RPC_FAR * This,
            /* [size_is][in] */ byte __RPC_FAR *pbyUniqueID,
            /* [in] */ ULONG nulIDSize,
            /* [in] */ ULONG nulDriveNumber);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetRecorderGUID )( 
            IDiscRecorder __RPC_FAR * This,
            /* [size_is][unique][out][in] */ byte __RPC_FAR *pbyUniqueID,
            /* [in] */ ULONG ulBufferSize,
            /* [out] */ ULONG __RPC_FAR *pulReturnSizeRequired);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetRecorderType )( 
            IDiscRecorder __RPC_FAR * This,
            /* [out] */ long __RPC_FAR *fTypeCode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetDisplayNames )( 
            IDiscRecorder __RPC_FAR * This,
            /* [unique][out][in] */ BSTR __RPC_FAR *pbstrVendorID,
            /* [unique][out][in] */ BSTR __RPC_FAR *pbstrProductID,
            /* [unique][out][in] */ BSTR __RPC_FAR *pbstrRevision);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetBasePnPID )( 
            IDiscRecorder __RPC_FAR * This,
            /* [out] */ BSTR __RPC_FAR *pbstrBasePnPID);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetPath )( 
            IDiscRecorder __RPC_FAR * This,
            /* [out] */ BSTR __RPC_FAR *pbstrPath);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetRecorderProperties )( 
            IDiscRecorder __RPC_FAR * This,
            /* [out] */ IPropertyStorage __RPC_FAR *__RPC_FAR *ppPropStg);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetRecorderProperties )( 
            IDiscRecorder __RPC_FAR * This,
            /* [in] */ IPropertyStorage __RPC_FAR *pPropStg);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetRecorderState )( 
            IDiscRecorder __RPC_FAR * This,
            /* [out] */ ULONG __RPC_FAR *pulDevStateFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OpenExclusive )( 
            IDiscRecorder __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryMediaType )( 
            IDiscRecorder __RPC_FAR * This,
            /* [out] */ long __RPC_FAR *fMediaType,
            /* [out] */ long __RPC_FAR *fMediaFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryMediaInfo )( 
            IDiscRecorder __RPC_FAR * This,
            /* [out] */ byte __RPC_FAR *pbSessions,
            /* [out] */ byte __RPC_FAR *pbLastTrack,
            /* [out] */ ULONG __RPC_FAR *ulStartAddress,
            /* [out] */ ULONG __RPC_FAR *ulNextWritable,
            /* [out] */ ULONG __RPC_FAR *ulFreeBlocks);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Eject )( 
            IDiscRecorder __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Erase )( 
            IDiscRecorder __RPC_FAR * This,
            /* [in] */ boolean bFullErase);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Close )( 
            IDiscRecorder __RPC_FAR * This);
        
        END_INTERFACE
    } IDiscRecorderVtbl;

    interface IDiscRecorder
    {
        CONST_VTBL struct IDiscRecorderVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiscRecorder_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDiscRecorder_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDiscRecorder_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDiscRecorder_Init(This,pbyUniqueID,nulIDSize,nulDriveNumber)	\
    (This)->lpVtbl -> Init(This,pbyUniqueID,nulIDSize,nulDriveNumber)

#define IDiscRecorder_GetRecorderGUID(This,pbyUniqueID,ulBufferSize,pulReturnSizeRequired)	\
    (This)->lpVtbl -> GetRecorderGUID(This,pbyUniqueID,ulBufferSize,pulReturnSizeRequired)

#define IDiscRecorder_GetRecorderType(This,fTypeCode)	\
    (This)->lpVtbl -> GetRecorderType(This,fTypeCode)

#define IDiscRecorder_GetDisplayNames(This,pbstrVendorID,pbstrProductID,pbstrRevision)	\
    (This)->lpVtbl -> GetDisplayNames(This,pbstrVendorID,pbstrProductID,pbstrRevision)

#define IDiscRecorder_GetBasePnPID(This,pbstrBasePnPID)	\
    (This)->lpVtbl -> GetBasePnPID(This,pbstrBasePnPID)

#define IDiscRecorder_GetPath(This,pbstrPath)	\
    (This)->lpVtbl -> GetPath(This,pbstrPath)

#define IDiscRecorder_GetRecorderProperties(This,ppPropStg)	\
    (This)->lpVtbl -> GetRecorderProperties(This,ppPropStg)

#define IDiscRecorder_SetRecorderProperties(This,pPropStg)	\
    (This)->lpVtbl -> SetRecorderProperties(This,pPropStg)

#define IDiscRecorder_GetRecorderState(This,pulDevStateFlags)	\
    (This)->lpVtbl -> GetRecorderState(This,pulDevStateFlags)

#define IDiscRecorder_OpenExclusive(This)	\
    (This)->lpVtbl -> OpenExclusive(This)

#define IDiscRecorder_QueryMediaType(This,fMediaType,fMediaFlags)	\
    (This)->lpVtbl -> QueryMediaType(This,fMediaType,fMediaFlags)

#define IDiscRecorder_QueryMediaInfo(This,pbSessions,pbLastTrack,ulStartAddress,ulNextWritable,ulFreeBlocks)	\
    (This)->lpVtbl -> QueryMediaInfo(This,pbSessions,pbLastTrack,ulStartAddress,ulNextWritable,ulFreeBlocks)

#define IDiscRecorder_Eject(This)	\
    (This)->lpVtbl -> Eject(This)

#define IDiscRecorder_Erase(This,bFullErase)	\
    (This)->lpVtbl -> Erase(This,bFullErase)

#define IDiscRecorder_Close(This)	\
    (This)->lpVtbl -> Close(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscRecorder_Init_Proxy( 
    IDiscRecorder __RPC_FAR * This,
    /* [size_is][in] */ byte __RPC_FAR *pbyUniqueID,
    /* [in] */ ULONG nulIDSize,
    /* [in] */ ULONG nulDriveNumber);


void __RPC_STUB IDiscRecorder_Init_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscRecorder_GetRecorderGUID_Proxy( 
    IDiscRecorder __RPC_FAR * This,
    /* [size_is][unique][out][in] */ byte __RPC_FAR *pbyUniqueID,
    /* [in] */ ULONG ulBufferSize,
    /* [out] */ ULONG __RPC_FAR *pulReturnSizeRequired);


void __RPC_STUB IDiscRecorder_GetRecorderGUID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscRecorder_GetRecorderType_Proxy( 
    IDiscRecorder __RPC_FAR * This,
    /* [out] */ long __RPC_FAR *fTypeCode);


void __RPC_STUB IDiscRecorder_GetRecorderType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscRecorder_GetDisplayNames_Proxy( 
    IDiscRecorder __RPC_FAR * This,
    /* [unique][out][in] */ BSTR __RPC_FAR *pbstrVendorID,
    /* [unique][out][in] */ BSTR __RPC_FAR *pbstrProductID,
    /* [unique][out][in] */ BSTR __RPC_FAR *pbstrRevision);


void __RPC_STUB IDiscRecorder_GetDisplayNames_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscRecorder_GetBasePnPID_Proxy( 
    IDiscRecorder __RPC_FAR * This,
    /* [out] */ BSTR __RPC_FAR *pbstrBasePnPID);


void __RPC_STUB IDiscRecorder_GetBasePnPID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscRecorder_GetPath_Proxy( 
    IDiscRecorder __RPC_FAR * This,
    /* [out] */ BSTR __RPC_FAR *pbstrPath);


void __RPC_STUB IDiscRecorder_GetPath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscRecorder_GetRecorderProperties_Proxy( 
    IDiscRecorder __RPC_FAR * This,
    /* [out] */ IPropertyStorage __RPC_FAR *__RPC_FAR *ppPropStg);


void __RPC_STUB IDiscRecorder_GetRecorderProperties_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscRecorder_SetRecorderProperties_Proxy( 
    IDiscRecorder __RPC_FAR * This,
    /* [in] */ IPropertyStorage __RPC_FAR *pPropStg);


void __RPC_STUB IDiscRecorder_SetRecorderProperties_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscRecorder_GetRecorderState_Proxy( 
    IDiscRecorder __RPC_FAR * This,
    /* [out] */ ULONG __RPC_FAR *pulDevStateFlags);


void __RPC_STUB IDiscRecorder_GetRecorderState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscRecorder_OpenExclusive_Proxy( 
    IDiscRecorder __RPC_FAR * This);


void __RPC_STUB IDiscRecorder_OpenExclusive_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscRecorder_QueryMediaType_Proxy( 
    IDiscRecorder __RPC_FAR * This,
    /* [out] */ long __RPC_FAR *fMediaType,
    /* [out] */ long __RPC_FAR *fMediaFlags);


void __RPC_STUB IDiscRecorder_QueryMediaType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscRecorder_QueryMediaInfo_Proxy( 
    IDiscRecorder __RPC_FAR * This,
    /* [out] */ byte __RPC_FAR *pbSessions,
    /* [out] */ byte __RPC_FAR *pbLastTrack,
    /* [out] */ ULONG __RPC_FAR *ulStartAddress,
    /* [out] */ ULONG __RPC_FAR *ulNextWritable,
    /* [out] */ ULONG __RPC_FAR *ulFreeBlocks);


void __RPC_STUB IDiscRecorder_QueryMediaInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscRecorder_Eject_Proxy( 
    IDiscRecorder __RPC_FAR * This);


void __RPC_STUB IDiscRecorder_Eject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscRecorder_Erase_Proxy( 
    IDiscRecorder __RPC_FAR * This,
    /* [in] */ boolean bFullErase);


void __RPC_STUB IDiscRecorder_Erase_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscRecorder_Close_Proxy( 
    IDiscRecorder __RPC_FAR * This);


void __RPC_STUB IDiscRecorder_Close_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDiscRecorder_INTERFACE_DEFINED__ */


#ifndef __IEnumDiscRecorders_INTERFACE_DEFINED__
#define __IEnumDiscRecorders_INTERFACE_DEFINED__

/* interface IEnumDiscRecorders */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IEnumDiscRecorders;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9B1921E1-54AC-11d3-9144-00104BA11C5E")
    IEnumDiscRecorders : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG cRecorders,
            /* [length_is][size_is][out] */ IDiscRecorder __RPC_FAR *__RPC_FAR *ppRecorder,
            /* [out] */ ULONG __RPC_FAR *pcFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG cRecorders) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumDiscRecorders __RPC_FAR *__RPC_FAR *ppEnum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumDiscRecordersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IEnumDiscRecorders __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IEnumDiscRecorders __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IEnumDiscRecorders __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Next )( 
            IEnumDiscRecorders __RPC_FAR * This,
            /* [in] */ ULONG cRecorders,
            /* [length_is][size_is][out] */ IDiscRecorder __RPC_FAR *__RPC_FAR *ppRecorder,
            /* [out] */ ULONG __RPC_FAR *pcFetched);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Skip )( 
            IEnumDiscRecorders __RPC_FAR * This,
            /* [in] */ ULONG cRecorders);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Reset )( 
            IEnumDiscRecorders __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clone )( 
            IEnumDiscRecorders __RPC_FAR * This,
            /* [out] */ IEnumDiscRecorders __RPC_FAR *__RPC_FAR *ppEnum);
        
        END_INTERFACE
    } IEnumDiscRecordersVtbl;

    interface IEnumDiscRecorders
    {
        CONST_VTBL struct IEnumDiscRecordersVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumDiscRecorders_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IEnumDiscRecorders_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IEnumDiscRecorders_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IEnumDiscRecorders_Next(This,cRecorders,ppRecorder,pcFetched)	\
    (This)->lpVtbl -> Next(This,cRecorders,ppRecorder,pcFetched)

#define IEnumDiscRecorders_Skip(This,cRecorders)	\
    (This)->lpVtbl -> Skip(This,cRecorders)

#define IEnumDiscRecorders_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IEnumDiscRecorders_Clone(This,ppEnum)	\
    (This)->lpVtbl -> Clone(This,ppEnum)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IEnumDiscRecorders_Next_Proxy( 
    IEnumDiscRecorders __RPC_FAR * This,
    /* [in] */ ULONG cRecorders,
    /* [length_is][size_is][out] */ IDiscRecorder __RPC_FAR *__RPC_FAR *ppRecorder,
    /* [out] */ ULONG __RPC_FAR *pcFetched);


void __RPC_STUB IEnumDiscRecorders_Next_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumDiscRecorders_Skip_Proxy( 
    IEnumDiscRecorders __RPC_FAR * This,
    /* [in] */ ULONG cRecorders);


void __RPC_STUB IEnumDiscRecorders_Skip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumDiscRecorders_Reset_Proxy( 
    IEnumDiscRecorders __RPC_FAR * This);


void __RPC_STUB IEnumDiscRecorders_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumDiscRecorders_Clone_Proxy( 
    IEnumDiscRecorders __RPC_FAR * This,
    /* [out] */ IEnumDiscRecorders __RPC_FAR *__RPC_FAR *ppEnum);


void __RPC_STUB IEnumDiscRecorders_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEnumDiscRecorders_INTERFACE_DEFINED__ */


#ifndef __IEnumDiscMasterFormats_INTERFACE_DEFINED__
#define __IEnumDiscMasterFormats_INTERFACE_DEFINED__

/* interface IEnumDiscMasterFormats */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IEnumDiscMasterFormats;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DDF445E1-54BA-11d3-9144-00104BA11C5E")
    IEnumDiscMasterFormats : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG cFormats,
            /* [length_is][size_is][out] */ LPIID lpiidFormatID,
            /* [out] */ ULONG __RPC_FAR *pcFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG cFormats) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumDiscMasterFormats __RPC_FAR *__RPC_FAR *ppEnum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumDiscMasterFormatsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IEnumDiscMasterFormats __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IEnumDiscMasterFormats __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IEnumDiscMasterFormats __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Next )( 
            IEnumDiscMasterFormats __RPC_FAR * This,
            /* [in] */ ULONG cFormats,
            /* [length_is][size_is][out] */ LPIID lpiidFormatID,
            /* [out] */ ULONG __RPC_FAR *pcFetched);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Skip )( 
            IEnumDiscMasterFormats __RPC_FAR * This,
            /* [in] */ ULONG cFormats);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Reset )( 
            IEnumDiscMasterFormats __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clone )( 
            IEnumDiscMasterFormats __RPC_FAR * This,
            /* [out] */ IEnumDiscMasterFormats __RPC_FAR *__RPC_FAR *ppEnum);
        
        END_INTERFACE
    } IEnumDiscMasterFormatsVtbl;

    interface IEnumDiscMasterFormats
    {
        CONST_VTBL struct IEnumDiscMasterFormatsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumDiscMasterFormats_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IEnumDiscMasterFormats_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IEnumDiscMasterFormats_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IEnumDiscMasterFormats_Next(This,cFormats,lpiidFormatID,pcFetched)	\
    (This)->lpVtbl -> Next(This,cFormats,lpiidFormatID,pcFetched)

#define IEnumDiscMasterFormats_Skip(This,cFormats)	\
    (This)->lpVtbl -> Skip(This,cFormats)

#define IEnumDiscMasterFormats_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IEnumDiscMasterFormats_Clone(This,ppEnum)	\
    (This)->lpVtbl -> Clone(This,ppEnum)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IEnumDiscMasterFormats_Next_Proxy( 
    IEnumDiscMasterFormats __RPC_FAR * This,
    /* [in] */ ULONG cFormats,
    /* [length_is][size_is][out] */ LPIID lpiidFormatID,
    /* [out] */ ULONG __RPC_FAR *pcFetched);


void __RPC_STUB IEnumDiscMasterFormats_Next_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumDiscMasterFormats_Skip_Proxy( 
    IEnumDiscMasterFormats __RPC_FAR * This,
    /* [in] */ ULONG cFormats);


void __RPC_STUB IEnumDiscMasterFormats_Skip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumDiscMasterFormats_Reset_Proxy( 
    IEnumDiscMasterFormats __RPC_FAR * This);


void __RPC_STUB IEnumDiscMasterFormats_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumDiscMasterFormats_Clone_Proxy( 
    IEnumDiscMasterFormats __RPC_FAR * This,
    /* [out] */ IEnumDiscMasterFormats __RPC_FAR *__RPC_FAR *ppEnum);


void __RPC_STUB IEnumDiscMasterFormats_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEnumDiscMasterFormats_INTERFACE_DEFINED__ */


#ifndef __IRedbookDiscMaster_INTERFACE_DEFINED__
#define __IRedbookDiscMaster_INTERFACE_DEFINED__

/* interface IRedbookDiscMaster */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRedbookDiscMaster;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E3BC42CD-4E5C-11D3-9144-00104BA11C5E")
    IRedbookDiscMaster : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetTotalAudioTracks( 
            /* [retval][out] */ long __RPC_FAR *pnTracks) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetTotalAudioBlocks( 
            /* [retval][out] */ long __RPC_FAR *pnBlocks) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetUsedAudioBlocks( 
            /* [retval][out] */ long __RPC_FAR *pnBlocks) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAvailableAudioTrackBlocks( 
            /* [retval][out] */ long __RPC_FAR *pnBlocks) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAudioBlockSize( 
            /* [retval][out] */ long __RPC_FAR *pnBlockBytes) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateAudioTrack( 
            /* [in] */ long nBlocks) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddAudioTrackBlocks( 
            /* [size_is][in] */ byte __RPC_FAR *pby,
            /* [in] */ long cb) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CloseAudioTrack( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRedbookDiscMasterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IRedbookDiscMaster __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IRedbookDiscMaster __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IRedbookDiscMaster __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTotalAudioTracks )( 
            IRedbookDiscMaster __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pnTracks);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTotalAudioBlocks )( 
            IRedbookDiscMaster __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pnBlocks);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetUsedAudioBlocks )( 
            IRedbookDiscMaster __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pnBlocks);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetAvailableAudioTrackBlocks )( 
            IRedbookDiscMaster __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pnBlocks);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetAudioBlockSize )( 
            IRedbookDiscMaster __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pnBlockBytes);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateAudioTrack )( 
            IRedbookDiscMaster __RPC_FAR * This,
            /* [in] */ long nBlocks);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddAudioTrackBlocks )( 
            IRedbookDiscMaster __RPC_FAR * This,
            /* [size_is][in] */ byte __RPC_FAR *pby,
            /* [in] */ long cb);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CloseAudioTrack )( 
            IRedbookDiscMaster __RPC_FAR * This);
        
        END_INTERFACE
    } IRedbookDiscMasterVtbl;

    interface IRedbookDiscMaster
    {
        CONST_VTBL struct IRedbookDiscMasterVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRedbookDiscMaster_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IRedbookDiscMaster_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IRedbookDiscMaster_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IRedbookDiscMaster_GetTotalAudioTracks(This,pnTracks)	\
    (This)->lpVtbl -> GetTotalAudioTracks(This,pnTracks)

#define IRedbookDiscMaster_GetTotalAudioBlocks(This,pnBlocks)	\
    (This)->lpVtbl -> GetTotalAudioBlocks(This,pnBlocks)

#define IRedbookDiscMaster_GetUsedAudioBlocks(This,pnBlocks)	\
    (This)->lpVtbl -> GetUsedAudioBlocks(This,pnBlocks)

#define IRedbookDiscMaster_GetAvailableAudioTrackBlocks(This,pnBlocks)	\
    (This)->lpVtbl -> GetAvailableAudioTrackBlocks(This,pnBlocks)

#define IRedbookDiscMaster_GetAudioBlockSize(This,pnBlockBytes)	\
    (This)->lpVtbl -> GetAudioBlockSize(This,pnBlockBytes)

#define IRedbookDiscMaster_CreateAudioTrack(This,nBlocks)	\
    (This)->lpVtbl -> CreateAudioTrack(This,nBlocks)

#define IRedbookDiscMaster_AddAudioTrackBlocks(This,pby,cb)	\
    (This)->lpVtbl -> AddAudioTrackBlocks(This,pby,cb)

#define IRedbookDiscMaster_CloseAudioTrack(This)	\
    (This)->lpVtbl -> CloseAudioTrack(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRedbookDiscMaster_GetTotalAudioTracks_Proxy( 
    IRedbookDiscMaster __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pnTracks);


void __RPC_STUB IRedbookDiscMaster_GetTotalAudioTracks_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRedbookDiscMaster_GetTotalAudioBlocks_Proxy( 
    IRedbookDiscMaster __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pnBlocks);


void __RPC_STUB IRedbookDiscMaster_GetTotalAudioBlocks_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRedbookDiscMaster_GetUsedAudioBlocks_Proxy( 
    IRedbookDiscMaster __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pnBlocks);


void __RPC_STUB IRedbookDiscMaster_GetUsedAudioBlocks_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRedbookDiscMaster_GetAvailableAudioTrackBlocks_Proxy( 
    IRedbookDiscMaster __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pnBlocks);


void __RPC_STUB IRedbookDiscMaster_GetAvailableAudioTrackBlocks_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRedbookDiscMaster_GetAudioBlockSize_Proxy( 
    IRedbookDiscMaster __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pnBlockBytes);


void __RPC_STUB IRedbookDiscMaster_GetAudioBlockSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRedbookDiscMaster_CreateAudioTrack_Proxy( 
    IRedbookDiscMaster __RPC_FAR * This,
    /* [in] */ long nBlocks);


void __RPC_STUB IRedbookDiscMaster_CreateAudioTrack_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRedbookDiscMaster_AddAudioTrackBlocks_Proxy( 
    IRedbookDiscMaster __RPC_FAR * This,
    /* [size_is][in] */ byte __RPC_FAR *pby,
    /* [in] */ long cb);


void __RPC_STUB IRedbookDiscMaster_AddAudioTrackBlocks_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IRedbookDiscMaster_CloseAudioTrack_Proxy( 
    IRedbookDiscMaster __RPC_FAR * This);


void __RPC_STUB IRedbookDiscMaster_CloseAudioTrack_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IRedbookDiscMaster_INTERFACE_DEFINED__ */


#ifndef __IJolietDiscMaster_INTERFACE_DEFINED__
#define __IJolietDiscMaster_INTERFACE_DEFINED__

/* interface IJolietDiscMaster */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IJolietDiscMaster;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E3BC42CE-4E5C-11D3-9144-00104BA11C5E")
    IJolietDiscMaster : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetTotalDataBlocks( 
            /* [retval][out] */ long __RPC_FAR *pnBlocks) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetUsedDataBlocks( 
            /* [retval][out] */ long __RPC_FAR *pnBlocks) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDataBlockSize( 
            /* [retval][out] */ long __RPC_FAR *pnBlockBytes) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddData( 
            /* [in] */ IStorage __RPC_FAR *pStorage,
            long lFileOverwrite) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetJolietProperties( 
            /* [out] */ IPropertyStorage __RPC_FAR *__RPC_FAR *ppPropStg) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetJolietProperties( 
            /* [in] */ IPropertyStorage __RPC_FAR *pPropStg) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IJolietDiscMasterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IJolietDiscMaster __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IJolietDiscMaster __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IJolietDiscMaster __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTotalDataBlocks )( 
            IJolietDiscMaster __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pnBlocks);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetUsedDataBlocks )( 
            IJolietDiscMaster __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pnBlocks);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetDataBlockSize )( 
            IJolietDiscMaster __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pnBlockBytes);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddData )( 
            IJolietDiscMaster __RPC_FAR * This,
            /* [in] */ IStorage __RPC_FAR *pStorage,
            long lFileOverwrite);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetJolietProperties )( 
            IJolietDiscMaster __RPC_FAR * This,
            /* [out] */ IPropertyStorage __RPC_FAR *__RPC_FAR *ppPropStg);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetJolietProperties )( 
            IJolietDiscMaster __RPC_FAR * This,
            /* [in] */ IPropertyStorage __RPC_FAR *pPropStg);
        
        END_INTERFACE
    } IJolietDiscMasterVtbl;

    interface IJolietDiscMaster
    {
        CONST_VTBL struct IJolietDiscMasterVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IJolietDiscMaster_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IJolietDiscMaster_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IJolietDiscMaster_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IJolietDiscMaster_GetTotalDataBlocks(This,pnBlocks)	\
    (This)->lpVtbl -> GetTotalDataBlocks(This,pnBlocks)

#define IJolietDiscMaster_GetUsedDataBlocks(This,pnBlocks)	\
    (This)->lpVtbl -> GetUsedDataBlocks(This,pnBlocks)

#define IJolietDiscMaster_GetDataBlockSize(This,pnBlockBytes)	\
    (This)->lpVtbl -> GetDataBlockSize(This,pnBlockBytes)

#define IJolietDiscMaster_AddData(This,pStorage,lFileOverwrite)	\
    (This)->lpVtbl -> AddData(This,pStorage,lFileOverwrite)

#define IJolietDiscMaster_GetJolietProperties(This,ppPropStg)	\
    (This)->lpVtbl -> GetJolietProperties(This,ppPropStg)

#define IJolietDiscMaster_SetJolietProperties(This,pPropStg)	\
    (This)->lpVtbl -> SetJolietProperties(This,pPropStg)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IJolietDiscMaster_GetTotalDataBlocks_Proxy( 
    IJolietDiscMaster __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pnBlocks);


void __RPC_STUB IJolietDiscMaster_GetTotalDataBlocks_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IJolietDiscMaster_GetUsedDataBlocks_Proxy( 
    IJolietDiscMaster __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pnBlocks);


void __RPC_STUB IJolietDiscMaster_GetUsedDataBlocks_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IJolietDiscMaster_GetDataBlockSize_Proxy( 
    IJolietDiscMaster __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pnBlockBytes);


void __RPC_STUB IJolietDiscMaster_GetDataBlockSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IJolietDiscMaster_AddData_Proxy( 
    IJolietDiscMaster __RPC_FAR * This,
    /* [in] */ IStorage __RPC_FAR *pStorage,
    long lFileOverwrite);


void __RPC_STUB IJolietDiscMaster_AddData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IJolietDiscMaster_GetJolietProperties_Proxy( 
    IJolietDiscMaster __RPC_FAR * This,
    /* [out] */ IPropertyStorage __RPC_FAR *__RPC_FAR *ppPropStg);


void __RPC_STUB IJolietDiscMaster_GetJolietProperties_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IJolietDiscMaster_SetJolietProperties_Proxy( 
    IJolietDiscMaster __RPC_FAR * This,
    /* [in] */ IPropertyStorage __RPC_FAR *pPropStg);


void __RPC_STUB IJolietDiscMaster_SetJolietProperties_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IJolietDiscMaster_INTERFACE_DEFINED__ */


#ifndef __IDiscMasterProgressEvents_INTERFACE_DEFINED__
#define __IDiscMasterProgressEvents_INTERFACE_DEFINED__

/* interface IDiscMasterProgressEvents */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDiscMasterProgressEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EC9E51C1-4E5D-11D3-9144-00104BA11C5E")
    IDiscMasterProgressEvents : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryCancel( 
            /* [retval][out] */ boolean __RPC_FAR *pbCancel) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NotifyPnPActivity( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NotifyAddProgress( 
            /* [in] */ long nCompletedSteps,
            /* [in] */ long nTotalSteps) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NotifyBlockProgress( 
            /* [in] */ long nCompleted,
            /* [in] */ long nTotal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NotifyTrackProgress( 
            /* [in] */ long nCurrentTrack,
            /* [in] */ long nTotalTracks) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NotifyPreparingBurn( 
            /* [in] */ long nEstimatedSeconds) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NotifyClosingDisc( 
            /* [in] */ long nEstimatedSeconds) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NotifyBurnComplete( 
            /* [in] */ HRESULT status) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NotifyEraseComplete( 
            /* [in] */ HRESULT status) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDiscMasterProgressEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDiscMasterProgressEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDiscMasterProgressEvents __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDiscMasterProgressEvents __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryCancel )( 
            IDiscMasterProgressEvents __RPC_FAR * This,
            /* [retval][out] */ boolean __RPC_FAR *pbCancel);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *NotifyPnPActivity )( 
            IDiscMasterProgressEvents __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *NotifyAddProgress )( 
            IDiscMasterProgressEvents __RPC_FAR * This,
            /* [in] */ long nCompletedSteps,
            /* [in] */ long nTotalSteps);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *NotifyBlockProgress )( 
            IDiscMasterProgressEvents __RPC_FAR * This,
            /* [in] */ long nCompleted,
            /* [in] */ long nTotal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *NotifyTrackProgress )( 
            IDiscMasterProgressEvents __RPC_FAR * This,
            /* [in] */ long nCurrentTrack,
            /* [in] */ long nTotalTracks);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *NotifyPreparingBurn )( 
            IDiscMasterProgressEvents __RPC_FAR * This,
            /* [in] */ long nEstimatedSeconds);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *NotifyClosingDisc )( 
            IDiscMasterProgressEvents __RPC_FAR * This,
            /* [in] */ long nEstimatedSeconds);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *NotifyBurnComplete )( 
            IDiscMasterProgressEvents __RPC_FAR * This,
            /* [in] */ HRESULT status);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *NotifyEraseComplete )( 
            IDiscMasterProgressEvents __RPC_FAR * This,
            /* [in] */ HRESULT status);
        
        END_INTERFACE
    } IDiscMasterProgressEventsVtbl;

    interface IDiscMasterProgressEvents
    {
        CONST_VTBL struct IDiscMasterProgressEventsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiscMasterProgressEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDiscMasterProgressEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDiscMasterProgressEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDiscMasterProgressEvents_QueryCancel(This,pbCancel)	\
    (This)->lpVtbl -> QueryCancel(This,pbCancel)

#define IDiscMasterProgressEvents_NotifyPnPActivity(This)	\
    (This)->lpVtbl -> NotifyPnPActivity(This)

#define IDiscMasterProgressEvents_NotifyAddProgress(This,nCompletedSteps,nTotalSteps)	\
    (This)->lpVtbl -> NotifyAddProgress(This,nCompletedSteps,nTotalSteps)

#define IDiscMasterProgressEvents_NotifyBlockProgress(This,nCompleted,nTotal)	\
    (This)->lpVtbl -> NotifyBlockProgress(This,nCompleted,nTotal)

#define IDiscMasterProgressEvents_NotifyTrackProgress(This,nCurrentTrack,nTotalTracks)	\
    (This)->lpVtbl -> NotifyTrackProgress(This,nCurrentTrack,nTotalTracks)

#define IDiscMasterProgressEvents_NotifyPreparingBurn(This,nEstimatedSeconds)	\
    (This)->lpVtbl -> NotifyPreparingBurn(This,nEstimatedSeconds)

#define IDiscMasterProgressEvents_NotifyClosingDisc(This,nEstimatedSeconds)	\
    (This)->lpVtbl -> NotifyClosingDisc(This,nEstimatedSeconds)

#define IDiscMasterProgressEvents_NotifyBurnComplete(This,status)	\
    (This)->lpVtbl -> NotifyBurnComplete(This,status)

#define IDiscMasterProgressEvents_NotifyEraseComplete(This,status)	\
    (This)->lpVtbl -> NotifyEraseComplete(This,status)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscMasterProgressEvents_QueryCancel_Proxy( 
    IDiscMasterProgressEvents __RPC_FAR * This,
    /* [retval][out] */ boolean __RPC_FAR *pbCancel);


void __RPC_STUB IDiscMasterProgressEvents_QueryCancel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscMasterProgressEvents_NotifyPnPActivity_Proxy( 
    IDiscMasterProgressEvents __RPC_FAR * This);


void __RPC_STUB IDiscMasterProgressEvents_NotifyPnPActivity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscMasterProgressEvents_NotifyAddProgress_Proxy( 
    IDiscMasterProgressEvents __RPC_FAR * This,
    /* [in] */ long nCompletedSteps,
    /* [in] */ long nTotalSteps);


void __RPC_STUB IDiscMasterProgressEvents_NotifyAddProgress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscMasterProgressEvents_NotifyBlockProgress_Proxy( 
    IDiscMasterProgressEvents __RPC_FAR * This,
    /* [in] */ long nCompleted,
    /* [in] */ long nTotal);


void __RPC_STUB IDiscMasterProgressEvents_NotifyBlockProgress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscMasterProgressEvents_NotifyTrackProgress_Proxy( 
    IDiscMasterProgressEvents __RPC_FAR * This,
    /* [in] */ long nCurrentTrack,
    /* [in] */ long nTotalTracks);


void __RPC_STUB IDiscMasterProgressEvents_NotifyTrackProgress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscMasterProgressEvents_NotifyPreparingBurn_Proxy( 
    IDiscMasterProgressEvents __RPC_FAR * This,
    /* [in] */ long nEstimatedSeconds);


void __RPC_STUB IDiscMasterProgressEvents_NotifyPreparingBurn_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscMasterProgressEvents_NotifyClosingDisc_Proxy( 
    IDiscMasterProgressEvents __RPC_FAR * This,
    /* [in] */ long nEstimatedSeconds);


void __RPC_STUB IDiscMasterProgressEvents_NotifyClosingDisc_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscMasterProgressEvents_NotifyBurnComplete_Proxy( 
    IDiscMasterProgressEvents __RPC_FAR * This,
    /* [in] */ HRESULT status);


void __RPC_STUB IDiscMasterProgressEvents_NotifyBurnComplete_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscMasterProgressEvents_NotifyEraseComplete_Proxy( 
    IDiscMasterProgressEvents __RPC_FAR * This,
    /* [in] */ HRESULT status);


void __RPC_STUB IDiscMasterProgressEvents_NotifyEraseComplete_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDiscMasterProgressEvents_INTERFACE_DEFINED__ */


#ifndef __IDiscMaster_INTERFACE_DEFINED__
#define __IDiscMaster_INTERFACE_DEFINED__

/* interface IDiscMaster */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDiscMaster;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("520CCA62-51A5-11D3-9144-00104BA11C5E")
    IDiscMaster : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Open( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EnumDiscMasterFormats( 
            /* [out] */ IEnumDiscMasterFormats __RPC_FAR *__RPC_FAR *ppEnum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetActiveDiscMasterFormat( 
            /* [out] */ LPIID lpiid) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetActiveDiscMasterFormat( 
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppUnk) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EnumDiscRecorders( 
            /* [out] */ IEnumDiscRecorders __RPC_FAR *__RPC_FAR *ppEnum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetActiveDiscRecorder( 
            /* [out] */ IDiscRecorder __RPC_FAR *__RPC_FAR *ppRecorder) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetActiveDiscRecorder( 
            /* [in] */ IDiscRecorder __RPC_FAR *pRecorder) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ClearFormatContent( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ProgressAdvise( 
            /* [in] */ IDiscMasterProgressEvents __RPC_FAR *pEvents,
            /* [retval][out] */ UINT_PTR __RPC_FAR *pvCookie) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ProgressUnadvise( 
            /* [in] */ UINT_PTR vCookie) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RecordDisc( 
            /* [in] */ boolean bSimulate,
            /* [in] */ boolean bEjectAfterBurn) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDiscMasterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDiscMaster __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDiscMaster __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDiscMaster __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Open )( 
            IDiscMaster __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *EnumDiscMasterFormats )( 
            IDiscMaster __RPC_FAR * This,
            /* [out] */ IEnumDiscMasterFormats __RPC_FAR *__RPC_FAR *ppEnum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetActiveDiscMasterFormat )( 
            IDiscMaster __RPC_FAR * This,
            /* [out] */ LPIID lpiid);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetActiveDiscMasterFormat )( 
            IDiscMaster __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppUnk);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *EnumDiscRecorders )( 
            IDiscMaster __RPC_FAR * This,
            /* [out] */ IEnumDiscRecorders __RPC_FAR *__RPC_FAR *ppEnum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetActiveDiscRecorder )( 
            IDiscMaster __RPC_FAR * This,
            /* [out] */ IDiscRecorder __RPC_FAR *__RPC_FAR *ppRecorder);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetActiveDiscRecorder )( 
            IDiscMaster __RPC_FAR * This,
            /* [in] */ IDiscRecorder __RPC_FAR *pRecorder);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ClearFormatContent )( 
            IDiscMaster __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ProgressAdvise )( 
            IDiscMaster __RPC_FAR * This,
            /* [in] */ IDiscMasterProgressEvents __RPC_FAR *pEvents,
            /* [retval][out] */ UINT_PTR __RPC_FAR *pvCookie);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ProgressUnadvise )( 
            IDiscMaster __RPC_FAR * This,
            /* [in] */ UINT_PTR vCookie);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RecordDisc )( 
            IDiscMaster __RPC_FAR * This,
            /* [in] */ boolean bSimulate,
            /* [in] */ boolean bEjectAfterBurn);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Close )( 
            IDiscMaster __RPC_FAR * This);
        
        END_INTERFACE
    } IDiscMasterVtbl;

    interface IDiscMaster
    {
        CONST_VTBL struct IDiscMasterVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiscMaster_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDiscMaster_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDiscMaster_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDiscMaster_Open(This)	\
    (This)->lpVtbl -> Open(This)

#define IDiscMaster_EnumDiscMasterFormats(This,ppEnum)	\
    (This)->lpVtbl -> EnumDiscMasterFormats(This,ppEnum)

#define IDiscMaster_GetActiveDiscMasterFormat(This,lpiid)	\
    (This)->lpVtbl -> GetActiveDiscMasterFormat(This,lpiid)

#define IDiscMaster_SetActiveDiscMasterFormat(This,riid,ppUnk)	\
    (This)->lpVtbl -> SetActiveDiscMasterFormat(This,riid,ppUnk)

#define IDiscMaster_EnumDiscRecorders(This,ppEnum)	\
    (This)->lpVtbl -> EnumDiscRecorders(This,ppEnum)

#define IDiscMaster_GetActiveDiscRecorder(This,ppRecorder)	\
    (This)->lpVtbl -> GetActiveDiscRecorder(This,ppRecorder)

#define IDiscMaster_SetActiveDiscRecorder(This,pRecorder)	\
    (This)->lpVtbl -> SetActiveDiscRecorder(This,pRecorder)

#define IDiscMaster_ClearFormatContent(This)	\
    (This)->lpVtbl -> ClearFormatContent(This)

#define IDiscMaster_ProgressAdvise(This,pEvents,pvCookie)	\
    (This)->lpVtbl -> ProgressAdvise(This,pEvents,pvCookie)

#define IDiscMaster_ProgressUnadvise(This,vCookie)	\
    (This)->lpVtbl -> ProgressUnadvise(This,vCookie)

#define IDiscMaster_RecordDisc(This,bSimulate,bEjectAfterBurn)	\
    (This)->lpVtbl -> RecordDisc(This,bSimulate,bEjectAfterBurn)

#define IDiscMaster_Close(This)	\
    (This)->lpVtbl -> Close(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscMaster_Open_Proxy( 
    IDiscMaster __RPC_FAR * This);


void __RPC_STUB IDiscMaster_Open_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscMaster_EnumDiscMasterFormats_Proxy( 
    IDiscMaster __RPC_FAR * This,
    /* [out] */ IEnumDiscMasterFormats __RPC_FAR *__RPC_FAR *ppEnum);


void __RPC_STUB IDiscMaster_EnumDiscMasterFormats_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscMaster_GetActiveDiscMasterFormat_Proxy( 
    IDiscMaster __RPC_FAR * This,
    /* [out] */ LPIID lpiid);


void __RPC_STUB IDiscMaster_GetActiveDiscMasterFormat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscMaster_SetActiveDiscMasterFormat_Proxy( 
    IDiscMaster __RPC_FAR * This,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppUnk);


void __RPC_STUB IDiscMaster_SetActiveDiscMasterFormat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscMaster_EnumDiscRecorders_Proxy( 
    IDiscMaster __RPC_FAR * This,
    /* [out] */ IEnumDiscRecorders __RPC_FAR *__RPC_FAR *ppEnum);


void __RPC_STUB IDiscMaster_EnumDiscRecorders_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscMaster_GetActiveDiscRecorder_Proxy( 
    IDiscMaster __RPC_FAR * This,
    /* [out] */ IDiscRecorder __RPC_FAR *__RPC_FAR *ppRecorder);


void __RPC_STUB IDiscMaster_GetActiveDiscRecorder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscMaster_SetActiveDiscRecorder_Proxy( 
    IDiscMaster __RPC_FAR * This,
    /* [in] */ IDiscRecorder __RPC_FAR *pRecorder);


void __RPC_STUB IDiscMaster_SetActiveDiscRecorder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscMaster_ClearFormatContent_Proxy( 
    IDiscMaster __RPC_FAR * This);


void __RPC_STUB IDiscMaster_ClearFormatContent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscMaster_ProgressAdvise_Proxy( 
    IDiscMaster __RPC_FAR * This,
    /* [in] */ IDiscMasterProgressEvents __RPC_FAR *pEvents,
    /* [retval][out] */ UINT_PTR __RPC_FAR *pvCookie);


void __RPC_STUB IDiscMaster_ProgressAdvise_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscMaster_ProgressUnadvise_Proxy( 
    IDiscMaster __RPC_FAR * This,
    /* [in] */ UINT_PTR vCookie);


void __RPC_STUB IDiscMaster_ProgressUnadvise_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscMaster_RecordDisc_Proxy( 
    IDiscMaster __RPC_FAR * This,
    /* [in] */ boolean bSimulate,
    /* [in] */ boolean bEjectAfterBurn);


void __RPC_STUB IDiscMaster_RecordDisc_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDiscMaster_Close_Proxy( 
    IDiscMaster __RPC_FAR * This);


void __RPC_STUB IDiscMaster_Close_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDiscMaster_INTERFACE_DEFINED__ */



#ifndef __IMAPILib_LIBRARY_DEFINED__
#define __IMAPILib_LIBRARY_DEFINED__

/* library IMAPILib */
/* [helpstring][version][uuid] */ 





EXTERN_C const IID LIBID_IMAPILib;

EXTERN_C const CLSID CLSID_MSDiscRecorderObj;

#ifdef __cplusplus

class DECLSPEC_UUID("520CCA61-51A5-11D3-9144-00104BA11C5E")
MSDiscRecorderObj;
#endif

EXTERN_C const CLSID CLSID_MSDiscMasterObj;

#ifdef __cplusplus

class DECLSPEC_UUID("520CCA63-51A5-11D3-9144-00104BA11C5E")
MSDiscMasterObj;
#endif

EXTERN_C const CLSID CLSID_MSEnumDiscRecordersObj;

#ifdef __cplusplus

class DECLSPEC_UUID("8A03567A-63CB-4BA8-BAF6-52119816D1EF")
MSEnumDiscRecordersObj;
#endif
#endif /* __IMAPILib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long __RPC_FAR *, unsigned long            , BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long __RPC_FAR *, BSTR __RPC_FAR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


