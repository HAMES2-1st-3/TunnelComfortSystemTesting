/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_P0_P1_P2_P3_P4_P5_P6_P7_P8_P9_SHARETYPES_H_
#define _HAVE_TRICORE_P0_P1_P2_P3_P4_P5_P6_P7_P8_P9_SHARETYPES_H_


/********************** Pn_ESR_t *************************/
/*
   P3_ESR                "Port 3 Emergency Stop Register"
   P4_ESR                "Port 4 Emergency Stop Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int EN0:1;               /*  = [0..0] = 0x00000001 */
      unsigned int EN1:1;               /*  = [1..1] = 0x00000002 */
      unsigned int EN2:1;               /*  = [2..2] = 0x00000004 */
      unsigned int EN3:1;               /*  = [3..3] = 0x00000008 */
      unsigned int EN4:1;               /*  = [4..4] = 0x00000010 */
      unsigned int EN5:1;               /*  = [5..5] = 0x00000020 */
      unsigned int EN6:1;               /*  = [6..6] = 0x00000040 */
      unsigned int EN7:1;               /*  = [7..7] = 0x00000080 */
      unsigned int EN8:1;               /*  = [8..8] = 0x00000100 */
      unsigned int EN9:1;               /*  = [9..9] = 0x00000200 */
      unsigned int EN10:1;              /*  = [10..10] = 0x00000400 */
      unsigned int EN11:1;              /*  = [11..11] = 0x00000800 */
      unsigned int EN12:1;              /*  = [12..12] = 0x00001000 */
      unsigned int EN13:1;              /*  = [13..13] = 0x00002000 */
      unsigned int EN14:1;              /*  = [14..14] = 0x00004000 */
      unsigned int EN15:1;              /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) Pn_ESR_t_nonv;

typedef volatile Pn_ESR_t_nonv Pn_ESR_t;

/********************** Pn_IN_t *************************/
/*
   P5_IN                 "Port 5 Input Register"
   P7_IN                 "Port 7 Input Register"
   P8_IN                 "Port 8 Input Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int P0:1;                /*  = [0..0] = 0x00000001 */
      unsigned int P1:1;                /*  = [1..1] = 0x00000002 */
      unsigned int P2:1;                /*  = [2..2] = 0x00000004 */
      unsigned int P3:1;                /*  = [3..3] = 0x00000008 */
      unsigned int P4:1;                /*  = [4..4] = 0x00000010 */
      unsigned int P5:1;                /*  = [5..5] = 0x00000020 */
      unsigned int P6:1;                /*  = [6..6] = 0x00000040 */
      unsigned int P7:1;                /*  = [7..7] = 0x00000080 */
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
} __attribute__((aligned(4))) Pn_IN_t_nonv;

typedef volatile Pn_IN_t_nonv Pn_IN_t;

