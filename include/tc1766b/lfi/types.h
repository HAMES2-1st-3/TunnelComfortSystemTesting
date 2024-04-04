/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_LFI_TYPES_H_
#define _HAVE_TRICORE_LFI_TYPES_H_


/********************** LFI_CON_t *************************/
/*
   LFI_CON               "LFI Configuration Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SPT:1;               /*  = [0..0] = 0x00000001 */
      unsigned int EBL:1;               /*  = [1..1] = 0x00000002 */
      unsigned int EBF:1;               /*  = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int LTAG:3;              /*  = [4..6] = 0x00000070 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int FTAG:4;              /*  = [8..11] = 0x00000f00 */
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
} __attribute__((aligned(4))) LFI_CON_t_nonv;

typedef volatile LFI_CON_t_nonv LFI_CON_t;

/********************** LFI_ID_t *************************/
/*
   LFI_ID                "LFI Module Identification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int REV:8;               /*  = [0..7] = 0x000000ff */
      unsigned int MOD_32B:8;           /*  = [8..15] = 0x0000ff00 */
      unsigned int MOD:16;              /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) LFI_ID_t_nonv;

typedef volatile LFI_ID_t_nonv LFI_ID_t;


#endif /* _HAVE_TRICORE_LFI_TYPES_H_ */

