/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_FLASH_TYPES_H_
#define _HAVE_TRICORE_FLASH_TYPES_H_


/********************** FLASH_FCON_t *************************/
/*
   FLASH_FCON            "Flash Configuration Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int WSPFLASH:3;          /*  = [0..2] = 0x00000007 */
      unsigned int WSECPF:1;            /*  = [3..3] = 0x00000008 */
      unsigned int WSWLHIT:3;           /*  = [4..6] = 0x00000070 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int WSDFLASH:3;          /*  = [8..10] = 0x00000700 */
      unsigned int WSECDF:1;            /*  = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int ESLDIS:1;            /*  = [14..14] = 0x00004000 */
      unsigned int SLEEP:1;             /*  = [15..15] = 0x00008000 */
      unsigned int RPA:1;               /*  = [16..16] = 0x00010000 */
      unsigned int DCF:1;               /*  = [17..17] = 0x00020000 */
      unsigned int DDF:1;               /*  = [18..18] = 0x00040000 */
      unsigned int DDFDBG:1;            /*  = [19..19] = 0x00080000 */
      unsigned int DDFDMA:1;            /*  = [20..20] = 0x00100000 */
      unsigned int DDFPCP:1;            /*  = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int SQERM:1;             /*  = [25..25] = 0x02000000 */
      unsigned int PROERM:1;            /*  = [26..26] = 0x04000000 */
      unsigned int PFSBERM:1;           /*  = [27..27] = 0x08000000 */
      unsigned int DFSBERM:1;           /*  = [28..28] = 0x10000000 */
      unsigned int PFDBERM:1;           /*  = [29..29] = 0x20000000 */
      unsigned int DFDBERM:1;           /*  = [30..30] = 0x40000000 */
      unsigned int EOBM:1;              /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) FLASH_FCON_t_nonv;

typedef volatile FLASH_FCON_t_nonv FLASH_FCON_t;

/********************** FLASH_FSR_t *************************/
/*
   FLASH_FSR             "Flash Status Register"
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
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int VER:1;               /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) FLASH_FSR_t_nonv;

typedef volatile FLASH_FSR_t_nonv FLASH_FSR_t;

/********************** FLASH_ID_t *************************/
/*
   FLASH_ID              "Flash Module Identification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0..0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1..1] = 0x00000002 */
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
} __attribute__((aligned(4))) FLASH_ID_t_nonv;

typedef volatile FLASH_ID_t_nonv FLASH_ID_t;

/********************** FLASH_MARD_t *************************/
/*
   FLASH_MARD            "Flash Margin Control Register DFlash"
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
} __attribute__((aligned(4))) FLASH_MARD_t_nonv;

typedef volatile FLASH_MARD_t_nonv FLASH_MARD_t;

/********************** FLASH_MARP_t *************************/
/*
   FLASH_MARP            "Flash Margin Control Register PFlash"
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
} __attribute__((aligned(4))) FLASH_MARP_t_nonv;

typedef volatile FLASH_MARP_t_nonv FLASH_MARP_t;

/********************** FLASH_PROCON0_t *************************/
/*
   FLASH_PROCON0         "Flash Protection Configuration Register User 0"
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
      unsigned int S10L:1;              /*  = [10..10] = 0x00000400 */
      unsigned int S11L:1;              /*  = [11..11] = 0x00000800 */
      unsigned int S12L:1;              /*  = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int RPRO:1;              /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) FLASH_PROCON0_t_nonv;

typedef volatile FLASH_PROCON0_t_nonv FLASH_PROCON0_t;


#endif /* _HAVE_TRICORE_FLASH_TYPES_H_ */

