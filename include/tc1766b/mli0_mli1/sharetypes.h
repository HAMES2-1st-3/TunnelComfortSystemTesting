/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_MLI0_MLI1_SHARETYPES_H_
#define _HAVE_TRICORE_MLI0_MLI1_SHARETYPES_H_


/********************** MLIn_AER_t *************************/
/*
   MLI0_AER              "Access Enable Register"
   MLI1_AER              "Access Enable Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int AEN0:1;              /*  = [0..0] = 0x00000001 */
      unsigned int AEN1:1;              /*  = [1..1] = 0x00000002 */
      unsigned int AEN2:1;              /*  = [2..2] = 0x00000004 */
      unsigned int AEN3:1;              /*  = [3..3] = 0x00000008 */
      unsigned int AEN4:1;              /*  = [4..4] = 0x00000010 */
      unsigned int AEN5:1;              /*  = [5..5] = 0x00000020 */
      unsigned int AEN6:1;              /*  = [6..6] = 0x00000040 */
      unsigned int AEN7:1;              /*  = [7..7] = 0x00000080 */
      unsigned int AEN8:1;              /*  = [8..8] = 0x00000100 */
      unsigned int AEN9:1;              /*  = [9..9] = 0x00000200 */
      unsigned int AEN10:1;             /*  = [10..10] = 0x00000400 */
      unsigned int AEN11:1;             /*  = [11..11] = 0x00000800 */
      unsigned int AEN12:1;             /*  = [12..12] = 0x00001000 */
      unsigned int AEN13:1;             /*  = [13..13] = 0x00002000 */
      unsigned int AEN14:1;             /*  = [14..14] = 0x00004000 */
      unsigned int AEN15:1;             /*  = [15..15] = 0x00008000 */
      unsigned int AEN16:1;             /*  = [16..16] = 0x00010000 */
      unsigned int AEN17:1;             /*  = [17..17] = 0x00020000 */
      unsigned int AEN18:1;             /*  = [18..18] = 0x00040000 */
      unsigned int AEN19:1;             /*  = [19..19] = 0x00080000 */
      unsigned int AEN20:1;             /*  = [20..20] = 0x00100000 */
      unsigned int AEN21:1;             /*  = [21..21] = 0x00200000 */
      unsigned int AEN22:1;             /*  = [22..22] = 0x00400000 */
      unsigned int AEN23:1;             /*  = [23..23] = 0x00800000 */
      unsigned int AEN24:1;             /*  = [24..24] = 0x01000000 */
      unsigned int AEN25:1;             /*  = [25..25] = 0x02000000 */
      unsigned int AEN26:1;             /*  = [26..26] = 0x04000000 */
      unsigned int AEN27:1;             /*  = [27..27] = 0x08000000 */
      unsigned int AEN28:1;             /*  = [28..28] = 0x10000000 */
      unsigned int AEN29:1;             /*  = [29..29] = 0x20000000 */
      unsigned int AEN30:1;             /*  = [30..30] = 0x40000000 */
      unsigned int AEN31:1;             /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MLIn_AER_t_nonv;

typedef volatile MLIn_AER_t_nonv MLIn_AER_t;

/********************** MLIn_ARR_t *************************/
/*
   MLI0_ARR              "Access Range Register"
   MLI1_ARR              "Access Range Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SLICE0:5;            /*  = [0..4] = 0x0000001f */
      unsigned int SIZE0:3;             /*  = [5..7] = 0x000000e0 */
      unsigned int SLICE1:5;            /*  = [8..12] = 0x00001f00 */
      unsigned int SIZE1:3;             /*  = [13..15] = 0x0000e000 */
      unsigned int SLICE2:5;            /*  = [16..20] = 0x001f0000 */
      unsigned int SIZE2:3;             /*  = [21..23] = 0x00e00000 */
      unsigned int SLICE3:5;            /*  = [24..28] = 0x1f000000 */
      unsigned int SIZE3:3;             /*  = [29..31] = 0xe0000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MLIn_ARR_t_nonv;

typedef volatile MLIn_ARR_t_nonv MLIn_ARR_t;

/********************** MLIn_FDR_t *************************/
/*
   MLI0_FDR              "MLI Fractional Divider Register"
   MLI1_FDR              "MLI Fractional Divider Register"
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
} __attribute__((aligned(4))) MLIn_FDR_t_nonv;

typedef volatile MLIn_FDR_t_nonv MLIn_FDR_t;

/********************** MLIn_GINTR_t *************************/
/*
   MLI0_GINTR            "MLI Global Interrupt Set Register"
   MLI1_GINTR            "MLI Global Interrupt Set Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SIMLI0:1;            /*  = [0..0] = 0x00000001 */
      unsigned int SIMLI1:1;            /*  = [1..1] = 0x00000002 */
      unsigned int SIMLI2:1;            /*  = [2..2] = 0x00000004 */
      unsigned int SIMLI3:1;            /*  = [3..3] = 0x00000008 */
      unsigned int SIMLI4:1;            /*  = [4..4] = 0x00000010 */
      unsigned int SIMLI5:1;            /*  = [5..5] = 0x00000020 */
      unsigned int SIMLI6:1;            /*  = [6..6] = 0x00000040 */
      unsigned int SIMLI7:1;            /*  = [7..7] = 0x00000080 */
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
} __attribute__((aligned(4))) MLIn_GINTR_t_nonv;

