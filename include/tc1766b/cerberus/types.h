/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_CERBERUS_TYPES_H_
#define _HAVE_TRICORE_CERBERUS_TYPES_H_


/********************** CBS_COMDATA_t *************************/
/*
   CBS_COMDATA           "Cerberus Communication Mode Data Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DATA:32;             /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CBS_COMDATA_t_nonv;

typedef volatile CBS_COMDATA_t_nonv CBS_COMDATA_t;

/********************** CBS_ICTSA_t *************************/
/*
   CBS_ICTSA             "Cerberus Internal Controlled Trace Source Address Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ADDR:32;             /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CBS_ICTSA_t_nonv;

typedef volatile CBS_ICTSA_t_nonv CBS_ICTSA_t;

/********************** CBS_ICTTA_t *************************/
/*
   CBS_ICTTA             "Cerberus Internal Controlled Trace Target Address Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ADDR:32;             /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CBS_ICTTA_t_nonv;

typedef volatile CBS_ICTTA_t_nonv CBS_ICTTA_t;

/********************** CBS_INTMOD_t *************************/
/*
   CBS_INTMOD            "Cerberus Internal Mode Status and Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SETCRS:1;            /*  = [0..0] = 0x00000001 */
      unsigned int SETCWS:1;            /*  = [1..1] = 0x00000002 */
      unsigned int SETCS:1;             /*  = [2..2] = 0x00000004 */
      unsigned int CLRCS:1;             /*  = [3..3] = 0x00000008 */
      unsigned int CHANNEL_P:1;         /*  = [4..4] = 0x00000010 */
      unsigned int CHANNEL:3;           /*  = [5..7] = 0x000000e0 */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int SETINTMOD:1;         /*  = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int SETINTTRC:1;         /*  = [18..18] = 0x00040000 */
      unsigned int CLRINTTRC:1;         /*  = [19..19] = 0x00080000 */
      unsigned int TRCMODP:1;           /*  = [20..20] = 0x00100000 */
      unsigned int TRCMOD:2;            /*  = [21..22] = 0x00600000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int INTMOD:1;            /*  = [24..24] = 0x01000000 */
      unsigned int INTTRC:1;            /*  = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CBS_INTMOD_t_nonv;

typedef volatile CBS_INTMOD_t_nonv CBS_INTMOD_t;

/********************** CBS_IOSR_t *************************/
/*
   CBS_IOSR              "Cerberus Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0..0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1..1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int CRSYNC:1;            /*  = [4..4] = 0x00000010 */
      unsigned int CWSYNC:1;            /*  = [5..5] = 0x00000020 */
      unsigned int CWACK:1;             /*  = [6..6] = 0x00000040 */
      unsigned int COMSYNC:1;           /*  = [7..7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int CHANNEL:3;           /*  = [12..14] = 0x00007000 */
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
} __attribute__((aligned(4))) CBS_IOSR_t_nonv;

typedef volatile CBS_IOSR_t_nonv CBS_IOSR_t;

/********************** CBS_JDP_ID_t *************************/
/*
   CBS_JDP_ID            "Module Identification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int REVISION:8;          /*  = [0..7] = 0x000000ff */
      unsigned int MODULE:8;            /*  = [8..15] = 0x0000ff00 */
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
} __attribute__((aligned(4))) CBS_JDP_ID_t_nonv;

typedef volatile CBS_JDP_ID_t_nonv CBS_JDP_ID_t;

