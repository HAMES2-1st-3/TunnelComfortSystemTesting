/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_GPTA0_GPTA1_SHARETYPES_H_
#define _HAVE_TRICORE_GPTA0_GPTA1_SHARETYPES_H_


/********************** GPTA0_MMXCTRm_t *************************/
/*
   GPTA0_MMXCTR00        "GPTA-to-MSC Multiplexer Control Register 00"
   GPTA0_MMXCTR01        "GPTA-to-MSC Multiplexer Control Register 01"
   GPTA0_MMXCTR10        "GPTA-to-MSC Multiplexer Control Register 10"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MUX0:2;              /*  = [0..1] = 0x00000003 */
      unsigned int MUX1:2;              /*  = [2..3] = 0x0000000c */
      unsigned int MUX2:2;              /*  = [4..5] = 0x00000030 */
      unsigned int MUX3:2;              /*  = [6..7] = 0x000000c0 */
      unsigned int MUX4:2;              /*  = [8..9] = 0x00000300 */
      unsigned int MUX5:2;              /*  = [10..11] = 0x00000c00 */
      unsigned int MUX6:2;              /*  = [12..13] = 0x00003000 */
      unsigned int MUX7:2;              /*  = [14..15] = 0x0000c000 */
      unsigned int MUX8:2;              /*  = [16..17] = 0x00030000 */
      unsigned int MUX9:2;              /*  = [18..19] = 0x000c0000 */
      unsigned int MUX10:2;             /*  = [20..21] = 0x00300000 */
      unsigned int MUX11:2;             /*  = [22..23] = 0x00c00000 */
      unsigned int MUX12:2;             /*  = [24..25] = 0x03000000 */
      unsigned int MUX13:2;             /*  = [26..27] = 0x0c000000 */
      unsigned int MUX14:2;             /*  = [28..29] = 0x30000000 */
      unsigned int MUX15:2;             /*  = [30..31] = 0xc0000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) GPTA0_MMXCTRm_t_nonv;

typedef volatile GPTA0_MMXCTRm_t_nonv GPTA0_MMXCTRm_t;

/********************** GPTAn_CKBCTR_t *************************/
/*
   GPTA0_CKBCTR          "GPTA0 Clock Bus Control Register"
   GPTA1_CKBCTR          "GPTA1 Clock Bus Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DFA02:4;             /*  = [0..3] = 0x0000000f */
      unsigned int DFA04:4;             /*  = [4..7] = 0x000000f0 */
      unsigned int DFA06:4;             /*  = [8..11] = 0x00000f00 */
      unsigned int DFA07:4;             /*  = [12..15] = 0x0000f000 */
      unsigned int DFA03:2;             /*  = [16..17] = 0x00030000 */
      unsigned int DFALTC:3;            /*  = [18..20] = 0x001c0000 */
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
} __attribute__((aligned(4))) GPTAn_CKBCTR_t_nonv;

typedef volatile GPTAn_CKBCTR_t_nonv GPTAn_CKBCTR_t;

/********************** GPTAn_DCMCAVm_t *************************/
/*
   GPTA0_DCMCAV0         "GPTA0 Duty Cycle Measurement Capture Register 0"
   GPTA0_DCMCAV1         "GPTA0 Duty Cycle Measurement Capture Register 1"
   GPTA0_DCMCAV2         "GPTA0 Duty Cycle Measurement Capture Register 2"
   GPTA0_DCMCAV3         "GPTA0 Duty Cycle Measurement Capture Register 3"
   GPTA1_DCMCAV0         "GPTA1 Duty Cycle Measurement Capture Register 0"
   GPTA1_DCMCAV1         "GPTA1 Duty Cycle Measurement Capture Register 1"
   GPTA1_DCMCAV2         "GPTA1 Duty Cycle Measurement Capture Register 2"
   GPTA1_DCMCAV3         "GPTA1 Duty Cycle Measurement Capture Register 3"
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
} __attribute__((aligned(4))) GPTAn_DCMCAVm_t_nonv;

typedef volatile GPTAn_DCMCAVm_t_nonv GPTAn_DCMCAVm_t;

/********************** GPTAn_DCMCOVm_t *************************/
/*
   GPTA0_DCMCOV0         "GPTA0 Duty Cycle Measurement Capture/Compare Register 0"
   GPTA0_DCMCOV1         "GPTA0 Duty Cycle Measurement Capture/Compare Register 1"
   GPTA0_DCMCOV2         "GPTA0 Duty Cycle Measurement Capture/Compare Register 2"
   GPTA0_DCMCOV3         "GPTA0 Duty Cycle Measurement Capture/Compare Register 3"
   GPTA1_DCMCOV0         "GPTA1 Duty Cycle Measurement Capture/Compare Register 0"
   GPTA1_DCMCOV1         "GPTA1 Duty Cycle Measurement Capture/Compare Register 1"
   GPTA1_DCMCOV2         "GPTA1 Duty Cycle Measurement Capture/Compare Register 2"
   GPTA1_DCMCOV3         "GPTA1 Duty Cycle Measurement Capture/Compare Register 3"
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
} __attribute__((aligned(4))) GPTAn_DCMCOVm_t_nonv;

typedef volatile GPTAn_DCMCOVm_t_nonv GPTAn_DCMCOVm_t;

/********************** GPTAn_DCMCTRm_t *************************/
/*
   GPTA0_DCMCTR0         "GPTA0 Duty Cycle Measurement Control Register 0"
   GPTA0_DCMCTR1         "GPTA0 Duty Cycle Measurement Control Register 1"
   GPTA0_DCMCTR2         "GPTA0 Duty Cycle Measurement Control Register 2"
   GPTA0_DCMCTR3         "GPTA0 Duty Cycle Measurement Control Register 3"
   GPTA1_DCMCTR0         "GPTA1 Duty Cycle Measurement Control Register 0"
   GPTA1_DCMCTR1         "GPTA1 Duty Cycle Measurement Control Register 1"
   GPTA1_DCMCTR2         "GPTA1 Duty Cycle Measurement Control Register 2"
   GPTA1_DCMCTR3         "GPTA1 Duty Cycle Measurement Control Register 3"
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
} __attribute__((aligned(4))) GPTAn_DCMCTRm_t_nonv;

typedef volatile GPTAn_DCMCTRm_t_nonv GPTAn_DCMCTRm_t;

/********************** GPTAn_DCMTIMm_t *************************/
/*
   GPTA0_DCMTIM0         "GPTA0 Duty Cycle Measurement Timer Register 0"
   GPTA0_DCMTIM1         "GPTA0 Duty Cycle Measurement Timer Register 1"
   GPTA0_DCMTIM2         "GPTA0 Duty Cycle Measurement Timer Register 2"
   GPTA0_DCMTIM3         "GPTA0 Duty Cycle Measurement Timer Register 3"
   GPTA1_DCMTIM0         "GPTA1 Duty Cycle Measurement Timer Register 0"
   GPTA1_DCMTIM1         "GPTA1 Duty Cycle Measurement Timer Register 1"
   GPTA1_DCMTIM2         "GPTA1 Duty Cycle Measurement Timer Register 2"
   GPTA1_DCMTIM3         "GPTA1 Duty Cycle Measurement Timer Register 3"
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
} __attribute__((aligned(4))) GPTAn_DCMTIMm_t_nonv;

typedef volatile GPTAn_DCMTIMm_t_nonv GPTAn_DCMTIMm_t;

/********************** GPTAn_FPCCTRm_t *************************/
/*
   GPTA0_FPCCTR0         "GPTA0 Filter and Prescaler Cell Control Register 0"
   GPTA0_FPCCTR1         "GPTA0 Filter and Prescaler Cell Control Register 1"
   GPTA0_FPCCTR2         "GPTA0 Filter and Prescaler Cell Control Register 2"
   GPTA0_FPCCTR3         "GPTA0 Filter and Prescaler Cell Control Register 3"
   GPTA0_FPCCTR4         "GPTA0 Filter and Prescaler Cell Control Register 4"
   GPTA0_FPCCTR5         "GPTA0 Filter and Prescaler Cell Control Register 5"
   GPTA1_FPCCTR0         "GPTA1 Filter and Prescaler Cell Control Register 0"
   GPTA1_FPCCTR1         "GPTA1 Filter and Prescaler Cell Control Register 1"
   GPTA1_FPCCTR2         "GPTA1 Filter and Prescaler Cell Control Register 2"
   GPTA1_FPCCTR3         "GPTA1 Filter and Prescaler Cell Control Register 3"
   GPTA1_FPCCTR4         "GPTA1 Filter and Prescaler Cell Control Register 4"
   GPTA1_FPCCTR5         "GPTA1 Filter and Prescaler Cell Control Register 5"
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
} __attribute__((aligned(4))) GPTAn_FPCCTRm_t_nonv;

typedef volatile GPTAn_FPCCTRm_t_nonv GPTAn_FPCCTRm_t;

/********************** GPTAn_FPCSTAT_t *************************/
/*
   GPTA0_FPCSTAT         "GPTA0 Filter and Prescaler Cell Status Register"
   GPTA1_FPCSTAT         "GPTA1 Filter and Prescaler Cell Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int REG0:1;              /*  = [0..0] = 0x00000001 */
      unsigned int REG1:1;              /*  = [1..1] = 0x00000002 */
      unsigned int REG2:1;              /*  = [2..2] = 0x00000004 */
      unsigned int REG3:1;              /*  = [3..3] = 0x00000008 */
      unsigned int REG4:1;              /*  = [4..4] = 0x00000010 */
      unsigned int REG5:1;              /*  = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int FEG0:1;              /*  = [8..8] = 0x00000100 */
      unsigned int FEG1:1;              /*  = [9..9] = 0x00000200 */
      unsigned int FEG2:1;              /*  = [10..10] = 0x00000400 */
      unsigned int FEG3:1;              /*  = [11..11] = 0x00000800 */
      unsigned int FEG4:1;              /*  = [12..12] = 0x00001000 */
      unsigned int FEG5:1;              /*  = [13..13] = 0x00002000 */
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
} __attribute__((aligned(4))) GPTAn_FPCSTAT_t_nonv;

