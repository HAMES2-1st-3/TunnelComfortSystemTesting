/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_ADC0_ADC1_SHARETYPES_H_
#define _HAVE_TRICORE_ADC0_ADC1_SHARETYPES_H_


/********************** ADC0_SRCm_t *************************/
/*
   ADC0_SRC0             "ADC Service Request Control Register 0"
   ADC0_SRC1             "ADC Service Request Control Register 1"
   ADC0_SRC2             "ADC Service Request Control Register 2"
   ADC0_SRC3             "ADC Service Request Control Register 3"
   ADC0_SRC4             "ADC Service Request Control Register 4"
   ADC0_SRC5             "ADC Service Request Control Register 5"
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
} __attribute__((aligned(4))) ADC0_SRCm_t_nonv;

typedef volatile ADC0_SRCm_t_nonv ADC0_SRCm_t;

/********************** ADCn_ALR0_t *************************/
/*
   ADC0_ALR0             "Alias Register 0"
   ADC1_ALR0             "Alias Register 0"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ALIAS0:4;            /*  = [0..3] = 0x0000000f */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int ALIAS1:4;            /*  = [8..11] = 0x00000f00 */
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
} __attribute__((aligned(4))) ADCn_ALR0_t_nonv;

typedef volatile ADCn_ALR0_t_nonv ADCn_ALR0_t;

/********************** ADCn_APR_t *************************/
/*
   ADC0_APR              "Access Protection Register"
   ADC1_APR              "Access Protection Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RG0:1;               /*  = [0..0] = 0x00000001 */
      unsigned int RG1:1;               /*  = [1..1] = 0x00000002 */
      unsigned int RG2:1;               /*  = [2..2] = 0x00000004 */
      unsigned int RG3:1;               /*  = [3..3] = 0x00000008 */
      unsigned int RG4:1;               /*  = [4..4] = 0x00000010 */
      unsigned int RG5:1;               /*  = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int ACCERR:1;            /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) ADCn_APR_t_nonv;

typedef volatile ADCn_APR_t_nonv ADCn_APR_t;

/********************** ADCn_ASENR_t *************************/
/*
   ADC0_ASENR            "Arbitration Slot Enable Register"
   ADC1_ASENR            "Arbitration Slot Enable Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ASEN0:1;             /*  = [0..0] = 0x00000001 */
      unsigned int ASEN1:1;             /*  = [1..1] = 0x00000002 */
      unsigned int ASEN2:1;             /*  = [2..2] = 0x00000004 */
      unsigned int ASEN3:1;             /*  = [3..3] = 0x00000008 */
      unsigned int ASEN4:1;             /*  = [4..4] = 0x00000010 */
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
} __attribute__((aligned(4))) ADCn_ASENR_t_nonv;

typedef volatile ADCn_ASENR_t_nonv ADCn_ASENR_t;

/********************** ADCn_CHCTRm_t *************************/
/*
   ADC0_CHCTR0           "Channel 0 Control Register"
   ADC0_CHCTR1           "Channel 1 Control Register"
   ADC0_CHCTR10          "Channel 10 Control Register"
   ADC0_CHCTR11          "Channel 11 Control Register"
   ADC0_CHCTR12          "Channel 12 Control Register"
   ADC0_CHCTR13          "Channel 13 Control Register"
   ADC0_CHCTR14          "Channel 14 Control Register"
   ADC0_CHCTR15          "Channel 15 Control Register"
   ADC0_CHCTR2           "Channel 2 Control Register"
   ADC0_CHCTR3           "Channel 3 Control Register"
   ADC0_CHCTR4           "Channel 4 Control Register"
   ADC0_CHCTR5           "Channel 5 Control Register"
   ADC0_CHCTR6           "Channel 6 Control Register"
   ADC0_CHCTR7           "Channel 7 Control Register"
   ADC0_CHCTR8           "Channel 8 Control Register"
   ADC0_CHCTR9           "Channel 9 Control Register"
   ADC1_CHCTR0           "Channel 0 Control Register"
   ADC1_CHCTR1           "Channel 1 Control Register"
   ADC1_CHCTR10          "Channel 10 Control Register"
   ADC1_CHCTR11          "Channel 11 Control Register"
   ADC1_CHCTR12          "Channel 12 Control Register"
   ADC1_CHCTR13          "Channel 13 Control Register"
   ADC1_CHCTR14          "Channel 14 Control Register"
   ADC1_CHCTR15          "Channel 15 Control Register"
   ADC1_CHCTR2           "Channel 2 Control Register"
   ADC1_CHCTR3           "Channel 3 Control Register"
   ADC1_CHCTR4           "Channel 4 Control Register"
   ADC1_CHCTR5           "Channel 5 Control Register"
   ADC1_CHCTR6           "Channel 6 Control Register"
   ADC1_CHCTR7           "Channel 7 Control Register"
   ADC1_CHCTR8           "Channel 8 Control Register"
   ADC1_CHCTR9           "Channel 9 Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int BNDASEL:2;           /*  = [0..1] = 0x00000003 */
      unsigned int BNDBSEL:2;           /*  = [2..3] = 0x0000000c */
      unsigned int LCC:3;               /*  = [4..6] = 0x00000070 */
      unsigned int SYNC:1;              /*  = [7..7] = 0x00000080 */
      unsigned int REFSEL:2;            /*  = [8..9] = 0x00000300 */
      unsigned int ICLSEL:2;            /*  = [10..11] = 0x00000c00 */
      unsigned int RESRSEL:4;           /*  = [12..15] = 0x0000f000 */
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
} __attribute__((aligned(4))) ADCn_CHCTRm_t_nonv;

