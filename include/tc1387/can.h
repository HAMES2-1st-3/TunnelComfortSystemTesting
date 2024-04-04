/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "MultiCAN" of TriCore TC1387 (1112 SFRs) */

#include <tc1387/can/addr.h>

#include <tc1387/can/masks.h>
#include <tc1387/can/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1387/can/types.h>
#include <tc1387/can/sharetypes.h>

#ifndef _HAVE_TRICORE_CAN_H_
#define _HAVE_TRICORE_CAN_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (CAN_AWDR, CAN_AWDR_t, CAN_AWDR_ADDR);  /* "Application Watchdog Register" */
SFR_NOABS (CAN_CLC, CAN_CLC_t, CAN_CLC_ADDR);     /* "CAN Clock Control Register" */
SFR_NOABS (CAN_CYCTMR, CAN_CYCTMR_t, CAN_CYCTMR_ADDR); /* "Cycle Time Register" */
SFR_NOABS (CAN_FDR, CAN_FDR_t, CAN_FDR_ADDR);     /* "CAN Fractional Divider Register" */
SFR_NOABS (CAN_GMR, CAN_GMR_t, CAN_GMR_ADDR);     /* "Global Mark Register" */
SFR_NOABS (CAN_ID, CAN_ID_t, CAN_ID_ADDR);        /* "Module Identification Register" */
SFR_NOABS (CAN_LGMR, CAN_LGMR_t, CAN_LGMR_ADDR);  /* "Last Global Mark Register" */
SFR_NOABS (CAN_LIST0, CAN_LISTm_t, CAN_LIST0_ADDR); /* "List Register 0" */
SFR_NOABS (CAN_LIST1, CAN_LISTm_t, CAN_LIST1_ADDR); /* "List Register 1" */
SFR_NOABS (CAN_LIST2, CAN_LISTm_t, CAN_LIST2_ADDR); /* "List Register 2" */
SFR_NOABS (CAN_LIST3, CAN_LISTm_t, CAN_LIST3_ADDR); /* "List Register 3" */
SFR_NOABS (CAN_LIST4, CAN_LISTm_t, CAN_LIST4_ADDR); /* "List Register 4" */
SFR_NOABS (CAN_LIST5, CAN_LISTm_t, CAN_LIST5_ADDR); /* "List Register 5" */
SFR_NOABS (CAN_LIST6, CAN_LISTm_t, CAN_LIST6_ADDR); /* "List Register 6" */
SFR_NOABS (CAN_LIST7, CAN_LISTm_t, CAN_LIST7_ADDR); /* "List Register 7" */
SFR_NOABS (CAN_LOR, CAN_LOR_t, CAN_LOR_ADDR);     /* "Local Offset Register" */
SFR_NOABS (CAN_LREFMR, CAN_LREFMR_t, CAN_LREFMR_ADDR); /* "Last Reference Mark Register" */
SFR_NOABS (CAN_LTR, CAN_LTR_t, CAN_LTR_ADDR);     /* "Local Time Register" */
SFR_NOABS (CAN_MCR, CAN_MCR_t, CAN_MCR_ADDR);     /* "Module Control Register" */
SFR_NOABS (CAN_MITR, CAN_MITR_t, CAN_MITR_ADDR);  /* "Module Interrupt Trigger Register" */
SFR_NOABS (CAN_MOAMR0, CAN_MOAMRm_t, CAN_MOAMR0_ADDR); /* "Message Object 0 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR1, CAN_MOAMRm_t, CAN_MOAMR1_ADDR); /* "Message Object 1 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR10, CAN_MOAMRm_t, CAN_MOAMR10_ADDR); /* "Message Object 10 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR100, CAN_MOAMRm_t, CAN_MOAMR100_ADDR); /* "Message Object 100 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR101, CAN_MOAMRm_t, CAN_MOAMR101_ADDR); /* "Message Object 101 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR102, CAN_MOAMRm_t, CAN_MOAMR102_ADDR); /* "Message Object 102 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR103, CAN_MOAMRm_t, CAN_MOAMR103_ADDR); /* "Message Object 103 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR104, CAN_MOAMRm_t, CAN_MOAMR104_ADDR); /* "Message Object 104 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR105, CAN_MOAMRm_t, CAN_MOAMR105_ADDR); /* "Message Object 105 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR106, CAN_MOAMRm_t, CAN_MOAMR106_ADDR); /* "Message Object 106 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR107, CAN_MOAMRm_t, CAN_MOAMR107_ADDR); /* "Message Object 107 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR108, CAN_MOAMRm_t, CAN_MOAMR108_ADDR); /* "Message Object 108 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR109, CAN_MOAMRm_t, CAN_MOAMR109_ADDR); /* "Message Object 109 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR11, CAN_MOAMRm_t, CAN_MOAMR11_ADDR); /* "Message Object 11 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR110, CAN_MOAMRm_t, CAN_MOAMR110_ADDR); /* "Message Object 110 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR111, CAN_MOAMRm_t, CAN_MOAMR111_ADDR); /* "Message Object 111 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR112, CAN_MOAMRm_t, CAN_MOAMR112_ADDR); /* "Message Object 112 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR113, CAN_MOAMRm_t, CAN_MOAMR113_ADDR); /* "Message Object 113 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR114, CAN_MOAMRm_t, CAN_MOAMR114_ADDR); /* "Message Object 114 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR115, CAN_MOAMRm_t, CAN_MOAMR115_ADDR); /* "Message Object 115 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR116, CAN_MOAMRm_t, CAN_MOAMR116_ADDR); /* "Message Object 116 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR117, CAN_MOAMRm_t, CAN_MOAMR117_ADDR); /* "Message Object 117 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR118, CAN_MOAMRm_t, CAN_MOAMR118_ADDR); /* "Message Object 118 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR119, CAN_MOAMRm_t, CAN_MOAMR119_ADDR); /* "Message Object 119 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR12, CAN_MOAMRm_t, CAN_MOAMR12_ADDR); /* "Message Object 12 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR120, CAN_MOAMRm_t, CAN_MOAMR120_ADDR); /* "Message Object 120 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR121, CAN_MOAMRm_t, CAN_MOAMR121_ADDR); /* "Message Object 121 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR122, CAN_MOAMRm_t, CAN_MOAMR122_ADDR); /* "Message Object 122 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR123, CAN_MOAMRm_t, CAN_MOAMR123_ADDR); /* "Message Object 123 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR124, CAN_MOAMRm_t, CAN_MOAMR124_ADDR); /* "Message Object 124 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR125, CAN_MOAMRm_t, CAN_MOAMR125_ADDR); /* "Message Object 125 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR126, CAN_MOAMRm_t, CAN_MOAMR126_ADDR); /* "Message Object 126 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR127, CAN_MOAMRm_t, CAN_MOAMR127_ADDR); /* "Message Object 127 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR13, CAN_MOAMRm_t, CAN_MOAMR13_ADDR); /* "Message Object 13 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR14, CAN_MOAMRm_t, CAN_MOAMR14_ADDR); /* "Message Object 14 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR15, CAN_MOAMRm_t, CAN_MOAMR15_ADDR); /* "Message Object 15 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR16, CAN_MOAMRm_t, CAN_MOAMR16_ADDR); /* "Message Object 16 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR17, CAN_MOAMRm_t, CAN_MOAMR17_ADDR); /* "Message Object 17 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR18, CAN_MOAMRm_t, CAN_MOAMR18_ADDR); /* "Message Object 18 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR19, CAN_MOAMRm_t, CAN_MOAMR19_ADDR); /* "Message Object 19 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR2, CAN_MOAMRm_t, CAN_MOAMR2_ADDR); /* "Message Object 2 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR20, CAN_MOAMRm_t, CAN_MOAMR20_ADDR); /* "Message Object 20 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR21, CAN_MOAMRm_t, CAN_MOAMR21_ADDR); /* "Message Object 21 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR22, CAN_MOAMRm_t, CAN_MOAMR22_ADDR); /* "Message Object 22 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR23, CAN_MOAMRm_t, CAN_MOAMR23_ADDR); /* "Message Object 23 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR24, CAN_MOAMRm_t, CAN_MOAMR24_ADDR); /* "Message Object 24 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR25, CAN_MOAMRm_t, CAN_MOAMR25_ADDR); /* "Message Object 25 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR26, CAN_MOAMRm_t, CAN_MOAMR26_ADDR); /* "Message Object 26 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR27, CAN_MOAMRm_t, CAN_MOAMR27_ADDR); /* "Message Object 27 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR28, CAN_MOAMRm_t, CAN_MOAMR28_ADDR); /* "Message Object 28 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR29, CAN_MOAMRm_t, CAN_MOAMR29_ADDR); /* "Message Object 29 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR3, CAN_MOAMRm_t, CAN_MOAMR3_ADDR); /* "Message Object 3 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR30, CAN_MOAMRm_t, CAN_MOAMR30_ADDR); /* "Message Object 30 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR31, CAN_MOAMRm_t, CAN_MOAMR31_ADDR); /* "Message Object 31 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR32, CAN_MOAMRm_t, CAN_MOAMR32_ADDR); /* "Message Object 32 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR33, CAN_MOAMRm_t, CAN_MOAMR33_ADDR); /* "Message Object 33 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR34, CAN_MOAMRm_t, CAN_MOAMR34_ADDR); /* "Message Object 34 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR35, CAN_MOAMRm_t, CAN_MOAMR35_ADDR); /* "Message Object 35 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR36, CAN_MOAMRm_t, CAN_MOAMR36_ADDR); /* "Message Object 36 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR37, CAN_MOAMRm_t, CAN_MOAMR37_ADDR); /* "Message Object 37 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR38, CAN_MOAMRm_t, CAN_MOAMR38_ADDR); /* "Message Object 38 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR39, CAN_MOAMRm_t, CAN_MOAMR39_ADDR); /* "Message Object 39 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR4, CAN_MOAMRm_t, CAN_MOAMR4_ADDR); /* "Message Object 4 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR40, CAN_MOAMRm_t, CAN_MOAMR40_ADDR); /* "Message Object 40 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR41, CAN_MOAMRm_t, CAN_MOAMR41_ADDR); /* "Message Object 41 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR42, CAN_MOAMRm_t, CAN_MOAMR42_ADDR); /* "Message Object 42 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR43, CAN_MOAMRm_t, CAN_MOAMR43_ADDR); /* "Message Object 43 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR44, CAN_MOAMRm_t, CAN_MOAMR44_ADDR); /* "Message Object 44 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR45, CAN_MOAMRm_t, CAN_MOAMR45_ADDR); /* "Message Object 45 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR46, CAN_MOAMRm_t, CAN_MOAMR46_ADDR); /* "Message Object 46 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR47, CAN_MOAMRm_t, CAN_MOAMR47_ADDR); /* "Message Object 47 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR48, CAN_MOAMRm_t, CAN_MOAMR48_ADDR); /* "Message Object 48 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR49, CAN_MOAMRm_t, CAN_MOAMR49_ADDR); /* "Message Object 49 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR5, CAN_MOAMRm_t, CAN_MOAMR5_ADDR); /* "Message Object 5 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR50, CAN_MOAMRm_t, CAN_MOAMR50_ADDR); /* "Message Object 50 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR51, CAN_MOAMRm_t, CAN_MOAMR51_ADDR); /* "Message Object 51 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR52, CAN_MOAMRm_t, CAN_MOAMR52_ADDR); /* "Message Object 52 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR53, CAN_MOAMRm_t, CAN_MOAMR53_ADDR); /* "Message Object 53 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR54, CAN_MOAMRm_t, CAN_MOAMR54_ADDR); /* "Message Object 54 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR55, CAN_MOAMRm_t, CAN_MOAMR55_ADDR); /* "Message Object 55 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR56, CAN_MOAMRm_t, CAN_MOAMR56_ADDR); /* "Message Object 56 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR57, CAN_MOAMRm_t, CAN_MOAMR57_ADDR); /* "Message Object 57 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR58, CAN_MOAMRm_t, CAN_MOAMR58_ADDR); /* "Message Object 58 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR59, CAN_MOAMRm_t, CAN_MOAMR59_ADDR); /* "Message Object 59 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR6, CAN_MOAMRm_t, CAN_MOAMR6_ADDR); /* "Message Object 6 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR60, CAN_MOAMRm_t, CAN_MOAMR60_ADDR); /* "Message Object 60 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR61, CAN_MOAMRm_t, CAN_MOAMR61_ADDR); /* "Message Object 61 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR62, CAN_MOAMRm_t, CAN_MOAMR62_ADDR); /* "Message Object 62 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR63, CAN_MOAMRm_t, CAN_MOAMR63_ADDR); /* "Message Object 63 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR64, CAN_MOAMRm_t, CAN_MOAMR64_ADDR); /* "Message Object 64 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR65, CAN_MOAMRm_t, CAN_MOAMR65_ADDR); /* "Message Object 65 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR66, CAN_MOAMRm_t, CAN_MOAMR66_ADDR); /* "Message Object 66 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR67, CAN_MOAMRm_t, CAN_MOAMR67_ADDR); /* "Message Object 67 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR68, CAN_MOAMRm_t, CAN_MOAMR68_ADDR); /* "Message Object 68 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR69, CAN_MOAMRm_t, CAN_MOAMR69_ADDR); /* "Message Object 69 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR7, CAN_MOAMRm_t, CAN_MOAMR7_ADDR); /* "Message Object 7 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR70, CAN_MOAMRm_t, CAN_MOAMR70_ADDR); /* "Message Object 70 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR71, CAN_MOAMRm_t, CAN_MOAMR71_ADDR); /* "Message Object 71 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR72, CAN_MOAMRm_t, CAN_MOAMR72_ADDR); /* "Message Object 72 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR73, CAN_MOAMRm_t, CAN_MOAMR73_ADDR); /* "Message Object 73 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR74, CAN_MOAMRm_t, CAN_MOAMR74_ADDR); /* "Message Object 74 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR75, CAN_MOAMRm_t, CAN_MOAMR75_ADDR); /* "Message Object 75 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR76, CAN_MOAMRm_t, CAN_MOAMR76_ADDR); /* "Message Object 76 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR77, CAN_MOAMRm_t, CAN_MOAMR77_ADDR); /* "Message Object 77 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR78, CAN_MOAMRm_t, CAN_MOAMR78_ADDR); /* "Message Object 78 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR79, CAN_MOAMRm_t, CAN_MOAMR79_ADDR); /* "Message Object 79 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR8, CAN_MOAMRm_t, CAN_MOAMR8_ADDR); /* "Message Object 8 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR80, CAN_MOAMRm_t, CAN_MOAMR80_ADDR); /* "Message Object 80 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR81, CAN_MOAMRm_t, CAN_MOAMR81_ADDR); /* "Message Object 81 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR82, CAN_MOAMRm_t, CAN_MOAMR82_ADDR); /* "Message Object 82 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR83, CAN_MOAMRm_t, CAN_MOAMR83_ADDR); /* "Message Object 83 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR84, CAN_MOAMRm_t, CAN_MOAMR84_ADDR); /* "Message Object 84 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR85, CAN_MOAMRm_t, CAN_MOAMR85_ADDR); /* "Message Object 85 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR86, CAN_MOAMRm_t, CAN_MOAMR86_ADDR); /* "Message Object 86 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR87, CAN_MOAMRm_t, CAN_MOAMR87_ADDR); /* "Message Object 87 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR88, CAN_MOAMRm_t, CAN_MOAMR88_ADDR); /* "Message Object 88 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR89, CAN_MOAMRm_t, CAN_MOAMR89_ADDR); /* "Message Object 89 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR9, CAN_MOAMRm_t, CAN_MOAMR9_ADDR); /* "Message Object 9 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR90, CAN_MOAMRm_t, CAN_MOAMR90_ADDR); /* "Message Object 90 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR91, CAN_MOAMRm_t, CAN_MOAMR91_ADDR); /* "Message Object 91 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR92, CAN_MOAMRm_t, CAN_MOAMR92_ADDR); /* "Message Object 92 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR93, CAN_MOAMRm_t, CAN_MOAMR93_ADDR); /* "Message Object 93 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR94, CAN_MOAMRm_t, CAN_MOAMR94_ADDR); /* "Message Object 94 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR95, CAN_MOAMRm_t, CAN_MOAMR95_ADDR); /* "Message Object 95 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR96, CAN_MOAMRm_t, CAN_MOAMR96_ADDR); /* "Message Object 96 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR97, CAN_MOAMRm_t, CAN_MOAMR97_ADDR); /* "Message Object 97 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR98, CAN_MOAMRm_t, CAN_MOAMR98_ADDR); /* "Message Object 98 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR99, CAN_MOAMRm_t, CAN_MOAMR99_ADDR); /* "Message Object 99 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAR0, CAN_MOARm_t, CAN_MOAR0_ADDR); /* "Message Object 0 Arbitration Register" */
SFR_NOABS (CAN_MOAR1, CAN_MOARm_t, CAN_MOAR1_ADDR); /* "Message Object 1 Arbitration Register" */
SFR_NOABS (CAN_MOAR10, CAN_MOARm_t, CAN_MOAR10_ADDR); /* "Message Object 10 Arbitration Register" */
SFR_NOABS (CAN_MOAR100, CAN_MOARm_t, CAN_MOAR100_ADDR); /* "Message Object 100 Arbitration Register" */
SFR_NOABS (CAN_MOAR101, CAN_MOARm_t, CAN_MOAR101_ADDR); /* "Message Object 101 Arbitration Register" */
SFR_NOABS (CAN_MOAR102, CAN_MOARm_t, CAN_MOAR102_ADDR); /* "Message Object 102 Arbitration Register" */
SFR_NOABS (CAN_MOAR103, CAN_MOARm_t, CAN_MOAR103_ADDR); /* "Message Object 103 Arbitration Register" */
SFR_NOABS (CAN_MOAR104, CAN_MOARm_t, CAN_MOAR104_ADDR); /* "Message Object 104 Arbitration Register" */
SFR_NOABS (CAN_MOAR105, CAN_MOARm_t, CAN_MOAR105_ADDR); /* "Message Object 105 Arbitration Register" */
SFR_NOABS (CAN_MOAR106, CAN_MOARm_t, CAN_MOAR106_ADDR); /* "Message Object 106 Arbitration Register" */
SFR_NOABS (CAN_MOAR107, CAN_MOARm_t, CAN_MOAR107_ADDR); /* "Message Object 107 Arbitration Register" */
SFR_NOABS (CAN_MOAR108, CAN_MOARm_t, CAN_MOAR108_ADDR); /* "Message Object 108 Arbitration Register" */
SFR_NOABS (CAN_MOAR109, CAN_MOARm_t, CAN_MOAR109_ADDR); /* "Message Object 109 Arbitration Register" */
SFR_NOABS (CAN_MOAR11, CAN_MOARm_t, CAN_MOAR11_ADDR); /* "Message Object 11 Arbitration Register" */
SFR_NOABS (CAN_MOAR110, CAN_MOARm_t, CAN_MOAR110_ADDR); /* "Message Object 110 Arbitration Register" */
SFR_NOABS (CAN_MOAR111, CAN_MOARm_t, CAN_MOAR111_ADDR); /* "Message Object 111 Arbitration Register" */
SFR_NOABS (CAN_MOAR112, CAN_MOARm_t, CAN_MOAR112_ADDR); /* "Message Object 112 Arbitration Register" */
SFR_NOABS (CAN_MOAR113, CAN_MOARm_t, CAN_MOAR113_ADDR); /* "Message Object 113 Arbitration Register" */
SFR_NOABS (CAN_MOAR114, CAN_MOARm_t, CAN_MOAR114_ADDR); /* "Message Object 114 Arbitration Register" */
SFR_NOABS (CAN_MOAR115, CAN_MOARm_t, CAN_MOAR115_ADDR); /* "Message Object 115 Arbitration Register" */
SFR_NOABS (CAN_MOAR116, CAN_MOARm_t, CAN_MOAR116_ADDR); /* "Message Object 116 Arbitration Register" */
SFR_NOABS (CAN_MOAR117, CAN_MOARm_t, CAN_MOAR117_ADDR); /* "Message Object 117 Arbitration Register" */
SFR_NOABS (CAN_MOAR118, CAN_MOARm_t, CAN_MOAR118_ADDR); /* "Message Object 118 Arbitration Register" */
SFR_NOABS (CAN_MOAR119, CAN_MOARm_t, CAN_MOAR119_ADDR); /* "Message Object 119 Arbitration Register" */
SFR_NOABS (CAN_MOAR12, CAN_MOARm_t, CAN_MOAR12_ADDR); /* "Message Object 12 Arbitration Register" */
SFR_NOABS (CAN_MOAR120, CAN_MOARm_t, CAN_MOAR120_ADDR); /* "Message Object 120 Arbitration Register" */
SFR_NOABS (CAN_MOAR121, CAN_MOARm_t, CAN_MOAR121_ADDR); /* "Message Object 121 Arbitration Register" */
SFR_NOABS (CAN_MOAR122, CAN_MOARm_t, CAN_MOAR122_ADDR); /* "Message Object 122 Arbitration Register" */
SFR_NOABS (CAN_MOAR123, CAN_MOARm_t, CAN_MOAR123_ADDR); /* "Message Object 123 Arbitration Register" */
SFR_NOABS (CAN_MOAR124, CAN_MOARm_t, CAN_MOAR124_ADDR); /* "Message Object 124 Arbitration Register" */
SFR_NOABS (CAN_MOAR125, CAN_MOARm_t, CAN_MOAR125_ADDR); /* "Message Object 125 Arbitration Register" */
SFR_NOABS (CAN_MOAR126, CAN_MOARm_t, CAN_MOAR126_ADDR); /* "Message Object 126 Arbitration Register" */
SFR_NOABS (CAN_MOAR127, CAN_MOARm_t, CAN_MOAR127_ADDR); /* "Message Object 127 Arbitration Register" */
SFR_NOABS (CAN_MOAR13, CAN_MOARm_t, CAN_MOAR13_ADDR); /* "Message Object 13 Arbitration Register" */
SFR_NOABS (CAN_MOAR14, CAN_MOARm_t, CAN_MOAR14_ADDR); /* "Message Object 14 Arbitration Register" */
SFR_NOABS (CAN_MOAR15, CAN_MOARm_t, CAN_MOAR15_ADDR); /* "Message Object 15 Arbitration Register" */
SFR_NOABS (CAN_MOAR16, CAN_MOARm_t, CAN_MOAR16_ADDR); /* "Message Object 16 Arbitration Register" */
SFR_NOABS (CAN_MOAR17, CAN_MOARm_t, CAN_MOAR17_ADDR); /* "Message Object 17 Arbitration Register" */
SFR_NOABS (CAN_MOAR18, CAN_MOARm_t, CAN_MOAR18_ADDR); /* "Message Object 18 Arbitration Register" */
SFR_NOABS (CAN_MOAR19, CAN_MOARm_t, CAN_MOAR19_ADDR); /* "Message Object 19 Arbitration Register" */
SFR_NOABS (CAN_MOAR2, CAN_MOARm_t, CAN_MOAR2_ADDR); /* "Message Object 2 Arbitration Register" */
SFR_NOABS (CAN_MOAR20, CAN_MOARm_t, CAN_MOAR20_ADDR); /* "Message Object 20 Arbitration Register" */
SFR_NOABS (CAN_MOAR21, CAN_MOARm_t, CAN_MOAR21_ADDR); /* "Message Object 21 Arbitration Register" */
SFR_NOABS (CAN_MOAR22, CAN_MOARm_t, CAN_MOAR22_ADDR); /* "Message Object 22 Arbitration Register" */
SFR_NOABS (CAN_MOAR23, CAN_MOARm_t, CAN_MOAR23_ADDR); /* "Message Object 23 Arbitration Register" */
SFR_NOABS (CAN_MOAR24, CAN_MOARm_t, CAN_MOAR24_ADDR); /* "Message Object 24 Arbitration Register" */
SFR_NOABS (CAN_MOAR25, CAN_MOARm_t, CAN_MOAR25_ADDR); /* "Message Object 25 Arbitration Register" */
SFR_NOABS (CAN_MOAR26, CAN_MOARm_t, CAN_MOAR26_ADDR); /* "Message Object 26 Arbitration Register" */
SFR_NOABS (CAN_MOAR27, CAN_MOARm_t, CAN_MOAR27_ADDR); /* "Message Object 27 Arbitration Register" */
SFR_NOABS (CAN_MOAR28, CAN_MOARm_t, CAN_MOAR28_ADDR); /* "Message Object 28 Arbitration Register" */
SFR_NOABS (CAN_MOAR29, CAN_MOARm_t, CAN_MOAR29_ADDR); /* "Message Object 29 Arbitration Register" */
SFR_NOABS (CAN_MOAR3, CAN_MOARm_t, CAN_MOAR3_ADDR); /* "Message Object 3 Arbitration Register" */
SFR_NOABS (CAN_MOAR30, CAN_MOARm_t, CAN_MOAR30_ADDR); /* "Message Object 30 Arbitration Register" */
SFR_NOABS (CAN_MOAR31, CAN_MOARm_t, CAN_MOAR31_ADDR); /* "Message Object 31 Arbitration Register" */
SFR_NOABS (CAN_MOAR32, CAN_MOARm_t, CAN_MOAR32_ADDR); /* "Message Object 32 Arbitration Register" */
SFR_NOABS (CAN_MOAR33, CAN_MOARm_t, CAN_MOAR33_ADDR); /* "Message Object 33 Arbitration Register" */
SFR_NOABS (CAN_MOAR34, CAN_MOARm_t, CAN_MOAR34_ADDR); /* "Message Object 34 Arbitration Register" */
SFR_NOABS (CAN_MOAR35, CAN_MOARm_t, CAN_MOAR35_ADDR); /* "Message Object 35 Arbitration Register" */
SFR_NOABS (CAN_MOAR36, CAN_MOARm_t, CAN_MOAR36_ADDR); /* "Message Object 36 Arbitration Register" */
SFR_NOABS (CAN_MOAR37, CAN_MOARm_t, CAN_MOAR37_ADDR); /* "Message Object 37 Arbitration Register" */
SFR_NOABS (CAN_MOAR38, CAN_MOARm_t, CAN_MOAR38_ADDR); /* "Message Object 38 Arbitration Register" */
SFR_NOABS (CAN_MOAR39, CAN_MOARm_t, CAN_MOAR39_ADDR); /* "Message Object 39 Arbitration Register" */
SFR_NOABS (CAN_MOAR4, CAN_MOARm_t, CAN_MOAR4_ADDR); /* "Message Object 4 Arbitration Register" */
SFR_NOABS (CAN_MOAR40, CAN_MOARm_t, CAN_MOAR40_ADDR); /* "Message Object 40 Arbitration Register" */
SFR_NOABS (CAN_MOAR41, CAN_MOARm_t, CAN_MOAR41_ADDR); /* "Message Object 41 Arbitration Register" */
SFR_NOABS (CAN_MOAR42, CAN_MOARm_t, CAN_MOAR42_ADDR); /* "Message Object 42 Arbitration Register" */
SFR_NOABS (CAN_MOAR43, CAN_MOARm_t, CAN_MOAR43_ADDR); /* "Message Object 43 Arbitration Register" */
SFR_NOABS (CAN_MOAR44, CAN_MOARm_t, CAN_MOAR44_ADDR); /* "Message Object 44 Arbitration Register" */
SFR_NOABS (CAN_MOAR45, CAN_MOARm_t, CAN_MOAR45_ADDR); /* "Message Object 45 Arbitration Register" */
SFR_NOABS (CAN_MOAR46, CAN_MOARm_t, CAN_MOAR46_ADDR); /* "Message Object 46 Arbitration Register" */
SFR_NOABS (CAN_MOAR47, CAN_MOARm_t, CAN_MOAR47_ADDR); /* "Message Object 47 Arbitration Register" */
SFR_NOABS (CAN_MOAR48, CAN_MOARm_t, CAN_MOAR48_ADDR); /* "Message Object 48 Arbitration Register" */
SFR_NOABS (CAN_MOAR49, CAN_MOARm_t, CAN_MOAR49_ADDR); /* "Message Object 49 Arbitration Register" */
SFR_NOABS (CAN_MOAR5, CAN_MOARm_t, CAN_MOAR5_ADDR); /* "Message Object 5 Arbitration Register" */
SFR_NOABS (CAN_MOAR50, CAN_MOARm_t, CAN_MOAR50_ADDR); /* "Message Object 50 Arbitration Register" */
SFR_NOABS (CAN_MOAR51, CAN_MOARm_t, CAN_MOAR51_ADDR); /* "Message Object 51 Arbitration Register" */
SFR_NOABS (CAN_MOAR52, CAN_MOARm_t, CAN_MOAR52_ADDR); /* "Message Object 52 Arbitration Register" */
SFR_NOABS (CAN_MOAR53, CAN_MOARm_t, CAN_MOAR53_ADDR); /* "Message Object 53 Arbitration Register" */
SFR_NOABS (CAN_MOAR54, CAN_MOARm_t, CAN_MOAR54_ADDR); /* "Message Object 54 Arbitration Register" */
SFR_NOABS (CAN_MOAR55, CAN_MOARm_t, CAN_MOAR55_ADDR); /* "Message Object 55 Arbitration Register" */
SFR_NOABS (CAN_MOAR56, CAN_MOARm_t, CAN_MOAR56_ADDR); /* "Message Object 56 Arbitration Register" */
SFR_NOABS (CAN_MOAR57, CAN_MOARm_t, CAN_MOAR57_ADDR); /* "Message Object 57 Arbitration Register" */
SFR_NOABS (CAN_MOAR58, CAN_MOARm_t, CAN_MOAR58_ADDR); /* "Message Object 58 Arbitration Register" */
SFR_NOABS (CAN_MOAR59, CAN_MOARm_t, CAN_MOAR59_ADDR); /* "Message Object 59 Arbitration Register" */
SFR_NOABS (CAN_MOAR6, CAN_MOARm_t, CAN_MOAR6_ADDR); /* "Message Object 6 Arbitration Register" */
SFR_NOABS (CAN_MOAR60, CAN_MOARm_t, CAN_MOAR60_ADDR); /* "Message Object 60 Arbitration Register" */
SFR_NOABS (CAN_MOAR61, CAN_MOARm_t, CAN_MOAR61_ADDR); /* "Message Object 61 Arbitration Register" */
SFR_NOABS (CAN_MOAR62, CAN_MOARm_t, CAN_MOAR62_ADDR); /* "Message Object 62 Arbitration Register" */
SFR_NOABS (CAN_MOAR63, CAN_MOARm_t, CAN_MOAR63_ADDR); /* "Message Object 63 Arbitration Register" */
SFR_NOABS (CAN_MOAR64, CAN_MOARm_t, CAN_MOAR64_ADDR); /* "Message Object 64 Arbitration Register" */
SFR_NOABS (CAN_MOAR65, CAN_MOARm_t, CAN_MOAR65_ADDR); /* "Message Object 65 Arbitration Register" */
SFR_NOABS (CAN_MOAR66, CAN_MOARm_t, CAN_MOAR66_ADDR); /* "Message Object 66 Arbitration Register" */
SFR_NOABS (CAN_MOAR67, CAN_MOARm_t, CAN_MOAR67_ADDR); /* "Message Object 67 Arbitration Register" */
SFR_NOABS (CAN_MOAR68, CAN_MOARm_t, CAN_MOAR68_ADDR); /* "Message Object 68 Arbitration Register" */
SFR_NOABS (CAN_MOAR69, CAN_MOARm_t, CAN_MOAR69_ADDR); /* "Message Object 69 Arbitration Register" */
SFR_NOABS (CAN_MOAR7, CAN_MOARm_t, CAN_MOAR7_ADDR); /* "Message Object 7 Arbitration Register" */
SFR_NOABS (CAN_MOAR70, CAN_MOARm_t, CAN_MOAR70_ADDR); /* "Message Object 70 Arbitration Register" */
SFR_NOABS (CAN_MOAR71, CAN_MOARm_t, CAN_MOAR71_ADDR); /* "Message Object 71 Arbitration Register" */
SFR_NOABS (CAN_MOAR72, CAN_MOARm_t, CAN_MOAR72_ADDR); /* "Message Object 72 Arbitration Register" */
SFR_NOABS (CAN_MOAR73, CAN_MOARm_t, CAN_MOAR73_ADDR); /* "Message Object 73 Arbitration Register" */
SFR_NOABS (CAN_MOAR74, CAN_MOARm_t, CAN_MOAR74_ADDR); /* "Message Object 74 Arbitration Register" */
SFR_NOABS (CAN_MOAR75, CAN_MOARm_t, CAN_MOAR75_ADDR); /* "Message Object 75 Arbitration Register" */
SFR_NOABS (CAN_MOAR76, CAN_MOARm_t, CAN_MOAR76_ADDR); /* "Message Object 76 Arbitration Register" */
SFR_NOABS (CAN_MOAR77, CAN_MOARm_t, CAN_MOAR77_ADDR); /* "Message Object 77 Arbitration Register" */
SFR_NOABS (CAN_MOAR78, CAN_MOARm_t, CAN_MOAR78_ADDR); /* "Message Object 78 Arbitration Register" */
SFR_NOABS (CAN_MOAR79, CAN_MOARm_t, CAN_MOAR79_ADDR); /* "Message Object 79 Arbitration Register" */
SFR_NOABS (CAN_MOAR8, CAN_MOARm_t, CAN_MOAR8_ADDR); /* "Message Object 8 Arbitration Register" */
SFR_NOABS (CAN_MOAR80, CAN_MOARm_t, CAN_MOAR80_ADDR); /* "Message Object 80 Arbitration Register" */
SFR_NOABS (CAN_MOAR81, CAN_MOARm_t, CAN_MOAR81_ADDR); /* "Message Object 81 Arbitration Register" */
SFR_NOABS (CAN_MOAR82, CAN_MOARm_t, CAN_MOAR82_ADDR); /* "Message Object 82 Arbitration Register" */
SFR_NOABS (CAN_MOAR83, CAN_MOARm_t, CAN_MOAR83_ADDR); /* "Message Object 83 Arbitration Register" */
SFR_NOABS (CAN_MOAR84, CAN_MOARm_t, CAN_MOAR84_ADDR); /* "Message Object 84 Arbitration Register" */
SFR_NOABS (CAN_MOAR85, CAN_MOARm_t, CAN_MOAR85_ADDR); /* "Message Object 85 Arbitration Register" */
SFR_NOABS (CAN_MOAR86, CAN_MOARm_t, CAN_MOAR86_ADDR); /* "Message Object 86 Arbitration Register" */
SFR_NOABS (CAN_MOAR87, CAN_MOARm_t, CAN_MOAR87_ADDR); /* "Message Object 87 Arbitration Register" */
SFR_NOABS (CAN_MOAR88, CAN_MOARm_t, CAN_MOAR88_ADDR); /* "Message Object 88 Arbitration Register" */
SFR_NOABS (CAN_MOAR89, CAN_MOARm_t, CAN_MOAR89_ADDR); /* "Message Object 89 Arbitration Register" */
SFR_NOABS (CAN_MOAR9, CAN_MOARm_t, CAN_MOAR9_ADDR); /* "Message Object 9 Arbitration Register" */
SFR_NOABS (CAN_MOAR90, CAN_MOARm_t, CAN_MOAR90_ADDR); /* "Message Object 90 Arbitration Register" */
SFR_NOABS (CAN_MOAR91, CAN_MOARm_t, CAN_MOAR91_ADDR); /* "Message Object 91 Arbitration Register" */
SFR_NOABS (CAN_MOAR92, CAN_MOARm_t, CAN_MOAR92_ADDR); /* "Message Object 92 Arbitration Register" */
SFR_NOABS (CAN_MOAR93, CAN_MOARm_t, CAN_MOAR93_ADDR); /* "Message Object 93 Arbitration Register" */
SFR_NOABS (CAN_MOAR94, CAN_MOARm_t, CAN_MOAR94_ADDR); /* "Message Object 94 Arbitration Register" */
SFR_NOABS (CAN_MOAR95, CAN_MOARm_t, CAN_MOAR95_ADDR); /* "Message Object 95 Arbitration Register" */
SFR_NOABS (CAN_MOAR96, CAN_MOARm_t, CAN_MOAR96_ADDR); /* "Message Object 96 Arbitration Register" */
SFR_NOABS (CAN_MOAR97, CAN_MOARm_t, CAN_MOAR97_ADDR); /* "Message Object 97 Arbitration Register" */
SFR_NOABS (CAN_MOAR98, CAN_MOARm_t, CAN_MOAR98_ADDR); /* "Message Object 98 Arbitration Register" */
SFR_NOABS (CAN_MOAR99, CAN_MOARm_t, CAN_MOAR99_ADDR); /* "Message Object 99 Arbitration Register" */
SFR_NOABS (CAN_MOCTR0, CAN_MOCTRm_t, CAN_MOCTR0_ADDR); /* "Message Object 0" */
SFR_NOABS (CAN_MOCTR1, CAN_MOCTRm_t, CAN_MOCTR1_ADDR); /* "Message Object 1" */
SFR_NOABS (CAN_MOCTR10, CAN_MOCTRm_t, CAN_MOCTR10_ADDR); /* "Message Object 10" */
SFR_NOABS (CAN_MOCTR100, CAN_MOCTRm_t, CAN_MOCTR100_ADDR); /* "Message Object 100" */
SFR_NOABS (CAN_MOCTR101, CAN_MOCTRm_t, CAN_MOCTR101_ADDR); /* "Message Object 101" */
SFR_NOABS (CAN_MOCTR102, CAN_MOCTRm_t, CAN_MOCTR102_ADDR); /* "Message Object 102" */
SFR_NOABS (CAN_MOCTR103, CAN_MOCTRm_t, CAN_MOCTR103_ADDR); /* "Message Object 103" */
SFR_NOABS (CAN_MOCTR104, CAN_MOCTRm_t, CAN_MOCTR104_ADDR); /* "Message Object 104" */
SFR_NOABS (CAN_MOCTR105, CAN_MOCTRm_t, CAN_MOCTR105_ADDR); /* "Message Object 105" */
SFR_NOABS (CAN_MOCTR106, CAN_MOCTRm_t, CAN_MOCTR106_ADDR); /* "Message Object 106" */
SFR_NOABS (CAN_MOCTR107, CAN_MOCTRm_t, CAN_MOCTR107_ADDR); /* "Message Object 107" */
SFR_NOABS (CAN_MOCTR108, CAN_MOCTRm_t, CAN_MOCTR108_ADDR); /* "Message Object 108" */
SFR_NOABS (CAN_MOCTR109, CAN_MOCTRm_t, CAN_MOCTR109_ADDR); /* "Message Object 109" */
SFR_NOABS (CAN_MOCTR11, CAN_MOCTRm_t, CAN_MOCTR11_ADDR); /* "Message Object 11" */
SFR_NOABS (CAN_MOCTR110, CAN_MOCTRm_t, CAN_MOCTR110_ADDR); /* "Message Object 110" */
SFR_NOABS (CAN_MOCTR111, CAN_MOCTRm_t, CAN_MOCTR111_ADDR); /* "Message Object 111" */
SFR_NOABS (CAN_MOCTR112, CAN_MOCTRm_t, CAN_MOCTR112_ADDR); /* "Message Object 112" */
SFR_NOABS (CAN_MOCTR113, CAN_MOCTRm_t, CAN_MOCTR113_ADDR); /* "Message Object 113" */
SFR_NOABS (CAN_MOCTR114, CAN_MOCTRm_t, CAN_MOCTR114_ADDR); /* "Message Object 114" */
SFR_NOABS (CAN_MOCTR115, CAN_MOCTRm_t, CAN_MOCTR115_ADDR); /* "Message Object 115" */
SFR_NOABS (CAN_MOCTR116, CAN_MOCTRm_t, CAN_MOCTR116_ADDR); /* "Message Object 116" */
SFR_NOABS (CAN_MOCTR117, CAN_MOCTRm_t, CAN_MOCTR117_ADDR); /* "Message Object 117" */
SFR_NOABS (CAN_MOCTR118, CAN_MOCTRm_t, CAN_MOCTR118_ADDR); /* "Message Object 118" */
SFR_NOABS (CAN_MOCTR119, CAN_MOCTRm_t, CAN_MOCTR119_ADDR); /* "Message Object 119" */
SFR_NOABS (CAN_MOCTR12, CAN_MOCTRm_t, CAN_MOCTR12_ADDR); /* "Message Object 12" */
SFR_NOABS (CAN_MOCTR120, CAN_MOCTRm_t, CAN_MOCTR120_ADDR); /* "Message Object 120" */
SFR_NOABS (CAN_MOCTR121, CAN_MOCTRm_t, CAN_MOCTR121_ADDR); /* "Message Object 121" */
SFR_NOABS (CAN_MOCTR122, CAN_MOCTRm_t, CAN_MOCTR122_ADDR); /* "Message Object 122" */
SFR_NOABS (CAN_MOCTR123, CAN_MOCTRm_t, CAN_MOCTR123_ADDR); /* "Message Object 123" */
SFR_NOABS (CAN_MOCTR124, CAN_MOCTRm_t, CAN_MOCTR124_ADDR); /* "Message Object 124" */
SFR_NOABS (CAN_MOCTR125, CAN_MOCTRm_t, CAN_MOCTR125_ADDR); /* "Message Object 125" */
SFR_NOABS (CAN_MOCTR126, CAN_MOCTRm_t, CAN_MOCTR126_ADDR); /* "Message Object 126" */
SFR_NOABS (CAN_MOCTR127, CAN_MOCTRm_t, CAN_MOCTR127_ADDR); /* "Message Object" */
SFR_NOABS (CAN_MOCTR13, CAN_MOCTRm_t, CAN_MOCTR13_ADDR); /* "Message Object 13" */
SFR_NOABS (CAN_MOCTR14, CAN_MOCTRm_t, CAN_MOCTR14_ADDR); /* "Message Object 14" */
SFR_NOABS (CAN_MOCTR15, CAN_MOCTRm_t, CAN_MOCTR15_ADDR); /* "Message Object 15" */
SFR_NOABS (CAN_MOCTR16, CAN_MOCTRm_t, CAN_MOCTR16_ADDR); /* "Message Object 16" */
SFR_NOABS (CAN_MOCTR17, CAN_MOCTRm_t, CAN_MOCTR17_ADDR); /* "Message Object 17" */
SFR_NOABS (CAN_MOCTR18, CAN_MOCTRm_t, CAN_MOCTR18_ADDR); /* "Message Object 18" */
SFR_NOABS (CAN_MOCTR19, CAN_MOCTRm_t, CAN_MOCTR19_ADDR); /* "Message Object 19" */
SFR_NOABS (CAN_MOCTR2, CAN_MOCTRm_t, CAN_MOCTR2_ADDR); /* "Message Object 2" */
SFR_NOABS (CAN_MOCTR20, CAN_MOCTRm_t, CAN_MOCTR20_ADDR); /* "Message Object 20" */
SFR_NOABS (CAN_MOCTR21, CAN_MOCTRm_t, CAN_MOCTR21_ADDR); /* "Message Object 21" */
SFR_NOABS (CAN_MOCTR22, CAN_MOCTRm_t, CAN_MOCTR22_ADDR); /* "Message Object 22" */
SFR_NOABS (CAN_MOCTR23, CAN_MOCTRm_t, CAN_MOCTR23_ADDR); /* "Message Object 23" */
SFR_NOABS (CAN_MOCTR24, CAN_MOCTRm_t, CAN_MOCTR24_ADDR); /* "Message Object 24" */
SFR_NOABS (CAN_MOCTR25, CAN_MOCTRm_t, CAN_MOCTR25_ADDR); /* "Message Object 25" */
SFR_NOABS (CAN_MOCTR26, CAN_MOCTRm_t, CAN_MOCTR26_ADDR); /* "Message Object 26" */
SFR_NOABS (CAN_MOCTR27, CAN_MOCTRm_t, CAN_MOCTR27_ADDR); /* "Message Object 27" */
SFR_NOABS (CAN_MOCTR28, CAN_MOCTRm_t, CAN_MOCTR28_ADDR); /* "Message Object 28" */
SFR_NOABS (CAN_MOCTR29, CAN_MOCTRm_t, CAN_MOCTR29_ADDR); /* "Message Object 29" */
SFR_NOABS (CAN_MOCTR3, CAN_MOCTRm_t, CAN_MOCTR3_ADDR); /* "Message Object 3" */
SFR_NOABS (CAN_MOCTR30, CAN_MOCTRm_t, CAN_MOCTR30_ADDR); /* "Message Object 30" */
SFR_NOABS (CAN_MOCTR31, CAN_MOCTRm_t, CAN_MOCTR31_ADDR); /* "Message Object 31" */
SFR_NOABS (CAN_MOCTR32, CAN_MOCTRm_t, CAN_MOCTR32_ADDR); /* "Message Object 32" */
SFR_NOABS (CAN_MOCTR33, CAN_MOCTRm_t, CAN_MOCTR33_ADDR); /* "Message Object 33" */
SFR_NOABS (CAN_MOCTR34, CAN_MOCTRm_t, CAN_MOCTR34_ADDR); /* "Message Object 34" */
SFR_NOABS (CAN_MOCTR35, CAN_MOCTRm_t, CAN_MOCTR35_ADDR); /* "Message Object 35" */
SFR_NOABS (CAN_MOCTR36, CAN_MOCTRm_t, CAN_MOCTR36_ADDR); /* "Message Object 36" */
SFR_NOABS (CAN_MOCTR37, CAN_MOCTRm_t, CAN_MOCTR37_ADDR); /* "Message Object 37" */
SFR_NOABS (CAN_MOCTR38, CAN_MOCTRm_t, CAN_MOCTR38_ADDR); /* "Message Object 38" */
SFR_NOABS (CAN_MOCTR39, CAN_MOCTRm_t, CAN_MOCTR39_ADDR); /* "Message Object 39" */
SFR_NOABS (CAN_MOCTR4, CAN_MOCTRm_t, CAN_MOCTR4_ADDR); /* "Message Object 4" */
SFR_NOABS (CAN_MOCTR40, CAN_MOCTRm_t, CAN_MOCTR40_ADDR); /* "Message Object 40" */
SFR_NOABS (CAN_MOCTR41, CAN_MOCTRm_t, CAN_MOCTR41_ADDR); /* "Message Object 41" */
SFR_NOABS (CAN_MOCTR42, CAN_MOCTRm_t, CAN_MOCTR42_ADDR); /* "Message Object 42" */
SFR_NOABS (CAN_MOCTR43, CAN_MOCTRm_t, CAN_MOCTR43_ADDR); /* "Message Object 43" */
SFR_NOABS (CAN_MOCTR44, CAN_MOCTRm_t, CAN_MOCTR44_ADDR); /* "Message Object 44" */
SFR_NOABS (CAN_MOCTR45, CAN_MOCTRm_t, CAN_MOCTR45_ADDR); /* "Message Object 45" */
SFR_NOABS (CAN_MOCTR46, CAN_MOCTRm_t, CAN_MOCTR46_ADDR); /* "Message Object 46" */
SFR_NOABS (CAN_MOCTR47, CAN_MOCTRm_t, CAN_MOCTR47_ADDR); /* "Message Object 47" */
SFR_NOABS (CAN_MOCTR48, CAN_MOCTRm_t, CAN_MOCTR48_ADDR); /* "Message Object 48" */
SFR_NOABS (CAN_MOCTR49, CAN_MOCTRm_t, CAN_MOCTR49_ADDR); /* "Message Object 49" */
SFR_NOABS (CAN_MOCTR5, CAN_MOCTRm_t, CAN_MOCTR5_ADDR); /* "Message Object 5" */
SFR_NOABS (CAN_MOCTR50, CAN_MOCTRm_t, CAN_MOCTR50_ADDR); /* "Message Object 50" */
SFR_NOABS (CAN_MOCTR51, CAN_MOCTRm_t, CAN_MOCTR51_ADDR); /* "Message Object 51" */
SFR_NOABS (CAN_MOCTR52, CAN_MOCTRm_t, CAN_MOCTR52_ADDR); /* "Message Object 52" */
SFR_NOABS (CAN_MOCTR53, CAN_MOCTRm_t, CAN_MOCTR53_ADDR); /* "Message Object 53" */
SFR_NOABS (CAN_MOCTR54, CAN_MOCTRm_t, CAN_MOCTR54_ADDR); /* "Message Object 54" */
SFR_NOABS (CAN_MOCTR55, CAN_MOCTRm_t, CAN_MOCTR55_ADDR); /* "Message Object 55" */
SFR_NOABS (CAN_MOCTR56, CAN_MOCTRm_t, CAN_MOCTR56_ADDR); /* "Message Object 56" */
SFR_NOABS (CAN_MOCTR57, CAN_MOCTRm_t, CAN_MOCTR57_ADDR); /* "Message Object 57" */
SFR_NOABS (CAN_MOCTR58, CAN_MOCTRm_t, CAN_MOCTR58_ADDR); /* "Message Object 58" */
SFR_NOABS (CAN_MOCTR59, CAN_MOCTRm_t, CAN_MOCTR59_ADDR); /* "Message Object 59" */
SFR_NOABS (CAN_MOCTR6, CAN_MOCTRm_t, CAN_MOCTR6_ADDR); /* "Message Object 6" */
SFR_NOABS (CAN_MOCTR60, CAN_MOCTRm_t, CAN_MOCTR60_ADDR); /* "Message Object 60" */
SFR_NOABS (CAN_MOCTR61, CAN_MOCTRm_t, CAN_MOCTR61_ADDR); /* "Message Object 61" */
SFR_NOABS (CAN_MOCTR62, CAN_MOCTRm_t, CAN_MOCTR62_ADDR); /* "Message Object 62" */
SFR_NOABS (CAN_MOCTR64, CAN_MOCTRm_t, CAN_MOCTR64_ADDR); /* "Message Object 64" */
SFR_NOABS (CAN_MOCTR65, CAN_MOCTRm_t, CAN_MOCTR65_ADDR); /* "Message Object 65" */
SFR_NOABS (CAN_MOCTR66, CAN_MOCTRm_t, CAN_MOCTR66_ADDR); /* "Message Object 66" */
SFR_NOABS (CAN_MOCTR67, CAN_MOCTRm_t, CAN_MOCTR67_ADDR); /* "Message Object 67" */
SFR_NOABS (CAN_MOCTR68, CAN_MOCTRm_t, CAN_MOCTR68_ADDR); /* "Message Object 68" */
SFR_NOABS (CAN_MOCTR69, CAN_MOCTRm_t, CAN_MOCTR69_ADDR); /* "Message Object 69" */
SFR_NOABS (CAN_MOCTR7, CAN_MOCTRm_t, CAN_MOCTR7_ADDR); /* "Message Object 7" */
SFR_NOABS (CAN_MOCTR70, CAN_MOCTRm_t, CAN_MOCTR70_ADDR); /* "Message Object 70" */
SFR_NOABS (CAN_MOCTR71, CAN_MOCTRm_t, CAN_MOCTR71_ADDR); /* "Message Object 71" */
SFR_NOABS (CAN_MOCTR72, CAN_MOCTRm_t, CAN_MOCTR72_ADDR); /* "Message Object 72" */
SFR_NOABS (CAN_MOCTR73, CAN_MOCTRm_t, CAN_MOCTR73_ADDR); /* "Message Object 73" */
SFR_NOABS (CAN_MOCTR74, CAN_MOCTRm_t, CAN_MOCTR74_ADDR); /* "Message Object 74" */
SFR_NOABS (CAN_MOCTR75, CAN_MOCTRm_t, CAN_MOCTR75_ADDR); /* "Message Object 75" */
SFR_NOABS (CAN_MOCTR76, CAN_MOCTRm_t, CAN_MOCTR76_ADDR); /* "Message Object 76" */
SFR_NOABS (CAN_MOCTR77, CAN_MOCTRm_t, CAN_MOCTR77_ADDR); /* "Message Object 77" */
SFR_NOABS (CAN_MOCTR78, CAN_MOCTRm_t, CAN_MOCTR78_ADDR); /* "Message Object 78" */
SFR_NOABS (CAN_MOCTR79, CAN_MOCTRm_t, CAN_MOCTR79_ADDR); /* "Message Object 79" */
SFR_NOABS (CAN_MOCTR8, CAN_MOCTRm_t, CAN_MOCTR8_ADDR); /* "Message Object 8" */
SFR_NOABS (CAN_MOCTR80, CAN_MOCTRm_t, CAN_MOCTR80_ADDR); /* "Message Object 80" */
SFR_NOABS (CAN_MOCTR81, CAN_MOCTRm_t, CAN_MOCTR81_ADDR); /* "Message Object 81" */
SFR_NOABS (CAN_MOCTR82, CAN_MOCTRm_t, CAN_MOCTR82_ADDR); /* "Message Object 82" */
SFR_NOABS (CAN_MOCTR83, CAN_MOCTRm_t, CAN_MOCTR83_ADDR); /* "Message Object 83" */
SFR_NOABS (CAN_MOCTR84, CAN_MOCTRm_t, CAN_MOCTR84_ADDR); /* "Message Object 84" */
SFR_NOABS (CAN_MOCTR85, CAN_MOCTRm_t, CAN_MOCTR85_ADDR); /* "Message Object 85" */
SFR_NOABS (CAN_MOCTR86, CAN_MOCTRm_t, CAN_MOCTR86_ADDR); /* "Message Object 86" */
SFR_NOABS (CAN_MOCTR87, CAN_MOCTRm_t, CAN_MOCTR87_ADDR); /* "Message Object 87" */
SFR_NOABS (CAN_MOCTR88, CAN_MOCTRm_t, CAN_MOCTR88_ADDR); /* "Message Object 88" */
SFR_NOABS (CAN_MOCTR89, CAN_MOCTRm_t, CAN_MOCTR89_ADDR); /* "Message Object 89" */
SFR_NOABS (CAN_MOCTR9, CAN_MOCTRm_t, CAN_MOCTR9_ADDR); /* "Message Object 9" */
SFR_NOABS (CAN_MOCTR90, CAN_MOCTRm_t, CAN_MOCTR90_ADDR); /* "Message Object 90" */
SFR_NOABS (CAN_MOCTR91, CAN_MOCTRm_t, CAN_MOCTR91_ADDR); /* "Message Object 91" */
SFR_NOABS (CAN_MOCTR92, CAN_MOCTRm_t, CAN_MOCTR92_ADDR); /* "Message Object 92" */
SFR_NOABS (CAN_MOCTR93, CAN_MOCTRm_t, CAN_MOCTR93_ADDR); /* "Message Object 93" */
SFR_NOABS (CAN_MOCTR94, CAN_MOCTRm_t, CAN_MOCTR94_ADDR); /* "Message Object 94" */
SFR_NOABS (CAN_MOCTR95, CAN_MOCTRm_t, CAN_MOCTR95_ADDR); /* "Message Object 95" */
SFR_NOABS (CAN_MOCTR96, CAN_MOCTRm_t, CAN_MOCTR96_ADDR); /* "Message Object 96" */
SFR_NOABS (CAN_MOCTR97, CAN_MOCTRm_t, CAN_MOCTR97_ADDR); /* "Message Object 97" */
SFR_NOABS (CAN_MOCTR98, CAN_MOCTRm_t, CAN_MOCTR98_ADDR); /* "Message Object 98" */
SFR_NOABS (CAN_MOCTR99, CAN_MOCTRm_t, CAN_MOCTR99_ADDR); /* "Message Object 99" */
SFR_NOABS (CAN_MODATAH0, CAN_MODATAHm_t, CAN_MODATAH0_ADDR); /* "Message Object 0 Data Register High" */
SFR_NOABS (CAN_MODATAH1, CAN_MODATAHm_t, CAN_MODATAH1_ADDR); /* "Message Object 1 Data Register High" */
SFR_NOABS (CAN_MODATAH10, CAN_MODATAHm_t, CAN_MODATAH10_ADDR); /* "Message Object 10 Data Register High" */
SFR_NOABS (CAN_MODATAH100, CAN_MODATAHm_t, CAN_MODATAH100_ADDR); /* "Message Object 100 Data Register High" */
SFR_NOABS (CAN_MODATAH101, CAN_MODATAHm_t, CAN_MODATAH101_ADDR); /* "Message Object 101 Data Register High" */
SFR_NOABS (CAN_MODATAH102, CAN_MODATAHm_t, CAN_MODATAH102_ADDR); /* "Message Object 102 Data Register High" */
SFR_NOABS (CAN_MODATAH103, CAN_MODATAHm_t, CAN_MODATAH103_ADDR); /* "Message Object 103 Data Register High" */
SFR_NOABS (CAN_MODATAH104, CAN_MODATAHm_t, CAN_MODATAH104_ADDR); /* "Message Object 104 Data Register High" */
SFR_NOABS (CAN_MODATAH105, CAN_MODATAHm_t, CAN_MODATAH105_ADDR); /* "Message Object 105 Data Register High" */
SFR_NOABS (CAN_MODATAH106, CAN_MODATAHm_t, CAN_MODATAH106_ADDR); /* "Message Object 106 Data Register High" */
SFR_NOABS (CAN_MODATAH107, CAN_MODATAHm_t, CAN_MODATAH107_ADDR); /* "Message Object 107 Data Register High" */
SFR_NOABS (CAN_MODATAH108, CAN_MODATAHm_t, CAN_MODATAH108_ADDR); /* "Message Object 108 Data Register High" */
SFR_NOABS (CAN_MODATAH109, CAN_MODATAHm_t, CAN_MODATAH109_ADDR); /* "Message Object 109 Data Register High" */
SFR_NOABS (CAN_MODATAH11, CAN_MODATAHm_t, CAN_MODATAH11_ADDR); /* "Message Object 11 Data Register High" */
SFR_NOABS (CAN_MODATAH110, CAN_MODATAHm_t, CAN_MODATAH110_ADDR); /* "Message Object 110 Data Register High" */
SFR_NOABS (CAN_MODATAH111, CAN_MODATAHm_t, CAN_MODATAH111_ADDR); /* "Message Object 111 Data Register High" */
SFR_NOABS (CAN_MODATAH112, CAN_MODATAHm_t, CAN_MODATAH112_ADDR); /* "Message Object 112 Data Register High" */
SFR_NOABS (CAN_MODATAH113, CAN_MODATAHm_t, CAN_MODATAH113_ADDR); /* "Message Object 113 Data Register High" */
SFR_NOABS (CAN_MODATAH114, CAN_MODATAHm_t, CAN_MODATAH114_ADDR); /* "Message Object 114 Data Register High" */
SFR_NOABS (CAN_MODATAH115, CAN_MODATAHm_t, CAN_MODATAH115_ADDR); /* "Message Object 115 Data Register High" */
SFR_NOABS (CAN_MODATAH116, CAN_MODATAHm_t, CAN_MODATAH116_ADDR); /* "Message Object 116 Data Register High" */
SFR_NOABS (CAN_MODATAH117, CAN_MODATAHm_t, CAN_MODATAH117_ADDR); /* "Message Object 117 Data Register High" */
SFR_NOABS (CAN_MODATAH118, CAN_MODATAHm_t, CAN_MODATAH118_ADDR); /* "Message Object 118 Data Register High" */
SFR_NOABS (CAN_MODATAH119, CAN_MODATAHm_t, CAN_MODATAH119_ADDR); /* "Message Object 119 Data Register High" */
SFR_NOABS (CAN_MODATAH12, CAN_MODATAHm_t, CAN_MODATAH12_ADDR); /* "Message Object 12 Data Register High" */
SFR_NOABS (CAN_MODATAH120, CAN_MODATAHm_t, CAN_MODATAH120_ADDR); /* "Message Object 120 Data Register High" */
SFR_NOABS (CAN_MODATAH121, CAN_MODATAHm_t, CAN_MODATAH121_ADDR); /* "Message Object 121 Data Register High" */
SFR_NOABS (CAN_MODATAH122, CAN_MODATAHm_t, CAN_MODATAH122_ADDR); /* "Message Object 122 Data Register High" */
SFR_NOABS (CAN_MODATAH123, CAN_MODATAHm_t, CAN_MODATAH123_ADDR); /* "Message Object 123 Data Register High" */
SFR_NOABS (CAN_MODATAH124, CAN_MODATAHm_t, CAN_MODATAH124_ADDR); /* "Message Object 124 Data Register High" */
SFR_NOABS (CAN_MODATAH125, CAN_MODATAHm_t, CAN_MODATAH125_ADDR); /* "Message Object 125 Data Register High" */
SFR_NOABS (CAN_MODATAH126, CAN_MODATAHm_t, CAN_MODATAH126_ADDR); /* "Message Object 126 Data Register High" */
SFR_NOABS (CAN_MODATAH127, CAN_MODATAHm_t, CAN_MODATAH127_ADDR); /* "Message Object 127 Data Register High" */
SFR_NOABS (CAN_MODATAH13, CAN_MODATAHm_t, CAN_MODATAH13_ADDR); /* "Message Object 13 Data Register High" */
SFR_NOABS (CAN_MODATAH14, CAN_MODATAHm_t, CAN_MODATAH14_ADDR); /* "Message Object 14 Data Register High" */
SFR_NOABS (CAN_MODATAH15, CAN_MODATAHm_t, CAN_MODATAH15_ADDR); /* "Message Object 15 Data Register High" */
SFR_NOABS (CAN_MODATAH16, CAN_MODATAHm_t, CAN_MODATAH16_ADDR); /* "Message Object 16 Data Register High" */
SFR_NOABS (CAN_MODATAH17, CAN_MODATAHm_t, CAN_MODATAH17_ADDR); /* "Message Object 17 Data Register High" */
SFR_NOABS (CAN_MODATAH18, CAN_MODATAHm_t, CAN_MODATAH18_ADDR); /* "Message Object 18 Data Register High" */
SFR_NOABS (CAN_MODATAH19, CAN_MODATAHm_t, CAN_MODATAH19_ADDR); /* "Message Object 19 Data Register High" */
SFR_NOABS (CAN_MODATAH2, CAN_MODATAHm_t, CAN_MODATAH2_ADDR); /* "Message Object 2 Data Register High" */
SFR_NOABS (CAN_MODATAH20, CAN_MODATAHm_t, CAN_MODATAH20_ADDR); /* "Message Object 20 Data Register High" */
SFR_NOABS (CAN_MODATAH21, CAN_MODATAHm_t, CAN_MODATAH21_ADDR); /* "Message Object 21 Data Register High" */
SFR_NOABS (CAN_MODATAH22, CAN_MODATAHm_t, CAN_MODATAH22_ADDR); /* "Message Object 22 Data Register High" */
SFR_NOABS (CAN_MODATAH23, CAN_MODATAHm_t, CAN_MODATAH23_ADDR); /* "Message Object 23 Data Register High" */
SFR_NOABS (CAN_MODATAH24, CAN_MODATAHm_t, CAN_MODATAH24_ADDR); /* "Message Object 24 Data Register High" */
SFR_NOABS (CAN_MODATAH25, CAN_MODATAHm_t, CAN_MODATAH25_ADDR); /* "Message Object 25 Data Register High" */
SFR_NOABS (CAN_MODATAH26, CAN_MODATAHm_t, CAN_MODATAH26_ADDR); /* "Message Object 26 Data Register High" */
SFR_NOABS (CAN_MODATAH27, CAN_MODATAHm_t, CAN_MODATAH27_ADDR); /* "Message Object 27 Data Register High" */
SFR_NOABS (CAN_MODATAH28, CAN_MODATAHm_t, CAN_MODATAH28_ADDR); /* "Message Object 28 Data Register High" */
SFR_NOABS (CAN_MODATAH29, CAN_MODATAHm_t, CAN_MODATAH29_ADDR); /* "Message Object 29 Data Register High" */
SFR_NOABS (CAN_MODATAH3, CAN_MODATAHm_t, CAN_MODATAH3_ADDR); /* "Message Object 3 Data Register High" */
SFR_NOABS (CAN_MODATAH30, CAN_MODATAHm_t, CAN_MODATAH30_ADDR); /* "Message Object 30 Data Register High" */
SFR_NOABS (CAN_MODATAH31, CAN_MODATAHm_t, CAN_MODATAH31_ADDR); /* "Message Object 31 Data Register High" */
SFR_NOABS (CAN_MODATAH32, CAN_MODATAHm_t, CAN_MODATAH32_ADDR); /* "Message Object 32 Data Register High" */
SFR_NOABS (CAN_MODATAH33, CAN_MODATAHm_t, CAN_MODATAH33_ADDR); /* "Message Object 33 Data Register High" */
SFR_NOABS (CAN_MODATAH34, CAN_MODATAHm_t, CAN_MODATAH34_ADDR); /* "Message Object 34 Data Register High" */
SFR_NOABS (CAN_MODATAH35, CAN_MODATAHm_t, CAN_MODATAH35_ADDR); /* "Message Object 35 Data Register High" */
SFR_NOABS (CAN_MODATAH36, CAN_MODATAHm_t, CAN_MODATAH36_ADDR); /* "Message Object 36 Data Register High" */
SFR_NOABS (CAN_MODATAH37, CAN_MODATAHm_t, CAN_MODATAH37_ADDR); /* "Message Object 37 Data Register High" */
SFR_NOABS (CAN_MODATAH38, CAN_MODATAHm_t, CAN_MODATAH38_ADDR); /* "Message Object 38 Data Register High" */
SFR_NOABS (CAN_MODATAH39, CAN_MODATAHm_t, CAN_MODATAH39_ADDR); /* "Message Object 39 Data Register High" */
SFR_NOABS (CAN_MODATAH4, CAN_MODATAHm_t, CAN_MODATAH4_ADDR); /* "Message Object 4 Data Register High" */
SFR_NOABS (CAN_MODATAH40, CAN_MODATAHm_t, CAN_MODATAH40_ADDR); /* "Message Object 40 Data Register High" */
SFR_NOABS (CAN_MODATAH41, CAN_MODATAHm_t, CAN_MODATAH41_ADDR); /* "Message Object 41 Data Register High" */
SFR_NOABS (CAN_MODATAH42, CAN_MODATAHm_t, CAN_MODATAH42_ADDR); /* "Message Object 42 Data Register High" */
SFR_NOABS (CAN_MODATAH43, CAN_MODATAHm_t, CAN_MODATAH43_ADDR); /* "Message Object 43 Data Register High" */
SFR_NOABS (CAN_MODATAH44, CAN_MODATAHm_t, CAN_MODATAH44_ADDR); /* "Message Object 44 Data Register High" */
SFR_NOABS (CAN_MODATAH45, CAN_MODATAHm_t, CAN_MODATAH45_ADDR); /* "Message Object 45 Data Register High" */
SFR_NOABS (CAN_MODATAH46, CAN_MODATAHm_t, CAN_MODATAH46_ADDR); /* "Message Object 46 Data Register High" */
SFR_NOABS (CAN_MODATAH47, CAN_MODATAHm_t, CAN_MODATAH47_ADDR); /* "Message Object 47 Data Register High" */
SFR_NOABS (CAN_MODATAH48, CAN_MODATAHm_t, CAN_MODATAH48_ADDR); /* "Message Object 48 Data Register High" */
SFR_NOABS (CAN_MODATAH49, CAN_MODATAHm_t, CAN_MODATAH49_ADDR); /* "Message Object 49 Data Register High" */
SFR_NOABS (CAN_MODATAH5, CAN_MODATAHm_t, CAN_MODATAH5_ADDR); /* "Message Object 5 Data Register High" */
SFR_NOABS (CAN_MODATAH50, CAN_MODATAHm_t, CAN_MODATAH50_ADDR); /* "Message Object 50 Data Register High" */
SFR_NOABS (CAN_MODATAH51, CAN_MODATAHm_t, CAN_MODATAH51_ADDR); /* "Message Object 51 Data Register High" */
SFR_NOABS (CAN_MODATAH52, CAN_MODATAHm_t, CAN_MODATAH52_ADDR); /* "Message Object 52 Data Register High" */
SFR_NOABS (CAN_MODATAH53, CAN_MODATAHm_t, CAN_MODATAH53_ADDR); /* "Message Object 53 Data Register High" */
SFR_NOABS (CAN_MODATAH54, CAN_MODATAHm_t, CAN_MODATAH54_ADDR); /* "Message Object 54 Data Register High" */
SFR_NOABS (CAN_MODATAH55, CAN_MODATAHm_t, CAN_MODATAH55_ADDR); /* "Message Object 55 Data Register High" */
SFR_NOABS (CAN_MODATAH56, CAN_MODATAHm_t, CAN_MODATAH56_ADDR); /* "Message Object 56 Data Register High" */
SFR_NOABS (CAN_MODATAH57, CAN_MODATAHm_t, CAN_MODATAH57_ADDR); /* "Message Object 57 Data Register High" */
SFR_NOABS (CAN_MODATAH58, CAN_MODATAHm_t, CAN_MODATAH58_ADDR); /* "Message Object 58 Data Register High" */
SFR_NOABS (CAN_MODATAH59, CAN_MODATAHm_t, CAN_MODATAH59_ADDR); /* "Message Object 59 Data Register High" */
SFR_NOABS (CAN_MODATAH6, CAN_MODATAHm_t, CAN_MODATAH6_ADDR); /* "Message Object 6 Data Register High" */
SFR_NOABS (CAN_MODATAH60, CAN_MODATAHm_t, CAN_MODATAH60_ADDR); /* "Message Object 60 Data Register High" */
SFR_NOABS (CAN_MODATAH61, CAN_MODATAHm_t, CAN_MODATAH61_ADDR); /* "Message Object 61 Data Register High" */
SFR_NOABS (CAN_MODATAH62, CAN_MODATAHm_t, CAN_MODATAH62_ADDR); /* "Message Object 62 Data Register High" */
SFR_NOABS (CAN_MODATAH63, CAN_MODATAHm_t, CAN_MODATAH63_ADDR); /* "Message Object 63 Data Register High" */
SFR_NOABS (CAN_MODATAH64, CAN_MODATAHm_t, CAN_MODATAH64_ADDR); /* "Message Object 64 Data Register High" */
SFR_NOABS (CAN_MODATAH65, CAN_MODATAHm_t, CAN_MODATAH65_ADDR); /* "Message Object 65 Data Register High" */
SFR_NOABS (CAN_MODATAH66, CAN_MODATAHm_t, CAN_MODATAH66_ADDR); /* "Message Object 66 Data Register High" */
SFR_NOABS (CAN_MODATAH67, CAN_MODATAHm_t, CAN_MODATAH67_ADDR); /* "Message Object 67 Data Register High" */
SFR_NOABS (CAN_MODATAH68, CAN_MODATAHm_t, CAN_MODATAH68_ADDR); /* "Message Object 68 Data Register High" */
SFR_NOABS (CAN_MODATAH69, CAN_MODATAHm_t, CAN_MODATAH69_ADDR); /* "Message Object 69 Data Register High" */
SFR_NOABS (CAN_MODATAH7, CAN_MODATAHm_t, CAN_MODATAH7_ADDR); /* "Message Object 7 Data Register High" */
SFR_NOABS (CAN_MODATAH70, CAN_MODATAHm_t, CAN_MODATAH70_ADDR); /* "Message Object 70 Data Register High" */
SFR_NOABS (CAN_MODATAH71, CAN_MODATAHm_t, CAN_MODATAH71_ADDR); /* "Message Object 71 Data Register High" */
SFR_NOABS (CAN_MODATAH72, CAN_MODATAHm_t, CAN_MODATAH72_ADDR); /* "Message Object 72 Data Register High" */
SFR_NOABS (CAN_MODATAH73, CAN_MODATAHm_t, CAN_MODATAH73_ADDR); /* "Message Object 73 Data Register High" */
SFR_NOABS (CAN_MODATAH74, CAN_MODATAHm_t, CAN_MODATAH74_ADDR); /* "Message Object 74 Data Register High" */
SFR_NOABS (CAN_MODATAH75, CAN_MODATAHm_t, CAN_MODATAH75_ADDR); /* "Message Object 75 Data Register High" */
SFR_NOABS (CAN_MODATAH76, CAN_MODATAHm_t, CAN_MODATAH76_ADDR); /* "Message Object 76 Data Register High" */
SFR_NOABS (CAN_MODATAH77, CAN_MODATAHm_t, CAN_MODATAH77_ADDR); /* "Message Object 77 Data Register High" */
SFR_NOABS (CAN_MODATAH78, CAN_MODATAHm_t, CAN_MODATAH78_ADDR); /* "Message Object 78 Data Register High" */
SFR_NOABS (CAN_MODATAH79, CAN_MODATAHm_t, CAN_MODATAH79_ADDR); /* "Message Object 79 Data Register High" */
SFR_NOABS (CAN_MODATAH8, CAN_MODATAHm_t, CAN_MODATAH8_ADDR); /* "Message Object 8 Data Register High" */
SFR_NOABS (CAN_MODATAH80, CAN_MODATAHm_t, CAN_MODATAH80_ADDR); /* "Message Object 80 Data Register High" */
SFR_NOABS (CAN_MODATAH81, CAN_MODATAHm_t, CAN_MODATAH81_ADDR); /* "Message Object 81 Data Register High" */
SFR_NOABS (CAN_MODATAH82, CAN_MODATAHm_t, CAN_MODATAH82_ADDR); /* "Message Object 82 Data Register High" */
SFR_NOABS (CAN_MODATAH83, CAN_MODATAHm_t, CAN_MODATAH83_ADDR); /* "Message Object 83 Data Register High" */
SFR_NOABS (CAN_MODATAH84, CAN_MODATAHm_t, CAN_MODATAH84_ADDR); /* "Message Object 84 Data Register High" */
SFR_NOABS (CAN_MODATAH85, CAN_MODATAHm_t, CAN_MODATAH85_ADDR); /* "Message Object 85 Data Register High" */
SFR_NOABS (CAN_MODATAH86, CAN_MODATAHm_t, CAN_MODATAH86_ADDR); /* "Message Object 86 Data Register High" */
SFR_NOABS (CAN_MODATAH87, CAN_MODATAHm_t, CAN_MODATAH87_ADDR); /* "Message Object 87 Data Register High" */
SFR_NOABS (CAN_MODATAH88, CAN_MODATAHm_t, CAN_MODATAH88_ADDR); /* "Message Object 88 Data Register High" */
SFR_NOABS (CAN_MODATAH89, CAN_MODATAHm_t, CAN_MODATAH89_ADDR); /* "Message Object 89 Data Register High" */
SFR_NOABS (CAN_MODATAH9, CAN_MODATAHm_t, CAN_MODATAH9_ADDR); /* "Message Object 9 Data Register High" */
SFR_NOABS (CAN_MODATAH90, CAN_MODATAHm_t, CAN_MODATAH90_ADDR); /* "Message Object 90 Data Register High" */
SFR_NOABS (CAN_MODATAH91, CAN_MODATAHm_t, CAN_MODATAH91_ADDR); /* "Message Object 91 Data Register High" */
SFR_NOABS (CAN_MODATAH92, CAN_MODATAHm_t, CAN_MODATAH92_ADDR); /* "Message Object 92 Data Register High" */
SFR_NOABS (CAN_MODATAH93, CAN_MODATAHm_t, CAN_MODATAH93_ADDR); /* "Message Object 93 Data Register High" */
SFR_NOABS (CAN_MODATAH94, CAN_MODATAHm_t, CAN_MODATAH94_ADDR); /* "Message Object 94 Data Register High" */
SFR_NOABS (CAN_MODATAH95, CAN_MODATAHm_t, CAN_MODATAH95_ADDR); /* "Message Object 95 Data Register High" */
SFR_NOABS (CAN_MODATAH96, CAN_MODATAHm_t, CAN_MODATAH96_ADDR); /* "Message Object 96 Data Register High" */
SFR_NOABS (CAN_MODATAH97, CAN_MODATAHm_t, CAN_MODATAH97_ADDR); /* "Message Object 97 Data Register High" */
SFR_NOABS (CAN_MODATAH98, CAN_MODATAHm_t, CAN_MODATAH98_ADDR); /* "Message Object 98 Data Register High" */
SFR_NOABS (CAN_MODATAH99, CAN_MODATAHm_t, CAN_MODATAH99_ADDR); /* "Message Object 99 Data Register High" */
SFR_NOABS (CAN_MODATAL0, CAN_MODATALm_t, CAN_MODATAL0_ADDR); /* "Message Object 0 Data Register Low" */
SFR_NOABS (CAN_MODATAL1, CAN_MODATALm_t, CAN_MODATAL1_ADDR); /* "Message Object 1 Data Register Low" */
SFR_NOABS (CAN_MODATAL10, CAN_MODATALm_t, CAN_MODATAL10_ADDR); /* "Message Object 10 Data Register Low" */
SFR_NOABS (CAN_MODATAL100, CAN_MODATALm_t, CAN_MODATAL100_ADDR); /* "Message Object 100 Data Register Low" */
SFR_NOABS (CAN_MODATAL101, CAN_MODATALm_t, CAN_MODATAL101_ADDR); /* "Message Object 101 Data Register Low" */
SFR_NOABS (CAN_MODATAL102, CAN_MODATALm_t, CAN_MODATAL102_ADDR); /* "Message Object 102 Data Register Low" */
SFR_NOABS (CAN_MODATAL103, CAN_MODATALm_t, CAN_MODATAL103_ADDR); /* "Message Object 103 Data Register Low" */
SFR_NOABS (CAN_MODATAL104, CAN_MODATALm_t, CAN_MODATAL104_ADDR); /* "Message Object 104 Data Register Low" */
SFR_NOABS (CAN_MODATAL105, CAN_MODATALm_t, CAN_MODATAL105_ADDR); /* "Message Object 105 Data Register Low" */
SFR_NOABS (CAN_MODATAL106, CAN_MODATALm_t, CAN_MODATAL106_ADDR); /* "Message Object 106 Data Register Low" */
SFR_NOABS (CAN_MODATAL107, CAN_MODATALm_t, CAN_MODATAL107_ADDR); /* "Message Object 107 Data Register Low" */
SFR_NOABS (CAN_MODATAL108, CAN_MODATALm_t, CAN_MODATAL108_ADDR); /* "Message Object 108 Data Register Low" */
SFR_NOABS (CAN_MODATAL109, CAN_MODATALm_t, CAN_MODATAL109_ADDR); /* "Message Object 109 Data Register Low" */
SFR_NOABS (CAN_MODATAL11, CAN_MODATALm_t, CAN_MODATAL11_ADDR); /* "Message Object 11 Data Register Low" */
SFR_NOABS (CAN_MODATAL110, CAN_MODATALm_t, CAN_MODATAL110_ADDR); /* "Message Object 110 Data Register Low" */
SFR_NOABS (CAN_MODATAL111, CAN_MODATALm_t, CAN_MODATAL111_ADDR); /* "Message Object 111 Data Register Low" */
SFR_NOABS (CAN_MODATAL112, CAN_MODATALm_t, CAN_MODATAL112_ADDR); /* "Message Object 112 Data Register Low" */
SFR_NOABS (CAN_MODATAL113, CAN_MODATALm_t, CAN_MODATAL113_ADDR); /* "Message Object 113 Data Register Low" */
SFR_NOABS (CAN_MODATAL114, CAN_MODATALm_t, CAN_MODATAL114_ADDR); /* "Message Object 114 Data Register Low" */
SFR_NOABS (CAN_MODATAL115, CAN_MODATALm_t, CAN_MODATAL115_ADDR); /* "Message Object 115 Data Register Low" */
SFR_NOABS (CAN_MODATAL116, CAN_MODATALm_t, CAN_MODATAL116_ADDR); /* "Message Object 116 Data Register Low" */
SFR_NOABS (CAN_MODATAL117, CAN_MODATALm_t, CAN_MODATAL117_ADDR); /* "Message Object 117 Data Register Low" */
SFR_NOABS (CAN_MODATAL118, CAN_MODATALm_t, CAN_MODATAL118_ADDR); /* "Message Object 118 Data Register Low" */
SFR_NOABS (CAN_MODATAL119, CAN_MODATALm_t, CAN_MODATAL119_ADDR); /* "Message Object 119 Data Register Low" */
SFR_NOABS (CAN_MODATAL12, CAN_MODATALm_t, CAN_MODATAL12_ADDR); /* "Message Object 12 Data Register Low" */
SFR_NOABS (CAN_MODATAL120, CAN_MODATALm_t, CAN_MODATAL120_ADDR); /* "Message Object 120 Data Register Low" */
SFR_NOABS (CAN_MODATAL121, CAN_MODATALm_t, CAN_MODATAL121_ADDR); /* "Message Object 121 Data Register Low" */
SFR_NOABS (CAN_MODATAL122, CAN_MODATALm_t, CAN_MODATAL122_ADDR); /* "Message Object 122 Data Register Low" */
SFR_NOABS (CAN_MODATAL123, CAN_MODATALm_t, CAN_MODATAL123_ADDR); /* "Message Object 123 Data Register Low" */
SFR_NOABS (CAN_MODATAL124, CAN_MODATALm_t, CAN_MODATAL124_ADDR); /* "Message Object 124 Data Register Low" */
SFR_NOABS (CAN_MODATAL125, CAN_MODATALm_t, CAN_MODATAL125_ADDR); /* "Message Object 125 Data Register Low" */
SFR_NOABS (CAN_MODATAL126, CAN_MODATALm_t, CAN_MODATAL126_ADDR); /* "Message Object 126 Data Register Low" */
SFR_NOABS (CAN_MODATAL127, CAN_MODATALm_t, CAN_MODATAL127_ADDR); /* "Message Object 127 Data Register Low" */
SFR_NOABS (CAN_MODATAL13, CAN_MODATALm_t, CAN_MODATAL13_ADDR); /* "Message Object 13 Data Register Low" */
SFR_NOABS (CAN_MODATAL14, CAN_MODATALm_t, CAN_MODATAL14_ADDR); /* "Message Object 14 Data Register Low" */
SFR_NOABS (CAN_MODATAL15, CAN_MODATALm_t, CAN_MODATAL15_ADDR); /* "Message Object 15 Data Register Low" */
SFR_NOABS (CAN_MODATAL16, CAN_MODATALm_t, CAN_MODATAL16_ADDR); /* "Message Object 16 Data Register Low" */
SFR_NOABS (CAN_MODATAL17, CAN_MODATALm_t, CAN_MODATAL17_ADDR); /* "Message Object 17 Data Register Low" */
SFR_NOABS (CAN_MODATAL18, CAN_MODATALm_t, CAN_MODATAL18_ADDR); /* "Message Object 18 Data Register Low" */
SFR_NOABS (CAN_MODATAL19, CAN_MODATALm_t, CAN_MODATAL19_ADDR); /* "Message Object 19 Data Register Low" */
SFR_NOABS (CAN_MODATAL2, CAN_MODATALm_t, CAN_MODATAL2_ADDR); /* "Message Object 2 Data Register Low" */
SFR_NOABS (CAN_MODATAL20, CAN_MODATALm_t, CAN_MODATAL20_ADDR); /* "Message Object 20 Data Register Low" */
SFR_NOABS (CAN_MODATAL21, CAN_MODATALm_t, CAN_MODATAL21_ADDR); /* "Message Object 21 Data Register Low" */
SFR_NOABS (CAN_MODATAL22, CAN_MODATALm_t, CAN_MODATAL22_ADDR); /* "Message Object 22 Data Register Low" */
SFR_NOABS (CAN_MODATAL23, CAN_MODATALm_t, CAN_MODATAL23_ADDR); /* "Message Object 23 Data Register Low" */
SFR_NOABS (CAN_MODATAL24, CAN_MODATALm_t, CAN_MODATAL24_ADDR); /* "Message Object 24 Data Register Low" */
SFR_NOABS (CAN_MODATAL25, CAN_MODATALm_t, CAN_MODATAL25_ADDR); /* "Message Object 25 Data Register Low" */
SFR_NOABS (CAN_MODATAL26, CAN_MODATALm_t, CAN_MODATAL26_ADDR); /* "Message Object 26 Data Register Low" */
SFR_NOABS (CAN_MODATAL27, CAN_MODATALm_t, CAN_MODATAL27_ADDR); /* "Message Object 27 Data Register Low" */
SFR_NOABS (CAN_MODATAL28, CAN_MODATALm_t, CAN_MODATAL28_ADDR); /* "Message Object 28 Data Register Low" */
SFR_NOABS (CAN_MODATAL29, CAN_MODATALm_t, CAN_MODATAL29_ADDR); /* "Message Object 29 Data Register Low" */
SFR_NOABS (CAN_MODATAL3, CAN_MODATALm_t, CAN_MODATAL3_ADDR); /* "Message Object 3 Data Register Low" */
SFR_NOABS (CAN_MODATAL30, CAN_MODATALm_t, CAN_MODATAL30_ADDR); /* "Message Object 30 Data Register Low" */
SFR_NOABS (CAN_MODATAL31, CAN_MODATALm_t, CAN_MODATAL31_ADDR); /* "Message Object 31 Data Register Low" */
SFR_NOABS (CAN_MODATAL32, CAN_MODATALm_t, CAN_MODATAL32_ADDR); /* "Message Object 32 Data Register Low" */
SFR_NOABS (CAN_MODATAL33, CAN_MODATALm_t, CAN_MODATAL33_ADDR); /* "Message Object 33 Data Register Low" */
SFR_NOABS (CAN_MODATAL34, CAN_MODATALm_t, CAN_MODATAL34_ADDR); /* "Message Object 34 Data Register Low" */
SFR_NOABS (CAN_MODATAL35, CAN_MODATALm_t, CAN_MODATAL35_ADDR); /* "Message Object 35 Data Register Low" */
SFR_NOABS (CAN_MODATAL36, CAN_MODATALm_t, CAN_MODATAL36_ADDR); /* "Message Object 36 Data Register Low" */
SFR_NOABS (CAN_MODATAL37, CAN_MODATALm_t, CAN_MODATAL37_ADDR); /* "Message Object 37 Data Register Low" */
SFR_NOABS (CAN_MODATAL38, CAN_MODATALm_t, CAN_MODATAL38_ADDR); /* "Message Object 38 Data Register Low" */
SFR_NOABS (CAN_MODATAL39, CAN_MODATALm_t, CAN_MODATAL39_ADDR); /* "Message Object 39 Data Register Low" */
SFR_NOABS (CAN_MODATAL4, CAN_MODATALm_t, CAN_MODATAL4_ADDR); /* "Message Object 4 Data Register Low" */
SFR_NOABS (CAN_MODATAL40, CAN_MODATALm_t, CAN_MODATAL40_ADDR); /* "Message Object 40 Data Register Low" */
SFR_NOABS (CAN_MODATAL41, CAN_MODATALm_t, CAN_MODATAL41_ADDR); /* "Message Object 41 Data Register Low" */
SFR_NOABS (CAN_MODATAL42, CAN_MODATALm_t, CAN_MODATAL42_ADDR); /* "Message Object 42 Data Register Low" */
SFR_NOABS (CAN_MODATAL43, CAN_MODATALm_t, CAN_MODATAL43_ADDR); /* "Message Object 43 Data Register Low" */
SFR_NOABS (CAN_MODATAL44, CAN_MODATALm_t, CAN_MODATAL44_ADDR); /* "Message Object 44 Data Register Low" */
SFR_NOABS (CAN_MODATAL45, CAN_MODATALm_t, CAN_MODATAL45_ADDR); /* "Message Object 45 Data Register Low" */
SFR_NOABS (CAN_MODATAL46, CAN_MODATALm_t, CAN_MODATAL46_ADDR); /* "Message Object 46 Data Register Low" */
SFR_NOABS (CAN_MODATAL47, CAN_MODATALm_t, CAN_MODATAL47_ADDR); /* "Message Object 47 Data Register Low" */
SFR_NOABS (CAN_MODATAL48, CAN_MODATALm_t, CAN_MODATAL48_ADDR); /* "Message Object 48 Data Register Low" */
SFR_NOABS (CAN_MODATAL49, CAN_MODATALm_t, CAN_MODATAL49_ADDR); /* "Message Object 49 Data Register Low" */
SFR_NOABS (CAN_MODATAL5, CAN_MODATALm_t, CAN_MODATAL5_ADDR); /* "Message Object 5 Data Register Low" */
SFR_NOABS (CAN_MODATAL50, CAN_MODATALm_t, CAN_MODATAL50_ADDR); /* "Message Object 50 Data Register Low" */
SFR_NOABS (CAN_MODATAL51, CAN_MODATALm_t, CAN_MODATAL51_ADDR); /* "Message Object 51 Data Register Low" */
SFR_NOABS (CAN_MODATAL52, CAN_MODATALm_t, CAN_MODATAL52_ADDR); /* "Message Object 52 Data Register Low" */
SFR_NOABS (CAN_MODATAL53, CAN_MODATALm_t, CAN_MODATAL53_ADDR); /* "Message Object 53 Data Register Low" */
SFR_NOABS (CAN_MODATAL54, CAN_MODATALm_t, CAN_MODATAL54_ADDR); /* "Message Object 54 Data Register Low" */
SFR_NOABS (CAN_MODATAL55, CAN_MODATALm_t, CAN_MODATAL55_ADDR); /* "Message Object 55 Data Register Low" */
SFR_NOABS (CAN_MODATAL56, CAN_MODATALm_t, CAN_MODATAL56_ADDR); /* "Message Object 56 Data Register Low" */
SFR_NOABS (CAN_MODATAL57, CAN_MODATALm_t, CAN_MODATAL57_ADDR); /* "Message Object 57 Data Register Low" */
SFR_NOABS (CAN_MODATAL58, CAN_MODATALm_t, CAN_MODATAL58_ADDR); /* "Message Object 58 Data Register Low" */
SFR_NOABS (CAN_MODATAL59, CAN_MODATALm_t, CAN_MODATAL59_ADDR); /* "Message Object 59 Data Register Low" */
SFR_NOABS (CAN_MODATAL6, CAN_MODATALm_t, CAN_MODATAL6_ADDR); /* "Message Object 6 Data Register Low" */
SFR_NOABS (CAN_MODATAL60, CAN_MODATALm_t, CAN_MODATAL60_ADDR); /* "Message Object 60 Data Register Low" */
SFR_NOABS (CAN_MODATAL61, CAN_MODATALm_t, CAN_MODATAL61_ADDR); /* "Message Object 61 Data Register Low" */
SFR_NOABS (CAN_MODATAL62, CAN_MODATALm_t, CAN_MODATAL62_ADDR); /* "Message Object 62 Data Register Low" */
SFR_NOABS (CAN_MODATAL63, CAN_MODATALm_t, CAN_MODATAL63_ADDR); /* "Message Object 63 Data Register Low" */
SFR_NOABS (CAN_MODATAL64, CAN_MODATALm_t, CAN_MODATAL64_ADDR); /* "Message Object 64 Data Register Low" */
SFR_NOABS (CAN_MODATAL65, CAN_MODATALm_t, CAN_MODATAL65_ADDR); /* "Message Object 65 Data Register Low" */
SFR_NOABS (CAN_MODATAL66, CAN_MODATALm_t, CAN_MODATAL66_ADDR); /* "Message Object 66 Data Register Low" */
SFR_NOABS (CAN_MODATAL67, CAN_MODATALm_t, CAN_MODATAL67_ADDR); /* "Message Object 67 Data Register Low" */
SFR_NOABS (CAN_MODATAL68, CAN_MODATALm_t, CAN_MODATAL68_ADDR); /* "Message Object 68 Data Register Low" */
SFR_NOABS (CAN_MODATAL69, CAN_MODATALm_t, CAN_MODATAL69_ADDR); /* "Message Object 69 Data Register Low" */
SFR_NOABS (CAN_MODATAL7, CAN_MODATALm_t, CAN_MODATAL7_ADDR); /* "Message Object 7 Data Register Low" */
SFR_NOABS (CAN_MODATAL70, CAN_MODATALm_t, CAN_MODATAL70_ADDR); /* "Message Object 70 Data Register Low" */
SFR_NOABS (CAN_MODATAL71, CAN_MODATALm_t, CAN_MODATAL71_ADDR); /* "Message Object 71 Data Register Low" */
SFR_NOABS (CAN_MODATAL72, CAN_MODATALm_t, CAN_MODATAL72_ADDR); /* "Message Object 72 Data Register Low" */
SFR_NOABS (CAN_MODATAL73, CAN_MODATALm_t, CAN_MODATAL73_ADDR); /* "Message Object 73 Data Register Low" */
SFR_NOABS (CAN_MODATAL74, CAN_MODATALm_t, CAN_MODATAL74_ADDR); /* "Message Object 74 Data Register Low" */
SFR_NOABS (CAN_MODATAL75, CAN_MODATALm_t, CAN_MODATAL75_ADDR); /* "Message Object 75 Data Register Low" */
SFR_NOABS (CAN_MODATAL76, CAN_MODATALm_t, CAN_MODATAL76_ADDR); /* "Message Object 76 Data Register Low" */
SFR_NOABS (CAN_MODATAL77, CAN_MODATALm_t, CAN_MODATAL77_ADDR); /* "Message Object 77 Data Register Low" */
SFR_NOABS (CAN_MODATAL78, CAN_MODATALm_t, CAN_MODATAL78_ADDR); /* "Message Object 78 Data Register Low" */
SFR_NOABS (CAN_MODATAL79, CAN_MODATALm_t, CAN_MODATAL79_ADDR); /* "Message Object 79 Data Register Low" */
SFR_NOABS (CAN_MODATAL8, CAN_MODATALm_t, CAN_MODATAL8_ADDR); /* "Message Object 8 Data Register Low" */
SFR_NOABS (CAN_MODATAL80, CAN_MODATALm_t, CAN_MODATAL80_ADDR); /* "Message Object 80 Data Register Low" */
SFR_NOABS (CAN_MODATAL81, CAN_MODATALm_t, CAN_MODATAL81_ADDR); /* "Message Object 81 Data Register Low" */
SFR_NOABS (CAN_MODATAL82, CAN_MODATALm_t, CAN_MODATAL82_ADDR); /* "Message Object 82 Data Register Low" */
SFR_NOABS (CAN_MODATAL83, CAN_MODATALm_t, CAN_MODATAL83_ADDR); /* "Message Object 83 Data Register Low" */
SFR_NOABS (CAN_MODATAL84, CAN_MODATALm_t, CAN_MODATAL84_ADDR); /* "Message Object 84 Data Register Low" */
SFR_NOABS (CAN_MODATAL85, CAN_MODATALm_t, CAN_MODATAL85_ADDR); /* "Message Object 85 Data Register Low" */
SFR_NOABS (CAN_MODATAL86, CAN_MODATALm_t, CAN_MODATAL86_ADDR); /* "Message Object 86 Data Register Low" */
SFR_NOABS (CAN_MODATAL87, CAN_MODATALm_t, CAN_MODATAL87_ADDR); /* "Message Object 87 Data Register Low" */
SFR_NOABS (CAN_MODATAL88, CAN_MODATALm_t, CAN_MODATAL88_ADDR); /* "Message Object 88 Data Register Low" */
SFR_NOABS (CAN_MODATAL89, CAN_MODATALm_t, CAN_MODATAL89_ADDR); /* "Message Object 89 Data Register Low" */
SFR_NOABS (CAN_MODATAL9, CAN_MODATALm_t, CAN_MODATAL9_ADDR); /* "Message Object 9 Data Register Low" */
SFR_NOABS (CAN_MODATAL90, CAN_MODATALm_t, CAN_MODATAL90_ADDR); /* "Message Object 90 Data Register Low" */
SFR_NOABS (CAN_MODATAL91, CAN_MODATALm_t, CAN_MODATAL91_ADDR); /* "Message Object 91 Data Register Low" */
SFR_NOABS (CAN_MODATAL92, CAN_MODATALm_t, CAN_MODATAL92_ADDR); /* "Message Object 92 Data Register Low" */
SFR_NOABS (CAN_MODATAL93, CAN_MODATALm_t, CAN_MODATAL93_ADDR); /* "Message Object 93 Data Register Low" */
SFR_NOABS (CAN_MODATAL94, CAN_MODATALm_t, CAN_MODATAL94_ADDR); /* "Message Object 94 Data Register Low" */
SFR_NOABS (CAN_MODATAL95, CAN_MODATALm_t, CAN_MODATAL95_ADDR); /* "Message Object 95 Data Register Low" */
SFR_NOABS (CAN_MODATAL96, CAN_MODATALm_t, CAN_MODATAL96_ADDR); /* "Message Object 96 Data Register Low" */
SFR_NOABS (CAN_MODATAL97, CAN_MODATALm_t, CAN_MODATAL97_ADDR); /* "Message Object 97 Data Register Low" */
SFR_NOABS (CAN_MODATAL98, CAN_MODATALm_t, CAN_MODATAL98_ADDR); /* "Message Object 98 Data Register Low" */
SFR_NOABS (CAN_MODATAL99, CAN_MODATALm_t, CAN_MODATAL99_ADDR); /* "Message Object 99 Data Register Low" */
SFR_NOABS (CAN_MOFCR0, CAN_MOFCRm_t, CAN_MOFCR0_ADDR); /* "Message Object 0 Function Control Register" */
SFR_NOABS (CAN_MOFCR1, CAN_MOFCRm_t, CAN_MOFCR1_ADDR); /* "Message Object 1 Function Control Register" */
SFR_NOABS (CAN_MOFCR10, CAN_MOFCRm_t, CAN_MOFCR10_ADDR); /* "Message Object 10 Function Control Register" */
SFR_NOABS (CAN_MOFCR100, CAN_MOFCRm_t, CAN_MOFCR100_ADDR); /* "Message Object 100 Function Control Register" */
SFR_NOABS (CAN_MOFCR101, CAN_MOFCRm_t, CAN_MOFCR101_ADDR); /* "Message Object 101 Function Control Register" */
SFR_NOABS (CAN_MOFCR102, CAN_MOFCRm_t, CAN_MOFCR102_ADDR); /* "Message Object 102 Function Control Register" */
SFR_NOABS (CAN_MOFCR103, CAN_MOFCRm_t, CAN_MOFCR103_ADDR); /* "Message Object 103 Function Control Register" */
SFR_NOABS (CAN_MOFCR104, CAN_MOFCRm_t, CAN_MOFCR104_ADDR); /* "Message Object 104 Function Control Register" */
SFR_NOABS (CAN_MOFCR105, CAN_MOFCRm_t, CAN_MOFCR105_ADDR); /* "Message Object 105 Function Control Register" */
SFR_NOABS (CAN_MOFCR106, CAN_MOFCRm_t, CAN_MOFCR106_ADDR); /* "Message Object 106 Function Control Register" */
SFR_NOABS (CAN_MOFCR107, CAN_MOFCRm_t, CAN_MOFCR107_ADDR); /* "Message Object 107 Function Control Register" */
SFR_NOABS (CAN_MOFCR108, CAN_MOFCRm_t, CAN_MOFCR108_ADDR); /* "Message Object 108 Function Control Register" */
SFR_NOABS (CAN_MOFCR109, CAN_MOFCRm_t, CAN_MOFCR109_ADDR); /* "Message Object 109 Function Control Register" */
SFR_NOABS (CAN_MOFCR11, CAN_MOFCRm_t, CAN_MOFCR11_ADDR); /* "Message Object 11 Function Control Register" */
SFR_NOABS (CAN_MOFCR110, CAN_MOFCRm_t, CAN_MOFCR110_ADDR); /* "Message Object 110 Function Control Register" */
SFR_NOABS (CAN_MOFCR111, CAN_MOFCRm_t, CAN_MOFCR111_ADDR); /* "Message Object 111 Function Control Register" */
SFR_NOABS (CAN_MOFCR112, CAN_MOFCRm_t, CAN_MOFCR112_ADDR); /* "Message Object 112 Function Control Register" */
SFR_NOABS (CAN_MOFCR113, CAN_MOFCRm_t, CAN_MOFCR113_ADDR); /* "Message Object 113 Function Control Register" */
SFR_NOABS (CAN_MOFCR114, CAN_MOFCRm_t, CAN_MOFCR114_ADDR); /* "Message Object 114 Function Control Register" */
SFR_NOABS (CAN_MOFCR115, CAN_MOFCRm_t, CAN_MOFCR115_ADDR); /* "Message Object 115 Function Control Register" */
SFR_NOABS (CAN_MOFCR116, CAN_MOFCRm_t, CAN_MOFCR116_ADDR); /* "Message Object 116 Function Control Register" */
SFR_NOABS (CAN_MOFCR117, CAN_MOFCRm_t, CAN_MOFCR117_ADDR); /* "Message Object 117 Function Control Register" */
SFR_NOABS (CAN_MOFCR118, CAN_MOFCRm_t, CAN_MOFCR118_ADDR); /* "Message Object 118 Function Control Register" */
SFR_NOABS (CAN_MOFCR119, CAN_MOFCRm_t, CAN_MOFCR119_ADDR); /* "Message Object 119 Function Control Register" */
SFR_NOABS (CAN_MOFCR12, CAN_MOFCRm_t, CAN_MOFCR12_ADDR); /* "Message Object 12 Function Control Register" */
SFR_NOABS (CAN_MOFCR120, CAN_MOFCRm_t, CAN_MOFCR120_ADDR); /* "Message Object 120 Function Control Register" */
SFR_NOABS (CAN_MOFCR121, CAN_MOFCRm_t, CAN_MOFCR121_ADDR); /* "Message Object 121 Function Control Register" */
SFR_NOABS (CAN_MOFCR122, CAN_MOFCRm_t, CAN_MOFCR122_ADDR); /* "Message Object 122 Function Control Register" */
SFR_NOABS (CAN_MOFCR123, CAN_MOFCRm_t, CAN_MOFCR123_ADDR); /* "Message Object 123 Function Control Register" */
SFR_NOABS (CAN_MOFCR124, CAN_MOFCRm_t, CAN_MOFCR124_ADDR); /* "Message Object 124 Function Control Register" */
SFR_NOABS (CAN_MOFCR125, CAN_MOFCRm_t, CAN_MOFCR125_ADDR); /* "Message Object 125 Function Control Register" */
SFR_NOABS (CAN_MOFCR126, CAN_MOFCRm_t, CAN_MOFCR126_ADDR); /* "Message Object 126 Function Control Register" */
SFR_NOABS (CAN_MOFCR127, CAN_MOFCRm_t, CAN_MOFCR127_ADDR); /* "Message Object 127 Function Control Register" */
SFR_NOABS (CAN_MOFCR13, CAN_MOFCRm_t, CAN_MOFCR13_ADDR); /* "Message Object 13 Function Control Register" */
SFR_NOABS (CAN_MOFCR14, CAN_MOFCRm_t, CAN_MOFCR14_ADDR); /* "Message Object 14 Function Control Register" */
SFR_NOABS (CAN_MOFCR15, CAN_MOFCRm_t, CAN_MOFCR15_ADDR); /* "Message Object 15 Function Control Register" */
SFR_NOABS (CAN_MOFCR16, CAN_MOFCRm_t, CAN_MOFCR16_ADDR); /* "Message Object 16 Function Control Register" */
SFR_NOABS (CAN_MOFCR17, CAN_MOFCRm_t, CAN_MOFCR17_ADDR); /* "Message Object 17 Function Control Register" */
SFR_NOABS (CAN_MOFCR18, CAN_MOFCRm_t, CAN_MOFCR18_ADDR); /* "Message Object 18 Function Control Register" */
SFR_NOABS (CAN_MOFCR19, CAN_MOFCRm_t, CAN_MOFCR19_ADDR); /* "Message Object 19 Function Control Register" */
SFR_NOABS (CAN_MOFCR2, CAN_MOFCRm_t, CAN_MOFCR2_ADDR); /* "Message Object 2 Function Control Register" */
SFR_NOABS (CAN_MOFCR20, CAN_MOFCRm_t, CAN_MOFCR20_ADDR); /* "Message Object 20 Function Control Register" */
SFR_NOABS (CAN_MOFCR21, CAN_MOFCRm_t, CAN_MOFCR21_ADDR); /* "Message Object 21 Function Control Register" */
SFR_NOABS (CAN_MOFCR22, CAN_MOFCRm_t, CAN_MOFCR22_ADDR); /* "Message Object 22 Function Control Register" */
SFR_NOABS (CAN_MOFCR23, CAN_MOFCRm_t, CAN_MOFCR23_ADDR); /* "Message Object 23 Function Control Register" */
SFR_NOABS (CAN_MOFCR24, CAN_MOFCRm_t, CAN_MOFCR24_ADDR); /* "Message Object 24 Function Control Register" */
SFR_NOABS (CAN_MOFCR25, CAN_MOFCRm_t, CAN_MOFCR25_ADDR); /* "Message Object 25 Function Control Register" */
SFR_NOABS (CAN_MOFCR26, CAN_MOFCRm_t, CAN_MOFCR26_ADDR); /* "Message Object 26 Function Control Register" */
SFR_NOABS (CAN_MOFCR27, CAN_MOFCRm_t, CAN_MOFCR27_ADDR); /* "Message Object 27 Function Control Register" */
SFR_NOABS (CAN_MOFCR28, CAN_MOFCRm_t, CAN_MOFCR28_ADDR); /* "Message Object 28 Function Control Register" */
SFR_NOABS (CAN_MOFCR29, CAN_MOFCRm_t, CAN_MOFCR29_ADDR); /* "Message Object 29 Function Control Register" */
SFR_NOABS (CAN_MOFCR3, CAN_MOFCRm_t, CAN_MOFCR3_ADDR); /* "Message Object 3 Function Control Register" */
SFR_NOABS (CAN_MOFCR30, CAN_MOFCRm_t, CAN_MOFCR30_ADDR); /* "Message Object 30 Function Control Register" */
SFR_NOABS (CAN_MOFCR31, CAN_MOFCRm_t, CAN_MOFCR31_ADDR); /* "Message Object 31 Function Control Register" */
SFR_NOABS (CAN_MOFCR32, CAN_MOFCRm_t, CAN_MOFCR32_ADDR); /* "Message Object 32 Function Control Register" */
SFR_NOABS (CAN_MOFCR33, CAN_MOFCRm_t, CAN_MOFCR33_ADDR); /* "Message Object 33 Function Control Register" */
SFR_NOABS (CAN_MOFCR34, CAN_MOFCRm_t, CAN_MOFCR34_ADDR); /* "Message Object 34 Function Control Register" */
SFR_NOABS (CAN_MOFCR35, CAN_MOFCRm_t, CAN_MOFCR35_ADDR); /* "Message Object 35 Function Control Register" */
SFR_NOABS (CAN_MOFCR36, CAN_MOFCRm_t, CAN_MOFCR36_ADDR); /* "Message Object 36 Function Control Register" */
SFR_NOABS (CAN_MOFCR37, CAN_MOFCRm_t, CAN_MOFCR37_ADDR); /* "Message Object 37 Function Control Register" */
SFR_NOABS (CAN_MOFCR38, CAN_MOFCRm_t, CAN_MOFCR38_ADDR); /* "Message Object 38 Function Control Register" */
SFR_NOABS (CAN_MOFCR39, CAN_MOFCRm_t, CAN_MOFCR39_ADDR); /* "Message Object 39 Function Control Register" */
SFR_NOABS (CAN_MOFCR4, CAN_MOFCRm_t, CAN_MOFCR4_ADDR); /* "Message Object 4 Function Control Register" */
SFR_NOABS (CAN_MOFCR40, CAN_MOFCRm_t, CAN_MOFCR40_ADDR); /* "Message Object 40 Function Control Register" */
SFR_NOABS (CAN_MOFCR41, CAN_MOFCRm_t, CAN_MOFCR41_ADDR); /* "Message Object 41 Function Control Register" */
SFR_NOABS (CAN_MOFCR42, CAN_MOFCRm_t, CAN_MOFCR42_ADDR); /* "Message Object 42 Function Control Register" */
SFR_NOABS (CAN_MOFCR43, CAN_MOFCRm_t, CAN_MOFCR43_ADDR); /* "Message Object 43 Function Control Register" */
SFR_NOABS (CAN_MOFCR44, CAN_MOFCRm_t, CAN_MOFCR44_ADDR); /* "Message Object 44 Function Control Register" */
SFR_NOABS (CAN_MOFCR45, CAN_MOFCRm_t, CAN_MOFCR45_ADDR); /* "Message Object 45 Function Control Register" */
SFR_NOABS (CAN_MOFCR46, CAN_MOFCRm_t, CAN_MOFCR46_ADDR); /* "Message Object 46 Function Control Register" */
SFR_NOABS (CAN_MOFCR47, CAN_MOFCRm_t, CAN_MOFCR47_ADDR); /* "Message Object 47 Function Control Register" */
SFR_NOABS (CAN_MOFCR48, CAN_MOFCRm_t, CAN_MOFCR48_ADDR); /* "Message Object 48 Function Control Register" */
SFR_NOABS (CAN_MOFCR49, CAN_MOFCRm_t, CAN_MOFCR49_ADDR); /* "Message Object 49 Function Control Register" */
SFR_NOABS (CAN_MOFCR5, CAN_MOFCRm_t, CAN_MOFCR5_ADDR); /* "Message Object 5 Function Control Register" */
SFR_NOABS (CAN_MOFCR50, CAN_MOFCRm_t, CAN_MOFCR50_ADDR); /* "Message Object 50 Function Control Register" */
SFR_NOABS (CAN_MOFCR51, CAN_MOFCRm_t, CAN_MOFCR51_ADDR); /* "Message Object 51 Function Control Register" */
SFR_NOABS (CAN_MOFCR52, CAN_MOFCRm_t, CAN_MOFCR52_ADDR); /* "Message Object 52 Function Control Register" */
SFR_NOABS (CAN_MOFCR53, CAN_MOFCRm_t, CAN_MOFCR53_ADDR); /* "Message Object 53 Function Control Register" */
SFR_NOABS (CAN_MOFCR54, CAN_MOFCRm_t, CAN_MOFCR54_ADDR); /* "Message Object 54 Function Control Register" */
SFR_NOABS (CAN_MOFCR55, CAN_MOFCRm_t, CAN_MOFCR55_ADDR); /* "Message Object 55 Function Control Register" */
SFR_NOABS (CAN_MOFCR56, CAN_MOFCRm_t, CAN_MOFCR56_ADDR); /* "Message Object 56 Function Control Register" */
SFR_NOABS (CAN_MOFCR57, CAN_MOFCRm_t, CAN_MOFCR57_ADDR); /* "Message Object 57 Function Control Register" */
SFR_NOABS (CAN_MOFCR58, CAN_MOFCRm_t, CAN_MOFCR58_ADDR); /* "Message Object 58 Function Control Register" */
SFR_NOABS (CAN_MOFCR59, CAN_MOFCRm_t, CAN_MOFCR59_ADDR); /* "Message Object 59 Function Control Register" */
SFR_NOABS (CAN_MOFCR6, CAN_MOFCRm_t, CAN_MOFCR6_ADDR); /* "Message Object 6 Function Control Register" */
SFR_NOABS (CAN_MOFCR60, CAN_MOFCRm_t, CAN_MOFCR60_ADDR); /* "Message Object 60 Function Control Register" */
SFR_NOABS (CAN_MOFCR61, CAN_MOFCRm_t, CAN_MOFCR61_ADDR); /* "Message Object 61 Function Control Register" */
SFR_NOABS (CAN_MOFCR62, CAN_MOFCRm_t, CAN_MOFCR62_ADDR); /* "Message Object 62 Function Control Register" */
SFR_NOABS (CAN_MOFCR63, CAN_MOFCRm_t, CAN_MOFCR63_ADDR); /* "Message Object 63 Function Control Register" */
SFR_NOABS (CAN_MOFCR64, CAN_MOFCRm_t, CAN_MOFCR64_ADDR); /* "Message Object 64 Function Control Register" */
SFR_NOABS (CAN_MOFCR65, CAN_MOFCRm_t, CAN_MOFCR65_ADDR); /* "Message Object 65 Function Control Register" */
SFR_NOABS (CAN_MOFCR66, CAN_MOFCRm_t, CAN_MOFCR66_ADDR); /* "Message Object 66 Function Control Register" */
SFR_NOABS (CAN_MOFCR67, CAN_MOFCRm_t, CAN_MOFCR67_ADDR); /* "Message Object 67 Function Control Register" */
SFR_NOABS (CAN_MOFCR68, CAN_MOFCRm_t, CAN_MOFCR68_ADDR); /* "Message Object 68 Function Control Register" */
SFR_NOABS (CAN_MOFCR69, CAN_MOFCRm_t, CAN_MOFCR69_ADDR); /* "Message Object 69 Function Control Register" */
SFR_NOABS (CAN_MOFCR7, CAN_MOFCRm_t, CAN_MOFCR7_ADDR); /* "Message Object 7 Function Control Register" */
SFR_NOABS (CAN_MOFCR70, CAN_MOFCRm_t, CAN_MOFCR70_ADDR); /* "Message Object 70 Function Control Register" */
SFR_NOABS (CAN_MOFCR71, CAN_MOFCRm_t, CAN_MOFCR71_ADDR); /* "Message Object 71 Function Control Register" */
SFR_NOABS (CAN_MOFCR72, CAN_MOFCRm_t, CAN_MOFCR72_ADDR); /* "Message Object 72 Function Control Register" */
SFR_NOABS (CAN_MOFCR73, CAN_MOFCRm_t, CAN_MOFCR73_ADDR); /* "Message Object 73 Function Control Register" */
SFR_NOABS (CAN_MOFCR74, CAN_MOFCRm_t, CAN_MOFCR74_ADDR); /* "Message Object 74 Function Control Register" */
SFR_NOABS (CAN_MOFCR75, CAN_MOFCRm_t, CAN_MOFCR75_ADDR); /* "Message Object 75 Function Control Register" */
SFR_NOABS (CAN_MOFCR76, CAN_MOFCRm_t, CAN_MOFCR76_ADDR); /* "Message Object 76 Function Control Register" */
SFR_NOABS (CAN_MOFCR77, CAN_MOFCRm_t, CAN_MOFCR77_ADDR); /* "Message Object 77 Function Control Register" */
SFR_NOABS (CAN_MOFCR78, CAN_MOFCRm_t, CAN_MOFCR78_ADDR); /* "Message Object 78 Function Control Register" */
SFR_NOABS (CAN_MOFCR79, CAN_MOFCRm_t, CAN_MOFCR79_ADDR); /* "Message Object 79 Function Control Register" */
SFR_NOABS (CAN_MOFCR8, CAN_MOFCRm_t, CAN_MOFCR8_ADDR); /* "Message Object 8 Function Control Register" */
SFR_NOABS (CAN_MOFCR80, CAN_MOFCRm_t, CAN_MOFCR80_ADDR); /* "Message Object 80 Function Control Register" */
SFR_NOABS (CAN_MOFCR81, CAN_MOFCRm_t, CAN_MOFCR81_ADDR); /* "Message Object 81 Function Control Register" */
SFR_NOABS (CAN_MOFCR82, CAN_MOFCRm_t, CAN_MOFCR82_ADDR); /* "Message Object 82 Function Control Register" */
SFR_NOABS (CAN_MOFCR83, CAN_MOFCRm_t, CAN_MOFCR83_ADDR); /* "Message Object 83 Function Control Register" */
SFR_NOABS (CAN_MOFCR84, CAN_MOFCRm_t, CAN_MOFCR84_ADDR); /* "Message Object 84 Function Control Register" */
SFR_NOABS (CAN_MOFCR85, CAN_MOFCRm_t, CAN_MOFCR85_ADDR); /* "Message Object 85 Function Control Register" */
SFR_NOABS (CAN_MOFCR86, CAN_MOFCRm_t, CAN_MOFCR86_ADDR); /* "Message Object 86 Function Control Register" */
SFR_NOABS (CAN_MOFCR87, CAN_MOFCRm_t, CAN_MOFCR87_ADDR); /* "Message Object 87 Function Control Register" */
SFR_NOABS (CAN_MOFCR88, CAN_MOFCRm_t, CAN_MOFCR88_ADDR); /* "Message Object 88 Function Control Register" */
SFR_NOABS (CAN_MOFCR89, CAN_MOFCRm_t, CAN_MOFCR89_ADDR); /* "Message Object 89 Function Control Register" */
SFR_NOABS (CAN_MOFCR9, CAN_MOFCRm_t, CAN_MOFCR9_ADDR); /* "Message Object 9 Function Control Register" */
SFR_NOABS (CAN_MOFCR90, CAN_MOFCRm_t, CAN_MOFCR90_ADDR); /* "Message Object 90 Function Control Register" */
SFR_NOABS (CAN_MOFCR91, CAN_MOFCRm_t, CAN_MOFCR91_ADDR); /* "Message Object 91 Function Control Register" */
SFR_NOABS (CAN_MOFCR92, CAN_MOFCRm_t, CAN_MOFCR92_ADDR); /* "Message Object 92 Function Control Register" */
SFR_NOABS (CAN_MOFCR93, CAN_MOFCRm_t, CAN_MOFCR93_ADDR); /* "Message Object 93 Function Control Register" */
SFR_NOABS (CAN_MOFCR94, CAN_MOFCRm_t, CAN_MOFCR94_ADDR); /* "Message Object 94 Function Control Register" */
SFR_NOABS (CAN_MOFCR95, CAN_MOFCRm_t, CAN_MOFCR95_ADDR); /* "Message Object 95 Function Control Register" */
SFR_NOABS (CAN_MOFCR96, CAN_MOFCRm_t, CAN_MOFCR96_ADDR); /* "Message Object 96 Function Control Register" */
SFR_NOABS (CAN_MOFCR97, CAN_MOFCRm_t, CAN_MOFCR97_ADDR); /* "Message Object 97 Function Control Register" */
SFR_NOABS (CAN_MOFCR98, CAN_MOFCRm_t, CAN_MOFCR98_ADDR); /* "Message Object 98 Function Control Register" */
SFR_NOABS (CAN_MOFCR99, CAN_MOFCRm_t, CAN_MOFCR99_ADDR); /* "Message Object 99 Function Control Register" */
SFR_NOABS (CAN_MOFGPR0, CAN_MOFGPRm_t, CAN_MOFGPR0_ADDR); /* "Message Object 0 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR1, CAN_MOFGPRm_t, CAN_MOFGPR1_ADDR); /* "Message Object 1 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR10, CAN_MOFGPRm_t, CAN_MOFGPR10_ADDR); /* "Message Object 10 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR100, CAN_MOFGPRm_t, CAN_MOFGPR100_ADDR); /* "Message Object 100 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR101, CAN_MOFGPRm_t, CAN_MOFGPR101_ADDR); /* "Message Object 101 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR102, CAN_MOFGPRm_t, CAN_MOFGPR102_ADDR); /* "Message Object 102 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR103, CAN_MOFGPRm_t, CAN_MOFGPR103_ADDR); /* "Message Object 103 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR104, CAN_MOFGPRm_t, CAN_MOFGPR104_ADDR); /* "Message Object 104 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR105, CAN_MOFGPRm_t, CAN_MOFGPR105_ADDR); /* "Message Object 105 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR106, CAN_MOFGPRm_t, CAN_MOFGPR106_ADDR); /* "Message Object 106 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR107, CAN_MOFGPRm_t, CAN_MOFGPR107_ADDR); /* "Message Object 107 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR108, CAN_MOFGPRm_t, CAN_MOFGPR108_ADDR); /* "Message Object 108 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR109, CAN_MOFGPRm_t, CAN_MOFGPR109_ADDR); /* "Message Object 109 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR11, CAN_MOFGPRm_t, CAN_MOFGPR11_ADDR); /* "Message Object 11 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR110, CAN_MOFGPRm_t, CAN_MOFGPR110_ADDR); /* "Message Object 110 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR111, CAN_MOFGPRm_t, CAN_MOFGPR111_ADDR); /* "Message Object 111 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR112, CAN_MOFGPRm_t, CAN_MOFGPR112_ADDR); /* "Message Object 112 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR113, CAN_MOFGPRm_t, CAN_MOFGPR113_ADDR); /* "Message Object 113 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR114, CAN_MOFGPRm_t, CAN_MOFGPR114_ADDR); /* "Message Object 114 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR115, CAN_MOFGPRm_t, CAN_MOFGPR115_ADDR); /* "Message Object 115 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR116, CAN_MOFGPRm_t, CAN_MOFGPR116_ADDR); /* "Message Object 116 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR117, CAN_MOFGPRm_t, CAN_MOFGPR117_ADDR); /* "Message Object 117 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR118, CAN_MOFGPRm_t, CAN_MOFGPR118_ADDR); /* "Message Object 118 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR119, CAN_MOFGPRm_t, CAN_MOFGPR119_ADDR); /* "Message Object 119 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR12, CAN_MOFGPRm_t, CAN_MOFGPR12_ADDR); /* "Message Object 12 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR120, CAN_MOFGPRm_t, CAN_MOFGPR120_ADDR); /* "Message Object 120 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR121, CAN_MOFGPRm_t, CAN_MOFGPR121_ADDR); /* "Message Object 121 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR122, CAN_MOFGPRm_t, CAN_MOFGPR122_ADDR); /* "Message Object 122 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR123, CAN_MOFGPRm_t, CAN_MOFGPR123_ADDR); /* "Message Object 123 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR124, CAN_MOFGPRm_t, CAN_MOFGPR124_ADDR); /* "Message Object 124 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR125, CAN_MOFGPRm_t, CAN_MOFGPR125_ADDR); /* "Message Object 125 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR126, CAN_MOFGPRm_t, CAN_MOFGPR126_ADDR); /* "Message Object 126 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR127, CAN_MOFGPRm_t, CAN_MOFGPR127_ADDR); /* "Message Object 127 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR13, CAN_MOFGPRm_t, CAN_MOFGPR13_ADDR); /* "Message Object 13 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR14, CAN_MOFGPRm_t, CAN_MOFGPR14_ADDR); /* "Message Object 14 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR15, CAN_MOFGPRm_t, CAN_MOFGPR15_ADDR); /* "Message Object 15 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR16, CAN_MOFGPRm_t, CAN_MOFGPR16_ADDR); /* "Message Object 16 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR17, CAN_MOFGPRm_t, CAN_MOFGPR17_ADDR); /* "Message Object 17 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR18, CAN_MOFGPRm_t, CAN_MOFGPR18_ADDR); /* "Message Object 18 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR19, CAN_MOFGPRm_t, CAN_MOFGPR19_ADDR); /* "Message Object 19 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR2, CAN_MOFGPRm_t, CAN_MOFGPR2_ADDR); /* "Message Object 2 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR20, CAN_MOFGPRm_t, CAN_MOFGPR20_ADDR); /* "Message Object 20 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR21, CAN_MOFGPRm_t, CAN_MOFGPR21_ADDR); /* "Message Object 21 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR22, CAN_MOFGPRm_t, CAN_MOFGPR22_ADDR); /* "Message Object 22 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR23, CAN_MOFGPRm_t, CAN_MOFGPR23_ADDR); /* "Message Object 23 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR24, CAN_MOFGPRm_t, CAN_MOFGPR24_ADDR); /* "Message Object 24 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR25, CAN_MOFGPRm_t, CAN_MOFGPR25_ADDR); /* "Message Object 25 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR26, CAN_MOFGPRm_t, CAN_MOFGPR26_ADDR); /* "Message Object 26 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR27, CAN_MOFGPRm_t, CAN_MOFGPR27_ADDR); /* "Message Object 27 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR28, CAN_MOFGPRm_t, CAN_MOFGPR28_ADDR); /* "Message Object 28 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR29, CAN_MOFGPRm_t, CAN_MOFGPR29_ADDR); /* "Message Object 29 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR3, CAN_MOFGPRm_t, CAN_MOFGPR3_ADDR); /* "Message Object 3 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR30, CAN_MOFGPRm_t, CAN_MOFGPR30_ADDR); /* "Message Object 30 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR31, CAN_MOFGPRm_t, CAN_MOFGPR31_ADDR); /* "Message Object 31 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR32, CAN_MOFGPRm_t, CAN_MOFGPR32_ADDR); /* "Message Object 32 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR33, CAN_MOFGPRm_t, CAN_MOFGPR33_ADDR); /* "Message Object 33 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR34, CAN_MOFGPRm_t, CAN_MOFGPR34_ADDR); /* "Message Object 34 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR35, CAN_MOFGPRm_t, CAN_MOFGPR35_ADDR); /* "Message Object 35 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR36, CAN_MOFGPRm_t, CAN_MOFGPR36_ADDR); /* "Message Object 36 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR37, CAN_MOFGPRm_t, CAN_MOFGPR37_ADDR); /* "Message Object 37 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR38, CAN_MOFGPRm_t, CAN_MOFGPR38_ADDR); /* "Message Object 38 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR39, CAN_MOFGPRm_t, CAN_MOFGPR39_ADDR); /* "Message Object 39 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR4, CAN_MOFGPRm_t, CAN_MOFGPR4_ADDR); /* "Message Object 4 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR40, CAN_MOFGPRm_t, CAN_MOFGPR40_ADDR); /* "Message Object 40 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR41, CAN_MOFGPRm_t, CAN_MOFGPR41_ADDR); /* "Message Object 41 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR42, CAN_MOFGPRm_t, CAN_MOFGPR42_ADDR); /* "Message Object 42 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR43, CAN_MOFGPRm_t, CAN_MOFGPR43_ADDR); /* "Message Object 43 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR44, CAN_MOFGPRm_t, CAN_MOFGPR44_ADDR); /* "Message Object 44 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR45, CAN_MOFGPRm_t, CAN_MOFGPR45_ADDR); /* "Message Object 45 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR46, CAN_MOFGPRm_t, CAN_MOFGPR46_ADDR); /* "Message Object 46 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR47, CAN_MOFGPRm_t, CAN_MOFGPR47_ADDR); /* "Message Object 47 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR48, CAN_MOFGPRm_t, CAN_MOFGPR48_ADDR); /* "Message Object 48 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR49, CAN_MOFGPRm_t, CAN_MOFGPR49_ADDR); /* "Message Object 49 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR5, CAN_MOFGPRm_t, CAN_MOFGPR5_ADDR); /* "Message Object 5 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR50, CAN_MOFGPRm_t, CAN_MOFGPR50_ADDR); /* "Message Object 50 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR51, CAN_MOFGPRm_t, CAN_MOFGPR51_ADDR); /* "Message Object 51 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR52, CAN_MOFGPRm_t, CAN_MOFGPR52_ADDR); /* "Message Object 52 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR53, CAN_MOFGPRm_t, CAN_MOFGPR53_ADDR); /* "Message Object 53 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR54, CAN_MOFGPRm_t, CAN_MOFGPR54_ADDR); /* "Message Object 54 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR55, CAN_MOFGPRm_t, CAN_MOFGPR55_ADDR); /* "Message Object 55 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR56, CAN_MOFGPRm_t, CAN_MOFGPR56_ADDR); /* "Message Object 56 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR57, CAN_MOFGPRm_t, CAN_MOFGPR57_ADDR); /* "Message Object 57 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR58, CAN_MOFGPRm_t, CAN_MOFGPR58_ADDR); /* "Message Object 58 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR59, CAN_MOFGPRm_t, CAN_MOFGPR59_ADDR); /* "Message Object 59 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR6, CAN_MOFGPRm_t, CAN_MOFGPR6_ADDR); /* "Message Object 6 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR60, CAN_MOFGPRm_t, CAN_MOFGPR60_ADDR); /* "Message Object 60 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR61, CAN_MOFGPRm_t, CAN_MOFGPR61_ADDR); /* "Message Object 61 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR62, CAN_MOFGPRm_t, CAN_MOFGPR62_ADDR); /* "Message Object 62 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR63, CAN_MOFGPRm_t, CAN_MOFGPR63_ADDR); /* "Message Object 63 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR64, CAN_MOFGPRm_t, CAN_MOFGPR64_ADDR); /* "Message Object 64 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR65, CAN_MOFGPRm_t, CAN_MOFGPR65_ADDR); /* "Message Object 65 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR66, CAN_MOFGPRm_t, CAN_MOFGPR66_ADDR); /* "Message Object 66 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR67, CAN_MOFGPRm_t, CAN_MOFGPR67_ADDR); /* "Message Object 67 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR68, CAN_MOFGPRm_t, CAN_MOFGPR68_ADDR); /* "Message Object 68 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR69, CAN_MOFGPRm_t, CAN_MOFGPR69_ADDR); /* "Message Object 69 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR7, CAN_MOFGPRm_t, CAN_MOFGPR7_ADDR); /* "Message Object 7 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR70, CAN_MOFGPRm_t, CAN_MOFGPR70_ADDR); /* "Message Object 70 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR71, CAN_MOFGPRm_t, CAN_MOFGPR71_ADDR); /* "Message Object 71 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR72, CAN_MOFGPRm_t, CAN_MOFGPR72_ADDR); /* "Message Object 72 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR73, CAN_MOFGPRm_t, CAN_MOFGPR73_ADDR); /* "Message Object 73 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR74, CAN_MOFGPRm_t, CAN_MOFGPR74_ADDR); /* "Message Object 74 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR75, CAN_MOFGPRm_t, CAN_MOFGPR75_ADDR); /* "Message Object 75 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR76, CAN_MOFGPRm_t, CAN_MOFGPR76_ADDR); /* "Message Object 76 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR77, CAN_MOFGPRm_t, CAN_MOFGPR77_ADDR); /* "Message Object 77 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR78, CAN_MOFGPRm_t, CAN_MOFGPR78_ADDR); /* "Message Object 78 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR79, CAN_MOFGPRm_t, CAN_MOFGPR79_ADDR); /* "Message Object 79 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR8, CAN_MOFGPRm_t, CAN_MOFGPR8_ADDR); /* "Message Object 8 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR80, CAN_MOFGPRm_t, CAN_MOFGPR80_ADDR); /* "Message Object 80 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR81, CAN_MOFGPRm_t, CAN_MOFGPR81_ADDR); /* "Message Object 81 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR82, CAN_MOFGPRm_t, CAN_MOFGPR82_ADDR); /* "Message Object 82 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR83, CAN_MOFGPRm_t, CAN_MOFGPR83_ADDR); /* "Message Object 83 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR84, CAN_MOFGPRm_t, CAN_MOFGPR84_ADDR); /* "Message Object 84 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR85, CAN_MOFGPRm_t, CAN_MOFGPR85_ADDR); /* "Message Object 85 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR86, CAN_MOFGPRm_t, CAN_MOFGPR86_ADDR); /* "Message Object 86 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR87, CAN_MOFGPRm_t, CAN_MOFGPR87_ADDR); /* "Message Object 87 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR88, CAN_MOFGPRm_t, CAN_MOFGPR88_ADDR); /* "Message Object 88 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR89, CAN_MOFGPRm_t, CAN_MOFGPR89_ADDR); /* "Message Object 89 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR9, CAN_MOFGPRm_t, CAN_MOFGPR9_ADDR); /* "Message Object 9 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR90, CAN_MOFGPRm_t, CAN_MOFGPR90_ADDR); /* "Message Object 90 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR91, CAN_MOFGPRm_t, CAN_MOFGPR91_ADDR); /* "Message Object 91 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR92, CAN_MOFGPRm_t, CAN_MOFGPR92_ADDR); /* "Message Object 92 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR93, CAN_MOFGPRm_t, CAN_MOFGPR93_ADDR); /* "Message Object 93 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR94, CAN_MOFGPRm_t, CAN_MOFGPR94_ADDR); /* "Message Object 94 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR95, CAN_MOFGPRm_t, CAN_MOFGPR95_ADDR); /* "Message Object 95 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR96, CAN_MOFGPRm_t, CAN_MOFGPR96_ADDR); /* "Message Object 96 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR97, CAN_MOFGPRm_t, CAN_MOFGPR97_ADDR); /* "Message Object 97 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR98, CAN_MOFGPRm_t, CAN_MOFGPR98_ADDR); /* "Message Object 98 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR99, CAN_MOFGPRm_t, CAN_MOFGPR99_ADDR); /* "Message Object 99 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOIPR0, CAN_MOIPRm_t, CAN_MOIPR0_ADDR); /* "Message Object 0 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR1, CAN_MOIPRm_t, CAN_MOIPR1_ADDR); /* "Message Object 1 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR10, CAN_MOIPRm_t, CAN_MOIPR10_ADDR); /* "Message Object 10 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR100, CAN_MOIPRm_t, CAN_MOIPR100_ADDR); /* "Message Object 100 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR101, CAN_MOIPRm_t, CAN_MOIPR101_ADDR); /* "Message Object 101 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR102, CAN_MOIPRm_t, CAN_MOIPR102_ADDR); /* "Message Object 102 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR103, CAN_MOIPRm_t, CAN_MOIPR103_ADDR); /* "Message Object 103 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR104, CAN_MOIPRm_t, CAN_MOIPR104_ADDR); /* "Message Object 104 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR105, CAN_MOIPRm_t, CAN_MOIPR105_ADDR); /* "Message Object 105 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR106, CAN_MOIPRm_t, CAN_MOIPR106_ADDR); /* "Message Object 106 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR107, CAN_MOIPRm_t, CAN_MOIPR107_ADDR); /* "Message Object 107 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR108, CAN_MOIPRm_t, CAN_MOIPR108_ADDR); /* "Message Object 108 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR109, CAN_MOIPRm_t, CAN_MOIPR109_ADDR); /* "Message Object 109 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR11, CAN_MOIPRm_t, CAN_MOIPR11_ADDR); /* "Message Object 11 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR110, CAN_MOIPRm_t, CAN_MOIPR110_ADDR); /* "Message Object 110 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR111, CAN_MOIPRm_t, CAN_MOIPR111_ADDR); /* "Message Object 111 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR112, CAN_MOIPRm_t, CAN_MOIPR112_ADDR); /* "Message Object 112 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR113, CAN_MOIPRm_t, CAN_MOIPR113_ADDR); /* "Message Object 113 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR114, CAN_MOIPRm_t, CAN_MOIPR114_ADDR); /* "Message Object 114 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR115, CAN_MOIPRm_t, CAN_MOIPR115_ADDR); /* "Message Object 115 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR116, CAN_MOIPRm_t, CAN_MOIPR116_ADDR); /* "Message Object 116 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR117, CAN_MOIPRm_t, CAN_MOIPR117_ADDR); /* "Message Object 117 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR118, CAN_MOIPRm_t, CAN_MOIPR118_ADDR); /* "Message Object 118 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR119, CAN_MOIPRm_t, CAN_MOIPR119_ADDR); /* "Message Object 119 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR12, CAN_MOIPRm_t, CAN_MOIPR12_ADDR); /* "Message Object 12 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR120, CAN_MOIPRm_t, CAN_MOIPR120_ADDR); /* "Message Object 120 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR121, CAN_MOIPRm_t, CAN_MOIPR121_ADDR); /* "Message Object 121 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR122, CAN_MOIPRm_t, CAN_MOIPR122_ADDR); /* "Message Object 122 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR123, CAN_MOIPRm_t, CAN_MOIPR123_ADDR); /* "Message Object 123 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR124, CAN_MOIPRm_t, CAN_MOIPR124_ADDR); /* "Message Object 124 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR125, CAN_MOIPRm_t, CAN_MOIPR125_ADDR); /* "Message Object 125 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR126, CAN_MOIPRm_t, CAN_MOIPR126_ADDR); /* "Message Object 126 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR127, CAN_MOIPRm_t, CAN_MOIPR127_ADDR); /* "Message Object 127 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR13, CAN_MOIPRm_t, CAN_MOIPR13_ADDR); /* "Message Object 13 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR14, CAN_MOIPRm_t, CAN_MOIPR14_ADDR); /* "Message Object 14 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR15, CAN_MOIPRm_t, CAN_MOIPR15_ADDR); /* "Message Object 15 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR16, CAN_MOIPRm_t, CAN_MOIPR16_ADDR); /* "Message Object 16 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR17, CAN_MOIPRm_t, CAN_MOIPR17_ADDR); /* "Message Object 17 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR18, CAN_MOIPRm_t, CAN_MOIPR18_ADDR); /* "Message Object 18 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR19, CAN_MOIPRm_t, CAN_MOIPR19_ADDR); /* "Message Object 19 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR2, CAN_MOIPRm_t, CAN_MOIPR2_ADDR); /* "Message Object 2 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR20, CAN_MOIPRm_t, CAN_MOIPR20_ADDR); /* "Message Object 20 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR21, CAN_MOIPRm_t, CAN_MOIPR21_ADDR); /* "Message Object 21 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR22, CAN_MOIPRm_t, CAN_MOIPR22_ADDR); /* "Message Object 22 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR23, CAN_MOIPRm_t, CAN_MOIPR23_ADDR); /* "Message Object 23 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR24, CAN_MOIPRm_t, CAN_MOIPR24_ADDR); /* "Message Object 24 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR25, CAN_MOIPRm_t, CAN_MOIPR25_ADDR); /* "Message Object 25 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR26, CAN_MOIPRm_t, CAN_MOIPR26_ADDR); /* "Message Object 26 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR27, CAN_MOIPRm_t, CAN_MOIPR27_ADDR); /* "Message Object 27 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR28, CAN_MOIPRm_t, CAN_MOIPR28_ADDR); /* "Message Object 28 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR29, CAN_MOIPRm_t, CAN_MOIPR29_ADDR); /* "Message Object 29 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR3, CAN_MOIPRm_t, CAN_MOIPR3_ADDR); /* "Message Object 3 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR30, CAN_MOIPRm_t, CAN_MOIPR30_ADDR); /* "Message Object 30 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR31, CAN_MOIPRm_t, CAN_MOIPR31_ADDR); /* "Message Object 31 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR32, CAN_MOIPRm_t, CAN_MOIPR32_ADDR); /* "Message Object 32 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR33, CAN_MOIPRm_t, CAN_MOIPR33_ADDR); /* "Message Object 33 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR34, CAN_MOIPRm_t, CAN_MOIPR34_ADDR); /* "Message Object 34 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR35, CAN_MOIPRm_t, CAN_MOIPR35_ADDR); /* "Message Object 35 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR36, CAN_MOIPRm_t, CAN_MOIPR36_ADDR); /* "Message Object 36 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR37, CAN_MOIPRm_t, CAN_MOIPR37_ADDR); /* "Message Object 37 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR38, CAN_MOIPRm_t, CAN_MOIPR38_ADDR); /* "Message Object 38 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR39, CAN_MOIPRm_t, CAN_MOIPR39_ADDR); /* "Message Object 39 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR4, CAN_MOIPRm_t, CAN_MOIPR4_ADDR); /* "Message Object 4 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR40, CAN_MOIPRm_t, CAN_MOIPR40_ADDR); /* "Message Object 40 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR41, CAN_MOIPRm_t, CAN_MOIPR41_ADDR); /* "Message Object 41 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR42, CAN_MOIPRm_t, CAN_MOIPR42_ADDR); /* "Message Object 42 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR43, CAN_MOIPRm_t, CAN_MOIPR43_ADDR); /* "Message Object 43 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR44, CAN_MOIPRm_t, CAN_MOIPR44_ADDR); /* "Message Object 44 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR45, CAN_MOIPRm_t, CAN_MOIPR45_ADDR); /* "Message Object 45 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR46, CAN_MOIPRm_t, CAN_MOIPR46_ADDR); /* "Message Object 46 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR47, CAN_MOIPRm_t, CAN_MOIPR47_ADDR); /* "Message Object 47 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR48, CAN_MOIPRm_t, CAN_MOIPR48_ADDR); /* "Message Object 48 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR49, CAN_MOIPRm_t, CAN_MOIPR49_ADDR); /* "Message Object 49 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR5, CAN_MOIPRm_t, CAN_MOIPR5_ADDR); /* "Message Object 5 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR50, CAN_MOIPRm_t, CAN_MOIPR50_ADDR); /* "Message Object 50 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR51, CAN_MOIPRm_t, CAN_MOIPR51_ADDR); /* "Message Object 51 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR52, CAN_MOIPRm_t, CAN_MOIPR52_ADDR); /* "Message Object 52 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR53, CAN_MOIPRm_t, CAN_MOIPR53_ADDR); /* "Message Object 53 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR54, CAN_MOIPRm_t, CAN_MOIPR54_ADDR); /* "Message Object 54 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR55, CAN_MOIPRm_t, CAN_MOIPR55_ADDR); /* "Message Object 55 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR56, CAN_MOIPRm_t, CAN_MOIPR56_ADDR); /* "Message Object 56 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR57, CAN_MOIPRm_t, CAN_MOIPR57_ADDR); /* "Message Object 57 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR58, CAN_MOIPRm_t, CAN_MOIPR58_ADDR); /* "Message Object 58 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR59, CAN_MOIPRm_t, CAN_MOIPR59_ADDR); /* "Message Object 59 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR6, CAN_MOIPRm_t, CAN_MOIPR6_ADDR); /* "Message Object 6 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR60, CAN_MOIPRm_t, CAN_MOIPR60_ADDR); /* "Message Object 60 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR61, CAN_MOIPRm_t, CAN_MOIPR61_ADDR); /* "Message Object 61 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR62, CAN_MOIPRm_t, CAN_MOIPR62_ADDR); /* "Message Object 62 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR63, CAN_MOIPRm_t, CAN_MOIPR63_ADDR); /* "Message Object 63 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR64, CAN_MOIPRm_t, CAN_MOIPR64_ADDR); /* "Message Object 64 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR65, CAN_MOIPRm_t, CAN_MOIPR65_ADDR); /* "Message Object 65 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR66, CAN_MOIPRm_t, CAN_MOIPR66_ADDR); /* "Message Object 66 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR67, CAN_MOIPRm_t, CAN_MOIPR67_ADDR); /* "Message Object 67 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR68, CAN_MOIPRm_t, CAN_MOIPR68_ADDR); /* "Message Object 68 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR69, CAN_MOIPRm_t, CAN_MOIPR69_ADDR); /* "Message Object 69 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR7, CAN_MOIPRm_t, CAN_MOIPR7_ADDR); /* "Message Object 7 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR70, CAN_MOIPRm_t, CAN_MOIPR70_ADDR); /* "Message Object 70 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR71, CAN_MOIPRm_t, CAN_MOIPR71_ADDR); /* "Message Object 71 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR72, CAN_MOIPRm_t, CAN_MOIPR72_ADDR); /* "Message Object 72 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR73, CAN_MOIPRm_t, CAN_MOIPR73_ADDR); /* "Message Object 73 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR74, CAN_MOIPRm_t, CAN_MOIPR74_ADDR); /* "Message Object 74 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR75, CAN_MOIPRm_t, CAN_MOIPR75_ADDR); /* "Message Object 75 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR76, CAN_MOIPRm_t, CAN_MOIPR76_ADDR); /* "Message Object 76 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR77, CAN_MOIPRm_t, CAN_MOIPR77_ADDR); /* "Message Object 77 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR78, CAN_MOIPRm_t, CAN_MOIPR78_ADDR); /* "Message Object 78 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR79, CAN_MOIPRm_t, CAN_MOIPR79_ADDR); /* "Message Object 79 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR8, CAN_MOIPRm_t, CAN_MOIPR8_ADDR); /* "Message Object 8 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR80, CAN_MOIPRm_t, CAN_MOIPR80_ADDR); /* "Message Object 80 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR81, CAN_MOIPRm_t, CAN_MOIPR81_ADDR); /* "Message Object 81 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR82, CAN_MOIPRm_t, CAN_MOIPR82_ADDR); /* "Message Object 82 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR83, CAN_MOIPRm_t, CAN_MOIPR83_ADDR); /* "Message Object 83 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR84, CAN_MOIPRm_t, CAN_MOIPR84_ADDR); /* "Message Object 84 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR85, CAN_MOIPRm_t, CAN_MOIPR85_ADDR); /* "Message Object 85 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR86, CAN_MOIPRm_t, CAN_MOIPR86_ADDR); /* "Message Object 86 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR87, CAN_MOIPRm_t, CAN_MOIPR87_ADDR); /* "Message Object 87 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR88, CAN_MOIPRm_t, CAN_MOIPR88_ADDR); /* "Message Object 88 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR89, CAN_MOIPRm_t, CAN_MOIPR89_ADDR); /* "Message Object 89 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR9, CAN_MOIPRm_t, CAN_MOIPR9_ADDR); /* "Message Object 9 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR90, CAN_MOIPRm_t, CAN_MOIPR90_ADDR); /* "Message Object 90 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR91, CAN_MOIPRm_t, CAN_MOIPR91_ADDR); /* "Message Object 91 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR92, CAN_MOIPRm_t, CAN_MOIPR92_ADDR); /* "Message Object 92 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR93, CAN_MOIPRm_t, CAN_MOIPR93_ADDR); /* "Message Object 93 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR94, CAN_MOIPRm_t, CAN_MOIPR94_ADDR); /* "Message Object 94 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR95, CAN_MOIPRm_t, CAN_MOIPR95_ADDR); /* "Message Object 95 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR96, CAN_MOIPRm_t, CAN_MOIPR96_ADDR); /* "Message Object 96 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR97, CAN_MOIPRm_t, CAN_MOIPR97_ADDR); /* "Message Object 97 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR98, CAN_MOIPRm_t, CAN_MOIPR98_ADDR); /* "Message Object 98 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR99, CAN_MOIPRm_t, CAN_MOIPR99_ADDR); /* "Message Object 99 Interrupt Pointer Register" */
SFR_NOABS (CAN_MSID0, CAN_MSIDm_t, CAN_MSID0_ADDR); /* "Message Index Register 0" */
SFR_NOABS (CAN_MSID1, CAN_MSIDm_t, CAN_MSID1_ADDR); /* "Message Index Register 1" */
SFR_NOABS (CAN_MSID2, CAN_MSIDm_t, CAN_MSID2_ADDR); /* "Message Index Register 2" */
SFR_NOABS (CAN_MSID3, CAN_MSIDm_t, CAN_MSID3_ADDR); /* "Message Index Register 3" */
SFR_NOABS (CAN_MSID4, CAN_MSIDm_t, CAN_MSID4_ADDR); /* "Message Index Register 4" */
SFR_NOABS (CAN_MSID5, CAN_MSIDm_t, CAN_MSID5_ADDR); /* "Message Index Register 5" */
SFR_NOABS (CAN_MSID6, CAN_MSIDm_t, CAN_MSID6_ADDR); /* "Message Index Register 6" */
SFR_NOABS (CAN_MSID7, CAN_MSIDm_t, CAN_MSID7_ADDR); /* "Message Index Register 7" */
SFR_NOABS (CAN_MSIMASK, CAN_MSIMASK_t, CAN_MSIMASK_ADDR); /* "Message Index Mask Register" */
SFR_NOABS (CAN_MSPND0, CAN_MSPNDm_t, CAN_MSPND0_ADDR); /* "Message Pending Register 0" */
SFR_NOABS (CAN_MSPND1, CAN_MSPNDm_t, CAN_MSPND1_ADDR); /* "Message Pending Register 1" */
SFR_NOABS (CAN_MSPND2, CAN_MSPNDm_t, CAN_MSPND2_ADDR); /* "Message Pending Register 2" */
SFR_NOABS (CAN_MSPND3, CAN_MSPNDm_t, CAN_MSPND3_ADDR); /* "Message Pending Register 3" */
SFR_NOABS (CAN_MSPND4, CAN_MSPNDm_t, CAN_MSPND4_ADDR); /* "Message Pending Register 4" */
SFR_NOABS (CAN_MSPND5, CAN_MSPNDm_t, CAN_MSPND5_ADDR); /* "Message Pending Register 5" */
SFR_NOABS (CAN_MSPND6, CAN_MSPNDm_t, CAN_MSPND6_ADDR); /* "Message Pending Register 6" */
SFR_NOABS (CAN_MSPND7, CAN_MSPNDm_t, CAN_MSPND7_ADDR); /* "Message Pending Register 7" */
SFR_NOABS (CAN_NBTR0, CAN_NBTRm_t, CAN_NBTR0_ADDR); /* "Node 0 Bit Timing Register" */
SFR_NOABS (CAN_NBTR1, CAN_NBTRm_t, CAN_NBTR1_ADDR); /* "Node 1 Bit Timing Register" */
SFR_NOABS (CAN_NBTR2, CAN_NBTRm_t, CAN_NBTR2_ADDR); /* "Node 2 Bit Timing Register" */
SFR_NOABS (CAN_NCR0, CAN_NCRm_t, CAN_NCR0_ADDR);  /* "Node 0 Control Register" */
SFR_NOABS (CAN_NCR1, CAN_NCRm_t, CAN_NCR1_ADDR);  /* "Node 1 Control Register" */
SFR_NOABS (CAN_NCR2, CAN_NCRm_t, CAN_NCR2_ADDR);  /* "Node 2 Control Register" */
SFR_NOABS (CAN_NECNT0, CAN_NECNTm_t, CAN_NECNT0_ADDR); /* "Node 0 Error Counter Register" */
SFR_NOABS (CAN_NECNT1, CAN_NECNTm_t, CAN_NECNT1_ADDR); /* "Node 1 Error Counter Register" */
SFR_NOABS (CAN_NECNT2, CAN_NECNTm_t, CAN_NECNT2_ADDR); /* "Node 2 Error Counter Register" */
SFR_NOABS (CAN_NFCR0, CAN_NFCRm_t, CAN_NFCR0_ADDR); /* "Node 0 Frame Counter Register" */
SFR_NOABS (CAN_NFCR1, CAN_NFCRm_t, CAN_NFCR1_ADDR); /* "Node 1 Frame Counter Register" */
SFR_NOABS (CAN_NFCR2, CAN_NFCRm_t, CAN_NFCR2_ADDR); /* "Node 2 Frame Counter Register" */
SFR_NOABS (CAN_NIPR0, CAN_NIPRm_t, CAN_NIPR0_ADDR); /* "Node 0 Interrupt Pointer Register" */
SFR_NOABS (CAN_NIPR1, CAN_NIPRm_t, CAN_NIPR1_ADDR); /* "Node 1 Interrupt Pointer Register" */
SFR_NOABS (CAN_NIPR2, CAN_NIPRm_t, CAN_NIPR2_ADDR); /* "Node 2 Interrupt Pointer Register" */
SFR_NOABS (CAN_NPCR0, CAN_NPCRm_t, CAN_NPCR0_ADDR); /* "Node 0 Port Control Register" */
SFR_NOABS (CAN_NPCR1, CAN_NPCRm_t, CAN_NPCR1_ADDR); /* "Node 1 Port Control Register" */
SFR_NOABS (CAN_NPCR2, CAN_NPCRm_t, CAN_NPCR2_ADDR); /* "Node 2 Port Control Register" */
SFR_NOABS (CAN_NSR0, CAN_NSRm_t, CAN_NSR0_ADDR);  /* "Node 0 Status Register" */
SFR_NOABS (CAN_NSR1, CAN_NSRm_t, CAN_NSR1_ADDR);  /* "Node 1 Status Register" */
SFR_NOABS (CAN_NSR2, CAN_NSRm_t, CAN_NSR2_ADDR);  /* "Node 2 Status Register" */
SFR_NOABS (CAN_PANCTR, CAN_PANCTR_t, CAN_PANCTR_ADDR); /* "Panel Control Register" */
SFR_NOABS (CAN_REFMR, CAN_REFMR_t, CAN_REFMR_ADDR); /* "Reference Mark Register" */
SFR_NOABS (CAN_SISR, CAN_SISR_t, CAN_SISR_ADDR);  /* "Scheduler Instruction Status Register" */
SFR_NOABS (CAN_SRC0, CAN_SRCm_t, CAN_SRC0_ADDR);  /* "CAN Service Request Control Register 0" */
SFR_NOABS (CAN_SRC1, CAN_SRCm_t, CAN_SRC1_ADDR);  /* "CAN Service Request Control Register 1" */
SFR_NOABS (CAN_SRC10, CAN_SRCm_t, CAN_SRC10_ADDR); /* "CAN Service Request Control Register 10" */
SFR_NOABS (CAN_SRC11, CAN_SRCm_t, CAN_SRC11_ADDR); /* "CAN Service Request Control Register 11" */
SFR_NOABS (CAN_SRC12, CAN_SRCm_t, CAN_SRC12_ADDR); /* "CAN Service Request Control Register 12" */
SFR_NOABS (CAN_SRC13, CAN_SRCm_t, CAN_SRC13_ADDR); /* "CAN Service Request Control Register 13" */
SFR_NOABS (CAN_SRC14, CAN_SRCm_t, CAN_SRC14_ADDR); /* "CAN Service Request Control Register 14" */
SFR_NOABS (CAN_SRC15, CAN_SRCm_t, CAN_SRC15_ADDR); /* "CAN Service Request Control Register 15" */
SFR_NOABS (CAN_SRC2, CAN_SRCm_t, CAN_SRC2_ADDR);  /* "CAN Service Request Control Register 2" */
SFR_NOABS (CAN_SRC3, CAN_SRCm_t, CAN_SRC3_ADDR);  /* "CAN Service Request Control Register 3" */
SFR_NOABS (CAN_SRC4, CAN_SRCm_t, CAN_SRC4_ADDR);  /* "CAN Service Request Control Register 4" */
SFR_NOABS (CAN_SRC5, CAN_SRCm_t, CAN_SRC5_ADDR);  /* "CAN Service Request Control Register 5" */
SFR_NOABS (CAN_SRC6, CAN_SRCm_t, CAN_SRC6_ADDR);  /* "CAN Service Request Control Register 6" */
SFR_NOABS (CAN_SRC7, CAN_SRCm_t, CAN_SRC7_ADDR);  /* "CAN Service Request Control Register 7" */
SFR_NOABS (CAN_SRC8, CAN_SRCm_t, CAN_SRC8_ADDR);  /* "CAN Service Request Control Register 8" */
SFR_NOABS (CAN_SRC9, CAN_SRCm_t, CAN_SRC9_ADDR);  /* "CAN Service Request Control Register 9" */
SFR_NOABS (CAN_STPTR0, CAN_STPTR0_t, CAN_STPTR0_ADDR); /* "Scheduler Start Pointer Node 0 Register" */
SFR_NOABS (CAN_STSRH, CAN_STSRH_t, CAN_STSRH_ADDR); /* "Scheduler Timing Status Register High" */
SFR_NOABS (CAN_STSRL, CAN_STSRL_t, CAN_STSRL_ADDR); /* "Scheduler Timing Status Register Low" */
SFR_NOABS (CAN_SYNMR, CAN_SYNMR_t, CAN_SYNMR_ADDR); /* "Synchronization Mark Register" */
SFR_NOABS (CAN_TTCFGR, CAN_TTCFGR_t, CAN_TTCFGR_ADDR); /* "Time Trigger Configuration Register" */
SFR_NOABS (CAN_TTCR, CAN_TTCR_t, CAN_TTCR_ADDR);  /* "Time Trigger Control Register" */
SFR_NOABS (CAN_TTFMR, CAN_TTFMR_t, CAN_TTFMR_ADDR); /* "Time Trigger Flag Modification Register" */
SFR_NOABS (CAN_TTIER, CAN_TTIER_t, CAN_TTIER_ADDR); /* "Time Trigger Interrupt Enable Register" */
SFR_NOABS (CAN_TTINPR, CAN_TTINPR_t, CAN_TTINPR_ADDR); /* "Time Trigger Interrupt Node Pointer Register" */
SFR_NOABS (CAN_TTIRR, CAN_TTIRR_t, CAN_TTIRR_ADDR); /* "Time Trigger Interrupt Request Register" */
SFR_NOABS (CAN_TTSR, CAN_TTSR_t, CAN_TTSR_ADDR);  /* "Time Trigger Status Register" */
SFR_NOABS (CAN_TURR, CAN_TURR_t, CAN_TURR_ADDR);  /* "Time Unit Ratio Register" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_CAN_H_ (block "MultiCAN") */


