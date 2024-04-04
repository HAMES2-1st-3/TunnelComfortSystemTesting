/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _TC1130B_ASC_STRUCTS_H_
#define _TC1130B_ASC_STRUCTS_H_
/*
   TriCore TC1130B
   Some struct definitions for conveniance
*/

#include <tc1130b/asc0.h>
#ifndef ASC0_BASE
#define ASC0_BASE 0xf0100300
#endif /* ASC0_BASE */

#include <tc1130b/asc1.h>
#ifndef ASC1_BASE
#define ASC1_BASE 0xf0100400
#endif /* ASC1_BASE */

#include <tc1130b/asc2.h>
#ifndef ASC2_BASE
#define ASC2_BASE 0xf0100500
#endif /* ASC2_BASE */


typedef struct
{
    ASCn_CLC_t      CLC;                /* 0x0 */
    ASCn_PISEL_t    PISEL;              /* 0x4 */
    ASCn_ID_t       ID;                 /* 0x8 */
    unsigned int    reserved3[0x1];     /* 0xc */
    ASCn_CON_t      CON;                /* 0x10 */
    ASCn_BG_t       BG;                 /* 0x14 */
    ASCn_FDV_t      FDV;                /* 0x18 */
    ASCn_PMW_t      PMW;                /* 0x1c */
    ASCn_TBUF_t     TBUF;               /* 0x20 */
    ASCn_RBUF_t     RBUF;               /* 0x24 */
    unsigned int    reserved10[0x6];    /* 0x28 */
    ASCn_RXFCON_t   RXFCON;             /* 0x40 */
    ASCn_TXFCON_t   TXFCON;             /* 0x44 */
    ASCn_FSTAT_t    FSTAT;              /* 0x48 */
    unsigned int    reserved14[0x1];    /* 0x4c */
    ASCn_WHBCON_t   WHBCON;             /* 0x50 */
    unsigned int    reserved16[0x27];   /* 0x54 */
    ASCn_TSRC_t     TSRC;               /* 0xf0 */
    ASCn_RSRC_t     RSRC;               /* 0xf4 */
    ASCn_ESRC_t     ESRC;               /* 0xf8 */
    ASCn_TBSRC_t    TBSRC;              /* 0xfc */
} ASC_t;

#endif /* _TC1130B_ASC_STRUCTS_H_ */
