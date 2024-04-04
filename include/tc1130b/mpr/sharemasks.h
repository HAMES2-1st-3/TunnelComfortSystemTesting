/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_MPR_SHAREMASKS_H_
#define _HAVE_TRICORE_MPR_SHAREMASKS_H_


/****************** Masks for CPMn_t **********************/
/*
   CPM0                  "Code Memory Protection Mode Register 0"
   CPM1                  "Code Memory Protection Mode Register 1"
*/
/**********************************************************/

#define CPMn_MASK                       0x0000a9a9
#define CPMn_BU0_MASK                   0x00000001
#define CPMn_BU0_SHIFT                  0
#define CPMn_BL0_MASK                   0x00000008
#define CPMn_BL0_SHIFT                  3
#define CPMn_XS0_MASK                   0x00000020
#define CPMn_XS0_SHIFT                  5
#define CPMn_XE0_MASK                   0x00000080
#define CPMn_XE0_SHIFT                  7
#define CPMn_BU1_MASK                   0x00000100
#define CPMn_BU1_SHIFT                  8
#define CPMn_BL1_MASK                   0x00000800
#define CPMn_BL1_SHIFT                  11
#define CPMn_XS1_MASK                   0x00002000
#define CPMn_XS1_SHIFT                  13
#define CPMn_XE1_MASK                   0x00008000
#define CPMn_XE1_SHIFT                  15



/****************** Masks for CPRn_mL_t **********************/
/*
   CPR0_0L               "Code Segment Protection Register Set 0, Range 0, Lower"
   CPR0_1L               "Code Segment Protection Register Set 0, Range 1, Lower"
   CPR1_0L               "Code Segment Protection Register Set 1, Range 0, Lower"
   CPR1_1L               "Code Segment Protection Register Set 1, Range 1, Lower"
*/
/**********************************************************/

#define CPRn_mL_MASK                    0xffffffff
#define CPRn_mL_LOWBND_MASK             0xffffffff
#define CPRn_mL_LOWBND_SHIFT            0



/****************** Masks for CPRn_mU_t **********************/
/*
   CPR0_0U               "Code Segment Protection Register Set 0, Range 0, Upper"
   CPR0_1U               "Code Segment Protection Register Set 0, Range 1, Upper"
   CPR1_0U               "Code Segment Protection Register Set 1, Range 0, Upper"
   CPR1_1U               "Code Segment Protection Register Set 1, Range 1, Upper"
*/
/**********************************************************/

#define CPRn_mU_MASK                    0xffffffff
#define CPRn_mU_UPPBND_MASK             0xffffffff
#define CPRn_mU_UPPBND_SHIFT            0



/****************** Masks for DPMn_t **********************/
/*
   DPM0                  "Data Memory Protection Mode Register 0"
   DPM1                  "Data Memory Protection Mode Register 1"
*/
/**********************************************************/