/********************** CBS_MCDBBS_t *************************/
/*
   CBS_MCDBBS            "Break Bus Switch Configuration Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int BSTC:1;              /*  = [0..0] = 0x00000001 */
      unsigned int BSMCD:1;             /*  = [1..1] = 0x00000002 */
      unsigned int BSSB:1;              /*  = [2..2] = 0x00000004 */
      unsigned int BSRB:1;              /*  = [3..3] = 0x00000008 */
      unsigned int BSPCP:1;             /*  = [4..4] = 0x00000010 */
      unsigned int BSDMA:1;             /*  = [5..5] = 0x00000020 */
      unsigned int BSPCPEN:1;           /*  = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int BTTC:1;              /*  = [8..8] = 0x00000100 */
      unsigned int BTMCD:1;             /*  = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int BTPCP:1;             /*  = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int BTPCPEN:1;           /*  = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int BSPIN:1;             /*  = [16..16] = 0x00010000 */
      unsigned int BSPINA:1;            /*  = [17..17] = 0x00020000 */
      unsigned int BTPINA:1;            /*  = [18..18] = 0x00040000 */
      unsigned int BTPIN:1;             /*  = [19..19] = 0x00080000 */
      unsigned int BTT:1;               /*  = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int BTSS:1;              /*  = [23..23] = 0x00800000 */
      unsigned int BTTIEN:1;            /*  = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CBS_MCDBBS_t_nonv;

typedef volatile CBS_MCDBBS_t_nonv CBS_MCDBBS_t;

/********************** CBS_MCDBBSS_t *************************/
/*
   CBS_MCDBBSS           "Cerberus Break Bus Switch Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int BSSTC:1;             /*  = [0..0] = 0x00000001 */
      unsigned int BSSMCD:1;            /*  = [1..1] = 0x00000002 */
      unsigned int BSSSB:1;             /*  = [2..2] = 0x00000004 */
      unsigned int BSSRB:1;             /*  = [3..3] = 0x00000008 */
      unsigned int BSSPCP:1;            /*  = [4..4] = 0x00000010 */
      unsigned int BSSDMA:1;            /*  = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int BSCTC:1;             /*  = [8..8] = 0x00000100 */
      unsigned int BSCMCD:1;            /*  = [9..9] = 0x00000200 */
      unsigned int BSCSB:1;             /*  = [10..10] = 0x00000400 */
      unsigned int BSCRB:1;             /*  = [11..11] = 0x00000800 */
      unsigned int BSCPCP:1;            /*  = [12..12] = 0x00001000 */
      unsigned int BSCDMA:1;            /*  = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int BBS0:1;              /*  = [16..16] = 0x00010000 */
      unsigned int BBS1:1;              /*  = [17..17] = 0x00020000 */
      unsigned int BBC0:1;              /*  = [18..18] = 0x00040000 */
      unsigned int BBC1:1;              /*  = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int CAPCLR:1;            /*  = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CBS_MCDBBSS_t_nonv;

typedef volatile CBS_MCDBBSS_t_nonv CBS_MCDBBSS_t;

/********************** CBS_MCDSSG_t *************************/
/*
   CBS_MCDSSG            "Cerberus Suspend Signal Generation Status and Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int BTSCL:1;             /*  = [0..0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1..1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int SUSP:1;              /*  = [6..6] = 0x00000040 */
      unsigned int SUS:1;               /*  = [7..7] = 0x00000080 */
      unsigned int BTSP:1;              /*  = [8..8] = 0x00000100 */
      unsigned int BTSEN:1;             /*  = [9..9] = 0x00000200 */
      unsigned int BTSM:1;              /*  = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int SSSTC:1;             /*  = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int SSSBRK:1;            /*  = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int SOS:1;               /*  = [24..24] = 0x01000000 */
      unsigned int SDS:1;               /*  = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CBS_MCDSSG_t_nonv;

typedef volatile CBS_MCDSSG_t_nonv CBS_MCDSSG_t;

/********************** CBS_MCDSSGC_t *************************/
/*
   CBS_MCDSSGC           "Cerberus Suspend Signal Generation Configuration Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int STCP:1;              /*  = [0..0] = 0x00000001 */
      unsigned int STCM:1;              /*  = [1..1] = 0x00000002 */
      unsigned int STCTC:1;             /*  = [2..2] = 0x00000004 */
      unsigned int STCPCP:1;            /*  = [3..3] = 0x00000008 */
      unsigned int STCPMU:1;            /*  = [4..4] = 0x00000010 */
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
} __attribute__((aligned(4))) CBS_MCDSSGC_t_nonv;

typedef volatile CBS_MCDSSGC_t_nonv CBS_MCDSSGC_t;

