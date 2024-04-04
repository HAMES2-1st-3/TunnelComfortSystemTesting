/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_CERBERUS_TYPES_H_
#define _HAVE_TRICORE_CERBERUS_TYPES_H_


/********************** CBS_COMDATA_t *************************/
/*
   CBS_COMDATA           "Communication Mode Data Register"
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
   CBS_ICTSA             "Internally Controlled Trace Source Register"
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
   CBS_ICTTA             "Internally Controlled Trace Destination Register"
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
   CBS_INTMOD            "Internal Mode Status and Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SET_CRS:1;           /*  = [0..0] = 0x00000001 */
      unsigned int SET_CWS:1;           /*  = [1..1] = 0x00000002 */
      unsigned int SET_CS:1;            /*  = [2..2] = 0x00000004 */
      unsigned int CLR_CS:1;            /*  = [3..3] = 0x00000008 */
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
      unsigned int SET_INT_MOD:1;       /*  = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int SET_INT_TRC:1;       /*  = [18..18] = 0x00040000 */
      unsigned int CLR_INT_TRC:1;       /*  = [19..19] = 0x00080000 */
      unsigned int TRC_MOD_P:1;         /*  = [20..20] = 0x00100000 */
      unsigned int TRC_MOD:2;           /*  = [21..22] = 0x00600000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int INT_MOD:1;           /*  = [24..24] = 0x01000000 */
      unsigned int INT_TRC:1;           /*  = [25..25] = 0x02000000 */
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
   CBS_IOSR              "IOClient Status and Control Register"
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
      unsigned int CW_ACK:1;            /*  = [6..6] = 0x00000040 */
      unsigned int COM_SYNC:1;          /*  = [7..7] = 0x00000080 */
      unsigned int HOSTED:1;            /*  = [8..8] = 0x00000100 */
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

