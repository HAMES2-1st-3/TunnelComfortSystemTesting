/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_USB_TYPES_H_
#define _HAVE_TRICORE_USB_TYPES_H_


/********************** USB_CLC_t *************************/
/*
   USB_CLC               "USB Clock Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DISR:1;              /*  = [0..0] = 0x00000001 */
      unsigned int DISS:1;              /*  = [1..1] = 0x00000002 */
      unsigned int SPEN:1;              /*  = [2..2] = 0x00000004 */
      unsigned int EDIS:1;              /*  = [3..3] = 0x00000008 */
      unsigned int SBWE:1;              /*  = [4..4] = 0x00000010 */
      unsigned int FSOE:1;              /*  = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int RMC:8;               /*  = [8..15] = 0x0000ff00 */
      unsigned int SMC:8;               /*  = [16..23] = 0x00ff0000 */
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
} __attribute__((aligned(4))) USB_CLC_t_nonv;

typedef volatile USB_CLC_t_nonv USB_CLC_t;

/********************** USB_CNFR_t *************************/
/*
   USB_CNFR              "Configuration Request Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int AS0:1;               /*  = [0..0] = 0x00000001 */
      unsigned int AS1:1;               /*  = [1..1] = 0x00000002 */
      unsigned int AS2:1;               /*  = [2..2] = 0x00000004 */
      unsigned int AS3:1;               /*  = [3..3] = 0x00000008 */
      unsigned int IF0:1;               /*  = [4..4] = 0x00000010 */
      unsigned int IF1:1;               /*  = [5..5] = 0x00000020 */
      unsigned int IF2:1;               /*  = [6..6] = 0x00000040 */
      unsigned int IF3:1;               /*  = [7..7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int CF0:1;               /*  = [12..12] = 0x00001000 */
      unsigned int CF1:1;               /*  = [13..13] = 0x00002000 */
      unsigned int CF2:1;               /*  = [14..14] = 0x00004000 */
      unsigned int CF3:1;               /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) USB_CNFR_t_nonv;

typedef volatile USB_CNFR_t_nonv USB_CNFR_t;

/********************** USB_CPLPR_t *************************/
/*
   USB_CPLPR             "CPU Local Pointer Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0..0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1..1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2..2] = 0x00000004 */
      unsigned int CAPL:13;             /*  = [3..15] = 0x0000fff8 */
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
} __attribute__((aligned(4))) USB_CPLPR_t_nonv;

typedef volatile USB_CPLPR_t_nonv USB_CPLPR_t;

/********************** USB_DATA16_t *************************/
/*
   USB_DATA16            "Data Register for 16bit Accesses"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DAT16:16;            /*  = [0..15] = 0x0000ffff */
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
} __attribute__((aligned(4))) USB_DATA16_t_nonv;

typedef volatile USB_DATA16_t_nonv USB_DATA16_t;

/********************** USB_DATA32_t *************************/
/*
   USB_DATA32            "Data Register for 32bit Accesses"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DAT32:32;            /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) USB_DATA32_t_nonv;

typedef volatile USB_DATA32_t_nonv USB_DATA32_t;

/********************** USB_DATA8_t *************************/
/*
   USB_DATA8             "Data Register for 8bit Accesses"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DAT8:8;              /*  = [0..7] = 0x000000ff */
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
} __attribute__((aligned(4))) USB_DATA8_t_nonv;

typedef volatile USB_DATA8_t_nonv USB_DATA8_t;

/********************** USB_DCR_t *************************/
/*
   USB_DCR               "Device Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RPWDS:1;             /*  = [0..0] = 0x00000001 */
      unsigned int RPWDR:1;             /*  = [1..1] = 0x00000002 */
      unsigned int TPWDS:1;             /*  = [2..2] = 0x00000004 */
      unsigned int TPWDR:1;             /*  = [3..3] = 0x00000008 */
      unsigned int UCLKS:1;             /*  = [4..4] = 0x00000010 */
      unsigned int UCLKR:1;             /*  = [5..5] = 0x00000020 */
      unsigned int RSM:1;               /*  = [6..6] = 0x00000040 */
      unsigned int EOID:1;              /*  = [7..7] = 0x00000080 */
      unsigned int SWRS:1;              /*  = [8..8] = 0x00000100 */
      unsigned int SPEEDS:1;            /*  = [9..9] = 0x00000200 */
      unsigned int DADDIDIS:1;          /*  = [10..10] = 0x00000400 */
      unsigned int DADDIEN:1;           /*  = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int USBSRL:1;            /*  = [14..14] = 0x00004000 */
      unsigned int CPUSRL:1;            /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) USB_DCR_t_nonv;

