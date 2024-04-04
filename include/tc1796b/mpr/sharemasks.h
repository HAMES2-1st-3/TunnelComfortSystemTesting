/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_MPR_SHAREMASKS_H_
#define _HAVE_TRICORE_MPR_SHAREMASKS_H_


/****************** Masks for CPMn_t **********************/
/*
   CPM0                  "Code Protection Mode Register Set 0"
   CPM1                  "Code Protection Mode Register Set 1"
*/
/**********************************************************/

#define CPMn_MASK                       0x00000000



/****************** Masks for CPRn_mL_t **********************/
/*
   CPR0_0L               "Code Segment Protection Register Set 0, Range 0, Lower Boundary"
   CPR0_1L               "Code Segment Protection Register Set 0, Range 1, Lower Boundary"
   CPR1_0L               "Code Segment Protection Register Set 1, Range 0, Lower Boundary"
   CPR1_1L               "Code Segment Protection Register Set 1, Range 1, Lower Boundary"
*/
/**********************************************************/

#define CPRn_mL_MASK                    0x00000000



/****************** Masks for CPRn_mU_t **********************/
/*
   CPR0_0U               "Code Segment Protection Register Set 0, Range 0, Upper Boundary"
   CPR0_1U               "Code Segment Protection Register Set 0, Range 1, Upper Boundary"
   CPR1_0U               "Code Segment Protection Register Set 1, Range 0, Upper Boundary"
   CPR1_1U               "Code Segment Protection Register Set 1, Range 1, Upper Boundary"
*/
/**********************************************************/

#define CPRn_mU_MASK                    0x00000000



/****************** Masks for DPMn_t **********************/
/*
   DPM0                  "Data Protection Mode Register 0"
   DPM1                  "Data Protection Mode Register Set 1"
*/
/**********************************************************/

#define DPMn_MASK                       0x00000000



/****************** Masks for DPRn_mL_t **********************/
/*
   DPR0_0L               "Data Segment Protection Register Set 0, Range 0, Lower Boundary"
   DPR0_1L               "Data Segment Protection Register Set 0, Range 1, Lower Boundary"
   DPR0_2L               "Data Segment Protection Register Set 0, Range 2, Lower Boundary"
   DPR0_3L               "Data Segment Protection Register Set 0, Range 3, Lower Boundary"
   DPR1_0L               "Data Segment Protection Register Set 1, Range 0, Lower Boundary"
   DPR1_1L               "Data Segment Protection Register Set 1, Range 1, Lower Boundary"
   DPR1_2L               "Data Segment Protection Register Set 1, Range 2, Lower Boundary"
   DPR1_3L               "Data Segment Protection Register Set 1, Range 3, Lower Boundary"
*/
/**********************************************************/

#define DPRn_mL_MASK                    0x00000000



/****************** Masks for DPRn_mU_t **********************/
/*
   DPR0_0U               "Data Segment Protection Register Set 0, Range 0, Upper Boundary"
   DPR0_1U               "Data Segment Protection Register Set 0, Range 1, Upper Boundary"
   DPR0_2U               "Data Segment Protection Register Set 0, Range 2, Upper Boundary"
   DPR0_3U               "Data Segment Protection Register Set 0, Range 3, Upper Boundary"
   DPR1_0U               "Data Segment Protection Register Set 1, Range 0, Upper Boundary"
   DPR1_1U               "Data Segment Protection Register Set 1, Range 1, Upper Boundary"
   DPR1_2U               "Data Segment Protection Register Set 1, Range 2, Upper Boundary"
   DPR1_3U               "Data Segment Protection Register Set 1, Range 0, Upper Boundary"
*/
/**********************************************************/

#define DPRn_mU_MASK                    0x00000000




#endif /* _HAVE_TRICORE_MPR_SHAREMASKS_H_ */

