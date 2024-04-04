/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_GPTU_TYPES_H_
#define _HAVE_TRICORE_GPTU_TYPES_H_


/********************** GPTU_CLC_t *************************/
/*
   GPTU_CLC              "GPTU Clock Control Register"
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
      unsigned int RMC:8;               /*  = [8..15] = 0x0000ff00 */
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
} __attribute__((aligned(4))) GPTU_CLC_t_nonv;

typedef volatile GPTU_CLC_t_nonv GPTU_CLC_t;

/********************** GPTU_ID_t *************************/
/*
   GPTU_ID               "GPTU Module Identification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MOD_REV:8;           /*  = [0..7] = 0x000000ff */
      unsigned int MOD_TYPE:8;          /*  = [8..15] = 0x0000ff00 */
      unsigned int MOD_NUMBER:16;       /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) GPTU_ID_t_nonv;

typedef volatile GPTU_ID_t_nonv GPTU_ID_t;

/********************** GPTU_OSEL_t *************************/
/*
   GPTU_OSEL             "GPTU Output Source Selection Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SO0:3;               /*  = [0..2] = 0x00000007 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int SO1:3;               /*  = [4..6] = 0x00000070 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int SO2:3;               /*  = [8..10] = 0x00000700 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int SO3:3;               /*  = [12..14] = 0x00007000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int SO4:3;               /*  = [16..18] = 0x00070000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int SO5:3;               /*  = [20..22] = 0x00700000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int SO6:3;               /*  = [24..26] = 0x07000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int SO7:3;               /*  = [28..30] = 0x70000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) GPTU_OSEL_t_nonv;

typedef volatile GPTU_OSEL_t_nonv GPTU_OSEL_t;

/********************** GPTU_OUT_t *************************/
/*
   GPTU_OUT              "GPTU Output Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int OUT0:1;              /*  = [0..0] = 0x00000001 */
      unsigned int OUT1:1;              /*  = [1..1] = 0x00000002 */
      unsigned int OUT2:1;              /*  = [2..2] = 0x00000004 */
      unsigned int OUT3:1;              /*  = [3..3] = 0x00000008 */
      unsigned int OUT4:1;              /*  = [4..4] = 0x00000010 */
      unsigned int OUT5:1;              /*  = [5..5] = 0x00000020 */
      unsigned int OUT6:1;              /*  = [6..6] = 0x00000040 */
      unsigned int OUT7:1;              /*  = [7..7] = 0x00000080 */
      unsigned int CLRO0:1;             /*  = [8..8] = 0x00000100 */
      unsigned int CLRO1:1;             /*  = [9..9] = 0x00000200 */
      unsigned int CLRO2:1;             /*  = [10..10] = 0x00000400 */
      unsigned int CLRO3:1;             /*  = [11..11] = 0x00000800 */
      unsigned int CLRO4:1;             /*  = [12..12] = 0x00001000 */
      unsigned int CLRO5:1;             /*  = [13..13] = 0x00002000 */
      unsigned int CLRO6:1;             /*  = [14..14] = 0x00004000 */
      unsigned int CLRO7:1;             /*  = [15..15] = 0x00008000 */
      unsigned int SETO0:1;             /*  = [16..16] = 0x00010000 */
      unsigned int SETO1:1;             /*  = [17..17] = 0x00020000 */
      unsigned int SETO2:1;             /*  = [18..18] = 0x00040000 */
      unsigned int SETO3:1;             /*  = [19..19] = 0x00080000 */
      unsigned int SETO4:1;             /*  = [20..20] = 0x00100000 */
      unsigned int SETO5:1;             /*  = [21..21] = 0x00200000 */
      unsigned int SETO6:1;             /*  = [22..22] = 0x00400000 */
      unsigned int SETO7:1;             /*  = [23..23] = 0x00800000 */
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
} __attribute__((aligned(4))) GPTU_OUT_t_nonv;

typedef volatile GPTU_OUT_t_nonv GPTU_OUT_t;

