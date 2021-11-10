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

// DBSchema.h : Declaration of the classes that support database queries

#define ENT_STATIC(ENT_DESC,SEP) \
ENT_DESC(NONE, NONE, NONE, NONE, NONE, NONE, NONE, NONE)##SEP \
ENT_DESC(music, music_fileURL, music_isDeleted, music_creationTime, music_changedTime, music_fileSize, music_fileTime, music_parentID)##SEP \
ENT_DESC(album, NONE, NONE, NONE, NONE, NONE, NONE, NONE)##SEP \
ENT_DESC(artist, NONE, NONE, NONE, NONE, NONE, NONE, NONE)##SEP \
ENT_DESC(genre, NONE, NONE, NONE, NONE, NONE, NONE, NONE)##SEP \
ENT_DESC(video, video_fileURL, video_isDeleted, video_creationTime, video_changedTime, video_fileSize, video_fileTime, video_parentID)##SEP \
ENT_DESC(photo, photo_fileURL, photo_isDeleted, photo_creationTime, photo_changedTime, photo_fileSize, photo_fileTime, photo_parentID)##SEP \
ENT_DESC(playlistEntry, NONE, NONE, NONE, NONE, NONE, NONE, NONE)##SEP \
ENT_DESC(generic_referenceEntry, NONE, NONE, NONE, NONE, NONE, NONE, NONE)##SEP \
ENT_DESC(albumArt_referenceEntry, NONE, NONE, NONE, NONE, NONE, NONE, NONE)##SEP \
ENT_DESC(playlist, playlist_fileURL, playlist_isDeleted, playlist_creationTime, playlist_changedTime, playlist_fileSize, playlist_fileTime, playlist_parentID)##SEP \
ENT_DESC(albumArt, albumArt_fileURL, albumArt_isDeleted, albumArt_creationTime, albumArt_changedTime, albumArt_fileSize, albumArt_fileTime, albumArt_parentID)##SEP \
ENT_DESC(generic, generic_fileURL, generic_isDeleted, generic_creationTime, generic_changedTime, generic_fileSize, generic_fileTime, generic_parentID)##SEP \
ENT_DESC(parseQueue, NONE, NONE, NONE, NONE, NONE, NONE, NONE)##SEP \
ENT_DESC(MAX, NONE, NONE, NONE, NONE, NONE, NONE, NONE)

#define TBL_STATIC(TBL_DESC,SEP) \
TBL_DESC(NONE, NONE, NONE, NULL)##SEP \
TBL_DESC(music, music_id, music, L"tbl_music")##SEP \
TBL_DESC(album, album_id, album, L"tbl_album")##SEP \
TBL_DESC(artist, artist_id, artist, L"tbl_artist")##SEP \
TBL_DESC(genre, genre_id, genre, L"tbl_genre")##SEP \
TBL_DESC(series, series_id, NONE, L"tbl_series")##SEP \
TBL_DESC(video, video_id, video, L"tbl_video")##SEP \
TBL_DESC(photo, photo_id, photo, L"tbl_photo")##SEP \
TBL_DESC(day, day_id, NONE, L"tbl_day")##SEP \
TBL_DESC(month, month_id, NONE, L"tbl_month")##SEP \
TBL_DESC(year, year_id, NONE, L"tbl_year")##SEP \
TBL_DESC(playlistEntry, playlistEntry_id, playlistEntry, L"tbl_playlistEntry")##SEP \
TBL_DESC(generic_referenceEntry, generic_referenceEntry_id, generic_referenceEntry, L"tbl_generic_referenceEntry")##SEP \
TBL_DESC(albumArt_referenceEntry, albumArt_referenceEntry_id, albumArt_referenceEntry, L"tbl_albumArt_referenceEntry")##SEP \
TBL_DESC(playlist, playlist_id, playlist, L"tbl_playlist")##SEP \
TBL_DESC(albumArt, albumArt_id, albumArt, L"tbl_albumArt")##SEP \
TBL_DESC(generic, generic_id, generic, L"tbl_generic")##SEP \
TBL_DESC(parseQueue, parseQueue_id, parseQueue, L"tbl_parseQueue")##SEP \
TBL_DESC(music_artist, artist_id, artist, L"tbl_artist")##SEP \
TBL_DESC(music_genre, genre_id, genre, L"tbl_genre")##SEP \
TBL_DESC(music_album, album_id, album, L"tbl_album")##SEP \
TBL_DESC(video_artist, artist_id, artist, L"tbl_artist")##SEP \
TBL_DESC(video_genre, genre_id, genre, L"tbl_genre")##SEP \
TBL_DESC(video_album, album_id, album, L"tbl_album")##SEP \
TBL_DESC(video_series, series_id, NONE, L"tbl_series")##SEP \
TBL_DESC(photo_day, day_id, NONE, L"tbl_day")##SEP \
TBL_DESC(photo_day_month, month_id, NONE, L"tbl_month")##SEP \
TBL_DESC(photo_day_month_year, year_id, NONE, L"tbl_year")##SEP \
TBL_DESC(playlistEntry_playlist, playlist_id, playlist, L"tbl_playlist")##SEP \
TBL_DESC(generic_referenceEntry_generic, generic_id, generic, L"tbl_generic")##SEP \
TBL_DESC(albumArt_referenceEntry_albumArt, albumArt_id, albumArt, L"tbl_albumArt")##SEP \
TBL_DESC(albumArt_referenceEntry_albumArt_genre, genre_id, genre, L"tbl_genre")##SEP \
TBL_DESC(albumArt_referenceEntry_albumArt_album, album_id, album, L"tbl_album")##SEP \
TBL_DESC(albumArt_genre, genre_id, genre, L"tbl_genre")##SEP \
TBL_DESC(albumArt_album, album_id, album, L"tbl_album")##SEP \
TBL_DESC(MAX, NONE, NONE, NULL)

