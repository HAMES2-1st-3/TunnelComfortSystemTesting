/* (c) HighTec EDV-Systeme GmbH */

/* block "P13" of TriCore TC1793 (10 SFRs) */

#include <tc1793/p13/addr.h>

#include <tc1793/p13/masks.h>
#include <tc1793/p0-18/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1793/p13/types.h>
#include <tc1793/p0-18/sharetypes.h>

#ifndef _HAVE_TRICORE_P13_H_
#define _HAVE_TRICORE_P13_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (P13_ESR, Pn_ESR_t, P13_ESR_ADDR);      /* "Port 13 Emergency Stop Register" */
SFR_NOABS (P13_IN, Pn_IN_t, P13_IN_ADDR);         /* "Port 13 Input Register" */
SFR_NOABS (P13_IOCR0, Pn_IOCRm_t, P13_IOCR0_ADDR); /* "Port 13 Input/Output Control Register 0" */
SFR_NOABS (P13_IOCR12, Pn_IOCRm_t, P13_IOCR12_ADDR); /* "Port 13 Input/Output Control Register 12" */
SFR_NOABS (P13_IOCR4, Pn_IOCRm_t, P13_IOCR4_ADDR); /* "Port 13 Input/Output Control Register 4" */
SFR_NOABS (P13_IOCR8, Pn_IOCRm_t, P13_IOCR8_ADDR); /* "Port 13 Input/Output Control Register 8" */
SFR_NOABS (P13_OMR, Pn_OMR_t, P13_OMR_ADDR);      /* "Port 13 Output Modification Register" */
SFR_NOABS (P13_OUT, Pn_OUT_t, P13_OUT_ADDR);      /* "Port 13 Output Register" */
SFR_NOABS (P13_PDR0, Pn_PDRm_t, P13_PDR0_ADDR);   /* "Port 13 Pad Driver Mode 0 Register" */
SFR_NOABS (P13_PDR1, Pn_PDRm_t, P13_PDR1_ADDR);   /* "Port 13 Pad Driver Mode 1 Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P13_H_ (block "P13") */


