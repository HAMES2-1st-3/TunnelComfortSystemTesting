/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_LTCA2_SHARETYPES_H_
#define _HAVE_TRICORE_LTCA2_SHARETYPES_H_


/********************** LTCA2_LTCCTRm_t *************************/
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

typedef union { /* 32 bits */
   struct {
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
} __attribute__((aligned(4))) LTCA2_LTCCTRm_t_nonv;

typedef volatile LTCA2_LTCCTRm_t_nonv LTCA2_LTCCTRm_t;

/********************** LTCA2_LTCXRm_t *************************/
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

/********************** LTCA2_SRSCm_t *************************/
/*
   LTCA2_SRSC2           "LTCA2 Service Request State Clear Register 2"
   LTCA2_SRSC3           "LTCA2 Service Request State Clear Register 3"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int LTC00:1;             /*  = [0..0] = 0x00000001 */
      unsigned int LTC01:1;             /*  = [1..1] = 0x00000002 */
      unsigned int LTC02:1;             /*  = [2..2] = 0x00000004 */
      unsigned int LTC03:1;             /*  = [3..3] = 0x00000008 */
      unsigned int LTC04:1;             /*  = [4..4] = 0x00000010 */
      unsigned int LTC05:1;             /*  = [5..5] = 0x00000020 */
      unsigned int LTC06:1;             /*  = [6..6] = 0x00000040 */
      unsigned int LTC07:1;             /*  = [7..7] = 0x00000080 */
      unsigned int LTC08:1;             /*  = [8..8] = 0x00000100 */
      unsigned int LTC09:1;             /*  = [9..9] = 0x00000200 */
      unsigned int LTC10:1;             /*  = [10..10] = 0x00000400 */
      unsigned int LTC11:1;             /*  = [11..11] = 0x00000800 */
      unsigned int LTC12:1;             /*  = [12..12] = 0x00001000 */
      unsigned int LTC13:1;             /*  = [13..13] = 0x00002000 */
      unsigned int LTC14:1;             /*  = [14..14] = 0x00004000 */
      unsigned int LTC15:1;             /*  = [15..15] = 0x00008000 */
      unsigned int LTC16:1;             /*  = [16..16] = 0x00010000 */
      unsigned int LTC17:1;             /*  = [17..17] = 0x00020000 */
      unsigned int LTC18:1;             /*  = [18..18] = 0x00040000 */
      unsigned int LTC19:1;             /*  = [19..19] = 0x00080000 */
      unsigned int LTC20:1;             /*  = [20..20] = 0x00100000 */
      unsigned int LTC21:1;             /*  = [21..21] = 0x00200000 */
      unsigned int LTC22:1;             /*  = [22..22] = 0x00400000 */
      unsigned int LTC23:1;             /*  = [23..23] = 0x00800000 */
      unsigned int LTC24:1;             /*  = [24..24] = 0x01000000 */
      unsigned int LTC25:1;             /*  = [25..25] = 0x02000000 */
      unsigned int LTC26:1;             /*  = [26..26] = 0x04000000 */
      unsigned int LTC27:1;             /*  = [27..27] = 0x08000000 */
      unsigned int LTC28:1;             /*  = [28..28] = 0x10000000 */
      unsigned int LTC29:1;             /*  = [29..29] = 0x20000000 */
      unsigned int LTC30:1;             /*  = [30..30] = 0x40000000 */
      unsigned int LTC31:1;             /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) LTCA2_SRSCm_t_nonv;

typedef volatile LTCA2_SRSCm_t_nonv LTCA2_SRSCm_t;

/********************** LTCA2_SRSSm_t *************************/
/*
   LTCA2_SRSS2           "LTCA2 Service Request State Set Register 2"
   LTCA2_SRSS3           "LTCA2 Service Request State Set Register 3"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int LTC00:1;             /*  = [0..0] = 0x00000001 */
      unsigned int LTC01:1;             /*  = [1..1] = 0x00000002 */
      unsigned int LTC02:1;             /*  = [2..2] = 0x00000004 */
      unsigned int LTC03:1;             /*  = [3..3] = 0x00000008 */
      unsigned int LTC04:1;             /*  = [4..4] = 0x00000010 */
      unsigned int LTC05:1;             /*  = [5..5] = 0x00000020 */
      unsigned int LTC06:1;             /*  = [6..6] = 0x00000040 */
      unsigned int LTC07:1;             /*  = [7..7] = 0x00000080 */
      unsigned int LTC08:1;             /*  = [8..8] = 0x00000100 */
      unsigned int LTC09:1;             /*  = [9..9] = 0x00000200 */
      unsigned int LTC10:1;             /*  = [10..10] = 0x00000400 */
      unsigned int LTC11:1;             /*  = [11..11] = 0x00000800 */
      unsigned int LTC12:1;             /*  = [12..12] = 0x00001000 */
      unsigned int LTC13:1;             /*  = [13..13] = 0x00002000 */
      unsigned int LTC14:1;             /*  = [14..14] = 0x00004000 */
      unsigned int LTC15:1;             /*  = [15..15] = 0x00008000 */
      unsigned int LTC16:1;             /*  = [16..16] = 0x00010000 */
      unsigned int LTC17:1;             /*  = [17..17] = 0x00020000 */
      unsigned int LTC18:1;             /*  = [18..18] = 0x00040000 */
      unsigned int LTC19:1;             /*  = [19..19] = 0x00080000 */
      unsigned int LTC20:1;             /*  = [20..20] = 0x00100000 */
      unsigned int LTC21:1;             /*  = [21..21] = 0x00200000 */
      unsigned int LTC22:1;             /*  = [22..22] = 0x00400000 */
      unsigned int LTC23:1;             /*  = [23..23] = 0x00800000 */
      unsigned int LTC24:1;             /*  = [24..24] = 0x01000000 */
      unsigned int LTC25:1;             /*  = [25..25] = 0x02000000 */
      unsigned int LTC26:1;             /*  = [26..26] = 0x04000000 */
      unsigned int LTC27:1;             /*  = [27..27] = 0x08000000 */
      unsigned int LTC28:1;             /*  = [28..28] = 0x10000000 */
      unsigned int LTC29:1;             /*  = [29..29] = 0x20000000 */
      unsigned int LTC30:1;             /*  = [30..30] = 0x40000000 */
      unsigned int LTC31:1;             /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) LTCA2_SRSSm_t_nonv;

typedef volatile LTCA2_SRSSm_t_nonv LTCA2_SRSSm_t;


#endif /* _HAVE_TRICORE_LTCA2_SHARETYPES_H_ */

