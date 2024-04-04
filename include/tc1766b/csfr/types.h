/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_CSFR_TYPES_H_
#define _HAVE_TRICORE_CSFR_TYPES_H_


/********************** BIV_t *************************/
/*
   BIV                   "Interrupt Vector Table Pointer"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0..0] = 0x00000001 */
      unsigned int BIV_15_1:15;         /*  = [1..15] = 0x0000fffe */
      unsigned int BIV_31_16:16;        /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) BIV_t_nonv;

typedef volatile BIV_t_nonv BIV_t;

/********************** BTV_t *************************/
/*
   BTV                   "Trap Vector Table Pointer"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0..0] = 0x00000001 */
      unsigned int BTV_15_1:15;         /*  = [1..15] = 0x0000fffe */
      unsigned int BTV_31_16:16;        /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) BTV_t_nonv;

typedef volatile BTV_t_nonv BTV_t;

/********************** CPU_ID_t *************************/
/*
   CPU_ID                "CPU Identification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MOD_REV:8;           /*  = [0..7] = 0x000000ff */
      unsigned int MOD_TYPE:8;          /*  = [8..15] = 0x0000ff00 */
      unsigned int MOD_NUMBER:16;       /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) CPU_ID_t_nonv;

typedef volatile CPU_ID_t_nonv CPU_ID_t;

/********************** FCX_t *************************/
/*
   FCX                   "Free Context List Head Pointer"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int FCXO:16;             /*  = [0..15] = 0x0000ffff */
      unsigned int FCXS:4;              /*  = [16..19] = 0x000f0000 */
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
} __attribute__((aligned(4))) FCX_t_nonv;

typedef volatile FCX_t_nonv FCX_t;

/********************** ICR_t *************************/
/*
   ICR                   "ICU Interrupt Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CCPN:8;              /*  = [0..7] = 0x000000ff */
      unsigned int IE:1;                /*  = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int PIPN:8;              /*  = [16..23] = 0x00ff0000 */
      unsigned int CARBCYC:2;           /*  = [24..25] = 0x03000000 */
      unsigned int CONECYC:1;           /*  = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) ICR_t_nonv;

typedef volatile ICR_t_nonv ICR_t;

/********************** ISP_t *************************/
/*
   ISP                   "Interrupt Stack Pointer"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ISP_15_0:16;         /*  = [0..15] = 0x0000ffff */
      unsigned int ISP_31_16:16;        /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) ISP_t_nonv;

typedef volatile ISP_t_nonv ISP_t;

/********************** LCX_t *************************/
/*
   LCX                   "Free Context List Limit Pointer"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int LCXO:16;             /*  = [0..15] = 0x0000ffff */
      unsigned int LCXS:4;              /*  = [16..19] = 0x000f0000 */
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
} __attribute__((aligned(4))) LCX_t_nonv;

typedef volatile LCX_t_nonv LCX_t;

/********************** PC_t *************************/
/*
   PC                    "Program Counter"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0..0] = 0x00000001 */
      unsigned int PC_15_1:15;          /*  = [1..15] = 0x0000fffe */
      unsigned int PC_31_16:16;         /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) PC_t_nonv;

typedef volatile PC_t_nonv PC_t;

/********************** PCXI_t *************************/
/*
   PCXI                  "Previous Context Information Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int PCXO:16;             /*  = [0..15] = 0x0000ffff */
      unsigned int PCXS:4;              /*  = [16..19] = 0x000f0000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int UL:1;                /*  = [22..22] = 0x00400000 */
      unsigned int PIE:1;               /*  = [23..23] = 0x00800000 */
      unsigned int PCPN:8;              /*  = [24..31] = 0xff000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) PCXI_t_nonv;

typedef volatile PCXI_t_nonv PCXI_t;

/********************** PSW_t *************************/
/*
   PSW                   "Program Status Word"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CDC:7;               /*  = [0..6] = 0x0000007f */
      unsigned int CDE:1;               /*  = [7..7] = 0x00000080 */
      unsigned int GW:1;                /*  = [8..8] = 0x00000100 */
      unsigned int IS:1;                /*  = [9..9] = 0x00000200 */
      unsigned int IO:2;                /*  = [10..11] = 0x00000c00 */
      unsigned int PRS:2;               /*  = [12..13] = 0x00003000 */
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
      unsigned int SAV:1;               /*  = [27..27] = 0x08000000 */
      unsigned int AV:1;                /*  = [28..28] = 0x10000000 */
      unsigned int SV:1;                /*  = [29..29] = 0x20000000 */
      unsigned int V:1;                 /*  = [30..30] = 0x40000000 */
      unsigned int C:1;                 /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) PSW_t_nonv;

typedef volatile PSW_t_nonv PSW_t;

/********************** SYSCON_t *************************/
/*
   SYSCON                "System Configuration Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int FCDSF:1;             /*  = [0..0] = 0x00000001 */
      unsigned int PROTEN:1;            /*  = [1..1] = 0x00000002 */
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
} __attribute__((aligned(4))) SYSCON_t_nonv;

typedef volatile SYSCON_t_nonv SYSCON_t;


#endif /* _HAVE_TRICORE_CSFR_TYPES_H_ */

