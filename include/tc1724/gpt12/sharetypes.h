/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_GPT12_SHARETYPES_H_
#define _HAVE_TRICORE_GPT12_SHARETYPES_H_


/********************** GPTn_CAPREL_t *************************/
/*
   GPT120_CAPREL         "Capture and Reload Register"
   GPT121_CAPREL         "Capture and Reload Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CAPREL:16;           /*  = [0..15] = 0x0000ffff */
      unsigned int _bit16:1;            /* 0 = [16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) GPTn_CAPREL_t_nonv;

typedef volatile GPTn_CAPREL_t_nonv GPTn_CAPREL_t;

/********************** GPTn_CLC_t *************************/
/*
   GPT120_CLC            "Clock Control Register"
   GPT121_CLC            "Clock Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DISR:1;              /*  = [0] = 0x00000001 */
      unsigned int DISS:1;              /*  = [1] = 0x00000002 */
      unsigned int SPEN:1;              /*  = [2] = 0x00000004 */
      unsigned int EDIS:1;              /*  = [3] = 0x00000008 */
      unsigned int SBWE:1;              /*  = [4] = 0x00000010 */
      unsigned int FSOE:1;              /*  = [5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) GPTn_CLC_t_nonv;

typedef volatile GPTn_CLC_t_nonv GPTn_CLC_t;

/********************** GPTn_ID_t *************************/
/*
   GPT120_ID             "Identification Register"
   GPT121_ID             "Identification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MODREV:8;            /*  = [0..7] = 0x000000ff */
      unsigned int MODTYPE:8;           /*  = [8..15] = 0x0000ff00 */
      unsigned int MODNUMBER:16;        /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) GPTn_ID_t_nonv;

typedef volatile GPTn_ID_t_nonv GPTn_ID_t;

