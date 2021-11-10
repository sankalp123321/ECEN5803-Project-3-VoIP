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
/*


Module Name: RCDef.h

--*/
#ifndef __RCDEF_H__
#define __RCDEF_H__

#pragma warning(disable:4005)

#include <commctrl.h>

#define DIALOGEX        DIALOG DISCARDABLE
#define SHMENUBAR       RCDATA

#ifndef I_IMAGENONE
#define I_IMAGENONE     (-2)
#endif

#define NOMENU          0xFFFF

#define  IDS_SHNEW            1                
#define  IDM_SHAREDNEW        10                  
#define  IDM_SHAREDNEWDEFAULT 11                  

#define  IDC_CMDBAR           0xE408              
#define  IDC_CMDBAR_COMBOBOX  0xE409              
#define  AFX_ID_DOCLIST       0xE40A              

#ifndef IDC_STATIC
#define IDC_STATIC      (-1)
#endif

// Animate control
#ifndef ACS_AUTOPLAY
#define  ACS_AUTOPLAY         0x0004              
#endif
#ifndef ACS_CENTER
#define  ACS_CENTER           0x0001              
#endif
#ifndef ACS_TRANSPARENT
#define  ACS_TRANSPARENT      0x0002              
#endif

// Button styles
#define  BS_BITMAP            0x00000080L         
#define  BS_FLAT              0x00008000L         
#define  BS_ICON              0x00000040L         
#define  BS_USERBUTTON        0x00000008L         

// Combo-box styles
#define  CBS_OWNERDRAWFIXED   0x0010L             
#define  CBS_OWNERDRAWVARIABLE 0x0020L             
#define  CBS_SIMPLE           0x0001L             

// COMMON CONTROL STYLES
#ifndef CCS_ADJUSTABLE
#define  CCS_ADJUSTABLE       0x00000020L         
#endif
#ifndef CCS_BOTTOM
#define  CCS_BOTTOM           0x00000003L         
#endif
#ifndef CCS_NODIVIDER
#define  CCS_NODIVIDER        0x00000040L         
#endif
#ifndef CCS_NOHILITE
#define  CCS_NOHILITE         0x00000010L         
#endif
#ifndef CCS_NOMOVEY
#define  CCS_NOMOVEY          0x00000002L         
#endif
#ifndef CCS_NOPARENTALIGN
#define  CCS_NOPARENTALIGN    0x00000008L         
#endif
#ifndef CCS_NORESIZE
#define  CCS_NORESIZE         0x00000004L         
#endif
#ifndef CCS_TOP
#define  CCS_TOP              0x00000001L         
#endif

// Dialog styles
#define  DS_ABSALIGN          0x01L               
#define  DS_CENTERMOUSE       0x1000L             
#define  DS_CONTEXTHELP       0x2000L             
#define  DS_FIXEDSYS          0x0008L             
#define  DS_NOFAILCREATE      0x0010L             
#define  DS_NOIDLEMSG         0x100L              
#define  DS_SYSMODAL          0x02L               

// Header control styles
#ifndef HDS_HORZ
#define HDS_HORZ                0x00000000
#endif
#ifndef HDS_BUTTONS
#define HDS_BUTTONS             0x00000002
#endif
#ifndef HDS_HIDDEN
#define HDS_HIDDEN              0x00000008
#endif

// List-view styles
#define  LVS_ALIGNLEFT        0x0800              
#define  LVS_ALIGNMASK        0x0c00              
#define  LVS_ALIGNTOP         0x0000              
#define  LVS_AUTOARRANGE      0x0100              
#define  LVS_EDITLABELS       0x0200              
#define  LVS_ICON             0x0000              
#define  LVS_LIST             0x0003              
#define  LVS_NOCOLUMNHEADER   0x4000              
#define  LVS_NOLABELWRAP      0x0080              
#define  LVS_NOSCROLL         0x2000              
#define  LVS_NOSORTHEADER     0x8000              
#define  LVS_OWNERDRAWFIXED   0x0400              
#define  LVS_REPORT           0x0001              
#define  LVS_SHAREIMAGELISTS  0x0040              
#define  LVS_SHOWSELALWAYS    0x0008              
#define  LVS_SINGLESEL        0x0004              
#define  LVS_SMALLICON        0x0002              
#define  LVS_SORTASCENDING    0x0010              
#define  LVS_SORTDESCENDING   0x0020              
#define  LVS_TYPEMASK         0x0003              

