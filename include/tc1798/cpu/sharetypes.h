/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_CPU_SHARETYPES_H_
#define _HAVE_TRICORE_CPU_SHARETYPES_H_


/********************** An_t *************************/
/*
   A0                    "Address General Purpose Register 0"
   A1                    "Address General Purpose Register 1"
   A10                   "Address General Purpose Register 10"
   A11                   "Address General Purpose Register 11"
   A12                   "Address General Purpose Register 12"
   A13                   "Address General Purpose Register 13"
   A14                   "Address General Purpose Register 14"
   A15                   "Address General Purpose Register 15"
   A2                    "Address General Purpose Register 2"
   A3                    "Address General Purpose Register 3"
   A4                    "Address General Purpose Register 4"
   A5                    "Address General Purpose Register 5"
   A6                    "Address General Purpose Register 6"
   A7                    "Address General Purpose Register 7"
   A8                    "Address General Purpose Register 8"
   A9                    "Address General Purpose Register 9"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ADDR:32;             /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) An_t_nonv;

typedef volatile An_t_nonv An_t;

/********************** CPRn_mL_t *************************/
/*
   CPR0_0L               "Code Segment Protection Register Set 0, Range 0, Lower Bound"
   CPR0_1L               "Code Segment Protection Register Set 0, Range 1, Lower Bound"
   CPR1_0L               "Code Segment Protection Register Set 1, Range 0, Lower Bound"
   CPR1_1L               "Code Segment Protection Register Set 1, Range 1, Lower Bound"
   CPR2_0L               "Code Segment Protection Register Set 2, Range 0, Lower Bound"
   CPR2_1L               "Code Segment Protection Register Set 2, Range 1, Lower Bound"
   CPR3_0L               "Code Segment Protection Register Set 3, Range 0, Lower Bound"
   CPR3_1L               "Code Segment Protection Register Set 3, Range 1, Lower Bound"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2] = 0x00000004 */
      unsigned int LOWBND:29;           /*  = [3..31] = 0xfffffff8 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) CPRn_mL_t_nonv;

typedef volatile CPRn_mL_t_nonv CPRn_mL_t;

/********************** CPRn_mU_t *************************/
/*
   CPR0_0U               "Code Segment Protection Register Set 0, Range 0, Upper Bound"
   CPR0_1U               "Code Segment Protection Register Set 0, Range 1, Upper Bound"
   CPR1_0U               "Code Segment Protection Register Set 1, Range 0, Upper Bound"
   CPR1_1U               "Code Segment Protection Register Set 1, Range 1, Upper Bound"
   CPR2_0U               "Code Segment Protection Register Set 2, Range 0, Upper Bound"
   CPR2_1U               "Code Segment Protection Register Set 2, Range 1, Upper Bound"
   CPR3_0U               "Code Segment Protection Register Set 3, Range 0, Upper Bound"
   CPR3_1U               "Code Segment Protection Register Set 3, Range 1, Upper Bound"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2] = 0x00000004 */
      unsigned int UPPBND:29;           /*  = [3..31] = 0xfffffff8 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) CPRn_mU_t_nonv;

typedef volatile CPRn_mU_t_nonv CPRn_mU_t;

/********************** CPSn_t *************************/
/*
   CPS0                  "Code Protection Set Configuration Register 0"
   CPS1                  "Code Protection Set Configuration Register 1"
   CPS2                  "Code Protection Set Configuration Register 2"
   CPS3                  "Code Protection Set Configuration Register 3"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RS0:1;               /*  = [0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2] = 0x00000004 */
      unsigned int WE0:1;               /*  = [3] = 0x00000008 */
      unsigned int RS1:1;               /*  = [4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6] = 0x00000040 */
      unsigned int XE1:1;               /*  = [7] = 0x00000080 */
      unsigned int RS2:1;               /*  = [8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int XE2:1;               /*  = [11] = 0x00000800 */
      unsigned int RS3:1;               /*  = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int XE3:1;               /*  = [15] = 0x00008000 */
      unsigned int RS4:1;               /*  = [16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18] = 0x00040000 */
      unsigned int XE4:1;               /*  = [19] = 0x00080000 */
      unsigned int RS5:1;               /*  = [20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int XE5:1;               /*  = [23] = 0x00800000 */
      unsigned int RS6:1;               /*  = [24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int XE6:1;               /*  = [27] = 0x08000000 */
      unsigned int RS7:1;               /*  = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int XE7:1;               /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) CPSn_t_nonv;

typedef volatile CPSn_t_nonv CPSn_t;

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
      unsigned int _bit8:1;             /* 0 = [8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9] = 0x00000200 */
      unsigned int TOS:1;               /*  = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int SRE:1;               /*  = [12] = 0x00001000 */
      unsigned int SRR:1;               /*  = [13] = 0x00002000 */
      unsigned int CLRR:1;              /*  = [14] = 0x00004000 */
      unsigned int SETR:1;              /*  = [15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) CPU_SRCm_t_nonv;

typedef volatile CPU_SRCm_t_nonv CPU_SRCm_t;

/********************** DPRn_mL_t *************************/
/*
   DPR0_0L               "Data Segment Protection Register Set 0, Range 0, Lower Bound"
   DPR0_1L               "Data Segment Protection Register Set 0, Range 1, Lower Bound"
   DPR1_0L               "Data Segment Protection Register Set 1, Range 0, Lower Bound"
   DPR1_1L               "Data Segment Protection Register Set 1, Range 1, Lower Bound"
   DPR2_0L               "Data Segment Protection Register Set 2, Range 0, Lower Bound"
   DPR2_1L               "Data Segment Protection Register Set 2, Range 1, Lower Bound"
   DPR3_0L               "Data Segment Protection Register Set 3, Range 0, Lower Bound"
   DPR3_1L               "Data Segment Protection Register Set 3, Range 1, Lower Bound"
   DPR4_0L               "Data Segment Protection Register Set 4, Range 0, Lower Bound"
   DPR4_1L               "Data Segment Protection Register Set 4, Range 1, Lower Bound"
   DPR5_0L               "Data Segment Protection Register Set 5, Range 0, Lower Bound"
   DPR5_1L               "Data Segment Protection Register Set 5, Range 1, Lower Bound"
   DPR6_0L               "Data Segment Protection Register Set 6, Range 0, Lower Bound"
   DPR6_1L               "Data Segment Protection Register Set 6, Range 1, Lower Bound"
   DPR7_0L               "Data Segment Protection Register Set 7, Range 0, Lower Bound"
   DPR7_1L               "Data Segment Protection Register Set 7, Range 1, Lower Bound"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2] = 0x00000004 */
      unsigned int LOWBND:29;           /*  = [3..31] = 0xfffffff8 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) DPRn_mL_t_nonv;

typedef volatile DPRn_mL_t_nonv DPRn_mL_t;

/********************** DPRn_mU_t *************************/
/*
   DPR0_0U               "Data Segment Protection Register Set 0, Range 0, Upper Bound"
   DPR0_1U               "Data Segment Protection Register Set 0, Range 1, Upper Bound"
   DPR1_0U               "Data Segment Protection Register Set 1, Range 0, Upper Bound"
   DPR1_1U               "Data Segment Protection Register Set 1, Range 1, Upper Bound"
   DPR2_0U               "Data Segment Protection Register Set 2, Range 0, Upper Bound"
   DPR2_1U               "Data Segment Protection Register Set 2, Range 1, Upper Bound"
   DPR3_0U               "Data Segment Protection Register Set 3, Range 0, Upper Bound"
   DPR3_1U               "Data Segment Protection Register Set 3, Range 1, Upper Bound"
   DPR4_0U               "Data Segment Protection Register Set 4, Range 0, Upper Bound"
   DPR4_1U               "Data Segment Protection Register Set 4, Range 1, Upper Bound"
   DPR5_0U               "Data Segment Protection Register Set 5, Range 0, Upper Bound"
   DPR5_1U               "Data Segment Protection Register Set 5, Range 1, Upper Bound"
   DPR6_0U               "Data Segment Protection Register Set 6, Range 0, Upper Bound"
   DPR6_1U               "Data Segment Protection Register Set 6, Range 1, Upper Bound"
   DPR7_0U               "Data Segment Protection Register Set 7, Range 0, Upper Bound"
   DPR7_1U               "Data Segment Protection Register Set 7, Range 1, Upper Bound"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2] = 0x00000004 */
      unsigned int UPPBND:29;           /*  = [3..31] = 0xfffffff8 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) DPRn_mU_t_nonv;

typedef volatile DPRn_mU_t_nonv DPRn_mU_t;

/********************** DPSn_t *************************/
/*
   DPS0                  "Data Protection Set Configuration Register 0"
   DPS1                  "Data Protection Set Configuration Register 1"
   DPS2                  "Data Protection Set Configuration Register 2"
   DPS3                  "Data Protection Set Configuration Register 3"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RS0:1;               /*  = [0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1] = 0x00000002 */
      unsigned int RE0:1;               /*  = [2] = 0x00000004 */
      unsigned int WE0:1;               /*  = [3] = 0x00000008 */
      unsigned int RS1:1;               /*  = [4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5] = 0x00000020 */
      unsigned int RE1:1;               /*  = [6] = 0x00000040 */
      unsigned int WE1:1;               /*  = [7] = 0x00000080 */
      unsigned int RS2:1;               /*  = [8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9] = 0x00000200 */
      unsigned int RE2:1;               /*  = [10] = 0x00000400 */
      unsigned int WE2:1;               /*  = [11] = 0x00000800 */
      unsigned int RS3:1;               /*  = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int RE3:1;               /*  = [14] = 0x00004000 */
      unsigned int WE3:1;               /*  = [15] = 0x00008000 */
      unsigned int RS4:1;               /*  = [16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17] = 0x00020000 */
      unsigned int RE4:1;               /*  = [18] = 0x00040000 */
      unsigned int WE4:1;               /*  = [19] = 0x00080000 */
      unsigned int RS5:1;               /*  = [20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21] = 0x00200000 */
      unsigned int RE5:1;               /*  = [22] = 0x00400000 */
      unsigned int WE5:1;               /*  = [23] = 0x00800000 */
      unsigned int RS6:1;               /*  = [24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25] = 0x02000000 */
      unsigned int RE6:1;               /*  = [26] = 0x04000000 */
      unsigned int WE6:1;               /*  = [27] = 0x08000000 */
      unsigned int RS7:1;               /*  = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int RE7:1;               /*  = [30] = 0x40000000 */
      unsigned int WE7:1;               /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) DPSn_t_nonv;

