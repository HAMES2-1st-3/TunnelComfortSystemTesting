/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_GPTA_SHAREMASKS_H_
#define _HAVE_TRICORE_GPTA_SHAREMASKS_H_


/****************** Masks for GPTA0_DCMCAVm_t **********************/
/*
   GPTA0_DCMCAV0         "GPTA0 Duty Cycle Measurement Capture Register 0"
   GPTA0_DCMCAV1         "GPTA0 Duty Cycle Measurement Capture Register 1"
   GPTA0_DCMCAV2         "GPTA0 Duty Cycle Measurement Capture Register 2"
   GPTA0_DCMCAV3         "GPTA0 Duty Cycle Measurement Capture Register 3"
*/
/**********************************************************/

#define GPTA0_DCMCAVm_MASK              0x00ffffff
#define GPTA0_DCMCAVm_CAV_MASK          0x00ffffff
#define GPTA0_DCMCAVm_CAV_SHIFT         0



/****************** Masks for GPTA0_DCMCOVm_t **********************/
/*
   GPTA0_DCMCOV0         "GPTA0 Duty Cycle Measurement Capture/Compare Register 0"
   GPTA0_DCMCOV1         "GPTA0 Duty Cycle Measurement Capture/Compare Register 1"
   GPTA0_DCMCOV2         "GPTA0 Duty Cycle Measurement Capture/Compare Register 2"
   GPTA0_DCMCOV3         "GPTA0 Duty Cycle Measurement Capture/Compare Register 3"
*/
/**********************************************************/

#define GPTA0_DCMCOVm_MASK              0x00ffffff
#define GPTA0_DCMCOVm_COV_MASK          0x00ffffff
#define GPTA0_DCMCOVm_COV_SHIFT         0



/****************** Masks for GPTA0_DCMCTRm_t **********************/
/*
   GPTA0_DCMCTR0         "GPTA0 Duty Cycle Measurement Control Register 0"
   GPTA0_DCMCTR1         "GPTA0 Duty Cycle Measurement Control Register 1"
   GPTA0_DCMCTR2         "GPTA0 Duty Cycle Measurement Control Register 2"
   GPTA0_DCMCTR3         "GPTA0 Duty Cycle Measurement Control Register 3"
*/
/**********************************************************/

#define GPTA0_DCMCTRm_MASK              0x000003ff
#define GPTA0_DCMCTRm_RCA_MASK          0x00000001
#define GPTA0_DCMCTRm_RCA_SHIFT         0
#define GPTA0_DCMCTRm_OCA_MASK          0x00000002
#define GPTA0_DCMCTRm_OCA_SHIFT         1
#define GPTA0_DCMCTRm_RZE_MASK          0x00000004
#define GPTA0_DCMCTRm_RZE_SHIFT         2
#define GPTA0_DCMCTRm_FZE_MASK          0x00000008
#define GPTA0_DCMCTRm_FZE_SHIFT         3
#define GPTA0_DCMCTRm_RCK_MASK          0x00000010
#define GPTA0_DCMCTRm_RCK_SHIFT         4
#define GPTA0_DCMCTRm_FCK_MASK          0x00000020
#define GPTA0_DCMCTRm_FCK_SHIFT         5
#define GPTA0_DCMCTRm_QCK_MASK          0x00000040
#define GPTA0_DCMCTRm_QCK_SHIFT         6
#define GPTA0_DCMCTRm_RRE_MASK          0x00000080
#define GPTA0_DCMCTRm_RRE_SHIFT         7
#define GPTA0_DCMCTRm_FRE_MASK          0x00000100
#define GPTA0_DCMCTRm_FRE_SHIFT         8
#define GPTA0_DCMCTRm_CRE_MASK          0x00000200
#define GPTA0_DCMCTRm_CRE_SHIFT         9



/****************** Masks for GPTA0_DCMTIMm_t **********************/
/*
   GPTA0_DCMTIM0         "GPTA0 Duty Cycle Measurement Timer Register 0"
   GPTA0_DCMTIM1         "GPTA0 Duty Cycle Measurement Timer Register 1"
   GPTA0_DCMTIM2         "GPTA0 Duty Cycle Measurement Timer Register 2"
   GPTA0_DCMTIM3         "GPTA0 Duty Cycle Measurement Timer Register 3"
*/
/**********************************************************/

#define GPTA0_DCMTIMm_MASK              0x00ffffff
#define GPTA0_DCMTIMm_TIM_MASK          0x00ffffff
#define GPTA0_DCMTIMm_TIM_SHIFT         0



