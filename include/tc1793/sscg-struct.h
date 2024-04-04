/* (c) HighTec EDV-Systeme GmbH */
#ifndef _TC1793_SSCG_STRUCTS_H_
#define _TC1793_SSCG_STRUCTS_H_
/*
   TriCore TC1793
   Some struct definitions for conveniance
*/

#include <tc1793/sscg0.h>
#ifndef SSCG0_BASE
#define SSCG0_BASE 0xf0310800
#endif /* SSCG0_BASE */

#include <tc1793/sscg1.h>
#ifndef SSCG1_BASE
#define SSCG1_BASE 0xf0310a00
#endif /* SSCG1_BASE */

#include <tc1793/sscg2.h>
#ifndef SSCG2_BASE
#define SSCG2_BASE 0xf0310c00
#endif /* SSCG2_BASE */

#include <tc1793/sscg3.h>
#ifndef SSCG3_BASE
#define SSCG3_BASE 0xf0310e00
#endif /* SSCG3_BASE */


typedef struct
{
    SSCGn_CLC_t     CLC;                /* 0x0 */
    SSCGn_PISEL_t   PISEL;              /* 0x4 */
    SSCGn_ID_t      ID;                 /* 0x8 */
    SSCGn_FDR_t     FDR;                /* 0xc */
    SSCGn_CON_t     CON;                /* 0x10 */
    SSCGn_BR_t      BR;                 /* 0x14 */
    SSCGn_SSOC_t    SSOC;               /* 0x18 */
    SSCGn_SSOTC_t   SSOTC;              /* 0x1c */
    SSCGn_TB_t      TB;                 /* 0x20 */
    SSCGn_RB_t      RB;                 /* 0x24 */
    SSCGn_STAT_t    STAT;               /* 0x28 */
    SSCGn_EFM_t     EFM;                /* 0x2c */
    unsigned int    reserved12[0x34];   /* 0x30 */
    SSCGn_TB1_t     TB1;                /* 0x100 */
    SSCGn_TB1SNAP_t TB1SNAP;            /* 0x104 */
    SSCGn_RBSNAP_t  RBSNAP;             /* 0x108 */
    SSCGn_GSTAT_t   GSTAT;              /* 0x10c */
    SSCGn_GEFM_t    GEFM;               /* 0x110 */
    SSCGn_GEN_t     GEN;                /* 0x114 */
    unsigned int    reserved19[0x39];   /* 0x118 */
    SSCGn_GSRC_t    GSRC;               /* 0x1fc */
} SSCG_t;

#endif /* _TC1793_SSCG_STRUCTS_H_ */
