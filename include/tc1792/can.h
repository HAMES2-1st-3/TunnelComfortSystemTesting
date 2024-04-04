/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "CAN" of TriCore TC1792 (836 SFRs) */

#include <tc1792/can/addr.h>

#include <tc1792/can/masks.h>
#include <tc1792/can/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1792/can/types.h>
#include <tc1792/can/sharetypes.h>

#ifndef _HAVE_TRICORE_CAN_H_
#define _HAVE_TRICORE_CAN_H_

#include <tricore-abs-noabs.h>

SFR_NOABS (CAN_CLC, CAN_CLC_t, CAN_CLC_ADDR);     /* "CAN Clock Control Register" */
SFR_NOABS (CAN_FDR, CAN_FDR_t, CAN_FDR_ADDR);     /* "CAN Fractional Divider Register" */
SFR_NOABS (CAN_ID, CAN_ID_t, CAN_ID_ADDR);        /* "CAN Module Identification Register" */
SFR_NOABS (CAN_LIST0, CAN_LISTm_t, CAN_LIST0_ADDR); /* "CAN List Register 0" */
SFR_NOABS (CAN_LIST1, CAN_LISTm_t, CAN_LIST1_ADDR); /* "CAN List Register 1" */
SFR_NOABS (CAN_LIST2, CAN_LISTm_t, CAN_LIST2_ADDR); /* "CAN List Register 2" */
SFR_NOABS (CAN_LIST3, CAN_LISTm_t, CAN_LIST3_ADDR); /* "CAN List Register 3" */
SFR_NOABS (CAN_LIST4, CAN_LISTm_t, CAN_LIST4_ADDR); /* "CAN List Register 4" */
SFR_NOABS (CAN_LIST5, CAN_LISTm_t, CAN_LIST5_ADDR); /* "CAN List Register 5" */
SFR_NOABS (CAN_LIST6, CAN_LISTm_t, CAN_LIST6_ADDR); /* "CAN List Register 6" */
SFR_NOABS (CAN_LIST7, CAN_LISTm_t, CAN_LIST7_ADDR); /* "CAN List Register 7" */
SFR_NOABS (CAN_MCR, CAN_MCR_t, CAN_MCR_ADDR);     /* "CAN Module Control Register" */
SFR_NOABS (CAN_MITR, CAN_MITR_t, CAN_MITR_ADDR);  /* "CAN Module Interrupt Trigger Register" */
SFR_NOABS (CAN_MOAMR0, CAN_MOAMRm_t, CAN_MOAMR0_ADDR); /* "CAN Message Object 0 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR1, CAN_MOAMRm_t, CAN_MOAMR1_ADDR); /* "CAN Message Object 1 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR10, CAN_MOAMRm_t, CAN_MOAMR10_ADDR); /* "CAN Message Object 10 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR11, CAN_MOAMRm_t, CAN_MOAMR11_ADDR); /* "CAN Message Object 11 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR12, CAN_MOAMRm_t, CAN_MOAMR12_ADDR); /* "CAN Message Object 12 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR13, CAN_MOAMRm_t, CAN_MOAMR13_ADDR); /* "CAN Message Object 13 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR14, CAN_MOAMRm_t, CAN_MOAMR14_ADDR); /* "CAN Message Object 14 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR15, CAN_MOAMRm_t, CAN_MOAMR15_ADDR); /* "CAN Message Object 15 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR16, CAN_MOAMRm_t, CAN_MOAMR16_ADDR); /* "CAN Message Object 16 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR17, CAN_MOAMRm_t, CAN_MOAMR17_ADDR); /* "CAN Message Object 17 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR18, CAN_MOAMRm_t, CAN_MOAMR18_ADDR); /* "CAN Message Object 18 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR19, CAN_MOAMRm_t, CAN_MOAMR19_ADDR); /* "CAN Message Object 19 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR2, CAN_MOAMRm_t, CAN_MOAMR2_ADDR); /* "CAN Message Object 2 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR20, CAN_MOAMRm_t, CAN_MOAMR20_ADDR); /* "CAN Message Object 20 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR21, CAN_MOAMRm_t, CAN_MOAMR21_ADDR); /* "CAN Message Object 21 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR22, CAN_MOAMRm_t, CAN_MOAMR22_ADDR); /* "CAN Message Object 22 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR23, CAN_MOAMRm_t, CAN_MOAMR23_ADDR); /* "CAN Message Object 23 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR24, CAN_MOAMRm_t, CAN_MOAMR24_ADDR); /* "CAN Message Object 24 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR25, CAN_MOAMRm_t, CAN_MOAMR25_ADDR); /* "CAN Message Object 25 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR26, CAN_MOAMRm_t, CAN_MOAMR26_ADDR); /* "CAN Message Object 26 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR27, CAN_MOAMRm_t, CAN_MOAMR27_ADDR); /* "CAN Message Object 27 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR28, CAN_MOAMRm_t, CAN_MOAMR28_ADDR); /* "CAN Message Object 28 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR29, CAN_MOAMRm_t, CAN_MOAMR29_ADDR); /* "CAN Message Object 29 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR3, CAN_MOAMRm_t, CAN_MOAMR3_ADDR); /* "CAN Message Object 3 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR30, CAN_MOAMRm_t, CAN_MOAMR30_ADDR); /* "CAN Message Object 30 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR31, CAN_MOAMRm_t, CAN_MOAMR31_ADDR); /* "CAN Message Object 31 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR32, CAN_MOAMRm_t, CAN_MOAMR32_ADDR); /* "CAN Message Object 32 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR33, CAN_MOAMRm_t, CAN_MOAMR33_ADDR); /* "CAN Message Object 33 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR34, CAN_MOAMRm_t, CAN_MOAMR34_ADDR); /* "CAN Message Object 34 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR35, CAN_MOAMRm_t, CAN_MOAMR35_ADDR); /* "CAN Message Object 35 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR36, CAN_MOAMRm_t, CAN_MOAMR36_ADDR); /* "CAN Message Object 36 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR37, CAN_MOAMRm_t, CAN_MOAMR37_ADDR); /* "CAN Message Object 37 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR38, CAN_MOAMRm_t, CAN_MOAMR38_ADDR); /* "CAN Message Object 38 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR39, CAN_MOAMRm_t, CAN_MOAMR39_ADDR); /* "CAN Message Object 39 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR4, CAN_MOAMRm_t, CAN_MOAMR4_ADDR); /* "CAN Message Object 4 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR40, CAN_MOAMRm_t, CAN_MOAMR40_ADDR); /* "CAN Message Object 40 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR41, CAN_MOAMRm_t, CAN_MOAMR41_ADDR); /* "CAN Message Object 41 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR42, CAN_MOAMRm_t, CAN_MOAMR42_ADDR); /* "CAN Message Object 42 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR43, CAN_MOAMRm_t, CAN_MOAMR43_ADDR); /* "CAN Message Object 43 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR44, CAN_MOAMRm_t, CAN_MOAMR44_ADDR); /* "CAN Message Object 44 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR45, CAN_MOAMRm_t, CAN_MOAMR45_ADDR); /* "CAN Message Object 45 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR46, CAN_MOAMRm_t, CAN_MOAMR46_ADDR); /* "CAN Message Object 46 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR47, CAN_MOAMRm_t, CAN_MOAMR47_ADDR); /* "CAN Message Object 47 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR48, CAN_MOAMRm_t, CAN_MOAMR48_ADDR); /* "CAN Message Object 48 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR49, CAN_MOAMRm_t, CAN_MOAMR49_ADDR); /* "CAN Message Object 49 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR5, CAN_MOAMRm_t, CAN_MOAMR5_ADDR); /* "CAN Message Object 5 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR50, CAN_MOAMRm_t, CAN_MOAMR50_ADDR); /* "CAN Message Object 50 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR51, CAN_MOAMRm_t, CAN_MOAMR51_ADDR); /* "CAN Message Object 51 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR52, CAN_MOAMRm_t, CAN_MOAMR52_ADDR); /* "CAN Message Object 52 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR53, CAN_MOAMRm_t, CAN_MOAMR53_ADDR); /* "CAN Message Object 53 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR54, CAN_MOAMRm_t, CAN_MOAMR54_ADDR); /* "CAN Message Object 54 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR55, CAN_MOAMRm_t, CAN_MOAMR55_ADDR); /* "CAN Message Object 55 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR56, CAN_MOAMRm_t, CAN_MOAMR56_ADDR); /* "CAN Message Object 56 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR57, CAN_MOAMRm_t, CAN_MOAMR57_ADDR); /* "CAN Message Object 57 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR58, CAN_MOAMRm_t, CAN_MOAMR58_ADDR); /* "CAN Message Object 58 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR59, CAN_MOAMRm_t, CAN_MOAMR59_ADDR); /* "CAN Message Object 59 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR6, CAN_MOAMRm_t, CAN_MOAMR6_ADDR); /* "CAN Message Object 6 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR60, CAN_MOAMRm_t, CAN_MOAMR60_ADDR); /* "CAN Message Object 60 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR61, CAN_MOAMRm_t, CAN_MOAMR61_ADDR); /* "CAN Message Object 61 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR62, CAN_MOAMRm_t, CAN_MOAMR62_ADDR); /* "CAN Message Object 62 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR63, CAN_MOAMRm_t, CAN_MOAMR63_ADDR); /* "CAN Message Object 63 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR64, CAN_MOAMRm_t, CAN_MOAMR64_ADDR); /* "CAN Message Object 64 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR65, CAN_MOAMRm_t, CAN_MOAMR65_ADDR); /* "CAN Message Object 65 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR66, CAN_MOAMRm_t, CAN_MOAMR66_ADDR); /* "CAN Message Object 66 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR67, CAN_MOAMRm_t, CAN_MOAMR67_ADDR); /* "CAN Message Object 67 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR68, CAN_MOAMRm_t, CAN_MOAMR68_ADDR); /* "CAN Message Object 68 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR69, CAN_MOAMRm_t, CAN_MOAMR69_ADDR); /* "CAN Message Object 69 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR7, CAN_MOAMRm_t, CAN_MOAMR7_ADDR); /* "CAN Message Object 7 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR70, CAN_MOAMRm_t, CAN_MOAMR70_ADDR); /* "CAN Message Object 70 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR71, CAN_MOAMRm_t, CAN_MOAMR71_ADDR); /* "CAN Message Object 71 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR72, CAN_MOAMRm_t, CAN_MOAMR72_ADDR); /* "CAN Message Object 72 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR73, CAN_MOAMRm_t, CAN_MOAMR73_ADDR); /* "CAN Message Object 73 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR74, CAN_MOAMRm_t, CAN_MOAMR74_ADDR); /* "CAN Message Object 74 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR75, CAN_MOAMRm_t, CAN_MOAMR75_ADDR); /* "CAN Message Object 75 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR76, CAN_MOAMRm_t, CAN_MOAMR76_ADDR); /* "CAN Message Object 76 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR77, CAN_MOAMRm_t, CAN_MOAMR77_ADDR); /* "CAN Message Object 77 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR78, CAN_MOAMRm_t, CAN_MOAMR78_ADDR); /* "CAN Message Object 78 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR79, CAN_MOAMRm_t, CAN_MOAMR79_ADDR); /* "CAN Message Object 79 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR8, CAN_MOAMRm_t, CAN_MOAMR8_ADDR); /* "CAN Message Object 8 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR80, CAN_MOAMRm_t, CAN_MOAMR80_ADDR); /* "CAN Message Object 80 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR81, CAN_MOAMRm_t, CAN_MOAMR81_ADDR); /* "CAN Message Object 81 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR82, CAN_MOAMRm_t, CAN_MOAMR82_ADDR); /* "CAN Message Object 82 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR83, CAN_MOAMRm_t, CAN_MOAMR83_ADDR); /* "CAN Message Object 83 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR84, CAN_MOAMRm_t, CAN_MOAMR84_ADDR); /* "CAN Message Object 84 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR85, CAN_MOAMRm_t, CAN_MOAMR85_ADDR); /* "CAN Message Object 85 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR86, CAN_MOAMRm_t, CAN_MOAMR86_ADDR); /* "CAN Message Object 86 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR87, CAN_MOAMRm_t, CAN_MOAMR87_ADDR); /* "CAN Message Object 87 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR88, CAN_MOAMRm_t, CAN_MOAMR88_ADDR); /* "CAN Message Object 88 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR89, CAN_MOAMRm_t, CAN_MOAMR89_ADDR); /* "CAN Message Object 89 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR9, CAN_MOAMRm_t, CAN_MOAMR9_ADDR); /* "CAN Message Object 9 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR90, CAN_MOAMRm_t, CAN_MOAMR90_ADDR); /* "CAN Message Object 90 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR91, CAN_MOAMRm_t, CAN_MOAMR91_ADDR); /* "CAN Message Object 91 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR92, CAN_MOAMRm_t, CAN_MOAMR92_ADDR); /* "CAN Message Object 92 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR93, CAN_MOAMRm_t, CAN_MOAMR93_ADDR); /* "CAN Message Object 93 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR94, CAN_MOAMRm_t, CAN_MOAMR94_ADDR); /* "CAN Message Object 94 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAMR95, CAN_MOAMRm_t, CAN_MOAMR95_ADDR); /* "CAN Message Object 95 Acceptance Mask Register" */
SFR_NOABS (CAN_MOAR0, CAN_MOARm_t, CAN_MOAR0_ADDR); /* "CAN Message Object 0 Arbitration Register" */
SFR_NOABS (CAN_MOAR1, CAN_MOARm_t, CAN_MOAR1_ADDR); /* "CAN Message Object 1 Arbitration Register" */
SFR_NOABS (CAN_MOAR10, CAN_MOARm_t, CAN_MOAR10_ADDR); /* "CAN Message Object 10 Arbitration Register" */
SFR_NOABS (CAN_MOAR11, CAN_MOARm_t, CAN_MOAR11_ADDR); /* "CAN Message Object 11 Arbitration Register" */
SFR_NOABS (CAN_MOAR12, CAN_MOARm_t, CAN_MOAR12_ADDR); /* "CAN Message Object 12 Arbitration Register" */
SFR_NOABS (CAN_MOAR13, CAN_MOARm_t, CAN_MOAR13_ADDR); /* "CAN Message Object 13 Arbitration Register" */
SFR_NOABS (CAN_MOAR14, CAN_MOARm_t, CAN_MOAR14_ADDR); /* "CAN Message Object 14 Arbitration Register" */
SFR_NOABS (CAN_MOAR15, CAN_MOARm_t, CAN_MOAR15_ADDR); /* "CAN Message Object 15 Arbitration Register" */
SFR_NOABS (CAN_MOAR16, CAN_MOARm_t, CAN_MOAR16_ADDR); /* "CAN Message Object 16 Arbitration Register" */
SFR_NOABS (CAN_MOAR17, CAN_MOARm_t, CAN_MOAR17_ADDR); /* "CAN Message Object 17 Arbitration Register" */
SFR_NOABS (CAN_MOAR18, CAN_MOARm_t, CAN_MOAR18_ADDR); /* "CAN Message Object 18 Arbitration Register" */
SFR_NOABS (CAN_MOAR19, CAN_MOARm_t, CAN_MOAR19_ADDR); /* "CAN Message Object 19 Arbitration Register" */
SFR_NOABS (CAN_MOAR2, CAN_MOARm_t, CAN_MOAR2_ADDR); /* "CAN Message Object 2 Arbitration Register" */
SFR_NOABS (CAN_MOAR20, CAN_MOARm_t, CAN_MOAR20_ADDR); /* "CAN Message Object 20 Arbitration Register" */
SFR_NOABS (CAN_MOAR21, CAN_MOARm_t, CAN_MOAR21_ADDR); /* "CAN Message Object 21 Arbitration Register" */
SFR_NOABS (CAN_MOAR22, CAN_MOARm_t, CAN_MOAR22_ADDR); /* "CAN Message Object 22 Arbitration Register" */
SFR_NOABS (CAN_MOAR23, CAN_MOARm_t, CAN_MOAR23_ADDR); /* "CAN Message Object 23 Arbitration Register" */
SFR_NOABS (CAN_MOAR24, CAN_MOARm_t, CAN_MOAR24_ADDR); /* "CAN Message Object 24 Arbitration Register" */
SFR_NOABS (CAN_MOAR25, CAN_MOARm_t, CAN_MOAR25_ADDR); /* "CAN Message Object 25 Arbitration Register" */
SFR_NOABS (CAN_MOAR26, CAN_MOARm_t, CAN_MOAR26_ADDR); /* "CAN Message Object 26 Arbitration Register" */
SFR_NOABS (CAN_MOAR27, CAN_MOARm_t, CAN_MOAR27_ADDR); /* "CAN Message Object 27 Arbitration Register" */
SFR_NOABS (CAN_MOAR28, CAN_MOARm_t, CAN_MOAR28_ADDR); /* "CAN Message Object 28 Arbitration Register" */
SFR_NOABS (CAN_MOAR29, CAN_MOARm_t, CAN_MOAR29_ADDR); /* "CAN Message Object 29 Arbitration Register" */
SFR_NOABS (CAN_MOAR3, CAN_MOARm_t, CAN_MOAR3_ADDR); /* "CAN Message Object 3 Arbitration Register" */
SFR_NOABS (CAN_MOAR30, CAN_MOARm_t, CAN_MOAR30_ADDR); /* "CAN Message Object 30 Arbitration Register" */
SFR_NOABS (CAN_MOAR31, CAN_MOARm_t, CAN_MOAR31_ADDR); /* "CAN Message Object 31 Arbitration Register" */
SFR_NOABS (CAN_MOAR32, CAN_MOARm_t, CAN_MOAR32_ADDR); /* "CAN Message Object 32 Arbitration Register" */
SFR_NOABS (CAN_MOAR33, CAN_MOARm_t, CAN_MOAR33_ADDR); /* "CAN Message Object 33 Arbitration Register" */
SFR_NOABS (CAN_MOAR34, CAN_MOARm_t, CAN_MOAR34_ADDR); /* "CAN Message Object 34 Arbitration Register" */
SFR_NOABS (CAN_MOAR35, CAN_MOARm_t, CAN_MOAR35_ADDR); /* "CAN Message Object 35 Arbitration Register" */
SFR_NOABS (CAN_MOAR36, CAN_MOARm_t, CAN_MOAR36_ADDR); /* "CAN Message Object 36 Arbitration Register" */
SFR_NOABS (CAN_MOAR37, CAN_MOARm_t, CAN_MOAR37_ADDR); /* "CAN Message Object 37 Arbitration Register" */
SFR_NOABS (CAN_MOAR38, CAN_MOARm_t, CAN_MOAR38_ADDR); /* "CAN Message Object 38 Arbitration Register" */
SFR_NOABS (CAN_MOAR39, CAN_MOARm_t, CAN_MOAR39_ADDR); /* "CAN Message Object 39 Arbitration Register" */
SFR_NOABS (CAN_MOAR4, CAN_MOARm_t, CAN_MOAR4_ADDR); /* "CAN Message Object 4 Arbitration Register" */
SFR_NOABS (CAN_MOAR40, CAN_MOARm_t, CAN_MOAR40_ADDR); /* "CAN Message Object 40 Arbitration Register" */
SFR_NOABS (CAN_MOAR41, CAN_MOARm_t, CAN_MOAR41_ADDR); /* "CAN Message Object 41 Arbitration Register" */
SFR_NOABS (CAN_MOAR42, CAN_MOARm_t, CAN_MOAR42_ADDR); /* "CAN Message Object 42 Arbitration Register" */
SFR_NOABS (CAN_MOAR43, CAN_MOARm_t, CAN_MOAR43_ADDR); /* "CAN Message Object 43 Arbitration Register" */
SFR_NOABS (CAN_MOAR44, CAN_MOARm_t, CAN_MOAR44_ADDR); /* "CAN Message Object 44 Arbitration Register" */
SFR_NOABS (CAN_MOAR45, CAN_MOARm_t, CAN_MOAR45_ADDR); /* "CAN Message Object 45 Arbitration Register" */
SFR_NOABS (CAN_MOAR46, CAN_MOARm_t, CAN_MOAR46_ADDR); /* "CAN Message Object 46 Arbitration Register" */
SFR_NOABS (CAN_MOAR47, CAN_MOARm_t, CAN_MOAR47_ADDR); /* "CAN Message Object 47 Arbitration Register" */
SFR_NOABS (CAN_MOAR48, CAN_MOARm_t, CAN_MOAR48_ADDR); /* "CAN Message Object 48 Arbitration Register" */
SFR_NOABS (CAN_MOAR49, CAN_MOARm_t, CAN_MOAR49_ADDR); /* "CAN Message Object 49 Arbitration Register" */
SFR_NOABS (CAN_MOAR5, CAN_MOARm_t, CAN_MOAR5_ADDR); /* "CAN Message Object 5 Arbitration Register" */
SFR_NOABS (CAN_MOAR50, CAN_MOARm_t, CAN_MOAR50_ADDR); /* "CAN Message Object 50 Arbitration Register" */
SFR_NOABS (CAN_MOAR51, CAN_MOARm_t, CAN_MOAR51_ADDR); /* "CAN Message Object 51 Arbitration Register" */
SFR_NOABS (CAN_MOAR52, CAN_MOARm_t, CAN_MOAR52_ADDR); /* "CAN Message Object 52 Arbitration Register" */
SFR_NOABS (CAN_MOAR53, CAN_MOARm_t, CAN_MOAR53_ADDR); /* "CAN Message Object 53 Arbitration Register" */
SFR_NOABS (CAN_MOAR54, CAN_MOARm_t, CAN_MOAR54_ADDR); /* "CAN Message Object 54 Arbitration Register" */
SFR_NOABS (CAN_MOAR55, CAN_MOARm_t, CAN_MOAR55_ADDR); /* "CAN Message Object 55 Arbitration Register" */
SFR_NOABS (CAN_MOAR56, CAN_MOARm_t, CAN_MOAR56_ADDR); /* "CAN Message Object 56 Arbitration Register" */
SFR_NOABS (CAN_MOAR57, CAN_MOARm_t, CAN_MOAR57_ADDR); /* "CAN Message Object 57 Arbitration Register" */
SFR_NOABS (CAN_MOAR58, CAN_MOARm_t, CAN_MOAR58_ADDR); /* "CAN Message Object 58 Arbitration Register" */
SFR_NOABS (CAN_MOAR59, CAN_MOARm_t, CAN_MOAR59_ADDR); /* "CAN Message Object 59 Arbitration Register" */
SFR_NOABS (CAN_MOAR6, CAN_MOARm_t, CAN_MOAR6_ADDR); /* "CAN Message Object 6 Arbitration Register" */
SFR_NOABS (CAN_MOAR60, CAN_MOARm_t, CAN_MOAR60_ADDR); /* "CAN Message Object 60 Arbitration Register" */
SFR_NOABS (CAN_MOAR61, CAN_MOARm_t, CAN_MOAR61_ADDR); /* "CAN Message Object 61 Arbitration Register" */
SFR_NOABS (CAN_MOAR62, CAN_MOARm_t, CAN_MOAR62_ADDR); /* "CAN Message Object 62 Arbitration Register" */
SFR_NOABS (CAN_MOAR63, CAN_MOARm_t, CAN_MOAR63_ADDR); /* "CAN Message Object 63 Arbitration Register" */
SFR_NOABS (CAN_MOAR64, CAN_MOARm_t, CAN_MOAR64_ADDR); /* "CAN Message Object 64 Arbitration Register" */
SFR_NOABS (CAN_MOAR65, CAN_MOARm_t, CAN_MOAR65_ADDR); /* "CAN Message Object 65 Arbitration Register" */
SFR_NOABS (CAN_MOAR66, CAN_MOARm_t, CAN_MOAR66_ADDR); /* "CAN Message Object 66 Arbitration Register" */
SFR_NOABS (CAN_MOAR67, CAN_MOARm_t, CAN_MOAR67_ADDR); /* "CAN Message Object 67 Arbitration Register" */
SFR_NOABS (CAN_MOAR68, CAN_MOARm_t, CAN_MOAR68_ADDR); /* "CAN Message Object 68 Arbitration Register" */
SFR_NOABS (CAN_MOAR69, CAN_MOARm_t, CAN_MOAR69_ADDR); /* "CAN Message Object 69 Arbitration Register" */
SFR_NOABS (CAN_MOAR7, CAN_MOARm_t, CAN_MOAR7_ADDR); /* "CAN Message Object 7 Arbitration Register" */
SFR_NOABS (CAN_MOAR70, CAN_MOARm_t, CAN_MOAR70_ADDR); /* "CAN Message Object 70 Arbitration Register" */
SFR_NOABS (CAN_MOAR71, CAN_MOARm_t, CAN_MOAR71_ADDR); /* "CAN Message Object 71 Arbitration Register" */
SFR_NOABS (CAN_MOAR72, CAN_MOARm_t, CAN_MOAR72_ADDR); /* "CAN Message Object 72 Arbitration Register" */
SFR_NOABS (CAN_MOAR73, CAN_MOARm_t, CAN_MOAR73_ADDR); /* "CAN Message Object 73 Arbitration Register" */
SFR_NOABS (CAN_MOAR74, CAN_MOARm_t, CAN_MOAR74_ADDR); /* "CAN Message Object 74 Arbitration Register" */
SFR_NOABS (CAN_MOAR75, CAN_MOARm_t, CAN_MOAR75_ADDR); /* "CAN Message Object 75 Arbitration Register" */
SFR_NOABS (CAN_MOAR76, CAN_MOARm_t, CAN_MOAR76_ADDR); /* "CAN Message Object 76 Arbitration Register" */
SFR_NOABS (CAN_MOAR77, CAN_MOARm_t, CAN_MOAR77_ADDR); /* "CAN Message Object 77 Arbitration Register" */
SFR_NOABS (CAN_MOAR78, CAN_MOARm_t, CAN_MOAR78_ADDR); /* "CAN Message Object 78 Arbitration Register" */
SFR_NOABS (CAN_MOAR79, CAN_MOARm_t, CAN_MOAR79_ADDR); /* "CAN Message Object 79 Arbitration Register" */
SFR_NOABS (CAN_MOAR8, CAN_MOARm_t, CAN_MOAR8_ADDR); /* "CAN Message Object 8 Arbitration Register" */
SFR_NOABS (CAN_MOAR80, CAN_MOARm_t, CAN_MOAR80_ADDR); /* "CAN Message Object 80 Arbitration Register" */
SFR_NOABS (CAN_MOAR81, CAN_MOARm_t, CAN_MOAR81_ADDR); /* "CAN Message Object 81 Arbitration Register" */
SFR_NOABS (CAN_MOAR82, CAN_MOARm_t, CAN_MOAR82_ADDR); /* "CAN Message Object 82 Arbitration Register" */
SFR_NOABS (CAN_MOAR83, CAN_MOARm_t, CAN_MOAR83_ADDR); /* "CAN Message Object 83 Arbitration Register" */
SFR_NOABS (CAN_MOAR84, CAN_MOARm_t, CAN_MOAR84_ADDR); /* "CAN Message Object 84 Arbitration Register" */
SFR_NOABS (CAN_MOAR85, CAN_MOARm_t, CAN_MOAR85_ADDR); /* "CAN Message Object 85 Arbitration Register" */
SFR_NOABS (CAN_MOAR86, CAN_MOARm_t, CAN_MOAR86_ADDR); /* "CAN Message Object 86 Arbitration Register" */
SFR_NOABS (CAN_MOAR87, CAN_MOARm_t, CAN_MOAR87_ADDR); /* "CAN Message Object 87 Arbitration Register" */
SFR_NOABS (CAN_MOAR88, CAN_MOARm_t, CAN_MOAR88_ADDR); /* "CAN Message Object 88 Arbitration Register" */
SFR_NOABS (CAN_MOAR89, CAN_MOARm_t, CAN_MOAR89_ADDR); /* "CAN Message Object 89 Arbitration Register" */
SFR_NOABS (CAN_MOAR9, CAN_MOARm_t, CAN_MOAR9_ADDR); /* "CAN Message Object 9 Arbitration Register" */
SFR_NOABS (CAN_MOAR90, CAN_MOARm_t, CAN_MOAR90_ADDR); /* "CAN Message Object 90 Arbitration Register" */
SFR_NOABS (CAN_MOAR91, CAN_MOARm_t, CAN_MOAR91_ADDR); /* "CAN Message Object 91 Arbitration Register" */
SFR_NOABS (CAN_MOAR92, CAN_MOARm_t, CAN_MOAR92_ADDR); /* "CAN Message Object 92 Arbitration Register" */
SFR_NOABS (CAN_MOAR93, CAN_MOARm_t, CAN_MOAR93_ADDR); /* "CAN Message Object 93 Arbitration Register" */
SFR_NOABS (CAN_MOAR94, CAN_MOARm_t, CAN_MOAR94_ADDR); /* "CAN Message Object 94 Arbitration Register" */
SFR_NOABS (CAN_MOAR95, CAN_MOARm_t, CAN_MOAR95_ADDR); /* "CAN Message Object 95 Arbitration Register" */
SFR_NOABS (CAN_MODATAH0, CAN_MODATAHm_t, CAN_MODATAH0_ADDR); /* "CAN Message Object 0 Data Register High" */
SFR_NOABS (CAN_MODATAH1, CAN_MODATAHm_t, CAN_MODATAH1_ADDR); /* "CAN Message Object 1 Data Register High" */
SFR_NOABS (CAN_MODATAH10, CAN_MODATAHm_t, CAN_MODATAH10_ADDR); /* "CAN Message Object 10 Data Register High" */
SFR_NOABS (CAN_MODATAH11, CAN_MODATAHm_t, CAN_MODATAH11_ADDR); /* "CAN Message Object 11 Data Register High" */
SFR_NOABS (CAN_MODATAH12, CAN_MODATAHm_t, CAN_MODATAH12_ADDR); /* "CAN Message Object 12 Data Register High" */
SFR_NOABS (CAN_MODATAH13, CAN_MODATAHm_t, CAN_MODATAH13_ADDR); /* "CAN Message Object 13 Data Register High" */
SFR_NOABS (CAN_MODATAH14, CAN_MODATAHm_t, CAN_MODATAH14_ADDR); /* "CAN Message Object 14 Data Register High" */
SFR_NOABS (CAN_MODATAH15, CAN_MODATAHm_t, CAN_MODATAH15_ADDR); /* "CAN Message Object 15 Data Register High" */
SFR_NOABS (CAN_MODATAH16, CAN_MODATAHm_t, CAN_MODATAH16_ADDR); /* "CAN Message Object 16 Data Register High" */
SFR_NOABS (CAN_MODATAH17, CAN_MODATAHm_t, CAN_MODATAH17_ADDR); /* "CAN Message Object 17 Data Register High" */
SFR_NOABS (CAN_MODATAH18, CAN_MODATAHm_t, CAN_MODATAH18_ADDR); /* "CAN Message Object 18 Data Register High" */
SFR_NOABS (CAN_MODATAH19, CAN_MODATAHm_t, CAN_MODATAH19_ADDR); /* "CAN Message Object 19 Data Register High" */
SFR_NOABS (CAN_MODATAH2, CAN_MODATAHm_t, CAN_MODATAH2_ADDR); /* "CAN Message Object 2 Data Register High" */
SFR_NOABS (CAN_MODATAH20, CAN_MODATAHm_t, CAN_MODATAH20_ADDR); /* "CAN Message Object 20 Data Register High" */
SFR_NOABS (CAN_MODATAH21, CAN_MODATAHm_t, CAN_MODATAH21_ADDR); /* "CAN Message Object 21 Data Register High" */
SFR_NOABS (CAN_MODATAH22, CAN_MODATAHm_t, CAN_MODATAH22_ADDR); /* "CAN Message Object 22 Data Register High" */
SFR_NOABS (CAN_MODATAH23, CAN_MODATAHm_t, CAN_MODATAH23_ADDR); /* "CAN Message Object 23 Data Register High" */
SFR_NOABS (CAN_MODATAH24, CAN_MODATAHm_t, CAN_MODATAH24_ADDR); /* "CAN Message Object 24 Data Register High" */
SFR_NOABS (CAN_MODATAH25, CAN_MODATAHm_t, CAN_MODATAH25_ADDR); /* "CAN Message Object 25 Data Register High" */
SFR_NOABS (CAN_MODATAH26, CAN_MODATAHm_t, CAN_MODATAH26_ADDR); /* "CAN Message Object 26 Data Register High" */
SFR_NOABS (CAN_MODATAH27, CAN_MODATAHm_t, CAN_MODATAH27_ADDR); /* "CAN Message Object 27 Data Register High" */
SFR_NOABS (CAN_MODATAH28, CAN_MODATAHm_t, CAN_MODATAH28_ADDR); /* "CAN Message Object 28 Data Register High" */
SFR_NOABS (CAN_MODATAH29, CAN_MODATAHm_t, CAN_MODATAH29_ADDR); /* "CAN Message Object 29 Data Register High" */
SFR_NOABS (CAN_MODATAH3, CAN_MODATAHm_t, CAN_MODATAH3_ADDR); /* "CAN Message Object 3 Data Register High" */
SFR_NOABS (CAN_MODATAH30, CAN_MODATAHm_t, CAN_MODATAH30_ADDR); /* "CAN Message Object 30 Data Register High" */
SFR_NOABS (CAN_MODATAH31, CAN_MODATAHm_t, CAN_MODATAH31_ADDR); /* "CAN Message Object 31 Data Register High" */
SFR_NOABS (CAN_MODATAH32, CAN_MODATAHm_t, CAN_MODATAH32_ADDR); /* "CAN Message Object 32 Data Register High" */
SFR_NOABS (CAN_MODATAH33, CAN_MODATAHm_t, CAN_MODATAH33_ADDR); /* "CAN Message Object 33 Data Register High" */
SFR_NOABS (CAN_MODATAH34, CAN_MODATAHm_t, CAN_MODATAH34_ADDR); /* "CAN Message Object 34 Data Register High" */
SFR_NOABS (CAN_MODATAH35, CAN_MODATAHm_t, CAN_MODATAH35_ADDR); /* "CAN Message Object 35 Data Register High" */
SFR_NOABS (CAN_MODATAH36, CAN_MODATAHm_t, CAN_MODATAH36_ADDR); /* "CAN Message Object 36 Data Register High" */
SFR_NOABS (CAN_MODATAH37, CAN_MODATAHm_t, CAN_MODATAH37_ADDR); /* "CAN Message Object 37 Data Register High" */
SFR_NOABS (CAN_MODATAH38, CAN_MODATAHm_t, CAN_MODATAH38_ADDR); /* "CAN Message Object 38 Data Register High" */
SFR_NOABS (CAN_MODATAH39, CAN_MODATAHm_t, CAN_MODATAH39_ADDR); /* "CAN Message Object 39 Data Register High" */
SFR_NOABS (CAN_MODATAH4, CAN_MODATAHm_t, CAN_MODATAH4_ADDR); /* "CAN Message Object 4 Data Register High" */
SFR_NOABS (CAN_MODATAH40, CAN_MODATAHm_t, CAN_MODATAH40_ADDR); /* "CAN Message Object 40 Data Register High" */
SFR_NOABS (CAN_MODATAH41, CAN_MODATAHm_t, CAN_MODATAH41_ADDR); /* "CAN Message Object 41 Data Register High" */
SFR_NOABS (CAN_MODATAH42, CAN_MODATAHm_t, CAN_MODATAH42_ADDR); /* "CAN Message Object 42 Data Register High" */
SFR_NOABS (CAN_MODATAH43, CAN_MODATAHm_t, CAN_MODATAH43_ADDR); /* "CAN Message Object 43 Data Register High" */
SFR_NOABS (CAN_MODATAH44, CAN_MODATAHm_t, CAN_MODATAH44_ADDR); /* "CAN Message Object 44 Data Register High" */
SFR_NOABS (CAN_MODATAH45, CAN_MODATAHm_t, CAN_MODATAH45_ADDR); /* "CAN Message Object 45 Data Register High" */
SFR_NOABS (CAN_MODATAH46, CAN_MODATAHm_t, CAN_MODATAH46_ADDR); /* "CAN Message Object 46 Data Register High" */
SFR_NOABS (CAN_MODATAH47, CAN_MODATAHm_t, CAN_MODATAH47_ADDR); /* "CAN Message Object 47 Data Register High" */
SFR_NOABS (CAN_MODATAH48, CAN_MODATAHm_t, CAN_MODATAH48_ADDR); /* "CAN Message Object 48 Data Register High" */
SFR_NOABS (CAN_MODATAH49, CAN_MODATAHm_t, CAN_MODATAH49_ADDR); /* "CAN Message Object 49 Data Register High" */
SFR_NOABS (CAN_MODATAH5, CAN_MODATAHm_t, CAN_MODATAH5_ADDR); /* "CAN Message Object 5 Data Register High" */
SFR_NOABS (CAN_MODATAH50, CAN_MODATAHm_t, CAN_MODATAH50_ADDR); /* "CAN Message Object 50 Data Register High" */
SFR_NOABS (CAN_MODATAH51, CAN_MODATAHm_t, CAN_MODATAH51_ADDR); /* "CAN Message Object 51 Data Register High" */
SFR_NOABS (CAN_MODATAH52, CAN_MODATAHm_t, CAN_MODATAH52_ADDR); /* "CAN Message Object 52 Data Register High" */
SFR_NOABS (CAN_MODATAH53, CAN_MODATAHm_t, CAN_MODATAH53_ADDR); /* "CAN Message Object 53 Data Register High" */
SFR_NOABS (CAN_MODATAH54, CAN_MODATAHm_t, CAN_MODATAH54_ADDR); /* "CAN Message Object 54 Data Register High" */
SFR_NOABS (CAN_MODATAH55, CAN_MODATAHm_t, CAN_MODATAH55_ADDR); /* "CAN Message Object 55 Data Register High" */
SFR_NOABS (CAN_MODATAH56, CAN_MODATAHm_t, CAN_MODATAH56_ADDR); /* "CAN Message Object 56 Data Register High" */
SFR_NOABS (CAN_MODATAH57, CAN_MODATAHm_t, CAN_MODATAH57_ADDR); /* "CAN Message Object 57 Data Register High" */
SFR_NOABS (CAN_MODATAH58, CAN_MODATAHm_t, CAN_MODATAH58_ADDR); /* "CAN Message Object 58 Data Register High" */
SFR_NOABS (CAN_MODATAH59, CAN_MODATAHm_t, CAN_MODATAH59_ADDR); /* "CAN Message Object 59 Data Register High" */
SFR_NOABS (CAN_MODATAH6, CAN_MODATAHm_t, CAN_MODATAH6_ADDR); /* "CAN Message Object 6 Data Register High" */
SFR_NOABS (CAN_MODATAH60, CAN_MODATAHm_t, CAN_MODATAH60_ADDR); /* "CAN Message Object 60 Data Register High" */
SFR_NOABS (CAN_MODATAH61, CAN_MODATAHm_t, CAN_MODATAH61_ADDR); /* "CAN Message Object 61 Data Register High" */
SFR_NOABS (CAN_MODATAH62, CAN_MODATAHm_t, CAN_MODATAH62_ADDR); /* "CAN Message Object 62 Data Register High" */
SFR_NOABS (CAN_MODATAH63, CAN_MODATAHm_t, CAN_MODATAH63_ADDR); /* "CAN Message Object 63 Data Register High" */
SFR_NOABS (CAN_MODATAH64, CAN_MODATAHm_t, CAN_MODATAH64_ADDR); /* "CAN Message Object 64 Data Register High" */
SFR_NOABS (CAN_MODATAH65, CAN_MODATAHm_t, CAN_MODATAH65_ADDR); /* "CAN Message Object 65 Data Register High" */
SFR_NOABS (CAN_MODATAH66, CAN_MODATAHm_t, CAN_MODATAH66_ADDR); /* "CAN Message Object 66 Data Register High" */
SFR_NOABS (CAN_MODATAH67, CAN_MODATAHm_t, CAN_MODATAH67_ADDR); /* "CAN Message Object 67 Data Register High" */
SFR_NOABS (CAN_MODATAH68, CAN_MODATAHm_t, CAN_MODATAH68_ADDR); /* "CAN Message Object 68 Data Register High" */
SFR_NOABS (CAN_MODATAH69, CAN_MODATAHm_t, CAN_MODATAH69_ADDR); /* "CAN Message Object 69 Data Register High" */
SFR_NOABS (CAN_MODATAH7, CAN_MODATAHm_t, CAN_MODATAH7_ADDR); /* "CAN Message Object 7 Data Register High" */
SFR_NOABS (CAN_MODATAH70, CAN_MODATAHm_t, CAN_MODATAH70_ADDR); /* "CAN Message Object 70 Data Register High" */
SFR_NOABS (CAN_MODATAH71, CAN_MODATAHm_t, CAN_MODATAH71_ADDR); /* "CAN Message Object 71 Data Register High" */
SFR_NOABS (CAN_MODATAH72, CAN_MODATAHm_t, CAN_MODATAH72_ADDR); /* "CAN Message Object 72 Data Register High" */
SFR_NOABS (CAN_MODATAH73, CAN_MODATAHm_t, CAN_MODATAH73_ADDR); /* "CAN Message Object 73 Data Register High" */
SFR_NOABS (CAN_MODATAH74, CAN_MODATAHm_t, CAN_MODATAH74_ADDR); /* "CAN Message Object 74 Data Register High" */
SFR_NOABS (CAN_MODATAH75, CAN_MODATAHm_t, CAN_MODATAH75_ADDR); /* "CAN Message Object 75 Data Register High" */
SFR_NOABS (CAN_MODATAH76, CAN_MODATAHm_t, CAN_MODATAH76_ADDR); /* "CAN Message Object 76 Data Register High" */
SFR_NOABS (CAN_MODATAH77, CAN_MODATAHm_t, CAN_MODATAH77_ADDR); /* "CAN Message Object 77 Data Register High" */
SFR_NOABS (CAN_MODATAH78, CAN_MODATAHm_t, CAN_MODATAH78_ADDR); /* "CAN Message Object 78 Data Register High" */
SFR_NOABS (CAN_MODATAH79, CAN_MODATAHm_t, CAN_MODATAH79_ADDR); /* "CAN Message Object 79 Data Register High" */
SFR_NOABS (CAN_MODATAH8, CAN_MODATAHm_t, CAN_MODATAH8_ADDR); /* "CAN Message Object 8 Data Register High" */
SFR_NOABS (CAN_MODATAH80, CAN_MODATAHm_t, CAN_MODATAH80_ADDR); /* "CAN Message Object 80 Data Register High" */
SFR_NOABS (CAN_MODATAH81, CAN_MODATAHm_t, CAN_MODATAH81_ADDR); /* "CAN Message Object 81 Data Register High" */
SFR_NOABS (CAN_MODATAH82, CAN_MODATAHm_t, CAN_MODATAH82_ADDR); /* "CAN Message Object 82 Data Register High" */
SFR_NOABS (CAN_MODATAH83, CAN_MODATAHm_t, CAN_MODATAH83_ADDR); /* "CAN Message Object 83 Data Register High" */
SFR_NOABS (CAN_MODATAH84, CAN_MODATAHm_t, CAN_MODATAH84_ADDR); /* "CAN Message Object 84 Data Register High" */
SFR_NOABS (CAN_MODATAH85, CAN_MODATAHm_t, CAN_MODATAH85_ADDR); /* "CAN Message Object 85 Data Register High" */
SFR_NOABS (CAN_MODATAH86, CAN_MODATAHm_t, CAN_MODATAH86_ADDR); /* "CAN Message Object 86 Data Register High" */
SFR_NOABS (CAN_MODATAH87, CAN_MODATAHm_t, CAN_MODATAH87_ADDR); /* "CAN Message Object 87 Data Register High" */
SFR_NOABS (CAN_MODATAH88, CAN_MODATAHm_t, CAN_MODATAH88_ADDR); /* "CAN Message Object 88 Data Register High" */
SFR_NOABS (CAN_MODATAH89, CAN_MODATAHm_t, CAN_MODATAH89_ADDR); /* "CAN Message Object 89 Data Register High" */
SFR_NOABS (CAN_MODATAH9, CAN_MODATAHm_t, CAN_MODATAH9_ADDR); /* "CAN Message Object 9 Data Register High" */
SFR_NOABS (CAN_MODATAH90, CAN_MODATAHm_t, CAN_MODATAH90_ADDR); /* "CAN Message Object 90 Data Register High" */
SFR_NOABS (CAN_MODATAH91, CAN_MODATAHm_t, CAN_MODATAH91_ADDR); /* "CAN Message Object 91 Data Register High" */
SFR_NOABS (CAN_MODATAH92, CAN_MODATAHm_t, CAN_MODATAH92_ADDR); /* "CAN Message Object 92 Data Register High" */
SFR_NOABS (CAN_MODATAH93, CAN_MODATAHm_t, CAN_MODATAH93_ADDR); /* "CAN Message Object 93 Data Register High" */
SFR_NOABS (CAN_MODATAH94, CAN_MODATAHm_t, CAN_MODATAH94_ADDR); /* "CAN Message Object 94 Data Register High" */
SFR_NOABS (CAN_MODATAH95, CAN_MODATAHm_t, CAN_MODATAH95_ADDR); /* "CAN Message Object 95 Data Register High" */
SFR_NOABS (CAN_MODATAL0, CAN_MODATALm_t, CAN_MODATAL0_ADDR); /* "CAN Message Object 0 Data Register Low" */
SFR_NOABS (CAN_MODATAL1, CAN_MODATALm_t, CAN_MODATAL1_ADDR); /* "CAN Message Object 1 Data Register Low" */
SFR_NOABS (CAN_MODATAL10, CAN_MODATALm_t, CAN_MODATAL10_ADDR); /* "CAN Message Object 10 Data Register Low" */
SFR_NOABS (CAN_MODATAL11, CAN_MODATALm_t, CAN_MODATAL11_ADDR); /* "CAN Message Object 11 Data Register Low" */
SFR_NOABS (CAN_MODATAL12, CAN_MODATALm_t, CAN_MODATAL12_ADDR); /* "CAN Message Object 12 Data Register Low" */
SFR_NOABS (CAN_MODATAL13, CAN_MODATALm_t, CAN_MODATAL13_ADDR); /* "CAN Message Object 13 Data Register Low" */
SFR_NOABS (CAN_MODATAL14, CAN_MODATALm_t, CAN_MODATAL14_ADDR); /* "CAN Message Object 14 Data Register Low" */
SFR_NOABS (CAN_MODATAL15, CAN_MODATALm_t, CAN_MODATAL15_ADDR); /* "CAN Message Object 15 Data Register Low" */
SFR_NOABS (CAN_MODATAL16, CAN_MODATALm_t, CAN_MODATAL16_ADDR); /* "CAN Message Object 16 Data Register Low" */
SFR_NOABS (CAN_MODATAL17, CAN_MODATALm_t, CAN_MODATAL17_ADDR); /* "CAN Message Object 17 Data Register Low" */
SFR_NOABS (CAN_MODATAL18, CAN_MODATALm_t, CAN_MODATAL18_ADDR); /* "CAN Message Object 18 Data Register Low" */
SFR_NOABS (CAN_MODATAL19, CAN_MODATALm_t, CAN_MODATAL19_ADDR); /* "CAN Message Object 19 Data Register Low" */
SFR_NOABS (CAN_MODATAL2, CAN_MODATALm_t, CAN_MODATAL2_ADDR); /* "CAN Message Object 2 Data Register Low" */
SFR_NOABS (CAN_MODATAL20, CAN_MODATALm_t, CAN_MODATAL20_ADDR); /* "CAN Message Object 20 Data Register Low" */
SFR_NOABS (CAN_MODATAL21, CAN_MODATALm_t, CAN_MODATAL21_ADDR); /* "CAN Message Object 21 Data Register Low" */
SFR_NOABS (CAN_MODATAL22, CAN_MODATALm_t, CAN_MODATAL22_ADDR); /* "CAN Message Object 22 Data Register Low" */
SFR_NOABS (CAN_MODATAL23, CAN_MODATALm_t, CAN_MODATAL23_ADDR); /* "CAN Message Object 23 Data Register Low" */
SFR_NOABS (CAN_MODATAL24, CAN_MODATALm_t, CAN_MODATAL24_ADDR); /* "CAN Message Object 24 Data Register Low" */
SFR_NOABS (CAN_MODATAL25, CAN_MODATALm_t, CAN_MODATAL25_ADDR); /* "CAN Message Object 25 Data Register Low" */
SFR_NOABS (CAN_MODATAL26, CAN_MODATALm_t, CAN_MODATAL26_ADDR); /* "CAN Message Object 26 Data Register Low" */
SFR_NOABS (CAN_MODATAL27, CAN_MODATALm_t, CAN_MODATAL27_ADDR); /* "CAN Message Object 27 Data Register Low" */
SFR_NOABS (CAN_MODATAL28, CAN_MODATALm_t, CAN_MODATAL28_ADDR); /* "CAN Message Object 28 Data Register Low" */
SFR_NOABS (CAN_MODATAL29, CAN_MODATALm_t, CAN_MODATAL29_ADDR); /* "CAN Message Object 29 Data Register Low" */
SFR_NOABS (CAN_MODATAL3, CAN_MODATALm_t, CAN_MODATAL3_ADDR); /* "CAN Message Object 3 Data Register Low" */
SFR_NOABS (CAN_MODATAL30, CAN_MODATALm_t, CAN_MODATAL30_ADDR); /* "CAN Message Object 30 Data Register Low" */
SFR_NOABS (CAN_MODATAL31, CAN_MODATALm_t, CAN_MODATAL31_ADDR); /* "CAN Message Object 31 Data Register Low" */
SFR_NOABS (CAN_MODATAL32, CAN_MODATALm_t, CAN_MODATAL32_ADDR); /* "CAN Message Object 32 Data Register Low" */
SFR_NOABS (CAN_MODATAL33, CAN_MODATALm_t, CAN_MODATAL33_ADDR); /* "CAN Message Object 33 Data Register Low" */
SFR_NOABS (CAN_MODATAL34, CAN_MODATALm_t, CAN_MODATAL34_ADDR); /* "CAN Message Object 34 Data Register Low" */
SFR_NOABS (CAN_MODATAL35, CAN_MODATALm_t, CAN_MODATAL35_ADDR); /* "CAN Message Object 35 Data Register Low" */
SFR_NOABS (CAN_MODATAL36, CAN_MODATALm_t, CAN_MODATAL36_ADDR); /* "CAN Message Object 36 Data Register Low" */
SFR_NOABS (CAN_MODATAL37, CAN_MODATALm_t, CAN_MODATAL37_ADDR); /* "CAN Message Object 37 Data Register Low" */
SFR_NOABS (CAN_MODATAL38, CAN_MODATALm_t, CAN_MODATAL38_ADDR); /* "CAN Message Object 38 Data Register Low" */
SFR_NOABS (CAN_MODATAL39, CAN_MODATALm_t, CAN_MODATAL39_ADDR); /* "CAN Message Object 39 Data Register Low" */
SFR_NOABS (CAN_MODATAL4, CAN_MODATALm_t, CAN_MODATAL4_ADDR); /* "CAN Message Object 4 Data Register Low" */
SFR_NOABS (CAN_MODATAL40, CAN_MODATALm_t, CAN_MODATAL40_ADDR); /* "CAN Message Object 40 Data Register Low" */
SFR_NOABS (CAN_MODATAL41, CAN_MODATALm_t, CAN_MODATAL41_ADDR); /* "CAN Message Object 41 Data Register Low" */
SFR_NOABS (CAN_MODATAL42, CAN_MODATALm_t, CAN_MODATAL42_ADDR); /* "CAN Message Object 42 Data Register Low" */
SFR_NOABS (CAN_MODATAL43, CAN_MODATALm_t, CAN_MODATAL43_ADDR); /* "CAN Message Object 43 Data Register Low" */
SFR_NOABS (CAN_MODATAL44, CAN_MODATALm_t, CAN_MODATAL44_ADDR); /* "CAN Message Object 44 Data Register Low" */
SFR_NOABS (CAN_MODATAL45, CAN_MODATALm_t, CAN_MODATAL45_ADDR); /* "CAN Message Object 45 Data Register Low" */
SFR_NOABS (CAN_MODATAL46, CAN_MODATALm_t, CAN_MODATAL46_ADDR); /* "CAN Message Object 46 Data Register Low" */
SFR_NOABS (CAN_MODATAL47, CAN_MODATALm_t, CAN_MODATAL47_ADDR); /* "CAN Message Object 47 Data Register Low" */
SFR_NOABS (CAN_MODATAL48, CAN_MODATALm_t, CAN_MODATAL48_ADDR); /* "CAN Message Object 48 Data Register Low" */
SFR_NOABS (CAN_MODATAL49, CAN_MODATALm_t, CAN_MODATAL49_ADDR); /* "CAN Message Object 49 Data Register Low" */
SFR_NOABS (CAN_MODATAL5, CAN_MODATALm_t, CAN_MODATAL5_ADDR); /* "CAN Message Object 5 Data Register Low" */
SFR_NOABS (CAN_MODATAL50, CAN_MODATALm_t, CAN_MODATAL50_ADDR); /* "CAN Message Object 50 Data Register Low" */
SFR_NOABS (CAN_MODATAL51, CAN_MODATALm_t, CAN_MODATAL51_ADDR); /* "CAN Message Object 51 Data Register Low" */
SFR_NOABS (CAN_MODATAL52, CAN_MODATALm_t, CAN_MODATAL52_ADDR); /* "CAN Message Object 52 Data Register Low" */
SFR_NOABS (CAN_MODATAL53, CAN_MODATALm_t, CAN_MODATAL53_ADDR); /* "CAN Message Object 53 Data Register Low" */
SFR_NOABS (CAN_MODATAL54, CAN_MODATALm_t, CAN_MODATAL54_ADDR); /* "CAN Message Object 54 Data Register Low" */
SFR_NOABS (CAN_MODATAL55, CAN_MODATALm_t, CAN_MODATAL55_ADDR); /* "CAN Message Object 55 Data Register Low" */
SFR_NOABS (CAN_MODATAL56, CAN_MODATALm_t, CAN_MODATAL56_ADDR); /* "CAN Message Object 56 Data Register Low" */
SFR_NOABS (CAN_MODATAL57, CAN_MODATALm_t, CAN_MODATAL57_ADDR); /* "CAN Message Object 57 Data Register Low" */
SFR_NOABS (CAN_MODATAL58, CAN_MODATALm_t, CAN_MODATAL58_ADDR); /* "CAN Message Object 58 Data Register Low" */
SFR_NOABS (CAN_MODATAL59, CAN_MODATALm_t, CAN_MODATAL59_ADDR); /* "CAN Message Object 59 Data Register Low" */
SFR_NOABS (CAN_MODATAL6, CAN_MODATALm_t, CAN_MODATAL6_ADDR); /* "CAN Message Object 6 Data Register Low" */
SFR_NOABS (CAN_MODATAL60, CAN_MODATALm_t, CAN_MODATAL60_ADDR); /* "CAN Message Object 60 Data Register Low" */
SFR_NOABS (CAN_MODATAL61, CAN_MODATALm_t, CAN_MODATAL61_ADDR); /* "CAN Message Object 61 Data Register Low" */
SFR_NOABS (CAN_MODATAL62, CAN_MODATALm_t, CAN_MODATAL62_ADDR); /* "CAN Message Object 62 Data Register Low" */
SFR_NOABS (CAN_MODATAL63, CAN_MODATALm_t, CAN_MODATAL63_ADDR); /* "CAN Message Object 63 Data Register Low" */
SFR_NOABS (CAN_MODATAL64, CAN_MODATALm_t, CAN_MODATAL64_ADDR); /* "CAN Message Object 64 Data Register Low" */
SFR_NOABS (CAN_MODATAL65, CAN_MODATALm_t, CAN_MODATAL65_ADDR); /* "CAN Message Object 65 Data Register Low" */
SFR_NOABS (CAN_MODATAL66, CAN_MODATALm_t, CAN_MODATAL66_ADDR); /* "CAN Message Object 66 Data Register Low" */
SFR_NOABS (CAN_MODATAL67, CAN_MODATALm_t, CAN_MODATAL67_ADDR); /* "CAN Message Object 67 Data Register Low" */
SFR_NOABS (CAN_MODATAL68, CAN_MODATALm_t, CAN_MODATAL68_ADDR); /* "CAN Message Object 68 Data Register Low" */
SFR_NOABS (CAN_MODATAL69, CAN_MODATALm_t, CAN_MODATAL69_ADDR); /* "CAN Message Object 69 Data Register Low" */
SFR_NOABS (CAN_MODATAL7, CAN_MODATALm_t, CAN_MODATAL7_ADDR); /* "CAN Message Object 7 Data Register Low" */
SFR_NOABS (CAN_MODATAL70, CAN_MODATALm_t, CAN_MODATAL70_ADDR); /* "CAN Message Object 70 Data Register Low" */
SFR_NOABS (CAN_MODATAL71, CAN_MODATALm_t, CAN_MODATAL71_ADDR); /* "CAN Message Object 71 Data Register Low" */
SFR_NOABS (CAN_MODATAL72, CAN_MODATALm_t, CAN_MODATAL72_ADDR); /* "CAN Message Object 72 Data Register Low" */
SFR_NOABS (CAN_MODATAL73, CAN_MODATALm_t, CAN_MODATAL73_ADDR); /* "CAN Message Object 73 Data Register Low" */
SFR_NOABS (CAN_MODATAL74, CAN_MODATALm_t, CAN_MODATAL74_ADDR); /* "CAN Message Object 74 Data Register Low" */
SFR_NOABS (CAN_MODATAL75, CAN_MODATALm_t, CAN_MODATAL75_ADDR); /* "CAN Message Object 75 Data Register Low" */
SFR_NOABS (CAN_MODATAL76, CAN_MODATALm_t, CAN_MODATAL76_ADDR); /* "CAN Message Object 76 Data Register Low" */
SFR_NOABS (CAN_MODATAL77, CAN_MODATALm_t, CAN_MODATAL77_ADDR); /* "CAN Message Object 77 Data Register Low" */
SFR_NOABS (CAN_MODATAL78, CAN_MODATALm_t, CAN_MODATAL78_ADDR); /* "CAN Message Object 78 Data Register Low" */
SFR_NOABS (CAN_MODATAL79, CAN_MODATALm_t, CAN_MODATAL79_ADDR); /* "CAN Message Object 79 Data Register Low" */
SFR_NOABS (CAN_MODATAL8, CAN_MODATALm_t, CAN_MODATAL8_ADDR); /* "CAN Message Object 8 Data Register Low" */
SFR_NOABS (CAN_MODATAL80, CAN_MODATALm_t, CAN_MODATAL80_ADDR); /* "CAN Message Object 80 Data Register Low" */
SFR_NOABS (CAN_MODATAL81, CAN_MODATALm_t, CAN_MODATAL81_ADDR); /* "CAN Message Object 81 Data Register Low" */
SFR_NOABS (CAN_MODATAL82, CAN_MODATALm_t, CAN_MODATAL82_ADDR); /* "CAN Message Object 82 Data Register Low" */
SFR_NOABS (CAN_MODATAL83, CAN_MODATALm_t, CAN_MODATAL83_ADDR); /* "CAN Message Object 83 Data Register Low" */
SFR_NOABS (CAN_MODATAL84, CAN_MODATALm_t, CAN_MODATAL84_ADDR); /* "CAN Message Object 84 Data Register Low" */
SFR_NOABS (CAN_MODATAL85, CAN_MODATALm_t, CAN_MODATAL85_ADDR); /* "CAN Message Object 85 Data Register Low" */
SFR_NOABS (CAN_MODATAL86, CAN_MODATALm_t, CAN_MODATAL86_ADDR); /* "CAN Message Object 86 Data Register Low" */
SFR_NOABS (CAN_MODATAL87, CAN_MODATALm_t, CAN_MODATAL87_ADDR); /* "CAN Message Object 87 Data Register Low" */
SFR_NOABS (CAN_MODATAL88, CAN_MODATALm_t, CAN_MODATAL88_ADDR); /* "CAN Message Object 88 Data Register Low" */
SFR_NOABS (CAN_MODATAL89, CAN_MODATALm_t, CAN_MODATAL89_ADDR); /* "CAN Message Object 89 Data Register Low" */
SFR_NOABS (CAN_MODATAL9, CAN_MODATALm_t, CAN_MODATAL9_ADDR); /* "CAN Message Object 9 Data Register Low" */
SFR_NOABS (CAN_MODATAL90, CAN_MODATALm_t, CAN_MODATAL90_ADDR); /* "CAN Message Object 90 Data Register Low" */
SFR_NOABS (CAN_MODATAL91, CAN_MODATALm_t, CAN_MODATAL91_ADDR); /* "CAN Message Object 91 Data Register Low" */
SFR_NOABS (CAN_MODATAL92, CAN_MODATALm_t, CAN_MODATAL92_ADDR); /* "CAN Message Object 92 Data Register Low" */
SFR_NOABS (CAN_MODATAL93, CAN_MODATALm_t, CAN_MODATAL93_ADDR); /* "CAN Message Object 93 Data Register Low" */
SFR_NOABS (CAN_MODATAL94, CAN_MODATALm_t, CAN_MODATAL94_ADDR); /* "CAN Message Object 94 Data Register Low" */
SFR_NOABS (CAN_MODATAL95, CAN_MODATALm_t, CAN_MODATAL95_ADDR); /* "CAN Message Object 95 Data Register Low" */
SFR_NOABS (CAN_MOFCR0, CAN_MOFCRm_t, CAN_MOFCR0_ADDR); /* "CAN Message Object 0 Function Control Register" */
SFR_NOABS (CAN_MOFCR1, CAN_MOFCRm_t, CAN_MOFCR1_ADDR); /* "CAN Message Object 1 Function Control Register" */
SFR_NOABS (CAN_MOFCR10, CAN_MOFCRm_t, CAN_MOFCR10_ADDR); /* "CAN Message Object 10 Function Control Register" */
SFR_NOABS (CAN_MOFCR11, CAN_MOFCRm_t, CAN_MOFCR11_ADDR); /* "CAN Message Object 11 Function Control Register" */
SFR_NOABS (CAN_MOFCR12, CAN_MOFCRm_t, CAN_MOFCR12_ADDR); /* "CAN Message Object 12 Function Control Register" */
SFR_NOABS (CAN_MOFCR13, CAN_MOFCRm_t, CAN_MOFCR13_ADDR); /* "CAN Message Object 13 Function Control Register" */
SFR_NOABS (CAN_MOFCR14, CAN_MOFCRm_t, CAN_MOFCR14_ADDR); /* "CAN Message Object 14 Function Control Register" */
SFR_NOABS (CAN_MOFCR15, CAN_MOFCRm_t, CAN_MOFCR15_ADDR); /* "CAN Message Object 15 Function Control Register" */
SFR_NOABS (CAN_MOFCR16, CAN_MOFCRm_t, CAN_MOFCR16_ADDR); /* "CAN Message Object 16 Function Control Register" */
SFR_NOABS (CAN_MOFCR17, CAN_MOFCRm_t, CAN_MOFCR17_ADDR); /* "CAN Message Object 17 Function Control Register" */
SFR_NOABS (CAN_MOFCR18, CAN_MOFCRm_t, CAN_MOFCR18_ADDR); /* "CAN Message Object 18 Function Control Register" */
SFR_NOABS (CAN_MOFCR19, CAN_MOFCRm_t, CAN_MOFCR19_ADDR); /* "CAN Message Object 19 Function Control Register" */
SFR_NOABS (CAN_MOFCR2, CAN_MOFCRm_t, CAN_MOFCR2_ADDR); /* "CAN Message Object 2 Function Control Register" */
SFR_NOABS (CAN_MOFCR20, CAN_MOFCRm_t, CAN_MOFCR20_ADDR); /* "CAN Message Object 20 Function Control Register" */
SFR_NOABS (CAN_MOFCR21, CAN_MOFCRm_t, CAN_MOFCR21_ADDR); /* "CAN Message Object 21 Function Control Register" */
SFR_NOABS (CAN_MOFCR22, CAN_MOFCRm_t, CAN_MOFCR22_ADDR); /* "CAN Message Object 22 Function Control Register" */
SFR_NOABS (CAN_MOFCR23, CAN_MOFCRm_t, CAN_MOFCR23_ADDR); /* "CAN Message Object 23 Function Control Register" */
SFR_NOABS (CAN_MOFCR24, CAN_MOFCRm_t, CAN_MOFCR24_ADDR); /* "CAN Message Object 24 Function Control Register" */
SFR_NOABS (CAN_MOFCR25, CAN_MOFCRm_t, CAN_MOFCR25_ADDR); /* "CAN Message Object 25 Function Control Register" */
SFR_NOABS (CAN_MOFCR26, CAN_MOFCRm_t, CAN_MOFCR26_ADDR); /* "CAN Message Object 26 Function Control Register" */
SFR_NOABS (CAN_MOFCR27, CAN_MOFCRm_t, CAN_MOFCR27_ADDR); /* "CAN Message Object 27 Function Control Register" */
SFR_NOABS (CAN_MOFCR28, CAN_MOFCRm_t, CAN_MOFCR28_ADDR); /* "CAN Message Object 28 Function Control Register" */
SFR_NOABS (CAN_MOFCR29, CAN_MOFCRm_t, CAN_MOFCR29_ADDR); /* "CAN Message Object 29 Function Control Register" */
SFR_NOABS (CAN_MOFCR3, CAN_MOFCRm_t, CAN_MOFCR3_ADDR); /* "CAN Message Object 3 Function Control Register" */
SFR_NOABS (CAN_MOFCR30, CAN_MOFCRm_t, CAN_MOFCR30_ADDR); /* "CAN Message Object 30 Function Control Register" */
SFR_NOABS (CAN_MOFCR31, CAN_MOFCRm_t, CAN_MOFCR31_ADDR); /* "CAN Message Object 31 Function Control Register" */
SFR_NOABS (CAN_MOFCR32, CAN_MOFCRm_t, CAN_MOFCR32_ADDR); /* "CAN Message Object 32 Function Control Register" */
SFR_NOABS (CAN_MOFCR33, CAN_MOFCRm_t, CAN_MOFCR33_ADDR); /* "CAN Message Object 33 Function Control Register" */
SFR_NOABS (CAN_MOFCR34, CAN_MOFCRm_t, CAN_MOFCR34_ADDR); /* "CAN Message Object 34 Function Control Register" */
SFR_NOABS (CAN_MOFCR35, CAN_MOFCRm_t, CAN_MOFCR35_ADDR); /* "CAN Message Object 35 Function Control Register" */
SFR_NOABS (CAN_MOFCR36, CAN_MOFCRm_t, CAN_MOFCR36_ADDR); /* "CAN Message Object 36 Function Control Register" */
SFR_NOABS (CAN_MOFCR37, CAN_MOFCRm_t, CAN_MOFCR37_ADDR); /* "CAN Message Object 37 Function Control Register" */
SFR_NOABS (CAN_MOFCR38, CAN_MOFCRm_t, CAN_MOFCR38_ADDR); /* "CAN Message Object 38 Function Control Register" */
SFR_NOABS (CAN_MOFCR39, CAN_MOFCRm_t, CAN_MOFCR39_ADDR); /* "CAN Message Object 39 Function Control Register" */
SFR_NOABS (CAN_MOFCR4, CAN_MOFCRm_t, CAN_MOFCR4_ADDR); /* "CAN Message Object 4 Function Control Register" */
SFR_NOABS (CAN_MOFCR40, CAN_MOFCRm_t, CAN_MOFCR40_ADDR); /* "CAN Message Object 40 Function Control Register" */
SFR_NOABS (CAN_MOFCR41, CAN_MOFCRm_t, CAN_MOFCR41_ADDR); /* "CAN Message Object 41 Function Control Register" */
SFR_NOABS (CAN_MOFCR42, CAN_MOFCRm_t, CAN_MOFCR42_ADDR); /* "CAN Message Object 42 Function Control Register" */
SFR_NOABS (CAN_MOFCR43, CAN_MOFCRm_t, CAN_MOFCR43_ADDR); /* "CAN Message Object 43 Function Control Register" */
SFR_NOABS (CAN_MOFCR44, CAN_MOFCRm_t, CAN_MOFCR44_ADDR); /* "CAN Message Object 44 Function Control Register" */
SFR_NOABS (CAN_MOFCR45, CAN_MOFCRm_t, CAN_MOFCR45_ADDR); /* "CAN Message Object 45 Function Control Register" */
SFR_NOABS (CAN_MOFCR46, CAN_MOFCRm_t, CAN_MOFCR46_ADDR); /* "CAN Message Object 46 Function Control Register" */
SFR_NOABS (CAN_MOFCR47, CAN_MOFCRm_t, CAN_MOFCR47_ADDR); /* "CAN Message Object 47 Function Control Register" */
SFR_NOABS (CAN_MOFCR48, CAN_MOFCRm_t, CAN_MOFCR48_ADDR); /* "CAN Message Object 48 Function Control Register" */
SFR_NOABS (CAN_MOFCR49, CAN_MOFCRm_t, CAN_MOFCR49_ADDR); /* "CAN Message Object 49 Function Control Register" */
SFR_NOABS (CAN_MOFCR5, CAN_MOFCRm_t, CAN_MOFCR5_ADDR); /* "CAN Message Object 5 Function Control Register" */
SFR_NOABS (CAN_MOFCR50, CAN_MOFCRm_t, CAN_MOFCR50_ADDR); /* "CAN Message Object 50 Function Control Register" */
SFR_NOABS (CAN_MOFCR51, CAN_MOFCRm_t, CAN_MOFCR51_ADDR); /* "CAN Message Object 51 Function Control Register" */
SFR_NOABS (CAN_MOFCR52, CAN_MOFCRm_t, CAN_MOFCR52_ADDR); /* "CAN Message Object 52 Function Control Register" */
SFR_NOABS (CAN_MOFCR53, CAN_MOFCRm_t, CAN_MOFCR53_ADDR); /* "CAN Message Object 53 Function Control Register" */
SFR_NOABS (CAN_MOFCR54, CAN_MOFCRm_t, CAN_MOFCR54_ADDR); /* "CAN Message Object 54 Function Control Register" */
SFR_NOABS (CAN_MOFCR55, CAN_MOFCRm_t, CAN_MOFCR55_ADDR); /* "CAN Message Object 55 Function Control Register" */
SFR_NOABS (CAN_MOFCR56, CAN_MOFCRm_t, CAN_MOFCR56_ADDR); /* "CAN Message Object 56 Function Control Register" */
SFR_NOABS (CAN_MOFCR57, CAN_MOFCRm_t, CAN_MOFCR57_ADDR); /* "CAN Message Object 57 Function Control Register" */
SFR_NOABS (CAN_MOFCR58, CAN_MOFCRm_t, CAN_MOFCR58_ADDR); /* "CAN Message Object 58 Function Control Register" */
SFR_NOABS (CAN_MOFCR59, CAN_MOFCRm_t, CAN_MOFCR59_ADDR); /* "CAN Message Object 59 Function Control Register" */
SFR_NOABS (CAN_MOFCR6, CAN_MOFCRm_t, CAN_MOFCR6_ADDR); /* "CAN Message Object 6 Function Control Register" */
SFR_NOABS (CAN_MOFCR60, CAN_MOFCRm_t, CAN_MOFCR60_ADDR); /* "CAN Message Object 60 Function Control Register" */
SFR_NOABS (CAN_MOFCR61, CAN_MOFCRm_t, CAN_MOFCR61_ADDR); /* "CAN Message Object 61 Function Control Register" */
SFR_NOABS (CAN_MOFCR62, CAN_MOFCRm_t, CAN_MOFCR62_ADDR); /* "CAN Message Object 62 Function Control Register" */
SFR_NOABS (CAN_MOFCR63, CAN_MOFCRm_t, CAN_MOFCR63_ADDR); /* "CAN Message Object 63 Function Control Register" */
SFR_NOABS (CAN_MOFCR64, CAN_MOFCRm_t, CAN_MOFCR64_ADDR); /* "CAN Message Object 64 Function Control Register" */
SFR_NOABS (CAN_MOFCR65, CAN_MOFCRm_t, CAN_MOFCR65_ADDR); /* "CAN Message Object 65 Function Control Register" */
SFR_NOABS (CAN_MOFCR66, CAN_MOFCRm_t, CAN_MOFCR66_ADDR); /* "CAN Message Object 66 Function Control Register" */
SFR_NOABS (CAN_MOFCR67, CAN_MOFCRm_t, CAN_MOFCR67_ADDR); /* "CAN Message Object 67 Function Control Register" */
SFR_NOABS (CAN_MOFCR68, CAN_MOFCRm_t, CAN_MOFCR68_ADDR); /* "CAN Message Object 68 Function Control Register" */
SFR_NOABS (CAN_MOFCR69, CAN_MOFCRm_t, CAN_MOFCR69_ADDR); /* "CAN Message Object 69 Function Control Register" */
SFR_NOABS (CAN_MOFCR7, CAN_MOFCRm_t, CAN_MOFCR7_ADDR); /* "CAN Message Object 7 Function Control Register" */
SFR_NOABS (CAN_MOFCR70, CAN_MOFCRm_t, CAN_MOFCR70_ADDR); /* "CAN Message Object 70 Function Control Register" */
SFR_NOABS (CAN_MOFCR71, CAN_MOFCRm_t, CAN_MOFCR71_ADDR); /* "CAN Message Object 71 Function Control Register" */
SFR_NOABS (CAN_MOFCR72, CAN_MOFCRm_t, CAN_MOFCR72_ADDR); /* "CAN Message Object 72 Function Control Register" */
SFR_NOABS (CAN_MOFCR73, CAN_MOFCRm_t, CAN_MOFCR73_ADDR); /* "CAN Message Object 73 Function Control Register" */
SFR_NOABS (CAN_MOFCR74, CAN_MOFCRm_t, CAN_MOFCR74_ADDR); /* "CAN Message Object 74 Function Control Register" */
SFR_NOABS (CAN_MOFCR75, CAN_MOFCRm_t, CAN_MOFCR75_ADDR); /* "CAN Message Object 75 Function Control Register" */
SFR_NOABS (CAN_MOFCR76, CAN_MOFCRm_t, CAN_MOFCR76_ADDR); /* "CAN Message Object 76 Function Control Register" */
SFR_NOABS (CAN_MOFCR77, CAN_MOFCRm_t, CAN_MOFCR77_ADDR); /* "CAN Message Object 77 Function Control Register" */
SFR_NOABS (CAN_MOFCR78, CAN_MOFCRm_t, CAN_MOFCR78_ADDR); /* "CAN Message Object 78 Function Control Register" */
SFR_NOABS (CAN_MOFCR79, CAN_MOFCRm_t, CAN_MOFCR79_ADDR); /* "CAN Message Object 79 Function Control Register" */
SFR_NOABS (CAN_MOFCR8, CAN_MOFCRm_t, CAN_MOFCR8_ADDR); /* "CAN Message Object 8 Function Control Register" */
SFR_NOABS (CAN_MOFCR80, CAN_MOFCRm_t, CAN_MOFCR80_ADDR); /* "CAN Message Object 80 Function Control Register" */
SFR_NOABS (CAN_MOFCR81, CAN_MOFCRm_t, CAN_MOFCR81_ADDR); /* "CAN Message Object 81 Function Control Register" */
SFR_NOABS (CAN_MOFCR82, CAN_MOFCRm_t, CAN_MOFCR82_ADDR); /* "CAN Message Object 82 Function Control Register" */
SFR_NOABS (CAN_MOFCR83, CAN_MOFCRm_t, CAN_MOFCR83_ADDR); /* "CAN Message Object 83 Function Control Register" */
SFR_NOABS (CAN_MOFCR84, CAN_MOFCRm_t, CAN_MOFCR84_ADDR); /* "CAN Message Object 84 Function Control Register" */
SFR_NOABS (CAN_MOFCR85, CAN_MOFCRm_t, CAN_MOFCR85_ADDR); /* "CAN Message Object 85 Function Control Register" */
SFR_NOABS (CAN_MOFCR86, CAN_MOFCRm_t, CAN_MOFCR86_ADDR); /* "CAN Message Object 86 Function Control Register" */
SFR_NOABS (CAN_MOFCR87, CAN_MOFCRm_t, CAN_MOFCR87_ADDR); /* "CAN Message Object 87 Function Control Register" */
SFR_NOABS (CAN_MOFCR88, CAN_MOFCRm_t, CAN_MOFCR88_ADDR); /* "CAN Message Object 88 Function Control Register" */
SFR_NOABS (CAN_MOFCR89, CAN_MOFCRm_t, CAN_MOFCR89_ADDR); /* "CAN Message Object 89 Function Control Register" */
SFR_NOABS (CAN_MOFCR9, CAN_MOFCRm_t, CAN_MOFCR9_ADDR); /* "CAN Message Object 9 Function Control Register" */
SFR_NOABS (CAN_MOFCR90, CAN_MOFCRm_t, CAN_MOFCR90_ADDR); /* "CAN Message Object 90 Function Control Register" */
SFR_NOABS (CAN_MOFCR91, CAN_MOFCRm_t, CAN_MOFCR91_ADDR); /* "CAN Message Object 91 Function Control Register" */
SFR_NOABS (CAN_MOFCR92, CAN_MOFCRm_t, CAN_MOFCR92_ADDR); /* "CAN Message Object 92 Function Control Register" */
SFR_NOABS (CAN_MOFCR93, CAN_MOFCRm_t, CAN_MOFCR93_ADDR); /* "CAN Message Object 93 Function Control Register" */
SFR_NOABS (CAN_MOFCR94, CAN_MOFCRm_t, CAN_MOFCR94_ADDR); /* "CAN Message Object 94 Function Control Register" */
SFR_NOABS (CAN_MOFCR95, CAN_MOFCRm_t, CAN_MOFCR95_ADDR); /* "CAN Message Object 95 Function Control Register" */
SFR_NOABS (CAN_MOFGPR0, CAN_MOFGPRm_t, CAN_MOFGPR0_ADDR); /* "CAN Message Object 0 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR1, CAN_MOFGPRm_t, CAN_MOFGPR1_ADDR); /* "CAN Message Object 1 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR10, CAN_MOFGPRm_t, CAN_MOFGPR10_ADDR); /* "CAN Message Object 10 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR11, CAN_MOFGPRm_t, CAN_MOFGPR11_ADDR); /* "CAN Message Object 11 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR12, CAN_MOFGPRm_t, CAN_MOFGPR12_ADDR); /* "CAN Message Object 12 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR13, CAN_MOFGPRm_t, CAN_MOFGPR13_ADDR); /* "CAN Message Object 13 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR14, CAN_MOFGPRm_t, CAN_MOFGPR14_ADDR); /* "CAN Message Object 14 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR15, CAN_MOFGPRm_t, CAN_MOFGPR15_ADDR); /* "CAN Message Object 15 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR16, CAN_MOFGPRm_t, CAN_MOFGPR16_ADDR); /* "CAN Message Object 16 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR17, CAN_MOFGPRm_t, CAN_MOFGPR17_ADDR); /* "CAN Message Object 17 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR18, CAN_MOFGPRm_t, CAN_MOFGPR18_ADDR); /* "CAN Message Object 18 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR19, CAN_MOFGPRm_t, CAN_MOFGPR19_ADDR); /* "CAN Message Object 19 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR2, CAN_MOFGPRm_t, CAN_MOFGPR2_ADDR); /* "CAN Message Object 2 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR20, CAN_MOFGPRm_t, CAN_MOFGPR20_ADDR); /* "CAN Message Object 20 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR21, CAN_MOFGPRm_t, CAN_MOFGPR21_ADDR); /* "CAN Message Object 21 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR22, CAN_MOFGPRm_t, CAN_MOFGPR22_ADDR); /* "CAN Message Object 22 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR23, CAN_MOFGPRm_t, CAN_MOFGPR23_ADDR); /* "CAN Message Object 23 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR24, CAN_MOFGPRm_t, CAN_MOFGPR24_ADDR); /* "CAN Message Object 24 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR25, CAN_MOFGPRm_t, CAN_MOFGPR25_ADDR); /* "CAN Message Object 25 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR26, CAN_MOFGPRm_t, CAN_MOFGPR26_ADDR); /* "CAN Message Object 26 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR27, CAN_MOFGPRm_t, CAN_MOFGPR27_ADDR); /* "CAN Message Object 27 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR28, CAN_MOFGPRm_t, CAN_MOFGPR28_ADDR); /* "CAN Message Object 28 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR29, CAN_MOFGPRm_t, CAN_MOFGPR29_ADDR); /* "CAN Message Object 29 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR3, CAN_MOFGPRm_t, CAN_MOFGPR3_ADDR); /* "CAN Message Object 3 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR30, CAN_MOFGPRm_t, CAN_MOFGPR30_ADDR); /* "CAN Message Object 30 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR31, CAN_MOFGPRm_t, CAN_MOFGPR31_ADDR); /* "CAN Message Object 31 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR32, CAN_MOFGPRm_t, CAN_MOFGPR32_ADDR); /* "CAN Message Object 32 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR33, CAN_MOFGPRm_t, CAN_MOFGPR33_ADDR); /* "CAN Message Object 33 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR34, CAN_MOFGPRm_t, CAN_MOFGPR34_ADDR); /* "CAN Message Object 34 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR35, CAN_MOFGPRm_t, CAN_MOFGPR35_ADDR); /* "CAN Message Object 35 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR36, CAN_MOFGPRm_t, CAN_MOFGPR36_ADDR); /* "CAN Message Object 36 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR37, CAN_MOFGPRm_t, CAN_MOFGPR37_ADDR); /* "CAN Message Object 37 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR38, CAN_MOFGPRm_t, CAN_MOFGPR38_ADDR); /* "CAN Message Object 38 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR39, CAN_MOFGPRm_t, CAN_MOFGPR39_ADDR); /* "CAN Message Object 39 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR4, CAN_MOFGPRm_t, CAN_MOFGPR4_ADDR); /* "CAN Message Object 4 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR40, CAN_MOFGPRm_t, CAN_MOFGPR40_ADDR); /* "CAN Message Object 40 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR41, CAN_MOFGPRm_t, CAN_MOFGPR41_ADDR); /* "CAN Message Object 41 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR42, CAN_MOFGPRm_t, CAN_MOFGPR42_ADDR); /* "CAN Message Object 42 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR43, CAN_MOFGPRm_t, CAN_MOFGPR43_ADDR); /* "CAN Message Object 43 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR44, CAN_MOFGPRm_t, CAN_MOFGPR44_ADDR); /* "CAN Message Object 44 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR45, CAN_MOFGPRm_t, CAN_MOFGPR45_ADDR); /* "CAN Message Object 45 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR46, CAN_MOFGPRm_t, CAN_MOFGPR46_ADDR); /* "CAN Message Object 46 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR47, CAN_MOFGPRm_t, CAN_MOFGPR47_ADDR); /* "CAN Message Object 47 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR48, CAN_MOFGPRm_t, CAN_MOFGPR48_ADDR); /* "CAN Message Object 48 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR49, CAN_MOFGPRm_t, CAN_MOFGPR49_ADDR); /* "CAN Message Object 49 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR5, CAN_MOFGPRm_t, CAN_MOFGPR5_ADDR); /* "CAN Message Object 5 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR50, CAN_MOFGPRm_t, CAN_MOFGPR50_ADDR); /* "CAN Message Object 50 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR51, CAN_MOFGPRm_t, CAN_MOFGPR51_ADDR); /* "CAN Message Object 51 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR52, CAN_MOFGPRm_t, CAN_MOFGPR52_ADDR); /* "CAN Message Object 52 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR53, CAN_MOFGPRm_t, CAN_MOFGPR53_ADDR); /* "CAN Message Object 53 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR54, CAN_MOFGPRm_t, CAN_MOFGPR54_ADDR); /* "CAN Message Object 54 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR55, CAN_MOFGPRm_t, CAN_MOFGPR55_ADDR); /* "CAN Message Object 55 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR56, CAN_MOFGPRm_t, CAN_MOFGPR56_ADDR); /* "CAN Message Object 56 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR57, CAN_MOFGPRm_t, CAN_MOFGPR57_ADDR); /* "CAN Message Object 57 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR58, CAN_MOFGPRm_t, CAN_MOFGPR58_ADDR); /* "CAN Message Object 58 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR59, CAN_MOFGPRm_t, CAN_MOFGPR59_ADDR); /* "CAN Message Object 59 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR6, CAN_MOFGPRm_t, CAN_MOFGPR6_ADDR); /* "CAN Message Object 6 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR60, CAN_MOFGPRm_t, CAN_MOFGPR60_ADDR); /* "CAN Message Object 60 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR61, CAN_MOFGPRm_t, CAN_MOFGPR61_ADDR); /* "CAN Message Object 61 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR62, CAN_MOFGPRm_t, CAN_MOFGPR62_ADDR); /* "CAN Message Object 62 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR63, CAN_MOFGPRm_t, CAN_MOFGPR63_ADDR); /* "CAN Message Object 63 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR64, CAN_MOFGPRm_t, CAN_MOFGPR64_ADDR); /* "CAN Message Object 64 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR65, CAN_MOFGPRm_t, CAN_MOFGPR65_ADDR); /* "CAN Message Object 65 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR66, CAN_MOFGPRm_t, CAN_MOFGPR66_ADDR); /* "CAN Message Object 66 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR67, CAN_MOFGPRm_t, CAN_MOFGPR67_ADDR); /* "CAN Message Object 67 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR68, CAN_MOFGPRm_t, CAN_MOFGPR68_ADDR); /* "CAN Message Object 68 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR69, CAN_MOFGPRm_t, CAN_MOFGPR69_ADDR); /* "CAN Message Object 69 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR7, CAN_MOFGPRm_t, CAN_MOFGPR7_ADDR); /* "CAN Message Object 7 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR70, CAN_MOFGPRm_t, CAN_MOFGPR70_ADDR); /* "CAN Message Object 70 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR71, CAN_MOFGPRm_t, CAN_MOFGPR71_ADDR); /* "CAN Message Object 71 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR72, CAN_MOFGPRm_t, CAN_MOFGPR72_ADDR); /* "CAN Message Object 72 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR73, CAN_MOFGPRm_t, CAN_MOFGPR73_ADDR); /* "CAN Message Object 73 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR74, CAN_MOFGPRm_t, CAN_MOFGPR74_ADDR); /* "CAN Message Object 74 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR75, CAN_MOFGPRm_t, CAN_MOFGPR75_ADDR); /* "CAN Message Object 75 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR76, CAN_MOFGPRm_t, CAN_MOFGPR76_ADDR); /* "CAN Message Object 76 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR77, CAN_MOFGPRm_t, CAN_MOFGPR77_ADDR); /* "CAN Message Object 77 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR78, CAN_MOFGPRm_t, CAN_MOFGPR78_ADDR); /* "CAN Message Object 78 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR79, CAN_MOFGPRm_t, CAN_MOFGPR79_ADDR); /* "CAN Message Object 79 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR8, CAN_MOFGPRm_t, CAN_MOFGPR8_ADDR); /* "CAN Message Object 8 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR80, CAN_MOFGPRm_t, CAN_MOFGPR80_ADDR); /* "CAN Message Object 80 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR81, CAN_MOFGPRm_t, CAN_MOFGPR81_ADDR); /* "CAN Message Object 81 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR82, CAN_MOFGPRm_t, CAN_MOFGPR82_ADDR); /* "CAN Message Object 82 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR83, CAN_MOFGPRm_t, CAN_MOFGPR83_ADDR); /* "CAN Message Object 83 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR84, CAN_MOFGPRm_t, CAN_MOFGPR84_ADDR); /* "CAN Message Object 84 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR85, CAN_MOFGPRm_t, CAN_MOFGPR85_ADDR); /* "CAN Message Object 85 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR86, CAN_MOFGPRm_t, CAN_MOFGPR86_ADDR); /* "CAN Message Object 86 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR87, CAN_MOFGPRm_t, CAN_MOFGPR87_ADDR); /* "CAN Message Object 87 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR88, CAN_MOFGPRm_t, CAN_MOFGPR88_ADDR); /* "CAN Message Object 88 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR89, CAN_MOFGPRm_t, CAN_MOFGPR89_ADDR); /* "CAN Message Object 89 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR9, CAN_MOFGPRm_t, CAN_MOFGPR9_ADDR); /* "CAN Message Object 9 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR90, CAN_MOFGPRm_t, CAN_MOFGPR90_ADDR); /* "CAN Message Object 90 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR91, CAN_MOFGPRm_t, CAN_MOFGPR91_ADDR); /* "CAN Message Object 91 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR92, CAN_MOFGPRm_t, CAN_MOFGPR92_ADDR); /* "CAN Message Object 92 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR93, CAN_MOFGPRm_t, CAN_MOFGPR93_ADDR); /* "CAN Message Object 93 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR94, CAN_MOFGPRm_t, CAN_MOFGPR94_ADDR); /* "CAN Message Object 94 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOFGPR95, CAN_MOFGPRm_t, CAN_MOFGPR95_ADDR); /* "CAN Message Object 95 FIFO/Gateway Pointer Register" */
SFR_NOABS (CAN_MOIPR0, CAN_MOIPRm_t, CAN_MOIPR0_ADDR); /* "CAN Message Object 0 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR1, CAN_MOIPRm_t, CAN_MOIPR1_ADDR); /* "CAN Message Object 1 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR10, CAN_MOIPRm_t, CAN_MOIPR10_ADDR); /* "CAN Message Object 10 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR11, CAN_MOIPRm_t, CAN_MOIPR11_ADDR); /* "CAN Message Object 11 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR12, CAN_MOIPRm_t, CAN_MOIPR12_ADDR); /* "CAN Message Object 12 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR13, CAN_MOIPRm_t, CAN_MOIPR13_ADDR); /* "CAN Message Object 13 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR14, CAN_MOIPRm_t, CAN_MOIPR14_ADDR); /* "CAN Message Object 14 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR15, CAN_MOIPRm_t, CAN_MOIPR15_ADDR); /* "CAN Message Object 15 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR16, CAN_MOIPRm_t, CAN_MOIPR16_ADDR); /* "CAN Message Object 16 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR17, CAN_MOIPRm_t, CAN_MOIPR17_ADDR); /* "CAN Message Object 17 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR18, CAN_MOIPRm_t, CAN_MOIPR18_ADDR); /* "CAN Message Object 18 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR19, CAN_MOIPRm_t, CAN_MOIPR19_ADDR); /* "CAN Message Object 19 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR2, CAN_MOIPRm_t, CAN_MOIPR2_ADDR); /* "CAN Message Object 2 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR20, CAN_MOIPRm_t, CAN_MOIPR20_ADDR); /* "CAN Message Object 20 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR21, CAN_MOIPRm_t, CAN_MOIPR21_ADDR); /* "CAN Message Object 21 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR22, CAN_MOIPRm_t, CAN_MOIPR22_ADDR); /* "CAN Message Object 22 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR23, CAN_MOIPRm_t, CAN_MOIPR23_ADDR); /* "CAN Message Object 23 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR24, CAN_MOIPRm_t, CAN_MOIPR24_ADDR); /* "CAN Message Object 24 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR25, CAN_MOIPRm_t, CAN_MOIPR25_ADDR); /* "CAN Message Object 25 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR26, CAN_MOIPRm_t, CAN_MOIPR26_ADDR); /* "CAN Message Object 26 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR27, CAN_MOIPRm_t, CAN_MOIPR27_ADDR); /* "CAN Message Object 27 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR28, CAN_MOIPRm_t, CAN_MOIPR28_ADDR); /* "CAN Message Object 28 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR29, CAN_MOIPRm_t, CAN_MOIPR29_ADDR); /* "CAN Message Object 29 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR3, CAN_MOIPRm_t, CAN_MOIPR3_ADDR); /* "CAN Message Object 3 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR30, CAN_MOIPRm_t, CAN_MOIPR30_ADDR); /* "CAN Message Object 30 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR31, CAN_MOIPRm_t, CAN_MOIPR31_ADDR); /* "CAN Message Object 31 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR32, CAN_MOIPRm_t, CAN_MOIPR32_ADDR); /* "CAN Message Object 32 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR33, CAN_MOIPRm_t, CAN_MOIPR33_ADDR); /* "CAN Message Object 33 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR34, CAN_MOIPRm_t, CAN_MOIPR34_ADDR); /* "CAN Message Object 34 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR35, CAN_MOIPRm_t, CAN_MOIPR35_ADDR); /* "CAN Message Object 35 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR36, CAN_MOIPRm_t, CAN_MOIPR36_ADDR); /* "CAN Message Object 36 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR37, CAN_MOIPRm_t, CAN_MOIPR37_ADDR); /* "CAN Message Object 37 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR38, CAN_MOIPRm_t, CAN_MOIPR38_ADDR); /* "CAN Message Object 38 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR39, CAN_MOIPRm_t, CAN_MOIPR39_ADDR); /* "CAN Message Object 39 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR4, CAN_MOIPRm_t, CAN_MOIPR4_ADDR); /* "CAN Message Object 4 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR40, CAN_MOIPRm_t, CAN_MOIPR40_ADDR); /* "CAN Message Object 40 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR41, CAN_MOIPRm_t, CAN_MOIPR41_ADDR); /* "CAN Message Object 41 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR42, CAN_MOIPRm_t, CAN_MOIPR42_ADDR); /* "CAN Message Object 42 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR43, CAN_MOIPRm_t, CAN_MOIPR43_ADDR); /* "CAN Message Object 43 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR44, CAN_MOIPRm_t, CAN_MOIPR44_ADDR); /* "CAN Message Object 44 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR45, CAN_MOIPRm_t, CAN_MOIPR45_ADDR); /* "CAN Message Object 45 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR46, CAN_MOIPRm_t, CAN_MOIPR46_ADDR); /* "CAN Message Object 46 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR47, CAN_MOIPRm_t, CAN_MOIPR47_ADDR); /* "CAN Message Object 47 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR48, CAN_MOIPRm_t, CAN_MOIPR48_ADDR); /* "CAN Message Object 48 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR49, CAN_MOIPRm_t, CAN_MOIPR49_ADDR); /* "CAN Message Object 49 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR5, CAN_MOIPRm_t, CAN_MOIPR5_ADDR); /* "CAN Message Object 5 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR50, CAN_MOIPRm_t, CAN_MOIPR50_ADDR); /* "CAN Message Object 50 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR51, CAN_MOIPRm_t, CAN_MOIPR51_ADDR); /* "CAN Message Object 51 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR52, CAN_MOIPRm_t, CAN_MOIPR52_ADDR); /* "CAN Message Object 52 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR53, CAN_MOIPRm_t, CAN_MOIPR53_ADDR); /* "CAN Message Object 53 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR54, CAN_MOIPRm_t, CAN_MOIPR54_ADDR); /* "CAN Message Object 54 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR55, CAN_MOIPRm_t, CAN_MOIPR55_ADDR); /* "CAN Message Object 55 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR56, CAN_MOIPRm_t, CAN_MOIPR56_ADDR); /* "CAN Message Object 56 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR57, CAN_MOIPRm_t, CAN_MOIPR57_ADDR); /* "CAN Message Object 57 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR58, CAN_MOIPRm_t, CAN_MOIPR58_ADDR); /* "CAN Message Object 58 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR59, CAN_MOIPRm_t, CAN_MOIPR59_ADDR); /* "CAN Message Object 59 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR6, CAN_MOIPRm_t, CAN_MOIPR6_ADDR); /* "CAN Message Object 6 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR60, CAN_MOIPRm_t, CAN_MOIPR60_ADDR); /* "CAN Message Object 60 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR61, CAN_MOIPRm_t, CAN_MOIPR61_ADDR); /* "CAN Message Object 61 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR62, CAN_MOIPRm_t, CAN_MOIPR62_ADDR); /* "CAN Message Object 62 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR63, CAN_MOIPRm_t, CAN_MOIPR63_ADDR); /* "CAN Message Object 63 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR64, CAN_MOIPRm_t, CAN_MOIPR64_ADDR); /* "CAN Message Object 64 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR65, CAN_MOIPRm_t, CAN_MOIPR65_ADDR); /* "CAN Message Object 65 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR66, CAN_MOIPRm_t, CAN_MOIPR66_ADDR); /* "CAN Message Object 66 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR67, CAN_MOIPRm_t, CAN_MOIPR67_ADDR); /* "CAN Message Object 67 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR68, CAN_MOIPRm_t, CAN_MOIPR68_ADDR); /* "CAN Message Object 68 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR69, CAN_MOIPRm_t, CAN_MOIPR69_ADDR); /* "CAN Message Object 69 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR7, CAN_MOIPRm_t, CAN_MOIPR7_ADDR); /* "CAN Message Object 7 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR70, CAN_MOIPRm_t, CAN_MOIPR70_ADDR); /* "CAN Message Object 70 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR71, CAN_MOIPRm_t, CAN_MOIPR71_ADDR); /* "CAN Message Object 71 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR72, CAN_MOIPRm_t, CAN_MOIPR72_ADDR); /* "CAN Message Object 72 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR73, CAN_MOIPRm_t, CAN_MOIPR73_ADDR); /* "CAN Message Object 73 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR74, CAN_MOIPRm_t, CAN_MOIPR74_ADDR); /* "CAN Message Object 74 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR75, CAN_MOIPRm_t, CAN_MOIPR75_ADDR); /* "CAN Message Object 75 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR76, CAN_MOIPRm_t, CAN_MOIPR76_ADDR); /* "CAN Message Object 76 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR77, CAN_MOIPRm_t, CAN_MOIPR77_ADDR); /* "CAN Message Object 77 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR78, CAN_MOIPRm_t, CAN_MOIPR78_ADDR); /* "CAN Message Object 78 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR79, CAN_MOIPRm_t, CAN_MOIPR79_ADDR); /* "CAN Message Object 79 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR8, CAN_MOIPRm_t, CAN_MOIPR8_ADDR); /* "CAN Message Object 8 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR80, CAN_MOIPRm_t, CAN_MOIPR80_ADDR); /* "CAN Message Object 80 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR81, CAN_MOIPRm_t, CAN_MOIPR81_ADDR); /* "CAN Message Object 81 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR82, CAN_MOIPRm_t, CAN_MOIPR82_ADDR); /* "CAN Message Object 82 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR83, CAN_MOIPRm_t, CAN_MOIPR83_ADDR); /* "CAN Message Object 83 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR84, CAN_MOIPRm_t, CAN_MOIPR84_ADDR); /* "CAN Message Object 84 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR85, CAN_MOIPRm_t, CAN_MOIPR85_ADDR); /* "CAN Message Object 85 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR86, CAN_MOIPRm_t, CAN_MOIPR86_ADDR); /* "CAN Message Object 86 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR87, CAN_MOIPRm_t, CAN_MOIPR87_ADDR); /* "CAN Message Object 87 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR88, CAN_MOIPRm_t, CAN_MOIPR88_ADDR); /* "CAN Message Object 88 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR89, CAN_MOIPRm_t, CAN_MOIPR89_ADDR); /* "CAN Message Object 89 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR9, CAN_MOIPRm_t, CAN_MOIPR9_ADDR); /* "CAN Message Object 9 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR90, CAN_MOIPRm_t, CAN_MOIPR90_ADDR); /* "CAN Message Object 90 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR91, CAN_MOIPRm_t, CAN_MOIPR91_ADDR); /* "CAN Message Object 91 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR92, CAN_MOIPRm_t, CAN_MOIPR92_ADDR); /* "CAN Message Object 92 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR93, CAN_MOIPRm_t, CAN_MOIPR93_ADDR); /* "CAN Message Object 93 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR94, CAN_MOIPRm_t, CAN_MOIPR94_ADDR); /* "CAN Message Object 94 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOIPR95, CAN_MOIPRm_t, CAN_MOIPR95_ADDR); /* "CAN Message Object 95 Interrupt Pointer Register" */
SFR_NOABS (CAN_MOSTAT0, CAN_MOSTATm_t, CAN_MOSTAT0_ADDR); /* "CAN Message Object 0" */
SFR_NOABS (CAN_MOSTAT1, CAN_MOSTATm_t, CAN_MOSTAT1_ADDR); /* "CAN Message Object 1" */
SFR_NOABS (CAN_MOSTAT10, CAN_MOSTATm_t, CAN_MOSTAT10_ADDR); /* "CAN Message Object 10" */
SFR_NOABS (CAN_MOSTAT11, CAN_MOSTATm_t, CAN_MOSTAT11_ADDR); /* "CAN Message Object 11" */
SFR_NOABS (CAN_MOSTAT12, CAN_MOSTATm_t, CAN_MOSTAT12_ADDR); /* "CAN Message Object 12" */
SFR_NOABS (CAN_MOSTAT13, CAN_MOSTATm_t, CAN_MOSTAT13_ADDR); /* "CAN Message Object 13" */
SFR_NOABS (CAN_MOSTAT14, CAN_MOSTATm_t, CAN_MOSTAT14_ADDR); /* "CAN Message Object 14" */
SFR_NOABS (CAN_MOSTAT15, CAN_MOSTATm_t, CAN_MOSTAT15_ADDR); /* "CAN Message Object 15" */
SFR_NOABS (CAN_MOSTAT16, CAN_MOSTATm_t, CAN_MOSTAT16_ADDR); /* "CAN Message Object 16" */
SFR_NOABS (CAN_MOSTAT17, CAN_MOSTATm_t, CAN_MOSTAT17_ADDR); /* "CAN Message Object 17" */
SFR_NOABS (CAN_MOSTAT18, CAN_MOSTATm_t, CAN_MOSTAT18_ADDR); /* "CAN Message Object 18" */
SFR_NOABS (CAN_MOSTAT19, CAN_MOSTATm_t, CAN_MOSTAT19_ADDR); /* "CAN Message Object 19" */
SFR_NOABS (CAN_MOSTAT2, CAN_MOSTATm_t, CAN_MOSTAT2_ADDR); /* "CAN Message Object 2" */
SFR_NOABS (CAN_MOSTAT20, CAN_MOSTATm_t, CAN_MOSTAT20_ADDR); /* "CAN Message Object 20" */
SFR_NOABS (CAN_MOSTAT21, CAN_MOSTATm_t, CAN_MOSTAT21_ADDR); /* "CAN Message Object 21" */
SFR_NOABS (CAN_MOSTAT22, CAN_MOSTATm_t, CAN_MOSTAT22_ADDR); /* "CAN Message Object 22" */
SFR_NOABS (CAN_MOSTAT23, CAN_MOSTATm_t, CAN_MOSTAT23_ADDR); /* "CAN Message Object 23" */
SFR_NOABS (CAN_MOSTAT24, CAN_MOSTATm_t, CAN_MOSTAT24_ADDR); /* "CAN Message Object 24" */
SFR_NOABS (CAN_MOSTAT25, CAN_MOSTATm_t, CAN_MOSTAT25_ADDR); /* "CAN Message Object 25" */
SFR_NOABS (CAN_MOSTAT26, CAN_MOSTATm_t, CAN_MOSTAT26_ADDR); /* "CAN Message Object 26" */
SFR_NOABS (CAN_MOSTAT27, CAN_MOSTATm_t, CAN_MOSTAT27_ADDR); /* "CAN Message Object 27" */
SFR_NOABS (CAN_MOSTAT28, CAN_MOSTATm_t, CAN_MOSTAT28_ADDR); /* "CAN Message Object 28" */
SFR_NOABS (CAN_MOSTAT29, CAN_MOSTATm_t, CAN_MOSTAT29_ADDR); /* "CAN Message Object 29" */
SFR_NOABS (CAN_MOSTAT3, CAN_MOSTATm_t, CAN_MOSTAT3_ADDR); /* "CAN Message Object 3" */
SFR_NOABS (CAN_MOSTAT30, CAN_MOSTATm_t, CAN_MOSTAT30_ADDR); /* "CAN Message Object 30" */
SFR_NOABS (CAN_MOSTAT31, CAN_MOSTATm_t, CAN_MOSTAT31_ADDR); /* "CAN Message Object 31" */
SFR_NOABS (CAN_MOSTAT32, CAN_MOSTATm_t, CAN_MOSTAT32_ADDR); /* "CAN Message Object 32" */
SFR_NOABS (CAN_MOSTAT33, CAN_MOSTATm_t, CAN_MOSTAT33_ADDR); /* "CAN Message Object 33" */
SFR_NOABS (CAN_MOSTAT34, CAN_MOSTATm_t, CAN_MOSTAT34_ADDR); /* "CAN Message Object 34" */
SFR_NOABS (CAN_MOSTAT35, CAN_MOSTATm_t, CAN_MOSTAT35_ADDR); /* "CAN Message Object 35" */
SFR_NOABS (CAN_MOSTAT36, CAN_MOSTATm_t, CAN_MOSTAT36_ADDR); /* "CAN Message Object 36" */
SFR_NOABS (CAN_MOSTAT37, CAN_MOSTATm_t, CAN_MOSTAT37_ADDR); /* "CAN Message Object 37" */
SFR_NOABS (CAN_MOSTAT38, CAN_MOSTATm_t, CAN_MOSTAT38_ADDR); /* "CAN Message Object 38" */
SFR_NOABS (CAN_MOSTAT39, CAN_MOSTATm_t, CAN_MOSTAT39_ADDR); /* "CAN Message Object 39" */
SFR_NOABS (CAN_MOSTAT4, CAN_MOSTATm_t, CAN_MOSTAT4_ADDR); /* "CAN Message Object 4" */
SFR_NOABS (CAN_MOSTAT40, CAN_MOSTATm_t, CAN_MOSTAT40_ADDR); /* "CAN Message Object 40" */
SFR_NOABS (CAN_MOSTAT41, CAN_MOSTATm_t, CAN_MOSTAT41_ADDR); /* "CAN Message Object 41" */
SFR_NOABS (CAN_MOSTAT42, CAN_MOSTATm_t, CAN_MOSTAT42_ADDR); /* "CAN Message Object 42" */
SFR_NOABS (CAN_MOSTAT43, CAN_MOSTATm_t, CAN_MOSTAT43_ADDR); /* "CAN Message Object 43" */
SFR_NOABS (CAN_MOSTAT44, CAN_MOSTATm_t, CAN_MOSTAT44_ADDR); /* "CAN Message Object 44" */
SFR_NOABS (CAN_MOSTAT45, CAN_MOSTATm_t, CAN_MOSTAT45_ADDR); /* "CAN Message Object 45" */
SFR_NOABS (CAN_MOSTAT46, CAN_MOSTATm_t, CAN_MOSTAT46_ADDR); /* "CAN Message Object 46" */
SFR_NOABS (CAN_MOSTAT47, CAN_MOSTATm_t, CAN_MOSTAT47_ADDR); /* "CAN Message Object 47" */
SFR_NOABS (CAN_MOSTAT48, CAN_MOSTATm_t, CAN_MOSTAT48_ADDR); /* "CAN Message Object 48" */
SFR_NOABS (CAN_MOSTAT49, CAN_MOSTATm_t, CAN_MOSTAT49_ADDR); /* "CAN Message Object 49" */
SFR_NOABS (CAN_MOSTAT5, CAN_MOSTATm_t, CAN_MOSTAT5_ADDR); /* "CAN Message Object 5" */
SFR_NOABS (CAN_MOSTAT50, CAN_MOSTATm_t, CAN_MOSTAT50_ADDR); /* "CAN Message Object 50" */
SFR_NOABS (CAN_MOSTAT51, CAN_MOSTATm_t, CAN_MOSTAT51_ADDR); /* "CAN Message Object 51" */
SFR_NOABS (CAN_MOSTAT52, CAN_MOSTATm_t, CAN_MOSTAT52_ADDR); /* "CAN Message Object 52" */
SFR_NOABS (CAN_MOSTAT53, CAN_MOSTATm_t, CAN_MOSTAT53_ADDR); /* "CAN Message Object 53" */
SFR_NOABS (CAN_MOSTAT54, CAN_MOSTATm_t, CAN_MOSTAT54_ADDR); /* "CAN Message Object 54" */
SFR_NOABS (CAN_MOSTAT55, CAN_MOSTATm_t, CAN_MOSTAT55_ADDR); /* "CAN Message Object 55" */
SFR_NOABS (CAN_MOSTAT56, CAN_MOSTATm_t, CAN_MOSTAT56_ADDR); /* "CAN Message Object 56" */
SFR_NOABS (CAN_MOSTAT57, CAN_MOSTATm_t, CAN_MOSTAT57_ADDR); /* "CAN Message Object 57" */
SFR_NOABS (CAN_MOSTAT58, CAN_MOSTATm_t, CAN_MOSTAT58_ADDR); /* "CAN Message Object 58" */
SFR_NOABS (CAN_MOSTAT59, CAN_MOSTATm_t, CAN_MOSTAT59_ADDR); /* "CAN Message Object 59" */
SFR_NOABS (CAN_MOSTAT6, CAN_MOSTATm_t, CAN_MOSTAT6_ADDR); /* "CAN Message Object 6" */
SFR_NOABS (CAN_MOSTAT60, CAN_MOSTATm_t, CAN_MOSTAT60_ADDR); /* "CAN Message Object 60" */
SFR_NOABS (CAN_MOSTAT61, CAN_MOSTATm_t, CAN_MOSTAT61_ADDR); /* "CAN Message Object 61" */
SFR_NOABS (CAN_MOSTAT62, CAN_MOSTATm_t, CAN_MOSTAT62_ADDR); /* "CAN Message Object 62" */
SFR_NOABS (CAN_MOSTAT63, CAN_MOSTATm_t, CAN_MOSTAT63_ADDR); /* "CAN Message Object 63" */
SFR_NOABS (CAN_MOSTAT64, CAN_MOSTATm_t, CAN_MOSTAT64_ADDR); /* "CAN Message Object 64" */
SFR_NOABS (CAN_MOSTAT65, CAN_MOSTATm_t, CAN_MOSTAT65_ADDR); /* "CAN Message Object 65" */
SFR_NOABS (CAN_MOSTAT66, CAN_MOSTATm_t, CAN_MOSTAT66_ADDR); /* "CAN Message Object 66" */
SFR_NOABS (CAN_MOSTAT67, CAN_MOSTATm_t, CAN_MOSTAT67_ADDR); /* "CAN Message Object 67" */
SFR_NOABS (CAN_MOSTAT68, CAN_MOSTATm_t, CAN_MOSTAT68_ADDR); /* "CAN Message Object 68" */
SFR_NOABS (CAN_MOSTAT69, CAN_MOSTATm_t, CAN_MOSTAT69_ADDR); /* "CAN Message Object 69" */
SFR_NOABS (CAN_MOSTAT7, CAN_MOSTATm_t, CAN_MOSTAT7_ADDR); /* "CAN Message Object 7" */
SFR_NOABS (CAN_MOSTAT70, CAN_MOSTATm_t, CAN_MOSTAT70_ADDR); /* "CAN Message Object 70" */
SFR_NOABS (CAN_MOSTAT71, CAN_MOSTATm_t, CAN_MOSTAT71_ADDR); /* "CAN Message Object 71" */
SFR_NOABS (CAN_MOSTAT72, CAN_MOSTATm_t, CAN_MOSTAT72_ADDR); /* "CAN Message Object 72" */
SFR_NOABS (CAN_MOSTAT73, CAN_MOSTATm_t, CAN_MOSTAT73_ADDR); /* "CAN Message Object 73" */
SFR_NOABS (CAN_MOSTAT74, CAN_MOSTATm_t, CAN_MOSTAT74_ADDR); /* "CAN Message Object 74" */
SFR_NOABS (CAN_MOSTAT75, CAN_MOSTATm_t, CAN_MOSTAT75_ADDR); /* "CAN Message Object 75" */
SFR_NOABS (CAN_MOSTAT76, CAN_MOSTATm_t, CAN_MOSTAT76_ADDR); /* "CAN Message Object 76" */
SFR_NOABS (CAN_MOSTAT77, CAN_MOSTATm_t, CAN_MOSTAT77_ADDR); /* "CAN Message Object 77" */
SFR_NOABS (CAN_MOSTAT78, CAN_MOSTATm_t, CAN_MOSTAT78_ADDR); /* "CAN Message Object 78" */
SFR_NOABS (CAN_MOSTAT79, CAN_MOSTATm_t, CAN_MOSTAT79_ADDR); /* "CAN Message Object 79" */
SFR_NOABS (CAN_MOSTAT8, CAN_MOSTATm_t, CAN_MOSTAT8_ADDR); /* "CAN Message Object 8" */
SFR_NOABS (CAN_MOSTAT80, CAN_MOSTATm_t, CAN_MOSTAT80_ADDR); /* "CAN Message Object 80" */
SFR_NOABS (CAN_MOSTAT81, CAN_MOSTATm_t, CAN_MOSTAT81_ADDR); /* "CAN Message Object 81" */
SFR_NOABS (CAN_MOSTAT82, CAN_MOSTATm_t, CAN_MOSTAT82_ADDR); /* "CAN Message Object 82" */
SFR_NOABS (CAN_MOSTAT83, CAN_MOSTATm_t, CAN_MOSTAT83_ADDR); /* "CAN Message Object 83" */
SFR_NOABS (CAN_MOSTAT84, CAN_MOSTATm_t, CAN_MOSTAT84_ADDR); /* "CAN Message Object 84" */
SFR_NOABS (CAN_MOSTAT85, CAN_MOSTATm_t, CAN_MOSTAT85_ADDR); /* "CAN Message Object 85" */
SFR_NOABS (CAN_MOSTAT86, CAN_MOSTATm_t, CAN_MOSTAT86_ADDR); /* "CAN Message Object 86" */
SFR_NOABS (CAN_MOSTAT87, CAN_MOSTATm_t, CAN_MOSTAT87_ADDR); /* "CAN Message Object 87" */
SFR_NOABS (CAN_MOSTAT88, CAN_MOSTATm_t, CAN_MOSTAT88_ADDR); /* "CAN Message Object 88" */
SFR_NOABS (CAN_MOSTAT89, CAN_MOSTATm_t, CAN_MOSTAT89_ADDR); /* "CAN Message Object 89" */
SFR_NOABS (CAN_MOSTAT9, CAN_MOSTATm_t, CAN_MOSTAT9_ADDR); /* "CAN Message Object 9" */
SFR_NOABS (CAN_MOSTAT90, CAN_MOSTATm_t, CAN_MOSTAT90_ADDR); /* "CAN Message Object 90" */
SFR_NOABS (CAN_MOSTAT91, CAN_MOSTATm_t, CAN_MOSTAT91_ADDR); /* "CAN Message Object 91" */
SFR_NOABS (CAN_MOSTAT92, CAN_MOSTATm_t, CAN_MOSTAT92_ADDR); /* "CAN Message Object 92" */
SFR_NOABS (CAN_MOSTAT93, CAN_MOSTATm_t, CAN_MOSTAT93_ADDR); /* "CAN Message Object 93" */
SFR_NOABS (CAN_MOSTAT94, CAN_MOSTATm_t, CAN_MOSTAT94_ADDR); /* "CAN Message Object 94" */
SFR_NOABS (CAN_MOSTAT95, CAN_MOSTATm_t, CAN_MOSTAT95_ADDR); /* "CAN Message Object 95" */
SFR_NOABS (CAN_MSID0, CAN_MSIDm_t, CAN_MSID0_ADDR); /* "CAN Message Index Register 0" */
SFR_NOABS (CAN_MSID1, CAN_MSIDm_t, CAN_MSID1_ADDR); /* "CAN Message Index Register 1" */
SFR_NOABS (CAN_MSID2, CAN_MSIDm_t, CAN_MSID2_ADDR); /* "CAN Message Index Register 2" */
SFR_NOABS (CAN_MSID3, CAN_MSIDm_t, CAN_MSID3_ADDR); /* "CAN Message Index Register 3" */
SFR_NOABS (CAN_MSID4, CAN_MSIDm_t, CAN_MSID4_ADDR); /* "CAN Message Index Register 4" */
SFR_NOABS (CAN_MSID5, CAN_MSIDm_t, CAN_MSID5_ADDR); /* "CAN Message Index Register 5" */
SFR_NOABS (CAN_MSID6, CAN_MSIDm_t, CAN_MSID6_ADDR); /* "CAN Message Index Register 6" */
SFR_NOABS (CAN_MSID7, CAN_MSIDm_t, CAN_MSID7_ADDR); /* "CAN Message Index Register 7" */
SFR_NOABS (CAN_MSIMASK, CAN_MSIMASK_t, CAN_MSIMASK_ADDR); /* "CAN Message Index Mask Register" */
SFR_NOABS (CAN_MSPND0, CAN_MSPNDm_t, CAN_MSPND0_ADDR); /* "CAN Message Pending Register 0" */
SFR_NOABS (CAN_MSPND1, CAN_MSPNDm_t, CAN_MSPND1_ADDR); /* "CAN Message Pending Register 1" */
SFR_NOABS (CAN_MSPND2, CAN_MSPNDm_t, CAN_MSPND2_ADDR); /* "CAN Message Pending Register 2" */
SFR_NOABS (CAN_MSPND3, CAN_MSPNDm_t, CAN_MSPND3_ADDR); /* "CAN Message Pending Register 3" */
SFR_NOABS (CAN_MSPND4, CAN_MSPNDm_t, CAN_MSPND4_ADDR); /* "CAN Message Pending Register 4" */
SFR_NOABS (CAN_MSPND5, CAN_MSPNDm_t, CAN_MSPND5_ADDR); /* "CAN Message Pending Register 5" */
SFR_NOABS (CAN_MSPND6, CAN_MSPNDm_t, CAN_MSPND6_ADDR); /* "CAN Message Pending Register 6" */
SFR_NOABS (CAN_MSPND7, CAN_MSPNDm_t, CAN_MSPND7_ADDR); /* "CAN Message Pending Register 7" */
SFR_NOABS (CAN_NBTR0, CAN_NBTRm_t, CAN_NBTR0_ADDR); /* "CAN Node 0 Bit Timing Register" */
SFR_NOABS (CAN_NBTR1, CAN_NBTRm_t, CAN_NBTR1_ADDR); /* "CAN Node 1 Bit Timing Register" */
SFR_NOABS (CAN_NBTR3, CAN_NBTRm_t, CAN_NBTR3_ADDR); /* "CAN Node 3 Bit Timing Register" */
SFR_NOABS (CAN_NCR0, CAN_NCRm_t, CAN_NCR0_ADDR);  /* "CAN Node 0 Control Register" */
SFR_NOABS (CAN_NCR1, CAN_NCRm_t, CAN_NCR1_ADDR);  /* "CAN Node 1 Control Register" */
SFR_NOABS (CAN_NCR3, CAN_NCRm_t, CAN_NCR3_ADDR);  /* "CAN Node 3 Control Register" */
SFR_NOABS (CAN_NECNT0, CAN_NECNTm_t, CAN_NECNT0_ADDR); /* "CAN Node 0 Error Counter Register" */
SFR_NOABS (CAN_NECNT1, CAN_NECNTm_t, CAN_NECNT1_ADDR); /* "CAN Node 1 Error Counter Register" */
SFR_NOABS (CAN_NECNT3, CAN_NECNTm_t, CAN_NECNT3_ADDR); /* "CAN Node 3 Error Counter Register" */
SFR_NOABS (CAN_NFCR0, CAN_NFCRm_t, CAN_NFCR0_ADDR); /* "CAN Node 0 Frame Counter Register" */
SFR_NOABS (CAN_NFCR1, CAN_NFCRm_t, CAN_NFCR1_ADDR); /* "CAN Node 1 Frame Counter Register" */
SFR_NOABS (CAN_NFCR3, CAN_NFCRm_t, CAN_NFCR3_ADDR); /* "CAN Node 3 Frame Counter Register" */
SFR_NOABS (CAN_NIPR0, CAN_NIPRm_t, CAN_NIPR0_ADDR); /* "CAN Node 0 Interrupt Pointer Register" */
SFR_NOABS (CAN_NIPR1, CAN_NIPRm_t, CAN_NIPR1_ADDR); /* "CAN Node 1 Interrupt Pointer Register" */
SFR_NOABS (CAN_NIPR3, CAN_NIPRm_t, CAN_NIPR3_ADDR); /* "CAN Node 3 Interrupt Pointer Register" */
SFR_NOABS (CAN_NPCR0, CAN_NPCRm_t, CAN_NPCR0_ADDR); /* "CAN Node 0 Port Control Register" */
SFR_NOABS (CAN_NPCR1, CAN_NPCRm_t, CAN_NPCR1_ADDR); /* "CAN Node 1 Port Control Register" */
SFR_NOABS (CAN_NPCR3, CAN_NPCRm_t, CAN_NPCR3_ADDR); /* "CAN Node 3 Port Control Register" */
SFR_NOABS (CAN_NSR0, CAN_NSRm_t, CAN_NSR0_ADDR);  /* "CAN Node 0 Status Register" */
SFR_NOABS (CAN_NSR1, CAN_NSRm_t, CAN_NSR1_ADDR);  /* "CAN Node 1 Status Register" */
SFR_NOABS (CAN_NSR3, CAN_NSRm_t, CAN_NSR3_ADDR);  /* "CAN Node 3 Status Register" */
SFR_NOABS (CAN_PANCTR, CAN_PANCTR_t, CAN_PANCTR_ADDR); /* "CAN Panel Control Register" */
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


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_CAN_H_ (block "CAN") */


