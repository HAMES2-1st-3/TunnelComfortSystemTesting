/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_ERAY_TYPES_H_
#define _HAVE_TRICORE_ERAY_TYPES_H_


/********************** ERAY_ACS_t *************************/
/*
   ERAY_ACS              "Aggregated Channel Status"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int VFRA:1;              /*  = [0] = 0x00000001 */
      unsigned int SEDA:1;              /*  = [1] = 0x00000002 */
      unsigned int CEDA:1;              /*  = [2] = 0x00000004 */
      unsigned int CIA:1;               /*  = [3] = 0x00000008 */
      unsigned int SBVA:1;              /*  = [4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int VFRB:1;              /*  = [8] = 0x00000100 */
      unsigned int SEDB:1;              /*  = [9] = 0x00000200 */
      unsigned int CEDB:1;              /*  = [10] = 0x00000400 */
      unsigned int CIB:1;               /*  = [11] = 0x00000800 */
      unsigned int SBVB:1;              /*  = [12] = 0x00001000 */
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
} __attribute__((aligned(4))) ERAY_ACS_t_nonv;

typedef volatile ERAY_ACS_t_nonv ERAY_ACS_t;

/********************** ERAY_CCEV_t *************************/
/*
   ERAY_CCEV             "Communication Controller Error Vector"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CCFC:4;              /*  = [0..3] = 0x0000000f */
      unsigned int _bit4:1;             /* 0 = [4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5] = 0x00000020 */
      unsigned int ERRM:2;              /*  = [6..7] = 0x000000c0 */
      unsigned int PTAC:5;              /*  = [8..12] = 0x00001f00 */
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
} __attribute__((aligned(4))) ERAY_CCEV_t_nonv;

typedef volatile ERAY_CCEV_t_nonv ERAY_CCEV_t;

/********************** ERAY_CCSV_t *************************/
/*
   ERAY_CCSV             "Communication Controller Status Vector"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int POCS:6;              /*  = [0..5] = 0x0000003f */
      unsigned int FSI:1;               /*  = [6] = 0x00000040 */
      unsigned int HRQ:1;               /*  = [7] = 0x00000080 */
      unsigned int SLM:2;               /*  = [8..9] = 0x00000300 */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int CSNI:1;              /*  = [12] = 0x00001000 */
      unsigned int CSAI:1;              /*  = [13] = 0x00002000 */
      unsigned int CSI:1;               /*  = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int WSV:3;               /*  = [16..18] = 0x00070000 */
      unsigned int RCA:5;               /*  = [19..23] = 0x00f80000 */
      unsigned int PSL:6;               /*  = [24..29] = 0x3f000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_CCSV_t_nonv;

typedef volatile ERAY_CCSV_t_nonv ERAY_CCSV_t;

/********************** ERAY_CLC_t *************************/
/*
   ERAY_CLC              "ERAY Clock Control Register"
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
      unsigned int RMC:3;               /*  = [8..10] = 0x00000700 */
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
} __attribute__((aligned(4))) ERAY_CLC_t_nonv;

typedef volatile ERAY_CLC_t_nonv ERAY_CLC_t;

/********************** ERAY_CREL_t *************************/
/*
   ERAY_CREL             "Core Release Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DAY:8;               /*  = [0..7] = 0x000000ff */
      unsigned int MON:8;               /*  = [8..15] = 0x0000ff00 */
      unsigned int YEAR:4;              /*  = [16..19] = 0x000f0000 */
      unsigned int SUBSTEP:4;           /*  = [20..23] = 0x00f00000 */
      unsigned int STEP:4;              /*  = [24..27] = 0x0f000000 */
      unsigned int REL:4;               /*  = [28..31] = 0xf0000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_CREL_t_nonv;

typedef volatile ERAY_CREL_t_nonv ERAY_CREL_t;

/********************** ERAY_CUST1_t *************************/
/*
   ERAY_CUST1            "Busy and Input Buffer Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int INT0:1;              /*  = [0] = 0x00000001 */
      unsigned int OEN:1;               /*  = [1] = 0x00000002 */
      unsigned int IEN:1;               /*  = [2] = 0x00000004 */
      unsigned int IBFS:1;              /*  = [3] = 0x00000008 */
      unsigned int IBF1PAG:1;           /*  = [4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6] = 0x00000040 */
      unsigned int IBF2PAG:1;           /*  = [7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9] = 0x00000200 */
      unsigned int RISA:2;              /*  = [10..11] = 0x00000c00 */
      unsigned int RISB:2;              /*  = [12..13] = 0x00003000 */
      unsigned int STPWTS:2;            /*  = [14..15] = 0x0000c000 */
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
} __attribute__((aligned(4))) ERAY_CUST1_t_nonv;

typedef volatile ERAY_CUST1_t_nonv ERAY_CUST1_t;

/********************** ERAY_CUST3_t *************************/
/*
   ERAY_CUST3            "Customer Interface Timeout Counter"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TO:32;               /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_CUST3_t_nonv;

typedef volatile ERAY_CUST3_t_nonv ERAY_CUST3_t;

/********************** ERAY_DEDCON_t *************************/
/*
   ERAY_DEDCON           "DED Control"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DEDMEN:1;            /*  = [0] = 0x00000001 */
      unsigned int DEDT1EN:1;           /*  = [1] = 0x00000002 */
      unsigned int DEDT2EN:1;           /*  = [2] = 0x00000004 */
      unsigned int DEDO1EN:1;           /*  = [3] = 0x00000008 */
      unsigned int DEDO2EN:1;           /*  = [4] = 0x00000010 */
      unsigned int DEDI1EN:1;           /*  = [5] = 0x00000020 */
      unsigned int DEDI2EN:1;           /*  = [6] = 0x00000040 */
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
} __attribute__((aligned(4))) ERAY_DEDCON_t_nonv;

typedef volatile ERAY_DEDCON_t_nonv ERAY_DEDCON_t;

/********************** ERAY_ECCR_t *************************/
/*
   ERAY_ECCR             "ECC Data Read Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ECC:7;               /*  = [0..6] = 0x0000007f */
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
} __attribute__((aligned(4))) ERAY_ECCR_t_nonv;

typedef volatile ERAY_ECCR_t_nonv ERAY_ECCR_t;

/********************** ERAY_ECCW_t *************************/
/*
   ERAY_ECCW             "ECC Data Write Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ECC:7;               /*  = [0..6] = 0x0000007f */
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
} __attribute__((aligned(4))) ERAY_ECCW_t_nonv;

typedef volatile ERAY_ECCW_t_nonv ERAY_ECCW_t;

