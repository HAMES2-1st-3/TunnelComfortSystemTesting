/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _TC1792_PORT9_STRUCTS_H_
#define _TC1792_PORT9_STRUCTS_H_
/*
   TriCore TC1792
   Some struct definitions for conveniance
*/

#include <tc1792/p9.h>
#ifndef P9_BASE
#define P9_BASE 0xf0001500
#endif /* P9_BASE */


typedef struct
{
    P9_OUT_t        OUT;                /* 0x0 */
    P9_OMR_t        OMR;                /* 0x4 */
    unsigned int    reserved2[0x2];     /* 0x8 */
    Pn_IOCRm_t      IOCR0;              /* 0x10 */
    Pn_IOCRm_t      IOCR4;              /* 0x14 */
    P9_IOCR8_t      IOCR8;              /* 0x18 */
    unsigned int    reserved6[0x2];     /* 0x1c */
    P9_IN_t         IN;                 /* 0x24 */
    unsigned int    reserved8[0x6];     /* 0x28 */
    P9_PDR_t        PDR;                /* 0x40 */
    unsigned int    reserved10[0x3];    /* 0x44 */
    P9_ESR_t        ESR;                /* 0x50 */
} PORT9_t;

#endif /* _TC1792_PORT9_STRUCTS_H_ */
