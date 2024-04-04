/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_DMA_TYPES_H_
#define _HAVE_TRICORE_DMA_TYPES_H_


/********************** DMA_CHRSTR_t *************************/
/*
   DMA_CHRSTR            "Channel Reset Request Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CH00:1;              /*  = [0..0] = 0x00000001 */
      unsigned int CH01:1;              /*  = [1..1] = 0x00000002 */
      unsigned int CH02:1;              /*  = [2..2] = 0x00000004 */
      unsigned int CH03:1;              /*  = [3..3] = 0x00000008 */
      unsigned int CH04:1;              /*  = [4..4] = 0x00000010 */
      unsigned int CH05:1;              /*  = [5..5] = 0x00000020 */
      unsigned int CH06:1;              /*  = [6..6] = 0x00000040 */
      unsigned int CH07:1;              /*  = [7..7] = 0x00000080 */
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
} __attribute__((aligned(4))) DMA_CHRSTR_t_nonv;

typedef volatile DMA_CHRSTR_t_nonv DMA_CHRSTR_t;

/********************** DMA_CLC_t *************************/
/*
   DMA_CLC               "DMA Clock Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DISR:1;              /*  = [0..0] = 0x00000001 */
      unsigned int DISS:1;              /*  = [1..1] = 0x00000002 */
      unsigned int SPEN:1;              /*  = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
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
} __attribute__((aligned(4))) DMA_CLC_t_nonv;

typedef volatile DMA_CLC_t_nonv DMA_CLC_t;

/********************** DMA_CLRE_t *************************/
/*
   DMA_CLRE              "Clear Error Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CTRL00:1;            /*  = [0..0] = 0x00000001 */
      unsigned int CTRL01:1;            /*  = [1..1] = 0x00000002 */
      unsigned int CTRL02:1;            /*  = [2..2] = 0x00000004 */
      unsigned int CTRL03:1;            /*  = [3..3] = 0x00000008 */
      unsigned int CTRL04:1;            /*  = [4..4] = 0x00000010 */
      unsigned int CTRL05:1;            /*  = [5..5] = 0x00000020 */
      unsigned int CTRL06:1;            /*  = [6..6] = 0x00000040 */
      unsigned int CTRL07:1;            /*  = [7..7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int CME0SER:1;           /*  = [16..16] = 0x00010000 */
      unsigned int CME0DER:1;           /*  = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int CFPI0ER:1;           /*  = [20..20] = 0x00100000 */
      unsigned int CFPI1ER:1;           /*  = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int CLRMLI0:1;           /*  = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int CLRMLI1:1;           /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) DMA_CLRE_t_nonv;

typedef volatile DMA_CLRE_t_nonv DMA_CLRE_t;

/********************** DMA_EER_t *************************/
/*
   DMA_EER               "Enable Error Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ETRL00:1;            /*  = [0..0] = 0x00000001 */
      unsigned int ETRL01:1;            /*  = [1..1] = 0x00000002 */
      unsigned int ETRL02:1;            /*  = [2..2] = 0x00000004 */
      unsigned int ETRL03:1;            /*  = [3..3] = 0x00000008 */
      unsigned int ETRL04:1;            /*  = [4..4] = 0x00000010 */
      unsigned int ETRL05:1;            /*  = [5..5] = 0x00000020 */
      unsigned int ETRL06:1;            /*  = [6..6] = 0x00000040 */
      unsigned int ETRL07:1;            /*  = [7..7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int EME0SER:1;           /*  = [16..16] = 0x00010000 */
      unsigned int EME0DER:1;           /*  = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int ME0INP:4;            /*  = [20..23] = 0x00f00000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int TRLINP:4;            /*  = [28..31] = 0xf0000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) DMA_EER_t_nonv;

typedef volatile DMA_EER_t_nonv DMA_EER_t;

/********************** DMA_ERRSR_t *************************/
/*
   DMA_ERRSR             "Error Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TRL00:1;             /*  = [0..0] = 0x00000001 */
      unsigned int TRL01:1;             /*  = [1..1] = 0x00000002 */
      unsigned int TRL02:1;             /*  = [2..2] = 0x00000004 */
      unsigned int TRL03:1;             /*  = [3..3] = 0x00000008 */
      unsigned int TRL04:1;             /*  = [4..4] = 0x00000010 */
      unsigned int TRL05:1;             /*  = [5..5] = 0x00000020 */
      unsigned int TRL06:1;             /*  = [6..6] = 0x00000040 */
      unsigned int TRL07:1;             /*  = [7..7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int ME0SER:1;            /*  = [16..16] = 0x00010000 */
      unsigned int ME0DER:1;            /*  = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int FPI0ER:1;            /*  = [20..20] = 0x00100000 */
      unsigned int FPI1ER:1;            /*  = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int LECME0:3;            /*  = [24..26] = 0x07000000 */
      unsigned int MLI0:1;              /*  = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int MLI1:1;              /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) DMA_ERRSR_t_nonv;

typedef volatile DMA_ERRSR_t_nonv DMA_ERRSR_t;

/********************** DMA_GINTR_t *************************/
/*
   DMA_GINTR             "DMA Global Interrupt Set Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SIDMA0:1;            /*  = [0..0] = 0x00000001 */
      unsigned int SIDMA1:1;            /*  = [1..1] = 0x00000002 */
      unsigned int SIDMA2:1;            /*  = [2..2] = 0x00000004 */
      unsigned int SIDMA3:1;            /*  = [3..3] = 0x00000008 */
      unsigned int SIDMA4:1;            /*  = [4..4] = 0x00000010 */
      unsigned int SIDMA5:1;            /*  = [5..5] = 0x00000020 */
      unsigned int SIDMA6:1;            /*  = [6..6] = 0x00000040 */
      unsigned int SIDMA7:1;            /*  = [7..7] = 0x00000080 */
      unsigned int SIDMA8:1;            /*  = [8..8] = 0x00000100 */
      unsigned int SIDMA9:1;            /*  = [9..9] = 0x00000200 */
      unsigned int SIDMA10:1;           /*  = [10..10] = 0x00000400 */
      unsigned int SIDMA11:1;           /*  = [11..11] = 0x00000800 */
      unsigned int SIDMA12:1;           /*  = [12..12] = 0x00001000 */
      unsigned int SIDMA13:1;           /*  = [13..13] = 0x00002000 */
      unsigned int SIDMA14:1;           /*  = [14..14] = 0x00004000 */
      unsigned int SIDMA15:1;           /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) DMA_GINTR_t_nonv;

