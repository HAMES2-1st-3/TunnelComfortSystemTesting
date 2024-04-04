/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_LTCA2_SHAREMASKS_H_
#define _HAVE_TRICORE_LTCA2_SHAREMASKS_H_


/****************** Masks for LTCA2_LTCCTRm_t **********************/
/*
   LTCA2_LTCCTR00        "LTCA2 Local Timer Cell Control Register 00"
   LTCA2_LTCCTR01        "LTCA2 Local Timer Cell Control Register 01"
   LTCA2_LTCCTR02        "LTCA2 Local Timer Cell Control Register 02"
   LTCA2_LTCCTR03        "LTCA2 Local Timer Cell Control Register 03"
   LTCA2_LTCCTR04        "LTCA2 Local Timer Cell Control Register 04"
   LTCA2_LTCCTR05        "LTCA2 Local Timer Cell Control Register 05"
   LTCA2_LTCCTR06        "LTCA2 Local Timer Cell Control Register 06"
   LTCA2_LTCCTR07        "LTCA2 Local Timer Cell Control Register 07"
   LTCA2_LTCCTR08        "LTCA2 Local Timer Cell Control Register 08"
   LTCA2_LTCCTR09        "LTCA2 Local Timer Cell Control Register 09"
   LTCA2_LTCCTR10        "LTCA2 Local Timer Cell Control Register 10"
   LTCA2_LTCCTR11        "LTCA2 Local Timer Cell Control Register 11"
   LTCA2_LTCCTR12        "LTCA2 Local Timer Cell Control Register 12"
   LTCA2_LTCCTR13        "LTCA2 Local Timer Cell Control Register 13"
   LTCA2_LTCCTR14        "LTCA2 Local Timer Cell Control Register 14"
   LTCA2_LTCCTR15        "LTCA2 Local Timer Cell Control Register 15"
   LTCA2_LTCCTR16        "LTCA2 Local Timer Cell Control Register 16"
   LTCA2_LTCCTR17        "LTCA2 Local Timer Cell Control Register 17"
   LTCA2_LTCCTR18        "LTCA2 Local Timer Cell Control Register 18"
   LTCA2_LTCCTR19        "LTCA2 Local Timer Cell Control Register 19"
   LTCA2_LTCCTR20        "LTCA2 Local Timer Cell Control Register 20"
   LTCA2_LTCCTR21        "LTCA2 Local Timer Cell Control Register 21"
   LTCA2_LTCCTR22        "LTCA2 Local Timer Cell Control Register 22"
   LTCA2_LTCCTR23        "LTCA2 Local Timer Cell Control Register 23"
   LTCA2_LTCCTR24        "LTCA2 Local Timer Cell Control Register 24"
   LTCA2_LTCCTR25        "LTCA2 Local Timer Cell Control Register 25"
   LTCA2_LTCCTR26        "LTCA2 Local Timer Cell Control Register 26"
   LTCA2_LTCCTR27        "LTCA2 Local Timer Cell Control Register 27"
   LTCA2_LTCCTR28        "LTCA2 Local Timer Cell Control Register 28"
   LTCA2_LTCCTR29        "LTCA2 Local Timer Cell Control Register 29"
   LTCA2_LTCCTR30        "LTCA2 Local Timer Cell Control Register 30"
   LTCA2_LTCCTR31        "LTCA2 Local Timer Cell Control Register 31"
   LTCA2_LTCCTR32        "LTCA2 Local Timer Cell Control Register 32"
   LTCA2_LTCCTR33        "LTCA2 Local Timer Cell Control Register 33"
   LTCA2_LTCCTR34        "LTCA2 Local Timer Cell Control Register 34"
   LTCA2_LTCCTR35        "LTCA2 Local Timer Cell Control Register 35"
   LTCA2_LTCCTR36        "LTCA2 Local Timer Cell Control Register 36"
   LTCA2_LTCCTR37        "LTCA2 Local Timer Cell Control Register 37"
   LTCA2_LTCCTR38        "LTCA2 Local Timer Cell Control Register 38"
   LTCA2_LTCCTR39        "LTCA2 Local Timer Cell Control Register 39"
   LTCA2_LTCCTR40        "LTCA2 Local Timer Cell Control Register 40"
   LTCA2_LTCCTR41        "LTCA2 Local Timer Cell Control Register 41"
   LTCA2_LTCCTR42        "LTCA2 Local Timer Cell Control Register 42"
   LTCA2_LTCCTR43        "LTCA2 Local Timer Cell Control Register 43"
   LTCA2_LTCCTR44        "LTCA2 Local Timer Cell Control Register 44"
   LTCA2_LTCCTR45        "LTCA2 Local Timer Cell Control Register 45"
   LTCA2_LTCCTR46        "LTCA2 Local Timer Cell Control Register 46"
   LTCA2_LTCCTR47        "LTCA2 Local Timer Cell Control Register 47"
   LTCA2_LTCCTR48        "LTCA2 Local Timer Cell Control Register 48"
   LTCA2_LTCCTR49        "LTCA2 Local Timer Cell Control Register 49"
   LTCA2_LTCCTR50        "LTCA2 Local Timer Cell Control Register 50"
   LTCA2_LTCCTR51        "LTCA2 Local Timer Cell Control Register 51"
   LTCA2_LTCCTR52        "LTCA2 Local Timer Cell Control Register 52"
   LTCA2_LTCCTR53        "LTCA2 Local Timer Cell Control Register 53"
   LTCA2_LTCCTR54        "LTCA2 Local Timer Cell Control Register 54"
   LTCA2_LTCCTR55        "LTCA2 Local Timer Cell Control Register 55"
   LTCA2_LTCCTR56        "LTCA2 Local Timer Cell Control Register 56"
   LTCA2_LTCCTR57        "LTCA2 Local Timer Cell Control Register 57"
   LTCA2_LTCCTR58        "LTCA2 Local Timer Cell Control Register 58"
   LTCA2_LTCCTR59        "LTCA2 Local Timer Cell Control Register 59"
   LTCA2_LTCCTR60        "LTCA2 Local Timer Cell Control Register 60"
   LTCA2_LTCCTR61        "LTCA2 Local Timer Cell Control Register 61"
   LTCA2_LTCCTR62        "LTCA2 Local Timer Cell Control Register 62"
*/
/**********************************************************/