/********************** ERAY_EIER_t *************************/
/*
   ERAY_EIER             "Error Service Request Enable Reset"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int PEMCE:1;             /*  = [0] = 0x00000001 */
      unsigned int CNAE:1;              /*  = [1] = 0x00000002 */
      unsigned int SFBME:1;             /*  = [2] = 0x00000004 */
      unsigned int SFOE:1;              /*  = [3] = 0x00000008 */
      unsigned int CCFE:1;              /*  = [4] = 0x00000010 */
      unsigned int CCLE:1;              /*  = [5] = 0x00000020 */
      unsigned int EERRE:1;             /*  = [6] = 0x00000040 */
      unsigned int RFOE:1;              /*  = [7] = 0x00000080 */
      unsigned int EFAE:1;              /*  = [8] = 0x00000100 */
      unsigned int IIBAE:1;             /*  = [9] = 0x00000200 */
      unsigned int IOBAE:1;             /*  = [10] = 0x00000400 */
      unsigned int MHFE:1;              /*  = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int EDAE:1;              /*  = [16] = 0x00010000 */
      unsigned int LTVAE:1;             /*  = [17] = 0x00020000 */
      unsigned int TABAE:1;             /*  = [18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int EDBE:1;              /*  = [24] = 0x01000000 */
      unsigned int LTVBE:1;             /*  = [25] = 0x02000000 */
      unsigned int TABBE:1;             /*  = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_EIER_t_nonv;

typedef volatile ERAY_EIER_t_nonv ERAY_EIER_t;

/********************** ERAY_EIES_t *************************/
/*
   ERAY_EIES             "Error Service Request Enable Set"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int PEMCE:1;             /*  = [0] = 0x00000001 */
      unsigned int CNAE:1;              /*  = [1] = 0x00000002 */
      unsigned int SFBME:1;             /*  = [2] = 0x00000004 */
      unsigned int SFOE:1;              /*  = [3] = 0x00000008 */
      unsigned int CCFE:1;              /*  = [4] = 0x00000010 */
      unsigned int CCLE:1;              /*  = [5] = 0x00000020 */
      unsigned int EERRE:1;             /*  = [6] = 0x00000040 */
      unsigned int RFOE:1;              /*  = [7] = 0x00000080 */
      unsigned int EFAE:1;              /*  = [8] = 0x00000100 */
      unsigned int IIBAE:1;             /*  = [9] = 0x00000200 */
      unsigned int IOBAE:1;             /*  = [10] = 0x00000400 */
      unsigned int MHFE:1;              /*  = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int EDAE:1;              /*  = [16] = 0x00010000 */
      unsigned int LTVAE:1;             /*  = [17] = 0x00020000 */
      unsigned int TABAE:1;             /*  = [18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int EDBE:1;              /*  = [24] = 0x01000000 */
      unsigned int LTVBE:1;             /*  = [25] = 0x02000000 */
      unsigned int TABBE:1;             /*  = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_EIES_t_nonv;

typedef volatile ERAY_EIES_t_nonv ERAY_EIES_t;

/********************** ERAY_EILS_t *************************/
/*
   ERAY_EILS             "Error Service Request Line Select"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int PEMCL:1;             /*  = [0] = 0x00000001 */
      unsigned int CNAL:1;              /*  = [1] = 0x00000002 */
      unsigned int SFBML:1;             /*  = [2] = 0x00000004 */
      unsigned int SFOL:1;              /*  = [3] = 0x00000008 */
      unsigned int CCFL:1;              /*  = [4] = 0x00000010 */
      unsigned int CCLL:1;              /*  = [5] = 0x00000020 */
      unsigned int EERRL:1;             /*  = [6] = 0x00000040 */
      unsigned int RFOL:1;              /*  = [7] = 0x00000080 */
      unsigned int EFAL:1;              /*  = [8] = 0x00000100 */
      unsigned int IIBAL:1;             /*  = [9] = 0x00000200 */
      unsigned int IOBAL:1;             /*  = [10] = 0x00000400 */
      unsigned int MHFL:1;              /*  = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int EDAL:1;              /*  = [16] = 0x00010000 */
      unsigned int LTVAL:1;             /*  = [17] = 0x00020000 */
      unsigned int TABAL:1;             /*  = [18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int EDBL:1;              /*  = [24] = 0x01000000 */
      unsigned int LTVBL:1;             /*  = [25] = 0x02000000 */
      unsigned int TABBL:1;             /*  = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_EILS_t_nonv;

typedef volatile ERAY_EILS_t_nonv ERAY_EILS_t;

/********************** ERAY_EIR_t *************************/
/*
   ERAY_EIR              "Error Service Request Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int PEMC:1;              /*  = [0] = 0x00000001 */
      unsigned int CNA:1;               /*  = [1] = 0x00000002 */
      unsigned int SFBM:1;              /*  = [2] = 0x00000004 */
      unsigned int SFO:1;               /*  = [3] = 0x00000008 */
      unsigned int CCF:1;               /*  = [4] = 0x00000010 */
      unsigned int CCL:1;               /*  = [5] = 0x00000020 */
      unsigned int EERR:1;              /*  = [6] = 0x00000040 */
      unsigned int RFO:1;               /*  = [7] = 0x00000080 */
      unsigned int EFA:1;               /*  = [8] = 0x00000100 */
      unsigned int IIBA:1;              /*  = [9] = 0x00000200 */
      unsigned int IOBA:1;              /*  = [10] = 0x00000400 */
      unsigned int MHF:1;               /*  = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int EDA:1;               /*  = [16] = 0x00010000 */
      unsigned int LTVA:1;              /*  = [17] = 0x00020000 */
      unsigned int TABA:1;              /*  = [18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int EDB:1;               /*  = [24] = 0x01000000 */
      unsigned int LTVB:1;              /*  = [25] = 0x02000000 */
      unsigned int TABB:1;              /*  = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_EIR_t_nonv;

typedef volatile ERAY_EIR_t_nonv ERAY_EIR_t;

/********************** ERAY_ENDN_t *************************/
/*
   ERAY_ENDN             "Endian Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ETV:32;              /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_ENDN_t_nonv;

typedef volatile ERAY_ENDN_t_nonv ERAY_ENDN_t;

/********************** ERAY_FCL_t *************************/
/*
   ERAY_FCL              "FIFO Critical Level"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CL:8;                /*  = [0..7] = 0x000000ff */
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
} __attribute__((aligned(4))) ERAY_FCL_t_nonv;

typedef volatile ERAY_FCL_t_nonv ERAY_FCL_t;

