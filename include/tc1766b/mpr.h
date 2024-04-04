/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "MPR" of TriCore TC1766B (28 SFRs) */

#include <tc1766b/mpr/addr.h>

#include <tc1766b/mpr/masks.h>
#include <tc1766b/mpr/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1766b/mpr/types.h>
#include <tc1766b/mpr/sharetypes.h>

#ifndef _HAVE_TRICORE_MPR_H_
#define _HAVE_TRICORE_MPR_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (MPR_CPM0, MPR_CPMm_t, MPR_CPM0_ADDR);  /* "Code Memory Protection Mode Register 0" */
SFR_NOABS (MPR_CPM1, MPR_CPMm_t, MPR_CPM1_ADDR);  /* "Code Memory Protection Mode Register 1" */
SFR_NOABS (MPR_CPR0_0L, MPR_CPRn_mL_t, MPR_CPR0_0L_ADDR); /* "Code Segment Protection Register Set 0, Range 0, Lower" */
SFR_NOABS (MPR_CPR0_0U, MPR_CPRn_mU_t, MPR_CPR0_0U_ADDR); /* "Code Segment Protection Register Set 0, Range 0, Upper" */
SFR_NOABS (MPR_CPR0_1L, MPR_CPRn_mL_t, MPR_CPR0_1L_ADDR); /* "Code Segment Protection Register Set 0, Range 1, Lower" */
SFR_NOABS (MPR_CPR0_1U, MPR_CPRn_mU_t, MPR_CPR0_1U_ADDR); /* "Code Segment Protection Register Set 0, Range 1, Upper" */
SFR_NOABS (MPR_CPR1_0L, MPR_CPRn_mL_t, MPR_CPR1_0L_ADDR); /* "Code Segment Protection Register Set 1, Range 0, Lower" */
SFR_NOABS (MPR_CPR1_0U, MPR_CPRn_mU_t, MPR_CPR1_0U_ADDR); /* "Code Segment Protection Register Set 1, Range 0, Upper" */
SFR_NOABS (MPR_CPR1_1L, MPR_CPRn_mL_t, MPR_CPR1_1L_ADDR); /* "Code Segment Protection Register Set 1, Range 1, Lower" */
SFR_NOABS (MPR_CPR1_1U, MPR_CPRn_mU_t, MPR_CPR1_1U_ADDR); /* "Code Segment Protection Register Set 1, Range 1, Upper" */
SFR_NOABS (MPR_DPM0, MPR_DPMm_t, MPR_DPM0_ADDR);  /* "Data Memory Protection Mode Register 0" */
SFR_NOABS (MPR_DPM1, MPR_DPMm_t, MPR_DPM1_ADDR);  /* "Data Memory Protection Mode Register 1" */
SFR_NOABS (MPR_DPR0_0L, MPR_DPRn_mL_t, MPR_DPR0_0L_ADDR); /* "Data Segment Protection Register Set 0, Range 0, Lower" */
SFR_NOABS (MPR_DPR0_0U, MPR_DPRn_mU_t, MPR_DPR0_0U_ADDR); /* "Data Segment Protection Register Set 0, Range 0, Upper" */
SFR_NOABS (MPR_DPR0_1L, MPR_DPRn_mL_t, MPR_DPR0_1L_ADDR); /* "Data Segment Protection Register Set 0, Range 1, Lower" */
SFR_NOABS (MPR_DPR0_1U, MPR_DPRn_mU_t, MPR_DPR0_1U_ADDR); /* "Data Segment Protection Register Set 0, Range 1, Upper" */
SFR_NOABS (MPR_DPR0_2L, MPR_DPRn_mL_t, MPR_DPR0_2L_ADDR); /* "Data Segment Protection Register Set 0, Range 2, Lower" */
SFR_NOABS (MPR_DPR0_2U, MPR_DPRn_mU_t, MPR_DPR0_2U_ADDR); /* "Data Segment Protection Register Set 0, Range 2, Upper" */
SFR_NOABS (MPR_DPR0_3L, MPR_DPRn_mL_t, MPR_DPR0_3L_ADDR); /* "Data Segment Protection Register Set 0, Range 3, Lower" */
SFR_NOABS (MPR_DPR0_3U, MPR_DPRn_mU_t, MPR_DPR0_3U_ADDR); /* "Data Segment Protection Register Set 0, Range 3, Upper" */
SFR_NOABS (MPR_DPR1_0L, MPR_DPRn_mL_t, MPR_DPR1_0L_ADDR); /* "Data Segment Protection Register Set 1, Range 0, Lower" */
SFR_NOABS (MPR_DPR1_0U, MPR_DPRn_mU_t, MPR_DPR1_0U_ADDR); /* "Data Segment Protection Register Set 1, Range 0, Upper" */
SFR_NOABS (MPR_DPR1_1L, MPR_DPRn_mL_t, MPR_DPR1_1L_ADDR); /* "Data Segment Protection Register Set 1, Range 1, Lower" */
SFR_NOABS (MPR_DPR1_1U, MPR_DPRn_mU_t, MPR_DPR1_1U_ADDR); /* "Data Segment Protection Register Set 1, Range 1, Upper" */
SFR_NOABS (MPR_DPR1_2L, MPR_DPRn_mL_t, MPR_DPR1_2L_ADDR); /* "Data Segment Protection Register Set 1, Range 2, Lower" */
SFR_NOABS (MPR_DPR1_2U, MPR_DPRn_mU_t, MPR_DPR1_2U_ADDR); /* "Data Segment Protection Register Set 1, Range 2, Upper" */
SFR_NOABS (MPR_DPR1_3L, MPR_DPRn_mL_t, MPR_DPR1_3L_ADDR); /* "Data Segment Protection Register Set 1, Range 3, Lower" */
SFR_NOABS (MPR_DPR1_3U, MPR_DPRn_mU_t, MPR_DPR1_3U_ADDR); /* "Data Segment Protection Register Set 1, Range 0, Upper" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_MPR_H_ (block "MPR") */


