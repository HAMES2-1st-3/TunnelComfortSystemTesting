/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "P1 CD" of TriCore TC1130B (8 SFRs) */

#include <tc1130b/p1/addr.h>

#include <tc1130b/p1/masks.h>
#include <tc1130b/p0_p1_p2_p3/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1130b/p1/types.h>
#include <tc1130b/p0_p1_p2_p3/sharetypes.h>

#ifndef _HAVE_TRICORE_P1_H_
#define _HAVE_TRICORE_P1_H_

#include <tricore-abs-noabs.h>

SFR_ABS (P1_ALTSEL0, Pn_ALTSELm_t, P1_ALTSEL0_ADDR); /* "Port 1 Alternate Select Register 0" */
SFR_ABS (P1_ALTSEL1, Pn_ALTSELm_t, P1_ALTSEL1_ADDR); /* "Port 1 Alternate Select Register 1" */
SFR_ABS (P1_DIR, Pn_DIR_t, P1_DIR_ADDR);          /* "Port 1 Direction Register" */
SFR_ABS (P1_IN, Pn_IN_t, P1_IN_ADDR);             /* "Port 1 Data Input Register" */
SFR_ABS (P1_OD, Pn_OD_t, P1_OD_ADDR);             /* "Port 1 Open Drain Mode Register" */
SFR_ABS (P1_OUT, Pn_OUT_t, P1_OUT_ADDR);          /* "Port 1 Data Output Register" */
SFR_ABS (P1_PUDEN, Pn_PUDEN_t, P1_PUDEN_ADDR);    /* "Port 1 Pull up/down Enable Register" */
SFR_ABS (P1_PUDSEL, Pn_PUDSEL_t, P1_PUDSEL_ADDR); /* "Port 1 Pull up/down Select Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P1_H_ (block "P1 CD") */


