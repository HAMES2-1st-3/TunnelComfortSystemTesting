/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_FLASH_SHARETYPES_H_
#define _HAVE_TRICORE_FLASH_SHARETYPES_H_


/********************** FLASH_PROCONm_t *************************/
/*
   FLASH_PROCON1         "Flash Protection Configuration Register User 1"
   FLASH_PROCON2         "Flash Protection Configuration Register User 2"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int S0L:1;               /*  = [0..0] = 0x00000001 */
      unsigned int S1L:1;               /*  = [1..1] = 0x00000002 */
      unsigned int S2L:1;               /*  = [2..2] = 0x00000004 */
      unsigned int S3L:1;               /*  = [3..3] = 0x00000008 */
      unsigned int S4L:1;               /*  = [4..4] = 0x00000010 */
      unsigned int S5L:1;               /*  = [5..5] = 0x00000020 */
      unsigned int S6L:1;               /*  = [6..6] = 0x00000040 */
      unsigned int S7L:1;               /*  = [7..7] = 0x00000080 */
      unsigned int S8L:1;               /*  = [8..8] = 0x00000100 */
      unsigned int S9L:1;               /*  = [9..9] = 0x00000200 */
      unsigned int S10L:1;              /*  = [10..10] = 0x00000400 */
      unsigned int S11L:1;              /*  = [11..11] = 0x00000800 */
      unsigned int S12L:1;              /*  = [12..12] = 0x00001000 */
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
} __attribute__((aligned(4))) FLASH_PROCONm_t_nonv;

typedef volatile FLASH_PROCONm_t_nonv FLASH_PROCONm_t;


#endif /* _HAVE_TRICORE_FLASH_SHARETYPES_H_ */