typedef volatile DMA_GINTR_t_nonv DMA_GINTR_t;

/********************** DMA_HTREQ_t *************************/
/*
   DMA_HTREQ             "Hardware Transaction Request Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ECH00:1;             /*  = [0..0] = 0x00000001 */
      unsigned int ECH01:1;             /*  = [1..1] = 0x00000002 */
      unsigned int ECH02:1;             /*  = [2..2] = 0x00000004 */
      unsigned int ECH03:1;             /*  = [3..3] = 0x00000008 */
      unsigned int ECH04:1;             /*  = [4..4] = 0x00000010 */
      unsigned int ECH05:1;             /*  = [5..5] = 0x00000020 */
      unsigned int ECH06:1;             /*  = [6..6] = 0x00000040 */
      unsigned int ECH07:1;             /*  = [7..7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int DCH00:1;             /*  = [16..16] = 0x00010000 */
      unsigned int DCH01:1;             /*  = [17..17] = 0x00020000 */
      unsigned int DCH02:1;             /*  = [18..18] = 0x00040000 */
      unsigned int DCH03:1;             /*  = [19..19] = 0x00080000 */
      unsigned int DCH04:1;             /*  = [20..20] = 0x00100000 */
      unsigned int DCH05:1;             /*  = [21..21] = 0x00200000 */
      unsigned int DCH06:1;             /*  = [22..22] = 0x00400000 */
      unsigned int DCH07:1;             /*  = [23..23] = 0x00800000 */
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
} __attribute__((aligned(4))) DMA_HTREQ_t_nonv;