typedef volatile USB_DCR_t_nonv USB_DCR_t;

/********************** USB_DIER_t *************************/
/*
   USB_DIER              "Device Interrupt Enable Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DAIE:1;              /*  = [0..0] = 0x00000001 */
      unsigned int DDIE:1;              /*  = [1..1] = 0x00000002 */
      unsigned int SBIE:1;              /*  = [2..2] = 0x00000004 */
      unsigned int SEIE:1;              /*  = [3..3] = 0x00000008 */
      unsigned int SE0IE:1;             /*  = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int STIE:1;              /*  = [8..8] = 0x00000100 */
      unsigned int SUIE:1;              /*  = [9..9] = 0x00000200 */
      unsigned int CFIE:1;              /*  = [10..10] = 0x00000400 */
      unsigned int SOFIE:1;             /*  = [11..11] = 0x00000800 */
      unsigned int EDIIE:1;             /*  = [12..12] = 0x00001000 */
      unsigned int FRIE:1;              /*  = [13..13] = 0x00002000 */
      unsigned int FNRIE:1;             /*  = [14..14] = 0x00004000 */
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
} __attribute__((aligned(4))) USB_DIER_t_nonv;

typedef volatile USB_DIER_t_nonv USB_DIER_t;

/********************** USB_DINP_t *************************/
/*
   USB_DINP              "Device Interrupt Node Pointer Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int INP00:1;             /*  = [0..0] = 0x00000001 */
      unsigned int INP01:1;             /*  = [1..1] = 0x00000002 */
      unsigned int INP02:1;             /*  = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int INP10:1;             /*  = [4..4] = 0x00000010 */
      unsigned int INP11:1;             /*  = [5..5] = 0x00000020 */
      unsigned int INP12:1;             /*  = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int INP20:1;             /*  = [8..8] = 0x00000100 */
      unsigned int INP21:1;             /*  = [9..9] = 0x00000200 */
      unsigned int INP22:1;             /*  = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int INP30:1;             /*  = [12..12] = 0x00001000 */
      unsigned int INP31:1;             /*  = [13..13] = 0x00002000 */
      unsigned int INP32:1;             /*  = [14..14] = 0x00004000 */
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
} __attribute__((aligned(4))) USB_DINP_t_nonv;

typedef volatile USB_DINP_t_nonv USB_DINP_t;

/********************** USB_DIRR_t *************************/
/*
   USB_DIRR              "Device Interrupt Request Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DAI:1;               /*  = [0..0] = 0x00000001 */
      unsigned int DDI:1;               /*  = [1..1] = 0x00000002 */
      unsigned int SBI:1;               /*  = [2..2] = 0x00000004 */
      unsigned int SEI:1;               /*  = [3..3] = 0x00000008 */
      unsigned int SE0I:1;              /*  = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int STI:1;               /*  = [8..8] = 0x00000100 */
      unsigned int SUI:1;               /*  = [9..9] = 0x00000200 */
      unsigned int CFI:1;               /*  = [10..10] = 0x00000400 */
      unsigned int SOFI:1;              /*  = [11..11] = 0x00000800 */
      unsigned int EDII:1;              /*  = [12..12] = 0x00001000 */
      unsigned int FRI:1;               /*  = [13..13] = 0x00002000 */
      unsigned int FNRI:1;              /*  = [14..14] = 0x00004000 */
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
} __attribute__((aligned(4))) USB_DIRR_t_nonv;

typedef volatile USB_DIRR_t_nonv USB_DIRR_t;

