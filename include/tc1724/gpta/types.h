/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_GPTA_TYPES_H_
#define _HAVE_TRICORE_GPTA_TYPES_H_


/********************** GPTA0_CKBCTR_t *************************/
/*
   GPTA0_CKBCTR          "GPTA0 Clock Bus Control Register"
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
} __attribute__((aligned(4))) GPTA0_CKBCTR_t_nonv;

typedef volatile GPTA0_CKBCTR_t_nonv GPTA0_CKBCTR_t;

/********************** GPTA0_CLC_t *************************/
/*
   GPTA0_CLC             "GPTA Clock Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DISR:1;              /*  = [0] = 0x00000001 */
      unsigned int DISS:1;              /*  = [1] = 0x00000002 */
      unsigned int SPEN:1;              /*  = [2] = 0x00000004 */
      unsigned int EDIS:1;              /*  = [3] = 0x00000008 */
      unsigned int SBWE:1;              /*  = [4] = 0x00000010 */
      unsigned int FSOE:1;              /*  = [5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
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
} __attribute__((aligned(4))) GPTA0_CLC_t_nonv;

typedef volatile GPTA0_CLC_t_nonv GPTA0_CLC_t;

/********************** GPTA0_DBGCTR_t *************************/
/*
   GPTA0_DBGCTR          "GPTA Debug Clock Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CLKCNT:16;           /*  = [0..15] = 0x0000ffff */
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
      unsigned int DBGCEN:1;            /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) GPTA0_DBGCTR_t_nonv;

typedef volatile GPTA0_DBGCTR_t_nonv GPTA0_DBGCTR_t;

/********************** GPTA0_EDCTR_t *************************/
/*
   GPTA0_EDCTR           "GPTA Clock Enable/Disable Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int GT00RUN:1;           /*  = [0] = 0x00000001 */
      unsigned int GT01RUN:1;           /*  = [1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int G0EN:1;              /*  = [8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
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
} __attribute__((aligned(4))) GPTA0_EDCTR_t_nonv;

typedef volatile GPTA0_EDCTR_t_nonv GPTA0_EDCTR_t;

/********************** GPTA0_FDR_t *************************/
/*
   GPTA0_FDR             "GPTA Fractional Divider Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int STEP:10;             /*  = [0..9] = 0x000003ff */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int SM:1;                /*  = [11] = 0x00000800 */
      unsigned int SC:2;                /*  = [12..13] = 0x00003000 */
      unsigned int DM:2;                /*  = [14..15] = 0x0000c000 */
      unsigned int RESULT:10;           /*  = [16..25] = 0x03ff0000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int SUSACK:1;            /*  = [28] = 0x10000000 */
      unsigned int SUSREQ:1;            /*  = [29] = 0x20000000 */
      unsigned int ENHW:1;              /*  = [30] = 0x40000000 */
      unsigned int DISCLK:1;            /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) GPTA0_FDR_t_nonv;

typedef volatile GPTA0_FDR_t_nonv GPTA0_FDR_t;

/********************** GPTA0_FPCSTAT_t *************************/
/*
   GPTA0_FPCSTAT         "GPTA0 Filter and Prescaler Cell Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int REG0:1;              /*  = [0] = 0x00000001 */
      unsigned int REG1:1;              /*  = [1] = 0x00000002 */
      unsigned int REG2:1;              /*  = [2] = 0x00000004 */
      unsigned int REG3:1;              /*  = [3] = 0x00000008 */
      unsigned int REG4:1;              /*  = [4] = 0x00000010 */
      unsigned int REG5:1;              /*  = [5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int FEG0:1;              /*  = [8] = 0x00000100 */
      unsigned int FEG1:1;              /*  = [9] = 0x00000200 */
      unsigned int FEG2:1;              /*  = [10] = 0x00000400 */
      unsigned int FEG3:1;              /*  = [11] = 0x00000800 */
      unsigned int FEG4:1;              /*  = [12] = 0x00001000 */
      unsigned int FEG5:1;              /*  = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
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
} __attribute__((aligned(4))) GPTA0_FPCSTAT_t_nonv;

typedef volatile GPTA0_FPCSTAT_t_nonv GPTA0_FPCSTAT_t;

/********************** GPTA0_ID_t *************************/
/*
   GPTA0_ID              "GPTA0 Identification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MOD_REV:8;           /*  = [0..7] = 0x000000ff */
      unsigned int MOD_TYPE:8;          /*  = [8..15] = 0x0000ff00 */
      unsigned int MOD_NUM:16;          /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) GPTA0_ID_t_nonv;

