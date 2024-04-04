/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_MSC0_MSC1_SHARETYPES_H_
#define _HAVE_TRICORE_MSC0_MSC1_SHARETYPES_H_


/********************** MSCn_CLC_t *************************/
/*
   MSC0_CLC              "MSC0 Clock Control Register"
   MSC1_CLC              "MSC1 Clock Control Register"
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
} __attribute__((aligned(4))) MSCn_CLC_t_nonv;

typedef volatile MSCn_CLC_t_nonv MSCn_CLC_t;

/********************** MSCn_DC_t *************************/
/*
   MSC0_DC               "MSC0 Downstream Command Register"
   MSC1_DC               "MSC1 Downstream Command Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DCL:16;              /*  = [0..15] = 0x0000ffff */
      unsigned int DCH:16;              /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MSCn_DC_t_nonv;

typedef volatile MSCn_DC_t_nonv MSCn_DC_t;

/********************** MSCn_DD_t *************************/
/*
   MSC0_DD               "MSC0 Downstream Data Register"
   MSC1_DD               "MSC1 Downstream Data Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DDL:16;              /*  = [0..15] = 0x0000ffff */
      unsigned int DDH:16;              /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MSCn_DD_t_nonv;

typedef volatile MSCn_DD_t_nonv MSCn_DD_t;

