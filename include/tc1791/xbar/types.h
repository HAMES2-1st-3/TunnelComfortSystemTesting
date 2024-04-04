/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_XBAR_TYPES_H_
#define _HAVE_TRICORE_XBAR_TYPES_H_


/********************** XBAR_ARBCOND_t *************************/
/*
   XBAR_ARBCOND          "Arbiter Control Register D"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int PRERREN:1;           /*  = [0] = 0x00000001 */
      unsigned int SCERREN:1;           /*  = [1] = 0x00000002 */
      unsigned int SETPRINT:1;          /*  = [2] = 0x00000004 */
      unsigned int SETSCINT:1;          /*  = [3] = 0x00000008 */
      unsigned int INTACK:1;            /*  = [4] = 0x00000010 */
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
      unsigned int SMEN:1;              /*  = [19] = 0x00080000 */
      unsigned int SPC:12;              /*  = [20..31] = 0xfff00000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) XBAR_ARBCOND_t_nonv;

typedef volatile XBAR_ARBCOND_t_nonv XBAR_ARBCOND_t;

/********************** XBAR_DBADD0_t *************************/
/*
   XBAR_DBADD0           "Debug Mask Address Register 0"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1] = 0x00000002 */
      unsigned int ADDRESS:28;          /*  = [2..29] = 0x3ffffffc */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) XBAR_DBADD0_t_nonv;

typedef volatile XBAR_DBADD0_t_nonv XBAR_DBADD0_t;

/********************** XBAR_DBADD1_t *************************/
/*
   XBAR_DBADD1           "Debug Mask Address Register 1"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1] = 0x00000002 */
      unsigned int ADDRESS:20;          /*  = [2..21] = 0x003ffffc */
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
} __attribute__((aligned(4))) XBAR_DBADD1_t_nonv;

typedef volatile XBAR_DBADD1_t_nonv XBAR_DBADD1_t;

/********************** XBAR_DBADD2_t *************************/
/*
   XBAR_DBADD2           "Debug Mask Address Register 2"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1] = 0x00000002 */
      unsigned int ADDRESS:20;          /*  = [2..21] = 0x003ffffc */
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
} __attribute__((aligned(4))) XBAR_DBADD2_t_nonv;

typedef volatile XBAR_DBADD2_t_nonv XBAR_DBADD2_t;

/********************** XBAR_DBADD5_t *************************/
/*
   XBAR_DBADD5           "Debug Mask Address Register 5"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1] = 0x00000002 */
      unsigned int ADDRESS:28;          /*  = [2..29] = 0x3ffffffc */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) XBAR_DBADD5_t_nonv;

typedef volatile XBAR_DBADD5_t_nonv XBAR_DBADD5_t;

/********************** XBAR_DBADDD_t *************************/
/*
   XBAR_DBADDD           "Debug Address Register D"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1] = 0x00000002 */
      unsigned int UPPER:30;            /*  = [2..31] = 0xfffffffc */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) XBAR_DBADDD_t_nonv;

typedef volatile XBAR_DBADDD_t_nonv XBAR_DBADDD_t;

/********************** XBAR_DBCOND_t *************************/
/*
   XBAR_DBCOND           "Debug Control Register D"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DBEN:1;              /*  = [0] = 0x00000001 */
      unsigned int DBSAT:1;             /*  = [1] = 0x00000002 */
      unsigned int REARM:1;             /*  = [2] = 0x00000004 */
      unsigned int SETDBEVT:1;          /*  = [3] = 0x00000008 */
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
      unsigned int RDEN:1;              /*  = [16] = 0x00010000 */
      unsigned int WREN:1;              /*  = [17] = 0x00020000 */
      unsigned int SVMEN:1;             /*  = [18] = 0x00040000 */
      unsigned int ADDEN:1;             /*  = [19] = 0x00080000 */
      unsigned int ERREN:1;             /*  = [20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int MASEN:1;             /*  = [23] = 0x00800000 */
      unsigned int MASTER:4;            /*  = [24..27] = 0x0f000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) XBAR_DBCOND_t_nonv;

typedef volatile XBAR_DBCOND_t_nonv XBAR_DBCOND_t;

/********************** XBAR_DBMADD0_t *************************/
/*
   XBAR_DBMADD0          "Debug Mask Address Register 0"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1] = 0x00000002 */
      unsigned int ADDRESS:28;          /*  = [2..29] = 0x3ffffffc */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) XBAR_DBMADD0_t_nonv;

