/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_EBU_SHARETYPES_H_
#define _HAVE_TRICORE_EBU_SHARETYPES_H_


/********************** EBU_ADDRSELm_t *************************/
/*
   EBU_ADDRSEL0          "EBU Address Select Register 0"
   EBU_ADDRSEL1          "EBU Address Select Register 1"
   EBU_ADDRSEL2          "EBU Address Select Register 2"
   EBU_ADDRSEL3          "EBU Address Select Register 3"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int REGENAB:1;           /*  = [0..0] = 0x00000001 */
      unsigned int ALTENAB:1;           /*  = [1..1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int MASK:4;              /*  = [4..7] = 0x000000f0 */
      unsigned int ALTSEG:4;            /*  = [8..11] = 0x00000f00 */
      unsigned int BASE:20;             /*  = [12..31] = 0xfffff000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) EBU_ADDRSELm_t_nonv;

typedef volatile EBU_ADDRSELm_t_nonv EBU_ADDRSELm_t;

/********************** EBU_BUSAPm_t *************************/
/*
   EBU_BUSAP0            "EBU Bus Access Parameter Register 0"
   EBU_BUSAP1            "EBU Bus Access Parameter Register 1"
   EBU_BUSAP2            "EBU Bus Access Parameter Register 2"
   EBU_BUSAP3            "EBU Bus Access Parameter Register 3"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DTACS:4;             /*  = [0..3] = 0x0000000f */
      unsigned int DTARDWR:4;           /*  = [4..7] = 0x000000f0 */
      unsigned int WRRECOVC:3;          /*  = [8..10] = 0x00000700 */
      unsigned int RDRECOVC:3;          /*  = [11..13] = 0x00003800 */
      unsigned int DATAC:2;             /*  = [14..15] = 0x0000c000 */
      unsigned int BURSTC:3;            /*  = [16..18] = 0x00070000 */
      unsigned int WAITWRC:3;           /*  = [19..21] = 0x00380000 */
      unsigned int WAITRDC:3;           /*  = [22..24] = 0x01c00000 */
      unsigned int CMDDELAY:3;          /*  = [25..27] = 0x0e000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int ADDRC:2;             /*  = [30..31] = 0xc0000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) EBU_BUSAPm_t_nonv;

typedef volatile EBU_BUSAPm_t_nonv EBU_BUSAPm_t;

/********************** EBU_BUSCONm_t *************************/
/*
   EBU_BUSCON0           "EBU Bus Configuration Register 0"
   EBU_BUSCON1           "EBU Bus Configuration Register 1"
   EBU_BUSCON2           "EBU Bus Configuration Register 2"
   EBU_BUSCON3           "EBU Bus Configuration Register 3"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MULTMAP:7;           /*  = [0..6] = 0x0000007f */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int WEAKPREF:1;          /*  = [8..8] = 0x00000100 */
      unsigned int AALIGN:1;            /*  = [9..9] = 0x00000200 */
      unsigned int CTYPE:2;             /*  = [10..11] = 0x00000c00 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int CMULT:3;             /*  = [13..15] = 0x0000e000 */
      unsigned int ENDIAN:1;            /*  = [16..16] = 0x00010000 */
      unsigned int DLOAD:1;             /*  = [17..17] = 0x00020000 */
      unsigned int PREFETCH:1;          /*  = [18..18] = 0x00040000 */
      unsigned int WAITINV:1;           /*  = [19..19] = 0x00080000 */
      unsigned int BCGEN:2;             /*  = [20..21] = 0x00300000 */
      unsigned int PORTW:2;             /*  = [22..23] = 0x00c00000 */
      unsigned int WAIT:2;              /*  = [24..25] = 0x03000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int AGEN:3;              /*  = [28..30] = 0x70000000 */
      unsigned int WRITE:1;             /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) EBU_BUSCONm_t_nonv;

typedef volatile EBU_BUSCONm_t_nonv EBU_BUSCONm_t;


#endif /* _HAVE_TRICORE_EBU_SHARETYPES_H_ */