/********************** MSCn_DSC_t *************************/
/*
   MSC0_DSC              "MSC0 Downstream Control Register"
   MSC1_DSC              "MSC1 Downstream Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TM:1;                /*  = [0..0] = 0x00000001 */
      unsigned int CP:1;                /*  = [1..1] = 0x00000002 */
      unsigned int DP:1;                /*  = [2..2] = 0x00000004 */
      unsigned int NDBL:5;              /*  = [3..7] = 0x000000f8 */
      unsigned int NDBH:5;              /*  = [8..12] = 0x00001f00 */
      unsigned int ENSELL:1;            /*  = [13..13] = 0x00002000 */
      unsigned int ENSELH:1;            /*  = [14..14] = 0x00004000 */
      unsigned int DSDIS:1;             /*  = [15..15] = 0x00008000 */
      unsigned int NBC:6;               /*  = [16..21] = 0x003f0000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int PPD:5;               /*  = [24..28] = 0x1f000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MSCn_DSC_t_nonv;

typedef volatile MSCn_DSC_t_nonv MSCn_DSC_t;

/********************** MSCn_DSDSH_t *************************/
/*
   MSC0_DSDSH            "MSC0 Downstream Select Data Source High Register"
   MSC1_DSDSH            "MSC1 Downstream Select Data Source High Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SH0:2;               /*  = [0..1] = 0x00000003 */
      unsigned int SH1:2;               /*  = [2..3] = 0x0000000c */
      unsigned int SH2:2;               /*  = [4..5] = 0x00000030 */
      unsigned int SH3:2;               /*  = [6..7] = 0x000000c0 */
      unsigned int SH4:2;               /*  = [8..9] = 0x00000300 */
      unsigned int SH5:2;               /*  = [10..11] = 0x00000c00 */
      unsigned int SH6:2;               /*  = [12..13] = 0x00003000 */
      unsigned int SH7:2;               /*  = [14..15] = 0x0000c000 */
      unsigned int SH8:2;               /*  = [16..17] = 0x00030000 */
      unsigned int SH9:2;               /*  = [18..19] = 0x000c0000 */
      unsigned int SH10:2;              /*  = [20..21] = 0x00300000 */
      unsigned int SH11:2;              /*  = [22..23] = 0x00c00000 */
      unsigned int SH12:2;              /*  = [24..25] = 0x03000000 */
      unsigned int SH13:2;              /*  = [26..27] = 0x0c000000 */
      unsigned int SH14:2;              /*  = [28..29] = 0x30000000 */
      unsigned int SH15:2;              /*  = [30..31] = 0xc0000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MSCn_DSDSH_t_nonv;

typedef volatile MSCn_DSDSH_t_nonv MSCn_DSDSH_t;

/********************** MSCn_DSDSL_t *************************/
/*
   MSC0_DSDSL            "MSC0 Downstream Select Data Source Low Register"
   MSC1_DSDSL            "MSC1 Downstream Select Data Source Low Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SL0:2;               /*  = [0..1] = 0x00000003 */
      unsigned int SL1:2;               /*  = [2..3] = 0x0000000c */
      unsigned int SL2:2;               /*  = [4..5] = 0x00000030 */
      unsigned int SL3:2;               /*  = [6..7] = 0x000000c0 */
      unsigned int SL4:2;               /*  = [8..9] = 0x00000300 */
      unsigned int SL5:2;               /*  = [10..11] = 0x00000c00 */
      unsigned int SL6:2;               /*  = [12..13] = 0x00003000 */
      unsigned int SL7:2;               /*  = [14..15] = 0x0000c000 */
      unsigned int SL8:2;               /*  = [16..17] = 0x00030000 */
      unsigned int SL9:2;               /*  = [18..19] = 0x000c0000 */
      unsigned int SL10:2;              /*  = [20..21] = 0x00300000 */
      unsigned int SL11:2;              /*  = [22..23] = 0x00c00000 */
      unsigned int SL12:2;              /*  = [24..25] = 0x03000000 */
      unsigned int SL13:2;              /*  = [26..27] = 0x0c000000 */
      unsigned int SL14:2;              /*  = [28..29] = 0x30000000 */
      unsigned int SL15:2;              /*  = [30..31] = 0xc0000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MSCn_DSDSL_t_nonv;

typedef volatile MSCn_DSDSL_t_nonv MSCn_DSDSL_t;

/********************** MSCn_DSS_t *************************/
/*
   MSC0_DSS              "MSC0 Downstream Status Register"
   MSC1_DSS              "MSC1 Downstream Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int PFC:4;               /*  = [0..3] = 0x0000000f */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int NPTF:4;              /*  = [8..11] = 0x00000f00 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int DC:7;                /*  = [16..22] = 0x007f0000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int DFA:1;               /*  = [24..24] = 0x01000000 */
      unsigned int CFA:1;               /*  = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MSCn_DSS_t_nonv;

typedef volatile MSCn_DSS_t_nonv MSCn_DSS_t;

/********************** MSCn_ESR_t *************************/
/*
   MSC0_ESR              "MSC0 Emergency Stop Register"
   MSC1_ESR              "MSC1 Emergency Stop Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ENL0:1;              /*  = [0..0] = 0x00000001 */
      unsigned int ENL1:1;              /*  = [1..1] = 0x00000002 */
      unsigned int ENL2:1;              /*  = [2..2] = 0x00000004 */
      unsigned int ENL3:1;              /*  = [3..3] = 0x00000008 */
      unsigned int ENL4:1;              /*  = [4..4] = 0x00000010 */
      unsigned int ENL5:1;              /*  = [5..5] = 0x00000020 */
      unsigned int ENL6:1;              /*  = [6..6] = 0x00000040 */
      unsigned int ENL7:1;              /*  = [7..7] = 0x00000080 */
      unsigned int ENL8:1;              /*  = [8..8] = 0x00000100 */
      unsigned int ENL9:1;              /*  = [9..9] = 0x00000200 */
      unsigned int ENL10:1;             /*  = [10..10] = 0x00000400 */
      unsigned int ENL11:1;             /*  = [11..11] = 0x00000800 */
      unsigned int ENL12:1;             /*  = [12..12] = 0x00001000 */
      unsigned int ENL13:1;             /*  = [13..13] = 0x00002000 */
      unsigned int ENL14:1;             /*  = [14..14] = 0x00004000 */
      unsigned int ENL15:1;             /*  = [15..15] = 0x00008000 */
      unsigned int ENH0:1;              /*  = [16..16] = 0x00010000 */
      unsigned int ENH1:1;              /*  = [17..17] = 0x00020000 */
      unsigned int ENH2:1;              /*  = [18..18] = 0x00040000 */
      unsigned int ENH3:1;              /*  = [19..19] = 0x00080000 */
      unsigned int ENH4:1;              /*  = [20..20] = 0x00100000 */
      unsigned int ENH5:1;              /*  = [21..21] = 0x00200000 */
      unsigned int ENH6:1;              /*  = [22..22] = 0x00400000 */
      unsigned int ENH7:1;              /*  = [23..23] = 0x00800000 */
      unsigned int ENH8:1;              /*  = [24..24] = 0x01000000 */
      unsigned int ENH9:1;              /*  = [25..25] = 0x02000000 */
      unsigned int ENH10:1;             /*  = [26..26] = 0x04000000 */
      unsigned int ENH11:1;             /*  = [27..27] = 0x08000000 */
      unsigned int ENH12:1;             /*  = [28..28] = 0x10000000 */
      unsigned int ENH13:1;             /*  = [29..29] = 0x20000000 */
      unsigned int ENH14:1;             /*  = [30..30] = 0x40000000 */
      unsigned int ENH15:1;             /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MSCn_ESR_t_nonv;

