/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_P0_18_SHARETYPES_H_
#define _HAVE_TRICORE_P0_18_SHARETYPES_H_


/********************** Pn_ESR_t *************************/
/*
   P0_ESR                "Port 0 Emergency Stop Register"
   P13_ESR               "Port 13 Emergency Stop Register"
   P14_ESR               "Port 14 Emergency Stop Register"
   P1_ESR                "Port 1 Emergency Stop Register"
   P2_ESR                "Port 2 Emergency Stop Register"
   P3_ESR                "Port 3 Emergency Stop Register"
   P4_ESR                "Port 4 Emergency Stop Register"
   P5_ESR                "Port 5 Emergency Stop Register"
   P8_ESR                "Port 8 Emergency Stop Register"
   P9_ESR                "Port 9 Emergency Stop Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int EN0:1;               /*  = [0] = 0x00000001 */
      unsigned int EN1:1;               /*  = [1] = 0x00000002 */
      unsigned int EN2:1;               /*  = [2] = 0x00000004 */
      unsigned int EN3:1;               /*  = [3] = 0x00000008 */
      unsigned int EN4:1;               /*  = [4] = 0x00000010 */
      unsigned int EN5:1;               /*  = [5] = 0x00000020 */
      unsigned int EN6:1;               /*  = [6] = 0x00000040 */
      unsigned int EN7:1;               /*  = [7] = 0x00000080 */
      unsigned int EN8:1;               /*  = [8] = 0x00000100 */
      unsigned int EN9:1;               /*  = [9] = 0x00000200 */
      unsigned int EN10:1;              /*  = [10] = 0x00000400 */
      unsigned int EN11:1;              /*  = [11] = 0x00000800 */
      unsigned int EN12:1;              /*  = [12] = 0x00001000 */
      unsigned int EN13:1;              /*  = [13] = 0x00002000 */
      unsigned int EN14:1;              /*  = [14] = 0x00004000 */
      unsigned int EN15:1;              /*  = [15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) Pn_ESR_t_nonv;

typedef volatile Pn_ESR_t_nonv Pn_ESR_t;

/********************** Pn_IN_t *************************/
/*
   P0_IN                 "Port 0 Input Register"
   P10_IN                "Port 10 Input Register"
   P11_IN                "Port 11 Input Register"
   P12_IN                "Port 12 Input Register"
   P13_IN                "Port 13 Input Register"
   P14_IN                "Port 14 Input Register"
   P15_IN                "Port 15 Input Register"
   P16_IN                "Port 16 Input Register"
   P17_IN                "Port 17 Input Register"
   P18_IN                "Port 18 Input Register"
   P1_IN                 "Port 1 Input Register"
   P2_IN                 "Port 2 Input Register"
   P3_IN                 "Port 3 Input Register"
   P4_IN                 "Port 4 Input Register"
   P5_IN                 "Port 5 Input Register"
   P6_IN                 "Port 6 Input Register"
   P7_IN                 "Port 7 Input Register"
   P8_IN                 "Port 8 Input Register"
   P9_IN                 "Port 9 Input Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int P0:1;                /*  = [0] = 0x00000001 */
      unsigned int P1:1;                /*  = [1] = 0x00000002 */
      unsigned int P2:1;                /*  = [2] = 0x00000004 */
      unsigned int P3:1;                /*  = [3] = 0x00000008 */
      unsigned int P4:1;                /*  = [4] = 0x00000010 */
      unsigned int P5:1;                /*  = [5] = 0x00000020 */
      unsigned int P6:1;                /*  = [6] = 0x00000040 */
      unsigned int P7:1;                /*  = [7] = 0x00000080 */
      unsigned int P8:1;                /*  = [8] = 0x00000100 */
      unsigned int P9:1;                /*  = [9] = 0x00000200 */
      unsigned int P10:1;               /*  = [10] = 0x00000400 */
      unsigned int P11:1;               /*  = [11] = 0x00000800 */
      unsigned int P12:1;               /*  = [12] = 0x00001000 */
      unsigned int P13:1;               /*  = [13] = 0x00002000 */
      unsigned int P14:1;               /*  = [14] = 0x00004000 */
      unsigned int P15:1;               /*  = [15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
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
   P10_IOCR0             "Port 10 Input/Output Control Register 0"
   P10_IOCR4             "Port 10 Input/Output Control Register 4"
   P11_IOCR0             "Port 11 Input/Output Control Register 0"
   P11_IOCR12            "Port 11 Input/Output Control Register 12"
   P11_IOCR4             "Port 11 Input/Output Control Register 4"
   P11_IOCR8             "Port 11Input/Output Control Register 8"
   P12_IOCR0             "Port 12 Input/Output Control Register 0"
   P12_IOCR4             "Port 12 Input/Output Control Register 4"
   P13_IOCR0             "Port 13 Input/Output Control Register 0"
   P13_IOCR12            "Port 13 Input/Output Control Register 12"
   P13_IOCR4             "Port 13 Input/Output Control Register 4"
   P13_IOCR8             "Port 13 Input/Output Control Register 8"
   P14_IOCR0             "Port 14 Input/Output Control Register 0"
   P14_IOCR12            "Port 14 Input/Output Control Register 12"
   P14_IOCR4             "Port 14 Input/Output Control Register 4"
   P14_IOCR8             "Port 14 Input/Output Control Register 8"
   P15_IOCR0             "Port 15 Input/Output Control Register 0"
   P15_IOCR12            "Port 15 Input/Output Control Register 12"
   P15_IOCR4             "Port 15 Input/Output Control Register 4"
   P15_IOCR8             "Port 15 Input/Output Control Register 8"
   P16_IOCR0             "Port 16 Input/Output Control Register 0"
   P16_IOCR4             "Port 16 Input/Output Control Register 4"
   P16_IOCR8             "Port 16 Input/Output Control Register 8"
   P17_IOCR0             "Port 17 Input/Output Control Register 0"
   P17_IOCR12            "Port 17 Input/Output Control Register 12"
   P17_IOCR4             "Port 17 Input/Output Control Register 4"
   P17_IOCR8             "Port 17 Input/Output Control Register 8"
   P18_IOCR0             "Port 18 Input/Output Control Register 0"
   P18_IOCR4             "Port 18 Input/Output Control Register 4"
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
   P5_IOCR12             "Port 5 Input/Output Control Register 12"
   P5_IOCR4              "Port 5 Input/Output Control Register 4"
   P5_IOCR8              "Port 5 Input/Output Control Register 8"
   P6_IOCR0              "Port 6 Input/Output Control Register 0"
   P6_IOCR12             "Port 6 Input/Output Control Register 12"
   P6_IOCR4              "Port 6 Input/Output Control Register 4"
   P6_IOCR8              "Port 6 Input/Output Control Register 8"
   P7_IOCR0              "Port 7 Input/Output Control Register 0"
   P7_IOCR4              "Port 7 Input/Output Control Register 4"
   P8_IOCR0              "Port 8 Input/Output Control Register 0"
   P8_IOCR4              "Port 8 Input/Output Control Register 4"
   P9_IOCR0              "Port 9 Input/Output Control Register 0"
   P9_IOCR4              "Port 9 Input/Output Control Register 4"
   P9_IOCR8              "Port 9 Input/Output Control Register 8"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3] = 0x00000008 */
      unsigned int PC0:4;               /*  = [4..7] = 0x000000f0 */
      unsigned int _bit8:1;             /* 0 = [8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int PC1:4;               /*  = [12..15] = 0x0000f000 */
      unsigned int _bit16:1;            /* 0 = [16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int PC2:4;               /*  = [20..23] = 0x00f00000 */
      unsigned int _bit24:1;            /* 0 = [24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int PC3:4;               /*  = [28..31] = 0xf0000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) Pn_IOCRm_t_nonv;

typedef volatile Pn_IOCRm_t_nonv Pn_IOCRm_t;

/********************** Pn_OMR_t *************************/
/*
   P0_OMR                "Port 0 Output Modification Register"
   P10_OMR               "Port 10 Output Modification Register"
   P11_OMR               "Port 11 Output Modification Register"
   P12_OMR               "Port 12 Output Modification Register"
   P13_OMR               "Port 13 Output Modification Register"
   P14_OMR               "Port 14 Output Modification Register"
   P15_OMR               "Port 15 Output Modification Register"
   P16_OMR               "Port 16 Output Modification Register"
   P18_OMR               "Port 18 Output Modification Register"
   P1_OMR                "Port 1 Output Modification Register"
   P2_OMR                "Port 2 Output Modification Register"
   P3_OMR                "Port 3 Output Modification Register"
   P4_OMR                "Port 4 Output Modification Register"
   P5_OMR                "Port 5 Output Modification Register"
   P6_OMR                "Port 6 Output Modification Register"
   P7_OMR                "Port 7 Output Modification Register"
   P8_OMR                "Port 8 Output Modification Register"
   P9_OMR                "Port 9 Output Modification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int PS0:1;               /*  = [0] = 0x00000001 */
      unsigned int PS1:1;               /*  = [1] = 0x00000002 */
      unsigned int PS2:1;               /*  = [2] = 0x00000004 */
      unsigned int PS3:1;               /*  = [3] = 0x00000008 */
      unsigned int PS4:1;               /*  = [4] = 0x00000010 */
      unsigned int PS5:1;               /*  = [5] = 0x00000020 */
      unsigned int PS6:1;               /*  = [6] = 0x00000040 */
      unsigned int PS7:1;               /*  = [7] = 0x00000080 */
      unsigned int PS8:1;               /*  = [8] = 0x00000100 */
      unsigned int PS9:1;               /*  = [9] = 0x00000200 */
      unsigned int PS10:1;              /*  = [10] = 0x00000400 */
      unsigned int PS11:1;              /*  = [11] = 0x00000800 */
      unsigned int PS12:1;              /*  = [12] = 0x00001000 */
      unsigned int PS13:1;              /*  = [13] = 0x00002000 */
      unsigned int PS14:1;              /*  = [14] = 0x00004000 */
      unsigned int PS15:1;              /*  = [15] = 0x00008000 */
      unsigned int PR0:1;               /*  = [16] = 0x00010000 */
      unsigned int PR1:1;               /*  = [17] = 0x00020000 */
      unsigned int PR2:1;               /*  = [18] = 0x00040000 */
      unsigned int PR3:1;               /*  = [19] = 0x00080000 */
      unsigned int PR4:1;               /*  = [20] = 0x00100000 */
      unsigned int PR5:1;               /*  = [21] = 0x00200000 */
      unsigned int PR6:1;               /*  = [22] = 0x00400000 */
      unsigned int PR7:1;               /*  = [23] = 0x00800000 */
      unsigned int PR8:1;               /*  = [24] = 0x01000000 */
      unsigned int PR9:1;               /*  = [25] = 0x02000000 */
      unsigned int PR10:1;              /*  = [26] = 0x04000000 */
      unsigned int PR11:1;              /*  = [27] = 0x08000000 */
      unsigned int PR12:1;              /*  = [28] = 0x10000000 */
      unsigned int PR13:1;              /*  = [29] = 0x20000000 */
      unsigned int PR14:1;              /*  = [30] = 0x40000000 */
      unsigned int PR15:1;              /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) Pn_OMR_t_nonv;