/********************** GPTn_PISEL_t *************************/
/*
   GPT120_PISEL          "Port Input Select Register"
   GPT121_PISEL          "Port Input Select Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int IST2IN:1;            /*  = [0] = 0x00000001 */
      unsigned int IST2EUD:1;           /*  = [1] = 0x00000002 */
      unsigned int IST3IN:2;            /*  = [2..3] = 0x0000000c */
      unsigned int IST3EUD:2;           /*  = [4..5] = 0x00000030 */
      unsigned int IST4IN:2;            /*  = [6..7] = 0x000000c0 */
      unsigned int IST4EUD:2;           /*  = [8..9] = 0x00000300 */
      unsigned int IST5IN:1;            /*  = [10] = 0x00000400 */
      unsigned int IST5EUD:1;           /*  = [11] = 0x00000800 */
      unsigned int IST6IN:1;            /*  = [12] = 0x00001000 */
      unsigned int IST6EUD:1;           /*  = [13] = 0x00002000 */
      unsigned int ISCAPIN:2;           /*  = [14..15] = 0x0000c000 */
      unsigned int _bit16:1;            /* 0 = [16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) GPTn_PISEL_t_nonv;

typedef volatile GPTn_PISEL_t_nonv GPTn_PISEL_t;

/********************** GPTn_SRCm_t *************************/
/*
   GPT120_SRC0           "Service Request Control 0 Register"
   GPT120_SRC1           "Service Request Control 1 Register"
   GPT120_SRC2           "Service Request Control 2 Register"
   GPT120_SRC3           "Service Request Control 3 Register"
   GPT120_SRC4           "Service Request Control 4Register"
   GPT120_SRC5           "Service Request Control 5 Register"
   GPT121_SRC0           "Service Request Control 0 Register"
   GPT121_SRC1           "Service Request Control 1 Register"
   GPT121_SRC2           "Service Request Control 2 Register"
   GPT121_SRC3           "Service Request Control 3 Register"
   GPT121_SRC4           "Service Request Control 4Register"
   GPT121_SRC5           "Service Request Control 5 Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SRPN:8;              /*  = [0..7] = 0x000000ff */
      unsigned int _bit8:1;             /* 0 = [8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9] = 0x00000200 */
      unsigned int TOS:1;               /*  = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int SRE:1;               /*  = [12] = 0x00001000 */
      unsigned int SRR:1;               /*  = [13] = 0x00002000 */
      unsigned int CLRR:1;              /*  = [14] = 0x00004000 */
      unsigned int SETR:1;              /*  = [15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) GPTn_SRCm_t_nonv;

typedef volatile GPTn_SRCm_t_nonv GPTn_SRCm_t;

/********************** GPTn_T2CON_t *************************/
/*
   GPT120_T2CON          "Timer T2 Control Register"
   GPT121_T2CON          "Timer T2 Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int T2I:3;               /*  = [0..2] = 0x00000007 */
      unsigned int T2M:3;               /*  = [3..5] = 0x00000038 */
      unsigned int T2R:1;               /*  = [6] = 0x00000040 */
      unsigned int T2UD:1;              /*  = [7] = 0x00000080 */
      unsigned int T2UDE:1;             /*  = [8] = 0x00000100 */
      unsigned int T2RC:1;              /*  = [9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int T2IRDIS:1;           /*  = [12] = 0x00001000 */
      unsigned int T2EDGE:1;            /*  = [13] = 0x00002000 */
      unsigned int T2CHDIR:1;           /*  = [14] = 0x00004000 */
      unsigned int T2RDIR:1;            /*  = [15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) GPTn_T2CON_t_nonv;

typedef volatile GPTn_T2CON_t_nonv GPTn_T2CON_t;

/********************** GPTn_T3CON_t *************************/
/*
   GPT120_T3CON          "Timer T3 Control Register"
   GPT121_T3CON          "Timer T3 Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int T3I:3;               /*  = [0..2] = 0x00000007 */
      unsigned int T3M:3;               /*  = [3..5] = 0x00000038 */
      unsigned int T3R:1;               /*  = [6] = 0x00000040 */
      unsigned int T3UD:1;              /*  = [7] = 0x00000080 */
      unsigned int T3UDE:1;             /*  = [8] = 0x00000100 */
      unsigned int T3OE:1;              /*  = [9] = 0x00000200 */
      unsigned int T3OTL:1;             /*  = [10] = 0x00000400 */
      unsigned int BPS1:2;              /*  = [11..12] = 0x00001800 */
      unsigned int T3EDGE:1;            /*  = [13] = 0x00002000 */
      unsigned int T3CHDIR:1;           /*  = [14] = 0x00004000 */
      unsigned int T3RDIR:1;            /*  = [15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) GPTn_T3CON_t_nonv;

typedef volatile GPTn_T3CON_t_nonv GPTn_T3CON_t;

/********************** GPTn_T4CON_t *************************/
/*
   GPT120_T4CON          "Timer T4 Control Register"
   GPT121_T4CON          "Timer T4 Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int T4I:3;               /*  = [0..2] = 0x00000007 */
      unsigned int T4M:3;               /*  = [3..5] = 0x00000038 */
      unsigned int T4R:1;               /*  = [6] = 0x00000040 */
      unsigned int T4UD:1;              /*  = [7] = 0x00000080 */
      unsigned int T4UDE:1;             /*  = [8] = 0x00000100 */
      unsigned int T4RC:1;              /*  = [9] = 0x00000200 */
      unsigned int CLRT2EN:1;           /*  = [10] = 0x00000400 */
      unsigned int CLRT3EN:1;           /*  = [11] = 0x00000800 */
      unsigned int T4IRDIS:1;           /*  = [12] = 0x00001000 */
      unsigned int T4EDGE:1;            /*  = [13] = 0x00002000 */
      unsigned int T4CHDIR:1;           /*  = [14] = 0x00004000 */
      unsigned int T4RDIR:1;            /*  = [15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) GPTn_T4CON_t_nonv;

typedef volatile GPTn_T4CON_t_nonv GPTn_T4CON_t;

/********************** GPTn_T5CON_t *************************/
/*
   GPT120_T5CON          "Timer T5 Control Register"
   GPT121_T5CON          "Timer T5 Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int T5I:3;               /*  = [0..2] = 0x00000007 */
      unsigned int T5M:3;               /*  = [3..5] = 0x00000038 */
      unsigned int T5R:1;               /*  = [6] = 0x00000040 */
      unsigned int T5UD:1;              /*  = [7] = 0x00000080 */
      unsigned int T5UDE:1;             /*  = [8] = 0x00000100 */
      unsigned int T5RC:1;              /*  = [9] = 0x00000200 */
      unsigned int CT3:1;               /*  = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int CI:2;                /*  = [12..13] = 0x00003000 */
      unsigned int T5CLR:1;             /*  = [14] = 0x00004000 */
      unsigned int T5SC:1;              /*  = [15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) GPTn_T5CON_t_nonv;

typedef volatile GPTn_T5CON_t_nonv GPTn_T5CON_t;

/********************** GPTn_T6CON_t *************************/
/*
   GPT120_T6CON          "Timer T6 Control Register"
   GPT121_T6CON          "Timer T6 Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int T6I:3;               /*  = [0..2] = 0x00000007 */
      unsigned int T6M:3;               /*  = [3..5] = 0x00000038 */
      unsigned int T6R:1;               /*  = [6] = 0x00000040 */
      unsigned int T6UD:1;              /*  = [7] = 0x00000080 */
      unsigned int T6UDE:1;             /*  = [8] = 0x00000100 */
      unsigned int T6OE:1;              /*  = [9] = 0x00000200 */
      unsigned int T6OTL:1;             /*  = [10] = 0x00000400 */
      unsigned int BPS2:2;              /*  = [11..12] = 0x00001800 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int T6CLR:1;             /*  = [14] = 0x00004000 */
      unsigned int T6SR:1;              /*  = [15] = 0x00008000 */
      unsigned int _bit16:1;            /* 0 = [16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) GPTn_T6CON_t_nonv;

typedef volatile GPTn_T6CON_t_nonv GPTn_T6CON_t;

/********************** GPTn_Tm_t *************************/
/*
   GPT120_T5             "Timer T5 Register"
   GPT120_T6             "Timer T6 Register"
   GPT121_T5             "Timer T5 Register"
   GPT121_T6             "Timer T6 Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int Tx:16;               /*  = [0..15] = 0x0000ffff */
      unsigned int _bit16:1;            /* 0 = [16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) GPTn_Tm_t_nonv;

typedef volatile GPTn_Tm_t_nonv GPTn_Tm_t;


#endif /* _HAVE_TRICORE_GPT12_SHARETYPES_H_ */

