/* (c) 2000-2008 HighTec EDV-Systeme GmbH */

/* block "LTCA2" of TriCore TC1784 (78 SFRs) */

#include <tc1784/ltca2/addr.h>

#include <tc1784/ltca2/masks.h>
#include <tc1784/ltca2/sharemasks.h>

#ifndef NO_TRICORE_SFRTYPEDEFS

#include <tc1784/ltca2/types.h>
#include <tc1784/ltca2/sharetypes.h>

#ifndef _HAVE_TRICORE_LTCA2_H_
#define _HAVE_TRICORE_LTCA2_H_

#include <tricore-abs-noabs.h>

SFR_ABS (LTCA2_ID, LTCA2_ID_t, LTCA2_ID_ADDR);    /* "LTCA2 Identification Register" */
SFR_ABS (LTCA2_LTCCTR00, LTCA2_LTCCTRm_t, LTCA2_LTCCTR00_ADDR); /* "Local Timer Cell Control Register 00" */
SFR_ABS (LTCA2_LTCCTR01, LTCA2_LTCCTRm_t, LTCA2_LTCCTR01_ADDR); /* "Local Timer Cell Control Register 01" */
SFR_ABS (LTCA2_LTCCTR02, LTCA2_LTCCTRm_t, LTCA2_LTCCTR02_ADDR); /* "Local Timer Cell Control Register 02" */
SFR_ABS (LTCA2_LTCCTR03, LTCA2_LTCCTRm_t, LTCA2_LTCCTR03_ADDR); /* "Local Timer Cell Control Register 03" */
SFR_ABS (LTCA2_LTCCTR04, LTCA2_LTCCTRm_t, LTCA2_LTCCTR04_ADDR); /* "Local Timer Cell Control Register 04" */
SFR_ABS (LTCA2_LTCCTR05, LTCA2_LTCCTRm_t, LTCA2_LTCCTR05_ADDR); /* "Local Timer Cell Control Register 05" */
SFR_ABS (LTCA2_LTCCTR06, LTCA2_LTCCTRm_t, LTCA2_LTCCTR06_ADDR); /* "Local Timer Cell Control Register 06" */
SFR_ABS (LTCA2_LTCCTR07, LTCA2_LTCCTRm_t, LTCA2_LTCCTR07_ADDR); /* "Local Timer Cell Control Register 07" */
SFR_ABS (LTCA2_LTCCTR08, LTCA2_LTCCTRm_t, LTCA2_LTCCTR08_ADDR); /* "Local Timer Cell Control Register 08" */
SFR_ABS (LTCA2_LTCCTR09, LTCA2_LTCCTRm_t, LTCA2_LTCCTR09_ADDR); /* "Local Timer Cell Control Register 09" */
SFR_ABS (LTCA2_LTCCTR10, LTCA2_LTCCTRm_t, LTCA2_LTCCTR10_ADDR); /* "Local Timer Cell Control Register 10" */
SFR_ABS (LTCA2_LTCCTR11, LTCA2_LTCCTRm_t, LTCA2_LTCCTR11_ADDR); /* "Local Timer Cell Control Register 11" */
SFR_ABS (LTCA2_LTCCTR12, LTCA2_LTCCTRm_t, LTCA2_LTCCTR12_ADDR); /* "Local Timer Cell Control Register 12" */
SFR_ABS (LTCA2_LTCCTR13, LTCA2_LTCCTRm_t, LTCA2_LTCCTR13_ADDR); /* "Local Timer Cell Control Register 13" */
SFR_ABS (LTCA2_LTCCTR14, LTCA2_LTCCTRm_t, LTCA2_LTCCTR14_ADDR); /* "Local Timer Cell Control Register 14" */
SFR_ABS (LTCA2_LTCCTR15, LTCA2_LTCCTRm_t, LTCA2_LTCCTR15_ADDR); /* "Local Timer Cell Control Register 15" */
SFR_ABS (LTCA2_LTCCTR16, LTCA2_LTCCTRm_t, LTCA2_LTCCTR16_ADDR); /* "Local Timer Cell Control Register 16" */
SFR_ABS (LTCA2_LTCCTR17, LTCA2_LTCCTRm_t, LTCA2_LTCCTR17_ADDR); /* "Local Timer Cell Control Register 17" */
SFR_ABS (LTCA2_LTCCTR18, LTCA2_LTCCTRm_t, LTCA2_LTCCTR18_ADDR); /* "Local Timer Cell Control Register 18" */
SFR_ABS (LTCA2_LTCCTR19, LTCA2_LTCCTRm_t, LTCA2_LTCCTR19_ADDR); /* "Local Timer Cell Control Register 19" */
SFR_ABS (LTCA2_LTCCTR20, LTCA2_LTCCTRm_t, LTCA2_LTCCTR20_ADDR); /* "Local Timer Cell Control Register 20" */
SFR_ABS (LTCA2_LTCCTR21, LTCA2_LTCCTRm_t, LTCA2_LTCCTR21_ADDR); /* "Local Timer Cell Control Register 21" */
SFR_ABS (LTCA2_LTCCTR22, LTCA2_LTCCTRm_t, LTCA2_LTCCTR22_ADDR); /* "Local Timer Cell Control Register 22" */
SFR_ABS (LTCA2_LTCCTR23, LTCA2_LTCCTRm_t, LTCA2_LTCCTR23_ADDR); /* "Local Timer Cell Control Register 23" */
SFR_ABS (LTCA2_LTCCTR24, LTCA2_LTCCTRm_t, LTCA2_LTCCTR24_ADDR); /* "Local Timer Cell Control Register 24" */
SFR_ABS (LTCA2_LTCCTR25, LTCA2_LTCCTRm_t, LTCA2_LTCCTR25_ADDR); /* "Local Timer Cell Control Register 25" */
SFR_ABS (LTCA2_LTCCTR26, LTCA2_LTCCTRm_t, LTCA2_LTCCTR26_ADDR); /* "Local Timer Cell Control Register 26" */
SFR_ABS (LTCA2_LTCCTR27, LTCA2_LTCCTRm_t, LTCA2_LTCCTR27_ADDR); /* "Local Timer Cell Control Register 27" */
SFR_ABS (LTCA2_LTCCTR28, LTCA2_LTCCTRm_t, LTCA2_LTCCTR28_ADDR); /* "Local Timer Cell Control Register 28" */
SFR_ABS (LTCA2_LTCCTR29, LTCA2_LTCCTRm_t, LTCA2_LTCCTR29_ADDR); /* "Local Timer Cell Control Register 29" */
SFR_ABS (LTCA2_LTCCTR30, LTCA2_LTCCTRm_t, LTCA2_LTCCTR30_ADDR); /* "Local Timer Cell Control Register 30" */
SFR_ABS (LTCA2_LTCCTR31, LTCA2_LTCCTR31_t, LTCA2_LTCCTR31_ADDR); /* "Local Timer Cell Control Register 31" */
SFR_ABS (LTCA2_LTCXR00, LTCA2_LTCXRm_t, LTCA2_LTCXR00_ADDR); /* "Local Timer Cell X Register 00" */
SFR_ABS (LTCA2_LTCXR01, LTCA2_LTCXRm_t, LTCA2_LTCXR01_ADDR); /* "Local Timer Cell X Register 01" */
SFR_ABS (LTCA2_LTCXR02, LTCA2_LTCXRm_t, LTCA2_LTCXR02_ADDR); /* "Local Timer Cell X Register 02" */
SFR_ABS (LTCA2_LTCXR03, LTCA2_LTCXRm_t, LTCA2_LTCXR03_ADDR); /* "Local Timer Cell X Register 03" */
SFR_ABS (LTCA2_LTCXR04, LTCA2_LTCXRm_t, LTCA2_LTCXR04_ADDR); /* "Local Timer Cell X Register 04" */
SFR_ABS (LTCA2_LTCXR05, LTCA2_LTCXRm_t, LTCA2_LTCXR05_ADDR); /* "Local Timer Cell X Register 05" */
SFR_ABS (LTCA2_LTCXR06, LTCA2_LTCXRm_t, LTCA2_LTCXR06_ADDR); /* "Local Timer Cell X Register 06" */
SFR_ABS (LTCA2_LTCXR07, LTCA2_LTCXRm_t, LTCA2_LTCXR07_ADDR); /* "Local Timer Cell X Register 07" */
SFR_ABS (LTCA2_LTCXR08, LTCA2_LTCXRm_t, LTCA2_LTCXR08_ADDR); /* "Local Timer Cell X Register 08" */
SFR_ABS (LTCA2_LTCXR09, LTCA2_LTCXRm_t, LTCA2_LTCXR09_ADDR); /* "Local Timer Cell X Register 09" */
SFR_ABS (LTCA2_LTCXR10, LTCA2_LTCXRm_t, LTCA2_LTCXR10_ADDR); /* "Local Timer Cell X Register 10" */
SFR_ABS (LTCA2_LTCXR11, LTCA2_LTCXRm_t, LTCA2_LTCXR11_ADDR); /* "Local Timer Cell X Register 11" */
SFR_ABS (LTCA2_LTCXR12, LTCA2_LTCXRm_t, LTCA2_LTCXR12_ADDR); /* "Local Timer Cell X Register 12" */
SFR_ABS (LTCA2_LTCXR13, LTCA2_LTCXRm_t, LTCA2_LTCXR13_ADDR); /* "Local Timer Cell X Register 13" */
SFR_ABS (LTCA2_LTCXR14, LTCA2_LTCXRm_t, LTCA2_LTCXR14_ADDR); /* "Local Timer Cell X Register 14" */
SFR_ABS (LTCA2_LTCXR15, LTCA2_LTCXRm_t, LTCA2_LTCXR15_ADDR); /* "Local Timer Cell X Register 15" */
SFR_ABS (LTCA2_LTCXR16, LTCA2_LTCXRm_t, LTCA2_LTCXR16_ADDR); /* "Local Timer Cell X Register 16" */
SFR_ABS (LTCA2_LTCXR17, LTCA2_LTCXRm_t, LTCA2_LTCXR17_ADDR); /* "Local Timer Cell X Register 17" */
SFR_ABS (LTCA2_LTCXR18, LTCA2_LTCXRm_t, LTCA2_LTCXR18_ADDR); /* "Local Timer Cell X Register 18" */
SFR_ABS (LTCA2_LTCXR19, LTCA2_LTCXRm_t, LTCA2_LTCXR19_ADDR); /* "Local Timer Cell X Register 19" */
SFR_ABS (LTCA2_LTCXR20, LTCA2_LTCXRm_t, LTCA2_LTCXR20_ADDR); /* "Local Timer Cell X Register 20" */
SFR_ABS (LTCA2_LTCXR21, LTCA2_LTCXRm_t, LTCA2_LTCXR21_ADDR); /* "Local Timer Cell X Register 21" */
SFR_ABS (LTCA2_LTCXR22, LTCA2_LTCXRm_t, LTCA2_LTCXR22_ADDR); /* "Local Timer Cell X Register 22" */
SFR_ABS (LTCA2_LTCXR23, LTCA2_LTCXRm_t, LTCA2_LTCXR23_ADDR); /* "Local Timer Cell X Register 23" */
SFR_ABS (LTCA2_LTCXR24, LTCA2_LTCXRm_t, LTCA2_LTCXR24_ADDR); /* "Local Timer Cell X Register 24" */
SFR_ABS (LTCA2_LTCXR25, LTCA2_LTCXRm_t, LTCA2_LTCXR25_ADDR); /* "Local Timer Cell X Register 25" */
SFR_ABS (LTCA2_LTCXR26, LTCA2_LTCXRm_t, LTCA2_LTCXR26_ADDR); /* "Local Timer Cell X Register 26" */
SFR_ABS (LTCA2_LTCXR27, LTCA2_LTCXRm_t, LTCA2_LTCXR27_ADDR); /* "Local Timer Cell X Register 27" */
SFR_ABS (LTCA2_LTCXR28, LTCA2_LTCXRm_t, LTCA2_LTCXR28_ADDR); /* "Local Timer Cell X Register 28" */
SFR_ABS (LTCA2_LTCXR29, LTCA2_LTCXRm_t, LTCA2_LTCXR29_ADDR); /* "Local Timer Cell X Register 29" */
SFR_ABS (LTCA2_LTCXR30, LTCA2_LTCXRm_t, LTCA2_LTCXR30_ADDR); /* "Local Timer Cell X Register 30" */
SFR_ABS (LTCA2_LTCXR31, LTCA2_LTCXR31_t, LTCA2_LTCXR31_ADDR); /* "Local Timer Cell X Register 31" */
SFR_ABS (LTCA2_MRACTL, LTCA2_MRACTL_t, LTCA2_MRACTL_ADDR); /* "Multiplexer Register Array Control Register" */
SFR_ABS (LTCA2_MRADIN, LTCA2_MRADIN_t, LTCA2_MRADIN_ADDR); /* "Multiplexer Register Array Data In Register" */
SFR_ABS (LTCA2_MRADOUT, LTCA2_MRADOUT_t, LTCA2_MRADOUT_ADDR); /* "Multiplexer Register Array Data Out Register" */
SFR_ABS (LTCA2_SRC00, LTCA2_SRCm_t, LTCA2_SRC00_ADDR); /* "LTCA2 Interrupt Service Request Control Register 00" */
SFR_ABS (LTCA2_SRC01, LTCA2_SRCm_t, LTCA2_SRC01_ADDR); /* "LTCA2 Interrupt Service Request Control Register 01" */
SFR_ABS (LTCA2_SRC02, LTCA2_SRCm_t, LTCA2_SRC02_ADDR); /* "LTCA2 Interrupt Service Request Control Register 02" */
SFR_ABS (LTCA2_SRC03, LTCA2_SRCm_t, LTCA2_SRC03_ADDR); /* "LTCA2 Interrupt Service Request Control Register 03" */
SFR_ABS (LTCA2_SRC04, LTCA2_SRCm_t, LTCA2_SRC04_ADDR); /* "LTCA2 Interrupt Service Request Control Register 04" */
SFR_ABS (LTCA2_SRC05, LTCA2_SRCm_t, LTCA2_SRC05_ADDR); /* "LTCA2 Interrupt Service Request Control Register 05" */
SFR_ABS (LTCA2_SRC06, LTCA2_SRCm_t, LTCA2_SRC06_ADDR); /* "LTCA2 Interrupt Service Request Control Register 06" */
SFR_ABS (LTCA2_SRC07, LTCA2_SRCm_t, LTCA2_SRC07_ADDR); /* "LTCA2 Interrupt Service Request Control Register 07" */
SFR_ABS (LTCA2_SRSC2, LTCA2_SRSC2_t, LTCA2_SRSC2_ADDR); /* "LTCA2 Service Request State Clear Register 2" */
SFR_ABS (LTCA2_SRSS2, LTCA2_SRSS2_t, LTCA2_SRSS2_ADDR); /* "LTCA2 Service Request State Set Register 2" */


#endif /* /NO_TRICORE_SFRTYPEDEFS */
#endif /* _HAVE_TRICORE_LTCA2_H_ (block "LTCA2") */


