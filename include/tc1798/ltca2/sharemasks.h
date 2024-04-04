/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_LTCA2_SHAREMASKS_H_
#define _HAVE_TRICORE_LTCA2_SHAREMASKS_H_


/****************** Masks for LTCA2_LTCCTRm_t **********************/
/*
   LTCA2_LTCCTR00        "Local Timer Cell Control Register 00"
   LTCA2_LTCCTR01        "Local Timer Cell Control Register 01"
   LTCA2_LTCCTR02        "Local Timer Cell Control Register 02"
   LTCA2_LTCCTR03        "Local Timer Cell Control Register 03"
   LTCA2_LTCCTR04        "Local Timer Cell Control Register 04"
   LTCA2_LTCCTR05        "Local Timer Cell Control Register 05"
   LTCA2_LTCCTR06        "Local Timer Cell Control Register 06"
   LTCA2_LTCCTR07        "Local Timer Cell Control Register 07"
   LTCA2_LTCCTR08        "Local Timer Cell Control Register 08"
   LTCA2_LTCCTR09        "Local Timer Cell Control Register 09"
   LTCA2_LTCCTR10        "Local Timer Cell Control Register 10"
   LTCA2_LTCCTR11        "Local Timer Cell Control Register 11"
   LTCA2_LTCCTR12        "Local Timer Cell Control Register 12"
   LTCA2_LTCCTR13        "Local Timer Cell Control Register 13"
   LTCA2_LTCCTR14        "Local Timer Cell Control Register 14"
   LTCA2_LTCCTR15        "Local Timer Cell Control Register 15"
   LTCA2_LTCCTR16        "Local Timer Cell Control Register 16"
   LTCA2_LTCCTR17        "Local Timer Cell Control Register 17"
   LTCA2_LTCCTR18        "Local Timer Cell Control Register 18"
   LTCA2_LTCCTR19        "Local Timer Cell Control Register 19"
   LTCA2_LTCCTR20        "Local Timer Cell Control Register 20"
   LTCA2_LTCCTR21        "Local Timer Cell Control Register 21"
   LTCA2_LTCCTR22        "Local Timer Cell Control Register 22"
   LTCA2_LTCCTR23        "Local Timer Cell Control Register 23"
   LTCA2_LTCCTR24        "Local Timer Cell Control Register 24"
   LTCA2_LTCCTR25        "Local Timer Cell Control Register 25"
   LTCA2_LTCCTR26        "Local Timer Cell Control Register 26"
   LTCA2_LTCCTR27        "Local Timer Cell Control Register 27"
   LTCA2_LTCCTR28        "Local Timer Cell Control Register 28"
   LTCA2_LTCCTR29        "Local Timer Cell Control Register 29"
   LTCA2_LTCCTR30        "Local Timer Cell Control Register 30"
   LTCA2_LTCCTR31        "Local Timer Cell Control Register 31"
   LTCA2_LTCCTR32        "Local Timer Cell Control Register 32"
   LTCA2_LTCCTR33        "Local Timer Cell Control Register 33"
   LTCA2_LTCCTR34        "Local Timer Cell Control Register 34"
   LTCA2_LTCCTR35        "Local Timer Cell Control Register 35"
   LTCA2_LTCCTR36        "Local Timer Cell Control Register 36"
   LTCA2_LTCCTR37        "Local Timer Cell Control Register 37"
   LTCA2_LTCCTR38        "Local Timer Cell Control Register 38"
   LTCA2_LTCCTR39        "Local Timer Cell Control Register 39"
   LTCA2_LTCCTR40        "Local Timer Cell Control Register 40"
   LTCA2_LTCCTR41        "Local Timer Cell Control Register 41"
   LTCA2_LTCCTR42        "Local Timer Cell Control Register 42"
   LTCA2_LTCCTR43        "Local Timer Cell Control Register 43"
   LTCA2_LTCCTR44        "Local Timer Cell Control Register 44"
   LTCA2_LTCCTR45        "Local Timer Cell Control Register 45"
   LTCA2_LTCCTR46        "Local Timer Cell Control Register 46"
   LTCA2_LTCCTR47        "Local Timer Cell Control Register 47"
   LTCA2_LTCCTR48        "Local Timer Cell Control Register 48"
   LTCA2_LTCCTR49        "Local Timer Cell Control Register 49"
   LTCA2_LTCCTR50        "Local Timer Cell Control Register 50"
   LTCA2_LTCCTR51        "Local Timer Cell Control Register 51"
   LTCA2_LTCCTR52        "Local Timer Cell Control Register 52"
   LTCA2_LTCCTR53        "Local Timer Cell Control Register 53"
   LTCA2_LTCCTR54        "Local Timer Cell Control Register 54"
   LTCA2_LTCCTR55        "Local Timer Cell Control Register 55"
   LTCA2_LTCCTR56        "Local Timer Cell Control Register 56"
   LTCA2_LTCCTR57        "Local Timer Cell Control Register 57"
   LTCA2_LTCCTR58        "Local Timer Cell Control Register 58"
   LTCA2_LTCCTR59        "Local Timer Cell Control Register 59"
   LTCA2_LTCCTR60        "Local Timer Cell Control Register 60"
   LTCA2_LTCCTR61        "Local Timer Cell Control Register 61"
   LTCA2_LTCCTR62        "Local Timer Cell Control Register 62"
*/
/**********************************************************/