#define LTCA2_LTCCTRm_MASK              0x0000ffff
#define LTCA2_LTCCTRm_MOD_MASK          0x00000003
#define LTCA2_LTCCTRm_MOD_SHIFT         0
#define LTCA2_LTCCTRm_OSM_MASK          0x00000004
#define LTCA2_LTCCTRm_OSM_SHIFT         2
#define LTCA2_LTCCTRm_REN_MASK          0x00000008
#define LTCA2_LTCCTRm_REN_SHIFT         3
#define LTCA2_LTCCTRm_RED_MASK          0x00000010
#define LTCA2_LTCCTRm_RED_SHIFT         4
#define LTCA2_LTCCTRm_FED_MASK          0x00000020
#define LTCA2_LTCCTRm_FED_SHIFT         5
#define LTCA2_LTCCTRm_SLO_MASK          0x00000040
#define LTCA2_LTCCTRm_SLO_SHIFT         6
#define LTCA2_LTCCTRm_CUDCLR_MASK       0x00000080
#define LTCA2_LTCCTRm_CUDCLR_SHIFT      7
#define LTCA2_LTCCTRm_ILM_MASK          0x00000100
#define LTCA2_LTCCTRm_ILM_SHIFT         8
#define LTCA2_LTCCTRm_CUD_MASK          0x00000200
#define LTCA2_LTCCTRm_CUD_SHIFT         9
#define LTCA2_LTCCTRm_CEN_MASK          0x00000400
#define LTCA2_LTCCTRm_CEN_SHIFT         10
#define LTCA2_LTCCTRm_OCM_MASK          0x00003800
#define LTCA2_LTCCTRm_OCM_SHIFT         11
#define LTCA2_LTCCTRm_OIA_MASK          0x00004000
#define LTCA2_LTCCTRm_OIA_SHIFT         14
#define LTCA2_LTCCTRm_OUT_MASK          0x00008000
#define LTCA2_LTCCTRm_OUT_SHIFT         15