#define PROP_STATIC(PROP_DESC,SEP) \
PROP_DESC(NONE, false, VT_EMPTY, 0, L"", NONE, 0, NONE)##SEP \
PROP_DESC(music_id, false, VT_I8, 0, L"music_id", music, 0, NONE)##SEP \
PROP_DESC(music_title, false, VT_BSTR, 255, L"music_title", music, 0, NONE)##SEP \
PROP_DESC(music_logicalStorageID, false, VT_I4, 0, L"music_logicalStorageID", music, 0, NONE)##SEP \
PROP_DESC(music_formatCode, false, VT_I2, 0, L"music_formatCode", music, 0, NONE)##SEP \
PROP_DESC(music_sampleFormatCode, false, VT_I2, 0, L"music_sampleFormatCode", music, 0, NONE)##SEP \
PROP_DESC(music_isDeleted, false, VT_BOOL, 0, L"music_isDeleted", music, 0, NONE)##SEP \
PROP_DESC(music_isDRMProtected, false, VT_BOOL, 0, L"music_isDRMProtected", music, 0, NONE)##SEP \
PROP_DESC(music_changedTime, false, VT_DATE, 0, L"music_changedTime", music, 0, NONE)##SEP \
PROP_DESC(music_creationTime, false, VT_DATE, 0, L"music_creationTime", music, 0, NONE)##SEP \
PROP_DESC(music_fileURL, true, VT_BSTR, 260, L"music_fileURL", music, 0, NONE)##SEP \
PROP_DESC(music_logicalFileURL, false, VT_BSTR, 260, L"music_logicalFileURL", music, 0, NONE)##SEP \
PROP_DESC(music_fileSize, false, VT_I8, 0, L"music_fileSize", music, 0, NONE)##SEP \
PROP_DESC(music_fileTime, false, VT_DATE, 0, L"music_fileTime", music, 0, NONE)##SEP \
PROP_DESC(music_parentID, false, VT_I8, 0, L"music_parentID", music, 0, NONE)##SEP \
PROP_DESC(music_modifiedTime, false, VT_DATE, 0, L"music_modifiedTime", music, 0, NONE)##SEP \
PROP_DESC(music_userRating, false, VT_I2, 0, L"music_userRating", music, 0, NONE)##SEP \
PROP_DESC(music_folderName, false, VT_BSTR, 260, L"music_folderName", music, 0, NONE)##SEP \
PROP_DESC(music_fileName, false, VT_BSTR, 260, L"music_fileName", music, 0, NONE)##SEP \
PROP_DESC(music_datasourceId, false, VT_I4, 0, L"music_datasourceId", music, 0, NONE)##SEP \
PROP_DESC(music_copyright, false, VT_BSTR, 255, L"music_copyright", music, 0, NONE)##SEP \
PROP_DESC(music_sampleURL, false, VT_BSTR, 260, L"music_sampleURL", music, 0, NONE)##SEP \
PROP_DESC(music_sampleWidth, false, VT_I4, 0, L"music_sampleWidth", music, 0, NONE)##SEP \
PROP_DESC(music_sampleHeight, false, VT_I4, 0, L"music_sampleHeight", music, 0, NONE)##SEP \
PROP_DESC(music_width, false, VT_I4, 0, L"music_width", music, 0, NONE)##SEP \
PROP_DESC(music_height, false, VT_I4, 0, L"music_height", music, 0, NONE)##SEP \
PROP_DESC(music_trackNumber, false, VT_I2, 0, L"music_trackNumber", music, 0, NONE)##SEP \
PROP_DESC(music_composer, false, VT_BSTR, 255, L"music_composer", music, 0, NONE)##SEP \
PROP_DESC(music_conductor, false, VT_BSTR, 255, L"music_conductor", music, 0, NONE)##SEP \
PROP_DESC(music_description, false, VT_BSTR, 255, L"music_description", music, 0, NONE)##SEP \
PROP_DESC(music_duration, false, VT_I4, 0, L"music_duration", music, 0, NONE)##SEP \
PROP_DESC(music_parentalRating, false, VT_BSTR, 255, L"music_parentalRating", music, 0, NONE)##SEP \
PROP_DESC(music_originalReleaseDate, false, VT_DATE, 0, L"music_originalReleaseDate", music, 0, NONE)##SEP \
PROP_DESC(music_playCount, false, VT_I4, 0, L"music_playCount", music, 0, NONE)##SEP \
PROP_DESC(music_audioBitRate, false, VT_I4, 0, L"music_audioBitRate", music, 0, NONE)##SEP \
PROP_DESC(music_language, false, VT_BSTR, 255, L"music_language", music, 0, NONE)##SEP \
PROP_DESC(music_protocolInfo, false, VT_BSTR, 1, L"music_protocolInfo", music, 0, NONE)##SEP \
PROP_DESC(music_dlnaXML, false, VT_BSTR, 1, L"music_dlnaXML", music, 0, NONE)##SEP \
PROP_DESC(music_bitRateType, false, VT_I2, 0, L"music_bitRateType", music, 0, NONE)##SEP \
PROP_DESC(music_sampleRate, false, VT_I4, 0, L"music_sampleRate", music, 0, NONE)##SEP \
PROP_DESC(music_numChannels, false, VT_I2, 0, L"music_numChannels", music, 0, NONE)##SEP \
PROP_DESC(music_audioWaveCodec, false, VT_I4, 0, L"music_audioWaveCodec", music, 0, NONE)##SEP \
PROP_DESC(music_scanType, false, VT_I2, 0, L"music_scanType", music, 0, NONE)##SEP \
PROP_DESC(music_videoFourCCCodec, false, VT_I4, 0, L"music_videoFourCCCodec", music, 0, NONE)##SEP \
PROP_DESC(music_videoBitRate, false, VT_I4, 0, L"music_videoBitRate", music, 0, NONE)##SEP \
PROP_DESC(music_framesPerThousandSeconds, false, VT_I4, 0, L"music_framesPerThousandSeconds", music, 0, NONE)##SEP \
PROP_DESC(music_keyFrameDistance, false, VT_I4, 0, L"music_keyFrameDistance", music, 0, NONE)##SEP \
PROP_DESC(music_encodingProfile, false, VT_BSTR, 255, L"music_encodingProfile", music, 0, NONE)##SEP \
PROP_DESC(music_artist_id, false, VT_I8, 0, L"music_artist_id", music, 0, NONE)##SEP \
PROP_DESC(music_genre_id, false, VT_I8, 0, L"music_genre_id", music, 0, NONE)##SEP \
PROP_DESC(music_album_id, false, VT_I8, 0, L"music_album_id", music, 0, NONE)##SEP \
PROP_DESC(album_id, false, VT_I8, 0, L"album_id", album, 0, NONE)##SEP \
PROP_DESC(album_title, true, VT_BSTR, 255, L"album_title", album, 0, NONE)##SEP \
PROP_DESC(album_artist_name, true, VT_BSTR, 255, L"album_artist_name", album, 0, NONE)##SEP \
PROP_DESC(artist_id, false, VT_I8, 0, L"artist_id", artist, 0, NONE)##SEP \
PROP_DESC(artist_name, true, VT_BSTR, 255, L"artist_name", artist, 0, NONE)##SEP \
PROP_DESC(genre_id, false, VT_I8, 0, L"genre_id", genre, 0, NONE)##SEP \
PROP_DESC(genre_name, true, VT_BSTR, 255, L"genre_name", genre, 0, NONE)##SEP \
PROP_DESC(series_id, false, VT_I8, 0, L"series_id", series, 0, NONE)##SEP \
PROP_DESC(series_name, true, VT_BSTR, 255, L"series_name", series, 0, NONE)##SEP \
PROP_DESC(video_id, false, VT_I8, 0, L"video_id", video, 0, NONE)##SEP \
PROP_DESC(video_title, false, VT_BSTR, 255, L"video_title", video, 0, NONE)##SEP \
PROP_DESC(video_logicalStorageID, false, VT_I4, 0, L"video_logicalStorageID", video, 0, NONE)##SEP \
PROP_DESC(video_formatCode, false, VT_I2, 0, L"video_formatCode", video, 0, NONE)##SEP \
PROP_DESC(video_sampleFormatCode, false, VT_I2, 0, L"video_sampleFormatCode", video, 0, NONE)##SEP \
PROP_DESC(video_isDeleted, false, VT_BOOL, 0, L"video_isDeleted", video, 0, NONE)##SEP \
PROP_DESC(video_isDRMProtected, false, VT_BOOL, 0, L"video_isDRMProtected", video, 0, NONE)##SEP \
PROP_DESC(video_changedTime, false, VT_DATE, 0, L"video_changedTime", video, 0, NONE)##SEP \
PROP_DESC(video_creationTime, false, VT_DATE, 0, L"video_creationTime", video, 0, NONE)##SEP \
PROP_DESC(video_fileURL, true, VT_BSTR, 260, L"video_fileURL", video, 0, NONE)##SEP \
PROP_DESC(video_logicalFileURL, false, VT_BSTR, 260, L"video_logicalFileURL", video, 0, NONE)##SEP \
PROP_DESC(video_fileSize, false, VT_I8, 0, L"video_fileSize", video, 0, NONE)##SEP \
PROP_DESC(video_fileTime, false, VT_DATE, 0, L"video_fileTime", video, 0, NONE)##SEP \
PROP_DESC(video_parentID, false, VT_I8, 0, L"video_parentID", video, 0, NONE)##SEP \
PROP_DESC(video_folderName, false, VT_BSTR, 260, L"video_folderName", video, 0, NONE)##SEP \
PROP_DESC(video_fileName, false, VT_BSTR, 260, L"video_fileName", video, 0, NONE)##SEP \
PROP_DESC(video_datasourceId, false, VT_I4, 0, L"video_datasourceId", video, 0, NONE)##SEP \
PROP_DESC(video_modifiedTime, false, VT_DATE, 0, L"video_modifiedTime", video, 0, NONE)##SEP \
PROP_DESC(video_copyright, false, VT_BSTR, 255, L"video_copyright", video, 0, NONE)##SEP \
PROP_DESC(video_userRating, false, VT_I2, 0, L"video_userRating", video, 0, NONE)##SEP \
PROP_DESC(video_sampleURL, false, VT_BSTR, 260, L"video_sampleURL", video, 0, NONE)##SEP \
PROP_DESC(video_sampleWidth, false, VT_I4, 0, L"video_sampleWidth", video, 0, NONE)##SEP \
PROP_DESC(video_sampleHeight, false, VT_I4, 0, L"video_sampleHeight", video, 0, NONE)##SEP \
PROP_DESC(video_width, false, VT_I4, 0, L"video_width", video, 0, NONE)##SEP \
PROP_DESC(video_height, false, VT_I4, 0, L"video_height", video, 0, NONE)##SEP \
PROP_DESC(video_trackNumber, false, VT_I2, 0, L"video_trackNumber", video, 0, NONE)##SEP \
PROP_DESC(video_composer, false, VT_BSTR, 255, L"video_composer", video, 0, NONE)##SEP \
PROP_DESC(video_description, false, VT_BSTR, 255, L"video_description", video, 0, NONE)##SEP \
PROP_DESC(video_duration, false, VT_I4, 0, L"video_duration", video, 0, NONE)##SEP \
PROP_DESC(video_parentalRating, false, VT_BSTR, 255, L"video_parentalRating", video, 0, NONE)##SEP \
PROP_DESC(video_originalReleaseDate, false, VT_DATE, 0, L"video_originalReleaseDate", video, 0, NONE)##SEP \
PROP_DESC(video_playCount, false, VT_I4, 0, L"video_playCount", video, 0, NONE)##SEP \
PROP_DESC(video_lastPlayedPosition, false, VT_I4, 0, L"video_lastPlayedPosition", video, 0, NONE)##SEP \
PROP_DESC(video_episodeNumber, false, VT_I4, 0, L"video_episodeNumber", video, 0, NONE)##SEP \
PROP_DESC(video_seasonNumber, false, VT_I4, 0, L"video_seasonNumber", video, 0, NONE)##SEP \
PROP_DESC(video_language, false, VT_BSTR, 255, L"video_language", video, 0, NONE)##SEP \
PROP_DESC(video_protocolInfo, false, VT_BSTR, 1, L"video_protocolInfo", video, 0, NONE)##SEP \
PROP_DESC(video_dlnaXML, false, VT_BSTR, 1, L"video_dlnaXML", video, 0, NONE)##SEP \
PROP_DESC(video_bitRateType, false, VT_I2, 0, L"video_bitRateType", video, 0, NONE)##SEP \
PROP_DESC(video_sampleRate, false, VT_I4, 0, L"video_sampleRate", video, 0, NONE)##SEP \
PROP_DESC(video_numChannels, false, VT_I2, 0, L"video_numChannels", video, 0, NONE)##SEP \
PROP_DESC(video_scanType, false, VT_I2, 0, L"video_scanType", video, 0, NONE)##SEP \
PROP_DESC(video_audioWaveCodec, false, VT_I4, 0, L"video_audioWaveCodec", video, 0, NONE)##SEP \
PROP_DESC(video_audioBitRate, false, VT_I4, 0, L"video_audioBitRate", video, 0, NONE)##SEP \
PROP_DESC(video_videoFourCCCodec, false, VT_I4, 0, L"video_videoFourCCCodec", video, 0, NONE)##SEP \
PROP_DESC(video_videoBitRate, false, VT_I4, 0, L"video_videoBitRate", video, 0, NONE)##SEP \
PROP_DESC(video_framesPerThousandSeconds, false, VT_I4, 0, L"video_framesPerThousandSeconds", video, 0, NONE)##SEP \
PROP_DESC(video_keyFrameDistance, false, VT_I4, 0, L"video_keyFrameDistance", video, 0, NONE)##SEP \
PROP_DESC(video_encodingProfile, false, VT_BSTR, 255, L"video_encodingProfile", video, 0, NONE)##SEP \
PROP_DESC(video_artist_id, false, VT_I8, 0, L"video_artist_id", video, 0, NONE)##SEP \
PROP_DESC(video_genre_id, false, VT_I8, 0, L"video_genre_id", video, 0, NONE)##SEP \
PROP_DESC(video_album_id, false, VT_I8, 0, L"video_album_id", video, 0, NONE)##SEP \
PROP_DESC(video_series_id, false, VT_I8, 0, L"video_series_id", video, 0, NONE)##SEP \
PROP_DESC(photo_id, false, VT_I8, 0, L"photo_id", photo, 0, NONE)##SEP \
PROP_DESC(photo_title, false, VT_BSTR, 255, L"photo_title", photo, 0, NONE)##SEP \
PROP_DESC(photo_logicalStorageID, false, VT_I4, 0, L"photo_logicalStorageID", photo, 0, NONE)##SEP \
PROP_DESC(photo_formatCode, false, VT_I2, 0, L"photo_formatCode", photo, 0, NONE)##SEP \
PROP_DESC(photo_sampleFormatCode, false, VT_I2, 0, L"photo_sampleFormatCode", photo, 0, NONE)##SEP \
PROP_DESC(photo_isDeleted, false, VT_BOOL, 0, L"photo_isDeleted", photo, 0, NONE)##SEP \
PROP_DESC(photo_isDRMProtected, false, VT_BOOL, 0, L"photo_isDRMProtected", photo, 0, NONE)##SEP \
PROP_DESC(photo_changedTime, false, VT_DATE, 0, L"photo_changedTime", photo, 0, NONE)##SEP \
PROP_DESC(photo_creationTime, false, VT_DATE, 0, L"photo_creationTime", photo, 0, NONE)##SEP \
PROP_DESC(photo_fileURL, true, VT_BSTR, 260, L"photo_fileURL", photo, 0, NONE)##SEP \
PROP_DESC(photo_logicalFileURL, false, VT_BSTR, 260, L"photo_logicalFileURL", photo, 0, NONE)##SEP \
PROP_DESC(photo_fileSize, false, VT_I8, 0, L"photo_fileSize", photo, 0, NONE)##SEP \
PROP_DESC(photo_fileTime, false, VT_DATE, 0, L"photo_fileTime", photo, 0, NONE)##SEP \
PROP_DESC(photo_parentID, false, VT_I8, 0, L"photo_parentID", photo, 0, NONE)##SEP \
PROP_DESC(photo_folderName, false, VT_BSTR, 260, L"photo_folderName", photo, 0, NONE)##SEP \
PROP_DESC(photo_fileName, false, VT_BSTR, 260, L"photo_fileName", photo, 0, NONE)##SEP \
PROP_DESC(photo_datasourceId, false, VT_I4, 0, L"photo_datasourceId", photo, 0, NONE)##SEP \
PROP_DESC(photo_modifiedTime, false, VT_DATE, 0, L"photo_modifiedTime", photo, 0, NONE)##SEP \
PROP_DESC(photo_copyright, false, VT_BSTR, 255, L"photo_copyright", photo, 0, NONE)##SEP \
PROP_DESC(photo_userRating, false, VT_I2, 0, L"photo_userRating", photo, 0, NONE)##SEP \
PROP_DESC(photo_sampleURL, false, VT_BSTR, 260, L"photo_sampleURL", photo, 0, NONE)##SEP \
PROP_DESC(photo_sampleWidth, false, VT_I4, 0, L"photo_sampleWidth", photo, 0, NONE)##SEP \
PROP_DESC(photo_sampleHeight, false, VT_I4, 0, L"photo_sampleHeight", photo, 0, NONE)##SEP \
PROP_DESC(photo_author, false, VT_BSTR, 255, L"photo_author", photo, 0, NONE)##SEP \
PROP_DESC(photo_width, false, VT_I4, 0, L"photo_width", photo, 0, NONE)##SEP \
PROP_DESC(photo_height, false, VT_I4, 0, L"photo_height", photo, 0, NONE)##SEP \
PROP_DESC(photo_description, false, VT_BSTR, 255, L"photo_description", photo, 0, NONE)##SEP \
PROP_DESC(photo_dateTaken, false, VT_DATE, 0, L"photo_dateTaken", photo, 0, NONE)##SEP \
PROP_DESC(photo_monthTaken, false, VT_I4, 0, L"photo_monthTaken", photo, 0, NONE)##SEP \
PROP_DESC(photo_yearTaken, false, VT_I4, 0, L"photo_yearTaken", photo, 0, NONE)##SEP \
PROP_DESC(photo_location, false, VT_BSTR, 255, L"photo_location", photo, 0, NONE)##SEP \
PROP_DESC(photo_category, false, VT_BSTR, 255, L"photo_category", photo, 0, NONE)##SEP \
PROP_DESC(photo_protocolInfo, false, VT_BSTR, 1, L"photo_protocolInfo", photo, 0, NONE)##SEP \
PROP_DESC(photo_dlnaXML, false, VT_BSTR, 1, L"photo_dlnaXML", photo, 0, NONE)##SEP \
PROP_DESC(photo_useCount, false, VT_I4, 0, L"photo_useCount", photo, 0, NONE)##SEP \
PROP_DESC(photo_day_id, false, VT_I8, 0, L"photo_day_id", photo, 0, NONE)##SEP \
PROP_DESC(day_id, false, VT_I8, 0, L"day_id", day, 0, NONE)##SEP \
PROP_DESC(day_name, true, VT_BSTR, 16, L"day_name", day, 0, NONE)##SEP \
PROP_DESC(day_month_id, false, VT_I8, 0, L"day_month_id", day, 0, NONE)##SEP \
PROP_DESC(month_id, false, VT_I8, 0, L"month_id", month, 0, NONE)##SEP \
PROP_DESC(month_name, true, VT_BSTR, 16, L"month_name", month, 0, NONE)##SEP \
PROP_DESC(month_year_id, false, VT_I8, 0, L"month_year_id", month, 0, NONE)##SEP \
PROP_DESC(year_id, false, VT_I8, 0, L"year_id", year, 0, NONE)##SEP \
PROP_DESC(year_name, true, VT_BSTR, 8, L"year_name", year, 0, NONE)##SEP \
PROP_DESC(playlistEntry_id, false, VT_I8, 0, L"playlistEntry_id", playlistEntry, 0, NONE)##SEP \
PROP_DESC(playlistEntry_title, false, VT_BSTR, 255, L"playlistEntry_title", playlistEntry, 0, NONE)##SEP \
PROP_DESC(playlistEntry_track, true, VT_I2, 0, L"playlistEntry_track", playlistEntry, 0, NONE)##SEP \
PROP_DESC(playlistEntry_trackID, false, VT_I8, 0, L"playlistEntry_trackID", playlistEntry, 0, NONE)##SEP \
PROP_DESC(playlistEntry_trackEntity, false, VT_I2, 0, L"playlistEntry_trackEntity", playlistEntry, 0, NONE)##SEP \
PROP_DESC(playlistEntry_playlist_id, false, VT_I8, 0, L"playlistEntry_playlist_id", playlistEntry, 0, NONE)##SEP \
PROP_DESC(generic_referenceEntry_id, false, VT_I8, 0, L"generic_referenceEntry_id", generic_referenceEntry, 0, NONE)##SEP \
PROP_DESC(generic_referenceEntry_title, false, VT_BSTR, 255, L"generic_referenceEntry_title", generic_referenceEntry, 0, NONE)##SEP \
PROP_DESC(generic_referenceEntry_track, true, VT_I2, 0, L"generic_referenceEntry_track", generic_referenceEntry, 0, NONE)##SEP \
PROP_DESC(generic_referenceEntry_refID, false, VT_I8, 0, L"generic_referenceEntry_refID", generic_referenceEntry, 0, NONE)##SEP \
PROP_DESC(generic_referenceEntry_refEntity, false, VT_I2, 0, L"generic_referenceEntry_refEntity", generic_referenceEntry, 0, NONE)##SEP \
PROP_DESC(generic_referenceEntry_generic_id, false, VT_I8, 0, L"generic_referenceEntry_generic_id", generic_referenceEntry, 0, NONE)##SEP \
PROP_DESC(albumArt_referenceEntry_id, false, VT_I8, 0, L"albumArt_referenceEntry_id", albumArt_referenceEntry, 0, NONE)##SEP \
PROP_DESC(albumArt_referenceEntry_title, false, VT_BSTR, 255, L"albumArt_referenceEntry_title", albumArt_referenceEntry, 0, NONE)##SEP \
PROP_DESC(albumArt_referenceEntry_track, true, VT_I2, 0, L"albumArt_referenceEntry_track", albumArt_referenceEntry, 0, NONE)##SEP \
PROP_DESC(albumArt_referenceEntry_refID, false, VT_I8, 0, L"albumArt_referenceEntry_refID", albumArt_referenceEntry, 0, NONE)##SEP \
PROP_DESC(albumArt_referenceEntry_refEntity, false, VT_I2, 0, L"albumArt_referenceEntry_refEntity", albumArt_referenceEntry, 0, NONE)##SEP \
PROP_DESC(albumArt_referenceEntry_albumArt_id, false, VT_I8, 0, L"albumArt_referenceEntry_albumArt_id", albumArt_referenceEntry, 0, NONE)##SEP \
PROP_DESC(playlist_id, false, VT_I8, 0, L"playlist_id", playlist, 0, NONE)##SEP \
PROP_DESC(playlist_title, false, VT_BSTR, 255, L"playlist_title", playlist, 0, NONE)##SEP \
PROP_DESC(playlist_logicalStorageID, false, VT_I4, 0, L"playlist_logicalStorageID", playlist, 0, NONE)##SEP \
PROP_DESC(playlist_formatCode, false, VT_I2, 0, L"playlist_formatCode", playlist, 0, NONE)##SEP \
PROP_DESC(playlist_sampleFormatCode, false, VT_I2, 0, L"playlist_sampleFormatCode", playlist, 0, NONE)##SEP \
PROP_DESC(playlist_isDeleted, false, VT_BOOL, 0, L"playlist_isDeleted", playlist, 0, NONE)##SEP \
PROP_DESC(playlist_changedTime, false, VT_DATE, 0, L"playlist_changedTime", playlist, 0, NONE)##SEP \
PROP_DESC(playlist_creationTime, false, VT_DATE, 0, L"playlist_creationTime", playlist, 0, NONE)##SEP \
PROP_DESC(playlist_fileURL, true, VT_BSTR, 260, L"playlist_fileURL", playlist, 0, NONE)##SEP \
PROP_DESC(playlist_logicalFileURL, false, VT_BSTR, 260, L"playlist_logicalFileURL", playlist, 0, NONE)##SEP \
PROP_DESC(playlist_fileSize, false, VT_I8, 0, L"playlist_fileSize", playlist, 0, NONE)##SEP \
PROP_DESC(playlist_fileTime, false, VT_DATE, 0, L"playlist_fileTime", playlist, 0, NONE)##SEP \
PROP_DESC(playlist_parentID, false, VT_I8, 0, L"playlist_parentID", playlist, 0, NONE)##SEP \
PROP_DESC(playlist_folderName, false, VT_BSTR, 260, L"playlist_folderName", playlist, 0, NONE)##SEP \
PROP_DESC(playlist_fileName, false, VT_BSTR, 260, L"playlist_fileName", playlist, 0, NONE)##SEP \
PROP_DESC(playlist_useCount, false, VT_I4, 0, L"playlist_useCount", playlist, 0, NONE)##SEP \
PROP_DESC(albumArt_id, false, VT_I8, 0, L"albumArt_id", albumArt, 0, NONE)##SEP \
PROP_DESC(albumArt_title, false, VT_BSTR, 255, L"albumArt_title", albumArt, 0, NONE)##SEP \
PROP_DESC(albumArt_logicalStorageID, false, VT_I4, 0, L"albumArt_logicalStorageID", albumArt, 0, NONE)##SEP \
PROP_DESC(albumArt_formatCode, false, VT_I2, 0, L"albumArt_formatCode", albumArt, 0, NONE)##SEP \
PROP_DESC(albumArt_isDeleted, false, VT_BOOL, 0, L"albumArt_isDeleted", albumArt, 0, NONE)##SEP \
PROP_DESC(albumArt_changedTime, false, VT_DATE, 0, L"albumArt_changedTime", albumArt, 0, NONE)##SEP \
PROP_DESC(albumArt_creationTime, false, VT_DATE, 0, L"albumArt_creationTime", albumArt, 0, NONE)##SEP \
PROP_DESC(albumArt_fileURL, true, VT_BSTR, 260, L"albumArt_fileURL", albumArt, 0, NONE)##SEP \
PROP_DESC(albumArt_logicalFileURL, false, VT_BSTR, 260, L"albumArt_logicalFileURL", albumArt, 0, NONE)##SEP \
PROP_DESC(albumArt_fileSize, false, VT_I8, 0, L"albumArt_fileSize", albumArt, 0, NONE)##SEP \
PROP_DESC(albumArt_fileTime, false, VT_DATE, 0, L"albumArt_fileTime", albumArt, 0, NONE)##SEP \
PROP_DESC(albumArt_parentID, false, VT_I8, 0, L"albumArt_parentID", albumArt, 0, NONE)##SEP \
PROP_DESC(albumArt_folderName, false, VT_BSTR, 260, L"albumArt_folderName", albumArt, 0, NONE)##SEP \
PROP_DESC(albumArt_fileName, false, VT_BSTR, 260, L"albumArt_fileName", albumArt, 0, NONE)##SEP \
PROP_DESC(albumArt_purchaseFlag, false, VT_BOOL, 0, L"albumArt_purchaseFlag", albumArt, 0, NONE)##SEP \
PROP_DESC(albumArt_userRating, false, VT_I2, 0, L"albumArt_userRating", albumArt, 0, NONE)##SEP \
PROP_DESC(albumArt_sampleFormatCode, false, VT_I2, 0, L"albumArt_sampleFormatCode", albumArt, 0, NONE)##SEP \
PROP_DESC(albumArt_sampleURL, false, VT_BSTR, 260, L"albumArt_sampleURL", albumArt, 0, NONE)##SEP \
PROP_DESC(albumArt_sampleWidth, false, VT_I4, 0, L"albumArt_sampleWidth", albumArt, 0, NONE)##SEP \
PROP_DESC(albumArt_sampleHeight, false, VT_I4, 0, L"albumArt_sampleHeight", albumArt, 0, NONE)##SEP \
PROP_DESC(albumArt_useCount, false, VT_I4, 0, L"albumArt_useCount", albumArt, 0, NONE)##SEP \
PROP_DESC(albumArt_genre_id, false, VT_I8, 0, L"albumArt_genre_id", albumArt, 0, NONE)##SEP \
PROP_DESC(albumArt_album_id, false, VT_I8, 0, L"albumArt_album_id", albumArt, 0, NONE)##SEP \
PROP_DESC(generic_id, false, VT_I8, 0, L"generic_id", generic, 0, NONE)##SEP \
PROP_DESC(generic_title, false, VT_BSTR, 255, L"generic_title", generic, 0, NONE)##SEP \
PROP_DESC(generic_logicalStorageID, false, VT_I4, 0, L"generic_logicalStorageID", generic, 0, NONE)##SEP \
PROP_DESC(generic_formatCode, false, VT_I2, 0, L"generic_formatCode", generic, 0, NONE)##SEP \
PROP_DESC(generic_sampleFormatCode, false, VT_I2, 0, L"generic_sampleFormatCode", generic, 0, NONE)##SEP \
PROP_DESC(generic_isDeleted, false, VT_BOOL, 0, L"generic_isDeleted", generic, 0, NONE)##SEP \
PROP_DESC(generic_isDRMProtected, false, VT_BOOL, 0, L"generic_isDRMProtected", generic, 0, NONE)##SEP \
PROP_DESC(generic_changedTime, false, VT_DATE, 0, L"generic_changedTime", generic, 0, NONE)##SEP \
PROP_DESC(generic_creationTime, false, VT_DATE, 0, L"generic_creationTime", generic, 0, NONE)##SEP \
PROP_DESC(generic_fileURL, true, VT_BSTR, 260, L"generic_fileURL", generic, 0, NONE)##SEP \
PROP_DESC(generic_logicalFileURL, false, VT_BSTR, 260, L"generic_logicalFileURL", generic, 0, NONE)##SEP \
PROP_DESC(generic_fileSize, false, VT_I8, 0, L"generic_fileSize", generic, 0, NONE)##SEP \
PROP_DESC(generic_fileTime, false, VT_DATE, 0, L"generic_fileTime", generic, 0, NONE)##SEP \
PROP_DESC(generic_folderName, false, VT_BSTR, 260, L"generic_folderName", generic, 0, NONE)##SEP \
PROP_DESC(generic_fileName, false, VT_BSTR, 260, L"generic_fileName", generic, 0, NONE)##SEP \
PROP_DESC(generic_parentID, false, VT_I8, 0, L"generic_parentID", generic, 0, NONE)##SEP \
PROP_DESC(generic_isDirectory, false, VT_BOOL, 0, L"generic_isDirectory", generic, 0, NONE)##SEP \
PROP_DESC(parseQueue_id, false, VT_I8, 0, L"parseQueue_id", parseQueue, 0, NONE)##SEP \
PROP_DESC(parseQueue_inputURL, true, VT_BSTR, 260, L"parseQueue_inputURL", parseQueue, 0, NONE)##SEP \
PROP_DESC(parseQueue_fileSize, false, VT_I8, 0, L"parseQueue_fileSize", parseQueue, 0, NONE)##SEP \
PROP_DESC(parseQueue_fileTime, false, VT_DATE, 0, L"parseQueue_fileTime", parseQueue, 0, NONE)##SEP \
PROP_DESC(parseQueue_outputURL, false, VT_BSTR, 260, L"parseQueue_outputURL", parseQueue, 0, NONE)##SEP \
PROP_DESC(parseQueue_thumbnailURL, false, VT_BSTR, 260, L"parseQueue_thumbnailURL", parseQueue, 0, NONE)##SEP \
PROP_DESC(parseQueue_metadataState, false, VT_I2, 0, L"parseQueue_metadataState", parseQueue, 0, NONE)##SEP \
PROP_DESC(parseQueue_thumbnailState, false, VT_I2, 0, L"parseQueue_thumbnailState", parseQueue, 0, NONE)##SEP \
PROP_DESC(music_artist_id2, false, VT_I8, 0, L"artist_id", music_artist, 1, music_artist)##SEP \
PROP_DESC(music_artist_name, true, VT_BSTR, 255, L"artist_name", music_artist, 1, music_artist)##SEP \
PROP_DESC(music_genre_id2, false, VT_I8, 0, L"genre_id", music_genre, 1, music_genre)##SEP \
PROP_DESC(music_genre_name, true, VT_BSTR, 255, L"genre_name", music_genre, 1, music_genre)##SEP \
PROP_DESC(music_album_id2, false, VT_I8, 0, L"album_id", music_album, 1, music_album)##SEP \
PROP_DESC(music_album_title, true, VT_BSTR, 255, L"album_title", music_album, 1, music_album)##SEP \
PROP_DESC(music_album_artist_name, true, VT_BSTR, 255, L"album_artist_name", music_album, 1, music_album)##SEP \
PROP_DESC(video_artist_id2, false, VT_I8, 0, L"artist_id", video_artist, 1, video_artist)##SEP \
PROP_DESC(video_artist_name, true, VT_BSTR, 255, L"artist_name", video_artist, 1, video_artist)##SEP \
PROP_DESC(video_genre_id2, false, VT_I8, 0, L"genre_id", video_genre, 1, video_genre)##SEP \
PROP_DESC(video_genre_name, true, VT_BSTR, 255, L"genre_name", video_genre, 1, video_genre)##SEP \
PROP_DESC(video_album_id2, false, VT_I8, 0, L"album_id", video_album, 1, video_album)##SEP \
PROP_DESC(video_album_title, true, VT_BSTR, 255, L"album_title", video_album, 1, video_album)##SEP \
PROP_DESC(video_album_artist_name, true, VT_BSTR, 255, L"album_artist_name", video_album, 1, video_album)##SEP \
PROP_DESC(video_series_id2, false, VT_I8, 0, L"series_id", video_series, 1, video_series)##SEP \
PROP_DESC(video_series_name, true, VT_BSTR, 255, L"series_name", video_series, 1, video_series)##SEP \
PROP_DESC(photo_day_id2, false, VT_I8, 0, L"day_id", photo_day, 1, photo_day)##SEP \
PROP_DESC(photo_day_name, true, VT_BSTR, 16, L"day_name", photo_day, 1, photo_day)##SEP \
PROP_DESC(photo_day_month_id, false, VT_I8, 0, L"day_month_id", photo_day, 1, photo_day)##SEP \
PROP_DESC(photo_day_month_id2, false, VT_I8, 0, L"month_id", photo_day_month, 2, photo_day_month)##SEP \
PROP_DESC(photo_day_month_name, true, VT_BSTR, 16, L"month_name", photo_day_month, 2, photo_day_month)##SEP \
PROP_DESC(photo_day_month_year_id, false, VT_I8, 0, L"month_year_id", photo_day_month, 2, photo_day_month)##SEP \
PROP_DESC(photo_day_month_year_id2, false, VT_I8, 0, L"year_id", photo_day_month_year, 3, photo_day_month_year)##SEP \
PROP_DESC(photo_day_month_year_name, true, VT_BSTR, 8, L"year_name", photo_day_month_year, 3, photo_day_month_year)##SEP \
PROP_DESC(playlistEntry_playlist_id2, false, VT_I8, 0, L"playlist_id", playlistEntry_playlist, 1, playlistEntry_playlist)##SEP \
PROP_DESC(playlistEntry_playlist_title, false, VT_BSTR, 255, L"playlist_title", playlistEntry_playlist, 1, playlistEntry_playlist)##SEP \
PROP_DESC(playlistEntry_playlist_logicalStorageID, false, VT_I4, 0, L"playlist_logicalStorageID", playlistEntry_playlist, 1, playlistEntry_playlist)##SEP \
PROP_DESC(playlistEntry_playlist_formatCode, false, VT_I2, 0, L"playlist_formatCode", playlistEntry_playlist, 1, playlistEntry_playlist)##SEP \
PROP_DESC(playlistEntry_playlist_sampleFormatCode, false, VT_I2, 0, L"playlist_sampleFormatCode", playlistEntry_playlist, 1, playlistEntry_playlist)##SEP \
PROP_DESC(playlistEntry_playlist_isDeleted, false, VT_BOOL, 0, L"playlist_isDeleted", playlistEntry_playlist, 1, playlistEntry_playlist)##SEP \
PROP_DESC(playlistEntry_playlist_changedTime, false, VT_DATE, 0, L"playlist_changedTime", playlistEntry_playlist, 1, playlistEntry_playlist)##SEP \
PROP_DESC(playlistEntry_playlist_creationTime, false, VT_DATE, 0, L"playlist_creationTime", playlistEntry_playlist, 1, playlistEntry_playlist)##SEP \
PROP_DESC(playlistEntry_playlist_fileURL, true, VT_BSTR, 260, L"playlist_fileURL", playlistEntry_playlist, 1, playlistEntry_playlist)##SEP \
PROP_DESC(playlistEntry_playlist_logicalFileURL, false, VT_BSTR, 260, L"playlist_logicalFileURL", playlistEntry_playlist, 1, playlistEntry_playlist)##SEP \
PROP_DESC(playlistEntry_playlist_fileSize, false, VT_I8, 0, L"playlist_fileSize", playlistEntry_playlist, 1, playlistEntry_playlist)##SEP \
PROP_DESC(playlistEntry_playlist_fileTime, false, VT_DATE, 0, L"playlist_fileTime", playlistEntry_playlist, 1, playlistEntry_playlist)##SEP \
PROP_DESC(playlistEntry_playlist_parentID, false, VT_I8, 0, L"playlist_parentID", playlistEntry_playlist, 1, playlistEntry_playlist)##SEP \
PROP_DESC(playlistEntry_playlist_folderName, false, VT_BSTR, 260, L"playlist_folderName", playlistEntry_playlist, 1, playlistEntry_playlist)##SEP \
PROP_DESC(playlistEntry_playlist_fileName, false, VT_BSTR, 260, L"playlist_fileName", playlistEntry_playlist, 1, playlistEntry_playlist)##SEP \
PROP_DESC(playlistEntry_playlist_useCount, false, VT_I4, 0, L"playlist_useCount", playlistEntry_playlist, 1, playlistEntry_playlist)##SEP \
PROP_DESC(generic_referenceEntry_generic_id2, false, VT_I8, 0, L"generic_id", generic_referenceEntry_generic, 1, generic_referenceEntry_generic)##SEP \
PROP_DESC(generic_referenceEntry_generic_title, false, VT_BSTR, 255, L"generic_title", generic_referenceEntry_generic, 1, generic_referenceEntry_generic)##SEP \
PROP_DESC(generic_referenceEntry_generic_logicalStorageID, false, VT_I4, 0, L"generic_logicalStorageID", generic_referenceEntry_generic, 1, generic_referenceEntry_generic)##SEP \
PROP_DESC(generic_referenceEntry_generic_formatCode, false, VT_I2, 0, L"generic_formatCode", generic_referenceEntry_generic, 1, generic_referenceEntry_generic)##SEP \
PROP_DESC(generic_referenceEntry_generic_sampleFormatCode, false, VT_I2, 0, L"generic_sampleFormatCode", generic_referenceEntry_generic, 1, generic_referenceEntry_generic)##SEP \
PROP_DESC(generic_referenceEntry_generic_isDeleted, false, VT_BOOL, 0, L"generic_isDeleted", generic_referenceEntry_generic, 1, generic_referenceEntry_generic)##SEP \
PROP_DESC(generic_referenceEntry_generic_isDRMProtected, false, VT_BOOL, 0, L"generic_isDRMProtected", generic_referenceEntry_generic, 1, generic_referenceEntry_generic)##SEP \
PROP_DESC(generic_referenceEntry_generic_changedTime, false, VT_DATE, 0, L"generic_changedTime", generic_referenceEntry_generic, 1, generic_referenceEntry_generic)##SEP \
PROP_DESC(generic_referenceEntry_generic_creationTime, false, VT_DATE, 0, L"generic_creationTime", generic_referenceEntry_generic, 1, generic_referenceEntry_generic)##SEP \
PROP_DESC(generic_referenceEntry_generic_fileURL, true, VT_BSTR, 260, L"generic_fileURL", generic_referenceEntry_generic, 1, generic_referenceEntry_generic)##SEP \
PROP_DESC(generic_referenceEntry_generic_logicalFileURL, false, VT_BSTR, 260, L"generic_logicalFileURL", generic_referenceEntry_generic, 1, generic_referenceEntry_generic)##SEP \
PROP_DESC(generic_referenceEntry_generic_fileSize, false, VT_I8, 0, L"generic_fileSize", generic_referenceEntry_generic, 1, generic_referenceEntry_generic)##SEP \
PROP_DESC(generic_referenceEntry_generic_fileTime, false, VT_DATE, 0, L"generic_fileTime", generic_referenceEntry_generic, 1, generic_referenceEntry_generic)##SEP \
PROP_DESC(generic_referenceEntry_generic_folderName, false, VT_BSTR, 260, L"generic_folderName", generic_referenceEntry_generic, 1, generic_referenceEntry_generic)##SEP \
PROP_DESC(generic_referenceEntry_generic_fileName, false, VT_BSTR, 260, L"generic_fileName", generic_referenceEntry_generic, 1, generic_referenceEntry_generic)##SEP \
PROP_DESC(generic_referenceEntry_generic_parentID, false, VT_I8, 0, L"generic_parentID", generic_referenceEntry_generic, 1, generic_referenceEntry_generic)##SEP \
PROP_DESC(generic_referenceEntry_generic_isDirectory, false, VT_BOOL, 0, L"generic_isDirectory", generic_referenceEntry_generic, 1, generic_referenceEntry_generic)##SEP \
PROP_DESC(albumArt_referenceEntry_albumArt_id2, false, VT_I8, 0, L"albumArt_id", albumArt_referenceEntry_albumArt, 1, albumArt_referenceEntry_albumArt)##SEP \
PROP_DESC(albumArt_referenceEntry_albumArt_title, false, VT_BSTR, 255, L"albumArt_title", albumArt_referenceEntry_albumArt, 1, albumArt_referenceEntry_albumArt)##SEP \
PROP_DESC(albumArt_referenceEntry_albumArt_logicalStorageID, false, VT_I4, 0, L"albumArt_logicalStorageID", albumArt_referenceEntry_albumArt, 1, albumArt_referenceEntry_albumArt)##SEP \
PROP_DESC(albumArt_referenceEntry_albumArt_formatCode, false, VT_I2, 0, L"albumArt_formatCode", albumArt_referenceEntry_albumArt, 1, albumArt_referenceEntry_albumArt)##SEP \
PROP_DESC(albumArt_referenceEntry_albumArt_isDeleted, false, VT_BOOL, 0, L"albumArt_isDeleted", albumArt_referenceEntry_albumArt, 1, albumArt_referenceEntry_albumArt)##SEP \
PROP_DESC(albumArt_referenceEntry_albumArt_changedTime, false, VT_DATE, 0, L"albumArt_changedTime", albumArt_referenceEntry_albumArt, 1, albumArt_referenceEntry_albumArt)##SEP \
PROP_DESC(albumArt_referenceEntry_albumArt_creationTime, false, VT_DATE, 0, L"albumArt_creationTime", albumArt_referenceEntry_albumArt, 1, albumArt_referenceEntry_albumArt)##SEP \
PROP_DESC(albumArt_referenceEntry_albumArt_fileURL, true, VT_BSTR, 260, L"albumArt_fileURL", albumArt_referenceEntry_albumArt, 1, albumArt_referenceEntry_albumArt)##SEP \
PROP_DESC(albumArt_referenceEntry_albumArt_logicalFileURL, false, VT_BSTR, 260, L"albumArt_logicalFileURL", albumArt_referenceEntry_albumArt, 1, albumArt_referenceEntry_albumArt)##SEP \
PROP_DESC(albumArt_referenceEntry_albumArt_fileSize, false, VT_I8, 0, L"albumArt_fileSize", albumArt_referenceEntry_albumArt, 1, albumArt_referenceEntry_albumArt)##SEP \
PROP_DESC(albumArt_referenceEntry_albumArt_fileTime, false, VT_DATE, 0, L"albumArt_fileTime", albumArt_referenceEntry_albumArt, 1, albumArt_referenceEntry_albumArt)##SEP \
PROP_DESC(albumArt_referenceEntry_albumArt_parentID, false, VT_I8, 0, L"albumArt_parentID", albumArt_referenceEntry_albumArt, 1, albumArt_referenceEntry_albumArt)##SEP \
PROP_DESC(albumArt_referenceEntry_albumArt_folderName, false, VT_BSTR, 260, L"albumArt_folderName", albumArt_referenceEntry_albumArt, 1, albumArt_referenceEntry_albumArt)##SEP \
PROP_DESC(albumArt_referenceEntry_albumArt_fileName, false, VT_BSTR, 260, L"albumArt_fileName", albumArt_referenceEntry_albumArt, 1, albumArt_referenceEntry_albumArt)##SEP \
PROP_DESC(albumArt_referenceEntry_albumArt_purchaseFlag, false, VT_BOOL, 0, L"albumArt_purchaseFlag", albumArt_referenceEntry_albumArt, 1, albumArt_referenceEntry_albumArt)##SEP \
PROP_DESC(albumArt_referenceEntry_albumArt_userRating, false, VT_I2, 0, L"albumArt_userRating", albumArt_referenceEntry_albumArt, 1, albumArt_referenceEntry_albumArt)##SEP \
PROP_DESC(albumArt_referenceEntry_albumArt_sampleFormatCode, false, VT_I2, 0, L"albumArt_sampleFormatCode", albumArt_referenceEntry_albumArt, 1, albumArt_referenceEntry_albumArt)##SEP \
PROP_DESC(albumArt_referenceEntry_albumArt_sampleURL, false, VT_BSTR, 260, L"albumArt_sampleURL", albumArt_referenceEntry_albumArt, 1, albumArt_referenceEntry_albumArt)##SEP \
PROP_DESC(albumArt_referenceEntry_albumArt_sampleWidth, false, VT_I4, 0, L"albumArt_sampleWidth", albumArt_referenceEntry_albumArt, 1, albumArt_referenceEntry_albumArt)##SEP \
PROP_DESC(albumArt_referenceEntry_albumArt_sampleHeight, false, VT_I4, 0, L"albumArt_sampleHeight", albumArt_referenceEntry_albumArt, 1, albumArt_referenceEntry_albumArt)##SEP \
PROP_DESC(albumArt_referenceEntry_albumArt_useCount, false, VT_I4, 0, L"albumArt_useCount", albumArt_referenceEntry_albumArt, 1, albumArt_referenceEntry_albumArt)##SEP \
PROP_DESC(albumArt_referenceEntry_albumArt_genre_id, false, VT_I8, 0, L"albumArt_genre_id", albumArt_referenceEntry_albumArt, 1, albumArt_referenceEntry_albumArt)##SEP \
PROP_DESC(albumArt_referenceEntry_albumArt_album_id, false, VT_I8, 0, L"albumArt_album_id", albumArt_referenceEntry_albumArt, 1, albumArt_referenceEntry_albumArt)##SEP \
PROP_DESC(albumArt_referenceEntry_albumArt_genre_id2, false, VT_I8, 0, L"genre_id", albumArt_referenceEntry_albumArt_genre, 2, albumArt_referenceEntry_albumArt_genre)##SEP \
PROP_DESC(albumArt_referenceEntry_albumArt_genre_name, true, VT_BSTR, 255, L"genre_name", albumArt_referenceEntry_albumArt_genre, 2, albumArt_referenceEntry_albumArt_genre)##SEP \
PROP_DESC(albumArt_referenceEntry_albumArt_album_id2, false, VT_I8, 0, L"album_id", albumArt_referenceEntry_albumArt_album, 2, albumArt_referenceEntry_albumArt_album)##SEP \
PROP_DESC(albumArt_referenceEntry_albumArt_album_title, true, VT_BSTR, 255, L"album_title", albumArt_referenceEntry_albumArt_album, 2, albumArt_referenceEntry_albumArt_album)##SEP \
PROP_DESC(albumArt_referenceEntry_albumArt_album_artist_name, true, VT_BSTR, 255, L"album_artist_name", albumArt_referenceEntry_albumArt_album, 2, albumArt_referenceEntry_albumArt_album)##SEP \
PROP_DESC(albumArt_genre_id2, false, VT_I8, 0, L"genre_id", albumArt_genre, 1, albumArt_genre)##SEP \
PROP_DESC(albumArt_genre_name, true, VT_BSTR, 255, L"genre_name", albumArt_genre, 1, albumArt_genre)##SEP \
PROP_DESC(albumArt_album_id2, false, VT_I8, 0, L"album_id", albumArt_album, 1, albumArt_album)##SEP \
PROP_DESC(albumArt_album_title, true, VT_BSTR, 255, L"album_title", albumArt_album, 1, albumArt_album)##SEP \
PROP_DESC(albumArt_album_artist_name, true, VT_BSTR, 255, L"album_artist_name", albumArt_album, 1, albumArt_album)##SEP \
PROP_DESC(MAX, false, VT_EMPTY, 0, L"", NONE, 0, NONE)

