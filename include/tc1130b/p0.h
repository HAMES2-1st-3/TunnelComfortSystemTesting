/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "P0 CD" of TriCore TC1130B (8 SFRs) */

#include <tc1130b/p0/addr.h>

#include <tc1130b/p0/masks.h>
#include <tc1130b/p0_p1_p2_p3/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1130b/p0/types.h>
#include <tc1130b/p0_p1_p2_p3/sharetypes.h>

#ifndef _HAVE_TRICORE_P0_H_
#define _HAVE_TRICORE_P0_H_

#include <tricore-abs-noabs.h>

SFR_ABS (P0_ALTSEL0, Pn_ALTSELm_t, P0_ALTSEL0_ADDR); /* "Port 0 Alternate Select Register 0" */
SFR_ABS (P0_ALTSEL1, Pn_ALTSELm_t, P0_ALTSEL1_ADDR); /* "Port 0 Alternate Select Register 1" */
SFR_ABS (P0_DIR, Pn_DIR_t, P0_DIR_ADDR);          /* "Port 0 Direction Register" */
SFR_ABS (P0_IN, Pn_IN_t, P0_IN_ADDR);             /* "Port 0 Data Input Register" */
SFR_ABS (P0_OD, Pn_OD_t, P0_OD_ADDR);             /* "Port 0 Open Drain Mode Register" */
SFR_ABS (P0_OUT, Pn_OUT_t, P0_OUT_ADDR);          /* "Port 0 Data Output Register" */
SFR_ABS (P0_PUDEN, Pn_PUDEN_t, P0_PUDEN_ADDR);    /* "Port 0 Pull up/down Enable Register" */
SFR_ABS (P0_PUDSEL, Pn_PUDSEL_t, P0_PUDSEL_ADDR); /* "Port 0 Pull up/down Select Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_P0_H_ (block "P0 CD") */


