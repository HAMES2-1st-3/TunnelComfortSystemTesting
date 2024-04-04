/* (c) HighTec EDV-Systeme GmbH */

/* block "P2" of TriCore TC1793 (10 SFRs) */

#include <tc1793/p2/addr.h>

#include <tc1793/p2/masks.h>
#include <tc1793/p0-18/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1793/p2/types.h>
#include <tc1793/p0-18/sharetypes.h>

#ifndef _HAVE_TRICORE_P2_H_
#define _HAVE_TRICORE_P2_H_

#include <tricore-abs-noabs.h>

SFR_ABS (P2_ESR, Pn_ESR_t, P2_ESR_ADDR);          /* "Port 2 Emergency Stop Register" */
SFR_ABS (P2_IN, Pn_IN_t, P2_IN_ADDR);             /* "Port 2 Input Register" */
SFR_ABS (P2_IOCR0, P2_IOCR0_t, P2_IOCR0_ADDR);    /* "Port 2 Input/Output Control Register 0" */
SFR_ABS (P2_IOCR12, Pn_IOCRm_t, P2_IOCR12_ADDR);  /* "Port 2 Input/Output Control Register 12" */
SFR_ABS (P2_IOCR4, Pn_IOCRm_t, P2_IOCR4_ADDR);    /* "Port 2 Input/Output Control Register 4" */
SFR_ABS (P2_IOCR8, Pn_IOCRm_t, P2_IOCR8_ADDR);    /* "Port 2 Input/Output Control Register 8" */
SFR_ABS (P2_OMR, Pn_OMR_t, P2_OMR_ADDR);          /* "Port 2 Output Modification Register" */
SFR_ABS (P2_OUT, Pn_OUT_t, P2_OUT_ADDR);          /* "Port 2 Output Register" */
SFR_ABS (P2_PDR0, P2_PDR0_t, P2_PDR0_ADDR);       /* "Port 2 Pad Driver Mode 0 Register" */
SFR_ABS (P2_PDR1, Pn_PDRm_t, P2_PDR1_ADDR);       /* "Port 2 Pad Driver Mode 1 Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P2_H_ (block "P2") */