typedef volatile ADCn_CHCTRm_t_nonv ADCn_CHCTRm_t;

/********************** ADCn_CHENPRm_t *************************/
/*
   ADC0_CHENPR0          "Channel Event Node Pointer Register 0"
   ADC0_CHENPR8          "Channel Event Node Pointer Register 8"
   ADC1_CHENPR0          "Channel Event Node Pointer Register 0"
   ADC1_CHENPR8          "Channel Event Node Pointer Register 8"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CHENP0:3;            /*  = [0..2] = 0x00000007 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int CHENP1:3;            /*  = [4..6] = 0x00000070 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int CHENP2:3;            /*  = [8..10] = 0x00000700 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int CHENP3:3;            /*  = [12..14] = 0x00007000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int CHENP4:3;            /*  = [16..18] = 0x00070000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int CHENP5:3;            /*  = [20..22] = 0x00700000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int CHENP6:3;            /*  = [24..26] = 0x07000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int CHENP7:3;            /*  = [28..30] = 0x70000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) ADCn_CHENPRm_t_nonv;

typedef volatile ADCn_CHENPRm_t_nonv ADCn_CHENPRm_t;

/********************** ADCn_CHFCR_t *************************/
/*
   ADC0_CHFCR            "Channel Flag Clear Register"
   ADC1_CHFCR            "Channel Flag Clear Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CFC0:1;              /*  = [0..0] = 0x00000001 */
      unsigned int CFC1:1;              /*  = [1..1] = 0x00000002 */
      unsigned int CFC2:1;              /*  = [2..2] = 0x00000004 */
      unsigned int CFC3:1;              /*  = [3..3] = 0x00000008 */
      unsigned int CFC4:1;              /*  = [4..4] = 0x00000010 */
      unsigned int CFC5:1;              /*  = [5..5] = 0x00000020 */
      unsigned int CFC6:1;              /*  = [6..6] = 0x00000040 */
      unsigned int CFC7:1;              /*  = [7..7] = 0x00000080 */
      unsigned int CFC8:1;              /*  = [8..8] = 0x00000100 */
      unsigned int CFC9:1;              /*  = [9..9] = 0x00000200 */
      unsigned int CFC10:1;             /*  = [10..10] = 0x00000400 */
      unsigned int CFC11:1;             /*  = [11..11] = 0x00000800 */
      unsigned int CFC12:1;             /*  = [12..12] = 0x00001000 */
      unsigned int CFC13:1;             /*  = [13..13] = 0x00002000 */
      unsigned int CFC14:1;             /*  = [14..14] = 0x00004000 */
      unsigned int CFC15:1;             /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) ADCn_CHFCR_t_nonv;

typedef volatile ADCn_CHFCR_t_nonv ADCn_CHFCR_t;

/********************** ADCn_CHFR_t *************************/
/*
   ADC0_CHFR             "Channel Flag Register"
   ADC1_CHFR             "Channel Flag Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int FC0:1;               /*  = [0..0] = 0x00000001 */
      unsigned int FC1:1;               /*  = [1..1] = 0x00000002 */
      unsigned int FC2:1;               /*  = [2..2] = 0x00000004 */
      unsigned int FC3:1;               /*  = [3..3] = 0x00000008 */
      unsigned int FC4:1;               /*  = [4..4] = 0x00000010 */
      unsigned int FC5:1;               /*  = [5..5] = 0x00000020 */
      unsigned int FC6:1;               /*  = [6..6] = 0x00000040 */
      unsigned int FC7:1;               /*  = [7..7] = 0x00000080 */
      unsigned int FC8:1;               /*  = [8..8] = 0x00000100 */
      unsigned int FC9:1;               /*  = [9..9] = 0x00000200 */
      unsigned int FC10:1;              /*  = [10..10] = 0x00000400 */
      unsigned int FC11:1;              /*  = [11..11] = 0x00000800 */
      unsigned int FC12:1;              /*  = [12..12] = 0x00001000 */
      unsigned int FC13:1;              /*  = [13..13] = 0x00002000 */
      unsigned int FC14:1;              /*  = [14..14] = 0x00004000 */
      unsigned int FC15:1;              /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) ADCn_CHFR_t_nonv;

typedef volatile ADCn_CHFR_t_nonv ADCn_CHFR_t;

/********************** ADCn_CRCRm_t *************************/
/*
   ADC0_CRCR1            "Conversion Request 1 Control Register"
   ADC0_CRCR3            "Conversion Request 3 Control Register"
   ADC1_CRCR1            "Conversion Request 1 Control Register"
   ADC1_CRCR3            "Conversion Request 3 Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CH0:1;               /*  = [0..0] = 0x00000001 */
      unsigned int CH1:1;               /*  = [1..1] = 0x00000002 */
      unsigned int CH2:1;               /*  = [2..2] = 0x00000004 */
      unsigned int CH3:1;               /*  = [3..3] = 0x00000008 */
      unsigned int CH4:1;               /*  = [4..4] = 0x00000010 */
      unsigned int CH5:1;               /*  = [5..5] = 0x00000020 */
      unsigned int CH6:1;               /*  = [6..6] = 0x00000040 */
      unsigned int CH7:1;               /*  = [7..7] = 0x00000080 */
      unsigned int CH8:1;               /*  = [8..8] = 0x00000100 */
      unsigned int CH9:1;               /*  = [9..9] = 0x00000200 */
      unsigned int CH10:1;              /*  = [10..10] = 0x00000400 */
      unsigned int CH11:1;              /*  = [11..11] = 0x00000800 */
      unsigned int CH12:1;              /*  = [12..12] = 0x00001000 */
      unsigned int CH13:1;              /*  = [13..13] = 0x00002000 */
      unsigned int CH14:1;              /*  = [14..14] = 0x00004000 */
      unsigned int CH15:1;              /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) ADCn_CRCRm_t_nonv;

