/* (c) HighTec EDV-Systeme GmbH */

/* block "P3" of TriCore TC1791 (10 SFRs) */

#include <tc1791/p3/addr.h>

#include <tc1791/p3/masks.h>
#include <tc1791/p0-18/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1791/p3/types.h>
#include <tc1791/p0-18/sharetypes.h>

#ifndef _HAVE_TRICORE_P3_H_
#define _HAVE_TRICORE_P3_H_

#include <tricore-abs-noabs.h>

SFR_ABS (P3_ESR, Pn_ESR_t, P3_ESR_ADDR);          /* "Port 3 Emergency Stop Register" */
SFR_ABS (P3_IN, Pn_IN_t, P3_IN_ADDR);             /* "Port 3 Input Register" */
SFR_ABS (P3_IOCR0, Pn_IOCRm_t, P3_IOCR0_ADDR);    /* "Port 3 Input/Output Control Register 0" */
SFR_ABS (P3_IOCR12, Pn_IOCRm_t, P3_IOCR12_ADDR);  /* "Port 3 Input/Output Control Register 12" */
SFR_ABS (P3_IOCR4, Pn_IOCRm_t, P3_IOCR4_ADDR);    /* "Port 3 Input/Output Control Register 4" */
SFR_ABS (P3_IOCR8, Pn_IOCRm_t, P3_IOCR8_ADDR);    /* "Port 3 Input/Output Control Register 8" */
SFR_ABS (P3_OMR, Pn_OMR_t, P3_OMR_ADDR);          /* "Port 3 Output Modification Register" */
SFR_ABS (P3_OUT, Pn_OUT_t, P3_OUT_ADDR);          /* "Port 3 Output Register" */
SFR_ABS (P3_PDR0, Pn_PDRm_t, P3_PDR0_ADDR);       /* "Port 3 Pad Driver Mode 0 Register" */
SFR_ABS (P3_PDR1, Pn_PDRm_t, P3_PDR1_ADDR);       /* "Port 3 Pad Driver Mode 1 Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P3_H_ (block "P3") */


