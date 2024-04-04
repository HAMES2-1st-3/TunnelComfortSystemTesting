/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _TC1792_PORT6_STRUCTS_H_
#define _TC1792_PORT6_STRUCTS_H_
/*
   TriCore TC1792
   Some struct definitions for conveniance
*/

#include <tc1792/p6.h>
#ifndef P6_BASE
#define P6_BASE 0xf0001200
#endif /* P6_BASE */


typedef struct
{
    P6_OUT_t        OUT;                /* 0x0 */
    P6_OMR_t        OMR;                /* 0x4 */
    unsigned int    reserved2[0x3];     /* 0x8 */
    Pn_IOCRm_t      IOCR4;              /* 0x14 */
    Pn_IOCRm_t      IOCR8;              /* 0x18 */
    Pn_IOCRm_t      IOCR12;             /* 0x1c */
    unsigned int    reserved6[0x1];     /* 0x20 */
    P6_IN_t         IN;                 /* 0x24 */
    unsigned int    reserved8[0x6];     /* 0x28 */
    P6_PDR_t        PDR;                /* 0x40 */
} PORT6_t;

#endif /* _TC1792_PORT6_STRUCTS_H_ */
