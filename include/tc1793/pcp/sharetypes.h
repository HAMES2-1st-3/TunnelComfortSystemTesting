/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_PCP_SHARETYPES_H_
#define _HAVE_TRICORE_PCP_SHARETYPES_H_


/********************** PCP_SRCm_t *************************/
/*
   PCP_SRC0              "PCP Service Request Control Register 0"
   PCP_SRC1              "PCP Service Request Control Register 1"
   PCP_SRC2              "PCP Service Request Control Register 2"
   PCP_SRC3              "PCP Service Request Control Register 3"
   PCP_SRC4              "PCP Service Request Control Register 4"
   PCP_SRC5              "PCP Service Request Control Register 5"
   PCP_SRC6              "PCP Service Request Control Register 6"
   PCP_SRC7              "PCP Service Request Control Register 7"
   PCP_SRC8              "PCP Service Request Control Register 8"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SRPN:8;              /*  = [0..7] = 0x000000ff */
      unsigned int _bit8:1;             /* 0 = [8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9] = 0x00000200 */
      unsigned int TOS:2;               /*  = [10..11] = 0x00000c00 */
      unsigned int SRE:1;               /*  = [12] = 0x00001000 */
      unsigned int SRR:1;               /*  = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
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
} __attribute__((aligned(4))) PCP_SRCm_t_nonv;

typedef volatile PCP_SRCm_t_nonv PCP_SRCm_t;


#endif /* _HAVE_TRICORE_PCP_SHARETYPES_H_ */

