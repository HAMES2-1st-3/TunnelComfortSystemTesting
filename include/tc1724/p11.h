/* (c) HighTec EDV-Systeme GmbH */

/* block "P11" of TriCore TC1724 (6 SFRs) */

#include <tc1724/p11/addr.h>

#include <tc1724/p11/masks.h>
#include <tc1724/p0-6_8-12/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1724/p11/types.h>
#include <tc1724/p0-6_8-12/sharetypes.h>

#ifndef _HAVE_TRICORE_P11_H_
#define _HAVE_TRICORE_P11_H_

#include <tricore-abs-noabs.h>

SFR_ABS (P11_IN, Pn_IN_t, P11_IN_ADDR);           /* "Port 11 Input Register" */
SFR_ABS (P11_IOCR0, Pn_IOCRm_t, P11_IOCR0_ADDR);  /* "Port 11 Input/Output Control Register 0" */
SFR_ABS (P11_IOCR12, Pn_IOCRm_t, P11_IOCR12_ADDR); /* "Port 11 Input/Output Control Register 12" */
SFR_ABS (P11_IOCR4, Pn_IOCRm_t, P11_IOCR4_ADDR);  /* "Port 11 Input/Output Control Register 4" */
SFR_ABS (P11_IOCR8, Pn_IOCRm_t, P11_IOCR8_ADDR);  /* "Port 11 Input/Output Control Register 8" */
SFR_ABS (P11_PDISC, P11_PDISC_t, P11_PDISC_ADDR); /* "Port 11 Pin Function Decision Control Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P11_H_ (block "P11") */


