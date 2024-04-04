/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_GPTA0_SHARETYPES_H_
#define _HAVE_TRICORE_GPTA0_SHARETYPES_H_


/********************** GPTA0_DCMCAVm_t *************************/
/*
   GPTA0_DCMCAV0         "GPTA Duty Cycle Measurement Capture Register 0"
   GPTA0_DCMCAV1         "GPTA Duty Cycle Measurement Capture Register 1"
   GPTA0_DCMCAV2         "GPTA Duty Cycle Measurement Capture Register 2"
   GPTA0_DCMCAV3         "GPTA Duty Cycle Measurement Capture Register 3"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CAV:24;              /*  = [0..23] = 0x00ffffff */
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
} __attribute__((aligned(4))) GPTA0_DCMCAVm_t_nonv;

typedef volatile GPTA0_DCMCAVm_t_nonv GPTA0_DCMCAVm_t;

/********************** GPTA0_DCMCOVm_t *************************/
/*
   GPTA0_DCMCOV0         "GPTA Duty Cycle Measurement Capture/Compare Register 0"
   GPTA0_DCMCOV1         "GPTA Duty Cycle Measurement Capture/Compare Register 1"
   GPTA0_DCMCOV2         "GPTA Duty Cycle Measurement Capture/Compare Register 2"
   GPTA0_DCMCOV3         "GPTA Duty Cycle Measurement Capture/Compare Register 3"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int COV:24;              /*  = [0..23] = 0x00ffffff */
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
} __attribute__((aligned(4))) GPTA0_DCMCOVm_t_nonv;

typedef volatile GPTA0_DCMCOVm_t_nonv GPTA0_DCMCOVm_t;

/********************** GPTA0_DCMCTRm_t *************************/
/*
   GPTA0_DCMCTR0         "GPTA Duty Cycle Measurement Control Register 0"
   GPTA0_DCMCTR1         "GPTA Duty Cycle Measurement Control Register 1"
   GPTA0_DCMCTR2         "GPTA Duty Cycle Measurement Control Register 2"
   GPTA0_DCMCTR3         "GPTA Duty Cycle Measurement Control Register 3"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RCA:1;               /*  = [0..0] = 0x00000001 */
      unsigned int OCA:1;               /*  = [1..1] = 0x00000002 */
      unsigned int RZE:1;               /*  = [2..2] = 0x00000004 */
      unsigned int FZE:1;               /*  = [3..3] = 0x00000008 */
      unsigned int RCK:1;               /*  = [4..4] = 0x00000010 */
      unsigned int FCK:1;               /*  = [5..5] = 0x00000020 */
      unsigned int QCK:1;               /*  = [6..6] = 0x00000040 */
      unsigned int RRE:1;               /*  = [7..7] = 0x00000080 */
      unsigned int FRE:1;               /*  = [8..8] = 0x00000100 */
      unsigned int CRE:1;               /*  = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) GPTA0_DCMCTRm_t_nonv;

typedef volatile GPTA0_DCMCTRm_t_nonv GPTA0_DCMCTRm_t;

/********************** GPTA0_DCMTIMm_t *************************/
/*
   GPTA0_DCMTIM0         "GPTA Duty Cycle Measurement Timer Register 0"
   GPTA0_DCMTIM1         "GPTA Duty Cycle Measurement Timer Register 1"
   GPTA0_DCMTIM2         "GPTA Duty Cycle Measurement Timer Register 2"
   GPTA0_DCMTIM3         "GPTA Duty Cycle Measurement Timer Register 3"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TIM:24;              /*  = [0..23] = 0x00ffffff */
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
} __attribute__((aligned(4))) GPTA0_DCMTIMm_t_nonv;

typedef volatile GPTA0_DCMTIMm_t_nonv GPTA0_DCMTIMm_t;

