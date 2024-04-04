/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_BMU_SHARETYPES_H_
#define _HAVE_TRICORE_BMU_SHARETYPES_H_


/********************** BMU_PSETm_t *************************/
/*
   BMU_PSET0             "Peripheral Set 0 Configuration"
   BMU_PSET1             "Peripheral Set 1 Configuration"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int FPI_SEL0:1;          /*  = [0] = 0x00000001 */
      unsigned int FPI_SEL1:1;          /*  = [1] = 0x00000002 */
      unsigned int FPI_SEL2:1;          /*  = [2] = 0x00000004 */
      unsigned int FPI_SEL3:1;          /*  = [3] = 0x00000008 */
      unsigned int FPI_SEL4:1;          /*  = [4] = 0x00000010 */
      unsigned int FPI_SEL5:1;          /*  = [5] = 0x00000020 */
      unsigned int FPI_SEL6:1;          /*  = [6] = 0x00000040 */
      unsigned int FPI_SEL7:1;          /*  = [7] = 0x00000080 */
      unsigned int FPI_SEL8:1;          /*  = [8] = 0x00000100 */
      unsigned int FPI_SEL9:1;          /*  = [9] = 0x00000200 */
      unsigned int FPI_SEL10:1;         /*  = [10] = 0x00000400 */
      unsigned int FPI_SEL11:1;         /*  = [11] = 0x00000800 */
      unsigned int FPI_SEL12:1;         /*  = [12] = 0x00001000 */
      unsigned int FPI_SEL13:1;         /*  = [13] = 0x00002000 */
      unsigned int FPI_SEL14:1;         /*  = [14] = 0x00004000 */
      unsigned int FPI_SEL15:1;         /*  = [15] = 0x00008000 */
      unsigned int FPI_SEL16:1;         /*  = [16] = 0x00010000 */
      unsigned int FPI_SEL17:1;         /*  = [17] = 0x00020000 */
      unsigned int FPI_SEL18:1;         /*  = [18] = 0x00040000 */
      unsigned int FPI_SEL19:1;         /*  = [19] = 0x00080000 */
      unsigned int FPI_SEL20:1;         /*  = [20] = 0x00100000 */
      unsigned int FPI_SEL21:1;         /*  = [21] = 0x00200000 */
      unsigned int FPI_SEL22:1;         /*  = [22] = 0x00400000 */
      unsigned int FPI_SEL23:1;         /*  = [23] = 0x00800000 */
      unsigned int FPI_SEL24:1;         /*  = [24] = 0x01000000 */
      unsigned int FPI_SEL25:1;         /*  = [25] = 0x02000000 */
      unsigned int FPI_SEL26:1;         /*  = [26] = 0x04000000 */
      unsigned int FPI_SEL27:1;         /*  = [27] = 0x08000000 */
      unsigned int FPI_SEL28:1;         /*  = [28] = 0x10000000 */
      unsigned int FPI_SEL29:1;         /*  = [29] = 0x20000000 */
      unsigned int FPI_SEL30:1;         /*  = [30] = 0x40000000 */
      unsigned int FPI_SEL31:1;         /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) BMU_PSETm_t_nonv;

typedef volatile BMU_PSETm_t_nonv BMU_PSETm_t;


#endif /* _HAVE_TRICORE_BMU_SHARETYPES_H_ */

