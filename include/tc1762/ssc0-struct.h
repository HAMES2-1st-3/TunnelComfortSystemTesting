/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _TC1762_SSC0_STRUCTS_H_
#define _TC1762_SSC0_STRUCTS_H_
/*
   TriCore TC1762
   Some struct definitions for conveniance
*/

#include <tc1762/ssc0.h>
#ifndef SSC0_BASE
#define SSC0_BASE 0xf0100100
#endif /* SSC0_BASE */


typedef struct
{
    SSC0_CLC_t      CLC;                /* 0x0 */
    SSC0_PISEL_t    PISEL;              /* 0x4 */
    SSC0_ID_t       ID;                 /* 0x8 */
    SSC0_FDR_t      FDR;                /* 0xc */
    SSC0_CON_t      CON;                /* 0x10 */
    SSC0_BR_t       BR;                 /* 0x14 */
    SSC0_SSOC_t     SSOC;               /* 0x18 */
    SSC0_SSOTC_t    SSOTC;              /* 0x1c */
    SSC0_TB_t       TB;                 /* 0x20 */
    SSC0_RB_t       RB;                 /* 0x24 */
    SSC0_STAT_t     STAT;               /* 0x28 */
    SSC0_EFM_t      EFM;                /* 0x2c */
    unsigned int    reserved12[0x31];   /* 0x30 */
    SSC0_TSRC_t     TSRC;               /* 0xf4 */
    SSC0_RSRC_t     RSRC;               /* 0xf8 */
    SSC0_ESRC_t     ESRC;               /* 0xfc */
} SSC0_t;

#endif /* _TC1762_SSC0_STRUCTS_H_ */
