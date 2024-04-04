/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_SCU_TYPES_H_
#define _HAVE_TRICORE_SCU_TYPES_H_


/********************** CHIPID_t *************************/
/*
   CHIPID                "Chip Identification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CHREV:8;             /*  = [0..7] = 0x000000ff */
      unsigned int CHID:8;              /*  = [8..15] = 0x0000ff00 */
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
} __attribute__((aligned(4))) CHIPID_t_nonv;

typedef volatile CHIPID_t_nonv CHIPID_t;

/********************** EIFR_t *************************/
/*
   EIFR                  "External Input Flag Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int INTF0:1;             /*  = [0..0] = 0x00000001 */
      unsigned int INTF1:1;             /*  = [1..1] = 0x00000002 */
      unsigned int INTF2:1;             /*  = [2..2] = 0x00000004 */
      unsigned int INTF3:1;             /*  = [3..3] = 0x00000008 */
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
} __attribute__((aligned(4))) EIFR_t_nonv;

typedef volatile EIFR_t_nonv EIFR_t;

/********************** FMR_t *************************/
/*
   FMR                   "Flag Modification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int FS0:1;               /*  = [0..0] = 0x00000001 */
      unsigned int FS1:1;               /*  = [1..1] = 0x00000002 */
      unsigned int FS2:1;               /*  = [2..2] = 0x00000004 */
      unsigned int FS3:1;               /*  = [3..3] = 0x00000008 */
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
      unsigned int FC0:1;               /*  = [16..16] = 0x00010000 */
      unsigned int FC1:1;               /*  = [17..17] = 0x00020000 */
      unsigned int FC2:1;               /*  = [18..18] = 0x00040000 */
      unsigned int FC3:1;               /*  = [19..19] = 0x00080000 */
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
} __attribute__((aligned(4))) FMR_t_nonv;

typedef volatile FMR_t_nonv FMR_t;

/********************** MANID_t *************************/
/*
   MANID                 "Manufacturer Identification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DEPT:5;              /*  = [0..4] = 0x0000001f */
      unsigned int MANUF:11;            /*  = [5..15] = 0x0000ffe0 */
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
} __attribute__((aligned(4))) MANID_t_nonv;

typedef volatile MANID_t_nonv MANID_t;

/********************** NMISR_t *************************/
/*
   NMISR                 "NMI Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int NMIEXT:1;            /*  = [0..0] = 0x00000001 */
      unsigned int NMIPLL:1;            /*  = [1..1] = 0x00000002 */
      unsigned int NMIWDT:1;            /*  = [2..2] = 0x00000004 */
      unsigned int NMIPER:1;            /*  = [3..3] = 0x00000008 */
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
} __attribute__((aligned(4))) NMISR_t_nonv;

typedef volatile NMISR_t_nonv NMISR_t;

/********************** OSC_CON_t *************************/
/*
   OSC_CON               "Oscillator Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MOSC:1;              /*  = [0..0] = 0x00000001 */
      unsigned int OSCR:1;              /*  = [1..1] = 0x00000002 */
      unsigned int ORDRES:1;            /*  = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int OGC:1;               /*  = [4..4] = 0x00000010 */
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
} __attribute__((aligned(4))) OSC_CON_t_nonv;

typedef volatile OSC_CON_t_nonv OSC_CON_t;

/********************** PDRR_t *************************/
/*
   PDRR                  "Pattern Detection Result Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int PDR0:1;              /*  = [0..0] = 0x00000001 */
      unsigned int PDR1:1;              /*  = [1..1] = 0x00000002 */
      unsigned int PDR2:1;              /*  = [2..2] = 0x00000004 */
      unsigned int PDR3:1;              /*  = [3..3] = 0x00000008 */
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
} __attribute__((aligned(4))) PDRR_t_nonv;

typedef volatile PDRR_t_nonv PDRR_t;

