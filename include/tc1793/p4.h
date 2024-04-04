/* (c) HighTec EDV-Systeme GmbH */

/* block "P4" of TriCore TC1793 (10 SFRs) */

#include <tc1793/p4/addr.h>

#include <tc1793/p4/masks.h>
#include <tc1793/p0-18/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1793/p4/types.h>
#include <tc1793/p0-18/sharetypes.h>

#ifndef _HAVE_TRICORE_P4_H_
#define _HAVE_TRICORE_P4_H_

#include <tricore-abs-noabs.h>

SFR_ABS (P4_ESR, Pn_ESR_t, P4_ESR_ADDR);          /* "Port 4 Emergency Stop Register" */
SFR_ABS (P4_IN, Pn_IN_t, P4_IN_ADDR);             /* "Port 4 Input Register" */
SFR_ABS (P4_IOCR0, Pn_IOCRm_t, P4_IOCR0_ADDR);    /* "Port 4 Input/Output Control Register 0" */
SFR_ABS (P4_IOCR12, Pn_IOCRm_t, P4_IOCR12_ADDR);  /* "Port 4 Input/Output Control Register 12" */
SFR_ABS (P4_IOCR4, Pn_IOCRm_t, P4_IOCR4_ADDR);    /* "Port 4 Input/Output Control Register 4" */
SFR_ABS (P4_IOCR8, Pn_IOCRm_t, P4_IOCR8_ADDR);    /* "Port 4 Input/Output Control Register 8" */
SFR_ABS (P4_OMR, Pn_OMR_t, P4_OMR_ADDR);          /* "Port 4 Output Modification Register" */
SFR_ABS (P4_OUT, Pn_OUT_t, P4_OUT_ADDR);          /* "Port 4 Output Register" */
SFR_ABS (P4_PDR0, Pn_PDRm_t, P4_PDR0_ADDR);       /* "Port 4 Pad Driver Mode 0 Register" */
SFR_ABS (P4_PDR1, Pn_PDRm_t, P4_PDR1_ADDR);       /* "Port 4 Pad Driver Mode 1 Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P4_H_ (block "P4") */


