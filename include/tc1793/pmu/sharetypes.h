/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_PMU_SHARETYPES_H_
#define _HAVE_TRICORE_PMU_SHARETYPES_H_


/********************** FLASHn_ECCR_t *************************/
/*
   FLASH0_ECCR           "ECC Read Register"
   FLASH1_ECCR           "ECC Read Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RCODEL:8;            /*  = [0..7] = 0x000000ff */
      unsigned int RCODEH:8;            /*  = [8..15] = 0x0000ff00 */
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
      unsigned int DECDECDIS:1;         /*  = [30] = 0x40000000 */
      unsigned int PECDECDIS:1;         /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) FLASHn_ECCR_t_nonv;

typedef volatile FLASHn_ECCR_t_nonv FLASHn_ECCR_t;

/********************** FLASHn_ECCW_t *************************/
/*
   FLASH0_ECCW           "ECC Write Register"
   FLASH1_ECCW           "ECC Write Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int WCODEL:8;            /*  = [0..7] = 0x000000ff */
      unsigned int WCODEH:8;            /*  = [8..15] = 0x0000ff00 */
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
      unsigned int DECENCDIS:1;         /*  = [30] = 0x40000000 */
      unsigned int PECENCDIS:1;         /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) FLASHn_ECCW_t_nonv;

typedef volatile FLASHn_ECCW_t_nonv FLASHn_ECCW_t;

/********************** FLASHn_FCON_t *************************/
/*
   FLASH0_FCON           "Flash Configuration Register"
   FLASH1_FCON           "Flash Configuration Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int WSPFLASH:4;          /*  = [0..3] = 0x0000000f */
      unsigned int WSECPF:1;            /*  = [4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int WSDFLASH:4;          /*  = [8..11] = 0x00000f00 */
      unsigned int WSECDF:1;            /*  = [12] = 0x00001000 */
      unsigned int IDLE:1;              /*  = [13] = 0x00002000 */
      unsigned int ESLDIS:1;            /*  = [14] = 0x00004000 */
      unsigned int SLEEP:1;             /*  = [15] = 0x00008000 */
      unsigned int RPA:1;               /*  = [16] = 0x00010000 */
      unsigned int DCF:1;               /*  = [17] = 0x00020000 */
      unsigned int DDF:1;               /*  = [18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int DDFDMA:1;            /*  = [20] = 0x00100000 */
      unsigned int DDFPCP:1;            /*  = [21] = 0x00200000 */
      unsigned int DDFSHE:1;            /*  = [22] = 0x00400000 */
      unsigned int ADDECC:1;            /*  = [23] = 0x00800000 */
      unsigned int VOPERM:1;            /*  = [24] = 0x01000000 */
      unsigned int SQERM:1;             /*  = [25] = 0x02000000 */
      unsigned int PROERM:1;            /*  = [26] = 0x04000000 */
      unsigned int PFSBERM:1;           /*  = [27] = 0x08000000 */
      unsigned int DFCBERM:1;           /*  = [28] = 0x10000000 */
      unsigned int PFDBERM:1;           /*  = [29] = 0x20000000 */
      unsigned int DFMBERM:1;           /*  = [30] = 0x40000000 */
      unsigned int EOBM:1;              /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) FLASHn_FCON_t_nonv;

typedef volatile FLASHn_FCON_t_nonv FLASHn_FCON_t;

