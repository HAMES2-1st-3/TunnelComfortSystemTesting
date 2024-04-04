/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_P17_TYPES_H_
#define _HAVE_TRICORE_P17_TYPES_H_


/********************** P17_PDISC_t *************************/
/*
   P17_PDISC             "Port 17 Pin Function Decision Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int PDIS0:1;             /*  = [0] = 0x00000001 */
      unsigned int PDIS1:1;             /*  = [1] = 0x00000002 */
      unsigned int PDIS2:1;             /*  = [2] = 0x00000004 */
      unsigned int PDIS3:1;             /*  = [3] = 0x00000008 */
      unsigned int PDIS4:1;             /*  = [4] = 0x00000010 */
      unsigned int PDIS5:1;             /*  = [5] = 0x00000020 */
      unsigned int PDIS6:1;             /*  = [6] = 0x00000040 */
      unsigned int PDIS7:1;             /*  = [7] = 0x00000080 */
      unsigned int PDIS8:1;             /*  = [8] = 0x00000100 */
      unsigned int PDIS9:1;             /*  = [9] = 0x00000200 */
      unsigned int PDIS10:1;            /*  = [10] = 0x00000400 */
      unsigned int PDIS11:1;            /*  = [11] = 0x00000800 */
      unsigned int PDIS12:1;            /*  = [12] = 0x00001000 */
      unsigned int PDIS13:1;            /*  = [13] = 0x00002000 */
      unsigned int PDIS14:1;            /*  = [14] = 0x00004000 */
      unsigned int PDIS15:1;            /*  = [15] = 0x00008000 */
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
} __attribute__((aligned(4))) P17_PDISC_t_nonv;

typedef volatile P17_PDISC_t_nonv P17_PDISC_t;


#endif /* _HAVE_TRICORE_P17_TYPES_H_ */

