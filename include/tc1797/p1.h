/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "P1" of TriCore TC1797 (9 SFRs) */

#include <tc1797/p1/addr.h>

#include <tc1797/p1/masks.h>
#include <tc1797/p0_p1_p10_p11_p12_p13_p14_p15_p16_p2_p3_p4_p5_p6_p7_p8_p9/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1797/p1/types.h>
#include <tc1797/p0_p1_p10_p11_p12_p13_p14_p15_p16_p2_p3_p4_p5_p6_p7_p8_p9/sharetypes.h>

#ifndef _HAVE_TRICORE_P1_H_
#define _HAVE_TRICORE_P1_H_

#include <tricore-abs-noabs.h>

SFR_ABS (P1_ESR, Pn_ESR_t, P1_ESR_ADDR);          /* "Port 1 Emergency Stop Register" */
SFR_ABS (P1_IN, Pn_IN_t, P1_IN_ADDR);             /* "Port 1 Input Register" */
SFR_ABS (P1_IOCR0, Pn_IOCRm_t, P1_IOCR0_ADDR);    /* "Port 1 Input/Output Control Register 0" */
SFR_ABS (P1_IOCR12, Pn_IOCRm_t, P1_IOCR12_ADDR);  /* "Port 1 Input/Output Control Register 12" */
SFR_ABS (P1_IOCR4, Pn_IOCRm_t, P1_IOCR4_ADDR);    /* "Port 1 Input/Output Control Register 4" */
SFR_ABS (P1_IOCR8, Pn_IOCRm_t, P1_IOCR8_ADDR);    /* "Port 1 Input/Output Control Register 8" */
SFR_ABS (P1_OMR, Pn_OMR_t, P1_OMR_ADDR);          /* "Port 1 Output Modification Register" */
SFR_ABS (P1_OUT, Pn_OUT_t, P1_OUT_ADDR);          /* "Port 1 Output Register" */
SFR_ABS (P1_PDR, P1_PDR_t, P1_PDR_ADDR);          /* "Port 1 Pad Driver Mode Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P1_H_ (block "P1") */