/********************** ERAY_FRF_t *************************/
/*
   ERAY_FRF              "FIFO Rejection Filter"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CH:2;                /*  = [0..1] = 0x00000003 */
      unsigned int FID:11;              /*  = [2..12] = 0x00001ffc */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int CYF:7;               /*  = [16..22] = 0x007f0000 */
      unsigned int RSS:1;               /*  = [23] = 0x00800000 */
      unsigned int RNF:1;               /*  = [24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_FRF_t_nonv;

typedef volatile ERAY_FRF_t_nonv ERAY_FRF_t;

/********************** ERAY_FRFM_t *************************/
/*
   ERAY_FRFM             "FIFO Rejection Filter Mask"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1] = 0x00000002 */
      unsigned int MFID:11;             /*  = [2..12] = 0x00001ffc */
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
} __attribute__((aligned(4))) ERAY_FRFM_t_nonv;

typedef volatile ERAY_FRFM_t_nonv ERAY_FRFM_t;

/********************** ERAY_FSR_t *************************/
/*
   ERAY_FSR              "FIFO Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RFNE:1;              /*  = [0] = 0x00000001 */
      unsigned int RFCL:1;              /*  = [1] = 0x00000002 */
      unsigned int RFO:1;               /*  = [2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int RFFL:8;              /*  = [8..15] = 0x0000ff00 */
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
} __attribute__((aligned(4))) ERAY_FSR_t_nonv;

typedef volatile ERAY_FSR_t_nonv ERAY_FSR_t;

/********************** ERAY_GTUC01_t *************************/
/*
   ERAY_GTUC01           "GTU Configuration Register 1"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int UT:20;               /*  = [0..19] = 0x000fffff */
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
} __attribute__((aligned(4))) ERAY_GTUC01_t_nonv;

typedef volatile ERAY_GTUC01_t_nonv ERAY_GTUC01_t;

/********************** ERAY_GTUC02_t *************************/
/*
   ERAY_GTUC02           "GTU Configuration Register 2"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MPC:14;              /*  = [0..13] = 0x00003fff */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int SNM:4;               /*  = [16..19] = 0x000f0000 */
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
} __attribute__((aligned(4))) ERAY_GTUC02_t_nonv;

typedef volatile ERAY_GTUC02_t_nonv ERAY_GTUC02_t;

/********************** ERAY_GTUC03_t *************************/
/*
   ERAY_GTUC03           "GTU Configuration Register 3"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int UIOA:8;              /*  = [0..7] = 0x000000ff */
      unsigned int UIOB:8;              /*  = [8..15] = 0x0000ff00 */
      unsigned int MIOA:7;              /*  = [16..22] = 0x007f0000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int MIOB:7;              /*  = [24..30] = 0x7f000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_GTUC03_t_nonv;

typedef volatile ERAY_GTUC03_t_nonv ERAY_GTUC03_t;

/********************** ERAY_GTUC04_t *************************/
/*
   ERAY_GTUC04           "GTU Configuration Register 4"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int NIT:14;              /*  = [0..13] = 0x00003fff */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int OCS:14;              /*  = [16..29] = 0x3fff0000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_GTUC04_t_nonv;

typedef volatile ERAY_GTUC04_t_nonv ERAY_GTUC04_t;

/********************** ERAY_GTUC05_t *************************/
/*
   ERAY_GTUC05           "GTU Configuration Register 5"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DCA:8;               /*  = [0..7] = 0x000000ff */
      unsigned int DCB:8;               /*  = [8..15] = 0x0000ff00 */
      unsigned int CDD:5;               /*  = [16..20] = 0x001f0000 */
      unsigned int _bit21:1;            /* 0 = [21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int DEC:8;               /*  = [24..31] = 0xff000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_GTUC05_t_nonv;

typedef volatile ERAY_GTUC05_t_nonv ERAY_GTUC05_t;

/********************** ERAY_GTUC06_t *************************/
/*
   ERAY_GTUC06           "GTU Configuration Register 6"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ASR:11;              /*  = [0..10] = 0x000007ff */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int MOD:11;              /*  = [16..26] = 0x07ff0000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_GTUC06_t_nonv;

typedef volatile ERAY_GTUC06_t_nonv ERAY_GTUC06_t;

/********************** ERAY_GTUC07_t *************************/
/*
   ERAY_GTUC07           "GTU Configuration Register 7"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SSL:10;              /*  = [0..9] = 0x000003ff */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int NSS:10;              /*  = [16..25] = 0x03ff0000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_GTUC07_t_nonv;

typedef volatile ERAY_GTUC07_t_nonv ERAY_GTUC07_t;

/********************** ERAY_GTUC08_t *************************/
/*
   ERAY_GTUC08           "GTU Configuration Register 8"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MSL:6;               /*  = [0..5] = 0x0000003f */
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
      unsigned int NMS:13;              /*  = [16..28] = 0x1fff0000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_GTUC08_t_nonv;

typedef volatile ERAY_GTUC08_t_nonv ERAY_GTUC08_t;

/********************** ERAY_GTUC09_t *************************/
/*
   ERAY_GTUC09           "GTU Configuration Register 9"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int APO:6;               /*  = [0..5] = 0x0000003f */
      unsigned int _bit6:1;             /* 0 = [6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int MAPO:5;              /*  = [8..12] = 0x00001f00 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int DSI:2;               /*  = [16..17] = 0x00030000 */
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
} __attribute__((aligned(4))) ERAY_GTUC09_t_nonv;

typedef volatile ERAY_GTUC09_t_nonv ERAY_GTUC09_t;

/********************** ERAY_GTUC10_t *************************/
/*
   ERAY_GTUC10           "GTU Configuration Register 10"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MOC:14;              /*  = [0..13] = 0x00003fff */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int MRC:11;              /*  = [16..26] = 0x07ff0000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_GTUC10_t_nonv;

typedef volatile ERAY_GTUC10_t_nonv ERAY_GTUC10_t;

/********************** ERAY_GTUC11_t *************************/
/*
   ERAY_GTUC11           "GTU Configuration Register 11"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int EOCC:2;              /*  = [0..1] = 0x00000003 */
      unsigned int _bit2:1;             /* 0 = [2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int ERCC:2;              /*  = [8..9] = 0x00000300 */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int EOC:3;               /*  = [16..18] = 0x00070000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int ERC:3;               /*  = [24..26] = 0x07000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_GTUC11_t_nonv;

typedef volatile ERAY_GTUC11_t_nonv ERAY_GTUC11_t;

/********************** ERAY_IBCM_t *************************/
/*
   ERAY_IBCM             "Input Buffer Command Mask"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int LHSH:1;              /*  = [0] = 0x00000001 */
      unsigned int LDSH:1;              /*  = [1] = 0x00000002 */
      unsigned int STXRH:1;             /*  = [2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5] = 0x00000020 */
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
      unsigned int LHSS:1;              /*  = [16] = 0x00010000 */
      unsigned int LDSS:1;              /*  = [17] = 0x00020000 */
      unsigned int STXRS:1;             /*  = [18] = 0x00040000 */
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
} __attribute__((aligned(4))) ERAY_IBCM_t_nonv;

