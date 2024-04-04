/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_DMA_TYPES_H_
#define _HAVE_TRICORE_DMA_TYPES_H_


/********************** DMA_CHRSTR_t *************************/
/*
   DMA_CHRSTR            "DMA Channel Reset Request Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CH00:1;              /*  = [0] = 0x00000001 */
      unsigned int CH01:1;              /*  = [1] = 0x00000002 */
      unsigned int CH02:1;              /*  = [2] = 0x00000004 */
      unsigned int CH03:1;              /*  = [3] = 0x00000008 */
      unsigned int CH04:1;              /*  = [4] = 0x00000010 */
      unsigned int CH05:1;              /*  = [5] = 0x00000020 */
      unsigned int CH06:1;              /*  = [6] = 0x00000040 */
      unsigned int CH07:1;              /*  = [7] = 0x00000080 */
      unsigned int CH10:1;              /*  = [8] = 0x00000100 */
      unsigned int CH11:1;              /*  = [9] = 0x00000200 */
      unsigned int CH12:1;              /*  = [10] = 0x00000400 */
      unsigned int CH13:1;              /*  = [11] = 0x00000800 */
      unsigned int CH14:1;              /*  = [12] = 0x00001000 */
      unsigned int CH15:1;              /*  = [13] = 0x00002000 */
      unsigned int CH16:1;              /*  = [14] = 0x00004000 */
      unsigned int CH17:1;              /*  = [15] = 0x00008000 */
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
} __attribute__((aligned(4))) DMA_CHRSTR_t_nonv;

typedef volatile DMA_CHRSTR_t_nonv DMA_CHRSTR_t;

/********************** DMA_CLC_t *************************/
/*
   DMA_CLC               "DMA Clock Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DISR:1;              /*  = [0] = 0x00000001 */
      unsigned int DISS:1;              /*  = [1] = 0x00000002 */
      unsigned int SPEN:1;              /*  = [2] = 0x00000004 */
      unsigned int ONE:1;               /*  = [3] = 0x00000008 */
      unsigned int SBWE:1;              /*  = [4] = 0x00000010 */
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
} __attribute__((aligned(4))) DMA_CLC_t_nonv;

typedef volatile DMA_CLC_t_nonv DMA_CLC_t;

