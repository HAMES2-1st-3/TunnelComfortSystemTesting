/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_RBCU_TYPES_H_
#define _HAVE_TRICORE_RBCU_TYPES_H_


/********************** RBCU_CON_t *************************/
/*
   RBCU_CON              "RBCU Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TOUT:16;             /*  = [0..15] = 0x0000ffff */
      unsigned int DBG:1;               /*  = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int PSE:1;               /*  = [18..18] = 0x00040000 */
      unsigned int SPE:1;               /*  = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int SPC:8;               /*  = [24..31] = 0xff000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) RBCU_CON_t_nonv;

typedef volatile RBCU_CON_t_nonv RBCU_CON_t;

/********************** RBCU_DBADRT_t *************************/
/*
   RBCU_DBADRT           "RBCU Debug Trapped Address Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int FPIADR:32;           /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) RBCU_DBADRT_t_nonv;

typedef volatile RBCU_DBADRT_t_nonv RBCU_DBADRT_t;

/********************** RBCU_DBBOS_t *************************/
/*
   RBCU_DBBOS            "RBCU Debug Bus Operation Signals Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int OPC:4;               /*  = [0..3] = 0x0000000f */
      unsigned int SVM:1;               /*  = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int WR:1;                /*  = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int RD:1;                /*  = [12..12] = 0x00001000 */
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
} __attribute__((aligned(4))) RBCU_DBBOS_t_nonv;

typedef volatile RBCU_DBBOS_t_nonv RBCU_DBBOS_t;

/********************** RBCU_DBBOST_t *************************/
/*
   RBCU_DBBOST           "RBCU Debug Trapped Bus Operation Signals Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int FPIOPC:4;            /*  = [0..3] = 0x0000000f */
      unsigned int FPISVM:1;            /*  = [4..4] = 0x00000010 */
      unsigned int FPIACK:2;            /*  = [5..6] = 0x00000060 */
      unsigned int FPIRDY:1;            /*  = [7..7] = 0x00000080 */
      unsigned int FPIWR:1;             /*  = [8..8] = 0x00000100 */
      unsigned int FPIRST:2;            /*  = [9..10] = 0x00000600 */
      unsigned int FPIOPS:1;            /*  = [11..11] = 0x00000800 */
      unsigned int FPIRD:1;             /*  = [12..12] = 0x00001000 */
      unsigned int FPIABORT:1;          /*  = [13..13] = 0x00002000 */
      unsigned int FPITOUT:1;           /*  = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int FPITAG:4;            /*  = [16..19] = 0x000f0000 */
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
} __attribute__((aligned(4))) RBCU_DBBOST_t_nonv;

typedef volatile RBCU_DBBOST_t_nonv RBCU_DBBOST_t;

/********************** RBCU_DBCNTL_t *************************/
/*
   RBCU_DBCNTL           "RBCU Debug Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int EO:1;                /*  = [0..0] = 0x00000001 */
      unsigned int OA:1;                /*  = [1..1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int RA:1;                /*  = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int CONCOM0:1;           /*  = [12..12] = 0x00001000 */
      unsigned int CONCOM1:1;           /*  = [13..13] = 0x00002000 */
      unsigned int CONCOM2:1;           /*  = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int ONG:1;               /*  = [16..16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int ONA1:2;              /*  = [20..21] = 0x00300000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int ONA2:2;              /*  = [24..25] = 0x03000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int ONBOS0:1;            /*  = [28..28] = 0x10000000 */
      unsigned int ONBOS1:1;            /*  = [29..29] = 0x20000000 */
      unsigned int ONBOS2:1;            /*  = [30..30] = 0x40000000 */
      unsigned int ONBOS3:1;            /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) RBCU_DBCNTL_t_nonv;

typedef volatile RBCU_DBCNTL_t_nonv RBCU_DBCNTL_t;