typedef volatile GPTAn_FPCSTAT_t_nonv GPTAn_FPCSTAT_t;

/********************** GPTAn_FPCTIMm_t *************************/
/*
   GPTA0_FPCTIM0         "GPTA0 Filter and Prescaler Cell Timer Register 0"
   GPTA0_FPCTIM1         "GPTA0 Filter and Prescaler Cell Timer Register 1"
   GPTA0_FPCTIM2         "GPTA0 Filter and Prescaler Cell Timer Register 2"
   GPTA0_FPCTIM3         "GPTA0 Filter and Prescaler Cell Timer Register 3"
   GPTA0_FPCTIM4         "GPTA0 Filter and Prescaler Cell Timer Register 4"
   GPTA0_FPCTIM5         "GPTA0 Filter and Prescaler Cell Timer Register 5"
   GPTA1_FPCTIM0         "GPTA1 Filter and Prescaler Cell Timer Register 0"
   GPTA1_FPCTIM1         "GPTA1 Filter and Prescaler Cell Timer Register 1"
   GPTA1_FPCTIM2         "GPTA1 Filter and Prescaler Cell Timer Register 2"
   GPTA1_FPCTIM3         "GPTA1 Filter and Prescaler Cell Timer Register 3"
   GPTA1_FPCTIM4         "GPTA1 Filter and Prescaler Cell Timer Register 4"
   GPTA1_FPCTIM5         "GPTA1 Filter and Prescaler Cell Timer Register 5"
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
} __attribute__((aligned(4))) GPTAn_FPCTIMm_t_nonv;

typedef volatile GPTAn_FPCTIMm_t_nonv GPTAn_FPCTIMm_t;

/********************** GPTAn_GTCCTRm_t *************************/
/*
   GPTA0_GTCCTR00        "GPTA0 Global Timer Cell Control Register 00"
   GPTA0_GTCCTR01        "GPTA0 Global Timer Cell Control Register 01"
   GPTA0_GTCCTR02        "GPTA0 Global Timer Cell Control Register 02"
   GPTA0_GTCCTR03        "GPTA0 Global Timer Cell Control Register 03"
   GPTA0_GTCCTR04        "GPTA0 Global Timer Cell Control Register 04"
   GPTA0_GTCCTR05        "GPTA0 Global Timer Cell Control Register 05"
   GPTA0_GTCCTR06        "GPTA0 Global Timer Cell Control Register 06"
   GPTA0_GTCCTR07        "GPTA0 Global Timer Cell Control Register 07"
   GPTA0_GTCCTR08        "GPTA0 Global Timer Cell Control Register 08"
   GPTA0_GTCCTR09        "GPTA0 Global Timer Cell Control Register 09"
   GPTA0_GTCCTR10        "GPTA0 Global Timer Cell Control Register 10"
   GPTA0_GTCCTR11        "GPTA0 Global Timer Cell Control Register 11"
   GPTA0_GTCCTR12        "GPTA0 Global Timer Cell Control Register 12"
   GPTA0_GTCCTR13        "GPTA0 Global Timer Cell Control Register 13"
   GPTA0_GTCCTR14        "GPTA0 Global Timer Cell Control Register 14"
   GPTA0_GTCCTR15        "GPTA0 Global Timer Cell Control Register 15"
   GPTA0_GTCCTR16        "GPTA0 Global Timer Cell Control Register 16"
   GPTA0_GTCCTR17        "GPTA0 Global Timer Cell Control Register 17"
   GPTA0_GTCCTR18        "GPTA0 Global Timer Cell Control Register 18"
   GPTA0_GTCCTR19        "GPTA0 Global Timer Cell Control Register 19"
   GPTA0_GTCCTR20        "GPTA0 Global Timer Cell Control Register 20"
   GPTA0_GTCCTR21        "GPTA0 Global Timer Cell Control Register 21"
   GPTA0_GTCCTR22        "GPTA0 Global Timer Cell Control Register 22"
   GPTA0_GTCCTR23        "GPTA0 Global Timer Cell Control Register 23"
   GPTA0_GTCCTR24        "GPTA0 Global Timer Cell Control Register 24"
   GPTA0_GTCCTR25        "GPTA0 Global Timer Cell Control Register 25"
   GPTA0_GTCCTR26        "GPTA0 Global Timer Cell Control Register 26"
   GPTA0_GTCCTR27        "GPTA0 Global Timer Cell Control Register 27"
   GPTA0_GTCCTR28        "GPTA0 Global Timer Cell Control Register 28"
   GPTA0_GTCCTR29        "GPTA0 Global Timer Cell Control Register 29"
   GPTA0_GTCCTR30        "GPTA0 Global Timer Cell Control Register 30"
   GPTA0_GTCCTR31        "GPTA0 Global Timer Cell Control Register 31"
   GPTA1_GTCCTR00        "GPTA1 Global Timer Cell Control Register 00"
   GPTA1_GTCCTR01        "GPTA1 Global Timer Cell Control Register 01"
   GPTA1_GTCCTR02        "GPTA1 Global Timer Cell Control Register 02"
   GPTA1_GTCCTR03        "GPTA1 Global Timer Cell Control Register 03"
   GPTA1_GTCCTR04        "GPTA1 Global Timer Cell Control Register 04"
   GPTA1_GTCCTR05        "GPTA1 Global Timer Cell Control Register 05"
   GPTA1_GTCCTR06        "GPTA1 Global Timer Cell Control Register 06"
   GPTA1_GTCCTR07        "GPTA1 Global Timer Cell Control Register 07"
   GPTA1_GTCCTR08        "GPTA1 Global Timer Cell Control Register 08"
   GPTA1_GTCCTR09        "GPTA1 Global Timer Cell Control Register 09"
   GPTA1_GTCCTR10        "GPTA1 Global Timer Cell Control Register 10"
   GPTA1_GTCCTR11        "GPTA1 Global Timer Cell Control Register 11"
   GPTA1_GTCCTR12        "GPTA1 Global Timer Cell Control Register 12"
   GPTA1_GTCCTR13        "GPTA1 Global Timer Cell Control Register 13"
   GPTA1_GTCCTR14        "GPTA1 Global Timer Cell Control Register 14"
   GPTA1_GTCCTR15        "GPTA1 Global Timer Cell Control Register 15"
   GPTA1_GTCCTR16        "GPTA1 Global Timer Cell Control Register 16"
   GPTA1_GTCCTR17        "GPTA1 Global Timer Cell Control Register 17"
   GPTA1_GTCCTR18        "GPTA1 Global Timer Cell Control Register 18"
   GPTA1_GTCCTR19        "GPTA1 Global Timer Cell Control Register 19"
   GPTA1_GTCCTR20        "GPTA1 Global Timer Cell Control Register 20"
   GPTA1_GTCCTR21        "GPTA1 Global Timer Cell Control Register 21"
   GPTA1_GTCCTR22        "GPTA1 Global Timer Cell Control Register 22"
   GPTA1_GTCCTR23        "GPTA1 Global Timer Cell Control Register 23"
   GPTA1_GTCCTR24        "GPTA1 Global Timer Cell Control Register 24"
   GPTA1_GTCCTR25        "GPTA1 Global Timer Cell Control Register 25"
   GPTA1_GTCCTR26        "GPTA1 Global Timer Cell Control Register 26"
   GPTA1_GTCCTR27        "GPTA1 Global Timer Cell Control Register 27"
   GPTA1_GTCCTR28        "GPTA1 Global Timer Cell Control Register 28"
   GPTA1_GTCCTR29        "GPTA1 Global Timer Cell Control Register 29"
   GPTA1_GTCCTR30        "GPTA1 Global Timer Cell Control Register 30"
   GPTA1_GTCCTR31        "GPTA1 Global Timer Cell Control Register 31"
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
} __attribute__((aligned(4))) GPTAn_GTCCTRm_t_nonv;

typedef volatile GPTAn_GTCCTRm_t_nonv GPTAn_GTCCTRm_t;

/********************** GPTAn_GTCTRm_t *************************/
/*
   GPTA0_GTCTR0          "GPTA0 Global Timer Control Register 0"
   GPTA0_GTCTR1          "GPTA0 Global Timer Control Register 1"
   GPTA1_GTCTR0          "GPTA1 Global Timer Control Register 0"
   GPTA1_GTCTR1          "GPTA1 Global Timer Control Register 1"
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
} __attribute__((aligned(4))) GPTAn_GTCTRm_t_nonv;

typedef volatile GPTAn_GTCTRm_t_nonv GPTAn_GTCTRm_t;

/********************** GPTAn_GTCXRm_t *************************/
/*
   GPTA0_GTCXR00         "GPTA0 Global Timer Cell X Register 00"
   GPTA0_GTCXR01         "GPTA0 Global Timer Cell X Register 01"
   GPTA0_GTCXR02         "GPTA0 Global Timer Cell X Register 02"
   GPTA0_GTCXR03         "GPTA0 Global Timer Cell X Register 03"
   GPTA0_GTCXR04         "GPTA0 Global Timer Cell X Register 04"
   GPTA0_GTCXR05         "GPTA0 Global Timer Cell X Register 05"
   GPTA0_GTCXR06         "GPTA0 Global Timer Cell X Register 06"
   GPTA0_GTCXR07         "GPTA0 Global Timer Cell X Register 07"
   GPTA0_GTCXR08         "GPTA0 Global Timer Cell X Register 08"
   GPTA0_GTCXR09         "GPTA0 Global Timer Cell X Register 09"
   GPTA0_GTCXR10         "GPTA0 Global Timer Cell X Register 10"
   GPTA0_GTCXR11         "GPTA0 Global Timer Cell X Register 11"
   GPTA0_GTCXR12         "GPTA0 Global Timer Cell X Register 12"
   GPTA0_GTCXR13         "GPTA0 Global Timer Cell X Register 13"
   GPTA0_GTCXR14         "GPTA0 Global Timer Cell X Register 14"
   GPTA0_GTCXR15         "GPTA0 Global Timer Cell X Register 15"
   GPTA0_GTCXR16         "GPTA0 Global Timer Cell X Register 16"
   GPTA0_GTCXR17         "GPTA0 Global Timer Cell X Register 17"
   GPTA0_GTCXR18         "GPTA0 Global Timer Cell X Register 18"
   GPTA0_GTCXR19         "GPTA0 Global Timer Cell X Register 19"
   GPTA0_GTCXR20         "GPTA0 Global Timer Cell X Register 20"
   GPTA0_GTCXR21         "GPTA0 Global Timer Cell X Register 21"
   GPTA0_GTCXR22         "GPTA0 Global Timer Cell X Register 22"
   GPTA0_GTCXR23         "GPTA0 Global Timer Cell X Register 23"
   GPTA0_GTCXR24         "GPTA0 Global Timer Cell X Register 24"
   GPTA0_GTCXR25         "GPTA0 Global Timer Cell X Register 25"
   GPTA0_GTCXR26         "GPTA0 Global Timer Cell X Register 26"
   GPTA0_GTCXR27         "GPTA0 Global Timer Cell X Register 27"
   GPTA0_GTCXR28         "GPTA0 Global Timer Cell X Register 28"
   GPTA0_GTCXR29         "GPTA0 Global Timer Cell X Register 29"
   GPTA0_GTCXR30         "GPTA0 Global Timer Cell X Register 30"
   GPTA0_GTCXR31         "GPTA0 Global Timer Cell X Register 31"
   GPTA1_GTCXR00         "GPTA1 Global Timer Cell X Register 00"
   GPTA1_GTCXR01         "GPTA1 Global Timer Cell X Register 01"
   GPTA1_GTCXR02         "GPTA1 Global Timer Cell X Register 02"
   GPTA1_GTCXR03         "GPTA1 Global Timer Cell X Register 03"
   GPTA1_GTCXR04         "GPTA1 Global Timer Cell X Register 04"
   GPTA1_GTCXR05         "GPTA1 Global Timer Cell X Register 05"
   GPTA1_GTCXR06         "GPTA1 Global Timer Cell X Register 06"
   GPTA1_GTCXR07         "GPTA1 Global Timer Cell X Register 07"
   GPTA1_GTCXR08         "GPTA1 Global Timer Cell X Register 08"
   GPTA1_GTCXR09         "GPTA1 Global Timer Cell X Register 09"
   GPTA1_GTCXR10         "GPTA1 Global Timer Cell X Register 10"
   GPTA1_GTCXR11         "GPTA1 Global Timer Cell X Register 11"
   GPTA1_GTCXR12         "GPTA1 Global Timer Cell X Register 12"
   GPTA1_GTCXR13         "GPTA1 Global Timer Cell X Register 13"
   GPTA1_GTCXR14         "GPTA1 Global Timer Cell X Register 14"
   GPTA1_GTCXR15         "GPTA1 Global Timer Cell X Register 15"
   GPTA1_GTCXR16         "GPTA1 Global Timer Cell X Register 16"
   GPTA1_GTCXR17         "GPTA1 Global Timer Cell X Register 17"
   GPTA1_GTCXR18         "GPTA1 Global Timer Cell X Register 18"
   GPTA1_GTCXR19         "GPTA1 Global Timer Cell X Register 19"
   GPTA1_GTCXR20         "GPTA1 Global Timer Cell X Register 20"
   GPTA1_GTCXR21         "GPTA1 Global Timer Cell X Register 21"
   GPTA1_GTCXR22         "GPTA1 Global Timer Cell X Register 22"
   GPTA1_GTCXR23         "GPTA1 Global Timer Cell X Register 23"
   GPTA1_GTCXR24         "GPTA1 Global Timer Cell X Register 24"
   GPTA1_GTCXR25         "GPTA1 Global Timer Cell X Register 25"
   GPTA1_GTCXR26         "GPTA1 Global Timer Cell X Register 26"
   GPTA1_GTCXR27         "GPTA1 Global Timer Cell X Register 27"
   GPTA1_GTCXR28         "GPTA1 Global Timer Cell X Register 28"
   GPTA1_GTCXR29         "GPTA1 Global Timer Cell X Register 29"
   GPTA1_GTCXR30         "GPTA1 Global Timer Cell X Register 30"
   GPTA1_GTCXR31         "GPTA1 Global Timer Cell X Register 31"
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
} __attribute__((aligned(4))) GPTAn_GTCXRm_t_nonv;

typedef volatile GPTAn_GTCXRm_t_nonv GPTAn_GTCXRm_t;

/********************** GPTAn_GTREVm_t *************************/
/*
   GPTA0_GTREV0          "GPTA0 Global Timer Reload Value Register 0"
   GPTA0_GTREV1          "GPTA0 Global Timer Reload Value Register 1"
   GPTA1_GTREV0          "GPTA1 Global Timer Reload Value Register 0"
   GPTA1_GTREV1          "GPTA1 Global Timer Reload Value Register 1"
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
} __attribute__((aligned(4))) GPTAn_GTREVm_t_nonv;

typedef volatile GPTAn_GTREVm_t_nonv GPTAn_GTREVm_t;

/********************** GPTAn_GTTIMm_t *************************/
/*
   GPTA0_GTTIM0          "GPTA0 Global Timer Register 0"
   GPTA0_GTTIM1          "GPTA0 Global Timer Register 1"
   GPTA1_GTTIM0          "GPTA1 Global Timer Register 0"
   GPTA1_GTTIM1          "GPTA1 Global Timer Register 1"
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
} __attribute__((aligned(4))) GPTAn_GTTIMm_t_nonv;

typedef volatile GPTAn_GTTIMm_t_nonv GPTAn_GTTIMm_t;

/********************** GPTAn_ID_t *************************/
/*
   GPTA0_ID              "GPTA0 Module Identification Register"
   GPTA1_ID              "GPTA1 Module Identification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0..0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1..1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
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
} __attribute__((aligned(4))) GPTAn_ID_t_nonv;

typedef volatile GPTAn_ID_t_nonv GPTAn_ID_t;

/********************** GPTAn_LTCCTR63_t *************************/
/*
   GPTA0_LTCCTR63        "GPTA0 Local Timer Cell Control Register 63"
   GPTA1_LTCCTR63        "GPTA1 Local Timer Cell Control Register 63"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int BRM:1;               /*  = [0..0] = 0x00000001 */
      unsigned int OSM:1;               /*  = [1..1] = 0x00000002 */
      unsigned int REN:2;               /*  = [2..3] = 0x0000000c */
      unsigned int RED:1;               /*  = [4..4] = 0x00000010 */
      unsigned int FED:1;               /*  = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int ILM:1;               /*  = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int CEN:1;               /*  = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
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
} __attribute__((aligned(4))) GPTAn_LTCCTR63_t_nonv;

typedef volatile GPTAn_LTCCTR63_t_nonv GPTAn_LTCCTR63_t;

/********************** GPTAn_LTCCTRm_t *************************/
/*
   GPTA0_LTCCTR00        "GPTA0 Local Timer Cell Control Register 00"
   GPTA0_LTCCTR01        "GPTA0 Local Timer Cell Control Register 01"
   GPTA0_LTCCTR02        "GPTA0 Local Timer Cell Control Register 02"
   GPTA0_LTCCTR03        "GPTA0 Local Timer Cell Control Register 03"
   GPTA0_LTCCTR04        "GPTA0 Local Timer Cell Control Register 04"
   GPTA0_LTCCTR05        "GPTA0 Local Timer Cell Control Register 05"
   GPTA0_LTCCTR06        "GPTA0 Local Timer Cell Control Register 06"
   GPTA0_LTCCTR07        "GPTA0 Local Timer Cell Control Register 07"
   GPTA0_LTCCTR08        "GPTA0 Local Timer Cell Control Register 08"
   GPTA0_LTCCTR09        "GPTA0 Local Timer Cell Control Register 09"
   GPTA0_LTCCTR10        "GPTA0 Local Timer Cell Control Register 10"
   GPTA0_LTCCTR11        "GPTA0 Local Timer Cell Control Register 11"
   GPTA0_LTCCTR12        "GPTA0 Local Timer Cell Control Register 12"
   GPTA0_LTCCTR13        "GPTA0 Local Timer Cell Control Register 13"
   GPTA0_LTCCTR14        "GPTA0 Local Timer Cell Control Register 14"
   GPTA0_LTCCTR15        "GPTA0 Local Timer Cell Control Register 15"
   GPTA0_LTCCTR16        "GPTA0 Local Timer Cell Control Register 16"
   GPTA0_LTCCTR17        "GPTA0 Local Timer Cell Control Register 17"
   GPTA0_LTCCTR18        "GPTA0 Local Timer Cell Control Register 18"
   GPTA0_LTCCTR19        "GPTA0 Local Timer Cell Control Register 19"
   GPTA0_LTCCTR20        "GPTA0 Local Timer Cell Control Register 20"
   GPTA0_LTCCTR21        "GPTA0 Local Timer Cell Control Register 21"
   GPTA0_LTCCTR22        "GPTA0 Local Timer Cell Control Register 22"
   GPTA0_LTCCTR23        "GPTA0 Local Timer Cell Control Register 23"
   GPTA0_LTCCTR24        "GPTA0 Local Timer Cell Control Register 24"
   GPTA0_LTCCTR25        "GPTA0 Local Timer Cell Control Register 25"
   GPTA0_LTCCTR26        "GPTA0 Local Timer Cell Control Register 26"
   GPTA0_LTCCTR27        "GPTA0 Local Timer Cell Control Register 27"
   GPTA0_LTCCTR28        "GPTA0 Local Timer Cell Control Register 28"
   GPTA0_LTCCTR29        "GPTA0 Local Timer Cell Control Register 29"
   GPTA0_LTCCTR30        "GPTA0 Local Timer Cell Control Register 30"
   GPTA0_LTCCTR31        "GPTA0 Local Timer Cell Control Register 31"
   GPTA0_LTCCTR32        "GPTA0 Local Timer Cell Control Register 32"
   GPTA0_LTCCTR33        "GPTA0 Local Timer Cell Control Register 33"
   GPTA0_LTCCTR34        "GPTA0 Local Timer Cell Control Register 34"
   GPTA0_LTCCTR35        "GPTA0 Local Timer Cell Control Register 35"
   GPTA0_LTCCTR36        "GPTA0 Local Timer Cell Control Register 36"
   GPTA0_LTCCTR37        "GPTA0 Local Timer Cell Control Register 37"
   GPTA0_LTCCTR38        "GPTA0 Local Timer Cell Control Register 38"
   GPTA0_LTCCTR39        "GPTA0 Local Timer Cell Control Register 39"
   GPTA0_LTCCTR40        "GPTA0 Local Timer Cell Control Register 40"
   GPTA0_LTCCTR41        "GPTA0 Local Timer Cell Control Register 41"
   GPTA0_LTCCTR42        "GPTA0 Local Timer Cell Control Register 42"
   GPTA0_LTCCTR43        "GPTA0 Local Timer Cell Control Register 43"
   GPTA0_LTCCTR44        "GPTA0 Local Timer Cell Control Register 44"
   GPTA0_LTCCTR45        "GPTA0 Local Timer Cell Control Register 45"
   GPTA0_LTCCTR46        "GPTA0 Local Timer Cell Control Register 46"
   GPTA0_LTCCTR47        "GPTA0 Local Timer Cell Control Register 47"
   GPTA0_LTCCTR48        "GPTA0 Local Timer Cell Control Register 48"
   GPTA0_LTCCTR49        "GPTA0 Local Timer Cell Control Register 49"
   GPTA0_LTCCTR50        "GPTA0 Local Timer Cell Control Register 50"
   GPTA0_LTCCTR51        "GPTA0 Local Timer Cell Control Register 51"
   GPTA0_LTCCTR52        "GPTA0 Local Timer Cell Control Register 52"
   GPTA0_LTCCTR53        "GPTA0 Local Timer Cell Control Register 53"
   GPTA0_LTCCTR54        "GPTA0 Local Timer Cell Control Register 54"
   GPTA0_LTCCTR55        "GPTA0 Local Timer Cell Control Register 55"
   GPTA0_LTCCTR56        "GPTA0 Local Timer Cell Control Register 56"
   GPTA0_LTCCTR57        "GPTA0 Local Timer Cell Control Register 57"
   GPTA0_LTCCTR58        "GPTA0 Local Timer Cell Control Register 58"
   GPTA0_LTCCTR59        "GPTA0 Local Timer Cell Control Register 59"
   GPTA0_LTCCTR60        "GPTA0 Local Timer Cell Control Register 60"
   GPTA0_LTCCTR61        "GPTA0 Local Timer Cell Control Register 61"
   GPTA0_LTCCTR62        "GPTA0 Local Timer Cell Control Register 62"
   GPTA1_LTCCTR00        "GPTA1 Local Timer Cell Control Register 00"
   GPTA1_LTCCTR01        "GPTA1 Local Timer Cell Control Register 01"
   GPTA1_LTCCTR02        "GPTA1 Local Timer Cell Control Register 02"
   GPTA1_LTCCTR03        "GPTA1 Local Timer Cell Control Register 03"
   GPTA1_LTCCTR04        "GPTA1 Local Timer Cell Control Register 04"
   GPTA1_LTCCTR05        "GPTA1 Local Timer Cell Control Register 05"
   GPTA1_LTCCTR06        "GPTA1 Local Timer Cell Control Register 06"
   GPTA1_LTCCTR07        "GPTA1 Local Timer Cell Control Register 07"
   GPTA1_LTCCTR08        "GPTA1 Local Timer Cell Control Register 08"
   GPTA1_LTCCTR09        "GPTA1 Local Timer Cell Control Register 09"
   GPTA1_LTCCTR10        "GPTA1 Local Timer Cell Control Register 10"
   GPTA1_LTCCTR11        "GPTA1 Local Timer Cell Control Register 11"
   GPTA1_LTCCTR12        "GPTA1 Local Timer Cell Control Register 12"
   GPTA1_LTCCTR13        "GPTA1 Local Timer Cell Control Register 13"
   GPTA1_LTCCTR14        "GPTA1 Local Timer Cell Control Register 14"
   GPTA1_LTCCTR15        "GPTA1 Local Timer Cell Control Register 15"
   GPTA1_LTCCTR16        "GPTA1 Local Timer Cell Control Register 16"
   GPTA1_LTCCTR17        "GPTA1 Local Timer Cell Control Register 17"
   GPTA1_LTCCTR18        "GPTA1 Local Timer Cell Control Register 18"
   GPTA1_LTCCTR19        "GPTA1 Local Timer Cell Control Register 19"
   GPTA1_LTCCTR20        "GPTA1 Local Timer Cell Control Register 20"
   GPTA1_LTCCTR21        "GPTA1 Local Timer Cell Control Register 21"
   GPTA1_LTCCTR22        "GPTA1 Local Timer Cell Control Register 22"
   GPTA1_LTCCTR23        "GPTA1 Local Timer Cell Control Register 23"
   GPTA1_LTCCTR24        "GPTA1 Local Timer Cell Control Register 24"
   GPTA1_LTCCTR25        "GPTA1 Local Timer Cell Control Register 25"
   GPTA1_LTCCTR26        "GPTA1 Local Timer Cell Control Register 26"
   GPTA1_LTCCTR27        "GPTA1 Local Timer Cell Control Register 27"
   GPTA1_LTCCTR28        "GPTA1 Local Timer Cell Control Register 28"
   GPTA1_LTCCTR29        "GPTA1 Local Timer Cell Control Register 29"
   GPTA1_LTCCTR30        "GPTA1 Local Timer Cell Control Register 30"
   GPTA1_LTCCTR31        "GPTA1 Local Timer Cell Control Register 31"
   GPTA1_LTCCTR32        "GPTA1 Local Timer Cell Control Register 32"
   GPTA1_LTCCTR33        "GPTA1 Local Timer Cell Control Register 33"
   GPTA1_LTCCTR34        "GPTA1 Local Timer Cell Control Register 34"
   GPTA1_LTCCTR35        "GPTA1 Local Timer Cell Control Register 35"
   GPTA1_LTCCTR36        "GPTA1 Local Timer Cell Control Register 36"
   GPTA1_LTCCTR37        "GPTA1 Local Timer Cell Control Register 37"
   GPTA1_LTCCTR38        "GPTA1 Local Timer Cell Control Register 38"
   GPTA1_LTCCTR39        "GPTA1 Local Timer Cell Control Register 39"
   GPTA1_LTCCTR40        "GPTA1 Local Timer Cell Control Register 40"
   GPTA1_LTCCTR41        "GPTA1 Local Timer Cell Control Register 41"
   GPTA1_LTCCTR42        "GPTA1 Local Timer Cell Control Register 42"
   GPTA1_LTCCTR43        "GPTA1 Local Timer Cell Control Register 43"
   GPTA1_LTCCTR44        "GPTA1 Local Timer Cell Control Register 44"
   GPTA1_LTCCTR45        "GPTA1 Local Timer Cell Control Register 45"
   GPTA1_LTCCTR46        "GPTA1 Local Timer Cell Control Register 46"
   GPTA1_LTCCTR47        "GPTA1 Local Timer Cell Control Register 47"
   GPTA1_LTCCTR48        "GPTA1 Local Timer Cell Control Register 48"
   GPTA1_LTCCTR49        "GPTA1 Local Timer Cell Control Register 49"
   GPTA1_LTCCTR50        "GPTA1 Local Timer Cell Control Register 50"
   GPTA1_LTCCTR51        "GPTA1 Local Timer Cell Control Register 51"
   GPTA1_LTCCTR52        "GPTA1 Local Timer Cell Control Register 52"
   GPTA1_LTCCTR53        "GPTA1 Local Timer Cell Control Register 53"
   GPTA1_LTCCTR54        "GPTA1 Local Timer Cell Control Register 54"
   GPTA1_LTCCTR55        "GPTA1 Local Timer Cell Control Register 55"
   GPTA1_LTCCTR56        "GPTA1 Local Timer Cell Control Register 56"
   GPTA1_LTCCTR57        "GPTA1 Local Timer Cell Control Register 57"
   GPTA1_LTCCTR58        "GPTA1 Local Timer Cell Control Register 58"
   GPTA1_LTCCTR59        "GPTA1 Local Timer Cell Control Register 59"
   GPTA1_LTCCTR60        "GPTA1 Local Timer Cell Control Register 60"
   GPTA1_LTCCTR61        "GPTA1 Local Timer Cell Control Register 61"
   GPTA1_LTCCTR62        "GPTA1 Local Timer Cell Control Register 62"
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
} __attribute__((aligned(4))) GPTAn_LTCCTRm_t_nonv;

typedef volatile GPTAn_LTCCTRm_t_nonv GPTAn_LTCCTRm_t;

/********************** GPTAn_LTCXR63_t *************************/
/*
   GPTA0_LTCXR63         "GPTA0 Local Timer Cell X Register 63"
   GPTA1_LTCXR63         "GPTA1 Local Timer Cell X Register 63"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int X:16;                /*  = [0..15] = 0x0000ffff */
      unsigned int XS:16;               /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) GPTAn_LTCXR63_t_nonv;

