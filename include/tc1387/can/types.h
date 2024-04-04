/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_CAN_TYPES_H_
#define _HAVE_TRICORE_CAN_TYPES_H_


/********************** CAN_AWDR_t *************************/
/*
   CAN_AWDR              "Application Watchdog Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int AWDV:8;              /*  = [0..7] = 0x000000ff */
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
} __attribute__((aligned(4))) CAN_AWDR_t_nonv;

typedef volatile CAN_AWDR_t_nonv CAN_AWDR_t;

/********************** CAN_CLC_t *************************/
/*
   CAN_CLC               "CAN Clock Control Register"
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
} __attribute__((aligned(4))) CAN_CLC_t_nonv;

typedef volatile CAN_CLC_t_nonv CAN_CLC_t;

/********************** CAN_CYCTMR_t *************************/
/*
   CAN_CYCTMR            "Cycle Time Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CYCTM:16;            /*  = [0..15] = 0x0000ffff */
      unsigned int BCC:6;               /*  = [16..21] = 0x003f0000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int CSM:6;               /*  = [24..29] = 0x3f000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CAN_CYCTMR_t_nonv;

typedef volatile CAN_CYCTMR_t_nonv CAN_CYCTMR_t;

/********************** CAN_FDR_t *************************/
/*
   CAN_FDR               "CAN Fractional Divider Register"
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
} __attribute__((aligned(4))) CAN_FDR_t_nonv;

typedef volatile CAN_FDR_t_nonv CAN_FDR_t;

/********************** CAN_GMR_t *************************/
/*
   CAN_GMR               "Global Mark Register"
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
      unsigned int GMFR:7;              /*  = [9..15] = 0x0000fe00 */
      unsigned int GM:16;               /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CAN_GMR_t_nonv;

typedef volatile CAN_GMR_t_nonv CAN_GMR_t;

/********************** CAN_ID_t *************************/
/*
   CAN_ID                "Module Identification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MOD_REV:8;           /*  = [0..7] = 0x000000ff */
      unsigned int MOD_TYPE:8;          /*  = [8..15] = 0x0000ff00 */
      unsigned int MOD_NUMBER:16;       /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CAN_ID_t_nonv;

typedef volatile CAN_ID_t_nonv CAN_ID_t;

/********************** CAN_LGMR_t *************************/
/*
   CAN_LGMR              "Last Global Mark Register"
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
      unsigned int LGMFR:7;             /*  = [9..15] = 0x0000fe00 */
      unsigned int LGM:16;              /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CAN_LGMR_t_nonv;

typedef volatile CAN_LGMR_t_nonv CAN_LGMR_t;

/********************** CAN_LOR_t *************************/
/*
   CAN_LOR               "Local Offset Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int NEWDISC:1;           /*  = [0..0] = 0x00000001 */
      unsigned int DISC:1;              /*  = [1..1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int LOFFR:7;             /*  = [9..15] = 0x0000fe00 */
      unsigned int LOF:16;              /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CAN_LOR_t_nonv;

typedef volatile CAN_LOR_t_nonv CAN_LOR_t;

/********************** CAN_LREFMR_t *************************/
/*
   CAN_LREFMR            "Last Reference Mark Register"
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
      unsigned int LREFMFR:7;           /*  = [9..15] = 0x0000fe00 */
      unsigned int LREFM:16;            /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CAN_LREFMR_t_nonv;

typedef volatile CAN_LREFMR_t_nonv CAN_LREFMR_t;

/********************** CAN_LTR_t *************************/
/*
   CAN_LTR               "Local Time Register"
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
      unsigned int LTFR:10;             /*  = [6..15] = 0x0000ffc0 */
      unsigned int LT:16;               /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CAN_LTR_t_nonv;

typedef volatile CAN_LTR_t_nonv CAN_LTR_t;

/********************** CAN_MCR_t *************************/
/*
   CAN_MCR               "Module Control Register"
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
      unsigned int MPSEL:4;             /*  = [12..15] = 0x0000f000 */
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
} __attribute__((aligned(4))) CAN_MCR_t_nonv;

typedef volatile CAN_MCR_t_nonv CAN_MCR_t;