/********************** DMA_CLRE_t *************************/
/*
   DMA_CLRE              "DMA Clear Error Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CTL00:1;             /*  = [0] = 0x00000001 */
      unsigned int CTL01:1;             /*  = [1] = 0x00000002 */
      unsigned int CTL02:1;             /*  = [2] = 0x00000004 */
      unsigned int CTL03:1;             /*  = [3] = 0x00000008 */
      unsigned int CTL04:1;             /*  = [4] = 0x00000010 */
      unsigned int CTL05:1;             /*  = [5] = 0x00000020 */
      unsigned int CTL06:1;             /*  = [6] = 0x00000040 */
      unsigned int CTL07:1;             /*  = [7] = 0x00000080 */
      unsigned int CTL10:1;             /*  = [8] = 0x00000100 */
      unsigned int CTL11:1;             /*  = [9] = 0x00000200 */
      unsigned int CTL12:1;             /*  = [10] = 0x00000400 */
      unsigned int CTL13:1;             /*  = [11] = 0x00000800 */
      unsigned int CTL14:1;             /*  = [12] = 0x00001000 */
      unsigned int CTL15:1;             /*  = [13] = 0x00002000 */
      unsigned int CTL16:1;             /*  = [14] = 0x00004000 */
      unsigned int CTL17:1;             /*  = [15] = 0x00008000 */
      unsigned int CME0SER:1;           /*  = [16] = 0x00010000 */
      unsigned int CME0DER:1;           /*  = [17] = 0x00020000 */
      unsigned int CME1SER:1;           /*  = [18] = 0x00040000 */
      unsigned int CME1DER:1;           /*  = [19] = 0x00080000 */
      unsigned int CFPIER:1;            /*  = [20] = 0x00100000 */
      unsigned int CLMBER:1;            /*  = [21] = 0x00200000 */
      unsigned int CLCERBERUS:1;        /*  = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int CLRMLI0:1;           /*  = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) DMA_CLRE_t_nonv;

typedef volatile DMA_CLRE_t_nonv DMA_CLRE_t;

/********************** DMA_EER_t *************************/
/*
   DMA_EER               "DMA Enable Error Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ETRL00:1;            /*  = [0] = 0x00000001 */
      unsigned int ETRL01:1;            /*  = [1] = 0x00000002 */
      unsigned int ETRL02:1;            /*  = [2] = 0x00000004 */
      unsigned int ETRL03:1;            /*  = [3] = 0x00000008 */
      unsigned int ETRL04:1;            /*  = [4] = 0x00000010 */
      unsigned int ETRL05:1;            /*  = [5] = 0x00000020 */
      unsigned int ETRL06:1;            /*  = [6] = 0x00000040 */
      unsigned int ETRL07:1;            /*  = [7] = 0x00000080 */
      unsigned int ETRL10:1;            /*  = [8] = 0x00000100 */
      unsigned int ETRL11:1;            /*  = [9] = 0x00000200 */
      unsigned int ETRL12:1;            /*  = [10] = 0x00000400 */
      unsigned int ETRL13:1;            /*  = [11] = 0x00000800 */
      unsigned int ETRL14:1;            /*  = [12] = 0x00001000 */
      unsigned int ETRL15:1;            /*  = [13] = 0x00002000 */
      unsigned int ETRL16:1;            /*  = [14] = 0x00004000 */
      unsigned int ETRL17:1;            /*  = [15] = 0x00008000 */
      unsigned int EME0SER:1;           /*  = [16] = 0x00010000 */
      unsigned int EME0DER:1;           /*  = [17] = 0x00020000 */
      unsigned int EME1SER:1;           /*  = [18] = 0x00040000 */
      unsigned int EME1DER:1;           /*  = [19] = 0x00080000 */
      unsigned int ME0INP:4;            /*  = [20..23] = 0x00f00000 */
      unsigned int ME1INP:4;            /*  = [24..27] = 0x0f000000 */
      unsigned int TRLINP:4;            /*  = [28..31] = 0xf0000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) DMA_EER_t_nonv;

typedef volatile DMA_EER_t_nonv DMA_EER_t;

/********************** DMA_ERRSR_t *************************/
/*
   DMA_ERRSR             "DMA Error Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TRL00:1;             /*  = [0] = 0x00000001 */
      unsigned int TRL01:1;             /*  = [1] = 0x00000002 */
      unsigned int TRL02:1;             /*  = [2] = 0x00000004 */
      unsigned int TRL03:1;             /*  = [3] = 0x00000008 */
      unsigned int TRL04:1;             /*  = [4] = 0x00000010 */
      unsigned int TRL05:1;             /*  = [5] = 0x00000020 */
      unsigned int TRL06:1;             /*  = [6] = 0x00000040 */
      unsigned int TRL07:1;             /*  = [7] = 0x00000080 */
      unsigned int TRL10:1;             /*  = [8] = 0x00000100 */
      unsigned int TRL11:1;             /*  = [9] = 0x00000200 */
      unsigned int TRL12:1;             /*  = [10] = 0x00000400 */
      unsigned int TRL13:1;             /*  = [11] = 0x00000800 */
      unsigned int TRL14:1;             /*  = [12] = 0x00001000 */
      unsigned int TRL15:1;             /*  = [13] = 0x00002000 */
      unsigned int TRL16:1;             /*  = [14] = 0x00004000 */
      unsigned int TRL17:1;             /*  = [15] = 0x00008000 */
      unsigned int ME0SER:1;            /*  = [16] = 0x00010000 */
      unsigned int ME0DER:1;            /*  = [17] = 0x00020000 */
      unsigned int ME1SER:1;            /*  = [18] = 0x00040000 */
      unsigned int ME1DER:1;            /*  = [19] = 0x00080000 */
      unsigned int FPIER:1;             /*  = [20] = 0x00100000 */
      unsigned int LMBER:1;             /*  = [21] = 0x00200000 */
      unsigned int CERBERUSER:1;        /*  = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int LECME0:3;            /*  = [24..26] = 0x07000000 */
      unsigned int MLI0:1;              /*  = [27] = 0x08000000 */
      unsigned int LECME1:3;            /*  = [28..30] = 0x70000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) DMA_ERRSR_t_nonv;

typedef volatile DMA_ERRSR_t_nonv DMA_ERRSR_t;

/********************** DMA_GINTR_t *************************/
/*
   DMA_GINTR             "DMA Global Interrupt Set Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SIDMA0:1;            /*  = [0] = 0x00000001 */
      unsigned int SIDMA1:1;            /*  = [1] = 0x00000002 */
      unsigned int SIDMA2:1;            /*  = [2] = 0x00000004 */
      unsigned int SIDMA3:1;            /*  = [3] = 0x00000008 */
      unsigned int SIDMA4:1;            /*  = [4] = 0x00000010 */
      unsigned int SIDMA5:1;            /*  = [5] = 0x00000020 */
      unsigned int SIDMA6:1;            /*  = [6] = 0x00000040 */
      unsigned int SIDMA7:1;            /*  = [7] = 0x00000080 */
      unsigned int SIDMA8:1;            /*  = [8] = 0x00000100 */
      unsigned int SIDMA9:1;            /*  = [9] = 0x00000200 */
      unsigned int SIDMA10:1;           /*  = [10] = 0x00000400 */
      unsigned int SIDMA11:1;           /*  = [11] = 0x00000800 */
      unsigned int SIDMA12:1;           /*  = [12] = 0x00001000 */
      unsigned int SIDMA13:1;           /*  = [13] = 0x00002000 */
      unsigned int SIDMA14:1;           /*  = [14] = 0x00004000 */
      unsigned int SIDMA15:1;           /*  = [15] = 0x00008000 */
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
} __attribute__((aligned(4))) DMA_GINTR_t_nonv;

