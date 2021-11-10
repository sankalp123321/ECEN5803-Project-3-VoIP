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


//string constants for known subtypes
//NOTE:: These strings have to be GUIDS in standard format.
#define MEDIA_LIBRARY_MEDIA_SUB_TYPE_MUSIC                          L"{825FACDF-114F-405f-8759-F67B537966B9}"
#define MEDIA_LIBRARY_MEDIA_SUB_TYPE_RECORDED_TV                    L"{64C98687-31CD-454f-B0C5-86100231B8F9}"
#define MEDIA_LIBRARY_MEDIA_SUB_TYPE_CAPTURED_VIDEO                 L"{DB62BAAA-7F9B-4a34-ABF8-9AE689940F51}"
#define MEDIA_LIBRARY_MEDIA_SUB_TYPE_PODCAST                        L"{03721E81-EB3F-41cd-AE9E-0E26036462F7}"
#define MEDIA_LIBRARY_MEDIA_SUB_TYPE_CAPTURED_PHOTOS                L"{8D580213-AB09-4821-A122-C79F565E4459}"
#define MEDIA_LIBRARY_MEDIA_SUB_TYPE_MUSIC_VIDEO                    L"{789250FB-057C-430f-B48C-92B3B1FAF21D}"

#define MEDIA_LIBRARY_MAXIMUM_METATADATA_LENGTH 100
#define MEDIA_LIBRARY_MAXIMUM_CONTAINER_METADATA_LENGTH MAX_PATH
#define MEDIA_LIBRARY_MAXIMUM_GUID_METATADATA_LENGTH 40


#define MEDIA_LIBRARY_METATADATA_VALUE_UNKNOWN L"MediaLibrary_Keyword_Unknown"


//THIS ENUM IS DEPRECATED
enum MediaLibraryQueries
{
    MEDIA_LIBRARY_QUERY_UNKNOWN = -1,
    MEDIA_LIBRARY_QUERY_MINIMUM  =0,    
    MEDIA_LIBRARY_QUERY_ITEM  =   MEDIA_LIBRARY_QUERY_MINIMUM,
    MEDIA_LIBRARY_QUERY_SERIES ,
    MEDIA_LIBRARY_QUERY_AUTHOR,
    MEDIA_LIBRARY_QUERY_TAG ,
    MEDIA_LIBRARY_QUERY_GENRE,
    MEDIA_LIBRARY_QUERY_MAXIMUM = MEDIA_LIBRARY_QUERY_GENRE
};

static const WCHAR * MediaLibraryOperationStrings [] = 
{
// the operations with 'like' take special handling
// but I think I need the place holders
    L" = ",
    L" > ",
    L" >= ",
    L" < " ,       
    L" <= " ,      
    L" != ",
    L" LIKE ",
    L" LIKE ",
    L" LIKE ",
    L" LIKE ",
};






