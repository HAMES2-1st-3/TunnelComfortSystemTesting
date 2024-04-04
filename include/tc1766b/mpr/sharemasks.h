/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_MPR_SHAREMASKS_H_
#define _HAVE_TRICORE_MPR_SHAREMASKS_H_


/****************** Masks for MPR_CPMm_t **********************/
/*
   MPR_CPM0              "Code Memory Protection Mode Register 0"
   MPR_CPM1              "Code Memory Protection Mode Register 1"
*/
/**********************************************************/

#define MPR_CPMm_MASK                   0x0000a9a9
#define MPR_CPMm_BU0_MASK               0x00000001
#define MPR_CPMm_BU0_SHIFT              0
#define MPR_CPMm_BL0_MASK               0x00000008
#define MPR_CPMm_BL0_SHIFT              3
#define MPR_CPMm_XS0_MASK               0x00000020
#define MPR_CPMm_XS0_SHIFT              5
#define MPR_CPMm_XE0_MASK               0x00000080
#define MPR_CPMm_XE0_SHIFT              7
#define MPR_CPMm_BU1_MASK               0x00000100
#define MPR_CPMm_BU1_SHIFT              8
#define MPR_CPMm_BL1_MASK               0x00000800
#define MPR_CPMm_BL1_SHIFT              11
#define MPR_CPMm_XS1_MASK               0x00002000
#define MPR_CPMm_XS1_SHIFT              13
#define MPR_CPMm_XE1_MASK               0x00008000
#define MPR_CPMm_XE1_SHIFT              15



/****************** Masks for MPR_CPRn_mL_t **********************/
/*
   MPR_CPR0_0L           "Code Segment Protection Register Set 0, Range 0, Lower"
   MPR_CPR0_1L           "Code Segment Protection Register Set 0, Range 1, Lower"
   MPR_CPR1_0L           "Code Segment Protection Register Set 1, Range 0, Lower"
   MPR_CPR1_1L           "Code Segment Protection Register Set 1, Range 1, Lower"
*/
/**********************************************************/

#define MPR_CPRn_mL_MASK                0xffffffff
#define MPR_CPRn_mL_LOWBND_MASK         0xffffffff
#define MPR_CPRn_mL_LOWBND_SHIFT        0



/****************** Masks for MPR_CPRn_mU_t **********************/
/*
   MPR_CPR0_0U           "Code Segment Protection Register Set 0, Range 0, Upper"
   MPR_CPR0_1U           "Code Segment Protection Register Set 0, Range 1, Upper"
   MPR_CPR1_0U           "Code Segment Protection Register Set 1, Range 0, Upper"
   MPR_CPR1_1U           "Code Segment Protection Register Set 1, Range 1, Upper"
*/
/**********************************************************/

#define MPR_CPRn_mU_MASK                0xffffffff
#define MPR_CPRn_mU_UPPBND_MASK         0xffffffff
#define MPR_CPRn_mU_UPPBND_SHIFT        0



/****************** Masks for MPR_DPMm_t **********************/
/*
   MPR_DPM0              "Data Memory Protection Mode Register 0"
   MPR_DPM1              "Data Memory Protection Mode Register 1"
*/
/**********************************************************/

#define MPR_DPMm_MASK                   0xffffffff
#define MPR_DPMm_RBU0_MASK              0x00000001
#define MPR_DPMm_RBU0_SHIFT             0
#define MPR_DPMm_WBU0_MASK              0x00000002
#define MPR_DPMm_WBU0_SHIFT             1
#define MPR_DPMm_RBL0_MASK              0x00000004
#define MPR_DPMm_RBL0_SHIFT             2
#define MPR_DPMm_WBL0_MASK              0x00000008
#define MPR_DPMm_WBL0_SHIFT             3
#define MPR_DPMm_RS0_MASK               0x00000010
#define MPR_DPMm_RS0_SHIFT              4
#define MPR_DPMm_WS0_MASK               0x00000020
#define MPR_DPMm_WS0_SHIFT              5
#define MPR_DPMm_RE0_MASK               0x00000040
#define MPR_DPMm_RE0_SHIFT              6
#define MPR_DPMm_WE0_MASK               0x00000080
#define MPR_DPMm_WE0_SHIFT              7
#define MPR_DPMm_RBU1_MASK              0x00000100
#define MPR_DPMm_RBU1_SHIFT             8
#define MPR_DPMm_WBU1_MASK              0x00000200
#define MPR_DPMm_WBU1_SHIFT             9
#define MPR_DPMm_RBL1_MASK              0x00000400
#define MPR_DPMm_RBL1_SHIFT             10
#define MPR_DPMm_WBL1_MASK              0x00000800
#define MPR_DPMm_WBL1_SHIFT             11
#define MPR_DPMm_RS1_MASK               0x00001000
#define MPR_DPMm_RS1_SHIFT              12
#define MPR_DPMm_WS1_MASK               0x00002000
#define MPR_DPMm_WS1_SHIFT              13
#define MPR_DPMm_RE1_MASK               0x00004000
#define MPR_DPMm_RE1_SHIFT              14
#define MPR_DPMm_WE1_MASK               0x00008000
#define MPR_DPMm_WE1_SHIFT              15
#define MPR_DPMm_RBU2_MASK              0x00010000
#define MPR_DPMm_RBU2_SHIFT             16
#define MPR_DPMm_WBU2_MASK              0x00020000
#define MPR_DPMm_WBU2_SHIFT             17
#define MPR_DPMm_RBL2_MASK              0x00040000
#define MPR_DPMm_RBL2_SHIFT             18
#define MPR_DPMm_WBL2_MASK              0x00080000
#define MPR_DPMm_WBL2_SHIFT             19
#define MPR_DPMm_RS2_MASK               0x00100000
#define MPR_DPMm_RS2_SHIFT              20
#define MPR_DPMm_WS2_MASK               0x00200000
#define MPR_DPMm_WS2_SHIFT              21
#define MPR_DPMm_RE2_MASK               0x00400000
#define MPR_DPMm_RE2_SHIFT              22
#define MPR_DPMm_WE2_MASK               0x00800000
#define MPR_DPMm_WE2_SHIFT              23
#define MPR_DPMm_RBU3_MASK              0x01000000
#define MPR_DPMm_RBU3_SHIFT             24
#define MPR_DPMm_WBU3_MASK              0x02000000
#define MPR_DPMm_WBU3_SHIFT             25
#define MPR_DPMm_RBL3_MASK              0x04000000
#define MPR_DPMm_RBL3_SHIFT             26
#define MPR_DPMm_WBL3_MASK              0x08000000
#define MPR_DPMm_WBL3_SHIFT             27
#define MPR_DPMm_RS3_MASK               0x10000000
#define MPR_DPMm_RS3_SHIFT              28
#define MPR_DPMm_WS3_MASK               0x20000000
#define MPR_DPMm_WS3_SHIFT              29
#define MPR_DPMm_RE3_MASK               0x40000000
#define MPR_DPMm_RE3_SHIFT              30
#define MPR_DPMm_WE3_MASK               0x80000000
#define MPR_DPMm_WE3_SHIFT              31



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

#define MPR_DPRn_mL_MASK                0xffffffff
#define MPR_DPRn_mL_LOWBND_MASK         0xffffffff
#define MPR_DPRn_mL_LOWBND_SHIFT        0



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

#define MPR_DPRn_mU_MASK                0xffffffff
#define MPR_DPRn_mU_UPPBND_MASK         0xffffffff
#define MPR_DPRn_mU_UPPBND_SHIFT        0




#endif /* _HAVE_TRICORE_MPR_SHAREMASKS_H_ */

