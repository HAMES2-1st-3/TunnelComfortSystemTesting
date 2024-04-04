/* (c) HighTec EDV-Systeme GmbH */

/* block "ERAY" of TriCore TC1798 (264 SFRs) */

#include <tc1798/eray/addr.h>

#include <tc1798/eray/masks.h>
#include <tc1798/eray/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1798/eray/types.h>
#include <tc1798/eray/sharetypes.h>

#ifndef _HAVE_TRICORE_ERAY_H_
#define _HAVE_TRICORE_ERAY_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (ERAY_ACS, ERAY_ACS_t, ERAY_ACS_ADDR);  /* "Aggregated Channel Status" */
SFR_NOABS (ERAY_CCEV, ERAY_CCEV_t, ERAY_CCEV_ADDR); /* "Communication Controller Error Vector" */
SFR_NOABS (ERAY_CCSV, ERAY_CCSV_t, ERAY_CCSV_ADDR); /* "Communication Controller Status Vector" */
SFR_NOABS (ERAY_CLC, ERAY_CLC_t, ERAY_CLC_ADDR);  /* "ERAY Clock Control Register" */
SFR_NOABS (ERAY_CREL, ERAY_CREL_t, ERAY_CREL_ADDR); /* "Core Release Register" */
SFR_NOABS (ERAY_CUST1, ERAY_CUST1_t, ERAY_CUST1_ADDR); /* "Busy and Input Buffer Control Register" */
SFR_NOABS (ERAY_CUST3, ERAY_CUST3_t, ERAY_CUST3_ADDR); /* "Customer Interface Timeout Counter" */
SFR_NOABS (ERAY_DEDCON, ERAY_DEDCON_t, ERAY_DEDCON_ADDR); /* "DED Control" */
SFR_NOABS (ERAY_ECCR, ERAY_ECCR_t, ERAY_ECCR_ADDR); /* "ECC Data Read Register" */
SFR_NOABS (ERAY_ECCW, ERAY_ECCW_t, ERAY_ECCW_ADDR); /* "ECC Data Write Register" */
SFR_NOABS (ERAY_EIER, ERAY_EIER_t, ERAY_EIER_ADDR); /* "Error Service Request Enable Reset" */
SFR_NOABS (ERAY_EIES, ERAY_EIES_t, ERAY_EIES_ADDR); /* "Error Service Request Enable Set" */
SFR_NOABS (ERAY_EILS, ERAY_EILS_t, ERAY_EILS_ADDR); /* "Error Service Request Line Select" */
SFR_NOABS (ERAY_EIR, ERAY_EIR_t, ERAY_EIR_ADDR);  /* "Error Service Request Register" */
SFR_NOABS (ERAY_ENDN, ERAY_ENDN_t, ERAY_ENDN_ADDR); /* "Endian Register" */
SFR_NOABS (ERAY_ESID01, ERAY_ESIDm_t, ERAY_ESID01_ADDR); /* "Even Sync ID Symbol Window 01" */
SFR_NOABS (ERAY_ESID02, ERAY_ESIDm_t, ERAY_ESID02_ADDR); /* "Even Sync ID Symbol Window 02" */
SFR_NOABS (ERAY_ESID03, ERAY_ESIDm_t, ERAY_ESID03_ADDR); /* "Even Sync ID Symbol Window 03" */
SFR_NOABS (ERAY_ESID04, ERAY_ESIDm_t, ERAY_ESID04_ADDR); /* "Even Sync ID Symbol Window 04" */
SFR_NOABS (ERAY_ESID05, ERAY_ESIDm_t, ERAY_ESID05_ADDR); /* "Even Sync ID Symbol Window 05" */
SFR_NOABS (ERAY_ESID06, ERAY_ESIDm_t, ERAY_ESID06_ADDR); /* "Even Sync ID Symbol Window 06" */
SFR_NOABS (ERAY_ESID07, ERAY_ESIDm_t, ERAY_ESID07_ADDR); /* "Even Sync ID Symbol Window 07" */
SFR_NOABS (ERAY_ESID08, ERAY_ESIDm_t, ERAY_ESID08_ADDR); /* "Even Sync ID Symbol Window 08" */
SFR_NOABS (ERAY_ESID09, ERAY_ESIDm_t, ERAY_ESID09_ADDR); /* "Even Sync ID Symbol Window 09" */
SFR_NOABS (ERAY_ESID10, ERAY_ESIDm_t, ERAY_ESID10_ADDR); /* "Even Sync ID Symbol Window 10" */
SFR_NOABS (ERAY_ESID11, ERAY_ESIDm_t, ERAY_ESID11_ADDR); /* "Even Sync ID Symbol Window 11" */
SFR_NOABS (ERAY_ESID12, ERAY_ESIDm_t, ERAY_ESID12_ADDR); /* "Even Sync ID Symbol Window 12" */
SFR_NOABS (ERAY_ESID13, ERAY_ESIDm_t, ERAY_ESID13_ADDR); /* "Even Sync ID Symbol Window 13" */
SFR_NOABS (ERAY_ESID14, ERAY_ESIDm_t, ERAY_ESID14_ADDR); /* "Even Sync ID Symbol Window 14" */
SFR_NOABS (ERAY_ESID15, ERAY_ESIDm_t, ERAY_ESID15_ADDR); /* "Even Sync ID Symbol Window 15" */
SFR_NOABS (ERAY_FCL, ERAY_FCL_t, ERAY_FCL_ADDR);  /* "FIFO Critical Level" */
SFR_NOABS (ERAY_FRF, ERAY_FRF_t, ERAY_FRF_ADDR);  /* "FIFO Rejection Filter" */
SFR_NOABS (ERAY_FRFM, ERAY_FRFM_t, ERAY_FRFM_ADDR); /* "FIFO Rejection Filter Mask" */
SFR_NOABS (ERAY_FSR, ERAY_FSR_t, ERAY_FSR_ADDR);  /* "FIFO Status Register" */
SFR_NOABS (ERAY_GTUC01, ERAY_GTUC01_t, ERAY_GTUC01_ADDR); /* "GTU Configuration Register 1" */
SFR_NOABS (ERAY_GTUC02, ERAY_GTUC02_t, ERAY_GTUC02_ADDR); /* "GTU Configuration Register 2" */
SFR_NOABS (ERAY_GTUC03, ERAY_GTUC03_t, ERAY_GTUC03_ADDR); /* "GTU Configuration Register 3" */
SFR_NOABS (ERAY_GTUC04, ERAY_GTUC04_t, ERAY_GTUC04_ADDR); /* "GTU Configuration Register 4" */
SFR_NOABS (ERAY_GTUC05, ERAY_GTUC05_t, ERAY_GTUC05_ADDR); /* "GTU Configuration Register 5" */
SFR_NOABS (ERAY_GTUC06, ERAY_GTUC06_t, ERAY_GTUC06_ADDR); /* "GTU Configuration Register 6" */
SFR_NOABS (ERAY_GTUC07, ERAY_GTUC07_t, ERAY_GTUC07_ADDR); /* "GTU Configuration Register 7" */
SFR_NOABS (ERAY_GTUC08, ERAY_GTUC08_t, ERAY_GTUC08_ADDR); /* "GTU Configuration Register 8" */
SFR_NOABS (ERAY_GTUC09, ERAY_GTUC09_t, ERAY_GTUC09_ADDR); /* "GTU Configuration Register 9" */
SFR_NOABS (ERAY_GTUC10, ERAY_GTUC10_t, ERAY_GTUC10_ADDR); /* "GTU Configuration Register 10" */
SFR_NOABS (ERAY_GTUC11, ERAY_GTUC11_t, ERAY_GTUC11_ADDR); /* "GTU Configuration Register 11" */
SFR_NOABS (ERAY_IBCM, ERAY_IBCM_t, ERAY_IBCM_ADDR); /* "Input Buffer Command Mask" */
SFR_NOABS (ERAY_IBCR, ERAY_IBCR_t, ERAY_IBCR_ADDR); /* "Input Buffer Command Request" */
SFR_NOABS (ERAY_IBUSYSRC, ERAY_IBUSYSRC_t, ERAY_IBUSYSRC_ADDR); /* "Input Buffer Busy Service Request Control Register" */
SFR_NOABS (ERAY_ID, ERAY_ID_t, ERAY_ID_ADDR);     /* "Module Identification Register" */
SFR_NOABS (ERAY_ILE, ERAY_ILE_t, ERAY_ILE_ADDR);  /* "Service Request Line Enable" */
SFR_NOABS (ERAY_INT0SRC, ERAY_INTmSRC_t, ERAY_INT0SRC_ADDR); /* "Interrupt 0 Service Request Control Register" */
SFR_NOABS (ERAY_INT1SRC, ERAY_INTmSRC_t, ERAY_INT1SRC_ADDR); /* "Interrupt 1 Service Request Control Register" */
SFR_NOABS (ERAY_LCK, ERAY_LCK_t, ERAY_LCK_ADDR);  /* "Lock Register" */
SFR_NOABS (ERAY_LDTS, ERAY_LDTS_t, ERAY_LDTS_ADDR); /* "Last Dynamic Transmit Slot" */
SFR_NOABS (ERAY_MBS, ERAY_MBS_t, ERAY_MBS_ADDR);  /* "Message Buffer Status" */
SFR_NOABS (ERAY_MBSC0SRC, ERAY_MBSCmSRC_t, ERAY_MBSC0SRC_ADDR); /* "Message Buffer Status Changed 0 Service Request Control Register" */
SFR_NOABS (ERAY_MBSC1, ERAY_MBSCm_t, ERAY_MBSC1_ADDR); /* "Message Buffer Status Changed 1" */
SFR_NOABS (ERAY_MBSC1SRC, ERAY_MBSCmSRC_t, ERAY_MBSC1SRC_ADDR); /* "Message Buffer Status Changed 1 Service Request Control Register" */
SFR_NOABS (ERAY_MBSC2, ERAY_MBSCm_t, ERAY_MBSC2_ADDR); /* "Message Buffer Status Changed 2" */
SFR_NOABS (ERAY_MBSC3, ERAY_MBSCm_t, ERAY_MBSC3_ADDR); /* "Message Buffer Status Changed 3" */
SFR_NOABS (ERAY_MBSC4, ERAY_MBSCm_t, ERAY_MBSC4_ADDR); /* "Message Buffer Status Changed 4" */
SFR_NOABS (ERAY_MHDC, ERAY_MHDC_t, ERAY_MHDC_ADDR); /* "MHD Configuration Register" */
SFR_NOABS (ERAY_MHDF, ERAY_MHDF_t, ERAY_MHDF_ADDR); /* "Message Handler Constraints Flags" */
SFR_NOABS (ERAY_MHDS, ERAY_MHDS_t, ERAY_MHDS_ADDR); /* "Message Handler Status" */
SFR_NOABS (ERAY_MRC, ERAY_MRC_t, ERAY_MRC_ADDR);  /* "Message RAM Configuration" */
SFR_NOABS (ERAY_MSIC1, ERAY_MSICm_t, ERAY_MSIC1_ADDR); /* "Message Buffer Status Changed Interrupt Control 1" */
SFR_NOABS (ERAY_MSIC2, ERAY_MSICm_t, ERAY_MSIC2_ADDR); /* "Message Buffer Status Changed Interrupt Control 2" */
SFR_NOABS (ERAY_MSIC3, ERAY_MSICm_t, ERAY_MSIC3_ADDR); /* "Message Buffer Status Changed Interrupt Control 3" */
SFR_NOABS (ERAY_MSIC4, ERAY_MSICm_t, ERAY_MSIC4_ADDR); /* "Message Buffer Status Changed Interrupt Control 4" */
SFR_NOABS (ERAY_MTCCV, ERAY_MTCCV_t, ERAY_MTCCV_ADDR); /* "Macrotick and Cycle Counter Value" */
SFR_NOABS (ERAY_NDAT0SRC, ERAY_NDATmSRC_t, ERAY_NDAT0SRC_ADDR); /* "New Data 0 Service Request Control Register" */
SFR_NOABS (ERAY_NDAT1, ERAY_NDATm_t, ERAY_NDAT1_ADDR); /* "New Data Register 1" */
SFR_NOABS (ERAY_NDAT1SRC, ERAY_NDATmSRC_t, ERAY_NDAT1SRC_ADDR); /* "New Data 1 Service Request Control Register" */
SFR_NOABS (ERAY_NDAT2, ERAY_NDATm_t, ERAY_NDAT2_ADDR); /* "New Data Register 2" */
SFR_NOABS (ERAY_NDAT3, ERAY_NDATm_t, ERAY_NDAT3_ADDR); /* "New Data Register 3" */
SFR_NOABS (ERAY_NDAT4, ERAY_NDATm_t, ERAY_NDAT4_ADDR); /* "New Data Register 4" */
SFR_NOABS (ERAY_NDIC1, ERAY_NDICm_t, ERAY_NDIC1_ADDR); /* "New Data Interrupt Control 1" */
SFR_NOABS (ERAY_NDIC2, ERAY_NDICm_t, ERAY_NDIC2_ADDR); /* "New Data Interrupt Control 2" */
SFR_NOABS (ERAY_NDIC3, ERAY_NDICm_t, ERAY_NDIC3_ADDR); /* "New Data Interrupt Control 3" */
SFR_NOABS (ERAY_NDIC4, ERAY_NDICm_t, ERAY_NDIC4_ADDR); /* "New Data Interrupt Control 4" */
SFR_NOABS (ERAY_NEMC, ERAY_NEMC_t, ERAY_NEMC_ADDR); /* "NEM Configuration Register" */
SFR_NOABS (ERAY_NMV1, ERAY_NMVm_t, ERAY_NMV1_ADDR); /* "Network Management Vector 1" */
SFR_NOABS (ERAY_NMV2, ERAY_NMVm_t, ERAY_NMV2_ADDR); /* "Network Management Vector 2" */
SFR_NOABS (ERAY_NMV3, ERAY_NMVm_t, ERAY_NMV3_ADDR); /* "Network Management Vector 3" */
SFR_NOABS (ERAY_OBCM, ERAY_OBCM_t, ERAY_OBCM_ADDR); /* "Output Buffer Command Mask" */
SFR_NOABS (ERAY_OBCR, ERAY_OBCR_t, ERAY_OBCR_ADDR); /* "Output Buffer Command Request" */
SFR_NOABS (ERAY_OBUSYSRC, ERAY_OBUSYSRC_t, ERAY_OBUSYSRC_ADDR); /* "Output Buffer Busy Service Request Control Register" */
SFR_NOABS (ERAY_OCV, ERAY_OCV_t, ERAY_OCV_ADDR);  /* "Offset Correction Value" */
SFR_NOABS (ERAY_OSID01, ERAY_OSIDm_t, ERAY_OSID01_ADDR); /* "Odd Sync ID Symbol Window 01" */
SFR_NOABS (ERAY_OSID02, ERAY_OSIDm_t, ERAY_OSID02_ADDR); /* "Odd Sync ID Symbol Window 02" */
SFR_NOABS (ERAY_OSID03, ERAY_OSIDm_t, ERAY_OSID03_ADDR); /* "Odd Sync ID Symbol Window 03" */
SFR_NOABS (ERAY_OSID04, ERAY_OSIDm_t, ERAY_OSID04_ADDR); /* "Odd Sync ID Symbol Window 04" */
SFR_NOABS (ERAY_OSID05, ERAY_OSIDm_t, ERAY_OSID05_ADDR); /* "Odd Sync ID Symbol Window 05" */
SFR_NOABS (ERAY_OSID06, ERAY_OSIDm_t, ERAY_OSID06_ADDR); /* "Odd Sync ID Symbol Window 06" */
SFR_NOABS (ERAY_OSID07, ERAY_OSIDm_t, ERAY_OSID07_ADDR); /* "Odd Sync ID Symbol Window 07" */
SFR_NOABS (ERAY_OSID08, ERAY_OSIDm_t, ERAY_OSID08_ADDR); /* "Odd Sync ID Symbol Window 08" */
SFR_NOABS (ERAY_OSID09, ERAY_OSIDm_t, ERAY_OSID09_ADDR); /* "Odd Sync ID Symbol Window 09" */
SFR_NOABS (ERAY_OSID10, ERAY_OSIDm_t, ERAY_OSID10_ADDR); /* "Odd Sync ID Symbol Window 10" */
SFR_NOABS (ERAY_OSID11, ERAY_OSIDm_t, ERAY_OSID11_ADDR); /* "Odd Sync ID Symbol Window 11" */
SFR_NOABS (ERAY_OSID12, ERAY_OSIDm_t, ERAY_OSID12_ADDR); /* "Odd Sync ID Symbol Window 12" */
SFR_NOABS (ERAY_OSID13, ERAY_OSIDm_t, ERAY_OSID13_ADDR); /* "Odd Sync ID Symbol Window 13" */
SFR_NOABS (ERAY_OSID14, ERAY_OSIDm_t, ERAY_OSID14_ADDR); /* "Odd Sync ID Symbol Window 14" */
SFR_NOABS (ERAY_OSID15, ERAY_OSIDm_t, ERAY_OSID15_ADDR); /* "Odd Sync ID Symbol Window 15" */
SFR_NOABS (ERAY_PRTC1, ERAY_PRTC1_t, ERAY_PRTC1_ADDR); /* "PRT Configuration Register 1" */
SFR_NOABS (ERAY_PRTC2, ERAY_PRTC2_t, ERAY_PRTC2_ADDR); /* "PRT Configuration Register 2" */
SFR_NOABS (ERAY_RCV, ERAY_RCV_t, ERAY_RCV_ADDR);  /* "Rate Correction Value" */
SFR_NOABS (ERAY_RDDS01, ERAY_RDDSm_t, ERAY_RDDS01_ADDR); /* "Read Data Section 01" */
SFR_NOABS (ERAY_RDDS02, ERAY_RDDSm_t, ERAY_RDDS02_ADDR); /* "Read Data Section 02" */
SFR_NOABS (ERAY_RDDS03, ERAY_RDDSm_t, ERAY_RDDS03_ADDR); /* "Read Data Section 03" */
SFR_NOABS (ERAY_RDDS04, ERAY_RDDSm_t, ERAY_RDDS04_ADDR); /* "Read Data Section 04" */
SFR_NOABS (ERAY_RDDS05, ERAY_RDDSm_t, ERAY_RDDS05_ADDR); /* "Read Data Section 05" */
SFR_NOABS (ERAY_RDDS06, ERAY_RDDSm_t, ERAY_RDDS06_ADDR); /* "Read Data Section 06" */
SFR_NOABS (ERAY_RDDS07, ERAY_RDDSm_t, ERAY_RDDS07_ADDR); /* "Read Data Section 07" */
SFR_NOABS (ERAY_RDDS08, ERAY_RDDSm_t, ERAY_RDDS08_ADDR); /* "Read Data Section 08" */
SFR_NOABS (ERAY_RDDS09, ERAY_RDDSm_t, ERAY_RDDS09_ADDR); /* "Read Data Section 09" */
SFR_NOABS (ERAY_RDDS10, ERAY_RDDSm_t, ERAY_RDDS10_ADDR); /* "Read Data Section 10" */
SFR_NOABS (ERAY_RDDS11, ERAY_RDDSm_t, ERAY_RDDS11_ADDR); /* "Read Data Section 11" */
SFR_NOABS (ERAY_RDDS12, ERAY_RDDSm_t, ERAY_RDDS12_ADDR); /* "Read Data Section 12" */
SFR_NOABS (ERAY_RDDS13, ERAY_RDDSm_t, ERAY_RDDS13_ADDR); /* "Read Data Section 13" */
SFR_NOABS (ERAY_RDDS14, ERAY_RDDSm_t, ERAY_RDDS14_ADDR); /* "Read Data Section 14" */
SFR_NOABS (ERAY_RDDS15, ERAY_RDDSm_t, ERAY_RDDS15_ADDR); /* "Read Data Section 15" */
SFR_NOABS (ERAY_RDDS16, ERAY_RDDSm_t, ERAY_RDDS16_ADDR); /* "Read Data Section 16" */
SFR_NOABS (ERAY_RDDS17, ERAY_RDDSm_t, ERAY_RDDS17_ADDR); /* "Read Data Section 17" */
SFR_NOABS (ERAY_RDDS18, ERAY_RDDSm_t, ERAY_RDDS18_ADDR); /* "Read Data Section 18" */
SFR_NOABS (ERAY_RDDS19, ERAY_RDDSm_t, ERAY_RDDS19_ADDR); /* "Read Data Section 19" */
SFR_NOABS (ERAY_RDDS20, ERAY_RDDSm_t, ERAY_RDDS20_ADDR); /* "Read Data Section 20" */
SFR_NOABS (ERAY_RDDS21, ERAY_RDDSm_t, ERAY_RDDS21_ADDR); /* "Read Data Section 21" */
SFR_NOABS (ERAY_RDDS22, ERAY_RDDSm_t, ERAY_RDDS22_ADDR); /* "Read Data Section 22" */
SFR_NOABS (ERAY_RDDS23, ERAY_RDDSm_t, ERAY_RDDS23_ADDR); /* "Read Data Section 23" */
SFR_NOABS (ERAY_RDDS24, ERAY_RDDSm_t, ERAY_RDDS24_ADDR); /* "Read Data Section 24" */
SFR_NOABS (ERAY_RDDS25, ERAY_RDDSm_t, ERAY_RDDS25_ADDR); /* "Read Data Section 25" */
SFR_NOABS (ERAY_RDDS26, ERAY_RDDSm_t, ERAY_RDDS26_ADDR); /* "Read Data Section 26" */
SFR_NOABS (ERAY_RDDS27, ERAY_RDDSm_t, ERAY_RDDS27_ADDR); /* "Read Data Section 27" */
SFR_NOABS (ERAY_RDDS28, ERAY_RDDSm_t, ERAY_RDDS28_ADDR); /* "Read Data Section 28" */
SFR_NOABS (ERAY_RDDS29, ERAY_RDDSm_t, ERAY_RDDS29_ADDR); /* "Read Data Section 29" */
SFR_NOABS (ERAY_RDDS30, ERAY_RDDSm_t, ERAY_RDDS30_ADDR); /* "Read Data Section 30" */
SFR_NOABS (ERAY_RDDS31, ERAY_RDDSm_t, ERAY_RDDS31_ADDR); /* "Read Data Section 31" */
SFR_NOABS (ERAY_RDDS32, ERAY_RDDSm_t, ERAY_RDDS32_ADDR); /* "Read Data Section 32" */
SFR_NOABS (ERAY_RDDS33, ERAY_RDDSm_t, ERAY_RDDS33_ADDR); /* "Read Data Section 33" */
SFR_NOABS (ERAY_RDDS34, ERAY_RDDSm_t, ERAY_RDDS34_ADDR); /* "Read Data Section 34" */
SFR_NOABS (ERAY_RDDS35, ERAY_RDDSm_t, ERAY_RDDS35_ADDR); /* "Read Data Section 35" */
SFR_NOABS (ERAY_RDDS36, ERAY_RDDSm_t, ERAY_RDDS36_ADDR); /* "Read Data Section 36" */
SFR_NOABS (ERAY_RDDS37, ERAY_RDDSm_t, ERAY_RDDS37_ADDR); /* "Read Data Section 37" */
SFR_NOABS (ERAY_RDDS38, ERAY_RDDSm_t, ERAY_RDDS38_ADDR); /* "Read Data Section 38" */
SFR_NOABS (ERAY_RDDS39, ERAY_RDDSm_t, ERAY_RDDS39_ADDR); /* "Read Data Section 39" */
SFR_NOABS (ERAY_RDDS40, ERAY_RDDSm_t, ERAY_RDDS40_ADDR); /* "Read Data Section 40" */
SFR_NOABS (ERAY_RDDS41, ERAY_RDDSm_t, ERAY_RDDS41_ADDR); /* "Read Data Section 41" */
SFR_NOABS (ERAY_RDDS42, ERAY_RDDSm_t, ERAY_RDDS42_ADDR); /* "Read Data Section 42" */
SFR_NOABS (ERAY_RDDS43, ERAY_RDDSm_t, ERAY_RDDS43_ADDR); /* "Read Data Section 43" */
SFR_NOABS (ERAY_RDDS44, ERAY_RDDSm_t, ERAY_RDDS44_ADDR); /* "Read Data Section 44" */
SFR_NOABS (ERAY_RDDS45, ERAY_RDDSm_t, ERAY_RDDS45_ADDR); /* "Read Data Section 45" */
SFR_NOABS (ERAY_RDDS46, ERAY_RDDSm_t, ERAY_RDDS46_ADDR); /* "Read Data Section 46" */
SFR_NOABS (ERAY_RDDS47, ERAY_RDDSm_t, ERAY_RDDS47_ADDR); /* "Read Data Section 47" */
SFR_NOABS (ERAY_RDDS48, ERAY_RDDSm_t, ERAY_RDDS48_ADDR); /* "Read Data Section 48" */
SFR_NOABS (ERAY_RDDS49, ERAY_RDDSm_t, ERAY_RDDS49_ADDR); /* "Read Data Section 49" */
SFR_NOABS (ERAY_RDDS50, ERAY_RDDSm_t, ERAY_RDDS50_ADDR); /* "Read Data Section 50" */
SFR_NOABS (ERAY_RDDS51, ERAY_RDDSm_t, ERAY_RDDS51_ADDR); /* "Read Data Section 51" */
SFR_NOABS (ERAY_RDDS52, ERAY_RDDSm_t, ERAY_RDDS52_ADDR); /* "Read Data Section 52" */
SFR_NOABS (ERAY_RDDS53, ERAY_RDDSm_t, ERAY_RDDS53_ADDR); /* "Read Data Section 53" */
SFR_NOABS (ERAY_RDDS54, ERAY_RDDSm_t, ERAY_RDDS54_ADDR); /* "Read Data Section 54" */
SFR_NOABS (ERAY_RDDS55, ERAY_RDDSm_t, ERAY_RDDS55_ADDR); /* "Read Data Section 55" */
SFR_NOABS (ERAY_RDDS56, ERAY_RDDSm_t, ERAY_RDDS56_ADDR); /* "Read Data Section 56" */
SFR_NOABS (ERAY_RDDS57, ERAY_RDDSm_t, ERAY_RDDS57_ADDR); /* "Read Data Section 57" */
SFR_NOABS (ERAY_RDDS58, ERAY_RDDSm_t, ERAY_RDDS58_ADDR); /* "Read Data Section 58" */
SFR_NOABS (ERAY_RDDS59, ERAY_RDDSm_t, ERAY_RDDS59_ADDR); /* "Read Data Section 59" */
SFR_NOABS (ERAY_RDDS60, ERAY_RDDSm_t, ERAY_RDDS60_ADDR); /* "Read Data Section 60" */
SFR_NOABS (ERAY_RDDS61, ERAY_RDDSm_t, ERAY_RDDS61_ADDR); /* "Read Data Section 61" */
SFR_NOABS (ERAY_RDDS62, ERAY_RDDSm_t, ERAY_RDDS62_ADDR); /* "Read Data Section 62" */
SFR_NOABS (ERAY_RDDS63, ERAY_RDDSm_t, ERAY_RDDS63_ADDR); /* "Read Data Section 63" */
SFR_NOABS (ERAY_RDDS64, ERAY_RDDSm_t, ERAY_RDDS64_ADDR); /* "Read Data Section 64" */
SFR_NOABS (ERAY_RDHS1, ERAY_RDHS1_t, ERAY_RDHS1_ADDR); /* "Read Header Section 1" */
SFR_NOABS (ERAY_RDHS2, ERAY_RDHS2_t, ERAY_RDHS2_ADDR); /* "Read Header Section 2" */
SFR_NOABS (ERAY_RDHS3, ERAY_RDHS3_t, ERAY_RDHS3_ADDR); /* "Read Header Section 3" */
SFR_NOABS (ERAY_SCV, ERAY_SCV_t, ERAY_SCV_ADDR);  /* "Slot Counter Value" */
SFR_NOABS (ERAY_SECCON, ERAY_SECCON_t, ERAY_SECCON_ADDR); /* "SEC Control" */
SFR_NOABS (ERAY_SEDCON, ERAY_SEDCON_t, ERAY_SEDCON_ADDR); /* "SED Control" */
SFR_NOABS (ERAY_SFS, ERAY_SFS_t, ERAY_SFS_ADDR);  /* "SYNC Frame Status" */
SFR_NOABS (ERAY_SIER, ERAY_SIER_t, ERAY_SIER_ADDR); /* "Status Service Request Enable Reset" */
SFR_NOABS (ERAY_SIES, ERAY_SIES_t, ERAY_SIES_ADDR); /* "Status Service Request Enable Set" */
SFR_NOABS (ERAY_SILS, ERAY_SILS_t, ERAY_SILS_ADDR); /* "Status Service Request Line Select" */
SFR_NOABS (ERAY_SIR, ERAY_SIR_t, ERAY_SIR_ADDR);  /* "Status Service Request Register" */
SFR_NOABS (ERAY_STPW1, ERAY_STPW1_t, ERAY_STPW1_ADDR); /* "Stop Watch Register 1" */
SFR_NOABS (ERAY_STPW2, ERAY_STPW2_t, ERAY_STPW2_ADDR); /* "Stop Watch Register 2" */
SFR_NOABS (ERAY_SUCC1, ERAY_SUCC1_t, ERAY_SUCC1_ADDR); /* "SUC Configuration Register 1" */
SFR_NOABS (ERAY_SUCC2, ERAY_SUCC2_t, ERAY_SUCC2_ADDR); /* "SUC Configuration Register 2" */
SFR_NOABS (ERAY_SUCC3, ERAY_SUCC3_t, ERAY_SUCC3_ADDR); /* "SUC Configuration Register 3" */
SFR_NOABS (ERAY_SWNIT, ERAY_SWNIT_t, ERAY_SWNIT_ADDR); /* "Symbol Window and Network Idle Time Status" */
SFR_NOABS (ERAY_T0C, ERAY_T0C_t, ERAY_T0C_ADDR);  /* "Timer 0 Configuration" */
SFR_NOABS (ERAY_T1C, ERAY_T1C_t, ERAY_T1C_ADDR);  /* "Timer 1 Configuration" */
SFR_NOABS (ERAY_TEST1, ERAY_TEST1_t, ERAY_TEST1_ADDR); /* "Test Register 1" */
SFR_NOABS (ERAY_TEST2, ERAY_TEST2_t, ERAY_TEST2_ADDR); /* "Test Register 2" */
SFR_NOABS (ERAY_TINT0SRC, ERAY_TINTmSRC_t, ERAY_TINT0SRC_ADDR); /* "Timer Interrupt 0 Service Request Control Register" */
SFR_NOABS (ERAY_TINT1SRC, ERAY_TINTmSRC_t, ERAY_TINT1SRC_ADDR); /* "Timer Interrupt 1 Service Request Control Register" */
SFR_NOABS (ERAY_TXRQ1, ERAY_TXRQm_t, ERAY_TXRQ1_ADDR); /* "Transmission Request Register 1" */
SFR_NOABS (ERAY_TXRQ2, ERAY_TXRQm_t, ERAY_TXRQ2_ADDR); /* "Transmission Request Register 2" */
SFR_NOABS (ERAY_TXRQ3, ERAY_TXRQm_t, ERAY_TXRQ3_ADDR); /* "Transmission Request Register 3" */
SFR_NOABS (ERAY_TXRQ4, ERAY_TXRQm_t, ERAY_TXRQ4_ADDR); /* "Transmission Request Register 4" */
SFR_NOABS (ERAY_WRDS01, ERAY_WRDSm_t, ERAY_WRDS01_ADDR); /* "Write Data Section 01" */
SFR_NOABS (ERAY_WRDS02, ERAY_WRDSm_t, ERAY_WRDS02_ADDR); /* "Write Data Section 02" */
SFR_NOABS (ERAY_WRDS03, ERAY_WRDSm_t, ERAY_WRDS03_ADDR); /* "Write Data Section 03" */
SFR_NOABS (ERAY_WRDS04, ERAY_WRDSm_t, ERAY_WRDS04_ADDR); /* "Write Data Section 04" */
SFR_NOABS (ERAY_WRDS05, ERAY_WRDSm_t, ERAY_WRDS05_ADDR); /* "Write Data Section 05" */
SFR_NOABS (ERAY_WRDS06, ERAY_WRDSm_t, ERAY_WRDS06_ADDR); /* "Write Data Section 06" */
SFR_NOABS (ERAY_WRDS07, ERAY_WRDSm_t, ERAY_WRDS07_ADDR); /* "Write Data Section 07" */
SFR_NOABS (ERAY_WRDS08, ERAY_WRDSm_t, ERAY_WRDS08_ADDR); /* "Write Data Section 08" */
SFR_NOABS (ERAY_WRDS09, ERAY_WRDSm_t, ERAY_WRDS09_ADDR); /* "Write Data Section 09" */
SFR_NOABS (ERAY_WRDS10, ERAY_WRDSm_t, ERAY_WRDS10_ADDR); /* "Write Data Section 10" */
SFR_NOABS (ERAY_WRDS11, ERAY_WRDSm_t, ERAY_WRDS11_ADDR); /* "Write Data Section 11" */
SFR_NOABS (ERAY_WRDS12, ERAY_WRDSm_t, ERAY_WRDS12_ADDR); /* "Write Data Section 12" */
SFR_NOABS (ERAY_WRDS13, ERAY_WRDSm_t, ERAY_WRDS13_ADDR); /* "Write Data Section 13" */
SFR_NOABS (ERAY_WRDS14, ERAY_WRDSm_t, ERAY_WRDS14_ADDR); /* "Write Data Section 14" */
SFR_NOABS (ERAY_WRDS15, ERAY_WRDSm_t, ERAY_WRDS15_ADDR); /* "Write Data Section 15" */
SFR_NOABS (ERAY_WRDS16, ERAY_WRDSm_t, ERAY_WRDS16_ADDR); /* "Write Data Section 16" */
SFR_NOABS (ERAY_WRDS17, ERAY_WRDSm_t, ERAY_WRDS17_ADDR); /* "Write Data Section 17" */
SFR_NOABS (ERAY_WRDS18, ERAY_WRDSm_t, ERAY_WRDS18_ADDR); /* "Write Data Section 18" */
SFR_NOABS (ERAY_WRDS19, ERAY_WRDSm_t, ERAY_WRDS19_ADDR); /* "Write Data Section 19" */
SFR_NOABS (ERAY_WRDS20, ERAY_WRDSm_t, ERAY_WRDS20_ADDR); /* "Write Data Section 20" */
SFR_NOABS (ERAY_WRDS21, ERAY_WRDSm_t, ERAY_WRDS21_ADDR); /* "Write Data Section 21" */
SFR_NOABS (ERAY_WRDS22, ERAY_WRDSm_t, ERAY_WRDS22_ADDR); /* "Write Data Section 22" */
SFR_NOABS (ERAY_WRDS23, ERAY_WRDSm_t, ERAY_WRDS23_ADDR); /* "Write Data Section 23" */
SFR_NOABS (ERAY_WRDS24, ERAY_WRDSm_t, ERAY_WRDS24_ADDR); /* "Write Data Section 24" */
SFR_NOABS (ERAY_WRDS25, ERAY_WRDSm_t, ERAY_WRDS25_ADDR); /* "Write Data Section 25" */
SFR_NOABS (ERAY_WRDS26, ERAY_WRDSm_t, ERAY_WRDS26_ADDR); /* "Write Data Section 26" */
SFR_NOABS (ERAY_WRDS27, ERAY_WRDSm_t, ERAY_WRDS27_ADDR); /* "Write Data Section 27" */
SFR_NOABS (ERAY_WRDS28, ERAY_WRDSm_t, ERAY_WRDS28_ADDR); /* "Write Data Section 28" */
SFR_NOABS (ERAY_WRDS29, ERAY_WRDSm_t, ERAY_WRDS29_ADDR); /* "Write Data Section 29" */
SFR_NOABS (ERAY_WRDS30, ERAY_WRDSm_t, ERAY_WRDS30_ADDR); /* "Write Data Section 30" */
SFR_NOABS (ERAY_WRDS31, ERAY_WRDSm_t, ERAY_WRDS31_ADDR); /* "Write Data Section 31" */
SFR_NOABS (ERAY_WRDS32, ERAY_WRDSm_t, ERAY_WRDS32_ADDR); /* "Write Data Section 32" */
SFR_NOABS (ERAY_WRDS33, ERAY_WRDSm_t, ERAY_WRDS33_ADDR); /* "Write Data Section 33" */
SFR_NOABS (ERAY_WRDS34, ERAY_WRDSm_t, ERAY_WRDS34_ADDR); /* "Write Data Section 34" */
SFR_NOABS (ERAY_WRDS35, ERAY_WRDSm_t, ERAY_WRDS35_ADDR); /* "Write Data Section 35" */
SFR_NOABS (ERAY_WRDS36, ERAY_WRDSm_t, ERAY_WRDS36_ADDR); /* "Write Data Section 36" */
SFR_NOABS (ERAY_WRDS37, ERAY_WRDSm_t, ERAY_WRDS37_ADDR); /* "Write Data Section 37" */
SFR_NOABS (ERAY_WRDS38, ERAY_WRDSm_t, ERAY_WRDS38_ADDR); /* "Write Data Section 38" */
SFR_NOABS (ERAY_WRDS39, ERAY_WRDSm_t, ERAY_WRDS39_ADDR); /* "Write Data Section 39" */
SFR_NOABS (ERAY_WRDS40, ERAY_WRDSm_t, ERAY_WRDS40_ADDR); /* "Write Data Section 40" */
SFR_NOABS (ERAY_WRDS41, ERAY_WRDSm_t, ERAY_WRDS41_ADDR); /* "Write Data Section 41" */
SFR_NOABS (ERAY_WRDS42, ERAY_WRDSm_t, ERAY_WRDS42_ADDR); /* "Write Data Section 42" */
SFR_NOABS (ERAY_WRDS43, ERAY_WRDSm_t, ERAY_WRDS43_ADDR); /* "Write Data Section 43" */
SFR_NOABS (ERAY_WRDS44, ERAY_WRDSm_t, ERAY_WRDS44_ADDR); /* "Write Data Section 44" */
SFR_NOABS (ERAY_WRDS45, ERAY_WRDSm_t, ERAY_WRDS45_ADDR); /* "Write Data Section 45" */
SFR_NOABS (ERAY_WRDS46, ERAY_WRDSm_t, ERAY_WRDS46_ADDR); /* "Write Data Section 46" */
SFR_NOABS (ERAY_WRDS47, ERAY_WRDSm_t, ERAY_WRDS47_ADDR); /* "Write Data Section 47" */
SFR_NOABS (ERAY_WRDS48, ERAY_WRDSm_t, ERAY_WRDS48_ADDR); /* "Write Data Section 48" */
SFR_NOABS (ERAY_WRDS49, ERAY_WRDSm_t, ERAY_WRDS49_ADDR); /* "Write Data Section 49" */
SFR_NOABS (ERAY_WRDS50, ERAY_WRDSm_t, ERAY_WRDS50_ADDR); /* "Write Data Section 50" */
SFR_NOABS (ERAY_WRDS51, ERAY_WRDSm_t, ERAY_WRDS51_ADDR); /* "Write Data Section 51" */
SFR_NOABS (ERAY_WRDS52, ERAY_WRDSm_t, ERAY_WRDS52_ADDR); /* "Write Data Section 52" */
SFR_NOABS (ERAY_WRDS53, ERAY_WRDSm_t, ERAY_WRDS53_ADDR); /* "Write Data Section 53" */
SFR_NOABS (ERAY_WRDS54, ERAY_WRDSm_t, ERAY_WRDS54_ADDR); /* "Write Data Section 54" */
SFR_NOABS (ERAY_WRDS55, ERAY_WRDSm_t, ERAY_WRDS55_ADDR); /* "Write Data Section 55" */
SFR_NOABS (ERAY_WRDS56, ERAY_WRDSm_t, ERAY_WRDS56_ADDR); /* "Write Data Section 56" */
SFR_NOABS (ERAY_WRDS57, ERAY_WRDSm_t, ERAY_WRDS57_ADDR); /* "Write Data Section 57" */
SFR_NOABS (ERAY_WRDS58, ERAY_WRDSm_t, ERAY_WRDS58_ADDR); /* "Write Data Section 58" */
SFR_NOABS (ERAY_WRDS59, ERAY_WRDSm_t, ERAY_WRDS59_ADDR); /* "Write Data Section 59" */
SFR_NOABS (ERAY_WRDS60, ERAY_WRDSm_t, ERAY_WRDS60_ADDR); /* "Write Data Section 60" */
SFR_NOABS (ERAY_WRDS61, ERAY_WRDSm_t, ERAY_WRDS61_ADDR); /* "Write Data Section 61" */
SFR_NOABS (ERAY_WRDS62, ERAY_WRDSm_t, ERAY_WRDS62_ADDR); /* "Write Data Section 62" */
SFR_NOABS (ERAY_WRDS63, ERAY_WRDSm_t, ERAY_WRDS63_ADDR); /* "Write Data Section 63" */
SFR_NOABS (ERAY_WRDS64, ERAY_WRDSm_t, ERAY_WRDS64_ADDR); /* "Write Data Section 64" */
SFR_NOABS (ERAY_WRHS1, ERAY_WRHS1_t, ERAY_WRHS1_ADDR); /* "Write Header Section 1" */
SFR_NOABS (ERAY_WRHS2, ERAY_WRHS2_t, ERAY_WRHS2_ADDR); /* "Write Header Section 2" */
SFR_NOABS (ERAY_WRHS3, ERAY_WRHS3_t, ERAY_WRHS3_ADDR); /* "Write Header Section 3" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_ERAY_H_ (block "ERAY") */


