/* (c) HighTec EDV-Systeme GmbH */
#ifndef _TC1728_PORT11_STRUCTS_H_
#define _TC1728_PORT11_STRUCTS_H_
/*
   TriCore TC1728
   Some struct definitions for conveniance
*/

#include <tc1728/p11.h>
#ifndef P11_BASE
#define P11_BASE 0xf0001700
#endif /* P11_BASE */


typedef struct
{
    unsigned int    reserved0[0x4];     /* 0x0 */
    Pn_IOCRm_t      IOCR0;              /* 0x10 */
    Pn_IOCRm_t      IOCR4;              /* 0x14 */
    Pn_IOCRm_t      IOCR8;              /* 0x18 */
    Pn_IOCRm_t      IOCR12;             /* 0x1c */
    unsigned int    reserved5[0x1];     /* 0x20 */
    Pn_IN_t         IN;                 /* 0x24 */
    unsigned int    reserved7[0xe];     /* 0x28 */
    P11_PDISC_t     PDISC;              /* 0x60 */
} PORT11_t;

#endif /* _TC1728_PORT11_STRUCTS_H_ */