/****************** Masks for GPTA0_FPCCTRm_t **********************/
/*
   GPTA0_FPCCTR0         "GPTA0 Filter and Prescaler Cell Control Register 0"
   GPTA0_FPCCTR1         "GPTA0 Filter and Prescaler Cell Control Register 1"
   GPTA0_FPCCTR2         "GPTA0 Filter and Prescaler Cell Control Register 2"
   GPTA0_FPCCTR3         "GPTA0 Filter and Prescaler Cell Control Register 3"
   GPTA0_FPCCTR4         "GPTA0 Filter and Prescaler Cell Control Register 4"
   GPTA0_FPCCTR5         "GPTA0 Filter and Prescaler Cell Control Register 5"
*/
/**********************************************************/

#define GPTA0_FPCCTRm_MASK              0x01ffffff
#define GPTA0_FPCCTRm_CMP_MASK          0x0000ffff
#define GPTA0_FPCCTRm_CMP_SHIFT         0
#define GPTA0_FPCCTRm_MOD_MASK          0x00070000
#define GPTA0_FPCCTRm_MOD_SHIFT         16
#define GPTA0_FPCCTRm_IPS_MASK          0x00380000
#define GPTA0_FPCCTRm_IPS_SHIFT         19
#define GPTA0_FPCCTRm_CLK_MASK          0x00c00000
#define GPTA0_FPCCTRm_CLK_SHIFT         22
#define GPTA0_FPCCTRm_RTG_MASK          0x01000000
#define GPTA0_FPCCTRm_RTG_SHIFT         24



/****************** Masks for GPTA0_FPCTIMm_t **********************/
/*
   GPTA0_FPCTIM0         "GPTA0 Filter and Prescaler Cell Timer Register 0"
   GPTA0_FPCTIM1         "GPTA0 Filter and Prescaler Cell Timer Register 1"
   GPTA0_FPCTIM2         "GPTA0 Filter and Prescaler Cell Timer Register 2"
   GPTA0_FPCTIM3         "GPTA0 Filter and Prescaler Cell Timer Register 3"
   GPTA0_FPCTIM4         "GPTA0 Filter and Prescaler Cell Timer Register 4"
   GPTA0_FPCTIM5         "GPTA0 Filter and Prescaler Cell Timer Register 5"
*/
/**********************************************************/

#define GPTA0_FPCTIMm_MASK              0x0000ffff
#define GPTA0_FPCTIMm_TIM_MASK          0x0000ffff
#define GPTA0_FPCTIMm_TIM_SHIFT         0



/****************** Masks for GPTA0_GTCCTRm_t **********************/
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
*/
/**********************************************************/

#define GPTA0_GTCCTRm_CAPT_MASK         0x0000fdff
#define GPTA0_GTCCTRm_CAPT_MOD_MASK     0x00000003
#define GPTA0_GTCCTRm_CAPT_MOD_SHIFT    0
#define GPTA0_GTCCTRm_CAPT_OSM_MASK     0x00000004
#define GPTA0_GTCCTRm_CAPT_OSM_SHIFT    2
#define GPTA0_GTCCTRm_CAPT_REN_MASK     0x00000008
#define GPTA0_GTCCTRm_CAPT_REN_SHIFT    3
#define GPTA0_GTCCTRm_CAPT_RED_MASK     0x00000010
#define GPTA0_GTCCTRm_CAPT_RED_SHIFT    4
#define GPTA0_GTCCTRm_CAPT_FED_MASK     0x00000020
#define GPTA0_GTCCTRm_CAPT_FED_SHIFT    5
#define GPTA0_GTCCTRm_CAPT_NE_MASK      0x00000040
#define GPTA0_GTCCTRm_CAPT_NE_SHIFT     6
#define GPTA0_GTCCTRm_CAPT_BYP_MASK     0x00000080
#define GPTA0_GTCCTRm_CAPT_BYP_SHIFT    7
#define GPTA0_GTCCTRm_CAPT_EOA_MASK     0x00000100
#define GPTA0_GTCCTRm_CAPT_EOA_SHIFT    8
#define GPTA0_GTCCTRm_CAPT_CEN_MASK     0x00000400
#define GPTA0_GTCCTRm_CAPT_CEN_SHIFT    10
#define GPTA0_GTCCTRm_CAPT_OCM_MASK     0x00003800
#define GPTA0_GTCCTRm_CAPT_OCM_SHIFT    11
#define GPTA0_GTCCTRm_CAPT_OIA_MASK     0x00004000
#define GPTA0_GTCCTRm_CAPT_OIA_SHIFT    14
#define GPTA0_GTCCTRm_CAPT_OUT_MASK     0x00008000
#define GPTA0_GTCCTRm_CAPT_OUT_SHIFT    15

