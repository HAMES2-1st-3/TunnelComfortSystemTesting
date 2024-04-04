/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_BUSES_TYPES_H_
#define _HAVE_TRICORE_BUSES_TYPES_H_


/********************** LBCU_ID_t *************************/
/*
   LBCU_ID               "Module Identification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MOD_REV:8;           /*  = [0..7] = 0x000000ff */
      unsigned int MOD_TYPE:8;          /*  = [8..15] = 0x0000ff00 */
      unsigned int MOD_NUMBER:16;       /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) LBCU_ID_t_nonv;

typedef volatile LBCU_ID_t_nonv LBCU_ID_t;

/********************** LBCU_LEADDED_t *************************/
/*
   LBCU_LEADDED          "LMB Error Address Error Detection Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ADDR_ED:8;           /*  = [0..7] = 0x000000ff */
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
} __attribute__((aligned(4))) LBCU_LEADDED_t_nonv;

typedef volatile LBCU_LEADDED_t_nonv LBCU_LEADDED_t;

/********************** LBCU_LEADDR_t *************************/
/*
   LBCU_LEADDR           "LBCU LMB Error Address Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int LEADDR:32;           /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) LBCU_LEADDR_t_nonv;

typedef volatile LBCU_LEADDR_t_nonv LBCU_LEADDR_t;

/********************** LBCU_LEATT_t *************************/
/*
   LBCU_LEATT            "LBCU LMB Error Attribute Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int LEC:1;               /*  = [0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3] = 0x00000008 */
      unsigned int FPITAG:4;            /*  = [4..7] = 0x000000f0 */
      unsigned int _bit8:1;             /* 0 = [8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int NOS:1;               /*  = [14] = 0x00004000 */
      unsigned int LOC:1;               /*  = [15] = 0x00008000 */
      unsigned int ACK:3;               /*  = [16..18] = 0x00070000 */
      unsigned int UIS:1;               /*  = [19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20] = 0x00100000 */
      unsigned int SVM:1;               /*  = [21] = 0x00200000 */
      unsigned int WR:1;                /*  = [22] = 0x00400000 */
      unsigned int RD:1;                /*  = [23] = 0x00800000 */
      unsigned int TAG:3;               /*  = [24..26] = 0x07000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int OPC:4;               /*  = [28..31] = 0xf0000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) LBCU_LEATT_t_nonv;

typedef volatile LBCU_LEATT_t_nonv LBCU_LEATT_t;

/********************** LBCU_LEDATED_t *************************/
/*
   LBCU_LEDATED          "LMB Error Data Error Detection Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DATA_ED:8;           /*  = [0..7] = 0x000000ff */
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
} __attribute__((aligned(4))) LBCU_LEDATED_t_nonv;

typedef volatile LBCU_LEDATED_t_nonv LBCU_LEDATED_t;

/********************** LBCU_LEDATH_t *************************/
/*
   LBCU_LEDATH           "LBCU LMB Error Data High Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int LEDAT_63_32:32;      /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) LBCU_LEDATH_t_nonv;

typedef volatile LBCU_LEDATH_t_nonv LBCU_LEDATH_t;

/********************** LBCU_LEDATL_t *************************/
/*
   LBCU_LEDATL           "LBCU LMB Error Data Low Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int LEDAT_31_0:32;       /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) LBCU_LEDATL_t_nonv;

typedef volatile LBCU_LEDATL_t_nonv LBCU_LEDATL_t;

/********************** LBCU_LERESED_t *************************/
/*
   LBCU_LERESED          "LMB Error Response Error Detection Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RESP_ED:5;           /*  = [0..4] = 0x0000001f */
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
} __attribute__((aligned(4))) LBCU_LERESED_t_nonv;

typedef volatile LBCU_LERESED_t_nonv LBCU_LERESED_t;

/********************** LBCU_LSEABS_t *************************/
/*
   LBCU_LSEABS           "LMB Soft Error Abort Source Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int LMB_Module:16;       /*  = [0..15] = 0x0000ffff */
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
} __attribute__((aligned(4))) LBCU_LSEABS_t_nonv;

typedef volatile LBCU_LSEABS_t_nonv LBCU_LSEABS_t;

/********************** LBCU_LSEADS_t *************************/
/*
   LBCU_LSEADS           "LMB Soft Error Address Source Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int LMB_Module:16;       /*  = [0..15] = 0x0000ffff */
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
} __attribute__((aligned(4))) LBCU_LSEADS_t_nonv;

typedef volatile LBCU_LSEADS_t_nonv LBCU_LSEADS_t;

/********************** LBCU_LSERDS_t *************************/
/*
   LBCU_LSERDS           "LMB Soft Error Read Source Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int LMB_Module:16;       /*  = [0..15] = 0x0000ffff */
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
} __attribute__((aligned(4))) LBCU_LSERDS_t_nonv;

typedef volatile LBCU_LSERDS_t_nonv LBCU_LSERDS_t;

/********************** LBCU_LSERES_t *************************/
/*
   LBCU_LSERES           "LMB Soft Error Response Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int LMB_Module:16;       /*  = [0..15] = 0x0000ffff */
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
} __attribute__((aligned(4))) LBCU_LSERES_t_nonv;