typedef volatile GPTA0_ID_t_nonv GPTA0_ID_t;

/********************** GPTA0_LTCCTR63_t *************************/
/*
   GPTA0_LTCCTR63        "GPTA0 Local Timer Cell Control Register 63"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int BRM:1;               /*  = [0] = 0x00000001 */
      unsigned int OSM:1;               /*  = [1] = 0x00000002 */
      unsigned int REN:2;               /*  = [2..3] = 0x0000000c */
      unsigned int RED:1;               /*  = [4] = 0x00000010 */
      unsigned int FED:1;               /*  = [5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int ILM:1;               /*  = [8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9] = 0x00000200 */
      unsigned int CEN:1;               /*  = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int OUT:1;               /*  = [15] = 0x00008000 */
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
} __attribute__((aligned(4))) GPTA0_LTCCTR63_t_nonv;

typedef volatile GPTA0_LTCCTR63_t_nonv GPTA0_LTCCTR63_t;

/********************** GPTA0_LTCXR63_t *************************/
/*
   GPTA0_LTCXR63         "GPTA0 Local Timer Cell X Register 63"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int X:16;                /*  = [0..15] = 0x0000ffff */
      unsigned int XS:16;               /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) GPTA0_LTCXR63_t_nonv;

typedef volatile GPTA0_LTCXR63_t_nonv GPTA0_LTCXR63_t;

/********************** GPTA0_MRACTL_t *************************/
/*
   GPTA0_MRACTL          "GPTA0 Multiplexer Register Array Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MAEN:1;              /*  = [0] = 0x00000001 */
      unsigned int WCRES:1;             /*  = [1] = 0x00000002 */
      unsigned int FIFOFULL:1;          /*  = [2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int FIFOFILLCNT:6;       /*  = [8..13] = 0x00003f00 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
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
} __attribute__((aligned(4))) GPTA0_MRACTL_t_nonv;

typedef volatile GPTA0_MRACTL_t_nonv GPTA0_MRACTL_t;

/********************** GPTA0_MRADIN_t *************************/
/*
   GPTA0_MRADIN          "GPTA0 Multiplexer Register Array Data In Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DATAIN:32;           /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) GPTA0_MRADIN_t_nonv;

typedef volatile GPTA0_MRADIN_t_nonv GPTA0_MRADIN_t;

/********************** GPTA0_MRADOUT_t *************************/
/*
   GPTA0_MRADOUT         "GPTA0 Multiplexer Register Array Data Out Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DATAOUT:32;          /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) GPTA0_MRADOUT_t_nonv;

typedef volatile GPTA0_MRADOUT_t_nonv GPTA0_MRADOUT_t;

/********************** GPTA0_PDLCTR_t *************************/
/*
   GPTA0_PDLCTR          "GPTA0 Phase Discrimination Logic Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MUX0:1;              /*  = [0] = 0x00000001 */
      unsigned int TSE0:1;              /*  = [1] = 0x00000002 */
      unsigned int ERR0:1;              /*  = [2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3] = 0x00000008 */
      unsigned int MUX1:1;              /*  = [4] = 0x00000010 */
      unsigned int TSE1:1;              /*  = [5] = 0x00000020 */
      unsigned int ERR1:1;              /*  = [6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
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
} __attribute__((aligned(4))) GPTA0_PDLCTR_t_nonv;

typedef volatile GPTA0_PDLCTR_t_nonv GPTA0_PDLCTR_t;

/********************** GPTA0_PLLCNT_t *************************/
/*
   GPTA0_PLLCNT          "GPTA0 Phase Locked Loop Counter Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CNT:16;              /*  = [0..15] = 0x0000ffff */
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
} __attribute__((aligned(4))) GPTA0_PLLCNT_t_nonv;

