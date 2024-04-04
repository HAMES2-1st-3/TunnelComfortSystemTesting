/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_LBCU_TYPES_H_
#define _HAVE_TRICORE_LBCU_TYPES_H_


/********************** LBCU_ID_t *************************/
/*
   LBCU_ID               "LBCU Module Identification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int REV:8;               /*  = [0..7] = 0x000000ff */
      unsigned int MOD_32B:8;           /*  = [8..15] = 0x0000ff00 */
      unsigned int MOD:16;              /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) LBCU_ID_t_nonv;

typedef volatile LBCU_ID_t_nonv LBCU_ID_t;

/********************** LBCU_LEADDR_t *************************/
/*
   LBCU_LEADDR           "LMB Error Addres Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int LEADDR:32;           /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) LBCU_LEADDR_t_nonv;

typedef volatile LBCU_LEADDR_t_nonv LBCU_LEADDR_t;

/********************** LBCU_LEATT_t *************************/
/*
   LBCU_LEATT            "LMB Error Attributes Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int LEC:1;               /*  = [0..0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1..1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int USER_ATT:8;          /*  = [4..11] = 0x00000ff0 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int NOS:1;               /*  = [14..14] = 0x00004000 */
      unsigned int LOC:1;               /*  = [15..15] = 0x00008000 */
      unsigned int ACK:3;               /*  = [16..18] = 0x00070000 */
      unsigned int UIS:1;               /*  = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int SVM:1;               /*  = [21..21] = 0x00200000 */
      unsigned int WR:1;                /*  = [22..22] = 0x00400000 */
      unsigned int RD:1;                /*  = [23..23] = 0x00800000 */
      unsigned int TAG:3;               /*  = [24..26] = 0x07000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int OPC:4;               /*  = [28..31] = 0xf0000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) LBCU_LEATT_t_nonv;

typedef volatile LBCU_LEATT_t_nonv LBCU_LEATT_t;

/********************** LBCU_LEDATH_t *************************/
/*
   LBCU_LEDATH           "LMB Error Data Register (32 MSB's)"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int LEDAT:32;            /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) LBCU_LEDATH_t_nonv;

typedef volatile LBCU_LEDATH_t_nonv LBCU_LEDATH_t;

/********************** LBCU_LEDATL_t *************************/
/*
   LBCU_LEDATL           "LMB Error Data Register (32 LSB's)"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int LEDAT:32;            /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) LBCU_LEDATL_t_nonv;

typedef volatile LBCU_LEDATL_t_nonv LBCU_LEDATL_t;

/********************** LBCU_SRC_t *************************/
/*
   LBCU_SRC              "PBCU Service Request Control Register"
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
} __attribute__((aligned(4))) LBCU_SRC_t_nonv;

typedef volatile LBCU_SRC_t_nonv LBCU_SRC_t;


#endif /* _HAVE_TRICORE_LBCU_TYPES_H_ */