typedef volatile ADCn_CRCRm_t_nonv ADCn_CRCRm_t;

/********************** ADCn_CRMRm_t *************************/
/*
   ADC0_CRMR1            "Conversion Request 1 Mode Register"
   ADC0_CRMR3            "Conversion Request 3 Mode Register"
   ADC1_CRMR1            "Conversion Request 1 Mode Register"
   ADC1_CRMR3            "Conversion Request 3 Mode Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ENGT:2;              /*  = [0..1] = 0x00000003 */
      unsigned int ENTR:1;              /*  = [2..2] = 0x00000004 */
      unsigned int ENSI:1;              /*  = [3..3] = 0x00000008 */
      unsigned int SCAN:1;              /*  = [4..4] = 0x00000010 */
      unsigned int LDM:1;               /*  = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int REQGT:1;             /*  = [7..7] = 0x00000080 */
      unsigned int CLRPND:1;            /*  = [8..8] = 0x00000100 */
      unsigned int LDEV:1;              /*  = [9..9] = 0x00000200 */
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
} __attribute__((aligned(4))) ADCn_CRMRm_t_nonv;

typedef volatile ADCn_CRMRm_t_nonv ADCn_CRMRm_t;

/********************** ADCn_CRPRm_t *************************/
/*
   ADC0_CRPR1            "Conversion Request 1 Pending Register"
   ADC0_CRPR3            "Conversion Request 3 Pending Register"
   ADC1_CRPR1            "Conversion Request 1 Pending Register"
   ADC1_CRPR3            "Conversion Request 3 Pending Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CHP0:1;              /*  = [0..0] = 0x00000001 */
      unsigned int CHP1:1;              /*  = [1..1] = 0x00000002 */
      unsigned int CHP2:1;              /*  = [2..2] = 0x00000004 */
      unsigned int CHP3:1;              /*  = [3..3] = 0x00000008 */
      unsigned int CHP4:1;              /*  = [4..4] = 0x00000010 */
      unsigned int CHP5:1;              /*  = [5..5] = 0x00000020 */
      unsigned int CHP6:1;              /*  = [6..6] = 0x00000040 */
      unsigned int CHP7:1;              /*  = [7..7] = 0x00000080 */
      unsigned int CHP8:1;              /*  = [8..8] = 0x00000100 */
      unsigned int CHP9:1;              /*  = [9..9] = 0x00000200 */
      unsigned int CHP10:1;             /*  = [10..10] = 0x00000400 */
      unsigned int CHP11:1;             /*  = [11..11] = 0x00000800 */
      unsigned int CHP12:1;             /*  = [12..12] = 0x00001000 */
      unsigned int CHP13:1;             /*  = [13..13] = 0x00002000 */
      unsigned int CHP14:1;             /*  = [14..14] = 0x00004000 */
      unsigned int CHP15:1;             /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) ADCn_CRPRm_t_nonv;

typedef volatile ADCn_CRPRm_t_nonv ADCn_CRPRm_t;

/********************** ADCn_EMCTR_t *************************/
/*
   ADC0_EMCTR            "External Multiplexer Control Register"
   ADC1_EMCTR            "External Multiplexer Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SETEMUX:3;           /*  = [0..2] = 0x00000007 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int EMUX:3;              /*  = [4..6] = 0x00000070 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int EMSAMPLE:8;          /*  = [8..15] = 0x0000ff00 */
      unsigned int EMUXCHNR:4;          /*  = [16..19] = 0x000f0000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int TROEN:1;             /*  = [21..21] = 0x00200000 */
      unsigned int SCANEN:1;            /*  = [22..22] = 0x00400000 */
      unsigned int EMUXEN:1;            /*  = [23..23] = 0x00800000 */
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
} __attribute__((aligned(4))) ADCn_EMCTR_t_nonv;

typedef volatile ADCn_EMCTR_t_nonv ADCn_EMCTR_t;

