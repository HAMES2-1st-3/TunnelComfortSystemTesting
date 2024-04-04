/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_CPU_SHAREMASKS_H_
#define _HAVE_TRICORE_CPU_SHAREMASKS_H_


/****************** Masks for An_t **********************/
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

#define An_MASK                         0xffffffff
#define An_ADDR_MASK                    0xffffffff
#define An_ADDR_SHIFT                   0



/****************** Masks for CPRn_mL_t **********************/
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

#define CPRn_mL_MASK                    0xfffffff8
#define CPRn_mL_LOWBND_MASK             0xfffffff8
#define CPRn_mL_LOWBND_SHIFT            3



/****************** Masks for CPRn_mU_t **********************/
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

#define CPRn_mU_MASK                    0xfffffff8
#define CPRn_mU_UPPBND_MASK             0xfffffff8
#define CPRn_mU_UPPBND_SHIFT            3



/****************** Masks for CPSn_t **********************/
/*
   CPS0                  "Code Protection Set Configuration Register 0"
   CPS1                  "Code Protection Set Configuration Register 1"
   CPS2                  "Code Protection Set Configuration Register 2"
   CPS3                  "Code Protection Set Configuration Register 3"
*/
/**********************************************************/

#define CPSn_MASK                       0x99999999
#define CPSn_RS0_MASK                   0x00000001
#define CPSn_RS0_SHIFT                  0
#define CPSn_WE0_MASK                   0x00000008
#define CPSn_WE0_SHIFT                  3
#define CPSn_RS1_MASK                   0x00000010
#define CPSn_RS1_SHIFT                  4
#define CPSn_XE1_MASK                   0x00000080
#define CPSn_XE1_SHIFT                  7
#define CPSn_RS2_MASK                   0x00000100
#define CPSn_RS2_SHIFT                  8
#define CPSn_XE2_MASK                   0x00000800
#define CPSn_XE2_SHIFT                  11
#define CPSn_RS3_MASK                   0x00001000
#define CPSn_RS3_SHIFT                  12
#define CPSn_XE3_MASK                   0x00008000
#define CPSn_XE3_SHIFT                  15
#define CPSn_RS4_MASK                   0x00010000
#define CPSn_RS4_SHIFT                  16
#define CPSn_XE4_MASK                   0x00080000
#define CPSn_XE4_SHIFT                  19
#define CPSn_RS5_MASK                   0x00100000
#define CPSn_RS5_SHIFT                  20
#define CPSn_XE5_MASK                   0x00800000
#define CPSn_XE5_SHIFT                  23
#define CPSn_RS6_MASK                   0x01000000
#define CPSn_RS6_SHIFT                  24
#define CPSn_XE6_MASK                   0x08000000
#define CPSn_XE6_SHIFT                  27
#define CPSn_RS7_MASK                   0x10000000
#define CPSn_RS7_SHIFT                  28
#define CPSn_XE7_MASK                   0x80000000
#define CPSn_XE7_SHIFT                  31



/****************** Masks for CPU_SRCm_t **********************/
/*
   CPU_SRC0              "CPU Service Request Control Register 0"
   CPU_SRC1              "CPU Service Request Control Register 1"
   CPU_SRC2              "CPU Service Request Control Register 2"
   CPU_SRC3              "CPU Service Request Control Register 3"
*/
/**********************************************************/

#define CPU_SRCm_MASK                   0x0000f4ff
#define CPU_SRCm_SRPN_MASK              0x000000ff
#define CPU_SRCm_SRPN_SHIFT             0
#define CPU_SRCm_TOS_MASK               0x00000400
#define CPU_SRCm_TOS_SHIFT              10
#define CPU_SRCm_SRE_MASK               0x00001000
#define CPU_SRCm_SRE_SHIFT              12
#define CPU_SRCm_SRR_MASK               0x00002000
#define CPU_SRCm_SRR_SHIFT              13
#define CPU_SRCm_CLRR_MASK              0x00004000
#define CPU_SRCm_CLRR_SHIFT             14
#define CPU_SRCm_SETR_MASK              0x00008000
#define CPU_SRCm_SETR_SHIFT             15



/****************** Masks for DPRn_mL_t **********************/
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

#define DPRn_mL_MASK                    0xfffffff8
#define DPRn_mL_LOWBND_MASK             0xfffffff8
#define DPRn_mL_LOWBND_SHIFT            3



/****************** Masks for DPRn_mU_t **********************/
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

#define DPRn_mU_MASK                    0xfffffff8
#define DPRn_mU_UPPBND_MASK             0xfffffff8
#define DPRn_mU_UPPBND_SHIFT            3



/****************** Masks for DPSn_t **********************/
/*
   DPS0                  "Data Protection Set Configuration Register 0"
   DPS1                  "Data Protection Set Configuration Register 1"
   DPS2                  "Data Protection Set Configuration Register 2"
   DPS3                  "Data Protection Set Configuration Register 3"
*/
/**********************************************************/