typedef volatile DMA_HTREQ_t_nonv DMA_HTREQ_t;

/********************** DMA_ID_t *************************/
/*
   DMA_ID                "DMA Module Identification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MOD_REV:8;           /*  = [0..7] = 0x000000ff */
      unsigned int MOD_TYPE:8;          /*  = [8..15] = 0x0000ff00 */
      unsigned int MOD_NUMBER:16;       /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) DMA_ID_t_nonv;

typedef volatile DMA_ID_t_nonv DMA_ID_t;

/********************** DMA_INTCR_t *************************/
/*
   DMA_INTCR             "Interrupt Clear Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CICH00:1;            /*  = [0..0] = 0x00000001 */
      unsigned int CICH01:1;            /*  = [1..1] = 0x00000002 */
      unsigned int CICH02:1;            /*  = [2..2] = 0x00000004 */
      unsigned int CICH03:1;            /*  = [3..3] = 0x00000008 */
      unsigned int CICH04:1;            /*  = [4..4] = 0x00000010 */
      unsigned int CICH05:1;            /*  = [5..5] = 0x00000020 */
      unsigned int CICH06:1;            /*  = [6..6] = 0x00000040 */
      unsigned int CICH07:1;            /*  = [7..7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int CWRP00:1;            /*  = [16..16] = 0x00010000 */
      unsigned int CWRP01:1;            /*  = [17..17] = 0x00020000 */
      unsigned int CWRP02:1;            /*  = [18..18] = 0x00040000 */
      unsigned int CWRP03:1;            /*  = [19..19] = 0x00080000 */
      unsigned int CWRP04:1;            /*  = [20..20] = 0x00100000 */
      unsigned int CWRP05:1;            /*  = [21..21] = 0x00200000 */
      unsigned int CWRP06:1;            /*  = [22..22] = 0x00400000 */
      unsigned int CWRP07:1;            /*  = [23..23] = 0x00800000 */
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
} __attribute__((aligned(4))) DMA_INTCR_t_nonv;

typedef volatile DMA_INTCR_t_nonv DMA_INTCR_t;

/********************** DMA_INTSR_t *************************/
/*
   DMA_INTSR             "Interrupt Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ICH00:1;             /*  = [0..0] = 0x00000001 */
      unsigned int ICH01:1;             /*  = [1..1] = 0x00000002 */
      unsigned int ICH02:1;             /*  = [2..2] = 0x00000004 */
      unsigned int ICH03:1;             /*  = [3..3] = 0x00000008 */
      unsigned int ICH04:1;             /*  = [4..4] = 0x00000010 */
      unsigned int ICH05:1;             /*  = [5..5] = 0x00000020 */
      unsigned int ICH06:1;             /*  = [6..6] = 0x00000040 */
      unsigned int ICH07:1;             /*  = [7..7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int IPM00:1;             /*  = [16..16] = 0x00010000 */
      unsigned int IPM01:1;             /*  = [17..17] = 0x00020000 */
      unsigned int IPM02:1;             /*  = [18..18] = 0x00040000 */
      unsigned int IPM03:1;             /*  = [19..19] = 0x00080000 */
      unsigned int IPM04:1;             /*  = [20..20] = 0x00100000 */
      unsigned int IPM05:1;             /*  = [21..21] = 0x00200000 */
      unsigned int IPM06:1;             /*  = [22..22] = 0x00400000 */
      unsigned int IPM07:1;             /*  = [23..23] = 0x00800000 */
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
} __attribute__((aligned(4))) DMA_INTSR_t_nonv;

typedef volatile DMA_INTSR_t_nonv DMA_INTSR_t;