typedef volatile MLIn_GINTR_t_nonv MLIn_GINTR_t;

/********************** MLIn_ID_t *************************/
/*
   MLI0_ID               "MLI Module Identification Register"
   MLI1_ID               "MLI Module Identification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MOD_REV:8;           /*  = [0..7] = 0x000000ff */
      unsigned int MOD_TYPE:8;          /*  = [8..15] = 0x0000ff00 */
      unsigned int MOD_NUMBER:16;       /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MLIn_ID_t_nonv;

typedef volatile MLIn_ID_t_nonv MLIn_ID_t;

/********************** MLIn_OICR_t *************************/
/*
   MLI0_OICR             "Output Input Control Register"
   MLI1_OICR             "Output Input Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TVEA:1;              /*  = [0..0] = 0x00000001 */
      unsigned int TVEB:1;              /*  = [1..1] = 0x00000002 */
      unsigned int TVEC:1;              /*  = [2..2] = 0x00000004 */
      unsigned int TVED:1;              /*  = [3..3] = 0x00000008 */
      unsigned int TVPA:1;              /*  = [4..4] = 0x00000010 */
      unsigned int TVPB:1;              /*  = [5..5] = 0x00000020 */
      unsigned int TVPC:1;              /*  = [6..6] = 0x00000040 */
      unsigned int TVPD:1;              /*  = [7..7] = 0x00000080 */
      unsigned int TRS:2;               /*  = [8..9] = 0x00000300 */
      unsigned int TRP:1;               /*  = [10..10] = 0x00000400 */
      unsigned int TRE:1;               /*  = [11..11] = 0x00000800 */
      unsigned int TCE:1;               /*  = [12..12] = 0x00001000 */
      unsigned int TCP:1;               /*  = [13..13] = 0x00002000 */
      unsigned int TDP:1;               /*  = [14..14] = 0x00004000 */
      unsigned int RVE:1;               /*  = [15..15] = 0x00008000 */
      unsigned int RRS:2;               /*  = [16..17] = 0x00030000 */
      unsigned int RRPA:1;              /*  = [18..18] = 0x00040000 */
      unsigned int RRPB:1;              /*  = [19..19] = 0x00080000 */
      unsigned int RRPC:1;              /*  = [20..20] = 0x00100000 */
      unsigned int RRPD:1;              /*  = [21..21] = 0x00200000 */
      unsigned int RVS:2;               /*  = [22..23] = 0x00c00000 */
      unsigned int RVP:1;               /*  = [24..24] = 0x01000000 */
      unsigned int RCS:2;               /*  = [25..26] = 0x06000000 */
      unsigned int RCP:1;               /*  = [27..27] = 0x08000000 */
      unsigned int RCE:1;               /*  = [28..28] = 0x10000000 */
      unsigned int RDS:2;               /*  = [29..30] = 0x60000000 */
      unsigned int RDP:1;               /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MLIn_OICR_t_nonv;

typedef volatile MLIn_OICR_t_nonv MLIn_OICR_t;

