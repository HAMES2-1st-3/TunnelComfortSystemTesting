/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "P1 LL" of TriCore TC1766B (9 SFRs) */

#include <tc1766b/p1/addr.h>

#include <tc1766b/p1/masks.h>
#include <tc1766b/p0_p1_p2_p3_p4_p5/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1766b/p1/types.h>
#include <tc1766b/p0_p1_p2_p3_p4_p5/sharetypes.h>

#ifndef _HAVE_TRICORE_P1_H_
#define _HAVE_TRICORE_P1_H_

#include <tricore-abs-noabs.h>

SFR_ABS (P1_ESR, P1_ESR_t, P1_ESR_ADDR);          /* "Port 1 Emergency Stop Register" */
SFR_ABS (P1_IN, P1_IN_t, P1_IN_ADDR);             /* "Port 1 Input Register" */
SFR_ABS (P1_IOCR0, Pn_IOCRm_t, P1_IOCR0_ADDR);    /* "Input/Output Control Register 0" */
SFR_ABS (P1_IOCR12, P1_IOCR12_t, P1_IOCR12_ADDR); /* "Input/Output Control Register 12" */
SFR_ABS (P1_IOCR4, Pn_IOCRm_t, P1_IOCR4_ADDR);    /* "Input/Output Control Register 4" */
SFR_ABS (P1_IOCR8, Pn_IOCRm_t, P1_IOCR8_ADDR);    /* "Input/Output Control Register 8" */
SFR_ABS (P1_OMR, P1_OMR_t, P1_OMR_ADDR);          /* "Port 1 Output Modification Register" */
SFR_ABS (P1_OUT, P1_OUT_t, P1_OUT_ADDR);          /* "Port 1 Data Output Register" */
SFR_ABS (P1_PDR, P1_PDR_t, P1_PDR_ADDR);          /* "Port 1 Pad Driver Mode Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P1_H_ (block "P1 LL") */