typedef volatile Pn_OMR_t_nonv Pn_OMR_t;

/********************** Pn_OUT_t *************************/
/*
   P0_OUT                "Port 0 Output Register"
   P10_OUT               "Port 10 Output Register"
   P11_OUT               "Port 11 Output Register"
   P12_OUT               "Port 12 Output Register"
   P13_OUT               "Port 13 Output Register"
   P14_OUT               "Port 14 Output Register"
   P15_OUT               "Port 15 Output Register"
   P16_OUT               "Port 16 Output Register"
   P18_OUT               "Port 18 Output Register"
   P1_OUT                "Port 1 Output Register"
   P2_OUT                "Port 2 Output Register"
   P3_OUT                "Port 3 Output Register"
   P4_OUT                "Port 4 Output Register"
   P5_OUT                "Port 5 Output Register"
   P6_OUT                "Port 6 Output Register"
   P7_OUT                "Port 7 Output Register"
   P8_OUT                "Port 8 Output Register"
   P9_OUT                "Port 9 Output Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int P0:1;                /*  = [0] = 0x00000001 */
      unsigned int P1:1;                /*  = [1] = 0x00000002 */
      unsigned int P2:1;                /*  = [2] = 0x00000004 */
      unsigned int P3:1;                /*  = [3] = 0x00000008 */
      unsigned int P4:1;                /*  = [4] = 0x00000010 */
      unsigned int P5:1;                /*  = [5] = 0x00000020 */
      unsigned int P6:1;                /*  = [6] = 0x00000040 */
      unsigned int P7:1;                /*  = [7] = 0x00000080 */
      unsigned int P8:1;                /*  = [8] = 0x00000100 */
      unsigned int P9:1;                /*  = [9] = 0x00000200 */
      unsigned int P10:1;               /*  = [10] = 0x00000400 */
      unsigned int P11:1;               /*  = [11] = 0x00000800 */
      unsigned int P12:1;               /*  = [12] = 0x00001000 */
      unsigned int P13:1;               /*  = [13] = 0x00002000 */
      unsigned int P14:1;               /*  = [14] = 0x00004000 */
      unsigned int P15:1;               /*  = [15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) Pn_OUT_t_nonv;

typedef volatile Pn_OUT_t_nonv Pn_OUT_t;

/********************** Pn_PDRm_t *************************/
/*
   P0_PDR0               "Port 0 Pad Driver Mode 0 Register"
   P0_PDR1               "Port 0 Pad Driver Mode 1 Register"
   P11_PDR0              "Port 11 Pad Driver Mode 0 Register"
   P11_PDR1              "Port 11 Pad Driver Mode 1 Register"
   P12_PDR0              "Port 12 Pad Driver Mode 0 Register"
   P13_PDR0              "Port 13 Pad Driver Mode 0 Register"
   P13_PDR1              "Port 13 Pad Driver Mode 1 Register"
   P14_PDR0              "Port 14 Pad Driver Mode 0 Register"
   P14_PDR1              "Port 14 Pad Driver Mode 1 Register"
   P15_PDR0              "Port 15 Pad Driver Mode 0 Register"
   P15_PDR1              "Port 15 Pad Driver Mode 1 Register"
   P16_PDR0              "Port 16 Pad Driver Mode 0 Register"
   P18_PDR0              "Port 18 Pad Driver Mode 0 Register"
   P1_PDR0               "Port 1 Pad Driver Mode 0 Register"
   P1_PDR1               "Port 1 Pad Driver Mode 1 Register"
   P2_PDR1               "Port 2 Pad Driver Mode 1 Register"
   P3_PDR0               "Port 3 Pad Driver Mode 0 Register"
   P3_PDR1               "Port 3 Pad Driver Mode 1 Register"
   P4_PDR0               "Port 4 Pad Driver Mode 0 Register"
   P4_PDR1               "Port 4 Pad Driver Mode 1 Register"
   P5_PDR0               "Port 5 Pad Driver Mode 0 Register"
   P5_PDR1               "Port 5 Pad Driver Mode 1 Register"
   P6_PDR1               "Port 6 Pad Driver Mode 1 Register"
   P7_PDR0               "Port 7 Pad Driver Mode 0 Register"
   P8_PDR0               "Port 8 Pad Driver Mode 0 Register"
   P8_PDR1               "Port 8 Pad Driver Mode 1 Register"
   P9_PDR0               "Port 9 Pad Driver Mode 0 Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int PD0:3;               /*  = [0..2] = 0x00000007 */
      unsigned int _bit3:1;             /* 0 = [3] = 0x00000008 */
      unsigned int PD1:3;               /*  = [4..6] = 0x00000070 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int PD2:3;               /*  = [8..10] = 0x00000700 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int PD3:3;               /*  = [12..14] = 0x00007000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int PD4:3;               /*  = [16..18] = 0x00070000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int PD5:3;               /*  = [20..22] = 0x00700000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int PD6:3;               /*  = [24..26] = 0x07000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int PD7:3;               /*  = [28..30] = 0x70000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) Pn_PDRm_t_nonv;

typedef volatile Pn_PDRm_t_nonv Pn_PDRm_t;


#endif /* _HAVE_TRICORE_P0_18_SHARETYPES_H_ */