typedef volatile GPTAn_LTCXR63_t_nonv GPTAn_LTCXR63_t;

/********************** GPTAn_LTCXRm_t *************************/
/*
   GPTA0_LTCXR00         "GPTA0 Local Timer Cell X Register 00"
   GPTA0_LTCXR01         "GPTA0 Local Timer Cell X Register 01"
   GPTA0_LTCXR02         "GPTA0 Local Timer Cell X Register 02"
   GPTA0_LTCXR03         "GPTA0 Local Timer Cell X Register 03"
   GPTA0_LTCXR04         "GPTA0 Local Timer Cell X Register 04"
   GPTA0_LTCXR05         "GPTA0 Local Timer Cell X Register 05"
   GPTA0_LTCXR06         "GPTA0 Local Timer Cell X Register 06"
   GPTA0_LTCXR07         "GPTA0 Local Timer Cell X Register 07"
   GPTA0_LTCXR08         "GPTA0 Local Timer Cell X Register 08"
   GPTA0_LTCXR09         "GPTA0 Local Timer Cell X Register 09"
   GPTA0_LTCXR10         "GPTA0 Local Timer Cell X Register 10"
   GPTA0_LTCXR11         "GPTA0 Local Timer Cell X Register 11"
   GPTA0_LTCXR12         "GPTA0 Local Timer Cell X Register 12"
   GPTA0_LTCXR13         "GPTA0 Local Timer Cell X Register 13"
   GPTA0_LTCXR14         "GPTA0 Local Timer Cell X Register 14"
   GPTA0_LTCXR15         "GPTA0 Local Timer Cell X Register 15"
   GPTA0_LTCXR16         "GPTA0 Local Timer Cell X Register 16"
   GPTA0_LTCXR17         "GPTA0 Local Timer Cell X Register 17"
   GPTA0_LTCXR18         "GPTA0 Local Timer Cell X Register 18"
   GPTA0_LTCXR19         "GPTA0 Local Timer Cell X Register 19"
   GPTA0_LTCXR20         "GPTA0 Local Timer Cell X Register 20"
   GPTA0_LTCXR21         "GPTA0 Local Timer Cell X Register 21"
   GPTA0_LTCXR22         "GPTA0 Local Timer Cell X Register 22"
   GPTA0_LTCXR23         "GPTA0 Local Timer Cell X Register 23"
   GPTA0_LTCXR24         "GPTA0 Local Timer Cell X Register 24"
   GPTA0_LTCXR25         "GPTA0 Local Timer Cell X Register 25"
   GPTA0_LTCXR26         "GPTA0 Local Timer Cell X Register 26"
   GPTA0_LTCXR27         "GPTA0 Local Timer Cell X Register 27"
   GPTA0_LTCXR28         "GPTA0 Local Timer Cell X Register 28"
   GPTA0_LTCXR29         "GPTA0 Local Timer Cell X Register 29"
   GPTA0_LTCXR30         "GPTA0 Local Timer Cell X Register 30"
   GPTA0_LTCXR31         "GPTA0 Local Timer Cell X Register 31"
   GPTA0_LTCXR32         "GPTA0 Local Timer Cell X Register 32"
   GPTA0_LTCXR33         "GPTA0 Local Timer Cell X Register 33"
   GPTA0_LTCXR34         "GPTA0 Local Timer Cell X Register 34"
   GPTA0_LTCXR35         "GPTA0 Local Timer Cell X Register 35"
   GPTA0_LTCXR36         "GPTA0 Local Timer Cell X Register 36"
   GPTA0_LTCXR37         "GPTA0 Local Timer Cell X Register 37"
   GPTA0_LTCXR38         "GPTA0 Local Timer Cell X Register 38"
   GPTA0_LTCXR39         "GPTA0 Local Timer Cell X Register 39"
   GPTA0_LTCXR40         "GPTA0 Local Timer Cell X Register 40"
   GPTA0_LTCXR41         "GPTA0 Local Timer Cell X Register 41"
   GPTA0_LTCXR42         "GPTA0 Local Timer Cell X Register 42"
   GPTA0_LTCXR43         "GPTA0 Local Timer Cell X Register 43"
   GPTA0_LTCXR44         "GPTA0 Local Timer Cell X Register 44"
   GPTA0_LTCXR45         "GPTA0 Local Timer Cell X Register 45"
   GPTA0_LTCXR46         "GPTA0 Local Timer Cell X Register 46"
   GPTA0_LTCXR47         "GPTA0 Local Timer Cell X Register 47"
   GPTA0_LTCXR48         "GPTA0 Local Timer Cell X Register 48"
   GPTA0_LTCXR49         "GPTA0 Local Timer Cell X Register 49"
   GPTA0_LTCXR50         "GPTA0 Local Timer Cell X Register 50"
   GPTA0_LTCXR51         "GPTA0 Local Timer Cell X Register 51"
   GPTA0_LTCXR52         "GPTA0 Local Timer Cell X Register 52"
   GPTA0_LTCXR53         "GPTA0 Local Timer Cell X Register 53"
   GPTA0_LTCXR54         "GPTA0 Local Timer Cell X Register 54"
   GPTA0_LTCXR55         "GPTA0 Local Timer Cell X Register 55"
   GPTA0_LTCXR56         "GPTA0 Local Timer Cell X Register 56"
   GPTA0_LTCXR57         "GPTA0 Local Timer Cell X Register 57"
   GPTA0_LTCXR58         "GPTA0 Local Timer Cell X Register 58"
   GPTA0_LTCXR59         "GPTA0 Local Timer Cell X Register 59"
   GPTA0_LTCXR60         "GPTA0 Local Timer Cell X Register 60"
   GPTA0_LTCXR61         "GPTA0 Local Timer Cell X Register 61"
   GPTA0_LTCXR62         "GPTA0 Local Timer Cell X Register 62"
   GPTA1_LTCXR00         "GPTA1 Local Timer Cell X Register 00"
   GPTA1_LTCXR01         "GPTA1 Local Timer Cell X Register 01"
   GPTA1_LTCXR02         "GPTA1 Local Timer Cell X Register 02"
   GPTA1_LTCXR03         "GPTA1 Local Timer Cell X Register 03"
   GPTA1_LTCXR04         "GPTA1 Local Timer Cell X Register 04"
   GPTA1_LTCXR05         "GPTA1 Local Timer Cell X Register 05"
   GPTA1_LTCXR06         "GPTA1 Local Timer Cell X Register 06"
   GPTA1_LTCXR07         "GPTA1 Local Timer Cell X Register 07"
   GPTA1_LTCXR08         "GPTA1 Local Timer Cell X Register 08"
   GPTA1_LTCXR09         "GPTA1 Local Timer Cell X Register 09"
   GPTA1_LTCXR10         "GPTA1 Local Timer Cell X Register 10"
   GPTA1_LTCXR11         "GPTA1 Local Timer Cell X Register 11"
   GPTA1_LTCXR12         "GPTA1 Local Timer Cell X Register 12"
   GPTA1_LTCXR13         "GPTA1 Local Timer Cell X Register 13"
   GPTA1_LTCXR14         "GPTA1 Local Timer Cell X Register 14"
   GPTA1_LTCXR15         "GPTA1 Local Timer Cell X Register 15"
   GPTA1_LTCXR16         "GPTA1 Local Timer Cell X Register 16"
   GPTA1_LTCXR17         "GPTA1 Local Timer Cell X Register 17"
   GPTA1_LTCXR18         "GPTA1 Local Timer Cell X Register 18"
   GPTA1_LTCXR19         "GPTA1 Local Timer Cell X Register 19"
   GPTA1_LTCXR20         "GPTA1 Local Timer Cell X Register 20"
   GPTA1_LTCXR21         "GPTA1 Local Timer Cell X Register 21"
   GPTA1_LTCXR22         "GPTA1 Local Timer Cell X Register 22"
   GPTA1_LTCXR23         "GPTA1 Local Timer Cell X Register 23"
   GPTA1_LTCXR24         "GPTA1 Local Timer Cell X Register 24"
   GPTA1_LTCXR25         "GPTA1 Local Timer Cell X Register 25"
   GPTA1_LTCXR26         "GPTA1 Local Timer Cell X Register 26"
   GPTA1_LTCXR27         "GPTA1 Local Timer Cell X Register 27"
   GPTA1_LTCXR28         "GPTA1 Local Timer Cell X Register 28"
   GPTA1_LTCXR29         "GPTA1 Local Timer Cell X Register 29"
   GPTA1_LTCXR30         "GPTA1 Local Timer Cell X Register 30"
   GPTA1_LTCXR31         "GPTA1 Local Timer Cell X Register 31"
   GPTA1_LTCXR32         "GPTA1 Local Timer Cell X Register 32"
   GPTA1_LTCXR33         "GPTA1 Local Timer Cell X Register 33"
   GPTA1_LTCXR34         "GPTA1 Local Timer Cell X Register 34"
   GPTA1_LTCXR35         "GPTA1 Local Timer Cell X Register 35"
   GPTA1_LTCXR36         "GPTA1 Local Timer Cell X Register 36"
   GPTA1_LTCXR37         "GPTA1 Local Timer Cell X Register 37"
   GPTA1_LTCXR38         "GPTA1 Local Timer Cell X Register 38"
   GPTA1_LTCXR39         "GPTA1 Local Timer Cell X Register 39"
   GPTA1_LTCXR40         "GPTA1 Local Timer Cell X Register 40"
   GPTA1_LTCXR41         "GPTA1 Local Timer Cell X Register 41"
   GPTA1_LTCXR42         "GPTA1 Local Timer Cell X Register 42"
   GPTA1_LTCXR43         "GPTA1 Local Timer Cell X Register 43"
   GPTA1_LTCXR44         "GPTA1 Local Timer Cell X Register 44"
   GPTA1_LTCXR45         "GPTA1 Local Timer Cell X Register 45"
   GPTA1_LTCXR46         "GPTA1 Local Timer Cell X Register 46"
   GPTA1_LTCXR47         "GPTA1 Local Timer Cell X Register 47"
   GPTA1_LTCXR48         "GPTA1 Local Timer Cell X Register 48"
   GPTA1_LTCXR49         "GPTA1 Local Timer Cell X Register 49"
   GPTA1_LTCXR50         "GPTA1 Local Timer Cell X Register 50"
   GPTA1_LTCXR51         "GPTA1 Local Timer Cell X Register 51"
   GPTA1_LTCXR52         "GPTA1 Local Timer Cell X Register 52"
   GPTA1_LTCXR53         "GPTA1 Local Timer Cell X Register 53"
   GPTA1_LTCXR54         "GPTA1 Local Timer Cell X Register 54"
   GPTA1_LTCXR55         "GPTA1 Local Timer Cell X Register 55"
   GPTA1_LTCXR56         "GPTA1 Local Timer Cell X Register 56"
   GPTA1_LTCXR57         "GPTA1 Local Timer Cell X Register 57"
   GPTA1_LTCXR58         "GPTA1 Local Timer Cell X Register 58"
   GPTA1_LTCXR59         "GPTA1 Local Timer Cell X Register 59"
   GPTA1_LTCXR60         "GPTA1 Local Timer Cell X Register 60"
   GPTA1_LTCXR61         "GPTA1 Local Timer Cell X Register 61"
   GPTA1_LTCXR62         "GPTA1 Local Timer Cell X Register 62"
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
} __attribute__((aligned(4))) GPTAn_LTCXRm_t_nonv;

typedef volatile GPTAn_LTCXRm_t_nonv GPTAn_LTCXRm_t;

/********************** GPTAn_MRACTL_t *************************/
/*
   GPTA0_MRACTL          "GPTA0 Multiplexer Register Array Control Register"
   GPTA1_MRACTL          "GPTA1 Multiplexer Register Array Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MAEN:1;              /*  = [0..0] = 0x00000001 */
      unsigned int WCRES:1;             /*  = [1..1] = 0x00000002 */
      unsigned int FIFOFULL:1;          /*  = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int FIFOFILLCNT:6;       /*  = [8..13] = 0x00003f00 */
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
} __attribute__((aligned(4))) GPTAn_MRACTL_t_nonv;