typedef volatile DPSn_t_nonv DPSn_t;

/********************** Dn_t *************************/
/*
   D0                    "Data General Purpose Register 0"
   D1                    "Data General Purpose Register 1"
   D10                   "Data General Purpose Register 10"
   D11                   "Data General Purpose Register 11"
   D12                   "Data General Purpose Register 12"
   D13                   "Data General Purpose Register 13"
   D14                   "Data General Purpose Register 14"
   D15                   "Data General Purpose Register 15"
   D2                    "Data General Purpose Register 2"
   D3                    "Data General Purpose Register 3"
   D4                    "Data General Purpose Register 4"
   D5                    "Data General Purpose Register 5"
   D6                    "Data General Purpose Register 6"
   D7                    "Data General Purpose Register 7"
   D8                    "Data General Purpose Register 8"
   D9                    "Data General Purpose Register 9"
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
      unsigned int SRCn:32;             /*  = [0..31] = 0xffffffff */
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
      unsigned int CountValue:31;       /*  = [0..30] = 0x7fffffff */
      unsigned int SOvf:1;              /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) MnCNT_t_nonv;

typedef volatile MnCNT_t_nonv MnCNT_t;

/********************** TPS_TIMERm_t *************************/
/*
   TPS_TIMER0            "Temporal Protection System Timer Register 0"
   TPS_TIMER1            "Temporal Protection System Timer Register 1"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int Timer:32;            /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) TPS_TIMERm_t_nonv;

typedef volatile TPS_TIMERm_t_nonv TPS_TIMERm_t;

/********************** TRnADR_t *************************/
/*
   TR0ADR                "Trigger Address 0"
   TR1ADR                "Trigger Address 1"
   TR2ADR                "Trigger Address 2"
   TR3ADR                "Trigger Address 3"
   TR4ADR                "Trigger Address 4"
   TR5ADR                "Trigger Address 5"
   TR6ADR                "Trigger Address 6"
   TR7ADR                "Trigger Address 7"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ADDR:32;             /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) TRnADR_t_nonv;

typedef volatile TRnADR_t_nonv TRnADR_t;

/********************** TRnEVT_t *************************/
/*
   TR0EVT                "Trigger Event 0"
   TR1EVT                "Trigger Event 1"
   TR2EVT                "Trigger Event 2"
   TR3EVT                "Trigger Event 3"
   TR4EVT                "Trigger Event 4"
   TR5EVT                "Trigger Event 5"
   TR6EVT                "Trigger Event 6"
   TR7EVT                "Trigger Event 7"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int EVTA:3;              /*  = [0..2] = 0x00000007 */
      unsigned int BBM:1;               /*  = [3] = 0x00000008 */
      unsigned int BOD:1;               /*  = [4] = 0x00000010 */
      unsigned int SUSP:1;              /*  = [5] = 0x00000020 */
      unsigned int CNT:2;               /*  = [6..7] = 0x000000c0 */
      unsigned int _bit8:1;             /* 0 = [8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int TYP:1;               /*  = [12] = 0x00001000 */
      unsigned int RNG:1;               /*  = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int ASI_EN:1;            /*  = [15] = 0x00008000 */
      unsigned int ASI:5;               /*  = [16..20] = 0x001f0000 */
      unsigned int _bit21:1;            /* 0 = [21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int AST:1;               /*  = [27] = 0x08000000 */
      unsigned int ALD:1;               /*  = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) TRnEVT_t_nonv;

typedef volatile TRnEVT_t_nonv TRnEVT_t;


#endif /* _HAVE_TRICORE_CPU_SHARETYPES_H_ */

