/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_MPR_SHAREMASKS_H_
#define _HAVE_TRICORE_MPR_SHAREMASKS_H_


/****************** Masks for MPR_CPMm_t **********************/
/*
   MPR_CPM0              "Code Memory Protection Mode Register 0"
   MPR_CPM1              "Code Memory Protection Mode Register 1"
*/
/**********************************************************/

#define MPR_CPMm_MASK                   0x00000000



/****************** Masks for MPR_CPRn_mL_t **********************/
/*
   MPR_CPR0_0L           "Code Segment Protection Register Set 0, Range 0, Lower"
   MPR_CPR0_1L           "Code Segment Protection Register Set 0, Range 1, Lower"
   MPR_CPR1_0L           "Code Segment Protection Register Set 1, Range 0, Lower"
   MPR_CPR1_1L           "Code Segment Protection Register Set 1, Range 1, Lower"
*/
/**********************************************************/

#define MPR_CPRn_mL_MASK                0x00000000



/****************** Masks for MPR_CPRn_mU_t **********************/
/*
   MPR_CPR0_0U           "Code Segment Protection Register Set 0, Range 0, Upper"
   MPR_CPR0_1U           "Code Segment Protection Register Set 0, Range 1, Upper"
   MPR_CPR1_0U           "Code Segment Protection Register Set 1, Range 0, Upper"
   MPR_CPR1_1U           "Code Segment Protection Register Set 1, Range 1, Upper"
*/
/**********************************************************/

#define MPR_CPRn_mU_MASK                0x00000000



/****************** Masks for MPR_DPMm_t **********************/
/*
   MPR_DPM0              "Data Memory Protection Mode Register 0"
   MPR_DPM1              "Data Memory Protection Mode Register 1"
*/
/**********************************************************/

#define MPR_DPMm_MASK                   0x00000000



/****************** Masks for MPR_DPRn_mL_t **********************/
/*
   MPR_DPR0_0L           "Data Segment Protection Register Set 0, Range 0, Lower"
   MPR_DPR0_1L           "Data Segment Protection Register Set 0, Range 1, Lower"
   MPR_DPR0_2L           "Data Segment Protection Register Set 0, Range 2, Lower"
   MPR_DPR0_3L           "Data Segment Protection Register Set 0, Range 3, Lower"
   MPR_DPR1_0L           "Data Segment Protection Register Set 1, Range 0, Lower"
   MPR_DPR1_1L           "Data Segment Protection Register Set 1, Range 1, Lower"
   MPR_DPR1_2L           "Data Segment Protection Register Set 1, Range 2, Lower"
   MPR_DPR1_3L           "Data Segment Protection Register Set 1, Range 3, Lower"
*/
/**********************************************************/

#define MPR_DPRn_mL_MASK                0x00000000



/****************** Masks for MPR_DPRn_mU_t **********************/
/*
   MPR_DPR0_0U           "Data Segment Protection Register Set 0, Range 0, Upper"
   MPR_DPR0_1U           "Data Segment Protection Register Set 0, Range 1, Upper"
   MPR_DPR0_2U           "Data Segment Protection Register Set 0, Range 2, Upper"
   MPR_DPR0_3U           "Data Segment Protection Register Set 0, Range 3, Upper"
   MPR_DPR1_0U           "Data Segment Protection Register Set 1, Range 0, Upper"
   MPR_DPR1_1U           "Data Segment Protection Register Set 1, Range 1, Upper"
   MPR_DPR1_2U           "Data Segment Protection Register Set 1, Range 2, Upper"
   MPR_DPR1_3U           "Data Segment Protection Register Set 1, Range 0, Upper"
*/
/**********************************************************/

#define MPR_DPRn_mU_MASK                0x00000000




#endif /* _HAVE_TRICORE_MPR_SHAREMASKS_H_ */