typedef volatile GPTAn_MRACTL_t_nonv GPTAn_MRACTL_t;

/********************** GPTAn_MRADIN_t *************************/
/*
   GPTA0_MRADIN          "GPTA0 Multiplexer Register Array Data In Register"
   GPTA1_MRADIN          "GPTA1 Multiplexer Register Array Data In Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DATAIN:32;           /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) GPTAn_MRADIN_t_nonv;

typedef volatile GPTAn_MRADIN_t_nonv GPTAn_MRADIN_t;

/********************** GPTAn_MRADOUT_t *************************/
/*
   GPTA0_MRADOUT         "GPTA0 Multiplexer Register Array Data Out Register"
   GPTA1_MRADOUT         "GPTA1 Multiplexer Register Array Data Out Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DATAOUT:32;          /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) GPTAn_MRADOUT_t_nonv;

typedef volatile GPTAn_MRADOUT_t_nonv GPTAn_MRADOUT_t;

/********************** GPTAn_PDLCTR_t *************************/
/*
   GPTA0_PDLCTR          "GPTA0 Phase Discrimination Logic Control Register"
   GPTA1_PDLCTR          "GPTA1 Phase Discrimination Logic Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MUX0:1;              /*  = [0..0] = 0x00000001 */
      unsigned int TSE0:1;              /*  = [1..1] = 0x00000002 */
      unsigned int ERR0:1;              /*  = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int MUX1:1;              /*  = [4..4] = 0x00000010 */
      unsigned int TSE1:1;              /*  = [5..5] = 0x00000020 */
      unsigned int ERR1:1;              /*  = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
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
} __attribute__((aligned(4))) GPTAn_PDLCTR_t_nonv;

typedef volatile GPTAn_PDLCTR_t_nonv GPTAn_PDLCTR_t;

/********************** GPTAn_PLLCNT_t *************************/
/*
   GPTA0_PLLCNT          "GPTA0 Phase Locked Loop Counter Register"
   GPTA1_PLLCNT          "GPTA1 Phase Locked Loop Counter Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CNT:16;              /*  = [0..15] = 0x0000ffff */
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
} __attribute__((aligned(4))) GPTAn_PLLCNT_t_nonv;