/********************** RBCU_DBGNTT_t *************************/
/*
   RBCU_DBGNTT           "RBCU Debug Trapped Master Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0..0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1..1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int DMAH:1;              /*  = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int DMAL:1;              /*  = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int CHNR00:1;            /*  = [16..16] = 0x00010000 */
      unsigned int CHNR01:1;            /*  = [17..17] = 0x00020000 */
      unsigned int CHNR02:1;            /*  = [18..18] = 0x00040000 */
      unsigned int CHNR03:1;            /*  = [19..19] = 0x00080000 */
      unsigned int CHNR04:1;            /*  = [20..20] = 0x00100000 */
      unsigned int CHNR05:1;            /*  = [21..21] = 0x00200000 */
      unsigned int CHNR06:1;            /*  = [22..22] = 0x00400000 */
      unsigned int CHNR07:1;            /*  = [23..23] = 0x00800000 */
      unsigned int CHNR10:1;            /*  = [24..24] = 0x01000000 */
      unsigned int CHNR11:1;            /*  = [25..25] = 0x02000000 */
      unsigned int CHNR12:1;            /*  = [26..26] = 0x04000000 */
      unsigned int CHNR13:1;            /*  = [27..27] = 0x08000000 */
      unsigned int CHNR14:1;            /*  = [28..28] = 0x10000000 */
      unsigned int CHNR15:1;            /*  = [29..29] = 0x20000000 */
      unsigned int CHNR16:1;            /*  = [30..30] = 0x40000000 */
      unsigned int CHNR17:1;            /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) RBCU_DBGNTT_t_nonv;

typedef volatile RBCU_DBGNTT_t_nonv RBCU_DBGNTT_t;

/********************** RBCU_DBGRNT_t *************************/
/*
   RBCU_DBGRNT           "RBCU Debug Grant Mask Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0..0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1..1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int DMAH:1;              /*  = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int DMAL:1;              /*  = [6..6] = 0x00000040 */
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
} __attribute__((aligned(4))) RBCU_DBGRNT_t_nonv;

typedef volatile RBCU_DBGRNT_t_nonv RBCU_DBGRNT_t;

/********************** RBCU_EADD_t *************************/
/*
   RBCU_EADD             "RBCU Error Address Capture Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int FPIADR:32;           /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) RBCU_EADD_t_nonv;

typedef volatile RBCU_EADD_t_nonv RBCU_EADD_t;

/********************** RBCU_ECON_t *************************/
/*
   RBCU_ECON             "RBCU Error Control Capture Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ERRCNT:16;           /*  = [0..15] = 0x0000ffff */
      unsigned int TOUT:1;              /*  = [16..16] = 0x00010000 */
      unsigned int RDY:1;               /*  = [17..17] = 0x00020000 */
      unsigned int ABT:1;               /*  = [18..18] = 0x00040000 */
      unsigned int ACK:2;               /*  = [19..20] = 0x00180000 */
      unsigned int SVM:1;               /*  = [21..21] = 0x00200000 */
      unsigned int WRN:1;               /*  = [22..22] = 0x00400000 */
      unsigned int RDN:1;               /*  = [23..23] = 0x00800000 */
      unsigned int TAG:4;               /*  = [24..27] = 0x0f000000 */
      unsigned int OPC:4;               /*  = [28..31] = 0xf0000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) RBCU_ECON_t_nonv;

typedef volatile RBCU_ECON_t_nonv RBCU_ECON_t;

/********************** RBCU_EDAT_t *************************/
/*
   RBCU_EDAT             "RBCU Error Data Capture Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int FPIDAT:32;           /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) RBCU_EDAT_t_nonv;

typedef volatile RBCU_EDAT_t_nonv RBCU_EDAT_t;

/********************** RBCU_ID_t *************************/
/*
   RBCU_ID               "RBCU Module Identification Register"
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
} __attribute__((aligned(4))) RBCU_ID_t_nonv;

typedef volatile RBCU_ID_t_nonv RBCU_ID_t;

/********************** RBCU_SRC_t *************************/
/*
   RBCU_SRC              "RBCU Service Request Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SRPN:8;              /*  = [0..7] = 0x000000ff */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int TOS:2;               /*  = [10..11] = 0x00000c00 */
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
} __attribute__((aligned(4))) RBCU_SRC_t_nonv;

typedef volatile RBCU_SRC_t_nonv RBCU_SRC_t;


#endif /* _HAVE_TRICORE_RBCU_TYPES_H_ */