typedef volatile DMA_GINTR_t_nonv DMA_GINTR_t;

/********************** DMA_HTREQ_t *************************/
/*
   DMA_HTREQ             "DMA Hardware Transaction Request Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ECH00:1;             /*  = [0] = 0x00000001 */
      unsigned int ECH01:1;             /*  = [1] = 0x00000002 */
      unsigned int ECH02:1;             /*  = [2] = 0x00000004 */
      unsigned int ECH03:1;             /*  = [3] = 0x00000008 */
      unsigned int ECH04:1;             /*  = [4] = 0x00000010 */
      unsigned int ECH05:1;             /*  = [5] = 0x00000020 */
      unsigned int ECH06:1;             /*  = [6] = 0x00000040 */
      unsigned int ECH07:1;             /*  = [7] = 0x00000080 */
      unsigned int ECH10:1;             /*  = [8] = 0x00000100 */
      unsigned int ECH11:1;             /*  = [9] = 0x00000200 */
      unsigned int ECH12:1;             /*  = [10] = 0x00000400 */
      unsigned int ECH13:1;             /*  = [11] = 0x00000800 */
      unsigned int ECH14:1;             /*  = [12] = 0x00001000 */
      unsigned int ECH15:1;             /*  = [13] = 0x00002000 */
      unsigned int ECH16:1;             /*  = [14] = 0x00004000 */
      unsigned int ECH17:1;             /*  = [15] = 0x00008000 */
      unsigned int DCH00:1;             /*  = [16] = 0x00010000 */
      unsigned int DCH01:1;             /*  = [17] = 0x00020000 */
      unsigned int DCH02:1;             /*  = [18] = 0x00040000 */
      unsigned int DCH03:1;             /*  = [19] = 0x00080000 */
      unsigned int DCH04:1;             /*  = [20] = 0x00100000 */
      unsigned int DCH05:1;             /*  = [21] = 0x00200000 */
      unsigned int DCH06:1;             /*  = [22] = 0x00400000 */
      unsigned int DCH07:1;             /*  = [23] = 0x00800000 */
      unsigned int DCH10:1;             /*  = [24] = 0x01000000 */
      unsigned int DCH11:1;             /*  = [25] = 0x02000000 */
      unsigned int DCH12:1;             /*  = [26] = 0x04000000 */
      unsigned int DCH13:1;             /*  = [27] = 0x08000000 */
      unsigned int DCH14:1;             /*  = [28] = 0x10000000 */
      unsigned int DCH15:1;             /*  = [29] = 0x20000000 */
      unsigned int DCH16:1;             /*  = [30] = 0x40000000 */
      unsigned int DCH17:1;             /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) DMA_HTREQ_t_nonv;

typedef volatile DMA_HTREQ_t_nonv DMA_HTREQ_t;

/********************** DMA_ID_t *************************/
/*
   DMA_ID                "Module Identification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MOD_REV:8;           /*  = [0..7] = 0x000000ff */
      unsigned int MOD_TYPE:8;          /*  = [8..15] = 0x0000ff00 */
      unsigned int MOD_NUMBER:16;       /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) DMA_ID_t_nonv;

