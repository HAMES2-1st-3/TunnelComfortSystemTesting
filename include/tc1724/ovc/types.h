/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_OVC_TYPES_H_
#define _HAVE_TRICORE_OVC_TYPES_H_


/********************** OVC_OCON_t *************************/
/*
   OVC_OCON              "Overlay Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SHOVEN0:1;           /*  = [0] = 0x00000001 */
      unsigned int SHOVEN1:1;           /*  = [1] = 0x00000002 */
      unsigned int SHOVEN2:1;           /*  = [2] = 0x00000004 */
      unsigned int SHOVEN3:1;           /*  = [3] = 0x00000008 */
      unsigned int SHOVEN4:1;           /*  = [4] = 0x00000010 */
      unsigned int SHOVEN5:1;           /*  = [5] = 0x00000020 */
      unsigned int SHOVEN6:1;           /*  = [6] = 0x00000040 */
      unsigned int SHOVEN7:1;           /*  = [7] = 0x00000080 */
      unsigned int SHOVEN8:1;           /*  = [8] = 0x00000100 */
      unsigned int SHOVEN9:1;           /*  = [9] = 0x00000200 */
      unsigned int SHOVEN10:1;          /*  = [10] = 0x00000400 */
      unsigned int SHOVEN11:1;          /*  = [11] = 0x00000800 */
      unsigned int SHOVEN12:1;          /*  = [12] = 0x00001000 */
      unsigned int SHOVEN13:1;          /*  = [13] = 0x00002000 */
      unsigned int SHOVEN14:1;          /*  = [14] = 0x00004000 */
      unsigned int SHOVEN15:1;          /*  = [15] = 0x00008000 */
      unsigned int OVSTRT:1;            /*  = [16] = 0x00010000 */
      unsigned int OVSTP:1;             /*  = [17] = 0x00020000 */
      unsigned int DCINVAL:1;           /*  = [18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int OVCONF:1;            /*  = [24] = 0x01000000 */
      unsigned int POVCONF:1;           /*  = [25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) OVC_OCON_t_nonv;

typedef volatile OVC_OCON_t_nonv OVC_OCON_t;


#endif /* _HAVE_TRICORE_OVC_TYPES_H_ */

