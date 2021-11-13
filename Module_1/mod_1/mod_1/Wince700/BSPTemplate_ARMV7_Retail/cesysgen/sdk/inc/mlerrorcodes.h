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

#include <winerror.h>

enum MediaLibraryErrors
{
    E_MEDIA_LIBRARY_DUPLICATE_OBJECT                = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+1),
    E_MEDIA_LIBRARY_INVALID_FILE                    = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+2),
    E_MEDIA_LIBRARY_INVALID_OPERATION               = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+3),
    E_MEDIA_LIBRARY_INVALID_PROPERTY_VALUE          = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+4),
    E_MEDIA_LIBRARY_INVALID_PROPERTY                = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+5),
    E_MEDIA_LIBRARY_INVALID_URL                     = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+6),
    E_MEDIA_LIBRARY_UNSUPPORTED_CONDITION_BY_QUERY  = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+7),    
    E_MEDIA_LIBRARY_DUPLICATE_PROPERTY_VALUE        = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+8),    
    E_MEDIA_LIBRARY_CORRUPTED_VOLUME                = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+9),    
    E_MEDIA_LIBRARY_LIBRARY_UPDATE_ERROR            = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+10),        
    E_MEDIA_LIBRARY_NO_MORE_OBJECTS                 = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+11),
    E_MEDIA_LIBRARY_UNSUPPORTED_PROPERTY_BY_OBJECT  = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+12),    
    E_MEDIA_LIBRARY_NO_VOLUME                       = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+13),
    E_MEDIA_LIBRARY_OUT_OF_MEMORY                   = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+14),
    E_MEDIA_LIBRARY_DUPLICATE_PROPERTY              = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+15),
    E_MEDIA_LIBRARY_MISSING_REQUIRED_PROPERTY       = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+16),
    E_MEDIA_LIBRARY_INTERNAL_ERROR                  = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+17),
    E_MEDIA_LIBRARY_INVALID_OBJECT_STATE            = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+18),
    E_MEDIA_LIBRARY_RECORD_NO_LONGER_VALID          = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+19),
    E_MEDIA_LIBRARY_INVALID_PROPERTY_VALUE_TYPE     = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+20),
    E_MEDIA_LIBRARY_HANDLER_LIMIT_REACHED           = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+21),    
    E_MEDIA_LIBRARY_LIBRARY_READ_ERROR              = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+22),    
    E_MEDIA_LIBRARY_MISSING_SYSTEM_COMPONENT        = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+23),        
    E_MEDIA_LIBRARY_SYSTEM_API_FAILURE              = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+24),        
    E_MEDIA_LIBRARY_UNSUPPORTED_PROPERTY_BY_NOTIFICATION  = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+25),        
    E_MEDIA_LIBRARY_DEADLOCKED_APPLICATION_CALLBACK       = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+26),            
    E_MEDIA_LIBRARY_VOLUME_UNAVAILABLE              = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+27),    
    E_MEDIA_LIBRARY_UNABLE_TO_DELETE_THUMBNAIL      = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+28),    
    E_MEDIA_LIBRARY_THUMBNAIL_TOO_LARGE             = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+29),    
    E_MEDIA_LIBRARY_PROPERTY_VALUE_LENGTHEXCEEDED   = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+30),        
    E_MEDIA_LIBRARY_UPLOAD_REFCOUNT_EQUALS_ZERO  = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+31),        
    E_MEDIA_LIBRARY_ERRORMAX_OFFSET                 = 31    
}; 

/*
If an existing error has been replaced by other, preserve the mapping below with another entry
If an existing error is no longer in use, keep an entry here anyways to prevent build breaks
till consumer code catches up.
*/
enum MediaLibrary_DeprecatedErrors
{
    E_MEDIA_LIBRARY_NO_MORE_ITEMS               = E_MEDIA_LIBRARY_NO_MORE_OBJECTS,
    E_MEDIA_LIBRARY_DB_ENTRY_EXISTS             = E_MEDIA_LIBRARY_DUPLICATE_OBJECT,
    E_MEDIA_LIBRARY_FILE_NOT_OPENED             = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+E_MEDIA_LIBRARY_ERRORMAX_OFFSET+1),
    E_MEDIA_LIBRARY_INVALID_VALUE               = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+E_MEDIA_LIBRARY_ERRORMAX_OFFSET+2),
    E_MEDIA_LIBRARY_META_DATA_UNOBTAINABLE      = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+E_MEDIA_LIBRARY_ERRORMAX_OFFSET+3),
    E_MEDIA_LIBRARY_NO_DATABASE                 = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+E_MEDIA_LIBRARY_ERRORMAX_OFFSET+4),
    E_MEDIA_LIBRARY_NO_DB_CONNECTION            = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+E_MEDIA_LIBRARY_ERRORMAX_OFFSET+5),
    E_MEDIA_LIBRARY_NO_URL_FOR_FILE             = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+E_MEDIA_LIBRARY_ERRORMAX_OFFSET+6),
    E_MEDIA_LIBRARY_SQL_INSERT_FAILED           = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, MA_ML_BASE+E_MEDIA_LIBRARY_ERRORMAX_OFFSET+7),   
}; 