typedef volatile MSCn_ESR_t_nonv MSCn_ESR_t;

/********************** MSCn_FDR_t *************************/
/*
   MSC0_FDR              "MSC0 Fractional Divider Register"
   MSC1_FDR              "MSC1 Fractional Divider Register"
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
} __attribute__((aligned(4))) MSCn_FDR_t_nonv;

typedef volatile MSCn_FDR_t_nonv MSCn_FDR_t;

/********************** MSCn_ICR_t *************************/
/*
   MSC0_ICR              "MSC0 Interrupt Control Register"
   MSC1_ICR              "MSC1 Interrupt Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int EDIP:2;              /*  = [0..1] = 0x00000003 */
      unsigned int EDIE:2;              /*  = [2..3] = 0x0000000c */
      unsigned int ECIP:2;              /*  = [4..5] = 0x00000030 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int ECIE:1;              /*  = [7..7] = 0x00000080 */
      unsigned int TFIP:2;              /*  = [8..9] = 0x00000300 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int TFIE:1;              /*  = [11..11] = 0x00000800 */
      unsigned int RDIP:2;              /*  = [12..13] = 0x00003000 */
      unsigned int RDIE:2;              /*  = [14..15] = 0x0000c000 */
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
} __attribute__((aligned(4))) MSCn_ICR_t_nonv;

typedef volatile MSCn_ICR_t_nonv MSCn_ICR_t;

/********************** MSCn_ID_t *************************/
/*
   MSC0_ID               "MSC0 Module Identification Register"
   MSC1_ID               "MSC1 Module Identification Register"
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
} __attribute__((aligned(4))) MSCn_ID_t_nonv;

typedef volatile MSCn_ID_t_nonv MSCn_ID_t;

/********************** MSCn_ISC_t *************************/
/*
   MSC0_ISC              "MSC0 Interrupt Set Clear Register"
   MSC1_ISC              "MSC1 Interrupt Set Clear Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CDEDI:1;             /*  = [0..0] = 0x00000001 */
      unsigned int CDECI:1;             /*  = [1..1] = 0x00000002 */
      unsigned int CDTFI:1;             /*  = [2..2] = 0x00000004 */
      unsigned int CURDI:1;             /*  = [3..3] = 0x00000008 */
      unsigned int CDP:1;               /*  = [4..4] = 0x00000010 */
      unsigned int CCP:1;               /*  = [5..5] = 0x00000020 */
      unsigned int CDDIS:1;             /*  = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int SDEDI:1;             /*  = [16..16] = 0x00010000 */
      unsigned int SDECI:1;             /*  = [17..17] = 0x00020000 */
      unsigned int SDTFI:1;             /*  = [18..18] = 0x00040000 */
      unsigned int SURDI:1;             /*  = [19..19] = 0x00080000 */
      unsigned int SDP:1;               /*  = [20..20] = 0x00100000 */
      unsigned int SCP:1;               /*  = [21..21] = 0x00200000 */
      unsigned int SDDIS:1;             /*  = [22..22] = 0x00400000 */
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
} __attribute__((aligned(4))) MSCn_ISC_t_nonv;

typedef volatile MSCn_ISC_t_nonv MSCn_ISC_t;

