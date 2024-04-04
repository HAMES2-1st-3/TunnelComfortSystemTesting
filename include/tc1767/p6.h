/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "P6" of TriCore TC1767 (6 SFRs) */

#include <tc1767/p6/addr.h>

#include <tc1767/p6/masks.h>
#include <tc1767/p0_p1_p2_p3_p4_p5_p6_p7_p8_p9/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1767/p6/types.h>
#include <tc1767/p0_p1_p2_p3_p4_p5_p6_p7_p8_p9/sharetypes.h>

#ifndef _HAVE_TRICORE_P6_H_
#define _HAVE_TRICORE_P6_H_

#include <tricore-abs-noabs.h>

SFR_ABS (P6_ESR, Pn_ESR_t, P6_ESR_ADDR);          /* "Port 6 Emergency Stop Register" */
SFR_ABS (P6_IN, Pn_IN_t, P6_IN_ADDR);             /* "Port 6 Input Register" */
SFR_ABS (P6_IOCR0, Pn_IOCRm_t, P6_IOCR0_ADDR);    /* "Port 6 Input/Output Control Register 0" */
SFR_ABS (P6_OMR, Pn_OMR_t, P6_OMR_ADDR);          /* "Port 6 Output Modification Register" */
SFR_ABS (P6_OUT, Pn_OUT_t, P6_OUT_ADDR);          /* "Port 6 Output Register" */
SFR_ABS (P6_PDR, Pn_PDR_t, P6_PDR_ADDR);          /* "Port 6 Pad Driver Mode Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P6_H_ (block "P6") */