/********************** CBS_JTAGID_t *************************/
/*
   CBS_JTAGID            "JTAG Device Identification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int JTAG_ID:32;          /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CBS_JTAGID_t_nonv;

typedef volatile CBS_JTAGID_t_nonv CBS_JTAGID_t;

/********************** CBS_MCDBBS_t *************************/
/*
   CBS_MCDBBS            "Break Bus Switch Configuration Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int BSSB:1;              /*  = [0..0] = 0x00000001 */
      unsigned int BSDMA:1;             /*  = [1..1] = 0x00000002 */
      unsigned int BSML0:1;             /*  = [2..2] = 0x00000004 */
      unsigned int BSML1:1;             /*  = [3..3] = 0x00000008 */
      unsigned int BSPCP:1;             /*  = [4..4] = 0x00000010 */
      unsigned int BSTC:1;              /*  = [5..5] = 0x00000020 */
      unsigned int BSPCPEN:1;           /*  = [6..6] = 0x00000040 */
      unsigned int BSHLTEN:1;           /*  = [7..7] = 0x00000080 */
      unsigned int BTMCD:1;             /*  = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int BTPCP:1;             /*  = [12..12] = 0x00001000 */
      unsigned int BTTC:1;              /*  = [13..13] = 0x00002000 */
      unsigned int BTPCPEN:1;           /*  = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int BSP0:1;              /*  = [16..16] = 0x00010000 */
      unsigned int BSP1:1;              /*  = [17..17] = 0x00020000 */
      unsigned int BTP0:1;              /*  = [18..18] = 0x00040000 */
      unsigned int BTP1:1;              /*  = [19..19] = 0x00080000 */
      unsigned int BTT:1;               /*  = [20..20] = 0x00100000 */
      unsigned int BTPS:2;              /*  = [21..22] = 0x00600000 */
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
   CBS_MCDBBSS           "Break Bus Switch Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int BSSSB:1;             /*  = [0..0] = 0x00000001 */
      unsigned int BSSDMA:1;            /*  = [1..1] = 0x00000002 */
      unsigned int BSSML0:1;            /*  = [2..2] = 0x00000004 */
      unsigned int BSSML1:1;            /*  = [3..3] = 0x00000008 */
      unsigned int BSSPCP:1;            /*  = [4..4] = 0x00000010 */
      unsigned int BSSTC:1;             /*  = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int BSCSB:1;             /*  = [8..8] = 0x00000100 */
      unsigned int BSCDMA:1;            /*  = [9..9] = 0x00000200 */
      unsigned int BSCML0:1;            /*  = [10..10] = 0x00000400 */
      unsigned int BSCML1:1;            /*  = [11..11] = 0x00000800 */
      unsigned int BSCPCP:1;            /*  = [12..12] = 0x00001000 */
      unsigned int BSCTC:1;             /*  = [13..13] = 0x00002000 */
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
   CBS_MCDSSG            "Suspend Source Status and Control Register"
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
      unsigned int SUS_P:1;             /*  = [6..6] = 0x00000040 */
      unsigned int SUS:1;               /*  = [7..7] = 0x00000080 */
      unsigned int BTS_P:1;             /*  = [8..8] = 0x00000100 */
      unsigned int BTSEN:1;             /*  = [9..9] = 0x00000200 */
      unsigned int BTSM:1;              /*  = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int SSSTC:1;             /*  = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int SSSSCU:1;            /*  = [18..18] = 0x00040000 */
      unsigned int SSSMCD:1;            /*  = [19..19] = 0x00080000 */
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
   CBS_MCDSSGC           "Suspend Signal Target Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int STC_P:1;             /*  = [0..0] = 0x00000001 */
      unsigned int STCM:1;              /*  = [1..1] = 0x00000002 */
      unsigned int STCTC:1;             /*  = [2..2] = 0x00000004 */
      unsigned int STCPCP:1;            /*  = [3..3] = 0x00000008 */
      unsigned int STCDMA:1;            /*  = [4..4] = 0x00000010 */
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
   CBS_OCNTRL            "OSCU Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int OC0_P:1;             /*  = [0..0] = 0x00000001 */
      unsigned int OC0:1;               /*  = [1..1] = 0x00000002 */
      unsigned int OC1_P:1;             /*  = [2..2] = 0x00000004 */
      unsigned int OC1:1;               /*  = [3..3] = 0x00000008 */
      unsigned int OC2_P:1;             /*  = [4..4] = 0x00000010 */
      unsigned int OC2:1;               /*  = [5..5] = 0x00000020 */
      unsigned int OC3_P:1;             /*  = [6..6] = 0x00000040 */
      unsigned int OC3:1;               /*  = [7..7] = 0x00000080 */
      unsigned int OC4_P:1;             /*  = [8..8] = 0x00000100 */
      unsigned int OC4:1;               /*  = [9..9] = 0x00000200 */
      unsigned int OC5_P:1;             /*  = [10..10] = 0x00000400 */
      unsigned int OC5:1;               /*  = [11..11] = 0x00000800 */
      unsigned int WDTSUS_P:1;          /*  = [12..12] = 0x00001000 */
      unsigned int WDTSUS:1;            /*  = [13..13] = 0x00002000 */
      unsigned int STABLE_P:1;          /*  = [14..14] = 0x00004000 */
      unsigned int STABLE:1;            /*  = [15..15] = 0x00008000 */
      unsigned int OJC0_P:1;            /*  = [16..16] = 0x00010000 */
      unsigned int OJC0:1;              /*  = [17..17] = 0x00020000 */
      unsigned int OJC1_P:1;            /*  = [18..18] = 0x00040000 */
      unsigned int OJC1:1;              /*  = [19..19] = 0x00080000 */
      unsigned int OJC2_P:1;            /*  = [20..20] = 0x00100000 */
      unsigned int OJC2:1;              /*  = [21..21] = 0x00200000 */
      unsigned int OJC3_P:1;            /*  = [22..22] = 0x00400000 */
      unsigned int OJC3:1;              /*  = [23..23] = 0x00800000 */
      unsigned int OJC4_P:1;            /*  = [24..24] = 0x01000000 */
      unsigned int OJC4:1;              /*  = [25..25] = 0x02000000 */
      unsigned int OJC5_P:1;            /*  = [26..26] = 0x04000000 */
      unsigned int OJC5:1;              /*  = [27..27] = 0x08000000 */
      unsigned int OJC6_P:1;            /*  = [28..28] = 0x10000000 */
      unsigned int OJC6:1;              /*  = [29..29] = 0x20000000 */
      unsigned int OJC7_P:1;            /*  = [30..30] = 0x40000000 */
      unsigned int OJC7:1;              /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CBS_OCNTRL_t_nonv;

typedef volatile CBS_OCNTRL_t_nonv CBS_OCNTRL_t;

