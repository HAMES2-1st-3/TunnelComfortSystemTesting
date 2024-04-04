/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _TC1130B_USB_STRUCTS_H_
#define _TC1130B_USB_STRUCTS_H_
/*
   TriCore TC1130B
   Some struct definitions for conveniance
*/

#include <tc1130b/usb.h>
#ifndef USB_BASE
#define USB_BASE 0xf00e2800
#endif /* USB_BASE */


typedef struct
{
    USB_CLC_t       CLC;                /* 0x0 */
    USB_PISEL_t     PISEL;              /* 0x4 */
    USB_ID_t        ID;                 /* 0x8 */
    unsigned int    reserved3[0x1];     /* 0xc */
    USB_DCR_t       DCR;                /* 0x10 */
    USB_DSR_t       DSR;                /* 0x14 */
    USB_EPSTL_t     EPSTL;              /* 0x18 */
    USB_EPSSR_t     EPSSR;              /* 0x1c */
    USB_CNFR_t      CNFR;               /* 0x20 */
    USB_FNR_t       FNR;                /* 0x24 */
    USB_EPDIR_t     EPDIR;              /* 0x28 */
    USB_EPDSR_t     EPDSR;              /* 0x2c */
    USB_FCON_t      FCON;               /* 0x30 */
    USB_CPLPR_t     CPLPR;              /* 0x34 */
    USB_DATA32_t    DATA32;             /* 0x38 */
    USB_DATA16_t    DATA16;             /* 0x3c */
    USB_DATA8_t     DATA8;              /* 0x40 */
    USB_EPVLD_t     EPVLD;              /* 0x44 */
    USB_EVSR_t      EVSR;               /* 0x48 */
    USB_DIER_t      DIER;               /* 0x4c */
    USB_DIRR_t      DIRR;               /* 0x50 */
    USB_DIRST_t     DIRST;              /* 0x54 */
    USB_DINP_t      DINP;               /* 0x58 */
    USB_EPIRm_t     EPIR[0x4];          /* 0x5c */
    USB_EPIRSTm_t   EPIRST[0x4];        /* 0x6c */
    USB_EPITm_t     EPIT[0x4];          /* 0x7c */
    USB_DIT_t       DIT;                /* 0x8c */
    USB_ZLPEN_t     ZLPEN;              /* 0x90 */
    USB_ZLPSR_t     ZLPSR;              /* 0x94 */
    unsigned int    reserved29[0x12];   /* 0x98 */
    USB_SRCm_t      SRC7;               /* 0xe0 */
    USB_SRCm_t      SRC6;               /* 0xe4 */
    USB_SRCm_t      SRC5;               /* 0xe8 */
    USB_SRCm_t      SRC4;               /* 0xec */
    USB_SRCm_t      SRC3;               /* 0xf0 */
    USB_SRCm_t      SRC2;               /* 0xf4 */
    USB_SRCm_t      SRC1;               /* 0xf8 */
    USB_SRCm_t      SRC0;               /* 0xfc */
} USB_t;

#endif /* _TC1130B_USB_STRUCTS_H_ */