typedef volatile GPTAn_PLLCNT_t_nonv GPTAn_PLLCNT_t;

/********************** GPTAn_PLLCTR_t *************************/
/*
   GPTA0_PLLCTR          "GPTA0 Phase Locked Loop Control Register"
   GPTA1_PLLCTR          "GPTA1 Phase Locked Loop Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MUX:2;               /*  = [0..1] = 0x00000003 */
      unsigned int AEN:1;               /*  = [2..2] = 0x00000004 */
      unsigned int PEN:1;               /*  = [3..3] = 0x00000008 */
      unsigned int REN:1;               /*  = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
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
} __attribute__((aligned(4))) GPTAn_PLLCTR_t_nonv;

typedef volatile GPTAn_PLLCTR_t_nonv GPTAn_PLLCTR_t;

/********************** GPTAn_PLLDTR_t *************************/
/*
   GPTA0_PLLDTR          "GPTA0 Phase Locked Loop Delta Register"
   GPTA1_PLLDTR          "GPTA1 Phase Locked Loop Delta Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DTR:25;              /*  = [0..24] = 0x01ffffff */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) GPTAn_PLLDTR_t_nonv;

typedef volatile GPTAn_PLLDTR_t_nonv GPTAn_PLLDTR_t;

/********************** GPTAn_PLLMTI_t *************************/
/*
   GPTA0_PLLMTI          "GPTA0 Phase Locked Loop Microtick Register"
   GPTA1_PLLMTI          "GPTA1 Phase Locked Loop Microtick Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MTI:16;              /*  = [0..15] = 0x0000ffff */
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
} __attribute__((aligned(4))) GPTAn_PLLMTI_t_nonv;

