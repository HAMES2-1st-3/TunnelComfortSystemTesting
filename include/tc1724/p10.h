/* (c) HighTec EDV-Systeme GmbH */

/* block "P10" of TriCore TC1724 (5 SFRs) */

#include <tc1724/p10/addr.h>

#include <tc1724/p10/masks.h>
#include <tc1724/p0-6_8-12/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1724/p10/types.h>
#include <tc1724/p0-6_8-12/sharetypes.h>

#ifndef _HAVE_TRICORE_P10_H_
#define _HAVE_TRICORE_P10_H_

#include <tricore-abs-noabs.h>

SFR_ABS (P10_IN, Pn_IN_t, P10_IN_ADDR);           /* "Port 10 Input Register" */
SFR_ABS (P10_IOCR0, Pn_IOCRm_t, P10_IOCR0_ADDR);  /* "Port 10 Input/Output Control Register 0" */
SFR_ABS (P10_OMR, Pn_OMR_t, P10_OMR_ADDR);        /* "Port 10 Output Modification Register" */
SFR_ABS (P10_OUT, Pn_OUT_t, P10_OUT_ADDR);        /* "Port 10 Output Register" */
SFR_ABS (P10_PDR0, Pn_PDRm_t, P10_PDR0_ADDR);     /* "Port 10 Pad Driver Mode 0 Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P10_H_ (block "P10") */