typedef volatile LBCU_LSERES_t_nonv LBCU_LSERES_t;

/********************** LBCU_LSEWRS_t *************************/
/*
   LBCU_LSEWRS           "LMB Soft Error Write Source Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int LMB_Module:16;       /*  = [0..15] = 0x0000ffff */
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
} __attribute__((aligned(4))) LBCU_LSEWRS_t_nonv;

typedef volatile LBCU_LSEWRS_t_nonv LBCU_LSEWRS_t;

/********************** LBCU_SRC_t *************************/
/*
   LBCU_SRC              "LBCU Service Request Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SRPN:8;              /*  = [0..7] = 0x000000ff */
      unsigned int _bit8:1;             /* 0 = [8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9] = 0x00000200 */
      unsigned int TOS:2;               /*  = [10..11] = 0x00000c00 */
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
} __attribute__((aligned(4))) LBCU_SRC_t_nonv;

typedef volatile LBCU_SRC_t_nonv LBCU_SRC_t;

/********************** LFI_CON_t *************************/
/*
   LFI_CON               "LFI Configuration Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3] = 0x00000008 */
      unsigned int LTAG:3;              /*  = [4..6] = 0x00000070 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int FTAG:4;              /*  = [8..11] = 0x00000f00 */
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
} __attribute__((aligned(4))) LFI_CON_t_nonv;

typedef volatile LFI_CON_t_nonv LFI_CON_t;

/********************** LFI_ID_t *************************/
/*
   LFI_ID                "Module Identification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MOD_REV:8;           /*  = [0..7] = 0x000000ff */
      unsigned int MOD_TYPE:8;          /*  = [8..15] = 0x0000ff00 */
      unsigned int MOD_NUMBER:16;       /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) LFI_ID_t_nonv;

typedef volatile LFI_ID_t_nonv LFI_ID_t;

/********************** SBCU_CON_t *************************/
/*
   SBCU_CON              "SBCU Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TOUT:16;             /*  = [0..15] = 0x0000ffff */
      unsigned int DBG:1;               /*  = [16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18] = 0x00040000 */
      unsigned int SPE:1;               /*  = [19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int SPC:8;               /*  = [24..31] = 0xff000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) SBCU_CON_t_nonv;

typedef volatile SBCU_CON_t_nonv SBCU_CON_t;

/********************** SBCU_DBADRT_t *************************/
/*
   SBCU_DBADRT           "SBCU Debug Trapped Address Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int FPIADR:32;           /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) SBCU_DBADRT_t_nonv;

typedef volatile SBCU_DBADRT_t_nonv SBCU_DBADRT_t;

/********************** SBCU_DBBOS_t *************************/
/*
   SBCU_DBBOS            "SBCU Debug Bus Operation Signals Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int OPC:4;               /*  = [0..3] = 0x0000000f */
      unsigned int SVM:1;               /*  = [4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int WR:1;                /*  = [8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int RD:1;                /*  = [12] = 0x00001000 */
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
} __attribute__((aligned(4))) SBCU_DBBOS_t_nonv;

typedef volatile SBCU_DBBOS_t_nonv SBCU_DBBOS_t;

/********************** SBCU_DBBOST_t *************************/
/*
   SBCU_DBBOST           "SBCU Debug Trapped Bus Operation Signals Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int FPIOPC:4;            /*  = [0..3] = 0x0000000f */
      unsigned int FPISVM:1;            /*  = [4] = 0x00000010 */
      unsigned int FPIACK:2;            /*  = [5..6] = 0x00000060 */
      unsigned int FPIRDY:1;            /*  = [7] = 0x00000080 */
      unsigned int FPIWR:1;             /*  = [8] = 0x00000100 */
      unsigned int FPIRST:2;            /*  = [9..10] = 0x00000600 */
      unsigned int FPIOPS:1;            /*  = [11] = 0x00000800 */
      unsigned int FPIRD:1;             /*  = [12] = 0x00001000 */
      unsigned int FPIABORT:1;          /*  = [13] = 0x00002000 */
      unsigned int FPITOUT:1;           /*  = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int FPITAG:4;            /*  = [16..19] = 0x000f0000 */
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
} __attribute__((aligned(4))) SBCU_DBBOST_t_nonv;

typedef volatile SBCU_DBBOST_t_nonv SBCU_DBBOST_t;

/********************** SBCU_DBCNTL_t *************************/
/*
   SBCU_DBCNTL           "SBCU Debug Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int EO:1;                /*  = [0] = 0x00000001 */
      unsigned int OA:1;                /*  = [1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3] = 0x00000008 */
      unsigned int RA:1;                /*  = [4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int CONCOM0:1;           /*  = [12] = 0x00001000 */
      unsigned int CONCOM1:1;           /*  = [13] = 0x00002000 */
      unsigned int CONCOM2:1;           /*  = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int ONG:1;               /*  = [16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int ONA1:2;              /*  = [20..21] = 0x00300000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int ONA2:2;              /*  = [24..25] = 0x03000000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int ONBOS0:1;            /*  = [28] = 0x10000000 */
      unsigned int ONBOS1:1;            /*  = [29] = 0x20000000 */
      unsigned int ONBOS2:1;            /*  = [30] = 0x40000000 */
      unsigned int ONBOS3:1;            /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) SBCU_DBCNTL_t_nonv;