// Bitmaps
#define  OBM_BTNCORNERS       32758               
#define  OBM_BTSIZE           32761               
#define  OBM_CHECK            32760               
#define  OBM_CHECKBOXES       32759               
#define  OBM_CLOSE            32754               
#define  OBM_COMBO            32738               
#define  OBM_DNARROW          32752               
#define  OBM_DNARROWD         32742               
#define  OBM_DNARROWI         32736               
#define  OBM_LFARROW          32750               
#define  OBM_LFARROWD         32740               
#define  OBM_LFARROWI         32734               
#define  OBM_MNARROW          32739               
#define  OBM_OLD_CLOSE        32767               
#define  OBM_OLD_DNARROW      32764               
#define  OBM_OLD_LFARROW      32762               
#define  OBM_OLD_REDUCE       32757               
#define  OBM_OLD_RESTORE      32755               
#define  OBM_OLD_RGARROW      32763               
#define  OBM_OLD_UPARROW      32765               
#define  OBM_OLD_ZOOM         32756               
#define  OBM_REDUCE           32749               
#define  OBM_REDUCED          32746               
#define  OBM_RESTORE          32747               
#define  OBM_RESTORED         32744               
#define  OBM_RGARROW          32751               
#define  OBM_RGARROWD         32741               
#define  OBM_RGARROWI         32735               
#define  OBM_SIZE             32766               
#define  OBM_UPARROW          32753               
#define  OBM_UPARROWD         32743               
#define  OBM_UPARROWI         32737               
#define  OBM_ZOOM             32748               
#define  OBM_ZOOMD            32745             

// Cursors
#define  OCR_APPSTARTING      32650               
#define  OCR_CROSS            32515               
#define  OCR_IBEAM            32513               
#define  OCR_ICOCUR           32647               
#define  OCR_ICON             32641               
#define  OCR_NO               32648               
#define  OCR_NORMAL           32512               
#define  OCR_SIZE             32640               
#define  OCR_SIZEALL          32646               
#define  OCR_SIZENESW         32643               
#define  OCR_SIZENS           32645               
#define  OCR_SIZENWSE         32642               
#define  OCR_SIZEWE           32644               
#define  OCR_UP               32516               
#define  OCR_WAIT             32514               

// Icons
#define  OIC_BANG             32515               
#define  OIC_HAND             32513               
#define  OIC_NOTE             32516               
#define  OIC_QUES             32514               
#define  OIC_SAMPLE           32512               
#define  OIC_WINLOGO          32517            

#define  OIC_WARNING          OIC_BANG            
#define  OIC_ERROR            OIC_HAND            
#define  OIC_INFORMATION      OIC_NOTE            

// Scroll bar styles
#define  SBARS_SIZEGRIP       0x0100              
#define  SBS_BOTTOMALIGN      0x0004L             
#define  SBS_LEFTALIGN        0x0002L             
#define  SBS_RIGHTALIGN       0x0004L             
#define  SBS_SIZEBOX          0x0008L             
#define  SBS_SIZEBOXBOTTOMRIGHTALIGN 0x0004L             
#define  SBS_SIZEBOXTOPLEFTALIGN 0x0002L             
#define  SBS_SIZEGRIP         0x0010L             
#define  SBS_TOPALIGN         0x0002L             

// System commands
#define  SC_ARRANGE           0xF110              
#define  SC_HOTKEY            0xF150              
#define  SC_HSCROLL           0xF080              
#define  SC_MAXIMIZE          0xF030              
#define  SC_MINIMIZE          0xF020              
#define  SC_MOUSEMENU         0xF090              
#define  SC_MOVE              0xF010              
#define  SC_NEXTWINDOW        0xF040              
#define  SC_PREVWINDOW        0xF050              
#define  SC_RESTORE           0xF120              
#define  SC_SCREENSAVE        0xF140              
#define  SC_SIZE              0xF000              
#define  SC_TASKLIST          0xF130              
#define  SC_VSCROLL           0xF070              