#define JOIN_STATIC(JOIN_DESC,SEP) \
JOIN_DESC(NONE, NONE, NONE)##SEP \
JOIN_DESC(music_artist, music_artist_id, music_artist_id2)##SEP \
JOIN_DESC(music_genre, music_genre_id, music_genre_id2)##SEP \
JOIN_DESC(music_album, music_album_id, music_album_id2)##SEP \
JOIN_DESC(video_artist, video_artist_id, video_artist_id2)##SEP \
JOIN_DESC(video_genre, video_genre_id, video_genre_id2)##SEP \
JOIN_DESC(video_album, video_album_id, video_album_id2)##SEP \
JOIN_DESC(video_series, video_series_id, video_series_id2)##SEP \
JOIN_DESC(photo_day, photo_day_id, photo_day_id2)##SEP \
JOIN_DESC(photo_day_month, photo_day_month_id, photo_day_month_id2)##SEP \
JOIN_DESC(photo_day_month_year, photo_day_month_year_id, photo_day_month_year_id2)##SEP \
JOIN_DESC(playlistEntry_playlist, playlistEntry_playlist_id, playlistEntry_playlist_id2)##SEP \
JOIN_DESC(generic_referenceEntry_generic, generic_referenceEntry_generic_id, generic_referenceEntry_generic_id2)##SEP \
JOIN_DESC(albumArt_referenceEntry_albumArt, albumArt_referenceEntry_albumArt_id, albumArt_referenceEntry_albumArt_id2)##SEP \
JOIN_DESC(albumArt_referenceEntry_albumArt_genre, albumArt_referenceEntry_albumArt_genre_id, albumArt_referenceEntry_albumArt_genre_id2)##SEP \
JOIN_DESC(albumArt_referenceEntry_albumArt_album, albumArt_referenceEntry_albumArt_album_id, albumArt_referenceEntry_albumArt_album_id2)##SEP \
JOIN_DESC(albumArt_genre, albumArt_genre_id, albumArt_genre_id2)##SEP \
JOIN_DESC(albumArt_album, albumArt_album_id, albumArt_album_id2)##SEP \
JOIN_DESC(MAX, NONE, NONE)

