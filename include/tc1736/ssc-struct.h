/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _TC1736_SSC_STRUCTS_H_
#define _TC1736_SSC_STRUCTS_H_
/*
   TriCore TC1736
   Some struct definitions for conveniance
*/

#include <tc1736/ssc0.h>
#ifndef SSC0_BASE
#define SSC0_BASE 0xf0100100
#endif /* SSC0_BASE */

#include <tc1736/ssc1.h>
#ifndef SSC1_BASE
#define SSC1_BASE 0xf0100200
#endif /* SSC1_BASE */


typedef struct
{
    SSCn_CLC_t      CLC;                /* 0x0 */
    SSCn_PISEL_t    PISEL;              /* 0x4 */
    SSCn_ID_t       ID;                 /* 0x8 */
    SSCn_FDR_t      FDR;                /* 0xc */
    SSCn_CON_t      CON;                /* 0x10 */
    SSCn_BR_t       BR;                 /* 0x14 */
    SSCn_SSOC_t     SSOC;               /* 0x18 */
    SSCn_SSOTC_t    SSOTC;              /* 0x1c */
    SSCn_TB_t       TB;                 /* 0x20 */
    SSCn_RB_t       RB;                 /* 0x24 */
    SSCn_STAT_t     STAT;               /* 0x28 */
    SSCn_EFM_t      EFM;                /* 0x2c */
    unsigned int    reserved12[0x31];   /* 0x30 */
    SSCn_TSRC_t     TSRC;               /* 0xf4 */
    SSCn_RSRC_t     RSRC;               /* 0xf8 */
    SSCn_ESRC_t     ESRC;               /* 0xfc */
} SSC_t;

#endif /* _TC1736_SSC_STRUCTS_H_ */
