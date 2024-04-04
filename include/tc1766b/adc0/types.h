/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_ADC0_TYPES_H_
#define _HAVE_TRICORE_ADC0_TYPES_H_


/********************** ADC0_AP_t *************************/
/*
   ADC0_AP               "ADC Arbitration Participation Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ASP:1;               /*  = [0..0] = 0x00000001 */
      unsigned int QP:1;                /*  = [1..1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2..2] = 0x00000004 */
      unsigned int SW0P:1;              /*  = [3..3] = 0x00000008 */
      unsigned int EXP:1;               /*  = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int TP:1;                /*  = [6..6] = 0x00000040 */
      unsigned int CHP:1;               /*  = [7..7] = 0x00000080 */
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
} __attribute__((aligned(4))) ADC0_AP_t_nonv;

typedef volatile ADC0_AP_t_nonv ADC0_AP_t;

/********************** ADC0_ASCRP_t *************************/
/*
   ADC0_ASCRP            "ADC Auto Scan Conversion Request Pending Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ASCRP0:1;            /*  = [0..0] = 0x00000001 */
      unsigned int ASCRP1:1;            /*  = [1..1] = 0x00000002 */
      unsigned int ASCRP2:1;            /*  = [2..2] = 0x00000004 */
      unsigned int ASCRP3:1;            /*  = [3..3] = 0x00000008 */
      unsigned int ASCRP4:1;            /*  = [4..4] = 0x00000010 */
      unsigned int ASCRP5:1;            /*  = [5..5] = 0x00000020 */
      unsigned int ASCRP6:1;            /*  = [6..6] = 0x00000040 */
      unsigned int ASCRP7:1;            /*  = [7..7] = 0x00000080 */
      unsigned int ASCRP8:1;            /*  = [8..8] = 0x00000100 */
      unsigned int ASCRP9:1;            /*  = [9..9] = 0x00000200 */
      unsigned int ASCRP10:1;           /*  = [10..10] = 0x00000400 */
      unsigned int ASCRP11:1;           /*  = [11..11] = 0x00000800 */
      unsigned int ASCRP12:1;           /*  = [12..12] = 0x00001000 */
      unsigned int ASCRP13:1;           /*  = [13..13] = 0x00002000 */
      unsigned int ASCRP14:1;           /*  = [14..14] = 0x00004000 */
      unsigned int ASCRP15:1;           /*  = [15..15] = 0x00008000 */
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
      unsigned int GRPS:1;              /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) ADC0_ASCRP_t_nonv;

typedef volatile ADC0_ASCRP_t_nonv ADC0_ASCRP_t;

/********************** ADC0_BARRACUDAIN_t *************************/
/*
   ADC0_BARRACUDAIN      "ADC Barracuda In Test Register"
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
} __attribute__((aligned(4))) ADC0_BARRACUDAIN_t_nonv;

typedef volatile ADC0_BARRACUDAIN_t_nonv ADC0_BARRACUDAIN_t;

/********************** ADC0_BARRACUDAOUT_t *************************/
/*
   ADC0_BARRACUDAOUT     "ADC Barracuda Out Test Register"
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
} __attribute__((aligned(4))) ADC0_BARRACUDAOUT_t_nonv;

typedef volatile ADC0_BARRACUDAOUT_t_nonv ADC0_BARRACUDAOUT_t;

/********************** ADC0_CHIN_t *************************/
/*
   ADC0_CHIN             "ADC Channel Injection Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CHNRIN:4;            /*  = [0..3] = 0x0000000f */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int RES:2;               /*  = [6..7] = 0x000000c0 */
      unsigned int EMUX:2;              /*  = [8..9] = 0x00000300 */
      unsigned int GRPS:1;              /*  = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int CIREN:1;             /*  = [15..15] = 0x00008000 */
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
      unsigned int CINREQ:1;            /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) ADC0_CHIN_t_nonv;

typedef volatile ADC0_CHIN_t_nonv ADC0_CHIN_t;

/********************** ADC0_CLC_t *************************/
/*
   ADC0_CLC              "ADC Clock Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DISR:1;              /*  = [0..0] = 0x00000001 */
      unsigned int DISS:1;              /*  = [1..1] = 0x00000002 */
      unsigned int SPEN:1;              /*  = [2..2] = 0x00000004 */
      unsigned int EDIS:1;              /*  = [3..3] = 0x00000008 */
      unsigned int SBWE:1;              /*  = [4..4] = 0x00000010 */
      unsigned int FSOE:1;              /*  = [5..5] = 0x00000020 */
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
} __attribute__((aligned(4))) ADC0_CLC_t_nonv;