/********************** FLASHn_FSR_t *************************/
/*
   FLASH0_FSR            "Flash Status Register"
   FLASH1_FSR            "Flash Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int PBUSY:1;             /*  = [0] = 0x00000001 */
      unsigned int FABUSY:1;            /*  = [1] = 0x00000002 */
      unsigned int D0BUSY:1;            /*  = [2] = 0x00000004 */
      unsigned int D1BUSY:1;            /*  = [3] = 0x00000008 */
      unsigned int PROG:1;              /*  = [4] = 0x00000010 */
      unsigned int ERASE:1;             /*  = [5] = 0x00000020 */
      unsigned int PFPAGE:1;            /*  = [6] = 0x00000040 */
      unsigned int DFPAGE:1;            /*  = [7] = 0x00000080 */
      unsigned int PFOPER:1;            /*  = [8] = 0x00000100 */
      unsigned int DFOPER:1;            /*  = [9] = 0x00000200 */
      unsigned int SQER:1;              /*  = [10] = 0x00000400 */
      unsigned int PROER:1;             /*  = [11] = 0x00000800 */
      unsigned int PFSBER:1;            /*  = [12] = 0x00001000 */
      unsigned int DFCBER:1;            /*  = [13] = 0x00002000 */
      unsigned int PFDBER:1;            /*  = [14] = 0x00004000 */
      unsigned int DFMBER:1;            /*  = [15] = 0x00008000 */
      unsigned int PROIN:1;             /*  = [16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17] = 0x00020000 */
      unsigned int RPROIN:1;            /*  = [18] = 0x00040000 */
      unsigned int RPRODIS:1;           /*  = [19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20] = 0x00100000 */
      unsigned int WPROIN0:1;           /*  = [21] = 0x00200000 */
      unsigned int WPROIN1:1;           /*  = [22] = 0x00400000 */
      unsigned int WPROIN2:1;           /*  = [23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24] = 0x01000000 */
      unsigned int WPRODIS0:1;          /*  = [25] = 0x02000000 */
      unsigned int WPRODIS1:1;          /*  = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int SLM:1;               /*  = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int ORIER:1;             /*  = [30] = 0x40000000 */
      unsigned int VER:1;               /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) FLASHn_FSR_t_nonv;

typedef volatile FLASHn_FSR_t_nonv FLASHn_FSR_t;

/********************** FLASHn_ID_t *************************/
/*
   FLASH0_ID             "Flash Module Identification Register"
   FLASH1_ID             "Flash Module Identification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MOD_REV:8;           /*  = [0..7] = 0x000000ff */
      unsigned int MOD_TYPE:8;          /*  = [8..15] = 0x0000ff00 */
      unsigned int MOD_NUMBER:16;       /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) FLASHn_ID_t_nonv;

typedef volatile FLASHn_ID_t_nonv FLASHn_ID_t;

/********************** FLASHn_MARD_t *************************/
/*
   FLASH0_MARD           "Margin Control Register DFLASH"
   FLASH1_MARD           "Margin Control Register DFLASH"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MARGIN:4;            /*  = [0..3] = 0x0000000f */
      unsigned int CTRL:1;              /*  = [4] = 0x00000010 */
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
      unsigned int TRAPDIS:1;           /*  = [15] = 0x00008000 */
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
} __attribute__((aligned(4))) FLASHn_MARD_t_nonv;

typedef volatile FLASHn_MARD_t_nonv FLASHn_MARD_t;

/********************** FLASHn_MARP_t *************************/
/*
   FLASH0_MARP           "Margin Control Register PFLASH"
   FLASH1_MARP           "Margin Control Register PFLASH"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MARGIN:4;            /*  = [0..3] = 0x0000000f */
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
      unsigned int TRAPDIS:1;           /*  = [15] = 0x00008000 */
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
} __attribute__((aligned(4))) FLASHn_MARP_t_nonv;

typedef volatile FLASHn_MARP_t_nonv FLASHn_MARP_t;

/********************** FLASHn_PROCON0_t *************************/
/*
   FLASH0_PROCON0        "Flash Protection Config. User 0"
   FLASH1_PROCON0        "Flash Protection Config. User 0"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int S0L:1;               /*  = [0] = 0x00000001 */
      unsigned int S1L:1;               /*  = [1] = 0x00000002 */
      unsigned int S2L:1;               /*  = [2] = 0x00000004 */
      unsigned int S3L:1;               /*  = [3] = 0x00000008 */
      unsigned int S4L:1;               /*  = [4] = 0x00000010 */
      unsigned int S5L:1;               /*  = [5] = 0x00000020 */
      unsigned int S6L:1;               /*  = [6] = 0x00000040 */
      unsigned int S7L:1;               /*  = [7] = 0x00000080 */
      unsigned int S8L:1;               /*  = [8] = 0x00000100 */
      unsigned int S9L:1;               /*  = [9] = 0x00000200 */
      unsigned int S10_S11L:1;          /*  = [10] = 0x00000400 */
      unsigned int S12_S13L:1;          /*  = [11] = 0x00000800 */
      unsigned int S14_S15L:1;          /*  = [12] = 0x00001000 */
      unsigned int S16_S17L:1;          /*  = [13] = 0x00002000 */
      unsigned int S18_S19L:1;          /*  = [14] = 0x00004000 */
      unsigned int S20_S21L:1;          /*  = [15] = 0x00008000 */
      unsigned int S22_S23L:1;          /*  = [16] = 0x00010000 */
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
      unsigned int ADDECC:1;            /*  = [29] = 0x20000000 */
      unsigned int DFEXPRO:1;           /*  = [30] = 0x40000000 */
      unsigned int RPRO:1;              /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) FLASHn_PROCON0_t_nonv;