/****************** Masks for LTCA2_LTCXRm_t **********************/
/*
   LTCA2_LTCXR00         "LTCA2 Local Timer Cell X Register 00"
   LTCA2_LTCXR01         "LTCA2 Local Timer Cell X Register 01"
   LTCA2_LTCXR02         "LTCA2 Local Timer Cell X Register 02"
   LTCA2_LTCXR03         "LTCA2 Local Timer Cell X Register 03"
   LTCA2_LTCXR04         "LTCA2 Local Timer Cell X Register 04"
   LTCA2_LTCXR05         "LTCA2 Local Timer Cell X Register 05"
   LTCA2_LTCXR06         "LTCA2 Local Timer Cell X Register 06"
   LTCA2_LTCXR07         "LTCA2 Local Timer Cell X Register 07"
   LTCA2_LTCXR08         "LTCA2 Local Timer Cell X Register 08"
   LTCA2_LTCXR09         "LTCA2 Local Timer Cell X Register 09"
   LTCA2_LTCXR10         "LTCA2 Local Timer Cell X Register 10"
   LTCA2_LTCXR11         "LTCA2 Local Timer Cell X Register 11"
   LTCA2_LTCXR12         "LTCA2 Local Timer Cell X Register 12"
   LTCA2_LTCXR13         "LTCA2 Local Timer Cell X Register 13"
   LTCA2_LTCXR14         "LTCA2 Local Timer Cell X Register 14"
   LTCA2_LTCXR15         "LTCA2 Local Timer Cell X Register 15"
   LTCA2_LTCXR16         "LTCA2 Local Timer Cell X Register 16"
   LTCA2_LTCXR17         "LTCA2 Local Timer Cell X Register 17"
   LTCA2_LTCXR18         "LTCA2 Local Timer Cell X Register 18"
   LTCA2_LTCXR19         "LTCA2 Local Timer Cell X Register 19"
   LTCA2_LTCXR20         "LTCA2 Local Timer Cell X Register 20"
   LTCA2_LTCXR21         "LTCA2 Local Timer Cell X Register 21"
   LTCA2_LTCXR22         "LTCA2 Local Timer Cell X Register 22"
   LTCA2_LTCXR23         "LTCA2 Local Timer Cell X Register 23"
   LTCA2_LTCXR24         "LTCA2 Local Timer Cell X Register 24"
   LTCA2_LTCXR25         "LTCA2 Local Timer Cell X Register 25"
   LTCA2_LTCXR26         "LTCA2 Local Timer Cell X Register 26"
   LTCA2_LTCXR27         "LTCA2 Local Timer Cell X Register 27"
   LTCA2_LTCXR28         "LTCA2 Local Timer Cell X Register 28"
   LTCA2_LTCXR29         "LTCA2 Local Timer Cell X Register 29"
   LTCA2_LTCXR30         "LTCA2 Local Timer Cell X Register 30"
   LTCA2_LTCXR31         "LTCA2 Local Timer Cell X Register 31"
   LTCA2_LTCXR32         "LTCA2 Local Timer Cell X Register 32"
   LTCA2_LTCXR33         "LTCA2 Local Timer Cell X Register 33"
   LTCA2_LTCXR34         "LTCA2 Local Timer Cell X Register 34"
   LTCA2_LTCXR35         "LTCA2 Local Timer Cell X Register 35"
   LTCA2_LTCXR36         "LTCA2 Local Timer Cell X Register 36"
   LTCA2_LTCXR37         "LTCA2 Local Timer Cell X Register 37"
   LTCA2_LTCXR38         "LTCA2 Local Timer Cell X Register 38"
   LTCA2_LTCXR39         "LTCA2 Local Timer Cell X Register 39"
   LTCA2_LTCXR40         "LTCA2 Local Timer Cell X Register 40"
   LTCA2_LTCXR41         "LTCA2 Local Timer Cell X Register 41"
   LTCA2_LTCXR42         "LTCA2 Local Timer Cell X Register 42"
   LTCA2_LTCXR43         "LTCA2 Local Timer Cell X Register 43"
   LTCA2_LTCXR44         "LTCA2 Local Timer Cell X Register 44"
   LTCA2_LTCXR45         "LTCA2 Local Timer Cell X Register 45"
   LTCA2_LTCXR46         "LTCA2 Local Timer Cell X Register 46"
   LTCA2_LTCXR47         "LTCA2 Local Timer Cell X Register 47"
   LTCA2_LTCXR48         "LTCA2 Local Timer Cell X Register 48"
   LTCA2_LTCXR49         "LTCA2 Local Timer Cell X Register 49"
   LTCA2_LTCXR50         "LTCA2 Local Timer Cell X Register 50"
   LTCA2_LTCXR51         "LTCA2 Local Timer Cell X Register 51"
   LTCA2_LTCXR52         "LTCA2 Local Timer Cell X Register 52"
   LTCA2_LTCXR53         "LTCA2 Local Timer Cell X Register 53"
   LTCA2_LTCXR54         "LTCA2 Local Timer Cell X Register 54"
   LTCA2_LTCXR55         "LTCA2 Local Timer Cell X Register 55"
   LTCA2_LTCXR56         "LTCA2 Local Timer Cell X Register 56"
   LTCA2_LTCXR57         "LTCA2 Local Timer Cell X Register 57"
   LTCA2_LTCXR58         "LTCA2 Local Timer Cell X Register 58"
   LTCA2_LTCXR59         "LTCA2 Local Timer Cell X Register 59"
   LTCA2_LTCXR60         "LTCA2 Local Timer Cell X Register 60"
   LTCA2_LTCXR61         "LTCA2 Local Timer Cell X Register 61"
   LTCA2_LTCXR62         "LTCA2 Local Timer Cell X Register 62"
*/
/**********************************************************/

