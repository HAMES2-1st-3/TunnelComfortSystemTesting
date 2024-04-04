/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_P3_TYPES_H_
#define _HAVE_TRICORE_P3_TYPES_H_


/********************** P3_PDR_t *************************/
/*
   P3_PDR                "Port 3 Pad Driver Mode Register"
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
      unsigned int PDASC0:3;            /*  = [16..18] = 0x00070000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int PDSSC0:3;            /*  = [20..22] = 0x00700000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int PDASC1:3;            /*  = [24..26] = 0x07000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int PDCAN:3;             /*  = [28..30] = 0x70000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) P3_PDR_t_nonv;

typedef volatile P3_PDR_t_nonv P3_PDR_t;


#endif /* _HAVE_TRICORE_P3_TYPES_H_ */