typedef volatile DMA_ID_t_nonv DMA_ID_t;

/********************** DMA_INTCR_t *************************/
/*
   DMA_INTCR             "DMA Interrupt Clear Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CICH00:1;            /*  = [0] = 0x00000001 */
      unsigned int CICH01:1;            /*  = [1] = 0x00000002 */
      unsigned int CICH02:1;            /*  = [2] = 0x00000004 */
      unsigned int CICH03:1;            /*  = [3] = 0x00000008 */
      unsigned int CICH04:1;            /*  = [4] = 0x00000010 */
      unsigned int CICH05:1;            /*  = [5] = 0x00000020 */
      unsigned int CICH06:1;            /*  = [6] = 0x00000040 */
      unsigned int CICH07:1;            /*  = [7] = 0x00000080 */
      unsigned int CICH10:1;            /*  = [8] = 0x00000100 */
      unsigned int CICH11:1;            /*  = [9] = 0x00000200 */
      unsigned int CICH12:1;            /*  = [10] = 0x00000400 */
      unsigned int CICH13:1;            /*  = [11] = 0x00000800 */
      unsigned int CICH14:1;            /*  = [12] = 0x00001000 */
      unsigned int CICH15:1;            /*  = [13] = 0x00002000 */
      unsigned int CICH16:1;            /*  = [14] = 0x00004000 */
      unsigned int CICH17:1;            /*  = [15] = 0x00008000 */
      unsigned int CWRP00:1;            /*  = [16] = 0x00010000 */
      unsigned int CWRP01:1;            /*  = [17] = 0x00020000 */
      unsigned int CWRP02:1;            /*  = [18] = 0x00040000 */
      unsigned int CWRP03:1;            /*  = [19] = 0x00080000 */
      unsigned int CWRP04:1;            /*  = [20] = 0x00100000 */
      unsigned int CWRP05:1;            /*  = [21] = 0x00200000 */
      unsigned int CWRP06:1;            /*  = [22] = 0x00400000 */
      unsigned int CWRP07:1;            /*  = [23] = 0x00800000 */
      unsigned int CWRP10:1;            /*  = [24] = 0x01000000 */
      unsigned int CWRP11:1;            /*  = [25] = 0x02000000 */
      unsigned int CWRP12:1;            /*  = [26] = 0x04000000 */
      unsigned int CWRP13:1;            /*  = [27] = 0x08000000 */
      unsigned int CWRP14:1;            /*  = [28] = 0x10000000 */
      unsigned int CWRP15:1;            /*  = [29] = 0x20000000 */
      unsigned int CWRP16:1;            /*  = [30] = 0x40000000 */
      unsigned int CWRP17:1;            /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) DMA_INTCR_t_nonv;

typedef volatile DMA_INTCR_t_nonv DMA_INTCR_t;

/********************** DMA_INTSR_t *************************/
/*
   DMA_INTSR             "DMA Interrupt Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ICH00:1;             /*  = [0] = 0x00000001 */
      unsigned int ICH01:1;             /*  = [1] = 0x00000002 */
      unsigned int ICH02:1;             /*  = [2] = 0x00000004 */
      unsigned int ICH03:1;             /*  = [3] = 0x00000008 */
      unsigned int ICH04:1;             /*  = [4] = 0x00000010 */
      unsigned int ICH05:1;             /*  = [5] = 0x00000020 */
      unsigned int ICH06:1;             /*  = [6] = 0x00000040 */
      unsigned int ICH07:1;             /*  = [7] = 0x00000080 */
      unsigned int ICH10:1;             /*  = [8] = 0x00000100 */
      unsigned int ICH11:1;             /*  = [9] = 0x00000200 */
      unsigned int ICH12:1;             /*  = [10] = 0x00000400 */
      unsigned int ICH13:1;             /*  = [11] = 0x00000800 */
      unsigned int ICH14:1;             /*  = [12] = 0x00001000 */
      unsigned int ICH15:1;             /*  = [13] = 0x00002000 */
      unsigned int ICH16:1;             /*  = [14] = 0x00004000 */
      unsigned int ICH17:1;             /*  = [15] = 0x00008000 */
      unsigned int IPM00:1;             /*  = [16] = 0x00010000 */
      unsigned int IPM01:1;             /*  = [17] = 0x00020000 */
      unsigned int IPM02:1;             /*  = [18] = 0x00040000 */
      unsigned int IPM03:1;             /*  = [19] = 0x00080000 */
      unsigned int IPM04:1;             /*  = [20] = 0x00100000 */
      unsigned int IPM05:1;             /*  = [21] = 0x00200000 */
      unsigned int IPM06:1;             /*  = [22] = 0x00400000 */
      unsigned int IPM07:1;             /*  = [23] = 0x00800000 */
      unsigned int IPM10:1;             /*  = [24] = 0x01000000 */
      unsigned int IPM11:1;             /*  = [25] = 0x02000000 */
      unsigned int IPM12:1;             /*  = [26] = 0x04000000 */
      unsigned int IPM13:1;             /*  = [27] = 0x08000000 */
      unsigned int IPM14:1;             /*  = [28] = 0x10000000 */
      unsigned int IPM15:1;             /*  = [29] = 0x20000000 */
      unsigned int IPM16:1;             /*  = [30] = 0x40000000 */
      unsigned int IPM17:1;             /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) DMA_INTSR_t_nonv;