/********************** USB_DIRST_t *************************/
/*
   USB_DIRST             "Device Interrupt Reset Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DAIR:1;              /*  = [0..0] = 0x00000001 */
      unsigned int DDIR:1;              /*  = [1..1] = 0x00000002 */
      unsigned int SBIR:1;              /*  = [2..2] = 0x00000004 */
      unsigned int SEIR:1;              /*  = [3..3] = 0x00000008 */
      unsigned int SE0IR:1;             /*  = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int STIR:1;              /*  = [8..8] = 0x00000100 */
      unsigned int SUIR:1;              /*  = [9..9] = 0x00000200 */
      unsigned int CFIR:1;              /*  = [10..10] = 0x00000400 */
      unsigned int SOFIR:1;             /*  = [11..11] = 0x00000800 */
      unsigned int EDIIR:1;             /*  = [12..12] = 0x00001000 */
      unsigned int FRR:1;               /*  = [13..13] = 0x00002000 */
      unsigned int FNRR:1;              /*  = [14..14] = 0x00004000 */
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
} __attribute__((aligned(4))) USB_DIRST_t_nonv;

typedef volatile USB_DIRST_t_nonv USB_DIRST_t;

/********************** USB_DIT_t *************************/
/*
   USB_DIT               "Device Interrupt Test Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DAIT:1;              /*  = [0..0] = 0x00000001 */
      unsigned int DDIT:1;              /*  = [1..1] = 0x00000002 */
      unsigned int SBIT:1;              /*  = [2..2] = 0x00000004 */
      unsigned int SEIT:1;              /*  = [3..3] = 0x00000008 */
      unsigned int SE0IT:1;             /*  = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int STIT:1;              /*  = [8..8] = 0x00000100 */
      unsigned int SUIT:1;              /*  = [9..9] = 0x00000200 */
      unsigned int CFIT:1;              /*  = [10..10] = 0x00000400 */
      unsigned int SOFIT:1;             /*  = [11..11] = 0x00000800 */
      unsigned int EDIIT:1;             /*  = [12..12] = 0x00001000 */
      unsigned int FRT:1;               /*  = [13..13] = 0x00002000 */
      unsigned int FNRT:1;              /*  = [14..14] = 0x00004000 */
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
} __attribute__((aligned(4))) USB_DIT_t_nonv;

typedef volatile USB_DIT_t_nonv USB_DIT_t;

/********************** USB_DSR_t *************************/
/*
   USB_DSR               "Device Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RPWD:1;              /*  = [0..0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1..1] = 0x00000002 */
      unsigned int TPWD:1;              /*  = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int UCLK:1;              /*  = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int SUSP:1;              /*  = [6..6] = 0x00000040 */
      unsigned int DINIT:1;             /*  = [7..7] = 0x00000080 */
      unsigned int SWR:1;               /*  = [8..8] = 0x00000100 */
      unsigned int SPEED:1;             /*  = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int DA:1;                /*  = [11..11] = 0x00000800 */
      unsigned int DIR:1;               /*  = [12..12] = 0x00001000 */
      unsigned int DADDIDIS:1;          /*  = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int UEP:4;               /*  = [16..19] = 0x000f0000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int TIP:1;               /*  = [23..23] = 0x00800000 */
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
} __attribute__((aligned(4))) USB_DSR_t_nonv;

typedef volatile USB_DSR_t_nonv USB_DSR_t;

/********************** USB_EPDIR_t *************************/
/*
   USB_EPDIR             "Endpoint Direction Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DIR0:1;              /*  = [0..0] = 0x00000001 */
      unsigned int DIR1:1;              /*  = [1..1] = 0x00000002 */
      unsigned int DIR2:1;              /*  = [2..2] = 0x00000004 */
      unsigned int DIR3:1;              /*  = [3..3] = 0x00000008 */
      unsigned int DIR4:1;              /*  = [4..4] = 0x00000010 */
      unsigned int DIR5:1;              /*  = [5..5] = 0x00000020 */
      unsigned int DIR6:1;              /*  = [6..6] = 0x00000040 */
      unsigned int DIR7:1;              /*  = [7..7] = 0x00000080 */
      unsigned int DIR8:1;              /*  = [8..8] = 0x00000100 */
      unsigned int DIR9:1;              /*  = [9..9] = 0x00000200 */
      unsigned int DIR10:1;             /*  = [10..10] = 0x00000400 */
      unsigned int DIR11:1;             /*  = [11..11] = 0x00000800 */
      unsigned int DIR12:1;             /*  = [12..12] = 0x00001000 */
      unsigned int DIR13:1;             /*  = [13..13] = 0x00002000 */
      unsigned int DIR14:1;             /*  = [14..14] = 0x00004000 */
      unsigned int DIR15:1;             /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) USB_EPDIR_t_nonv;

