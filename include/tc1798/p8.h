/* (c) HighTec EDV-Systeme GmbH */

/* block "P8" of TriCore TC1798 (8 SFRs) */

#include <tc1798/p8/addr.h>

#include <tc1798/p8/masks.h>
#include <tc1798/p0-18/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1798/p8/types.h>
#include <tc1798/p0-18/sharetypes.h>

#ifndef _HAVE_TRICORE_P8_H_
#define _HAVE_TRICORE_P8_H_

#include <tricore-abs-noabs.h>

SFR_ABS (P8_ESR, Pn_ESR_t, P8_ESR_ADDR);          /* "Port 8 Emergency Stop Register" */
SFR_ABS (P8_IN, Pn_IN_t, P8_IN_ADDR);             /* "Port 8 Input Register" */
SFR_ABS (P8_IOCR0, Pn_IOCRm_t, P8_IOCR0_ADDR);    /* "Port 8 Input/Output Control Register 0" */
SFR_ABS (P8_IOCR4, Pn_IOCRm_t, P8_IOCR4_ADDR);    /* "Port 8 Input/Output Control Register 4" */
SFR_ABS (P8_OMR, Pn_OMR_t, P8_OMR_ADDR);          /* "Port 8 Output Modification Register" */
SFR_ABS (P8_OUT, Pn_OUT_t, P8_OUT_ADDR);          /* "Port 8 Output Register" */
SFR_ABS (P8_PDR0, Pn_PDRm_t, P8_PDR0_ADDR);       /* "Port 8 Pad Driver Mode 0 Register" */
SFR_ABS (P8_PDR1, Pn_PDRm_t, P8_PDR1_ADDR);       /* "Port 8 Pad Driver Mode 1 Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P8_H_ (block "P8") */