typedef volatile DMA_INTSR_t_nonv DMA_INTSR_t;

/********************** DMA_MESR_t *************************/
/*
   DMA_MESR              "DMA Move Engine Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ME0RS:1;             /*  = [0] = 0x00000001 */
      unsigned int CH0:3;               /*  = [1..3] = 0x0000000e */
      unsigned int ME0WS:1;             /*  = [4] = 0x00000010 */
      unsigned int RBTFPI:3;            /*  = [5..7] = 0x000000e0 */
      unsigned int ME1RS:1;             /*  = [8] = 0x00000100 */
      unsigned int CH1:3;               /*  = [9..11] = 0x00000e00 */
      unsigned int ME1WS:1;             /*  = [12] = 0x00001000 */
      unsigned int RBTLMB:3;            /*  = [13..15] = 0x0000e000 */
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
} __attribute__((aligned(4))) DMA_MESR_t_nonv;

typedef volatile DMA_MESR_t_nonv DMA_MESR_t;

/********************** DMA_OCDSR_t *************************/
/*
   DMA_OCDSR             "DMA OCDS Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int BTRC0:2;             /*  = [0..1] = 0x00000003 */
      unsigned int BCHS0:3;             /*  = [2..4] = 0x0000001c */
      unsigned int BRL0:1;              /*  = [5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int BTRC1:2;             /*  = [8..9] = 0x00000300 */
      unsigned int BCHS1:3;             /*  = [10..12] = 0x00001c00 */
      unsigned int BRL1:1;              /*  = [13] = 0x00002000 */
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
} __attribute__((aligned(4))) DMA_OCDSR_t_nonv;

typedef volatile DMA_OCDSR_t_nonv DMA_OCDSR_t;

/********************** DMA_STREQ_t *************************/
/*
   DMA_STREQ             "DMA Software Transaction Request Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SCH00:1;             /*  = [0] = 0x00000001 */
      unsigned int SCH01:1;             /*  = [1] = 0x00000002 */
      unsigned int SCH02:1;             /*  = [2] = 0x00000004 */
      unsigned int SCH03:1;             /*  = [3] = 0x00000008 */
      unsigned int SCH04:1;             /*  = [4] = 0x00000010 */
      unsigned int SCH05:1;             /*  = [5] = 0x00000020 */
      unsigned int SCH06:1;             /*  = [6] = 0x00000040 */
      unsigned int SCH07:1;             /*  = [7] = 0x00000080 */
      unsigned int SCH10:1;             /*  = [8] = 0x00000100 */
      unsigned int SCH11:1;             /*  = [9] = 0x00000200 */
      unsigned int SCH12:1;             /*  = [10] = 0x00000400 */
      unsigned int SCH13:1;             /*  = [11] = 0x00000800 */
      unsigned int SCH14:1;             /*  = [12] = 0x00001000 */
      unsigned int SCH15:1;             /*  = [13] = 0x00002000 */
      unsigned int SCH16:1;             /*  = [14] = 0x00004000 */
      unsigned int SCH17:1;             /*  = [15] = 0x00008000 */
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
} __attribute__((aligned(4))) DMA_STREQ_t_nonv;

typedef volatile DMA_STREQ_t_nonv DMA_STREQ_t;