/********************** PLL_CLC_t *************************/
/*
   PLL_CLC               "PLL Clock Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int LOCK:1;              /*  = [0..0] = 0x00000001 */
      unsigned int RESLD:1;             /*  = [1..1] = 0x00000002 */
      unsigned int SYSFS:1;             /*  = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int VCOBYP:1;            /*  = [5..5] = 0x00000020 */
      unsigned int VCOSEL:2;            /*  = [6..7] = 0x000000c0 */
      unsigned int KDIV:4;              /*  = [8..11] = 0x00000f00 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int PDIV:3;              /*  = [13..15] = 0x0000e000 */
      unsigned int NDIV:7;              /*  = [16..22] = 0x007f0000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int OSCDISC:1;           /*  = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int BYPPIN:1;            /*  = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) PLL_CLC_t_nonv;

typedef volatile PLL_CLC_t_nonv PLL_CLC_t;

/********************** PMG_CSR_t *************************/
/*
   PMG_CSR               "Power Management Control and Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int REQSLP:2;            /*  = [0..1] = 0x00000003 */
      unsigned int _bit2:1;             /* 0 = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int PMST:3;              /*  = [8..10] = 0x00000700 */
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
} __attribute__((aligned(4))) PMG_CSR_t_nonv;

typedef volatile PMG_CSR_t_nonv PMG_CSR_t;

/********************** RST_REQ_t *************************/
/*
   RST_REQ               "Reset Request Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RRSTM:1;             /*  = [0..0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1..1] = 0x00000002 */
      unsigned int RREXT:1;             /*  = [2..2] = 0x00000004 */
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
      unsigned int SWCFG:4;             /*  = [16..19] = 0x000f0000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int SWBRKIN:1;           /*  = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int SWBOOT:1;            /*  = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) RST_REQ_t_nonv;

typedef volatile RST_REQ_t_nonv RST_REQ_t;

/********************** RST_SR_t *************************/
/*
   RST_SR                "Reset Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RSSTM:1;             /*  = [0..0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1..1] = 0x00000002 */
      unsigned int RSEXT:1;             /*  = [2..2] = 0x00000004 */
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
      unsigned int HWCFG:4;             /*  = [16..19] = 0x000f0000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int HWBRKIN:1;           /*  = [21..21] = 0x00200000 */
      unsigned int TMPLS:1;             /*  = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int PWORST:1;            /*  = [27..27] = 0x08000000 */
      unsigned int HDRST:1;             /*  = [28..28] = 0x10000000 */
      unsigned int SFTRST:1;            /*  = [29..29] = 0x20000000 */
      unsigned int WDTRST:1;            /*  = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) RST_SR_t_nonv;

typedef volatile RST_SR_t_nonv RST_SR_t;

/********************** RTID_t *************************/
/*
   RTID                  "Redesign Tracing Identification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RT0:1;               /*  = [0..0] = 0x00000001 */
      unsigned int RT1:1;               /*  = [1..1] = 0x00000002 */
      unsigned int RT2:1;               /*  = [2..2] = 0x00000004 */
      unsigned int RT3:1;               /*  = [3..3] = 0x00000008 */
      unsigned int RT4:1;               /*  = [4..4] = 0x00000010 */
      unsigned int RT5:1;               /*  = [5..5] = 0x00000020 */
      unsigned int RT6:1;               /*  = [6..6] = 0x00000040 */
      unsigned int RT7:1;               /*  = [7..7] = 0x00000080 */
      unsigned int RT8:1;               /*  = [8..8] = 0x00000100 */
      unsigned int RT9:1;               /*  = [9..9] = 0x00000200 */
      unsigned int RT10:1;              /*  = [10..10] = 0x00000400 */
      unsigned int RT11:1;              /*  = [11..11] = 0x00000800 */
      unsigned int RT12:1;              /*  = [12..12] = 0x00001000 */
      unsigned int RT13:1;              /*  = [13..13] = 0x00002000 */
      unsigned int RT14:1;              /*  = [14..14] = 0x00004000 */
      unsigned int RT15:1;              /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) RTID_t_nonv;

typedef volatile RTID_t_nonv RTID_t;

