/* (c) HighTec EDV-Systeme GmbH */

/* block "P0" of TriCore TC1798 (10 SFRs) */

#include <tc1798/p0/addr.h>

#include <tc1798/p0/masks.h>
#include <tc1798/p0-18/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1798/p0/types.h>
#include <tc1798/p0-18/sharetypes.h>

#ifndef _HAVE_TRICORE_P0_H_
#define _HAVE_TRICORE_P0_H_

#include <tricore-abs-noabs.h>

SFR_ABS (P0_ESR, Pn_ESR_t, P0_ESR_ADDR);          /* "Port 0 Emergency Stop Register" */
SFR_ABS (P0_IN, Pn_IN_t, P0_IN_ADDR);             /* "Port 0 Input Register" */
SFR_ABS (P0_IOCR0, Pn_IOCRm_t, P0_IOCR0_ADDR);    /* "Port 0 Input/Output Control Register 0" */
SFR_ABS (P0_IOCR12, Pn_IOCRm_t, P0_IOCR12_ADDR);  /* "Port 0 Input/Output Control Register 12" */
SFR_ABS (P0_IOCR4, Pn_IOCRm_t, P0_IOCR4_ADDR);    /* "Port 0 Input/Output Control Register 4" */
SFR_ABS (P0_IOCR8, Pn_IOCRm_t, P0_IOCR8_ADDR);    /* "Port 0 Input/Output Control Register 8" */
SFR_ABS (P0_OMR, Pn_OMR_t, P0_OMR_ADDR);          /* "Port 0 Output Modification Register" */
SFR_ABS (P0_OUT, Pn_OUT_t, P0_OUT_ADDR);          /* "Port 0 Output Register" */
SFR_ABS (P0_PDR0, Pn_PDRm_t, P0_PDR0_ADDR);       /* "Port 0 Pad Driver Mode 0 Register" */
SFR_ABS (P0_PDR1, Pn_PDRm_t, P0_PDR1_ADDR);       /* "Port 0 Pad Driver Mode 1 Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P0_H_ (block "P0") */