/********************** CAN_MITR_t *************************/
/*
   CAN_MITR              "Module Interrupt Trigger Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int IT:16;               /*  = [0..15] = 0x0000ffff */
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
} __attribute__((aligned(4))) CAN_MITR_t_nonv;

typedef volatile CAN_MITR_t_nonv CAN_MITR_t;

/********************** CAN_MSIMASK_t *************************/
/*
   CAN_MSIMASK           "Message Index Mask Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int IM:32;               /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CAN_MSIMASK_t_nonv;

typedef volatile CAN_MSIMASK_t_nonv CAN_MSIMASK_t;

/********************** CAN_PANCTR_t *************************/
/*
   CAN_PANCTR            "Panel Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int PANCMD:8;            /*  = [0..7] = 0x000000ff */
      unsigned int BUSY:1;              /*  = [8..8] = 0x00000100 */
      unsigned int RBUSY:1;             /*  = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int PANAR1:8;            /*  = [16..23] = 0x00ff0000 */
      unsigned int PANAR2:8;            /*  = [24..31] = 0xff000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CAN_PANCTR_t_nonv;

typedef volatile CAN_PANCTR_t_nonv CAN_PANCTR_t;

/********************** CAN_REFMR_t *************************/
/*
   CAN_REFMR             "Reference Mark Register"
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
      unsigned int REFMFR:7;            /*  = [9..15] = 0x0000fe00 */
      unsigned int REFM:16;             /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CAN_REFMR_t_nonv;

typedef volatile CAN_REFMR_t_nonv CAN_REFMR_t;

/********************** CAN_SISR_t *************************/
/*
   CAN_SISR              "Scheduler Instruction Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int INP:4;               /*  = [0..3] = 0x0000000f */
      unsigned int IENTRAF0:1;          /*  = [4..4] = 0x00000010 */
      unsigned int IENTRAF1:1;          /*  = [5..5] = 0x00000020 */
      unsigned int IENRECF0:1;          /*  = [6..6] = 0x00000040 */
      unsigned int IENRECF1:1;          /*  = [7..7] = 0x00000080 */
      unsigned int CHEN:1;              /*  = [8..8] = 0x00000100 */
      unsigned int TREN:1;              /*  = [9..9] = 0x00000200 */
      unsigned int ALTMSG:2;            /*  = [10..11] = 0x00000c00 */
      unsigned int ARBM:2;              /*  = [12..13] = 0x00003000 */
      unsigned int GM:1;                /*  = [14..14] = 0x00004000 */
      unsigned int ICF:1;               /*  = [15..15] = 0x00008000 */
      unsigned int RCEV:1;              /*  = [16..16] = 0x00010000 */
      unsigned int TCEV:1;              /*  = [17..17] = 0x00020000 */
      unsigned int ICEV:1;              /*  = [18..18] = 0x00040000 */
      unsigned int ARBV:1;              /*  = [19..19] = 0x00080000 */
      unsigned int TMEV:1;              /*  = [20..20] = 0x00100000 */
      unsigned int RMEV:1;              /*  = [21..21] = 0x00200000 */
      unsigned int BCEV:1;              /*  = [22..22] = 0x00400000 */
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
} __attribute__((aligned(4))) CAN_SISR_t_nonv;

typedef volatile CAN_SISR_t_nonv CAN_SISR_t;

/********************** CAN_STPTR0_t *************************/
/*
   CAN_STPTR0            "Scheduler Start Pointer Node 0 Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int STPTR:7;             /*  = [0..6] = 0x0000007f */
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
} __attribute__((aligned(4))) CAN_STPTR0_t_nonv;

typedef volatile CAN_STPTR0_t_nonv CAN_STPTR0_t;

/********************** CAN_STSRH_t *************************/
/*
   CAN_STSRH             "Scheduler Timing Status Register High"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TMETMV:16;           /*  = [0..15] = 0x0000ffff */
      unsigned int RCEMSGNR:8;          /*  = [16..23] = 0x00ff0000 */
      unsigned int TCEMSGNR:8;          /*  = [24..31] = 0xff000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CAN_STSRH_t_nonv;

typedef volatile CAN_STSRH_t_nonv CAN_STSRH_t;

/********************** CAN_STSRL_t *************************/
/*
   CAN_STSRL             "Scheduler Timing Status Register Low"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RMETMV:16;           /*  = [0..15] = 0x0000ffff */
      unsigned int BCETMV:16;           /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CAN_STSRL_t_nonv;