/********************** DMA_SUSPMR_t *************************/
/*
   DMA_SUSPMR            "DMA Suspend Mode Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SUSEN00:1;           /*  = [0] = 0x00000001 */
      unsigned int SUSEN01:1;           /*  = [1] = 0x00000002 */
      unsigned int SUSEN02:1;           /*  = [2] = 0x00000004 */
      unsigned int SUSEN03:1;           /*  = [3] = 0x00000008 */
      unsigned int SUSEN04:1;           /*  = [4] = 0x00000010 */
      unsigned int SUSEN05:1;           /*  = [5] = 0x00000020 */
      unsigned int SUSEN06:1;           /*  = [6] = 0x00000040 */
      unsigned int SUSEN07:1;           /*  = [7] = 0x00000080 */
      unsigned int SUSEN10:1;           /*  = [8] = 0x00000100 */
      unsigned int SUSEN11:1;           /*  = [9] = 0x00000200 */
      unsigned int SUSEN12:1;           /*  = [10] = 0x00000400 */
      unsigned int SUSEN13:1;           /*  = [11] = 0x00000800 */
      unsigned int SUSEN14:1;           /*  = [12] = 0x00001000 */
      unsigned int SUSEN15:1;           /*  = [13] = 0x00002000 */
      unsigned int SUSEN16:1;           /*  = [14] = 0x00004000 */
      unsigned int SUSEN17:1;           /*  = [15] = 0x00008000 */
      unsigned int SUSAC00:1;           /*  = [16] = 0x00010000 */
      unsigned int SUSAC01:1;           /*  = [17] = 0x00020000 */
      unsigned int SUSAC02:1;           /*  = [18] = 0x00040000 */
      unsigned int SUSAC03:1;           /*  = [19] = 0x00080000 */
      unsigned int SUSAC04:1;           /*  = [20] = 0x00100000 */
      unsigned int SUSAC05:1;           /*  = [21] = 0x00200000 */
      unsigned int SUSAC06:1;           /*  = [22] = 0x00400000 */
      unsigned int SUSAC07:1;           /*  = [23] = 0x00800000 */
      unsigned int SUSAC10:1;           /*  = [24] = 0x01000000 */
      unsigned int SUSAC11:1;           /*  = [25] = 0x02000000 */
      unsigned int SUSAC12:1;           /*  = [26] = 0x04000000 */
      unsigned int SUSAC13:1;           /*  = [27] = 0x08000000 */
      unsigned int SUSAC14:1;           /*  = [28] = 0x10000000 */
      unsigned int SUSAC15:1;           /*  = [29] = 0x20000000 */
      unsigned int SUSAC16:1;           /*  = [30] = 0x40000000 */
      unsigned int SUSAC17:1;           /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) DMA_SUSPMR_t_nonv;

typedef volatile DMA_SUSPMR_t_nonv DMA_SUSPMR_t;

/********************** DMA_TRSR_t *************************/
/*
   DMA_TRSR              "DMA Transaction Request State Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CH00:1;              /*  = [0] = 0x00000001 */
      unsigned int CH01:1;              /*  = [1] = 0x00000002 */
      unsigned int CH02:1;              /*  = [2] = 0x00000004 */
      unsigned int CH03:1;              /*  = [3] = 0x00000008 */
      unsigned int CH04:1;              /*  = [4] = 0x00000010 */
      unsigned int CH05:1;              /*  = [5] = 0x00000020 */
      unsigned int CH06:1;              /*  = [6] = 0x00000040 */
      unsigned int CH07:1;              /*  = [7] = 0x00000080 */
      unsigned int CH10:1;              /*  = [8] = 0x00000100 */
      unsigned int CH11:1;              /*  = [9] = 0x00000200 */
      unsigned int CH12:1;              /*  = [10] = 0x00000400 */
      unsigned int CH13:1;              /*  = [11] = 0x00000800 */
      unsigned int CH14:1;              /*  = [12] = 0x00001000 */
      unsigned int CH15:1;              /*  = [13] = 0x00002000 */
      unsigned int CH16:1;              /*  = [14] = 0x00004000 */
      unsigned int CH17:1;              /*  = [15] = 0x00008000 */
      unsigned int HTRE00:1;            /*  = [16] = 0x00010000 */
      unsigned int HTRE01:1;            /*  = [17] = 0x00020000 */
      unsigned int HTRE02:1;            /*  = [18] = 0x00040000 */
      unsigned int HTRE03:1;            /*  = [19] = 0x00080000 */
      unsigned int HTRE04:1;            /*  = [20] = 0x00100000 */
      unsigned int HTRE05:1;            /*  = [21] = 0x00200000 */
      unsigned int HTRE06:1;            /*  = [22] = 0x00400000 */
      unsigned int HTRE07:1;            /*  = [23] = 0x00800000 */
      unsigned int HTRE10:1;            /*  = [24] = 0x01000000 */
      unsigned int HTRE11:1;            /*  = [25] = 0x02000000 */
      unsigned int HTRE12:1;            /*  = [26] = 0x04000000 */
      unsigned int HTRE13:1;            /*  = [27] = 0x08000000 */
      unsigned int HTRE14:1;            /*  = [28] = 0x10000000 */
      unsigned int HTRE15:1;            /*  = [29] = 0x20000000 */
      unsigned int HTRE16:1;            /*  = [30] = 0x40000000 */
      unsigned int HTRE17:1;            /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) DMA_TRSR_t_nonv;