#define DPMn_MASK                       0xffffffff
#define DPMn_RBU0_MASK                  0x00000001
#define DPMn_RBU0_SHIFT                 0
#define DPMn_WBU0_MASK                  0x00000002
#define DPMn_WBU0_SHIFT                 1
#define DPMn_RBL0_MASK                  0x00000004
#define DPMn_RBL0_SHIFT                 2
#define DPMn_WBL0_MASK                  0x00000008
#define DPMn_WBL0_SHIFT                 3
#define DPMn_RS0_MASK                   0x00000010
#define DPMn_RS0_SHIFT                  4
#define DPMn_WS0_MASK                   0x00000020
#define DPMn_WS0_SHIFT                  5
#define DPMn_RE0_MASK                   0x00000040
#define DPMn_RE0_SHIFT                  6
#define DPMn_WE0_MASK                   0x00000080
#define DPMn_WE0_SHIFT                  7
#define DPMn_RBU1_MASK                  0x00000100
#define DPMn_RBU1_SHIFT                 8
#define DPMn_WBU1_MASK                  0x00000200
#define DPMn_WBU1_SHIFT                 9
#define DPMn_RBL1_MASK                  0x00000400
#define DPMn_RBL1_SHIFT                 10
#define DPMn_WBL1_MASK                  0x00000800
#define DPMn_WBL1_SHIFT                 11
#define DPMn_RS1_MASK                   0x00001000
#define DPMn_RS1_SHIFT                  12
#define DPMn_WS1_MASK                   0x00002000
#define DPMn_WS1_SHIFT                  13
#define DPMn_RE1_MASK                   0x00004000
#define DPMn_RE1_SHIFT                  14
#define DPMn_WE1_MASK                   0x00008000
#define DPMn_WE1_SHIFT                  15
#define DPMn_RBU2_MASK                  0x00010000
#define DPMn_RBU2_SHIFT                 16
#define DPMn_WBU2_MASK                  0x00020000
#define DPMn_WBU2_SHIFT                 17
#define DPMn_RBL2_MASK                  0x00040000
#define DPMn_RBL2_SHIFT                 18
#define DPMn_WBL2_MASK                  0x00080000
#define DPMn_WBL2_SHIFT                 19
#define DPMn_RS2_MASK                   0x00100000
#define DPMn_RS2_SHIFT                  20
#define DPMn_WS2_MASK                   0x00200000
#define DPMn_WS2_SHIFT                  21
#define DPMn_RE2_MASK                   0x00400000
#define DPMn_RE2_SHIFT                  22
#define DPMn_WE2_MASK                   0x00800000
#define DPMn_WE2_SHIFT                  23
#define DPMn_RBU3_MASK                  0x01000000
#define DPMn_RBU3_SHIFT                 24
#define DPMn_WBU3_MASK                  0x02000000
#define DPMn_WBU3_SHIFT                 25
#define DPMn_RBL3_MASK                  0x04000000
#define DPMn_RBL3_SHIFT                 26
#define DPMn_WBL3_MASK                  0x08000000
#define DPMn_WBL3_SHIFT                 27
#define DPMn_RS3_MASK                   0x10000000
#define DPMn_RS3_SHIFT                  28
#define DPMn_WS3_MASK                   0x20000000
#define DPMn_WS3_SHIFT                  29
#define DPMn_RE3_MASK                   0x40000000
#define DPMn_RE3_SHIFT                  30
#define DPMn_WE3_MASK                   0x80000000
#define DPMn_WE3_SHIFT                  31



/****************** Masks for DPRn_mL_t **********************/
/*
   DPR0_0L               "Data Segment Protection Register Set 0, Range 0, Lower"
   DPR0_1L               "Data Segment Protection Register Set 0, Range 1, Lower"
   DPR0_2L               "Data Segment Protection Register Set 0, Range 2, Lower"
   DPR0_3L               "Data Segment Protection Register Set 0, Range 3, Lower"
   DPR1_0L               "Data Segment Protection Register Set 1, Range 0, Lower"
   DPR1_1L               "Data Segment Protection Register Set 1, Range 1, Lower"
   DPR1_2L               "Data Segment Protection Register Set 1, Range 2, Lower"
   DPR1_3L               "Data Segment Protection Register Set 1, Range 3, Lower"
*/
/**********************************************************/

#define DPRn_mL_MASK                    0xffffffff
#define DPRn_mL_LOWBND_MASK             0xffffffff
#define DPRn_mL_LOWBND_SHIFT            0



/****************** Masks for DPRn_mU_t **********************/
/*
   DPR0_0U               "Data Segment Protection Register Set 0, Range 0, Upper"
   DPR0_1U               "Data Segment Protection Register Set 0, Range 1, Upper"
   DPR0_2U               "Data Segment Protection Register Set 0, Range 2, Upper"
   DPR0_3U               "Data Segment Protection Register Set 0, Range 3, Upper"
   DPR1_0U               "Data Segment Protection Register Set 1, Range 0, Upper"
   DPR1_1U               "Data Segment Protection Register Set 1, Range 1, Upper"
   DPR1_2U               "Data Segment Protection Register Set 1, Range 2, Upper"
   DPR1_3U               "Data Segment Protection Register Set 1, Range 0, Upper"
*/
/**********************************************************/

#define DPRn_mU_MASK                    0xffffffff
#define DPRn_mU_UPPBND_MASK             0xffffffff
#define DPRn_mU_UPPBND_SHIFT            0




#endif /* _HAVE_TRICORE_MPR_SHAREMASKS_H_ */

