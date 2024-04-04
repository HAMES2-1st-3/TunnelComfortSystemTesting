/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_GPTA0_GPTA1_SHAREMASKS_H_
#define _HAVE_TRICORE_GPTA0_GPTA1_SHAREMASKS_H_


/****************** Masks for GPTA0_MMXCTRm_t **********************/
/*
   GPTA0_MMXCTR00        "GPTA-to-MSC Multiplexer Control Register 00"
   GPTA0_MMXCTR01        "GPTA-to-MSC Multiplexer Control Register 01"
   GPTA0_MMXCTR10        "GPTA-to-MSC Multiplexer Control Register 10"
*/
/**********************************************************/

#define GPTA0_MMXCTRm_MASK              0xffffffff
#define GPTA0_MMXCTRm_MUX0_MASK         0x00000003
#define GPTA0_MMXCTRm_MUX0_SHIFT        0
#define GPTA0_MMXCTRm_MUX1_MASK         0x0000000c
#define GPTA0_MMXCTRm_MUX1_SHIFT        2
#define GPTA0_MMXCTRm_MUX2_MASK         0x00000030
#define GPTA0_MMXCTRm_MUX2_SHIFT        4
#define GPTA0_MMXCTRm_MUX3_MASK         0x000000c0
#define GPTA0_MMXCTRm_MUX3_SHIFT        6
#define GPTA0_MMXCTRm_MUX4_MASK         0x00000300
#define GPTA0_MMXCTRm_MUX4_SHIFT        8
#define GPTA0_MMXCTRm_MUX5_MASK         0x00000c00
#define GPTA0_MMXCTRm_MUX5_SHIFT        10
#define GPTA0_MMXCTRm_MUX6_MASK         0x00003000
#define GPTA0_MMXCTRm_MUX6_SHIFT        12
#define GPTA0_MMXCTRm_MUX7_MASK         0x0000c000
#define GPTA0_MMXCTRm_MUX7_SHIFT        14
#define GPTA0_MMXCTRm_MUX8_MASK         0x00030000
#define GPTA0_MMXCTRm_MUX8_SHIFT        16
#define GPTA0_MMXCTRm_MUX9_MASK         0x000c0000
#define GPTA0_MMXCTRm_MUX9_SHIFT        18
#define GPTA0_MMXCTRm_MUX10_MASK        0x00300000
#define GPTA0_MMXCTRm_MUX10_SHIFT       20
#define GPTA0_MMXCTRm_MUX11_MASK        0x00c00000
#define GPTA0_MMXCTRm_MUX11_SHIFT       22
#define GPTA0_MMXCTRm_MUX12_MASK        0x03000000
#define GPTA0_MMXCTRm_MUX12_SHIFT       24
#define GPTA0_MMXCTRm_MUX13_MASK        0x0c000000
#define GPTA0_MMXCTRm_MUX13_SHIFT       26
#define GPTA0_MMXCTRm_MUX14_MASK        0x30000000
#define GPTA0_MMXCTRm_MUX14_SHIFT       28
#define GPTA0_MMXCTRm_MUX15_MASK        0xc0000000
#define GPTA0_MMXCTRm_MUX15_SHIFT       30



/****************** Masks for GPTAn_CKBCTR_t **********************/
/*
   GPTA0_CKBCTR          "GPTA0 Clock Bus Control Register"
   GPTA1_CKBCTR          "GPTA1 Clock Bus Control Register"
*/
/**********************************************************/

#define GPTAn_CKBCTR_MASK               0x001fffff
#define GPTAn_CKBCTR_DFA02_MASK         0x0000000f
#define GPTAn_CKBCTR_DFA02_SHIFT        0
#define GPTAn_CKBCTR_DFA04_MASK         0x000000f0
#define GPTAn_CKBCTR_DFA04_SHIFT        4
#define GPTAn_CKBCTR_DFA06_MASK         0x00000f00
#define GPTAn_CKBCTR_DFA06_SHIFT        8
#define GPTAn_CKBCTR_DFA07_MASK         0x0000f000
#define GPTAn_CKBCTR_DFA07_SHIFT        12
#define GPTAn_CKBCTR_DFA03_MASK         0x00030000
#define GPTAn_CKBCTR_DFA03_SHIFT        16
#define GPTAn_CKBCTR_DFALTC_MASK        0x001c0000
#define GPTAn_CKBCTR_DFALTC_SHIFT       18



/****************** Masks for GPTAn_DCMCAVm_t **********************/
/*
   GPTA0_DCMCAV0         "GPTA0 Duty Cycle Measurement Capture Register 0"
   GPTA0_DCMCAV1         "GPTA0 Duty Cycle Measurement Capture Register 1"
   GPTA0_DCMCAV2         "GPTA0 Duty Cycle Measurement Capture Register 2"
   GPTA0_DCMCAV3         "GPTA0 Duty Cycle Measurement Capture Register 3"
   GPTA1_DCMCAV0         "GPTA1 Duty Cycle Measurement Capture Register 0"
   GPTA1_DCMCAV1         "GPTA1 Duty Cycle Measurement Capture Register 1"
   GPTA1_DCMCAV2         "GPTA1 Duty Cycle Measurement Capture Register 2"
   GPTA1_DCMCAV3         "GPTA1 Duty Cycle Measurement Capture Register 3"
*/
/**********************************************************/

#define GPTAn_DCMCAVm_MASK              0x00ffffff
#define GPTAn_DCMCAVm_CAV_MASK          0x00ffffff
#define GPTAn_DCMCAVm_CAV_SHIFT         0



/****************** Masks for GPTAn_DCMCOVm_t **********************/
/*
   GPTA0_DCMCOV0         "GPTA0 Duty Cycle Measurement Capture/Compare Register 0"
   GPTA0_DCMCOV1         "GPTA0 Duty Cycle Measurement Capture/Compare Register 1"
   GPTA0_DCMCOV2         "GPTA0 Duty Cycle Measurement Capture/Compare Register 2"
   GPTA0_DCMCOV3         "GPTA0 Duty Cycle Measurement Capture/Compare Register 3"
   GPTA1_DCMCOV0         "GPTA1 Duty Cycle Measurement Capture/Compare Register 0"
   GPTA1_DCMCOV1         "GPTA1 Duty Cycle Measurement Capture/Compare Register 1"
   GPTA1_DCMCOV2         "GPTA1 Duty Cycle Measurement Capture/Compare Register 2"
   GPTA1_DCMCOV3         "GPTA1 Duty Cycle Measurement Capture/Compare Register 3"
*/
/**********************************************************/

#define GPTAn_DCMCOVm_MASK              0x00ffffff
#define GPTAn_DCMCOVm_COV_MASK          0x00ffffff
#define GPTAn_DCMCOVm_COV_SHIFT         0



/****************** Masks for GPTAn_DCMCTRm_t **********************/
/*
   GPTA0_DCMCTR0         "GPTA0 Duty Cycle Measurement Control Register 0"
   GPTA0_DCMCTR1         "GPTA0 Duty Cycle Measurement Control Register 1"
   GPTA0_DCMCTR2         "GPTA0 Duty Cycle Measurement Control Register 2"
   GPTA0_DCMCTR3         "GPTA0 Duty Cycle Measurement Control Register 3"
   GPTA1_DCMCTR0         "GPTA1 Duty Cycle Measurement Control Register 0"
   GPTA1_DCMCTR1         "GPTA1 Duty Cycle Measurement Control Register 1"
   GPTA1_DCMCTR2         "GPTA1 Duty Cycle Measurement Control Register 2"
   GPTA1_DCMCTR3         "GPTA1 Duty Cycle Measurement Control Register 3"
*/
/**********************************************************/

#define GPTAn_DCMCTRm_MASK              0x000003ff
#define GPTAn_DCMCTRm_RCA_MASK          0x00000001
#define GPTAn_DCMCTRm_RCA_SHIFT         0
#define GPTAn_DCMCTRm_OCA_MASK          0x00000002
#define GPTAn_DCMCTRm_OCA_SHIFT         1
#define GPTAn_DCMCTRm_RZE_MASK          0x00000004
#define GPTAn_DCMCTRm_RZE_SHIFT         2
#define GPTAn_DCMCTRm_FZE_MASK          0x00000008
#define GPTAn_DCMCTRm_FZE_SHIFT         3
#define GPTAn_DCMCTRm_RCK_MASK          0x00000010
#define GPTAn_DCMCTRm_RCK_SHIFT         4
#define GPTAn_DCMCTRm_FCK_MASK          0x00000020
#define GPTAn_DCMCTRm_FCK_SHIFT         5
#define GPTAn_DCMCTRm_QCK_MASK          0x00000040
#define GPTAn_DCMCTRm_QCK_SHIFT         6
#define GPTAn_DCMCTRm_RRE_MASK          0x00000080
#define GPTAn_DCMCTRm_RRE_SHIFT         7
#define GPTAn_DCMCTRm_FRE_MASK          0x00000100
#define GPTAn_DCMCTRm_FRE_SHIFT         8
#define GPTAn_DCMCTRm_CRE_MASK          0x00000200
#define GPTAn_DCMCTRm_CRE_SHIFT         9



/****************** Masks for GPTAn_DCMTIMm_t **********************/
/*
   GPTA0_DCMTIM0         "GPTA0 Duty Cycle Measurement Timer Register 0"
   GPTA0_DCMTIM1         "GPTA0 Duty Cycle Measurement Timer Register 1"
   GPTA0_DCMTIM2         "GPTA0 Duty Cycle Measurement Timer Register 2"
   GPTA0_DCMTIM3         "GPTA0 Duty Cycle Measurement Timer Register 3"
   GPTA1_DCMTIM0         "GPTA1 Duty Cycle Measurement Timer Register 0"
   GPTA1_DCMTIM1         "GPTA1 Duty Cycle Measurement Timer Register 1"
   GPTA1_DCMTIM2         "GPTA1 Duty Cycle Measurement Timer Register 2"
   GPTA1_DCMTIM3         "GPTA1 Duty Cycle Measurement Timer Register 3"
*/
/**********************************************************/

#define GPTAn_DCMTIMm_MASK              0x00ffffff
#define GPTAn_DCMTIMm_TIM_MASK          0x00ffffff
#define GPTAn_DCMTIMm_TIM_SHIFT         0



/****************** Masks for GPTAn_FPCCTRm_t **********************/
/*
   GPTA0_FPCCTR0         "GPTA0 Filter and Prescaler Cell Control Register 0"
   GPTA0_FPCCTR1         "GPTA0 Filter and Prescaler Cell Control Register 1"
   GPTA0_FPCCTR2         "GPTA0 Filter and Prescaler Cell Control Register 2"
   GPTA0_FPCCTR3         "GPTA0 Filter and Prescaler Cell Control Register 3"
   GPTA0_FPCCTR4         "GPTA0 Filter and Prescaler Cell Control Register 4"
   GPTA0_FPCCTR5         "GPTA0 Filter and Prescaler Cell Control Register 5"
   GPTA1_FPCCTR0         "GPTA1 Filter and Prescaler Cell Control Register 0"
   GPTA1_FPCCTR1         "GPTA1 Filter and Prescaler Cell Control Register 1"
   GPTA1_FPCCTR2         "GPTA1 Filter and Prescaler Cell Control Register 2"
   GPTA1_FPCCTR3         "GPTA1 Filter and Prescaler Cell Control Register 3"
   GPTA1_FPCCTR4         "GPTA1 Filter and Prescaler Cell Control Register 4"
   GPTA1_FPCCTR5         "GPTA1 Filter and Prescaler Cell Control Register 5"
*/
/**********************************************************/

#define GPTAn_FPCCTRm_MASK              0x01ffffff
#define GPTAn_FPCCTRm_CMP_MASK          0x0000ffff
#define GPTAn_FPCCTRm_CMP_SHIFT         0
#define GPTAn_FPCCTRm_MOD_MASK          0x00070000
#define GPTAn_FPCCTRm_MOD_SHIFT         16
#define GPTAn_FPCCTRm_IPS_MASK          0x00380000
#define GPTAn_FPCCTRm_IPS_SHIFT         19
#define GPTAn_FPCCTRm_CLK_MASK          0x00c00000
#define GPTAn_FPCCTRm_CLK_SHIFT         22
#define GPTAn_FPCCTRm_RTG_MASK          0x01000000
#define GPTAn_FPCCTRm_RTG_SHIFT         24