typedef volatile DMA_TRSR_t_nonv DMA_TRSR_t;

/********************** DMA_WRPSR_t *************************/
/*
   DMA_WRPSR             "DMA Wrap Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int WRPS00:1;            /*  = [0] = 0x00000001 */
      unsigned int WRPS01:1;            /*  = [1] = 0x00000002 */
      unsigned int WRPS02:1;            /*  = [2] = 0x00000004 */
      unsigned int WRPS03:1;            /*  = [3] = 0x00000008 */
      unsigned int WRPS04:1;            /*  = [4] = 0x00000010 */
      unsigned int WRPS05:1;            /*  = [5] = 0x00000020 */
      unsigned int WRPS06:1;            /*  = [6] = 0x00000040 */
      unsigned int WRPS07:1;            /*  = [7] = 0x00000080 */
      unsigned int WRPS10:1;            /*  = [8] = 0x00000100 */
      unsigned int WRPS11:1;            /*  = [9] = 0x00000200 */
      unsigned int WRPS12:1;            /*  = [10] = 0x00000400 */
      unsigned int WRPS13:1;            /*  = [11] = 0x00000800 */
      unsigned int WRPS14:1;            /*  = [12] = 0x00001000 */
      unsigned int WRPS15:1;            /*  = [13] = 0x00002000 */
      unsigned int WRPS16:1;            /*  = [14] = 0x00004000 */
      unsigned int WRPS17:1;            /*  = [15] = 0x00008000 */
      unsigned int WRPD00:1;            /*  = [16] = 0x00010000 */
      unsigned int WRPD01:1;            /*  = [17] = 0x00020000 */
      unsigned int WRPD02:1;            /*  = [18] = 0x00040000 */
      unsigned int WRPD03:1;            /*  = [19] = 0x00080000 */
      unsigned int WRPD04:1;            /*  = [20] = 0x00100000 */
      unsigned int WRPD05:1;            /*  = [21] = 0x00200000 */
      unsigned int WRPD06:1;            /*  = [22] = 0x00400000 */
      unsigned int WRPD07:1;            /*  = [23] = 0x00800000 */
      unsigned int WRPD10:1;            /*  = [24] = 0x01000000 */
      unsigned int WRPD11:1;            /*  = [25] = 0x02000000 */
      unsigned int WRPD12:1;            /*  = [26] = 0x04000000 */
      unsigned int WRPD13:1;            /*  = [27] = 0x08000000 */
      unsigned int WRPD14:1;            /*  = [28] = 0x10000000 */
      unsigned int WRPD15:1;            /*  = [29] = 0x20000000 */
      unsigned int WRPD16:1;            /*  = [30] = 0x40000000 */
      unsigned int WRPD17:1;            /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) DMA_WRPSR_t_nonv;

typedef volatile DMA_WRPSR_t_nonv DMA_WRPSR_t;

/********************** MCHK_ID_t *************************/
/*
   MCHK_ID               "Module Identification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MOD_REV:8;           /*  = [0..7] = 0x000000ff */
      unsigned int MOD_TYPE:8;          /*  = [8..15] = 0x0000ff00 */
      unsigned int MOD_NUMBER:16;       /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) MCHK_ID_t_nonv;

typedef volatile MCHK_ID_t_nonv MCHK_ID_t;

/********************** MCHK_WR_t *************************/
/*
   MCHK_WR               "Memory Checker Write Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int WO:32;               /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) MCHK_WR_t_nonv;

typedef volatile MCHK_WR_t_nonv MCHK_WR_t;


#endif /* _HAVE_TRICORE_DMA_TYPES_H_ */