#define LTCA2_LTCCTRm_CAPT_MASK         0x0001ffff
#define LTCA2_LTCCTRm_CAPT_MOD_MASK     0x00000003
#define LTCA2_LTCCTRm_CAPT_MOD_SHIFT    0
#define LTCA2_LTCCTRm_CAPT_OSM_MASK     0x00000004
#define LTCA2_LTCCTRm_CAPT_OSM_SHIFT    2
#define LTCA2_LTCCTRm_CAPT_REN_MASK     0x00000008
#define LTCA2_LTCCTRm_CAPT_REN_SHIFT    3
#define LTCA2_LTCCTRm_CAPT_RED_MASK     0x00000010
#define LTCA2_LTCCTRm_CAPT_RED_SHIFT    4
#define LTCA2_LTCCTRm_CAPT_FED_MASK     0x00000020
#define LTCA2_LTCCTRm_CAPT_FED_SHIFT    5
#define LTCA2_LTCCTRm_CAPT_BYP_MASK     0x00000040
#define LTCA2_LTCCTRm_CAPT_BYP_SHIFT    6
#define LTCA2_LTCCTRm_CAPT_EOA_MASK     0x00000080
#define LTCA2_LTCCTRm_CAPT_EOA_SHIFT    7
#define LTCA2_LTCCTRm_CAPT_ILM_MASK     0x00000100
#define LTCA2_LTCCTRm_CAPT_ILM_SHIFT    8
#define LTCA2_LTCCTRm_CAPT_SLL_MASK     0x00000200
#define LTCA2_LTCCTRm_CAPT_SLL_SHIFT    9
#define LTCA2_LTCCTRm_CAPT_CEN_MASK     0x00000400
#define LTCA2_LTCCTRm_CAPT_CEN_SHIFT    10
#define LTCA2_LTCCTRm_CAPT_OCM_MASK     0x00003800
#define LTCA2_LTCCTRm_CAPT_OCM_SHIFT    11
#define LTCA2_LTCCTRm_CAPT_OIA_MASK     0x00004000
#define LTCA2_LTCCTRm_CAPT_OIA_SHIFT    14
#define LTCA2_LTCCTRm_CAPT_OUT_MASK     0x00008000
#define LTCA2_LTCCTRm_CAPT_OUT_SHIFT    15
#define LTCA2_LTCCTRm_CAPT_GBYP_MASK    0x00010000
#define LTCA2_LTCCTRm_CAPT_GBYP_SHIFT   16