/****************** Masks for GPTAn_FPCSTAT_t **********************/
/*
   GPTA0_FPCSTAT         "GPTA0 Filter and Prescaler Cell Status Register"
   GPTA1_FPCSTAT         "GPTA1 Filter and Prescaler Cell Status Register"
*/
/**********************************************************/

#define GPTAn_FPCSTAT_MASK              0x00003f3f
#define GPTAn_FPCSTAT_REG0_MASK         0x00000001
#define GPTAn_FPCSTAT_REG0_SHIFT        0
#define GPTAn_FPCSTAT_REG1_MASK         0x00000002
#define GPTAn_FPCSTAT_REG1_SHIFT        1
#define GPTAn_FPCSTAT_REG2_MASK         0x00000004
#define GPTAn_FPCSTAT_REG2_SHIFT        2
#define GPTAn_FPCSTAT_REG3_MASK         0x00000008
#define GPTAn_FPCSTAT_REG3_SHIFT        3
#define GPTAn_FPCSTAT_REG4_MASK         0x00000010
#define GPTAn_FPCSTAT_REG4_SHIFT        4
#define GPTAn_FPCSTAT_REG5_MASK         0x00000020
#define GPTAn_FPCSTAT_REG5_SHIFT        5
#define GPTAn_FPCSTAT_FEG0_MASK         0x00000100
#define GPTAn_FPCSTAT_FEG0_SHIFT        8
#define GPTAn_FPCSTAT_FEG1_MASK         0x00000200
#define GPTAn_FPCSTAT_FEG1_SHIFT        9
#define GPTAn_FPCSTAT_FEG2_MASK         0x00000400
#define GPTAn_FPCSTAT_FEG2_SHIFT        10
#define GPTAn_FPCSTAT_FEG3_MASK         0x00000800
#define GPTAn_FPCSTAT_FEG3_SHIFT        11
#define GPTAn_FPCSTAT_FEG4_MASK         0x00001000
#define GPTAn_FPCSTAT_FEG4_SHIFT        12
#define GPTAn_FPCSTAT_FEG5_MASK         0x00002000
#define GPTAn_FPCSTAT_FEG5_SHIFT        13



/****************** Masks for GPTAn_FPCTIMm_t **********************/
/*
   GPTA0_FPCTIM0         "GPTA0 Filter and Prescaler Cell Timer Register 0"
   GPTA0_FPCTIM1         "GPTA0 Filter and Prescaler Cell Timer Register 1"
   GPTA0_FPCTIM2         "GPTA0 Filter and Prescaler Cell Timer Register 2"
   GPTA0_FPCTIM3         "GPTA0 Filter and Prescaler Cell Timer Register 3"
   GPTA0_FPCTIM4         "GPTA0 Filter and Prescaler Cell Timer Register 4"
   GPTA0_FPCTIM5         "GPTA0 Filter and Prescaler Cell Timer Register 5"
   GPTA1_FPCTIM0         "GPTA1 Filter and Prescaler Cell Timer Register 0"
   GPTA1_FPCTIM1         "GPTA1 Filter and Prescaler Cell Timer Register 1"
   GPTA1_FPCTIM2         "GPTA1 Filter and Prescaler Cell Timer Register 2"
   GPTA1_FPCTIM3         "GPTA1 Filter and Prescaler Cell Timer Register 3"
   GPTA1_FPCTIM4         "GPTA1 Filter and Prescaler Cell Timer Register 4"
   GPTA1_FPCTIM5         "GPTA1 Filter and Prescaler Cell Timer Register 5"
*/
/**********************************************************/

#define GPTAn_FPCTIMm_MASK              0x0000ffff
#define GPTAn_FPCTIMm_TIM_MASK          0x0000ffff
#define GPTAn_FPCTIMm_TIM_SHIFT         0



/****************** Masks for GPTAn_GTCCTRm_t **********************/
/*
   GPTA0_GTCCTR00        "GPTA0 Global Timer Cell Control Register 00"
   GPTA0_GTCCTR01        "GPTA0 Global Timer Cell Control Register 01"
   GPTA0_GTCCTR02        "GPTA0 Global Timer Cell Control Register 02"
   GPTA0_GTCCTR03        "GPTA0 Global Timer Cell Control Register 03"
   GPTA0_GTCCTR04        "GPTA0 Global Timer Cell Control Register 04"
   GPTA0_GTCCTR05        "GPTA0 Global Timer Cell Control Register 05"
   GPTA0_GTCCTR06        "GPTA0 Global Timer Cell Control Register 06"
   GPTA0_GTCCTR07        "GPTA0 Global Timer Cell Control Register 07"
   GPTA0_GTCCTR08        "GPTA0 Global Timer Cell Control Register 08"
   GPTA0_GTCCTR09        "GPTA0 Global Timer Cell Control Register 09"
   GPTA0_GTCCTR10        "GPTA0 Global Timer Cell Control Register 10"
   GPTA0_GTCCTR11        "GPTA0 Global Timer Cell Control Register 11"
   GPTA0_GTCCTR12        "GPTA0 Global Timer Cell Control Register 12"
   GPTA0_GTCCTR13        "GPTA0 Global Timer Cell Control Register 13"
   GPTA0_GTCCTR14        "GPTA0 Global Timer Cell Control Register 14"
   GPTA0_GTCCTR15        "GPTA0 Global Timer Cell Control Register 15"
   GPTA0_GTCCTR16        "GPTA0 Global Timer Cell Control Register 16"
   GPTA0_GTCCTR17        "GPTA0 Global Timer Cell Control Register 17"
   GPTA0_GTCCTR18        "GPTA0 Global Timer Cell Control Register 18"
   GPTA0_GTCCTR19        "GPTA0 Global Timer Cell Control Register 19"
   GPTA0_GTCCTR20        "GPTA0 Global Timer Cell Control Register 20"
   GPTA0_GTCCTR21        "GPTA0 Global Timer Cell Control Register 21"
   GPTA0_GTCCTR22        "GPTA0 Global Timer Cell Control Register 22"
   GPTA0_GTCCTR23        "GPTA0 Global Timer Cell Control Register 23"
   GPTA0_GTCCTR24        "GPTA0 Global Timer Cell Control Register 24"
   GPTA0_GTCCTR25        "GPTA0 Global Timer Cell Control Register 25"
   GPTA0_GTCCTR26        "GPTA0 Global Timer Cell Control Register 26"
   GPTA0_GTCCTR27        "GPTA0 Global Timer Cell Control Register 27"
   GPTA0_GTCCTR28        "GPTA0 Global Timer Cell Control Register 28"
   GPTA0_GTCCTR29        "GPTA0 Global Timer Cell Control Register 29"
   GPTA0_GTCCTR30        "GPTA0 Global Timer Cell Control Register 30"
   GPTA0_GTCCTR31        "GPTA0 Global Timer Cell Control Register 31"
   GPTA1_GTCCTR00        "GPTA1 Global Timer Cell Control Register 00"
   GPTA1_GTCCTR01        "GPTA1 Global Timer Cell Control Register 01"
   GPTA1_GTCCTR02        "GPTA1 Global Timer Cell Control Register 02"
   GPTA1_GTCCTR03        "GPTA1 Global Timer Cell Control Register 03"
   GPTA1_GTCCTR04        "GPTA1 Global Timer Cell Control Register 04"
   GPTA1_GTCCTR05        "GPTA1 Global Timer Cell Control Register 05"
   GPTA1_GTCCTR06        "GPTA1 Global Timer Cell Control Register 06"
   GPTA1_GTCCTR07        "GPTA1 Global Timer Cell Control Register 07"
   GPTA1_GTCCTR08        "GPTA1 Global Timer Cell Control Register 08"
   GPTA1_GTCCTR09        "GPTA1 Global Timer Cell Control Register 09"
   GPTA1_GTCCTR10        "GPTA1 Global Timer Cell Control Register 10"
   GPTA1_GTCCTR11        "GPTA1 Global Timer Cell Control Register 11"
   GPTA1_GTCCTR12        "GPTA1 Global Timer Cell Control Register 12"
   GPTA1_GTCCTR13        "GPTA1 Global Timer Cell Control Register 13"
   GPTA1_GTCCTR14        "GPTA1 Global Timer Cell Control Register 14"
   GPTA1_GTCCTR15        "GPTA1 Global Timer Cell Control Register 15"
   GPTA1_GTCCTR16        "GPTA1 Global Timer Cell Control Register 16"
   GPTA1_GTCCTR17        "GPTA1 Global Timer Cell Control Register 17"
   GPTA1_GTCCTR18        "GPTA1 Global Timer Cell Control Register 18"
   GPTA1_GTCCTR19        "GPTA1 Global Timer Cell Control Register 19"
   GPTA1_GTCCTR20        "GPTA1 Global Timer Cell Control Register 20"
   GPTA1_GTCCTR21        "GPTA1 Global Timer Cell Control Register 21"
   GPTA1_GTCCTR22        "GPTA1 Global Timer Cell Control Register 22"
   GPTA1_GTCCTR23        "GPTA1 Global Timer Cell Control Register 23"
   GPTA1_GTCCTR24        "GPTA1 Global Timer Cell Control Register 24"
   GPTA1_GTCCTR25        "GPTA1 Global Timer Cell Control Register 25"
   GPTA1_GTCCTR26        "GPTA1 Global Timer Cell Control Register 26"
   GPTA1_GTCCTR27        "GPTA1 Global Timer Cell Control Register 27"
   GPTA1_GTCCTR28        "GPTA1 Global Timer Cell Control Register 28"
   GPTA1_GTCCTR29        "GPTA1 Global Timer Cell Control Register 29"
   GPTA1_GTCCTR30        "GPTA1 Global Timer Cell Control Register 30"
   GPTA1_GTCCTR31        "GPTA1 Global Timer Cell Control Register 31"
*/
/**********************************************************/

#define GPTAn_GTCCTRm_MASK              0x0000fdff
#define GPTAn_GTCCTRm_MOD_MASK          0x00000003
#define GPTAn_GTCCTRm_MOD_SHIFT         0
#define GPTAn_GTCCTRm_OSM_MASK          0x00000004
#define GPTAn_GTCCTRm_OSM_SHIFT         2
#define GPTAn_GTCCTRm_REN_MASK          0x00000008
#define GPTAn_GTCCTRm_REN_SHIFT         3
#define GPTAn_GTCCTRm_RED_MASK          0x00000010
#define GPTAn_GTCCTRm_RED_SHIFT         4
#define GPTAn_GTCCTRm_FED_MASK          0x00000020
#define GPTAn_GTCCTRm_FED_SHIFT         5
#define GPTAn_GTCCTRm_NE_MASK           0x00000040
#define GPTAn_GTCCTRm_NE_SHIFT          6
#define GPTAn_GTCCTRm_BYP_MASK          0x00000080
#define GPTAn_GTCCTRm_BYP_SHIFT         7
#define GPTAn_GTCCTRm_EOA_MASK          0x00000100
#define GPTAn_GTCCTRm_EOA_SHIFT         8
#define GPTAn_GTCCTRm_CEN_MASK          0x00000400
#define GPTAn_GTCCTRm_CEN_SHIFT         10
#define GPTAn_GTCCTRm_OCM_MASK          0x00003800
#define GPTAn_GTCCTRm_OCM_SHIFT         11
#define GPTAn_GTCCTRm_OIA_MASK          0x00004000
#define GPTAn_GTCCTRm_OIA_SHIFT         14
#define GPTAn_GTCCTRm_OUT_MASK          0x00008000
#define GPTAn_GTCCTRm_OUT_SHIFT         15



/****************** Masks for GPTAn_GTCTRm_t **********************/
/*
   GPTA0_GTCTR0          "GPTA0 Global Timer Control Register 0"
   GPTA0_GTCTR1          "GPTA0 Global Timer Control Register 1"
   GPTA1_GTCTR0          "GPTA1 Global Timer Control Register 0"
   GPTA1_GTCTR1          "GPTA1 Global Timer Control Register 1"
*/
/**********************************************************/

#define GPTAn_GTCTRm_MASK               0x000000ff
#define GPTAn_GTCTRm_SCO_MASK           0x0000000f
#define GPTAn_GTCTRm_SCO_SHIFT          0
#define GPTAn_GTCTRm_MUX_MASK           0x00000070
#define GPTAn_GTCTRm_MUX_SHIFT          4
#define GPTAn_GTCTRm_REN_MASK           0x00000080
#define GPTAn_GTCTRm_REN_SHIFT          7