#define GPTA0_GTCCTRm_COMP_MASK         0x0000fdff
#define GPTA0_GTCCTRm_COMP_MOD_MASK     0x00000003
#define GPTA0_GTCCTRm_COMP_MOD_SHIFT    0
#define GPTA0_GTCCTRm_COMP_OSM_MASK     0x00000004
#define GPTA0_GTCCTRm_COMP_OSM_SHIFT    2
#define GPTA0_GTCCTRm_COMP_REN_MASK     0x00000008
#define GPTA0_GTCCTRm_COMP_REN_SHIFT    3
#define GPTA0_GTCCTRm_COMP_GES_MASK     0x00000010
#define GPTA0_GTCCTRm_COMP_GES_SHIFT    4
#define GPTA0_GTCCTRm_COMP_CAC_MASK     0x00000020
#define GPTA0_GTCCTRm_COMP_CAC_SHIFT    5
#define GPTA0_GTCCTRm_COMP_CAT_MASK     0x00000040
#define GPTA0_GTCCTRm_COMP_CAT_SHIFT    6
#define GPTA0_GTCCTRm_COMP_BYP_MASK     0x00000080
#define GPTA0_GTCCTRm_COMP_BYP_SHIFT    7
#define GPTA0_GTCCTRm_COMP_EOA_MASK     0x00000100
#define GPTA0_GTCCTRm_COMP_EOA_SHIFT    8
#define GPTA0_GTCCTRm_COMP_CEN_MASK     0x00000400
#define GPTA0_GTCCTRm_COMP_CEN_SHIFT    10
#define GPTA0_GTCCTRm_COMP_OCM_MASK     0x00003800
#define GPTA0_GTCCTRm_COMP_OCM_SHIFT    11
#define GPTA0_GTCCTRm_COMP_OIA_MASK     0x00004000
#define GPTA0_GTCCTRm_COMP_OIA_SHIFT    14
#define GPTA0_GTCCTRm_COMP_OUT_MASK     0x00008000
#define GPTA0_GTCCTRm_COMP_OUT_SHIFT    15



/****************** Masks for GPTA0_GTCTRm_t **********************/
/*
   GPTA0_GTCTR0          "GPTA0 Global Timer Control Register 0"
   GPTA0_GTCTR1          "GPTA0 Global Timer Control Register 1"
*/
/**********************************************************/

#define GPTA0_GTCTRm_MASK               0x000000ff
#define GPTA0_GTCTRm_SCO_MASK           0x0000000f
#define GPTA0_GTCTRm_SCO_SHIFT          0
#define GPTA0_GTCTRm_MUX_MASK           0x00000070
#define GPTA0_GTCTRm_MUX_SHIFT          4
#define GPTA0_GTCTRm_REN_MASK           0x00000080
#define GPTA0_GTCTRm_REN_SHIFT          7



/****************** Masks for GPTA0_GTCXRm_t **********************/
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
*/
/**********************************************************/

#define GPTA0_GTCXRm_MASK               0x00ffffff
#define GPTA0_GTCXRm_X_MASK             0x00ffffff
#define GPTA0_GTCXRm_X_SHIFT            0



/****************** Masks for GPTA0_GTREVm_t **********************/
/*
   GPTA0_GTREV0          "GPTA0 Global Timer Reload Value Register 0"
   GPTA0_GTREV1          "GPTA0 Global Timer Reload Value Register 1"
*/
/**********************************************************/

#define GPTA0_GTREVm_MASK               0x00ffffff
#define GPTA0_GTREVm_REV_MASK           0x00ffffff
#define GPTA0_GTREVm_REV_SHIFT          0



/****************** Masks for GPTA0_GTTIMm_t **********************/
/*
   GPTA0_GTTIM0          "GPTA0 Global Timer Register 0"
   GPTA0_GTTIM1          "GPTA0 Global Timer Register 1"
*/
/**********************************************************/

#define GPTA0_GTTIMm_MASK               0x00ffffff
#define GPTA0_GTTIMm_TIM_MASK           0x00ffffff
#define GPTA0_GTTIMm_TIM_SHIFT          0



/****************** Masks for GPTA0_LTCCTRm_t **********************/
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
*/
/**********************************************************/

