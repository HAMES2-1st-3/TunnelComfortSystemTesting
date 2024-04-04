/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _TC1796B_PORT5_STRUCTS_H_
#define _TC1796B_PORT5_STRUCTS_H_
/*
   TriCore TC1796B
   Some struct definitions for conveniance
*/

#include <tc1796b/p5.h>
#ifndef P5_BASE
#define P5_BASE 0xf0001100
#endif /* P5_BASE */


typedef struct
{
    Pn_OUT_t        OUT;                /* 0x0 */
    P5_OMR_t        OMR;                /* 0x4 */
    unsigned int    reserved2[0x2];     /* 0x8 */
    Pn_IOCRm_t      IOCR0;              /* 0x10 */
    Pn_IOCRm_t      IOCR4;              /* 0x14 */
    unsigned int    reserved5[0x3];     /* 0x18 */
    Pn_IN_t         IN;                 /* 0x24 */
    unsigned int    reserved7[0x6];     /* 0x28 */
    P5_PDR_t        PDR;                /* 0x40 */
} PORT5_t;

#endif /* _TC1796B_PORT5_STRUCTS_H_ */