typedef volatile USB_EPDIR_t_nonv USB_EPDIR_t;

/********************** USB_EPDSR_t *************************/
/*
   USB_EPDSR             "Endpoint Direction Set/Reset Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DIRS0:1;             /*  = [0..0] = 0x00000001 */
      unsigned int DIRS1:1;             /*  = [1..1] = 0x00000002 */
      unsigned int DIRS2:1;             /*  = [2..2] = 0x00000004 */
      unsigned int DIRS3:1;             /*  = [3..3] = 0x00000008 */
      unsigned int DIRS4:1;             /*  = [4..4] = 0x00000010 */
      unsigned int DIRS5:1;             /*  = [5..5] = 0x00000020 */
      unsigned int DIRS6:1;             /*  = [6..6] = 0x00000040 */
      unsigned int DIRS7:1;             /*  = [7..7] = 0x00000080 */
      unsigned int DIRS8:1;             /*  = [8..8] = 0x00000100 */
      unsigned int DIRS9:1;             /*  = [9..9] = 0x00000200 */
      unsigned int DIRS10:1;            /*  = [10..10] = 0x00000400 */
      unsigned int DIRS11:1;            /*  = [11..11] = 0x00000800 */
      unsigned int DIRS12:1;            /*  = [12..12] = 0x00001000 */
      unsigned int DIRS13:1;            /*  = [13..13] = 0x00002000 */
      unsigned int DIRS14:1;            /*  = [14..14] = 0x00004000 */
      unsigned int DIRS15:1;            /*  = [15..15] = 0x00008000 */
      unsigned int DIRR0:1;             /*  = [16..16] = 0x00010000 */
      unsigned int DIRR1:1;             /*  = [17..17] = 0x00020000 */
      unsigned int DIRR2:1;             /*  = [18..18] = 0x00040000 */
      unsigned int DIRR3:1;             /*  = [19..19] = 0x00080000 */
      unsigned int DIRR4:1;             /*  = [20..20] = 0x00100000 */
      unsigned int DIRR5:1;             /*  = [21..21] = 0x00200000 */
      unsigned int DIRR6:1;             /*  = [22..22] = 0x00400000 */
      unsigned int DIRR7:1;             /*  = [23..23] = 0x00800000 */
      unsigned int DIRR8:1;             /*  = [24..24] = 0x01000000 */
      unsigned int DIRR9:1;             /*  = [25..25] = 0x02000000 */
      unsigned int DIRR10:1;            /*  = [26..26] = 0x04000000 */
      unsigned int DIRR11:1;            /*  = [27..27] = 0x08000000 */
      unsigned int DIRR12:1;            /*  = [28..28] = 0x10000000 */
      unsigned int DIRR13:1;            /*  = [29..29] = 0x20000000 */
      unsigned int DIRR14:1;            /*  = [30..30] = 0x40000000 */
      unsigned int DIRR15:1;            /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) USB_EPDSR_t_nonv;

typedef volatile USB_EPDSR_t_nonv USB_EPDSR_t;