/********************** GPTU_SRSEL_t *************************/
/*
   GPTU_SRSEL            "GPTU Service Request Source Select Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SSR7:4;              /*  = [0..3] = 0x0000000f */
      unsigned int SSR6:4;              /*  = [4..7] = 0x000000f0 */
      unsigned int SSR5:4;              /*  = [8..11] = 0x00000f00 */
      unsigned int SSR4:4;              /*  = [12..15] = 0x0000f000 */
      unsigned int SSR3:4;              /*  = [16..19] = 0x000f0000 */
      unsigned int SSR2:4;              /*  = [20..23] = 0x00f00000 */
      unsigned int SSR1:4;              /*  = [24..27] = 0x0f000000 */
      unsigned int SSR0:4;              /*  = [28..31] = 0xf0000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) GPTU_SRSEL_t_nonv;

typedef volatile GPTU_SRSEL_t_nonv GPTU_SRSEL_t;

/********************** GPTU_T012RUN_t *************************/
/*
   GPTU_T012RUN          "GPTU Timers T0, T1 and T2 Run Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int T0ARUN:1;            /*  = [0..0] = 0x00000001 */
      unsigned int T0BRUN:1;            /*  = [1..1] = 0x00000002 */
      unsigned int T0CRUN:1;            /*  = [2..2] = 0x00000004 */
      unsigned int T0DRUN:1;            /*  = [3..3] = 0x00000008 */
      unsigned int T1ARUN:1;            /*  = [4..4] = 0x00000010 */
      unsigned int T1BRUN:1;            /*  = [5..5] = 0x00000020 */
      unsigned int T1CRUN:1;            /*  = [6..6] = 0x00000040 */
      unsigned int T1DRUN:1;            /*  = [7..7] = 0x00000080 */
      unsigned int T2ARUN:1;            /*  = [8..8] = 0x00000100 */
      unsigned int T2ASETR:1;           /*  = [9..9] = 0x00000200 */
      unsigned int T2ACLRR:1;           /*  = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int T2BRUN:1;            /*  = [12..12] = 0x00001000 */
      unsigned int T2BSETR:1;           /*  = [13..13] = 0x00002000 */
      unsigned int T2BCLRR:1;           /*  = [14..14] = 0x00004000 */
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
} __attribute__((aligned(4))) GPTU_T012RUN_t_nonv;

typedef volatile GPTU_T012RUN_t_nonv GPTU_T012RUN_t;

/********************** GPTU_T01IRS_t *************************/
/*
   GPTU_T01IRS           "GPTU Timer T0 and T1 Input and Reload Source Selection Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int T0AINS:2;            /*  = [0..1] = 0x00000003 */
      unsigned int T0BINS:2;            /*  = [2..3] = 0x0000000c */
      unsigned int T0CINS:2;            /*  = [4..5] = 0x00000030 */
      unsigned int T0DINS:2;            /*  = [6..7] = 0x000000c0 */
      unsigned int T1AINS:2;            /*  = [8..9] = 0x00000300 */
      unsigned int T1BINS:2;            /*  = [10..11] = 0x00000c00 */
      unsigned int T1CINS:2;            /*  = [12..13] = 0x00003000 */
      unsigned int T1DINS:2;            /*  = [14..15] = 0x0000c000 */
      unsigned int T0AREL:1;            /*  = [16..16] = 0x00010000 */
      unsigned int T0BREL:1;            /*  = [17..17] = 0x00020000 */
      unsigned int T0CREL:1;            /*  = [18..18] = 0x00040000 */
      unsigned int T0DREL:1;            /*  = [19..19] = 0x00080000 */
      unsigned int T1AREL:1;            /*  = [20..20] = 0x00100000 */
      unsigned int T1BREL:1;            /*  = [21..21] = 0x00200000 */
      unsigned int T1CREL:1;            /*  = [22..22] = 0x00400000 */
      unsigned int T1DREL:1;            /*  = [23..23] = 0x00800000 */
      unsigned int T0INC:1;             /*  = [24..24] = 0x01000000 */
      unsigned int T1INC:1;             /*  = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int T01IN0:2;            /*  = [28..29] = 0x30000000 */
      unsigned int T01IN1:2;            /*  = [30..31] = 0xc0000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) GPTU_T01IRS_t_nonv;

typedef volatile GPTU_T01IRS_t_nonv GPTU_T01IRS_t;

/********************** GPTU_T01OTS_t *************************/
/*
   GPTU_T01OTS           "GPTU  Timer T0 and T1 Output, Trigger and Service Request Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SOUT00:2;            /*  = [0..1] = 0x00000003 */
      unsigned int SOUT01:2;            /*  = [2..3] = 0x0000000c */
      unsigned int STRG00:2;            /*  = [4..5] = 0x00000030 */
      unsigned int STRG01:2;            /*  = [6..7] = 0x000000c0 */
      unsigned int SSR00:2;             /*  = [8..9] = 0x00000300 */
      unsigned int SSR01:2;             /*  = [10..11] = 0x00000c00 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int SOUT10:2;            /*  = [16..17] = 0x00030000 */
      unsigned int SOUT11:2;            /*  = [18..19] = 0x000c0000 */
      unsigned int STRG10:2;            /*  = [20..21] = 0x00300000 */
      unsigned int STRG11:2;            /*  = [22..23] = 0x00c00000 */
      unsigned int SSR10:2;             /*  = [24..25] = 0x03000000 */
      unsigned int SSR11:2;             /*  = [26..27] = 0x0c000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) GPTU_T01OTS_t_nonv;

typedef volatile GPTU_T01OTS_t_nonv GPTU_T01OTS_t;

/********************** GPTU_T0CBA_t *************************/
/*
   GPTU_T0CBA            "GPTU Timer T0 Count Register (T0C, T0B, T0A)"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int T0A:8;               /*  = [0..7] = 0x000000ff */
      unsigned int T0B:8;               /*  = [8..15] = 0x0000ff00 */
      unsigned int T0C:8;               /*  = [16..23] = 0x00ff0000 */
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
} __attribute__((aligned(4))) GPTU_T0CBA_t_nonv;