/********************** DMA_ME0AENR_t *************************/
/*
   DMA_ME0AENR           "Move Engine 0 Access Enable Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int AEN0:1;              /*  = [0..0] = 0x00000001 */
      unsigned int AEN1:1;              /*  = [1..1] = 0x00000002 */
      unsigned int AEN2:1;              /*  = [2..2] = 0x00000004 */
      unsigned int AEN3:1;              /*  = [3..3] = 0x00000008 */
      unsigned int AEN4:1;              /*  = [4..4] = 0x00000010 */
      unsigned int AEN5:1;              /*  = [5..5] = 0x00000020 */
      unsigned int AEN6:1;              /*  = [6..6] = 0x00000040 */
      unsigned int AEN7:1;              /*  = [7..7] = 0x00000080 */
      unsigned int AEN8:1;              /*  = [8..8] = 0x00000100 */
      unsigned int AEN9:1;              /*  = [9..9] = 0x00000200 */
      unsigned int AEN10:1;             /*  = [10..10] = 0x00000400 */
      unsigned int AEN11:1;             /*  = [11..11] = 0x00000800 */
      unsigned int AEN12:1;             /*  = [12..12] = 0x00001000 */
      unsigned int AEN13:1;             /*  = [13..13] = 0x00002000 */
      unsigned int AEN14:1;             /*  = [14..14] = 0x00004000 */
      unsigned int AEN15:1;             /*  = [15..15] = 0x00008000 */
      unsigned int AEN16:1;             /*  = [16..16] = 0x00010000 */
      unsigned int AEN17:1;             /*  = [17..17] = 0x00020000 */
      unsigned int AEN18:1;             /*  = [18..18] = 0x00040000 */
      unsigned int AEN19:1;             /*  = [19..19] = 0x00080000 */
      unsigned int AEN20:1;             /*  = [20..20] = 0x00100000 */
      unsigned int AEN21:1;             /*  = [21..21] = 0x00200000 */
      unsigned int AEN22:1;             /*  = [22..22] = 0x00400000 */
      unsigned int AEN23:1;             /*  = [23..23] = 0x00800000 */
      unsigned int AEN24:1;             /*  = [24..24] = 0x01000000 */
      unsigned int AEN25:1;             /*  = [25..25] = 0x02000000 */
      unsigned int AEN26:1;             /*  = [26..26] = 0x04000000 */
      unsigned int AEN27:1;             /*  = [27..27] = 0x08000000 */
      unsigned int AEN28:1;             /*  = [28..28] = 0x10000000 */
      unsigned int AEN29:1;             /*  = [29..29] = 0x20000000 */
      unsigned int AEN30:1;             /*  = [30..30] = 0x40000000 */
      unsigned int AEN31:1;             /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) DMA_ME0AENR_t_nonv;

typedef volatile DMA_ME0AENR_t_nonv DMA_ME0AENR_t;

/********************** DMA_ME0ARR_t *************************/
/*
   DMA_ME0ARR            "Move Engine 0 Access Range Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SLICE0:5;            /*  = [0..4] = 0x0000001f */
      unsigned int SIZE0:3;             /*  = [5..7] = 0x000000e0 */
      unsigned int SLICE1:5;            /*  = [8..12] = 0x00001f00 */
      unsigned int SIZE1:3;             /*  = [13..15] = 0x0000e000 */
      unsigned int SLICE2:5;            /*  = [16..20] = 0x001f0000 */
      unsigned int SIZE2:3;             /*  = [21..23] = 0x00e00000 */
      unsigned int SLICE3:5;            /*  = [24..28] = 0x1f000000 */
      unsigned int SIZE3:3;             /*  = [29..31] = 0xe0000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) DMA_ME0ARR_t_nonv;

typedef volatile DMA_ME0ARR_t_nonv DMA_ME0ARR_t;

/********************** DMA_ME0PR_t *************************/
/*
   DMA_ME0PR             "Move Engine 0 Pattern Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int PAT00:8;             /*  = [0..7] = 0x000000ff */
      unsigned int PAT01:8;             /*  = [8..15] = 0x0000ff00 */
      unsigned int PAT02:8;             /*  = [16..23] = 0x00ff0000 */
      unsigned int PAT03:8;             /*  = [24..31] = 0xff000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) DMA_ME0PR_t_nonv;

typedef volatile DMA_ME0PR_t_nonv DMA_ME0PR_t;

/********************** DMA_ME0R_t *************************/
/*
   DMA_ME0R              "Move Engine 0 Read Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ME0R:32;             /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) DMA_ME0R_t_nonv;

typedef volatile DMA_ME0R_t_nonv DMA_ME0R_t;

/********************** DMA_MESR_t *************************/
/*
   DMA_MESR              "Move Engine Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ME0RS:1;             /*  = [0..0] = 0x00000001 */
      unsigned int CH0:3;               /*  = [1..3] = 0x0000000e */
      unsigned int ME0WS:1;             /*  = [4..4] = 0x00000010 */
      unsigned int RBT0:3;              /*  = [5..7] = 0x000000e0 */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int RBT1:3;              /*  = [13..15] = 0x0000e000 */
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
} __attribute__((aligned(4))) DMA_MESR_t_nonv;

