/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "P0 LL" of TriCore TC1766B (9 SFRs) */

#include <tc1766b/p0/addr.h>

#include <tc1766b/p0/masks.h>
#include <tc1766b/p0_p1_p2_p3_p4_p5/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1766b/p0/types.h>
#include <tc1766b/p0_p1_p2_p3_p4_p5/sharetypes.h>

#ifndef _HAVE_TRICORE_P0_H_
#define _HAVE_TRICORE_P0_H_

#include <tricore-abs-noabs.h>

SFR_ABS (P0_ESR, P0_ESR_t, P0_ESR_ADDR);          /* "Port 0 Emergency Stop Register" */
SFR_ABS (P0_IN, Pn_IN_t, P0_IN_ADDR);             /* "Port 0 Input Register" */
SFR_ABS (P0_IOCR0, Pn_IOCRm_t, P0_IOCR0_ADDR);    /* "Input/Output Control Register 0" */
SFR_ABS (P0_IOCR12, Pn_IOCRm_t, P0_IOCR12_ADDR);  /* "Input/Output Control Register 12" */
SFR_ABS (P0_IOCR4, Pn_IOCRm_t, P0_IOCR4_ADDR);    /* "Input/Output Control Register 4" */
SFR_ABS (P0_IOCR8, Pn_IOCRm_t, P0_IOCR8_ADDR);    /* "Input/Output Control Register 8" */
SFR_ABS (P0_OMR, Pn_OMR_t, P0_OMR_ADDR);          /* "Port 0 Output Modification Register" */
SFR_ABS (P0_OUT, Pn_OUT_t, P0_OUT_ADDR);          /* "Output Register" */
SFR_ABS (P0_PDR, P0_PDR_t, P0_PDR_ADDR);          /* "Port 0 Pad Driver Mode Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P0_H_ (block "P0 LL") */


