/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_CPU_SHARETYPES_H_
#define _HAVE_TRICORE_CPU_SHARETYPES_H_


/********************** An_t *************************/
/*
   A0                    "Address Register 0"
   A1                    "Address Register 1"
   A10                   "Address Register 10"
   A11                   "Address Register 11"
   A12                   "Address Register 12"
   A13                   "Address Register 13"
   A14                   "Address Register 14"
   A15                   "Address Register 15"
   A2                    "Address Register 2"
   A3                    "Address Register 3"
   A4                    "Address Register 4"
   A5                    "Address Register 5"
   A6                    "Address Register 6"
   A7                    "Address Register 7"
   A8                    "Address Register 8"
   A9                    "Address Register 9"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ADDR:32;             /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) An_t_nonv;

typedef volatile An_t_nonv An_t;

/********************** CPMn_t *************************/
/*
   CPM0                  "Code Protection Mode Register Set 0"
   CPM1                  "Code Protection Mode Register Set 1"
   CPM2                  "Code Protection Mode Register Set 2"
   CPM3                  "Code Protection Mode Register Set 3"
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
      unsigned int BU2:1;               /*  = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int BL2:1;               /*  = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int XS2:1;               /*  = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int XE2:1;               /*  = [23..23] = 0x00800000 */
      unsigned int BU3:1;               /*  = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int BL3:1;               /*  = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int XS3:1;               /*  = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int XE3:1;               /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CPMn_t_nonv;

typedef volatile CPMn_t_nonv CPMn_t;

/********************** CPR3_mU_t *************************/
/*
   CPR3_0U               "Code Segment Protection Register Set 3, Range 0, Upper Boundary"
   CPR3_1U               "Code Segment Protection Register Set 3, Range 1, Upper Boundary"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int UPPBND:32;           /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CPR3_mU_t_nonv;

typedef volatile CPR3_mU_t_nonv CPR3_mU_t;

/********************** CPRn_mL_t *************************/
/*
   CPR0_0L               "Code Segment Protection Register Set 0, Range 0, Lower Boundary"
   CPR0_1L               "Code Segment Protection Register Set 0, Range 1, Lower Boundary"
   CPR1_0L               "Code Segment Protection Register Set 1, Range 0, Lower Boundary"
   CPR1_1L               "Code Segment Protection Register Set 1, Range 1, Lower Boundary"
   CPR2_0L               "Code Segment Protection Register Set 2, Range 0, Lower Boundary"
   CPR2_1L               "Code Segment Protection Register Set 2, Range 1, Lower Boundary"
   CPR3_0L               "Code Segment Protection Register Set 3, Range 0, Lower Boundary"
   CPR3_1L               "Code Segment Protection Register Set 3, Range 1, Lower Boundary"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0..0] = 0x00000001 */
      unsigned int LOWBND:31;           /*  = [1..31] = 0xfffffffe */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CPRn_mL_t_nonv;

typedef volatile CPRn_mL_t_nonv CPRn_mL_t;

/********************** CPRn_mU_t *************************/
/*
   CPR0_0U               "Code Segment Protection Register Set 0, Range 0, Upper Boundary"
   CPR0_1U               "Code Segment Protection Register Set 0, Range 1, Upper Boundary"
   CPR1_0U               "Code Segment Protection Register Set 1, Range 0, Upper Boundary"
   CPR1_1U               "Code Segment Protection Register Set 1, Range 1, Upper Boundary"
   CPR2_0U               "Code Segment Protection Register Set 2, Range 0, Upper Boundary"
   CPR2_1U               "Code Segment Protection Register Set 2, Range 1, Upper Boundary"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0..0] = 0x00000001 */
      unsigned int UPPBND:31;           /*  = [1..31] = 0xfffffffe */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CPRn_mU_t_nonv;

typedef volatile CPRn_mU_t_nonv CPRn_mU_t;

/********************** CPU_SRCm_t *************************/
/*
   CPU_SRC0              "CPU Service Request Control Register 0"
   CPU_SRC1              "CPU Service Request Control Register 1"
   CPU_SRC2              "CPU Service Request Control Register 2"
   CPU_SRC3              "CPU Service Request Control Register 3"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SRPN:8;              /*  = [0..7] = 0x000000ff */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int TOS:1;               /*  = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int SRE:1;               /*  = [12..12] = 0x00001000 */
      unsigned int SRR:1;               /*  = [13..13] = 0x00002000 */
      unsigned int CLRR:1;              /*  = [14..14] = 0x00004000 */
      unsigned int SETR:1;              /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) CPU_SRCm_t_nonv;

typedef volatile CPU_SRCm_t_nonv CPU_SRCm_t;