/********************** MSCn_ISR_t *************************/
/*
   MSC0_ISR              "MSC0 Interrupt Status Register"
   MSC1_ISR              "MSC1 Interrupt Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DEDI:1;              /*  = [0..0] = 0x00000001 */
      unsigned int DECI:1;              /*  = [1..1] = 0x00000002 */
      unsigned int DTFI:1;              /*  = [2..2] = 0x00000004 */
      unsigned int URDI:1;              /*  = [3..3] = 0x00000008 */
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
} __attribute__((aligned(4))) MSCn_ISR_t_nonv;

typedef volatile MSCn_ISR_t_nonv MSCn_ISR_t;

/********************** MSCn_OCR_t *************************/
/*
   MSC0_OCR              "MSC0 Output Control Register"
   MSC1_OCR              "MSC1 Output Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CLP:1;               /*  = [0..0] = 0x00000001 */
      unsigned int SLP:1;               /*  = [1..1] = 0x00000002 */
      unsigned int CSLP:1;              /*  = [2..2] = 0x00000004 */
      unsigned int ILP:1;               /*  = [3..3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int CLKCTRL:1;           /*  = [8..8] = 0x00000100 */
      unsigned int CSL:2;               /*  = [9..10] = 0x00000600 */
      unsigned int CSH:2;               /*  = [11..12] = 0x00001800 */
      unsigned int CSC:2;               /*  = [13..14] = 0x00006000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int SDISEL:3;            /*  = [16..18] = 0x00070000 */
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
} __attribute__((aligned(4))) MSCn_OCR_t_nonv;

typedef volatile MSCn_OCR_t_nonv MSCn_OCR_t;

/********************** MSCn_SRCm_t *************************/
/*
   MSC0_SRC0             "MSC0 Service Request Control Register 0"
   MSC0_SRC1             "MSC0 Service Request Control Register 1"
   MSC1_SRC0             "MSC1 Service Request Control Register 0"
   MSC1_SRC1             "MSC1 Service Request Control Register 1"
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
} __attribute__((aligned(4))) MSCn_SRCm_t_nonv;

typedef volatile MSCn_SRCm_t_nonv MSCn_SRCm_t;

/********************** MSCn_UDm_t *************************/
/*
   MSC0_UD0              "MSC0 Upstream Data Register 0"
   MSC0_UD1              "MSC0 Upstream Data Register 1"
   MSC0_UD2              "MSC0 Upstream Data Register 2"
   MSC0_UD3              "MSC0 Upstream Data Register 3"
   MSC1_UD0              "MSC1 Upstream Data Register 0"
   MSC1_UD1              "MSC1 Upstream Data Register 1"
   MSC1_UD2              "MSC1 Upstream Data Register 2"
   MSC1_UD3              "MSC1 Upstream Data Register 3"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DATA:8;              /*  = [0..7] = 0x000000ff */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int V:1;                 /*  = [16..16] = 0x00010000 */
      unsigned int P:1;                 /*  = [17..17] = 0x00020000 */
      unsigned int C:1;                 /*  = [18..18] = 0x00040000 */
      unsigned int LABF:2;              /*  = [19..20] = 0x00180000 */
      unsigned int IPF:1;               /*  = [21..21] = 0x00200000 */
      unsigned int PERR:1;              /*  = [22..22] = 0x00400000 */
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
} __attribute__((aligned(4))) MSCn_UDm_t_nonv;

typedef volatile MSCn_UDm_t_nonv MSCn_UDm_t;

/********************** MSCn_USR_t *************************/
/*
   MSC0_USR              "MSC0 Upstream Status Register"
   MSC1_USR              "MSC1 Upstream Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int UFT:1;               /*  = [0..0] = 0x00000001 */
      unsigned int URR:3;               /*  = [1..3] = 0x0000000e */
      unsigned int PCTR:1;              /*  = [4..4] = 0x00000010 */
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
      unsigned int UC:5;                /*  = [16..20] = 0x001f0000 */
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
} __attribute__((aligned(4))) MSCn_USR_t_nonv;

typedef volatile MSCn_USR_t_nonv MSCn_USR_t;


#endif /* _HAVE_TRICORE_MSC0_MSC1_SHARETYPES_H_ */

