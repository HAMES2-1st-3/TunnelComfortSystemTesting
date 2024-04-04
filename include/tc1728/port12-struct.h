/* (c) HighTec EDV-Systeme GmbH */
#ifndef _TC1728_PORT12_STRUCTS_H_
#define _TC1728_PORT12_STRUCTS_H_
/*
   TriCore TC1728
   Some struct definitions for conveniance
*/

#include <tc1728/p12.h>
#ifndef P12_BASE
#define P12_BASE 0xf0300000
#endif /* P12_BASE */


typedef struct
{
    unsigned int    reserved0[0x4];     /* 0x0 */
    Pn_IOCRm_t      IOCR0;              /* 0x10 */
    unsigned int    reserved2[0x4];     /* 0x14 */
    Pn_IN_t         IN;                 /* 0x24 */
    unsigned int    reserved4[0xe];     /* 0x28 */
    P12_PDISC_t     PDISC;              /* 0x60 */
} PORT12_t;

#endif /* _TC1728_PORT12_STRUCTS_H_ */