/********************** USB_EPSSR_t *************************/
/*
   USB_EPSSR             "Endpoint Stall Set / Reset Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int STLS0:1;             /*  = [0..0] = 0x00000001 */
      unsigned int STLS1:1;             /*  = [1..1] = 0x00000002 */
      unsigned int STLS2:1;             /*  = [2..2] = 0x00000004 */
      unsigned int STLS3:1;             /*  = [3..3] = 0x00000008 */
      unsigned int STLS4:1;             /*  = [4..4] = 0x00000010 */
      unsigned int STLS5:1;             /*  = [5..5] = 0x00000020 */
      unsigned int STLS6:1;             /*  = [6..6] = 0x00000040 */
      unsigned int STLS7:1;             /*  = [7..7] = 0x00000080 */
      unsigned int STLS8:1;             /*  = [8..8] = 0x00000100 */
      unsigned int STLS9:1;             /*  = [9..9] = 0x00000200 */
      unsigned int STLS10:1;            /*  = [10..10] = 0x00000400 */
      unsigned int STLS11:1;            /*  = [11..11] = 0x00000800 */
      unsigned int STLS12:1;            /*  = [12..12] = 0x00001000 */
      unsigned int STLS13:1;            /*  = [13..13] = 0x00002000 */
      unsigned int STLS14:1;            /*  = [14..14] = 0x00004000 */
      unsigned int STLS15:1;            /*  = [15..15] = 0x00008000 */
      unsigned int STLR0:1;             /*  = [16..16] = 0x00010000 */
      unsigned int STLR1:1;             /*  = [17..17] = 0x00020000 */
      unsigned int STLR2:1;             /*  = [18..18] = 0x00040000 */
      unsigned int STLR3:1;             /*  = [19..19] = 0x00080000 */
      unsigned int STLR4:1;             /*  = [20..20] = 0x00100000 */
      unsigned int STLR5:1;             /*  = [21..21] = 0x00200000 */
      unsigned int STLR6:1;             /*  = [22..22] = 0x00400000 */
      unsigned int STLR7:1;             /*  = [23..23] = 0x00800000 */
      unsigned int STLR8:1;             /*  = [24..24] = 0x01000000 */
      unsigned int STLR9:1;             /*  = [25..25] = 0x02000000 */
      unsigned int STLR10:1;            /*  = [26..26] = 0x04000000 */
      unsigned int STLR11:1;            /*  = [27..27] = 0x08000000 */
      unsigned int STLR12:1;            /*  = [28..28] = 0x10000000 */
      unsigned int STLR13:1;            /*  = [29..29] = 0x20000000 */
      unsigned int STLR14:1;            /*  = [30..30] = 0x40000000 */
      unsigned int STLR15:1;            /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) USB_EPSSR_t_nonv;

typedef volatile USB_EPSSR_t_nonv USB_EPSSR_t;

/********************** USB_EPSTL_t *************************/
/*
   USB_EPSTL             "Endpoint Stall Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int STL0:1;              /*  = [0..0] = 0x00000001 */
      unsigned int STL1:1;              /*  = [1..1] = 0x00000002 */
      unsigned int STL2:1;              /*  = [2..2] = 0x00000004 */
      unsigned int STL3:1;              /*  = [3..3] = 0x00000008 */
      unsigned int STL4:1;              /*  = [4..4] = 0x00000010 */
      unsigned int STL5:1;              /*  = [5..5] = 0x00000020 */
      unsigned int STL6:1;              /*  = [6..6] = 0x00000040 */
      unsigned int STL7:1;              /*  = [7..7] = 0x00000080 */
      unsigned int STL8:1;              /*  = [8..8] = 0x00000100 */
      unsigned int STL9:1;              /*  = [9..9] = 0x00000200 */
      unsigned int STL10:1;             /*  = [10..10] = 0x00000400 */
      unsigned int STL11:1;             /*  = [11..11] = 0x00000800 */
      unsigned int STL12:1;             /*  = [12..12] = 0x00001000 */
      unsigned int STL13:1;             /*  = [13..13] = 0x00002000 */
      unsigned int STL14:1;             /*  = [14..14] = 0x00004000 */
      unsigned int STL15:1;             /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) USB_EPSTL_t_nonv;

typedef volatile USB_EPSTL_t_nonv USB_EPSTL_t;