#define GPTA0_LTCCTRm_CAPT_MASK         0x0001ffff
#define GPTA0_LTCCTRm_CAPT_MOD_MASK     0x00000003
#define GPTA0_LTCCTRm_CAPT_MOD_SHIFT    0
#define GPTA0_LTCCTRm_CAPT_OSM_MASK     0x00000004
#define GPTA0_LTCCTRm_CAPT_OSM_SHIFT    2
#define GPTA0_LTCCTRm_CAPT_REN_MASK     0x00000008
#define GPTA0_LTCCTRm_CAPT_REN_SHIFT    3
#define GPTA0_LTCCTRm_CAPT_RED_MASK     0x00000010
#define GPTA0_LTCCTRm_CAPT_RED_SHIFT    4
#define GPTA0_LTCCTRm_CAPT_FED_MASK     0x00000020
#define GPTA0_LTCCTRm_CAPT_FED_SHIFT    5
#define GPTA0_LTCCTRm_CAPT_BYP_MASK     0x00000040
#define GPTA0_LTCCTRm_CAPT_BYP_SHIFT    6
#define GPTA0_LTCCTRm_CAPT_EOA_MASK     0x00000080
#define GPTA0_LTCCTRm_CAPT_EOA_SHIFT    7
#define GPTA0_LTCCTRm_CAPT_ILM_MASK     0x00000100
#define GPTA0_LTCCTRm_CAPT_ILM_SHIFT    8
#define GPTA0_LTCCTRm_CAPT_SLL_MASK     0x00000200
#define GPTA0_LTCCTRm_CAPT_SLL_SHIFT    9
#define GPTA0_LTCCTRm_CAPT_CEN_MASK     0x00000400
#define GPTA0_LTCCTRm_CAPT_CEN_SHIFT    10
#define GPTA0_LTCCTRm_CAPT_OCM_MASK     0x00003800
#define GPTA0_LTCCTRm_CAPT_OCM_SHIFT    11
#define GPTA0_LTCCTRm_CAPT_OIA_MASK     0x00004000
#define GPTA0_LTCCTRm_CAPT_OIA_SHIFT    14
#define GPTA0_LTCCTRm_CAPT_OUT_MASK     0x00008000
#define GPTA0_LTCCTRm_CAPT_OUT_SHIFT    15
#define GPTA0_LTCCTRm_CAPT_GBYP_MASK    0x00010000
#define GPTA0_LTCCTRm_CAPT_GBYP_SHIFT   16

#define GPTA0_LTCCTRm_COMP_MASK         0x0001ffff
#define GPTA0_LTCCTRm_COMP_MOD_MASK     0x00000003
#define GPTA0_LTCCTRm_COMP_MOD_SHIFT    0
#define GPTA0_LTCCTRm_COMP_OSM_MASK     0x00000004
#define GPTA0_LTCCTRm_COMP_OSM_SHIFT    2
#define GPTA0_LTCCTRm_COMP_REN_MASK     0x00000008
#define GPTA0_LTCCTRm_COMP_REN_SHIFT    3
#define GPTA0_LTCCTRm_COMP_SOL_MASK     0x00000010
#define GPTA0_LTCCTRm_COMP_SOL_SHIFT    4
#define GPTA0_LTCCTRm_COMP_SOH_MASK     0x00000020
#define GPTA0_LTCCTRm_COMP_SOH_SHIFT    5
#define GPTA0_LTCCTRm_COMP_BYP_MASK     0x00000040
#define GPTA0_LTCCTRm_COMP_BYP_SHIFT    6
#define GPTA0_LTCCTRm_COMP_EOA_MASK     0x00000080
#define GPTA0_LTCCTRm_COMP_EOA_SHIFT    7
#define GPTA0_LTCCTRm_COMP_ILM_MASK     0x00000100
#define GPTA0_LTCCTRm_COMP_ILM_SHIFT    8
#define GPTA0_LTCCTRm_COMP_SLL_MASK     0x00000200
#define GPTA0_LTCCTRm_COMP_SLL_SHIFT    9
#define GPTA0_LTCCTRm_COMP_CEN_MASK     0x00000400
#define GPTA0_LTCCTRm_COMP_CEN_SHIFT    10
#define GPTA0_LTCCTRm_COMP_OCM_MASK     0x00003800
#define GPTA0_LTCCTRm_COMP_OCM_SHIFT    11
#define GPTA0_LTCCTRm_COMP_OIA_MASK     0x00004000
#define GPTA0_LTCCTRm_COMP_OIA_SHIFT    14
#define GPTA0_LTCCTRm_COMP_OUT_MASK     0x00008000
#define GPTA0_LTCCTRm_COMP_OUT_SHIFT    15
#define GPTA0_LTCCTRm_COMP_GBYP_MASK    0x00010000
#define GPTA0_LTCCTRm_COMP_GBYP_SHIFT   16

