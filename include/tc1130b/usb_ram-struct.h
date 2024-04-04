/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _TC1130B_USB_RAM_STRUCTS_H_
#define _TC1130B_USB_RAM_STRUCTS_H_
/*
   TriCore TC1130B
   Some struct definitions for conveniance
*/

#include <tc1130b/usb_ram.h>
#ifndef USB_RAM_BASE
#define USB_RAM_BASE 0xf00e2000
#endif /* USB_RAM_BASE */

#ifndef _USB_EPP_T_
#define _USB_EPP_T_
typedef struct 
{
    USB_EPUPm_t     EPUP;               /* 0x0 */    
    USB_EPCPm_t     EPCP;               /* 0x4 */    
    USB_EPICm_t     EPIC;               /* 0x8 */    
    USB_EPBCm_t     EPBC;               /* 0xc */    
} USB_EPP_t;
#endif /* _USB_EPP_T_ */



typedef struct
{
    USB_SUTL_t      SUTL;               /* 0x0 */
    USB_SUTH_t      SUTH;               /* 0x4 */
    unsigned int    reserved2[0x2];     /* 0x8 */
    USB_EPP_t       EPP[0x10];          /* 0x10 */
} USB_RAM_t;

#endif /* _TC1130B_USB_RAM_STRUCTS_H_ */