/********************** MLIn_RADRR_t *************************/
/*
   MLI0_RADRR            "Receiver Address Register"
   MLI1_RADRR            "Receiver Address Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ADDR:32;             /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MLIn_RADRR_t_nonv;

typedef volatile MLIn_RADRR_t_nonv MLIn_RADRR_t;

/********************** MLIn_RCR_t *************************/
/*
   MLI0_RCR              "Receiver Control Register"
   MLI1_RCR              "Receiver Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DPE:4;               /*  = [0..3] = 0x0000000f */
      unsigned int CMDP3:4;             /*  = [4..7] = 0x000000f0 */
      unsigned int MOD:1;               /*  = [8..8] = 0x00000100 */
      unsigned int DW:2;                /*  = [9..10] = 0x00000600 */
      unsigned int TF:2;                /*  = [11..12] = 0x00001800 */
      unsigned int PE:1;                /*  = [13..13] = 0x00002000 */
      unsigned int RPN:2;               /*  = [14..15] = 0x0000c000 */
      unsigned int MPE:4;               /*  = [16..19] = 0x000f0000 */
      unsigned int BEN:1;               /*  = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int RCVRST:1;            /*  = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MLIn_RCR_t_nonv;

typedef volatile MLIn_RCR_t_nonv MLIn_RCR_t;

/********************** MLIn_RDATAR_t *************************/
/*
   MLI0_RDATAR           "Receiver Data Register"
   MLI1_RDATAR           "Receiver Data Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DATA:32;             /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MLIn_RDATAR_t_nonv;

typedef volatile MLIn_RDATAR_t_nonv MLIn_RDATAR_t;

/********************** MLIn_RIER_t *************************/
/*
   MLI0_RIER             "Receiver Interrupt Enable Register"
   MLI1_RIER             "Receiver Interrupt Enable Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int NFRIE:2;             /*  = [0..1] = 0x00000003 */
      unsigned int CFRIE0:1;            /*  = [2..2] = 0x00000004 */
      unsigned int CFRIE1:1;            /*  = [3..3] = 0x00000008 */
      unsigned int CFRIE2:1;            /*  = [4..4] = 0x00000010 */
      unsigned int CFRIE3:1;            /*  = [5..5] = 0x00000020 */
      unsigned int ICE:1;               /*  = [6..6] = 0x00000040 */
      unsigned int PEIE:1;              /*  = [7..7] = 0x00000080 */
      unsigned int MPEIE:1;             /*  = [8..8] = 0x00000100 */
      unsigned int DRAIE:1;             /*  = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int NFRIR:1;             /*  = [16..16] = 0x00010000 */
      unsigned int MEIR:1;              /*  = [17..17] = 0x00020000 */
      unsigned int CFRIR0:1;            /*  = [18..18] = 0x00040000 */
      unsigned int CFRIR1:1;            /*  = [19..19] = 0x00080000 */
      unsigned int CFRIR2:1;            /*  = [20..20] = 0x00100000 */
      unsigned int CFRIR3:1;            /*  = [21..21] = 0x00200000 */
      unsigned int ICER:1;              /*  = [22..22] = 0x00400000 */
      unsigned int PEIR:1;              /*  = [23..23] = 0x00800000 */
      unsigned int MPEIR:1;             /*  = [24..24] = 0x01000000 */
      unsigned int DRAIR:1;             /*  = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MLIn_RIER_t_nonv;

typedef volatile MLIn_RIER_t_nonv MLIn_RIER_t;

/********************** MLIn_RINPR_t *************************/
/*
   MLI0_RINPR            "Receiver Interrupt Node Pointer Register"
   MLI1_RINPR            "Receiver Interrupt Node Pointer Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int NFRIP:3;             /*  = [0..2] = 0x00000007 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int CFRIP:3;             /*  = [4..6] = 0x00000070 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int MPPEIP:3;            /*  = [8..10] = 0x00000700 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int DRAIP:3;             /*  = [12..14] = 0x00007000 */
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
} __attribute__((aligned(4))) MLIn_RINPR_t_nonv;

typedef volatile MLIn_RINPR_t_nonv MLIn_RINPR_t;

/********************** MLIn_RISR_t *************************/
/*
   MLI0_RISR             "Receiver Interrupt Status Register"
   MLI1_RISR             "Receiver Interrupt Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int NFRI:1;              /*  = [0..0] = 0x00000001 */
      unsigned int MEI:1;               /*  = [1..1] = 0x00000002 */
      unsigned int CFRI0:1;             /*  = [2..2] = 0x00000004 */
      unsigned int CFRI1:1;             /*  = [3..3] = 0x00000008 */
      unsigned int CFRI2:1;             /*  = [4..4] = 0x00000010 */
      unsigned int CFRI3:1;             /*  = [5..5] = 0x00000020 */
      unsigned int IC:1;                /*  = [6..6] = 0x00000040 */
      unsigned int PEI:1;               /*  = [7..7] = 0x00000080 */
      unsigned int MPEI:1;              /*  = [8..8] = 0x00000100 */
      unsigned int DRAI:1;              /*  = [9..9] = 0x00000200 */
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
} __attribute__((aligned(4))) MLIn_RISR_t_nonv;

