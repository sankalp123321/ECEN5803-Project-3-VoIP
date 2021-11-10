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
//
// MLibDLL_id.h - Media Library Property ID enumeration

#pragma once

enum PropertyId
{
    mlid_NONE = 0,
    mlid_music_id = 1,
    mlid_music_title = 2,
    mlid_music_logicalStorageID = 3,
    mlid_music_formatCode = 4,
    mlid_music_sampleFormatCode = 5,
    mlid_music_isDeleted = 6,
    mlid_music_isDRMProtected = 7,
    mlid_music_changedTime = 8,
    mlid_music_creationTime = 9,
    mlid_music_fileURL = 10,
    mlid_music_logicalFileURL = 11,
    mlid_music_fileSize = 12,
    mlid_music_fileTime = 13,
    mlid_music_parentID = 14,
    mlid_music_modifiedTime = 15,
    mlid_music_userRating = 16,
    mlid_music_folderName = 17,
    mlid_music_fileName = 18,
    mlid_music_datasourceId = 19,
    mlid_music_copyright = 20,
    mlid_music_sampleURL = 21,
    mlid_music_sampleWidth = 22,
    mlid_music_sampleHeight = 23,
    mlid_music_width = 24,
    mlid_music_height = 25,
    mlid_music_trackNumber = 26,
    mlid_music_composer = 27,
    mlid_music_conductor = 28,
    mlid_music_description = 29,
    mlid_music_duration = 30,
    mlid_music_parentalRating = 31,
    mlid_music_originalReleaseDate = 32,
    mlid_music_playCount = 33,
    mlid_music_audioBitRate = 34,
    mlid_music_language = 35,
    mlid_music_protocolInfo = 36,
    mlid_music_dlnaXML = 37,
    mlid_music_bitRateType = 38,
    mlid_music_sampleRate = 39,
    mlid_music_numChannels = 40,
    mlid_music_audioWaveCodec = 41,
    mlid_music_scanType = 42,
    mlid_music_videoFourCCCodec = 43,
    mlid_music_videoBitRate = 44,
    mlid_music_framesPerThousandSeconds = 45,
    mlid_music_keyFrameDistance = 46,
    mlid_music_encodingProfile = 47,
    mlid_music_artist_id = 48,
    mlid_music_genre_id = 49,
    mlid_music_album_id = 50,
    mlid_album_id = 51,
    mlid_album_title = 52,
    mlid_album_artist_name = 53,
    mlid_artist_id = 54,
    mlid_artist_name = 55,
    mlid_genre_id = 56,
    mlid_genre_name = 57,
    mlid_series_id = 58,
    mlid_series_name = 59,
    mlid_video_id = 60,
    mlid_video_title = 61,
    mlid_video_logicalStorageID = 62,
    mlid_video_formatCode = 63,
    mlid_video_sampleFormatCode = 64,
    mlid_video_isDeleted = 65,
    mlid_video_isDRMProtected = 66,
    mlid_video_changedTime = 67,
    mlid_video_creationTime = 68,
    mlid_video_fileURL = 69,
    mlid_video_logicalFileURL = 70,
    mlid_video_fileSize = 71,
    mlid_video_fileTime = 72,
    mlid_video_parentID = 73,
    mlid_video_folderName = 74,
    mlid_video_fileName = 75,
    mlid_video_datasourceId = 76,
    mlid_video_modifiedTime = 77,
    mlid_video_copyright = 78,
    mlid_video_userRating = 79,
    mlid_video_sampleURL = 80,
    mlid_video_sampleWidth = 81,
    mlid_video_sampleHeight = 82,
    mlid_video_width = 83,
    mlid_video_height = 84,
    mlid_video_trackNumber = 85,
    mlid_video_composer = 86,
    mlid_video_description = 87,
    mlid_video_duration = 88,
    mlid_video_parentalRating = 89,
    mlid_video_originalReleaseDate = 90,
    mlid_video_playCount = 91,
    mlid_video_lastPlayedPosition = 92,
    mlid_video_episodeNumber = 93,
    mlid_video_seasonNumber = 94,
    mlid_video_language = 95,
    mlid_video_protocolInfo = 96,
    mlid_video_dlnaXML = 97,
    mlid_video_bitRateType = 98,
    mlid_video_sampleRate = 99,
    mlid_video_numChannels = 100,
    mlid_video_scanType = 101,
    mlid_video_audioWaveCodec = 102,
    mlid_video_audioBitRate = 103,
    mlid_video_videoFourCCCodec = 104,
    mlid_video_videoBitRate = 105,
    mlid_video_framesPerThousandSeconds = 106,
    mlid_video_keyFrameDistance = 107,
    mlid_video_encodingProfile = 108,
    mlid_video_artist_id = 109,
    mlid_video_genre_id = 110,
    mlid_video_album_id = 111,
    mlid_video_series_id = 112,
    mlid_photo_id = 113,
    mlid_photo_title = 114,
    mlid_photo_logicalStorageID = 115,
    mlid_photo_formatCode = 116,
    mlid_photo_sampleFormatCode = 117,
    mlid_photo_isDeleted = 118,
    mlid_photo_isDRMProtected = 119,
    mlid_photo_changedTime = 120,
    mlid_photo_creationTime = 121,
    mlid_photo_fileURL = 122,
    mlid_photo_logicalFileURL = 123,
    mlid_photo_fileSize = 124,
    mlid_photo_fileTime = 125,
    mlid_photo_parentID = 126,
    mlid_photo_folderName = 127,
    mlid_photo_fileName = 128,
    mlid_photo_datasourceId = 129,
    mlid_photo_modifiedTime = 130,
    mlid_photo_copyright = 131,
    mlid_photo_userRating = 132,
    mlid_photo_sampleURL = 133,
    mlid_photo_sampleWidth = 134,
    mlid_photo_sampleHeight = 135,
    mlid_photo_author = 136,
    mlid_photo_width = 137,
    mlid_photo_height = 138,
    mlid_photo_description = 139,
    mlid_photo_dateTaken = 140,
    mlid_photo_monthTaken = 141,
    mlid_photo_yearTaken = 142,
    mlid_photo_location = 143,
    mlid_photo_category = 144,
    mlid_photo_protocolInfo = 145,
    mlid_photo_dlnaXML = 146,
    mlid_photo_useCount = 147,
    mlid_photo_day_id = 148,
    mlid_day_id = 149,
    mlid_day_name = 150,
    mlid_day_month_id = 151,
    mlid_month_id = 152,
    mlid_month_name = 153,
    mlid_month_year_id = 154,
    mlid_year_id = 155,
    mlid_year_name = 156,
    mlid_playlistEntry_id = 157,
    mlid_playlistEntry_title = 158,
    mlid_playlistEntry_track = 159,
    mlid_playlistEntry_trackID = 160,
    mlid_playlistEntry_trackEntity = 161,
    mlid_playlistEntry_playlist_id = 162,
    mlid_generic_referenceEntry_id = 163,
    mlid_generic_referenceEntry_title = 164,
    mlid_generic_referenceEntry_track = 165,
    mlid_generic_referenceEntry_refID = 166,
    mlid_generic_referenceEntry_refEntity = 167,
    mlid_generic_referenceEntry_generic_id = 168,
    mlid_albumArt_referenceEntry_id = 169,
    mlid_albumArt_referenceEntry_title = 170,
    mlid_albumArt_referenceEntry_track = 171,
    mlid_albumArt_referenceEntry_refID = 172,
    mlid_albumArt_referenceEntry_refEntity = 173,
    mlid_albumArt_referenceEntry_albumArt_id = 174,
    mlid_playlist_id = 175,
    mlid_playlist_title = 176,
    mlid_playlist_logicalStorageID = 177,
    mlid_playlist_formatCode = 178,
    mlid_playlist_sampleFormatCode = 179,
    mlid_playlist_isDeleted = 180,
    mlid_playlist_changedTime = 181,
    mlid_playlist_creationTime = 182,
    mlid_playlist_fileURL = 183,
    mlid_playlist_logicalFileURL = 184,
    mlid_playlist_fileSize = 185,
    mlid_playlist_fileTime = 186,
    mlid_playlist_parentID = 187,
    mlid_playlist_folderName = 188,
    mlid_playlist_fileName = 189,
    mlid_playlist_useCount = 190,
    mlid_albumArt_id = 191,
    mlid_albumArt_title = 192,
    mlid_albumArt_logicalStorageID = 193,
    mlid_albumArt_formatCode = 194,
    mlid_albumArt_isDeleted = 195,
    mlid_albumArt_changedTime = 196,
    mlid_albumArt_creationTime = 197,
    mlid_albumArt_fileURL = 198,
    mlid_albumArt_logicalFileURL = 199,
    mlid_albumArt_fileSize = 200,
    mlid_albumArt_fileTime = 201,
    mlid_albumArt_parentID = 202,
    mlid_albumArt_folderName = 203,
    mlid_albumArt_fileName = 204,
    mlid_albumArt_purchaseFlag = 205,
    mlid_albumArt_userRating = 206,
    mlid_albumArt_sampleFormatCode = 207,
    mlid_albumArt_sampleURL = 208,
    mlid_albumArt_sampleWidth = 209,
    mlid_albumArt_sampleHeight = 210,
    mlid_albumArt_useCount = 211,
    mlid_albumArt_genre_id = 212,
    mlid_albumArt_album_id = 213,
    mlid_generic_id = 214,
    mlid_generic_title = 215,
    mlid_generic_logicalStorageID = 216,
    mlid_generic_formatCode = 217,
    mlid_generic_sampleFormatCode = 218,
    mlid_generic_isDeleted = 219,
    mlid_generic_isDRMProtected = 220,
    mlid_generic_changedTime = 221,
    mlid_generic_creationTime = 222,
    mlid_generic_fileURL = 223,
    mlid_generic_logicalFileURL = 224,
    mlid_generic_fileSize = 225,
    mlid_generic_fileTime = 226,
    mlid_generic_folderName = 227,
    mlid_generic_fileName = 228,
    mlid_generic_parentID = 229,
    mlid_generic_isDirectory = 230,
    mlid_parseQueue_id = 231,
    mlid_parseQueue_inputURL = 232,
    mlid_parseQueue_fileSize = 233,
    mlid_parseQueue_fileTime = 234,
    mlid_parseQueue_outputURL = 235,
    mlid_parseQueue_thumbnailURL = 236,
    mlid_parseQueue_metadataState = 237,
    mlid_parseQueue_thumbnailState = 238,
    mlid_music_artist_id2 = 239,
    mlid_music_artist_name = 240,
    mlid_music_genre_id2 = 241,
    mlid_music_genre_name = 242,
    mlid_music_album_id2 = 243,
    mlid_music_album_title = 244,
    mlid_music_album_artist_name = 245,
    mlid_video_artist_id2 = 246,
    mlid_video_artist_name = 247,
    mlid_video_genre_id2 = 248,
    mlid_video_genre_name = 249,
    mlid_video_album_id2 = 250,
    mlid_video_album_title = 251,
    mlid_video_album_artist_name = 252,
    mlid_video_series_id2 = 253,
    mlid_video_series_name = 254,
    mlid_photo_day_id2 = 255,
    mlid_photo_day_name = 256,
    mlid_photo_day_month_id = 257,
    mlid_photo_day_month_id2 = 258,
    mlid_photo_day_month_name = 259,
    mlid_photo_day_month_year_id = 260,
    mlid_photo_day_month_year_id2 = 261,
    mlid_photo_day_month_year_name = 262,
    mlid_playlistEntry_playlist_id2 = 263,
    mlid_playlistEntry_playlist_title = 264,
    mlid_playlistEntry_playlist_logicalStorageID = 265,
    mlid_playlistEntry_playlist_formatCode = 266,
    mlid_playlistEntry_playlist_sampleFormatCode = 267,
    mlid_playlistEntry_playlist_isDeleted = 268,
    mlid_playlistEntry_playlist_changedTime = 269,
    mlid_playlistEntry_playlist_creationTime = 270,
    mlid_playlistEntry_playlist_fileURL = 271,
    mlid_playlistEntry_playlist_logicalFileURL = 272,
    mlid_playlistEntry_playlist_fileSize = 273,
    mlid_playlistEntry_playlist_fileTime = 274,
    mlid_playlistEntry_playlist_parentID = 275,
    mlid_playlistEntry_playlist_folderName = 276,
    mlid_playlistEntry_playlist_fileName = 277,
    mlid_playlistEntry_playlist_useCount = 278,
    mlid_generic_referenceEntry_generic_id2 = 279,
    mlid_generic_referenceEntry_generic_title = 280,
    mlid_generic_referenceEntry_generic_logicalStorageID = 281,
    mlid_generic_referenceEntry_generic_formatCode = 282,
    mlid_generic_referenceEntry_generic_sampleFormatCode = 283,
    mlid_generic_referenceEntry_generic_isDeleted = 284,
    mlid_generic_referenceEntry_generic_isDRMProtected = 285,
    mlid_generic_referenceEntry_generic_changedTime = 286,
    mlid_generic_referenceEntry_generic_creationTime = 287,
    mlid_generic_referenceEntry_generic_fileURL = 288,
    mlid_generic_referenceEntry_generic_logicalFileURL = 289,
    mlid_generic_referenceEntry_generic_fileSize = 290,
    mlid_generic_referenceEntry_generic_fileTime = 291,
    mlid_generic_referenceEntry_generic_folderName = 292,
    mlid_generic_referenceEntry_generic_fileName = 293,
    mlid_generic_referenceEntry_generic_parentID = 294,
    mlid_generic_referenceEntry_generic_isDirectory = 295,
    mlid_albumArt_referenceEntry_albumArt_id2 = 296,
    mlid_albumArt_referenceEntry_albumArt_title = 297,
    mlid_albumArt_referenceEntry_albumArt_logicalStorageID = 298,
    mlid_albumArt_referenceEntry_albumArt_formatCode = 299,
    mlid_albumArt_referenceEntry_albumArt_isDeleted = 300,
    mlid_albumArt_referenceEntry_albumArt_changedTime = 301,
    mlid_albumArt_referenceEntry_albumArt_creationTime = 302,
    mlid_albumArt_referenceEntry_albumArt_fileURL = 303,
    mlid_albumArt_referenceEntry_albumArt_logicalFileURL = 304,
    mlid_albumArt_referenceEntry_albumArt_fileSize = 305,
    mlid_albumArt_referenceEntry_albumArt_fileTime = 306,
    mlid_albumArt_referenceEntry_albumArt_parentID = 307,
    mlid_albumArt_referenceEntry_albumArt_folderName = 308,
    mlid_albumArt_referenceEntry_albumArt_fileName = 309,
    mlid_albumArt_referenceEntry_albumArt_purchaseFlag = 310,
    mlid_albumArt_referenceEntry_albumArt_userRating = 311,
    mlid_albumArt_referenceEntry_albumArt_sampleFormatCode = 312,
    mlid_albumArt_referenceEntry_albumArt_sampleURL = 313,
    mlid_albumArt_referenceEntry_albumArt_sampleWidth = 314,
    mlid_albumArt_referenceEntry_albumArt_sampleHeight = 315,
    mlid_albumArt_referenceEntry_albumArt_useCount = 316,
    mlid_albumArt_referenceEntry_albumArt_genre_id = 317,
    mlid_albumArt_referenceEntry_albumArt_album_id = 318,
    mlid_albumArt_referenceEntry_albumArt_genre_id2 = 319,
    mlid_albumArt_referenceEntry_albumArt_genre_name = 320,
    mlid_albumArt_referenceEntry_albumArt_album_id2 = 321,
    mlid_albumArt_referenceEntry_albumArt_album_title = 322,
    mlid_albumArt_referenceEntry_albumArt_album_artist_name = 323,
    mlid_albumArt_genre_id2 = 324,
    mlid_albumArt_genre_name = 325,
    mlid_albumArt_album_id2 = 326,
    mlid_albumArt_album_title = 327,
    mlid_albumArt_album_artist_name = 328,
    mlid_MAX
};

