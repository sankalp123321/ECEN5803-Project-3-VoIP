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

Module Name:

    intrlk.h

Abstract:

    This module contains platform independent interlocked functions.

--*/

#ifndef _INTRLK_
#define _INTRLK_

//
// The following functions implement interlocked singly linked lists.
//
// WARNING: These lists can only be used when it is known that the ABA
//          removal problem cannot occur. If the ABA problem can occur,
//          then SLIST's should be used.
//

FORCEINLINE
PSINGLE_LIST_ENTRY
InterlockedPopEntrySingleList (
    IN PSINGLE_LIST_ENTRY ListHead
    )

/*

Routine Description:

    This function pops an entry from the front of a singly linked list.

Arguments:

    ListHead - Supplies a pointer to the listhead of a singly linked list.

Return Value:

    If the list is empty, then NULL is returned. Otherwise, the address of the
    first entry removed from the list is returned as the function
    value.

*/

{

    PSINGLE_LIST_ENTRY FirstEntry;
    PSINGLE_LIST_ENTRY NextEntry;

    FirstEntry = ListHead->Next;
    do {
        if (FirstEntry == NULL) {
            return NULL;
        }

        NextEntry = FirstEntry;
        FirstEntry =
            (PSINGLE_LIST_ENTRY)InterlockedCompareExchangePointer((PVOID *)ListHead,
                                                                  FirstEntry->Next,
                                                                  FirstEntry);

    } while (FirstEntry != NextEntry);
    return FirstEntry;
}

FORCEINLINE
PSINGLE_LIST_ENTRY
InterlockedPushEntrySingleList (
    IN PSINGLE_LIST_ENTRY ListHead,
    IN PSINGLE_LIST_ENTRY Entry
    )

/*

Routine Description:

    This function pushes an entry onto the front of a singly linked list.

Arguments:

    ListHead - Supplies a pointer to the listhead of a singly linked list.

    Entry - Supplies a pointer to a single list entry.

Return Value:

    The previous contents of the listhead are returned as the function value.
    If NULL is returned, then the list transitioned for an empty to a non
    empty state.

*/

{

    PSINGLE_LIST_ENTRY FirstEntry;
    PSINGLE_LIST_ENTRY NextEntry;

    FirstEntry = ListHead->Next;
    do {
        Entry->Next = FirstEntry;
        NextEntry = FirstEntry;
        FirstEntry =
            (PSINGLE_LIST_ENTRY)InterlockedCompareExchangePointer((PVOID *)ListHead,
                                                                  Entry,
                                                                  FirstEntry);

    } while (FirstEntry != NextEntry);
    return FirstEntry;
}

FORCEINLINE
PSINGLE_LIST_ENTRY
InterlockedFlushSingleList (
    IN PSINGLE_LIST_ENTRY ListHead
    )

/*

Routine Description:

    This function pops the entire list from the front of a singly linked list.

Arguments:

    ListHead - Supplies a pointer to the listhead of a singly linked list.

Return Value:

    If the list is empty, then NULL is returned. Otherwise, the address of the
    first entry removed from the list is returned as the function
    value.

*/

{

    return (PSINGLE_LIST_ENTRY)InterlockedExchangePointer((PVOID *)ListHead,
                                                          NULL);
}

/*

Routine Description:

    This function reverses a singly linked list in place and returns the new head.

Arguments:

    ListHead - Supplies a pointer to the listhead of a singly linked list.

Return Value:

    A pointer to the head of the reversed list.

NOTE: This is not an atomic/protected operation!    

*/
FORCEINLINE
PSINGLE_LIST_ENTRY
ReverseSingleList(
    PSINGLE_LIST_ENTRY ListHead
    )
{
    PSINGLE_LIST_ENTRY pPrev;
    PSINGLE_LIST_ENTRY pCur;
    PSINGLE_LIST_ENTRY pNext;

    pCur = ListHead;
    pPrev = NULL;
    while (pCur) {
        pNext = pCur->Next;
        pCur->Next = pPrev;
        pPrev = pCur;
        pCur = pNext;
    }
    return pPrev;
}

#endif // _INTRLK_
