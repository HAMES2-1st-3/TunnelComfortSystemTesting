/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_LTCA2_TYPES_H_
#define _HAVE_TRICORE_LTCA2_TYPES_H_


/********************** LTCA2_ID_t *************************/
/*
   LTCA2_ID              "LTCA2 Identification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MOD_REV:8;           /*  = [0..7] = 0x000000ff */
      unsigned int MOD_TYPE:8;          /*  = [8..15] = 0x0000ff00 */
      unsigned int MOD_NUM:16;          /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) LTCA2_ID_t_nonv;

typedef volatile LTCA2_ID_t_nonv LTCA2_ID_t;

/********************** LTCA2_LTCCTR63_t *************************/
/*
   LTCA2_LTCCTR63        "Local Timer Cell Control Register 63"
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
} __attribute__((aligned(4))) LTCA2_LTCCTR63_t_nonv;

typedef volatile LTCA2_LTCCTR63_t_nonv LTCA2_LTCCTR63_t;

/********************** LTCA2_LTCXR63_t *************************/
/*
   LTCA2_LTCXR63         "Local Timer Cell X Register 63"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int X:16;                /*  = [0..15] = 0x0000ffff */
      unsigned int XS:16;               /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) LTCA2_LTCXR63_t_nonv;

typedef volatile LTCA2_LTCXR63_t_nonv LTCA2_LTCXR63_t;

/********************** LTCA2_MRACTL_t *************************/
/*
   LTCA2_MRACTL          "Multiplexer Register Array Control Register"
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
} __attribute__((aligned(4))) LTCA2_MRACTL_t_nonv;

typedef volatile LTCA2_MRACTL_t_nonv LTCA2_MRACTL_t;

/********************** LTCA2_MRADIN_t *************************/
/*
   LTCA2_MRADIN          "Multiplexer Register Array Data In Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DATAIN:32;           /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) LTCA2_MRADIN_t_nonv;

typedef volatile LTCA2_MRADIN_t_nonv LTCA2_MRADIN_t;

/********************** LTCA2_MRADOUT_t *************************/
/*
   LTCA2_MRADOUT         "Multiplexer Register Array Data Out Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DATAOUT:32;          /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) LTCA2_MRADOUT_t_nonv;

typedef volatile LTCA2_MRADOUT_t_nonv LTCA2_MRADOUT_t;


#endif /* _HAVE_TRICORE_LTCA2_TYPES_H_ */