// Label/Static styles
#define  SS_BLACKFRAME        0x00000007L         
#define  SS_BLACKRECT         0x00000004L         
#define  SS_ENHMETAFILE       0x0000000FL         
#define  SS_ETCHEDFRAME       0x00000012L         
#define  SS_ETCHEDHORZ        0x00000010L         
#define  SS_ETCHEDVERT        0x00000011L         
#define  SS_GRAYFRAME         0x00000008L         
#define  SS_GRAYRECT          0x00000005L         
#define  SS_OWNERDRAW         0x0000000DL         
#define  SS_REALSIZEIMAGE     0x00000800L         
#define  SS_RIGHTJUST         0x00000400L         
#define  SS_SIMPLE            0x0000000BL         
#define  SS_SUNKEN            0x00001000L         
#define  SS_WHITEFRAME        0x00000009L         
#define  SS_WHITERECT         0x00000006L         

// Customizable column-width tracking control
#define  TBS_AUTOTICKS        0x0001              
#define  TBS_BOTH             0x0008              
#define  TBS_BOTTOM           0x0000              
#define  TBS_ENABLESELRANGE   0x0020              
#define  TBS_FIXEDLENGTH      0x0040              
#define  TBS_HORZ             0x0000              
#define  TBS_LEFT             0x0004              
#define  TBS_NOTHUMB          0x0080              
#define  TBS_NOTICKS          0x0010              
#define  TBS_RIGHT            0x0000              
#define  TBS_TOP              0x0004              
#define  TBS_VERT             0x0002              

// Tab control
#define  TCS_BUTTONS          0x0100              
#define  TCS_FIXEDWIDTH       0x0400              
#define  TCS_FOCUSNEVER       0x8000              
#define  TCS_FOCUSONBUTTONDOWN 0x1000              
#define  TCS_FORCEICONLEFT    0x0010              
#define  TCS_FORCELABELLEFT   0x0020              
#define  TCS_MULTILINE        0x0200              
#define  TCS_OWNERDRAWFIXED   0x2000              
#define  TCS_RAGGEDRIGHT      0x0800              
#define  TCS_RIGHTJUSTIFY     0x0000              
#define  TCS_SHAREIMAGELISTS  0x0040              
#define  TCS_SINGLELINE       0x0000              
#define  TCS_TABS             0x0000              
#define  TCS_TOOLTIPS         0x4000              

// tooltips
#define  TTS_ALWAYSTIP        0x01                
#define  TTS_NOPREFIX         0x02            

// TreeView control
#define  TVS_DISABLEDRAGDROP  0x0010              
#define  TVS_EDITLABELS       0x0008              
#define  TVS_HASBUTTONS       0x0001              
#define  TVS_HASLINES         0x0002              
#define  TVS_LINESATROOT      0x0004              
#define  TVS_SHOWSELALWAYS    0x0020              

// Up and Down arrow increment/decrement control
#define  UDS_ALIGNLEFT        0x0008              
#define  UDS_ALIGNRIGHT       0x0004              
#define  UDS_ARROWKEYS        0x0020              
#define  UDS_AUTOBUDDY        0x0010              
#define  UDS_HORZ             0x0040              
#define  UDS_NOTHOUSANDS      0x0080              
#define  UDS_SETBUDDYINT      0x0002              
#define  UDS_WRAP             0x0001              

#ifndef WS_OVERLAPPED
#define  WS_OVERLAPPED        0x00000000L
#endif

// Common extended styles
#define  WS_EX_ACCEPTFILES    0x00000010L         
#define  WS_EX_APPWINDOW      0x00040000L         
#define  WS_EX_CONTROLPARENT  0x00010000L         
#define  WS_EX_LEFT           0x00000000L         
#define  WS_EX_LTRREADING     0x00000000L         
#define  WS_EX_MDICHILD       0x00000040L         
#define  WS_EX_NOPARENTNOTIFY 0x00000004L         
#define  WS_EX_PALETTEWINDOW  (WS_EX_WINDOWEDGE | WS_EX_TOOLWINDOW | WS_EX_TOPMOST)
#define  WS_EX_RIGHTSCROLLBAR 0x00000000L         
#define  WS_EX_TRANSPARENT    0x00000020L         
#define  WS_MAXIMIZE          0x01000000L         
#define  WS_MINIMIZE          0x20000000L         