typedef volatile ERAY_IBCM_t_nonv ERAY_IBCM_t;

/********************** ERAY_IBCR_t *************************/
/*
   ERAY_IBCR             "Input Buffer Command Request"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int IBRH:7;              /*  = [0..6] = 0x0000007f */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int IBSYH:1;             /*  = [15] = 0x00008000 */
      unsigned int IBRS:7;              /*  = [16..22] = 0x007f0000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int IBSYS:1;             /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_IBCR_t_nonv;

typedef volatile ERAY_IBCR_t_nonv ERAY_IBCR_t;

/********************** ERAY_IBUSYSRC_t *************************/
/*
   ERAY_IBUSYSRC         "Input Buffer Busy Service Request Control Register"
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
} __attribute__((aligned(4))) ERAY_IBUSYSRC_t_nonv;

typedef volatile ERAY_IBUSYSRC_t_nonv ERAY_IBUSYSRC_t;

/********************** ERAY_ID_t *************************/
/*
   ERAY_ID               "Module Identification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MOD_REV:8;           /*  = [0..7] = 0x000000ff */
      unsigned int MOD_TYPE:8;          /*  = [8..15] = 0x0000ff00 */
      unsigned int MOD_NUMBER:16;       /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_ID_t_nonv;

typedef volatile ERAY_ID_t_nonv ERAY_ID_t;

/********************** ERAY_ILE_t *************************/
/*
   ERAY_ILE              "Service Request Line Enable"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int EINT0:1;             /*  = [0] = 0x00000001 */
      unsigned int EINT1:1;             /*  = [1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5] = 0x00000020 */
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
} __attribute__((aligned(4))) ERAY_ILE_t_nonv;

typedef volatile ERAY_ILE_t_nonv ERAY_ILE_t;

/********************** ERAY_LCK_t *************************/
/*
   ERAY_LCK              "Lock Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CLK:8;               /*  = [0..7] = 0x000000ff */
      unsigned int TMK:8;               /*  = [8..15] = 0x0000ff00 */
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
} __attribute__((aligned(4))) ERAY_LCK_t_nonv;

typedef volatile ERAY_LCK_t_nonv ERAY_LCK_t;

/********************** ERAY_LDTS_t *************************/
/*
   ERAY_LDTS             "Last Dynamic Transmit Slot"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int LDTA:11;             /*  = [0..10] = 0x000007ff */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int LDTB:11;             /*  = [16..26] = 0x07ff0000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_LDTS_t_nonv;

typedef volatile ERAY_LDTS_t_nonv ERAY_LDTS_t;

/********************** ERAY_MBS_t *************************/
/*
   ERAY_MBS              "Message Buffer Status"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int VFRA:1;              /*  = [0] = 0x00000001 */
      unsigned int VFRB:1;              /*  = [1] = 0x00000002 */
      unsigned int SEOA:1;              /*  = [2] = 0x00000004 */
      unsigned int SEOB:1;              /*  = [3] = 0x00000008 */
      unsigned int CEOA:1;              /*  = [4] = 0x00000010 */
      unsigned int CEOB:1;              /*  = [5] = 0x00000020 */
      unsigned int SVOA:1;              /*  = [6] = 0x00000040 */
      unsigned int SVOB:1;              /*  = [7] = 0x00000080 */
      unsigned int TCIA:1;              /*  = [8] = 0x00000100 */
      unsigned int TCIB:1;              /*  = [9] = 0x00000200 */
      unsigned int ESA:1;               /*  = [10] = 0x00000400 */
      unsigned int ESB:1;               /*  = [11] = 0x00000800 */
      unsigned int MLST:1;              /*  = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int FTA:1;               /*  = [14] = 0x00004000 */
      unsigned int FTB:1;               /*  = [15] = 0x00008000 */
      unsigned int CCS:6;               /*  = [16..21] = 0x003f0000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int RCIS:1;              /*  = [24] = 0x01000000 */
      unsigned int SFIS:1;              /*  = [25] = 0x02000000 */
      unsigned int SYNS:1;              /*  = [26] = 0x04000000 */
      unsigned int NFIS:1;              /*  = [27] = 0x08000000 */
      unsigned int PPIS:1;              /*  = [28] = 0x10000000 */
      unsigned int RESS:1;              /*  = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_MBS_t_nonv;

typedef volatile ERAY_MBS_t_nonv ERAY_MBS_t;

/********************** ERAY_MHDC_t *************************/
/*
   ERAY_MHDC             "MHD Configuration Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SFDL:7;              /*  = [0..6] = 0x0000007f */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int SLT:13;              /*  = [16..28] = 0x1fff0000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_MHDC_t_nonv;

typedef volatile ERAY_MHDC_t_nonv ERAY_MHDC_t;

/********************** ERAY_MHDF_t *************************/
/*
   ERAY_MHDF             "Message Handler Constraints Flags"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SNUA:1;              /*  = [0] = 0x00000001 */
      unsigned int SNUB:1;              /*  = [1] = 0x00000002 */
      unsigned int FNFA:1;              /*  = [2] = 0x00000004 */
      unsigned int FNFB:1;              /*  = [3] = 0x00000008 */
      unsigned int TBFA:1;              /*  = [4] = 0x00000010 */
      unsigned int TBFB:1;              /*  = [5] = 0x00000020 */
      unsigned int TNSA:1;              /*  = [6] = 0x00000040 */
      unsigned int TNSB:1;              /*  = [7] = 0x00000080 */
      unsigned int WAHP:1;              /*  = [8] = 0x00000100 */
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
} __attribute__((aligned(4))) ERAY_MHDF_t_nonv;

typedef volatile ERAY_MHDF_t_nonv ERAY_MHDF_t;