/****************** Masks for GPTAn_GTCXRm_t **********************/
/*
   GPTA0_GTCXR00         "GPTA0 Global Timer Cell X Register 00"
   GPTA0_GTCXR01         "GPTA0 Global Timer Cell X Register 01"
   GPTA0_GTCXR02         "GPTA0 Global Timer Cell X Register 02"
   GPTA0_GTCXR03         "GPTA0 Global Timer Cell X Register 03"
   GPTA0_GTCXR04         "GPTA0 Global Timer Cell X Register 04"
   GPTA0_GTCXR05         "GPTA0 Global Timer Cell X Register 05"
   GPTA0_GTCXR06         "GPTA0 Global Timer Cell X Register 06"
   GPTA0_GTCXR07         "GPTA0 Global Timer Cell X Register 07"
   GPTA0_GTCXR08         "GPTA0 Global Timer Cell X Register 08"
   GPTA0_GTCXR09         "GPTA0 Global Timer Cell X Register 09"
   GPTA0_GTCXR10         "GPTA0 Global Timer Cell X Register 10"
   GPTA0_GTCXR11         "GPTA0 Global Timer Cell X Register 11"
   GPTA0_GTCXR12         "GPTA0 Global Timer Cell X Register 12"
   GPTA0_GTCXR13         "GPTA0 Global Timer Cell X Register 13"
   GPTA0_GTCXR14         "GPTA0 Global Timer Cell X Register 14"
   GPTA0_GTCXR15         "GPTA0 Global Timer Cell X Register 15"
   GPTA0_GTCXR16         "GPTA0 Global Timer Cell X Register 16"
   GPTA0_GTCXR17         "GPTA0 Global Timer Cell X Register 17"
   GPTA0_GTCXR18         "GPTA0 Global Timer Cell X Register 18"
   GPTA0_GTCXR19         "GPTA0 Global Timer Cell X Register 19"
   GPTA0_GTCXR20         "GPTA0 Global Timer Cell X Register 20"
   GPTA0_GTCXR21         "GPTA0 Global Timer Cell X Register 21"
   GPTA0_GTCXR22         "GPTA0 Global Timer Cell X Register 22"
   GPTA0_GTCXR23         "GPTA0 Global Timer Cell X Register 23"
   GPTA0_GTCXR24         "GPTA0 Global Timer Cell X Register 24"
   GPTA0_GTCXR25         "GPTA0 Global Timer Cell X Register 25"
   GPTA0_GTCXR26         "GPTA0 Global Timer Cell X Register 26"
   GPTA0_GTCXR27         "GPTA0 Global Timer Cell X Register 27"
   GPTA0_GTCXR28         "GPTA0 Global Timer Cell X Register 28"
   GPTA0_GTCXR29         "GPTA0 Global Timer Cell X Register 29"
   GPTA0_GTCXR30         "GPTA0 Global Timer Cell X Register 30"
   GPTA0_GTCXR31         "GPTA0 Global Timer Cell X Register 31"
   GPTA1_GTCXR00         "GPTA1 Global Timer Cell X Register 00"
   GPTA1_GTCXR01         "GPTA1 Global Timer Cell X Register 01"
   GPTA1_GTCXR02         "GPTA1 Global Timer Cell X Register 02"
   GPTA1_GTCXR03         "GPTA1 Global Timer Cell X Register 03"
   GPTA1_GTCXR04         "GPTA1 Global Timer Cell X Register 04"
   GPTA1_GTCXR05         "GPTA1 Global Timer Cell X Register 05"
   GPTA1_GTCXR06         "GPTA1 Global Timer Cell X Register 06"
   GPTA1_GTCXR07         "GPTA1 Global Timer Cell X Register 07"
   GPTA1_GTCXR08         "GPTA1 Global Timer Cell X Register 08"
   GPTA1_GTCXR09         "GPTA1 Global Timer Cell X Register 09"
   GPTA1_GTCXR10         "GPTA1 Global Timer Cell X Register 10"
   GPTA1_GTCXR11         "GPTA1 Global Timer Cell X Register 11"
   GPTA1_GTCXR12         "GPTA1 Global Timer Cell X Register 12"
   GPTA1_GTCXR13         "GPTA1 Global Timer Cell X Register 13"
   GPTA1_GTCXR14         "GPTA1 Global Timer Cell X Register 14"
   GPTA1_GTCXR15         "GPTA1 Global Timer Cell X Register 15"
   GPTA1_GTCXR16         "GPTA1 Global Timer Cell X Register 16"
   GPTA1_GTCXR17         "GPTA1 Global Timer Cell X Register 17"
   GPTA1_GTCXR18         "GPTA1 Global Timer Cell X Register 18"
   GPTA1_GTCXR19         "GPTA1 Global Timer Cell X Register 19"
   GPTA1_GTCXR20         "GPTA1 Global Timer Cell X Register 20"
   GPTA1_GTCXR21         "GPTA1 Global Timer Cell X Register 21"
   GPTA1_GTCXR22         "GPTA1 Global Timer Cell X Register 22"
   GPTA1_GTCXR23         "GPTA1 Global Timer Cell X Register 23"
   GPTA1_GTCXR24         "GPTA1 Global Timer Cell X Register 24"
   GPTA1_GTCXR25         "GPTA1 Global Timer Cell X Register 25"
   GPTA1_GTCXR26         "GPTA1 Global Timer Cell X Register 26"
   GPTA1_GTCXR27         "GPTA1 Global Timer Cell X Register 27"
   GPTA1_GTCXR28         "GPTA1 Global Timer Cell X Register 28"
   GPTA1_GTCXR29         "GPTA1 Global Timer Cell X Register 29"
   GPTA1_GTCXR30         "GPTA1 Global Timer Cell X Register 30"
   GPTA1_GTCXR31         "GPTA1 Global Timer Cell X Register 31"
*/
/**********************************************************/

#define GPTAn_GTCXRm_MASK               0x00ffffff
#define GPTAn_GTCXRm_X_MASK             0x00ffffff
#define GPTAn_GTCXRm_X_SHIFT            0



/****************** Masks for GPTAn_GTREVm_t **********************/
/*
   GPTA0_GTREV0          "GPTA0 Global Timer Reload Value Register 0"
   GPTA0_GTREV1          "GPTA0 Global Timer Reload Value Register 1"
   GPTA1_GTREV0          "GPTA1 Global Timer Reload Value Register 0"
   GPTA1_GTREV1          "GPTA1 Global Timer Reload Value Register 1"
*/
/**********************************************************/

#define GPTAn_GTREVm_MASK               0x00ffffff
#define GPTAn_GTREVm_REV_MASK           0x00ffffff
#define GPTAn_GTREVm_REV_SHIFT          0



/****************** Masks for GPTAn_GTTIMm_t **********************/
/*
   GPTA0_GTTIM0          "GPTA0 Global Timer Register 0"
   GPTA0_GTTIM1          "GPTA0 Global Timer Register 1"
   GPTA1_GTTIM0          "GPTA1 Global Timer Register 0"
   GPTA1_GTTIM1          "GPTA1 Global Timer Register 1"
*/
/**********************************************************/

#define GPTAn_GTTIMm_MASK               0x00ffffff
#define GPTAn_GTTIMm_TIM_MASK           0x00ffffff
#define GPTAn_GTTIMm_TIM_SHIFT          0



/****************** Masks for GPTAn_ID_t **********************/
/*
   GPTA0_ID              "GPTA0 Module Identification Register"
   GPTA1_ID              "GPTA1 Module Identification Register"
*/
/**********************************************************/

#define GPTAn_ID_MASK                   0x00000000



/****************** Masks for GPTAn_LTCCTR63_t **********************/
/*
   GPTA0_LTCCTR63        "GPTA0 Local Timer Cell Control Register 63"
   GPTA1_LTCCTR63        "GPTA1 Local Timer Cell Control Register 63"
*/
/**********************************************************/

#define GPTAn_LTCCTR63_MASK             0x0000853f
#define GPTAn_LTCCTR63_BRM_MASK         0x00000001
#define GPTAn_LTCCTR63_BRM_SHIFT        0
#define GPTAn_LTCCTR63_OSM_MASK         0x00000002
#define GPTAn_LTCCTR63_OSM_SHIFT        1
#define GPTAn_LTCCTR63_REN_MASK         0x0000000c
#define GPTAn_LTCCTR63_REN_SHIFT        2
#define GPTAn_LTCCTR63_RED_MASK         0x00000010
#define GPTAn_LTCCTR63_RED_SHIFT        4
#define GPTAn_LTCCTR63_FED_MASK         0x00000020
#define GPTAn_LTCCTR63_FED_SHIFT        5
#define GPTAn_LTCCTR63_ILM_MASK         0x00000100
#define GPTAn_LTCCTR63_ILM_SHIFT        8
#define GPTAn_LTCCTR63_CEN_MASK         0x00000400
#define GPTAn_LTCCTR63_CEN_SHIFT        10
#define GPTAn_LTCCTR63_OUT_MASK         0x00008000
#define GPTAn_LTCCTR63_OUT_SHIFT        15