/********************** GPTA0_FPCCTRm_t *************************/
/*
   GPTA0_FPCCTR0         "GPTA Filter and Prescaler Cell Control Register 0"
   GPTA0_FPCCTR1         "GPTA Filter and Prescaler Cell Control Register 1"
   GPTA0_FPCCTR2         "GPTA Filter and Prescaler Cell Control Register 2"
   GPTA0_FPCCTR3         "GPTA Filter and Prescaler Cell Control Register 3"
   GPTA0_FPCCTR4         "GPTA Filter and Prescaler Cell Control Register 4"
   GPTA0_FPCCTR5         "GPTA Filter and Prescaler Cell Control Register 5"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CMP:16;              /*  = [0..15] = 0x0000ffff */
      unsigned int MOD:3;               /*  = [16..18] = 0x00070000 */
      unsigned int IPS:3;               /*  = [19..21] = 0x00380000 */
      unsigned int CLK:2;               /*  = [22..23] = 0x00c00000 */
      unsigned int RTG:1;               /*  = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) GPTA0_FPCCTRm_t_nonv;

typedef volatile GPTA0_FPCCTRm_t_nonv GPTA0_FPCCTRm_t;

/********************** GPTA0_FPCTIMm_t *************************/
/*
   GPTA0_FPCTIM0         "GPTA Filter and Prescaler Cell Timer Register 0"
   GPTA0_FPCTIM1         "GPTA Filter and Prescaler Cell Timer Register 1"
   GPTA0_FPCTIM2         "GPTA Filter and Prescaler Cell Timer Register 2"
   GPTA0_FPCTIM3         "GPTA Filter and Prescaler Cell Timer Register 3"
   GPTA0_FPCTIM4         "GPTA Filter and Prescaler Cell Timer Register 4"
   GPTA0_FPCTIM5         "GPTA Filter and Prescaler Cell Timer Register 5"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TIM:16;              /*  = [0..15] = 0x0000ffff */
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
} __attribute__((aligned(4))) GPTA0_FPCTIMm_t_nonv;

typedef volatile GPTA0_FPCTIMm_t_nonv GPTA0_FPCTIMm_t;