#define GPTA0_LTCCTRm_TIMER_ILM0_MASK   0x0001ffff
#define GPTA0_LTCCTRm_TIMER_ILM0_MOD_MASK 0x00000003
#define GPTA0_LTCCTRm_TIMER_ILM0_MOD_SHIFT 0
#define GPTA0_LTCCTRm_TIMER_ILM0_OSM_MASK 0x00000004
#define GPTA0_LTCCTRm_TIMER_ILM0_OSM_SHIFT 2
#define GPTA0_LTCCTRm_TIMER_ILM0_REN_MASK 0x00000008
#define GPTA0_LTCCTRm_TIMER_ILM0_REN_SHIFT 3
#define GPTA0_LTCCTRm_TIMER_ILM0_RED_MASK 0x00000010
#define GPTA0_LTCCTRm_TIMER_ILM0_RED_SHIFT 4
#define GPTA0_LTCCTRm_TIMER_ILM0_FED_MASK 0x00000020
#define GPTA0_LTCCTRm_TIMER_ILM0_FED_SHIFT 5
#define GPTA0_LTCCTRm_TIMER_ILM0_SLO_MASK 0x00000040
#define GPTA0_LTCCTRm_TIMER_ILM0_SLO_SHIFT 6
#define GPTA0_LTCCTRm_TIMER_ILM0_CUDCLR_MASK 0x00000080
#define GPTA0_LTCCTRm_TIMER_ILM0_CUDCLR_SHIFT 7
#define GPTA0_LTCCTRm_TIMER_ILM0_ILM_MASK 0x00000100
#define GPTA0_LTCCTRm_TIMER_ILM0_ILM_SHIFT 8
#define GPTA0_LTCCTRm_TIMER_ILM0_CUD_MASK 0x00000200
#define GPTA0_LTCCTRm_TIMER_ILM0_CUD_SHIFT 9
#define GPTA0_LTCCTRm_TIMER_ILM0_CEN_MASK 0x00000400
#define GPTA0_LTCCTRm_TIMER_ILM0_CEN_SHIFT 10
#define GPTA0_LTCCTRm_TIMER_ILM0_OCM_MASK 0x00003800
#define GPTA0_LTCCTRm_TIMER_ILM0_OCM_SHIFT 11
#define GPTA0_LTCCTRm_TIMER_ILM0_OIA_MASK 0x00004000
#define GPTA0_LTCCTRm_TIMER_ILM0_OIA_SHIFT 14
#define GPTA0_LTCCTRm_TIMER_ILM0_OUT_MASK 0x00008000
#define GPTA0_LTCCTRm_TIMER_ILM0_OUT_SHIFT 15
#define GPTA0_LTCCTRm_TIMER_ILM0_GBYP_MASK 0x00010000
#define GPTA0_LTCCTRm_TIMER_ILM0_GBYP_SHIFT 16

#define GPTA0_LTCCTRm_TIMER_ILM1_MASK   0x0001ffff
#define GPTA0_LTCCTRm_TIMER_ILM1_MOD_MASK 0x00000003
#define GPTA0_LTCCTRm_TIMER_ILM1_MOD_SHIFT 0
#define GPTA0_LTCCTRm_TIMER_ILM1_OSM_MASK 0x00000004
#define GPTA0_LTCCTRm_TIMER_ILM1_OSM_SHIFT 2
#define GPTA0_LTCCTRm_TIMER_ILM1_REN_MASK 0x00000008
#define GPTA0_LTCCTRm_TIMER_ILM1_REN_SHIFT 3
#define GPTA0_LTCCTRm_TIMER_ILM1_PEN_MASK 0x00000010
#define GPTA0_LTCCTRm_TIMER_ILM1_PEN_SHIFT 4
#define GPTA0_LTCCTRm_TIMER_ILM1_AIL_MASK 0x00000020
#define GPTA0_LTCCTRm_TIMER_ILM1_AIL_SHIFT 5
#define GPTA0_LTCCTRm_TIMER_ILM1_SLO_MASK 0x00000040
#define GPTA0_LTCCTRm_TIMER_ILM1_SLO_SHIFT 6
#define GPTA0_LTCCTRm_TIMER_ILM1_CUDCLR_MASK 0x00000080
#define GPTA0_LTCCTRm_TIMER_ILM1_CUDCLR_SHIFT 7
#define GPTA0_LTCCTRm_TIMER_ILM1_ILM_MASK 0x00000100
#define GPTA0_LTCCTRm_TIMER_ILM1_ILM_SHIFT 8
#define GPTA0_LTCCTRm_TIMER_ILM1_CUD_MASK 0x00000200
#define GPTA0_LTCCTRm_TIMER_ILM1_CUD_SHIFT 9
#define GPTA0_LTCCTRm_TIMER_ILM1_CEN_MASK 0x00000400
#define GPTA0_LTCCTRm_TIMER_ILM1_CEN_SHIFT 10
#define GPTA0_LTCCTRm_TIMER_ILM1_OCM_MASK 0x00003800
#define GPTA0_LTCCTRm_TIMER_ILM1_OCM_SHIFT 11
#define GPTA0_LTCCTRm_TIMER_ILM1_OIA_MASK 0x00004000
#define GPTA0_LTCCTRm_TIMER_ILM1_OIA_SHIFT 14
#define GPTA0_LTCCTRm_TIMER_ILM1_OUT_MASK 0x00008000
#define GPTA0_LTCCTRm_TIMER_ILM1_OUT_SHIFT 15
#define GPTA0_LTCCTRm_TIMER_ILM1_GBYP_MASK 0x00010000
#define GPTA0_LTCCTRm_TIMER_ILM1_GBYP_SHIFT 16