typedef volatile XBAR_DBMADD0_t_nonv XBAR_DBMADD0_t;

/********************** XBAR_DBMADD1_t *************************/
/*
   XBAR_DBMADD1          "Debug Mask Address Register 1"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1] = 0x00000002 */
      unsigned int ADDRESS:20;          /*  = [2..21] = 0x003ffffc */
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
} __attribute__((aligned(4))) XBAR_DBMADD1_t_nonv;

typedef volatile XBAR_DBMADD1_t_nonv XBAR_DBMADD1_t;

/********************** XBAR_DBMADD2_t *************************/
/*
   XBAR_DBMADD2          "Debug Mask Address Register 2"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1] = 0x00000002 */
      unsigned int ADDRESS:20;          /*  = [2..21] = 0x003ffffc */
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
} __attribute__((aligned(4))) XBAR_DBMADD2_t_nonv;

typedef volatile XBAR_DBMADD2_t_nonv XBAR_DBMADD2_t;

/********************** XBAR_DBMADD5_t *************************/
/*
   XBAR_DBMADD5          "Debug Mask Address Register 5"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1] = 0x00000002 */
      unsigned int ADDRESS:28;          /*  = [2..29] = 0x3ffffffc */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) XBAR_DBMADD5_t_nonv;

typedef volatile XBAR_DBMADD5_t_nonv XBAR_DBMADD5_t;

/********************** XBAR_DBMADDD_t *************************/
/*
   XBAR_DBMADDD          "Debug Mask Address Register D"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1] = 0x00000002 */
      unsigned int ADDRESS:30;          /*  = [2..31] = 0xfffffffc */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) XBAR_DBMADDD_t_nonv;

typedef volatile XBAR_DBMADDD_t_nonv XBAR_DBMADDD_t;

/********************** XBAR_DBSAT_t *************************/
/*
   XBAR_DBSAT            "Debug Trigger Event Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SCI0:1;              /*  = [0] = 0x00000001 */
      unsigned int SCI1:1;              /*  = [1] = 0x00000002 */
      unsigned int SCI2:1;              /*  = [2] = 0x00000004 */
      unsigned int SCI3:1;              /*  = [3] = 0x00000008 */
      unsigned int SCI4:1;              /*  = [4] = 0x00000010 */
      unsigned int SCI5:1;              /*  = [5] = 0x00000020 */
      unsigned int SCI6:1;              /*  = [6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int SCID:1;              /*  = [15] = 0x00008000 */
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
} __attribute__((aligned(4))) XBAR_DBSAT_t_nonv;

typedef volatile XBAR_DBSAT_t_nonv XBAR_DBSAT_t;

/********************** XBAR_ERRADDRD_t *************************/
/*
   XBAR_ERRADDRD         "Error/Debug Address Capture Register D"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ADDR:32;             /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) XBAR_ERRADDRD_t_nonv;

typedef volatile XBAR_ERRADDRD_t_nonv XBAR_ERRADDRD_t;

/********************** XBAR_ERRD_t *************************/
/*
   XBAR_ERRD             "Error/Debug Capture Register D"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RD:1;                /*  = [0] = 0x00000001 */
      unsigned int WR:1;                /*  = [1] = 0x00000002 */
      unsigned int SVM:1;               /*  = [2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3] = 0x00000008 */
      unsigned int OPC:4;               /*  = [4..7] = 0x000000f0 */
      unsigned int TR_ID:6;             /*  = [8..13] = 0x00003f00 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int ADDR_ECC:8;          /*  = [16..23] = 0x00ff0000 */
      unsigned int MCI_SBS:8;           /*  = [24..31] = 0xff000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) XBAR_ERRD_t_nonv;

typedef volatile XBAR_ERRD_t_nonv XBAR_ERRD_t;

/********************** XBAR_EXTCON2_t *************************/
/*
   XBAR_EXTCON2          "External Control Register 2"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2] = 0x00000004 */
      unsigned int WFWD:1;              /*  = [3] = 0x00000008 */
      unsigned int FREQDISS:1;          /*  = [4] = 0x00000010 */
      unsigned int FFREQS:1;            /*  = [5] = 0x00000020 */
      unsigned int FREQDISF:1;          /*  = [6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8] = 0x00000100 */
      unsigned int NODELTR:1;           /*  = [9] = 0x00000200 */
      unsigned int NORMW:1;             /*  = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int MAX_WS:7;            /*  = [13..19] = 0x000fe000 */
      unsigned int RETRY_CNT:4;         /*  = [20..23] = 0x00f00000 */
      unsigned int NOPDIS:1;            /*  = [24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) XBAR_EXTCON2_t_nonv;

typedef volatile XBAR_EXTCON2_t_nonv XBAR_EXTCON2_t;

/********************** XBAR_ID_t *************************/
/*
   XBAR_ID               "Module Identification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MOD_REV:8;           /*  = [0..7] = 0x000000ff */
      unsigned int MOD_TYPE:8;          /*  = [8..15] = 0x0000ff00 */
      unsigned int MOD_NUMBER:16;       /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) XBAR_ID_t_nonv;