/********************** Pn_IOCRm_t *************************/
/*
   P0_IOCR0              "Port 0 Input/Output Control Register 0"
   P0_IOCR12             "Port 0 Input/Output Control Register 12"
   P0_IOCR4              "Port 0 Input/Output Control Register 4"
   P0_IOCR8              "Port 0 Input/Output Control Register 8"
   P1_IOCR0              "Port 1 Input/Output Control Register 0"
   P1_IOCR12             "Port 1 Input/Output Control Register 12"
   P1_IOCR4              "Port 1 Input/Output Control Register 4"
   P1_IOCR8              "Port 1 Input/Output Control Register 8"
   P2_IOCR12             "Port 2 Input/Output Control Register 12"
   P2_IOCR4              "Port 2 Input/Output Control Register 4"
   P2_IOCR8              "Port 2 Input/Output Control Register 8"
   P3_IOCR0              "Port 3 Input/Output Control Register 0"
   P3_IOCR12             "Port 3 Input/Output Control Register 12"
   P3_IOCR4              "Port 3 Input/Output Control Register 4"
   P3_IOCR8              "Port 3 Input/Output Control Register 8"
   P4_IOCR0              "Port 4 Input/Output Control Register 0"
   P4_IOCR12             "Port 4 Input/Output Control Register 12"
   P4_IOCR4              "Port 4 Input/Output Control Register 4"
   P4_IOCR8              "Port 4 Input/Output Control Register 8"
   P5_IOCR0              "Port 5 Input/Output Control Register 0"
   P5_IOCR4              "Port 5 Input/Output Control Register 4"
   P6_IOCR12             "Port 6 Input/Output Control Register 12"
   P6_IOCR4              "Port 6 Input/Output Control Register 4"
   P6_IOCR8              "Port 6 Input/Output Control Register 8"
   P7_IOCR0              "Port 7 Input/Output Control Register 0"
   P7_IOCR4              "Port 7 Input/Output Control Register 4"
   P8_IOCR0              "Port 8 Input/Output Control Register 0"
   P8_IOCR4              "Port 8 Input/Output Control Register 4"
   P9_IOCR0              "Port 9 Input/Output Control Register 0"
   P9_IOCR4              "Port 9 Input/Output Control Register 4"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0..0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1..1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int PC0:4;               /*  = [4..7] = 0x000000f0 */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int PC1:4;               /*  = [12..15] = 0x0000f000 */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int PC2:4;               /*  = [20..23] = 0x00f00000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int PC3:4;               /*  = [28..31] = 0xf0000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) Pn_IOCRm_t_nonv;

typedef volatile Pn_IOCRm_t_nonv Pn_IOCRm_t;

/********************** Pn_OMR_t *************************/
/*
   P0_OMR                "Port 0 Output Modification Register"
   P1_OMR                "Port 1 Output Modification Register"
   P2_OMR                "Port 2 Output Modification Register"
   P3_OMR                "Port 3 Output Modification Register"
   P4_OMR                "Port 4 Output Modification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int PS0:1;               /*  = [0..0] = 0x00000001 */
      unsigned int PS1:1;               /*  = [1..1] = 0x00000002 */
      unsigned int PS2:1;               /*  = [2..2] = 0x00000004 */
      unsigned int PS3:1;               /*  = [3..3] = 0x00000008 */
      unsigned int PS4:1;               /*  = [4..4] = 0x00000010 */
      unsigned int PS5:1;               /*  = [5..5] = 0x00000020 */
      unsigned int PS6:1;               /*  = [6..6] = 0x00000040 */
      unsigned int PS7:1;               /*  = [7..7] = 0x00000080 */
      unsigned int PS8:1;               /*  = [8..8] = 0x00000100 */
      unsigned int PS9:1;               /*  = [9..9] = 0x00000200 */
      unsigned int PS10:1;              /*  = [10..10] = 0x00000400 */
      unsigned int PS11:1;              /*  = [11..11] = 0x00000800 */
      unsigned int PS12:1;              /*  = [12..12] = 0x00001000 */
      unsigned int PS13:1;              /*  = [13..13] = 0x00002000 */
      unsigned int PS14:1;              /*  = [14..14] = 0x00004000 */
      unsigned int PS15:1;              /*  = [15..15] = 0x00008000 */
      unsigned int PR0:1;               /*  = [16..16] = 0x00010000 */
      unsigned int PR1:1;               /*  = [17..17] = 0x00020000 */
      unsigned int PR2:1;               /*  = [18..18] = 0x00040000 */
      unsigned int PR3:1;               /*  = [19..19] = 0x00080000 */
      unsigned int PR4:1;               /*  = [20..20] = 0x00100000 */
      unsigned int PR5:1;               /*  = [21..21] = 0x00200000 */
      unsigned int PR6:1;               /*  = [22..22] = 0x00400000 */
      unsigned int PR7:1;               /*  = [23..23] = 0x00800000 */
      unsigned int PR8:1;               /*  = [24..24] = 0x01000000 */
      unsigned int PR9:1;               /*  = [25..25] = 0x02000000 */
      unsigned int PR10:1;              /*  = [26..26] = 0x04000000 */
      unsigned int PR11:1;              /*  = [27..27] = 0x08000000 */
      unsigned int PR12:1;              /*  = [28..28] = 0x10000000 */
      unsigned int PR13:1;              /*  = [29..29] = 0x20000000 */
      unsigned int PR14:1;              /*  = [30..30] = 0x40000000 */
      unsigned int PR15:1;              /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) Pn_OMR_t_nonv;

typedef volatile Pn_OMR_t_nonv Pn_OMR_t;

/********************** Pn_OUT_t *************************/
/*
   P5_OUT                "Port 5 Output Register"
   P7_OUT                "Port 7 Output Register"
   P8_OUT                "Port 8 Output Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int P0:1;                /*  = [0..0] = 0x00000001 */
      unsigned int P1:1;                /*  = [1..1] = 0x00000002 */
      unsigned int P2:1;                /*  = [2..2] = 0x00000004 */
      unsigned int P3:1;                /*  = [3..3] = 0x00000008 */
      unsigned int P4:1;                /*  = [4..4] = 0x00000010 */
      unsigned int P5:1;                /*  = [5..5] = 0x00000020 */
      unsigned int P6:1;                /*  = [6..6] = 0x00000040 */
      unsigned int P7:1;                /*  = [7..7] = 0x00000080 */
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
} __attribute__((aligned(4))) Pn_OUT_t_nonv;

typedef volatile Pn_OUT_t_nonv Pn_OUT_t;

/********************** Pn_PDR_t *************************/
/*
   P0_PDR                "Port 0 Pad Driver Mode Register"
   P3_PDR                "Port 3 Pad Driver Mode Register"
   P4_PDR                "Port 4 Pad Driver Mode Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int PD0:3;               /*  = [0..2] = 0x00000007 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int PD1:3;               /*  = [4..6] = 0x00000070 */
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
} __attribute__((aligned(4))) Pn_PDR_t_nonv;

typedef volatile Pn_PDR_t_nonv Pn_PDR_t;


#endif /* _HAVE_TRICORE_P0_P1_P2_P3_P4_P5_P6_P7_P8_P9_SHARETYPES_H_ */