/********************** ERAY_MHDS_t *************************/
/*
   ERAY_MHDS             "Message Handler Status"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int EIBF:1;              /*  = [0] = 0x00000001 */
      unsigned int EOBF:1;              /*  = [1] = 0x00000002 */
      unsigned int EMR:1;               /*  = [2] = 0x00000004 */
      unsigned int ETBF1:1;             /*  = [3] = 0x00000008 */
      unsigned int ETBF2:1;             /*  = [4] = 0x00000010 */
      unsigned int FMBD:1;              /*  = [5] = 0x00000020 */
      unsigned int MFMB:1;              /*  = [6] = 0x00000040 */
      unsigned int CRAM:1;              /*  = [7] = 0x00000080 */
      unsigned int FMB:7;               /*  = [8..14] = 0x00007f00 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int MBT:7;               /*  = [16..22] = 0x007f0000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int MBU:7;               /*  = [24..30] = 0x7f000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_MHDS_t_nonv;

typedef volatile ERAY_MHDS_t_nonv ERAY_MHDS_t;

/********************** ERAY_MRC_t *************************/
/*
   ERAY_MRC              "Message RAM Configuration"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int FDB:8;               /*  = [0..7] = 0x000000ff */
      unsigned int FFB:8;               /*  = [8..15] = 0x0000ff00 */
      unsigned int LCB:8;               /*  = [16..23] = 0x00ff0000 */
      unsigned int SEC:2;               /*  = [24..25] = 0x03000000 */
      unsigned int SPLM:1;              /*  = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_MRC_t_nonv;

typedef volatile ERAY_MRC_t_nonv ERAY_MRC_t;

/********************** ERAY_MTCCV_t *************************/
/*
   ERAY_MTCCV            "Macrotick and Cycle Counter Value"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MTV:14;              /*  = [0..13] = 0x00003fff */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int CCV:6;               /*  = [16..21] = 0x003f0000 */
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
} __attribute__((aligned(4))) ERAY_MTCCV_t_nonv;

typedef volatile ERAY_MTCCV_t_nonv ERAY_MTCCV_t;

/********************** ERAY_NEMC_t *************************/
/*
   ERAY_NEMC             "NEM Configuration Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int NML:4;               /*  = [0..3] = 0x0000000f */
      unsigned int _bit4:1;             /* 0 = [4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5] = 0x00000020 */
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
} __attribute__((aligned(4))) ERAY_NEMC_t_nonv;

typedef volatile ERAY_NEMC_t_nonv ERAY_NEMC_t;

/********************** ERAY_OBCM_t *************************/
/*
   ERAY_OBCM             "Output Buffer Command Mask"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RHSS:1;              /*  = [0] = 0x00000001 */
      unsigned int RDSS:1;              /*  = [1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5] = 0x00000020 */
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
      unsigned int RHSH:1;              /*  = [16] = 0x00010000 */
      unsigned int RDSH:1;              /*  = [17] = 0x00020000 */
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
} __attribute__((aligned(4))) ERAY_OBCM_t_nonv;

typedef volatile ERAY_OBCM_t_nonv ERAY_OBCM_t;

/********************** ERAY_OBCR_t *************************/
/*
   ERAY_OBCR             "Output Buffer Command Request"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int OBRS:7;              /*  = [0..6] = 0x0000007f */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int VIEW:1;              /*  = [8] = 0x00000100 */
      unsigned int REQ:1;               /*  = [9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int OBSYS:1;             /*  = [15] = 0x00008000 */
      unsigned int OBRH:7;              /*  = [16..22] = 0x007f0000 */
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
} __attribute__((aligned(4))) ERAY_OBCR_t_nonv;

typedef volatile ERAY_OBCR_t_nonv ERAY_OBCR_t;

/********************** ERAY_OBUSYSRC_t *************************/
/*
   ERAY_OBUSYSRC         "Output Buffer Busy Service Request Control Register"
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
} __attribute__((aligned(4))) ERAY_OBUSYSRC_t_nonv;

typedef volatile ERAY_OBUSYSRC_t_nonv ERAY_OBUSYSRC_t;

/********************** ERAY_OCV_t *************************/
/*
   ERAY_OCV              "Offset Correction Value"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int OCV:19;              /*  = [0..18] = 0x0007ffff */
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
} __attribute__((aligned(4))) ERAY_OCV_t_nonv;

typedef volatile ERAY_OCV_t_nonv ERAY_OCV_t;

/********************** ERAY_PRTC1_t *************************/
/*
   ERAY_PRTC1            "PRT Configuration Register 1"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TSST:4;              /*  = [0..3] = 0x0000000f */
      unsigned int CASM:7;              /*  = [4..10] = 0x000007f0 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int SPP:2;               /*  = [12..13] = 0x00003000 */
      unsigned int BRP:2;               /*  = [14..15] = 0x0000c000 */
      unsigned int RXW:9;               /*  = [16..24] = 0x01ff0000 */
      unsigned int _bit25:1;            /* 0 = [25] = 0x02000000 */
      unsigned int RWP:6;               /*  = [26..31] = 0xfc000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_PRTC1_t_nonv;

typedef volatile ERAY_PRTC1_t_nonv ERAY_PRTC1_t;

/********************** ERAY_PRTC2_t *************************/
/*
   ERAY_PRTC2            "PRT Configuration Register 2"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RXI:6;               /*  = [0..5] = 0x0000003f */
      unsigned int _bit6:1;             /* 0 = [6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int RXL:6;               /*  = [8..13] = 0x00003f00 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int TXI:8;               /*  = [16..23] = 0x00ff0000 */
      unsigned int TXL:6;               /*  = [24..29] = 0x3f000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_PRTC2_t_nonv;

typedef volatile ERAY_PRTC2_t_nonv ERAY_PRTC2_t;

/********************** ERAY_RCV_t *************************/
/*
   ERAY_RCV              "Rate Correction Value"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RCV:12;              /*  = [0..11] = 0x00000fff */
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
} __attribute__((aligned(4))) ERAY_RCV_t_nonv;

typedef volatile ERAY_RCV_t_nonv ERAY_RCV_t;

