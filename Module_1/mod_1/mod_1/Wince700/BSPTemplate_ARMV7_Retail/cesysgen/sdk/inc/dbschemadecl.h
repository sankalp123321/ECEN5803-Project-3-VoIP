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

// #pragma once does not work with files included in precompiled headers
//
#ifndef DBSCHEMA_H
#define DBSCHEMA_H

#include "DBSchema.h"
#include "MLibDll_id.h"

#define COMMA ,
#define SEMICOLON ;

#define TBL_ENUM(index, key, entity, name) ml_Table_##index
#define TBL_INFO(index, key, entity, name) { ml_Table_##index, mlid_##key, ml_Entity_##entity, name }

#define PROP_ENUM(index, unique, type, len, name, table, cjoins, join) mlid_##index
#define PROP_INFO(index, unique, type, len, name, table, cjoins, join) { mlid_##index, L#index, unique, type, name, ml_Table_##table, cjoins, ml_Join_##join }

#define JOIN_ENUM(index, prop_src, prop_dest) ml_Join_##index
#define JOIN_INFO(index, prop_src, prop_dest) { ml_Join_##index, mlid_##prop_src, mlid_##prop_dest }

#define S_PROP(index, unique, type, len, name, table, cjoins, join) DBSTATUS s##index
#define CB_PROP(index, unique, type, len, name, table, cjoins, join) ULONG cb##index
#define V_PROP(index, unique, type, len, name, table, cjoins, join) PropTypeOf<type,len>::t v##index

#define ENT_ENUM(index, fileURL_id, isDeleted_id, creationTime_id, changedTime_id, fileSize_id, fileTime_id, parentPuoid) ml_Entity_##index
#define ENT_INFO(index, fileURL_id, isDeleted_id, creationTime_id, changedTime_id, fileSize_id, fileTime_id, parentPuoid) { ml_Entity_##index, ml_Table_##index, mlid_##fileURL_id, mlid_##isDeleted_id, mlid_##creationTime_id, mlid_##changedTime_id, mlid_##fileSize_id, mlid_##fileTime_id, mlid_##parentPuoid, L#index }

// Map the VARTYPE into a C++ type so that we know how to declare a data member for the property
//
template<VARTYPE T, int len> struct PropTypeOf
{
};

template<> struct PropTypeOf<VT_EMPTY, 0>
{
    // Only used for the NONE, and MAX properties
    //
    typedef char t;
};

template<int len> struct PropTypeOf<VT_BOOL, len>
{
    typedef USHORT t;
};

template<int len> struct PropTypeOf<VT_BSTR, len>
{
    typedef WCHAR t[len];
};

template<> struct PropTypeOf<VT_I2, 0>
{
    typedef USHORT t;
};

template<> struct PropTypeOf<VT_I4, 0>
{
    typedef ULONG t;
};

template<> struct PropTypeOf<VT_I8, 0>
{
    typedef ULONGLONG t;
};

template<> struct PropTypeOf<VT_DATE, 0>
{
    typedef DBTIMESTAMP t;
};

struct TableInfo
{
    enum TableId table_id;
    enum PropertyId key_id;
    enum EntityId entity_id;
    const wchar_t *name;
};

struct JoinInfo
{
    JoinId join_id;
    PropertyId from_property;
    PropertyId to_property;
};

struct PropertyInfo
{
    enum PropertyId property_id;
    const WCHAR *property_name;
    bool isUnique;
    VARTYPE vt;
    const wchar_t *name;
    TableId table;
    int cTotalJoins;
    JoinId join;
};

struct EntityInfo
{
    enum EntityId entity_id;
    enum TableId table_id;
    enum PropertyId fileURL_id;
    enum PropertyId isDeleted_id;
    enum PropertyId creationTime_id;
    enum PropertyId changedTime_id;
    enum PropertyId fileSize_id;
    enum PropertyId fileTime_id;
    enum PropertyId parentPuoid;
    WCHAR *name;
};

extern EntityInfo Entities[ml_Entity_MAX + 1];
extern TableInfo Tables[ml_Table_MAX + 1];
extern JoinInfo Joins[ml_Join_MAX + 1];
extern PropertyInfo TableProperties[mlid_MAX + 1];

#endif