/********************** SCU_CON_t *************************/
/*
   SCU_CON               "SCU Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int FIEN:1;              /*  = [0..0] = 0x00000001 */
      unsigned int CSEEN:1;             /*  = [1..1] = 0x00000002 */
      unsigned int CSOEN:1;             /*  = [2..2] = 0x00000004 */
      unsigned int CSGEN:1;             /*  = [3..3] = 0x00000008 */
      unsigned int EPUD:1;              /*  = [4..4] = 0x00000010 */
      unsigned int NMIEN:1;             /*  = [5..5] = 0x00000020 */
      unsigned int AN7TM:1;             /*  = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int DTSON:1;             /*  = [9..9] = 0x00000200 */
      unsigned int LDEN:1;              /*  = [10..10] = 0x00000400 */
      unsigned int RPARAV:1;            /*  = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int SLSPDR:1;            /*  = [16..16] = 0x00010000 */
      unsigned int SSC0PDR:1;           /*  = [17..17] = 0x00020000 */
      unsigned int GIN1S:2;             /*  = [18..19] = 0x000c0000 */
      unsigned int ZERO:4;              /*  = [20..23] = 0x00f00000 */
      unsigned int ONE:8;               /*  = [24..31] = 0xff000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) SCU_CON_t_nonv;

typedef volatile SCU_CON_t_nonv SCU_CON_t;

/********************** SCU_EMSR_t *************************/
/*
   SCU_EMSR              "SCU Emergency Stop Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int POL:1;               /*  = [0..0] = 0x00000001 */
      unsigned int MODE:1;              /*  = [1..1] = 0x00000002 */
      unsigned int ENON:1;              /*  = [2..2] = 0x00000004 */
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
      unsigned int EMSF:1;              /*  = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int EMSFM:2;             /*  = [24..25] = 0x03000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) SCU_EMSR_t_nonv;

typedef volatile SCU_EMSR_t_nonv SCU_EMSR_t;

/********************** SCU_ID_t *************************/
/*
   SCU_ID                "SCU Module Identification Register"
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
} __attribute__((aligned(4))) SCU_ID_t_nonv;

typedef volatile SCU_ID_t_nonv SCU_ID_t;

/********************** SCU_PETCR_t *************************/
/*
   SCU_PETCR             "SCU Parity Error Trap Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int PEN0:1;              /*  = [0..0] = 0x00000001 */
      unsigned int PEN1:1;              /*  = [1..1] = 0x00000002 */
      unsigned int PEN2:1;              /*  = [2..2] = 0x00000004 */
      unsigned int PEN3:1;              /*  = [3..3] = 0x00000008 */
      unsigned int PEN4:1;              /*  = [4..4] = 0x00000010 */
      unsigned int PEN5:1;              /*  = [5..5] = 0x00000020 */
      unsigned int PEN6:1;              /*  = [6..6] = 0x00000040 */
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
} __attribute__((aligned(4))) SCU_PETCR_t_nonv;

typedef volatile SCU_PETCR_t_nonv SCU_PETCR_t;

/********************** SCU_PETSR_t *************************/
/*
   SCU_PETSR             "SCU Parity Error Trap Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int PFL0:1;              /*  = [0..0] = 0x00000001 */
      unsigned int PFL1:1;              /*  = [1..1] = 0x00000002 */
      unsigned int PFL2:1;              /*  = [2..2] = 0x00000004 */
      unsigned int PFL3:1;              /*  = [3..3] = 0x00000008 */
      unsigned int PFL4:1;              /*  = [4..4] = 0x00000010 */
      unsigned int PFL5:1;              /*  = [5..5] = 0x00000020 */
      unsigned int PFL6:1;              /*  = [6..6] = 0x00000040 */
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
} __attribute__((aligned(4))) SCU_PETSR_t_nonv;

typedef volatile SCU_PETSR_t_nonv SCU_PETSR_t;

/********************** SCU_PTCON_t *************************/
/*
   SCU_PTCON             "SCU Pad Test Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int PTMLC:8;             /*  = [0..7] = 0x000000ff */
      unsigned int ENOUT0:1;            /*  = [8..8] = 0x00000100 */
      unsigned int ENOUT1:1;            /*  = [9..9] = 0x00000200 */
      unsigned int ENOUT2:1;            /*  = [10..10] = 0x00000400 */
      unsigned int ENOUT3:1;            /*  = [11..11] = 0x00000800 */
      unsigned int RDSS0:1;             /*  = [12..12] = 0x00001000 */
      unsigned int RDSS1:1;             /*  = [13..13] = 0x00002000 */
      unsigned int RDSS2:1;             /*  = [14..14] = 0x00004000 */
      unsigned int RDSS3:1;             /*  = [15..15] = 0x00008000 */
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
      unsigned int PTMEN:1;             /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) SCU_PTCON_t_nonv;