typedef volatile ADC0_CLC_t_nonv ADC0_CLC_t;

/********************** ADC0_CON_t *************************/
/*
   ADC0_CON              "ADC Converter Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CTC:8;               /*  = [0..7] = 0x000000ff */
      unsigned int SCNM:2;              /*  = [8..9] = 0x00000300 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int QEN:1;               /*  = [15..15] = 0x00008000 */
      unsigned int QWLP:4;              /*  = [16..19] = 0x000f0000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int PCDIS:1;             /*  = [27..27] = 0x08000000 */
      unsigned int CPR:1;               /*  = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int SRTEST:1;            /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) ADC0_CON_t_nonv;

typedef volatile ADC0_CON_t_nonv ADC0_CON_t;

/********************** ADC0_EXCRP_t *************************/
/*
   ADC0_EXCRP            "ADC External Event Conversion Request Pending Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int EXCRP0:1;            /*  = [0..0] = 0x00000001 */
      unsigned int EXCRP1:1;            /*  = [1..1] = 0x00000002 */
      unsigned int EXCRP2:1;            /*  = [2..2] = 0x00000004 */
      unsigned int EXCRP3:1;            /*  = [3..3] = 0x00000008 */
      unsigned int EXCRP4:1;            /*  = [4..4] = 0x00000010 */
      unsigned int EXCRP5:1;            /*  = [5..5] = 0x00000020 */
      unsigned int EXCRP6:1;            /*  = [6..6] = 0x00000040 */
      unsigned int EXCRP7:1;            /*  = [7..7] = 0x00000080 */
      unsigned int EXCRP8:1;            /*  = [8..8] = 0x00000100 */
      unsigned int EXCRP9:1;            /*  = [9..9] = 0x00000200 */
      unsigned int EXCRP10:1;           /*  = [10..10] = 0x00000400 */
      unsigned int EXCRP11:1;           /*  = [11..11] = 0x00000800 */
      unsigned int EXCRP12:1;           /*  = [12..12] = 0x00001000 */
      unsigned int EXCRP13:1;           /*  = [13..13] = 0x00002000 */
      unsigned int EXCRP14:1;           /*  = [14..14] = 0x00004000 */
      unsigned int EXCRP15:1;           /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) ADC0_EXCRP_t_nonv;

typedef volatile ADC0_EXCRP_t_nonv ADC0_EXCRP_t;

/********************** ADC0_EXTC_t *************************/
/*
   ADC0_EXTC             "ADC External Trigger Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ETCCH0:1;            /*  = [0..0] = 0x00000001 */
      unsigned int ETCCH1:1;            /*  = [1..1] = 0x00000002 */
      unsigned int ETCCH2:1;            /*  = [2..2] = 0x00000004 */
      unsigned int ETCCH3:1;            /*  = [3..3] = 0x00000008 */
      unsigned int ETCCH4:1;            /*  = [4..4] = 0x00000010 */
      unsigned int ETCCH5:1;            /*  = [5..5] = 0x00000020 */
      unsigned int ETCCH6:1;            /*  = [6..6] = 0x00000040 */
      unsigned int ETCCH7:1;            /*  = [7..7] = 0x00000080 */
      unsigned int ETCCH8:1;            /*  = [8..8] = 0x00000100 */
      unsigned int ETCCH9:1;            /*  = [9..9] = 0x00000200 */
      unsigned int ETCCH10:1;           /*  = [10..10] = 0x00000400 */
      unsigned int ETCCH11:1;           /*  = [11..11] = 0x00000800 */
      unsigned int ETCCH12:1;           /*  = [12..12] = 0x00001000 */
      unsigned int ETCCH13:1;           /*  = [13..13] = 0x00002000 */
      unsigned int ETCCH14:1;           /*  = [14..14] = 0x00004000 */
      unsigned int ETCCH15:1;           /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) ADC0_EXTC_t_nonv;

typedef volatile ADC0_EXTC_t_nonv ADC0_EXTC_t;