/********************** ERAY_RDHS1_t *************************/
/*
   ERAY_RDHS1            "Read Header Section 1"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int FID:11;              /*  = [0..10] = 0x000007ff */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int CYC:7;               /*  = [16..22] = 0x007f0000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int CHA:1;               /*  = [24] = 0x01000000 */
      unsigned int CHB:1;               /*  = [25] = 0x02000000 */
      unsigned int CFG:1;               /*  = [26] = 0x04000000 */
      unsigned int PPIT:1;              /*  = [27] = 0x08000000 */
      unsigned int TXM:1;               /*  = [28] = 0x10000000 */
      unsigned int MBI:1;               /*  = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_RDHS1_t_nonv;

typedef volatile ERAY_RDHS1_t_nonv ERAY_RDHS1_t;

/********************** ERAY_RDHS2_t *************************/
/*
   ERAY_RDHS2            "Read Header Section 2"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CRC:11;              /*  = [0..10] = 0x000007ff */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int PLC:7;               /*  = [16..22] = 0x007f0000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int PLR:7;               /*  = [24..30] = 0x7f000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_RDHS2_t_nonv;

typedef volatile ERAY_RDHS2_t_nonv ERAY_RDHS2_t;

/********************** ERAY_RDHS3_t *************************/
/*
   ERAY_RDHS3            "Read Header Section 3"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DP:11;               /*  = [0..10] = 0x000007ff */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int RCC:6;               /*  = [16..21] = 0x003f0000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int RCI:1;               /*  = [24] = 0x01000000 */
      unsigned int SFI:1;               /*  = [25] = 0x02000000 */
      unsigned int SYN:1;               /*  = [26] = 0x04000000 */
      unsigned int NFI:1;               /*  = [27] = 0x08000000 */
      unsigned int PPI:1;               /*  = [28] = 0x10000000 */
      unsigned int RES:1;               /*  = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_RDHS3_t_nonv;

typedef volatile ERAY_RDHS3_t_nonv ERAY_RDHS3_t;

/********************** ERAY_SCV_t *************************/
/*
   ERAY_SCV              "Slot Counter Value"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SCCA:11;             /*  = [0..10] = 0x000007ff */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int SCCB:11;             /*  = [16..26] = 0x07ff0000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_SCV_t_nonv;

typedef volatile ERAY_SCV_t_nonv ERAY_SCV_t;

/********************** ERAY_SECCON_t *************************/
/*
   ERAY_SECCON           "SEC Control"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SECMEN:1;            /*  = [0] = 0x00000001 */
      unsigned int SECT1EN:1;           /*  = [1] = 0x00000002 */
      unsigned int SECT2EN:1;           /*  = [2] = 0x00000004 */
      unsigned int SECO1EN:1;           /*  = [3] = 0x00000008 */
      unsigned int SECO2EN:1;           /*  = [4] = 0x00000010 */
      unsigned int SECI1EN:1;           /*  = [5] = 0x00000020 */
      unsigned int SECI2EN:1;           /*  = [6] = 0x00000040 */
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
} __attribute__((aligned(4))) ERAY_SECCON_t_nonv;

typedef volatile ERAY_SECCON_t_nonv ERAY_SECCON_t;

/********************** ERAY_SEDCON_t *************************/
/*
   ERAY_SEDCON           "SED Control"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SEDMEN:1;            /*  = [0] = 0x00000001 */
      unsigned int SEDT1EN:1;           /*  = [1] = 0x00000002 */
      unsigned int SEDT2EN:1;           /*  = [2] = 0x00000004 */
      unsigned int SEDO1EN:1;           /*  = [3] = 0x00000008 */
      unsigned int SEDO2EN:1;           /*  = [4] = 0x00000010 */
      unsigned int SEDI1EN:1;           /*  = [5] = 0x00000020 */
      unsigned int SEDI2EN:1;           /*  = [6] = 0x00000040 */
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
} __attribute__((aligned(4))) ERAY_SEDCON_t_nonv;

typedef volatile ERAY_SEDCON_t_nonv ERAY_SEDCON_t;

/********************** ERAY_SFS_t *************************/
/*
   ERAY_SFS              "SYNC Frame Status"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int VSAE:4;              /*  = [0..3] = 0x0000000f */
      unsigned int VSAO:4;              /*  = [4..7] = 0x000000f0 */
      unsigned int VSBE:4;              /*  = [8..11] = 0x00000f00 */
      unsigned int VSBO:4;              /*  = [12..15] = 0x0000f000 */
      unsigned int MOCS:1;              /*  = [16] = 0x00010000 */
      unsigned int OCLR:1;              /*  = [17] = 0x00020000 */
      unsigned int MRCS:1;              /*  = [18] = 0x00040000 */
      unsigned int RCLR:1;              /*  = [19] = 0x00080000 */
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
} __attribute__((aligned(4))) ERAY_SFS_t_nonv;

typedef volatile ERAY_SFS_t_nonv ERAY_SFS_t;

