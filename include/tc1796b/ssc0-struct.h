/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _TC1796B_SSC0_STRUCTS_H_
#define _TC1796B_SSC0_STRUCTS_H_
/*
   TriCore TC1796B
   Some struct definitions for conveniance
*/

#include <tc1796b/ssc0.h>
#ifndef SSC0_BASE
#define SSC0_BASE 0xf0100100
#endif /* SSC0_BASE */


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
    SSC0_RXFCON_t   RXFCON;             /* 0x30 */
    SSC0_TXFCON_t   TXFCON;             /* 0x34 */
    SSC0_FSTAT_t    FSTAT;              /* 0x38 */
    unsigned int    reserved15[0x2e];   /* 0x3c */
    SSCn_TSRC_t     TSRC;               /* 0xf4 */
    SSCn_RSRC_t     RSRC;               /* 0xf8 */
    SSCn_ESRC_t     ESRC;               /* 0xfc */
} SSC0_t;

#endif /* _TC1796B_SSC0_STRUCTS_H_ */
