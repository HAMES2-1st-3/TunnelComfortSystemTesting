/* (c) HighTec EDV-Systeme GmbH */

/* block "GPTA0" of TriCore TC1798 (294 SFRs) */

#include <tc1798/gpta0/addr.h>

#include <tc1798/gpta0/masks.h>
#include <tc1798/gpta0-1/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1798/gpta0/types.h>
#include <tc1798/gpta0-1/sharetypes.h>

#ifndef _HAVE_TRICORE_GPTA0_H_
#define _HAVE_TRICORE_GPTA0_H_

#include <tricore-abs-noabs.h>

SFR_ABS (GPTA0_CKBCTR, GPTAn_CKBCTR_t, GPTA0_CKBCTR_ADDR); /* "GPTA0 Clock Bus Control Register" */
SFR_ABS (GPTA0_CLC, GPTA0_CLC_t, GPTA0_CLC_ADDR); /* "GPTA Clock Control Register" */
SFR_ABS (GPTA0_DBGCTR, GPTA0_DBGCTR_t, GPTA0_DBGCTR_ADDR); /* "GPTA Debug Clock Control Register" */
SFR_ABS (GPTA0_DCMCAV0, GPTAn_DCMCAVm_t, GPTA0_DCMCAV0_ADDR); /* "GPTA0 Duty Cycle Measurement Capture Register 0" */
SFR_ABS (GPTA0_DCMCAV1, GPTAn_DCMCAVm_t, GPTA0_DCMCAV1_ADDR); /* "GPTA0 Duty Cycle Measurement Capture Register 1" */
SFR_ABS (GPTA0_DCMCAV2, GPTAn_DCMCAVm_t, GPTA0_DCMCAV2_ADDR); /* "GPTA0 Duty Cycle Measurement Capture Register 2" */
SFR_ABS (GPTA0_DCMCAV3, GPTAn_DCMCAVm_t, GPTA0_DCMCAV3_ADDR); /* "GPTA0 Duty Cycle Measurement Capture Register 3" */
SFR_ABS (GPTA0_DCMCOV0, GPTAn_DCMCOVm_t, GPTA0_DCMCOV0_ADDR); /* "GPTA0 Duty Cycle Measurement Capture/Compare Register 0" */
SFR_ABS (GPTA0_DCMCOV1, GPTAn_DCMCOVm_t, GPTA0_DCMCOV1_ADDR); /* "GPTA0 Duty Cycle Measurement Capture/Compare Register 1" */
SFR_ABS (GPTA0_DCMCOV2, GPTAn_DCMCOVm_t, GPTA0_DCMCOV2_ADDR); /* "GPTA0 Duty Cycle Measurement Capture/Compare Register 2" */
SFR_ABS (GPTA0_DCMCOV3, GPTAn_DCMCOVm_t, GPTA0_DCMCOV3_ADDR); /* "GPTA0 Duty Cycle Measurement Capture/Compare Register 3" */
SFR_ABS (GPTA0_DCMCTR0, GPTAn_DCMCTRm_t, GPTA0_DCMCTR0_ADDR); /* "GPTA0 Duty Cycle Measurement Control Register 0" */
SFR_ABS (GPTA0_DCMCTR1, GPTAn_DCMCTRm_t, GPTA0_DCMCTR1_ADDR); /* "GPTA0 Duty Cycle Measurement Control Register 1" */
SFR_ABS (GPTA0_DCMCTR2, GPTAn_DCMCTRm_t, GPTA0_DCMCTR2_ADDR); /* "GPTA0 Duty Cycle Measurement Control Register 2" */
SFR_ABS (GPTA0_DCMCTR3, GPTAn_DCMCTRm_t, GPTA0_DCMCTR3_ADDR); /* "GPTA0 Duty Cycle Measurement Control Register 3" */
SFR_ABS (GPTA0_DCMTIM0, GPTAn_DCMTIMm_t, GPTA0_DCMTIM0_ADDR); /* "GPTA0 Duty Cycle Measurement Timer Register 0" */
SFR_ABS (GPTA0_DCMTIM1, GPTAn_DCMTIMm_t, GPTA0_DCMTIM1_ADDR); /* "GPTA0 Duty Cycle Measurement Timer Register 1" */
SFR_ABS (GPTA0_DCMTIM2, GPTAn_DCMTIMm_t, GPTA0_DCMTIM2_ADDR); /* "GPTA0 Duty Cycle Measurement Timer Register 2" */
SFR_ABS (GPTA0_DCMTIM3, GPTAn_DCMTIMm_t, GPTA0_DCMTIM3_ADDR); /* "GPTA0 Duty Cycle Measurement Timer Register 3" */
SFR_ABS (GPTA0_EDCTR, GPTA0_EDCTR_t, GPTA0_EDCTR_ADDR); /* "GPTA Clock Enable/Disable Control Register" */
SFR_ABS (GPTA0_FDR, GPTA0_FDR_t, GPTA0_FDR_ADDR); /* "GPTA Fractional Divider Register" */
SFR_ABS (GPTA0_FPCCTR0, GPTAn_FPCCTRm_t, GPTA0_FPCCTR0_ADDR); /* "GPTA0 Filter and Prescaler Cell Control Register 0" */
SFR_ABS (GPTA0_FPCCTR1, GPTAn_FPCCTRm_t, GPTA0_FPCCTR1_ADDR); /* "GPTA0 Filter and Prescaler Cell Control Register 1" */
SFR_ABS (GPTA0_FPCCTR2, GPTAn_FPCCTRm_t, GPTA0_FPCCTR2_ADDR); /* "GPTA0 Filter and Prescaler Cell Control Register 2" */
SFR_ABS (GPTA0_FPCCTR3, GPTAn_FPCCTRm_t, GPTA0_FPCCTR3_ADDR); /* "GPTA0 Filter and Prescaler Cell Control Register 3" */
SFR_ABS (GPTA0_FPCCTR4, GPTAn_FPCCTRm_t, GPTA0_FPCCTR4_ADDR); /* "GPTA0 Filter and Prescaler Cell Control Register 4" */
SFR_ABS (GPTA0_FPCCTR5, GPTAn_FPCCTRm_t, GPTA0_FPCCTR5_ADDR); /* "GPTA0 Filter and Prescaler Cell Control Register 5" */
SFR_ABS (GPTA0_FPCSTAT, GPTAn_FPCSTAT_t, GPTA0_FPCSTAT_ADDR); /* "GPTA0 Filter and Prescaler Cell Status Register" */
SFR_ABS (GPTA0_FPCTIM0, GPTAn_FPCTIMm_t, GPTA0_FPCTIM0_ADDR); /* "GPTA0 Filter and Prescaler Cell Timer Register 0" */
SFR_ABS (GPTA0_FPCTIM1, GPTAn_FPCTIMm_t, GPTA0_FPCTIM1_ADDR); /* "GPTA0 Filter and Prescaler Cell Timer Register 1" */
SFR_ABS (GPTA0_FPCTIM2, GPTAn_FPCTIMm_t, GPTA0_FPCTIM2_ADDR); /* "GPTA0 Filter and Prescaler Cell Timer Register 2" */
SFR_ABS (GPTA0_FPCTIM3, GPTAn_FPCTIMm_t, GPTA0_FPCTIM3_ADDR); /* "GPTA0 Filter and Prescaler Cell Timer Register 3" */
SFR_ABS (GPTA0_FPCTIM4, GPTAn_FPCTIMm_t, GPTA0_FPCTIM4_ADDR); /* "GPTA0 Filter and Prescaler Cell Timer Register 4" */
SFR_ABS (GPTA0_FPCTIM5, GPTAn_FPCTIMm_t, GPTA0_FPCTIM5_ADDR); /* "GPTA0 Filter and Prescaler Cell Timer Register 5" */
SFR_ABS (GPTA0_GTCCTR00, GPTAn_GTCCTRm_t, GPTA0_GTCCTR00_ADDR); /* "GPTA0 Global Timer Cell Control Register 00" */
SFR_ABS (GPTA0_GTCCTR01, GPTAn_GTCCTRm_t, GPTA0_GTCCTR01_ADDR); /* "GPTA0 Global Timer Cell Control Register 01" */
SFR_ABS (GPTA0_GTCCTR02, GPTAn_GTCCTRm_t, GPTA0_GTCCTR02_ADDR); /* "GPTA0 Global Timer Cell Control Register 02" */
SFR_ABS (GPTA0_GTCCTR03, GPTAn_GTCCTRm_t, GPTA0_GTCCTR03_ADDR); /* "GPTA0 Global Timer Cell Control Register 03" */
SFR_ABS (GPTA0_GTCCTR04, GPTAn_GTCCTRm_t, GPTA0_GTCCTR04_ADDR); /* "GPTA0 Global Timer Cell Control Register 04" */
SFR_ABS (GPTA0_GTCCTR05, GPTAn_GTCCTRm_t, GPTA0_GTCCTR05_ADDR); /* "GPTA0 Global Timer Cell Control Register 05" */
SFR_ABS (GPTA0_GTCCTR06, GPTAn_GTCCTRm_t, GPTA0_GTCCTR06_ADDR); /* "GPTA0 Global Timer Cell Control Register 06" */
SFR_ABS (GPTA0_GTCCTR07, GPTAn_GTCCTRm_t, GPTA0_GTCCTR07_ADDR); /* "GPTA0 Global Timer Cell Control Register 07" */
SFR_ABS (GPTA0_GTCCTR08, GPTAn_GTCCTRm_t, GPTA0_GTCCTR08_ADDR); /* "GPTA0 Global Timer Cell Control Register 08" */
SFR_ABS (GPTA0_GTCCTR09, GPTAn_GTCCTRm_t, GPTA0_GTCCTR09_ADDR); /* "GPTA0 Global Timer Cell Control Register 09" */
SFR_ABS (GPTA0_GTCCTR10, GPTAn_GTCCTRm_t, GPTA0_GTCCTR10_ADDR); /* "GPTA0 Global Timer Cell Control Register 10" */
SFR_ABS (GPTA0_GTCCTR11, GPTAn_GTCCTRm_t, GPTA0_GTCCTR11_ADDR); /* "GPTA0 Global Timer Cell Control Register 11" */
SFR_ABS (GPTA0_GTCCTR12, GPTAn_GTCCTRm_t, GPTA0_GTCCTR12_ADDR); /* "GPTA0 Global Timer Cell Control Register 12" */
SFR_ABS (GPTA0_GTCCTR13, GPTAn_GTCCTRm_t, GPTA0_GTCCTR13_ADDR); /* "GPTA0 Global Timer Cell Control Register 13" */
SFR_ABS (GPTA0_GTCCTR14, GPTAn_GTCCTRm_t, GPTA0_GTCCTR14_ADDR); /* "GPTA0 Global Timer Cell Control Register 14" */
SFR_ABS (GPTA0_GTCCTR15, GPTAn_GTCCTRm_t, GPTA0_GTCCTR15_ADDR); /* "GPTA0 Global Timer Cell Control Register 15" */
SFR_ABS (GPTA0_GTCCTR16, GPTAn_GTCCTRm_t, GPTA0_GTCCTR16_ADDR); /* "GPTA0 Global Timer Cell Control Register 16" */
SFR_ABS (GPTA0_GTCCTR17, GPTAn_GTCCTRm_t, GPTA0_GTCCTR17_ADDR); /* "GPTA0 Global Timer Cell Control Register 17" */
SFR_ABS (GPTA0_GTCCTR18, GPTAn_GTCCTRm_t, GPTA0_GTCCTR18_ADDR); /* "GPTA0 Global Timer Cell Control Register 18" */
SFR_ABS (GPTA0_GTCCTR19, GPTAn_GTCCTRm_t, GPTA0_GTCCTR19_ADDR); /* "GPTA0 Global Timer Cell Control Register 19" */
SFR_ABS (GPTA0_GTCCTR20, GPTAn_GTCCTRm_t, GPTA0_GTCCTR20_ADDR); /* "GPTA0 Global Timer Cell Control Register 20" */
SFR_ABS (GPTA0_GTCCTR21, GPTAn_GTCCTRm_t, GPTA0_GTCCTR21_ADDR); /* "GPTA0 Global Timer Cell Control Register 21" */
SFR_ABS (GPTA0_GTCCTR22, GPTAn_GTCCTRm_t, GPTA0_GTCCTR22_ADDR); /* "GPTA0 Global Timer Cell Control Register 22" */
SFR_ABS (GPTA0_GTCCTR23, GPTAn_GTCCTRm_t, GPTA0_GTCCTR23_ADDR); /* "GPTA0 Global Timer Cell Control Register 23" */
SFR_ABS (GPTA0_GTCCTR24, GPTAn_GTCCTRm_t, GPTA0_GTCCTR24_ADDR); /* "GPTA0 Global Timer Cell Control Register 24" */
SFR_ABS (GPTA0_GTCCTR25, GPTAn_GTCCTRm_t, GPTA0_GTCCTR25_ADDR); /* "GPTA0 Global Timer Cell Control Register 25" */
SFR_ABS (GPTA0_GTCCTR26, GPTAn_GTCCTRm_t, GPTA0_GTCCTR26_ADDR); /* "GPTA0 Global Timer Cell Control Register 26" */
SFR_ABS (GPTA0_GTCCTR27, GPTAn_GTCCTRm_t, GPTA0_GTCCTR27_ADDR); /* "GPTA0 Global Timer Cell Control Register 27" */
SFR_ABS (GPTA0_GTCCTR28, GPTAn_GTCCTRm_t, GPTA0_GTCCTR28_ADDR); /* "GPTA0 Global Timer Cell Control Register 28" */
SFR_ABS (GPTA0_GTCCTR29, GPTAn_GTCCTRm_t, GPTA0_GTCCTR29_ADDR); /* "GPTA0 Global Timer Cell Control Register 29" */
SFR_ABS (GPTA0_GTCCTR30, GPTAn_GTCCTRm_t, GPTA0_GTCCTR30_ADDR); /* "GPTA0 Global Timer Cell Control Register 30" */
SFR_ABS (GPTA0_GTCCTR31, GPTAn_GTCCTRm_t, GPTA0_GTCCTR31_ADDR); /* "GPTA0 Global Timer Cell Control Register 31" */
SFR_ABS (GPTA0_GTCTR0, GPTAn_GTCTRm_t, GPTA0_GTCTR0_ADDR); /* "GPTA0 Global Timer Control Register 0" */
SFR_ABS (GPTA0_GTCTR1, GPTAn_GTCTRm_t, GPTA0_GTCTR1_ADDR); /* "GPTA0 Global Timer Control Register 1" */
SFR_ABS (GPTA0_GTCXR00, GPTAn_GTCXRm_t, GPTA0_GTCXR00_ADDR); /* "GPTA0 Global Timer Cell X Register 00" */
SFR_ABS (GPTA0_GTCXR01, GPTAn_GTCXRm_t, GPTA0_GTCXR01_ADDR); /* "GPTA0 Global Timer Cell X Register 01" */
SFR_ABS (GPTA0_GTCXR02, GPTAn_GTCXRm_t, GPTA0_GTCXR02_ADDR); /* "GPTA0 Global Timer Cell X Register 02" */
SFR_ABS (GPTA0_GTCXR03, GPTAn_GTCXRm_t, GPTA0_GTCXR03_ADDR); /* "GPTA0 Global Timer Cell X Register 03" */
SFR_ABS (GPTA0_GTCXR04, GPTAn_GTCXRm_t, GPTA0_GTCXR04_ADDR); /* "GPTA0 Global Timer Cell X Register 04" */
SFR_ABS (GPTA0_GTCXR05, GPTAn_GTCXRm_t, GPTA0_GTCXR05_ADDR); /* "GPTA0 Global Timer Cell X Register 05" */
SFR_ABS (GPTA0_GTCXR06, GPTAn_GTCXRm_t, GPTA0_GTCXR06_ADDR); /* "GPTA0 Global Timer Cell X Register 06" */
SFR_ABS (GPTA0_GTCXR07, GPTAn_GTCXRm_t, GPTA0_GTCXR07_ADDR); /* "GPTA0 Global Timer Cell X Register 07" */
SFR_ABS (GPTA0_GTCXR08, GPTAn_GTCXRm_t, GPTA0_GTCXR08_ADDR); /* "GPTA0 Global Timer Cell X Register 08" */
SFR_ABS (GPTA0_GTCXR09, GPTAn_GTCXRm_t, GPTA0_GTCXR09_ADDR); /* "GPTA0 Global Timer Cell X Register 09" */
SFR_ABS (GPTA0_GTCXR10, GPTAn_GTCXRm_t, GPTA0_GTCXR10_ADDR); /* "GPTA0 Global Timer Cell X Register 10" */
SFR_ABS (GPTA0_GTCXR11, GPTAn_GTCXRm_t, GPTA0_GTCXR11_ADDR); /* "GPTA0 Global Timer Cell X Register 11" */
SFR_ABS (GPTA0_GTCXR12, GPTAn_GTCXRm_t, GPTA0_GTCXR12_ADDR); /* "GPTA0 Global Timer Cell X Register 12" */
SFR_ABS (GPTA0_GTCXR13, GPTAn_GTCXRm_t, GPTA0_GTCXR13_ADDR); /* "GPTA0 Global Timer Cell X Register 13" */
SFR_ABS (GPTA0_GTCXR14, GPTAn_GTCXRm_t, GPTA0_GTCXR14_ADDR); /* "GPTA0 Global Timer Cell X Register 14" */
SFR_ABS (GPTA0_GTCXR15, GPTAn_GTCXRm_t, GPTA0_GTCXR15_ADDR); /* "GPTA0 Global Timer Cell X Register 15" */
SFR_ABS (GPTA0_GTCXR16, GPTAn_GTCXRm_t, GPTA0_GTCXR16_ADDR); /* "GPTA0 Global Timer Cell X Register 16" */
SFR_ABS (GPTA0_GTCXR17, GPTAn_GTCXRm_t, GPTA0_GTCXR17_ADDR); /* "GPTA0 Global Timer Cell X Register 17" */
SFR_ABS (GPTA0_GTCXR18, GPTAn_GTCXRm_t, GPTA0_GTCXR18_ADDR); /* "GPTA0 Global Timer Cell X Register 18" */
SFR_ABS (GPTA0_GTCXR19, GPTAn_GTCXRm_t, GPTA0_GTCXR19_ADDR); /* "GPTA0 Global Timer Cell X Register 19" */
SFR_ABS (GPTA0_GTCXR20, GPTAn_GTCXRm_t, GPTA0_GTCXR20_ADDR); /* "GPTA0 Global Timer Cell X Register 20" */
SFR_ABS (GPTA0_GTCXR21, GPTAn_GTCXRm_t, GPTA0_GTCXR21_ADDR); /* "GPTA0 Global Timer Cell X Register 21" */
SFR_ABS (GPTA0_GTCXR22, GPTAn_GTCXRm_t, GPTA0_GTCXR22_ADDR); /* "GPTA0 Global Timer Cell X Register 22" */
SFR_ABS (GPTA0_GTCXR23, GPTAn_GTCXRm_t, GPTA0_GTCXR23_ADDR); /* "GPTA0 Global Timer Cell X Register 23" */
SFR_ABS (GPTA0_GTCXR24, GPTAn_GTCXRm_t, GPTA0_GTCXR24_ADDR); /* "GPTA0 Global Timer Cell X Register 24" */
SFR_ABS (GPTA0_GTCXR25, GPTAn_GTCXRm_t, GPTA0_GTCXR25_ADDR); /* "GPTA0 Global Timer Cell X Register 25" */
SFR_ABS (GPTA0_GTCXR26, GPTAn_GTCXRm_t, GPTA0_GTCXR26_ADDR); /* "GPTA0 Global Timer Cell X Register 26" */
SFR_ABS (GPTA0_GTCXR27, GPTAn_GTCXRm_t, GPTA0_GTCXR27_ADDR); /* "GPTA0 Global Timer Cell X Register 27" */
SFR_ABS (GPTA0_GTCXR28, GPTAn_GTCXRm_t, GPTA0_GTCXR28_ADDR); /* "GPTA0 Global Timer Cell X Register 28" */
SFR_ABS (GPTA0_GTCXR29, GPTAn_GTCXRm_t, GPTA0_GTCXR29_ADDR); /* "GPTA0 Global Timer Cell X Register 29" */
SFR_ABS (GPTA0_GTCXR30, GPTAn_GTCXRm_t, GPTA0_GTCXR30_ADDR); /* "GPTA0 Global Timer Cell X Register 30" */
SFR_ABS (GPTA0_GTCXR31, GPTAn_GTCXRm_t, GPTA0_GTCXR31_ADDR); /* "GPTA0 Global Timer Cell X Register 31" */
SFR_ABS (GPTA0_GTREV0, GPTAn_GTREVm_t, GPTA0_GTREV0_ADDR); /* "GPTA0 Global Timer Reload Value Register 0" */
SFR_ABS (GPTA0_GTREV1, GPTAn_GTREVm_t, GPTA0_GTREV1_ADDR); /* "GPTA0 Global Timer Reload Value Register 1" */
SFR_ABS (GPTA0_GTTIM0, GPTAn_GTTIMm_t, GPTA0_GTTIM0_ADDR); /* "GPTA0 Global Timer Register 0" */
SFR_ABS (GPTA0_GTTIM1, GPTAn_GTTIMm_t, GPTA0_GTTIM1_ADDR); /* "GPTA0 Global Timer Register 1" */
SFR_ABS (GPTA0_ID, GPTAn_ID_t, GPTA0_ID_ADDR);    /* "GPTA0 Identification Register" */
SFR_ABS (GPTA0_LTCCTR00, GPTAn_LTCCTRm_t, GPTA0_LTCCTR00_ADDR); /* "GPTA0 Local Timer Cell Control Register 00" */
SFR_ABS (GPTA0_LTCCTR01, GPTAn_LTCCTRm_t, GPTA0_LTCCTR01_ADDR); /* "GPTA0 Local Timer Cell Control Register 01" */
SFR_ABS (GPTA0_LTCCTR02, GPTAn_LTCCTRm_t, GPTA0_LTCCTR02_ADDR); /* "GPTA0 Local Timer Cell Control Register 02" */
SFR_ABS (GPTA0_LTCCTR03, GPTAn_LTCCTRm_t, GPTA0_LTCCTR03_ADDR); /* "GPTA0 Local Timer Cell Control Register 03" */
SFR_ABS (GPTA0_LTCCTR04, GPTAn_LTCCTRm_t, GPTA0_LTCCTR04_ADDR); /* "GPTA0 Local Timer Cell Control Register 04" */
SFR_ABS (GPTA0_LTCCTR05, GPTAn_LTCCTRm_t, GPTA0_LTCCTR05_ADDR); /* "GPTA0 Local Timer Cell Control Register 05" */
SFR_ABS (GPTA0_LTCCTR06, GPTAn_LTCCTRm_t, GPTA0_LTCCTR06_ADDR); /* "GPTA0 Local Timer Cell Control Register 06" */
SFR_ABS (GPTA0_LTCCTR07, GPTAn_LTCCTRm_t, GPTA0_LTCCTR07_ADDR); /* "GPTA0 Local Timer Cell Control Register 07" */
SFR_ABS (GPTA0_LTCCTR08, GPTAn_LTCCTRm_t, GPTA0_LTCCTR08_ADDR); /* "GPTA0 Local Timer Cell Control Register 08" */
SFR_ABS (GPTA0_LTCCTR09, GPTAn_LTCCTRm_t, GPTA0_LTCCTR09_ADDR); /* "GPTA0 Local Timer Cell Control Register 09" */
SFR_ABS (GPTA0_LTCCTR10, GPTAn_LTCCTRm_t, GPTA0_LTCCTR10_ADDR); /* "GPTA0 Local Timer Cell Control Register 10" */
SFR_ABS (GPTA0_LTCCTR11, GPTAn_LTCCTRm_t, GPTA0_LTCCTR11_ADDR); /* "GPTA0 Local Timer Cell Control Register 11" */
SFR_ABS (GPTA0_LTCCTR12, GPTAn_LTCCTRm_t, GPTA0_LTCCTR12_ADDR); /* "GPTA0 Local Timer Cell Control Register 12" */
SFR_ABS (GPTA0_LTCCTR13, GPTAn_LTCCTRm_t, GPTA0_LTCCTR13_ADDR); /* "GPTA0 Local Timer Cell Control Register 13" */
SFR_ABS (GPTA0_LTCCTR14, GPTAn_LTCCTRm_t, GPTA0_LTCCTR14_ADDR); /* "GPTA0 Local Timer Cell Control Register 14" */
SFR_ABS (GPTA0_LTCCTR15, GPTAn_LTCCTRm_t, GPTA0_LTCCTR15_ADDR); /* "GPTA0 Local Timer Cell Control Register 15" */
SFR_ABS (GPTA0_LTCCTR16, GPTAn_LTCCTRm_t, GPTA0_LTCCTR16_ADDR); /* "GPTA0 Local Timer Cell Control Register 16" */
SFR_ABS (GPTA0_LTCCTR17, GPTAn_LTCCTRm_t, GPTA0_LTCCTR17_ADDR); /* "GPTA0 Local Timer Cell Control Register 17" */
SFR_ABS (GPTA0_LTCCTR18, GPTAn_LTCCTRm_t, GPTA0_LTCCTR18_ADDR); /* "GPTA0 Local Timer Cell Control Register 18" */
SFR_ABS (GPTA0_LTCCTR19, GPTAn_LTCCTRm_t, GPTA0_LTCCTR19_ADDR); /* "GPTA0 Local Timer Cell Control Register 19" */
SFR_ABS (GPTA0_LTCCTR20, GPTAn_LTCCTRm_t, GPTA0_LTCCTR20_ADDR); /* "GPTA0 Local Timer Cell Control Register 20" */
SFR_ABS (GPTA0_LTCCTR21, GPTAn_LTCCTRm_t, GPTA0_LTCCTR21_ADDR); /* "GPTA0 Local Timer Cell Control Register 21" */
SFR_ABS (GPTA0_LTCCTR22, GPTAn_LTCCTRm_t, GPTA0_LTCCTR22_ADDR); /* "GPTA0 Local Timer Cell Control Register 22" */
SFR_ABS (GPTA0_LTCCTR23, GPTAn_LTCCTRm_t, GPTA0_LTCCTR23_ADDR); /* "GPTA0 Local Timer Cell Control Register 23" */
SFR_ABS (GPTA0_LTCCTR24, GPTAn_LTCCTRm_t, GPTA0_LTCCTR24_ADDR); /* "GPTA0 Local Timer Cell Control Register 24" */
SFR_ABS (GPTA0_LTCCTR25, GPTAn_LTCCTRm_t, GPTA0_LTCCTR25_ADDR); /* "GPTA0 Local Timer Cell Control Register 25" */
SFR_ABS (GPTA0_LTCCTR26, GPTAn_LTCCTRm_t, GPTA0_LTCCTR26_ADDR); /* "GPTA0 Local Timer Cell Control Register 26" */
SFR_ABS (GPTA0_LTCCTR27, GPTAn_LTCCTRm_t, GPTA0_LTCCTR27_ADDR); /* "GPTA0 Local Timer Cell Control Register 27" */
SFR_ABS (GPTA0_LTCCTR28, GPTAn_LTCCTRm_t, GPTA0_LTCCTR28_ADDR); /* "GPTA0 Local Timer Cell Control Register 28" */
SFR_ABS (GPTA0_LTCCTR29, GPTAn_LTCCTRm_t, GPTA0_LTCCTR29_ADDR); /* "GPTA0 Local Timer Cell Control Register 29" */
SFR_ABS (GPTA0_LTCCTR30, GPTAn_LTCCTRm_t, GPTA0_LTCCTR30_ADDR); /* "GPTA0 Local Timer Cell Control Register 30" */
SFR_ABS (GPTA0_LTCCTR31, GPTAn_LTCCTRm_t, GPTA0_LTCCTR31_ADDR); /* "GPTA0 Local Timer Cell Control Register 31" */
SFR_ABS (GPTA0_LTCCTR32, GPTAn_LTCCTRm_t, GPTA0_LTCCTR32_ADDR); /* "GPTA0 Local Timer Cell Control Register 32" */
SFR_ABS (GPTA0_LTCCTR33, GPTAn_LTCCTRm_t, GPTA0_LTCCTR33_ADDR); /* "GPTA0 Local Timer Cell Control Register 33" */
SFR_ABS (GPTA0_LTCCTR34, GPTAn_LTCCTRm_t, GPTA0_LTCCTR34_ADDR); /* "GPTA0 Local Timer Cell Control Register 34" */
SFR_ABS (GPTA0_LTCCTR35, GPTAn_LTCCTRm_t, GPTA0_LTCCTR35_ADDR); /* "GPTA0 Local Timer Cell Control Register 35" */
SFR_ABS (GPTA0_LTCCTR36, GPTAn_LTCCTRm_t, GPTA0_LTCCTR36_ADDR); /* "GPTA0 Local Timer Cell Control Register 36" */
SFR_ABS (GPTA0_LTCCTR37, GPTAn_LTCCTRm_t, GPTA0_LTCCTR37_ADDR); /* "GPTA0 Local Timer Cell Control Register 37" */
SFR_ABS (GPTA0_LTCCTR38, GPTAn_LTCCTRm_t, GPTA0_LTCCTR38_ADDR); /* "GPTA0 Local Timer Cell Control Register 38" */
SFR_ABS (GPTA0_LTCCTR39, GPTAn_LTCCTRm_t, GPTA0_LTCCTR39_ADDR); /* "GPTA0 Local Timer Cell Control Register 39" */
SFR_ABS (GPTA0_LTCCTR40, GPTAn_LTCCTRm_t, GPTA0_LTCCTR40_ADDR); /* "GPTA0 Local Timer Cell Control Register 40" */
SFR_ABS (GPTA0_LTCCTR41, GPTAn_LTCCTRm_t, GPTA0_LTCCTR41_ADDR); /* "GPTA0 Local Timer Cell Control Register 41" */
SFR_ABS (GPTA0_LTCCTR42, GPTAn_LTCCTRm_t, GPTA0_LTCCTR42_ADDR); /* "GPTA0 Local Timer Cell Control Register 42" */
SFR_ABS (GPTA0_LTCCTR43, GPTAn_LTCCTRm_t, GPTA0_LTCCTR43_ADDR); /* "GPTA0 Local Timer Cell Control Register 43" */
SFR_ABS (GPTA0_LTCCTR44, GPTAn_LTCCTRm_t, GPTA0_LTCCTR44_ADDR); /* "GPTA0 Local Timer Cell Control Register 44" */
SFR_ABS (GPTA0_LTCCTR45, GPTAn_LTCCTRm_t, GPTA0_LTCCTR45_ADDR); /* "GPTA0 Local Timer Cell Control Register 45" */
SFR_ABS (GPTA0_LTCCTR46, GPTAn_LTCCTRm_t, GPTA0_LTCCTR46_ADDR); /* "GPTA0 Local Timer Cell Control Register 46" */
SFR_ABS (GPTA0_LTCCTR47, GPTAn_LTCCTRm_t, GPTA0_LTCCTR47_ADDR); /* "GPTA0 Local Timer Cell Control Register 47" */
SFR_ABS (GPTA0_LTCCTR48, GPTAn_LTCCTRm_t, GPTA0_LTCCTR48_ADDR); /* "GPTA0 Local Timer Cell Control Register 48" */
SFR_ABS (GPTA0_LTCCTR49, GPTAn_LTCCTRm_t, GPTA0_LTCCTR49_ADDR); /* "GPTA0 Local Timer Cell Control Register 49" */
SFR_ABS (GPTA0_LTCCTR50, GPTAn_LTCCTRm_t, GPTA0_LTCCTR50_ADDR); /* "GPTA0 Local Timer Cell Control Register 50" */
SFR_ABS (GPTA0_LTCCTR51, GPTAn_LTCCTRm_t, GPTA0_LTCCTR51_ADDR); /* "GPTA0 Local Timer Cell Control Register 51" */
SFR_ABS (GPTA0_LTCCTR52, GPTAn_LTCCTRm_t, GPTA0_LTCCTR52_ADDR); /* "GPTA0 Local Timer Cell Control Register 52" */
SFR_ABS (GPTA0_LTCCTR53, GPTAn_LTCCTRm_t, GPTA0_LTCCTR53_ADDR); /* "GPTA0 Local Timer Cell Control Register 53" */
SFR_ABS (GPTA0_LTCCTR54, GPTAn_LTCCTRm_t, GPTA0_LTCCTR54_ADDR); /* "GPTA0 Local Timer Cell Control Register 54" */
SFR_ABS (GPTA0_LTCCTR55, GPTAn_LTCCTRm_t, GPTA0_LTCCTR55_ADDR); /* "GPTA0 Local Timer Cell Control Register 55" */
SFR_ABS (GPTA0_LTCCTR56, GPTAn_LTCCTRm_t, GPTA0_LTCCTR56_ADDR); /* "GPTA0 Local Timer Cell Control Register 56" */
SFR_ABS (GPTA0_LTCCTR57, GPTAn_LTCCTRm_t, GPTA0_LTCCTR57_ADDR); /* "GPTA0 Local Timer Cell Control Register 57" */
SFR_ABS (GPTA0_LTCCTR58, GPTAn_LTCCTRm_t, GPTA0_LTCCTR58_ADDR); /* "GPTA0 Local Timer Cell Control Register 58" */
SFR_ABS (GPTA0_LTCCTR59, GPTAn_LTCCTRm_t, GPTA0_LTCCTR59_ADDR); /* "GPTA0 Local Timer Cell Control Register 59" */
SFR_ABS (GPTA0_LTCCTR60, GPTAn_LTCCTRm_t, GPTA0_LTCCTR60_ADDR); /* "GPTA0 Local Timer Cell Control Register 60" */
SFR_ABS (GPTA0_LTCCTR61, GPTAn_LTCCTRm_t, GPTA0_LTCCTR61_ADDR); /* "GPTA0 Local Timer Cell Control Register 61" */
SFR_ABS (GPTA0_LTCCTR62, GPTAn_LTCCTRm_t, GPTA0_LTCCTR62_ADDR); /* "GPTA0 Local Timer Cell Control Register 62" */
SFR_ABS (GPTA0_LTCCTR63, GPTAn_LTCCTR63_t, GPTA0_LTCCTR63_ADDR); /* "GPTA0 Local Timer Cell Control Register 63" */
SFR_ABS (GPTA0_LTCXR00, GPTAn_LTCXRm_t, GPTA0_LTCXR00_ADDR); /* "GPTA0 Local Timer Cell X Register 00" */
SFR_ABS (GPTA0_LTCXR01, GPTAn_LTCXRm_t, GPTA0_LTCXR01_ADDR); /* "GPTA0 Local Timer Cell X Register 01" */
SFR_ABS (GPTA0_LTCXR02, GPTAn_LTCXRm_t, GPTA0_LTCXR02_ADDR); /* "GPTA0 Local Timer Cell X Register 02" */
SFR_ABS (GPTA0_LTCXR03, GPTAn_LTCXRm_t, GPTA0_LTCXR03_ADDR); /* "GPTA0 Local Timer Cell X Register 03" */
SFR_ABS (GPTA0_LTCXR04, GPTAn_LTCXRm_t, GPTA0_LTCXR04_ADDR); /* "GPTA0 Local Timer Cell X Register 04" */
SFR_ABS (GPTA0_LTCXR05, GPTAn_LTCXRm_t, GPTA0_LTCXR05_ADDR); /* "GPTA0 Local Timer Cell X Register 05" */
SFR_ABS (GPTA0_LTCXR06, GPTAn_LTCXRm_t, GPTA0_LTCXR06_ADDR); /* "GPTA0 Local Timer Cell X Register 06" */
SFR_ABS (GPTA0_LTCXR07, GPTAn_LTCXRm_t, GPTA0_LTCXR07_ADDR); /* "GPTA0 Local Timer Cell X Register 07" */
SFR_ABS (GPTA0_LTCXR08, GPTAn_LTCXRm_t, GPTA0_LTCXR08_ADDR); /* "GPTA0 Local Timer Cell X Register 08" */
SFR_ABS (GPTA0_LTCXR09, GPTAn_LTCXRm_t, GPTA0_LTCXR09_ADDR); /* "GPTA0 Local Timer Cell X Register 09" */
SFR_ABS (GPTA0_LTCXR10, GPTAn_LTCXRm_t, GPTA0_LTCXR10_ADDR); /* "GPTA0 Local Timer Cell X Register 10" */
SFR_ABS (GPTA0_LTCXR11, GPTAn_LTCXRm_t, GPTA0_LTCXR11_ADDR); /* "GPTA0 Local Timer Cell X Register 11" */
SFR_ABS (GPTA0_LTCXR12, GPTAn_LTCXRm_t, GPTA0_LTCXR12_ADDR); /* "GPTA0 Local Timer Cell X Register 12" */
SFR_ABS (GPTA0_LTCXR13, GPTAn_LTCXRm_t, GPTA0_LTCXR13_ADDR); /* "GPTA0 Local Timer Cell X Register 13" */
SFR_ABS (GPTA0_LTCXR14, GPTAn_LTCXRm_t, GPTA0_LTCXR14_ADDR); /* "GPTA0 Local Timer Cell X Register 14" */
SFR_ABS (GPTA0_LTCXR15, GPTAn_LTCXRm_t, GPTA0_LTCXR15_ADDR); /* "GPTA0 Local Timer Cell X Register 15" */
SFR_ABS (GPTA0_LTCXR16, GPTAn_LTCXRm_t, GPTA0_LTCXR16_ADDR); /* "GPTA0 Local Timer Cell X Register 16" */
SFR_ABS (GPTA0_LTCXR17, GPTAn_LTCXRm_t, GPTA0_LTCXR17_ADDR); /* "GPTA0 Local Timer Cell X Register 17" */
SFR_ABS (GPTA0_LTCXR18, GPTAn_LTCXRm_t, GPTA0_LTCXR18_ADDR); /* "GPTA0 Local Timer Cell X Register 18" */
SFR_ABS (GPTA0_LTCXR19, GPTAn_LTCXRm_t, GPTA0_LTCXR19_ADDR); /* "GPTA0 Local Timer Cell X Register 19" */
SFR_ABS (GPTA0_LTCXR20, GPTAn_LTCXRm_t, GPTA0_LTCXR20_ADDR); /* "GPTA0 Local Timer Cell X Register 20" */
SFR_ABS (GPTA0_LTCXR21, GPTAn_LTCXRm_t, GPTA0_LTCXR21_ADDR); /* "GPTA0 Local Timer Cell X Register 21" */
SFR_ABS (GPTA0_LTCXR22, GPTAn_LTCXRm_t, GPTA0_LTCXR22_ADDR); /* "GPTA0 Local Timer Cell X Register 22" */
SFR_ABS (GPTA0_LTCXR23, GPTAn_LTCXRm_t, GPTA0_LTCXR23_ADDR); /* "GPTA0 Local Timer Cell X Register 23" */
SFR_ABS (GPTA0_LTCXR24, GPTAn_LTCXRm_t, GPTA0_LTCXR24_ADDR); /* "GPTA0 Local Timer Cell X Register 24" */
SFR_ABS (GPTA0_LTCXR25, GPTAn_LTCXRm_t, GPTA0_LTCXR25_ADDR); /* "GPTA0 Local Timer Cell X Register 25" */
SFR_ABS (GPTA0_LTCXR26, GPTAn_LTCXRm_t, GPTA0_LTCXR26_ADDR); /* "GPTA0 Local Timer Cell X Register 26" */
SFR_ABS (GPTA0_LTCXR27, GPTAn_LTCXRm_t, GPTA0_LTCXR27_ADDR); /* "GPTA0 Local Timer Cell X Register 27" */
SFR_ABS (GPTA0_LTCXR28, GPTAn_LTCXRm_t, GPTA0_LTCXR28_ADDR); /* "GPTA0 Local Timer Cell X Register 28" */
SFR_ABS (GPTA0_LTCXR29, GPTAn_LTCXRm_t, GPTA0_LTCXR29_ADDR); /* "GPTA0 Local Timer Cell X Register 29" */
SFR_ABS (GPTA0_LTCXR30, GPTAn_LTCXRm_t, GPTA0_LTCXR30_ADDR); /* "GPTA0 Local Timer Cell X Register 30" */
SFR_ABS (GPTA0_LTCXR31, GPTAn_LTCXRm_t, GPTA0_LTCXR31_ADDR); /* "GPTA0 Local Timer Cell X Register 31" */
SFR_ABS (GPTA0_LTCXR32, GPTAn_LTCXRm_t, GPTA0_LTCXR32_ADDR); /* "GPTA0 Local Timer Cell X Register 32" */
SFR_ABS (GPTA0_LTCXR33, GPTAn_LTCXRm_t, GPTA0_LTCXR33_ADDR); /* "GPTA0 Local Timer Cell X Register 33" */
SFR_ABS (GPTA0_LTCXR34, GPTAn_LTCXRm_t, GPTA0_LTCXR34_ADDR); /* "GPTA0 Local Timer Cell X Register 34" */
SFR_ABS (GPTA0_LTCXR35, GPTAn_LTCXRm_t, GPTA0_LTCXR35_ADDR); /* "GPTA0 Local Timer Cell X Register 35" */
SFR_ABS (GPTA0_LTCXR36, GPTAn_LTCXRm_t, GPTA0_LTCXR36_ADDR); /* "GPTA0 Local Timer Cell X Register 36" */
SFR_ABS (GPTA0_LTCXR37, GPTAn_LTCXRm_t, GPTA0_LTCXR37_ADDR); /* "GPTA0 Local Timer Cell X Register 37" */
SFR_ABS (GPTA0_LTCXR38, GPTAn_LTCXRm_t, GPTA0_LTCXR38_ADDR); /* "GPTA0 Local Timer Cell X Register 38" */
SFR_ABS (GPTA0_LTCXR39, GPTAn_LTCXRm_t, GPTA0_LTCXR39_ADDR); /* "GPTA0 Local Timer Cell X Register 39" */
SFR_ABS (GPTA0_LTCXR40, GPTAn_LTCXRm_t, GPTA0_LTCXR40_ADDR); /* "GPTA0 Local Timer Cell X Register 40" */
SFR_ABS (GPTA0_LTCXR41, GPTAn_LTCXRm_t, GPTA0_LTCXR41_ADDR); /* "GPTA0 Local Timer Cell X Register 41" */
SFR_ABS (GPTA0_LTCXR42, GPTAn_LTCXRm_t, GPTA0_LTCXR42_ADDR); /* "GPTA0 Local Timer Cell X Register 42" */
SFR_ABS (GPTA0_LTCXR43, GPTAn_LTCXRm_t, GPTA0_LTCXR43_ADDR); /* "GPTA0 Local Timer Cell X Register 43" */
SFR_ABS (GPTA0_LTCXR44, GPTAn_LTCXRm_t, GPTA0_LTCXR44_ADDR); /* "GPTA0 Local Timer Cell X Register 44" */
SFR_ABS (GPTA0_LTCXR45, GPTAn_LTCXRm_t, GPTA0_LTCXR45_ADDR); /* "GPTA0 Local Timer Cell X Register 45" */
SFR_ABS (GPTA0_LTCXR46, GPTAn_LTCXRm_t, GPTA0_LTCXR46_ADDR); /* "GPTA0 Local Timer Cell X Register 46" */
SFR_ABS (GPTA0_LTCXR47, GPTAn_LTCXRm_t, GPTA0_LTCXR47_ADDR); /* "GPTA0 Local Timer Cell X Register 47" */
SFR_ABS (GPTA0_LTCXR48, GPTAn_LTCXRm_t, GPTA0_LTCXR48_ADDR); /* "GPTA0 Local Timer Cell X Register 48" */
SFR_ABS (GPTA0_LTCXR49, GPTAn_LTCXRm_t, GPTA0_LTCXR49_ADDR); /* "GPTA0 Local Timer Cell X Register 49" */
SFR_ABS (GPTA0_LTCXR50, GPTAn_LTCXRm_t, GPTA0_LTCXR50_ADDR); /* "GPTA0 Local Timer Cell X Register 50" */
SFR_ABS (GPTA0_LTCXR51, GPTAn_LTCXRm_t, GPTA0_LTCXR51_ADDR); /* "GPTA0 Local Timer Cell X Register 51" */
SFR_ABS (GPTA0_LTCXR52, GPTAn_LTCXRm_t, GPTA0_LTCXR52_ADDR); /* "GPTA0 Local Timer Cell X Register 52" */
SFR_ABS (GPTA0_LTCXR53, GPTAn_LTCXRm_t, GPTA0_LTCXR53_ADDR); /* "GPTA0 Local Timer Cell X Register 53" */
SFR_ABS (GPTA0_LTCXR54, GPTAn_LTCXRm_t, GPTA0_LTCXR54_ADDR); /* "GPTA0 Local Timer Cell X Register 54" */
SFR_ABS (GPTA0_LTCXR55, GPTAn_LTCXRm_t, GPTA0_LTCXR55_ADDR); /* "GPTA0 Local Timer Cell X Register 55" */
SFR_ABS (GPTA0_LTCXR56, GPTAn_LTCXRm_t, GPTA0_LTCXR56_ADDR); /* "GPTA0 Local Timer Cell X Register 56" */
SFR_ABS (GPTA0_LTCXR57, GPTAn_LTCXRm_t, GPTA0_LTCXR57_ADDR); /* "GPTA0 Local Timer Cell X Register 57" */
SFR_ABS (GPTA0_LTCXR58, GPTAn_LTCXRm_t, GPTA0_LTCXR58_ADDR); /* "GPTA0 Local Timer Cell X Register 58" */
SFR_ABS (GPTA0_LTCXR59, GPTAn_LTCXRm_t, GPTA0_LTCXR59_ADDR); /* "GPTA0 Local Timer Cell X Register 59" */
SFR_ABS (GPTA0_LTCXR60, GPTAn_LTCXRm_t, GPTA0_LTCXR60_ADDR); /* "GPTA0 Local Timer Cell X Register 60" */
SFR_ABS (GPTA0_LTCXR61, GPTAn_LTCXRm_t, GPTA0_LTCXR61_ADDR); /* "GPTA0 Local Timer Cell X Register 61" */
SFR_ABS (GPTA0_LTCXR62, GPTAn_LTCXRm_t, GPTA0_LTCXR62_ADDR); /* "GPTA0 Local Timer Cell X Register 62" */
SFR_ABS (GPTA0_LTCXR63, GPTAn_LTCXR63_t, GPTA0_LTCXR63_ADDR); /* "GPTA0 Local Timer Cell X Register 63" */
SFR_ABS (GPTA0_MMXCTR00, GPTA0_MMXCTRm_t, GPTA0_MMXCTR00_ADDR); /* "GPTA-to-MSC Multiplexer Control Register 00" */
SFR_ABS (GPTA0_MMXCTR01, GPTA0_MMXCTRm_t, GPTA0_MMXCTR01_ADDR); /* "GPTA-to-MSC Multiplexer Control Register 01" */
SFR_ABS (GPTA0_MMXCTR10, GPTA0_MMXCTRm_t, GPTA0_MMXCTR10_ADDR); /* "GPTA-to-MSC Multiplexer Control Register 10" */
SFR_ABS (GPTA0_MMXCTR11, GPTA0_MMXCTR11_t, GPTA0_MMXCTR11_ADDR); /* "GPTA-to-MSC Multiplexer Control Register 11" */
SFR_ABS (GPTA0_MRACTL, GPTAn_MRACTL_t, GPTA0_MRACTL_ADDR); /* "GPTA0 Multiplexer Register Array Control Register" */
SFR_ABS (GPTA0_MRADIN, GPTAn_MRADIN_t, GPTA0_MRADIN_ADDR); /* "GPTA0 Multiplexer Register Array Data In Register" */
SFR_ABS (GPTA0_MRADOUT, GPTAn_MRADOUT_t, GPTA0_MRADOUT_ADDR); /* "GPTA0 Multiplexer Register Array Data Out Register" */
SFR_ABS (GPTA0_PDLCTR, GPTAn_PDLCTR_t, GPTA0_PDLCTR_ADDR); /* "GPTA0 Phase Discrimination Logic Control Register" */
SFR_ABS (GPTA0_PLLCNT, GPTAn_PLLCNT_t, GPTA0_PLLCNT_ADDR); /* "GPTA0 Phase Locked Loop Counter Register" */
SFR_ABS (GPTA0_PLLCTR, GPTAn_PLLCTR_t, GPTA0_PLLCTR_ADDR); /* "GPTA0 Phase Locked Loop Control Register" */
SFR_ABS (GPTA0_PLLDTR, GPTAn_PLLDTR_t, GPTA0_PLLDTR_ADDR); /* "GPTA0 Phase Locked Loop Delta Register" */
SFR_ABS (GPTA0_PLLMTI, GPTAn_PLLMTI_t, GPTA0_PLLMTI_ADDR); /* "GPTA0 Phase Locked Loop Microtick Register" */
SFR_ABS (GPTA0_PLLREV, GPTAn_PLLREV_t, GPTA0_PLLREV_ADDR); /* "GPTA0 Phase Locked Loop Reload Register" */
SFR_ABS (GPTA0_PLLSTP, GPTAn_PLLSTP_t, GPTA0_PLLSTP_ADDR); /* "GPTA0 Phase Locked Loop Step Register" */
SFR_ABS (GPTA0_SRC00, GPTAn_SRCm_t, GPTA0_SRC00_ADDR); /* "GPTA0 Interrupt Service Request Control Register 00" */
SFR_ABS (GPTA0_SRC01, GPTAn_SRCm_t, GPTA0_SRC01_ADDR); /* "GPTA0 Interrupt Service Request Control Register 01" */
SFR_ABS (GPTA0_SRC02, GPTAn_SRCm_t, GPTA0_SRC02_ADDR); /* "GPTA0 Interrupt Service Request Control Register 02" */
SFR_ABS (GPTA0_SRC03, GPTAn_SRCm_t, GPTA0_SRC03_ADDR); /* "GPTA0 Interrupt Service Request Control Register 03" */
SFR_ABS (GPTA0_SRC04, GPTAn_SRCm_t, GPTA0_SRC04_ADDR); /* "GPTA0 Interrupt Service Request Control Register 04" */
SFR_ABS (GPTA0_SRC05, GPTAn_SRCm_t, GPTA0_SRC05_ADDR); /* "GPTA0 Interrupt Service Request Control Register 05" */
SFR_ABS (GPTA0_SRC06, GPTAn_SRCm_t, GPTA0_SRC06_ADDR); /* "GPTA0 Interrupt Service Request Control Register 06" */
SFR_ABS (GPTA0_SRC07, GPTAn_SRCm_t, GPTA0_SRC07_ADDR); /* "GPTA0 Interrupt Service Request Control Register 07" */
SFR_ABS (GPTA0_SRC08, GPTAn_SRCm_t, GPTA0_SRC08_ADDR); /* "GPTA0 Interrupt Service Request Control Register 08" */
SFR_ABS (GPTA0_SRC09, GPTAn_SRCm_t, GPTA0_SRC09_ADDR); /* "GPTA0 Interrupt Service Request Control Register 09" */
SFR_ABS (GPTA0_SRC10, GPTAn_SRCm_t, GPTA0_SRC10_ADDR); /* "GPTA0 Interrupt Service Request Control Register 10" */
SFR_ABS (GPTA0_SRC11, GPTAn_SRCm_t, GPTA0_SRC11_ADDR); /* "GPTA0 Interrupt Service Request Control Register 11" */
SFR_ABS (GPTA0_SRC12, GPTAn_SRCm_t, GPTA0_SRC12_ADDR); /* "GPTA0 Interrupt Service Request Control Register 12" */
SFR_ABS (GPTA0_SRC13, GPTAn_SRCm_t, GPTA0_SRC13_ADDR); /* "GPTA0 Interrupt Service Request Control Register 13" */
SFR_ABS (GPTA0_SRC14, GPTAn_SRCm_t, GPTA0_SRC14_ADDR); /* "GPTA0 Interrupt Service Request Control Register 14" */
SFR_ABS (GPTA0_SRC15, GPTAn_SRCm_t, GPTA0_SRC15_ADDR); /* "GPTA0 Interrupt Service Request Control Register 15" */
SFR_ABS (GPTA0_SRC16, GPTAn_SRCm_t, GPTA0_SRC16_ADDR); /* "GPTA0 Interrupt Service Request Control Register 16" */
SFR_ABS (GPTA0_SRC17, GPTAn_SRCm_t, GPTA0_SRC17_ADDR); /* "GPTA0 Interrupt Service Request Control Register 17" */
SFR_ABS (GPTA0_SRC18, GPTAn_SRCm_t, GPTA0_SRC18_ADDR); /* "GPTA0 Interrupt Service Request Control Register 18" */
SFR_ABS (GPTA0_SRC19, GPTAn_SRCm_t, GPTA0_SRC19_ADDR); /* "GPTA0 Interrupt Service Request Control Register 19" */
SFR_ABS (GPTA0_SRC20, GPTAn_SRCm_t, GPTA0_SRC20_ADDR); /* "GPTA0 Interrupt Service Request Control Register 20" */
SFR_ABS (GPTA0_SRC21, GPTAn_SRCm_t, GPTA0_SRC21_ADDR); /* "GPTA0 Interrupt Service Request Control Register 21" */
SFR_ABS (GPTA0_SRC22, GPTAn_SRCm_t, GPTA0_SRC22_ADDR); /* "GPTA0 Interrupt Service Request Control Register 22" */
SFR_ABS (GPTA0_SRC23, GPTAn_SRCm_t, GPTA0_SRC23_ADDR); /* "GPTA0 Interrupt Service Request Control Register 23" */
SFR_ABS (GPTA0_SRC24, GPTAn_SRCm_t, GPTA0_SRC24_ADDR); /* "GPTA0 Interrupt Service Request Control Register 24" */
SFR_ABS (GPTA0_SRC25, GPTAn_SRCm_t, GPTA0_SRC25_ADDR); /* "GPTA0 Interrupt Service Request Control Register 25" */
SFR_ABS (GPTA0_SRC26, GPTAn_SRCm_t, GPTA0_SRC26_ADDR); /* "GPTA0 Interrupt Service Request Control Register 26" */
SFR_ABS (GPTA0_SRC27, GPTAn_SRCm_t, GPTA0_SRC27_ADDR); /* "GPTA0 Interrupt Service Request Control Register 27" */
SFR_ABS (GPTA0_SRC28, GPTAn_SRCm_t, GPTA0_SRC28_ADDR); /* "GPTA0 Interrupt Service Request Control Register 28" */
SFR_ABS (GPTA0_SRC29, GPTAn_SRCm_t, GPTA0_SRC29_ADDR); /* "GPTA0 Interrupt Service Request Control Register 29" */
SFR_ABS (GPTA0_SRC30, GPTAn_SRCm_t, GPTA0_SRC30_ADDR); /* "GPTA0 Interrupt Service Request Control Register 30" */
SFR_ABS (GPTA0_SRC31, GPTAn_SRCm_t, GPTA0_SRC31_ADDR); /* "GPTA0 Interrupt Service Request Control Register 31" */
SFR_ABS (GPTA0_SRC32, GPTAn_SRCm_t, GPTA0_SRC32_ADDR); /* "GPTA0 Interrupt Service Request Control Register 32" */
SFR_ABS (GPTA0_SRC33, GPTAn_SRCm_t, GPTA0_SRC33_ADDR); /* "GPTA0 Interrupt Service Request Control Register 33" */
SFR_ABS (GPTA0_SRC34, GPTAn_SRCm_t, GPTA0_SRC34_ADDR); /* "GPTA0 Interrupt Service Request Control Register 34" */
SFR_ABS (GPTA0_SRC35, GPTAn_SRCm_t, GPTA0_SRC35_ADDR); /* "GPTA0 Interrupt Service Request Control Register 35" */
SFR_ABS (GPTA0_SRC36, GPTAn_SRCm_t, GPTA0_SRC36_ADDR); /* "GPTA0 Interrupt Service Request Control Register 36" */
SFR_ABS (GPTA0_SRC37, GPTAn_SRCm_t, GPTA0_SRC37_ADDR); /* "GPTA0 Interrupt Service Request Control Register 37" */
SFR_ABS (GPTA0_SRNR, GPTAn_SRNR_t, GPTA0_SRNR_ADDR); /* "GPTA0 Service Request Node Redirection Register" */
SFR_ABS (GPTA0_SRSC0, GPTAn_SRSC0_t, GPTA0_SRSC0_ADDR); /* "GPTA0 Service Request State Clear Register 0" */
SFR_ABS (GPTA0_SRSC1, GPTAn_SRSC1_t, GPTA0_SRSC1_ADDR); /* "GPTA0 Service Request State Clear Register 1" */
SFR_ABS (GPTA0_SRSC2, GPTAn_SRSCm_t, GPTA0_SRSC2_ADDR); /* "GPTA0 Service Request State Clear Register 2" */
SFR_ABS (GPTA0_SRSC3, GPTAn_SRSCm_t, GPTA0_SRSC3_ADDR); /* "GPTA0 Service Request State Clear Register 3" */
SFR_ABS (GPTA0_SRSS0, GPTAn_SRSS0_t, GPTA0_SRSS0_ADDR); /* "GPTA0 Service Request State Set Register 0" */
SFR_ABS (GPTA0_SRSS1, GPTAn_SRSS1_t, GPTA0_SRSS1_ADDR); /* "GPTA0 Service Request State Set Register 1" */
SFR_ABS (GPTA0_SRSS2, GPTAn_SRSSm_t, GPTA0_SRSS2_ADDR); /* "GPTA0 Service Request State Set Register 2" */
SFR_ABS (GPTA0_SRSS3, GPTAn_SRSSm_t, GPTA0_SRSS3_ADDR); /* "GPTA0 Service Request State Set Register 3" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_GPTA0_H_ (block "GPTA0") */


