/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_EBU_TYPES_H_
#define _HAVE_TRICORE_EBU_TYPES_H_


/********************** EBU_BFCON_t *************************/
/*
   EBU_BFCON             "EBU Burst Flash Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int FETBLEN0:4;          /*  = [0..3] = 0x0000000f */
      unsigned int FBBMSEL0:1;          /*  = [4..4] = 0x00000010 */
      unsigned int WAITFUNC0:1;         /*  = [5..5] = 0x00000020 */
      unsigned int EXTCLOCK:2;          /*  = [6..7] = 0x000000c0 */
      unsigned int BFCMSEL:1;           /*  = [8..8] = 0x00000100 */
      unsigned int EBSE0:1;             /*  = [9..9] = 0x00000200 */
      unsigned int DBA0:1;              /*  = [10..10] = 0x00000400 */
      unsigned int FDBKEN:1;            /*  = [11..11] = 0x00000800 */
      unsigned int DTALTNCY:4;          /*  = [12..15] = 0x0000f000 */
      unsigned int FETBLEN1:4;          /*  = [16..19] = 0x000f0000 */
      unsigned int FBBMSEL1:1;          /*  = [20..20] = 0x00100000 */
      unsigned int WAITFUNC1:1;         /*  = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int EBSE1:1;             /*  = [25..25] = 0x02000000 */
      unsigned int DBA1:1;              /*  = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) EBU_BFCON_t_nonv;

typedef volatile EBU_BFCON_t_nonv EBU_BFCON_t;

/********************** EBU_CLC_t *************************/
/*
   EBU_CLC               "EBU Clock Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DISR:1;              /*  = [0..0] = 0x00000001 */
      unsigned int DISS:1;              /*  = [1..1] = 0x00000002 */
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
} __attribute__((aligned(4))) EBU_CLC_t_nonv;

typedef volatile EBU_CLC_t_nonv EBU_CLC_t;

/********************** EBU_CON_t *************************/
/*
   EBU_CON               "EBU Configuration Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0..0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1..1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int EXTLOCK:1;           /*  = [4..4] = 0x00000010 */
      unsigned int ARBSYNC:1;           /*  = [5..5] = 0x00000020 */
      unsigned int ARBMODE:2;           /*  = [6..7] = 0x000000c0 */
      unsigned int TIMEOUTC:8;          /*  = [8..15] = 0x0000ff00 */
      unsigned int GLOBALCS:4;          /*  = [16..19] = 0x000f0000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int CS0FAM:1;            /*  = [27..27] = 0x08000000 */
      unsigned int EMUFAM:1;            /*  = [28..28] = 0x10000000 */
      unsigned int BFSSS:1;             /*  = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) EBU_CON_t_nonv;

typedef volatile EBU_CON_t_nonv EBU_CON_t;

/********************** EBU_EMUAS_t *************************/
/*
   EBU_EMUAS             "EBU Emulator Address Select Register"
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
} __attribute__((aligned(4))) EBU_EMUAS_t_nonv;

typedef volatile EBU_EMUAS_t_nonv EBU_EMUAS_t;

/********************** EBU_EMUBAP_t *************************/
/*
   EBU_EMUBAP            "EBU Emulator Bus Access Parameter Register"
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
} __attribute__((aligned(4))) EBU_EMUBAP_t_nonv;

typedef volatile EBU_EMUBAP_t_nonv EBU_EMUBAP_t;

/********************** EBU_EMUBC_t *************************/
/*
   EBU_EMUBC             "EBU Emulator Bus Configuration Register"
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
} __attribute__((aligned(4))) EBU_EMUBC_t_nonv;

typedef volatile EBU_EMUBC_t_nonv EBU_EMUBC_t;

/********************** EBU_EMUOVL_t *************************/
/*
   EBU_EMUOVL            "EBU Emulator Overlay Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int OVERLAY:4;           /*  = [0..3] = 0x0000000f */
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
} __attribute__((aligned(4))) EBU_EMUOVL_t_nonv;

typedef volatile EBU_EMUOVL_t_nonv EBU_EMUOVL_t;

/********************** EBU_ID_t *************************/
/*
   EBU_ID                "EBU Module Identification Register"
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
} __attribute__((aligned(4))) EBU_ID_t_nonv;

typedef volatile EBU_ID_t_nonv EBU_ID_t;

/********************** EBU_USERCON_t *************************/
/*
   EBU_USERCON           "EBU Test/Control Configuration Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DIP:1;               /*  = [0..0] = 0x00000001 */
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
} __attribute__((aligned(4))) EBU_USERCON_t_nonv;

typedef volatile EBU_USERCON_t_nonv EBU_USERCON_t;


#endif /* _HAVE_TRICORE_EBU_TYPES_H_ */

