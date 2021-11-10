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
/*++
THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
PARTICULAR PURPOSE.

Module Name:  

linklist.h

Abstract:  

Macros for linked-list manipulation.

Notes: 


--*/


#pragma once

#ifdef __cplusplus
extern "C" {
#endif


/*NOINC*/

#if !defined(WIN32)

typedef struct _LIST_ENTRY {
    struct _LIST_ENTRY FAR * Flink;
    struct _LIST_ENTRY FAR * Blink;
} LIST_ENTRY;
typedef LIST_ENTRY FAR * PLIST_ENTRY;

#endif  // !WIN32

//
//  Doubly-linked list manipulation routines.
//

/// <topic name="LIST_ENTRY" displayname="Doubly Linked List Functions">
/// <summary>
/// Functions to manipulate LIST_ENTRY-based circular-doubly-linked lists
/// </summary>
/// </topic>

///<topic_scope tref="LIST_ENTRY">

#ifndef CONTAINING_RECORD
//
//
//  CONTAINING_RECORD:
//
/// <summary>
///     Calculates the address of the base of the structure given its type and the address of a field within the structure
/// </summary>
/// <param name="address">
///     A pointer to a field in an instance of a structure of type specified by the type parameter. (Typically a LIST_ENTRY field)
/// </param>
/// <param name="type">
///     The name of the type of the structure whose base address is to be returned.
/// </param>
/// <param name="field">
///     The name of the field pointed to by address and which is contained in a structure of the specified type.
/// </param>
/// <returns>
///     The address of the structure containing the specified field
/// </returns>
/// <remarks>
/// In a LIST_ENTRY-based doubly linked list, the LIST_ENTRY fields within a structure point to other LIST_ENTRYs and not to 
/// the structure within which they are declared. The LIST_ENTRY functions return pointers to LIST_ENTRYs, the CONTAINING_RECORD
/// macro provides a way to get a pointer to the actual structure which contains the LIST_ENTRY field.
/// </remarks>
#define CONTAINING_RECORD(address, type, field) ((type *)( \
                          (LPBYTE)(address) - \
                          (LPBYTE)(&((type *)0)->field)))
#endif  // CONTAINING_RECORD


//
//  InitializeListHead:
//
/// <summary>
///     Initialize the LIST_ENTRY by setting its Flink and Blink fields to point to itself
/// </summary>
/// <param name="ListHead">
///     A pointer to the LIST_ENTRY to be initialized.
/// </param>
/// <returns>
///     The address of the initialized LIST_ENTRY
/// </returns>
FORCEINLINE
PLIST_ENTRY
InitializeListHead(
    IN PLIST_ENTRY ListHead)
{
    return ListHead->Flink = ListHead->Blink = ListHead;
}


//
//  IsListEmpty:
//
/// <summary>
///     Determine whether the specified LIST_ENTRY is empty
/// </summary>
/// <param name="ListHead">
///     A pointer to the LIST_ENTRY that is the head of the list.
/// </param>
/// <returns>
///     TRUE when the ListHead points back to itself (it is empty)
///     FALSE otherwise
/// </returns>
FORCEINLINE
BOOL
IsListEmpty(
    IN CONST PLIST_ENTRY ListHead)
{
    return ((ListHead)->Flink == (ListHead)) ? TRUE : FALSE;
}

#ifdef DEBUG
FORCEINLINE
VOID
CheckListEntry(
    IN PLIST_ENTRY Entry,
    IN BOOL CheckFlinkBlink)
{
    //
    //  check the PLIST_ENTRY pointer
    //  if the pointer is valid then
    //      check Flink
    //      check Blink
    //
    ASSERT( (LIST_ENTRY*) Entry        != (LIST_ENTRY*) 0xcccccccc );
    ASSERT( (LIST_ENTRY*) Entry        != (LIST_ENTRY*) NULL );


    if( TRUE == CheckFlinkBlink )
        {
        ASSERT( (LIST_ENTRY*) Entry->Flink != (LIST_ENTRY*) 0xcccccccc );
        ASSERT( (LIST_ENTRY*) Entry->Blink != (LIST_ENTRY*) 0xcccccccc );

        ASSERT( (LIST_ENTRY*) Entry->Flink != (LIST_ENTRY*) NULL );
        ASSERT( (LIST_ENTRY*) Entry->Blink != (LIST_ENTRY*) NULL );
        }
}
#define ASSERT_LIST_ENTRY CheckListEntry
#else
#define ASSERT_LIST_ENTRY
#endif


