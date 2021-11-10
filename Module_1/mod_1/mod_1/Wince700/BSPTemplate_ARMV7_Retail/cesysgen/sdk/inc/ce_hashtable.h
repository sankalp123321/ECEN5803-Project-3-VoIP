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


#include <linklist.h>
#include <winerror.h>


#ifdef __cplusplus
extern "C" {
#endif


//
//  Linear chaining Hash-Table mainpulation routines.
//

/// <topic name="HASH_ENTRY" displayname="Linear chaining Hash Table Functions">
/// <summary>
/// Functions to manipulate LIST_ENTRY-based fixed bucket size linear chaining hash table.
/// The current implementation of the hash table does not re-size and grow.
/// Hash Tables are recommended to have a prime-number maximum bucket count.
/// The maximum number of items stored in the hash table is recommended to be no more than
/// a 0.75 load factor of the maximum bucket count.
/// The hash table bucket array is statically allocated via VirtualAlloc.
/// Users are responsible for defining hash table entry structures and
/// providing routines for hashing and matching the key contained in that structure.
/// Internally the implementation references a LIST_ENTRY* pointer to track the position
/// in the linear chain.
/// The user may also provide a function for cloning the user structure and must provide one
/// for deleting the structure when the hash-table is finished with it.
/// </summary>
/// </topic>

/// <topic_scope tref="HASH_ENTRY">


//
//  Linear Chaining Hash-Table Error Codes
//
#define HT_S_OK                         S_OK
#define HT_E_OUTOFMEMORY                E_OUTOFMEMORY

#define HT_ERROR_BASE                   0xCC00
#define HT_SUCCESS_BASE                 0xCCC0

#define HT_E_FULL                       MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS_CE, HT_ERROR_BASE+1)

#define HT_S_FOUND                      MAKE_HRESULT(SEVERITY_SUCCESS, FACILITY_WINDOWS_CE, HT_SUCCESS_BASE+1)
#define HT_S_NOTFOUND                   MAKE_HRESULT(SEVERITY_SUCCESS, FACILITY_WINDOWS_CE, HT_SUCCESS_BASE+2)


//
//  HELPER MACROS
//
#ifdef SAFE_LOCALFREE
#undef SAFE_LOCALFREE
#endif /* SAFE_LOCALFREE */
#define SAFE_LOCALFREE(x)                           \
    { if (NULL != (x)) {                            \
        LocalFree((x));                             \
    }}

#ifdef SAFE_HASHENTRYDELETE
#undef SAFE_HASHENTRYDELETE
#endif /* SAFE_HASHENTRYDELETE */
#define SAFE_HASHENTRYDELETE(x,y)                   \
    { if ((NULL != (y)) && (NULL != (x)) &&         \
          (NULL != (x)->pfnDeleteItem)) {           \
        (x)->pfnDeleteItem(y);                      \
    }}

#ifdef HRCHK
#undef HRCHK
#endif /* HRCHK */
#define HRCHK(cond)                                 \
    { if (FAILED(hr=(cond))) {                      \
        goto exit;                                  \
    }}

#ifdef HRCHK_NULL
#undef HRCHK_NULL
#endif /* HRCHK_NULL */
#define HRCHK_NULL(ptr)                             \
    { if (NULL == (ptr)) {                          \
        hr = E_OUTOFMEMORY;                         \
        goto exit;                                  \
    }}

#ifdef HRCHK_BOOL
#undef HRCHK_BOOL
#endif /* HRCHK_BOOL */
#define HRCHK_BOOL(cond, hrv)                   \
    { if (FALSE == (cond)) {                    \
        hr = hrv;                               \
        goto exit;                              \
    }}


//
//  PFHHASHENTRYHASH:
/// <summary>
///     PFNHASHENTRYHASH calls the user customized hashing function
///     for the specified LIST_ENTRY struct.
/// </summary>
/// <returns>
///     Returns a hashed 32-bit value based on the custom hashing algorithm.
/// </returns>
//
typedef UINT32      (*PFNHASHENTRYHASH)(
                        CONST PLIST_ENTRY   pEntry);


//
//  PFNHASHENTRYMATCH:
/// <summary>
///     PFNHASHENTRYMATCH calls the user customized matching function
///     for the specified LIST_ENTRY structs.
/// </summary>
/// <returns>
///     Returns TRUE for a match and FALSE is no match.
/// </returns>
//
typedef BOOL        (*PFNHASHENTRYMATCH)(
                        CONST PLIST_ENTRY   pEntryA,
                        CONST PLIST_ENTRY   pEntryB);


//
//  PFNHASHENTRYCLONE:
/// <summary>
///     PFNHASHENTRYCLONE calls the user customized cloning function
///     for the specified HASH_ENTRY struct.  This routine can be customized
///     for users that wish to use a deep copy semantic for their generic data.
/// </summary>
/// <returns>
///     Returns a pointer to a LIST_ENTRY structure representing a clone
///     of the users hash table structure.
/// </returns>
//
typedef PLIST_ENTRY (*PFNHASHENTRYCLONE)(
                        CONST PLIST_ENTRY   pEntry);



//
//  PFNHASHENTRYDELETE:
/// <summary>
///     PFNHASHENTRYDELETE calls the user customized delete function
///     for the specified HASH_ENTRY struct.  This routine is called
///     when the hash table is being cleared and individual entries
///     are deleted.  The action of this function should match up
///     with the corresponding action of the clone function.
///     This function should not delete the HASH_ENTRY structure itself.
///     Typically this function will be used to delete the external
///     user allocated (key,data) pair resources, or those allocated
///     during deep cloning.
/// </summary>
/// <returns>
///     There is no return value for this function.
/// </returns>
//
typedef VOID        (*PFNHASHENTRYDELETE)(
                        PLIST_ENTRY         pEntry);


//
//  HASH_OPTS:
/// <summary>
///     Hash Table initialization options.
///     Options define the Hash Table size parameters
///     and customization functions.
/// </summary>
//
typedef struct _HASH_OPTS
{
    PFNHASHENTRYHASH    pfnHashItem;
    PFNHASHENTRYMATCH   pfnMatchItem;
    PFNHASHENTRYCLONE   pfnCloneItem;
    PFNHASHENTRYDELETE  pfnDeleteItem;

    UINT32              cMaximumBuckets;
    UINT32              cMaximumItems;
} HASH_OPTS;
typedef HASH_OPTS FAR * PHASH_OPTS;



//
//  HASH_TABLE:
/// <summary>
///     HASH_TABLE is the main implementation structure
///     or data class needed when calling the generic
///     hash-table manipulation functions.
///     Tracks the user customized functions and option
///     data.
/// </summary>
//
typedef struct _HASH_TABLE
{
    PFNHASHENTRYHASH    pfnHashItem;
    PFNHASHENTRYMATCH   pfnMatchItem;
    PFNHASHENTRYCLONE   pfnCloneItem;
    PFNHASHENTRYDELETE  pfnDeleteItem;

    UINT32              cMaximumBuckets;
    UINT32              cMaximumItems;

    UINT32              cItems;
    PLIST_ENTRY*        ppBucketHead;
} HASH_TABLE;
typedef HASH_TABLE FAR * PHASH_TABLE;



//
//  PARAMETER ASSERTION VALIDATION FOR DEBUG BUILDS
//
#ifdef DEBUG
FORCEINLINE
VOID
CheckHashOpts(
    IN  PHASH_OPTS      pOptions)
{
    ASSERT(NULL != pOptions);
    ASSERT(NULL != pOptions->pfnHashItem);
    ASSERT(NULL != pOptions->pfnMatchItem);
    ASSERT(NULL != pOptions->pfnCloneItem);
    ASSERT(NULL != pOptions->pfnDeleteItem);

    ASSERT(0 != pOptions->cMaximumBuckets);
    ASSERT(0 != pOptions->cMaximumItems);
}


FORCEINLINE
VOID
CheckHashTable(
    IN  PHASH_TABLE     pHashTable)
{
    ASSERT(NULL != pHashTable);
    ASSERT(NULL != pHashTable->pfnHashItem);
    ASSERT(NULL != pHashTable->pfnMatchItem);
    ASSERT(NULL != pHashTable->pfnCloneItem);
    ASSERT(NULL != pHashTable->pfnDeleteItem);

    ASSERT(0 != pHashTable->cMaximumBuckets);
    ASSERT(0 != pHashTable->cMaximumItems);
    ASSERT(NULL != pHashTable->ppBucketHead);
}

#define ASSERT_HASH_OPTS    CheckHashOpts
#define ASSERT_HASH_TABLE   CheckHashTable

#else

#define ASSERT_HASH_OPTS
#define ASSERT_HASH_TABLE
#endif /* DEBUG */


//
//  _HashTableFindEntry:
/// <summary>
///     A hash table helper function that returns a reference
///     to a HASH_ENTRY pointer in the table matching pFind.
/// </summary>
/// <returns>
///     Returns an HRESULT indicating found or not found.
///
///     HT_S_FOUND      =   SUCCESSFULLY FOUND ENTRY
///     HT_S_NOTFOUND   =   SUCCESSFULLY DID NOT FIND ENTRY
/// </returns>
//
__inline
HRESULT
_HashTableFindEntry(
    PHASH_TABLE             pHashTable,
    PLIST_ENTRY             pFind,
    PLIST_ENTRY*            ppEntry)
{
    UINT32          dwHash          = 0;
    PLIST_ENTRY     pListHead       = NULL;
    PLIST_ENTRY     pListCur        = NULL;

    ASSERT_HASH_TABLE(pHashTable);
    ASSERT(NULL != pFind);
    ASSERT(NULL != ppEntry);

    if (0 == pHashTable->cItems)
    {
        *ppEntry = NULL;
        return HT_S_NOTFOUND;
    }

    dwHash      = pHashTable->pfnHashItem(pFind) % pHashTable->cMaximumBuckets;
    pListHead   = pHashTable->ppBucketHead[dwHash];
    pListCur    = pListHead;

    while (NULL != pListCur)
    {
        if (TRUE == pHashTable->pfnMatchItem(pFind, pListCur))
        {
            *ppEntry = pListCur;
            return HT_S_FOUND;
        }

        if (pListHead == pListCur->Flink)
        {
            pListCur = NULL;
        }
        else
        {
            pListCur = pListCur->Flink;
        }
    }

    return HT_S_NOTFOUND;
}


//
//  HashTableClear:
/// <summary>
///     Clears the hash table one bucket at a time.
///     Removes each entry from the linear chain.
///     Deletes and unallocates resources associated with each entry.
/// </summary>
/// <returns>
///     Returns HT_S_OK.
/// </returns>
//
__inline
HRESULT
HashTableClear(
    PHASH_TABLE      pHashTable)
{
    PLIST_ENTRY         pListHead   = NULL;
    PLIST_ENTRY         pListCur    = NULL;
    PLIST_ENTRY         pListNext   = NULL;
    UINT32              i           = 0;

    ASSERT_HASH_TABLE(pHashTable);

    for (i=0;i<pHashTable->cMaximumBuckets;i++)
    {
        pListHead   = pHashTable->ppBucketHead[i];
        pListCur    = pListHead;
        while (NULL != pListCur)
        {
            pListNext = pListCur->Flink;
            RemoveEntryList(pListCur);
            if (pListHead == pListNext)
            {
                pHashTable->ppBucketHead[i] = NULL;
                pListNext = NULL;
            }
            else
            {
                pListHead = pListNext;
            }
            pHashTable->pfnDeleteItem(pListCur);
            pHashTable->cItems--;
            pListCur = pListNext;
        }
    }

    ASSERT(0 == pHashTable->cItems);
    return HT_S_OK;
}


//
//  HashTableInitialize:
/// <summary>
///     Determine the hash table maximum size.
///     Allocate a bucket array region for the table.
///     Copy options to the hash table structure.
///     There is a single statically allocated bucket array
///     pointing to list heads initialized to NULL.
/// </summary>
//
__inline
HRESULT
HashTableInitialize(
    PHASH_OPTS      pOptions,
    PHASH_TABLE     pHashTable)
{
    HRESULT         hr                  = HT_S_OK;
    UINT64          qwBucketArraySize   = 0;

    ASSERT_HASH_OPTS(pOptions);
    ASSERT(NULL != pHashTable);

    qwBucketArraySize = pOptions->cMaximumBuckets * sizeof(LIST_ENTRY*);
    ASSERT((UINT64) 0xFFFFFFFF > qwBucketArraySize);
    pHashTable->ppBucketHead = (LIST_ENTRY**) LocalAlloc(LPTR, (DWORD) qwBucketArraySize);
    HRCHK_NULL(pHashTable->ppBucketHead);


    pHashTable->pfnHashItem     = pOptions->pfnHashItem;
    pHashTable->pfnMatchItem    = pOptions->pfnMatchItem;
    pHashTable->pfnCloneItem    = pOptions->pfnCloneItem;
    pHashTable->pfnDeleteItem   = pOptions->pfnDeleteItem;
    pHashTable->cMaximumBuckets = pOptions->cMaximumBuckets;
    pHashTable->cMaximumItems   = pOptions->cMaximumItems;
    pHashTable->cItems          = 0;
    return HT_S_OK;

exit:
    SAFE_LOCALFREE(pHashTable->ppBucketHead);
    return hr;
}


//
//  HashTableUnInitialize:
/// <summary>
///     Uninitializes the hash-table.
///     Clears the hash-table contents
///     calling pfnDeleteItem on each entry.
///     Frees the allocated bucket array.
/// </summary>
//
__inline
HRESULT
HashTableUnInitialize(
    PHASH_TABLE      pHashTable)
{
    HRESULT         hr                  = HT_S_OK;
    ASSERT_HASH_TABLE(pHashTable);
    HRCHK(HashTableClear(pHashTable));
    SAFE_LOCALFREE(pHashTable->ppBucketHead);
exit:
    return hr;
}


//
//  HashTableInsert:
/// <summary>
///     Validates that there is room in the table for the new LIST_ENTRY.
///     Hashes the item and ensures that it is not already inserted.
///     Calls the user specified clone routine to copy the LIST_ENTRY.
///     Inserts the LIST_ENTRY to the front of the linear chain.
/// </summary>
/// <returns>
///     An HRESULT indicating whether the item was inserted successfully or not.
///
///     HT_S_OK                 = SUCCESSFULLY INSERTED
///     HT_S_FOUND              = ALREADY INSERTED
///     HT_E_FULL               = NO MORE ROOM FOR ITEMS
///     HT_E_OUTOFMEMORY        = OOM CONDITION ALLOCATING HASH_ENTRY OR CLONING
/// </returns>
//
__inline
HRESULT
HashTableInsert(
    PHASH_TABLE         pHashTable,
    PLIST_ENTRY         pItem)
{
    HRESULT         hr              = HT_S_OK;
    UINT32          dwHash          = 0;
    PLIST_ENTRY     pFind           = NULL;
    PLIST_ENTRY     pEntry          = NULL;

    ASSERT_HASH_TABLE(pHashTable);
    ASSERT(NULL != pItem);

    HRCHK_BOOL((pHashTable->cItems != pHashTable->cMaximumItems), HT_E_FULL);
    dwHash = pHashTable->pfnHashItem(pItem) % pHashTable->cMaximumBuckets;
    ASSERT(dwHash < pHashTable->cMaximumBuckets);
    HRCHK_BOOL(HT_S_NOTFOUND == _HashTableFindEntry(pHashTable, pItem, &pFind), HT_S_FOUND);

    pEntry = pHashTable->pfnCloneItem(pItem);
    HRCHK_NULL(pEntry);
    InitializeListHead(pEntry);

    if (NULL == pHashTable->ppBucketHead[dwHash])
    {
        pHashTable->ppBucketHead[dwHash] = pEntry;
    }
    else
    {
        InsertHeadList(pHashTable->ppBucketHead[dwHash], pEntry);
    }
    pHashTable->cItems++;
    return S_OK;

exit:
    SAFE_HASHENTRYDELETE(pHashTable, pEntry);
    return hr;
}


//
//  HashTableRemove:
/// <summary>
///     Removes the item matching the specified LIST_ENTRY key from the table.
///     Hashes the item and looks for a match in the hash table.
///     If the chain is removed completely a NULL sentinel is placed in the bucket array.
///     The found entry is deleted and unallocated using the user specified functions.
/// </summary>
/// <returns>
///     An HRESULT indicating whether the item was inserted successfully or not.
///
///     HT_S_FOUND              = SUCCESSFULLY FOUND AND REMOVED
///     HT_S_NOTFOUND           = SUCCESSFULLY NOT FOUND
/// </returns>
//
__inline
HRESULT
HashTableRemove(
    PHASH_TABLE         pHashTable,
    PLIST_ENTRY         pItem)
{
    UINT32          dwHash          = 0;
    PLIST_ENTRY     pEntry          = NULL;
    PLIST_ENTRY     pListHead       = NULL;


    ASSERT_HASH_TABLE(pHashTable);
    ASSERT(NULL != pItem);


    if (0 == pHashTable->cItems)
    {
        return HT_S_NOTFOUND;
    }

    dwHash      = pHashTable->pfnHashItem(pItem) % pHashTable->cMaximumBuckets;
    pListHead   = pHashTable->ppBucketHead[dwHash];

    if (HT_S_FOUND == _HashTableFindEntry(pHashTable, pItem, &pEntry))
    {
        if (pListHead == pEntry)
        {
            if (pEntry == pEntry->Blink)
            {
                pHashTable->ppBucketHead[dwHash] = NULL;
            }
            else
            {
                pHashTable->ppBucketHead[dwHash] = pListHead->Blink;
            }
        }
        RemoveEntryList(pEntry);
        pHashTable->pfnDeleteItem(pEntry);
        pHashTable->cItems--;
        return HT_S_FOUND;
    }

    return HT_S_NOTFOUND;
}


//
//  HashTableFind:
/// <summary>
///     Searches a hash table for a record matching the specified key.
///     Returns matching records to the caller in the pEntry structure.
/// </summary>
/// <returns>
///     An HRESULT indicating whether the item was found or not.
///
///     HT_S_FOUND              = ENTRY FOR SPECIFIED KEY FOUND
///     HT_E_NOTFOUND           = ENTRY FOR SPECIFIED KEY NOT FOUND
/// </returns>
//
__inline
HRESULT
HashTableFind(
    PHASH_TABLE         pHashTable,
    CONST PLIST_ENTRY   pFind,
    PLIST_ENTRY*        ppEntry)
{
    HRESULT         hr              = HT_S_NOTFOUND;
    PLIST_ENTRY     pItem           = NULL;
    PLIST_ENTRY     pEntry          = NULL;

    ASSERT_HASH_TABLE(pHashTable);
    ASSERT(NULL != pFind);
    ASSERT(NULL != ppEntry);


    if (0 == pHashTable->cItems)
    {
        return HT_S_NOTFOUND;
    }

    if (HT_S_FOUND == _HashTableFindEntry(pHashTable, pFind, &pItem))
    {
        pEntry = pHashTable->pfnCloneItem(pItem);
        HRCHK_NULL(pEntry);
        *ppEntry = pEntry;
        return HT_S_FOUND;
    }

exit:
    return hr;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