typedef volatile GPTU_T0CBA_t_nonv GPTU_T0CBA_t;

/********************** GPTU_T0DCBA_t *************************/
/*
   GPTU_T0DCBA           "GPTU Timer T0 Count Register (T0D, T0C, T0B,T0A)"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int T0A:8;               /*  = [0..7] = 0x000000ff */
      unsigned int T0B:8;               /*  = [8..15] = 0x0000ff00 */
      unsigned int T0C:8;               /*  = [16..23] = 0x00ff0000 */
      unsigned int T0D:8;               /*  = [24..31] = 0xff000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) GPTU_T0DCBA_t_nonv;

typedef volatile GPTU_T0DCBA_t_nonv GPTU_T0DCBA_t;

/********************** GPTU_T0RCBA_t *************************/
/*
   GPTU_T0RCBA           "GPTU Timer T0 Reload Register (T0RC, T0RB, T0RA)"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int T0RA:8;              /*  = [0..7] = 0x000000ff */
      unsigned int T0RB:8;              /*  = [8..15] = 0x0000ff00 */
      unsigned int T0RC:8;              /*  = [16..23] = 0x00ff0000 */
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
} __attribute__((aligned(4))) GPTU_T0RCBA_t_nonv;

typedef volatile GPTU_T0RCBA_t_nonv GPTU_T0RCBA_t;

/********************** GPTU_T0RDCBA_t *************************/
/*
   GPTU_T0RDCBA          "GPTU Timer T0 Reload Register (T0RD, T0RC, T0RB,T0RA)"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int T0RA:8;              /*  = [0..7] = 0x000000ff */
      unsigned int T0RB:8;              /*  = [8..15] = 0x0000ff00 */
      unsigned int T0RC:8;              /*  = [16..23] = 0x00ff0000 */
      unsigned int T0RD:8;              /*  = [24..31] = 0xff000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) GPTU_T0RDCBA_t_nonv;

typedef volatile GPTU_T0RDCBA_t_nonv GPTU_T0RDCBA_t;

/********************** GPTU_T1CBA_t *************************/
/*
   GPTU_T1CBA            "GPTU Timer T1 Count Register (T1C, T1B, T1A)"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int T1A:8;               /*  = [0..7] = 0x000000ff */
      unsigned int T1B:8;               /*  = [8..15] = 0x0000ff00 */
      unsigned int T1C:8;               /*  = [16..23] = 0x00ff0000 */
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
} __attribute__((aligned(4))) GPTU_T1CBA_t_nonv;

