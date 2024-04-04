/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "MPR" of TriCore TC1796B (28 SFRs) */

#include <tc1796b/mpr/addr.h>

#include <tc1796b/mpr/masks.h>
#include <tc1796b/mpr/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1796b/mpr/types.h>
#include <tc1796b/mpr/sharetypes.h>

#ifndef _HAVE_TRICORE_MPR_H_
#define _HAVE_TRICORE_MPR_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (CPM0, CPMn_t, CPM0_ADDR);              /* "Code Protection Mode Register Set 0" */
SFR_NOABS (CPM1, CPMn_t, CPM1_ADDR);              /* "Code Protection Mode Register Set 1" */
SFR_NOABS (CPR0_0L, CPRn_mL_t, CPR0_0L_ADDR);     /* "Code Segment Protection Register Set 0, Range 0, Lower Boundary" */
SFR_NOABS (CPR0_0U, CPRn_mU_t, CPR0_0U_ADDR);     /* "Code Segment Protection Register Set 0, Range 0, Upper Boundary" */
SFR_NOABS (CPR0_1L, CPRn_mL_t, CPR0_1L_ADDR);     /* "Code Segment Protection Register Set 0, Range 1, Lower Boundary" */
SFR_NOABS (CPR0_1U, CPRn_mU_t, CPR0_1U_ADDR);     /* "Code Segment Protection Register Set 0, Range 1, Upper Boundary" */
SFR_NOABS (CPR1_0L, CPRn_mL_t, CPR1_0L_ADDR);     /* "Code Segment Protection Register Set 1, Range 0, Lower Boundary" */
SFR_NOABS (CPR1_0U, CPRn_mU_t, CPR1_0U_ADDR);     /* "Code Segment Protection Register Set 1, Range 0, Upper Boundary" */
SFR_NOABS (CPR1_1L, CPRn_mL_t, CPR1_1L_ADDR);     /* "Code Segment Protection Register Set 1, Range 1, Lower Boundary" */
SFR_NOABS (CPR1_1U, CPRn_mU_t, CPR1_1U_ADDR);     /* "Code Segment Protection Register Set 1, Range 1, Upper Boundary" */
SFR_NOABS (DPM0, DPMn_t, DPM0_ADDR);              /* "Data Protection Mode Register 0" */
SFR_NOABS (DPM1, DPMn_t, DPM1_ADDR);              /* "Data Protection Mode Register Set 1" */
SFR_NOABS (DPR0_0L, DPRn_mL_t, DPR0_0L_ADDR);     /* "Data Segment Protection Register Set 0, Range 0, Lower Boundary" */
SFR_NOABS (DPR0_0U, DPRn_mU_t, DPR0_0U_ADDR);     /* "Data Segment Protection Register Set 0, Range 0, Upper Boundary" */
SFR_NOABS (DPR0_1L, DPRn_mL_t, DPR0_1L_ADDR);     /* "Data Segment Protection Register Set 0, Range 1, Lower Boundary" */
SFR_NOABS (DPR0_1U, DPRn_mU_t, DPR0_1U_ADDR);     /* "Data Segment Protection Register Set 0, Range 1, Upper Boundary" */
SFR_NOABS (DPR0_2L, DPRn_mL_t, DPR0_2L_ADDR);     /* "Data Segment Protection Register Set 0, Range 2, Lower Boundary" */
SFR_NOABS (DPR0_2U, DPRn_mU_t, DPR0_2U_ADDR);     /* "Data Segment Protection Register Set 0, Range 2, Upper Boundary" */
SFR_NOABS (DPR0_3L, DPRn_mL_t, DPR0_3L_ADDR);     /* "Data Segment Protection Register Set 0, Range 3, Lower Boundary" */
SFR_NOABS (DPR0_3U, DPRn_mU_t, DPR0_3U_ADDR);     /* "Data Segment Protection Register Set 0, Range 3, Upper Boundary" */
SFR_NOABS (DPR1_0L, DPRn_mL_t, DPR1_0L_ADDR);     /* "Data Segment Protection Register Set 1, Range 0, Lower Boundary" */
SFR_NOABS (DPR1_0U, DPRn_mU_t, DPR1_0U_ADDR);     /* "Data Segment Protection Register Set 1, Range 0, Upper Boundary" */
SFR_NOABS (DPR1_1L, DPRn_mL_t, DPR1_1L_ADDR);     /* "Data Segment Protection Register Set 1, Range 1, Lower Boundary" */
SFR_NOABS (DPR1_1U, DPRn_mU_t, DPR1_1U_ADDR);     /* "Data Segment Protection Register Set 1, Range 1, Upper Boundary" */
SFR_NOABS (DPR1_2L, DPRn_mL_t, DPR1_2L_ADDR);     /* "Data Segment Protection Register Set 1, Range 2, Lower Boundary" */
SFR_NOABS (DPR1_2U, DPRn_mU_t, DPR1_2U_ADDR);     /* "Data Segment Protection Register Set 1, Range 2, Upper Boundary" */
SFR_NOABS (DPR1_3L, DPRn_mL_t, DPR1_3L_ADDR);     /* "Data Segment Protection Register Set 1, Range 3, Lower Boundary" */
SFR_NOABS (DPR1_3U, DPRn_mU_t, DPR1_3U_ADDR);     /* "Data Segment Protection Register Set 1, Range 0, Upper Boundary" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_MPR_H_ (block "MPR") */