#define LTCA2_LTCCTRm_COMP_MASK         0x0001ffff
#define LTCA2_LTCCTRm_COMP_MOD_MASK     0x00000003
#define LTCA2_LTCCTRm_COMP_MOD_SHIFT    0
#define LTCA2_LTCCTRm_COMP_OSM_MASK     0x00000004
#define LTCA2_LTCCTRm_COMP_OSM_SHIFT    2
#define LTCA2_LTCCTRm_COMP_REN_MASK     0x00000008
#define LTCA2_LTCCTRm_COMP_REN_SHIFT    3
#define LTCA2_LTCCTRm_COMP_SOL_MASK     0x00000010
#define LTCA2_LTCCTRm_COMP_SOL_SHIFT    4
#define LTCA2_LTCCTRm_COMP_SOH_MASK     0x00000020
#define LTCA2_LTCCTRm_COMP_SOH_SHIFT    5
#define LTCA2_LTCCTRm_COMP_BYP_MASK     0x00000040
#define LTCA2_LTCCTRm_COMP_BYP_SHIFT    6
#define LTCA2_LTCCTRm_COMP_EOA_MASK     0x00000080
#define LTCA2_LTCCTRm_COMP_EOA_SHIFT    7
#define LTCA2_LTCCTRm_COMP_ILM_MASK     0x00000100
#define LTCA2_LTCCTRm_COMP_ILM_SHIFT    8
#define LTCA2_LTCCTRm_COMP_SLL_MASK     0x00000200
#define LTCA2_LTCCTRm_COMP_SLL_SHIFT    9
#define LTCA2_LTCCTRm_COMP_CEN_MASK     0x00000400
#define LTCA2_LTCCTRm_COMP_CEN_SHIFT    10
#define LTCA2_LTCCTRm_COMP_OCM_MASK     0x00003800
#define LTCA2_LTCCTRm_COMP_OCM_SHIFT    11
#define LTCA2_LTCCTRm_COMP_OIA_MASK     0x00004000
#define LTCA2_LTCCTRm_COMP_OIA_SHIFT    14
#define LTCA2_LTCCTRm_COMP_OUT_MASK     0x00008000
#define LTCA2_LTCCTRm_COMP_OUT_SHIFT    15
#define LTCA2_LTCCTRm_COMP_GBYP_MASK    0x00010000
#define LTCA2_LTCCTRm_COMP_GBYP_SHIFT   16

#define LTCA2_LTCCTRm_TIMER_MASK        0x0001ffff
#define LTCA2_LTCCTRm_TIMER_MOD_MASK    0x00000003
#define LTCA2_LTCCTRm_TIMER_MOD_SHIFT   0
#define LTCA2_LTCCTRm_TIMER_OSM_MASK    0x00000004
#define LTCA2_LTCCTRm_TIMER_OSM_SHIFT   2
#define LTCA2_LTCCTRm_TIMER_REN_MASK    0x00000008
#define LTCA2_LTCCTRm_TIMER_REN_SHIFT   3
#define LTCA2_LTCCTRm_TIMER_RED_MASK    0x00000010
#define LTCA2_LTCCTRm_TIMER_RED_SHIFT   4
#define LTCA2_LTCCTRm_TIMER_FED_MASK    0x00000020
#define LTCA2_LTCCTRm_TIMER_FED_SHIFT   5
#define LTCA2_LTCCTRm_TIMER_SLO_MASK    0x00000040
#define LTCA2_LTCCTRm_TIMER_SLO_SHIFT   6
#define LTCA2_LTCCTRm_TIMER_CUDCLR_MASK 0x00000080
#define LTCA2_LTCCTRm_TIMER_CUDCLR_SHIFT 7
#define LTCA2_LTCCTRm_TIMER_ILM_MASK    0x00000100
#define LTCA2_LTCCTRm_TIMER_ILM_SHIFT   8
#define LTCA2_LTCCTRm_TIMER_CUD_MASK    0x00000200
#define LTCA2_LTCCTRm_TIMER_CUD_SHIFT   9
#define LTCA2_LTCCTRm_TIMER_CEN_MASK    0x00000400
#define LTCA2_LTCCTRm_TIMER_CEN_SHIFT   10
#define LTCA2_LTCCTRm_TIMER_OCM_MASK    0x00003800
#define LTCA2_LTCCTRm_TIMER_OCM_SHIFT   11
#define LTCA2_LTCCTRm_TIMER_OIA_MASK    0x00004000
#define LTCA2_LTCCTRm_TIMER_OIA_SHIFT   14
#define LTCA2_LTCCTRm_TIMER_OUT_MASK    0x00008000
#define LTCA2_LTCCTRm_TIMER_OUT_SHIFT   15
#define LTCA2_LTCCTRm_TIMER_GBYP_MASK   0x00010000
#define LTCA2_LTCCTRm_TIMER_GBYP_SHIFT  16