#define DPSn_MASK                       0xdddddddd
#define DPSn_RS0_MASK                   0x00000001
#define DPSn_RS0_SHIFT                  0
#define DPSn_RE0_MASK                   0x00000004
#define DPSn_RE0_SHIFT                  2
#define DPSn_WE0_MASK                   0x00000008
#define DPSn_WE0_SHIFT                  3
#define DPSn_RS1_MASK                   0x00000010
#define DPSn_RS1_SHIFT                  4
#define DPSn_RE1_MASK                   0x00000040
#define DPSn_RE1_SHIFT                  6
#define DPSn_WE1_MASK                   0x00000080
#define DPSn_WE1_SHIFT                  7
#define DPSn_RS2_MASK                   0x00000100
#define DPSn_RS2_SHIFT                  8
#define DPSn_RE2_MASK                   0x00000400
#define DPSn_RE2_SHIFT                  10
#define DPSn_WE2_MASK                   0x00000800
#define DPSn_WE2_SHIFT                  11
#define DPSn_RS3_MASK                   0x00001000
#define DPSn_RS3_SHIFT                  12
#define DPSn_RE3_MASK                   0x00004000
#define DPSn_RE3_SHIFT                  14
#define DPSn_WE3_MASK                   0x00008000
#define DPSn_WE3_SHIFT                  15
#define DPSn_RS4_MASK                   0x00010000
#define DPSn_RS4_SHIFT                  16
#define DPSn_RE4_MASK                   0x00040000
#define DPSn_RE4_SHIFT                  18
#define DPSn_WE4_MASK                   0x00080000
#define DPSn_WE4_SHIFT                  19
#define DPSn_RS5_MASK                   0x00100000
#define DPSn_RS5_SHIFT                  20
#define DPSn_RE5_MASK                   0x00400000
#define DPSn_RE5_SHIFT                  22
#define DPSn_WE5_MASK                   0x00800000
#define DPSn_WE5_SHIFT                  23
#define DPSn_RS6_MASK                   0x01000000
#define DPSn_RS6_SHIFT                  24
#define DPSn_RE6_MASK                   0x04000000
#define DPSn_RE6_SHIFT                  26
#define DPSn_WE6_MASK                   0x08000000
#define DPSn_WE6_SHIFT                  27
#define DPSn_RS7_MASK                   0x10000000
#define DPSn_RS7_SHIFT                  28
#define DPSn_RE7_MASK                   0x40000000
#define DPSn_RE7_SHIFT                  30
#define DPSn_WE7_MASK                   0x80000000
#define DPSn_WE7_SHIFT                  31



/****************** Masks for Dn_t **********************/
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

#define Dn_MASK                         0xffffffff
#define Dn_DATA_MASK                    0xffffffff
#define Dn_DATA_SHIFT                   0



/****************** Masks for FPU_TRAP_SRCm_t **********************/
/*
   FPU_TRAP_SRC1         "Trapping Instruction Operand Register"
   FPU_TRAP_SRC2         "Trapping Instruction Operand Register"
   FPU_TRAP_SRC3         "Trapping Instruction Operand Register"
*/
/**********************************************************/

#define FPU_TRAP_SRCm_MASK              0xffffffff
#define FPU_TRAP_SRCm_SRCn_MASK         0xffffffff
#define FPU_TRAP_SRCm_SRCn_SHIFT        0



/****************** Masks for MnCNT_t **********************/
/*
   M1CNT                 "Multi-Count Register 1"
   M2CNT                 "Multi-Count Register 2"
   M3CNT                 "Multi-Count Register 3"
*/
/**********************************************************/

#define MnCNT_MASK                      0xffffffff
#define MnCNT_CountValue_MASK           0x7fffffff
#define MnCNT_CountValue_SHIFT          0
#define MnCNT_SOvf_MASK                 0x80000000
#define MnCNT_SOvf_SHIFT                31



/****************** Masks for TPS_TIMERm_t **********************/
/*
   TPS_TIMER0            "Temporal Protection System Timer Register 0"
   TPS_TIMER1            "Temporal Protection System Timer Register 1"
*/
/**********************************************************/

#define TPS_TIMERm_MASK                 0xffffffff
#define TPS_TIMERm_Timer_MASK           0xffffffff
#define TPS_TIMERm_Timer_SHIFT          0



/****************** Masks for TRnADR_t **********************/
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

#define TRnADR_MASK                     0xffffffff
#define TRnADR_ADDR_MASK                0xffffffff
#define TRnADR_ADDR_SHIFT               0



/****************** Masks for TRnEVT_t **********************/
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

#define TRnEVT_MASK                     0x181fb0ff
#define TRnEVT_EVTA_MASK                0x00000007
#define TRnEVT_EVTA_SHIFT               0
#define TRnEVT_BBM_MASK                 0x00000008
#define TRnEVT_BBM_SHIFT                3
#define TRnEVT_BOD_MASK                 0x00000010
#define TRnEVT_BOD_SHIFT                4
#define TRnEVT_SUSP_MASK                0x00000020
#define TRnEVT_SUSP_SHIFT               5
#define TRnEVT_CNT_MASK                 0x000000c0
#define TRnEVT_CNT_SHIFT                6
#define TRnEVT_TYP_MASK                 0x00001000
#define TRnEVT_TYP_SHIFT                12
#define TRnEVT_RNG_MASK                 0x00002000
#define TRnEVT_RNG_SHIFT                13
#define TRnEVT_ASI_EN_MASK              0x00008000
#define TRnEVT_ASI_EN_SHIFT             15
#define TRnEVT_ASI_MASK                 0x001f0000
#define TRnEVT_ASI_SHIFT                16
#define TRnEVT_AST_MASK                 0x08000000
#define TRnEVT_AST_SHIFT                27
#define TRnEVT_ALD_MASK                 0x10000000
#define TRnEVT_ALD_SHIFT                28




#endif /* _HAVE_TRICORE_CPU_SHAREMASKS_H_ */

