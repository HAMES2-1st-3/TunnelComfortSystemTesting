/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _TC1766B_MLI_STRUCTS_H_
#define _TC1766B_MLI_STRUCTS_H_
/*
   TriCore TC1766B
   Some struct definitions for conveniance
*/

#include <tc1766b/mli0.h>
#ifndef MLI0_BASE
#define MLI0_BASE 0xf010c000
#endif /* MLI0_BASE */

#include <tc1766b/mli1.h>
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
    MLIn_TPmSTATR_t TPSTATR[0x4];       /* 0x18 */
    MLIn_TCMDR_t    TCMDR;              /* 0x28 */
    MLIn_TRSTATR_t  TRSTATR;            /* 0x2c */
    MLIn_TPmAOFR_t  TPAOFR[0x4];        /* 0x30 */
    MLIn_TPmDATAR_t TPDATAR[0x4];       /* 0x40 */
    MLIn_TDRAR_t    TDRAR;              /* 0x50 */
    MLIn_TPmBAR_t   TPBAR[0x4];         /* 0x54 */
    MLIn_TCBAR_t    TCBAR;              /* 0x64 */
    MLIn_RCR_t      RCR;                /* 0x68 */
    MLIn_RPmBAR_t   RPBAR[0x4];         /* 0x6c */
    MLIn_RPmSTATR_t RPSTATR[0x4];       /* 0x7c */
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
    MLIn_AER_t      AER;                /* 0xb8 */
    MLIn_ARR_t      ARR;                /* 0xbc */
} MLI_t;

#endif /* _TC1766B_MLI_STRUCTS_H_ */