typedef volatile GPTU_T1CBA_t_nonv GPTU_T1CBA_t;

/********************** GPTU_T1DCBA_t *************************/
/*
   GPTU_T1DCBA           "GPTU Timer T1 Count Register (T1D, T1C, T1B,T1A)"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int T1A:8;               /*  = [0..7] = 0x000000ff */
      unsigned int T1B:8;               /*  = [8..15] = 0x0000ff00 */
      unsigned int T1C:8;               /*  = [16..23] = 0x00ff0000 */
      unsigned int T1D:8;               /*  = [24..31] = 0xff000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) GPTU_T1DCBA_t_nonv;

typedef volatile GPTU_T1DCBA_t_nonv GPTU_T1DCBA_t;

/********************** GPTU_T1RCBA_t *************************/
/*
   GPTU_T1RCBA           "GPTU Timer T1 Reload Register (T1RC, T1RB, T1RA)"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int T1RA:8;              /*  = [0..7] = 0x000000ff */
      unsigned int T1RB:8;              /*  = [8..15] = 0x0000ff00 */
      unsigned int T1RC:8;              /*  = [16..23] = 0x00ff0000 */
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
} __attribute__((aligned(4))) GPTU_T1RCBA_t_nonv;

typedef volatile GPTU_T1RCBA_t_nonv GPTU_T1RCBA_t;

/********************** GPTU_T1RDCBA_t *************************/
/*
   GPTU_T1RDCBA          "GPTU Timer T1 Reload Register (T1RD, T1RC, T1RB,T1RA)"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int T1RA:8;              /*  = [0..7] = 0x000000ff */
      unsigned int T1RB:8;              /*  = [8..15] = 0x0000ff00 */
      unsigned int T1RC:8;              /*  = [16..23] = 0x00ff0000 */
      unsigned int T1RD:8;              /*  = [24..31] = 0xff000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) GPTU_T1RDCBA_t_nonv;

typedef volatile GPTU_T1RDCBA_t_nonv GPTU_T1RDCBA_t;

/********************** GPTU_T2_t *************************/
/*
   GPTU_T2               "GPTU Timer T2 Count Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int T2A:16;              /*  = [0..15] = 0x0000ffff */
      unsigned int T2B:16;              /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) GPTU_T2_t_nonv;

typedef volatile GPTU_T2_t_nonv GPTU_T2_t;