/********************** ERAY_SIER_t *************************/
/*
   ERAY_SIER             "Status Service Request Enable Reset"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int WSTE:1;              /*  = [0] = 0x00000001 */
      unsigned int CASE:1;              /*  = [1] = 0x00000002 */
      unsigned int CYCSE:1;             /*  = [2] = 0x00000004 */
      unsigned int TXIE:1;              /*  = [3] = 0x00000008 */
      unsigned int RXIE:1;              /*  = [4] = 0x00000010 */
      unsigned int RFNEE:1;             /*  = [5] = 0x00000020 */
      unsigned int RFCLE:1;             /*  = [6] = 0x00000040 */
      unsigned int NMVCE:1;             /*  = [7] = 0x00000080 */
      unsigned int TI0E:1;              /*  = [8] = 0x00000100 */
      unsigned int TI1E:1;              /*  = [9] = 0x00000200 */
      unsigned int TIBCE:1;             /*  = [10] = 0x00000400 */
      unsigned int TOBCE:1;             /*  = [11] = 0x00000800 */
      unsigned int SWEE:1;              /*  = [12] = 0x00001000 */
      unsigned int SUCSE:1;             /*  = [13] = 0x00002000 */
      unsigned int MBSIE:1;             /*  = [14] = 0x00004000 */
      unsigned int SDSE:1;              /*  = [15] = 0x00008000 */
      unsigned int WUPAE:1;             /*  = [16] = 0x00010000 */
      unsigned int MTSAE:1;             /*  = [17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int WUPBE:1;             /*  = [24] = 0x01000000 */
      unsigned int MTSBE:1;             /*  = [25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_SIER_t_nonv;

typedef volatile ERAY_SIER_t_nonv ERAY_SIER_t;

/********************** ERAY_SIES_t *************************/
/*
   ERAY_SIES             "Status Service Request Enable Set"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int WSTE:1;              /*  = [0] = 0x00000001 */
      unsigned int CASE:1;              /*  = [1] = 0x00000002 */
      unsigned int CYCSE:1;             /*  = [2] = 0x00000004 */
      unsigned int TXIE:1;              /*  = [3] = 0x00000008 */
      unsigned int RXIE:1;              /*  = [4] = 0x00000010 */
      unsigned int RFNEE:1;             /*  = [5] = 0x00000020 */
      unsigned int RFCLE:1;             /*  = [6] = 0x00000040 */
      unsigned int NMVCE:1;             /*  = [7] = 0x00000080 */
      unsigned int TI0E:1;              /*  = [8] = 0x00000100 */
      unsigned int TI1E:1;              /*  = [9] = 0x00000200 */
      unsigned int TIBCE:1;             /*  = [10] = 0x00000400 */
      unsigned int TOBCE:1;             /*  = [11] = 0x00000800 */
      unsigned int SWEE:1;              /*  = [12] = 0x00001000 */
      unsigned int SUCSE:1;             /*  = [13] = 0x00002000 */
      unsigned int MBSIE:1;             /*  = [14] = 0x00004000 */
      unsigned int SDSE:1;              /*  = [15] = 0x00008000 */
      unsigned int WUPAE:1;             /*  = [16] = 0x00010000 */
      unsigned int MTSAE:1;             /*  = [17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int WUPBE:1;             /*  = [24] = 0x01000000 */
      unsigned int MTSBE:1;             /*  = [25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_SIES_t_nonv;

typedef volatile ERAY_SIES_t_nonv ERAY_SIES_t;

/********************** ERAY_SILS_t *************************/
/*
   ERAY_SILS             "Status Service Request Line Select"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int WSTL:1;              /*  = [0] = 0x00000001 */
      unsigned int CASL:1;              /*  = [1] = 0x00000002 */
      unsigned int CYCSL:1;             /*  = [2] = 0x00000004 */
      unsigned int TXIL:1;              /*  = [3] = 0x00000008 */
      unsigned int RXIL:1;              /*  = [4] = 0x00000010 */
      unsigned int RFNEL:1;             /*  = [5] = 0x00000020 */
      unsigned int RFCLL:1;             /*  = [6] = 0x00000040 */
      unsigned int NMVCL:1;             /*  = [7] = 0x00000080 */
      unsigned int TI0L:1;              /*  = [8] = 0x00000100 */
      unsigned int TI1L:1;              /*  = [9] = 0x00000200 */
      unsigned int TIBCL:1;             /*  = [10] = 0x00000400 */
      unsigned int TOBCL:1;             /*  = [11] = 0x00000800 */
      unsigned int SWEL:1;              /*  = [12] = 0x00001000 */
      unsigned int SUCSL:1;             /*  = [13] = 0x00002000 */
      unsigned int MBSIL:1;             /*  = [14] = 0x00004000 */
      unsigned int SDSL:1;              /*  = [15] = 0x00008000 */
      unsigned int WUPAL:1;             /*  = [16] = 0x00010000 */
      unsigned int MTSAL:1;             /*  = [17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int WUPBL:1;             /*  = [24] = 0x01000000 */
      unsigned int MTSBL:1;             /*  = [25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_SILS_t_nonv;

typedef volatile ERAY_SILS_t_nonv ERAY_SILS_t;

/********************** ERAY_SIR_t *************************/
/*
   ERAY_SIR              "Status Service Request Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int WST:1;               /*  = [0] = 0x00000001 */
      unsigned int CAS:1;               /*  = [1] = 0x00000002 */
      unsigned int CYCS:1;              /*  = [2] = 0x00000004 */
      unsigned int TXI:1;               /*  = [3] = 0x00000008 */
      unsigned int RXI:1;               /*  = [4] = 0x00000010 */
      unsigned int RFNE:1;              /*  = [5] = 0x00000020 */
      unsigned int RFCL:1;              /*  = [6] = 0x00000040 */
      unsigned int NMVC:1;              /*  = [7] = 0x00000080 */
      unsigned int TI0:1;               /*  = [8] = 0x00000100 */
      unsigned int TI1:1;               /*  = [9] = 0x00000200 */
      unsigned int TIBC:1;              /*  = [10] = 0x00000400 */
      unsigned int TOBC:1;              /*  = [11] = 0x00000800 */
      unsigned int SWE:1;               /*  = [12] = 0x00001000 */
      unsigned int SUCS:1;              /*  = [13] = 0x00002000 */
      unsigned int MBSI:1;              /*  = [14] = 0x00004000 */
      unsigned int SDS:1;               /*  = [15] = 0x00008000 */
      unsigned int WUPA:1;              /*  = [16] = 0x00010000 */
      unsigned int MTSA:1;              /*  = [17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int WUPB:1;              /*  = [24] = 0x01000000 */
      unsigned int MTSB:1;              /*  = [25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_SIR_t_nonv;

typedef volatile ERAY_SIR_t_nonv ERAY_SIR_t;

/********************** ERAY_STPW1_t *************************/
/*
   ERAY_STPW1            "Stop Watch Register 1"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ESWT:1;              /*  = [0] = 0x00000001 */
      unsigned int SWMS:1;              /*  = [1] = 0x00000002 */
      unsigned int EDGE:1;              /*  = [2] = 0x00000004 */
      unsigned int SSWT:1;              /*  = [3] = 0x00000008 */
      unsigned int EETP:1;              /*  = [4] = 0x00000010 */
      unsigned int EINT0:1;             /*  = [5] = 0x00000020 */
      unsigned int EINT1:1;             /*  = [6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int SCCV:6;              /*  = [8..13] = 0x00003f00 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int SMTV:14;             /*  = [16..29] = 0x3fff0000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_STPW1_t_nonv;

typedef volatile ERAY_STPW1_t_nonv ERAY_STPW1_t;

/********************** ERAY_STPW2_t *************************/
/*
   ERAY_STPW2            "Stop Watch Register 2"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SSCVA:11;            /*  = [0..10] = 0x000007ff */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int SSCVB:11;            /*  = [16..26] = 0x07ff0000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_STPW2_t_nonv;

typedef volatile ERAY_STPW2_t_nonv ERAY_STPW2_t;

/********************** ERAY_SUCC1_t *************************/
/*
   ERAY_SUCC1            "SUC Configuration Register 1"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CMD:4;               /*  = [0..3] = 0x0000000f */
      unsigned int _bit4:1;             /* 0 = [4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6] = 0x00000040 */
      unsigned int PBSY:1;              /*  = [7] = 0x00000080 */
      unsigned int TXST:1;              /*  = [8] = 0x00000100 */
      unsigned int TXSY:1;              /*  = [9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int CSA:5;               /*  = [11..15] = 0x0000f800 */
      unsigned int PTA:5;               /*  = [16..20] = 0x001f0000 */
      unsigned int WUCS:1;              /*  = [21] = 0x00200000 */
      unsigned int TSM:1;               /*  = [22] = 0x00400000 */
      unsigned int HCSE:1;              /*  = [23] = 0x00800000 */
      unsigned int MTSA:1;              /*  = [24] = 0x01000000 */
      unsigned int MTSB:1;              /*  = [25] = 0x02000000 */
      unsigned int CCHA:1;              /*  = [26] = 0x04000000 */
      unsigned int CCHB:1;              /*  = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_SUCC1_t_nonv;

typedef volatile ERAY_SUCC1_t_nonv ERAY_SUCC1_t;

/********************** ERAY_SUCC2_t *************************/
/*
   ERAY_SUCC2            "SUC Configuration Register 2"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int LT:21;               /*  = [0..20] = 0x001fffff */
      unsigned int _bit21:1;            /* 0 = [21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int LTN:4;               /*  = [24..27] = 0x0f000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_SUCC2_t_nonv;

typedef volatile ERAY_SUCC2_t_nonv ERAY_SUCC2_t;

/********************** ERAY_SUCC3_t *************************/
/*
   ERAY_SUCC3            "SUC Configuration Register 3"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int WCP:4;               /*  = [0..3] = 0x0000000f */
      unsigned int WCF:4;               /*  = [4..7] = 0x000000f0 */
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
} __attribute__((aligned(4))) ERAY_SUCC3_t_nonv;

