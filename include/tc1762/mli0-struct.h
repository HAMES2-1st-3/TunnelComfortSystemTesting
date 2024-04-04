/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _TC1762_MLI0_STRUCTS_H_
#define _TC1762_MLI0_STRUCTS_H_
/*
   TriCore TC1762
   Some struct definitions for conveniance
*/

#include <tc1762/mli0.h>
#ifndef MLI0_BASE
#define MLI0_BASE 0xf010c000
#endif /* MLI0_BASE */


typedef struct
{
    unsigned int    reserved0[0x2];     /* 0x0 */
    MLI0_ID_t       ID;                 /* 0x8 */
    MLI0_FDR_t      FDR;                /* 0xc */
    MLI0_TCR_t      TCR;                /* 0x10 */
    MLI0_TSTATR_t   TSTATR;             /* 0x14 */
    MLI0_TPmSTATR_t TPSTATR[0x4];       /* 0x18 */
    MLI0_TCMDR_t    TCMDR;              /* 0x28 */
    MLI0_TRSTATR_t  TRSTATR;            /* 0x2c */
    MLI0_TPmAOFR_t  TPAOFR[0x4];        /* 0x30 */
    MLI0_TPmDATAR_t TPDATAR[0x4];       /* 0x40 */
    MLI0_TDRAR_t    TDRAR;              /* 0x50 */
    MLI0_TPmBAR_t   TPBAR[0x4];         /* 0x54 */
    MLI0_TCBAR_t    TCBAR;              /* 0x64 */
    MLI0_RCR_t      RCR;                /* 0x68 */
    MLI0_RPmBAR_t   RPBAR[0x4];         /* 0x6c */
    MLI0_RPmSTATR_t RPSTATR[0x4];       /* 0x7c */
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

#endif /* _TC1762_MLI0_STRUCTS_H_ */