/********************** CBS_OEC_t *************************/
/*
   CBS_OEC               "OCDS Enable Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int PAT:8;               /*  = [0..7] = 0x000000ff */
      unsigned int DS:1;                /*  = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int IF_LCK_P:1;          /*  = [16..16] = 0x00010000 */
      unsigned int IF_LCK:1;            /*  = [17..17] = 0x00020000 */
      unsigned int AUT_OK_P:1;          /*  = [18..18] = 0x00040000 */
      unsigned int AUT_OK:1;            /*  = [19..19] = 0x00080000 */
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
   CBS_OSTATE            "OSCU Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int OEN:1;               /*  = [0..0] = 0x00000001 */
      unsigned int DJMODE:2;            /*  = [1..2] = 0x00000006 */
      unsigned int DAPRST:1;            /*  = [3..3] = 0x00000008 */
      unsigned int ENIDIS:1;            /*  = [4..4] = 0x00000010 */
      unsigned int EECTRC:1;            /*  = [5..5] = 0x00000020 */
      unsigned int EECDIS:1;            /*  = [6..6] = 0x00000040 */
      unsigned int WDTSUS:1;            /*  = [7..7] = 0x00000080 */
      unsigned int HARR:1;              /*  = [8..8] = 0x00000100 */
      unsigned int OJC1:1;              /*  = [9..9] = 0x00000200 */
      unsigned int OJC2:1;              /*  = [10..10] = 0x00000400 */
      unsigned int OJC3:1;              /*  = [11..11] = 0x00000800 */
      unsigned int RSTCL0:1;            /*  = [12..12] = 0x00001000 */
      unsigned int RSTCL1:1;            /*  = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int RSTCL3:1;            /*  = [15..15] = 0x00008000 */
      unsigned int IF_LCK:1;            /*  = [16..16] = 0x00010000 */
      unsigned int AUT_OK:1;            /*  = [17..17] = 0x00020000 */
      unsigned int STABLE:1;            /*  = [18..18] = 0x00040000 */
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

/********************** CBS_TRIG_t *************************/
/*
   CBS_TRIG              "Trigger to Host Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TRG0:1;              /*  = [0..0] = 0x00000001 */
      unsigned int TRG1:1;              /*  = [1..1] = 0x00000002 */
      unsigned int TRG2:1;              /*  = [2..2] = 0x00000004 */
      unsigned int TRG3:1;              /*  = [3..3] = 0x00000008 */
      unsigned int TRG4:1;              /*  = [4..4] = 0x00000010 */
      unsigned int TRG5:1;              /*  = [5..5] = 0x00000020 */
      unsigned int TRG6:1;              /*  = [6..6] = 0x00000040 */
      unsigned int TRG7:1;              /*  = [7..7] = 0x00000080 */
      unsigned int TRG8:1;              /*  = [8..8] = 0x00000100 */
      unsigned int TRG9:1;              /*  = [9..9] = 0x00000200 */
      unsigned int TRG10:1;             /*  = [10..10] = 0x00000400 */
      unsigned int TRG11:1;             /*  = [11..11] = 0x00000800 */
      unsigned int TRG12:1;             /*  = [12..12] = 0x00001000 */
      unsigned int TRG13:1;             /*  = [13..13] = 0x00002000 */
      unsigned int TRG14:1;             /*  = [14..14] = 0x00004000 */
      unsigned int TRG15:1;             /*  = [15..15] = 0x00008000 */
      unsigned int TRG16:1;             /*  = [16..16] = 0x00010000 */
      unsigned int TRG17:1;             /*  = [17..17] = 0x00020000 */
      unsigned int TRG18:1;             /*  = [18..18] = 0x00040000 */
      unsigned int TRG19:1;             /*  = [19..19] = 0x00080000 */
      unsigned int TRG20:1;             /*  = [20..20] = 0x00100000 */
      unsigned int TRG21:1;             /*  = [21..21] = 0x00200000 */
      unsigned int TRG22:1;             /*  = [22..22] = 0x00400000 */
      unsigned int TRG23:1;             /*  = [23..23] = 0x00800000 */
      unsigned int TRG24:1;             /*  = [24..24] = 0x01000000 */
      unsigned int TRG25:1;             /*  = [25..25] = 0x02000000 */
      unsigned int TRG26:1;             /*  = [26..26] = 0x04000000 */
      unsigned int TRG27:1;             /*  = [27..27] = 0x08000000 */
      unsigned int TRG28:1;             /*  = [28..28] = 0x10000000 */
      unsigned int TRG29:1;             /*  = [29..29] = 0x20000000 */
      unsigned int TRG30:1;             /*  = [30..30] = 0x40000000 */
      unsigned int TRG31:1;             /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CBS_TRIG_t_nonv;

typedef volatile CBS_TRIG_t_nonv CBS_TRIG_t;