/********************** USB_EPVLD_t *************************/
/*
   USB_EPVLD             "Endpoint Valid Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int EPV0:1;              /*  = [0..0] = 0x00000001 */
      unsigned int EPV1:1;              /*  = [1..1] = 0x00000002 */
      unsigned int EPV2:1;              /*  = [2..2] = 0x00000004 */
      unsigned int EPV3:1;              /*  = [3..3] = 0x00000008 */
      unsigned int EPV4:1;              /*  = [4..4] = 0x00000010 */
      unsigned int EPV5:1;              /*  = [5..5] = 0x00000020 */
      unsigned int EPV6:1;              /*  = [6..6] = 0x00000040 */
      unsigned int EPV7:1;              /*  = [7..7] = 0x00000080 */
      unsigned int EPV8:1;              /*  = [8..8] = 0x00000100 */
      unsigned int EPV9:1;              /*  = [9..9] = 0x00000200 */
      unsigned int EPV10:1;             /*  = [10..10] = 0x00000400 */
      unsigned int EPV11:1;             /*  = [11..11] = 0x00000800 */
      unsigned int EPV12:1;             /*  = [12..12] = 0x00001000 */
      unsigned int EPV13:1;             /*  = [13..13] = 0x00002000 */
      unsigned int EPV14:1;             /*  = [14..14] = 0x00004000 */
      unsigned int EPV15:1;             /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) USB_EPVLD_t_nonv;

typedef volatile USB_EPVLD_t_nonv USB_EPVLD_t;

/********************** USB_EVSR_t *************************/
/*
   USB_EVSR              "Endpoint Valid Set/Reset Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int EPVS0:1;             /*  = [0..0] = 0x00000001 */
      unsigned int EPVS1:1;             /*  = [1..1] = 0x00000002 */
      unsigned int EPVS2:1;             /*  = [2..2] = 0x00000004 */
      unsigned int EPVS3:1;             /*  = [3..3] = 0x00000008 */
      unsigned int EPVS4:1;             /*  = [4..4] = 0x00000010 */
      unsigned int EPVS5:1;             /*  = [5..5] = 0x00000020 */
      unsigned int EPVS6:1;             /*  = [6..6] = 0x00000040 */
      unsigned int EPVS7:1;             /*  = [7..7] = 0x00000080 */
      unsigned int EPVS8:1;             /*  = [8..8] = 0x00000100 */
      unsigned int EPVS9:1;             /*  = [9..9] = 0x00000200 */
      unsigned int EPVS10:1;            /*  = [10..10] = 0x00000400 */
      unsigned int EPVS11:1;            /*  = [11..11] = 0x00000800 */
      unsigned int EPVS12:1;            /*  = [12..12] = 0x00001000 */
      unsigned int EPVS13:1;            /*  = [13..13] = 0x00002000 */
      unsigned int EPVS14:1;            /*  = [14..14] = 0x00004000 */
      unsigned int EPVS15:1;            /*  = [15..15] = 0x00008000 */
      unsigned int EPVR0:1;             /*  = [16..16] = 0x00010000 */
      unsigned int EPVR1:1;             /*  = [17..17] = 0x00020000 */
      unsigned int EPVR2:1;             /*  = [18..18] = 0x00040000 */
      unsigned int EPVR3:1;             /*  = [19..19] = 0x00080000 */
      unsigned int EPVR4:1;             /*  = [20..20] = 0x00100000 */
      unsigned int EPVR5:1;             /*  = [21..21] = 0x00200000 */
      unsigned int EPVR6:1;             /*  = [22..22] = 0x00400000 */
      unsigned int EPVR7:1;             /*  = [23..23] = 0x00800000 */
      unsigned int EPVR8:1;             /*  = [24..24] = 0x01000000 */
      unsigned int EPVR9:1;             /*  = [25..25] = 0x02000000 */
      unsigned int EPVR10:1;            /*  = [26..26] = 0x04000000 */
      unsigned int EPVR11:1;            /*  = [27..27] = 0x08000000 */
      unsigned int EPVR12:1;            /*  = [28..28] = 0x10000000 */
      unsigned int EPVR13:1;            /*  = [29..29] = 0x20000000 */
      unsigned int EPVR14:1;            /*  = [30..30] = 0x40000000 */
      unsigned int EPVR15:1;            /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) USB_EVSR_t_nonv;

typedef volatile USB_EVSR_t_nonv USB_EVSR_t;

