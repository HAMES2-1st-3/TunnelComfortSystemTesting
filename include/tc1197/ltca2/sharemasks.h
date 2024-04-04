/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
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




#endif /* _HAVE_TRICORE_LTCA2_SHAREMASKS_H_ */