typedef volatile ERAY_SUCC3_t_nonv ERAY_SUCC3_t;

/********************** ERAY_SWNIT_t *************************/
/*
   ERAY_SWNIT            "Symbol Window and Network Idle Time Status"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SESA:1;              /*  = [0] = 0x00000001 */
      unsigned int SBSA:1;              /*  = [1] = 0x00000002 */
      unsigned int TCSA:1;              /*  = [2] = 0x00000004 */
      unsigned int SESB:1;              /*  = [3] = 0x00000008 */
      unsigned int SBSB:1;              /*  = [4] = 0x00000010 */
      unsigned int TCSB:1;              /*  = [5] = 0x00000020 */
      unsigned int MTSA:1;              /*  = [6] = 0x00000040 */
      unsigned int MTSB:1;              /*  = [7] = 0x00000080 */
      unsigned int SENA:1;              /*  = [8] = 0x00000100 */
      unsigned int SBNA:1;              /*  = [9] = 0x00000200 */
      unsigned int SENB:1;              /*  = [10] = 0x00000400 */
      unsigned int SBNB:1;              /*  = [11] = 0x00000800 */
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
} __attribute__((aligned(4))) ERAY_SWNIT_t_nonv;

typedef volatile ERAY_SWNIT_t_nonv ERAY_SWNIT_t;

/********************** ERAY_T0C_t *************************/
/*
   ERAY_T0C              "Timer 0 Configuration"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int T0RC:1;              /*  = [0] = 0x00000001 */
      unsigned int T0MS:1;              /*  = [1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int T0CC:7;              /*  = [8..14] = 0x00007f00 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int T0MO:14;             /*  = [16..29] = 0x3fff0000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_T0C_t_nonv;

typedef volatile ERAY_T0C_t_nonv ERAY_T0C_t;

/********************** ERAY_T1C_t *************************/
/*
   ERAY_T1C              "Timer 1 Configuration"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int T1RC:1;              /*  = [0] = 0x00000001 */
      unsigned int T1MS:1;              /*  = [1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5] = 0x00000020 */
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
      unsigned int T1MC:14;             /*  = [16..29] = 0x3fff0000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_T1C_t_nonv;

typedef volatile ERAY_T1C_t_nonv ERAY_T1C_t;

/********************** ERAY_TEST1_t *************************/
/*
   ERAY_TEST1            "Test Register 1"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int WRTEN:1;             /*  = [0] = 0x00000001 */
      unsigned int ELBE:1;              /*  = [1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3] = 0x00000008 */
      unsigned int TMC:2;               /*  = [4..5] = 0x00000030 */
      unsigned int _bit6:1;             /* 0 = [6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int AOA:1;               /*  = [8] = 0x00000100 */
      unsigned int AOB:1;               /*  = [9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int RXA:1;               /*  = [16] = 0x00010000 */
      unsigned int RXB:1;               /*  = [17] = 0x00020000 */
      unsigned int TXA:1;               /*  = [18] = 0x00040000 */
      unsigned int TXB:1;               /*  = [19] = 0x00080000 */
      unsigned int TXENA:1;             /*  = [20] = 0x00100000 */
      unsigned int TXENB:1;             /*  = [21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int CERA:4;              /*  = [24..27] = 0x0f000000 */
      unsigned int CERB:4;              /*  = [28..31] = 0xf0000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_TEST1_t_nonv;

typedef volatile ERAY_TEST1_t_nonv ERAY_TEST1_t;

/********************** ERAY_TEST2_t *************************/
/*
   ERAY_TEST2            "Test Register 2"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RS:3;                /*  = [0..2] = 0x00000007 */
      unsigned int _bit3:1;             /* 0 = [3] = 0x00000008 */
      unsigned int SSEL:3;              /*  = [4..6] = 0x00000070 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int WRECC:1;             /*  = [14] = 0x00004000 */
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
} __attribute__((aligned(4))) ERAY_TEST2_t_nonv;

typedef volatile ERAY_TEST2_t_nonv ERAY_TEST2_t;

/********************** ERAY_WRHS1_t *************************/
/*
   ERAY_WRHS1            "Write Header Section 1"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int FID:11;              /*  = [0..10] = 0x000007ff */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int CYC:7;               /*  = [16..22] = 0x007f0000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int CHA:1;               /*  = [24] = 0x01000000 */
      unsigned int CHB:1;               /*  = [25] = 0x02000000 */
      unsigned int CFG:1;               /*  = [26] = 0x04000000 */
      unsigned int PPIT:1;              /*  = [27] = 0x08000000 */
      unsigned int TXM:1;               /*  = [28] = 0x10000000 */
      unsigned int MBI:1;               /*  = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_WRHS1_t_nonv;

typedef volatile ERAY_WRHS1_t_nonv ERAY_WRHS1_t;

/********************** ERAY_WRHS2_t *************************/
/*
   ERAY_WRHS2            "Write Header Section 2"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CRC:11;              /*  = [0..10] = 0x000007ff */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int PLC:7;               /*  = [16..22] = 0x007f0000 */
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
} __attribute__((aligned(4))) ERAY_WRHS2_t_nonv;

typedef volatile ERAY_WRHS2_t_nonv ERAY_WRHS2_t;

/********************** ERAY_WRHS3_t *************************/
/*
   ERAY_WRHS3            "Write Header Section 3"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DP:11;               /*  = [0..10] = 0x000007ff */
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
} __attribute__((aligned(4))) ERAY_WRHS3_t_nonv;

typedef volatile ERAY_WRHS3_t_nonv ERAY_WRHS3_t;


#endif /* _HAVE_TRICORE_ERAY_TYPES_H_ */

