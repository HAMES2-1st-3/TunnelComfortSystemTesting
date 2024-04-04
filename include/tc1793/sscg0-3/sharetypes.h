/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_SSCG0_3_SHARETYPES_H_
#define _HAVE_TRICORE_SSCG0_3_SHARETYPES_H_


/********************** SSCGn_BR_t *************************/
/*
   SSCG0_BR              "Baud Rate Timer Reload Register"
   SSCG1_BR              "Baud Rate Timer Reload Register"
   SSCG2_BR              "Baud Rate Timer Reload Register"
   SSCG3_BR              "Baud Rate Timer Reload Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int BR_VALUE:16;         /*  = [0..15] = 0x0000ffff */
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
} __attribute__((aligned(4))) SSCGn_BR_t_nonv;

typedef volatile SSCGn_BR_t_nonv SSCGn_BR_t;

/********************** SSCGn_CLC_t *************************/
/*
   SSCG0_CLC             "Clock Control Register"
   SSCG1_CLC             "Clock Control Register"
   SSCG2_CLC             "Clock Control Register"
   SSCG3_CLC             "Clock Control Register"
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
} __attribute__((aligned(4))) SSCGn_CLC_t_nonv;

typedef volatile SSCGn_CLC_t_nonv SSCGn_CLC_t;

/********************** SSCGn_CON_t *************************/
/*
   SSCG0_CON             "Control Register"
   SSCG1_CON             "Control Register"
   SSCG2_CON             "Control Register"
   SSCG3_CON             "Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int BM:4;                /*  = [0..3] = 0x0000000f */
      unsigned int HB:1;                /*  = [4] = 0x00000010 */
      unsigned int PH:1;                /*  = [5] = 0x00000020 */
      unsigned int PO:1;                /*  = [6] = 0x00000040 */
      unsigned int LB:1;                /*  = [7] = 0x00000080 */
      unsigned int TEN:1;               /*  = [8] = 0x00000100 */
      unsigned int REN:1;               /*  = [9] = 0x00000200 */
      unsigned int PEN:1;               /*  = [10] = 0x00000400 */
      unsigned int BEN:1;               /*  = [11] = 0x00000800 */
      unsigned int AREN:1;              /*  = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int MS:1;                /*  = [14] = 0x00004000 */
      unsigned int EN:1;                /*  = [15] = 0x00008000 */
      unsigned int PARTEN:1;            /*  = [16] = 0x00010000 */
      unsigned int PARREN:1;            /*  = [17] = 0x00020000 */
      unsigned int PARTYP:1;            /*  = [18] = 0x00040000 */
      unsigned int PAREEN:1;            /*  = [19] = 0x00080000 */
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
} __attribute__((aligned(4))) SSCGn_CON_t_nonv;

typedef volatile SSCGn_CON_t_nonv SSCGn_CON_t;

/********************** SSCGn_EFM_t *************************/
/*
   SSCG0_EFM             "Error Flag Modification Register"
   SSCG1_EFM             "Error Flag Modification Register"
   SSCG2_EFM             "Error Flag Modification Register"
   SSCG3_EFM             "Error Flag Modification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CLRPARE:1;           /*  = [0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3] = 0x00000008 */
      unsigned int SETPARE:1;           /*  = [4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int CLRTE:1;             /*  = [8] = 0x00000100 */
      unsigned int CLRRE:1;             /*  = [9] = 0x00000200 */
      unsigned int CLRPE:1;             /*  = [10] = 0x00000400 */
      unsigned int CLRBE:1;             /*  = [11] = 0x00000800 */
      unsigned int SETTE:1;             /*  = [12] = 0x00001000 */
      unsigned int SETRE:1;             /*  = [13] = 0x00002000 */
      unsigned int SETPE:1;             /*  = [14] = 0x00004000 */
      unsigned int SETBE:1;             /*  = [15] = 0x00008000 */
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
} __attribute__((aligned(4))) SSCGn_EFM_t_nonv;

typedef volatile SSCGn_EFM_t_nonv SSCGn_EFM_t;