/****************** Masks for GPTAn_LTCCTRm_t **********************/
/*
   GPTA0_LTCCTR00        "GPTA0 Local Timer Cell Control Register 00"
   GPTA0_LTCCTR01        "GPTA0 Local Timer Cell Control Register 01"
   GPTA0_LTCCTR02        "GPTA0 Local Timer Cell Control Register 02"
   GPTA0_LTCCTR03        "GPTA0 Local Timer Cell Control Register 03"
   GPTA0_LTCCTR04        "GPTA0 Local Timer Cell Control Register 04"
   GPTA0_LTCCTR05        "GPTA0 Local Timer Cell Control Register 05"
   GPTA0_LTCCTR06        "GPTA0 Local Timer Cell Control Register 06"
   GPTA0_LTCCTR07        "GPTA0 Local Timer Cell Control Register 07"
   GPTA0_LTCCTR08        "GPTA0 Local Timer Cell Control Register 08"
   GPTA0_LTCCTR09        "GPTA0 Local Timer Cell Control Register 09"
   GPTA0_LTCCTR10        "GPTA0 Local Timer Cell Control Register 10"
   GPTA0_LTCCTR11        "GPTA0 Local Timer Cell Control Register 11"
   GPTA0_LTCCTR12        "GPTA0 Local Timer Cell Control Register 12"
   GPTA0_LTCCTR13        "GPTA0 Local Timer Cell Control Register 13"
   GPTA0_LTCCTR14        "GPTA0 Local Timer Cell Control Register 14"
   GPTA0_LTCCTR15        "GPTA0 Local Timer Cell Control Register 15"
   GPTA0_LTCCTR16        "GPTA0 Local Timer Cell Control Register 16"
   GPTA0_LTCCTR17        "GPTA0 Local Timer Cell Control Register 17"
   GPTA0_LTCCTR18        "GPTA0 Local Timer Cell Control Register 18"
   GPTA0_LTCCTR19        "GPTA0 Local Timer Cell Control Register 19"
   GPTA0_LTCCTR20        "GPTA0 Local Timer Cell Control Register 20"
   GPTA0_LTCCTR21        "GPTA0 Local Timer Cell Control Register 21"
   GPTA0_LTCCTR22        "GPTA0 Local Timer Cell Control Register 22"
   GPTA0_LTCCTR23        "GPTA0 Local Timer Cell Control Register 23"
   GPTA0_LTCCTR24        "GPTA0 Local Timer Cell Control Register 24"
   GPTA0_LTCCTR25        "GPTA0 Local Timer Cell Control Register 25"
   GPTA0_LTCCTR26        "GPTA0 Local Timer Cell Control Register 26"
   GPTA0_LTCCTR27        "GPTA0 Local Timer Cell Control Register 27"
   GPTA0_LTCCTR28        "GPTA0 Local Timer Cell Control Register 28"
   GPTA0_LTCCTR29        "GPTA0 Local Timer Cell Control Register 29"
   GPTA0_LTCCTR30        "GPTA0 Local Timer Cell Control Register 30"
   GPTA0_LTCCTR31        "GPTA0 Local Timer Cell Control Register 31"
   GPTA0_LTCCTR32        "GPTA0 Local Timer Cell Control Register 32"
   GPTA0_LTCCTR33        "GPTA0 Local Timer Cell Control Register 33"
   GPTA0_LTCCTR34        "GPTA0 Local Timer Cell Control Register 34"
   GPTA0_LTCCTR35        "GPTA0 Local Timer Cell Control Register 35"
   GPTA0_LTCCTR36        "GPTA0 Local Timer Cell Control Register 36"
   GPTA0_LTCCTR37        "GPTA0 Local Timer Cell Control Register 37"
   GPTA0_LTCCTR38        "GPTA0 Local Timer Cell Control Register 38"
   GPTA0_LTCCTR39        "GPTA0 Local Timer Cell Control Register 39"
   GPTA0_LTCCTR40        "GPTA0 Local Timer Cell Control Register 40"
   GPTA0_LTCCTR41        "GPTA0 Local Timer Cell Control Register 41"
   GPTA0_LTCCTR42        "GPTA0 Local Timer Cell Control Register 42"
   GPTA0_LTCCTR43        "GPTA0 Local Timer Cell Control Register 43"
   GPTA0_LTCCTR44        "GPTA0 Local Timer Cell Control Register 44"
   GPTA0_LTCCTR45        "GPTA0 Local Timer Cell Control Register 45"
   GPTA0_LTCCTR46        "GPTA0 Local Timer Cell Control Register 46"
   GPTA0_LTCCTR47        "GPTA0 Local Timer Cell Control Register 47"
   GPTA0_LTCCTR48        "GPTA0 Local Timer Cell Control Register 48"
   GPTA0_LTCCTR49        "GPTA0 Local Timer Cell Control Register 49"
   GPTA0_LTCCTR50        "GPTA0 Local Timer Cell Control Register 50"
   GPTA0_LTCCTR51        "GPTA0 Local Timer Cell Control Register 51"
   GPTA0_LTCCTR52        "GPTA0 Local Timer Cell Control Register 52"
   GPTA0_LTCCTR53        "GPTA0 Local Timer Cell Control Register 53"
   GPTA0_LTCCTR54        "GPTA0 Local Timer Cell Control Register 54"
   GPTA0_LTCCTR55        "GPTA0 Local Timer Cell Control Register 55"
   GPTA0_LTCCTR56        "GPTA0 Local Timer Cell Control Register 56"
   GPTA0_LTCCTR57        "GPTA0 Local Timer Cell Control Register 57"
   GPTA0_LTCCTR58        "GPTA0 Local Timer Cell Control Register 58"
   GPTA0_LTCCTR59        "GPTA0 Local Timer Cell Control Register 59"
   GPTA0_LTCCTR60        "GPTA0 Local Timer Cell Control Register 60"
   GPTA0_LTCCTR61        "GPTA0 Local Timer Cell Control Register 61"
   GPTA0_LTCCTR62        "GPTA0 Local Timer Cell Control Register 62"
   GPTA1_LTCCTR00        "GPTA1 Local Timer Cell Control Register 00"
   GPTA1_LTCCTR01        "GPTA1 Local Timer Cell Control Register 01"
   GPTA1_LTCCTR02        "GPTA1 Local Timer Cell Control Register 02"
   GPTA1_LTCCTR03        "GPTA1 Local Timer Cell Control Register 03"
   GPTA1_LTCCTR04        "GPTA1 Local Timer Cell Control Register 04"
   GPTA1_LTCCTR05        "GPTA1 Local Timer Cell Control Register 05"
   GPTA1_LTCCTR06        "GPTA1 Local Timer Cell Control Register 06"
   GPTA1_LTCCTR07        "GPTA1 Local Timer Cell Control Register 07"
   GPTA1_LTCCTR08        "GPTA1 Local Timer Cell Control Register 08"
   GPTA1_LTCCTR09        "GPTA1 Local Timer Cell Control Register 09"
   GPTA1_LTCCTR10        "GPTA1 Local Timer Cell Control Register 10"
   GPTA1_LTCCTR11        "GPTA1 Local Timer Cell Control Register 11"
   GPTA1_LTCCTR12        "GPTA1 Local Timer Cell Control Register 12"
   GPTA1_LTCCTR13        "GPTA1 Local Timer Cell Control Register 13"
   GPTA1_LTCCTR14        "GPTA1 Local Timer Cell Control Register 14"
   GPTA1_LTCCTR15        "GPTA1 Local Timer Cell Control Register 15"
   GPTA1_LTCCTR16        "GPTA1 Local Timer Cell Control Register 16"
   GPTA1_LTCCTR17        "GPTA1 Local Timer Cell Control Register 17"
   GPTA1_LTCCTR18        "GPTA1 Local Timer Cell Control Register 18"
   GPTA1_LTCCTR19        "GPTA1 Local Timer Cell Control Register 19"
   GPTA1_LTCCTR20        "GPTA1 Local Timer Cell Control Register 20"
   GPTA1_LTCCTR21        "GPTA1 Local Timer Cell Control Register 21"
   GPTA1_LTCCTR22        "GPTA1 Local Timer Cell Control Register 22"
   GPTA1_LTCCTR23        "GPTA1 Local Timer Cell Control Register 23"
   GPTA1_LTCCTR24        "GPTA1 Local Timer Cell Control Register 24"
   GPTA1_LTCCTR25        "GPTA1 Local Timer Cell Control Register 25"
   GPTA1_LTCCTR26        "GPTA1 Local Timer Cell Control Register 26"
   GPTA1_LTCCTR27        "GPTA1 Local Timer Cell Control Register 27"
   GPTA1_LTCCTR28        "GPTA1 Local Timer Cell Control Register 28"
   GPTA1_LTCCTR29        "GPTA1 Local Timer Cell Control Register 29"
   GPTA1_LTCCTR30        "GPTA1 Local Timer Cell Control Register 30"
   GPTA1_LTCCTR31        "GPTA1 Local Timer Cell Control Register 31"
   GPTA1_LTCCTR32        "GPTA1 Local Timer Cell Control Register 32"
   GPTA1_LTCCTR33        "GPTA1 Local Timer Cell Control Register 33"
   GPTA1_LTCCTR34        "GPTA1 Local Timer Cell Control Register 34"
   GPTA1_LTCCTR35        "GPTA1 Local Timer Cell Control Register 35"
   GPTA1_LTCCTR36        "GPTA1 Local Timer Cell Control Register 36"
   GPTA1_LTCCTR37        "GPTA1 Local Timer Cell Control Register 37"
   GPTA1_LTCCTR38        "GPTA1 Local Timer Cell Control Register 38"
   GPTA1_LTCCTR39        "GPTA1 Local Timer Cell Control Register 39"
   GPTA1_LTCCTR40        "GPTA1 Local Timer Cell Control Register 40"
   GPTA1_LTCCTR41        "GPTA1 Local Timer Cell Control Register 41"
   GPTA1_LTCCTR42        "GPTA1 Local Timer Cell Control Register 42"
   GPTA1_LTCCTR43        "GPTA1 Local Timer Cell Control Register 43"
   GPTA1_LTCCTR44        "GPTA1 Local Timer Cell Control Register 44"
   GPTA1_LTCCTR45        "GPTA1 Local Timer Cell Control Register 45"
   GPTA1_LTCCTR46        "GPTA1 Local Timer Cell Control Register 46"
   GPTA1_LTCCTR47        "GPTA1 Local Timer Cell Control Register 47"
   GPTA1_LTCCTR48        "GPTA1 Local Timer Cell Control Register 48"
   GPTA1_LTCCTR49        "GPTA1 Local Timer Cell Control Register 49"
   GPTA1_LTCCTR50        "GPTA1 Local Timer Cell Control Register 50"
   GPTA1_LTCCTR51        "GPTA1 Local Timer Cell Control Register 51"
   GPTA1_LTCCTR52        "GPTA1 Local Timer Cell Control Register 52"
   GPTA1_LTCCTR53        "GPTA1 Local Timer Cell Control Register 53"
   GPTA1_LTCCTR54        "GPTA1 Local Timer Cell Control Register 54"
   GPTA1_LTCCTR55        "GPTA1 Local Timer Cell Control Register 55"
   GPTA1_LTCCTR56        "GPTA1 Local Timer Cell Control Register 56"
   GPTA1_LTCCTR57        "GPTA1 Local Timer Cell Control Register 57"
   GPTA1_LTCCTR58        "GPTA1 Local Timer Cell Control Register 58"
   GPTA1_LTCCTR59        "GPTA1 Local Timer Cell Control Register 59"
   GPTA1_LTCCTR60        "GPTA1 Local Timer Cell Control Register 60"
   GPTA1_LTCCTR61        "GPTA1 Local Timer Cell Control Register 61"
   GPTA1_LTCCTR62        "GPTA1 Local Timer Cell Control Register 62"
*/
/**********************************************************/

#define GPTAn_LTCCTRm_MASK              0x0000ffff
#define GPTAn_LTCCTRm_MOD_MASK          0x00000003
#define GPTAn_LTCCTRm_MOD_SHIFT         0
#define GPTAn_LTCCTRm_OSM_MASK          0x00000004
#define GPTAn_LTCCTRm_OSM_SHIFT         2
#define GPTAn_LTCCTRm_REN_MASK          0x00000008
#define GPTAn_LTCCTRm_REN_SHIFT         3
#define GPTAn_LTCCTRm_RED_MASK          0x00000010
#define GPTAn_LTCCTRm_RED_SHIFT         4
#define GPTAn_LTCCTRm_FED_MASK          0x00000020
#define GPTAn_LTCCTRm_FED_SHIFT         5
#define GPTAn_LTCCTRm_SLO_MASK          0x00000040
#define GPTAn_LTCCTRm_SLO_SHIFT         6
#define GPTAn_LTCCTRm_CUDCLR_MASK       0x00000080
#define GPTAn_LTCCTRm_CUDCLR_SHIFT      7
#define GPTAn_LTCCTRm_ILM_MASK          0x00000100
#define GPTAn_LTCCTRm_ILM_SHIFT         8
#define GPTAn_LTCCTRm_CUD_MASK          0x00000200
#define GPTAn_LTCCTRm_CUD_SHIFT         9
#define GPTAn_LTCCTRm_CEN_MASK          0x00000400
#define GPTAn_LTCCTRm_CEN_SHIFT         10
#define GPTAn_LTCCTRm_OCM_MASK          0x00003800
#define GPTAn_LTCCTRm_OCM_SHIFT         11
#define GPTAn_LTCCTRm_OIA_MASK          0x00004000
#define GPTAn_LTCCTRm_OIA_SHIFT         14
#define GPTAn_LTCCTRm_OUT_MASK          0x00008000
#define GPTAn_LTCCTRm_OUT_SHIFT         15



/****************** Masks for GPTAn_LTCXR63_t **********************/
/*
   GPTA0_LTCXR63         "GPTA0 Local Timer Cell X Register 63"
   GPTA1_LTCXR63         "GPTA1 Local Timer Cell X Register 63"
*/
/**********************************************************/

#define GPTAn_LTCXR63_MASK              0xffffffff
#define GPTAn_LTCXR63_X_MASK            0x0000ffff
#define GPTAn_LTCXR63_X_SHIFT           0
#define GPTAn_LTCXR63_XS_MASK           0xffff0000
#define GPTAn_LTCXR63_XS_SHIFT          16



