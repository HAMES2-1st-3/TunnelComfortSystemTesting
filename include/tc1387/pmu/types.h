/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_PMU_TYPES_H_
#define _HAVE_TRICORE_PMU_TYPES_H_


/********************** PMU0_OVRCON_t *************************/
/*
   PMU0_OVRCON           "Overlay RAM Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int OLDAEN:1;            /*  = [0..0] = 0x00000001 */
      unsigned int POLDAEN:1;           /*  = [1..1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int PECCCTR:1;           /*  = [8..8] = 0x00000100 */
      unsigned int ECCGENDIS:1;         /*  = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int DBERINTDIS:1;        /*  = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int ECCDBER:1;           /*  = [15..15] = 0x00008000 */
      unsigned int ECCW:8;              /*  = [16..23] = 0x00ff0000 */
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
} __attribute__((aligned(4))) PMU0_OVRCON_t_nonv;

typedef volatile PMU0_OVRCON_t_nonv PMU0_OVRCON_t;


#endif /* _HAVE_TRICORE_PMU_TYPES_H_ */

