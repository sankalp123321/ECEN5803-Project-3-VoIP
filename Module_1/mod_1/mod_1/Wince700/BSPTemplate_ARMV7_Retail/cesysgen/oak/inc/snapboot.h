#pragma once

#ifndef _NKSNAP_H_
#define  _NKSNAP_H_

#define SSPL_SIG_HEADER             'LPSS'

//---------------------------------------------------------------------
//
//                      layout of snapshot
//
//---------------------------------------------------------------------
//
// ------------------------------------------
// | snapshot header (size == 4k)           |   <-- checksum of this area always results in 0.
// ------------------------------------------   <-- dwOfstSnapTable
// | Snapshot Page Table                    |
// |                                        |
// | array of physical addresses for the    |   <-- checksum of this area, including filler == dwTableChkSum
// | pages to be loaded by bootloader.      |
// | Contents of the pages are in the       |
// | "Compressed snapshot data" right after |
// | the array.                             |
// |                                        |
// | # entries of the array == cSnapPages   |
// ------------------------------------------
// | filler for 4k alignment                |
// ------------------------------------------
// | Compressed snapshot data               |   <-- checksum of this area, including filler == dwSnapChkSum
// |                                        |
// |    size == cbCompressed                |
// ------------------------------------------
// | filler for 4k alignment                |
// ------------------------------------------   <-- dwOfstPageable
// | Uncompressed pageable snapshot.        |
// | bootloader does NOT need to deal with  |
// | this area. kernel will load it on      |   <-- checksum of this area == dwPageAbleChkSum
// | demand.                                |
// |                                        |
// |    size == cbPageable,                 |
// |    always mulitple of 4K.              |
// ------------------------------------------
//
// - Bootloader is responsible for restoring all the pages listing in the Snapshot Page Table.
// - Bootloader should *NOT* load the uncompressed pageable snapshot. They will be loaded by
//   the OS on an as-needed basis.
//

//
// snap header (1st 4k-page of the snapshot). It's NOT compressed regardless the snapshot is compressed or not.
// what's in the snapshot:
//      - snapshot information
//      - BSP dependent snapshot context
//
typedef struct _SNAP_HEADER {
    DWORD dwSig;                    // snapshot signature
    DWORD dwOfstSnapTable;          // offset to table of physical addresses, ALWAYS 4K 
    DWORD dwOfstPageable;           // offset to pageable area, 4k-aligned
    DWORD cSnapPages;               // # of pages in the snap table. (uncompresses size == cSnapedPages * VM_PAGE_SIZE)
    DWORD cbCompressed;             // total size compressed, excluding header and snap table
    DWORD cbPageAble;               // size of pageable area
    DWORD dwOemData;                // OEM specific data when snapshot is taken
    DWORD dwHeaderAdjust;           // checksum for header only
    DWORD dwTableChkSum;            // checksum for snap page table
    DWORD dwSnapChkSum;             // checksum for snap data
    DWORD dwPageAbleChkSum;         // checksum for pageable area

    // CPU context follows this
} SNAP_HEADER, *PSNAP_HEADER;
typedef const SNAP_HEADER *PCSNAP_HEADER;

// checksum function used to create/verify snapshot
FORCEINLINE DWORD SnapChkSum (LPCVOID pData, DWORD cbData)
{
    const DWORD *p = (const DWORD *) pData;
    DWORD       sum = 0;
    DWORD       i;

    cbData /= sizeof (DWORD);
    for ( i = 0; i < cbData; i++ ) {
        sum += p[i];
    }

    return sum;
}

//
// snapshot state
//
typedef enum { eSnapNone = 0, eSnapPass1, eSnapPass2, eSnapPrepared, eSnapTaken, eSnapBoot } TSnapState;

//
// Snap restoration function is only used by bootloader or IPL. Should not be called after OS started
//


//
// function prototype for funciton to read the snapshot. It's guaranteed that pBuf, cbSize, dwOfst are all 4k-aligned
//
typedef BOOL (*PFN_SnapReadAtOffset) (LPVOID pBuf, DWORD cbSize, DWORD dwOfst);

// bootloader only - function to restore snapshot
//
//
// Arguments:
//      pfnRead             - function to read snapshot. It's guaranteed that we'll call this function with 4k-aligned buffer/size/offset.
//                            if NULL is specified, dwBufferAddr/cbBufferSize should be the full snapshot. Typically used 
//                            when snapshot is written to NOR flash.
//      dwBufferAddr        - starting address of the buffer, must be page(4k) aligned
//      cbBufferSize        - size of the buffer, must be multiple of 4K
//      pdwErr              - reason for failure if the call failed.
// Returns:
//      pointer to the CPU Context to be restored, saved by the funciton g_pOemGlobal->pSnapshotSupport->pfnSnapCPU when
//      snapshot is taken. NULL if failed and *pdwErr will contain the reason for failure.
//
// Minimal requirement of the buffer size = 128k.
//      4k  - header page
//      60k - snapshot page table for snapshot size up to 60M. Need more if snapshot size is > 60M
//      64K - buffer to keep the compressed data
//
// for maximum snapshot size supported (500MB), it'll require 4K + 500K + 64K
//      

#define SNAP_ERR_INVALID_ARGUMENT           0x80000001      // the arguments is invalid or not aligned correctly.
#define SNAP_ERR_INSUFFICIENT_BUFFER        0x80000002      // buffer size too small to restore the snapshot
#define SNAP_ERR_CHECKSUM_FAILURE           0x80000003      // the snapshot saved is invalid (checksum failure)
#define SNAP_ERR_READ_FAILURE               0x80000004      // fail to read snapshot
#define SNAP_ERR_NOT_SUPPORTED              0x80000005      // snapshot boot is not supported yet

LPVOID SnapRestore (PFN_SnapReadAtOffset pfnRead, DWORD dwBufferAddr, DWORD cbBufferSize, LPDWORD pdwErr);


#endif  //  _NKSNAP_H_