typedef volatile SCU_PTCON_t_nonv SCU_PTCON_t;

/********************** SCU_PTDAT0_t *************************/
/*
   SCU_PTDAT0            "SCU Pad Test Data Register 0"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int A0:1;                /*  = [0..0] = 0x00000001 */
      unsigned int A1:1;                /*  = [1..1] = 0x00000002 */
      unsigned int A2:1;                /*  = [2..2] = 0x00000004 */
      unsigned int A3:1;                /*  = [3..3] = 0x00000008 */
      unsigned int A4:1;                /*  = [4..4] = 0x00000010 */
      unsigned int A5:1;                /*  = [5..5] = 0x00000020 */
      unsigned int A6:1;                /*  = [6..6] = 0x00000040 */
      unsigned int A7:1;                /*  = [7..7] = 0x00000080 */
      unsigned int A8:1;                /*  = [8..8] = 0x00000100 */
      unsigned int A9:1;                /*  = [9..9] = 0x00000200 */
      unsigned int A10:1;               /*  = [10..10] = 0x00000400 */
      unsigned int A11:1;               /*  = [11..11] = 0x00000800 */
      unsigned int A12:1;               /*  = [12..12] = 0x00001000 */
      unsigned int A13:1;               /*  = [13..13] = 0x00002000 */
      unsigned int A14:1;               /*  = [14..14] = 0x00004000 */
      unsigned int A15:1;               /*  = [15..15] = 0x00008000 */
      unsigned int A16:1;               /*  = [16..16] = 0x00010000 */
      unsigned int A17:1;               /*  = [17..17] = 0x00020000 */
      unsigned int A18:1;               /*  = [18..18] = 0x00040000 */
      unsigned int A19:1;               /*  = [19..19] = 0x00080000 */
      unsigned int A20:1;               /*  = [20..20] = 0x00100000 */
      unsigned int A21:1;               /*  = [21..21] = 0x00200000 */
      unsigned int A22:1;               /*  = [22..22] = 0x00400000 */
      unsigned int A23:1;               /*  = [23..23] = 0x00800000 */
      unsigned int BC0:1;               /*  = [24..24] = 0x01000000 */
      unsigned int BC1:1;               /*  = [25..25] = 0x02000000 */
      unsigned int BC2:1;               /*  = [26..26] = 0x04000000 */
      unsigned int BC3:1;               /*  = [27..27] = 0x08000000 */
      unsigned int RD:1;                /*  = [28..28] = 0x10000000 */
      unsigned int RDWR:1;              /*  = [29..29] = 0x20000000 */
      unsigned int ADV:1;               /*  = [30..30] = 0x40000000 */
      unsigned int MRW:1;               /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) SCU_PTDAT0_t_nonv;

typedef volatile SCU_PTDAT0_t_nonv SCU_PTDAT0_t;