/****************** Masks for GPTAn_LTCXRm_t **********************/
/*
   GPTA0_LTCXR00         "GPTA0 Local Timer Cell X Register 00"
   GPTA0_LTCXR01         "GPTA0 Local Timer Cell X Register 01"
   GPTA0_LTCXR02         "GPTA0 Local Timer Cell X Register 02"
   GPTA0_LTCXR03         "GPTA0 Local Timer Cell X Register 03"
   GPTA0_LTCXR04         "GPTA0 Local Timer Cell X Register 04"
   GPTA0_LTCXR05         "GPTA0 Local Timer Cell X Register 05"
   GPTA0_LTCXR06         "GPTA0 Local Timer Cell X Register 06"
   GPTA0_LTCXR07         "GPTA0 Local Timer Cell X Register 07"
   GPTA0_LTCXR08         "GPTA0 Local Timer Cell X Register 08"
   GPTA0_LTCXR09         "GPTA0 Local Timer Cell X Register 09"
   GPTA0_LTCXR10         "GPTA0 Local Timer Cell X Register 10"
   GPTA0_LTCXR11         "GPTA0 Local Timer Cell X Register 11"
   GPTA0_LTCXR12         "GPTA0 Local Timer Cell X Register 12"
   GPTA0_LTCXR13         "GPTA0 Local Timer Cell X Register 13"
   GPTA0_LTCXR14         "GPTA0 Local Timer Cell X Register 14"
   GPTA0_LTCXR15         "GPTA0 Local Timer Cell X Register 15"
   GPTA0_LTCXR16         "GPTA0 Local Timer Cell X Register 16"
   GPTA0_LTCXR17         "GPTA0 Local Timer Cell X Register 17"
   GPTA0_LTCXR18         "GPTA0 Local Timer Cell X Register 18"
   GPTA0_LTCXR19         "GPTA0 Local Timer Cell X Register 19"
   GPTA0_LTCXR20         "GPTA0 Local Timer Cell X Register 20"
   GPTA0_LTCXR21         "GPTA0 Local Timer Cell X Register 21"
   GPTA0_LTCXR22         "GPTA0 Local Timer Cell X Register 22"
   GPTA0_LTCXR23         "GPTA0 Local Timer Cell X Register 23"
   GPTA0_LTCXR24         "GPTA0 Local Timer Cell X Register 24"
   GPTA0_LTCXR25         "GPTA0 Local Timer Cell X Register 25"
   GPTA0_LTCXR26         "GPTA0 Local Timer Cell X Register 26"
   GPTA0_LTCXR27         "GPTA0 Local Timer Cell X Register 27"
   GPTA0_LTCXR28         "GPTA0 Local Timer Cell X Register 28"
   GPTA0_LTCXR29         "GPTA0 Local Timer Cell X Register 29"
   GPTA0_LTCXR30         "GPTA0 Local Timer Cell X Register 30"
   GPTA0_LTCXR31         "GPTA0 Local Timer Cell X Register 31"
   GPTA0_LTCXR32         "GPTA0 Local Timer Cell X Register 32"
   GPTA0_LTCXR33         "GPTA0 Local Timer Cell X Register 33"
   GPTA0_LTCXR34         "GPTA0 Local Timer Cell X Register 34"
   GPTA0_LTCXR35         "GPTA0 Local Timer Cell X Register 35"
   GPTA0_LTCXR36         "GPTA0 Local Timer Cell X Register 36"
   GPTA0_LTCXR37         "GPTA0 Local Timer Cell X Register 37"
   GPTA0_LTCXR38         "GPTA0 Local Timer Cell X Register 38"
   GPTA0_LTCXR39         "GPTA0 Local Timer Cell X Register 39"
   GPTA0_LTCXR40         "GPTA0 Local Timer Cell X Register 40"
   GPTA0_LTCXR41         "GPTA0 Local Timer Cell X Register 41"
   GPTA0_LTCXR42         "GPTA0 Local Timer Cell X Register 42"
   GPTA0_LTCXR43         "GPTA0 Local Timer Cell X Register 43"
   GPTA0_LTCXR44         "GPTA0 Local Timer Cell X Register 44"
   GPTA0_LTCXR45         "GPTA0 Local Timer Cell X Register 45"
   GPTA0_LTCXR46         "GPTA0 Local Timer Cell X Register 46"
   GPTA0_LTCXR47         "GPTA0 Local Timer Cell X Register 47"
   GPTA0_LTCXR48         "GPTA0 Local Timer Cell X Register 48"
   GPTA0_LTCXR49         "GPTA0 Local Timer Cell X Register 49"
   GPTA0_LTCXR50         "GPTA0 Local Timer Cell X Register 50"
   GPTA0_LTCXR51         "GPTA0 Local Timer Cell X Register 51"
   GPTA0_LTCXR52         "GPTA0 Local Timer Cell X Register 52"
   GPTA0_LTCXR53         "GPTA0 Local Timer Cell X Register 53"
   GPTA0_LTCXR54         "GPTA0 Local Timer Cell X Register 54"
   GPTA0_LTCXR55         "GPTA0 Local Timer Cell X Register 55"
   GPTA0_LTCXR56         "GPTA0 Local Timer Cell X Register 56"
   GPTA0_LTCXR57         "GPTA0 Local Timer Cell X Register 57"
   GPTA0_LTCXR58         "GPTA0 Local Timer Cell X Register 58"
   GPTA0_LTCXR59         "GPTA0 Local Timer Cell X Register 59"
   GPTA0_LTCXR60         "GPTA0 Local Timer Cell X Register 60"
   GPTA0_LTCXR61         "GPTA0 Local Timer Cell X Register 61"
   GPTA0_LTCXR62         "GPTA0 Local Timer Cell X Register 62"
   GPTA1_LTCXR00         "GPTA1 Local Timer Cell X Register 00"
   GPTA1_LTCXR01         "GPTA1 Local Timer Cell X Register 01"
   GPTA1_LTCXR02         "GPTA1 Local Timer Cell X Register 02"
   GPTA1_LTCXR03         "GPTA1 Local Timer Cell X Register 03"
   GPTA1_LTCXR04         "GPTA1 Local Timer Cell X Register 04"
   GPTA1_LTCXR05         "GPTA1 Local Timer Cell X Register 05"
   GPTA1_LTCXR06         "GPTA1 Local Timer Cell X Register 06"
   GPTA1_LTCXR07         "GPTA1 Local Timer Cell X Register 07"
   GPTA1_LTCXR08         "GPTA1 Local Timer Cell X Register 08"
   GPTA1_LTCXR09         "GPTA1 Local Timer Cell X Register 09"
   GPTA1_LTCXR10         "GPTA1 Local Timer Cell X Register 10"
   GPTA1_LTCXR11         "GPTA1 Local Timer Cell X Register 11"
   GPTA1_LTCXR12         "GPTA1 Local Timer Cell X Register 12"
   GPTA1_LTCXR13         "GPTA1 Local Timer Cell X Register 13"
   GPTA1_LTCXR14         "GPTA1 Local Timer Cell X Register 14"
   GPTA1_LTCXR15         "GPTA1 Local Timer Cell X Register 15"
   GPTA1_LTCXR16         "GPTA1 Local Timer Cell X Register 16"
   GPTA1_LTCXR17         "GPTA1 Local Timer Cell X Register 17"
   GPTA1_LTCXR18         "GPTA1 Local Timer Cell X Register 18"
   GPTA1_LTCXR19         "GPTA1 Local Timer Cell X Register 19"
   GPTA1_LTCXR20         "GPTA1 Local Timer Cell X Register 20"
   GPTA1_LTCXR21         "GPTA1 Local Timer Cell X Register 21"
   GPTA1_LTCXR22         "GPTA1 Local Timer Cell X Register 22"
   GPTA1_LTCXR23         "GPTA1 Local Timer Cell X Register 23"
   GPTA1_LTCXR24         "GPTA1 Local Timer Cell X Register 24"
   GPTA1_LTCXR25         "GPTA1 Local Timer Cell X Register 25"
   GPTA1_LTCXR26         "GPTA1 Local Timer Cell X Register 26"
   GPTA1_LTCXR27         "GPTA1 Local Timer Cell X Register 27"
   GPTA1_LTCXR28         "GPTA1 Local Timer Cell X Register 28"
   GPTA1_LTCXR29         "GPTA1 Local Timer Cell X Register 29"
   GPTA1_LTCXR30         "GPTA1 Local Timer Cell X Register 30"
   GPTA1_LTCXR31         "GPTA1 Local Timer Cell X Register 31"
   GPTA1_LTCXR32         "GPTA1 Local Timer Cell X Register 32"
   GPTA1_LTCXR33         "GPTA1 Local Timer Cell X Register 33"
   GPTA1_LTCXR34         "GPTA1 Local Timer Cell X Register 34"
   GPTA1_LTCXR35         "GPTA1 Local Timer Cell X Register 35"
   GPTA1_LTCXR36         "GPTA1 Local Timer Cell X Register 36"
   GPTA1_LTCXR37         "GPTA1 Local Timer Cell X Register 37"
   GPTA1_LTCXR38         "GPTA1 Local Timer Cell X Register 38"
   GPTA1_LTCXR39         "GPTA1 Local Timer Cell X Register 39"
   GPTA1_LTCXR40         "GPTA1 Local Timer Cell X Register 40"
   GPTA1_LTCXR41         "GPTA1 Local Timer Cell X Register 41"
   GPTA1_LTCXR42         "GPTA1 Local Timer Cell X Register 42"
   GPTA1_LTCXR43         "GPTA1 Local Timer Cell X Register 43"
   GPTA1_LTCXR44         "GPTA1 Local Timer Cell X Register 44"
   GPTA1_LTCXR45         "GPTA1 Local Timer Cell X Register 45"
   GPTA1_LTCXR46         "GPTA1 Local Timer Cell X Register 46"
   GPTA1_LTCXR47         "GPTA1 Local Timer Cell X Register 47"
   GPTA1_LTCXR48         "GPTA1 Local Timer Cell X Register 48"
   GPTA1_LTCXR49         "GPTA1 Local Timer Cell X Register 49"
   GPTA1_LTCXR50         "GPTA1 Local Timer Cell X Register 50"
   GPTA1_LTCXR51         "GPTA1 Local Timer Cell X Register 51"
   GPTA1_LTCXR52         "GPTA1 Local Timer Cell X Register 52"
   GPTA1_LTCXR53         "GPTA1 Local Timer Cell X Register 53"
   GPTA1_LTCXR54         "GPTA1 Local Timer Cell X Register 54"
   GPTA1_LTCXR55         "GPTA1 Local Timer Cell X Register 55"
   GPTA1_LTCXR56         "GPTA1 Local Timer Cell X Register 56"
   GPTA1_LTCXR57         "GPTA1 Local Timer Cell X Register 57"
   GPTA1_LTCXR58         "GPTA1 Local Timer Cell X Register 58"
   GPTA1_LTCXR59         "GPTA1 Local Timer Cell X Register 59"
   GPTA1_LTCXR60         "GPTA1 Local Timer Cell X Register 60"
   GPTA1_LTCXR61         "GPTA1 Local Timer Cell X Register 61"
   GPTA1_LTCXR62         "GPTA1 Local Timer Cell X Register 62"
*/
/**********************************************************/

#define GPTAn_LTCXRm_MASK               0x0000ffff
#define GPTAn_LTCXRm_X_MASK             0x0000ffff
#define GPTAn_LTCXRm_X_SHIFT            0



/****************** Masks for GPTAn_MRACTL_t **********************/
/*
   GPTA0_MRACTL          "GPTA0 Multiplexer Register Array Control Register"
   GPTA1_MRACTL          "GPTA1 Multiplexer Register Array Control Register"
*/
/**********************************************************/

#define GPTAn_MRACTL_MASK               0x00003f07
#define GPTAn_MRACTL_MAEN_MASK          0x00000001
#define GPTAn_MRACTL_MAEN_SHIFT         0
#define GPTAn_MRACTL_WCRES_MASK         0x00000002
#define GPTAn_MRACTL_WCRES_SHIFT        1
#define GPTAn_MRACTL_FIFOFULL_MASK      0x00000004
#define GPTAn_MRACTL_FIFOFULL_SHIFT     2
#define GPTAn_MRACTL_FIFOFILLCNT_MASK   0x00003f00
#define GPTAn_MRACTL_FIFOFILLCNT_SHIFT  8



/****************** Masks for GPTAn_MRADIN_t **********************/
/*
   GPTA0_MRADIN          "GPTA0 Multiplexer Register Array Data In Register"
   GPTA1_MRADIN          "GPTA1 Multiplexer Register Array Data In Register"
*/
/**********************************************************/

#define GPTAn_MRADIN_MASK               0xffffffff
#define GPTAn_MRADIN_DATAIN_MASK        0xffffffff
#define GPTAn_MRADIN_DATAIN_SHIFT       0



/****************** Masks for GPTAn_MRADOUT_t **********************/
/*
   GPTA0_MRADOUT         "GPTA0 Multiplexer Register Array Data Out Register"
   GPTA1_MRADOUT         "GPTA1 Multiplexer Register Array Data Out Register"
*/
/**********************************************************/

#define GPTAn_MRADOUT_MASK              0xffffffff
#define GPTAn_MRADOUT_DATAOUT_MASK      0xffffffff
#define GPTAn_MRADOUT_DATAOUT_SHIFT     0



/****************** Masks for GPTAn_PDLCTR_t **********************/
/*
   GPTA0_PDLCTR          "GPTA0 Phase Discrimination Logic Control Register"
   GPTA1_PDLCTR          "GPTA1 Phase Discrimination Logic Control Register"
*/
/**********************************************************/