typedef volatile DMA_MESR_t_nonv DMA_MESR_t;

/********************** DMA_OCDSR_t *************************/
/*
   DMA_OCDSR             "OCDS Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int BTRC0:2;             /*  = [0..1] = 0x00000003 */
      unsigned int BCHS0:3;             /*  = [2..4] = 0x0000001c */
      unsigned int BRL0:1;              /*  = [5..5] = 0x00000020 */
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
} __attribute__((aligned(4))) DMA_OCDSR_t_nonv;

typedef volatile DMA_OCDSR_t_nonv DMA_OCDSR_t;

/********************** DMA_STREQ_t *************************/
/*
   DMA_STREQ             "Software Transaction Request Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SCH00:1;             /*  = [0..0] = 0x00000001 */
      unsigned int SCH01:1;             /*  = [1..1] = 0x00000002 */
      unsigned int SCH02:1;             /*  = [2..2] = 0x00000004 */
      unsigned int SCH03:1;             /*  = [3..3] = 0x00000008 */
      unsigned int SCH04:1;             /*  = [4..4] = 0x00000010 */
      unsigned int SCH05:1;             /*  = [5..5] = 0x00000020 */
      unsigned int SCH06:1;             /*  = [6..6] = 0x00000040 */
      unsigned int SCH07:1;             /*  = [7..7] = 0x00000080 */
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
} __attribute__((aligned(4))) DMA_STREQ_t_nonv;

typedef volatile DMA_STREQ_t_nonv DMA_STREQ_t;

/********************** DMA_SUSPMR_t *************************/
/*
   DMA_SUSPMR            "Suspend Mode Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SUSEN00:1;           /*  = [0..0] = 0x00000001 */
      unsigned int SUSEN01:1;           /*  = [1..1] = 0x00000002 */
      unsigned int SUSEN02:1;           /*  = [2..2] = 0x00000004 */
      unsigned int SUSEN03:1;           /*  = [3..3] = 0x00000008 */
      unsigned int SUSEN04:1;           /*  = [4..4] = 0x00000010 */
      unsigned int SUSEN05:1;           /*  = [5..5] = 0x00000020 */
      unsigned int SUSEN06:1;           /*  = [6..6] = 0x00000040 */
      unsigned int SUSEN07:1;           /*  = [7..7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int SUSAC00:1;           /*  = [16..16] = 0x00010000 */
      unsigned int SUSAC01:1;           /*  = [17..17] = 0x00020000 */
      unsigned int SUSAC02:1;           /*  = [18..18] = 0x00040000 */
      unsigned int SUSAC03:1;           /*  = [19..19] = 0x00080000 */
      unsigned int SUSAC04:1;           /*  = [20..20] = 0x00100000 */
      unsigned int SUSAC05:1;           /*  = [21..21] = 0x00200000 */
      unsigned int SUSAC06:1;           /*  = [22..22] = 0x00400000 */
      unsigned int SUSAC07:1;           /*  = [23..23] = 0x00800000 */
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
} __attribute__((aligned(4))) DMA_SUSPMR_t_nonv;