/********************** CBS_OCNTRL_t *************************/
/*
   CBS_OCNTRL            "Cerberus OSCU Configuration and Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TRCENP:1;            /*  = [0..0] = 0x00000001 */
      unsigned int TRCEN:1;             /*  = [1..1] = 0x00000002 */
      unsigned int TRCMUXP:1;           /*  = [2..2] = 0x00000004 */
      unsigned int TRCMUX:1;            /*  = [3..3] = 0x00000008 */
      unsigned int TRCDENP:1;           /*  = [4..4] = 0x00000010 */
      unsigned int TRCDEN:1;            /*  = [5..5] = 0x00000020 */
      unsigned int TRCDSP:1;            /*  = [6..6] = 0x00000040 */
      unsigned int TRCDS:1;             /*  = [7..7] = 0x00000080 */
      unsigned int TRCEECP:1;           /*  = [8..8] = 0x00000100 */
      unsigned int TRCEEC:1;            /*  = [9..9] = 0x00000200 */
      unsigned int EECENP:1;            /*  = [10..10] = 0x00000400 */
      unsigned int EECEN:1;             /*  = [11..11] = 0x00000800 */
      unsigned int WDTSUSP:1;           /*  = [12..12] = 0x00001000 */
      unsigned int WDTSUS:1;            /*  = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int HARRP:1;             /*  = [16..16] = 0x00010000 */
      unsigned int HARR:1;              /*  = [17..17] = 0x00020000 */
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
} __attribute__((aligned(4))) CBS_OCNTRL_t_nonv;

typedef volatile CBS_OCNTRL_t_nonv CBS_OCNTRL_t;

/********************** CBS_OEC_t *************************/
/*
   CBS_OEC               "Cerberus OCDS Enable Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int PAT:8;               /*  = [0..7] = 0x000000ff */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int IFLCKP:1;            /*  = [16..16] = 0x00010000 */
      unsigned int IFLCK:1;             /*  = [17..17] = 0x00020000 */
      unsigned int AUTOKP:1;            /*  = [18..18] = 0x00040000 */
      unsigned int AUTOK:1;             /*  = [19..19] = 0x00080000 */
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
} __attribute__((aligned(4))) CBS_OEC_t_nonv;

typedef volatile CBS_OEC_t_nonv CBS_OEC_t;

/********************** CBS_OSTATE_t *************************/
/*
   CBS_OSTATE            "Cerberus OSCU Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int OEN:1;               /*  = [0..0] = 0x00000001 */
      unsigned int TRCEN:1;             /*  = [1..1] = 0x00000002 */
      unsigned int TRCMUX:1;            /*  = [2..2] = 0x00000004 */
      unsigned int TRCDEN:1;            /*  = [3..3] = 0x00000008 */
      unsigned int TRCDS:1;             /*  = [4..4] = 0x00000010 */
      unsigned int TRCEEC:1;            /*  = [5..5] = 0x00000020 */
      unsigned int EECDIS:1;            /*  = [6..6] = 0x00000040 */
      unsigned int WDTSUS:1;            /*  = [7..7] = 0x00000080 */
      unsigned int HARR:1;              /*  = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int IFLCK:1;             /*  = [16..16] = 0x00010000 */
      unsigned int AUTOK:1;             /*  = [17..17] = 0x00020000 */
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
} __attribute__((aligned(4))) CBS_OSTATE_t_nonv;

typedef volatile CBS_OSTATE_t_nonv CBS_OSTATE_t;

/********************** CBS_SRC_t *************************/
/*
   CBS_SRC               "Cerberus Service Request Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SRPN:8;              /*  = [0..7] = 0x000000ff */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int TOS:1;               /*  = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int SRE:1;               /*  = [12..12] = 0x00001000 */
      unsigned int SRR:1;               /*  = [13..13] = 0x00002000 */
      unsigned int CLRR:1;              /*  = [14..14] = 0x00004000 */
      unsigned int SETR:1;              /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) CBS_SRC_t_nonv;

typedef volatile CBS_SRC_t_nonv CBS_SRC_t;


#endif /* _HAVE_TRICORE_CERBERUS_TYPES_H_ */