/********************** CBS_TRIGC_t *************************/
/*
   CBS_TRIGC             "Clear Trigger to Host Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TRG0:1;              /*  = [0..0] = 0x00000001 */
      unsigned int TRG1:1;              /*  = [1..1] = 0x00000002 */
      unsigned int TRG2:1;              /*  = [2..2] = 0x00000004 */
      unsigned int TRG3:1;              /*  = [3..3] = 0x00000008 */
      unsigned int TRG4:1;              /*  = [4..4] = 0x00000010 */
      unsigned int TRG5:1;              /*  = [5..5] = 0x00000020 */
      unsigned int TRG6:1;              /*  = [6..6] = 0x00000040 */
      unsigned int TRG7:1;              /*  = [7..7] = 0x00000080 */
      unsigned int TRG8:1;              /*  = [8..8] = 0x00000100 */
      unsigned int TRG9:1;              /*  = [9..9] = 0x00000200 */
      unsigned int TRG10:1;             /*  = [10..10] = 0x00000400 */
      unsigned int TRG11:1;             /*  = [11..11] = 0x00000800 */
      unsigned int TRG12:1;             /*  = [12..12] = 0x00001000 */
      unsigned int TRG13:1;             /*  = [13..13] = 0x00002000 */
      unsigned int TRG14:1;             /*  = [14..14] = 0x00004000 */
      unsigned int TRG15:1;             /*  = [15..15] = 0x00008000 */
      unsigned int TRG16:1;             /*  = [16..16] = 0x00010000 */
      unsigned int TRG17:1;             /*  = [17..17] = 0x00020000 */
      unsigned int TRG18:1;             /*  = [18..18] = 0x00040000 */
      unsigned int TRG19:1;             /*  = [19..19] = 0x00080000 */
      unsigned int TRG20:1;             /*  = [20..20] = 0x00100000 */
      unsigned int TRG21:1;             /*  = [21..21] = 0x00200000 */
      unsigned int TRG22:1;             /*  = [22..22] = 0x00400000 */
      unsigned int TRG23:1;             /*  = [23..23] = 0x00800000 */
      unsigned int TRG24:1;             /*  = [24..24] = 0x01000000 */
      unsigned int TRG25:1;             /*  = [25..25] = 0x02000000 */
      unsigned int TRG26:1;             /*  = [26..26] = 0x04000000 */
      unsigned int TRG27:1;             /*  = [27..27] = 0x08000000 */
      unsigned int TRG28:1;             /*  = [28..28] = 0x10000000 */
      unsigned int TRG29:1;             /*  = [29..29] = 0x20000000 */
      unsigned int TRG30:1;             /*  = [30..30] = 0x40000000 */
      unsigned int TRG31:1;             /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CBS_TRIGC_t_nonv;

typedef volatile CBS_TRIGC_t_nonv CBS_TRIGC_t;

/********************** CBS_TRIGS_t *************************/
/*
   CBS_TRIGS             "Set Trigger to Host Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TRG0:1;              /*  = [0..0] = 0x00000001 */
      unsigned int TRG1:1;              /*  = [1..1] = 0x00000002 */
      unsigned int TRG2:1;              /*  = [2..2] = 0x00000004 */
      unsigned int TRG3:1;              /*  = [3..3] = 0x00000008 */
      unsigned int TRG4:1;              /*  = [4..4] = 0x00000010 */
      unsigned int TRG5:1;              /*  = [5..5] = 0x00000020 */
      unsigned int TRG6:1;              /*  = [6..6] = 0x00000040 */
      unsigned int TRG7:1;              /*  = [7..7] = 0x00000080 */
      unsigned int TRG8:1;              /*  = [8..8] = 0x00000100 */
      unsigned int TRG9:1;              /*  = [9..9] = 0x00000200 */
      unsigned int TRG10:1;             /*  = [10..10] = 0x00000400 */
      unsigned int TRG11:1;             /*  = [11..11] = 0x00000800 */
      unsigned int TRG12:1;             /*  = [12..12] = 0x00001000 */
      unsigned int TRG13:1;             /*  = [13..13] = 0x00002000 */
      unsigned int TRG14:1;             /*  = [14..14] = 0x00004000 */
      unsigned int TRG15:1;             /*  = [15..15] = 0x00008000 */
      unsigned int TRG16:1;             /*  = [16..16] = 0x00010000 */
      unsigned int TRG17:1;             /*  = [17..17] = 0x00020000 */
      unsigned int TRG18:1;             /*  = [18..18] = 0x00040000 */
      unsigned int TRG19:1;             /*  = [19..19] = 0x00080000 */
      unsigned int TRG20:1;             /*  = [20..20] = 0x00100000 */
      unsigned int TRG21:1;             /*  = [21..21] = 0x00200000 */
      unsigned int TRG22:1;             /*  = [22..22] = 0x00400000 */
      unsigned int TRG23:1;             /*  = [23..23] = 0x00800000 */
      unsigned int TRG24:1;             /*  = [24..24] = 0x01000000 */
      unsigned int TRG25:1;             /*  = [25..25] = 0x02000000 */
      unsigned int TRG26:1;             /*  = [26..26] = 0x04000000 */
      unsigned int TRG27:1;             /*  = [27..27] = 0x08000000 */
      unsigned int TRG28:1;             /*  = [28..28] = 0x10000000 */
      unsigned int TRG29:1;             /*  = [29..29] = 0x20000000 */
      unsigned int TRG30:1;             /*  = [30..30] = 0x40000000 */
      unsigned int TRG31:1;             /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CBS_TRIGS_t_nonv;

typedef volatile CBS_TRIGS_t_nonv CBS_TRIGS_t;


#endif /* _HAVE_TRICORE_CERBERUS_TYPES_H_ */

