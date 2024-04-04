/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_EBU_SHARETYPES_H_
#define _HAVE_TRICORE_EBU_SHARETYPES_H_


/********************** EBU_ADDRSELm_t *************************/
/*
   EBU_ADDRSEL0          "EBU_LMB Address Select Register 0"
   EBU_ADDRSEL1          "EBU_LMB Address Select Register 1"
   EBU_ADDRSEL2          "EBU_LMB Address Select Register 2"
   EBU_ADDRSEL3          "EBU_LMB Address Select Register 3"
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
   EBU_BUSAP0            "EBU_LMB Bus Access Par. Reg.0"
   EBU_BUSAP1            "EBU_LMB Bus Access Par. Reg.1"
   EBU_BUSAP2            "EBU_LMB Bus Access Par. Reg.2"
   EBU_BUSAP3            "EBU_LMB Bus Access Par. Reg.3"
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
      unsigned int AHOLDC:2;            /*  = [28..29] = 0x30000000 */
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
      unsigned int WEAKPREFETCH:1;      /*  = [8..8] = 0x00000100 */
      unsigned int AALIGN:1;            /*  = [9..9] = 0x00000200 */
      unsigned int CTYPE:2;             /*  = [10..11] = 0x00000c00 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int CMULT:3;             /*  = [13..15] = 0x0000e000 */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
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

/********************** EBU_SDRMCONm_t *************************/
/*
   EBU_SDRMCON0          "EBU_LMB SDRAM Control Register 0"
   EBU_SDRMCON1          "EBU_LMB SDRAM Control Register 1"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CRAS:4;              /*  = [0..3] = 0x0000000f */
      unsigned int CRFSH:4;             /*  = [4..7] = 0x000000f0 */
      unsigned int CRSC:2;              /*  = [8..9] = 0x00000300 */
      unsigned int CRP:2;               /*  = [10..11] = 0x00000c00 */
      unsigned int AWIDTH:2;            /*  = [12..13] = 0x00003000 */
      unsigned int CRCD:2;              /*  = [14..15] = 0x0000c000 */
      unsigned int CRC:3;               /*  = [16..18] = 0x00070000 */
      unsigned int PAGEM:3;             /*  = [19..21] = 0x00380000 */
      unsigned int BANKM:3;             /*  = [22..24] = 0x01c00000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int DTALTNCY:4;          /*  = [28..31] = 0xf0000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) EBU_SDRMCONm_t_nonv;

typedef volatile EBU_SDRMCONm_t_nonv EBU_SDRMCONm_t;

/********************** EBU_SDRMODm_t *************************/
/*
   EBU_SDRMOD0           "EBU_LMB SDRAM Mode Register 0"
   EBU_SDRMOD1           "EBU_LMB SDRAM Mode Register 1"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int BURSTL:3;            /*  = [0..2] = 0x00000007 */
      unsigned int BTYP:1;              /*  = [3..3] = 0x00000008 */
      unsigned int CASLAT:3;            /*  = [4..6] = 0x00000070 */
      unsigned int OPMODE:7;            /*  = [7..13] = 0x00003f80 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
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
} __attribute__((aligned(4))) EBU_SDRMODm_t_nonv;

typedef volatile EBU_SDRMODm_t_nonv EBU_SDRMODm_t;

/********************** EBU_SDRMREFm_t *************************/
/*
   EBU_SDRMREF0          "EBU_LMB SDRAM Refresh Register 0"
   EBU_SDRMREF1          "EBU_LMB SDRAM Refresh Register 0"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int REFRESHC:6;          /*  = [0..5] = 0x0000003f */
      unsigned int REFRESHR:3;          /*  = [6..8] = 0x000001c0 */
      unsigned int SELFREXST:1;         /*  = [9..9] = 0x00000200 */
      unsigned int SELFREX:1;           /*  = [10..10] = 0x00000400 */
      unsigned int SELFRENST:1;         /*  = [11..11] = 0x00000800 */
      unsigned int SELFREN:1;           /*  = [12..12] = 0x00001000 */
      unsigned int AUTOSELFR:1;         /*  = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
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
} __attribute__((aligned(4))) EBU_SDRMREFm_t_nonv;

typedef volatile EBU_SDRMREFm_t_nonv EBU_SDRMREFm_t;

/********************** EBU_SDRSTATm_t *************************/
/*
   EBU_SDRSTAT0          "EBU_LMB SDRAM Status Register 0"
   EBU_SDRSTAT1          "EBU_LMB SDRAM Status Register 1"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int REFERR:1;            /*  = [0..0] = 0x00000001 */
      unsigned int SDRMBUSY:1;          /*  = [1..1] = 0x00000002 */
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
      unsigned int _bit16:1;            /* 0 = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
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
} __attribute__((aligned(4))) EBU_SDRSTATm_t_nonv;

typedef volatile EBU_SDRSTATm_t_nonv EBU_SDRSTATm_t;


#endif /* _HAVE_TRICORE_EBU_SHARETYPES_H_ */