/********************** SSCGn_FDR_t *************************/
/*
   SSCG0_FDR             "Fractional Divider Register"
   SSCG1_FDR             "Fractional Divider Register"
   SSCG2_FDR             "Fractional Divider Register"
   SSCG3_FDR             "Fractional Divider Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int STEP:10;             /*  = [0..9] = 0x000003ff */
      unsigned int FDIS:1;              /*  = [10] = 0x00000400 */
      unsigned int SM:1;                /*  = [11] = 0x00000800 */
      unsigned int SC:2;                /*  = [12..13] = 0x00003000 */
      unsigned int DM:2;                /*  = [14..15] = 0x0000c000 */
      unsigned int RESULT:10;           /*  = [16..25] = 0x03ff0000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int SUSACK:1;            /*  = [28] = 0x10000000 */
      unsigned int SUSREQ:1;            /*  = [29] = 0x20000000 */
      unsigned int ENHW:1;              /*  = [30] = 0x40000000 */
      unsigned int DISCLK:1;            /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) SSCGn_FDR_t_nonv;

typedef volatile SSCGn_FDR_t_nonv SSCGn_FDR_t;

/********************** SSCGn_GEFM_t *************************/
/*
   SSCG0_GEFM            "Guardian Error Flag Modification Register"
   SSCG1_GEFM            "Guardian Error Flag Modification Register"
   SSCG2_GEFM            "Guardian Error Flag Modification Register"
   SSCG3_GEFM            "Guardian Error Flag Modification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CLRCE:1;             /*  = [0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1] = 0x00000002 */
      unsigned int SCTC:2;              /*  = [2..3] = 0x0000000c */
      unsigned int _bit4:1;             /* 0 = [4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int SETCE:1;             /*  = [8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int SCT0:2;              /*  = [16..17] = 0x00030000 */
      unsigned int SCT1:2;              /*  = [18..19] = 0x000c0000 */
      unsigned int SCT2:2;              /*  = [20..21] = 0x00300000 */
      unsigned int SCT3:2;              /*  = [22..23] = 0x00c00000 */
      unsigned int SCT4:2;              /*  = [24..25] = 0x03000000 */
      unsigned int SCT5:2;              /*  = [26..27] = 0x0c000000 */
      unsigned int SCT6:2;              /*  = [28..29] = 0x30000000 */
      unsigned int SCT7:2;              /*  = [30..31] = 0xc0000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) SSCGn_GEFM_t_nonv;

typedef volatile SSCGn_GEFM_t_nonv SSCGn_GEFM_t;

/********************** SSCGn_GEN_t *************************/
/*
   SSCG0_GEN             "Guardian Enable Register"
   SSCG1_GEN             "Guardian Enable Register"
   SSCG2_GEN             "Guardian Enable Register"
   SSCG3_GEN             "Guardian Enable Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SEN0:1;              /*  = [0] = 0x00000001 */
      unsigned int SEN1:1;              /*  = [1] = 0x00000002 */
      unsigned int SEN2:1;              /*  = [2] = 0x00000004 */
      unsigned int SEN3:1;              /*  = [3] = 0x00000008 */
      unsigned int SEN4:1;              /*  = [4] = 0x00000010 */
      unsigned int SEN5:1;              /*  = [5] = 0x00000020 */
      unsigned int SEN6:1;              /*  = [6] = 0x00000040 */
      unsigned int SEN7:1;              /*  = [7] = 0x00000080 */
      unsigned int CEN:1;               /*  = [8] = 0x00000100 */
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
} __attribute__((aligned(4))) SSCGn_GEN_t_nonv;

typedef volatile SSCGn_GEN_t_nonv SSCGn_GEN_t;

/********************** SSCGn_GSRC_t *************************/
/*
   SSCG0_GSRC            "Guardian Interrupt Service Request Control Register"
   SSCG1_GSRC            "Guardian Interrupt Service Request Control Register"
   SSCG2_GSRC            "Guardian Interrupt Service Request Control Register"
   SSCG3_GSRC            "Guardian Interrupt Service Request Control Register"
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
} __attribute__((aligned(4))) SSCGn_GSRC_t_nonv;

typedef volatile SSCGn_GSRC_t_nonv SSCGn_GSRC_t;

/********************** SSCGn_GSTAT_t *************************/
/*
   SSCG0_GSTAT           "Guardian Status Register"
   SSCG1_GSTAT           "Guardian Status Register"
   SSCG2_GSTAT           "Guardian Status Register"
   SSCG3_GSTAT           "Guardian Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CE:1;                /*  = [0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1] = 0x00000002 */
      unsigned int SCLK:1;              /*  = [2] = 0x00000004 */
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
      unsigned int S0:1;                /*  = [16] = 0x00010000 */
      unsigned int S1:1;                /*  = [17] = 0x00020000 */
      unsigned int S2:1;                /*  = [18] = 0x00040000 */
      unsigned int S3:1;                /*  = [19] = 0x00080000 */
      unsigned int S4:1;                /*  = [20] = 0x00100000 */
      unsigned int S5:1;                /*  = [21] = 0x00200000 */
      unsigned int S6:1;                /*  = [22] = 0x00400000 */
      unsigned int S7:1;                /*  = [23] = 0x00800000 */
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
} __attribute__((aligned(4))) SSCGn_GSTAT_t_nonv;