typedef volatile GPTA0_PLLCNT_t_nonv GPTA0_PLLCNT_t;

/********************** GPTA0_PLLCTR_t *************************/
/*
   GPTA0_PLLCTR          "GPTA0 Phase Locked Loop Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MUX:2;               /*  = [0..1] = 0x00000003 */
      unsigned int AEN:1;               /*  = [2] = 0x00000004 */
      unsigned int PEN:1;               /*  = [3] = 0x00000008 */
      unsigned int REN:1;               /*  = [4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
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
} __attribute__((aligned(4))) GPTA0_PLLCTR_t_nonv;

typedef volatile GPTA0_PLLCTR_t_nonv GPTA0_PLLCTR_t;

/********************** GPTA0_PLLDTR_t *************************/
/*
   GPTA0_PLLDTR          "GPTA0 Phase Locked Loop Delta Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DTR:25;              /*  = [0..24] = 0x01ffffff */
      unsigned int _bit25:1;            /* 0 = [25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) GPTA0_PLLDTR_t_nonv;

typedef volatile GPTA0_PLLDTR_t_nonv GPTA0_PLLDTR_t;

/********************** GPTA0_PLLMTI_t *************************/
/*
   GPTA0_PLLMTI          "GPTA0 Phase Locked Loop Microtick Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MTI:16;              /*  = [0..15] = 0x0000ffff */
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
} __attribute__((aligned(4))) GPTA0_PLLMTI_t_nonv;

typedef volatile GPTA0_PLLMTI_t_nonv GPTA0_PLLMTI_t;

/********************** GPTA0_PLLREV_t *************************/
/*
   GPTA0_PLLREV          "GPTA0 Phase Locked Loop Reload Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int REV:24;              /*  = [0..23] = 0x00ffffff */
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
} __attribute__((aligned(4))) GPTA0_PLLREV_t_nonv;

typedef volatile GPTA0_PLLREV_t_nonv GPTA0_PLLREV_t;

/********************** GPTA0_PLLSTP_t *************************/
/*
   GPTA0_PLLSTP          "GPTA0 Phase Locked Loop Step Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int STP:16;              /*  = [0..15] = 0x0000ffff */
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
} __attribute__((aligned(4))) GPTA0_PLLSTP_t_nonv;

typedef volatile GPTA0_PLLSTP_t_nonv GPTA0_PLLSTP_t;

/********************** GPTA0_SRNR_t *************************/
/*
   GPTA0_SRNR            "GPTA0 Service Request Node Redirection Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int GTC01R:1;            /*  = [0] = 0x00000001 */
      unsigned int GTC03R:1;            /*  = [1] = 0x00000002 */
      unsigned int GTC05R:1;            /*  = [2] = 0x00000004 */
      unsigned int GTC07R:1;            /*  = [3] = 0x00000008 */
      unsigned int GTC09R:1;            /*  = [4] = 0x00000010 */
      unsigned int GTC11R:1;            /*  = [5] = 0x00000020 */
      unsigned int GTC13R:1;            /*  = [6] = 0x00000040 */
      unsigned int GTC15R:1;            /*  = [7] = 0x00000080 */
      unsigned int GTC17R:1;            /*  = [8] = 0x00000100 */
      unsigned int GTC19R:1;            /*  = [9] = 0x00000200 */
      unsigned int GTC21R:1;            /*  = [10] = 0x00000400 */
      unsigned int GTC23R:1;            /*  = [11] = 0x00000800 */
      unsigned int GTC25R:1;            /*  = [12] = 0x00001000 */
      unsigned int GTC27R:1;            /*  = [13] = 0x00002000 */
      unsigned int GTC29R:1;            /*  = [14] = 0x00004000 */
      unsigned int GTC31R:1;            /*  = [15] = 0x00008000 */
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
} __attribute__((aligned(4))) GPTA0_SRNR_t_nonv;

typedef volatile GPTA0_SRNR_t_nonv GPTA0_SRNR_t;