typedef volatile MLIn_RISR_t_nonv MLIn_RISR_t;

/********************** MLIn_RPmBAR_t *************************/
/*
   MLI0_RP0BAR           "Receiver Pipe 0 Base Address Register"
   MLI0_RP1BAR           "Receiver Pipe 1 Base Address Register"
   MLI0_RP2BAR           "Receiver Pipe 2 Base Address Register"
   MLI0_RP3BAR           "Receiver Pipe 3 Base Address Register"
   MLI1_RP0BAR           "Receiver Pipe 0 Base Address Register"
   MLI1_RP1BAR           "Receiver Pipe 1 Base Address Register"
   MLI1_RP2BAR           "Receiver Pipe 2 Base Address Register"
   MLI1_RP3BAR           "Receiver Pipe 3 Base Address Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0..0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1..1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int ADDR:28;             /*  = [4..31] = 0xfffffff0 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MLIn_RPmBAR_t_nonv;

typedef volatile MLIn_RPmBAR_t_nonv MLIn_RPmBAR_t;

/********************** MLIn_RPmSTATR_t *************************/
/*
   MLI0_RP0STATR         "Receiver Pipe 0 Status Register"
   MLI0_RP1STATR         "Receiver Pipe 1 Status Register"
   MLI0_RP2STATR         "Receiver Pipe 2 Status Register"
   MLI0_RP3STATR         "Receiver Pipe 3 Status Register"
   MLI1_RP0STATR         "Receiver Pipe 0 Status Register"
   MLI1_RP1STATR         "Receiver Pipe 1 Status Register"
   MLI1_RP2STATR         "Receiver Pipe 2 Status Register"
   MLI1_RP3STATR         "Receiver Pipe 3 Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int BS:4;                /*  = [0..3] = 0x0000000f */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int AP:10;               /*  = [6..15] = 0x0000ffc0 */
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
} __attribute__((aligned(4))) MLIn_RPmSTATR_t_nonv;

typedef volatile MLIn_RPmSTATR_t_nonv MLIn_RPmSTATR_t;

/********************** MLIn_SCR_t *************************/
/*
   MLI0_SCR              "Set Clear Register"
   MLI1_SCR              "Set Clear Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SCV0:1;              /*  = [0..0] = 0x00000001 */
      unsigned int SCV1:1;              /*  = [1..1] = 0x00000002 */
      unsigned int SCV2:1;              /*  = [2..2] = 0x00000004 */
      unsigned int SCV3:1;              /*  = [3..3] = 0x00000008 */
      unsigned int SMOD:1;              /*  = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int CDV0:1;              /*  = [8..8] = 0x00000100 */
      unsigned int CDV1:1;              /*  = [9..9] = 0x00000200 */
      unsigned int CDV2:1;              /*  = [10..10] = 0x00000400 */
      unsigned int CDV3:1;              /*  = [11..11] = 0x00000800 */
      unsigned int CCV0:1;              /*  = [12..12] = 0x00001000 */
      unsigned int CCV1:1;              /*  = [13..13] = 0x00002000 */
      unsigned int CCV2:1;              /*  = [14..14] = 0x00004000 */
      unsigned int CCV3:1;              /*  = [15..15] = 0x00008000 */
      unsigned int CMOD:1;              /*  = [16..16] = 0x00010000 */
      unsigned int CBAV:1;              /*  = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int CAV:1;               /*  = [24..24] = 0x01000000 */
      unsigned int CRPE:1;              /*  = [25..25] = 0x02000000 */
      unsigned int CTPE:1;              /*  = [26..26] = 0x04000000 */
      unsigned int CNAE:1;              /*  = [27..27] = 0x08000000 */
      unsigned int CCIV0:1;             /*  = [28..28] = 0x10000000 */
      unsigned int CCIV1:1;             /*  = [29..29] = 0x20000000 */
      unsigned int CCIV2:1;             /*  = [30..30] = 0x40000000 */
      unsigned int CCIV3:1;             /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MLIn_SCR_t_nonv;

