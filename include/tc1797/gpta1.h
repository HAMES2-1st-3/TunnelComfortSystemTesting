/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "GPTA1" of TriCore TC1797 (286 SFRs) */

#include <tc1797/gpta1/addr.h>

#include <tc1797/gpta1/masks.h>
#include <tc1797/gpta0_gpta1/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1797/gpta1/types.h>
#include <tc1797/gpta0_gpta1/sharetypes.h>

#ifndef _HAVE_TRICORE_GPTA1_H_
#define _HAVE_TRICORE_GPTA1_H_

#include <tricore-abs-noabs.h>

SFR_ABS (GPTA1_CKBCTR, GPTAn_CKBCTR_t, GPTA1_CKBCTR_ADDR); /* "GPTA1 Clock Bus Control Register" */
SFR_ABS (GPTA1_DCMCAV0, GPTAn_DCMCAVm_t, GPTA1_DCMCAV0_ADDR); /* "GPTA1 Duty Cycle Measurement Capture Register 0" */
SFR_ABS (GPTA1_DCMCAV1, GPTAn_DCMCAVm_t, GPTA1_DCMCAV1_ADDR); /* "GPTA1 Duty Cycle Measurement Capture Register 1" */
SFR_ABS (GPTA1_DCMCAV2, GPTAn_DCMCAVm_t, GPTA1_DCMCAV2_ADDR); /* "GPTA1 Duty Cycle Measurement Capture Register 2" */
SFR_ABS (GPTA1_DCMCAV3, GPTAn_DCMCAVm_t, GPTA1_DCMCAV3_ADDR); /* "GPTA1 Duty Cycle Measurement Capture Register 3" */
SFR_ABS (GPTA1_DCMCOV0, GPTAn_DCMCOVm_t, GPTA1_DCMCOV0_ADDR); /* "GPTA1 Duty Cycle Measurement Capture/Compare Register 0" */
SFR_ABS (GPTA1_DCMCOV1, GPTAn_DCMCOVm_t, GPTA1_DCMCOV1_ADDR); /* "GPTA1 Duty Cycle Measurement Capture/Compare Register 1" */
SFR_ABS (GPTA1_DCMCOV2, GPTAn_DCMCOVm_t, GPTA1_DCMCOV2_ADDR); /* "GPTA1 Duty Cycle Measurement Capture/Compare Register 2" */
SFR_ABS (GPTA1_DCMCOV3, GPTAn_DCMCOVm_t, GPTA1_DCMCOV3_ADDR); /* "GPTA1 Duty Cycle Measurement Capture/Compare Register 3" */
SFR_ABS (GPTA1_DCMCTR0, GPTAn_DCMCTRm_t, GPTA1_DCMCTR0_ADDR); /* "GPTA1 Duty Cycle Measurement Control Register 0" */
SFR_ABS (GPTA1_DCMCTR1, GPTAn_DCMCTRm_t, GPTA1_DCMCTR1_ADDR); /* "GPTA1 Duty Cycle Measurement Control Register 1" */
SFR_ABS (GPTA1_DCMCTR2, GPTAn_DCMCTRm_t, GPTA1_DCMCTR2_ADDR); /* "GPTA1 Duty Cycle Measurement Control Register 2" */
SFR_ABS (GPTA1_DCMCTR3, GPTAn_DCMCTRm_t, GPTA1_DCMCTR3_ADDR); /* "GPTA1 Duty Cycle Measurement Control Register 3" */
SFR_ABS (GPTA1_DCMTIM0, GPTAn_DCMTIMm_t, GPTA1_DCMTIM0_ADDR); /* "GPTA1 Duty Cycle Measurement Timer Register 0" */
SFR_ABS (GPTA1_DCMTIM1, GPTAn_DCMTIMm_t, GPTA1_DCMTIM1_ADDR); /* "GPTA1 Duty Cycle Measurement Timer Register 1" */
SFR_ABS (GPTA1_DCMTIM2, GPTAn_DCMTIMm_t, GPTA1_DCMTIM2_ADDR); /* "GPTA1 Duty Cycle Measurement Timer Register 2" */
SFR_ABS (GPTA1_DCMTIM3, GPTAn_DCMTIMm_t, GPTA1_DCMTIM3_ADDR); /* "GPTA1 Duty Cycle Measurement Timer Register 3" */
SFR_ABS (GPTA1_FPCCTR0, GPTAn_FPCCTRm_t, GPTA1_FPCCTR0_ADDR); /* "GPTA1 Filter and Prescaler Cell Control Register 0" */
SFR_ABS (GPTA1_FPCCTR1, GPTAn_FPCCTRm_t, GPTA1_FPCCTR1_ADDR); /* "GPTA1 Filter and Prescaler Cell Control Register 1" */
SFR_ABS (GPTA1_FPCCTR2, GPTAn_FPCCTRm_t, GPTA1_FPCCTR2_ADDR); /* "GPTA1 Filter and Prescaler Cell Control Register 2" */
SFR_ABS (GPTA1_FPCCTR3, GPTAn_FPCCTRm_t, GPTA1_FPCCTR3_ADDR); /* "GPTA1 Filter and Prescaler Cell Control Register 3" */
SFR_ABS (GPTA1_FPCCTR4, GPTAn_FPCCTRm_t, GPTA1_FPCCTR4_ADDR); /* "GPTA1 Filter and Prescaler Cell Control Register 4" */
SFR_ABS (GPTA1_FPCCTR5, GPTAn_FPCCTRm_t, GPTA1_FPCCTR5_ADDR); /* "GPTA1 Filter and Prescaler Cell Control Register 5" */
SFR_ABS (GPTA1_FPCSTAT, GPTAn_FPCSTAT_t, GPTA1_FPCSTAT_ADDR); /* "GPTA1 Filter and Prescaler Cell Status Register" */
SFR_ABS (GPTA1_FPCTIM0, GPTAn_FPCTIMm_t, GPTA1_FPCTIM0_ADDR); /* "GPTA1 Filter and Prescaler Cell Timer Register 0" */
SFR_ABS (GPTA1_FPCTIM1, GPTAn_FPCTIMm_t, GPTA1_FPCTIM1_ADDR); /* "GPTA1 Filter and Prescaler Cell Timer Register 1" */
SFR_ABS (GPTA1_FPCTIM2, GPTAn_FPCTIMm_t, GPTA1_FPCTIM2_ADDR); /* "GPTA1 Filter and Prescaler Cell Timer Register 2" */
SFR_ABS (GPTA1_FPCTIM3, GPTAn_FPCTIMm_t, GPTA1_FPCTIM3_ADDR); /* "GPTA1 Filter and Prescaler Cell Timer Register 3" */
SFR_ABS (GPTA1_FPCTIM4, GPTAn_FPCTIMm_t, GPTA1_FPCTIM4_ADDR); /* "GPTA1 Filter and Prescaler Cell Timer Register 4" */
SFR_ABS (GPTA1_FPCTIM5, GPTAn_FPCTIMm_t, GPTA1_FPCTIM5_ADDR); /* "GPTA1 Filter and Prescaler Cell Timer Register 5" */
SFR_ABS (GPTA1_GTCCTR00, GPTAn_GTCCTRm_t, GPTA1_GTCCTR00_ADDR); /* "GPTA1 Global Timer Cell Control Register 00" */
SFR_ABS (GPTA1_GTCCTR01, GPTAn_GTCCTRm_t, GPTA1_GTCCTR01_ADDR); /* "GPTA1 Global Timer Cell Control Register 01" */
SFR_ABS (GPTA1_GTCCTR02, GPTAn_GTCCTRm_t, GPTA1_GTCCTR02_ADDR); /* "GPTA1 Global Timer Cell Control Register 02" */
SFR_ABS (GPTA1_GTCCTR03, GPTAn_GTCCTRm_t, GPTA1_GTCCTR03_ADDR); /* "GPTA1 Global Timer Cell Control Register 03" */
SFR_ABS (GPTA1_GTCCTR04, GPTAn_GTCCTRm_t, GPTA1_GTCCTR04_ADDR); /* "GPTA1 Global Timer Cell Control Register 04" */
SFR_ABS (GPTA1_GTCCTR05, GPTAn_GTCCTRm_t, GPTA1_GTCCTR05_ADDR); /* "GPTA1 Global Timer Cell Control Register 05" */
SFR_ABS (GPTA1_GTCCTR06, GPTAn_GTCCTRm_t, GPTA1_GTCCTR06_ADDR); /* "GPTA1 Global Timer Cell Control Register 06" */
SFR_ABS (GPTA1_GTCCTR07, GPTAn_GTCCTRm_t, GPTA1_GTCCTR07_ADDR); /* "GPTA1 Global Timer Cell Control Register 07" */
SFR_ABS (GPTA1_GTCCTR08, GPTAn_GTCCTRm_t, GPTA1_GTCCTR08_ADDR); /* "GPTA1 Global Timer Cell Control Register 08" */
SFR_ABS (GPTA1_GTCCTR09, GPTAn_GTCCTRm_t, GPTA1_GTCCTR09_ADDR); /* "GPTA1 Global Timer Cell Control Register 09" */
SFR_ABS (GPTA1_GTCCTR10, GPTAn_GTCCTRm_t, GPTA1_GTCCTR10_ADDR); /* "GPTA1 Global Timer Cell Control Register 10" */
SFR_ABS (GPTA1_GTCCTR11, GPTAn_GTCCTRm_t, GPTA1_GTCCTR11_ADDR); /* "GPTA1 Global Timer Cell Control Register 11" */
SFR_ABS (GPTA1_GTCCTR12, GPTAn_GTCCTRm_t, GPTA1_GTCCTR12_ADDR); /* "GPTA1 Global Timer Cell Control Register 12" */
SFR_ABS (GPTA1_GTCCTR13, GPTAn_GTCCTRm_t, GPTA1_GTCCTR13_ADDR); /* "GPTA1 Global Timer Cell Control Register 13" */
SFR_ABS (GPTA1_GTCCTR14, GPTAn_GTCCTRm_t, GPTA1_GTCCTR14_ADDR); /* "GPTA1 Global Timer Cell Control Register 14" */
SFR_ABS (GPTA1_GTCCTR15, GPTAn_GTCCTRm_t, GPTA1_GTCCTR15_ADDR); /* "GPTA1 Global Timer Cell Control Register 15" */
SFR_ABS (GPTA1_GTCCTR16, GPTAn_GTCCTRm_t, GPTA1_GTCCTR16_ADDR); /* "GPTA1 Global Timer Cell Control Register 16" */
SFR_ABS (GPTA1_GTCCTR17, GPTAn_GTCCTRm_t, GPTA1_GTCCTR17_ADDR); /* "GPTA1 Global Timer Cell Control Register 17" */
SFR_ABS (GPTA1_GTCCTR18, GPTAn_GTCCTRm_t, GPTA1_GTCCTR18_ADDR); /* "GPTA1 Global Timer Cell Control Register 18" */
SFR_ABS (GPTA1_GTCCTR19, GPTAn_GTCCTRm_t, GPTA1_GTCCTR19_ADDR); /* "GPTA1 Global Timer Cell Control Register 19" */
SFR_ABS (GPTA1_GTCCTR20, GPTAn_GTCCTRm_t, GPTA1_GTCCTR20_ADDR); /* "GPTA1 Global Timer Cell Control Register 20" */
SFR_ABS (GPTA1_GTCCTR21, GPTAn_GTCCTRm_t, GPTA1_GTCCTR21_ADDR); /* "GPTA1 Global Timer Cell Control Register 21" */
SFR_ABS (GPTA1_GTCCTR22, GPTAn_GTCCTRm_t, GPTA1_GTCCTR22_ADDR); /* "GPTA1 Global Timer Cell Control Register 22" */
SFR_ABS (GPTA1_GTCCTR23, GPTAn_GTCCTRm_t, GPTA1_GTCCTR23_ADDR); /* "GPTA1 Global Timer Cell Control Register 23" */
SFR_ABS (GPTA1_GTCCTR24, GPTAn_GTCCTRm_t, GPTA1_GTCCTR24_ADDR); /* "GPTA1 Global Timer Cell Control Register 24" */
SFR_ABS (GPTA1_GTCCTR25, GPTAn_GTCCTRm_t, GPTA1_GTCCTR25_ADDR); /* "GPTA1 Global Timer Cell Control Register 25" */
SFR_ABS (GPTA1_GTCCTR26, GPTAn_GTCCTRm_t, GPTA1_GTCCTR26_ADDR); /* "GPTA1 Global Timer Cell Control Register 26" */
SFR_ABS (GPTA1_GTCCTR27, GPTAn_GTCCTRm_t, GPTA1_GTCCTR27_ADDR); /* "GPTA1 Global Timer Cell Control Register 27" */
SFR_ABS (GPTA1_GTCCTR28, GPTAn_GTCCTRm_t, GPTA1_GTCCTR28_ADDR); /* "GPTA1 Global Timer Cell Control Register 28" */
SFR_ABS (GPTA1_GTCCTR29, GPTAn_GTCCTRm_t, GPTA1_GTCCTR29_ADDR); /* "GPTA1 Global Timer Cell Control Register 29" */
SFR_ABS (GPTA1_GTCCTR30, GPTAn_GTCCTRm_t, GPTA1_GTCCTR30_ADDR); /* "GPTA1 Global Timer Cell Control Register 30" */
SFR_ABS (GPTA1_GTCCTR31, GPTAn_GTCCTRm_t, GPTA1_GTCCTR31_ADDR); /* "GPTA1 Global Timer Cell Control Register 31" */
SFR_ABS (GPTA1_GTCTR0, GPTAn_GTCTRm_t, GPTA1_GTCTR0_ADDR); /* "GPTA1 Global Timer Control Register 0" */
SFR_ABS (GPTA1_GTCTR1, GPTAn_GTCTRm_t, GPTA1_GTCTR1_ADDR); /* "GPTA1 Global Timer Control Register 1" */
SFR_ABS (GPTA1_GTCXR00, GPTAn_GTCXRm_t, GPTA1_GTCXR00_ADDR); /* "GPTA1 Global Timer Cell X Register 00" */
SFR_ABS (GPTA1_GTCXR01, GPTAn_GTCXRm_t, GPTA1_GTCXR01_ADDR); /* "GPTA1 Global Timer Cell X Register 01" */
SFR_ABS (GPTA1_GTCXR02, GPTAn_GTCXRm_t, GPTA1_GTCXR02_ADDR); /* "GPTA1 Global Timer Cell X Register 02" */
SFR_ABS (GPTA1_GTCXR03, GPTAn_GTCXRm_t, GPTA1_GTCXR03_ADDR); /* "GPTA1 Global Timer Cell X Register 03" */
SFR_ABS (GPTA1_GTCXR04, GPTAn_GTCXRm_t, GPTA1_GTCXR04_ADDR); /* "GPTA1 Global Timer Cell X Register 04" */
SFR_ABS (GPTA1_GTCXR05, GPTAn_GTCXRm_t, GPTA1_GTCXR05_ADDR); /* "GPTA1 Global Timer Cell X Register 05" */
SFR_ABS (GPTA1_GTCXR06, GPTAn_GTCXRm_t, GPTA1_GTCXR06_ADDR); /* "GPTA1 Global Timer Cell X Register 06" */
SFR_ABS (GPTA1_GTCXR07, GPTAn_GTCXRm_t, GPTA1_GTCXR07_ADDR); /* "GPTA1 Global Timer Cell X Register 07" */
SFR_ABS (GPTA1_GTCXR08, GPTAn_GTCXRm_t, GPTA1_GTCXR08_ADDR); /* "GPTA1 Global Timer Cell X Register 08" */
SFR_ABS (GPTA1_GTCXR09, GPTAn_GTCXRm_t, GPTA1_GTCXR09_ADDR); /* "GPTA1 Global Timer Cell X Register 09" */
SFR_ABS (GPTA1_GTCXR10, GPTAn_GTCXRm_t, GPTA1_GTCXR10_ADDR); /* "GPTA1 Global Timer Cell X Register 10" */
SFR_ABS (GPTA1_GTCXR11, GPTAn_GTCXRm_t, GPTA1_GTCXR11_ADDR); /* "GPTA1 Global Timer Cell X Register 11" */
SFR_ABS (GPTA1_GTCXR12, GPTAn_GTCXRm_t, GPTA1_GTCXR12_ADDR); /* "GPTA1 Global Timer Cell X Register 12" */
SFR_ABS (GPTA1_GTCXR13, GPTAn_GTCXRm_t, GPTA1_GTCXR13_ADDR); /* "GPTA1 Global Timer Cell X Register 13" */
SFR_ABS (GPTA1_GTCXR14, GPTAn_GTCXRm_t, GPTA1_GTCXR14_ADDR); /* "GPTA1 Global Timer Cell X Register 14" */
SFR_ABS (GPTA1_GTCXR15, GPTAn_GTCXRm_t, GPTA1_GTCXR15_ADDR); /* "GPTA1 Global Timer Cell X Register 15" */
SFR_ABS (GPTA1_GTCXR16, GPTAn_GTCXRm_t, GPTA1_GTCXR16_ADDR); /* "GPTA1 Global Timer Cell X Register 16" */
SFR_ABS (GPTA1_GTCXR17, GPTAn_GTCXRm_t, GPTA1_GTCXR17_ADDR); /* "GPTA1 Global Timer Cell X Register 17" */
SFR_ABS (GPTA1_GTCXR18, GPTAn_GTCXRm_t, GPTA1_GTCXR18_ADDR); /* "GPTA1 Global Timer Cell X Register 18" */
SFR_ABS (GPTA1_GTCXR19, GPTAn_GTCXRm_t, GPTA1_GTCXR19_ADDR); /* "GPTA1 Global Timer Cell X Register 19" */
SFR_ABS (GPTA1_GTCXR20, GPTAn_GTCXRm_t, GPTA1_GTCXR20_ADDR); /* "GPTA1 Global Timer Cell X Register 20" */
SFR_ABS (GPTA1_GTCXR21, GPTAn_GTCXRm_t, GPTA1_GTCXR21_ADDR); /* "GPTA1 Global Timer Cell X Register 21" */
SFR_ABS (GPTA1_GTCXR22, GPTAn_GTCXRm_t, GPTA1_GTCXR22_ADDR); /* "GPTA1 Global Timer Cell X Register 22" */
SFR_ABS (GPTA1_GTCXR23, GPTAn_GTCXRm_t, GPTA1_GTCXR23_ADDR); /* "GPTA1 Global Timer Cell X Register 23" */
SFR_ABS (GPTA1_GTCXR24, GPTAn_GTCXRm_t, GPTA1_GTCXR24_ADDR); /* "GPTA1 Global Timer Cell X Register 24" */
SFR_ABS (GPTA1_GTCXR25, GPTAn_GTCXRm_t, GPTA1_GTCXR25_ADDR); /* "GPTA1 Global Timer Cell X Register 25" */
SFR_ABS (GPTA1_GTCXR26, GPTAn_GTCXRm_t, GPTA1_GTCXR26_ADDR); /* "GPTA1 Global Timer Cell X Register 26" */
SFR_ABS (GPTA1_GTCXR27, GPTAn_GTCXRm_t, GPTA1_GTCXR27_ADDR); /* "GPTA1 Global Timer Cell X Register 27" */
SFR_ABS (GPTA1_GTCXR28, GPTAn_GTCXRm_t, GPTA1_GTCXR28_ADDR); /* "GPTA1 Global Timer Cell X Register 28" */
SFR_ABS (GPTA1_GTCXR29, GPTAn_GTCXRm_t, GPTA1_GTCXR29_ADDR); /* "GPTA1 Global Timer Cell X Register 29" */
SFR_ABS (GPTA1_GTCXR30, GPTAn_GTCXRm_t, GPTA1_GTCXR30_ADDR); /* "GPTA1 Global Timer Cell X Register 30" */
SFR_ABS (GPTA1_GTCXR31, GPTAn_GTCXRm_t, GPTA1_GTCXR31_ADDR); /* "GPTA1 Global Timer Cell X Register 31" */
SFR_ABS (GPTA1_GTREV0, GPTAn_GTREVm_t, GPTA1_GTREV0_ADDR); /* "GPTA1 Global Timer Reload Value Register 0" */
SFR_ABS (GPTA1_GTREV1, GPTAn_GTREVm_t, GPTA1_GTREV1_ADDR); /* "GPTA1 Global Timer Reload Value Register 1" */
SFR_ABS (GPTA1_GTTIM0, GPTAn_GTTIMm_t, GPTA1_GTTIM0_ADDR); /* "GPTA1 Global Timer Register 0" */
SFR_ABS (GPTA1_GTTIM1, GPTAn_GTTIMm_t, GPTA1_GTTIM1_ADDR); /* "GPTA1 Global Timer Register 1" */
SFR_ABS (GPTA1_ID, GPTAn_ID_t, GPTA1_ID_ADDR);    /* "GPTA1 Identification Register" */
SFR_ABS (GPTA1_LTCCTR00, GPTAn_LTCCTRm_t, GPTA1_LTCCTR00_ADDR); /* "GPTA1 Local Timer Cell Control Register 00" */
SFR_ABS (GPTA1_LTCCTR01, GPTAn_LTCCTRm_t, GPTA1_LTCCTR01_ADDR); /* "GPTA1 Local Timer Cell Control Register 01" */
SFR_ABS (GPTA1_LTCCTR02, GPTAn_LTCCTRm_t, GPTA1_LTCCTR02_ADDR); /* "GPTA1 Local Timer Cell Control Register 02" */
SFR_ABS (GPTA1_LTCCTR03, GPTAn_LTCCTRm_t, GPTA1_LTCCTR03_ADDR); /* "GPTA1 Local Timer Cell Control Register 03" */
SFR_ABS (GPTA1_LTCCTR04, GPTAn_LTCCTRm_t, GPTA1_LTCCTR04_ADDR); /* "GPTA1 Local Timer Cell Control Register 04" */
SFR_ABS (GPTA1_LTCCTR05, GPTAn_LTCCTRm_t, GPTA1_LTCCTR05_ADDR); /* "GPTA1 Local Timer Cell Control Register 05" */
SFR_ABS (GPTA1_LTCCTR06, GPTAn_LTCCTRm_t, GPTA1_LTCCTR06_ADDR); /* "GPTA1 Local Timer Cell Control Register 06" */
SFR_ABS (GPTA1_LTCCTR07, GPTAn_LTCCTRm_t, GPTA1_LTCCTR07_ADDR); /* "GPTA1 Local Timer Cell Control Register 07" */
SFR_ABS (GPTA1_LTCCTR08, GPTAn_LTCCTRm_t, GPTA1_LTCCTR08_ADDR); /* "GPTA1 Local Timer Cell Control Register 08" */
SFR_ABS (GPTA1_LTCCTR09, GPTAn_LTCCTRm_t, GPTA1_LTCCTR09_ADDR); /* "GPTA1 Local Timer Cell Control Register 09" */
SFR_ABS (GPTA1_LTCCTR10, GPTAn_LTCCTRm_t, GPTA1_LTCCTR10_ADDR); /* "GPTA1 Local Timer Cell Control Register 10" */
SFR_ABS (GPTA1_LTCCTR11, GPTAn_LTCCTRm_t, GPTA1_LTCCTR11_ADDR); /* "GPTA1 Local Timer Cell Control Register 11" */
SFR_ABS (GPTA1_LTCCTR12, GPTAn_LTCCTRm_t, GPTA1_LTCCTR12_ADDR); /* "GPTA1 Local Timer Cell Control Register 12" */
SFR_ABS (GPTA1_LTCCTR13, GPTAn_LTCCTRm_t, GPTA1_LTCCTR13_ADDR); /* "GPTA1 Local Timer Cell Control Register 13" */
SFR_ABS (GPTA1_LTCCTR14, GPTAn_LTCCTRm_t, GPTA1_LTCCTR14_ADDR); /* "GPTA1 Local Timer Cell Control Register 14" */
SFR_ABS (GPTA1_LTCCTR15, GPTAn_LTCCTRm_t, GPTA1_LTCCTR15_ADDR); /* "GPTA1 Local Timer Cell Control Register 15" */
SFR_ABS (GPTA1_LTCCTR16, GPTAn_LTCCTRm_t, GPTA1_LTCCTR16_ADDR); /* "GPTA1 Local Timer Cell Control Register 16" */
SFR_ABS (GPTA1_LTCCTR17, GPTAn_LTCCTRm_t, GPTA1_LTCCTR17_ADDR); /* "GPTA1 Local Timer Cell Control Register 17" */
SFR_ABS (GPTA1_LTCCTR18, GPTAn_LTCCTRm_t, GPTA1_LTCCTR18_ADDR); /* "GPTA1 Local Timer Cell Control Register 18" */
SFR_ABS (GPTA1_LTCCTR19, GPTAn_LTCCTRm_t, GPTA1_LTCCTR19_ADDR); /* "GPTA1 Local Timer Cell Control Register 19" */
SFR_ABS (GPTA1_LTCCTR20, GPTAn_LTCCTRm_t, GPTA1_LTCCTR20_ADDR); /* "GPTA1 Local Timer Cell Control Register 20" */
SFR_ABS (GPTA1_LTCCTR21, GPTAn_LTCCTRm_t, GPTA1_LTCCTR21_ADDR); /* "GPTA1 Local Timer Cell Control Register 21" */
SFR_ABS (GPTA1_LTCCTR22, GPTAn_LTCCTRm_t, GPTA1_LTCCTR22_ADDR); /* "GPTA1 Local Timer Cell Control Register 22" */
SFR_ABS (GPTA1_LTCCTR23, GPTAn_LTCCTRm_t, GPTA1_LTCCTR23_ADDR); /* "GPTA1 Local Timer Cell Control Register 23" */
SFR_ABS (GPTA1_LTCCTR24, GPTAn_LTCCTRm_t, GPTA1_LTCCTR24_ADDR); /* "GPTA1 Local Timer Cell Control Register 24" */
SFR_ABS (GPTA1_LTCCTR25, GPTAn_LTCCTRm_t, GPTA1_LTCCTR25_ADDR); /* "GPTA1 Local Timer Cell Control Register 25" */
SFR_ABS (GPTA1_LTCCTR26, GPTAn_LTCCTRm_t, GPTA1_LTCCTR26_ADDR); /* "GPTA1 Local Timer Cell Control Register 26" */
SFR_ABS (GPTA1_LTCCTR27, GPTAn_LTCCTRm_t, GPTA1_LTCCTR27_ADDR); /* "GPTA1 Local Timer Cell Control Register 27" */
SFR_ABS (GPTA1_LTCCTR28, GPTAn_LTCCTRm_t, GPTA1_LTCCTR28_ADDR); /* "GPTA1 Local Timer Cell Control Register 28" */
SFR_ABS (GPTA1_LTCCTR29, GPTAn_LTCCTRm_t, GPTA1_LTCCTR29_ADDR); /* "GPTA1 Local Timer Cell Control Register 29" */
SFR_ABS (GPTA1_LTCCTR30, GPTAn_LTCCTRm_t, GPTA1_LTCCTR30_ADDR); /* "GPTA1 Local Timer Cell Control Register 30" */
SFR_ABS (GPTA1_LTCCTR31, GPTAn_LTCCTRm_t, GPTA1_LTCCTR31_ADDR); /* "GPTA1 Local Timer Cell Control Register 31" */
SFR_ABS (GPTA1_LTCCTR32, GPTAn_LTCCTRm_t, GPTA1_LTCCTR32_ADDR); /* "GPTA1 Local Timer Cell Control Register 32" */
SFR_ABS (GPTA1_LTCCTR33, GPTAn_LTCCTRm_t, GPTA1_LTCCTR33_ADDR); /* "GPTA1 Local Timer Cell Control Register 33" */
SFR_ABS (GPTA1_LTCCTR34, GPTAn_LTCCTRm_t, GPTA1_LTCCTR34_ADDR); /* "GPTA1 Local Timer Cell Control Register 34" */
SFR_ABS (GPTA1_LTCCTR35, GPTAn_LTCCTRm_t, GPTA1_LTCCTR35_ADDR); /* "GPTA1 Local Timer Cell Control Register 35" */
SFR_ABS (GPTA1_LTCCTR36, GPTAn_LTCCTRm_t, GPTA1_LTCCTR36_ADDR); /* "GPTA1 Local Timer Cell Control Register 36" */
SFR_ABS (GPTA1_LTCCTR37, GPTAn_LTCCTRm_t, GPTA1_LTCCTR37_ADDR); /* "GPTA1 Local Timer Cell Control Register 37" */
SFR_ABS (GPTA1_LTCCTR38, GPTAn_LTCCTRm_t, GPTA1_LTCCTR38_ADDR); /* "GPTA1 Local Timer Cell Control Register 38" */
SFR_ABS (GPTA1_LTCCTR39, GPTAn_LTCCTRm_t, GPTA1_LTCCTR39_ADDR); /* "GPTA1 Local Timer Cell Control Register 39" */
SFR_ABS (GPTA1_LTCCTR40, GPTAn_LTCCTRm_t, GPTA1_LTCCTR40_ADDR); /* "GPTA1 Local Timer Cell Control Register 40" */
SFR_ABS (GPTA1_LTCCTR41, GPTAn_LTCCTRm_t, GPTA1_LTCCTR41_ADDR); /* "GPTA1 Local Timer Cell Control Register 41" */
SFR_ABS (GPTA1_LTCCTR42, GPTAn_LTCCTRm_t, GPTA1_LTCCTR42_ADDR); /* "GPTA1 Local Timer Cell Control Register 42" */
SFR_ABS (GPTA1_LTCCTR43, GPTAn_LTCCTRm_t, GPTA1_LTCCTR43_ADDR); /* "GPTA1 Local Timer Cell Control Register 43" */
SFR_ABS (GPTA1_LTCCTR44, GPTAn_LTCCTRm_t, GPTA1_LTCCTR44_ADDR); /* "GPTA1 Local Timer Cell Control Register 44" */
SFR_ABS (GPTA1_LTCCTR45, GPTAn_LTCCTRm_t, GPTA1_LTCCTR45_ADDR); /* "GPTA1 Local Timer Cell Control Register 45" */
SFR_ABS (GPTA1_LTCCTR46, GPTAn_LTCCTRm_t, GPTA1_LTCCTR46_ADDR); /* "GPTA1 Local Timer Cell Control Register 46" */
SFR_ABS (GPTA1_LTCCTR47, GPTAn_LTCCTRm_t, GPTA1_LTCCTR47_ADDR); /* "GPTA1 Local Timer Cell Control Register 47" */
SFR_ABS (GPTA1_LTCCTR48, GPTAn_LTCCTRm_t, GPTA1_LTCCTR48_ADDR); /* "GPTA1 Local Timer Cell Control Register 48" */
SFR_ABS (GPTA1_LTCCTR49, GPTAn_LTCCTRm_t, GPTA1_LTCCTR49_ADDR); /* "GPTA1 Local Timer Cell Control Register 49" */
SFR_ABS (GPTA1_LTCCTR50, GPTAn_LTCCTRm_t, GPTA1_LTCCTR50_ADDR); /* "GPTA1 Local Timer Cell Control Register 50" */
SFR_ABS (GPTA1_LTCCTR51, GPTAn_LTCCTRm_t, GPTA1_LTCCTR51_ADDR); /* "GPTA1 Local Timer Cell Control Register 51" */
SFR_ABS (GPTA1_LTCCTR52, GPTAn_LTCCTRm_t, GPTA1_LTCCTR52_ADDR); /* "GPTA1 Local Timer Cell Control Register 52" */
SFR_ABS (GPTA1_LTCCTR53, GPTAn_LTCCTRm_t, GPTA1_LTCCTR53_ADDR); /* "GPTA1 Local Timer Cell Control Register 53" */
SFR_ABS (GPTA1_LTCCTR54, GPTAn_LTCCTRm_t, GPTA1_LTCCTR54_ADDR); /* "GPTA1 Local Timer Cell Control Register 54" */
SFR_ABS (GPTA1_LTCCTR55, GPTAn_LTCCTRm_t, GPTA1_LTCCTR55_ADDR); /* "GPTA1 Local Timer Cell Control Register 55" */
SFR_ABS (GPTA1_LTCCTR56, GPTAn_LTCCTRm_t, GPTA1_LTCCTR56_ADDR); /* "GPTA1 Local Timer Cell Control Register 56" */
SFR_ABS (GPTA1_LTCCTR57, GPTAn_LTCCTRm_t, GPTA1_LTCCTR57_ADDR); /* "GPTA1 Local Timer Cell Control Register 57" */
SFR_ABS (GPTA1_LTCCTR58, GPTAn_LTCCTRm_t, GPTA1_LTCCTR58_ADDR); /* "GPTA1 Local Timer Cell Control Register 58" */
SFR_ABS (GPTA1_LTCCTR59, GPTAn_LTCCTRm_t, GPTA1_LTCCTR59_ADDR); /* "GPTA1 Local Timer Cell Control Register 59" */
SFR_ABS (GPTA1_LTCCTR60, GPTAn_LTCCTRm_t, GPTA1_LTCCTR60_ADDR); /* "GPTA1 Local Timer Cell Control Register 60" */
SFR_ABS (GPTA1_LTCCTR61, GPTAn_LTCCTRm_t, GPTA1_LTCCTR61_ADDR); /* "GPTA1 Local Timer Cell Control Register 61" */
SFR_ABS (GPTA1_LTCCTR62, GPTAn_LTCCTRm_t, GPTA1_LTCCTR62_ADDR); /* "GPTA1 Local Timer Cell Control Register 62" */
SFR_ABS (GPTA1_LTCCTR63, GPTAn_LTCCTR63_t, GPTA1_LTCCTR63_ADDR); /* "GPTA1 Local Timer Cell Control Register 63" */
SFR_ABS (GPTA1_LTCXR00, GPTAn_LTCXRm_t, GPTA1_LTCXR00_ADDR); /* "GPTA1 Local Timer Cell X Register 00" */
SFR_ABS (GPTA1_LTCXR01, GPTAn_LTCXRm_t, GPTA1_LTCXR01_ADDR); /* "GPTA1 Local Timer Cell X Register 01" */
SFR_ABS (GPTA1_LTCXR02, GPTAn_LTCXRm_t, GPTA1_LTCXR02_ADDR); /* "GPTA1 Local Timer Cell X Register 02" */
SFR_ABS (GPTA1_LTCXR03, GPTAn_LTCXRm_t, GPTA1_LTCXR03_ADDR); /* "GPTA1 Local Timer Cell X Register 03" */
SFR_ABS (GPTA1_LTCXR04, GPTAn_LTCXRm_t, GPTA1_LTCXR04_ADDR); /* "GPTA1 Local Timer Cell X Register 04" */
SFR_ABS (GPTA1_LTCXR05, GPTAn_LTCXRm_t, GPTA1_LTCXR05_ADDR); /* "GPTA1 Local Timer Cell X Register 05" */
SFR_ABS (GPTA1_LTCXR06, GPTAn_LTCXRm_t, GPTA1_LTCXR06_ADDR); /* "GPTA1 Local Timer Cell X Register 06" */
SFR_ABS (GPTA1_LTCXR07, GPTAn_LTCXRm_t, GPTA1_LTCXR07_ADDR); /* "GPTA1 Local Timer Cell X Register 07" */
SFR_ABS (GPTA1_LTCXR08, GPTAn_LTCXRm_t, GPTA1_LTCXR08_ADDR); /* "GPTA1 Local Timer Cell X Register 08" */
SFR_ABS (GPTA1_LTCXR09, GPTAn_LTCXRm_t, GPTA1_LTCXR09_ADDR); /* "GPTA1 Local Timer Cell X Register 09" */
SFR_ABS (GPTA1_LTCXR10, GPTAn_LTCXRm_t, GPTA1_LTCXR10_ADDR); /* "GPTA1 Local Timer Cell X Register 10" */
SFR_ABS (GPTA1_LTCXR11, GPTAn_LTCXRm_t, GPTA1_LTCXR11_ADDR); /* "GPTA1 Local Timer Cell X Register 11" */
SFR_ABS (GPTA1_LTCXR12, GPTAn_LTCXRm_t, GPTA1_LTCXR12_ADDR); /* "GPTA1 Local Timer Cell X Register 12" */
SFR_ABS (GPTA1_LTCXR13, GPTAn_LTCXRm_t, GPTA1_LTCXR13_ADDR); /* "GPTA1 Local Timer Cell X Register 13" */
SFR_ABS (GPTA1_LTCXR14, GPTAn_LTCXRm_t, GPTA1_LTCXR14_ADDR); /* "GPTA1 Local Timer Cell X Register 14" */
SFR_ABS (GPTA1_LTCXR15, GPTAn_LTCXRm_t, GPTA1_LTCXR15_ADDR); /* "GPTA1 Local Timer Cell X Register 15" */
SFR_ABS (GPTA1_LTCXR16, GPTAn_LTCXRm_t, GPTA1_LTCXR16_ADDR); /* "GPTA1 Local Timer Cell X Register 16" */
SFR_ABS (GPTA1_LTCXR17, GPTAn_LTCXRm_t, GPTA1_LTCXR17_ADDR); /* "GPTA1 Local Timer Cell X Register 17" */
SFR_ABS (GPTA1_LTCXR18, GPTAn_LTCXRm_t, GPTA1_LTCXR18_ADDR); /* "GPTA1 Local Timer Cell X Register 18" */
SFR_ABS (GPTA1_LTCXR19, GPTAn_LTCXRm_t, GPTA1_LTCXR19_ADDR); /* "GPTA1 Local Timer Cell X Register 19" */
SFR_ABS (GPTA1_LTCXR20, GPTAn_LTCXRm_t, GPTA1_LTCXR20_ADDR); /* "GPTA1 Local Timer Cell X Register 20" */
SFR_ABS (GPTA1_LTCXR21, GPTAn_LTCXRm_t, GPTA1_LTCXR21_ADDR); /* "GPTA1 Local Timer Cell X Register 21" */
SFR_ABS (GPTA1_LTCXR22, GPTAn_LTCXRm_t, GPTA1_LTCXR22_ADDR); /* "GPTA1 Local Timer Cell X Register 22" */
SFR_ABS (GPTA1_LTCXR23, GPTAn_LTCXRm_t, GPTA1_LTCXR23_ADDR); /* "GPTA1 Local Timer Cell X Register 23" */
SFR_ABS (GPTA1_LTCXR24, GPTAn_LTCXRm_t, GPTA1_LTCXR24_ADDR); /* "GPTA1 Local Timer Cell X Register 24" */
SFR_ABS (GPTA1_LTCXR25, GPTAn_LTCXRm_t, GPTA1_LTCXR25_ADDR); /* "GPTA1 Local Timer Cell X Register 25" */
SFR_ABS (GPTA1_LTCXR26, GPTAn_LTCXRm_t, GPTA1_LTCXR26_ADDR); /* "GPTA1 Local Timer Cell X Register 26" */
SFR_ABS (GPTA1_LTCXR27, GPTAn_LTCXRm_t, GPTA1_LTCXR27_ADDR); /* "GPTA1 Local Timer Cell X Register 27" */
SFR_ABS (GPTA1_LTCXR28, GPTAn_LTCXRm_t, GPTA1_LTCXR28_ADDR); /* "GPTA1 Local Timer Cell X Register 28" */
SFR_ABS (GPTA1_LTCXR29, GPTAn_LTCXRm_t, GPTA1_LTCXR29_ADDR); /* "GPTA1 Local Timer Cell X Register 29" */
SFR_ABS (GPTA1_LTCXR30, GPTAn_LTCXRm_t, GPTA1_LTCXR30_ADDR); /* "GPTA1 Local Timer Cell X Register 30" */
SFR_ABS (GPTA1_LTCXR31, GPTAn_LTCXRm_t, GPTA1_LTCXR31_ADDR); /* "GPTA1 Local Timer Cell X Register 31" */
SFR_ABS (GPTA1_LTCXR32, GPTAn_LTCXRm_t, GPTA1_LTCXR32_ADDR); /* "GPTA1 Local Timer Cell X Register 32" */
SFR_ABS (GPTA1_LTCXR33, GPTAn_LTCXRm_t, GPTA1_LTCXR33_ADDR); /* "GPTA1 Local Timer Cell X Register 33" */
SFR_ABS (GPTA1_LTCXR34, GPTAn_LTCXRm_t, GPTA1_LTCXR34_ADDR); /* "GPTA1 Local Timer Cell X Register 34" */
SFR_ABS (GPTA1_LTCXR35, GPTAn_LTCXRm_t, GPTA1_LTCXR35_ADDR); /* "GPTA1 Local Timer Cell X Register 35" */
SFR_ABS (GPTA1_LTCXR36, GPTAn_LTCXRm_t, GPTA1_LTCXR36_ADDR); /* "GPTA1 Local Timer Cell X Register 36" */
SFR_ABS (GPTA1_LTCXR37, GPTAn_LTCXRm_t, GPTA1_LTCXR37_ADDR); /* "GPTA1 Local Timer Cell X Register 37" */
SFR_ABS (GPTA1_LTCXR38, GPTAn_LTCXRm_t, GPTA1_LTCXR38_ADDR); /* "GPTA1 Local Timer Cell X Register 38" */
SFR_ABS (GPTA1_LTCXR39, GPTAn_LTCXRm_t, GPTA1_LTCXR39_ADDR); /* "GPTA1 Local Timer Cell X Register 39" */
SFR_ABS (GPTA1_LTCXR40, GPTAn_LTCXRm_t, GPTA1_LTCXR40_ADDR); /* "GPTA1 Local Timer Cell X Register 40" */
SFR_ABS (GPTA1_LTCXR41, GPTAn_LTCXRm_t, GPTA1_LTCXR41_ADDR); /* "GPTA1 Local Timer Cell X Register 41" */
SFR_ABS (GPTA1_LTCXR42, GPTAn_LTCXRm_t, GPTA1_LTCXR42_ADDR); /* "GPTA1 Local Timer Cell X Register 42" */
SFR_ABS (GPTA1_LTCXR43, GPTAn_LTCXRm_t, GPTA1_LTCXR43_ADDR); /* "GPTA1 Local Timer Cell X Register 43" */
SFR_ABS (GPTA1_LTCXR44, GPTAn_LTCXRm_t, GPTA1_LTCXR44_ADDR); /* "GPTA1 Local Timer Cell X Register 44" */
SFR_ABS (GPTA1_LTCXR45, GPTAn_LTCXRm_t, GPTA1_LTCXR45_ADDR); /* "GPTA1 Local Timer Cell X Register 45" */
SFR_ABS (GPTA1_LTCXR46, GPTAn_LTCXRm_t, GPTA1_LTCXR46_ADDR); /* "GPTA1 Local Timer Cell X Register 46" */
SFR_ABS (GPTA1_LTCXR47, GPTAn_LTCXRm_t, GPTA1_LTCXR47_ADDR); /* "GPTA1 Local Timer Cell X Register 47" */
SFR_ABS (GPTA1_LTCXR48, GPTAn_LTCXRm_t, GPTA1_LTCXR48_ADDR); /* "GPTA1 Local Timer Cell X Register 48" */
SFR_ABS (GPTA1_LTCXR49, GPTAn_LTCXRm_t, GPTA1_LTCXR49_ADDR); /* "GPTA1 Local Timer Cell X Register 49" */
SFR_ABS (GPTA1_LTCXR50, GPTAn_LTCXRm_t, GPTA1_LTCXR50_ADDR); /* "GPTA1 Local Timer Cell X Register 50" */
SFR_ABS (GPTA1_LTCXR51, GPTAn_LTCXRm_t, GPTA1_LTCXR51_ADDR); /* "GPTA1 Local Timer Cell X Register 51" */
SFR_ABS (GPTA1_LTCXR52, GPTAn_LTCXRm_t, GPTA1_LTCXR52_ADDR); /* "GPTA1 Local Timer Cell X Register 52" */
SFR_ABS (GPTA1_LTCXR53, GPTAn_LTCXRm_t, GPTA1_LTCXR53_ADDR); /* "GPTA1 Local Timer Cell X Register 53" */
SFR_ABS (GPTA1_LTCXR54, GPTAn_LTCXRm_t, GPTA1_LTCXR54_ADDR); /* "GPTA1 Local Timer Cell X Register 54" */
SFR_ABS (GPTA1_LTCXR55, GPTAn_LTCXRm_t, GPTA1_LTCXR55_ADDR); /* "GPTA1 Local Timer Cell X Register 55" */
SFR_ABS (GPTA1_LTCXR56, GPTAn_LTCXRm_t, GPTA1_LTCXR56_ADDR); /* "GPTA1 Local Timer Cell X Register 56" */
SFR_ABS (GPTA1_LTCXR57, GPTAn_LTCXRm_t, GPTA1_LTCXR57_ADDR); /* "GPTA1 Local Timer Cell X Register 57" */
SFR_ABS (GPTA1_LTCXR58, GPTAn_LTCXRm_t, GPTA1_LTCXR58_ADDR); /* "GPTA1 Local Timer Cell X Register 58" */
SFR_ABS (GPTA1_LTCXR59, GPTAn_LTCXRm_t, GPTA1_LTCXR59_ADDR); /* "GPTA1 Local Timer Cell X Register 59" */
SFR_ABS (GPTA1_LTCXR60, GPTAn_LTCXRm_t, GPTA1_LTCXR60_ADDR); /* "GPTA1 Local Timer Cell X Register 60" */
SFR_ABS (GPTA1_LTCXR61, GPTAn_LTCXRm_t, GPTA1_LTCXR61_ADDR); /* "GPTA1 Local Timer Cell X Register 61" */
SFR_ABS (GPTA1_LTCXR62, GPTAn_LTCXRm_t, GPTA1_LTCXR62_ADDR); /* "GPTA1 Local Timer Cell X Register 62" */
SFR_ABS (GPTA1_LTCXR63, GPTAn_LTCXR63_t, GPTA1_LTCXR63_ADDR); /* "GPTA1 Local Timer Cell X Register 63" */
SFR_ABS (GPTA1_MRACTL, GPTAn_MRACTL_t, GPTA1_MRACTL_ADDR); /* "GPTA1 Multiplexer Register Array Control Register" */
SFR_ABS (GPTA1_MRADIN, GPTAn_MRADIN_t, GPTA1_MRADIN_ADDR); /* "GPTA1 Multiplexer Register Array Data In Register" */
SFR_ABS (GPTA1_MRADOUT, GPTAn_MRADOUT_t, GPTA1_MRADOUT_ADDR); /* "GPTA1 Multiplexer Register Array Data Out Register" */
SFR_ABS (GPTA1_PDLCTR, GPTAn_PDLCTR_t, GPTA1_PDLCTR_ADDR); /* "GPTA1 Phase Discrimination Logic Control Register" */
SFR_ABS (GPTA1_PLLCNT, GPTAn_PLLCNT_t, GPTA1_PLLCNT_ADDR); /* "GPTA1 Phase Locked Loop Counter Register" */
SFR_ABS (GPTA1_PLLCTR, GPTAn_PLLCTR_t, GPTA1_PLLCTR_ADDR); /* "GPTA1 Phase Locked Loop Control Register" */
SFR_ABS (GPTA1_PLLDTR, GPTAn_PLLDTR_t, GPTA1_PLLDTR_ADDR); /* "GPTA1 Phase Locked Loop Delta Register" */
SFR_ABS (GPTA1_PLLMTI, GPTAn_PLLMTI_t, GPTA1_PLLMTI_ADDR); /* "GPTA1 Phase Locked Loop Microtick Register" */
SFR_ABS (GPTA1_PLLREV, GPTAn_PLLREV_t, GPTA1_PLLREV_ADDR); /* "GPTA1 Phase Locked Loop Reload Register" */
SFR_ABS (GPTA1_PLLSTP, GPTAn_PLLSTP_t, GPTA1_PLLSTP_ADDR); /* "GPTA1 Phase Locked Loop Step Register" */
SFR_ABS (GPTA1_SRC00, GPTAn_SRCm_t, GPTA1_SRC00_ADDR); /* "GPTA1 Interrupt Service Request Control Register 00" */
SFR_ABS (GPTA1_SRC01, GPTAn_SRCm_t, GPTA1_SRC01_ADDR); /* "GPTA1 Interrupt Service Request Control Register 01" */
SFR_ABS (GPTA1_SRC02, GPTAn_SRCm_t, GPTA1_SRC02_ADDR); /* "GPTA1 Interrupt Service Request Control Register 02" */
SFR_ABS (GPTA1_SRC03, GPTAn_SRCm_t, GPTA1_SRC03_ADDR); /* "GPTA1 Interrupt Service Request Control Register 03" */
SFR_ABS (GPTA1_SRC04, GPTAn_SRCm_t, GPTA1_SRC04_ADDR); /* "GPTA1 Interrupt Service Request Control Register 04" */
SFR_ABS (GPTA1_SRC05, GPTAn_SRCm_t, GPTA1_SRC05_ADDR); /* "GPTA1 Interrupt Service Request Control Register 05" */
SFR_ABS (GPTA1_SRC06, GPTAn_SRCm_t, GPTA1_SRC06_ADDR); /* "GPTA1 Interrupt Service Request Control Register 06" */
SFR_ABS (GPTA1_SRC07, GPTAn_SRCm_t, GPTA1_SRC07_ADDR); /* "GPTA1 Interrupt Service Request Control Register 07" */
SFR_ABS (GPTA1_SRC08, GPTAn_SRCm_t, GPTA1_SRC08_ADDR); /* "GPTA1 Interrupt Service Request Control Register 08" */
SFR_ABS (GPTA1_SRC09, GPTAn_SRCm_t, GPTA1_SRC09_ADDR); /* "GPTA1 Interrupt Service Request Control Register 09" */
SFR_ABS (GPTA1_SRC10, GPTAn_SRCm_t, GPTA1_SRC10_ADDR); /* "GPTA1 Interrupt Service Request Control Register 10" */
SFR_ABS (GPTA1_SRC11, GPTAn_SRCm_t, GPTA1_SRC11_ADDR); /* "GPTA1 Interrupt Service Request Control Register 11" */
SFR_ABS (GPTA1_SRC12, GPTAn_SRCm_t, GPTA1_SRC12_ADDR); /* "GPTA1 Interrupt Service Request Control Register 12" */
SFR_ABS (GPTA1_SRC13, GPTAn_SRCm_t, GPTA1_SRC13_ADDR); /* "GPTA1 Interrupt Service Request Control Register 13" */
SFR_ABS (GPTA1_SRC14, GPTAn_SRCm_t, GPTA1_SRC14_ADDR); /* "GPTA1 Interrupt Service Request Control Register 14" */
SFR_ABS (GPTA1_SRC15, GPTAn_SRCm_t, GPTA1_SRC15_ADDR); /* "GPTA1 Interrupt Service Request Control Register 15" */
SFR_ABS (GPTA1_SRC16, GPTAn_SRCm_t, GPTA1_SRC16_ADDR); /* "GPTA1 Interrupt Service Request Control Register 16" */
SFR_ABS (GPTA1_SRC17, GPTAn_SRCm_t, GPTA1_SRC17_ADDR); /* "GPTA1 Interrupt Service Request Control Register 17" */
SFR_ABS (GPTA1_SRC18, GPTAn_SRCm_t, GPTA1_SRC18_ADDR); /* "GPTA1 Interrupt Service Request Control Register 18" */
SFR_ABS (GPTA1_SRC19, GPTAn_SRCm_t, GPTA1_SRC19_ADDR); /* "GPTA1 Interrupt Service Request Control Register 19" */
SFR_ABS (GPTA1_SRC20, GPTAn_SRCm_t, GPTA1_SRC20_ADDR); /* "GPTA1 Interrupt Service Request Control Register 20" */
SFR_ABS (GPTA1_SRC21, GPTAn_SRCm_t, GPTA1_SRC21_ADDR); /* "GPTA1 Interrupt Service Request Control Register 21" */
SFR_ABS (GPTA1_SRC22, GPTAn_SRCm_t, GPTA1_SRC22_ADDR); /* "GPTA1 Interrupt Service Request Control Register 22" */
SFR_ABS (GPTA1_SRC23, GPTAn_SRCm_t, GPTA1_SRC23_ADDR); /* "GPTA1 Interrupt Service Request Control Register 23" */
SFR_ABS (GPTA1_SRC24, GPTAn_SRCm_t, GPTA1_SRC24_ADDR); /* "GPTA1 Interrupt Service Request Control Register 24" */
SFR_ABS (GPTA1_SRC25, GPTAn_SRCm_t, GPTA1_SRC25_ADDR); /* "GPTA1 Interrupt Service Request Control Register 25" */
SFR_ABS (GPTA1_SRC26, GPTAn_SRCm_t, GPTA1_SRC26_ADDR); /* "GPTA1 Interrupt Service Request Control Register 26" */
SFR_ABS (GPTA1_SRC27, GPTAn_SRCm_t, GPTA1_SRC27_ADDR); /* "GPTA1 Interrupt Service Request Control Register 27" */
SFR_ABS (GPTA1_SRC28, GPTAn_SRCm_t, GPTA1_SRC28_ADDR); /* "GPTA1 Interrupt Service Request Control Register 28" */
SFR_ABS (GPTA1_SRC29, GPTAn_SRCm_t, GPTA1_SRC29_ADDR); /* "GPTA1 Interrupt Service Request Control Register 29" */
SFR_ABS (GPTA1_SRC30, GPTAn_SRCm_t, GPTA1_SRC30_ADDR); /* "GPTA1 Interrupt Service Request Control Register 30" */
SFR_ABS (GPTA1_SRC31, GPTAn_SRCm_t, GPTA1_SRC31_ADDR); /* "GPTA1 Interrupt Service Request Control Register 31" */
SFR_ABS (GPTA1_SRC32, GPTAn_SRCm_t, GPTA1_SRC32_ADDR); /* "GPTA1 Interrupt Service Request Control Register 32" */
SFR_ABS (GPTA1_SRC33, GPTAn_SRCm_t, GPTA1_SRC33_ADDR); /* "GPTA1 Interrupt Service Request Control Register 33" */
SFR_ABS (GPTA1_SRC34, GPTAn_SRCm_t, GPTA1_SRC34_ADDR); /* "GPTA1 Interrupt Service Request Control Register 34" */
SFR_ABS (GPTA1_SRC35, GPTAn_SRCm_t, GPTA1_SRC35_ADDR); /* "GPTA1 Interrupt Service Request Control Register 35" */
SFR_ABS (GPTA1_SRC36, GPTAn_SRCm_t, GPTA1_SRC36_ADDR); /* "GPTA1 Interrupt Service Request Control Register 36" */
SFR_ABS (GPTA1_SRC37, GPTAn_SRCm_t, GPTA1_SRC37_ADDR); /* "GPTA1 Interrupt Service Request Control Register 37" */
SFR_ABS (GPTA1_SRNR, GPTAn_SRNR_t, GPTA1_SRNR_ADDR); /* "GPTA1 Service Request Node Redirection Register" */
SFR_ABS (GPTA1_SRSC0, GPTAn_SRSC0_t, GPTA1_SRSC0_ADDR); /* "GPTA1 Service Request State Clear Register 0" */
SFR_ABS (GPTA1_SRSC1, GPTAn_SRSC1_t, GPTA1_SRSC1_ADDR); /* "GPTA1 Service Request State Clear Register 1" */
SFR_ABS (GPTA1_SRSC2, GPTAn_SRSCm_t, GPTA1_SRSC2_ADDR); /* "GPTA1 Service Request State Clear Register 2" */
SFR_ABS (GPTA1_SRSC3, GPTAn_SRSCm_t, GPTA1_SRSC3_ADDR); /* "GPTA1 Service Request State Clear Register 3" */
SFR_ABS (GPTA1_SRSS0, GPTAn_SRSS0_t, GPTA1_SRSS0_ADDR); /* "GPTA1 Service Request State Set Register 0" */
SFR_ABS (GPTA1_SRSS1, GPTAn_SRSS1_t, GPTA1_SRSS1_ADDR); /* "GPTA1 Service Request State Set Register 1" */
SFR_ABS (GPTA1_SRSS2, GPTAn_SRSSm_t, GPTA1_SRSS2_ADDR); /* "GPTA1 Service Request State Set Register 2" */
SFR_ABS (GPTA1_SRSS3, GPTAn_SRSSm_t, GPTA1_SRSS3_ADDR); /* "GPTA1 Service Request State Set Register 3" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_GPTA1_H_ (block "GPTA1") */