/****************** Masks for GPTA0_LTCXRm_t **********************/
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
*/
/**********************************************************/

#define GPTA0_LTCXRm_MASK               0x0000ffff
#define GPTA0_LTCXRm_X_MASK             0x0000ffff
#define GPTA0_LTCXRm_X_SHIFT            0



/****************** Masks for GPTA0_SRCm_t **********************/
/*
   GPTA0_SRC00           "GPTA0 Interrupt Service Request Control Register 00"
   GPTA0_SRC01           "GPTA0 Interrupt Service Request Control Register 01"
   GPTA0_SRC02           "GPTA0 Interrupt Service Request Control Register 02"
   GPTA0_SRC03           "GPTA0 Interrupt Service Request Control Register 03"
   GPTA0_SRC04           "GPTA0 Interrupt Service Request Control Register 04"
   GPTA0_SRC05           "GPTA0 Interrupt Service Request Control Register 05"
   GPTA0_SRC06           "GPTA0 Interrupt Service Request Control Register 06"
   GPTA0_SRC07           "GPTA0 Interrupt Service Request Control Register 07"
   GPTA0_SRC08           "GPTA0 Interrupt Service Request Control Register 08"
   GPTA0_SRC09           "GPTA0 Interrupt Service Request Control Register 09"
   GPTA0_SRC10           "GPTA0 Interrupt Service Request Control Register 10"
   GPTA0_SRC11           "GPTA0 Interrupt Service Request Control Register 11"
   GPTA0_SRC12           "GPTA0 Interrupt Service Request Control Register 12"
   GPTA0_SRC13           "GPTA0 Interrupt Service Request Control Register 13"
   GPTA0_SRC14           "GPTA0 Interrupt Service Request Control Register 14"
   GPTA0_SRC15           "GPTA0 Interrupt Service Request Control Register 15"
   GPTA0_SRC16           "GPTA0 Interrupt Service Request Control Register 16"
   GPTA0_SRC17           "GPTA0 Interrupt Service Request Control Register 17"
   GPTA0_SRC18           "GPTA0 Interrupt Service Request Control Register 18"
   GPTA0_SRC19           "GPTA0 Interrupt Service Request Control Register 19"
   GPTA0_SRC20           "GPTA0 Interrupt Service Request Control Register 20"
   GPTA0_SRC21           "GPTA0 Interrupt Service Request Control Register 21"
   GPTA0_SRC22           "GPTA0 Interrupt Service Request Control Register 22"
   GPTA0_SRC23           "GPTA0 Interrupt Service Request Control Register 23"
   GPTA0_SRC24           "GPTA0 Interrupt Service Request Control Register 24"
   GPTA0_SRC25           "GPTA0 Interrupt Service Request Control Register 25"
   GPTA0_SRC26           "GPTA0 Interrupt Service Request Control Register 26"
   GPTA0_SRC27           "GPTA0 Interrupt Service Request Control Register 27"
   GPTA0_SRC28           "GPTA0 Interrupt Service Request Control Register 28"
   GPTA0_SRC29           "GPTA0 Interrupt Service Request Control Register 29"
   GPTA0_SRC30           "GPTA0 Interrupt Service Request Control Register 30"
   GPTA0_SRC31           "GPTA0 Interrupt Service Request Control Register 31"
   GPTA0_SRC32           "GPTA0 Interrupt Service Request Control Register 32"
   GPTA0_SRC33           "GPTA0 Interrupt Service Request Control Register 33"
   GPTA0_SRC34           "GPTA0 Interrupt Service Request Control Register 34"
   GPTA0_SRC35           "GPTA0 Interrupt Service Request Control Register 35"
   GPTA0_SRC36           "GPTA0 Interrupt Service Request Control Register 36"
   GPTA0_SRC37           "GPTA0 Interrupt Service Request Control Register 37"
*/
/**********************************************************/

#define GPTA0_SRCm_MASK                 0x0000f4ff
#define GPTA0_SRCm_SRPN_MASK            0x000000ff
#define GPTA0_SRCm_SRPN_SHIFT           0
#define GPTA0_SRCm_TOS_MASK             0x00000400
#define GPTA0_SRCm_TOS_SHIFT            10
#define GPTA0_SRCm_SRE_MASK             0x00001000
#define GPTA0_SRCm_SRE_SHIFT            12
#define GPTA0_SRCm_SRR_MASK             0x00002000
#define GPTA0_SRCm_SRR_SHIFT            13
#define GPTA0_SRCm_CLRR_MASK            0x00004000
#define GPTA0_SRCm_CLRR_SHIFT           14
#define GPTA0_SRCm_SETR_MASK            0x00008000
#define GPTA0_SRCm_SETR_SHIFT           15