/********************** USB_FCON_t *************************/
/*
   USB_FCON              "FIFO Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CEPS:4;              /*  = [0..3] = 0x0000000f */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int FVLD:1;              /*  = [8..8] = 0x00000100 */
      unsigned int DONE:1;              /*  = [9..9] = 0x00000200 */
      unsigned int CLREP:1;             /*  = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int EPFVLD0:1;           /*  = [16..16] = 0x00010000 */
      unsigned int EPFVLD1:1;           /*  = [17..17] = 0x00020000 */
      unsigned int EPFVLD2:1;           /*  = [18..18] = 0x00040000 */
      unsigned int EPFVLD3:1;           /*  = [19..19] = 0x00080000 */
      unsigned int EPFVLD4:1;           /*  = [20..20] = 0x00100000 */
      unsigned int EPFVLD5:1;           /*  = [21..21] = 0x00200000 */
      unsigned int EPFVLD6:1;           /*  = [22..22] = 0x00400000 */
      unsigned int EPFVLD7:1;           /*  = [23..23] = 0x00800000 */
      unsigned int EPFVLD8:1;           /*  = [24..24] = 0x01000000 */
      unsigned int EPFVLD9:1;           /*  = [25..25] = 0x02000000 */
      unsigned int EPFVLD10:1;          /*  = [26..26] = 0x04000000 */
      unsigned int EPFVLD11:1;          /*  = [27..27] = 0x08000000 */
      unsigned int EPFVLD12:1;          /*  = [28..28] = 0x10000000 */
      unsigned int EPFVLD13:1;          /*  = [29..29] = 0x20000000 */
      unsigned int EPFVLD14:1;          /*  = [30..30] = 0x40000000 */
      unsigned int EPFVLD15:1;          /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) USB_FCON_t_nonv;

typedef volatile USB_FCON_t_nonv USB_FCON_t;

/********************** USB_FNR_t *************************/
/*
   USB_FNR               "Frame Number Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int FNR0:1;              /*  = [0..0] = 0x00000001 */
      unsigned int FNR1:1;              /*  = [1..1] = 0x00000002 */
      unsigned int FNR2:1;              /*  = [2..2] = 0x00000004 */
      unsigned int FNR3:1;              /*  = [3..3] = 0x00000008 */
      unsigned int FNR4:1;              /*  = [4..4] = 0x00000010 */
      unsigned int FNR5:1;              /*  = [5..5] = 0x00000020 */
      unsigned int FNR6:1;              /*  = [6..6] = 0x00000040 */
      unsigned int FNR7:1;              /*  = [7..7] = 0x00000080 */
      unsigned int FNR8:1;              /*  = [8..8] = 0x00000100 */
      unsigned int FNR9:1;              /*  = [9..9] = 0x00000200 */
      unsigned int FNR10:1;             /*  = [10..10] = 0x00000400 */
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
} __attribute__((aligned(4))) USB_FNR_t_nonv;

typedef volatile USB_FNR_t_nonv USB_FNR_t;

/********************** USB_ID_t *************************/
/*
   USB_ID                "USB Module Identification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int REV:8;               /*  = [0..7] = 0x000000ff */
      unsigned int ID:8;                /*  = [8..15] = 0x0000ff00 */
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
} __attribute__((aligned(4))) USB_ID_t_nonv;

typedef volatile USB_ID_t_nonv USB_ID_t;

/********************** USB_PISEL_t *************************/
/*
   USB_PISEL             "USB Input Port Selection Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int VPIS:1;              /*  = [0..0] = 0x00000001 */
      unsigned int VMIS:1;              /*  = [1..1] = 0x00000002 */
      unsigned int RCVIS:1;             /*  = [2..2] = 0x00000004 */
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
} __attribute__((aligned(4))) USB_PISEL_t_nonv;

typedef volatile USB_PISEL_t_nonv USB_PISEL_t;

