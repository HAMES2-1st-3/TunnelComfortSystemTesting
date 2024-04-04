/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_PMU_SHARETYPES_H_
#define _HAVE_TRICORE_PMU_SHARETYPES_H_


/********************** FLASH0_COMMm_t *************************/
/*
   FLASH0_COMM0          "FSI Communication 0"
   FLASH0_COMM1          "FSI Communication 1"
   FLASH0_COMM2          "FSI Communication 2"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int STATUS:8;            /*  = [0..7] = 0x000000ff */
      unsigned int DATA:8;              /*  = [8..15] = 0x0000ff00 */
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
} __attribute__((aligned(4))) FLASH0_COMMm_t_nonv;

typedef volatile FLASH0_COMMm_t_nonv FLASH0_COMMm_t;


#endif /* _HAVE_TRICORE_PMU_SHARETYPES_H_ */