/****************** Masks for GPTA0_SRSCm_t **********************/
/*
   GPTA0_SRSC2           "GPTA0 Service Request State Clear Register 2"
   GPTA0_SRSC3           "GPTA0 Service Request State Clear Register 3"
*/
/**********************************************************/

#define GPTA0_SRSCm_MASK                0xffffffff
#define GPTA0_SRSCm_LTC0_MASK           0x00000001
#define GPTA0_SRSCm_LTC0_SHIFT          0
#define GPTA0_SRSCm_LTC1_MASK           0x00000002
#define GPTA0_SRSCm_LTC1_SHIFT          1
#define GPTA0_SRSCm_LTC2_MASK           0x00000004
#define GPTA0_SRSCm_LTC2_SHIFT          2
#define GPTA0_SRSCm_LTC3_MASK           0x00000008
#define GPTA0_SRSCm_LTC3_SHIFT          3
#define GPTA0_SRSCm_LTC4_MASK           0x00000010
#define GPTA0_SRSCm_LTC4_SHIFT          4
#define GPTA0_SRSCm_LTC5_MASK           0x00000020
#define GPTA0_SRSCm_LTC5_SHIFT          5
#define GPTA0_SRSCm_LTC6_MASK           0x00000040
#define GPTA0_SRSCm_LTC6_SHIFT          6
#define GPTA0_SRSCm_LTC7_MASK           0x00000080
#define GPTA0_SRSCm_LTC7_SHIFT          7
#define GPTA0_SRSCm_LTC8_MASK           0x00000100
#define GPTA0_SRSCm_LTC8_SHIFT          8
#define GPTA0_SRSCm_LTC9_MASK           0x00000200
#define GPTA0_SRSCm_LTC9_SHIFT          9
#define GPTA0_SRSCm_LTC10_MASK          0x00000400
#define GPTA0_SRSCm_LTC10_SHIFT         10
#define GPTA0_SRSCm_LTC11_MASK          0x00000800
#define GPTA0_SRSCm_LTC11_SHIFT         11
#define GPTA0_SRSCm_LTC12_MASK          0x00001000
#define GPTA0_SRSCm_LTC12_SHIFT         12
#define GPTA0_SRSCm_LTC13_MASK          0x00002000
#define GPTA0_SRSCm_LTC13_SHIFT         13
#define GPTA0_SRSCm_LTC14_MASK          0x00004000
#define GPTA0_SRSCm_LTC14_SHIFT         14
#define GPTA0_SRSCm_LTC15_MASK          0x00008000
#define GPTA0_SRSCm_LTC15_SHIFT         15
#define GPTA0_SRSCm_LTC16_MASK          0x00010000
#define GPTA0_SRSCm_LTC16_SHIFT         16
#define GPTA0_SRSCm_LTC17_MASK          0x00020000
#define GPTA0_SRSCm_LTC17_SHIFT         17
#define GPTA0_SRSCm_LTC18_MASK          0x00040000
#define GPTA0_SRSCm_LTC18_SHIFT         18
#define GPTA0_SRSCm_LTC19_MASK          0x00080000
#define GPTA0_SRSCm_LTC19_SHIFT         19
#define GPTA0_SRSCm_LTC20_MASK          0x00100000
#define GPTA0_SRSCm_LTC20_SHIFT         20
#define GPTA0_SRSCm_LTC21_MASK          0x00200000
#define GPTA0_SRSCm_LTC21_SHIFT         21
#define GPTA0_SRSCm_LTC22_MASK          0x00400000
#define GPTA0_SRSCm_LTC22_SHIFT         22
#define GPTA0_SRSCm_LTC23_MASK          0x00800000
#define GPTA0_SRSCm_LTC23_SHIFT         23
#define GPTA0_SRSCm_LTC24_MASK          0x01000000
#define GPTA0_SRSCm_LTC24_SHIFT         24
#define GPTA0_SRSCm_LTC25_MASK          0x02000000
#define GPTA0_SRSCm_LTC25_SHIFT         25
#define GPTA0_SRSCm_LTC26_MASK          0x04000000
#define GPTA0_SRSCm_LTC26_SHIFT         26
#define GPTA0_SRSCm_LTC27_MASK          0x08000000
#define GPTA0_SRSCm_LTC27_SHIFT         27
#define GPTA0_SRSCm_LTC28_MASK          0x10000000
#define GPTA0_SRSCm_LTC28_SHIFT         28
#define GPTA0_SRSCm_LTC29_MASK          0x20000000
#define GPTA0_SRSCm_LTC29_SHIFT         29
#define GPTA0_SRSCm_LTC30_MASK          0x40000000
#define GPTA0_SRSCm_LTC30_SHIFT         30
#define GPTA0_SRSCm_LTC31_MASK          0x80000000
#define GPTA0_SRSCm_LTC31_SHIFT         31



