/* (c) HighTec EDV-Systeme GmbH */

/* block "P7" of TriCore TC1793 (6 SFRs) */

#include <tc1793/p7/addr.h>

#include <tc1793/p7/masks.h>
#include <tc1793/p0-18/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1793/p7/types.h>
#include <tc1793/p0-18/sharetypes.h>

#ifndef _HAVE_TRICORE_P7_H_
#define _HAVE_TRICORE_P7_H_

#include <tricore-abs-noabs.h>

SFR_ABS (P7_IN, Pn_IN_t, P7_IN_ADDR);             /* "Port 7 Input Register" */
SFR_ABS (P7_IOCR0, Pn_IOCRm_t, P7_IOCR0_ADDR);    /* "Port 7 Input/Output Control Register 0" */
SFR_ABS (P7_IOCR4, Pn_IOCRm_t, P7_IOCR4_ADDR);    /* "Port 7 Input/Output Control Register 4" */
SFR_ABS (P7_OMR, Pn_OMR_t, P7_OMR_ADDR);          /* "Port 7 Output Modification Register" */
SFR_ABS (P7_OUT, Pn_OUT_t, P7_OUT_ADDR);          /* "Port 7 Output Register" */
SFR_ABS (P7_PDR0, Pn_PDRm_t, P7_PDR0_ADDR);       /* "Port 7 Pad Driver Mode 0 Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P7_H_ (block "P7") */