/********************** GPTA0_GTCCTRm_t *************************/
/*
   GPTA0_GTCCTR00        "GPTA Global Timer Cell Control Register 00"
   GPTA0_GTCCTR01        "GPTA Global Timer Cell Control Register 01"
   GPTA0_GTCCTR02        "GPTA Global Timer Cell Control Register 02"
   GPTA0_GTCCTR03        "GPTA Global Timer Cell Control Register 03"
   GPTA0_GTCCTR04        "GPTA Global Timer Cell Control Register 04"
   GPTA0_GTCCTR05        "GPTA Global Timer Cell Control Register 05"
   GPTA0_GTCCTR06        "GPTA Global Timer Cell Control Register 06"
   GPTA0_GTCCTR07        "GPTA Global Timer Cell Control Register 07"
   GPTA0_GTCCTR08        "GPTA Global Timer Cell Control Register 08"
   GPTA0_GTCCTR09        "GPTA Global Timer Cell Control Register 09"
   GPTA0_GTCCTR10        "GPTA Global Timer Cell Control Register 10"
   GPTA0_GTCCTR11        "GPTA Global Timer Cell Control Register 11"
   GPTA0_GTCCTR12        "GPTA Global Timer Cell Control Register 12"
   GPTA0_GTCCTR13        "GPTA Global Timer Cell Control Register 13"
   GPTA0_GTCCTR14        "GPTA Global Timer Cell Control Register 14"
   GPTA0_GTCCTR15        "GPTA Global Timer Cell Control Register 15"
   GPTA0_GTCCTR16        "GPTA Global Timer Cell Control Register 16"
   GPTA0_GTCCTR17        "GPTA Global Timer Cell Control Register 17"
   GPTA0_GTCCTR18        "GPTA Global Timer Cell Control Register 18"
   GPTA0_GTCCTR19        "GPTA Global Timer Cell Control Register 19"
   GPTA0_GTCCTR20        "GPTA Global Timer Cell Control Register 20"
   GPTA0_GTCCTR21        "GPTA Global Timer Cell Control Register 21"
   GPTA0_GTCCTR22        "GPTA Global Timer Cell Control Register 22"
   GPTA0_GTCCTR23        "GPTA Global Timer Cell Control Register 23"
   GPTA0_GTCCTR24        "GPTA Global Timer Cell Control Register 24"
   GPTA0_GTCCTR25        "GPTA Global Timer Cell Control Register 25"
   GPTA0_GTCCTR26        "GPTA Global Timer Cell Control Register 26"
   GPTA0_GTCCTR27        "GPTA Global Timer Cell Control Register 27"
   GPTA0_GTCCTR28        "GPTA Global Timer Cell Control Register 28"
   GPTA0_GTCCTR29        "GPTA Global Timer Cell Control Register 29"
   GPTA0_GTCCTR30        "GPTA Global Timer Cell Control Register 30"
   GPTA0_GTCCTR31        "GPTA Global Timer Cell Control Register 31"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MOD:2;               /*  = [0..1] = 0x00000003 */
      unsigned int OSM:1;               /*  = [2..2] = 0x00000004 */
      unsigned int REN:1;               /*  = [3..3] = 0x00000008 */
      unsigned int RED:1;               /*  = [4..4] = 0x00000010 */
      unsigned int FED:1;               /*  = [5..5] = 0x00000020 */
      unsigned int NE:1;                /*  = [6..6] = 0x00000040 */
      unsigned int BYP:1;               /*  = [7..7] = 0x00000080 */
      unsigned int EOA:1;               /*  = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
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
} __attribute__((aligned(4))) GPTA0_GTCCTRm_t_nonv;

typedef volatile GPTA0_GTCCTRm_t_nonv GPTA0_GTCCTRm_t;

/********************** GPTA0_GTCTRm_t *************************/
/*
   GPTA0_GTCTR0          "GPTA Global Timer Control Register 0"
   GPTA0_GTCTR1          "GPTA Global Timer Control Register 1"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SCO:4;               /*  = [0..3] = 0x0000000f */
      unsigned int MUX:3;               /*  = [4..6] = 0x00000070 */
      unsigned int REN:1;               /*  = [7..7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) GPTA0_GTCTRm_t_nonv;

typedef volatile GPTA0_GTCTRm_t_nonv GPTA0_GTCTRm_t;

/********************** GPTA0_GTCXRm_t *************************/
/*
   GPTA0_GTCXR00         "GPTA Global Timer Cell X Register 00"
   GPTA0_GTCXR01         "GPTA Global Timer Cell X Register 01"
   GPTA0_GTCXR02         "GPTA Global Timer Cell X Register 02"
   GPTA0_GTCXR03         "GPTA Global Timer Cell X Register 03"
   GPTA0_GTCXR04         "GPTA Global Timer Cell X Register 04"
   GPTA0_GTCXR05         "GPTA Global Timer Cell X Register 05"
   GPTA0_GTCXR06         "GPTA Global Timer Cell X Register 06"
   GPTA0_GTCXR07         "GPTA Global Timer Cell X Register 07"
   GPTA0_GTCXR08         "GPTA Global Timer Cell X Register 08"
   GPTA0_GTCXR09         "GPTA Global Timer Cell X Register 09"
   GPTA0_GTCXR10         "GPTA Global Timer Cell X Register 10"
   GPTA0_GTCXR11         "GPTA Global Timer Cell X Register 11"
   GPTA0_GTCXR12         "GPTA Global Timer Cell X Register 12"
   GPTA0_GTCXR13         "GPTA Global Timer Cell X Register 13"
   GPTA0_GTCXR14         "GPTA Global Timer Cell X Register 14"
   GPTA0_GTCXR15         "GPTA Global Timer Cell X Register 15"
   GPTA0_GTCXR16         "GPTA Global Timer Cell X Register 16"
   GPTA0_GTCXR17         "GPTA Global Timer Cell X Register 17"
   GPTA0_GTCXR18         "GPTA Global Timer Cell X Register 18"
   GPTA0_GTCXR19         "GPTA Global Timer Cell X Register 19"
   GPTA0_GTCXR20         "GPTA Global Timer Cell X Register 20"
   GPTA0_GTCXR21         "GPTA Global Timer Cell X Register 21"
   GPTA0_GTCXR22         "GPTA Global Timer Cell X Register 22"
   GPTA0_GTCXR23         "GPTA Global Timer Cell X Register 23"
   GPTA0_GTCXR24         "GPTA Global Timer Cell X Register 24"
   GPTA0_GTCXR25         "GPTA Global Timer Cell X Register 25"
   GPTA0_GTCXR26         "GPTA Global Timer Cell X Register 26"
   GPTA0_GTCXR27         "GPTA Global Timer Cell X Register 27"
   GPTA0_GTCXR28         "GPTA Global Timer Cell X Register 28"
   GPTA0_GTCXR29         "GPTA Global Timer Cell X Register 29"
   GPTA0_GTCXR30         "GPTA Global Timer Cell X Register 30"
   GPTA0_GTCXR31         "GPTA Global Timer Cell X Register 31"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int X:24;                /*  = [0..23] = 0x00ffffff */
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
} __attribute__((aligned(4))) GPTA0_GTCXRm_t_nonv;