typedef volatile XBAR_ID_t_nonv XBAR_ID_t;

/********************** XBAR_IDINTEN_t *************************/
/*
   XBAR_IDINTEN          "Transaction ID Interrupt Enable Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ENSCI0:1;            /*  = [0] = 0x00000001 */
      unsigned int ENSCI1:1;            /*  = [1] = 0x00000002 */
      unsigned int ENSCI2:1;            /*  = [2] = 0x00000004 */
      unsigned int ENSCI3:1;            /*  = [3] = 0x00000008 */
      unsigned int ENSCI4:1;            /*  = [4] = 0x00000010 */
      unsigned int ENSCI5:1;            /*  = [5] = 0x00000020 */
      unsigned int ENSCI6:1;            /*  = [6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int ENSCID:1;            /*  = [15] = 0x00008000 */
      unsigned int ENMCI16:1;           /*  = [16] = 0x00010000 */
      unsigned int ENMCI17:1;           /*  = [17] = 0x00020000 */
      unsigned int ENMCI18:1;           /*  = [18] = 0x00040000 */
      unsigned int ENMCI19:1;           /*  = [19] = 0x00080000 */
      unsigned int ENMCI20:1;           /*  = [20] = 0x00100000 */
      unsigned int ENMCI21:1;           /*  = [21] = 0x00200000 */
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
} __attribute__((aligned(4))) XBAR_IDINTEN_t_nonv;

typedef volatile XBAR_IDINTEN_t_nonv XBAR_IDINTEN_t;

/********************** XBAR_IDINTSAT_t *************************/
/*
   XBAR_IDINTSAT         "Transaction ID Interrupt Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int IDSCI0:1;            /*  = [0] = 0x00000001 */
      unsigned int IDSCI1:1;            /*  = [1] = 0x00000002 */
      unsigned int IDSCI2:1;            /*  = [2] = 0x00000004 */
      unsigned int IDSCI3:1;            /*  = [3] = 0x00000008 */
      unsigned int IDSCI4:1;            /*  = [4] = 0x00000010 */
      unsigned int IDSCI5:1;            /*  = [5] = 0x00000020 */
      unsigned int IDSCI6:1;            /*  = [6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int IDSCID:1;            /*  = [15] = 0x00008000 */
      unsigned int IDMCI16:1;           /*  = [16] = 0x00010000 */
      unsigned int IDMCI17:1;           /*  = [17] = 0x00020000 */
      unsigned int IDMCI18:1;           /*  = [18] = 0x00040000 */
      unsigned int IDMCI19:1;           /*  = [19] = 0x00080000 */
      unsigned int IDMCI20:1;           /*  = [20] = 0x00100000 */
      unsigned int IDMCI21:1;           /*  = [21] = 0x00200000 */
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
} __attribute__((aligned(4))) XBAR_IDINTSAT_t_nonv;

typedef volatile XBAR_IDINTSAT_t_nonv XBAR_IDINTSAT_t;