#define  WS_OVERLAPPEDWINDOW  (WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_THICKFRAME | WS_MINIMIZEBOX | WS_MAXIMIZEBOX)
#define  WS_POPUPWINDOW       (WS_POPUP | WS_BORDER | WS_SYSMENU)
#define  WS_CHILDWINDOW       (WS_CHILD)          
#define  WS_TILED             WS_OVERLAPPED       
#define  WS_ICONIC            WS_MINIMIZE        
#define  WS_TILEDWINDOW       WS_OVERLAPPEDWINDOW 

// 32-bit language/sub-language identifiers

#ifndef LANG_NEUTRAL
// Primary language IDs.
#define LANG_NEUTRAL                     0x00

#define LANG_BULGARIAN                   0x02
#define LANG_CHINESE                     0x04
#define LANG_CROATIAN                    0x1a
#define LANG_CZECH                       0x05
#define LANG_DANISH                      0x06
#define LANG_DUTCH                       0x13
#define LANG_ENGLISH                     0x09
#define LANG_FINNISH                     0x0b
#define LANG_FRENCH                      0x0c
#define LANG_GERMAN                      0x07
#define LANG_GREEK                       0x08
#define LANG_HUNGARIAN                   0x0e
#define LANG_ICELANDIC                   0x0f
#define LANG_ITALIAN                     0x10
#define LANG_JAPANESE                    0x11
#define LANG_KOREAN                      0x12
#define LANG_NORWEGIAN                   0x14
#define LANG_POLISH                      0x15
#define LANG_PORTUGUESE                  0x16
#define LANG_ROMANIAN                    0x18
#define LANG_RUSSIAN                     0x19
#define LANG_SLOVAK                      0x1b
#define LANG_SLOVENIAN                   0x24
#define LANG_SPANISH                     0x0a
#define LANG_SWEDISH                     0x1d
#define LANG_TURKISH                     0x1f
#endif //!LANG_NEUTRAL

#ifndef SUBLANG_NEUTRAL
// Sublanguage IDs.
#define SUBLANG_NEUTRAL                  0x00
#define SUBLANG_DEFAULT                  0x01
#define SUBLANG_SYS_DEFAULT              0x02

#define SUBLANG_CHINESE_TRADITIONAL      0x01
#define SUBLANG_CHINESE_SIMPLIFIED       0x02
#define SUBLANG_CHINESE_HONGKONG         0x03
#define SUBLANG_CHINESE_SINGAPORE        0x04
#define SUBLANG_DUTCH                    0x01
#define SUBLANG_DUTCH_BELGIAN            0x02
#define SUBLANG_ENGLISH_US               0x01
#define SUBLANG_ENGLISH_UK               0x02
#define SUBLANG_ENGLISH_AUS              0x03
#define SUBLANG_ENGLISH_CAN              0x04
#define SUBLANG_ENGLISH_NZ               0x05
#define SUBLANG_ENGLISH_EIRE             0x06
#define SUBLANG_FRENCH                   0x01
#define SUBLANG_FRENCH_BELGIAN           0x02
#define SUBLANG_FRENCH_CANADIAN          0x03
#define SUBLANG_FRENCH_SWISS             0x04
#define SUBLANG_GERMAN                   0x01
#define SUBLANG_GERMAN_SWISS             0x02
#define SUBLANG_GERMAN_AUSTRIAN          0x03
#define SUBLANG_ITALIAN                  0x01
#define SUBLANG_ITALIAN_SWISS            0x02
#define SUBLANG_NORWEGIAN_BOKMAL         0x01
#define SUBLANG_NORWEGIAN_NYNORSK        0x02
#define SUBLANG_PORTUGUESE               0x02
#define SUBLANG_PORTUGUESE_BRAZILIAN     0x01
#define SUBLANG_SPANISH                  0x01
#define SUBLANG_SPANISH_MEXICAN          0x02
#define SUBLANG_SPANISH_MODERN           0x03
#endif //!SUBLANG_NEUTRAL

#pragma warning(default:4005)

#endif // __RCDEF_H__