typedef volatile GPTAn_PLLMTI_t_nonv GPTAn_PLLMTI_t;

/********************** GPTAn_PLLREV_t *************************/
/*
   GPTA0_PLLREV          "GPTA0 Phase Locked Loop Reload Register"
   GPTA1_PLLREV          "GPTA1 Phase Locked Loop Reload Register"
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
} __attribute__((aligned(4))) GPTAn_PLLREV_t_nonv;

typedef volatile GPTAn_PLLREV_t_nonv GPTAn_PLLREV_t;

/********************** GPTAn_PLLSTP_t *************************/
/*
   GPTA0_PLLSTP          "GPTA0 Phase Locked Loop Step Register"
   GPTA1_PLLSTP          "GPTA1 Phase Locked Loop Step Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int STP:16;              /*  = [0..15] = 0x0000ffff */
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
} __attribute__((aligned(4))) GPTAn_PLLSTP_t_nonv;

typedef volatile GPTAn_PLLSTP_t_nonv GPTAn_PLLSTP_t;

/********************** GPTAn_SRCm_t *************************/
/*
   GPTA0_SRC00           "GPTA0 Service Request Control Register 00"
   GPTA0_SRC01           "GPTA0 Service Request Control Register 01"
   GPTA0_SRC02           "GPTA0 Service Request Control Register 02"
   GPTA0_SRC03           "GPTA0 Service Request Control Register 03"
   GPTA0_SRC04           "GPTA0 Service Request Control Register 04"
   GPTA0_SRC05           "GPTA0 Service Request Control Register 05"
   GPTA0_SRC06           "GPTA0 Service Request Control Register 06"
   GPTA0_SRC07           "GPTA0 Service Request Control Register 07"
   GPTA0_SRC08           "GPTA0 Service Request Control Register 08"
   GPTA0_SRC09           "GPTA0 Service Request Control Register 09"
   GPTA0_SRC10           "GPTA0 Service Request Control Register 10"
   GPTA0_SRC11           "GPTA0 Service Request Control Register 11"
   GPTA0_SRC12           "GPTA0 Service Request Control Register 12"
   GPTA0_SRC13           "GPTA0 Service Request Control Register 13"
   GPTA0_SRC14           "GPTA0 Service Request Control Register 14"
   GPTA0_SRC15           "GPTA0 Service Request Control Register 15"
   GPTA0_SRC16           "GPTA0 Service Request Control Register 16"
   GPTA0_SRC17           "GPTA0 Service Request Control Register 17"
   GPTA0_SRC18           "GPTA0 Service Request Control Register 18"
   GPTA0_SRC19           "GPTA0 Service Request Control Register 19"
   GPTA0_SRC20           "GPTA0 Service Request Control Register 20"
   GPTA0_SRC21           "GPTA0 Service Request Control Register 21"
   GPTA0_SRC22           "GPTA0 Service Request Control Register 22"
   GPTA0_SRC23           "GPTA0 Service Request Control Register 23"
   GPTA0_SRC24           "GPTA0 Service Request Control Register 24"
   GPTA0_SRC25           "GPTA0 Service Request Control Register 25"
   GPTA0_SRC26           "GPTA0 Service Request Control Register 26"
   GPTA0_SRC27           "GPTA0 Service Request Control Register 27"
   GPTA0_SRC28           "GPTA0 Service Request Control Register 28"
   GPTA0_SRC29           "GPTA0 Service Request Control Register 29"
   GPTA0_SRC30           "GPTA0 Service Request Control Register 30"
   GPTA0_SRC31           "GPTA0 Service Request Control Register 31"
   GPTA0_SRC32           "GPTA0 Service Request Control Register 32"
   GPTA0_SRC33           "GPTA0 Service Request Control Register 33"
   GPTA0_SRC34           "GPTA0 Service Request Control Register 34"
   GPTA0_SRC35           "GPTA0 Service Request Control Register 35"
   GPTA0_SRC36           "GPTA0 Service Request Control Register 36"
   GPTA0_SRC37           "GPTA0 Service Request Control Register 37"
   GPTA1_SRC00           "GPTA1 Service Request Control Register 00"
   GPTA1_SRC01           "GPTA1 Service Request Control Register 01"
   GPTA1_SRC02           "GPTA1 Service Request Control Register 02"
   GPTA1_SRC03           "GPTA1 Service Request Control Register 03"
   GPTA1_SRC04           "GPTA1 Service Request Control Register 04"
   GPTA1_SRC05           "GPTA1 Service Request Control Register 05"
   GPTA1_SRC06           "GPTA1 Service Request Control Register 06"
   GPTA1_SRC07           "GPTA1 Service Request Control Register 07"
   GPTA1_SRC08           "GPTA1 Service Request Control Register 08"
   GPTA1_SRC09           "GPTA1 Service Request Control Register 09"
   GPTA1_SRC10           "GPTA1 Service Request Control Register 10"
   GPTA1_SRC11           "GPTA1 Service Request Control Register 11"
   GPTA1_SRC12           "GPTA1 Service Request Control Register 12"
   GPTA1_SRC13           "GPTA1 Service Request Control Register 13"
   GPTA1_SRC14           "GPTA1 Service Request Control Register 14"
   GPTA1_SRC15           "GPTA1 Service Request Control Register 15"
   GPTA1_SRC16           "GPTA1 Service Request Control Register 16"
   GPTA1_SRC17           "GPTA1 Service Request Control Register 17"
   GPTA1_SRC18           "GPTA1 Service Request Control Register 18"
   GPTA1_SRC19           "GPTA1 Service Request Control Register 19"
   GPTA1_SRC20           "GPTA1 Service Request Control Register 20"
   GPTA1_SRC21           "GPTA1 Service Request Control Register 21"
   GPTA1_SRC22           "GPTA1 Service Request Control Register 22"
   GPTA1_SRC23           "GPTA1 Service Request Control Register 23"
   GPTA1_SRC24           "GPTA1 Service Request Control Register 24"
   GPTA1_SRC25           "GPTA1 Service Request Control Register 25"
   GPTA1_SRC26           "GPTA1 Service Request Control Register 26"
   GPTA1_SRC27           "GPTA1 Service Request Control Register 27"
   GPTA1_SRC28           "GPTA1 Service Request Control Register 28"
   GPTA1_SRC29           "GPTA1 Service Request Control Register 29"
   GPTA1_SRC30           "GPTA1 Service Request Control Register 30"
   GPTA1_SRC31           "GPTA1 Service Request Control Register 31"
   GPTA1_SRC32           "GPTA1 Service Request Control Register 32"
   GPTA1_SRC33           "GPTA1 Service Request Control Register 33"
   GPTA1_SRC34           "GPTA1 Service Request Control Register 34"
   GPTA1_SRC35           "GPTA1 Service Request Control Register 35"
   GPTA1_SRC36           "GPTA1 Service Request Control Register 36"
   GPTA1_SRC37           "GPTA1 Service Request Control Register 37"
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
} __attribute__((aligned(4))) GPTAn_SRCm_t_nonv;

typedef volatile GPTAn_SRCm_t_nonv GPTAn_SRCm_t;

/********************** GPTAn_SRNR_t *************************/
/*
   GPTA0_SRNR            "GPTA0 Service Request Node Redirection Register"
   GPTA1_SRNR            "GPTA1 Service Request Node Redirection Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int GTC01R:1;            /*  = [0..0] = 0x00000001 */
      unsigned int GTC03R:1;            /*  = [1..1] = 0x00000002 */
      unsigned int GTC05R:1;            /*  = [2..2] = 0x00000004 */
      unsigned int GTC07R:1;            /*  = [3..3] = 0x00000008 */
      unsigned int GTC09R:1;            /*  = [4..4] = 0x00000010 */
      unsigned int GTC11R:1;            /*  = [5..5] = 0x00000020 */
      unsigned int GTC13R:1;            /*  = [6..6] = 0x00000040 */
      unsigned int GTC15R:1;            /*  = [7..7] = 0x00000080 */
      unsigned int GTC17R:1;            /*  = [8..8] = 0x00000100 */
      unsigned int GTC19R:1;            /*  = [9..9] = 0x00000200 */
      unsigned int GTC21R:1;            /*  = [10..10] = 0x00000400 */
      unsigned int GTC23R:1;            /*  = [11..11] = 0x00000800 */
      unsigned int GTC25R:1;            /*  = [12..12] = 0x00001000 */
      unsigned int GTC27R:1;            /*  = [13..13] = 0x00002000 */
      unsigned int GTC29R:1;            /*  = [14..14] = 0x00004000 */
      unsigned int GTC31R:1;            /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) GPTAn_SRNR_t_nonv;

