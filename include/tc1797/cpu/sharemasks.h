/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_CPU_SHAREMASKS_H_
#define _HAVE_TRICORE_CPU_SHAREMASKS_H_


/****************** Masks for An_t **********************/
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

#define An_MASK                         0xffffffff
#define An_ADDR_MASK                    0xffffffff
#define An_ADDR_SHIFT                   0



/****************** Masks for CPMn_t **********************/
/*
   CPM0                  "Code Protection Mode Register Set 0"
   CPM1                  "Code Protection Mode Register Set 1"
   CPM2                  "Code Protection Mode Register Set 2"
   CPM3                  "Code Protection Mode Register Set 3"
*/
/**********************************************************/

#define CPMn_MASK                       0xa9a9a9a9
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
#define CPMn_BU2_MASK                   0x00010000
#define CPMn_BU2_SHIFT                  16
#define CPMn_BL2_MASK                   0x00080000
#define CPMn_BL2_SHIFT                  19
#define CPMn_XS2_MASK                   0x00200000
#define CPMn_XS2_SHIFT                  21
#define CPMn_XE2_MASK                   0x00800000
#define CPMn_XE2_SHIFT                  23
#define CPMn_BU3_MASK                   0x01000000
#define CPMn_BU3_SHIFT                  24
#define CPMn_BL3_MASK                   0x08000000
#define CPMn_BL3_SHIFT                  27
#define CPMn_XS3_MASK                   0x20000000
#define CPMn_XS3_SHIFT                  29
#define CPMn_XE3_MASK                   0x80000000
#define CPMn_XE3_SHIFT                  31



/****************** Masks for CPR3_mU_t **********************/
/*
   CPR3_0U               "Code Segment Protection Register Set 3, Range 0, Upper Boundary"
   CPR3_1U               "Code Segment Protection Register Set 3, Range 1, Upper Boundary"
*/
/**********************************************************/

#define CPR3_mU_MASK                    0xffffffff
#define CPR3_mU_UPPBND_MASK             0xffffffff
#define CPR3_mU_UPPBND_SHIFT            0



/****************** Masks for CPRn_mL_t **********************/
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

#define CPRn_mL_MASK                    0xfffffffe
#define CPRn_mL_LOWBND_MASK             0xfffffffe
#define CPRn_mL_LOWBND_SHIFT            1



/****************** Masks for CPRn_mU_t **********************/
/*
   CPR0_0U               "Code Segment Protection Register Set 0, Range 0, Upper Boundary"
   CPR0_1U               "Code Segment Protection Register Set 0, Range 1, Upper Boundary"
   CPR1_0U               "Code Segment Protection Register Set 1, Range 0, Upper Boundary"
   CPR1_1U               "Code Segment Protection Register Set 1, Range 1, Upper Boundary"
   CPR2_0U               "Code Segment Protection Register Set 2, Range 0, Upper Boundary"
   CPR2_1U               "Code Segment Protection Register Set 2, Range 1, Upper Boundary"
*/
/**********************************************************/

#define CPRn_mU_MASK                    0xfffffffe
#define CPRn_mU_UPPBND_MASK             0xfffffffe
#define CPRn_mU_UPPBND_SHIFT            1



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



/****************** Masks for DPMn_t **********************/
/*
   DPM0                  "Data Protection Mode Register Set 0"
   DPM1                  "Data Protection Mode Register Set 1"
   DPM2                  "Data Protection Mode Register Set 2"
   DPM3                  "Data Protection Mode Register Set 3"
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

#define DPRn_mL_MASK                    0xffffffff
#define DPRn_mL_LOWBND_MASK             0xffffffff
#define DPRn_mL_LOWBND_SHIFT            0



/****************** Masks for DPRn_mU_t **********************/
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

#define DPRn_mU_MASK                    0xffffffff
#define DPRn_mU_UPPBND_MASK             0xffffffff
#define DPRn_mU_UPPBND_SHIFT            0



/****************** Masks for Dn_t **********************/
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
#define FPU_TRAP_SRCm_PC_MASK           0xffffffff
#define FPU_TRAP_SRCm_PC_SHIFT          0



/****************** Masks for MnCNT_t **********************/
/*
   M1CNT                 "Multi-Count Register 1"
   M2CNT                 "Multi-Count Register 2"
   M3CNT                 "Multi-Count Register 3"
*/
/**********************************************************/

#define MnCNT_MASK                      0xffffffff
#define MnCNT_Count_Value_MASK          0x7fffffff
#define MnCNT_Count_Value_SHIFT         0
#define MnCNT_SOvf_MASK                 0x80000000
#define MnCNT_SOvf_SHIFT                31



/****************** Masks for TRnEVT_t **********************/
/*
   TR0EVT                "Trigger Event 0 Register"
   TR1EVT                "Trigger Event 1 Register"
*/
/**********************************************************/

#define TRnEVT_MASK                     0x001f8fff
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
#define TRnEVT_DLR_LR_MASK              0x00000100
#define TRnEVT_DLR_LR_SHIFT             8
#define TRnEVT_DLR_U_MASK               0x00000200
#define TRnEVT_DLR_U_SHIFT              9
#define TRnEVT_DU_LR_MASK               0x00000400
#define TRnEVT_DU_LR_SHIFT              10
#define TRnEVT_DU_U_MASK                0x00000800
#define TRnEVT_DU_U_SHIFT               11
#define TRnEVT_ASI_EN_MASK              0x00008000
#define TRnEVT_ASI_EN_SHIFT             15
#define TRnEVT_ASI_MASK                 0x001f0000
#define TRnEVT_ASI_SHIFT                16




#endif /* _HAVE_TRICORE_CPU_SHAREMASKS_H_ */