typedef volatile GPTA0_GTCXRm_t_nonv GPTA0_GTCXRm_t;

/********************** GPTA0_GTREVm_t *************************/
/*
   GPTA0_GTREV0          "GPTA Global Timer Reload Value Register 0"
   GPTA0_GTREV1          "GPTA Global Timer Reload Value Register 1"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int REV:24;              /*  = [0..23] = 0x00ffffff */
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
} __attribute__((aligned(4))) GPTA0_GTREVm_t_nonv;

typedef volatile GPTA0_GTREVm_t_nonv GPTA0_GTREVm_t;

/********************** GPTA0_GTTIMm_t *************************/
/*
   GPTA0_GTTIM0          "GPTA Global Timer Register 0"
   GPTA0_GTTIM1          "GPTA Global Timer Register 1"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TIM:24;              /*  = [0..23] = 0x00ffffff */
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
} __attribute__((aligned(4))) GPTA0_GTTIMm_t_nonv;

typedef volatile GPTA0_GTTIMm_t_nonv GPTA0_GTTIMm_t;

/********************** GPTA0_LTCCTRm_t *************************/
/*
   GPTA0_LTCCTR00        "GPTA Local Timer Cell Control Register 00"
   GPTA0_LTCCTR01        "GPTA Local Timer Cell Control Register 01"
   GPTA0_LTCCTR02        "GPTA Local Timer Cell Control Register 02"
   GPTA0_LTCCTR03        "GPTA Local Timer Cell Control Register 03"
   GPTA0_LTCCTR04        "GPTA Local Timer Cell Control Register 04"
   GPTA0_LTCCTR05        "GPTA Local Timer Cell Control Register 05"
   GPTA0_LTCCTR06        "GPTA Local Timer Cell Control Register 06"
   GPTA0_LTCCTR07        "GPTA Local Timer Cell Control Register 07"
   GPTA0_LTCCTR08        "GPTA Local Timer Cell Control Register 08"
   GPTA0_LTCCTR09        "GPTA Local Timer Cell Control Register 09"
   GPTA0_LTCCTR10        "GPTA Local Timer Cell Control Register 10"
   GPTA0_LTCCTR11        "GPTA Local Timer Cell Control Register 11"
   GPTA0_LTCCTR12        "GPTA Local Timer Cell Control Register 12"
   GPTA0_LTCCTR13        "GPTA Local Timer Cell Control Register 13"
   GPTA0_LTCCTR14        "GPTA Local Timer Cell Control Register 14"
   GPTA0_LTCCTR15        "GPTA Local Timer Cell Control Register 15"
   GPTA0_LTCCTR16        "GPTA Local Timer Cell Control Register 16"
   GPTA0_LTCCTR17        "GPTA Local Timer Cell Control Register 17"
   GPTA0_LTCCTR18        "GPTA Local Timer Cell Control Register 18"
   GPTA0_LTCCTR19        "GPTA Local Timer Cell Control Register 19"
   GPTA0_LTCCTR20        "GPTA Local Timer Cell Control Register 20"
   GPTA0_LTCCTR21        "GPTA Local Timer Cell Control Register 21"
   GPTA0_LTCCTR22        "GPTA Local Timer Cell Control Register 22"
   GPTA0_LTCCTR23        "GPTA Local Timer Cell Control Register 23"
   GPTA0_LTCCTR24        "GPTA Local Timer Cell Control Register 24"
   GPTA0_LTCCTR25        "GPTA Local Timer Cell Control Register 25"
   GPTA0_LTCCTR26        "GPTA Local Timer Cell Control Register 26"
   GPTA0_LTCCTR27        "GPTA Local Timer Cell Control Register 27"
   GPTA0_LTCCTR28        "GPTA Local Timer Cell Control Register 28"
   GPTA0_LTCCTR29        "GPTA Local Timer Cell Control Register 29"
   GPTA0_LTCCTR30        "GPTA Local Timer Cell Control Register 30"
   GPTA0_LTCCTR31        "GPTA Local Timer Cell Control Register 31"
   GPTA0_LTCCTR32        "GPTA Local Timer Cell Control Register 32"
   GPTA0_LTCCTR33        "GPTA Local Timer Cell Control Register 33"
   GPTA0_LTCCTR34        "GPTA Local Timer Cell Control Register 34"
   GPTA0_LTCCTR35        "GPTA Local Timer Cell Control Register 35"
   GPTA0_LTCCTR36        "GPTA Local Timer Cell Control Register 36"
   GPTA0_LTCCTR37        "GPTA Local Timer Cell Control Register 37"
   GPTA0_LTCCTR38        "GPTA Local Timer Cell Control Register 38"
   GPTA0_LTCCTR39        "GPTA Local Timer Cell Control Register 39"
   GPTA0_LTCCTR40        "GPTA Local Timer Cell Control Register 40"
   GPTA0_LTCCTR41        "GPTA Local Timer Cell Control Register 41"
   GPTA0_LTCCTR42        "GPTA Local Timer Cell Control Register 42"
   GPTA0_LTCCTR43        "GPTA Local Timer Cell Control Register 43"
   GPTA0_LTCCTR44        "GPTA Local Timer Cell Control Register 44"
   GPTA0_LTCCTR45        "GPTA Local Timer Cell Control Register 45"
   GPTA0_LTCCTR46        "GPTA Local Timer Cell Control Register 46"
   GPTA0_LTCCTR47        "GPTA Local Timer Cell Control Register 47"
   GPTA0_LTCCTR48        "GPTA Local Timer Cell Control Register 48"
   GPTA0_LTCCTR49        "GPTA Local Timer Cell Control Register 49"
   GPTA0_LTCCTR50        "GPTA Local Timer Cell Control Register 50"
   GPTA0_LTCCTR51        "GPTA Local Timer Cell Control Register 51"
   GPTA0_LTCCTR52        "GPTA Local Timer Cell Control Register 52"
   GPTA0_LTCCTR53        "GPTA Local Timer Cell Control Register 53"
   GPTA0_LTCCTR54        "GPTA Local Timer Cell Control Register 54"
   GPTA0_LTCCTR55        "GPTA Local Timer Cell Control Register 55"
   GPTA0_LTCCTR56        "GPTA Local Timer Cell Control Register 56"
   GPTA0_LTCCTR57        "GPTA Local Timer Cell Control Register 57"
   GPTA0_LTCCTR58        "GPTA Local Timer Cell Control Register 58"
   GPTA0_LTCCTR59        "GPTA Local Timer Cell Control Register 59"
   GPTA0_LTCCTR60        "GPTA Local Timer Cell Control Register 60"
   GPTA0_LTCCTR61        "GPTA Local Timer Cell Control Register 61"
   GPTA0_LTCCTR62        "GPTA Local Timer Cell Control Register 62"
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
} __attribute__((aligned(4))) GPTA0_LTCCTRm_t_nonv;

typedef volatile GPTA0_LTCCTRm_t_nonv GPTA0_LTCCTRm_t;

/********************** GPTA0_LTCXRm_t *************************/
/*
   GPTA0_LTCXR00         "GPTA Local Timer Cell X Register 00"
   GPTA0_LTCXR01         "GPTA Local Timer Cell X Register 01"
   GPTA0_LTCXR02         "GPTA Local Timer Cell X Register 02"
   GPTA0_LTCXR03         "GPTA Local Timer Cell X Register 03"
   GPTA0_LTCXR04         "GPTA Local Timer Cell X Register 04"
   GPTA0_LTCXR05         "GPTA Local Timer Cell X Register 05"
   GPTA0_LTCXR06         "GPTA Local Timer Cell X Register 06"
   GPTA0_LTCXR07         "GPTA Local Timer Cell X Register 07"
   GPTA0_LTCXR08         "GPTA Local Timer Cell X Register 08"
   GPTA0_LTCXR09         "GPTA Local Timer Cell X Register 09"
   GPTA0_LTCXR10         "GPTA Local Timer Cell X Register 10"
   GPTA0_LTCXR11         "GPTA Local Timer Cell X Register 11"
   GPTA0_LTCXR12         "GPTA Local Timer Cell X Register 12"
   GPTA0_LTCXR13         "GPTA Local Timer Cell X Register 13"
   GPTA0_LTCXR14         "GPTA Local Timer Cell X Register 14"
   GPTA0_LTCXR15         "GPTA Local Timer Cell X Register 15"
   GPTA0_LTCXR16         "GPTA Local Timer Cell X Register 16"
   GPTA0_LTCXR17         "GPTA Local Timer Cell X Register 17"
   GPTA0_LTCXR18         "GPTA Local Timer Cell X Register 18"
   GPTA0_LTCXR19         "GPTA Local Timer Cell X Register 19"
   GPTA0_LTCXR20         "GPTA Local Timer Cell X Register 20"
   GPTA0_LTCXR21         "GPTA Local Timer Cell X Register 21"
   GPTA0_LTCXR22         "GPTA Local Timer Cell X Register 22"
   GPTA0_LTCXR23         "GPTA Local Timer Cell X Register 23"
   GPTA0_LTCXR24         "GPTA Local Timer Cell X Register 24"
   GPTA0_LTCXR25         "GPTA Local Timer Cell X Register 25"
   GPTA0_LTCXR26         "GPTA Local Timer Cell X Register 26"
   GPTA0_LTCXR27         "GPTA Local Timer Cell X Register 27"
   GPTA0_LTCXR28         "GPTA Local Timer Cell X Register 28"
   GPTA0_LTCXR29         "GPTA Local Timer Cell X Register 29"
   GPTA0_LTCXR30         "GPTA Local Timer Cell X Register 30"
   GPTA0_LTCXR31         "GPTA Local Timer Cell X Register 31"
   GPTA0_LTCXR32         "GPTA Local Timer Cell X Register 32"
   GPTA0_LTCXR33         "GPTA Local Timer Cell X Register 33"
   GPTA0_LTCXR34         "GPTA Local Timer Cell X Register 34"
   GPTA0_LTCXR35         "GPTA Local Timer Cell X Register 35"
   GPTA0_LTCXR36         "GPTA Local Timer Cell X Register 36"
   GPTA0_LTCXR37         "GPTA Local Timer Cell X Register 37"
   GPTA0_LTCXR38         "GPTA Local Timer Cell X Register 38"
   GPTA0_LTCXR39         "GPTA Local Timer Cell X Register 39"
   GPTA0_LTCXR40         "GPTA Local Timer Cell X Register 40"
   GPTA0_LTCXR41         "GPTA Local Timer Cell X Register 41"
   GPTA0_LTCXR42         "GPTA Local Timer Cell X Register 42"
   GPTA0_LTCXR43         "GPTA Local Timer Cell X Register 43"
   GPTA0_LTCXR44         "GPTA Local Timer Cell X Register 44"
   GPTA0_LTCXR45         "GPTA Local Timer Cell X Register 45"
   GPTA0_LTCXR46         "GPTA Local Timer Cell X Register 46"
   GPTA0_LTCXR47         "GPTA Local Timer Cell X Register 47"
   GPTA0_LTCXR48         "GPTA Local Timer Cell X Register 48"
   GPTA0_LTCXR49         "GPTA Local Timer Cell X Register 49"
   GPTA0_LTCXR50         "GPTA Local Timer Cell X Register 50"
   GPTA0_LTCXR51         "GPTA Local Timer Cell X Register 51"
   GPTA0_LTCXR52         "GPTA Local Timer Cell X Register 52"
   GPTA0_LTCXR53         "GPTA Local Timer Cell X Register 53"
   GPTA0_LTCXR54         "GPTA Local Timer Cell X Register 54"
   GPTA0_LTCXR55         "GPTA Local Timer Cell X Register 55"
   GPTA0_LTCXR56         "GPTA Local Timer Cell X Register 56"
   GPTA0_LTCXR57         "GPTA Local Timer Cell X Register 57"
   GPTA0_LTCXR58         "GPTA Local Timer Cell X Register 58"
   GPTA0_LTCXR59         "GPTA Local Timer Cell X Register 59"
   GPTA0_LTCXR60         "GPTA Local Timer Cell X Register 60"
   GPTA0_LTCXR61         "GPTA Local Timer Cell X Register 61"
   GPTA0_LTCXR62         "GPTA Local Timer Cell X Register 62"
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
} __attribute__((aligned(4))) GPTA0_LTCXRm_t_nonv;

typedef volatile GPTA0_LTCXRm_t_nonv GPTA0_LTCXRm_t;

/********************** GPTA0_SRCm_t *************************/
/*
   GPTA0_SRC00           "GPTA Service Request Control Register 00"
   GPTA0_SRC01           "GPTA Service Request Control Register 01"
   GPTA0_SRC02           "GPTA Service Request Control Register 02"
   GPTA0_SRC03           "GPTA Service Request Control Register 03"
   GPTA0_SRC04           "GPTA Service Request Control Register 04"
   GPTA0_SRC05           "GPTA Service Request Control Register 05"
   GPTA0_SRC06           "GPTA Service Request Control Register 06"
   GPTA0_SRC07           "GPTA Service Request Control Register 07"
   GPTA0_SRC08           "GPTA Service Request Control Register 08"
   GPTA0_SRC09           "GPTA Service Request Control Register 09"
   GPTA0_SRC10           "GPTA Service Request Control Register 10"
   GPTA0_SRC11           "GPTA Service Request Control Register 11"
   GPTA0_SRC12           "GPTA Service Request Control Register 12"
   GPTA0_SRC13           "GPTA Service Request Control Register 13"
   GPTA0_SRC14           "GPTA Service Request Control Register 14"
   GPTA0_SRC15           "GPTA Service Request Control Register 15"
   GPTA0_SRC16           "GPTA Service Request Control Register 16"
   GPTA0_SRC17           "GPTA Service Request Control Register 17"
   GPTA0_SRC18           "GPTA Service Request Control Register 18"
   GPTA0_SRC19           "GPTA Service Request Control Register 19"
   GPTA0_SRC20           "GPTA Service Request Control Register 20"
   GPTA0_SRC21           "GPTA Service Request Control Register 21"
   GPTA0_SRC22           "GPTA Service Request Control Register 22"
   GPTA0_SRC23           "GPTA Service Request Control Register 23"
   GPTA0_SRC24           "GPTA Service Request Control Register 24"
   GPTA0_SRC25           "GPTA Service Request Control Register 25"
   GPTA0_SRC26           "GPTA Service Request Control Register 26"
   GPTA0_SRC27           "GPTA Service Request Control Register 27"
   GPTA0_SRC28           "GPTA Service Request Control Register 28"
   GPTA0_SRC29           "GPTA Service Request Control Register 29"
   GPTA0_SRC30           "GPTA Service Request Control Register 30"
   GPTA0_SRC31           "GPTA Service Request Control Register 31"
   GPTA0_SRC32           "GPTA Service Request Control Register 32"
   GPTA0_SRC33           "GPTA Service Request Control Register 33"
   GPTA0_SRC34           "GPTA Service Request Control Register 34"
   GPTA0_SRC35           "GPTA Service Request Control Register 35"
   GPTA0_SRC36           "GPTA Service Request Control Register 36"
   GPTA0_SRC37           "GPTA Service Request Control Register 37"
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
} __attribute__((aligned(4))) GPTA0_SRCm_t_nonv;

typedef volatile GPTA0_SRCm_t_nonv GPTA0_SRCm_t;

/********************** GPTA0_SRSCm_t *************************/
/*
   GPTA0_SRSC2           "GPTA Service Request Clear Register 2"
   GPTA0_SRSC3           "GPTA Service Request Clear Register 3"
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
} __attribute__((aligned(4))) GPTA0_SRSCm_t_nonv;

typedef volatile GPTA0_SRSCm_t_nonv GPTA0_SRSCm_t;

/********************** GPTA0_SRSSm_t *************************/
/*
   GPTA0_SRSS2           "GPTA Service Request Set Register 2"
   GPTA0_SRSS3           "GPTA Service Request Set Register 3"
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
} __attribute__((aligned(4))) GPTA0_SRSSm_t_nonv;

typedef volatile GPTA0_SRSSm_t_nonv GPTA0_SRSSm_t;


#endif /* _HAVE_TRICORE_GPTA0_SHARETYPES_H_ */

