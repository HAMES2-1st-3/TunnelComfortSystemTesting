/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "P4 LL" of TriCore TC1766B (6 SFRs) */

#include <tc1766b/p4/addr.h>

#include <tc1766b/p4/masks.h>
#include <tc1766b/p0_p1_p2_p3_p4_p5/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1766b/p4/types.h>
#include <tc1766b/p0_p1_p2_p3_p4_p5/sharetypes.h>

#ifndef _HAVE_TRICORE_P4_H_
#define _HAVE_TRICORE_P4_H_

#include <tricore-abs-noabs.h>

SFR_ABS (P4_ESR, P4_ESR_t, P4_ESR_ADDR);          /* "Port 4 Emergency Stop Register" */
SFR_ABS (P4_IN, P4_IN_t, P4_IN_ADDR);             /* "Port 4 Input Register" */
SFR_ABS (P4_IOCR0, Pn_IOCRm_t, P4_IOCR0_ADDR);    /* "Input/Output Control Register 0" */
SFR_ABS (P4_OMR, P4_OMR_t, P4_OMR_ADDR);          /* "Port 4 Output Modification Register" */
SFR_ABS (P4_OUT, P4_OUT_t, P4_OUT_ADDR);          /* "Output Register" */
SFR_ABS (P4_PDR, P4_PDR_t, P4_PDR_ADDR);          /* "Port 4 Pad Driver Mode Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P4_H_ (block "P4 LL") */