/****************** Masks for LTCA2_LTCXRm_t **********************/
/*
   LTCA2_LTCXR00         "Local Timer Cell X Register 00"
   LTCA2_LTCXR01         "Local Timer Cell X Register 01"
   LTCA2_LTCXR02         "Local Timer Cell X Register 02"
   LTCA2_LTCXR03         "Local Timer Cell X Register 03"
   LTCA2_LTCXR04         "Local Timer Cell X Register 04"
   LTCA2_LTCXR05         "Local Timer Cell X Register 05"
   LTCA2_LTCXR06         "Local Timer Cell X Register 06"
   LTCA2_LTCXR07         "Local Timer Cell X Register 07"
   LTCA2_LTCXR08         "Local Timer Cell X Register 08"
   LTCA2_LTCXR09         "Local Timer Cell X Register 09"
   LTCA2_LTCXR10         "Local Timer Cell X Register 10"
   LTCA2_LTCXR11         "Local Timer Cell X Register 11"
   LTCA2_LTCXR12         "Local Timer Cell X Register 12"
   LTCA2_LTCXR13         "Local Timer Cell X Register 13"
   LTCA2_LTCXR14         "Local Timer Cell X Register 14"
   LTCA2_LTCXR15         "Local Timer Cell X Register 15"
   LTCA2_LTCXR16         "Local Timer Cell X Register 16"
   LTCA2_LTCXR17         "Local Timer Cell X Register 17"
   LTCA2_LTCXR18         "Local Timer Cell X Register 18"
   LTCA2_LTCXR19         "Local Timer Cell X Register 19"
   LTCA2_LTCXR20         "Local Timer Cell X Register 20"
   LTCA2_LTCXR21         "Local Timer Cell X Register 21"
   LTCA2_LTCXR22         "Local Timer Cell X Register 22"
   LTCA2_LTCXR23         "Local Timer Cell X Register 23"
   LTCA2_LTCXR24         "Local Timer Cell X Register 24"
   LTCA2_LTCXR25         "Local Timer Cell X Register 25"
   LTCA2_LTCXR26         "Local Timer Cell X Register 26"
   LTCA2_LTCXR27         "Local Timer Cell X Register 27"
   LTCA2_LTCXR28         "Local Timer Cell X Register 28"
   LTCA2_LTCXR29         "Local Timer Cell X Register 29"
   LTCA2_LTCXR30         "Local Timer Cell X Register 30"
   LTCA2_LTCXR31         "Local Timer Cell X Register 31"
   LTCA2_LTCXR32         "Local Timer Cell X Register 32"
   LTCA2_LTCXR33         "Local Timer Cell X Register 33"
   LTCA2_LTCXR34         "Local Timer Cell X Register 34"
   LTCA2_LTCXR35         "Local Timer Cell X Register 35"
   LTCA2_LTCXR36         "Local Timer Cell X Register 36"
   LTCA2_LTCXR37         "Local Timer Cell X Register 37"
   LTCA2_LTCXR38         "Local Timer Cell X Register 38"
   LTCA2_LTCXR39         "Local Timer Cell X Register 39"
   LTCA2_LTCXR40         "Local Timer Cell X Register 40"
   LTCA2_LTCXR41         "Local Timer Cell X Register 41"
   LTCA2_LTCXR42         "Local Timer Cell X Register 42"
   LTCA2_LTCXR43         "Local Timer Cell X Register 43"
   LTCA2_LTCXR44         "Local Timer Cell X Register 44"
   LTCA2_LTCXR45         "Local Timer Cell X Register 45"
   LTCA2_LTCXR46         "Local Timer Cell X Register 46"
   LTCA2_LTCXR47         "Local Timer Cell X Register 47"
   LTCA2_LTCXR48         "Local Timer Cell X Register 48"
   LTCA2_LTCXR49         "Local Timer Cell X Register 49"
   LTCA2_LTCXR50         "Local Timer Cell X Register 50"
   LTCA2_LTCXR51         "Local Timer Cell X Register 51"
   LTCA2_LTCXR52         "Local Timer Cell X Register 52"
   LTCA2_LTCXR53         "Local Timer Cell X Register 53"
   LTCA2_LTCXR54         "Local Timer Cell X Register 54"
   LTCA2_LTCXR55         "Local Timer Cell X Register 55"
   LTCA2_LTCXR56         "Local Timer Cell X Register 56"
   LTCA2_LTCXR57         "Local Timer Cell X Register 57"
   LTCA2_LTCXR58         "Local Timer Cell X Register 58"
   LTCA2_LTCXR59         "Local Timer Cell X Register 59"
   LTCA2_LTCXR60         "Local Timer Cell X Register 60"
   LTCA2_LTCXR61         "Local Timer Cell X Register 61"
   LTCA2_LTCXR62         "Local Timer Cell X Register 62"
*/
/**********************************************************/

