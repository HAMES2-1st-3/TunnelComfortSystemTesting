/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_P0_P1_P2_P3_SHARETYPES_H_
#define _HAVE_TRICORE_P0_P1_P2_P3_SHARETYPES_H_


/********************** Pn_ALTSELm_t *************************/
/*
   P0_ALTSEL0            "Port 0 Alternate Select Register 0"
   P0_ALTSEL1            "Port 0 Alternate Select Register 1"
   P1_ALTSEL0            "Port 1 Alternate Select Register 0"
   P1_ALTSEL1            "Port 1 Alternate Select Register 1"
   P2_ALTSEL0            "Port 2 Alternate Select Register 0"
   P2_ALTSEL1            "Port 2 Alternate Select Register 1"
   P3_ALTSEL0            "Port 3 Alternate Select Register 0"
   P3_ALTSEL1            "Port 3 Alternate Select Register 1"
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
      unsigned int P8:1;                /*  = [8..8] = 0x00000100 */
      unsigned int P9:1;                /*  = [9..9] = 0x00000200 */
      unsigned int P10:1;               /*  = [10..10] = 0x00000400 */
      unsigned int P11:1;               /*  = [11..11] = 0x00000800 */
      unsigned int P12:1;               /*  = [12..12] = 0x00001000 */
      unsigned int P13:1;               /*  = [13..13] = 0x00002000 */
      unsigned int P14:1;               /*  = [14..14] = 0x00004000 */
      unsigned int P15:1;               /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) Pn_ALTSELm_t_nonv;

typedef volatile Pn_ALTSELm_t_nonv Pn_ALTSELm_t;

/********************** Pn_DIR_t *************************/
/*
   P0_DIR                "Port 0 Direction Register"
   P1_DIR                "Port 1 Direction Register"
   P2_DIR                "Port 2 Direction Register"
   P3_DIR                "Port 3 Direction Register"
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
      unsigned int P8:1;                /*  = [8..8] = 0x00000100 */
      unsigned int P9:1;                /*  = [9..9] = 0x00000200 */
      unsigned int P10:1;               /*  = [10..10] = 0x00000400 */
      unsigned int P11:1;               /*  = [11..11] = 0x00000800 */
      unsigned int P12:1;               /*  = [12..12] = 0x00001000 */
      unsigned int P13:1;               /*  = [13..13] = 0x00002000 */
      unsigned int P14:1;               /*  = [14..14] = 0x00004000 */
      unsigned int P15:1;               /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) Pn_DIR_t_nonv;

typedef volatile Pn_DIR_t_nonv Pn_DIR_t;

/********************** Pn_IN_t *************************/
/*
   P0_IN                 "Port 0 Data Input Register"
   P1_IN                 "Port 1 Data Input Register"
   P2_IN                 "Port 2 Data Input Register"
   P3_IN                 "Port 3 Data Input Register"
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
      unsigned int P8:1;                /*  = [8..8] = 0x00000100 */
      unsigned int P9:1;                /*  = [9..9] = 0x00000200 */
      unsigned int P10:1;               /*  = [10..10] = 0x00000400 */
      unsigned int P11:1;               /*  = [11..11] = 0x00000800 */
      unsigned int P12:1;               /*  = [12..12] = 0x00001000 */
      unsigned int P13:1;               /*  = [13..13] = 0x00002000 */
      unsigned int P14:1;               /*  = [14..14] = 0x00004000 */
      unsigned int P15:1;               /*  = [15..15] = 0x00008000 */
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

/********************** Pn_OD_t *************************/
/*
   P0_OD                 "Port 0 Open Drain Mode Register"
   P1_OD                 "Port 1 Open Drain Mode Register"
   P2_OD                 "Port 2 Open Drain Mode Register"
   P3_OD                 "Port 3 Open Drain Mode Register"
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
      unsigned int P8:1;                /*  = [8..8] = 0x00000100 */
      unsigned int P9:1;                /*  = [9..9] = 0x00000200 */
      unsigned int P10:1;               /*  = [10..10] = 0x00000400 */
      unsigned int P11:1;               /*  = [11..11] = 0x00000800 */
      unsigned int P12:1;               /*  = [12..12] = 0x00001000 */
      unsigned int P13:1;               /*  = [13..13] = 0x00002000 */
      unsigned int P14:1;               /*  = [14..14] = 0x00004000 */
      unsigned int P15:1;               /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) Pn_OD_t_nonv;

typedef volatile Pn_OD_t_nonv Pn_OD_t;

/********************** Pn_OUT_t *************************/
/*
   P0_OUT                "Port 0 Data Output Register"
   P1_OUT                "Port 1 Data Output Register"
   P2_OUT                "Port 2 Data Output Register"
   P3_OUT                "Port 3 Data Output Register"
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
      unsigned int P8:1;                /*  = [8..8] = 0x00000100 */
      unsigned int P9:1;                /*  = [9..9] = 0x00000200 */
      unsigned int P10:1;               /*  = [10..10] = 0x00000400 */
      unsigned int P11:1;               /*  = [11..11] = 0x00000800 */
      unsigned int P12:1;               /*  = [12..12] = 0x00001000 */
      unsigned int P13:1;               /*  = [13..13] = 0x00002000 */
      unsigned int P14:1;               /*  = [14..14] = 0x00004000 */
      unsigned int P15:1;               /*  = [15..15] = 0x00008000 */
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

/********************** Pn_PUDEN_t *************************/
/*
   P0_PUDEN              "Port 0 Pull up/down Enable Register"
   P1_PUDEN              "Port 1 Pull up/down Enable Register"
   P2_PUDEN              "Port 2 Pull up/down Enable Register"
   P3_PUDEN              "Port 3 Pull up/down Enable Register"
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
      unsigned int P8:1;                /*  = [8..8] = 0x00000100 */
      unsigned int P9:1;                /*  = [9..9] = 0x00000200 */
      unsigned int P10:1;               /*  = [10..10] = 0x00000400 */
      unsigned int P11:1;               /*  = [11..11] = 0x00000800 */
      unsigned int P12:1;               /*  = [12..12] = 0x00001000 */
      unsigned int P13:1;               /*  = [13..13] = 0x00002000 */
      unsigned int P14:1;               /*  = [14..14] = 0x00004000 */
      unsigned int P15:1;               /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) Pn_PUDEN_t_nonv;

typedef volatile Pn_PUDEN_t_nonv Pn_PUDEN_t;

/********************** Pn_PUDSEL_t *************************/
/*
   P0_PUDSEL             "Port 0 Pull up/down Select Register"
   P1_PUDSEL             "Port 1 Pull up/down Select Register"
   P2_PUDSEL             "Port 2 Pull up/down Select Register"
   P3_PUDSEL             "Port 3 Pull up/down Select Register"
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
      unsigned int P8:1;                /*  = [8..8] = 0x00000100 */
      unsigned int P9:1;                /*  = [9..9] = 0x00000200 */
      unsigned int P10:1;               /*  = [10..10] = 0x00000400 */
      unsigned int P11:1;               /*  = [11..11] = 0x00000800 */
      unsigned int P12:1;               /*  = [12..12] = 0x00001000 */
      unsigned int P13:1;               /*  = [13..13] = 0x00002000 */
      unsigned int P14:1;               /*  = [14..14] = 0x00004000 */
      unsigned int P15:1;               /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) Pn_PUDSEL_t_nonv;

typedef volatile Pn_PUDSEL_t_nonv Pn_PUDSEL_t;


#endif /* _HAVE_TRICORE_P0_P1_P2_P3_SHARETYPES_H_ */