/********************** ADCn_EVFCR_t *************************/
/*
   ADC0_EVFCR            "Event Flag Clear Register"
   ADC1_EVFCR            "Event Flag Clear Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CFR0:1;              /*  = [0..0] = 0x00000001 */
      unsigned int CFR1:1;              /*  = [1..1] = 0x00000002 */
      unsigned int CFR2:1;              /*  = [2..2] = 0x00000004 */
      unsigned int CFR3:1;              /*  = [3..3] = 0x00000008 */
      unsigned int CFR4:1;              /*  = [4..4] = 0x00000010 */
      unsigned int CFR5:1;              /*  = [5..5] = 0x00000020 */
      unsigned int CFR6:1;              /*  = [6..6] = 0x00000040 */
      unsigned int CFR7:1;              /*  = [7..7] = 0x00000080 */
      unsigned int CFR8:1;              /*  = [8..8] = 0x00000100 */
      unsigned int CFR9:1;              /*  = [9..9] = 0x00000200 */
      unsigned int CFR10:1;             /*  = [10..10] = 0x00000400 */
      unsigned int CFR11:1;             /*  = [11..11] = 0x00000800 */
      unsigned int CFR12:1;             /*  = [12..12] = 0x00001000 */
      unsigned int CFR13:1;             /*  = [13..13] = 0x00002000 */
      unsigned int CFR14:1;             /*  = [14..14] = 0x00004000 */
      unsigned int CFR15:1;             /*  = [15..15] = 0x00008000 */
      unsigned int CFS0:1;              /*  = [16..16] = 0x00010000 */
      unsigned int CFS1:1;              /*  = [17..17] = 0x00020000 */
      unsigned int CFS2:1;              /*  = [18..18] = 0x00040000 */
      unsigned int CFS3:1;              /*  = [19..19] = 0x00080000 */
      unsigned int CFS4:1;              /*  = [20..20] = 0x00100000 */
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
} __attribute__((aligned(4))) ADCn_EVFCR_t_nonv;

typedef volatile ADCn_EVFCR_t_nonv ADCn_EVFCR_t;

/********************** ADCn_EVFR_t *************************/
/*
   ADC0_EVFR             "Event Flag Register"
   ADC1_EVFR             "Event Flag Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int FR0:1;               /*  = [0..0] = 0x00000001 */
      unsigned int FR1:1;               /*  = [1..1] = 0x00000002 */
      unsigned int FR2:1;               /*  = [2..2] = 0x00000004 */
      unsigned int FR3:1;               /*  = [3..3] = 0x00000008 */
      unsigned int FR4:1;               /*  = [4..4] = 0x00000010 */
      unsigned int FR5:1;               /*  = [5..5] = 0x00000020 */
      unsigned int FR6:1;               /*  = [6..6] = 0x00000040 */
      unsigned int FR7:1;               /*  = [7..7] = 0x00000080 */
      unsigned int FR8:1;               /*  = [8..8] = 0x00000100 */
      unsigned int FR9:1;               /*  = [9..9] = 0x00000200 */
      unsigned int FR10:1;              /*  = [10..10] = 0x00000400 */
      unsigned int FR11:1;              /*  = [11..11] = 0x00000800 */
      unsigned int FR12:1;              /*  = [12..12] = 0x00001000 */
      unsigned int FR13:1;              /*  = [13..13] = 0x00002000 */
      unsigned int FR14:1;              /*  = [14..14] = 0x00004000 */
      unsigned int FR15:1;              /*  = [15..15] = 0x00008000 */
      unsigned int FS0:1;               /*  = [16..16] = 0x00010000 */
      unsigned int FS1:1;               /*  = [17..17] = 0x00020000 */
      unsigned int FS2:1;               /*  = [18..18] = 0x00040000 */
      unsigned int FS3:1;               /*  = [19..19] = 0x00080000 */
      unsigned int FS4:1;               /*  = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int GFS0:1;              /*  = [24..24] = 0x01000000 */
      unsigned int GFS1:1;              /*  = [25..25] = 0x02000000 */
      unsigned int GFS2:1;              /*  = [26..26] = 0x04000000 */
      unsigned int GFS3:1;              /*  = [27..27] = 0x08000000 */
      unsigned int GFS4:1;              /*  = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) ADCn_EVFR_t_nonv;

typedef volatile ADCn_EVFR_t_nonv ADCn_EVFR_t;

/********************** ADCn_EVNPR_t *************************/
/*
   ADC0_EVNPR            "Event Node Pointer Register"
   ADC1_EVNPR            "Event Node Pointer Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SENP0:3;             /*  = [0..2] = 0x00000007 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int SENP1:3;             /*  = [4..6] = 0x00000070 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int SENP2:3;             /*  = [8..10] = 0x00000700 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int SENP3:3;             /*  = [12..14] = 0x00007000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int SENP4:3;             /*  = [16..18] = 0x00070000 */
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
} __attribute__((aligned(4))) ADCn_EVNPR_t_nonv;

typedef volatile ADCn_EVNPR_t_nonv ADCn_EVNPR_t;

/********************** ADCn_GLOBCFG_t *************************/
/*
   ADC0_GLOBCFG          "Global Configuration Register"
   ADC1_GLOBCFG          "Global Configuration Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0..0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1..1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int MTM7:1;              /*  = [4..4] = 0x00000010 */
      unsigned int SUCAL:1;             /*  = [5..5] = 0x00000020 */
      unsigned int DPCAL:1;             /*  = [6..6] = 0x00000040 */
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
} __attribute__((aligned(4))) ADCn_GLOBCFG_t_nonv;

typedef volatile ADCn_GLOBCFG_t_nonv ADCn_GLOBCFG_t;

