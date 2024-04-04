/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _TC1736_MLI0_STRUCTS_H_
#define _TC1736_MLI0_STRUCTS_H_
/*
   TriCore TC1736
   Some struct definitions for conveniance
*/

#include <tc1736/mli.h>
#ifndef MLI_BASE
#define MLI_BASE 0xf010c000
#endif /* MLI_BASE */


typedef struct
{
    unsigned int    reserved0[0x2];     /* 0x0 */
    MLI0_ID_t       ID;                 /* 0x8 */
    MLI0_FDR_t      FDR;                /* 0xc */
    MLI0_TCR_t      TCR;                /* 0x10 */
    MLI0_TSTATR_t   TSTATR;             /* 0x14 */
    MLI0_TPmSTATR_t TP0STATR;           /* 0x18 */
    MLI0_TPmSTATR_t TP1STATR;           /* 0x1c */
    MLI0_TPmSTATR_t TP2STATR;           /* 0x20 */
    MLI0_TPmSTATR_t TP3STATR;           /* 0x24 */
    MLI0_TCMDR_t    TCMDR;              /* 0x28 */
    MLI0_TRSTATR_t  TRSTATR;            /* 0x2c */
    MLI0_TPmAOFR_t  TP0AOFR;            /* 0x30 */
    MLI0_TPmAOFR_t  TP1AOFR;            /* 0x34 */
    MLI0_TPmAOFR_t  TP2AOFR;            /* 0x38 */
    MLI0_TPmAOFR_t  TP3AOFR;            /* 0x3c */
    MLI0_TPmDATAR_t TP0DATAR;           /* 0x40 */
    MLI0_TPmDATAR_t TP1DATAR;           /* 0x44 */
    MLI0_TPmDATAR_t TP2DATAR;           /* 0x48 */
    MLI0_TPmDATAR_t TP3DATAR;           /* 0x4c */
    MLI0_TDRAR_t    TDRAR;              /* 0x50 */
    MLI0_TPmBAR_t   TP0BAR;             /* 0x54 */
    MLI0_TPmBAR_t   TP1BAR;             /* 0x58 */
    MLI0_TPmBAR_t   TP2BAR;             /* 0x5c */
    MLI0_TPmBAR_t   TP3BAR;             /* 0x60 */
    MLI0_TCBAR_t    TCBAR;              /* 0x64 */
    MLI0_RCR_t      RCR;                /* 0x68 */
    MLI0_RPmBAR_t   RP0BAR;             /* 0x6c */
    MLI0_RPmBAR_t   RP1BAR;             /* 0x70 */
    MLI0_RPmBAR_t   RP2BAR;             /* 0x74 */
    MLI0_RPmBAR_t   RP3BAR;             /* 0x78 */
    MLI0_RPmSTATR_t RP0STATR;           /* 0x7c */
    MLI0_RPmSTATR_t RP1STATR;           /* 0x80 */
    MLI0_RPmSTATR_t RP2STATR;           /* 0x84 */
    MLI0_RPmSTATR_t RP3STATR;           /* 0x88 */
    MLI0_RADRR_t    RADRR;              /* 0x8c */
    MLI0_RDATAR_t   RDATAR;             /* 0x90 */
    MLI0_SCR_t      SCR;                /* 0x94 */
    MLI0_TIER_t     TIER;               /* 0x98 */
    MLI0_TISR_t     TISR;               /* 0x9c */
    MLI0_TINPR_t    TINPR;              /* 0xa0 */
    MLI0_RIER_t     RIER;               /* 0xa4 */
    MLI0_RISR_t     RISR;               /* 0xa8 */
    MLI0_RINPR_t    RINPR;              /* 0xac */
    MLI0_GINTR_t    GINTR;              /* 0xb0 */
    MLI0_OICR_t     OICR;               /* 0xb4 */
    MLI0_AER_t      AER;                /* 0xb8 */
    MLI0_ARR_t      ARR;                /* 0xbc */
} MLI0_t;

#endif /* _TC1736_MLI0_STRUCTS_H_ */