/********************** GPTA0_SRSC0_t *************************/
/*
   GPTA0_SRSC0           "GPTA0 Service Request State Clear Register 0"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DCM00R:1;            /*  = [0] = 0x00000001 */
      unsigned int DCM00F:1;            /*  = [1] = 0x00000002 */
      unsigned int DCM00C:1;            /*  = [2] = 0x00000004 */
      unsigned int DCM01R:1;            /*  = [3] = 0x00000008 */
      unsigned int DCM01F:1;            /*  = [4] = 0x00000010 */
      unsigned int DCM01C:1;            /*  = [5] = 0x00000020 */
      unsigned int DCM02R:1;            /*  = [6] = 0x00000040 */
      unsigned int DCM02F:1;            /*  = [7] = 0x00000080 */
      unsigned int DCM02C:1;            /*  = [8] = 0x00000100 */
      unsigned int DCM03R:1;            /*  = [9] = 0x00000200 */
      unsigned int DCM03F:1;            /*  = [10] = 0x00000400 */
      unsigned int DCM03C:1;            /*  = [11] = 0x00000800 */
      unsigned int PLL:1;               /*  = [12] = 0x00001000 */
      unsigned int GT00:1;              /*  = [13] = 0x00002000 */
      unsigned int GT01:1;              /*  = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
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
} __attribute__((aligned(4))) GPTA0_SRSC0_t_nonv;

typedef volatile GPTA0_SRSC0_t_nonv GPTA0_SRSC0_t;

/********************** GPTA0_SRSC1_t *************************/
/*
   GPTA0_SRSC1           "GPTA0 Service Request State Clear Register 1"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int GTC0:1;              /*  = [0] = 0x00000001 */
      unsigned int GTC1:1;              /*  = [1] = 0x00000002 */
      unsigned int GTC2:1;              /*  = [2] = 0x00000004 */
      unsigned int GTC3:1;              /*  = [3] = 0x00000008 */
      unsigned int GTC4:1;              /*  = [4] = 0x00000010 */
      unsigned int GTC5:1;              /*  = [5] = 0x00000020 */
      unsigned int GTC6:1;              /*  = [6] = 0x00000040 */
      unsigned int GTC7:1;              /*  = [7] = 0x00000080 */
      unsigned int GTC8:1;              /*  = [8] = 0x00000100 */
      unsigned int GTC9:1;              /*  = [9] = 0x00000200 */
      unsigned int GTC10:1;             /*  = [10] = 0x00000400 */
      unsigned int GTC11:1;             /*  = [11] = 0x00000800 */
      unsigned int GTC12:1;             /*  = [12] = 0x00001000 */
      unsigned int GTC13:1;             /*  = [13] = 0x00002000 */
      unsigned int GTC14:1;             /*  = [14] = 0x00004000 */
      unsigned int GTC15:1;             /*  = [15] = 0x00008000 */
      unsigned int GTC16:1;             /*  = [16] = 0x00010000 */
      unsigned int GTC17:1;             /*  = [17] = 0x00020000 */
      unsigned int GTC18:1;             /*  = [18] = 0x00040000 */
      unsigned int GTC19:1;             /*  = [19] = 0x00080000 */
      unsigned int GTC20:1;             /*  = [20] = 0x00100000 */
      unsigned int GTC21:1;             /*  = [21] = 0x00200000 */
      unsigned int GTC22:1;             /*  = [22] = 0x00400000 */
      unsigned int GTC23:1;             /*  = [23] = 0x00800000 */
      unsigned int GTC24:1;             /*  = [24] = 0x01000000 */
      unsigned int GTC25:1;             /*  = [25] = 0x02000000 */
      unsigned int GTC26:1;             /*  = [26] = 0x04000000 */
      unsigned int GTC27:1;             /*  = [27] = 0x08000000 */
      unsigned int GTC28:1;             /*  = [28] = 0x10000000 */
      unsigned int GTC29:1;             /*  = [29] = 0x20000000 */
      unsigned int GTC30:1;             /*  = [30] = 0x40000000 */
      unsigned int GTC31:1;             /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) GPTA0_SRSC1_t_nonv;

typedef volatile GPTA0_SRSC1_t_nonv GPTA0_SRSC1_t;