/********************** DPMn_t *************************/
/*
   DPM0                  "Data Protection Mode Register Set 0"
   DPM1                  "Data Protection Mode Register Set 1"
   DPM2                  "Data Protection Mode Register Set 2"
   DPM3                  "Data Protection Mode Register Set 3"
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
} __attribute__((aligned(4))) DPMn_t_nonv;

typedef volatile DPMn_t_nonv DPMn_t;

/********************** DPRn_mL_t *************************/
/*
   DPR0_0L               "Data Segment Protection Register Set 0, Range 0, Lower Boundary"
   DPR0_1L               "Data Segment Protection Register Set 0, Range 1, Lower Boundary"
   DPR0_2L               "Data Segment Protection Register Set 0, Range 2, Lower Boundary"
   DPR0_3L               "Data Segment Protection Register Set 0, Range 3, Lower Boundary"
   DPR1_0L               "Data Segment Protection Register Set 1, Range 0, Lower Boundary"
   DPR1_1L               "Data Segment Protection Register Set 1, Range 1, Lower Boundary"
   DPR1_2L               "Data Segment Protection Register Set 1, Range 2, Lower Boundary"
   DPR1_3L               "Data Segment Protection Register Set 1, Range 3, Lower Boundary"
   DPR2_0L               "Data Segment Protection Register Set 2, Range 0, Lower Boundary"
   DPR2_1L               "Data Segment Protection Register Set 2, Range 1, Lower Boundary"
   DPR2_2L               "Data Segment Protection Register Set 2, Range 2, Lower Boundary"
   DPR2_3L               "Data Segment Protection Register Set 2, Range 3, Lower Boundary"
   DPR3_0L               "Data Segment Protection Register Set 3, Range 0, Lower Boundary"
   DPR3_1L               "Data Segment Protection Register Set 3, Range 1, Lower Boundary"
   DPR3_2L               "Data Segment Protection Register Set 3, Range 2, Lower Boundary"
   DPR3_3L               "Data Segment Protection Register Set 3, Range 3, Lower Boundary"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int LOWBND:32;           /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) DPRn_mL_t_nonv;

typedef volatile DPRn_mL_t_nonv DPRn_mL_t;

/********************** DPRn_mU_t *************************/
/*
   DPR0_0U               "Data Segment Protection Register Set 0, Range 0, Upper Boundary"
   DPR0_1U               "Data Segment Protection Register Set 0, Range 1, Upper Boundary"
   DPR0_2U               "Data Segment Protection Register Set 0, Range 2, Upper Boundary"
   DPR0_3U               "Data Segment Protection Register Set 0, Range 3, Upper Boundary"
   DPR1_0U               "Data Segment Protection Register Set 1, Range 0, Upper Boundary"
   DPR1_1U               "Data Segment Protection Register Set 1, Range 1, Upper Boundary"
   DPR1_2U               "Data Segment Protection Register Set 1, Range 2, Upper Boundary"
   DPR1_3U               "Data Segment Protection Register Set 1, Range 3, Upper Boundary"
   DPR2_0U               "Data Segment Protection Register Set 2, Range 0, Upper Boundary"
   DPR2_1U               "Data Segment Protection Register Set 2, Range 1, Upper Boundary"
   DPR2_2U               "Data Segment Protection Register Set 2, Range 2, Upper Boundary"
   DPR2_3U               "Data Segment Protection Register Set 2, Range 3, Upper Boundary"
   DPR3_0U               "Data Segment Protection Register Set 3, Range 0, Upper Boundary"
   DPR3_1U               "Data Segment Protection Register Set 3, Range 1, Upper Boundary"
   DPR3_2U               "Data Segment Protection Register Set 3, Range 2, Upper Boundary"
   DPR3_3U               "Data Segment Protection Register Set 3, Range 3, Upper Boundary"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int UPPBND:32;           /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) DPRn_mU_t_nonv;

typedef volatile DPRn_mU_t_nonv DPRn_mU_t;

/********************** Dn_t *************************/
/*
   D0                    "Data Register 0"
   D1                    "Data Register 1"
   D10                   "Data Register 10"
   D11                   "Data Register 11"
   D12                   "Data Register 12"
   D13                   "Data Register 13"
   D14                   "Data Register 14"
   D15                   "Data Register 15"
   D2                    "Data Register 2"
   D3                    "Data Register 3"
   D4                    "Data Register 4"
   D5                    "Data Register 5"
   D6                    "Data Register 6"
   D7                    "Data Register 7"
   D8                    "Data Register 8"
   D9                    "Data Register 9"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DATA:32;             /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) Dn_t_nonv;

typedef volatile Dn_t_nonv Dn_t;

/********************** FPU_TRAP_SRCm_t *************************/
/*
   FPU_TRAP_SRC1         "Trapping Instruction Operand Register"
   FPU_TRAP_SRC2         "Trapping Instruction Operand Register"
   FPU_TRAP_SRC3         "Trapping Instruction Operand Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int PC:32;               /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) FPU_TRAP_SRCm_t_nonv;

typedef volatile FPU_TRAP_SRCm_t_nonv FPU_TRAP_SRCm_t;

/********************** MnCNT_t *************************/
/*
   M1CNT                 "Multi-Count Register 1"
   M2CNT                 "Multi-Count Register 2"
   M3CNT                 "Multi-Count Register 3"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int Count_Value:31;      /*  = [0..30] = 0x7fffffff */
      unsigned int SOvf:1;              /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MnCNT_t_nonv;

typedef volatile MnCNT_t_nonv MnCNT_t;

/********************** TRnEVT_t *************************/
/*
   TR0EVT                "Trigger Event 0 Register"
   TR1EVT                "Trigger Event 1 Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int EVTA:3;              /*  = [0..2] = 0x00000007 */
      unsigned int BBM:1;               /*  = [3..3] = 0x00000008 */
      unsigned int BOD:1;               /*  = [4..4] = 0x00000010 */
      unsigned int SUSP:1;              /*  = [5..5] = 0x00000020 */
      unsigned int CNT:2;               /*  = [6..7] = 0x000000c0 */
      unsigned int DLR_LR:1;            /*  = [8..8] = 0x00000100 */
      unsigned int DLR_U:1;             /*  = [9..9] = 0x00000200 */
      unsigned int DU_LR:1;             /*  = [10..10] = 0x00000400 */
      unsigned int DU_U:1;              /*  = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int ASI_EN:1;            /*  = [15..15] = 0x00008000 */
      unsigned int ASI:5;               /*  = [16..20] = 0x001f0000 */
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
} __attribute__((aligned(4))) TRnEVT_t_nonv;

typedef volatile TRnEVT_t_nonv TRnEVT_t;


#endif /* _HAVE_TRICORE_CPU_SHARETYPES_H_ */