typedef volatile MLIn_SCR_t_nonv MLIn_SCR_t;

/********************** MLIn_TCBAR_t *************************/
/*
   MLI0_TCBAR            "Transmitter Copy Base Address Register"
   MLI1_TCBAR            "Transmitter Copy Base Address Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0..0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1..1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int ADDR:28;             /*  = [4..31] = 0xfffffff0 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MLIn_TCBAR_t_nonv;

typedef volatile MLIn_TCBAR_t_nonv MLIn_TCBAR_t;

/********************** MLIn_TCMDR_t *************************/
/*
   MLI0_TCMDR            "Transmitter Command Register"
   MLI1_TCMDR            "Transmitter Command Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CMDP0:4;             /*  = [0..3] = 0x0000000f */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int CMDP1:4;             /*  = [8..11] = 0x00000f00 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int CMDP2:4;             /*  = [16..19] = 0x000f0000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int CMDP3:4;             /*  = [24..27] = 0x0f000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MLIn_TCMDR_t_nonv;

typedef volatile MLIn_TCMDR_t_nonv MLIn_TCMDR_t;

/********************** MLIn_TCR_t *************************/
/*
   MLI0_TCR              "Transmitter Control Register"
   MLI1_TCR              "Transmitter Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MOD:1;               /*  = [0..0] = 0x00000001 */
      unsigned int DNT:1;               /*  = [1..1] = 0x00000002 */
      unsigned int RTY:1;               /*  = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int MPE:4;               /*  = [4..7] = 0x000000f0 */
      unsigned int MNAE:2;              /*  = [8..9] = 0x00000300 */
      unsigned int MDP:4;               /*  = [10..13] = 0x00003c00 */
      unsigned int NO:1;                /*  = [14..14] = 0x00004000 */
      unsigned int TP:1;                /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) MLIn_TCR_t_nonv;

typedef volatile MLIn_TCR_t_nonv MLIn_TCR_t;

/********************** MLIn_TDRAR_t *************************/
/*
   MLI0_TDRAR            "Transmitter Data Read Answer Register"
   MLI1_TDRAR            "Transmitter Data Read Answer Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DATA:32;             /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MLIn_TDRAR_t_nonv;

typedef volatile MLIn_TDRAR_t_nonv MLIn_TDRAR_t;

/********************** MLIn_TIER_t *************************/
/*
   MLI0_TIER             "Transmitter Interrupt Enable Register"
   MLI1_TIER             "Transmitter Interrupt Enable Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int NFSIE0:1;            /*  = [0..0] = 0x00000001 */
      unsigned int NFSIE1:1;            /*  = [1..1] = 0x00000002 */
      unsigned int NFSIE2:1;            /*  = [2..2] = 0x00000004 */
      unsigned int NFSIE3:1;            /*  = [3..3] = 0x00000008 */
      unsigned int CFSIE0:1;            /*  = [4..4] = 0x00000010 */
      unsigned int CFSIE1:1;            /*  = [5..5] = 0x00000020 */
      unsigned int CFSIE2:1;            /*  = [6..6] = 0x00000040 */
      unsigned int CFSIE3:1;            /*  = [7..7] = 0x00000080 */
      unsigned int PEIE:1;              /*  = [8..8] = 0x00000100 */
      unsigned int TEIE:1;              /*  = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int NFSIR0:1;            /*  = [16..16] = 0x00010000 */
      unsigned int NFSIR1:1;            /*  = [17..17] = 0x00020000 */
      unsigned int NFSIR2:1;            /*  = [18..18] = 0x00040000 */
      unsigned int NFSIR3:1;            /*  = [19..19] = 0x00080000 */
      unsigned int CFSIR0:1;            /*  = [20..20] = 0x00100000 */
      unsigned int CFSIR1:1;            /*  = [21..21] = 0x00200000 */
      unsigned int CFSIR2:1;            /*  = [22..22] = 0x00400000 */
      unsigned int CFSIR3:1;            /*  = [23..23] = 0x00800000 */
      unsigned int PEIR:1;              /*  = [24..24] = 0x01000000 */
      unsigned int TEIR:1;              /*  = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MLIn_TIER_t_nonv;

typedef volatile MLIn_TIER_t_nonv MLIn_TIER_t;

/********************** MLIn_TINPR_t *************************/
/*
   MLI0_TINPR            "Transmitter Interrupt Node Pointer Register"
   MLI1_TINPR            "Transmitter Interrupt Node Pointer Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int NFSIP0:3;            /*  = [0..2] = 0x00000007 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int NFSIP1:3;            /*  = [4..6] = 0x00000070 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int NFSIP2:3;            /*  = [8..10] = 0x00000700 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int NFSIP3:3;            /*  = [12..14] = 0x00007000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int CFSIP:3;             /*  = [16..18] = 0x00070000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int PTEIP:3;             /*  = [20..22] = 0x00700000 */
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
} __attribute__((aligned(4))) MLIn_TINPR_t_nonv;