//
//  RemoveEntryList:
//
/// <summary>
///     Removes the specified LIST_ENTRY from the doubly linked list
///     NOTE: Removal is allowed on empty lists.
///     NOTE: The removed Entry is initialized to prevent possible list corruption.
/// </summary>
/// <param name="Entry">
///     A pointer to a LIST_ENTRY in a doubly linked list.
/// </param>
FORCEINLINE
VOID
RemoveEntryList(
    IN PLIST_ENTRY Entry)
{
    PLIST_ENTRY _EX_Entry = Entry;

    ASSERT_LIST_ENTRY( Entry, TRUE );

    _EX_Entry->Blink->Flink = _EX_Entry->Flink;
    _EX_Entry->Flink->Blink = _EX_Entry->Blink;

    ASSERT_LIST_ENTRY( Entry, TRUE );

    //
    //  re-initialize the removed list entry to prevent it from pointing
    //  back into a list from which it has already been removed
    //
    InitializeListHead( Entry );
}


//
//  RemoveEntryLockedList:
//
/// <summary>
///     Removes the specified LIST_ENTRY from the doubly linked list with a CRITICAL_SECTION taken
/// </summary>
/// <param name="Entry">
///     A pointer to a LIST_ENTRY in a doubly linked list.
/// </param>
/// <param name="CS">
///     The CRITICAL_SECTION that guards the doubly linked list
/// </param>
FORCEINLINE
VOID
RemoveEntryLockedList(
    IN PLIST_ENTRY Entry,
    IN LPCRITICAL_SECTION CS)
{
    EnterCriticalSection(CS);
    RemoveEntryList( Entry );
    LeaveCriticalSection(CS);
}


//
//  RemoveHeadList:
//
/// <summary>
///     Removes the first entry from the doubly linked list specified by ListHead.
/// </summary>
/// <param name="ListHead">
///     A pointer to the LIST_ENTRY that is the head of the list.
/// </param>
/// <returns>
///     A pointer to the entry removed from the list. If the list is empty, then ListHead is returned.
/// </returns>
FORCEINLINE
PLIST_ENTRY
RemoveHeadList(
    IN PLIST_ENTRY ListHead)
{
    PLIST_ENTRY HeadEntry = ListHead->Flink;
    ASSERT_LIST_ENTRY( ListHead, TRUE );
    RemoveEntryList( HeadEntry );
    return HeadEntry;
}


//
//  RemoveHeadLockedList
//
/// <summary>
///     Removes the first entry from the list specified by ListHead with a CRITICAL_SECTION taken.
/// </summary>
/// <param name="ListHead">
///     A pointer to the LIST_ENTRY that is the head of the list.
/// </param>
/// <param name="CS">
///     The CRITICAL_SECTION that guards the doubly linked list
/// </param>
/// <returns>
///     A pointer to the entry removed from the list. If the list is empty, then ListHead is returned.
/// </returns>
FORCEINLINE
PLIST_ENTRY
RemoveHeadLockedList(
    IN PLIST_ENTRY ListHead,
    IN LPCRITICAL_SECTION CS)
{
    PLIST_ENTRY HeadEntry;

    EnterCriticalSection(CS);
    HeadEntry = RemoveHeadList( ListHead );
    LeaveCriticalSection(CS);

    return HeadEntry;
}


//
//  RemoveTailList:
//
/// <summary>
///     Removes the last entry from the doubly linked list specified by ListHead.
/// </summary>
/// <param name="ListHead">
///     A pointer to the LIST_ENTRY that is the head of the list.
/// </param>
/// <returns>
///     A pointer to the entry removed from the list. If the list is empty, then ListHead is returned.
/// </returns>
FORCEINLINE
PLIST_ENTRY
RemoveTailList(
    IN PLIST_ENTRY ListHead)
{
    PLIST_ENTRY TailEntry = ListHead->Blink;
    ASSERT_LIST_ENTRY( ListHead, TRUE );
    RemoveEntryList( TailEntry );
    return TailEntry;
}


//
//  RemoveTailLockedList:
//
/// <summary>
///     Removes the last entry from the list specified by ListHead with a CRITICAL_SECTION taken.
/// </summary>
/// <param name="ListHead">
///     A pointer to the LIST_ENTRY that is the head of the list.
/// </param>
/// <param name="CS">
///     The CRITICAL_SECTION that guards the doubly linked list
/// </param>
/// <returns>
///     A pointer to the entry removed from the list. If the list is empty, then ListHead is returned.
/// </returns>
FORCEINLINE
PLIST_ENTRY
RemoveTailLockedList(
    IN PLIST_ENTRY ListHead,
    IN LPCRITICAL_SECTION CS)
{
    PLIST_ENTRY TailEntry;

    EnterCriticalSection(CS);
    TailEntry = RemoveTailList( ListHead );
    LeaveCriticalSection(CS);

    return TailEntry;
}


