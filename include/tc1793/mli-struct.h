/* (c) HighTec EDV-Systeme GmbH */
#ifndef _TC1793_MLI_STRUCTS_H_
#define _TC1793_MLI_STRUCTS_H_
/*
   TriCore TC1793
   Some struct definitions for conveniance
*/

#include <tc1793/mli0.h>
#ifndef MLI0_BASE
#define MLI0_BASE 0xf010c000
#endif /* MLI0_BASE */

#include <tc1793/mli1.h>
#ifndef MLI1_BASE
#define MLI1_BASE 0xf010c100
#endif /* MLI1_BASE */


typedef struct
{
    unsigned int    reserved0[0x2];     /* 0x0 */
    MLIn_ID_t       ID;                 /* 0x8 */
    MLIn_FDR_t      FDR;                /* 0xc */
    MLIn_TCR_t      TCR;                /* 0x10 */
    MLIn_TSTATR_t   TSTATR;             /* 0x14 */
    MLIn_TPmSTATR_t TP0STATR;           /* 0x18 */
    MLIn_TPmSTATR_t TP1STATR;           /* 0x1c */
    MLIn_TPmSTATR_t TP2STATR;           /* 0x20 */
    MLIn_TPmSTATR_t TP3STATR;           /* 0x24 */
    MLIn_TCMDR_t    TCMDR;              /* 0x28 */
    MLIn_TRSTATR_t  TRSTATR;            /* 0x2c */
    MLIn_TPmAOFR_t  TP0AOFR;            /* 0x30 */
    MLIn_TPmAOFR_t  TP1AOFR;            /* 0x34 */
    MLIn_TPmAOFR_t  TP2AOFR;            /* 0x38 */
    MLIn_TPmAOFR_t  TP3AOFR;            /* 0x3c */
    MLIn_TPmDATAR_t TP0DATAR;           /* 0x40 */
    MLIn_TPmDATAR_t TP1DATAR;           /* 0x44 */
    MLIn_TPmDATAR_t TP2DATAR;           /* 0x48 */
    MLIn_TPmDATAR_t TP3DATAR;           /* 0x4c */
    MLIn_TDRAR_t    TDRAR;              /* 0x50 */
    MLIn_TPmBAR_t   TP0BAR;             /* 0x54 */
    MLIn_TPmBAR_t   TP1BAR;             /* 0x58 */
    MLIn_TPmBAR_t   TP2BAR;             /* 0x5c */
    MLIn_TPmBAR_t   TP3BAR;             /* 0x60 */
    MLIn_TCBAR_t    TCBAR;              /* 0x64 */
    MLIn_RCR_t      RCR;                /* 0x68 */
    MLIn_RPmBAR_t   RP0BAR;             /* 0x6c */
    MLIn_RPmBAR_t   RP1BAR;             /* 0x70 */
    MLIn_RPmBAR_t   RP2BAR;             /* 0x74 */
    MLIn_RPmBAR_t   RP3BAR;             /* 0x78 */
    MLIn_RPmSTATR_t RP0STATR;           /* 0x7c */
    MLIn_RPmSTATR_t RP1STATR;           /* 0x80 */
    MLIn_RPmSTATR_t RP2STATR;           /* 0x84 */
    MLIn_RPmSTATR_t RP3STATR;           /* 0x88 */
    MLIn_RADRR_t    RADRR;              /* 0x8c */
    MLIn_RDATAR_t   RDATAR;             /* 0x90 */
    MLIn_SCR_t      SCR;                /* 0x94 */
    MLIn_TIER_t     TIER;               /* 0x98 */
    MLIn_TISR_t     TISR;               /* 0x9c */
    MLIn_TINPR_t    TINPR;              /* 0xa0 */
    MLIn_RIER_t     RIER;               /* 0xa4 */
    MLIn_RISR_t     RISR;               /* 0xa8 */
    MLIn_RINPR_t    RINPR;              /* 0xac */
    MLIn_GINTR_t    GINTR;              /* 0xb0 */
    MLIn_OICR_t     OICR;               /* 0xb4 */
    MLIn_AERm_t     AER0;               /* 0xb8 */
    MLIn_ARRm_t     ARR0;               /* 0xbc */
    MLIn_AERm_t     AER1;               /* 0xc0 */
    MLIn_ARRm_t     ARR1;               /* 0xc4 */
} MLI_t;

#endif /* _TC1793_MLI_STRUCTS_H_ */