/********************** GPTA0_SRSS0_t *************************/
/*
   GPTA0_SRSS0           "GPTA0 Service Request State Set Register 0"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DCM00R:1;            /*  = [0] = 0x00000001 */
      unsigned int DCM00F:1;            /*  = [1] = 0x00000002 */
      unsigned int DCM00C:1;            /*  = [2] = 0x00000004 */
      unsigned int DCM01R:1;            /*  = [3] = 0x00000008 */
      unsigned int DCM01F:1;            /*  = [4] = 0x00000010 */
      unsigned int DCM01C:1;            /*  = [5] = 0x00000020 */
      unsigned int DCM02R:1;            /*  = [6] = 0x00000040 */
      unsigned int DCM02F:1;            /*  = [7] = 0x00000080 */
      unsigned int DCM02C:1;            /*  = [8] = 0x00000100 */
      unsigned int DCM03R:1;            /*  = [9] = 0x00000200 */
      unsigned int DCM03F:1;            /*  = [10] = 0x00000400 */
      unsigned int DCM03C:1;            /*  = [11] = 0x00000800 */
      unsigned int PLL:1;               /*  = [12] = 0x00001000 */
      unsigned int GT00:1;              /*  = [13] = 0x00002000 */
      unsigned int GT01:1;              /*  = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
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
} __attribute__((aligned(4))) GPTA0_SRSS0_t_nonv;

typedef volatile GPTA0_SRSS0_t_nonv GPTA0_SRSS0_t;

/********************** GPTA0_SRSS1_t *************************/
/*
   GPTA0_SRSS1           "GPTA0 Service Request State Set Register 1"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int GTC0:1;              /*  = [0] = 0x00000001 */
      unsigned int GTC1:1;              /*  = [1] = 0x00000002 */
      unsigned int GTC2:1;              /*  = [2] = 0x00000004 */
      unsigned int GTC3:1;              /*  = [3] = 0x00000008 */
      unsigned int GTC4:1;              /*  = [4] = 0x00000010 */
      unsigned int GTC5:1;              /*  = [5] = 0x00000020 */
      unsigned int GTC6:1;              /*  = [6] = 0x00000040 */
      unsigned int GTC7:1;              /*  = [7] = 0x00000080 */
      unsigned int GTC8:1;              /*  = [8] = 0x00000100 */
      unsigned int GTC9:1;              /*  = [9] = 0x00000200 */
      unsigned int GTC10:1;             /*  = [10] = 0x00000400 */
      unsigned int GTC11:1;             /*  = [11] = 0x00000800 */
      unsigned int GTC12:1;             /*  = [12] = 0x00001000 */
      unsigned int GTC13:1;             /*  = [13] = 0x00002000 */
      unsigned int GTC14:1;             /*  = [14] = 0x00004000 */
      unsigned int GTC15:1;             /*  = [15] = 0x00008000 */
      unsigned int GTC16:1;             /*  = [16] = 0x00010000 */
      unsigned int GTC17:1;             /*  = [17] = 0x00020000 */
      unsigned int GTC18:1;             /*  = [18] = 0x00040000 */
      unsigned int GTC19:1;             /*  = [19] = 0x00080000 */
      unsigned int GTC20:1;             /*  = [20] = 0x00100000 */
      unsigned int GTC21:1;             /*  = [21] = 0x00200000 */
      unsigned int GTC22:1;             /*  = [22] = 0x00400000 */
      unsigned int GTC23:1;             /*  = [23] = 0x00800000 */
      unsigned int GTC24:1;             /*  = [24] = 0x01000000 */
      unsigned int GTC25:1;             /*  = [25] = 0x02000000 */
      unsigned int GTC26:1;             /*  = [26] = 0x04000000 */
      unsigned int GTC27:1;             /*  = [27] = 0x08000000 */
      unsigned int GTC28:1;             /*  = [28] = 0x10000000 */
      unsigned int GTC29:1;             /*  = [29] = 0x20000000 */
      unsigned int GTC30:1;             /*  = [30] = 0x40000000 */
      unsigned int GTC31:1;             /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) GPTA0_SRSS1_t_nonv;

typedef volatile GPTA0_SRSS1_t_nonv GPTA0_SRSS1_t;


#endif /* _HAVE_TRICORE_GPTA_TYPES_H_ */

