/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_PMU_TYPES_H_
#define _HAVE_TRICORE_PMU_TYPES_H_


/********************** FLASH0_FCON_t *************************/
/*
   FLASH0_FCON           "Flash Configuration Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int WSPFLASH:4;          /*  = [0..3] = 0x0000000f */
      unsigned int WSECPF:1;            /*  = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int WSDFLASH:4;          /*  = [8..11] = 0x00000f00 */
      unsigned int WSECDF:1;            /*  = [12..12] = 0x00001000 */
      unsigned int IDLE:1;              /*  = [13..13] = 0x00002000 */
      unsigned int ESLDIS:1;            /*  = [14..14] = 0x00004000 */
      unsigned int SLEEP:1;             /*  = [15..15] = 0x00008000 */
      unsigned int RPA:1;               /*  = [16..16] = 0x00010000 */
      unsigned int DCF:1;               /*  = [17..17] = 0x00020000 */
      unsigned int DDF:1;               /*  = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int DDFDMA:1;            /*  = [20..20] = 0x00100000 */
      unsigned int DDFPCP:1;            /*  = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int VOPERM:1;            /*  = [24..24] = 0x01000000 */
      unsigned int SQERM:1;             /*  = [25..25] = 0x02000000 */
      unsigned int PROERM:1;            /*  = [26..26] = 0x04000000 */
      unsigned int PFSBERM:1;           /*  = [27..27] = 0x08000000 */
      unsigned int DFSBERM:1;           /*  = [28..28] = 0x10000000 */
      unsigned int PFDBERM:1;           /*  = [29..29] = 0x20000000 */
      unsigned int DFDBERM:1;           /*  = [30..30] = 0x40000000 */
      unsigned int EOBM:1;              /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) FLASH0_FCON_t_nonv;

typedef volatile FLASH0_FCON_t_nonv FLASH0_FCON_t;

/********************** FLASH0_FSR_t *************************/
/*
   FLASH0_FSR            "Flash Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int PBUSY:1;             /*  = [0..0] = 0x00000001 */
      unsigned int FABUSY:1;            /*  = [1..1] = 0x00000002 */
      unsigned int D0BUSY:1;            /*  = [2..2] = 0x00000004 */
      unsigned int D1BUSY:1;            /*  = [3..3] = 0x00000008 */
      unsigned int PROG:1;              /*  = [4..4] = 0x00000010 */
      unsigned int ERASE:1;             /*  = [5..5] = 0x00000020 */
      unsigned int PFPAGE:1;            /*  = [6..6] = 0x00000040 */
      unsigned int DFPAGE:1;            /*  = [7..7] = 0x00000080 */
      unsigned int PFOPER:1;            /*  = [8..8] = 0x00000100 */
      unsigned int DFOPER:1;            /*  = [9..9] = 0x00000200 */
      unsigned int SQER:1;              /*  = [10..10] = 0x00000400 */
      unsigned int PROER:1;             /*  = [11..11] = 0x00000800 */
      unsigned int PFSBER:1;            /*  = [12..12] = 0x00001000 */
      unsigned int DFSBER:1;            /*  = [13..13] = 0x00002000 */
      unsigned int PFDBER:1;            /*  = [14..14] = 0x00004000 */
      unsigned int DFDBER:1;            /*  = [15..15] = 0x00008000 */
      unsigned int PROIN:1;             /*  = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int RPROIN:1;            /*  = [18..18] = 0x00040000 */
      unsigned int RPRODIS:1;           /*  = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int WPROIN0:1;           /*  = [21..21] = 0x00200000 */
      unsigned int WPROIN1:1;           /*  = [22..22] = 0x00400000 */
      unsigned int WPROIN2:1;           /*  = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int WPRODIS0:1;          /*  = [25..25] = 0x02000000 */
      unsigned int WPRODIS1:1;          /*  = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int SLM:1;               /*  = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int X:1;                 /*  = [30..30] = 0x40000000 */
      unsigned int VER:1;               /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) FLASH0_FSR_t_nonv;

typedef volatile FLASH0_FSR_t_nonv FLASH0_FSR_t;

/********************** FLASH0_ID_t *************************/
/*
   FLASH0_ID             "Flash Module Identification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MOD_REV:8;           /*  = [0..7] = 0x000000ff */
      unsigned int MOD_TYPE:8;          /*  = [8..15] = 0x0000ff00 */
      unsigned int MOD_NUMBER:16;       /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) FLASH0_ID_t_nonv;

typedef volatile FLASH0_ID_t_nonv FLASH0_ID_t;

/********************** FLASH0_MARD_t *************************/
/*
   FLASH0_MARD           "Margin Control Register DFLASH"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MARGIN0:2;           /*  = [0..1] = 0x00000003 */
      unsigned int MARGIN1:2;           /*  = [2..3] = 0x0000000c */
      unsigned int BNKSEL:1;            /*  = [4..4] = 0x00000010 */
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
      unsigned int TRAPDIS:1;           /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) FLASH0_MARD_t_nonv;

typedef volatile FLASH0_MARD_t_nonv FLASH0_MARD_t;

/********************** FLASH0_MARP_t *************************/
/*
   FLASH0_MARP           "Margin Control Register PFLASH"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MARGIN0:2;           /*  = [0..1] = 0x00000003 */
      unsigned int MARGIN1:2;           /*  = [2..3] = 0x0000000c */
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
      unsigned int TRAPDIS:1;           /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) FLASH0_MARP_t_nonv;