/********************** SCU_PTDAT1_t *************************/
/*
   SCU_PTDAT1            "SCU Pad Test Data Register 1"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TR0:1;               /*  = [0..0] = 0x00000001 */
      unsigned int TR1:1;               /*  = [1..1] = 0x00000002 */
      unsigned int TR2:1;               /*  = [2..2] = 0x00000004 */
      unsigned int TR3:1;               /*  = [3..3] = 0x00000008 */
      unsigned int TR4:1;               /*  = [4..4] = 0x00000010 */
      unsigned int TR5:1;               /*  = [5..5] = 0x00000020 */
      unsigned int TR6:1;               /*  = [6..6] = 0x00000040 */
      unsigned int TR7:1;               /*  = [7..7] = 0x00000080 */
      unsigned int TR8:1;               /*  = [8..8] = 0x00000100 */
      unsigned int TR9:1;               /*  = [9..9] = 0x00000200 */
      unsigned int TR10:1;              /*  = [10..10] = 0x00000400 */
      unsigned int TR11:1;              /*  = [11..11] = 0x00000800 */
      unsigned int TR12:1;              /*  = [12..12] = 0x00001000 */
      unsigned int TR13:1;              /*  = [13..13] = 0x00002000 */
      unsigned int TR14:1;              /*  = [14..14] = 0x00004000 */
      unsigned int TR15:1;              /*  = [15..15] = 0x00008000 */
      unsigned int BRKIN:1;             /*  = [16..16] = 0x00010000 */
      unsigned int BRKOUT:1;            /*  = [17..17] = 0x00020000 */
      unsigned int TRCLK:1;             /*  = [18..18] = 0x00040000 */
      unsigned int HDRST:1;             /*  = [19..19] = 0x00080000 */
      unsigned int NMI:1;               /*  = [20..20] = 0x00100000 */
      unsigned int HOLD:1;              /*  = [21..21] = 0x00200000 */
      unsigned int HLDA:1;              /*  = [22..22] = 0x00400000 */
      unsigned int BREQ:1;              /*  = [23..23] = 0x00800000 */
      unsigned int CS0:1;               /*  = [24..24] = 0x01000000 */
      unsigned int CS1:1;               /*  = [25..25] = 0x02000000 */
      unsigned int CS2:1;               /*  = [26..26] = 0x04000000 */
      unsigned int CS3:1;               /*  = [27..27] = 0x08000000 */
      unsigned int CSCOMB:1;            /*  = [28..28] = 0x10000000 */
      unsigned int WAIT:1;              /*  = [29..29] = 0x20000000 */
      unsigned int BAA:1;               /*  = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) SCU_PTDAT1_t_nonv;

typedef volatile SCU_PTDAT1_t_nonv SCU_PTDAT1_t;

/********************** SCU_PTDAT2_t *************************/
/*
   SCU_PTDAT2            "SCU Pad Test Data Register 2"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int BYPASS:1;            /*  = [0..0] = 0x00000001 */
      unsigned int BFCLKI:1;            /*  = [1..1] = 0x00000002 */
      unsigned int BFCLKO:1;            /*  = [2..2] = 0x00000004 */
      unsigned int TRST:1;              /*  = [3..3] = 0x00000008 */
      unsigned int TCK:1;               /*  = [4..4] = 0x00000010 */
      unsigned int TDI:1;               /*  = [5..5] = 0x00000020 */
      unsigned int TDO:1;               /*  = [6..6] = 0x00000040 */
      unsigned int TMS:1;               /*  = [7..7] = 0x00000080 */
      unsigned int TESTMODE:1;          /*  = [8..8] = 0x00000100 */
      unsigned int TSTRES:1;            /*  = [9..9] = 0x00000200 */
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
      unsigned int SLSO0:1;             /*  = [26..26] = 0x04000000 */
      unsigned int SLSO1:1;             /*  = [27..27] = 0x08000000 */
      unsigned int MTSR0:1;             /*  = [28..28] = 0x10000000 */
      unsigned int MRST0:1;             /*  = [29..29] = 0x20000000 */
      unsigned int SCLK0:1;             /*  = [30..30] = 0x40000000 */
      unsigned int SLSI0:1;             /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) SCU_PTDAT2_t_nonv;

typedef volatile SCU_PTDAT2_t_nonv SCU_PTDAT2_t;

