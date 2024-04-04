/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _TC1784_PORT6_STRUCTS_H_
#define _TC1784_PORT6_STRUCTS_H_
/*
   TriCore TC1784
   Some struct definitions for conveniance
*/

#include <tc1784/p6.h>
#ifndef P6_BASE
#define P6_BASE 0xf0001200
#endif /* P6_BASE */


typedef struct
{
    Pn_OUT_t        OUT;                /* 0x0 */
    Pn_OMR_t        OMR;                /* 0x4 */
    unsigned int    reserved2[0x2];     /* 0x8 */
    Pn_IOCRm_t      IOCR0;              /* 0x10 */
    unsigned int    reserved4[0x4];     /* 0x14 */
    Pn_IN_t         IN;                 /* 0x24 */
    unsigned int    reserved6[0x6];     /* 0x28 */
    P6_PDR_t        PDR;                /* 0x40 */
    unsigned int    reserved8[0x3];     /* 0x44 */
    Pn_ESR_t        ESR;                /* 0x50 */
} PORT6_t;

#endif /* _TC1784_PORT6_STRUCTS_H_ */
