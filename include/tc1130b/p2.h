/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "P2 CD" of TriCore TC1130B (8 SFRs) */

#include <tc1130b/p2/addr.h>

#include <tc1130b/p2/masks.h>
#include <tc1130b/p0_p1_p2_p3/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1130b/p2/types.h>
#include <tc1130b/p0_p1_p2_p3/sharetypes.h>

#ifndef _HAVE_TRICORE_P2_H_
#define _HAVE_TRICORE_P2_H_

#include <tricore-abs-noabs.h>

SFR_ABS (P2_ALTSEL0, Pn_ALTSELm_t, P2_ALTSEL0_ADDR); /* "Port 2 Alternate Select Register 0" */
SFR_ABS (P2_ALTSEL1, Pn_ALTSELm_t, P2_ALTSEL1_ADDR); /* "Port 2 Alternate Select Register 1" */
SFR_ABS (P2_DIR, Pn_DIR_t, P2_DIR_ADDR);          /* "Port 2 Direction Register" */
SFR_ABS (P2_IN, Pn_IN_t, P2_IN_ADDR);             /* "Port 2 Data Input Register" */
SFR_ABS (P2_OD, Pn_OD_t, P2_OD_ADDR);             /* "Port 2 Open Drain Mode Register" */
SFR_ABS (P2_OUT, Pn_OUT_t, P2_OUT_ADDR);          /* "Port 2 Data Output Register" */
SFR_ABS (P2_PUDEN, Pn_PUDEN_t, P2_PUDEN_ADDR);    /* "Port 2 Pull up/down Enable Register" */
SFR_ABS (P2_PUDSEL, Pn_PUDSEL_t, P2_PUDSEL_ADDR); /* "Port 2 Pull up/down Select Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P2_H_ (block "P2 CD") */