/********************** SCU_PTDAT3_t *************************/
/*
   SCU_PTDAT3            "SCU Pad Test Data Register 3"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int D0:1;                /*  = [0..0] = 0x00000001 */
      unsigned int D1:1;                /*  = [1..1] = 0x00000002 */
      unsigned int D2:1;                /*  = [2..2] = 0x00000004 */
      unsigned int D3:1;                /*  = [3..3] = 0x00000008 */
      unsigned int D4:1;                /*  = [4..4] = 0x00000010 */
      unsigned int D5:1;                /*  = [5..5] = 0x00000020 */
      unsigned int D6:1;                /*  = [6..6] = 0x00000040 */
      unsigned int D7:1;                /*  = [7..7] = 0x00000080 */
      unsigned int D8:1;                /*  = [8..8] = 0x00000100 */
      unsigned int D9:1;                /*  = [9..9] = 0x00000200 */
      unsigned int D10:1;               /*  = [10..10] = 0x00000400 */
      unsigned int D11:1;               /*  = [11..11] = 0x00000800 */
      unsigned int D12:1;               /*  = [12..12] = 0x00001000 */
      unsigned int D13:1;               /*  = [13..13] = 0x00002000 */
      unsigned int D14:1;               /*  = [14..14] = 0x00004000 */
      unsigned int D15:1;               /*  = [15..15] = 0x00008000 */
      unsigned int D16:1;               /*  = [16..16] = 0x00010000 */
      unsigned int D17:1;               /*  = [17..17] = 0x00020000 */
      unsigned int D18:1;               /*  = [18..18] = 0x00040000 */
      unsigned int D19:1;               /*  = [19..19] = 0x00080000 */
      unsigned int D20:1;               /*  = [20..20] = 0x00100000 */
      unsigned int D21:1;               /*  = [21..21] = 0x00200000 */
      unsigned int D22:1;               /*  = [22..22] = 0x00400000 */
      unsigned int D23:1;               /*  = [23..23] = 0x00800000 */
      unsigned int D24:1;               /*  = [24..24] = 0x01000000 */
      unsigned int D25:1;               /*  = [25..25] = 0x02000000 */
      unsigned int D26:1;               /*  = [26..26] = 0x04000000 */
      unsigned int D27:1;               /*  = [27..27] = 0x08000000 */
      unsigned int D28:1;               /*  = [28..28] = 0x10000000 */
      unsigned int D29:1;               /*  = [29..29] = 0x20000000 */
      unsigned int D30:1;               /*  = [30..30] = 0x40000000 */
      unsigned int D31:1;               /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) SCU_PTDAT3_t_nonv;

typedef volatile SCU_PTDAT3_t_nonv SCU_PTDAT3_t;

/********************** SCU_SCLIR_t *************************/
/*
   SCU_SCLIR             "SCU Software Configuration Latched Inputs Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SW0PT0:1;            /*  = [0..0] = 0x00000001 */
      unsigned int SWOPT1:1;            /*  = [1..1] = 0x00000002 */
      unsigned int SWOPT2:1;            /*  = [2..2] = 0x00000004 */
      unsigned int SWOPT3:1;            /*  = [3..3] = 0x00000008 */
      unsigned int SWOPT4:1;            /*  = [4..4] = 0x00000010 */
      unsigned int SWOPT5:1;            /*  = [5..5] = 0x00000020 */
      unsigned int SWOPT6:1;            /*  = [6..6] = 0x00000040 */
      unsigned int SWOPT7:1;            /*  = [7..7] = 0x00000080 */
      unsigned int SWOPT8:1;            /*  = [8..8] = 0x00000100 */
      unsigned int SWOPT9:1;            /*  = [9..9] = 0x00000200 */
      unsigned int SWOPT10:1;           /*  = [10..10] = 0x00000400 */
      unsigned int SWOPT11:1;           /*  = [11..11] = 0x00000800 */
      unsigned int SWOPT12:1;           /*  = [12..12] = 0x00001000 */
      unsigned int SWOPT13:1;           /*  = [13..13] = 0x00002000 */
      unsigned int SWOPT14:1;           /*  = [14..14] = 0x00004000 */
      unsigned int SWOPT15:1;           /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) SCU_SCLIR_t_nonv;

typedef volatile SCU_SCLIR_t_nonv SCU_SCLIR_t;

/********************** SCU_SCLKFDR_t *************************/
/*
   SCU_SCLKFDR           "SCU System Clock Fractional Divider Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int STEP:10;             /*  = [0..9] = 0x000003ff */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int SM:1;                /*  = [11..11] = 0x00000800 */
      unsigned int SC:2;                /*  = [12..13] = 0x00003000 */
      unsigned int DM:2;                /*  = [14..15] = 0x0000c000 */
      unsigned int RESULT:10;           /*  = [16..25] = 0x03ff0000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int SUSACK:1;            /*  = [28..28] = 0x10000000 */
      unsigned int SUSREQ:1;            /*  = [29..29] = 0x20000000 */
      unsigned int ENHW:1;              /*  = [30..30] = 0x40000000 */
      unsigned int DISCLK:1;            /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) SCU_SCLKFDR_t_nonv;