enum TableId
{
    ml_Table_NONE = 0,
    ml_Table_music = 1,
    ml_Table_album = 2,
    ml_Table_artist = 3,
    ml_Table_genre = 4,
    ml_Table_series = 5,
    ml_Table_video = 6,
    ml_Table_photo = 7,
    ml_Table_day = 8,
    ml_Table_month = 9,
    ml_Table_year = 10,
    ml_Table_playlistEntry = 11,
    ml_Table_generic_referenceEntry = 12,
    ml_Table_albumArt_referenceEntry = 13,
    ml_Table_playlist = 14,
    ml_Table_albumArt = 15,
    ml_Table_generic = 16,
    ml_Table_parseQueue = 17,
    ml_Table_music_artist = 18,
    ml_Table_music_genre = 19,
    ml_Table_music_album = 20,
    ml_Table_video_artist = 21,
    ml_Table_video_genre = 22,
    ml_Table_video_album = 23,
    ml_Table_video_series = 24,
    ml_Table_photo_day = 25,
    ml_Table_photo_day_month = 26,
    ml_Table_photo_day_month_year = 27,
    ml_Table_playlistEntry_playlist = 28,
    ml_Table_generic_referenceEntry_generic = 29,
    ml_Table_albumArt_referenceEntry_albumArt = 30,
    ml_Table_albumArt_referenceEntry_albumArt_genre = 31,
    ml_Table_albumArt_referenceEntry_albumArt_album = 32,
    ml_Table_albumArt_genre = 33,
    ml_Table_albumArt_album = 34,
    ml_Table_MAX
};

