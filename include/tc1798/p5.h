/* (c) HighTec EDV-Systeme GmbH */

/* block "P5" of TriCore TC1798 (10 SFRs) */

#include <tc1798/p5/addr.h>

#include <tc1798/p5/masks.h>
#include <tc1798/p0-18/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1798/p5/types.h>
#include <tc1798/p0-18/sharetypes.h>

#ifndef _HAVE_TRICORE_P5_H_
#define _HAVE_TRICORE_P5_H_

#include <tricore-abs-noabs.h>

SFR_ABS (P5_ESR, Pn_ESR_t, P5_ESR_ADDR);          /* "Port 5 Emergency Stop Register" */
SFR_ABS (P5_IN, Pn_IN_t, P5_IN_ADDR);             /* "Port 5 Input Register" */
SFR_ABS (P5_IOCR0, Pn_IOCRm_t, P5_IOCR0_ADDR);    /* "Port 5 Input/Output Control Register 0" */
SFR_ABS (P5_IOCR12, Pn_IOCRm_t, P5_IOCR12_ADDR);  /* "Port 5 Input/Output Control Register 12" */
SFR_ABS (P5_IOCR4, Pn_IOCRm_t, P5_IOCR4_ADDR);    /* "Port 5 Input/Output Control Register 4" */
SFR_ABS (P5_IOCR8, Pn_IOCRm_t, P5_IOCR8_ADDR);    /* "Port 5 Input/Output Control Register 8" */
SFR_ABS (P5_OMR, Pn_OMR_t, P5_OMR_ADDR);          /* "Port 5 Output Modification Register" */
SFR_ABS (P5_OUT, Pn_OUT_t, P5_OUT_ADDR);          /* "Port 5 Output Register" */
SFR_ABS (P5_PDR0, Pn_PDRm_t, P5_PDR0_ADDR);       /* "Port 5 Pad Driver Mode 0 Register" */
SFR_ABS (P5_PDR1, Pn_PDRm_t, P5_PDR1_ADDR);       /* "Port 5 Pad Driver Mode 1 Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P5_H_ (block "P5") */