typedef volatile SCU_SCLKFDR_t_nonv SCU_SCLKFDR_t;

/********************** SCU_STAT_t *************************/
/*
   SCU_STAT              "SCU Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int FXI:1;               /*  = [0..0] = 0x00000001 */
      unsigned int FUI:1;               /*  = [1..1] = 0x00000002 */
      unsigned int FZI:1;               /*  = [2..2] = 0x00000004 */
      unsigned int FVI:1;               /*  = [3..3] = 0x00000008 */
      unsigned int FII:1;               /*  = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int EEA:1;               /*  = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int PARAV:1;             /*  = [13..13] = 0x00002000 */
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
} __attribute__((aligned(4))) SCU_STAT_t_nonv;

typedef volatile SCU_STAT_t_nonv SCU_STAT_t;

/********************** SCU_TCCON_t *************************/
/*
   SCU_TCCON             "SCU Temperature Compensation Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TCV0:2;              /*  = [0..1] = 0x00000003 */
      unsigned int _bit2:1;             /* 0 = [2..2] = 0x00000004 */
      unsigned int TCE0:1;              /*  = [3..3] = 0x00000008 */
      unsigned int TCC0:2;              /*  = [4..5] = 0x00000030 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int TCS0:1;              /*  = [7..7] = 0x00000080 */
      unsigned int TCDIV:8;             /*  = [8..15] = 0x0000ff00 */
      unsigned int TCV1:2;              /*  = [16..17] = 0x00030000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int TCE1:1;              /*  = [19..19] = 0x00080000 */
      unsigned int TCC1:2;              /*  = [20..21] = 0x00300000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int TCS1:1;              /*  = [23..23] = 0x00800000 */
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
} __attribute__((aligned(4))) SCU_TCCON_t_nonv;

typedef volatile SCU_TCCON_t_nonv SCU_TCCON_t;

/********************** WDT_CON0_t *************************/
/*
   WDT_CON0              "Watchdog Timer Control Register 0"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ENDINIT:1;           /*  = [0..0] = 0x00000001 */
      unsigned int WDTLCK:1;            /*  = [1..1] = 0x00000002 */
      unsigned int WDTHPW0:2;           /*  = [2..3] = 0x0000000c */
      unsigned int WDTHPW1:4;           /*  = [4..7] = 0x000000f0 */
      unsigned int WDTPW:8;             /*  = [8..15] = 0x0000ff00 */
      unsigned int WDTREL:16;           /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) WDT_CON0_t_nonv;

typedef volatile WDT_CON0_t_nonv WDT_CON0_t;

/********************** WDT_CON1_t *************************/
/*
   WDT_CON1              "Watchdog Timer Control Register 1"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0..0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1..1] = 0x00000002 */
      unsigned int WDTIR:1;             /*  = [2..2] = 0x00000004 */
      unsigned int WDTDR:1;             /*  = [3..3] = 0x00000008 */
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
} __attribute__((aligned(4))) WDT_CON1_t_nonv;

typedef volatile WDT_CON1_t_nonv WDT_CON1_t;

/********************** WDT_SR_t *************************/
/*
   WDT_SR                "Watchdog Timer Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int WDTAE:1;             /*  = [0..0] = 0x00000001 */
      unsigned int WDTOE:1;             /*  = [1..1] = 0x00000002 */
      unsigned int WDTIS:1;             /*  = [2..2] = 0x00000004 */
      unsigned int WDTDS:1;             /*  = [3..3] = 0x00000008 */
      unsigned int WDTTO:1;             /*  = [4..4] = 0x00000010 */
      unsigned int WDTPR:1;             /*  = [5..5] = 0x00000020 */
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
      unsigned int WDTTIM:16;           /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) WDT_SR_t_nonv;

typedef volatile WDT_SR_t_nonv WDT_SR_t;


#endif /* _HAVE_TRICORE_SCU_TYPES_H_ */