typedef volatile CAN_STSRL_t_nonv CAN_STSRL_t;

/********************** CAN_SYNMR_t *************************/
/*
   CAN_SYNMR             "Synchronization Mark Register"
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
      unsigned int SYNMFR:7;            /*  = [9..15] = 0x0000fe00 */
      unsigned int SYNM:16;             /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CAN_SYNMR_t_nonv;

typedef volatile CAN_SYNMR_t_nonv CAN_SYNMR_t;

/********************** CAN_TTCFGR_t *************************/
/*
   CAN_TTCFGR            "Time Trigger Configuration Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int IRO:7;               /*  = [0..6] = 0x0000007f */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int EXPTT:8;             /*  = [8..15] = 0x0000ff00 */
      unsigned int RTO:8;               /*  = [16..23] = 0x00ff0000 */
      unsigned int TTCNT:8;             /*  = [24..31] = 0xff000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CAN_TTCFGR_t_nonv;

typedef volatile CAN_TTCFGR_t_nonv CAN_TTCFGR_t;

/********************** CAN_TTCR_t *************************/
/*
   CAN_TTCR              "Time Trigger Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TTM:2;               /*  = [0..1] = 0x00000003 */
      unsigned int ETESEL:2;            /*  = [2..3] = 0x0000000c */
      unsigned int ETSSEL:3;            /*  = [4..6] = 0x00000070 */
      unsigned int ETM:1;               /*  = [7..7] = 0x00000080 */
      unsigned int TTLVL:1;             /*  = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int TMPRIO:3;            /*  = [12..14] = 0x00007000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int CYCLE:6;             /*  = [16..21] = 0x003f0000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int TENW:4;              /*  = [24..27] = 0x0f000000 */
      unsigned int RMDLC:4;             /*  = [28..31] = 0xf0000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CAN_TTCR_t_nonv;

typedef volatile CAN_TTCR_t_nonv CAN_TTCR_t;

/********************** CAN_TTFMR_t *************************/
/*
   CAN_TTFMR             "Time Trigger Flag Modification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CFGMEL:2;            /*  = [0..1] = 0x00000003 */
      unsigned int NIGSR:2;             /*  = [2..3] = 0x0000000c */
      unsigned int STE:1;               /*  = [4..4] = 0x00000010 */
      unsigned int ETREVR:1;            /*  = [5..5] = 0x00000020 */
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
} __attribute__((aligned(4))) CAN_TTFMR_t_nonv;

typedef volatile CAN_TTFMR_t_nonv CAN_TTFMR_t;

/********************** CAN_TTIER_t *************************/
/*
   CAN_TTIER             "Time Trigger Interrupt Enable Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int NBCIE:2;             /*  = [0..1] = 0x00000003 */
      unsigned int TENWERIE:1;          /*  = [2..2] = 0x00000004 */
      unsigned int TTERIE:1;            /*  = [3..3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int WTEIE:1;             /*  = [6..6] = 0x00000040 */
      unsigned int AWDIE:1;             /*  = [7..7] = 0x00000080 */
      unsigned int ERRSCIE:1;           /*  = [8..8] = 0x00000100 */
      unsigned int MSRCIE:1;            /*  = [9..9] = 0x00000200 */
      unsigned int SYNCSCIE:1;          /*  = [10..10] = 0x00000400 */
      unsigned int SEIE:1;              /*  = [11..11] = 0x00000800 */
      unsigned int NOTIFIE:1;           /*  = [12..12] = 0x00001000 */
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
} __attribute__((aligned(4))) CAN_TTIER_t_nonv;

typedef volatile CAN_TTIER_t_nonv CAN_TTIER_t;

/********************** CAN_TTINPR_t *************************/
/*
   CAN_TTINPR            "Time Trigger Interrupt Node Pointer Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ERRINP:4;            /*  = [0..3] = 0x0000000f */
      unsigned int NBCINP:4;            /*  = [4..7] = 0x000000f0 */
      unsigned int NOTIFINP:4;          /*  = [8..11] = 0x00000f00 */
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
} __attribute__((aligned(4))) CAN_TTINPR_t_nonv;

