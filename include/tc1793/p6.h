/* (c) HighTec EDV-Systeme GmbH */

/* block "P6" of TriCore TC1793 (9 SFRs) */

#include <tc1793/p6/addr.h>

#include <tc1793/p6/masks.h>
#include <tc1793/p0-18/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1793/p6/types.h>
#include <tc1793/p0-18/sharetypes.h>

#ifndef _HAVE_TRICORE_P6_H_
#define _HAVE_TRICORE_P6_H_

#include <tricore-abs-noabs.h>

SFR_ABS (P6_IN, Pn_IN_t, P6_IN_ADDR);             /* "Port 6 Input Register" */
SFR_ABS (P6_IOCR0, Pn_IOCRm_t, P6_IOCR0_ADDR);    /* "Port 6 Input/Output Control Register 0" */
SFR_ABS (P6_IOCR12, Pn_IOCRm_t, P6_IOCR12_ADDR);  /* "Port 6 Input/Output Control Register 12" */
SFR_ABS (P6_IOCR4, Pn_IOCRm_t, P6_IOCR4_ADDR);    /* "Port 6 Input/Output Control Register 4" */
SFR_ABS (P6_IOCR8, Pn_IOCRm_t, P6_IOCR8_ADDR);    /* "Port 6 Input/Output Control Register 8" */
SFR_ABS (P6_OMR, Pn_OMR_t, P6_OMR_ADDR);          /* "Port 6 Output Modification Register" */
SFR_ABS (P6_OUT, Pn_OUT_t, P6_OUT_ADDR);          /* "Port 6 Output Register" */
SFR_ABS (P6_PDR0, P6_PDR0_t, P6_PDR0_ADDR);       /* "Port 6 Pad Driver Mode 0 Register" */
SFR_ABS (P6_PDR1, Pn_PDRm_t, P6_PDR1_ADDR);       /* "Port 6 Pad Driver Mode 1 Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P6_H_ (block "P6") */