typedef volatile MLIn_TINPR_t_nonv MLIn_TINPR_t;

/********************** MLIn_TISR_t *************************/
/*
   MLI0_TISR             "Transmitter Interrupt Status Register"
   MLI1_TISR             "Transmitter Interrupt Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int NFSI0:1;             /*  = [0..0] = 0x00000001 */
      unsigned int NFSI1:1;             /*  = [1..1] = 0x00000002 */
      unsigned int NFSI2:1;             /*  = [2..2] = 0x00000004 */
      unsigned int NFSI3:1;             /*  = [3..3] = 0x00000008 */
      unsigned int CFSI0:1;             /*  = [4..4] = 0x00000010 */
      unsigned int CFSI1:1;             /*  = [5..5] = 0x00000020 */
      unsigned int CFSI2:1;             /*  = [6..6] = 0x00000040 */
      unsigned int CFSI3:1;             /*  = [7..7] = 0x00000080 */
      unsigned int PEI:1;               /*  = [8..8] = 0x00000100 */
      unsigned int TEI:1;               /*  = [9..9] = 0x00000200 */
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
} __attribute__((aligned(4))) MLIn_TISR_t_nonv;

typedef volatile MLIn_TISR_t_nonv MLIn_TISR_t;

/********************** MLIn_TPmAOFR_t *************************/
/*
   MLI0_TP0AOFR          "Transmitter Pipe 0 Address Offset Register"
   MLI0_TP1AOFR          "Transmitter Pipe 1 Address Offset Register"
   MLI0_TP2AOFR          "Transmitter Pipe 2 Address Offset Register"
   MLI0_TP3AOFR          "Transmitter Pipe 3 Address Offset Register"
   MLI1_TP0AOFR          "Transmitter Pipe 0 Address Offset Register"
   MLI1_TP1AOFR          "Transmitter Pipe 1 Address Offset Register"
   MLI1_TP2AOFR          "Transmitter Pipe 2 Address Offset Register"
   MLI1_TP3AOFR          "Transmitter Pipe 3 Address Offset Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int AOFF:16;             /*  = [0..15] = 0x0000ffff */
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
} __attribute__((aligned(4))) MLIn_TPmAOFR_t_nonv;

typedef volatile MLIn_TPmAOFR_t_nonv MLIn_TPmAOFR_t;