#define GPTAn_PDLCTR_MASK               0x00000077
#define GPTAn_PDLCTR_MUX0_MASK          0x00000001
#define GPTAn_PDLCTR_MUX0_SHIFT         0
#define GPTAn_PDLCTR_TSE0_MASK          0x00000002
#define GPTAn_PDLCTR_TSE0_SHIFT         1
#define GPTAn_PDLCTR_ERR0_MASK          0x00000004
#define GPTAn_PDLCTR_ERR0_SHIFT         2
#define GPTAn_PDLCTR_MUX1_MASK          0x00000010
#define GPTAn_PDLCTR_MUX1_SHIFT         4
#define GPTAn_PDLCTR_TSE1_MASK          0x00000020
#define GPTAn_PDLCTR_TSE1_SHIFT         5
#define GPTAn_PDLCTR_ERR1_MASK          0x00000040
#define GPTAn_PDLCTR_ERR1_SHIFT         6



/****************** Masks for GPTAn_PLLCNT_t **********************/
/*
   GPTA0_PLLCNT          "GPTA0 Phase Locked Loop Counter Register"
   GPTA1_PLLCNT          "GPTA1 Phase Locked Loop Counter Register"
*/
/**********************************************************/

#define GPTAn_PLLCNT_MASK               0x0000ffff
#define GPTAn_PLLCNT_CNT_MASK           0x0000ffff
#define GPTAn_PLLCNT_CNT_SHIFT          0



/****************** Masks for GPTAn_PLLCTR_t **********************/
/*
   GPTA0_PLLCTR          "GPTA0 Phase Locked Loop Control Register"
   GPTA1_PLLCTR          "GPTA1 Phase Locked Loop Control Register"
*/
/**********************************************************/

#define GPTAn_PLLCTR_MASK               0x0000001f
#define GPTAn_PLLCTR_MUX_MASK           0x00000003
#define GPTAn_PLLCTR_MUX_SHIFT          0
#define GPTAn_PLLCTR_AEN_MASK           0x00000004
#define GPTAn_PLLCTR_AEN_SHIFT          2
#define GPTAn_PLLCTR_PEN_MASK           0x00000008
#define GPTAn_PLLCTR_PEN_SHIFT          3
#define GPTAn_PLLCTR_REN_MASK           0x00000010
#define GPTAn_PLLCTR_REN_SHIFT          4



/****************** Masks for GPTAn_PLLDTR_t **********************/
/*
   GPTA0_PLLDTR          "GPTA0 Phase Locked Loop Delta Register"
   GPTA1_PLLDTR          "GPTA1 Phase Locked Loop Delta Register"
*/
/**********************************************************/

#define GPTAn_PLLDTR_MASK               0x01ffffff
#define GPTAn_PLLDTR_DTR_MASK           0x01ffffff
#define GPTAn_PLLDTR_DTR_SHIFT          0



/****************** Masks for GPTAn_PLLMTI_t **********************/
/*
   GPTA0_PLLMTI          "GPTA0 Phase Locked Loop Microtick Register"
   GPTA1_PLLMTI          "GPTA1 Phase Locked Loop Microtick Register"
*/
/**********************************************************/

#define GPTAn_PLLMTI_MASK               0x0000ffff
#define GPTAn_PLLMTI_MTI_MASK           0x0000ffff
#define GPTAn_PLLMTI_MTI_SHIFT          0



/****************** Masks for GPTAn_PLLREV_t **********************/
/*
   GPTA0_PLLREV          "GPTA0 Phase Locked Loop Reload Register"
   GPTA1_PLLREV          "GPTA1 Phase Locked Loop Reload Register"
*/
/**********************************************************/

#define GPTAn_PLLREV_MASK               0x00ffffff
#define GPTAn_PLLREV_REV_MASK           0x00ffffff
#define GPTAn_PLLREV_REV_SHIFT          0



/****************** Masks for GPTAn_PLLSTP_t **********************/
/*
   GPTA0_PLLSTP          "GPTA0 Phase Locked Loop Step Register"
   GPTA1_PLLSTP          "GPTA1 Phase Locked Loop Step Register"
*/
/**********************************************************/

#define GPTAn_PLLSTP_MASK               0x0000ffff
#define GPTAn_PLLSTP_STP_MASK           0x0000ffff
#define GPTAn_PLLSTP_STP_SHIFT          0



/****************** Masks for GPTAn_SRCm_t **********************/
/*
   GPTA0_SRC00           "GPTA0 Service Request Control Register 00"
   GPTA0_SRC01           "GPTA0 Service Request Control Register 01"
   GPTA0_SRC02           "GPTA0 Service Request Control Register 02"
   GPTA0_SRC03           "GPTA0 Service Request Control Register 03"
   GPTA0_SRC04           "GPTA0 Service Request Control Register 04"
   GPTA0_SRC05           "GPTA0 Service Request Control Register 05"
   GPTA0_SRC06           "GPTA0 Service Request Control Register 06"
   GPTA0_SRC07           "GPTA0 Service Request Control Register 07"
   GPTA0_SRC08           "GPTA0 Service Request Control Register 08"
   GPTA0_SRC09           "GPTA0 Service Request Control Register 09"
   GPTA0_SRC10           "GPTA0 Service Request Control Register 10"
   GPTA0_SRC11           "GPTA0 Service Request Control Register 11"
   GPTA0_SRC12           "GPTA0 Service Request Control Register 12"
   GPTA0_SRC13           "GPTA0 Service Request Control Register 13"
   GPTA0_SRC14           "GPTA0 Service Request Control Register 14"
   GPTA0_SRC15           "GPTA0 Service Request Control Register 15"
   GPTA0_SRC16           "GPTA0 Service Request Control Register 16"
   GPTA0_SRC17           "GPTA0 Service Request Control Register 17"
   GPTA0_SRC18           "GPTA0 Service Request Control Register 18"
   GPTA0_SRC19           "GPTA0 Service Request Control Register 19"
   GPTA0_SRC20           "GPTA0 Service Request Control Register 20"
   GPTA0_SRC21           "GPTA0 Service Request Control Register 21"
   GPTA0_SRC22           "GPTA0 Service Request Control Register 22"
   GPTA0_SRC23           "GPTA0 Service Request Control Register 23"
   GPTA0_SRC24           "GPTA0 Service Request Control Register 24"
   GPTA0_SRC25           "GPTA0 Service Request Control Register 25"
   GPTA0_SRC26           "GPTA0 Service Request Control Register 26"
   GPTA0_SRC27           "GPTA0 Service Request Control Register 27"
   GPTA0_SRC28           "GPTA0 Service Request Control Register 28"
   GPTA0_SRC29           "GPTA0 Service Request Control Register 29"
   GPTA0_SRC30           "GPTA0 Service Request Control Register 30"
   GPTA0_SRC31           "GPTA0 Service Request Control Register 31"
   GPTA0_SRC32           "GPTA0 Service Request Control Register 32"
   GPTA0_SRC33           "GPTA0 Service Request Control Register 33"
   GPTA0_SRC34           "GPTA0 Service Request Control Register 34"
   GPTA0_SRC35           "GPTA0 Service Request Control Register 35"
   GPTA0_SRC36           "GPTA0 Service Request Control Register 36"
   GPTA0_SRC37           "GPTA0 Service Request Control Register 37"
   GPTA1_SRC00           "GPTA1 Service Request Control Register 00"
   GPTA1_SRC01           "GPTA1 Service Request Control Register 01"
   GPTA1_SRC02           "GPTA1 Service Request Control Register 02"
   GPTA1_SRC03           "GPTA1 Service Request Control Register 03"
   GPTA1_SRC04           "GPTA1 Service Request Control Register 04"
   GPTA1_SRC05           "GPTA1 Service Request Control Register 05"
   GPTA1_SRC06           "GPTA1 Service Request Control Register 06"
   GPTA1_SRC07           "GPTA1 Service Request Control Register 07"
   GPTA1_SRC08           "GPTA1 Service Request Control Register 08"
   GPTA1_SRC09           "GPTA1 Service Request Control Register 09"
   GPTA1_SRC10           "GPTA1 Service Request Control Register 10"
   GPTA1_SRC11           "GPTA1 Service Request Control Register 11"
   GPTA1_SRC12           "GPTA1 Service Request Control Register 12"
   GPTA1_SRC13           "GPTA1 Service Request Control Register 13"
   GPTA1_SRC14           "GPTA1 Service Request Control Register 14"
   GPTA1_SRC15           "GPTA1 Service Request Control Register 15"
   GPTA1_SRC16           "GPTA1 Service Request Control Register 16"
   GPTA1_SRC17           "GPTA1 Service Request Control Register 17"
   GPTA1_SRC18           "GPTA1 Service Request Control Register 18"
   GPTA1_SRC19           "GPTA1 Service Request Control Register 19"
   GPTA1_SRC20           "GPTA1 Service Request Control Register 20"
   GPTA1_SRC21           "GPTA1 Service Request Control Register 21"
   GPTA1_SRC22           "GPTA1 Service Request Control Register 22"
   GPTA1_SRC23           "GPTA1 Service Request Control Register 23"
   GPTA1_SRC24           "GPTA1 Service Request Control Register 24"
   GPTA1_SRC25           "GPTA1 Service Request Control Register 25"
   GPTA1_SRC26           "GPTA1 Service Request Control Register 26"
   GPTA1_SRC27           "GPTA1 Service Request Control Register 27"
   GPTA1_SRC28           "GPTA1 Service Request Control Register 28"
   GPTA1_SRC29           "GPTA1 Service Request Control Register 29"
   GPTA1_SRC30           "GPTA1 Service Request Control Register 30"
   GPTA1_SRC31           "GPTA1 Service Request Control Register 31"
   GPTA1_SRC32           "GPTA1 Service Request Control Register 32"
   GPTA1_SRC33           "GPTA1 Service Request Control Register 33"
   GPTA1_SRC34           "GPTA1 Service Request Control Register 34"
   GPTA1_SRC35           "GPTA1 Service Request Control Register 35"
   GPTA1_SRC36           "GPTA1 Service Request Control Register 36"
   GPTA1_SRC37           "GPTA1 Service Request Control Register 37"
*/
/**********************************************************/

#define GPTAn_SRCm_MASK                 0x0000f4ff
#define GPTAn_SRCm_SRPN_MASK            0x000000ff
#define GPTAn_SRCm_SRPN_SHIFT           0
#define GPTAn_SRCm_TOS_MASK             0x00000400
#define GPTAn_SRCm_TOS_SHIFT            10
#define GPTAn_SRCm_SRE_MASK             0x00001000
#define GPTAn_SRCm_SRE_SHIFT            12
#define GPTAn_SRCm_SRR_MASK             0x00002000
#define GPTAn_SRCm_SRR_SHIFT            13
#define GPTAn_SRCm_CLRR_MASK            0x00004000
#define GPTAn_SRCm_CLRR_SHIFT           14
#define GPTAn_SRCm_SETR_MASK            0x00008000
#define GPTAn_SRCm_SETR_SHIFT           15



/****************** Masks for GPTAn_SRNR_t **********************/
/*
   GPTA0_SRNR            "GPTA0 Service Request Node Redirection Register"
   GPTA1_SRNR            "GPTA1 Service Request Node Redirection Register"
*/
/**********************************************************/

#define GPTAn_SRNR_MASK                 0x0000ffff
#define GPTAn_SRNR_GTC01R_MASK          0x00000001
#define GPTAn_SRNR_GTC01R_SHIFT         0
#define GPTAn_SRNR_GTC03R_MASK          0x00000002
#define GPTAn_SRNR_GTC03R_SHIFT         1
#define GPTAn_SRNR_GTC05R_MASK          0x00000004
#define GPTAn_SRNR_GTC05R_SHIFT         2
#define GPTAn_SRNR_GTC07R_MASK          0x00000008
#define GPTAn_SRNR_GTC07R_SHIFT         3
#define GPTAn_SRNR_GTC09R_MASK          0x00000010
#define GPTAn_SRNR_GTC09R_SHIFT         4
#define GPTAn_SRNR_GTC11R_MASK          0x00000020
#define GPTAn_SRNR_GTC11R_SHIFT         5
#define GPTAn_SRNR_GTC13R_MASK          0x00000040
#define GPTAn_SRNR_GTC13R_SHIFT         6
#define GPTAn_SRNR_GTC15R_MASK          0x00000080
#define GPTAn_SRNR_GTC15R_SHIFT         7
#define GPTAn_SRNR_GTC17R_MASK          0x00000100
#define GPTAn_SRNR_GTC17R_SHIFT         8
#define GPTAn_SRNR_GTC19R_MASK          0x00000200
#define GPTAn_SRNR_GTC19R_SHIFT         9
#define GPTAn_SRNR_GTC21R_MASK          0x00000400
#define GPTAn_SRNR_GTC21R_SHIFT         10
#define GPTAn_SRNR_GTC23R_MASK          0x00000800
#define GPTAn_SRNR_GTC23R_SHIFT         11
#define GPTAn_SRNR_GTC25R_MASK          0x00001000
#define GPTAn_SRNR_GTC25R_SHIFT         12
#define GPTAn_SRNR_GTC27R_MASK          0x00002000
#define GPTAn_SRNR_GTC27R_SHIFT         13
#define GPTAn_SRNR_GTC29R_MASK          0x00004000
#define GPTAn_SRNR_GTC29R_SHIFT         14
#define GPTAn_SRNR_GTC31R_MASK          0x00008000
#define GPTAn_SRNR_GTC31R_SHIFT         15