/********************** ADC0_FDR_t *************************/
/*
   ADC0_FDR              "ADC Fractional Divider Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int STEP:10;             /*  = [0..9] = 0x000003ff */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int SM:1;                /*  = [11..11] = 0x00000800 */
      unsigned int SC:2;                /*  = [12..13] = 0x00003000 */
      unsigned int DM:2;                /*  = [14..15] = 0x0000c000 */
      unsigned int RESULT:10;           /*  = [16..25] = 0x03ff0000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int SUSACK:1;            /*  = [28..28] = 0x10000000 */
      unsigned int SUSREQ:1;            /*  = [29..29] = 0x20000000 */
      unsigned int ENHW:1;              /*  = [30..30] = 0x40000000 */
      unsigned int DISCLK:1;            /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) ADC0_FDR_t_nonv;

typedef volatile ADC0_FDR_t_nonv ADC0_FDR_t;

/********************** ADC0_ID_t *************************/
/*
   ADC0_ID               "ADC Module Identification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int Mod_Rev:8;           /*  = [0..7] = 0x000000ff */
      unsigned int Mod_Type:8;          /*  = [8..15] = 0x0000ff00 */
      unsigned int Mod_Number:16;       /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) ADC0_ID_t_nonv;

typedef volatile ADC0_ID_t_nonv ADC0_ID_t;

/********************** ADC0_MSS0_t *************************/
/*
   ADC0_MSS0             "ADC Module Service Request Status Register 0"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MSRCH0:1;            /*  = [0..0] = 0x00000001 */
      unsigned int MSRCH1:1;            /*  = [1..1] = 0x00000002 */
      unsigned int MSRCH2:1;            /*  = [2..2] = 0x00000004 */
      unsigned int MSRCH3:1;            /*  = [3..3] = 0x00000008 */
      unsigned int MSRCH4:1;            /*  = [4..4] = 0x00000010 */
      unsigned int MSRCH5:1;            /*  = [5..5] = 0x00000020 */
      unsigned int MSRCH6:1;            /*  = [6..6] = 0x00000040 */
      unsigned int MSRCH7:1;            /*  = [7..7] = 0x00000080 */
      unsigned int MSRCH8:1;            /*  = [8..8] = 0x00000100 */
      unsigned int MSRCH9:1;            /*  = [9..9] = 0x00000200 */
      unsigned int MSRCH10:1;           /*  = [10..10] = 0x00000400 */
      unsigned int MSRCH11:1;           /*  = [11..11] = 0x00000800 */
      unsigned int MSRCH12:1;           /*  = [12..12] = 0x00001000 */
      unsigned int MSRCH13:1;           /*  = [13..13] = 0x00002000 */
      unsigned int MSRCH14:1;           /*  = [14..14] = 0x00004000 */
      unsigned int MSRCH15:1;           /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) ADC0_MSS0_t_nonv;

typedef volatile ADC0_MSS0_t_nonv ADC0_MSS0_t;

/********************** ADC0_MSS1_t *************************/
/*
   ADC0_MSS1             "ADC Module Service Request Status Register 1"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MSRT:1;              /*  = [0..0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1..1] = 0x00000002 */
      unsigned int MSRQR:1;             /*  = [2..2] = 0x00000004 */
      unsigned int MSRAS:1;             /*  = [3..3] = 0x00000008 */
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
} __attribute__((aligned(4))) ADC0_MSS1_t_nonv;

typedef volatile ADC0_MSS1_t_nonv ADC0_MSS1_t;