typedef volatile FLASH0_MARP_t_nonv FLASH0_MARP_t;

/********************** FLASH0_PROCON0_t *************************/
/*
   FLASH0_PROCON0        "Flash Protection Configuration Register User 0"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int S0L:1;               /*  = [0..0] = 0x00000001 */
      unsigned int S1L:1;               /*  = [1..1] = 0x00000002 */
      unsigned int S2L:1;               /*  = [2..2] = 0x00000004 */
      unsigned int S3L:1;               /*  = [3..3] = 0x00000008 */
      unsigned int S4L:1;               /*  = [4..4] = 0x00000010 */
      unsigned int S5L:1;               /*  = [5..5] = 0x00000020 */
      unsigned int S6L:1;               /*  = [6..6] = 0x00000040 */
      unsigned int S7L:1;               /*  = [7..7] = 0x00000080 */
      unsigned int S8L:1;               /*  = [8..8] = 0x00000100 */
      unsigned int S9L:1;               /*  = [9..9] = 0x00000200 */
      unsigned int S10_S11L:1;          /*  = [10..10] = 0x00000400 */
      unsigned int S12_S13L:1;          /*  = [11..11] = 0x00000800 */
      unsigned int S14_S15L:1;          /*  = [12..12] = 0x00001000 */
      unsigned int S16_S17L:1;          /*  = [13..13] = 0x00002000 */
      unsigned int DFEXPRO:1;           /*  = [14..14] = 0x00004000 */
      unsigned int RPRO:1;              /*  = [15..15] = 0x00008000 */
      unsigned int Reserved:16;         /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) FLASH0_PROCON0_t_nonv;

typedef volatile FLASH0_PROCON0_t_nonv FLASH0_PROCON0_t;

/********************** FLASH0_PROCON1_t *************************/
/*
   FLASH0_PROCON1        "Flash Protection Configuration Register User 1"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int S0L:1;               /*  = [0..0] = 0x00000001 */
      unsigned int S1L:1;               /*  = [1..1] = 0x00000002 */
      unsigned int S2L:1;               /*  = [2..2] = 0x00000004 */
      unsigned int S3L:1;               /*  = [3..3] = 0x00000008 */
      unsigned int S4L:1;               /*  = [4..4] = 0x00000010 */
      unsigned int S5L:1;               /*  = [5..5] = 0x00000020 */
      unsigned int S6L:1;               /*  = [6..6] = 0x00000040 */
      unsigned int S7L:1;               /*  = [7..7] = 0x00000080 */
      unsigned int S8L:1;               /*  = [8..8] = 0x00000100 */
      unsigned int S9L:1;               /*  = [9..9] = 0x00000200 */
      unsigned int S10_S11L:1;          /*  = [10..10] = 0x00000400 */
      unsigned int S12_S13L:1;          /*  = [11..11] = 0x00000800 */
      unsigned int S14_S15L:1;          /*  = [12..12] = 0x00001000 */
      unsigned int S16_S17L:1;          /*  = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int SPREC:1;             /*  = [16..16] = 0x00010000 */
      unsigned int Reserved:15;         /*  = [17..31] = 0xfffe0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) FLASH0_PROCON1_t_nonv;

typedef volatile FLASH0_PROCON1_t_nonv FLASH0_PROCON1_t;

/********************** FLASH0_PROCON2_t *************************/
/*
   FLASH0_PROCON2        "Flash Protection Configuration Register User 2"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int S0ROM:1;             /*  = [0..0] = 0x00000001 */
      unsigned int S1ROM:1;             /*  = [1..1] = 0x00000002 */
      unsigned int S2ROM:1;             /*  = [2..2] = 0x00000004 */
      unsigned int S3ROM:1;             /*  = [3..3] = 0x00000008 */
      unsigned int S4ROM:1;             /*  = [4..4] = 0x00000010 */
      unsigned int S5ROM:1;             /*  = [5..5] = 0x00000020 */
      unsigned int S6ROM:1;             /*  = [6..6] = 0x00000040 */
      unsigned int S7ROM:1;             /*  = [7..7] = 0x00000080 */
      unsigned int S8ROM:1;             /*  = [8..8] = 0x00000100 */
      unsigned int S9ROM:1;             /*  = [9..9] = 0x00000200 */
      unsigned int S10_S11ROM:1;        /*  = [10..10] = 0x00000400 */
      unsigned int S12_S13ROM:1;        /*  = [11..11] = 0x00000800 */
      unsigned int S14_S15ROM:1;        /*  = [12..12] = 0x00001000 */
      unsigned int S16_S17ROM:1;        /*  = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int Reserved:16;         /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) FLASH0_PROCON2_t_nonv;

typedef volatile FLASH0_PROCON2_t_nonv FLASH0_PROCON2_t;

/********************** PMU0_ID_t *************************/
/*
   PMU0_ID               "PMU0 Identification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MOD_REV:8;           /*  = [0..7] = 0x000000ff */
      unsigned int MOD_TYPE:8;          /*  = [8..15] = 0x0000ff00 */
      unsigned int MOD_NUMBER:16;       /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) PMU0_ID_t_nonv;

typedef volatile PMU0_ID_t_nonv PMU0_ID_t;

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