/****************** Masks for GPTAn_SRSC0_t **********************/
/*
   GPTA0_SRSC0           "GPTA0 Service Request State Clear Register 0"
   GPTA1_SRSC0           "GPTA1 Service Request State Clear Register 0"
*/
/**********************************************************/

#define GPTAn_SRSC0_MASK                0x00007fff
#define GPTAn_SRSC0_DCM00R_MASK         0x00000001
#define GPTAn_SRSC0_DCM00R_SHIFT        0
#define GPTAn_SRSC0_DCM00F_MASK         0x00000002
#define GPTAn_SRSC0_DCM00F_SHIFT        1
#define GPTAn_SRSC0_DCM00C_MASK         0x00000004
#define GPTAn_SRSC0_DCM00C_SHIFT        2
#define GPTAn_SRSC0_DCM01R_MASK         0x00000008
#define GPTAn_SRSC0_DCM01R_SHIFT        3
#define GPTAn_SRSC0_DCM01F_MASK         0x00000010
#define GPTAn_SRSC0_DCM01F_SHIFT        4
#define GPTAn_SRSC0_DCM01C_MASK         0x00000020
#define GPTAn_SRSC0_DCM01C_SHIFT        5
#define GPTAn_SRSC0_DCM02R_MASK         0x00000040
#define GPTAn_SRSC0_DCM02R_SHIFT        6
#define GPTAn_SRSC0_DCM02F_MASK         0x00000080
#define GPTAn_SRSC0_DCM02F_SHIFT        7
#define GPTAn_SRSC0_DCM02C_MASK         0x00000100
#define GPTAn_SRSC0_DCM02C_SHIFT        8
#define GPTAn_SRSC0_DCM03R_MASK         0x00000200
#define GPTAn_SRSC0_DCM03R_SHIFT        9
#define GPTAn_SRSC0_DCM03F_MASK         0x00000400
#define GPTAn_SRSC0_DCM03F_SHIFT        10
#define GPTAn_SRSC0_DCM03C_MASK         0x00000800
#define GPTAn_SRSC0_DCM03C_SHIFT        11
#define GPTAn_SRSC0_PLL_MASK            0x00001000
#define GPTAn_SRSC0_PLL_SHIFT           12
#define GPTAn_SRSC0_GT00_MASK           0x00002000
#define GPTAn_SRSC0_GT00_SHIFT          13
#define GPTAn_SRSC0_GT01_MASK           0x00004000
#define GPTAn_SRSC0_GT01_SHIFT          14



/****************** Masks for GPTAn_SRSC1_t **********************/
/*
   GPTA0_SRSC1           "GPTA0 Service Request State Clear Register 1"
   GPTA1_SRSC1           "GPTA1 Service Request State Clear Register 1"
*/
/**********************************************************/

#define GPTAn_SRSC1_MASK                0xffffffff
#define GPTAn_SRSC1_GTC00_MASK          0x00000001
#define GPTAn_SRSC1_GTC00_SHIFT         0
#define GPTAn_SRSC1_GTC01_MASK          0x00000002
#define GPTAn_SRSC1_GTC01_SHIFT         1
#define GPTAn_SRSC1_GTC02_MASK          0x00000004
#define GPTAn_SRSC1_GTC02_SHIFT         2
#define GPTAn_SRSC1_GTC03_MASK          0x00000008
#define GPTAn_SRSC1_GTC03_SHIFT         3
#define GPTAn_SRSC1_GTC04_MASK          0x00000010
#define GPTAn_SRSC1_GTC04_SHIFT         4
#define GPTAn_SRSC1_GTC05_MASK          0x00000020
#define GPTAn_SRSC1_GTC05_SHIFT         5
#define GPTAn_SRSC1_GTC06_MASK          0x00000040
#define GPTAn_SRSC1_GTC06_SHIFT         6
#define GPTAn_SRSC1_GTC07_MASK          0x00000080
#define GPTAn_SRSC1_GTC07_SHIFT         7
#define GPTAn_SRSC1_GTC08_MASK          0x00000100
#define GPTAn_SRSC1_GTC08_SHIFT         8
#define GPTAn_SRSC1_GTC09_MASK          0x00000200
#define GPTAn_SRSC1_GTC09_SHIFT         9
#define GPTAn_SRSC1_GTC10_MASK          0x00000400
#define GPTAn_SRSC1_GTC10_SHIFT         10
#define GPTAn_SRSC1_GTC11_MASK          0x00000800
#define GPTAn_SRSC1_GTC11_SHIFT         11
#define GPTAn_SRSC1_GTC12_MASK          0x00001000
#define GPTAn_SRSC1_GTC12_SHIFT         12
#define GPTAn_SRSC1_GTC13_MASK          0x00002000
#define GPTAn_SRSC1_GTC13_SHIFT         13
#define GPTAn_SRSC1_GTC14_MASK          0x00004000
#define GPTAn_SRSC1_GTC14_SHIFT         14
#define GPTAn_SRSC1_GTC15_MASK          0x00008000
#define GPTAn_SRSC1_GTC15_SHIFT         15
#define GPTAn_SRSC1_GTC16_MASK          0x00010000
#define GPTAn_SRSC1_GTC16_SHIFT         16
#define GPTAn_SRSC1_GTC17_MASK          0x00020000
#define GPTAn_SRSC1_GTC17_SHIFT         17
#define GPTAn_SRSC1_GTC18_MASK          0x00040000
#define GPTAn_SRSC1_GTC18_SHIFT         18
#define GPTAn_SRSC1_GTC19_MASK          0x00080000
#define GPTAn_SRSC1_GTC19_SHIFT         19
#define GPTAn_SRSC1_GTC20_MASK          0x00100000
#define GPTAn_SRSC1_GTC20_SHIFT         20
#define GPTAn_SRSC1_GTC21_MASK          0x00200000
#define GPTAn_SRSC1_GTC21_SHIFT         21
#define GPTAn_SRSC1_GTC22_MASK          0x00400000
#define GPTAn_SRSC1_GTC22_SHIFT         22
#define GPTAn_SRSC1_GTC23_MASK          0x00800000
#define GPTAn_SRSC1_GTC23_SHIFT         23
#define GPTAn_SRSC1_GTC24_MASK          0x01000000
#define GPTAn_SRSC1_GTC24_SHIFT         24
#define GPTAn_SRSC1_GTC25_MASK          0x02000000
#define GPTAn_SRSC1_GTC25_SHIFT         25
#define GPTAn_SRSC1_GTC26_MASK          0x04000000
#define GPTAn_SRSC1_GTC26_SHIFT         26
#define GPTAn_SRSC1_GTC27_MASK          0x08000000
#define GPTAn_SRSC1_GTC27_SHIFT         27
#define GPTAn_SRSC1_GTC28_MASK          0x10000000
#define GPTAn_SRSC1_GTC28_SHIFT         28
#define GPTAn_SRSC1_GTC29_MASK          0x20000000
#define GPTAn_SRSC1_GTC29_SHIFT         29
#define GPTAn_SRSC1_GTC30_MASK          0x40000000
#define GPTAn_SRSC1_GTC30_SHIFT         30
#define GPTAn_SRSC1_GTC31_MASK          0x80000000
#define GPTAn_SRSC1_GTC31_SHIFT         31



/****************** Masks for GPTAn_SRSCm_t **********************/
/*
   GPTA0_SRSC2           "GPTA0 Service Request State Clear Register 2"
   GPTA0_SRSC3           "GPTA0 Service Request State Clear Register 3"
   GPTA1_SRSC2           "GPTA1 Service Request State Clear Register 2"
   GPTA1_SRSC3           "GPTA1 Service Request State Clear Register 3"
*/
/**********************************************************/

#define GPTAn_SRSCm_MASK                0xffffffff
#define GPTAn_SRSCm_LTC00_MASK          0x00000001
#define GPTAn_SRSCm_LTC00_SHIFT         0
#define GPTAn_SRSCm_LTC01_MASK          0x00000002
#define GPTAn_SRSCm_LTC01_SHIFT         1
#define GPTAn_SRSCm_LTC02_MASK          0x00000004
#define GPTAn_SRSCm_LTC02_SHIFT         2
#define GPTAn_SRSCm_LTC03_MASK          0x00000008
#define GPTAn_SRSCm_LTC03_SHIFT         3
#define GPTAn_SRSCm_LTC04_MASK          0x00000010
#define GPTAn_SRSCm_LTC04_SHIFT         4
#define GPTAn_SRSCm_LTC05_MASK          0x00000020
#define GPTAn_SRSCm_LTC05_SHIFT         5
#define GPTAn_SRSCm_LTC06_MASK          0x00000040
#define GPTAn_SRSCm_LTC06_SHIFT         6
#define GPTAn_SRSCm_LTC07_MASK          0x00000080
#define GPTAn_SRSCm_LTC07_SHIFT         7
#define GPTAn_SRSCm_LTC08_MASK          0x00000100
#define GPTAn_SRSCm_LTC08_SHIFT         8
#define GPTAn_SRSCm_LTC09_MASK          0x00000200
#define GPTAn_SRSCm_LTC09_SHIFT         9
#define GPTAn_SRSCm_LTC10_MASK          0x00000400
#define GPTAn_SRSCm_LTC10_SHIFT         10
#define GPTAn_SRSCm_LTC11_MASK          0x00000800
#define GPTAn_SRSCm_LTC11_SHIFT         11
#define GPTAn_SRSCm_LTC12_MASK          0x00001000
#define GPTAn_SRSCm_LTC12_SHIFT         12
#define GPTAn_SRSCm_LTC13_MASK          0x00002000
#define GPTAn_SRSCm_LTC13_SHIFT         13
#define GPTAn_SRSCm_LTC14_MASK          0x00004000
#define GPTAn_SRSCm_LTC14_SHIFT         14
#define GPTAn_SRSCm_LTC15_MASK          0x00008000
#define GPTAn_SRSCm_LTC15_SHIFT         15
#define GPTAn_SRSCm_LTC16_MASK          0x00010000
#define GPTAn_SRSCm_LTC16_SHIFT         16
#define GPTAn_SRSCm_LTC17_MASK          0x00020000
#define GPTAn_SRSCm_LTC17_SHIFT         17
#define GPTAn_SRSCm_LTC18_MASK          0x00040000
#define GPTAn_SRSCm_LTC18_SHIFT         18
#define GPTAn_SRSCm_LTC19_MASK          0x00080000
#define GPTAn_SRSCm_LTC19_SHIFT         19
#define GPTAn_SRSCm_LTC20_MASK          0x00100000
#define GPTAn_SRSCm_LTC20_SHIFT         20
#define GPTAn_SRSCm_LTC21_MASK          0x00200000
#define GPTAn_SRSCm_LTC21_SHIFT         21
#define GPTAn_SRSCm_LTC22_MASK          0x00400000
#define GPTAn_SRSCm_LTC22_SHIFT         22
#define GPTAn_SRSCm_LTC23_MASK          0x00800000
#define GPTAn_SRSCm_LTC23_SHIFT         23
#define GPTAn_SRSCm_LTC24_MASK          0x01000000
#define GPTAn_SRSCm_LTC24_SHIFT         24
#define GPTAn_SRSCm_LTC25_MASK          0x02000000
#define GPTAn_SRSCm_LTC25_SHIFT         25
#define GPTAn_SRSCm_LTC26_MASK          0x04000000
#define GPTAn_SRSCm_LTC26_SHIFT         26
#define GPTAn_SRSCm_LTC27_MASK          0x08000000
#define GPTAn_SRSCm_LTC27_SHIFT         27
#define GPTAn_SRSCm_LTC28_MASK          0x10000000
#define GPTAn_SRSCm_LTC28_SHIFT         28
#define GPTAn_SRSCm_LTC29_MASK          0x20000000
#define GPTAn_SRSCm_LTC29_SHIFT         29
#define GPTAn_SRSCm_LTC30_MASK          0x40000000
#define GPTAn_SRSCm_LTC30_SHIFT         30
#define GPTAn_SRSCm_LTC31_MASK          0x80000000
#define GPTAn_SRSCm_LTC31_SHIFT         31