/********************** ADC0_QR_t *************************/
/*
   ADC0_QR               "ADC Queue Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CHNR:4;              /*  = [0..3] = 0x0000000f */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int RES:2;               /*  = [6..7] = 0x000000c0 */
      unsigned int EMUX:2;              /*  = [8..9] = 0x00000300 */
      unsigned int GRPS:1;              /*  = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int V:1;                 /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) ADC0_QR_t_nonv;

typedef volatile ADC0_QR_t_nonv ADC0_QR_t;

/********************** ADC0_QUEUE0_t *************************/
/*
   ADC0_QUEUE0           "ADC Queue Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CHNR:4;              /*  = [0..3] = 0x0000000f */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int RES:2;               /*  = [6..7] = 0x000000c0 */
      unsigned int EMUX:2;              /*  = [8..9] = 0x00000300 */
      unsigned int GRPS:1;              /*  = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int V:1;                 /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) ADC0_QUEUE0_t_nonv;

typedef volatile ADC0_QUEUE0_t_nonv ADC0_QUEUE0_t;

/********************** ADC0_REQ0_t *************************/
/*
   ADC0_REQ0             "ADC Conversion Request Register SW0"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int REQ00:1;             /*  = [0..0] = 0x00000001 */
      unsigned int REQ01:1;             /*  = [1..1] = 0x00000002 */
      unsigned int REQ02:1;             /*  = [2..2] = 0x00000004 */
      unsigned int REQ03:1;             /*  = [3..3] = 0x00000008 */
      unsigned int REQ04:1;             /*  = [4..4] = 0x00000010 */
      unsigned int REQ05:1;             /*  = [5..5] = 0x00000020 */
      unsigned int REQ06:1;             /*  = [6..6] = 0x00000040 */
      unsigned int REQ07:1;             /*  = [7..7] = 0x00000080 */
      unsigned int REQ08:1;             /*  = [8..8] = 0x00000100 */
      unsigned int REQ09:1;             /*  = [9..9] = 0x00000200 */
      unsigned int REQ010:1;            /*  = [10..10] = 0x00000400 */
      unsigned int REQ011:1;            /*  = [11..11] = 0x00000800 */
      unsigned int REQ012:1;            /*  = [12..12] = 0x00001000 */
      unsigned int REQ013:1;            /*  = [13..13] = 0x00002000 */
      unsigned int REQ014:1;            /*  = [14..14] = 0x00004000 */
      unsigned int REQ015:1;            /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) ADC0_REQ0_t_nonv;

typedef volatile ADC0_REQ0_t_nonv ADC0_REQ0_t;

/********************** ADC0_SAL_t *************************/
/*
   ADC0_SAL              "ADC Source Arbitration Level Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SALAS:3;             /*  = [0..2] = 0x00000007 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int SALQ:3;              /*  = [4..6] = 0x00000070 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int SALSW0:3;            /*  = [12..14] = 0x00007000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int SALEXT:3;            /*  = [16..18] = 0x00070000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int SALT:3;              /*  = [24..26] = 0x07000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int SALCHIN:3;           /*  = [28..30] = 0x70000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) ADC0_SAL_t_nonv;

typedef volatile ADC0_SAL_t_nonv ADC0_SAL_t;

/********************** ADC0_SCN_t *************************/
/*
   ADC0_SCN              "ADC Auto Scan Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SRQ0:1;              /*  = [0..0] = 0x00000001 */
      unsigned int SRQ1:1;              /*  = [1..1] = 0x00000002 */
      unsigned int SRQ2:1;              /*  = [2..2] = 0x00000004 */
      unsigned int SRQ3:1;              /*  = [3..3] = 0x00000008 */
      unsigned int SRQ4:1;              /*  = [4..4] = 0x00000010 */
      unsigned int SRQ5:1;              /*  = [5..5] = 0x00000020 */
      unsigned int SRQ6:1;              /*  = [6..6] = 0x00000040 */
      unsigned int SRQ7:1;              /*  = [7..7] = 0x00000080 */
      unsigned int SRQ8:1;              /*  = [8..8] = 0x00000100 */
      unsigned int SRQ9:1;              /*  = [9..9] = 0x00000200 */
      unsigned int SRQ10:1;             /*  = [10..10] = 0x00000400 */
      unsigned int SRQ11:1;             /*  = [11..11] = 0x00000800 */
      unsigned int SRQ12:1;             /*  = [12..12] = 0x00001000 */
      unsigned int SRQ13:1;             /*  = [13..13] = 0x00002000 */
      unsigned int SRQ14:1;             /*  = [14..14] = 0x00004000 */
      unsigned int SRQ15:1;             /*  = [15..15] = 0x00008000 */
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
      unsigned int GRPC:2;              /*  = [30..31] = 0xc0000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) ADC0_SCN_t_nonv;

typedef volatile ADC0_SCN_t_nonv ADC0_SCN_t;

/********************** ADC0_SCON_t *************************/
/*
   ADC0_SCON             "ADC Source Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int QENC:1;              /*  = [0..0] = 0x00000001 */
      unsigned int QENS:1;              /*  = [1..1] = 0x00000002 */
      unsigned int TRC:1;               /*  = [2..2] = 0x00000004 */
      unsigned int TRS:1;               /*  = [3..3] = 0x00000008 */
      unsigned int QRS:1;               /*  = [4..4] = 0x00000010 */
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
} __attribute__((aligned(4))) ADC0_SCON_t_nonv;