/****************** Masks for GPTA0_SRSSm_t **********************/
/*
   GPTA0_SRSS2           "GPTA0 Service Request State Set Register 2"
   GPTA0_SRSS3           "GPTA0 Service Request State Set Register 3"
*/
/**********************************************************/

#define GPTA0_SRSSm_MASK                0xffffffff
#define GPTA0_SRSSm_LTC0_MASK           0x00000001
#define GPTA0_SRSSm_LTC0_SHIFT          0
#define GPTA0_SRSSm_LTC1_MASK           0x00000002
#define GPTA0_SRSSm_LTC1_SHIFT          1
#define GPTA0_SRSSm_LTC2_MASK           0x00000004
#define GPTA0_SRSSm_LTC2_SHIFT          2
#define GPTA0_SRSSm_LTC3_MASK           0x00000008
#define GPTA0_SRSSm_LTC3_SHIFT          3
#define GPTA0_SRSSm_LTC4_MASK           0x00000010
#define GPTA0_SRSSm_LTC4_SHIFT          4
#define GPTA0_SRSSm_LTC5_MASK           0x00000020
#define GPTA0_SRSSm_LTC5_SHIFT          5
#define GPTA0_SRSSm_LTC6_MASK           0x00000040
#define GPTA0_SRSSm_LTC6_SHIFT          6
#define GPTA0_SRSSm_LTC7_MASK           0x00000080
#define GPTA0_SRSSm_LTC7_SHIFT          7
#define GPTA0_SRSSm_LTC8_MASK           0x00000100
#define GPTA0_SRSSm_LTC8_SHIFT          8
#define GPTA0_SRSSm_LTC9_MASK           0x00000200
#define GPTA0_SRSSm_LTC9_SHIFT          9
#define GPTA0_SRSSm_LTC10_MASK          0x00000400
#define GPTA0_SRSSm_LTC10_SHIFT         10
#define GPTA0_SRSSm_LTC11_MASK          0x00000800
#define GPTA0_SRSSm_LTC11_SHIFT         11
#define GPTA0_SRSSm_LTC12_MASK          0x00001000
#define GPTA0_SRSSm_LTC12_SHIFT         12
#define GPTA0_SRSSm_LTC13_MASK          0x00002000
#define GPTA0_SRSSm_LTC13_SHIFT         13
#define GPTA0_SRSSm_LTC14_MASK          0x00004000
#define GPTA0_SRSSm_LTC14_SHIFT         14
#define GPTA0_SRSSm_LTC15_MASK          0x00008000
#define GPTA0_SRSSm_LTC15_SHIFT         15
#define GPTA0_SRSSm_LTC16_MASK          0x00010000
#define GPTA0_SRSSm_LTC16_SHIFT         16
#define GPTA0_SRSSm_LTC17_MASK          0x00020000
#define GPTA0_SRSSm_LTC17_SHIFT         17
#define GPTA0_SRSSm_LTC18_MASK          0x00040000
#define GPTA0_SRSSm_LTC18_SHIFT         18
#define GPTA0_SRSSm_LTC19_MASK          0x00080000
#define GPTA0_SRSSm_LTC19_SHIFT         19
#define GPTA0_SRSSm_LTC20_MASK          0x00100000
#define GPTA0_SRSSm_LTC20_SHIFT         20
#define GPTA0_SRSSm_LTC21_MASK          0x00200000
#define GPTA0_SRSSm_LTC21_SHIFT         21
#define GPTA0_SRSSm_LTC22_MASK          0x00400000
#define GPTA0_SRSSm_LTC22_SHIFT         22
#define GPTA0_SRSSm_LTC23_MASK          0x00800000
#define GPTA0_SRSSm_LTC23_SHIFT         23
#define GPTA0_SRSSm_LTC24_MASK          0x01000000
#define GPTA0_SRSSm_LTC24_SHIFT         24
#define GPTA0_SRSSm_LTC25_MASK          0x02000000
#define GPTA0_SRSSm_LTC25_SHIFT         25
#define GPTA0_SRSSm_LTC26_MASK          0x04000000
#define GPTA0_SRSSm_LTC26_SHIFT         26
#define GPTA0_SRSSm_LTC27_MASK          0x08000000
#define GPTA0_SRSSm_LTC27_SHIFT         27
#define GPTA0_SRSSm_LTC28_MASK          0x10000000
#define GPTA0_SRSSm_LTC28_SHIFT         28
#define GPTA0_SRSSm_LTC29_MASK          0x20000000
#define GPTA0_SRSSm_LTC29_SHIFT         29
#define GPTA0_SRSSm_LTC30_MASK          0x40000000
#define GPTA0_SRSSm_LTC30_SHIFT         30
#define GPTA0_SRSSm_LTC31_MASK          0x80000000
#define GPTA0_SRSSm_LTC31_SHIFT         31




#endif /* _HAVE_TRICORE_GPTA_SHAREMASKS_H_ */