/********************** ADCn_GLOBCTR_t *************************/
/*
   ADC0_GLOBCTR          "Global Control Register"
   ADC1_GLOBCTR          "Global Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DIVA:6;              /*  = [0..5] = 0x0000003f */
      unsigned int DIVD:2;              /*  = [6..7] = 0x000000c0 */
      unsigned int ANON:2;              /*  = [8..9] = 0x00000300 */
      unsigned int ARBRND:2;            /*  = [10..11] = 0x00000c00 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int ARBM:1;              /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) ADCn_GLOBCTR_t_nonv;

typedef volatile ADCn_GLOBCTR_t_nonv ADCn_GLOBCTR_t;

/********************** ADCn_GLOBSTR_t *************************/
/*
   ADC0_GLOBSTR          "Global Status Register"
   ADC1_GLOBSTR          "Global Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int BUSY:1;              /*  = [0..0] = 0x00000001 */
      unsigned int SAMPLE:1;            /*  = [1..1] = 0x00000002 */
      unsigned int CAL:1;               /*  = [2..2] = 0x00000004 */
      unsigned int CHNR:4;              /*  = [3..6] = 0x00000078 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int ANON:2;              /*  = [8..9] = 0x00000300 */
      unsigned int SYNRUN:1;            /*  = [10..10] = 0x00000400 */
      unsigned int CSRC:3;              /*  = [11..13] = 0x00003800 */
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
} __attribute__((aligned(4))) ADCn_GLOBSTR_t_nonv;

typedef volatile ADCn_GLOBSTR_t_nonv ADCn_GLOBSTR_t;

/********************** ADCn_ID_t *************************/
/*
   ADC0_ID               "Module Identification Register"
   ADC1_ID               "Module Identification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MOD_REV:8;           /*  = [0..7] = 0x000000ff */
      unsigned int MOD_TYPE:8;          /*  = [8..15] = 0x0000ff00 */
      unsigned int MOD_NUMBER:16;       /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) ADCn_ID_t_nonv;

typedef volatile ADCn_ID_t_nonv ADCn_ID_t;

/********************** ADCn_INPCRm_t *************************/
/*
   ADC0_INPCR0           "Input Class Register 0"
   ADC0_INPCR1           "Input Class Register 1"
   ADC0_INPCR2           "Input Class Register 2"
   ADC0_INPCR3           "Input Class Register 3"
   ADC1_INPCR0           "Input Class Register 0"
   ADC1_INPCR1           "Input Class Register 1"
   ADC1_INPCR2           "Input Class Register 2"
   ADC1_INPCR3           "Input Class Register 3"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int STC:8;               /*  = [0..7] = 0x000000ff */
      unsigned int DW:2;                /*  = [8..9] = 0x00000300 */
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
} __attribute__((aligned(4))) ADCn_INPCRm_t_nonv;

typedef volatile ADCn_INPCRm_t_nonv ADCn_INPCRm_t;

/********************** ADCn_INTR_t *************************/
/*
   ADC0_INTR             "Interrupt Activation Register"
   ADC1_INTR             "Interrupt Activation Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SISR0:1;             /*  = [0..0] = 0x00000001 */
      unsigned int SISR1:1;             /*  = [1..1] = 0x00000002 */
      unsigned int SISR2:1;             /*  = [2..2] = 0x00000004 */
      unsigned int SISR3:1;             /*  = [3..3] = 0x00000008 */
      unsigned int SISR4:1;             /*  = [4..4] = 0x00000010 */
      unsigned int SISR5:1;             /*  = [5..5] = 0x00000020 */
      unsigned int SISR6:1;             /*  = [6..6] = 0x00000040 */
      unsigned int SISR7:1;             /*  = [7..7] = 0x00000080 */
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
} __attribute__((aligned(4))) ADCn_INTR_t_nonv;

typedef volatile ADCn_INTR_t_nonv ADCn_INTR_t;

/********************** ADCn_LCBRm_t *************************/
/*
   ADC0_LCBR0            "Limit Check Boundary Register 0"
   ADC0_LCBR1            "Limit Check Boundary Register 1"
   ADC0_LCBR2            "Limit Check Boundary Register 2"
   ADC0_LCBR3            "Limit Check Boundary Register 3"
   ADC1_LCBR0            "Limit Check Boundary Register 0"
   ADC1_LCBR1            "Limit Check Boundary Register 1"
   ADC1_LCBR2            "Limit Check Boundary Register 2"
   ADC1_LCBR3            "Limit Check Boundary Register 3"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0..0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1..1] = 0x00000002 */
      unsigned int BOUNDARY:10;         /*  = [2..11] = 0x00000ffc */
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
} __attribute__((aligned(4))) ADCn_LCBRm_t_nonv;

typedef volatile ADCn_LCBRm_t_nonv ADCn_LCBRm_t;

/********************** ADCn_QBURm_t *************************/
/*
   ADC0_QBUR0            "Queue 0"
   ADC0_QBUR2            "Queue 2"
   ADC0_QBUR4            "Queue 4"
   ADC1_QBUR0            "Queue 0"
   ADC1_QBUR2            "Queue 2"
   ADC1_QBUR4            "Queue 4"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct { /* Queue 0 Backup Register */
      unsigned int REQCHNR:4;           /*  = [0..3] = 0x0000000f */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int RF:1;                /*  = [5..5] = 0x00000020 */
      unsigned int ENSI:1;              /*  = [6..6] = 0x00000040 */
      unsigned int EXTR:1;              /*  = [7..7] = 0x00000080 */
      unsigned int V:1;                 /*  = [8..8] = 0x00000100 */
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
   } qbackup;
   struct { /* Queue 0 Input Register */
      unsigned int REQCHNR:4;           /*  = [0..3] = 0x0000000f */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int RF:1;                /*  = [5..5] = 0x00000020 */
      unsigned int ENSI:1;              /*  = [6..6] = 0x00000040 */
      unsigned int EXTR:1;              /*  = [7..7] = 0x00000080 */
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
   } qinput;
   unsigned long reg; 
} __attribute__((aligned(4))) ADCn_QBURm_t_nonv;