typedef volatile ADC0_SCON_t_nonv ADC0_SCON_t;

/********************** ADC0_SRNP_t *************************/
/*
   ADC0_SRNP             "ADC Service Request Node Pointer Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ENPT:1;              /*  = [0..0] = 0x00000001 */
      unsigned int PT:3;                /*  = [1..3] = 0x0000000e */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int ENPQR:1;             /*  = [8..8] = 0x00000100 */
      unsigned int PQR:3;               /*  = [9..11] = 0x00000e00 */
      unsigned int ENPAS:1;             /*  = [12..12] = 0x00001000 */
      unsigned int PAS:3;               /*  = [13..15] = 0x0000e000 */
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
} __attribute__((aligned(4))) ADC0_SRNP_t_nonv;

typedef volatile ADC0_SRNP_t_nonv ADC0_SRNP_t;

/********************** ADC0_STAT_t *************************/
/*
   ADC0_STAT             "ADC Converter Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CHNRCC:4;            /*  = [0..3] = 0x0000000f */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int CHTSCC:3;            /*  = [8..10] = 0x00000700 */
      unsigned int DATAVAL:1;           /*  = [11..11] = 0x00000800 */
      unsigned int AL:1;                /*  = [12..12] = 0x00001000 */
      unsigned int CAL:1;               /*  = [13..13] = 0x00002000 */
      unsigned int SMPL:1;              /*  = [14..14] = 0x00004000 */
      unsigned int BUSY:1;              /*  = [15..15] = 0x00008000 */
      unsigned int QLP:4;               /*  = [16..19] = 0x000f0000 */
      unsigned int QF:1;                /*  = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int REQSY:1;             /*  = [24..24] = 0x01000000 */
      unsigned int PARSY:1;             /*  = [25..25] = 0x02000000 */
      unsigned int IENREQ:1;            /*  = [26..26] = 0x04000000 */
      unsigned int IENPAR:1;            /*  = [27..27] = 0x08000000 */
      unsigned int SYMS:1;              /*  = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) ADC0_STAT_t_nonv;

typedef volatile ADC0_STAT_t_nonv ADC0_STAT_t;

/********************** ADC0_SW0CRP_t *************************/
/*
   ADC0_SW0CRP           "ADC Software SW0 Conversion Request Pending Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SW0CRP0:1;           /*  = [0..0] = 0x00000001 */
      unsigned int SW0CRP1:1;           /*  = [1..1] = 0x00000002 */
      unsigned int SW0CRP2:1;           /*  = [2..2] = 0x00000004 */
      unsigned int SW0CRP3:1;           /*  = [3..3] = 0x00000008 */
      unsigned int SW0CRP4:1;           /*  = [4..4] = 0x00000010 */
      unsigned int SW0CRP5:1;           /*  = [5..5] = 0x00000020 */
      unsigned int SW0CRP6:1;           /*  = [6..6] = 0x00000040 */
      unsigned int SW0CRP7:1;           /*  = [7..7] = 0x00000080 */
      unsigned int SW0CRP8:1;           /*  = [8..8] = 0x00000100 */
      unsigned int SW0CRP9:1;           /*  = [9..9] = 0x00000200 */
      unsigned int SW0CRP10:1;          /*  = [10..10] = 0x00000400 */
      unsigned int SW0CRP11:1;          /*  = [11..11] = 0x00000800 */
      unsigned int SW0CRP12:1;          /*  = [12..12] = 0x00001000 */
      unsigned int SW0CRP13:1;          /*  = [13..13] = 0x00002000 */
      unsigned int SW0CRP14:1;          /*  = [14..14] = 0x00004000 */
      unsigned int SW0CRP15:1;          /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) ADC0_SW0CRP_t_nonv;

typedef volatile ADC0_SW0CRP_t_nonv ADC0_SW0CRP_t;

