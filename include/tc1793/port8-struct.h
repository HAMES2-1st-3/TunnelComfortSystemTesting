/* (c) HighTec EDV-Systeme GmbH */
#ifndef _TC1793_PORT8_STRUCTS_H_
#define _TC1793_PORT8_STRUCTS_H_
/*
   TriCore TC1793
   Some struct definitions for conveniance
*/

#include <tc1793/p8.h>
#ifndef P8_BASE
#define P8_BASE 0xf0001400
#endif /* P8_BASE */


typedef struct
{
    Pn_OUT_t        OUT;                /* 0x0 */
    Pn_OMR_t        OMR;                /* 0x4 */
    unsigned int    reserved2[0x2];     /* 0x8 */
    Pn_IOCRm_t      IOCR0;              /* 0x10 */
    Pn_IOCRm_t      IOCR4;              /* 0x14 */
    unsigned int    reserved5[0x3];     /* 0x18 */
    Pn_IN_t         IN;                 /* 0x24 */
    unsigned int    reserved7[0x6];     /* 0x28 */
    Pn_PDRm_t       PDR0;               /* 0x40 */
    Pn_PDRm_t       PDR1;               /* 0x44 */
    unsigned int    reserved10[0x2];    /* 0x48 */
    Pn_ESR_t        ESR;                /* 0x50 */
} PORT8_t;

#endif /* _TC1793_PORT8_STRUCTS_H_ */