//
//  InsertEntryList:
//
//      - inserts Entry into the doubly linked list
//      - insertion occurs between PrevEntry and NextEntry
//
FORCEINLINE
VOID
InsertEntryList(
    IN PLIST_ENTRY PrevEntry,
    IN PLIST_ENTRY Entry,
    IN PLIST_ENTRY NextEntry)
{
    ASSERT_LIST_ENTRY( PrevEntry, TRUE );
    ASSERT_LIST_ENTRY( Entry, FALSE );
    ASSERT_LIST_ENTRY( NextEntry, TRUE );

    Entry->Flink = NextEntry;
    Entry->Blink = PrevEntry;
    PrevEntry->Flink = Entry;
    NextEntry->Blink = Entry;

    ASSERT_LIST_ENTRY( PrevEntry, TRUE );
    ASSERT_LIST_ENTRY( NextEntry, TRUE );
    ASSERT_LIST_ENTRY( Entry, TRUE );
}


//
//  InsertTailList:
//
/// <summary>
///     Insert the LIST_ENTRY specified by Entry at the end of a doubly linked list.
/// </summary>
/// <param name="ListHead">
///     A pointer to the LIST_ENTRY that is the head of the list.
/// </param>
/// <param name="Entry">
///     A pointer to the LIST_ENTRY to be inserted in the doubly linked list.
/// </param>
FORCEINLINE
VOID
InsertTailList(
    IN PLIST_ENTRY ListHead,
    IN PLIST_ENTRY Entry)
{
    InsertEntryList( ListHead->Blink, Entry, ListHead );
}


//
//  InsertTailLockedList:
//
/// <summary>
///     Insert a LIST_ENTRY at the end of a doubly linked list with a CRITICAL_SECTION taken.
/// </summary>
/// <param name="ListHead">
///     A pointer to the LIST_ENTRY that is the head of the list.
/// </param>
/// <param name="Entry">
///     A pointer to the LIST_ENTRY to be inserted in the doubly linked list.
/// </param>
/// <param name="CS">
///     The CRITICAL_SECTION that guards the doubly linked list
/// </param>
FORCEINLINE
VOID
InsertTailLockedList(
    IN PLIST_ENTRY ListHead,
    IN PLIST_ENTRY Entry,
    IN LPCRITICAL_SECTION CS)
{
    EnterCriticalSection(CS);
    InsertTailList( ListHead, Entry );
    LeaveCriticalSection(CS);
}


//
//  InsertHeadList:
//
/// <summary>
///     Insert the LIST_ENTRY specified by Entry at the beginning of a doubly linked list.
/// </summary>
/// <param name="ListHead">
///     A pointer to the LIST_ENTRY that is the head of the list.
/// </param>
/// <param name="Entry">
///     A pointer to the LIST_ENTRY to be inserted in the doubly linked list.
/// </param>
FORCEINLINE
VOID
InsertHeadList(
    IN PLIST_ENTRY ListHead,
    IN PLIST_ENTRY Entry)
{
    InsertEntryList( ListHead, Entry, ListHead->Flink );
}



//
//  InsertHeadLockedList:
//
/// <summary>
///     Insert a LIST_ENTRY at the beginning of a doubly linked list with a CRITICAL_SECTION taken.
/// </summary>
/// <param name="ListHead">
///     A pointer to the LIST_ENTRY that is the head of the list.
/// </param>
/// <param name="Entry">
///     A pointer to the LIST_ENTRY to be inserted in the doubly linked list.
/// </param>
/// <param name="CS">
///     The CRITICAL_SECTION that guards the doubly linked list
/// </param>
FORCEINLINE
VOID
InsertHeadLockedList(
    IN PLIST_ENTRY ListHead,
    IN PLIST_ENTRY Entry,
    IN LPCRITICAL_SECTION CS)
{
    EnterCriticalSection (CS);
    InsertHeadList( ListHead, Entry );
    LeaveCriticalSection (CS);
}

///</topic_scope> //LIST_ENTRY

#ifdef __cplusplus
}
#endif
