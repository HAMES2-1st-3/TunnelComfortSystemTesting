/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_P5_TYPES_H_
#define _HAVE_TRICORE_P5_TYPES_H_


/********************** P5_OMR_t *************************/
/*
   P5_OMR                "Port 5 Output Modification Register"
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
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int PR0:1;               /*  = [16..16] = 0x00010000 */
      unsigned int PR1:1;               /*  = [17..17] = 0x00020000 */
      unsigned int PR2:1;               /*  = [18..18] = 0x00040000 */
      unsigned int PR3:1;               /*  = [19..19] = 0x00080000 */
      unsigned int PR4:1;               /*  = [20..20] = 0x00100000 */
      unsigned int PR5:1;               /*  = [21..21] = 0x00200000 */
      unsigned int PR6:1;               /*  = [22..22] = 0x00400000 */
      unsigned int PR7:1;               /*  = [23..23] = 0x00800000 */
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
} __attribute__((aligned(4))) P5_OMR_t_nonv;

typedef volatile P5_OMR_t_nonv P5_OMR_t;

/********************** P5_PDR_t *************************/
/*
   P5_PDR                "Port 5 Pad Driver Mode Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0..0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1..1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
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
      unsigned int PDASC1:3;            /*  = [20..22] = 0x00700000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int PDMSC0:3;            /*  = [24..26] = 0x07000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int PDMSC1:3;            /*  = [28..30] = 0x70000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) P5_PDR_t_nonv;

typedef volatile P5_PDR_t_nonv P5_PDR_t;


#endif /* _HAVE_TRICORE_P5_TYPES_H_ */

