/* (c) HighTec EDV-Systeme GmbH */
#ifndef _TC1793_PORT7_STRUCTS_H_
#define _TC1793_PORT7_STRUCTS_H_
/*
   TriCore TC1793
   Some struct definitions for conveniance
*/

#include <tc1793/p7.h>
#ifndef P7_BASE
#define P7_BASE 0xf0001300
#endif /* P7_BASE */


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
} PORT7_t;

#endif /* _TC1793_PORT7_STRUCTS_H_ */