typedef volatile DMA_SUSPMR_t_nonv DMA_SUSPMR_t;

/********************** DMA_TOCTR_t *************************/
/*
   DMA_TOCTR             "DMA Bus Time-Out Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TOUT:16;             /*  = [0..15] = 0x0000ffff */
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
} __attribute__((aligned(4))) DMA_TOCTR_t_nonv;

typedef volatile DMA_TOCTR_t_nonv DMA_TOCTR_t;

/********************** DMA_TRSR_t *************************/
/*
   DMA_TRSR              "Transaction Request State Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CH00:1;              /*  = [0..0] = 0x00000001 */
      unsigned int CH01:1;              /*  = [1..1] = 0x00000002 */
      unsigned int CH02:1;              /*  = [2..2] = 0x00000004 */
      unsigned int CH03:1;              /*  = [3..3] = 0x00000008 */
      unsigned int CH04:1;              /*  = [4..4] = 0x00000010 */
      unsigned int CH05:1;              /*  = [5..5] = 0x00000020 */
      unsigned int CH06:1;              /*  = [6..6] = 0x00000040 */
      unsigned int CH07:1;              /*  = [7..7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int HTRE00:1;            /*  = [16..16] = 0x00010000 */
      unsigned int HTRE01:1;            /*  = [17..17] = 0x00020000 */
      unsigned int HTRE02:1;            /*  = [18..18] = 0x00040000 */
      unsigned int HTRE03:1;            /*  = [19..19] = 0x00080000 */
      unsigned int HTRE04:1;            /*  = [20..20] = 0x00100000 */
      unsigned int HTRE05:1;            /*  = [21..21] = 0x00200000 */
      unsigned int HTRE06:1;            /*  = [22..22] = 0x00400000 */
      unsigned int HTRE07:1;            /*  = [23..23] = 0x00800000 */
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
} __attribute__((aligned(4))) DMA_TRSR_t_nonv;

typedef volatile DMA_TRSR_t_nonv DMA_TRSR_t;

/********************** DMA_WRPSR_t *************************/
/*
   DMA_WRPSR             "Wrap Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int WRPS00:1;            /*  = [0..0] = 0x00000001 */
      unsigned int WRPS01:1;            /*  = [1..1] = 0x00000002 */
      unsigned int WRPS02:1;            /*  = [2..2] = 0x00000004 */
      unsigned int WRPS03:1;            /*  = [3..3] = 0x00000008 */
      unsigned int WRPS04:1;            /*  = [4..4] = 0x00000010 */
      unsigned int WRPS05:1;            /*  = [5..5] = 0x00000020 */
      unsigned int WRPS06:1;            /*  = [6..6] = 0x00000040 */
      unsigned int WRPS07:1;            /*  = [7..7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int WRPD00:1;            /*  = [16..16] = 0x00010000 */
      unsigned int WRPD01:1;            /*  = [17..17] = 0x00020000 */
      unsigned int WRPD02:1;            /*  = [18..18] = 0x00040000 */
      unsigned int WRPD03:1;            /*  = [19..19] = 0x00080000 */
      unsigned int WRPD04:1;            /*  = [20..20] = 0x00100000 */
      unsigned int WRPD05:1;            /*  = [21..21] = 0x00200000 */
      unsigned int WRPD06:1;            /*  = [22..22] = 0x00400000 */
      unsigned int WRPD07:1;            /*  = [23..23] = 0x00800000 */
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
} __attribute__((aligned(4))) DMA_WRPSR_t_nonv;

typedef volatile DMA_WRPSR_t_nonv DMA_WRPSR_t;


#endif /* _HAVE_TRICORE_DMA_TYPES_H_ */

