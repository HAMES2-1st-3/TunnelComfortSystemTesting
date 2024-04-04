/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_P0_TYPES_H_
#define _HAVE_TRICORE_P0_TYPES_H_


/********************** P0_PDR0_t *************************/
/*
   P0_PDR0               "Port 0 Pad Driver Mode 0 Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int PD0:3;               /*  = [0..2] = 0x00000007 */
      unsigned int _bit3:1;             /* 0 = [3] = 0x00000008 */
      unsigned int PD1:3;               /*  = [4..6] = 0x00000070 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int PD2:3;               /*  = [8..10] = 0x00000700 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int PD3:3;               /*  = [12..14] = 0x00007000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int PD4:3;               /*  = [16..18] = 0x00070000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int PD5:3;               /*  = [20..22] = 0x00700000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int PD6:3;               /*  = [24..26] = 0x07000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int PD7:3;               /*  = [28..30] = 0x70000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) P0_PDR0_t_nonv;

typedef volatile P0_PDR0_t_nonv P0_PDR0_t;

/********************** P0_PDR1_t *************************/
/*
   P0_PDR1               "Port 0 Pad Driver Mode 1 Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int PD8:3;               /*  = [0..2] = 0x00000007 */
      unsigned int _bit3:1;             /* 0 = [3] = 0x00000008 */
      unsigned int PD9:3;               /*  = [4..6] = 0x00000070 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int PD10:3;              /*  = [8..10] = 0x00000700 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int PD11:3;              /*  = [12..14] = 0x00007000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int PD12:3;              /*  = [16..18] = 0x00070000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int PD13:3;              /*  = [20..22] = 0x00700000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int PD14:3;              /*  = [24..26] = 0x07000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int PD15:3;              /*  = [28..30] = 0x70000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) P0_PDR1_t_nonv;

typedef volatile P0_PDR1_t_nonv P0_PDR1_t;


#endif /* _HAVE_TRICORE_P0_TYPES_H_ */