typedef volatile FLASHn_PROCON0_t_nonv FLASHn_PROCON0_t;

/********************** FLASHn_PROCON1_t *************************/
/*
   FLASH0_PROCON1        "Flash Protection Config. User 1"
   FLASH1_PROCON1        "Flash Protection Config. User 1"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int S0L:1;               /*  = [0] = 0x00000001 */
      unsigned int S1L:1;               /*  = [1] = 0x00000002 */
      unsigned int S2L:1;               /*  = [2] = 0x00000004 */
      unsigned int S3L:1;               /*  = [3] = 0x00000008 */
      unsigned int S4L:1;               /*  = [4] = 0x00000010 */
      unsigned int S5L:1;               /*  = [5] = 0x00000020 */
      unsigned int S6L:1;               /*  = [6] = 0x00000040 */
      unsigned int S7L:1;               /*  = [7] = 0x00000080 */
      unsigned int S8L:1;               /*  = [8] = 0x00000100 */
      unsigned int S9L:1;               /*  = [9] = 0x00000200 */
      unsigned int S10_S11L:1;          /*  = [10] = 0x00000400 */
      unsigned int S12_S13L:1;          /*  = [11] = 0x00000800 */
      unsigned int S14_S15L:1;          /*  = [12] = 0x00001000 */
      unsigned int S16_S17L:1;          /*  = [13] = 0x00002000 */
      unsigned int S18_S19L:1;          /*  = [14] = 0x00004000 */
      unsigned int S20_S21L:1;          /*  = [15] = 0x00008000 */
      unsigned int S22_S23L:1;          /*  = [16] = 0x00010000 */
      unsigned int _bit17:1;            /* 0 = [17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int SPREC:1;             /*  = [23] = 0x00800000 */
      unsigned int ALSEDIS:8;           /*  = [24..31] = 0xff000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) FLASHn_PROCON1_t_nonv;

typedef volatile FLASHn_PROCON1_t_nonv FLASHn_PROCON1_t;

/********************** FLASHn_PROCON2_t *************************/
/*
   FLASH0_PROCON2        "Flash Protection Config. User 2"
   FLASH1_PROCON2        "Flash Protection Config. User 2"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int S0ROM:1;             /*  = [0] = 0x00000001 */
      unsigned int S1ROM:1;             /*  = [1] = 0x00000002 */
      unsigned int S2ROM:1;             /*  = [2] = 0x00000004 */
      unsigned int S3ROM:1;             /*  = [3] = 0x00000008 */
      unsigned int S4ROM:1;             /*  = [4] = 0x00000010 */
      unsigned int S5ROM:1;             /*  = [5] = 0x00000020 */
      unsigned int S6ROM:1;             /*  = [6] = 0x00000040 */
      unsigned int S7ROM:1;             /*  = [7] = 0x00000080 */
      unsigned int S8ROM:1;             /*  = [8] = 0x00000100 */
      unsigned int S9ROM:1;             /*  = [9] = 0x00000200 */
      unsigned int S10_S11ROM:1;        /*  = [10] = 0x00000400 */
      unsigned int S12_S13ROM:1;        /*  = [11] = 0x00000800 */
      unsigned int S14_S15ROM:1;        /*  = [12] = 0x00001000 */
      unsigned int S16_S17ROM:1;        /*  = [13] = 0x00002000 */
      unsigned int S18_S19ROM:1;        /*  = [14] = 0x00004000 */
      unsigned int S20_S21ROM:1;        /*  = [15] = 0x00008000 */
      unsigned int S22_S23ROM:1;        /*  = [16] = 0x00010000 */
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
      unsigned int DATM:1;              /*  = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) FLASHn_PROCON2_t_nonv;

typedef volatile FLASHn_PROCON2_t_nonv FLASHn_PROCON2_t;

/********************** FLASHn_RDBCFGm_t *************************/
/*
   FLASH0_RDBCFG0        "Read Buffer Cfg 0"
   FLASH0_RDBCFG1        "Read Buffer Cfg 1"
   FLASH0_RDBCFG2        "Read Buffer Cfg 2"
   FLASH1_RDBCFG0        "Read Buffer Cfg 0"
   FLASH1_RDBCFG1        "Read Buffer Cfg 1"
   FLASH1_RDBCFG2        "Read Buffer Cfg 2"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TAG:4;               /*  = [0..3] = 0x0000000f */
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
} __attribute__((aligned(4))) FLASHn_RDBCFGm_t_nonv;