/********************** ADC0_TCON_t *************************/
/*
   ADC0_TCON             "ADC Timer Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ALB:14;              /*  = [0..13] = 0x00003fff */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int TRLD:14;             /*  = [16..29] = 0x3fff0000 */
      unsigned int TSEN:1;              /*  = [30..30] = 0x40000000 */
      unsigned int TR:1;                /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) ADC0_TCON_t_nonv;

typedef volatile ADC0_TCON_t_nonv ADC0_TCON_t;

/********************** ADC0_TCRP_t *************************/
/*
   ADC0_TCRP             "ADC Timer Conversion Request Pending Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TRP0:1;              /*  = [0..0] = 0x00000001 */
      unsigned int TRP1:1;              /*  = [1..1] = 0x00000002 */
      unsigned int TRP2:1;              /*  = [2..2] = 0x00000004 */
      unsigned int TRP3:1;              /*  = [3..3] = 0x00000008 */
      unsigned int TRP4:1;              /*  = [4..4] = 0x00000010 */
      unsigned int TRP5:1;              /*  = [5..5] = 0x00000020 */
      unsigned int TRP6:1;              /*  = [6..6] = 0x00000040 */
      unsigned int TRP7:1;              /*  = [7..7] = 0x00000080 */
      unsigned int TRP8:1;              /*  = [8..8] = 0x00000100 */
      unsigned int TRP9:1;              /*  = [9..9] = 0x00000200 */
      unsigned int TRP10:1;             /*  = [10..10] = 0x00000400 */
      unsigned int TRP11:1;             /*  = [11..11] = 0x00000800 */
      unsigned int TRP12:1;             /*  = [12..12] = 0x00001000 */
      unsigned int TRP13:1;             /*  = [13..13] = 0x00002000 */
      unsigned int TRP14:1;             /*  = [14..14] = 0x00004000 */
      unsigned int TRP15:1;             /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) ADC0_TCRP_t_nonv;

typedef volatile ADC0_TCRP_t_nonv ADC0_TCRP_t;

/********************** ADC0_TEST_t *************************/
/*
   ADC0_TEST             "ADC Test Register"
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
      unsigned int TEST14:1;            /*  = [14..14] = 0x00004000 */
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
} __attribute__((aligned(4))) ADC0_TEST_t_nonv;

typedef volatile ADC0_TEST_t_nonv ADC0_TEST_t;

/********************** ADC0_TSTAT_t *************************/
/*
   ADC0_TSTAT            "ADC Timer Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TIMER:14;            /*  = [0..13] = 0x00003fff */
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
} __attribute__((aligned(4))) ADC0_TSTAT_t_nonv;

typedef volatile ADC0_TSTAT_t_nonv ADC0_TSTAT_t;

/********************** ADC0_TTC_t *************************/
/*
   ADC0_TTC              "ADC Timer Trigger Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TTCCH0:1;            /*  = [0..0] = 0x00000001 */
      unsigned int TTCCH1:1;            /*  = [1..1] = 0x00000002 */
      unsigned int TTCCH2:1;            /*  = [2..2] = 0x00000004 */
      unsigned int TTCCH3:1;            /*  = [3..3] = 0x00000008 */
      unsigned int TTCCH4:1;            /*  = [4..4] = 0x00000010 */
      unsigned int TTCCH5:1;            /*  = [5..5] = 0x00000020 */
      unsigned int TTCCH6:1;            /*  = [6..6] = 0x00000040 */
      unsigned int TTCCH7:1;            /*  = [7..7] = 0x00000080 */
      unsigned int TTCCH8:1;            /*  = [8..8] = 0x00000100 */
      unsigned int TTCCH9:1;            /*  = [9..9] = 0x00000200 */
      unsigned int TTCCH10:1;           /*  = [10..10] = 0x00000400 */
      unsigned int TTCCH11:1;           /*  = [11..11] = 0x00000800 */
      unsigned int TTCCH12:1;           /*  = [12..12] = 0x00001000 */
      unsigned int TTCCH13:1;           /*  = [13..13] = 0x00002000 */
      unsigned int TTCCH14:1;           /*  = [14..14] = 0x00004000 */
      unsigned int TTCCH15:1;           /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) ADC0_TTC_t_nonv;

typedef volatile ADC0_TTC_t_nonv ADC0_TTC_t;


#endif /* _HAVE_TRICORE_ADC0_TYPES_H_ */