enum EntityId
{
    ml_Entity_NONE = 0,
    ml_Entity_music = 1,
    ml_Entity_album = 2,
    ml_Entity_artist = 3,
    ml_Entity_genre = 4,
    ml_Entity_video = 5,
    ml_Entity_photo = 6,
    ml_Entity_playlistEntry = 7,
    ml_Entity_generic_referenceEntry = 8,
    ml_Entity_albumArt_referenceEntry = 9,
    ml_Entity_playlist = 10,
    ml_Entity_albumArt = 11,
    ml_Entity_generic = 12,
    ml_Entity_parseQueue = 13,
    ml_Entity_MAX
};

enum JoinId
{
    ml_Join_NONE = 0,
    ml_Join_music_artist = 1,
    ml_Join_music_genre = 2,
    ml_Join_music_album = 3,
    ml_Join_video_artist = 4,
    ml_Join_video_genre = 5,
    ml_Join_video_album = 6,
    ml_Join_video_series = 7,
    ml_Join_photo_day = 8,
    ml_Join_photo_day_month = 9,
    ml_Join_photo_day_month_year = 10,
    ml_Join_playlistEntry_playlist = 11,
    ml_Join_generic_referenceEntry_generic = 12,
    ml_Join_albumArt_referenceEntry_albumArt = 13,
    ml_Join_albumArt_referenceEntry_albumArt_genre = 14,
    ml_Join_albumArt_referenceEntry_albumArt_album = 15,
    ml_Join_albumArt_genre = 16,
    ml_Join_albumArt_album = 17,
    ml_Join_MAX
};

