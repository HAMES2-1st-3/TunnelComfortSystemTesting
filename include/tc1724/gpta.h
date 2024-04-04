/* (c) HighTec EDV-Systeme GmbH */

/* block "GPTA" of TriCore TC1724 (290 SFRs) */

#include <tc1724/gpta/addr.h>

#include <tc1724/gpta/masks.h>
#include <tc1724/gpta/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1724/gpta/types.h>
#include <tc1724/gpta/sharetypes.h>

#ifndef _HAVE_TRICORE_GPTA_H_
#define _HAVE_TRICORE_GPTA_H_

#include <tricore-abs-noabs.h>

SFR_ABS (GPTA0_CKBCTR, GPTA0_CKBCTR_t, GPTA0_CKBCTR_ADDR); /* "GPTA0 Clock Bus Control Register" */
SFR_ABS (GPTA0_CLC, GPTA0_CLC_t, GPTA0_CLC_ADDR); /* "GPTA Clock Control Register" */
SFR_ABS (GPTA0_DBGCTR, GPTA0_DBGCTR_t, GPTA0_DBGCTR_ADDR); /* "GPTA Debug Clock Control Register" */
SFR_ABS (GPTA0_DCMCAV0, GPTA0_DCMCAVm_t, GPTA0_DCMCAV0_ADDR); /* "GPTA0 Duty Cycle Measurement Capture Register 0" */
SFR_ABS (GPTA0_DCMCAV1, GPTA0_DCMCAVm_t, GPTA0_DCMCAV1_ADDR); /* "GPTA0 Duty Cycle Measurement Capture Register 1" */
SFR_ABS (GPTA0_DCMCAV2, GPTA0_DCMCAVm_t, GPTA0_DCMCAV2_ADDR); /* "GPTA0 Duty Cycle Measurement Capture Register 2" */
SFR_ABS (GPTA0_DCMCAV3, GPTA0_DCMCAVm_t, GPTA0_DCMCAV3_ADDR); /* "GPTA0 Duty Cycle Measurement Capture Register 3" */
SFR_ABS (GPTA0_DCMCOV0, GPTA0_DCMCOVm_t, GPTA0_DCMCOV0_ADDR); /* "GPTA0 Duty Cycle Measurement Capture/Compare Register 0" */
SFR_ABS (GPTA0_DCMCOV1, GPTA0_DCMCOVm_t, GPTA0_DCMCOV1_ADDR); /* "GPTA0 Duty Cycle Measurement Capture/Compare Register 1" */
SFR_ABS (GPTA0_DCMCOV2, GPTA0_DCMCOVm_t, GPTA0_DCMCOV2_ADDR); /* "GPTA0 Duty Cycle Measurement Capture/Compare Register 2" */
SFR_ABS (GPTA0_DCMCOV3, GPTA0_DCMCOVm_t, GPTA0_DCMCOV3_ADDR); /* "GPTA0 Duty Cycle Measurement Capture/Compare Register 3" */
SFR_ABS (GPTA0_DCMCTR0, GPTA0_DCMCTRm_t, GPTA0_DCMCTR0_ADDR); /* "GPTA0 Duty Cycle Measurement Control Register 0" */
SFR_ABS (GPTA0_DCMCTR1, GPTA0_DCMCTRm_t, GPTA0_DCMCTR1_ADDR); /* "GPTA0 Duty Cycle Measurement Control Register 1" */
SFR_ABS (GPTA0_DCMCTR2, GPTA0_DCMCTRm_t, GPTA0_DCMCTR2_ADDR); /* "GPTA0 Duty Cycle Measurement Control Register 2" */
SFR_ABS (GPTA0_DCMCTR3, GPTA0_DCMCTRm_t, GPTA0_DCMCTR3_ADDR); /* "GPTA0 Duty Cycle Measurement Control Register 3" */
SFR_ABS (GPTA0_DCMTIM0, GPTA0_DCMTIMm_t, GPTA0_DCMTIM0_ADDR); /* "GPTA0 Duty Cycle Measurement Timer Register 0" */
SFR_ABS (GPTA0_DCMTIM1, GPTA0_DCMTIMm_t, GPTA0_DCMTIM1_ADDR); /* "GPTA0 Duty Cycle Measurement Timer Register 1" */
SFR_ABS (GPTA0_DCMTIM2, GPTA0_DCMTIMm_t, GPTA0_DCMTIM2_ADDR); /* "GPTA0 Duty Cycle Measurement Timer Register 2" */
SFR_ABS (GPTA0_DCMTIM3, GPTA0_DCMTIMm_t, GPTA0_DCMTIM3_ADDR); /* "GPTA0 Duty Cycle Measurement Timer Register 3" */
SFR_ABS (GPTA0_EDCTR, GPTA0_EDCTR_t, GPTA0_EDCTR_ADDR); /* "GPTA Clock Enable/Disable Control Register" */
SFR_ABS (GPTA0_FDR, GPTA0_FDR_t, GPTA0_FDR_ADDR); /* "GPTA Fractional Divider Register" */
SFR_ABS (GPTA0_FPCCTR0, GPTA0_FPCCTRm_t, GPTA0_FPCCTR0_ADDR); /* "GPTA0 Filter and Prescaler Cell Control Register 0" */
SFR_ABS (GPTA0_FPCCTR1, GPTA0_FPCCTRm_t, GPTA0_FPCCTR1_ADDR); /* "GPTA0 Filter and Prescaler Cell Control Register 1" */
SFR_ABS (GPTA0_FPCCTR2, GPTA0_FPCCTRm_t, GPTA0_FPCCTR2_ADDR); /* "GPTA0 Filter and Prescaler Cell Control Register 2" */
SFR_ABS (GPTA0_FPCCTR3, GPTA0_FPCCTRm_t, GPTA0_FPCCTR3_ADDR); /* "GPTA0 Filter and Prescaler Cell Control Register 3" */
SFR_ABS (GPTA0_FPCCTR4, GPTA0_FPCCTRm_t, GPTA0_FPCCTR4_ADDR); /* "GPTA0 Filter and Prescaler Cell Control Register 4" */
SFR_ABS (GPTA0_FPCCTR5, GPTA0_FPCCTRm_t, GPTA0_FPCCTR5_ADDR); /* "GPTA0 Filter and Prescaler Cell Control Register 5" */
SFR_ABS (GPTA0_FPCSTAT, GPTA0_FPCSTAT_t, GPTA0_FPCSTAT_ADDR); /* "GPTA0 Filter and Prescaler Cell Status Register" */
SFR_ABS (GPTA0_FPCTIM0, GPTA0_FPCTIMm_t, GPTA0_FPCTIM0_ADDR); /* "GPTA0 Filter and Prescaler Cell Timer Register 0" */
SFR_ABS (GPTA0_FPCTIM1, GPTA0_FPCTIMm_t, GPTA0_FPCTIM1_ADDR); /* "GPTA0 Filter and Prescaler Cell Timer Register 1" */
SFR_ABS (GPTA0_FPCTIM2, GPTA0_FPCTIMm_t, GPTA0_FPCTIM2_ADDR); /* "GPTA0 Filter and Prescaler Cell Timer Register 2" */
SFR_ABS (GPTA0_FPCTIM3, GPTA0_FPCTIMm_t, GPTA0_FPCTIM3_ADDR); /* "GPTA0 Filter and Prescaler Cell Timer Register 3" */
SFR_ABS (GPTA0_FPCTIM4, GPTA0_FPCTIMm_t, GPTA0_FPCTIM4_ADDR); /* "GPTA0 Filter and Prescaler Cell Timer Register 4" */
SFR_ABS (GPTA0_FPCTIM5, GPTA0_FPCTIMm_t, GPTA0_FPCTIM5_ADDR); /* "GPTA0 Filter and Prescaler Cell Timer Register 5" */
SFR_ABS (GPTA0_GTCCTR00, GPTA0_GTCCTRm_t, GPTA0_GTCCTR00_ADDR); /* "GPTA0 Global Timer Cell Control Register 00" */
SFR_ABS (GPTA0_GTCCTR01, GPTA0_GTCCTRm_t, GPTA0_GTCCTR01_ADDR); /* "GPTA0 Global Timer Cell Control Register 01" */
SFR_ABS (GPTA0_GTCCTR02, GPTA0_GTCCTRm_t, GPTA0_GTCCTR02_ADDR); /* "GPTA0 Global Timer Cell Control Register 02" */
SFR_ABS (GPTA0_GTCCTR03, GPTA0_GTCCTRm_t, GPTA0_GTCCTR03_ADDR); /* "GPTA0 Global Timer Cell Control Register 03" */
SFR_ABS (GPTA0_GTCCTR04, GPTA0_GTCCTRm_t, GPTA0_GTCCTR04_ADDR); /* "GPTA0 Global Timer Cell Control Register 04" */
SFR_ABS (GPTA0_GTCCTR05, GPTA0_GTCCTRm_t, GPTA0_GTCCTR05_ADDR); /* "GPTA0 Global Timer Cell Control Register 05" */
SFR_ABS (GPTA0_GTCCTR06, GPTA0_GTCCTRm_t, GPTA0_GTCCTR06_ADDR); /* "GPTA0 Global Timer Cell Control Register 06" */
SFR_ABS (GPTA0_GTCCTR07, GPTA0_GTCCTRm_t, GPTA0_GTCCTR07_ADDR); /* "GPTA0 Global Timer Cell Control Register 07" */
SFR_ABS (GPTA0_GTCCTR08, GPTA0_GTCCTRm_t, GPTA0_GTCCTR08_ADDR); /* "GPTA0 Global Timer Cell Control Register 08" */
SFR_ABS (GPTA0_GTCCTR09, GPTA0_GTCCTRm_t, GPTA0_GTCCTR09_ADDR); /* "GPTA0 Global Timer Cell Control Register 09" */
SFR_ABS (GPTA0_GTCCTR10, GPTA0_GTCCTRm_t, GPTA0_GTCCTR10_ADDR); /* "GPTA0 Global Timer Cell Control Register 10" */
SFR_ABS (GPTA0_GTCCTR11, GPTA0_GTCCTRm_t, GPTA0_GTCCTR11_ADDR); /* "GPTA0 Global Timer Cell Control Register 11" */
SFR_ABS (GPTA0_GTCCTR12, GPTA0_GTCCTRm_t, GPTA0_GTCCTR12_ADDR); /* "GPTA0 Global Timer Cell Control Register 12" */
SFR_ABS (GPTA0_GTCCTR13, GPTA0_GTCCTRm_t, GPTA0_GTCCTR13_ADDR); /* "GPTA0 Global Timer Cell Control Register 13" */
SFR_ABS (GPTA0_GTCCTR14, GPTA0_GTCCTRm_t, GPTA0_GTCCTR14_ADDR); /* "GPTA0 Global Timer Cell Control Register 14" */
SFR_ABS (GPTA0_GTCCTR15, GPTA0_GTCCTRm_t, GPTA0_GTCCTR15_ADDR); /* "GPTA0 Global Timer Cell Control Register 15" */
SFR_ABS (GPTA0_GTCCTR16, GPTA0_GTCCTRm_t, GPTA0_GTCCTR16_ADDR); /* "GPTA0 Global Timer Cell Control Register 16" */
SFR_ABS (GPTA0_GTCCTR17, GPTA0_GTCCTRm_t, GPTA0_GTCCTR17_ADDR); /* "GPTA0 Global Timer Cell Control Register 17" */
SFR_ABS (GPTA0_GTCCTR18, GPTA0_GTCCTRm_t, GPTA0_GTCCTR18_ADDR); /* "GPTA0 Global Timer Cell Control Register 18" */
SFR_ABS (GPTA0_GTCCTR19, GPTA0_GTCCTRm_t, GPTA0_GTCCTR19_ADDR); /* "GPTA0 Global Timer Cell Control Register 19" */
SFR_ABS (GPTA0_GTCCTR20, GPTA0_GTCCTRm_t, GPTA0_GTCCTR20_ADDR); /* "GPTA0 Global Timer Cell Control Register 20" */
SFR_ABS (GPTA0_GTCCTR21, GPTA0_GTCCTRm_t, GPTA0_GTCCTR21_ADDR); /* "GPTA0 Global Timer Cell Control Register 21" */
SFR_ABS (GPTA0_GTCCTR22, GPTA0_GTCCTRm_t, GPTA0_GTCCTR22_ADDR); /* "GPTA0 Global Timer Cell Control Register 22" */
SFR_ABS (GPTA0_GTCCTR23, GPTA0_GTCCTRm_t, GPTA0_GTCCTR23_ADDR); /* "GPTA0 Global Timer Cell Control Register 23" */
SFR_ABS (GPTA0_GTCCTR24, GPTA0_GTCCTRm_t, GPTA0_GTCCTR24_ADDR); /* "GPTA0 Global Timer Cell Control Register 24" */
SFR_ABS (GPTA0_GTCCTR25, GPTA0_GTCCTRm_t, GPTA0_GTCCTR25_ADDR); /* "GPTA0 Global Timer Cell Control Register 25" */
SFR_ABS (GPTA0_GTCCTR26, GPTA0_GTCCTRm_t, GPTA0_GTCCTR26_ADDR); /* "GPTA0 Global Timer Cell Control Register 26" */
SFR_ABS (GPTA0_GTCCTR27, GPTA0_GTCCTRm_t, GPTA0_GTCCTR27_ADDR); /* "GPTA0 Global Timer Cell Control Register 27" */
SFR_ABS (GPTA0_GTCCTR28, GPTA0_GTCCTRm_t, GPTA0_GTCCTR28_ADDR); /* "GPTA0 Global Timer Cell Control Register 28" */
SFR_ABS (GPTA0_GTCCTR29, GPTA0_GTCCTRm_t, GPTA0_GTCCTR29_ADDR); /* "GPTA0 Global Timer Cell Control Register 29" */
SFR_ABS (GPTA0_GTCCTR30, GPTA0_GTCCTRm_t, GPTA0_GTCCTR30_ADDR); /* "GPTA0 Global Timer Cell Control Register 30" */
SFR_ABS (GPTA0_GTCCTR31, GPTA0_GTCCTRm_t, GPTA0_GTCCTR31_ADDR); /* "GPTA0 Global Timer Cell Control Register 31" */
SFR_ABS (GPTA0_GTCTR0, GPTA0_GTCTRm_t, GPTA0_GTCTR0_ADDR); /* "GPTA0 Global Timer Control Register 0" */
SFR_ABS (GPTA0_GTCTR1, GPTA0_GTCTRm_t, GPTA0_GTCTR1_ADDR); /* "GPTA0 Global Timer Control Register 1" */
SFR_ABS (GPTA0_GTCXR00, GPTA0_GTCXRm_t, GPTA0_GTCXR00_ADDR); /* "GPTA0 Global Timer Cell X Register 00" */
SFR_ABS (GPTA0_GTCXR01, GPTA0_GTCXRm_t, GPTA0_GTCXR01_ADDR); /* "GPTA0 Global Timer Cell X Register 01" */
SFR_ABS (GPTA0_GTCXR02, GPTA0_GTCXRm_t, GPTA0_GTCXR02_ADDR); /* "GPTA0 Global Timer Cell X Register 02" */
SFR_ABS (GPTA0_GTCXR03, GPTA0_GTCXRm_t, GPTA0_GTCXR03_ADDR); /* "GPTA0 Global Timer Cell X Register 03" */
SFR_ABS (GPTA0_GTCXR04, GPTA0_GTCXRm_t, GPTA0_GTCXR04_ADDR); /* "GPTA0 Global Timer Cell X Register 04" */
SFR_ABS (GPTA0_GTCXR05, GPTA0_GTCXRm_t, GPTA0_GTCXR05_ADDR); /* "GPTA0 Global Timer Cell X Register 05" */
SFR_ABS (GPTA0_GTCXR06, GPTA0_GTCXRm_t, GPTA0_GTCXR06_ADDR); /* "GPTA0 Global Timer Cell X Register 06" */
SFR_ABS (GPTA0_GTCXR07, GPTA0_GTCXRm_t, GPTA0_GTCXR07_ADDR); /* "GPTA0 Global Timer Cell X Register 07" */
SFR_ABS (GPTA0_GTCXR08, GPTA0_GTCXRm_t, GPTA0_GTCXR08_ADDR); /* "GPTA0 Global Timer Cell X Register 08" */
SFR_ABS (GPTA0_GTCXR09, GPTA0_GTCXRm_t, GPTA0_GTCXR09_ADDR); /* "GPTA0 Global Timer Cell X Register 09" */
SFR_ABS (GPTA0_GTCXR10, GPTA0_GTCXRm_t, GPTA0_GTCXR10_ADDR); /* "GPTA0 Global Timer Cell X Register 10" */
SFR_ABS (GPTA0_GTCXR11, GPTA0_GTCXRm_t, GPTA0_GTCXR11_ADDR); /* "GPTA0 Global Timer Cell X Register 11" */
SFR_ABS (GPTA0_GTCXR12, GPTA0_GTCXRm_t, GPTA0_GTCXR12_ADDR); /* "GPTA0 Global Timer Cell X Register 12" */
SFR_ABS (GPTA0_GTCXR13, GPTA0_GTCXRm_t, GPTA0_GTCXR13_ADDR); /* "GPTA0 Global Timer Cell X Register 13" */
SFR_ABS (GPTA0_GTCXR14, GPTA0_GTCXRm_t, GPTA0_GTCXR14_ADDR); /* "GPTA0 Global Timer Cell X Register 14" */
SFR_ABS (GPTA0_GTCXR15, GPTA0_GTCXRm_t, GPTA0_GTCXR15_ADDR); /* "GPTA0 Global Timer Cell X Register 15" */
SFR_ABS (GPTA0_GTCXR16, GPTA0_GTCXRm_t, GPTA0_GTCXR16_ADDR); /* "GPTA0 Global Timer Cell X Register 16" */
SFR_ABS (GPTA0_GTCXR17, GPTA0_GTCXRm_t, GPTA0_GTCXR17_ADDR); /* "GPTA0 Global Timer Cell X Register 17" */
SFR_ABS (GPTA0_GTCXR18, GPTA0_GTCXRm_t, GPTA0_GTCXR18_ADDR); /* "GPTA0 Global Timer Cell X Register 18" */
SFR_ABS (GPTA0_GTCXR19, GPTA0_GTCXRm_t, GPTA0_GTCXR19_ADDR); /* "GPTA0 Global Timer Cell X Register 19" */
SFR_ABS (GPTA0_GTCXR20, GPTA0_GTCXRm_t, GPTA0_GTCXR20_ADDR); /* "GPTA0 Global Timer Cell X Register 20" */
SFR_ABS (GPTA0_GTCXR21, GPTA0_GTCXRm_t, GPTA0_GTCXR21_ADDR); /* "GPTA0 Global Timer Cell X Register 21" */
SFR_ABS (GPTA0_GTCXR22, GPTA0_GTCXRm_t, GPTA0_GTCXR22_ADDR); /* "GPTA0 Global Timer Cell X Register 22" */
SFR_ABS (GPTA0_GTCXR23, GPTA0_GTCXRm_t, GPTA0_GTCXR23_ADDR); /* "GPTA0 Global Timer Cell X Register 23" */
SFR_ABS (GPTA0_GTCXR24, GPTA0_GTCXRm_t, GPTA0_GTCXR24_ADDR); /* "GPTA0 Global Timer Cell X Register 24" */
SFR_ABS (GPTA0_GTCXR25, GPTA0_GTCXRm_t, GPTA0_GTCXR25_ADDR); /* "GPTA0 Global Timer Cell X Register 25" */
SFR_ABS (GPTA0_GTCXR26, GPTA0_GTCXRm_t, GPTA0_GTCXR26_ADDR); /* "GPTA0 Global Timer Cell X Register 26" */
SFR_ABS (GPTA0_GTCXR27, GPTA0_GTCXRm_t, GPTA0_GTCXR27_ADDR); /* "GPTA0 Global Timer Cell X Register 27" */
SFR_ABS (GPTA0_GTCXR28, GPTA0_GTCXRm_t, GPTA0_GTCXR28_ADDR); /* "GPTA0 Global Timer Cell X Register 28" */
SFR_ABS (GPTA0_GTCXR29, GPTA0_GTCXRm_t, GPTA0_GTCXR29_ADDR); /* "GPTA0 Global Timer Cell X Register 29" */
SFR_ABS (GPTA0_GTCXR30, GPTA0_GTCXRm_t, GPTA0_GTCXR30_ADDR); /* "GPTA0 Global Timer Cell X Register 30" */
SFR_ABS (GPTA0_GTCXR31, GPTA0_GTCXRm_t, GPTA0_GTCXR31_ADDR); /* "GPTA0 Global Timer Cell X Register 31" */
SFR_ABS (GPTA0_GTREV0, GPTA0_GTREVm_t, GPTA0_GTREV0_ADDR); /* "GPTA0 Global Timer Reload Value Register 0" */
SFR_ABS (GPTA0_GTREV1, GPTA0_GTREVm_t, GPTA0_GTREV1_ADDR); /* "GPTA0 Global Timer Reload Value Register 1" */
SFR_ABS (GPTA0_GTTIM0, GPTA0_GTTIMm_t, GPTA0_GTTIM0_ADDR); /* "GPTA0 Global Timer Register 0" */
SFR_ABS (GPTA0_GTTIM1, GPTA0_GTTIMm_t, GPTA0_GTTIM1_ADDR); /* "GPTA0 Global Timer Register 1" */
SFR_ABS (GPTA0_ID, GPTA0_ID_t, GPTA0_ID_ADDR);    /* "GPTA0 Identification Register" */
SFR_ABS (GPTA0_LTCCTR00, GPTA0_LTCCTRm_t, GPTA0_LTCCTR00_ADDR); /* "GPTA0 Local Timer Cell Control Register 00" */
SFR_ABS (GPTA0_LTCCTR01, GPTA0_LTCCTRm_t, GPTA0_LTCCTR01_ADDR); /* "GPTA0 Local Timer Cell Control Register 01" */
SFR_ABS (GPTA0_LTCCTR02, GPTA0_LTCCTRm_t, GPTA0_LTCCTR02_ADDR); /* "GPTA0 Local Timer Cell Control Register 02" */
SFR_ABS (GPTA0_LTCCTR03, GPTA0_LTCCTRm_t, GPTA0_LTCCTR03_ADDR); /* "GPTA0 Local Timer Cell Control Register 03" */
SFR_ABS (GPTA0_LTCCTR04, GPTA0_LTCCTRm_t, GPTA0_LTCCTR04_ADDR); /* "GPTA0 Local Timer Cell Control Register 04" */
SFR_ABS (GPTA0_LTCCTR05, GPTA0_LTCCTRm_t, GPTA0_LTCCTR05_ADDR); /* "GPTA0 Local Timer Cell Control Register 05" */
SFR_ABS (GPTA0_LTCCTR06, GPTA0_LTCCTRm_t, GPTA0_LTCCTR06_ADDR); /* "GPTA0 Local Timer Cell Control Register 06" */
SFR_ABS (GPTA0_LTCCTR07, GPTA0_LTCCTRm_t, GPTA0_LTCCTR07_ADDR); /* "GPTA0 Local Timer Cell Control Register 07" */
SFR_ABS (GPTA0_LTCCTR08, GPTA0_LTCCTRm_t, GPTA0_LTCCTR08_ADDR); /* "GPTA0 Local Timer Cell Control Register 08" */
SFR_ABS (GPTA0_LTCCTR09, GPTA0_LTCCTRm_t, GPTA0_LTCCTR09_ADDR); /* "GPTA0 Local Timer Cell Control Register 09" */
SFR_ABS (GPTA0_LTCCTR10, GPTA0_LTCCTRm_t, GPTA0_LTCCTR10_ADDR); /* "GPTA0 Local Timer Cell Control Register 10" */
SFR_ABS (GPTA0_LTCCTR11, GPTA0_LTCCTRm_t, GPTA0_LTCCTR11_ADDR); /* "GPTA0 Local Timer Cell Control Register 11" */
SFR_ABS (GPTA0_LTCCTR12, GPTA0_LTCCTRm_t, GPTA0_LTCCTR12_ADDR); /* "GPTA0 Local Timer Cell Control Register 12" */
SFR_ABS (GPTA0_LTCCTR13, GPTA0_LTCCTRm_t, GPTA0_LTCCTR13_ADDR); /* "GPTA0 Local Timer Cell Control Register 13" */
SFR_ABS (GPTA0_LTCCTR14, GPTA0_LTCCTRm_t, GPTA0_LTCCTR14_ADDR); /* "GPTA0 Local Timer Cell Control Register 14" */
SFR_ABS (GPTA0_LTCCTR15, GPTA0_LTCCTRm_t, GPTA0_LTCCTR15_ADDR); /* "GPTA0 Local Timer Cell Control Register 15" */
SFR_ABS (GPTA0_LTCCTR16, GPTA0_LTCCTRm_t, GPTA0_LTCCTR16_ADDR); /* "GPTA0 Local Timer Cell Control Register 16" */
SFR_ABS (GPTA0_LTCCTR17, GPTA0_LTCCTRm_t, GPTA0_LTCCTR17_ADDR); /* "GPTA0 Local Timer Cell Control Register 17" */
SFR_ABS (GPTA0_LTCCTR18, GPTA0_LTCCTRm_t, GPTA0_LTCCTR18_ADDR); /* "GPTA0 Local Timer Cell Control Register 18" */
SFR_ABS (GPTA0_LTCCTR19, GPTA0_LTCCTRm_t, GPTA0_LTCCTR19_ADDR); /* "GPTA0 Local Timer Cell Control Register 19" */
SFR_ABS (GPTA0_LTCCTR20, GPTA0_LTCCTRm_t, GPTA0_LTCCTR20_ADDR); /* "GPTA0 Local Timer Cell Control Register 20" */
SFR_ABS (GPTA0_LTCCTR21, GPTA0_LTCCTRm_t, GPTA0_LTCCTR21_ADDR); /* "GPTA0 Local Timer Cell Control Register 21" */
SFR_ABS (GPTA0_LTCCTR22, GPTA0_LTCCTRm_t, GPTA0_LTCCTR22_ADDR); /* "GPTA0 Local Timer Cell Control Register 22" */
SFR_ABS (GPTA0_LTCCTR23, GPTA0_LTCCTRm_t, GPTA0_LTCCTR23_ADDR); /* "GPTA0 Local Timer Cell Control Register 23" */
SFR_ABS (GPTA0_LTCCTR24, GPTA0_LTCCTRm_t, GPTA0_LTCCTR24_ADDR); /* "GPTA0 Local Timer Cell Control Register 24" */
SFR_ABS (GPTA0_LTCCTR25, GPTA0_LTCCTRm_t, GPTA0_LTCCTR25_ADDR); /* "GPTA0 Local Timer Cell Control Register 25" */
SFR_ABS (GPTA0_LTCCTR26, GPTA0_LTCCTRm_t, GPTA0_LTCCTR26_ADDR); /* "GPTA0 Local Timer Cell Control Register 26" */
SFR_ABS (GPTA0_LTCCTR27, GPTA0_LTCCTRm_t, GPTA0_LTCCTR27_ADDR); /* "GPTA0 Local Timer Cell Control Register 27" */
SFR_ABS (GPTA0_LTCCTR28, GPTA0_LTCCTRm_t, GPTA0_LTCCTR28_ADDR); /* "GPTA0 Local Timer Cell Control Register 28" */
SFR_ABS (GPTA0_LTCCTR29, GPTA0_LTCCTRm_t, GPTA0_LTCCTR29_ADDR); /* "GPTA0 Local Timer Cell Control Register 29" */
SFR_ABS (GPTA0_LTCCTR30, GPTA0_LTCCTRm_t, GPTA0_LTCCTR30_ADDR); /* "GPTA0 Local Timer Cell Control Register 30" */
SFR_ABS (GPTA0_LTCCTR31, GPTA0_LTCCTRm_t, GPTA0_LTCCTR31_ADDR); /* "GPTA0 Local Timer Cell Control Register 31" */
SFR_ABS (GPTA0_LTCCTR32, GPTA0_LTCCTRm_t, GPTA0_LTCCTR32_ADDR); /* "GPTA0 Local Timer Cell Control Register 32" */
SFR_ABS (GPTA0_LTCCTR33, GPTA0_LTCCTRm_t, GPTA0_LTCCTR33_ADDR); /* "GPTA0 Local Timer Cell Control Register 33" */
SFR_ABS (GPTA0_LTCCTR34, GPTA0_LTCCTRm_t, GPTA0_LTCCTR34_ADDR); /* "GPTA0 Local Timer Cell Control Register 34" */
SFR_ABS (GPTA0_LTCCTR35, GPTA0_LTCCTRm_t, GPTA0_LTCCTR35_ADDR); /* "GPTA0 Local Timer Cell Control Register 35" */
SFR_ABS (GPTA0_LTCCTR36, GPTA0_LTCCTRm_t, GPTA0_LTCCTR36_ADDR); /* "GPTA0 Local Timer Cell Control Register 36" */
SFR_ABS (GPTA0_LTCCTR37, GPTA0_LTCCTRm_t, GPTA0_LTCCTR37_ADDR); /* "GPTA0 Local Timer Cell Control Register 37" */
SFR_ABS (GPTA0_LTCCTR38, GPTA0_LTCCTRm_t, GPTA0_LTCCTR38_ADDR); /* "GPTA0 Local Timer Cell Control Register 38" */
SFR_ABS (GPTA0_LTCCTR39, GPTA0_LTCCTRm_t, GPTA0_LTCCTR39_ADDR); /* "GPTA0 Local Timer Cell Control Register 39" */
SFR_ABS (GPTA0_LTCCTR40, GPTA0_LTCCTRm_t, GPTA0_LTCCTR40_ADDR); /* "GPTA0 Local Timer Cell Control Register 40" */
SFR_ABS (GPTA0_LTCCTR41, GPTA0_LTCCTRm_t, GPTA0_LTCCTR41_ADDR); /* "GPTA0 Local Timer Cell Control Register 41" */
SFR_ABS (GPTA0_LTCCTR42, GPTA0_LTCCTRm_t, GPTA0_LTCCTR42_ADDR); /* "GPTA0 Local Timer Cell Control Register 42" */
SFR_ABS (GPTA0_LTCCTR43, GPTA0_LTCCTRm_t, GPTA0_LTCCTR43_ADDR); /* "GPTA0 Local Timer Cell Control Register 43" */
SFR_ABS (GPTA0_LTCCTR44, GPTA0_LTCCTRm_t, GPTA0_LTCCTR44_ADDR); /* "GPTA0 Local Timer Cell Control Register 44" */
SFR_ABS (GPTA0_LTCCTR45, GPTA0_LTCCTRm_t, GPTA0_LTCCTR45_ADDR); /* "GPTA0 Local Timer Cell Control Register 45" */
SFR_ABS (GPTA0_LTCCTR46, GPTA0_LTCCTRm_t, GPTA0_LTCCTR46_ADDR); /* "GPTA0 Local Timer Cell Control Register 46" */
SFR_ABS (GPTA0_LTCCTR47, GPTA0_LTCCTRm_t, GPTA0_LTCCTR47_ADDR); /* "GPTA0 Local Timer Cell Control Register 47" */
SFR_ABS (GPTA0_LTCCTR48, GPTA0_LTCCTRm_t, GPTA0_LTCCTR48_ADDR); /* "GPTA0 Local Timer Cell Control Register 48" */
SFR_ABS (GPTA0_LTCCTR49, GPTA0_LTCCTRm_t, GPTA0_LTCCTR49_ADDR); /* "GPTA0 Local Timer Cell Control Register 49" */
SFR_ABS (GPTA0_LTCCTR50, GPTA0_LTCCTRm_t, GPTA0_LTCCTR50_ADDR); /* "GPTA0 Local Timer Cell Control Register 50" */
SFR_ABS (GPTA0_LTCCTR51, GPTA0_LTCCTRm_t, GPTA0_LTCCTR51_ADDR); /* "GPTA0 Local Timer Cell Control Register 51" */
SFR_ABS (GPTA0_LTCCTR52, GPTA0_LTCCTRm_t, GPTA0_LTCCTR52_ADDR); /* "GPTA0 Local Timer Cell Control Register 52" */
SFR_ABS (GPTA0_LTCCTR53, GPTA0_LTCCTRm_t, GPTA0_LTCCTR53_ADDR); /* "GPTA0 Local Timer Cell Control Register 53" */
SFR_ABS (GPTA0_LTCCTR54, GPTA0_LTCCTRm_t, GPTA0_LTCCTR54_ADDR); /* "GPTA0 Local Timer Cell Control Register 54" */
SFR_ABS (GPTA0_LTCCTR55, GPTA0_LTCCTRm_t, GPTA0_LTCCTR55_ADDR); /* "GPTA0 Local Timer Cell Control Register 55" */
SFR_ABS (GPTA0_LTCCTR56, GPTA0_LTCCTRm_t, GPTA0_LTCCTR56_ADDR); /* "GPTA0 Local Timer Cell Control Register 56" */
SFR_ABS (GPTA0_LTCCTR57, GPTA0_LTCCTRm_t, GPTA0_LTCCTR57_ADDR); /* "GPTA0 Local Timer Cell Control Register 57" */
SFR_ABS (GPTA0_LTCCTR58, GPTA0_LTCCTRm_t, GPTA0_LTCCTR58_ADDR); /* "GPTA0 Local Timer Cell Control Register 58" */
SFR_ABS (GPTA0_LTCCTR59, GPTA0_LTCCTRm_t, GPTA0_LTCCTR59_ADDR); /* "GPTA0 Local Timer Cell Control Register 59" */
SFR_ABS (GPTA0_LTCCTR60, GPTA0_LTCCTRm_t, GPTA0_LTCCTR60_ADDR); /* "GPTA0 Local Timer Cell Control Register 60" */
SFR_ABS (GPTA0_LTCCTR61, GPTA0_LTCCTRm_t, GPTA0_LTCCTR61_ADDR); /* "GPTA0 Local Timer Cell Control Register 61" */
SFR_ABS (GPTA0_LTCCTR62, GPTA0_LTCCTRm_t, GPTA0_LTCCTR62_ADDR); /* "GPTA0 Local Timer Cell Control Register 62" */
SFR_ABS (GPTA0_LTCCTR63, GPTA0_LTCCTR63_t, GPTA0_LTCCTR63_ADDR); /* "GPTA0 Local Timer Cell Control Register 63" */
SFR_ABS (GPTA0_LTCXR00, GPTA0_LTCXRm_t, GPTA0_LTCXR00_ADDR); /* "GPTA0 Local Timer Cell X Register 00" */
SFR_ABS (GPTA0_LTCXR01, GPTA0_LTCXRm_t, GPTA0_LTCXR01_ADDR); /* "GPTA0 Local Timer Cell X Register 01" */
SFR_ABS (GPTA0_LTCXR02, GPTA0_LTCXRm_t, GPTA0_LTCXR02_ADDR); /* "GPTA0 Local Timer Cell X Register 02" */
SFR_ABS (GPTA0_LTCXR03, GPTA0_LTCXRm_t, GPTA0_LTCXR03_ADDR); /* "GPTA0 Local Timer Cell X Register 03" */
SFR_ABS (GPTA0_LTCXR04, GPTA0_LTCXRm_t, GPTA0_LTCXR04_ADDR); /* "GPTA0 Local Timer Cell X Register 04" */
SFR_ABS (GPTA0_LTCXR05, GPTA0_LTCXRm_t, GPTA0_LTCXR05_ADDR); /* "GPTA0 Local Timer Cell X Register 05" */
SFR_ABS (GPTA0_LTCXR06, GPTA0_LTCXRm_t, GPTA0_LTCXR06_ADDR); /* "GPTA0 Local Timer Cell X Register 06" */
SFR_ABS (GPTA0_LTCXR07, GPTA0_LTCXRm_t, GPTA0_LTCXR07_ADDR); /* "GPTA0 Local Timer Cell X Register 07" */
SFR_ABS (GPTA0_LTCXR08, GPTA0_LTCXRm_t, GPTA0_LTCXR08_ADDR); /* "GPTA0 Local Timer Cell X Register 08" */
SFR_ABS (GPTA0_LTCXR09, GPTA0_LTCXRm_t, GPTA0_LTCXR09_ADDR); /* "GPTA0 Local Timer Cell X Register 09" */
SFR_ABS (GPTA0_LTCXR10, GPTA0_LTCXRm_t, GPTA0_LTCXR10_ADDR); /* "GPTA0 Local Timer Cell X Register 10" */
SFR_ABS (GPTA0_LTCXR11, GPTA0_LTCXRm_t, GPTA0_LTCXR11_ADDR); /* "GPTA0 Local Timer Cell X Register 11" */
SFR_ABS (GPTA0_LTCXR12, GPTA0_LTCXRm_t, GPTA0_LTCXR12_ADDR); /* "GPTA0 Local Timer Cell X Register 12" */
SFR_ABS (GPTA0_LTCXR13, GPTA0_LTCXRm_t, GPTA0_LTCXR13_ADDR); /* "GPTA0 Local Timer Cell X Register 13" */
SFR_ABS (GPTA0_LTCXR14, GPTA0_LTCXRm_t, GPTA0_LTCXR14_ADDR); /* "GPTA0 Local Timer Cell X Register 14" */
SFR_ABS (GPTA0_LTCXR15, GPTA0_LTCXRm_t, GPTA0_LTCXR15_ADDR); /* "GPTA0 Local Timer Cell X Register 15" */
SFR_ABS (GPTA0_LTCXR16, GPTA0_LTCXRm_t, GPTA0_LTCXR16_ADDR); /* "GPTA0 Local Timer Cell X Register 16" */
SFR_ABS (GPTA0_LTCXR17, GPTA0_LTCXRm_t, GPTA0_LTCXR17_ADDR); /* "GPTA0 Local Timer Cell X Register 17" */
SFR_ABS (GPTA0_LTCXR18, GPTA0_LTCXRm_t, GPTA0_LTCXR18_ADDR); /* "GPTA0 Local Timer Cell X Register 18" */
SFR_ABS (GPTA0_LTCXR19, GPTA0_LTCXRm_t, GPTA0_LTCXR19_ADDR); /* "GPTA0 Local Timer Cell X Register 19" */
SFR_ABS (GPTA0_LTCXR20, GPTA0_LTCXRm_t, GPTA0_LTCXR20_ADDR); /* "GPTA0 Local Timer Cell X Register 20" */
SFR_ABS (GPTA0_LTCXR21, GPTA0_LTCXRm_t, GPTA0_LTCXR21_ADDR); /* "GPTA0 Local Timer Cell X Register 21" */
SFR_ABS (GPTA0_LTCXR22, GPTA0_LTCXRm_t, GPTA0_LTCXR22_ADDR); /* "GPTA0 Local Timer Cell X Register 22" */
SFR_ABS (GPTA0_LTCXR23, GPTA0_LTCXRm_t, GPTA0_LTCXR23_ADDR); /* "GPTA0 Local Timer Cell X Register 23" */
SFR_ABS (GPTA0_LTCXR24, GPTA0_LTCXRm_t, GPTA0_LTCXR24_ADDR); /* "GPTA0 Local Timer Cell X Register 24" */
SFR_ABS (GPTA0_LTCXR25, GPTA0_LTCXRm_t, GPTA0_LTCXR25_ADDR); /* "GPTA0 Local Timer Cell X Register 25" */
SFR_ABS (GPTA0_LTCXR26, GPTA0_LTCXRm_t, GPTA0_LTCXR26_ADDR); /* "GPTA0 Local Timer Cell X Register 26" */
SFR_ABS (GPTA0_LTCXR27, GPTA0_LTCXRm_t, GPTA0_LTCXR27_ADDR); /* "GPTA0 Local Timer Cell X Register 27" */
SFR_ABS (GPTA0_LTCXR28, GPTA0_LTCXRm_t, GPTA0_LTCXR28_ADDR); /* "GPTA0 Local Timer Cell X Register 28" */
SFR_ABS (GPTA0_LTCXR29, GPTA0_LTCXRm_t, GPTA0_LTCXR29_ADDR); /* "GPTA0 Local Timer Cell X Register 29" */
SFR_ABS (GPTA0_LTCXR30, GPTA0_LTCXRm_t, GPTA0_LTCXR30_ADDR); /* "GPTA0 Local Timer Cell X Register 30" */
SFR_ABS (GPTA0_LTCXR31, GPTA0_LTCXRm_t, GPTA0_LTCXR31_ADDR); /* "GPTA0 Local Timer Cell X Register 31" */
SFR_ABS (GPTA0_LTCXR32, GPTA0_LTCXRm_t, GPTA0_LTCXR32_ADDR); /* "GPTA0 Local Timer Cell X Register 32" */
SFR_ABS (GPTA0_LTCXR33, GPTA0_LTCXRm_t, GPTA0_LTCXR33_ADDR); /* "GPTA0 Local Timer Cell X Register 33" */
SFR_ABS (GPTA0_LTCXR34, GPTA0_LTCXRm_t, GPTA0_LTCXR34_ADDR); /* "GPTA0 Local Timer Cell X Register 34" */
SFR_ABS (GPTA0_LTCXR35, GPTA0_LTCXRm_t, GPTA0_LTCXR35_ADDR); /* "GPTA0 Local Timer Cell X Register 35" */
SFR_ABS (GPTA0_LTCXR36, GPTA0_LTCXRm_t, GPTA0_LTCXR36_ADDR); /* "GPTA0 Local Timer Cell X Register 36" */
SFR_ABS (GPTA0_LTCXR37, GPTA0_LTCXRm_t, GPTA0_LTCXR37_ADDR); /* "GPTA0 Local Timer Cell X Register 37" */
SFR_ABS (GPTA0_LTCXR38, GPTA0_LTCXRm_t, GPTA0_LTCXR38_ADDR); /* "GPTA0 Local Timer Cell X Register 38" */
SFR_ABS (GPTA0_LTCXR39, GPTA0_LTCXRm_t, GPTA0_LTCXR39_ADDR); /* "GPTA0 Local Timer Cell X Register 39" */
SFR_ABS (GPTA0_LTCXR40, GPTA0_LTCXRm_t, GPTA0_LTCXR40_ADDR); /* "GPTA0 Local Timer Cell X Register 40" */
SFR_ABS (GPTA0_LTCXR41, GPTA0_LTCXRm_t, GPTA0_LTCXR41_ADDR); /* "GPTA0 Local Timer Cell X Register 41" */
SFR_ABS (GPTA0_LTCXR42, GPTA0_LTCXRm_t, GPTA0_LTCXR42_ADDR); /* "GPTA0 Local Timer Cell X Register 42" */
SFR_ABS (GPTA0_LTCXR43, GPTA0_LTCXRm_t, GPTA0_LTCXR43_ADDR); /* "GPTA0 Local Timer Cell X Register 43" */
SFR_ABS (GPTA0_LTCXR44, GPTA0_LTCXRm_t, GPTA0_LTCXR44_ADDR); /* "GPTA0 Local Timer Cell X Register 44" */
SFR_ABS (GPTA0_LTCXR45, GPTA0_LTCXRm_t, GPTA0_LTCXR45_ADDR); /* "GPTA0 Local Timer Cell X Register 45" */
SFR_ABS (GPTA0_LTCXR46, GPTA0_LTCXRm_t, GPTA0_LTCXR46_ADDR); /* "GPTA0 Local Timer Cell X Register 46" */
SFR_ABS (GPTA0_LTCXR47, GPTA0_LTCXRm_t, GPTA0_LTCXR47_ADDR); /* "GPTA0 Local Timer Cell X Register 47" */
SFR_ABS (GPTA0_LTCXR48, GPTA0_LTCXRm_t, GPTA0_LTCXR48_ADDR); /* "GPTA0 Local Timer Cell X Register 48" */
SFR_ABS (GPTA0_LTCXR49, GPTA0_LTCXRm_t, GPTA0_LTCXR49_ADDR); /* "GPTA0 Local Timer Cell X Register 49" */
SFR_ABS (GPTA0_LTCXR50, GPTA0_LTCXRm_t, GPTA0_LTCXR50_ADDR); /* "GPTA0 Local Timer Cell X Register 50" */
SFR_ABS (GPTA0_LTCXR51, GPTA0_LTCXRm_t, GPTA0_LTCXR51_ADDR); /* "GPTA0 Local Timer Cell X Register 51" */
SFR_ABS (GPTA0_LTCXR52, GPTA0_LTCXRm_t, GPTA0_LTCXR52_ADDR); /* "GPTA0 Local Timer Cell X Register 52" */
SFR_ABS (GPTA0_LTCXR53, GPTA0_LTCXRm_t, GPTA0_LTCXR53_ADDR); /* "GPTA0 Local Timer Cell X Register 53" */
SFR_ABS (GPTA0_LTCXR54, GPTA0_LTCXRm_t, GPTA0_LTCXR54_ADDR); /* "GPTA0 Local Timer Cell X Register 54" */
SFR_ABS (GPTA0_LTCXR55, GPTA0_LTCXRm_t, GPTA0_LTCXR55_ADDR); /* "GPTA0 Local Timer Cell X Register 55" */
SFR_ABS (GPTA0_LTCXR56, GPTA0_LTCXRm_t, GPTA0_LTCXR56_ADDR); /* "GPTA0 Local Timer Cell X Register 56" */
SFR_ABS (GPTA0_LTCXR57, GPTA0_LTCXRm_t, GPTA0_LTCXR57_ADDR); /* "GPTA0 Local Timer Cell X Register 57" */
SFR_ABS (GPTA0_LTCXR58, GPTA0_LTCXRm_t, GPTA0_LTCXR58_ADDR); /* "GPTA0 Local Timer Cell X Register 58" */
SFR_ABS (GPTA0_LTCXR59, GPTA0_LTCXRm_t, GPTA0_LTCXR59_ADDR); /* "GPTA0 Local Timer Cell X Register 59" */
SFR_ABS (GPTA0_LTCXR60, GPTA0_LTCXRm_t, GPTA0_LTCXR60_ADDR); /* "GPTA0 Local Timer Cell X Register 60" */
SFR_ABS (GPTA0_LTCXR61, GPTA0_LTCXRm_t, GPTA0_LTCXR61_ADDR); /* "GPTA0 Local Timer Cell X Register 61" */
SFR_ABS (GPTA0_LTCXR62, GPTA0_LTCXRm_t, GPTA0_LTCXR62_ADDR); /* "GPTA0 Local Timer Cell X Register 62" */
SFR_ABS (GPTA0_LTCXR63, GPTA0_LTCXR63_t, GPTA0_LTCXR63_ADDR); /* "GPTA0 Local Timer Cell X Register 63" */
SFR_ABS (GPTA0_MRACTL, GPTA0_MRACTL_t, GPTA0_MRACTL_ADDR); /* "GPTA0 Multiplexer Register Array Control Register" */
SFR_ABS (GPTA0_MRADIN, GPTA0_MRADIN_t, GPTA0_MRADIN_ADDR); /* "GPTA0 Multiplexer Register Array Data In Register" */
SFR_ABS (GPTA0_MRADOUT, GPTA0_MRADOUT_t, GPTA0_MRADOUT_ADDR); /* "GPTA0 Multiplexer Register Array Data Out Register" */
SFR_ABS (GPTA0_PDLCTR, GPTA0_PDLCTR_t, GPTA0_PDLCTR_ADDR); /* "GPTA0 Phase Discrimination Logic Control Register" */
SFR_ABS (GPTA0_PLLCNT, GPTA0_PLLCNT_t, GPTA0_PLLCNT_ADDR); /* "GPTA0 Phase Locked Loop Counter Register" */
SFR_ABS (GPTA0_PLLCTR, GPTA0_PLLCTR_t, GPTA0_PLLCTR_ADDR); /* "GPTA0 Phase Locked Loop Control Register" */
SFR_ABS (GPTA0_PLLDTR, GPTA0_PLLDTR_t, GPTA0_PLLDTR_ADDR); /* "GPTA0 Phase Locked Loop Delta Register" */
SFR_ABS (GPTA0_PLLMTI, GPTA0_PLLMTI_t, GPTA0_PLLMTI_ADDR); /* "GPTA0 Phase Locked Loop Microtick Register" */
SFR_ABS (GPTA0_PLLREV, GPTA0_PLLREV_t, GPTA0_PLLREV_ADDR); /* "GPTA0 Phase Locked Loop Reload Register" */
SFR_ABS (GPTA0_PLLSTP, GPTA0_PLLSTP_t, GPTA0_PLLSTP_ADDR); /* "GPTA0 Phase Locked Loop Step Register" */
SFR_ABS (GPTA0_SRC00, GPTA0_SRCm_t, GPTA0_SRC00_ADDR); /* "GPTA0 Interrupt Service Request Control Register 00" */
SFR_ABS (GPTA0_SRC01, GPTA0_SRCm_t, GPTA0_SRC01_ADDR); /* "GPTA0 Interrupt Service Request Control Register 01" */
SFR_ABS (GPTA0_SRC02, GPTA0_SRCm_t, GPTA0_SRC02_ADDR); /* "GPTA0 Interrupt Service Request Control Register 02" */
SFR_ABS (GPTA0_SRC03, GPTA0_SRCm_t, GPTA0_SRC03_ADDR); /* "GPTA0 Interrupt Service Request Control Register 03" */
SFR_ABS (GPTA0_SRC04, GPTA0_SRCm_t, GPTA0_SRC04_ADDR); /* "GPTA0 Interrupt Service Request Control Register 04" */
SFR_ABS (GPTA0_SRC05, GPTA0_SRCm_t, GPTA0_SRC05_ADDR); /* "GPTA0 Interrupt Service Request Control Register 05" */
SFR_ABS (GPTA0_SRC06, GPTA0_SRCm_t, GPTA0_SRC06_ADDR); /* "GPTA0 Interrupt Service Request Control Register 06" */
SFR_ABS (GPTA0_SRC07, GPTA0_SRCm_t, GPTA0_SRC07_ADDR); /* "GPTA0 Interrupt Service Request Control Register 07" */
SFR_ABS (GPTA0_SRC08, GPTA0_SRCm_t, GPTA0_SRC08_ADDR); /* "GPTA0 Interrupt Service Request Control Register 08" */
SFR_ABS (GPTA0_SRC09, GPTA0_SRCm_t, GPTA0_SRC09_ADDR); /* "GPTA0 Interrupt Service Request Control Register 09" */
SFR_ABS (GPTA0_SRC10, GPTA0_SRCm_t, GPTA0_SRC10_ADDR); /* "GPTA0 Interrupt Service Request Control Register 10" */
SFR_ABS (GPTA0_SRC11, GPTA0_SRCm_t, GPTA0_SRC11_ADDR); /* "GPTA0 Interrupt Service Request Control Register 11" */
SFR_ABS (GPTA0_SRC12, GPTA0_SRCm_t, GPTA0_SRC12_ADDR); /* "GPTA0 Interrupt Service Request Control Register 12" */
SFR_ABS (GPTA0_SRC13, GPTA0_SRCm_t, GPTA0_SRC13_ADDR); /* "GPTA0 Interrupt Service Request Control Register 13" */
SFR_ABS (GPTA0_SRC14, GPTA0_SRCm_t, GPTA0_SRC14_ADDR); /* "GPTA0 Interrupt Service Request Control Register 14" */
SFR_ABS (GPTA0_SRC15, GPTA0_SRCm_t, GPTA0_SRC15_ADDR); /* "GPTA0 Interrupt Service Request Control Register 15" */
SFR_ABS (GPTA0_SRC16, GPTA0_SRCm_t, GPTA0_SRC16_ADDR); /* "GPTA0 Interrupt Service Request Control Register 16" */
SFR_ABS (GPTA0_SRC17, GPTA0_SRCm_t, GPTA0_SRC17_ADDR); /* "GPTA0 Interrupt Service Request Control Register 17" */
SFR_ABS (GPTA0_SRC18, GPTA0_SRCm_t, GPTA0_SRC18_ADDR); /* "GPTA0 Interrupt Service Request Control Register 18" */
SFR_ABS (GPTA0_SRC19, GPTA0_SRCm_t, GPTA0_SRC19_ADDR); /* "GPTA0 Interrupt Service Request Control Register 19" */
SFR_ABS (GPTA0_SRC20, GPTA0_SRCm_t, GPTA0_SRC20_ADDR); /* "GPTA0 Interrupt Service Request Control Register 20" */
SFR_ABS (GPTA0_SRC21, GPTA0_SRCm_t, GPTA0_SRC21_ADDR); /* "GPTA0 Interrupt Service Request Control Register 21" */
SFR_ABS (GPTA0_SRC22, GPTA0_SRCm_t, GPTA0_SRC22_ADDR); /* "GPTA0 Interrupt Service Request Control Register 22" */
SFR_ABS (GPTA0_SRC23, GPTA0_SRCm_t, GPTA0_SRC23_ADDR); /* "GPTA0 Interrupt Service Request Control Register 23" */
SFR_ABS (GPTA0_SRC24, GPTA0_SRCm_t, GPTA0_SRC24_ADDR); /* "GPTA0 Interrupt Service Request Control Register 24" */
SFR_ABS (GPTA0_SRC25, GPTA0_SRCm_t, GPTA0_SRC25_ADDR); /* "GPTA0 Interrupt Service Request Control Register 25" */
SFR_ABS (GPTA0_SRC26, GPTA0_SRCm_t, GPTA0_SRC26_ADDR); /* "GPTA0 Interrupt Service Request Control Register 26" */
SFR_ABS (GPTA0_SRC27, GPTA0_SRCm_t, GPTA0_SRC27_ADDR); /* "GPTA0 Interrupt Service Request Control Register 27" */
SFR_ABS (GPTA0_SRC28, GPTA0_SRCm_t, GPTA0_SRC28_ADDR); /* "GPTA0 Interrupt Service Request Control Register 28" */
SFR_ABS (GPTA0_SRC29, GPTA0_SRCm_t, GPTA0_SRC29_ADDR); /* "GPTA0 Interrupt Service Request Control Register 29" */
SFR_ABS (GPTA0_SRC30, GPTA0_SRCm_t, GPTA0_SRC30_ADDR); /* "GPTA0 Interrupt Service Request Control Register 30" */
SFR_ABS (GPTA0_SRC31, GPTA0_SRCm_t, GPTA0_SRC31_ADDR); /* "GPTA0 Interrupt Service Request Control Register 31" */
SFR_ABS (GPTA0_SRC32, GPTA0_SRCm_t, GPTA0_SRC32_ADDR); /* "GPTA0 Interrupt Service Request Control Register 32" */
SFR_ABS (GPTA0_SRC33, GPTA0_SRCm_t, GPTA0_SRC33_ADDR); /* "GPTA0 Interrupt Service Request Control Register 33" */
SFR_ABS (GPTA0_SRC34, GPTA0_SRCm_t, GPTA0_SRC34_ADDR); /* "GPTA0 Interrupt Service Request Control Register 34" */
SFR_ABS (GPTA0_SRC35, GPTA0_SRCm_t, GPTA0_SRC35_ADDR); /* "GPTA0 Interrupt Service Request Control Register 35" */
SFR_ABS (GPTA0_SRC36, GPTA0_SRCm_t, GPTA0_SRC36_ADDR); /* "GPTA0 Interrupt Service Request Control Register 36" */
SFR_ABS (GPTA0_SRC37, GPTA0_SRCm_t, GPTA0_SRC37_ADDR); /* "GPTA0 Interrupt Service Request Control Register 37" */
SFR_ABS (GPTA0_SRNR, GPTA0_SRNR_t, GPTA0_SRNR_ADDR); /* "GPTA0 Service Request Node Redirection Register" */
SFR_ABS (GPTA0_SRSC0, GPTA0_SRSC0_t, GPTA0_SRSC0_ADDR); /* "GPTA0 Service Request State Clear Register 0" */
SFR_ABS (GPTA0_SRSC1, GPTA0_SRSC1_t, GPTA0_SRSC1_ADDR); /* "GPTA0 Service Request State Clear Register 1" */
SFR_ABS (GPTA0_SRSC2, GPTA0_SRSCm_t, GPTA0_SRSC2_ADDR); /* "GPTA0 Service Request State Clear Register 2" */
SFR_ABS (GPTA0_SRSC3, GPTA0_SRSCm_t, GPTA0_SRSC3_ADDR); /* "GPTA0 Service Request State Clear Register 3" */
SFR_ABS (GPTA0_SRSS0, GPTA0_SRSS0_t, GPTA0_SRSS0_ADDR); /* "GPTA0 Service Request State Set Register 0" */
SFR_ABS (GPTA0_SRSS1, GPTA0_SRSS1_t, GPTA0_SRSS1_ADDR); /* "GPTA0 Service Request State Set Register 1" */
SFR_ABS (GPTA0_SRSS2, GPTA0_SRSSm_t, GPTA0_SRSS2_ADDR); /* "GPTA0 Service Request State Set Register 2" */
SFR_ABS (GPTA0_SRSS3, GPTA0_SRSSm_t, GPTA0_SRSS3_ADDR); /* "GPTA0 Service Request State Set Register 3" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_GPTA_H_ (block "GPTA") */