typedef volatile GPTAn_SRNR_t_nonv GPTAn_SRNR_t;

/********************** GPTAn_SRSC0_t *************************/
/*
   GPTA0_SRSC0           "GPTA0 Service Request State Clear Register 0"
   GPTA1_SRSC0           "GPTA1 Service Request State Clear Register 0"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DCM00R:1;            /*  = [0..0] = 0x00000001 */
      unsigned int DCM00F:1;            /*  = [1..1] = 0x00000002 */
      unsigned int DCM00C:1;            /*  = [2..2] = 0x00000004 */
      unsigned int DCM01R:1;            /*  = [3..3] = 0x00000008 */
      unsigned int DCM01F:1;            /*  = [4..4] = 0x00000010 */
      unsigned int DCM01C:1;            /*  = [5..5] = 0x00000020 */
      unsigned int DCM02R:1;            /*  = [6..6] = 0x00000040 */
      unsigned int DCM02F:1;            /*  = [7..7] = 0x00000080 */
      unsigned int DCM02C:1;            /*  = [8..8] = 0x00000100 */
      unsigned int DCM03R:1;            /*  = [9..9] = 0x00000200 */
      unsigned int DCM03F:1;            /*  = [10..10] = 0x00000400 */
      unsigned int DCM03C:1;            /*  = [11..11] = 0x00000800 */
      unsigned int PLL:1;               /*  = [12..12] = 0x00001000 */
      unsigned int GT00:1;              /*  = [13..13] = 0x00002000 */
      unsigned int GT01:1;              /*  = [14..14] = 0x00004000 */
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
} __attribute__((aligned(4))) GPTAn_SRSC0_t_nonv;