typedef volatile SSCGn_GSTAT_t_nonv SSCGn_GSTAT_t;

/********************** SSCGn_ID_t *************************/
/*
   SSCG0_ID              "Module Identification Register"
   SSCG1_ID              "Module Identification Register"
   SSCG2_ID              "Module Identification Register"
   SSCG3_ID              "Module Identification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MODREV:8;            /*  = [0..7] = 0x000000ff */
      unsigned int MODTYPE:8;           /*  = [8..15] = 0x0000ff00 */
      unsigned int MODNUM:16;           /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) SSCGn_ID_t_nonv;

typedef volatile SSCGn_ID_t_nonv SSCGn_ID_t;

/********************** SSCGn_PISEL_t *************************/
/*
   SSCG0_PISEL           "Port Input Select Register"
   SSCG1_PISEL           "Port Input Select Register"
   SSCG2_PISEL           "Port Input Select Register"
   SSCG3_PISEL           "Port Input Select Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MRIS:1;              /*  = [0] = 0x00000001 */
      unsigned int SRIS:1;              /*  = [1] = 0x00000002 */
      unsigned int SCIS:1;              /*  = [2] = 0x00000004 */
      unsigned int SLSIS:3;             /*  = [3..5] = 0x00000038 */
      unsigned int _bit6:1;             /* 0 = [6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int STIP:1;              /*  = [8] = 0x00000100 */
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
} __attribute__((aligned(4))) SSCGn_PISEL_t_nonv;

typedef volatile SSCGn_PISEL_t_nonv SSCGn_PISEL_t;

/********************** SSCGn_RB_t *************************/
/*
   SSCG0_RB              "Receive Buffer Register"
   SSCG1_RB              "Receive Buffer Register"
   SSCG2_RB              "Receive Buffer Register"
   SSCG3_RB              "Receive Buffer Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RB_VALUE:16;         /*  = [0..15] = 0x0000ffff */
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
} __attribute__((aligned(4))) SSCGn_RB_t_nonv;

typedef volatile SSCGn_RB_t_nonv SSCGn_RB_t;

/********************** SSCGn_RBSNAP_t *************************/
/*
   SSCG0_RBSNAP          "Receive Buffer Snapshot Register"
   SSCG1_RBSNAP          "Receive Buffer Snapshot Register"
   SSCG2_RBSNAP          "Receive Buffer Snapshot Register"
   SSCG3_RBSNAP          "Receive Buffer Snapshot Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RB_VALUE:16;         /*  = [0..15] = 0x0000ffff */
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
} __attribute__((aligned(4))) SSCGn_RBSNAP_t_nonv;

typedef volatile SSCGn_RBSNAP_t_nonv SSCGn_RBSNAP_t;

/********************** SSCGn_SSOC_t *************************/
/*
   SSCG0_SSOC            "Slave Select Output Control Register"
   SSCG1_SSOC            "Slave Select Output Control Register"
   SSCG2_SSOC            "Slave Select Output Control Register"
   SSCG3_SSOC            "Slave Select Output Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int AOL0:1;              /*  = [0] = 0x00000001 */
      unsigned int AOL1:1;              /*  = [1] = 0x00000002 */
      unsigned int AOL2:1;              /*  = [2] = 0x00000004 */
      unsigned int AOL3:1;              /*  = [3] = 0x00000008 */
      unsigned int AOL4:1;              /*  = [4] = 0x00000010 */
      unsigned int AOL5:1;              /*  = [5] = 0x00000020 */
      unsigned int AOL6:1;              /*  = [6] = 0x00000040 */
      unsigned int AOL7:1;              /*  = [7] = 0x00000080 */
      unsigned int OEN0:1;              /*  = [8] = 0x00000100 */
      unsigned int OEN1:1;              /*  = [9] = 0x00000200 */
      unsigned int OEN2:1;              /*  = [10] = 0x00000400 */
      unsigned int OEN3:1;              /*  = [11] = 0x00000800 */
      unsigned int OEN4:1;              /*  = [12] = 0x00001000 */
      unsigned int OEN5:1;              /*  = [13] = 0x00002000 */
      unsigned int OEN6:1;              /*  = [14] = 0x00004000 */
      unsigned int OEN7:1;              /*  = [15] = 0x00008000 */
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
} __attribute__((aligned(4))) SSCGn_SSOC_t_nonv;