/********************** USB_ZLPEN_t *************************/
/*
   USB_ZLPEN             "Zero-Length-Package Enable Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ZLP0:1;              /*  = [0..0] = 0x00000001 */
      unsigned int ZLP1:1;              /*  = [1..1] = 0x00000002 */
      unsigned int ZLP2:1;              /*  = [2..2] = 0x00000004 */
      unsigned int ZLP3:1;              /*  = [3..3] = 0x00000008 */
      unsigned int ZLP4:1;              /*  = [4..4] = 0x00000010 */
      unsigned int ZLP5:1;              /*  = [5..5] = 0x00000020 */
      unsigned int ZLP6:1;              /*  = [6..6] = 0x00000040 */
      unsigned int ZLP7:1;              /*  = [7..7] = 0x00000080 */
      unsigned int ZLP8:1;              /*  = [8..8] = 0x00000100 */
      unsigned int ZLP9:1;              /*  = [9..9] = 0x00000200 */
      unsigned int ZLP10:1;             /*  = [10..10] = 0x00000400 */
      unsigned int ZLP11:1;             /*  = [11..11] = 0x00000800 */
      unsigned int ZLP12:1;             /*  = [12..12] = 0x00001000 */
      unsigned int ZLP13:1;             /*  = [13..13] = 0x00002000 */
      unsigned int ZLP14:1;             /*  = [14..14] = 0x00004000 */
      unsigned int ZLP15:1;             /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) USB_ZLPEN_t_nonv;

typedef volatile USB_ZLPEN_t_nonv USB_ZLPEN_t;

/********************** USB_ZLPSR_t *************************/
/*
   USB_ZLPSR             "Zero-Length-Package Set/Reset Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ZLPS0:1;             /*  = [0..0] = 0x00000001 */
      unsigned int ZLPS1:1;             /*  = [1..1] = 0x00000002 */
      unsigned int ZLPS2:1;             /*  = [2..2] = 0x00000004 */
      unsigned int ZLPS3:1;             /*  = [3..3] = 0x00000008 */
      unsigned int ZLPS4:1;             /*  = [4..4] = 0x00000010 */
      unsigned int ZLPS5:1;             /*  = [5..5] = 0x00000020 */
      unsigned int ZLPS6:1;             /*  = [6..6] = 0x00000040 */
      unsigned int ZLPS7:1;             /*  = [7..7] = 0x00000080 */
      unsigned int ZLPS8:1;             /*  = [8..8] = 0x00000100 */
      unsigned int ZLPS9:1;             /*  = [9..9] = 0x00000200 */
      unsigned int ZLPS10:1;            /*  = [10..10] = 0x00000400 */
      unsigned int ZLPS11:1;            /*  = [11..11] = 0x00000800 */
      unsigned int ZLPS12:1;            /*  = [12..12] = 0x00001000 */
      unsigned int ZLPS13:1;            /*  = [13..13] = 0x00002000 */
      unsigned int ZLPS14:1;            /*  = [14..14] = 0x00004000 */
      unsigned int ZLPS15:1;            /*  = [15..15] = 0x00008000 */
      unsigned int ZLPR0:1;             /*  = [16..16] = 0x00010000 */
      unsigned int ZLPR1:1;             /*  = [17..17] = 0x00020000 */
      unsigned int ZLPR2:1;             /*  = [18..18] = 0x00040000 */
      unsigned int ZLPR3:1;             /*  = [19..19] = 0x00080000 */
      unsigned int ZLPR4:1;             /*  = [20..20] = 0x00100000 */
      unsigned int ZLPR5:1;             /*  = [21..21] = 0x00200000 */
      unsigned int ZLPR6:1;             /*  = [22..22] = 0x00400000 */
      unsigned int ZLPR7:1;             /*  = [23..23] = 0x00800000 */
      unsigned int ZLPR8:1;             /*  = [24..24] = 0x01000000 */
      unsigned int ZLPR9:1;             /*  = [25..25] = 0x02000000 */
      unsigned int ZLPR10:1;            /*  = [26..26] = 0x04000000 */
      unsigned int ZLPR11:1;            /*  = [27..27] = 0x08000000 */
      unsigned int ZLPR12:1;            /*  = [28..28] = 0x10000000 */
      unsigned int ZLPR13:1;            /*  = [29..29] = 0x20000000 */
      unsigned int ZLPR14:1;            /*  = [30..30] = 0x40000000 */
      unsigned int ZLPR15:1;            /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) USB_ZLPSR_t_nonv;

typedef volatile USB_ZLPSR_t_nonv USB_ZLPSR_t;


#endif /* _HAVE_TRICORE_USB_TYPES_H_ */