typedef volatile GPTAn_SRSC0_t_nonv GPTAn_SRSC0_t;

/********************** GPTAn_SRSC1_t *************************/
/*
   GPTA0_SRSC1           "GPTA0 Service Request State Clear Register 1"
   GPTA1_SRSC1           "GPTA1 Service Request State Clear Register 1"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int GTC00:1;             /*  = [0..0] = 0x00000001 */
      unsigned int GTC01:1;             /*  = [1..1] = 0x00000002 */
      unsigned int GTC02:1;             /*  = [2..2] = 0x00000004 */
      unsigned int GTC03:1;             /*  = [3..3] = 0x00000008 */
      unsigned int GTC04:1;             /*  = [4..4] = 0x00000010 */
      unsigned int GTC05:1;             /*  = [5..5] = 0x00000020 */
      unsigned int GTC06:1;             /*  = [6..6] = 0x00000040 */
      unsigned int GTC07:1;             /*  = [7..7] = 0x00000080 */
      unsigned int GTC08:1;             /*  = [8..8] = 0x00000100 */
      unsigned int GTC09:1;             /*  = [9..9] = 0x00000200 */
      unsigned int GTC10:1;             /*  = [10..10] = 0x00000400 */
      unsigned int GTC11:1;             /*  = [11..11] = 0x00000800 */
      unsigned int GTC12:1;             /*  = [12..12] = 0x00001000 */
      unsigned int GTC13:1;             /*  = [13..13] = 0x00002000 */
      unsigned int GTC14:1;             /*  = [14..14] = 0x00004000 */
      unsigned int GTC15:1;             /*  = [15..15] = 0x00008000 */
      unsigned int GTC16:1;             /*  = [16..16] = 0x00010000 */
      unsigned int GTC17:1;             /*  = [17..17] = 0x00020000 */
      unsigned int GTC18:1;             /*  = [18..18] = 0x00040000 */
      unsigned int GTC19:1;             /*  = [19..19] = 0x00080000 */
      unsigned int GTC20:1;             /*  = [20..20] = 0x00100000 */
      unsigned int GTC21:1;             /*  = [21..21] = 0x00200000 */
      unsigned int GTC22:1;             /*  = [22..22] = 0x00400000 */
      unsigned int GTC23:1;             /*  = [23..23] = 0x00800000 */
      unsigned int GTC24:1;             /*  = [24..24] = 0x01000000 */
      unsigned int GTC25:1;             /*  = [25..25] = 0x02000000 */
      unsigned int GTC26:1;             /*  = [26..26] = 0x04000000 */
      unsigned int GTC27:1;             /*  = [27..27] = 0x08000000 */
      unsigned int GTC28:1;             /*  = [28..28] = 0x10000000 */
      unsigned int GTC29:1;             /*  = [29..29] = 0x20000000 */
      unsigned int GTC30:1;             /*  = [30..30] = 0x40000000 */
      unsigned int GTC31:1;             /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) GPTAn_SRSC1_t_nonv;

typedef volatile GPTAn_SRSC1_t_nonv GPTAn_SRSC1_t;

/********************** GPTAn_SRSCm_t *************************/
/*
   GPTA0_SRSC2           "GPTA0 Service Request State Clear Register 2"
   GPTA0_SRSC3           "GPTA0 Service Request State Clear Register 3"
   GPTA1_SRSC2           "GPTA1 Service Request State Clear Register 2"
   GPTA1_SRSC3           "GPTA1 Service Request State Clear Register 3"
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
} __attribute__((aligned(4))) GPTAn_SRSCm_t_nonv;

typedef volatile GPTAn_SRSCm_t_nonv GPTAn_SRSCm_t;

/********************** GPTAn_SRSS0_t *************************/
/*
   GPTA0_SRSS0           "GPTA0 Service Request State Set Register 0"
   GPTA1_SRSS0           "GPTA1 Service Request State Set Register 0"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DCM00R:1;            /*  = [0..0] = 0x00000001 */
      unsigned int DCM00F:1;            /*  = [1..1] = 0x00000002 */
      unsigned int DCM00C:1;            /*  = [2..2] = 0x00000004 */
      unsigned int DCM01R:1;            /*  = [3..3] = 0x00000008 */
      unsigned int DCM01F:1;            /*  = [4..4] = 0x00000010 */
      unsigned int DCM01C:1;            /*  = [5..5] = 0x00000020 */
      unsigned int DCM02R:1;            /*  = [6..6] = 0x00000040 */
      unsigned int DCM02F:1;            /*  = [7..7] = 0x00000080 */
      unsigned int DCM02C:1;            /*  = [8..8] = 0x00000100 */
      unsigned int DCM03R:1;            /*  = [9..9] = 0x00000200 */
      unsigned int DCM03F:1;            /*  = [10..10] = 0x00000400 */
      unsigned int DCM03C:1;            /*  = [11..11] = 0x00000800 */
      unsigned int PLL:1;               /*  = [12..12] = 0x00001000 */
      unsigned int GT00:1;              /*  = [13..13] = 0x00002000 */
      unsigned int GT01:1;              /*  = [14..14] = 0x00004000 */
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
} __attribute__((aligned(4))) GPTAn_SRSS0_t_nonv;

typedef volatile GPTAn_SRSS0_t_nonv GPTAn_SRSS0_t;

/********************** GPTAn_SRSS1_t *************************/
/*
   GPTA0_SRSS1           "GPTA0 Service Request State Set Register 1"
   GPTA1_SRSS1           "GPTA1 Service Request State Set Register 1"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int GTC00:1;             /*  = [0..0] = 0x00000001 */
      unsigned int GTC01:1;             /*  = [1..1] = 0x00000002 */
      unsigned int GTC02:1;             /*  = [2..2] = 0x00000004 */
      unsigned int GTC03:1;             /*  = [3..3] = 0x00000008 */
      unsigned int GTC04:1;             /*  = [4..4] = 0x00000010 */
      unsigned int GTC05:1;             /*  = [5..5] = 0x00000020 */
      unsigned int GTC06:1;             /*  = [6..6] = 0x00000040 */
      unsigned int GTC07:1;             /*  = [7..7] = 0x00000080 */
      unsigned int GTC08:1;             /*  = [8..8] = 0x00000100 */
      unsigned int GTC09:1;             /*  = [9..9] = 0x00000200 */
      unsigned int GTC10:1;             /*  = [10..10] = 0x00000400 */
      unsigned int GTC11:1;             /*  = [11..11] = 0x00000800 */
      unsigned int GTC12:1;             /*  = [12..12] = 0x00001000 */
      unsigned int GTC13:1;             /*  = [13..13] = 0x00002000 */
      unsigned int GTC14:1;             /*  = [14..14] = 0x00004000 */
      unsigned int GTC15:1;             /*  = [15..15] = 0x00008000 */
      unsigned int GTC16:1;             /*  = [16..16] = 0x00010000 */
      unsigned int GTC17:1;             /*  = [17..17] = 0x00020000 */
      unsigned int GTC18:1;             /*  = [18..18] = 0x00040000 */
      unsigned int GTC19:1;             /*  = [19..19] = 0x00080000 */
      unsigned int GTC20:1;             /*  = [20..20] = 0x00100000 */
      unsigned int GTC21:1;             /*  = [21..21] = 0x00200000 */
      unsigned int GTC22:1;             /*  = [22..22] = 0x00400000 */
      unsigned int GTC23:1;             /*  = [23..23] = 0x00800000 */
      unsigned int GTC24:1;             /*  = [24..24] = 0x01000000 */
      unsigned int GTC25:1;             /*  = [25..25] = 0x02000000 */
      unsigned int GTC26:1;             /*  = [26..26] = 0x04000000 */
      unsigned int GTC27:1;             /*  = [27..27] = 0x08000000 */
      unsigned int GTC28:1;             /*  = [28..28] = 0x10000000 */
      unsigned int GTC29:1;             /*  = [29..29] = 0x20000000 */
      unsigned int GTC30:1;             /*  = [30..30] = 0x40000000 */
      unsigned int GTC31:1;             /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) GPTAn_SRSS1_t_nonv;

typedef volatile GPTAn_SRSS1_t_nonv GPTAn_SRSS1_t;

/********************** GPTAn_SRSSm_t *************************/
/*
   GPTA0_SRSS2           "GPTA0 Service Request State Set Register 2"
   GPTA0_SRSS3           "GPTA0 Service Request State Set Register 3"
   GPTA1_SRSS2           "GPTA1 Service Request State Set Register 2"
   GPTA1_SRSS3           "GPTA1 Service Request State Set Register 3"
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
} __attribute__((aligned(4))) GPTAn_SRSSm_t_nonv;

typedef volatile GPTAn_SRSSm_t_nonv GPTAn_SRSSm_t;


#endif /* _HAVE_TRICORE_GPTA0_GPTA1_SHARETYPES_H_ */