typedef volatile ADCn_QBURm_t_nonv ADCn_QBURm_t;

/********************** ADCn_QMRm_t *************************/
/*
   ADC0_QMR0             "Queue 0 Mode Register"
   ADC0_QMR2             "Queue 2 Mode Register"
   ADC0_QMR4             "Queue 4 Mode Register"
   ADC1_QMR0             "Queue 0 Mode Register"
   ADC1_QMR2             "Queue 2 Mode Register"
   ADC1_QMR4             "Queue 4 Mode Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ENGT:2;              /*  = [0..1] = 0x00000003 */
      unsigned int ENTR:1;              /*  = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int CLRV:1;              /*  = [8..8] = 0x00000100 */
      unsigned int TREV:1;              /*  = [9..9] = 0x00000200 */
      unsigned int FLUSH:1;             /*  = [10..10] = 0x00000400 */
      unsigned int CEV:1;               /*  = [11..11] = 0x00000800 */
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
} __attribute__((aligned(4))) ADCn_QMRm_t_nonv;

typedef volatile ADCn_QMRm_t_nonv ADCn_QMRm_t;

/********************** ADCn_QSRm_t *************************/
/*
   ADC0_QSR0             "Queue 0 Status Register"
   ADC0_QSR2             "Queue 2 Status Register"
   ADC0_QSR4             "Queue 4 Status Register"
   ADC1_QSR0             "Queue 0 Status Register"
   ADC1_QSR2             "Queue 2 Status Register"
   ADC1_QSR4             "Queue 4 Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int FILL:4;              /*  = [0..3] = 0x0000000f */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int EMPTY:1;             /*  = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int REQGT:1;             /*  = [7..7] = 0x00000080 */
      unsigned int EV:1;                /*  = [8..8] = 0x00000100 */
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
} __attribute__((aligned(4))) ADCn_QSRm_t_nonv;

typedef volatile ADCn_QSRm_t_nonv ADCn_QSRm_t;

/********************** ADCn_RCRm_t *************************/
/*
   ADC0_RCR0             "Result Control Register 0"
   ADC0_RCR1             "Result Control Register 1"
   ADC0_RCR10            "Result Control Register 10"
   ADC0_RCR11            "Result Control Register 11"
   ADC0_RCR12            "Result Control Register 12"
   ADC0_RCR13            "Result Control Register 13"
   ADC0_RCR14            "Result Control Register 14"
   ADC0_RCR15            "Result Control Register 15"
   ADC0_RCR2             "Result Control Register 2"
   ADC0_RCR3             "Result Control Register 3"
   ADC0_RCR4             "Result Control Register 4"
   ADC0_RCR5             "Result Control Register 5"
   ADC0_RCR6             "Result Control Register 6"
   ADC0_RCR7             "Result Control Register 7"
   ADC0_RCR8             "Result Control Register 8"
   ADC0_RCR9             "Result Control Register 9"
   ADC1_RCR0             "Result Control Register 0"
   ADC1_RCR1             "Result Control Register 1"
   ADC1_RCR10            "Result Control Register 10"
   ADC1_RCR11            "Result Control Register 11"
   ADC1_RCR12            "Result Control Register 12"
   ADC1_RCR13            "Result Control Register 13"
   ADC1_RCR14            "Result Control Register 14"
   ADC1_RCR15            "Result Control Register 15"
   ADC1_RCR2             "Result Control Register 2"
   ADC1_RCR3             "Result Control Register 3"
   ADC1_RCR4             "Result Control Register 4"
   ADC1_RCR5             "Result Control Register 5"
   ADC1_RCR6             "Result Control Register 6"
   ADC1_RCR7             "Result Control Register 7"
   ADC1_RCR8             "Result Control Register 8"
   ADC1_RCR9             "Result Control Register 9"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DRCTR:2;             /*  = [0..1] = 0x00000003 */
      unsigned int _bit2:1;             /* 0 = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int ENRI:1;              /*  = [4..4] = 0x00000010 */
      unsigned int FEN:1;               /*  = [5..5] = 0x00000020 */
      unsigned int WFR:1;               /*  = [6..6] = 0x00000040 */
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
} __attribute__((aligned(4))) ADCn_RCRm_t_nonv;

typedef volatile ADCn_RCRm_t_nonv ADCn_RCRm_t;

/********************** ADCn_RESR0_t *************************/
/*
   ADC0_RESR0            "Result Register 0"
   ADC1_RESR0            "Result Register 0"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RESULT:14;           /*  = [0..13] = 0x00003fff */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int EMUX:3;              /*  = [16..18] = 0x00070000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int CRS:3;               /*  = [20..22] = 0x00700000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int CHNR:4;              /*  = [24..27] = 0x0f000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int DRC:2;               /*  = [29..30] = 0x60000000 */
      unsigned int VF:1;                /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) ADCn_RESR0_t_nonv;

typedef volatile ADCn_RESR0_t_nonv ADCn_RESR0_t;

/********************** ADCn_RESRD0_t *************************/
/*
   ADC0_RESRD0           "Result Register 0 for Debugging"
   ADC1_RESRD0           "Result Register 0 for Debugging"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RESULT:14;           /*  = [0..13] = 0x00003fff */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int EMUX:3;              /*  = [16..18] = 0x00070000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int CRS:3;               /*  = [20..22] = 0x00700000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int CHNR:4;              /*  = [24..27] = 0x0f000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int DRC:2;               /*  = [29..30] = 0x60000000 */
      unsigned int VF:1;                /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) ADCn_RESRD0_t_nonv;

