/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_IIC_TYPES_H_
#define _HAVE_TRICORE_IIC_TYPES_H_


/********************** IIC_BUSCON_t *************************/
/*
   IIC_BUSCON            "IIC BUS Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SDAEN0:1;            /*  = [0..0] = 0x00000001 */
      unsigned int SDAEN1:1;            /*  = [1..1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int SCLEN0:1;            /*  = [4..4] = 0x00000010 */
      unsigned int SCLEN1:1;            /*  = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int BRP:8;               /*  = [8..15] = 0x0000ff00 */
      unsigned int ICA0_0:1;            /*  = [16..16] = 0x00010000 */
      unsigned int ICA7__1:7;           /*  = [17..23] = 0x00fe0000 */
      unsigned int ICA8_0:1;            /*  = [24..24] = 0x01000000 */
      unsigned int ICA9_0:1;            /*  = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int PREDIV:2;            /*  = [29..30] = 0x60000000 */
      unsigned int BRPMOD:1;            /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) IIC_BUSCON_t_nonv;

typedef volatile IIC_BUSCON_t_nonv IIC_BUSCON_t;

/********************** IIC_CLC_t *************************/
/*
   IIC_CLC               "IIC Clock Control Register"
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
} __attribute__((aligned(4))) IIC_CLC_t_nonv;

typedef volatile IIC_CLC_t_nonv IIC_CLC_t;

/********************** IIC_ID_t *************************/
/*
   IIC_ID                "IIC Module Identification Register"
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
} __attribute__((aligned(4))) IIC_ID_t_nonv;

typedef volatile IIC_ID_t_nonv IIC_ID_t;

/********************** IIC_PISEL_t *************************/
/*
   IIC_PISEL             "IIC Input Select Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SCLIS0:1;            /*  = [0..0] = 0x00000001 */
      unsigned int SCLIS1:1;            /*  = [1..1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int SDAIS0:1;            /*  = [4..4] = 0x00000010 */
      unsigned int SDAIS1:1;            /*  = [5..5] = 0x00000020 */
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
} __attribute__((aligned(4))) IIC_PISEL_t_nonv;

typedef volatile IIC_PISEL_t_nonv IIC_PISEL_t;

/********************** IIC_RTB_t *************************/
/*
   IIC_RTB               "Reset Transmit Buffer"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RTB0:8;              /*  = [0..7] = 0x000000ff */
      unsigned int RTB1:8;              /*  = [8..15] = 0x0000ff00 */
      unsigned int RTB2:8;              /*  = [16..23] = 0x00ff0000 */
      unsigned int RTB3:8;              /*  = [24..31] = 0xff000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) IIC_RTB_t_nonv;

typedef volatile IIC_RTB_t_nonv IIC_RTB_t;

/********************** IIC_SYSCON_t *************************/
/*
   IIC_SYSCON            "System Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ADR:1;               /*  = [0..0] = 0x00000001 */
      unsigned int AL:1;                /*  = [1..1] = 0x00000002 */
      unsigned int SLA:1;               /*  = [2..2] = 0x00000004 */
      unsigned int LRB:1;               /*  = [3..3] = 0x00000008 */
      unsigned int BB:1;                /*  = [4..4] = 0x00000010 */
      unsigned int IRQD:1;              /*  = [5..5] = 0x00000020 */
      unsigned int IRQP:1;              /*  = [6..6] = 0x00000040 */
      unsigned int IRQE:1;              /*  = [7..7] = 0x00000080 */
      unsigned int CO:3;                /*  = [8..10] = 0x00000700 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int RMEN:1;              /*  = [15..15] = 0x00008000 */
      unsigned int M10:1;               /*  = [16..16] = 0x00010000 */
      unsigned int RSC:1;               /*  = [17..17] = 0x00020000 */
      unsigned int MOD:2;               /*  = [18..19] = 0x000c0000 */
      unsigned int BUM:1;               /*  = [20..20] = 0x00100000 */
      unsigned int ACKDIS:1;            /*  = [21..21] = 0x00200000 */
      unsigned int INT:1;               /*  = [22..22] = 0x00400000 */
      unsigned int TRX:1;               /*  = [23..23] = 0x00800000 */
      unsigned int IGE:1;               /*  = [24..24] = 0x01000000 */
      unsigned int STP:1;               /*  = [25..25] = 0x02000000 */
      unsigned int CI:2;                /*  = [26..27] = 0x0c000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int WMEN:1;              /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) IIC_SYSCON_t_nonv;

typedef volatile IIC_SYSCON_t_nonv IIC_SYSCON_t;

/********************** IIC_WHBSYSCON_t *************************/
/*
   IIC_WHBSYSCON         "IIC Write Hardware Modifiied System Control"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0..0] = 0x00000001 */
      unsigned int CLRAL:1;             /*  = [1..1] = 0x00000002 */
      unsigned int SETAL:1;             /*  = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int CLRIRQD:1;           /*  = [5..5] = 0x00000020 */
      unsigned int CLRIRQP:1;           /*  = [6..6] = 0x00000040 */
      unsigned int CLRIRQE:1;           /*  = [7..7] = 0x00000080 */
      unsigned int SETIRQD:1;           /*  = [8..8] = 0x00000100 */
      unsigned int SETIRQP:1;           /*  = [9..9] = 0x00000200 */
      unsigned int SETIRQE:1;           /*  = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int CLRRMEN:1;           /*  = [14..14] = 0x00004000 */
      unsigned int SETRMEN:1;           /*  = [15..15] = 0x00008000 */
      unsigned int CLRRSC:1;            /*  = [16..16] = 0x00010000 */
      unsigned int SETRSC:1;            /*  = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int CLRBUM:1;            /*  = [19..19] = 0x00080000 */
      unsigned int SETBUM:1;            /*  = [20..20] = 0x00100000 */
      unsigned int CLRACKDIS:1;         /*  = [21..21] = 0x00200000 */
      unsigned int SETACKDIS:1;         /*  = [22..22] = 0x00400000 */
      unsigned int CLRTRX:1;            /*  = [23..23] = 0x00800000 */
      unsigned int SETTRX:1;            /*  = [24..24] = 0x01000000 */
      unsigned int CLRSTP:1;            /*  = [25..25] = 0x02000000 */
      unsigned int SETSTP:1;            /*  = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int CLRWMEN:1;           /*  = [30..30] = 0x40000000 */
      unsigned int SETWMEN:1;           /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) IIC_WHBSYSCON_t_nonv;

typedef volatile IIC_WHBSYSCON_t_nonv IIC_WHBSYSCON_t;


#endif /* _HAVE_TRICORE_IIC_TYPES_H_ */