typedef volatile FLASHn_RDBCFGm_t_nonv FLASHn_RDBCFGm_t;

/********************** FLASHn_SEMA_t *************************/
/*
   FLASH0_SEMA           "Flash Access Semaphore"
   FLASH1_SEMA           "Flash Access Semaphore"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SHE:1;               /*  = [0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1] = 0x00000002 */
      unsigned int S1:1;                /*  = [2] = 0x00000004 */
      unsigned int S1C:1;               /*  = [3] = 0x00000008 */
      unsigned int S2:1;                /*  = [4] = 0x00000010 */
      unsigned int S2C:1;               /*  = [5] = 0x00000020 */
      unsigned int S3:1;                /*  = [6] = 0x00000040 */
      unsigned int S3C:1;               /*  = [7] = 0x00000080 */
      unsigned int S4:1;                /*  = [8] = 0x00000100 */
      unsigned int S4C:1;               /*  = [9] = 0x00000200 */
      unsigned int S5:1;                /*  = [10] = 0x00000400 */
      unsigned int S5C:1;               /*  = [11] = 0x00000800 */
      unsigned int S6:1;                /*  = [12] = 0x00001000 */
      unsigned int S6C:1;               /*  = [13] = 0x00002000 */
      unsigned int S7:1;                /*  = [14] = 0x00004000 */
      unsigned int S7C:1;               /*  = [15] = 0x00008000 */
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
} __attribute__((aligned(4))) FLASHn_SEMA_t_nonv;

typedef volatile FLASHn_SEMA_t_nonv FLASHn_SEMA_t;

/********************** FLASHn_SHEBOOTm_t *************************/
/*
   FLASH0_SHEBOOT0       "SHE Secure Boot Cfg"
   FLASH0_SHEBOOT1       "SHE Secure Boot Cfg"
   FLASH0_SHEBOOT2       "SHE Secure Boot Cfg"
   FLASH1_SHEBOOT0       "SHE Secure Boot Cfg"
   FLASH1_SHEBOOT1       "SHE Secure Boot Cfg"
   FLASH1_SHEBOOT2       "SHE Secure Boot Cfg"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SIZE:30;             /*  = [0..29] = 0x3fffffff */
      unsigned int BGD:1;               /*  = [30] = 0x40000000 */
      unsigned int SHE:1;               /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) FLASHn_SHEBOOTm_t_nonv;

typedef volatile FLASHn_SHEBOOTm_t_nonv FLASHn_SHEBOOTm_t;

/********************** FLASHn_XFSR_t *************************/
/*
   FLASH0_XFSR           "Extended Flash Status Register"
   FLASH1_XFSR           "Extended Flash Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int PFDBER:1;            /*  = [0] = 0x00000001 */
      unsigned int PFADER:1;            /*  = [1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4] = 0x00000010 */
      unsigned int SRIADDERR:1;         /*  = [5] = 0x00000020 */
      unsigned int SEMVIO:1;            /*  = [6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int PVER:1;              /*  = [8] = 0x00000100 */
      unsigned int D0VER:1;             /*  = [9] = 0x00000200 */
      unsigned int D1VER:1;             /*  = [10] = 0x00000400 */
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
} __attribute__((aligned(4))) FLASHn_XFSR_t_nonv;

typedef volatile FLASHn_XFSR_t_nonv FLASHn_XFSR_t;

/********************** PMUn_ID_t *************************/
/*
   PMU0_ID               "PMU0 Identification Register"
   PMU1_ID               "PMU1 Identification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MOD_REV:8;           /*  = [0..7] = 0x000000ff */
      unsigned int MOD_TYPE:8;          /*  = [8..15] = 0x0000ff00 */
      unsigned int MOD_NUMBER:16;       /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) PMUn_ID_t_nonv;

typedef volatile PMUn_ID_t_nonv PMUn_ID_t;


#endif /* _HAVE_TRICORE_PMU_SHARETYPES_H_ */

