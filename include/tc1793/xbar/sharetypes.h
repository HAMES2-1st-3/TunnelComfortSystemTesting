/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_XBAR_SHARETYPES_H_
#define _HAVE_TRICORE_XBAR_SHARETYPES_H_


/********************** XBAR_ARBCONm_t *************************/
/*
   XBAR_ARBCON0          "Arbiter Control Register 0"
   XBAR_ARBCON1          "Arbiter Control Register 1"
   XBAR_ARBCON2          "Arbiter Control Register 2"
   XBAR_ARBCON3          "Arbiter Control Register 3"
   XBAR_ARBCON4          "Arbiter Control Register 4"
   XBAR_ARBCON5          "Arbiter Control Register 5"
   XBAR_ARBCON6          "Arbiter Control Register 6"
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
} __attribute__((aligned(4))) XBAR_ARBCONm_t_nonv;

typedef volatile XBAR_ARBCONm_t_nonv XBAR_ARBCONm_t;

/********************** XBAR_DBADDm_t *************************/
/*
   XBAR_DBADD3           "Debug Mask Address Register 3"
   XBAR_DBADD4           "Debug Mask Address Register 4"
   XBAR_DBADD6           "Debug Mask Address Register 6"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1] = 0x00000002 */
      unsigned int ADDRESS:29;          /*  = [2..30] = 0x7ffffffc */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) XBAR_DBADDm_t_nonv;

typedef volatile XBAR_DBADDm_t_nonv XBAR_DBADDm_t;

/********************** XBAR_DBCONm_t *************************/
/*
   XBAR_DBCON0           "Debug Control Register 0"
   XBAR_DBCON1           "Debug Control Register 1"
   XBAR_DBCON2           "Debug Control Register 2"
   XBAR_DBCON3           "Debug Control Register 3"
   XBAR_DBCON4           "Debug Control Register 4"
   XBAR_DBCON5           "Debug Control Register 5"
   XBAR_DBCON6           "Debug Control Register 6"
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
} __attribute__((aligned(4))) XBAR_DBCONm_t_nonv;

typedef volatile XBAR_DBCONm_t_nonv XBAR_DBCONm_t;

/********************** XBAR_DBMADDm_t *************************/
/*
   XBAR_DBMADD3          "Debug Mask Address Register 3"
   XBAR_DBMADD4          "Debug Mask Address Register 4"
   XBAR_DBMADD6          "Debug Mask Address Register 6"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1] = 0x00000002 */
      unsigned int ADDRESS:29;          /*  = [2..30] = 0x7ffffffc */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) XBAR_DBMADDm_t_nonv;

typedef volatile XBAR_DBMADDm_t_nonv XBAR_DBMADDm_t;

/********************** XBAR_ERRADDRm_t *************************/
/*
   XBAR_ERRADDR0         "Error/Debug Address Capture Register 0"
   XBAR_ERRADDR1         "Error/Debug Address Capture Register 1"
   XBAR_ERRADDR2         "Error/Debug Address Capture Register 2"
   XBAR_ERRADDR3         "Error/Debug Address Capture Register 3"
   XBAR_ERRADDR4         "Error/Debug Address Capture Register 4"
   XBAR_ERRADDR5         "Error/Debug Address Capture Register 5"
   XBAR_ERRADDR6         "Error/Debug Address Capture Register 6"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ADDR:32;             /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) XBAR_ERRADDRm_t_nonv;

typedef volatile XBAR_ERRADDRm_t_nonv XBAR_ERRADDRm_t;

/********************** XBAR_ERRm_t *************************/
/*
   XBAR_ERR0             "Error/Debug Capture Register 0"
   XBAR_ERR1             "Error/Debug Capture Register 1"
   XBAR_ERR2             "Error/Debug Capture Register 2"
   XBAR_ERR3             "Error/Debug Capture Register 3"
   XBAR_ERR4             "Error/Debug Capture Register 4"
   XBAR_ERR5             "Error/Debug Capture Register 5"
   XBAR_ERR6             "Error/Debug Capture Register 6"
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
} __attribute__((aligned(4))) XBAR_ERRm_t_nonv;

typedef volatile XBAR_ERRm_t_nonv XBAR_ERRm_t;

/********************** XBAR_PRIOLm_t *************************/
/*
   XBAR_PRIOL3           "Arbiter Priority Register 3"
   XBAR_PRIOL4           "Arbiter Priority Register 4"
   XBAR_PRIOL5           "Arbiter Priority Register 5"
   XBAR_PRIOL6           "Arbiter Priority Register 6"
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
} __attribute__((aligned(4))) XBAR_PRIOLm_t_nonv;

typedef volatile XBAR_PRIOLm_t_nonv XBAR_PRIOLm_t;


#endif /* _HAVE_TRICORE_XBAR_SHARETYPES_H_ */

