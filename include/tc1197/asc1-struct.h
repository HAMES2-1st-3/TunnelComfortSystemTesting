/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _TC1197_ASC1_STRUCTS_H_
#define _TC1197_ASC1_STRUCTS_H_
/*
   TriCore TC1197
   Some struct definitions for conveniance
*/

#include <tc1197/asc1.h>
#ifndef ASC1_BASE
#define ASC1_BASE 0xf0000b00
#endif /* ASC1_BASE */


typedef struct
{
    unsigned int    reserved0[0x1];     /* 0x0 */
    ASCn_PISEL_t    PISEL;              /* 0x4 */
    ASCn_ID_t       ID;                 /* 0x8 */
    unsigned int    reserved3[0x1];     /* 0xc */
    ASCn_CON_t      CON;                /* 0x10 */
    ASCn_BG_t       BG;                 /* 0x14 */
    ASCn_FDV_t      FDV;                /* 0x18 */
    unsigned int    reserved7[0x1];     /* 0x1c */
    ASCn_TBUF_t     TBUF;               /* 0x20 */
    ASCn_RBUF_t     RBUF;               /* 0x24 */
    unsigned int    reserved10[0xa];    /* 0x28 */
    ASCn_WHBCON_t   WHBCON;             /* 0x50 */
    unsigned int    reserved12[0x27];   /* 0x54 */
    ASCn_TSRC_t     TSRC;               /* 0xf0 */
    ASCn_RSRC_t     RSRC;               /* 0xf4 */
    ASCn_ESRC_t     ESRC;               /* 0xf8 */
    ASCn_TBSRC_t    TBSRC;              /* 0xfc */
} ASC1_t;

#endif /* _TC1197_ASC1_STRUCTS_H_ */
