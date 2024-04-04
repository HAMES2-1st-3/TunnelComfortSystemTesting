/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "P2 LL" of TriCore TC1766B (9 SFRs) */

#include <tc1766b/p2/addr.h>

#include <tc1766b/p2/masks.h>
#include <tc1766b/p0_p1_p2_p3_p4_p5/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1766b/p2/types.h>
#include <tc1766b/p0_p1_p2_p3_p4_p5/sharetypes.h>

#ifndef _HAVE_TRICORE_P2_H_
#define _HAVE_TRICORE_P2_H_

#include <tricore-abs-noabs.h>

SFR_ABS (P2_ESR, Pn_ESR_t, P2_ESR_ADDR);          /* "Port 2 Emergency Stop Register" */
SFR_ABS (P2_IN, P2_IN_t, P2_IN_ADDR);             /* "Port 2 Input Register" */
SFR_ABS (P2_IOCR0, Pn_IOCRm_t, P2_IOCR0_ADDR);    /* "Input/Output Control Register 0" */
SFR_ABS (P2_IOCR12, P2_IOCR12_t, P2_IOCR12_ADDR); /* "Input/Output Control Register 12" */
SFR_ABS (P2_IOCR4, Pn_IOCRm_t, P2_IOCR4_ADDR);    /* "Input/Output Control Register 4" */
SFR_ABS (P2_IOCR8, Pn_IOCRm_t, P2_IOCR8_ADDR);    /* "Input/Output Control Register 8" */
SFR_ABS (P2_OMR, P2_OMR_t, P2_OMR_ADDR);          /* "Port 2 Output Modification Register" */
SFR_ABS (P2_OUT, P2_OUT_t, P2_OUT_ADDR);          /* "Output Register" */
SFR_ABS (P2_PDR, P2_PDR_t, P2_PDR_ADDR);          /* "Port 2 Pad Driver Mode Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P2_H_ (block "P2 LL") */


