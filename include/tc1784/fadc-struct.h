/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _TC1784_FADC_STRUCTS_H_
#define _TC1784_FADC_STRUCTS_H_
/*
   TriCore TC1784
   Some struct definitions for conveniance
*/

#include <tc1784/fadc.h>
#ifndef FADC_BASE
#define FADC_BASE 0xf0100400
#endif /* FADC_BASE */


typedef struct
{
    FADC_CLC_t      CLC;                /* 0x0 */
    unsigned int    reserved1[0x1];     /* 0x4 */
    FADC_ID_t       ID;                 /* 0x8 */
    FADC_FDR_t      FDR;                /* 0xc */
    FADC_CRSR_t     CRSR;               /* 0x10 */
    FADC_FMR_t      FMR;                /* 0x14 */
    FADC_NCTR_t     NCTR;               /* 0x18 */
    FADC_GCR_t      GCR;                /* 0x1c */
    FADC_CFGRm_t    CFGR0;              /* 0x20 */
    FADC_CFGRm_t    CFGR1;              /* 0x24 */
    FADC_CFGRm_t    CFGR2;              /* 0x28 */
    FADC_CFGRm_t    CFGR3;              /* 0x2c */
    FADC_ACRm_t     ACR0;               /* 0x30 */
    FADC_ACRm_t     ACR1;               /* 0x34 */
    FADC_ACRm_t     ACR2;               /* 0x38 */
    FADC_ACRm_t     ACR3;               /* 0x3c */
    FADC_RCHm_t     RCH0;               /* 0x40 */
    FADC_RCHm_t     RCH1;               /* 0x44 */
    FADC_RCHm_t     RCH2;               /* 0x48 */
    FADC_RCHm_t     RCH3;               /* 0x4c */
    unsigned int    reserved20[0x1];    /* 0x50 */
    FADC_ALR_t      ALR;                /* 0x54 */
    unsigned int    reserved22[0x2];    /* 0x58 */
    FADC_FCRm_t     FCR0;               /* 0x60 */
    FADC_CRRm_t     CRR0;               /* 0x64 */
    FADC_IRR10_t    IRR10;              /* 0x68 */
    FADC_IRR20_t    IRR20;              /* 0x6c */
    FADC_IRR30_t    IRR30;              /* 0x70 */
    FADC_FRR0_t     FRR0;               /* 0x74 */
    unsigned int    reserved29[0x2];    /* 0x78 */
    FADC_FCRm_t     FCR1;               /* 0x80 */
    FADC_CRRm_t     CRR1;               /* 0x84 */
    FADC_IRRm_t     IRR11;              /* 0x88 */
    unsigned int    reserved33[0x2];    /* 0x8c */
    FADC_FRRm_t     FRR1;               /* 0x94 */
    FADC_SFRRm_t    SFRR1;              /* 0x98 */
    unsigned int    reserved36[0x1];    /* 0x9c */
    FADC_FCRm_t     FCR2;               /* 0xa0 */
    FADC_CRRm_t     CRR2;               /* 0xa4 */
    FADC_IRR12_t    IRR12;              /* 0xa8 */
    FADC_IRR22_t    IRR22;              /* 0xac */
    FADC_IRR32_t    IRR32;              /* 0xb0 */
    FADC_FRR2_t     FRR2;               /* 0xb4 */
    unsigned int    reserved43[0x2];    /* 0xb8 */
    FADC_FCRm_t     FCR3;               /* 0xc0 */
    FADC_CRRm_t     CRR3;               /* 0xc4 */
    FADC_IRRm_t     IRR13;              /* 0xc8 */
    unsigned int    reserved47[0x2];    /* 0xcc */
    FADC_FRRm_t     FRR3;               /* 0xd4 */
    FADC_SFRRm_t    SFRR3;              /* 0xd8 */
    unsigned int    reserved50[0x5];    /* 0xdc */
    FADC_SRCm_t     SRC3;               /* 0xf0 */
    FADC_SRCm_t     SRC2;               /* 0xf4 */
    FADC_SRCm_t     SRC1;               /* 0xf8 */
    FADC_SRCm_t     SRC0;               /* 0xfc */
} FADC_t;

#endif /* _TC1784_FADC_STRUCTS_H_ */