#define LTCA2_LTCXRm_MASK               0x0000ffff
#define LTCA2_LTCXRm_X_MASK             0x0000ffff
#define LTCA2_LTCXRm_X_SHIFT            0



/****************** Masks for LTCA2_SRCm_t **********************/
/*
   LTCA2_SRC00           "LTCA2 Interrupt Service Request Control Register 00"
   LTCA2_SRC01           "LTCA2 Interrupt Service Request Control Register 01"
   LTCA2_SRC02           "LTCA2 Interrupt Service Request Control Register 02"
   LTCA2_SRC03           "LTCA2 Interrupt Service Request Control Register 03"
   LTCA2_SRC04           "LTCA2 Interrupt Service Request Control Register 04"
   LTCA2_SRC05           "LTCA2 Interrupt Service Request Control Register 05"
   LTCA2_SRC06           "LTCA2 Interrupt Service Request Control Register 06"
   LTCA2_SRC07           "LTCA2 Interrupt Service Request Control Register 07"
   LTCA2_SRC08           "LTCA2 Interrupt Service Request Control Register 08"
   LTCA2_SRC09           "LTCA2 Interrupt Service Request Control Register 09"
   LTCA2_SRC10           "LTCA2 Interrupt Service Request Control Register 10"
   LTCA2_SRC11           "LTCA2 Interrupt Service Request Control Register 11"
   LTCA2_SRC12           "LTCA2 Interrupt Service Request Control Register 12"
   LTCA2_SRC13           "LTCA2 Interrupt Service Request Control Register 13"
   LTCA2_SRC14           "LTCA2 Interrupt Service Request Control Register 14"
   LTCA2_SRC15           "LTCA2 Interrupt Service Request Control Register 15"
*/
/**********************************************************/

#define LTCA2_SRCm_MASK                 0x0000f4ff
#define LTCA2_SRCm_SRPN_MASK            0x000000ff
#define LTCA2_SRCm_SRPN_SHIFT           0
#define LTCA2_SRCm_TOS_MASK             0x00000400
#define LTCA2_SRCm_TOS_SHIFT            10
#define LTCA2_SRCm_SRE_MASK             0x00001000
#define LTCA2_SRCm_SRE_SHIFT            12
#define LTCA2_SRCm_SRR_MASK             0x00002000
#define LTCA2_SRCm_SRR_SHIFT            13
#define LTCA2_SRCm_CLRR_MASK            0x00004000
#define LTCA2_SRCm_CLRR_SHIFT           14
#define LTCA2_SRCm_SETR_MASK            0x00008000
#define LTCA2_SRCm_SETR_SHIFT           15



/****************** Masks for LTCA2_SRSCm_t **********************/
/*
   LTCA2_SRSC2           "LTCA2 Service Request State Clear Register 2"
   LTCA2_SRSC3           "LTCA2 Service Request State Clear Register 3"
*/
/**********************************************************/