typedef volatile SBCU_DBCNTL_t_nonv SBCU_DBCNTL_t;

/********************** SBCU_DBDAT_t *************************/
/*
   SBCU_DBDAT            "SBCU Debug Data Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int FPIDATA:32;          /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) SBCU_DBDAT_t_nonv;

typedef volatile SBCU_DBDAT_t_nonv SBCU_DBDAT_t;

/********************** SBCU_DBGNTT_t *************************/
/*
   SBCU_DBGNTT           "SBCU Debug Trapped Master Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DMAH:1;              /*  = [0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2] = 0x00000004 */
      unsigned int PCP:1;               /*  = [3] = 0x00000008 */
      unsigned int DMAM:1;              /*  = [4] = 0x00000010 */
      unsigned int LFI:1;               /*  = [5] = 0x00000020 */
      unsigned int DMAL:1;              /*  = [6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int CHNR00:1;            /*  = [16] = 0x00010000 */
      unsigned int CHNR01:1;            /*  = [17] = 0x00020000 */
      unsigned int CHNR02:1;            /*  = [18] = 0x00040000 */
      unsigned int CHNR03:1;            /*  = [19] = 0x00080000 */
      unsigned int CHNR04:1;            /*  = [20] = 0x00100000 */
      unsigned int CHNR05:1;            /*  = [21] = 0x00200000 */
      unsigned int CHNR06:1;            /*  = [22] = 0x00400000 */
      unsigned int CHNR07:1;            /*  = [23] = 0x00800000 */
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
} __attribute__((aligned(4))) SBCU_DBGNTT_t_nonv;

typedef volatile SBCU_DBGNTT_t_nonv SBCU_DBGNTT_t;

/********************** SBCU_DBGRNT_t *************************/
/*
   SBCU_DBGRNT           "SBCU Debug Grant Mask Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DMAH:1;              /*  = [0] = 0x00000001 */
      unsigned int ONE:2;               /*  = [1..2] = 0x00000006 */
      unsigned int PCP:1;               /*  = [3] = 0x00000008 */
      unsigned int DMAM:1;              /*  = [4] = 0x00000010 */
      unsigned int LFI:1;               /*  = [5] = 0x00000020 */
      unsigned int DMAL:1;              /*  = [6] = 0x00000040 */
      unsigned int ONES:9;              /*  = [7..15] = 0x0000ff80 */
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
} __attribute__((aligned(4))) SBCU_DBGRNT_t_nonv;

typedef volatile SBCU_DBGRNT_t_nonv SBCU_DBGRNT_t;

/********************** SBCU_EADD_t *************************/
/*
   SBCU_EADD             "SBCU Error Address Capture Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int FPIADR:32;           /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) SBCU_EADD_t_nonv;

typedef volatile SBCU_EADD_t_nonv SBCU_EADD_t;

/********************** SBCU_ECON_t *************************/
/*
   SBCU_ECON             "SBCU Error Control Capture Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ERRCNT:16;           /*  = [0..15] = 0x0000ffff */
      unsigned int TOUT:1;              /*  = [16] = 0x00010000 */
      unsigned int RDY:1;               /*  = [17] = 0x00020000 */
      unsigned int ABT:1;               /*  = [18] = 0x00040000 */
      unsigned int ACK:2;               /*  = [19..20] = 0x00180000 */
      unsigned int SVM:1;               /*  = [21] = 0x00200000 */
      unsigned int WRN:1;               /*  = [22] = 0x00400000 */
      unsigned int RDN:1;               /*  = [23] = 0x00800000 */
      unsigned int TAG:4;               /*  = [24..27] = 0x0f000000 */
      unsigned int OPC:4;               /*  = [28..31] = 0xf0000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) SBCU_ECON_t_nonv;

typedef volatile SBCU_ECON_t_nonv SBCU_ECON_t;

/********************** SBCU_EDAT_t *************************/
/*
   SBCU_EDAT             "SBCU Error Data Capture Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int FPIDAT:32;           /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) SBCU_EDAT_t_nonv;

typedef volatile SBCU_EDAT_t_nonv SBCU_EDAT_t;

/********************** SBCU_ID_t *************************/
/*
   SBCU_ID               "Module Identification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MOD_REV:8;           /*  = [0..7] = 0x000000ff */
      unsigned int MOD_NUMBER:8;        /*  = [8..15] = 0x0000ff00 */
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
} __attribute__((aligned(4))) SBCU_ID_t_nonv;

typedef volatile SBCU_ID_t_nonv SBCU_ID_t;

/********************** SBCU_SRC_t *************************/
/*
   SBCU_SRC              "SBCU Service Request Control Register"
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
} __attribute__((aligned(4))) SBCU_SRC_t_nonv;

typedef volatile SBCU_SRC_t_nonv SBCU_SRC_t;


#endif /* _HAVE_TRICORE_BUSES_TYPES_H_ */

