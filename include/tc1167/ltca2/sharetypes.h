/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_LTCA2_SHARETYPES_H_
#define _HAVE_TRICORE_LTCA2_SHARETYPES_H_


/********************** LTCA2_LTCCTRm_t *************************/
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

typedef union { /* 32 bits */
   struct { /* Local Timer Cell Control Register 00 [Capture Mode] */
      unsigned int MOD:2;               /*  = [0..1] = 0x00000003 */
      unsigned int OSM:1;               /*  = [2..2] = 0x00000004 */
      unsigned int REN:1;               /*  = [3..3] = 0x00000008 */
      unsigned int RED:1;               /*  = [4..4] = 0x00000010 */
      unsigned int FED:1;               /*  = [5..5] = 0x00000020 */
      unsigned int BYP:1;               /*  = [6..6] = 0x00000040 */
      unsigned int EOA:1;               /*  = [7..7] = 0x00000080 */
      unsigned int ILM:1;               /*  = [8..8] = 0x00000100 */
      unsigned int SLL:1;               /*  = [9..9] = 0x00000200 */
      unsigned int CEN:1;               /*  = [10..10] = 0x00000400 */
      unsigned int OCM:3;               /*  = [11..13] = 0x00003800 */
      unsigned int OIA:1;               /*  = [14..14] = 0x00004000 */
      unsigned int OUT:1;               /*  = [15..15] = 0x00008000 */
      unsigned int GBYP:1;              /*  = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } capt;
   struct { /* Local Timer Cell Control Register 00 [Compare Mode] */
      unsigned int MOD:2;               /*  = [0..1] = 0x00000003 */
      unsigned int OSM:1;               /*  = [2..2] = 0x00000004 */
      unsigned int REN:1;               /*  = [3..3] = 0x00000008 */
      unsigned int SOL:1;               /*  = [4..4] = 0x00000010 */
      unsigned int SOH:1;               /*  = [5..5] = 0x00000020 */
      unsigned int BYP:1;               /*  = [6..6] = 0x00000040 */
      unsigned int EOA:1;               /*  = [7..7] = 0x00000080 */
      unsigned int ILM:1;               /*  = [8..8] = 0x00000100 */
      unsigned int SLL:1;               /*  = [9..9] = 0x00000200 */
      unsigned int CEN:1;               /*  = [10..10] = 0x00000400 */
      unsigned int OCM:3;               /*  = [11..13] = 0x00003800 */
      unsigned int OIA:1;               /*  = [14..14] = 0x00004000 */
      unsigned int OUT:1;               /*  = [15..15] = 0x00008000 */
      unsigned int GBYP:1;              /*  = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } comp;
   struct { /* Local Timer Cell Control Register 00 [Timer Mode] */
      unsigned int MOD:2;               /*  = [0..1] = 0x00000003 */
      unsigned int OSM:1;               /*  = [2..2] = 0x00000004 */
      unsigned int REN:1;               /*  = [3..3] = 0x00000008 */
      unsigned int RED:1;               /*  = [4..4] = 0x00000010 */
      unsigned int FED:1;               /*  = [5..5] = 0x00000020 */
      unsigned int SLO:1;               /*  = [6..6] = 0x00000040 */
      unsigned int CUDCLR:1;            /*  = [7..7] = 0x00000080 */
      unsigned int ILM:1;               /*  = [8..8] = 0x00000100 */
      unsigned int CUD:1;               /*  = [9..9] = 0x00000200 */
      unsigned int CEN:1;               /*  = [10..10] = 0x00000400 */
      unsigned int OCM:3;               /*  = [11..13] = 0x00003800 */
      unsigned int OIA:1;               /*  = [14..14] = 0x00004000 */
      unsigned int OUT:1;               /*  = [15..15] = 0x00008000 */
      unsigned int GBYP:1;              /*  = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } timer;
   unsigned long reg; 
} __attribute__((aligned(4))) LTCA2_LTCCTRm_t_nonv;

typedef volatile LTCA2_LTCCTRm_t_nonv LTCA2_LTCCTRm_t;

/********************** LTCA2_LTCXRm_t *************************/
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

typedef union { /* 32 bits */
   struct {
      unsigned int X:16;                /*  = [0..15] = 0x0000ffff */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) LTCA2_LTCXRm_t_nonv;

typedef volatile LTCA2_LTCXRm_t_nonv LTCA2_LTCXRm_t;

/********************** LTCA2_SRCm_t *************************/
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

typedef union { /* 32 bits */
   struct {
      unsigned int SRPN:8;              /*  = [0..7] = 0x000000ff */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int TOS:1;               /*  = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int SRE:1;               /*  = [12..12] = 0x00001000 */
      unsigned int SRR:1;               /*  = [13..13] = 0x00002000 */
      unsigned int CLRR:1;              /*  = [14..14] = 0x00004000 */
      unsigned int SETR:1;              /*  = [15..15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) LTCA2_SRCm_t_nonv;

typedef volatile LTCA2_SRCm_t_nonv LTCA2_SRCm_t;


#endif /* _HAVE_TRICORE_LTCA2_SHARETYPES_H_ */