/********************** XBAR_INTSAT_t *************************/
/*
   XBAR_INTSAT           "Arbiter Interrupt Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SCSCI0:1;            /*  = [0] = 0x00000001 */
      unsigned int SCSCI1:1;            /*  = [1] = 0x00000002 */
      unsigned int SCSCI2:1;            /*  = [2] = 0x00000004 */
      unsigned int SCSCI3:1;            /*  = [3] = 0x00000008 */
      unsigned int SCSCI4:1;            /*  = [4] = 0x00000010 */
      unsigned int SCSCI5:1;            /*  = [5] = 0x00000020 */
      unsigned int SCSCI6:1;            /*  = [6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int SCSCID:1;            /*  = [15] = 0x00008000 */
      unsigned int PRSCI16:1;           /*  = [16] = 0x00010000 */
      unsigned int PRSCI17:1;           /*  = [17] = 0x00020000 */
      unsigned int PRSCI18:1;           /*  = [18] = 0x00040000 */
      unsigned int PRSCI19:1;           /*  = [19] = 0x00080000 */
      unsigned int PRSCI20:1;           /*  = [20] = 0x00100000 */
      unsigned int PRSCI21:1;           /*  = [21] = 0x00200000 */
      unsigned int PRSCI22:1;           /*  = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int PRSCID:1;            /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) XBAR_INTSAT_t_nonv;

typedef volatile XBAR_INTSAT_t_nonv XBAR_INTSAT_t;

/********************** XBAR_PRIOL0_t *************************/
/*
   XBAR_PRIOL0           "Arbiter Priority Register 0"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MASTER0:4;           /*  = [0..3] = 0x0000000f */
      unsigned int MASTER1:4;           /*  = [4..7] = 0x000000f0 */
      unsigned int MASTER2:4;           /*  = [8..11] = 0x00000f00 */
      unsigned int MASTER3:4;           /*  = [12..15] = 0x0000f000 */
      unsigned int MASTER4:4;           /*  = [16..19] = 0x000f0000 */
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
} __attribute__((aligned(4))) XBAR_PRIOL0_t_nonv;

typedef volatile XBAR_PRIOL0_t_nonv XBAR_PRIOL0_t;

/********************** XBAR_PRIOL1_t *************************/
/*
   XBAR_PRIOL1           "Arbiter Priority Register 1"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MASTER0:4;           /*  = [0..3] = 0x0000000f */
      unsigned int MASTER1:4;           /*  = [4..7] = 0x000000f0 */
      unsigned int MASTER2:4;           /*  = [8..11] = 0x00000f00 */
      unsigned int MASTER3:4;           /*  = [12..15] = 0x0000f000 */
      unsigned int _bit16:1;            /* 0 = [16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int MASTER5:4;           /*  = [20..23] = 0x00f00000 */
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
} __attribute__((aligned(4))) XBAR_PRIOL1_t_nonv;

typedef volatile XBAR_PRIOL1_t_nonv XBAR_PRIOL1_t;

/********************** XBAR_PRIOL2_t *************************/
/*
   XBAR_PRIOL2           "Arbiter Priority Register 2"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1] = 0x00000002 */
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
      unsigned int MASTER4:4;           /*  = [16..19] = 0x000f0000 */
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
} __attribute__((aligned(4))) XBAR_PRIOL2_t_nonv;

typedef volatile XBAR_PRIOL2_t_nonv XBAR_PRIOL2_t;

/********************** XBAR_PRIOLD_t *************************/
/*
   XBAR_PRIOLD           "Arbiter Priority Register D"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MASTER0:4;           /*  = [0..3] = 0x0000000f */
      unsigned int MASTER1:4;           /*  = [4..7] = 0x000000f0 */
      unsigned int MASTER2:4;           /*  = [8..11] = 0x00000f00 */
      unsigned int MASTER3:4;           /*  = [12..15] = 0x0000f000 */
      unsigned int MASTER4:4;           /*  = [16..19] = 0x000f0000 */
      unsigned int MASTER5:4;           /*  = [20..23] = 0x00f00000 */
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
} __attribute__((aligned(4))) XBAR_PRIOLD_t_nonv;

typedef volatile XBAR_PRIOLD_t_nonv XBAR_PRIOLD_t;

/********************** XBAR_SRC_t *************************/
/*
   XBAR_SRC              "XBar_SRI Service Request Control Register"
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
} __attribute__((aligned(4))) XBAR_SRC_t_nonv;

typedef volatile XBAR_SRC_t_nonv XBAR_SRC_t;


#endif /* _HAVE_TRICORE_XBAR_TYPES_H_ */