#define LTCA2_SRSCm_MASK                0xffffffff
#define LTCA2_SRSCm_LTC0_MASK           0x00000001
#define LTCA2_SRSCm_LTC0_SHIFT          0
#define LTCA2_SRSCm_LTC1_MASK           0x00000002
#define LTCA2_SRSCm_LTC1_SHIFT          1
#define LTCA2_SRSCm_LTC2_MASK           0x00000004
#define LTCA2_SRSCm_LTC2_SHIFT          2
#define LTCA2_SRSCm_LTC3_MASK           0x00000008
#define LTCA2_SRSCm_LTC3_SHIFT          3
#define LTCA2_SRSCm_LTC4_MASK           0x00000010
#define LTCA2_SRSCm_LTC4_SHIFT          4
#define LTCA2_SRSCm_LTC5_MASK           0x00000020
#define LTCA2_SRSCm_LTC5_SHIFT          5
#define LTCA2_SRSCm_LTC6_MASK           0x00000040
#define LTCA2_SRSCm_LTC6_SHIFT          6
#define LTCA2_SRSCm_LTC7_MASK           0x00000080
#define LTCA2_SRSCm_LTC7_SHIFT          7
#define LTCA2_SRSCm_LTC8_MASK           0x00000100
#define LTCA2_SRSCm_LTC8_SHIFT          8
#define LTCA2_SRSCm_LTC9_MASK           0x00000200
#define LTCA2_SRSCm_LTC9_SHIFT          9
#define LTCA2_SRSCm_LTC10_MASK          0x00000400
#define LTCA2_SRSCm_LTC10_SHIFT         10
#define LTCA2_SRSCm_LTC11_MASK          0x00000800
#define LTCA2_SRSCm_LTC11_SHIFT         11
#define LTCA2_SRSCm_LTC12_MASK          0x00001000
#define LTCA2_SRSCm_LTC12_SHIFT         12
#define LTCA2_SRSCm_LTC13_MASK          0x00002000
#define LTCA2_SRSCm_LTC13_SHIFT         13
#define LTCA2_SRSCm_LTC14_MASK          0x00004000
#define LTCA2_SRSCm_LTC14_SHIFT         14
#define LTCA2_SRSCm_LTC15_MASK          0x00008000
#define LTCA2_SRSCm_LTC15_SHIFT         15
#define LTCA2_SRSCm_LTC16_MASK          0x00010000
#define LTCA2_SRSCm_LTC16_SHIFT         16
#define LTCA2_SRSCm_LTC17_MASK          0x00020000
#define LTCA2_SRSCm_LTC17_SHIFT         17
#define LTCA2_SRSCm_LTC18_MASK          0x00040000
#define LTCA2_SRSCm_LTC18_SHIFT         18
#define LTCA2_SRSCm_LTC19_MASK          0x00080000
#define LTCA2_SRSCm_LTC19_SHIFT         19
#define LTCA2_SRSCm_LTC20_MASK          0x00100000
#define LTCA2_SRSCm_LTC20_SHIFT         20
#define LTCA2_SRSCm_LTC21_MASK          0x00200000
#define LTCA2_SRSCm_LTC21_SHIFT         21
#define LTCA2_SRSCm_LTC22_MASK          0x00400000
#define LTCA2_SRSCm_LTC22_SHIFT         22
#define LTCA2_SRSCm_LTC23_MASK          0x00800000
#define LTCA2_SRSCm_LTC23_SHIFT         23
#define LTCA2_SRSCm_LTC24_MASK          0x01000000
#define LTCA2_SRSCm_LTC24_SHIFT         24
#define LTCA2_SRSCm_LTC25_MASK          0x02000000
#define LTCA2_SRSCm_LTC25_SHIFT         25
#define LTCA2_SRSCm_LTC26_MASK          0x04000000
#define LTCA2_SRSCm_LTC26_SHIFT         26
#define LTCA2_SRSCm_LTC27_MASK          0x08000000
#define LTCA2_SRSCm_LTC27_SHIFT         27
#define LTCA2_SRSCm_LTC28_MASK          0x10000000
#define LTCA2_SRSCm_LTC28_SHIFT         28
#define LTCA2_SRSCm_LTC29_MASK          0x20000000
#define LTCA2_SRSCm_LTC29_SHIFT         29
#define LTCA2_SRSCm_LTC30_MASK          0x40000000
#define LTCA2_SRSCm_LTC30_SHIFT         30
#define LTCA2_SRSCm_LTC31_MASK          0x80000000
#define LTCA2_SRSCm_LTC31_SHIFT         31



/****************** Masks for LTCA2_SRSSm_t **********************/
/*
   LTCA2_SRSS2           "LTCA2 Service Request State Set Register 2"
   LTCA2_SRSS3           "LTCA2 Service Request State Set Register 3"
*/
/**********************************************************/