/****************** Masks for GPTAn_SRSS0_t **********************/
/*
   GPTA0_SRSS0           "GPTA0 Service Request State Set Register 0"
   GPTA1_SRSS0           "GPTA1 Service Request State Set Register 0"
*/
/**********************************************************/

#define GPTAn_SRSS0_MASK                0x00007fff
#define GPTAn_SRSS0_DCM00R_MASK         0x00000001
#define GPTAn_SRSS0_DCM00R_SHIFT        0
#define GPTAn_SRSS0_DCM00F_MASK         0x00000002
#define GPTAn_SRSS0_DCM00F_SHIFT        1
#define GPTAn_SRSS0_DCM00C_MASK         0x00000004
#define GPTAn_SRSS0_DCM00C_SHIFT        2
#define GPTAn_SRSS0_DCM01R_MASK         0x00000008
#define GPTAn_SRSS0_DCM01R_SHIFT        3
#define GPTAn_SRSS0_DCM01F_MASK         0x00000010
#define GPTAn_SRSS0_DCM01F_SHIFT        4
#define GPTAn_SRSS0_DCM01C_MASK         0x00000020
#define GPTAn_SRSS0_DCM01C_SHIFT        5
#define GPTAn_SRSS0_DCM02R_MASK         0x00000040
#define GPTAn_SRSS0_DCM02R_SHIFT        6
#define GPTAn_SRSS0_DCM02F_MASK         0x00000080
#define GPTAn_SRSS0_DCM02F_SHIFT        7
#define GPTAn_SRSS0_DCM02C_MASK         0x00000100
#define GPTAn_SRSS0_DCM02C_SHIFT        8
#define GPTAn_SRSS0_DCM03R_MASK         0x00000200
#define GPTAn_SRSS0_DCM03R_SHIFT        9
#define GPTAn_SRSS0_DCM03F_MASK         0x00000400
#define GPTAn_SRSS0_DCM03F_SHIFT        10
#define GPTAn_SRSS0_DCM03C_MASK         0x00000800
#define GPTAn_SRSS0_DCM03C_SHIFT        11
#define GPTAn_SRSS0_PLL_MASK            0x00001000
#define GPTAn_SRSS0_PLL_SHIFT           12
#define GPTAn_SRSS0_GT00_MASK           0x00002000
#define GPTAn_SRSS0_GT00_SHIFT          13
#define GPTAn_SRSS0_GT01_MASK           0x00004000
#define GPTAn_SRSS0_GT01_SHIFT          14



/****************** Masks for GPTAn_SRSS1_t **********************/
/*
   GPTA0_SRSS1           "GPTA0 Service Request State Set Register 1"
   GPTA1_SRSS1           "GPTA1 Service Request State Set Register 1"
*/
/**********************************************************/

#define GPTAn_SRSS1_MASK                0xffffffff
#define GPTAn_SRSS1_GTC00_MASK          0x00000001
#define GPTAn_SRSS1_GTC00_SHIFT         0
#define GPTAn_SRSS1_GTC01_MASK          0x00000002
#define GPTAn_SRSS1_GTC01_SHIFT         1
#define GPTAn_SRSS1_GTC02_MASK          0x00000004
#define GPTAn_SRSS1_GTC02_SHIFT         2
#define GPTAn_SRSS1_GTC03_MASK          0x00000008
#define GPTAn_SRSS1_GTC03_SHIFT         3
#define GPTAn_SRSS1_GTC04_MASK          0x00000010
#define GPTAn_SRSS1_GTC04_SHIFT         4
#define GPTAn_SRSS1_GTC05_MASK          0x00000020
#define GPTAn_SRSS1_GTC05_SHIFT         5
#define GPTAn_SRSS1_GTC06_MASK          0x00000040
#define GPTAn_SRSS1_GTC06_SHIFT         6
#define GPTAn_SRSS1_GTC07_MASK          0x00000080
#define GPTAn_SRSS1_GTC07_SHIFT         7
#define GPTAn_SRSS1_GTC08_MASK          0x00000100
#define GPTAn_SRSS1_GTC08_SHIFT         8
#define GPTAn_SRSS1_GTC09_MASK          0x00000200
#define GPTAn_SRSS1_GTC09_SHIFT         9
#define GPTAn_SRSS1_GTC10_MASK          0x00000400
#define GPTAn_SRSS1_GTC10_SHIFT         10
#define GPTAn_SRSS1_GTC11_MASK          0x00000800
#define GPTAn_SRSS1_GTC11_SHIFT         11
#define GPTAn_SRSS1_GTC12_MASK          0x00001000
#define GPTAn_SRSS1_GTC12_SHIFT         12
#define GPTAn_SRSS1_GTC13_MASK          0x00002000
#define GPTAn_SRSS1_GTC13_SHIFT         13
#define GPTAn_SRSS1_GTC14_MASK          0x00004000
#define GPTAn_SRSS1_GTC14_SHIFT         14
#define GPTAn_SRSS1_GTC15_MASK          0x00008000
#define GPTAn_SRSS1_GTC15_SHIFT         15
#define GPTAn_SRSS1_GTC16_MASK          0x00010000
#define GPTAn_SRSS1_GTC16_SHIFT         16
#define GPTAn_SRSS1_GTC17_MASK          0x00020000
#define GPTAn_SRSS1_GTC17_SHIFT         17
#define GPTAn_SRSS1_GTC18_MASK          0x00040000
#define GPTAn_SRSS1_GTC18_SHIFT         18
#define GPTAn_SRSS1_GTC19_MASK          0x00080000
#define GPTAn_SRSS1_GTC19_SHIFT         19
#define GPTAn_SRSS1_GTC20_MASK          0x00100000
#define GPTAn_SRSS1_GTC20_SHIFT         20
#define GPTAn_SRSS1_GTC21_MASK          0x00200000
#define GPTAn_SRSS1_GTC21_SHIFT         21
#define GPTAn_SRSS1_GTC22_MASK          0x00400000
#define GPTAn_SRSS1_GTC22_SHIFT         22
#define GPTAn_SRSS1_GTC23_MASK          0x00800000
#define GPTAn_SRSS1_GTC23_SHIFT         23
#define GPTAn_SRSS1_GTC24_MASK          0x01000000
#define GPTAn_SRSS1_GTC24_SHIFT         24
#define GPTAn_SRSS1_GTC25_MASK          0x02000000
#define GPTAn_SRSS1_GTC25_SHIFT         25
#define GPTAn_SRSS1_GTC26_MASK          0x04000000
#define GPTAn_SRSS1_GTC26_SHIFT         26
#define GPTAn_SRSS1_GTC27_MASK          0x08000000
#define GPTAn_SRSS1_GTC27_SHIFT         27
#define GPTAn_SRSS1_GTC28_MASK          0x10000000
#define GPTAn_SRSS1_GTC28_SHIFT         28
#define GPTAn_SRSS1_GTC29_MASK          0x20000000
#define GPTAn_SRSS1_GTC29_SHIFT         29
#define GPTAn_SRSS1_GTC30_MASK          0x40000000
#define GPTAn_SRSS1_GTC30_SHIFT         30
#define GPTAn_SRSS1_GTC31_MASK          0x80000000
#define GPTAn_SRSS1_GTC31_SHIFT         31



/****************** Masks for GPTAn_SRSSm_t **********************/
/*
   GPTA0_SRSS2           "GPTA0 Service Request State Set Register 2"
   GPTA0_SRSS3           "GPTA0 Service Request State Set Register 3"
   GPTA1_SRSS2           "GPTA1 Service Request State Set Register 2"
   GPTA1_SRSS3           "GPTA1 Service Request State Set Register 3"
*/
/**********************************************************/

#define GPTAn_SRSSm_MASK                0xffffffff
#define GPTAn_SRSSm_LTC00_MASK          0x00000001
#define GPTAn_SRSSm_LTC00_SHIFT         0
#define GPTAn_SRSSm_LTC01_MASK          0x00000002
#define GPTAn_SRSSm_LTC01_SHIFT         1
#define GPTAn_SRSSm_LTC02_MASK          0x00000004
#define GPTAn_SRSSm_LTC02_SHIFT         2
#define GPTAn_SRSSm_LTC03_MASK          0x00000008
#define GPTAn_SRSSm_LTC03_SHIFT         3
#define GPTAn_SRSSm_LTC04_MASK          0x00000010
#define GPTAn_SRSSm_LTC04_SHIFT         4
#define GPTAn_SRSSm_LTC05_MASK          0x00000020
#define GPTAn_SRSSm_LTC05_SHIFT         5
#define GPTAn_SRSSm_LTC06_MASK          0x00000040
#define GPTAn_SRSSm_LTC06_SHIFT         6
#define GPTAn_SRSSm_LTC07_MASK          0x00000080
#define GPTAn_SRSSm_LTC07_SHIFT         7
#define GPTAn_SRSSm_LTC08_MASK          0x00000100
#define GPTAn_SRSSm_LTC08_SHIFT         8
#define GPTAn_SRSSm_LTC09_MASK          0x00000200
#define GPTAn_SRSSm_LTC09_SHIFT         9
#define GPTAn_SRSSm_LTC10_MASK          0x00000400
#define GPTAn_SRSSm_LTC10_SHIFT         10
#define GPTAn_SRSSm_LTC11_MASK          0x00000800
#define GPTAn_SRSSm_LTC11_SHIFT         11
#define GPTAn_SRSSm_LTC12_MASK          0x00001000
#define GPTAn_SRSSm_LTC12_SHIFT         12
#define GPTAn_SRSSm_LTC13_MASK          0x00002000
#define GPTAn_SRSSm_LTC13_SHIFT         13
#define GPTAn_SRSSm_LTC14_MASK          0x00004000
#define GPTAn_SRSSm_LTC14_SHIFT         14
#define GPTAn_SRSSm_LTC15_MASK          0x00008000
#define GPTAn_SRSSm_LTC15_SHIFT         15
#define GPTAn_SRSSm_LTC16_MASK          0x00010000
#define GPTAn_SRSSm_LTC16_SHIFT         16
#define GPTAn_SRSSm_LTC17_MASK          0x00020000
#define GPTAn_SRSSm_LTC17_SHIFT         17
#define GPTAn_SRSSm_LTC18_MASK          0x00040000
#define GPTAn_SRSSm_LTC18_SHIFT         18
#define GPTAn_SRSSm_LTC19_MASK          0x00080000
#define GPTAn_SRSSm_LTC19_SHIFT         19
#define GPTAn_SRSSm_LTC20_MASK          0x00100000
#define GPTAn_SRSSm_LTC20_SHIFT         20
#define GPTAn_SRSSm_LTC21_MASK          0x00200000
#define GPTAn_SRSSm_LTC21_SHIFT         21
#define GPTAn_SRSSm_LTC22_MASK          0x00400000
#define GPTAn_SRSSm_LTC22_SHIFT         22
#define GPTAn_SRSSm_LTC23_MASK          0x00800000
#define GPTAn_SRSSm_LTC23_SHIFT         23
#define GPTAn_SRSSm_LTC24_MASK          0x01000000
#define GPTAn_SRSSm_LTC24_SHIFT         24
#define GPTAn_SRSSm_LTC25_MASK          0x02000000
#define GPTAn_SRSSm_LTC25_SHIFT         25
#define GPTAn_SRSSm_LTC26_MASK          0x04000000
#define GPTAn_SRSSm_LTC26_SHIFT         26
#define GPTAn_SRSSm_LTC27_MASK          0x08000000
#define GPTAn_SRSSm_LTC27_SHIFT         27
#define GPTAn_SRSSm_LTC28_MASK          0x10000000
#define GPTAn_SRSSm_LTC28_SHIFT         28
#define GPTAn_SRSSm_LTC29_MASK          0x20000000
#define GPTAn_SRSSm_LTC29_SHIFT         29
#define GPTAn_SRSSm_LTC30_MASK          0x40000000
#define GPTAn_SRSSm_LTC30_SHIFT         30
#define GPTAn_SRSSm_LTC31_MASK          0x80000000
#define GPTAn_SRSSm_LTC31_SHIFT         31




#endif /* _HAVE_TRICORE_GPTA0_GPTA1_SHAREMASKS_H_ */