typedef volatile SSCGn_SSOC_t_nonv SSCGn_SSOC_t;

/********************** SSCGn_SSOTC_t *************************/
/*
   SSCG0_SSOTC           "Slave Select Output Timing Control Register"
   SSCG1_SSOTC           "Slave Select Output Timing Control Register"
   SSCG2_SSOTC           "Slave Select Output Timing Control Register"
   SSCG3_SSOTC           "Slave Select Output Timing Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int LEAD:2;              /*  = [0..1] = 0x00000003 */
      unsigned int TRAIL:2;             /*  = [2..3] = 0x0000000c */
      unsigned int INACT:2;             /*  = [4..5] = 0x00000030 */
      unsigned int _bit6:1;             /* 0 = [6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int SLSO7MOD:1;          /*  = [8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int QSMEN:1;             /*  = [14] = 0x00004000 */
      unsigned int EN:1;                /*  = [15] = 0x00008000 */
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
} __attribute__((aligned(4))) SSCGn_SSOTC_t_nonv;

typedef volatile SSCGn_SSOTC_t_nonv SSCGn_SSOTC_t;

/********************** SSCGn_STAT_t *************************/
/*
   SSCG0_STAT            "Status Register"
   SSCG1_STAT            "Status Register"
   SSCG2_STAT            "Status Register"
   SSCG3_STAT            "Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int BC:4;                /*  = [0..3] = 0x0000000f */
      unsigned int PARE:1;              /*  = [4] = 0x00000010 */
      unsigned int PARTVAL:1;           /*  = [5] = 0x00000020 */
      unsigned int PARRVAL:1;           /*  = [6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int TE:1;                /*  = [8] = 0x00000100 */
      unsigned int RE:1;                /*  = [9] = 0x00000200 */
      unsigned int PE:1;                /*  = [10] = 0x00000400 */
      unsigned int BE:1;                /*  = [11] = 0x00000800 */
      unsigned int BSY:1;               /*  = [12] = 0x00001000 */
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
} __attribute__((aligned(4))) SSCGn_STAT_t_nonv;

typedef volatile SSCGn_STAT_t_nonv SSCGn_STAT_t;

/********************** SSCGn_TB_t *************************/
/*
   SSCG0_TB              "Transmit Buffer Register"
   SSCG1_TB              "Transmit Buffer Register"
   SSCG2_TB              "Transmit Buffer Register"
   SSCG3_TB              "Transmit Buffer Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TB_VALUE:16;         /*  = [0..15] = 0x0000ffff */
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
} __attribute__((aligned(4))) SSCGn_TB_t_nonv;

typedef volatile SSCGn_TB_t_nonv SSCGn_TB_t;

/********************** SSCGn_TB1_t *************************/
/*
   SSCG0_TB1             "Transmit Buffer Compare Register"
   SSCG1_TB1             "Transmit Buffer Compare Register"
   SSCG2_TB1             "Transmit Buffer Compare Register"
   SSCG3_TB1             "Transmit Buffer Compare Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TB_VALUE:16;         /*  = [0..15] = 0x0000ffff */
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
} __attribute__((aligned(4))) SSCGn_TB1_t_nonv;

typedef volatile SSCGn_TB1_t_nonv SSCGn_TB1_t;

/********************** SSCGn_TB1SNAP_t *************************/
/*
   SSCG0_TB1SNAP         "Transmit Buffer Snapshot Register"
   SSCG1_TB1SNAP         "Transmit Buffer Snapshot Register"
   SSCG2_TB1SNAP         "Transmit Buffer Snapshot Register"
   SSCG3_TB1SNAP         "Transmit Buffer Snapshot Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TB_VALUE:16;         /*  = [0..15] = 0x0000ffff */
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
} __attribute__((aligned(4))) SSCGn_TB1SNAP_t_nonv;

typedef volatile SSCGn_TB1SNAP_t_nonv SSCGn_TB1SNAP_t;


#endif /* _HAVE_TRICORE_SSCG0_3_SHARETYPES_H_ */