typedef volatile ADCn_RESRD0_t_nonv ADCn_RESRD0_t;

/********************** ADCn_RESRDm_t *************************/
/*
   ADC0_RESRD1           "Result Register 1 for Debugging"
   ADC0_RESRD10          "Result Register 10 for Debugging"
   ADC0_RESRD11          "Result Register 11 for Debugging"
   ADC0_RESRD12          "Result Register 12 for Debugging"
   ADC0_RESRD13          "Result Register 13 for Debugging"
   ADC0_RESRD14          "Result Register 14 for Debugging"
   ADC0_RESRD15          "Result Register 15 for Debugging"
   ADC0_RESRD2           "Result Register 2 for Debugging"
   ADC0_RESRD3           "Result Register 3 for Debugging"
   ADC0_RESRD4           "Result Register 4 for Debugging"
   ADC0_RESRD5           "Result Register 5 for Debugging"
   ADC0_RESRD6           "Result Register 6 for Debugging"
   ADC0_RESRD7           "Result Register 7 for Debugging"
   ADC0_RESRD8           "Result Register 8 for Debugging"
   ADC0_RESRD9           "Result Register 9 for Debugging"
   ADC1_RESRD1           "Result Register 1 for Debugging"
   ADC1_RESRD10          "Result Register 10 for Debugging"
   ADC1_RESRD11          "Result Register 11 for Debugging"
   ADC1_RESRD12          "Result Register 12 for Debugging"
   ADC1_RESRD13          "Result Register 13 for Debugging"
   ADC1_RESRD14          "Result Register 14 for Debugging"
   ADC1_RESRD15          "Result Register 15 for Debugging"
   ADC1_RESRD2           "Result Register 2 for Debugging"
   ADC1_RESRD3           "Result Register 3 for Debugging"
   ADC1_RESRD4           "Result Register 4 for Debugging"
   ADC1_RESRD5           "Result Register 5 for Debugging"
   ADC1_RESRD6           "Result Register 6 for Debugging"
   ADC1_RESRD7           "Result Register 7 for Debugging"
   ADC1_RESRD8           "Result Register 8 for Debugging"
   ADC1_RESRD9           "Result Register 9 for Debugging"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RESULT:14;           /*  = [0..13] = 0x00003fff */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int CRS:3;               /*  = [20..22] = 0x00700000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int CHNR:4;              /*  = [24..27] = 0x0f000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int DRC:2;               /*  = [29..30] = 0x60000000 */
      unsigned int VF:1;                /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) ADCn_RESRDm_t_nonv;

typedef volatile ADCn_RESRDm_t_nonv ADCn_RESRDm_t;

/********************** ADCn_RESRm_t *************************/
/*
   ADC0_RESR1            "Result Register 1"
   ADC0_RESR10           "Result Register 10"
   ADC0_RESR11           "Result Register 11"
   ADC0_RESR12           "Result Register 12"
   ADC0_RESR13           "Result Register 13"
   ADC0_RESR14           "Result Register 14"
   ADC0_RESR15           "Result Register 15"
   ADC0_RESR2            "Result Register 2"
   ADC0_RESR3            "Result Register 3"
   ADC0_RESR4            "Result Register 4"
   ADC0_RESR5            "Result Register 5"
   ADC0_RESR6            "Result Register 6"
   ADC0_RESR7            "Result Register 7"
   ADC0_RESR8            "Result Register 8"
   ADC0_RESR9            "Result Register 9"
   ADC1_RESR1            "Result Register 1"
   ADC1_RESR10           "Result Register 10"
   ADC1_RESR11           "Result Register 11"
   ADC1_RESR12           "Result Register 12"
   ADC1_RESR13           "Result Register 13"
   ADC1_RESR14           "Result Register 14"
   ADC1_RESR15           "Result Register 15"
   ADC1_RESR2            "Result Register 2"
   ADC1_RESR3            "Result Register 3"
   ADC1_RESR4            "Result Register 4"
   ADC1_RESR5            "Result Register 5"
   ADC1_RESR6            "Result Register 6"
   ADC1_RESR7            "Result Register 7"
   ADC1_RESR8            "Result Register 8"
   ADC1_RESR9            "Result Register 9"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RESULT:14;           /*  = [0..13] = 0x00003fff */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int CRS:3;               /*  = [20..22] = 0x00700000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int CHNR:4;              /*  = [24..27] = 0x0f000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int DRC:2;               /*  = [29..30] = 0x60000000 */
      unsigned int VF:1;                /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) ADCn_RESRm_t_nonv;

typedef volatile ADCn_RESRm_t_nonv ADCn_RESRm_t;

