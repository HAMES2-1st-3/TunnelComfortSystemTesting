/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_MPR_SHARETYPES_H_
#define _HAVE_TRICORE_MPR_SHARETYPES_H_


/********************** MPR_CPMm_t *************************/
/*
   MPR_CPM0              "Code Memory Protection Mode Register 0"
   MPR_CPM1              "Code Memory Protection Mode Register 1"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int BU0:1;               /*  = [0..0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1..1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2..2] = 0x00000004 */
      unsigned int BL0:1;               /*  = [3..3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int XS0:1;               /*  = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int XE0:1;               /*  = [7..7] = 0x00000080 */
      unsigned int BU1:1;               /*  = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int BL1:1;               /*  = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int XS1:1;               /*  = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int XE1:1;               /*  = [15..15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MPR_CPMm_t_nonv;

typedef volatile MPR_CPMm_t_nonv MPR_CPMm_t;

/********************** MPR_CPRn_mL_t *************************/
/*
   MPR_CPR0_0L           "Code Segment Protection Register Set 0, Range 0, Lower"
   MPR_CPR0_1L           "Code Segment Protection Register Set 0, Range 1, Lower"
   MPR_CPR1_0L           "Code Segment Protection Register Set 1, Range 0, Lower"
   MPR_CPR1_1L           "Code Segment Protection Register Set 1, Range 1, Lower"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int LOWBND:32;           /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MPR_CPRn_mL_t_nonv;

typedef volatile MPR_CPRn_mL_t_nonv MPR_CPRn_mL_t;

/********************** MPR_CPRn_mU_t *************************/
/*
   MPR_CPR0_0U           "Code Segment Protection Register Set 0, Range 0, Upper"
   MPR_CPR0_1U           "Code Segment Protection Register Set 0, Range 1, Upper"
   MPR_CPR1_0U           "Code Segment Protection Register Set 1, Range 0, Upper"
   MPR_CPR1_1U           "Code Segment Protection Register Set 1, Range 1, Upper"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int UPPBND:32;           /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MPR_CPRn_mU_t_nonv;

typedef volatile MPR_CPRn_mU_t_nonv MPR_CPRn_mU_t;

/********************** MPR_DPMm_t *************************/
/*
   MPR_DPM0              "Data Memory Protection Mode Register 0"
   MPR_DPM1              "Data Memory Protection Mode Register 1"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RBU0:1;              /*  = [0..0] = 0x00000001 */
      unsigned int WBU0:1;              /*  = [1..1] = 0x00000002 */
      unsigned int RBL0:1;              /*  = [2..2] = 0x00000004 */
      unsigned int WBL0:1;              /*  = [3..3] = 0x00000008 */
      unsigned int RS0:1;               /*  = [4..4] = 0x00000010 */
      unsigned int WS0:1;               /*  = [5..5] = 0x00000020 */
      unsigned int RE0:1;               /*  = [6..6] = 0x00000040 */
      unsigned int WE0:1;               /*  = [7..7] = 0x00000080 */
      unsigned int RBU1:1;              /*  = [8..8] = 0x00000100 */
      unsigned int WBU1:1;              /*  = [9..9] = 0x00000200 */
      unsigned int RBL1:1;              /*  = [10..10] = 0x00000400 */
      unsigned int WBL1:1;              /*  = [11..11] = 0x00000800 */
      unsigned int RS1:1;               /*  = [12..12] = 0x00001000 */
      unsigned int WS1:1;               /*  = [13..13] = 0x00002000 */
      unsigned int RE1:1;               /*  = [14..14] = 0x00004000 */
      unsigned int WE1:1;               /*  = [15..15] = 0x00008000 */
      unsigned int RBU2:1;              /*  = [16..16] = 0x00010000 */
      unsigned int WBU2:1;              /*  = [17..17] = 0x00020000 */
      unsigned int RBL2:1;              /*  = [18..18] = 0x00040000 */
      unsigned int WBL2:1;              /*  = [19..19] = 0x00080000 */
      unsigned int RS2:1;               /*  = [20..20] = 0x00100000 */
      unsigned int WS2:1;               /*  = [21..21] = 0x00200000 */
      unsigned int RE2:1;               /*  = [22..22] = 0x00400000 */
      unsigned int WE2:1;               /*  = [23..23] = 0x00800000 */
      unsigned int RBU3:1;              /*  = [24..24] = 0x01000000 */
      unsigned int WBU3:1;              /*  = [25..25] = 0x02000000 */
      unsigned int RBL3:1;              /*  = [26..26] = 0x04000000 */
      unsigned int WBL3:1;              /*  = [27..27] = 0x08000000 */
      unsigned int RS3:1;               /*  = [28..28] = 0x10000000 */
      unsigned int WS3:1;               /*  = [29..29] = 0x20000000 */
      unsigned int RE3:1;               /*  = [30..30] = 0x40000000 */
      unsigned int WE3:1;               /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MPR_DPMm_t_nonv;

typedef volatile MPR_DPMm_t_nonv MPR_DPMm_t;

/********************** MPR_DPRn_mL_t *************************/
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

typedef union { /* 32 bits */
   struct {
      unsigned int LOWBND:32;           /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MPR_DPRn_mL_t_nonv;

typedef volatile MPR_DPRn_mL_t_nonv MPR_DPRn_mL_t;

/********************** MPR_DPRn_mU_t *************************/
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

typedef union { /* 32 bits */
   struct {
      unsigned int UPPBND:32;           /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MPR_DPRn_mU_t_nonv;

typedef volatile MPR_DPRn_mU_t_nonv MPR_DPRn_mU_t;


#endif /* _HAVE_TRICORE_MPR_SHARETYPES_H_ */