/********************** GPTU_T2AIS_t *************************/
/*
   GPTU_T2AIS            "GPTU Timer T2/T2A External Input Selection Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int T2AICNT:3;           /*  = [0..2] = 0x00000007 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int T2AISTR:3;           /*  = [4..6] = 0x00000070 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int T2AISTP:3;           /*  = [8..10] = 0x00000700 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int T2AIUD:3;            /*  = [12..14] = 0x00007000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int T2AICLR:3;           /*  = [16..18] = 0x00070000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int T2AIRC0:3;           /*  = [20..22] = 0x00700000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int T2AIRC1:3;           /*  = [24..26] = 0x07000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) GPTU_T2AIS_t_nonv;

typedef volatile GPTU_T2AIS_t_nonv GPTU_T2AIS_t;

/********************** GPTU_T2BIS_t *************************/
/*
   GPTU_T2BIS            "GPTU Timer T2B External Input Selection Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int T2BICNT:3;           /*  = [0..2] = 0x00000007 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int T2BISTR:3;           /*  = [4..6] = 0x00000070 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int T2BISTP:3;           /*  = [8..10] = 0x00000700 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int T2BIUD:3;            /*  = [12..14] = 0x00007000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int T2BICLR:3;           /*  = [16..18] = 0x00070000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int T2BIRC0:3;           /*  = [20..22] = 0x00700000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int T2BIRC1:3;           /*  = [24..26] = 0x07000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) GPTU_T2BIS_t_nonv;

typedef volatile GPTU_T2BIS_t_nonv GPTU_T2BIS_t;

/********************** GPTU_T2CON_t *************************/
/*
   GPTU_T2CON            "GPTU Timer T2 Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int T2ACSRC:2;           /*  = [0..1] = 0x00000003 */
      unsigned int T2ACDIR:2;           /*  = [2..3] = 0x0000000c */
      unsigned int T2ACCLR:2;           /*  = [4..5] = 0x00000030 */
      unsigned int T2ACOV:2;            /*  = [6..7] = 0x000000c0 */
      unsigned int T2ACOS:1;            /*  = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int T2ADIR:1;            /*  = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int T2SPLIT:1;           /*  = [15..15] = 0x00008000 */
      unsigned int T2BCSRC:2;           /*  = [16..17] = 0x00030000 */
      unsigned int T2BCDIR:2;           /*  = [18..19] = 0x000c0000 */
      unsigned int T2BCCLR:2;           /*  = [20..21] = 0x00300000 */
      unsigned int T2BCOV:2;            /*  = [22..23] = 0x00c00000 */
      unsigned int T2BCOS:1;            /*  = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int T2BDIR:1;            /*  = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) GPTU_T2CON_t_nonv;

typedef volatile GPTU_T2CON_t_nonv GPTU_T2CON_t;

/********************** GPTU_T2ES_t *************************/
/*
   GPTU_T2ES             "GPTU Timer T2 External Input Edge Selection Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int T2AECNT:2;           /*  = [0..1] = 0x00000003 */
      unsigned int T2AESTR:2;           /*  = [2..3] = 0x0000000c */
      unsigned int T2AESTP:2;           /*  = [4..5] = 0x00000030 */
      unsigned int T2AEUD:2;            /*  = [6..7] = 0x000000c0 */
      unsigned int T2AECLR:2;           /*  = [8..9] = 0x00000300 */
      unsigned int T2AERC0:2;           /*  = [10..11] = 0x00000c00 */
      unsigned int T2AERC1:2;           /*  = [12..13] = 0x00003000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int T2BECNT:2;           /*  = [16..17] = 0x00030000 */
      unsigned int T2BESTR:2;           /*  = [18..19] = 0x000c0000 */
      unsigned int T2BESTP:2;           /*  = [20..21] = 0x00300000 */
      unsigned int T2BEUD:2;            /*  = [22..23] = 0x00c00000 */
      unsigned int T2BECLR:2;           /*  = [24..25] = 0x03000000 */
      unsigned int T2BERC0:2;           /*  = [26..27] = 0x0c000000 */
      unsigned int T2BERC1:2;           /*  = [28..29] = 0x30000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) GPTU_T2ES_t_nonv;

typedef volatile GPTU_T2ES_t_nonv GPTU_T2ES_t;

/********************** GPTU_T2RC0_t *************************/
/*
   GPTU_T2RC0            "GPTU Timer T2 Reload/Capture Register 0"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int T2ARC0:16;           /*  = [0..15] = 0x0000ffff */
      unsigned int T2BRC0:16;           /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) GPTU_T2RC0_t_nonv;

typedef volatile GPTU_T2RC0_t_nonv GPTU_T2RC0_t;

/********************** GPTU_T2RC1_t *************************/
/*
   GPTU_T2RC1            "GPTU Timer T2 Reload/Capture Register 1"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int T2ARC1:16;           /*  = [0..15] = 0x0000ffff */
      unsigned int T2BRC1:16;           /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) GPTU_T2RC1_t_nonv;

typedef volatile GPTU_T2RC1_t_nonv GPTU_T2RC1_t;

/********************** GPTU_T2RCCON_t *************************/
/*
   GPTU_T2RCCON          "GPTU Timer T2 Reload/Capture Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int T2AMRC0:3;           /*  = [0..2] = 0x00000007 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int T2AMRC1:3;           /*  = [4..6] = 0x00000070 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int T2BMRC0:3;           /*  = [16..18] = 0x00070000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int T2BMRC1:3;           /*  = [20..22] = 0x00700000 */
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
} __attribute__((aligned(4))) GPTU_T2RCCON_t_nonv;

typedef volatile GPTU_T2RCCON_t_nonv GPTU_T2RCCON_t;


#endif /* _HAVE_TRICORE_GPTU_TYPES_H_ */