/********************** ADCn_RNPRm_t *************************/
/*
   ADC0_RNPR0            "Result Node Pointer Register 0"
   ADC0_RNPR8            "Result Node Pointer Register 8"
   ADC1_RNPR0            "Result Node Pointer Register 0"
   ADC1_RNPR8            "Result Node Pointer Register 8"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RENP0:3;             /*  = [0..2] = 0x00000007 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int RENP1:3;             /*  = [4..6] = 0x00000070 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int RENP2:3;             /*  = [8..10] = 0x00000700 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int RENP3:3;             /*  = [12..14] = 0x00007000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int RENP4:3;             /*  = [16..18] = 0x00070000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int RENP5:3;             /*  = [20..22] = 0x00700000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int RENP6:3;             /*  = [24..26] = 0x07000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int RENP7:3;             /*  = [28..30] = 0x70000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) ADCn_RNPRm_t_nonv;

typedef volatile ADCn_RNPRm_t_nonv ADCn_RNPRm_t;

/********************** ADCn_RSIRm_t *************************/
/*
   ADC0_RSIR0            "Request Source 0 Input Register"
   ADC0_RSIR1            "Request Source 1 Input Register"
   ADC0_RSIR2            "Request Source 2 Input Register"
   ADC0_RSIR3            "Request Source 3 Input Register"
   ADC0_RSIR4            "Request Source 4 Input Register"
   ADC1_RSIR0            "Request Source 0 Input Register"
   ADC1_RSIR1            "Request Source 1 Input Register"
   ADC1_RSIR2            "Request Source 2 Input Register"
   ADC1_RSIR3            "Request Source 3 Input Register"
   ADC1_RSIR4            "Request Source 4 Input Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int GTSEL:3;             /*  = [0..2] = 0x00000007 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int TMEN:1;              /*  = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int GTI:1;               /*  = [7..7] = 0x00000080 */
      unsigned int TRSEL:3;             /*  = [8..10] = 0x00000700 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int FEN:1;               /*  = [12..12] = 0x00001000 */
      unsigned int REN:1;               /*  = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int TRI:1;               /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) ADCn_RSIRm_t_nonv;

typedef volatile ADCn_RSIRm_t_nonv ADCn_RSIRm_t;

/********************** ADCn_RSPR0_t *************************/
/*
   ADC0_RSPR0            "Request Source Priority Register 0"
   ADC1_RSPR0            "Request Source Priority Register 0"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int PRIO0:2;             /*  = [0..1] = 0x00000003 */
      unsigned int _bit2:1;             /* 0 = [2..2] = 0x00000004 */
      unsigned int CSM0:1;              /*  = [3..3] = 0x00000008 */
      unsigned int PRIO1:2;             /*  = [4..5] = 0x00000030 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int CSM1:1;              /*  = [7..7] = 0x00000080 */
      unsigned int PRIO2:2;             /*  = [8..9] = 0x00000300 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int CSM2:1;              /*  = [11..11] = 0x00000800 */
      unsigned int PRIO3:2;             /*  = [12..13] = 0x00003000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int CSM3:1;              /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) ADCn_RSPR0_t_nonv;

typedef volatile ADCn_RSPR0_t_nonv ADCn_RSPR0_t;

/********************** ADCn_RSPR4_t *************************/
/*
   ADC0_RSPR4            "Request Source Priority Register 4"
   ADC1_RSPR4            "Request Source Priority Register 4"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int PRIO4:2;             /*  = [0..1] = 0x00000003 */
      unsigned int _bit2:1;             /* 0 = [2..2] = 0x00000004 */
      unsigned int CSM4:1;              /*  = [3..3] = 0x00000008 */
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
} __attribute__((aligned(4))) ADCn_RSPR4_t_nonv;

typedef volatile ADCn_RSPR4_t_nonv ADCn_RSPR4_t;

/********************** ADCn_SYNCTR_t *************************/
/*
   ADC0_SYNCTR           "Synchronization Control Register"
   ADC1_SYNCTR           "Synchronization Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int STSEL:2;             /*  = [0..1] = 0x00000003 */
      unsigned int _bit2:1;             /* 0 = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int EVALR1:1;            /*  = [4..4] = 0x00000010 */
      unsigned int EVALR2:1;            /*  = [5..5] = 0x00000020 */
      unsigned int EVALR3:1;            /*  = [6..6] = 0x00000040 */
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
} __attribute__((aligned(4))) ADCn_SYNCTR_t_nonv;

typedef volatile ADCn_SYNCTR_t_nonv ADCn_SYNCTR_t;

/********************** ADCn_VFR_t *************************/
/*
   ADC0_VFR              "Valid Flag Register"
   ADC1_VFR              "Valid Flag Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int VF0:1;               /*  = [0..0] = 0x00000001 */
      unsigned int VF1:1;               /*  = [1..1] = 0x00000002 */
      unsigned int VF2:1;               /*  = [2..2] = 0x00000004 */
      unsigned int VF3:1;               /*  = [3..3] = 0x00000008 */
      unsigned int VF4:1;               /*  = [4..4] = 0x00000010 */
      unsigned int VF5:1;               /*  = [5..5] = 0x00000020 */
      unsigned int VF6:1;               /*  = [6..6] = 0x00000040 */
      unsigned int VF7:1;               /*  = [7..7] = 0x00000080 */
      unsigned int VF8:1;               /*  = [8..8] = 0x00000100 */
      unsigned int VF9:1;               /*  = [9..9] = 0x00000200 */
      unsigned int VF10:1;              /*  = [10..10] = 0x00000400 */
      unsigned int VF11:1;              /*  = [11..11] = 0x00000800 */
      unsigned int VF12:1;              /*  = [12..12] = 0x00001000 */
      unsigned int VF13:1;              /*  = [13..13] = 0x00002000 */
      unsigned int VF14:1;              /*  = [14..14] = 0x00004000 */
      unsigned int VF15:1;              /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) ADCn_VFR_t_nonv;

typedef volatile ADCn_VFR_t_nonv ADCn_VFR_t;


#endif /* _HAVE_TRICORE_ADC0_ADC1_SHARETYPES_H_ */

