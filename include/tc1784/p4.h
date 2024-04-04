/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "P4" of TriCore TC1784 (6 SFRs) */

#include <tc1784/p4/addr.h>

#include <tc1784/p4/masks.h>
#include <tc1784/p0_p1_p10_p2_p3_p4_p5_p6_p7_p8_p9/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1784/p4/types.h>
#include <tc1784/p0_p1_p10_p2_p3_p4_p5_p6_p7_p8_p9/sharetypes.h>

#ifndef _HAVE_TRICORE_P4_H_
#define _HAVE_TRICORE_P4_H_

#include <tricore-abs-noabs.h>

SFR_ABS (P4_ESR, Pn_ESR_t, P4_ESR_ADDR);          /* "Port 4 Emergency Stop Register" */
SFR_ABS (P4_IN, Pn_IN_t, P4_IN_ADDR);             /* "Port 4 Input Register" */
SFR_ABS (P4_IOCR0, Pn_IOCRm_t, P4_IOCR0_ADDR);    /* "Port 4 Input/Output Control Register 0" */
SFR_ABS (P4_OMR, Pn_OMR_t, P4_OMR_ADDR);          /* "Port 4 Output Modification Register" */
SFR_ABS (P4_OUT, Pn_OUT_t, P4_OUT_ADDR);          /* "Port 4 Output Register" */
SFR_ABS (P4_PDR, P4_PDR_t, P4_PDR_ADDR);          /* "Port 4 Pad Driver Mode Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P4_H_ (block "P4") */


