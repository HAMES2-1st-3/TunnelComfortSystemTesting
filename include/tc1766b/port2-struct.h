/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _TC1766B_PORT2_STRUCTS_H_
#define _TC1766B_PORT2_STRUCTS_H_
/*
   TriCore TC1766B
   Some struct definitions for conveniance
*/

#include <tc1766b/p2.h>
#ifndef P2_BASE
#define P2_BASE 0xf0000e00
#endif /* P2_BASE */


typedef struct
{
    P2_OUT_t        OUT;                /* 0x0 */
    P2_OMR_t        OMR;                /* 0x4 */
    unsigned int    reserved2[0x2];     /* 0x8 */
    Pn_IOCRm_t      IOCR0;              /* 0x10 */
    Pn_IOCRm_t      IOCR4;              /* 0x14 */
    Pn_IOCRm_t      IOCR8;              /* 0x18 */
    P2_IOCR12_t     IOCR12;             /* 0x1c */
    unsigned int    reserved7[0x1];     /* 0x20 */
    P2_IN_t         IN;                 /* 0x24 */
    unsigned int    reserved9[0x6];     /* 0x28 */
    P2_PDR_t        PDR;                /* 0x40 */
    unsigned int    reserved11[0x3];    /* 0x44 */
    Pn_ESR_t        ESR;                /* 0x50 */
} PORT2_t;

#endif /* _TC1766B_PORT2_STRUCTS_H_ */