#define LTCA2_LTCXRm_MASK               0x0000ffff
#define LTCA2_LTCXRm_X_MASK             0x0000ffff
#define LTCA2_LTCXRm_X_SHIFT            0



/****************** Masks for LTCA2_SRCm_t **********************/
/*
   LTCA2_SRC00           "LTCA2 Service Request Control Register 00"
   LTCA2_SRC01           "LTCA2 Service Request Control Register 01"
   LTCA2_SRC02           "LTCA2 Service Request Control Register 02"
   LTCA2_SRC03           "LTCA2 Service Request Control Register 03"
   LTCA2_SRC04           "LTCA2 Service Request Control Register 04"
   LTCA2_SRC05           "LTCA2 Service Request Control Register 05"
   LTCA2_SRC06           "LTCA2 Service Request Control Register 06"
   LTCA2_SRC07           "LTCA2 Service Request Control Register 07"
   LTCA2_SRC08           "LTCA2 Service Request Control Register 08"
   LTCA2_SRC09           "LTCA2 Service Request Control Register 09"
   LTCA2_SRC10           "LTCA2 Service Request Control Register 10"
   LTCA2_SRC11           "LTCA2 Service Request Control Register 11"
   LTCA2_SRC12           "LTCA2 Service Request Control Register 12"
   LTCA2_SRC13           "LTCA2 Service Request Control Register 13"
   LTCA2_SRC14           "LTCA2 Service Request Control Register 14"
   LTCA2_SRC15           "LTCA2 Service Request Control Register 15"
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
#define LTCA2_SRSCm_LTC00_MASK          0x00000001
#define LTCA2_SRSCm_LTC00_SHIFT         0
#define LTCA2_SRSCm_LTC01_MASK          0x00000002
#define LTCA2_SRSCm_LTC01_SHIFT         1
#define LTCA2_SRSCm_LTC02_MASK          0x00000004
#define LTCA2_SRSCm_LTC02_SHIFT         2
#define LTCA2_SRSCm_LTC03_MASK          0x00000008
#define LTCA2_SRSCm_LTC03_SHIFT         3
#define LTCA2_SRSCm_LTC04_MASK          0x00000010
#define LTCA2_SRSCm_LTC04_SHIFT         4
#define LTCA2_SRSCm_LTC05_MASK          0x00000020
#define LTCA2_SRSCm_LTC05_SHIFT         5
#define LTCA2_SRSCm_LTC06_MASK          0x00000040
#define LTCA2_SRSCm_LTC06_SHIFT         6
#define LTCA2_SRSCm_LTC07_MASK          0x00000080
#define LTCA2_SRSCm_LTC07_SHIFT         7
#define LTCA2_SRSCm_LTC08_MASK          0x00000100
#define LTCA2_SRSCm_LTC08_SHIFT         8
#define LTCA2_SRSCm_LTC09_MASK          0x00000200
#define LTCA2_SRSCm_LTC09_SHIFT         9
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
#define LTCA2_SRSSm_LTC00_MASK          0x00000001
#define LTCA2_SRSSm_LTC00_SHIFT         0
#define LTCA2_SRSSm_LTC01_MASK          0x00000002
#define LTCA2_SRSSm_LTC01_SHIFT         1
#define LTCA2_SRSSm_LTC02_MASK          0x00000004
#define LTCA2_SRSSm_LTC02_SHIFT         2
#define LTCA2_SRSSm_LTC03_MASK          0x00000008
#define LTCA2_SRSSm_LTC03_SHIFT         3
#define LTCA2_SRSSm_LTC04_MASK          0x00000010
#define LTCA2_SRSSm_LTC04_SHIFT         4
#define LTCA2_SRSSm_LTC05_MASK          0x00000020
#define LTCA2_SRSSm_LTC05_SHIFT         5
#define LTCA2_SRSSm_LTC06_MASK          0x00000040
#define LTCA2_SRSSm_LTC06_SHIFT         6
#define LTCA2_SRSSm_LTC07_MASK          0x00000080
#define LTCA2_SRSSm_LTC07_SHIFT         7
#define LTCA2_SRSSm_LTC08_MASK          0x00000100
#define LTCA2_SRSSm_LTC08_SHIFT         8
#define LTCA2_SRSSm_LTC09_MASK          0x00000200
#define LTCA2_SRSSm_LTC09_SHIFT         9
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