/********************** MLIn_TPmBAR_t *************************/
/*
   MLI0_TP0BAR           "Transmitter Pipe 0 Base Address Register"
   MLI0_TP1BAR           "Transmitter Pipe 1 Base Address Register"
   MLI0_TP2BAR           "Transmitter Pipe 2 Base Address Register"
   MLI0_TP3BAR           "Transmitter Pipe 3 Base Address Register"
   MLI1_TP0BAR           "Transmitter Pipe 0 Base Address Register"
   MLI1_TP1BAR           "Transmitter Pipe 1 Base Address Register"
   MLI1_TP2BAR           "Transmitter Pipe 2 Base Address Register"
   MLI1_TP3BAR           "Transmitter Pipe 3 Base Address Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int BS:4;                /*  = [0..3] = 0x0000000f */
      unsigned int ADDR:28;             /*  = [4..31] = 0xfffffff0 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MLIn_TPmBAR_t_nonv;

typedef volatile MLIn_TPmBAR_t_nonv MLIn_TPmBAR_t;

/********************** MLIn_TPmDATAR_t *************************/
/*
   MLI0_TP0DATAR         "Transmitter Pipe 0 Data Register"
   MLI0_TP1DATAR         "Transmitter Pipe 1 Data Register"
   MLI0_TP2DATAR         "Transmitter Pipe 2 Data Register"
   MLI0_TP3DATAR         "Transmitter Pipe 3 Data Register"
   MLI1_TP0DATAR         "Transmitter Pipe 0 Data Register"
   MLI1_TP1DATAR         "Transmitter Pipe 1 Data Register"
   MLI1_TP2DATAR         "Transmitter Pipe 2 Data Register"
   MLI1_TP3DATAR         "Transmitter Pipe 3 Data Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DATA:32;             /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MLIn_TPmDATAR_t_nonv;

typedef volatile MLIn_TPmDATAR_t_nonv MLIn_TPmDATAR_t;

/********************** MLIn_TPmSTATR_t *************************/
/*
   MLI0_TP0STATR         "Transmitter Pipe 0 Status Register"
   MLI0_TP1STATR         "Transmitter Pipe 1 Status Register"
   MLI0_TP2STATR         "Transmitter Pipe 2 Status Register"
   MLI0_TP3STATR         "Transmitter Pipe 3 Status Register"
   MLI1_TP0STATR         "Transmitter Pipe 0 Status Register"
   MLI1_TP1STATR         "Transmitter Pipe 1 Status Register"
   MLI1_TP2STATR         "Transmitter Pipe 2 Status Register"
   MLI1_TP3STATR         "Transmitter Pipe 3 Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int BS:4;                /*  = [0..3] = 0x0000000f */
      unsigned int DW:2;                /*  = [4..5] = 0x00000030 */
      unsigned int AP:10;               /*  = [6..15] = 0x0000ffc0 */
      unsigned int OP:1;                /*  = [16..16] = 0x00010000 */
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
} __attribute__((aligned(4))) MLIn_TPmSTATR_t_nonv;

typedef volatile MLIn_TPmSTATR_t_nonv MLIn_TPmSTATR_t;

/********************** MLIn_TRSTATR_t *************************/
/*
   MLI0_TRSTATR          "Transmitter Registers Status Register"
   MLI1_TRSTATR          "Transmitter Registers Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CIV0:1;              /*  = [0..0] = 0x00000001 */
      unsigned int CIV1:1;              /*  = [1..1] = 0x00000002 */
      unsigned int CIV2:1;              /*  = [2..2] = 0x00000004 */
      unsigned int CIV3:1;              /*  = [3..3] = 0x00000008 */
      unsigned int CV0:1;               /*  = [4..4] = 0x00000010 */
      unsigned int CV1:1;               /*  = [5..5] = 0x00000020 */
      unsigned int CV2:1;               /*  = [6..6] = 0x00000040 */
      unsigned int CV3:1;               /*  = [7..7] = 0x00000080 */
      unsigned int AV:1;                /*  = [8..8] = 0x00000100 */
      unsigned int BAV:1;               /*  = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int DV0:1;               /*  = [16..16] = 0x00010000 */
      unsigned int DV1:1;               /*  = [17..17] = 0x00020000 */
      unsigned int DV2:1;               /*  = [18..18] = 0x00040000 */
      unsigned int DV3:1;               /*  = [19..19] = 0x00080000 */
      unsigned int RP0:1;               /*  = [20..20] = 0x00100000 */
      unsigned int RP1:1;               /*  = [21..21] = 0x00200000 */
      unsigned int RP2:1;               /*  = [22..22] = 0x00400000 */
      unsigned int RP3:1;               /*  = [23..23] = 0x00800000 */
      unsigned int PN:2;                /*  = [24..25] = 0x03000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MLIn_TRSTATR_t_nonv;

typedef volatile MLIn_TRSTATR_t_nonv MLIn_TRSTATR_t;

/********************** MLIn_TSTATR_t *************************/
/*
   MLI0_TSTATR           "Transmitter Status Register"
   MLI1_TSTATR           "Transmitter Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RDC:5;               /*  = [0..4] = 0x0000001f */
      unsigned int APN:2;               /*  = [5..6] = 0x00000060 */
      unsigned int PE:1;                /*  = [7..7] = 0x00000080 */
      unsigned int NAE:1;               /*  = [8..8] = 0x00000100 */
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
} __attribute__((aligned(4))) MLIn_TSTATR_t_nonv;

typedef volatile MLIn_TSTATR_t_nonv MLIn_TSTATR_t;


#endif /* _HAVE_TRICORE_MLI0_MLI1_SHARETYPES_H_ */