#define LTCA2_SRSSm_MASK                0xffffffff
#define LTCA2_SRSSm_LTC0_MASK           0x00000001
#define LTCA2_SRSSm_LTC0_SHIFT          0
#define LTCA2_SRSSm_LTC1_MASK           0x00000002
#define LTCA2_SRSSm_LTC1_SHIFT          1
#define LTCA2_SRSSm_LTC2_MASK           0x00000004
#define LTCA2_SRSSm_LTC2_SHIFT          2
#define LTCA2_SRSSm_LTC3_MASK           0x00000008
#define LTCA2_SRSSm_LTC3_SHIFT          3
#define LTCA2_SRSSm_LTC4_MASK           0x00000010
#define LTCA2_SRSSm_LTC4_SHIFT          4
#define LTCA2_SRSSm_LTC5_MASK           0x00000020
#define LTCA2_SRSSm_LTC5_SHIFT          5
#define LTCA2_SRSSm_LTC6_MASK           0x00000040
#define LTCA2_SRSSm_LTC6_SHIFT          6
#define LTCA2_SRSSm_LTC7_MASK           0x00000080
#define LTCA2_SRSSm_LTC7_SHIFT          7
#define LTCA2_SRSSm_LTC8_MASK           0x00000100
#define LTCA2_SRSSm_LTC8_SHIFT          8
#define LTCA2_SRSSm_LTC9_MASK           0x00000200
#define LTCA2_SRSSm_LTC9_SHIFT          9
#define LTCA2_SRSSm_LTC10_MASK          0x00000400
#define LTCA2_SRSSm_LTC10_SHIFT         10
#define LTCA2_SRSSm_LTC11_MASK          0x00000800
#define LTCA2_SRSSm_LTC11_SHIFT         11
#define LTCA2_SRSSm_LTC12_MASK          0x00001000
#define LTCA2_SRSSm_LTC12_SHIFT         12
#define LTCA2_SRSSm_LTC13_MASK          0x00002000
#define LTCA2_SRSSm_LTC13_SHIFT         13
#define LTCA2_SRSSm_LTC14_MASK          0x00004000
#define LTCA2_SRSSm_LTC14_SHIFT         14
#define LTCA2_SRSSm_LTC15_MASK          0x00008000
#define LTCA2_SRSSm_LTC15_SHIFT         15
#define LTCA2_SRSSm_LTC16_MASK          0x00010000
#define LTCA2_SRSSm_LTC16_SHIFT         16
#define LTCA2_SRSSm_LTC17_MASK          0x00020000
#define LTCA2_SRSSm_LTC17_SHIFT         17
#define LTCA2_SRSSm_LTC18_MASK          0x00040000
#define LTCA2_SRSSm_LTC18_SHIFT         18
#define LTCA2_SRSSm_LTC19_MASK          0x00080000
#define LTCA2_SRSSm_LTC19_SHIFT         19
#define LTCA2_SRSSm_LTC20_MASK          0x00100000
#define LTCA2_SRSSm_LTC20_SHIFT         20
#define LTCA2_SRSSm_LTC21_MASK          0x00200000
#define LTCA2_SRSSm_LTC21_SHIFT         21
#define LTCA2_SRSSm_LTC22_MASK          0x00400000
#define LTCA2_SRSSm_LTC22_SHIFT         22
#define LTCA2_SRSSm_LTC23_MASK          0x00800000
#define LTCA2_SRSSm_LTC23_SHIFT         23
#define LTCA2_SRSSm_LTC24_MASK          0x01000000
#define LTCA2_SRSSm_LTC24_SHIFT         24
#define LTCA2_SRSSm_LTC25_MASK          0x02000000
#define LTCA2_SRSSm_LTC25_SHIFT         25
#define LTCA2_SRSSm_LTC26_MASK          0x04000000
#define LTCA2_SRSSm_LTC26_SHIFT         26
#define LTCA2_SRSSm_LTC27_MASK          0x08000000
#define LTCA2_SRSSm_LTC27_SHIFT         27
#define LTCA2_SRSSm_LTC28_MASK          0x10000000
#define LTCA2_SRSSm_LTC28_SHIFT         28
#define LTCA2_SRSSm_LTC29_MASK          0x20000000
#define LTCA2_SRSSm_LTC29_SHIFT         29
#define LTCA2_SRSSm_LTC30_MASK          0x40000000
#define LTCA2_SRSSm_LTC30_SHIFT         30
#define LTCA2_SRSSm_LTC31_MASK          0x80000000
#define LTCA2_SRSSm_LTC31_SHIFT         31




#endif /* _HAVE_TRICORE_LTCA2_SHAREMASKS_H_ */