typedef volatile CAN_TTINPR_t_nonv CAN_TTINPR_t;

/********************** CAN_TTIRR_t *************************/
/*
   CAN_TTIRR             "Time Trigger Interrupt Request Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int NMC:1;               /*  = [0..0] = 0x00000001 */
      unsigned int NBC:1;               /*  = [1..1] = 0x00000002 */
      unsigned int TENWER:1;            /*  = [2..2] = 0x00000004 */
      unsigned int TTUF:1;              /*  = [3..3] = 0x00000008 */
      unsigned int TTOF:1;              /*  = [4..4] = 0x00000010 */
      unsigned int WTE:1;               /*  = [5..5] = 0x00000020 */
      unsigned int IWTE:1;              /*  = [6..6] = 0x00000040 */
      unsigned int AWDERR:1;            /*  = [7..7] = 0x00000080 */
      unsigned int ERRSC:1;             /*  = [8..8] = 0x00000100 */
      unsigned int MSRC:1;              /*  = [9..9] = 0x00000200 */
      unsigned int SYNCSC:1;            /*  = [10..10] = 0x00000400 */
      unsigned int EOS:1;               /*  = [11..11] = 0x00000800 */
      unsigned int WFE:1;               /*  = [12..12] = 0x00001000 */
      unsigned int DISC:1;              /*  = [13..13] = 0x00002000 */
      unsigned int SERR1:1;             /*  = [14..14] = 0x00004000 */
      unsigned int SERR2:1;             /*  = [15..15] = 0x00008000 */
      unsigned int CFGERR:1;            /*  = [16..16] = 0x00010000 */
      unsigned int TURERR:1;            /*  = [17..17] = 0x00020000 */
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
} __attribute__((aligned(4))) CAN_TTIRR_t_nonv;

typedef volatile CAN_TTIRR_t_nonv CAN_TTIRR_t;

/********************** CAN_TTSR_t *************************/
/*
   CAN_TTSR              "Time Trigger Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ERRS:2;              /*  = [0..1] = 0x00000003 */
      unsigned int MSR:2;               /*  = [2..3] = 0x0000000c */
      unsigned int SYNCS:2;             /*  = [4..5] = 0x00000030 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int EFI:1;               /*  = [8..8] = 0x00000100 */
      unsigned int EFF:1;               /*  = [9..9] = 0x00000200 */
      unsigned int REFTRG:1;            /*  = [10..10] = 0x00000400 */
      unsigned int ARB:1;               /*  = [11..11] = 0x00000800 */
      unsigned int CFGM:1;              /*  = [12..12] = 0x00001000 */
      unsigned int TMPC:1;              /*  = [13..13] = 0x00002000 */
      unsigned int TRAF:1;              /*  = [14..14] = 0x00004000 */
      unsigned int RECF:1;              /*  = [15..15] = 0x00008000 */
      unsigned int MSCMIN:3;            /*  = [16..18] = 0x00070000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int MSCMAX:3;            /*  = [20..22] = 0x00700000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int NIG:1;               /*  = [24..24] = 0x01000000 */
      unsigned int ETR:1;               /*  = [25..25] = 0x02000000 */
      unsigned int ETREV:1;             /*  = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CAN_TTSR_t_nonv;

typedef volatile CAN_TTSR_t_nonv CAN_TTSR_t;

/********************** CAN_TURR_t *************************/
/*
   CAN_TURR              "Time Unit Ratio Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ADJEN:1;             /*  = [0..0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1..1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int TURADJ:10;           /*  = [6..15] = 0x0000ffc0 */
      unsigned int VAL:1;               /*  = [16..16] = 0x00010000 */
      unsigned int LTCS:1;              /*  = [17..17] = 0x00020000 */
      unsigned int LTDIV:3;             /*  = [18..20] = 0x001c0000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int TUR:10;              /*  = [22..31] = 0xffc00000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CAN_TURR_t_nonv;

typedef volatile CAN_TURR_t_nonv CAN_TURR_t;


#endif /* _HAVE_TRICORE_CAN_TYPES_H_ */

