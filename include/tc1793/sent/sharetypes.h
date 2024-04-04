/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_SENT_SHARETYPES_H_
#define _HAVE_TRICORE_SENT_SHARETYPES_H_


/********************** SENT_CFDRm_t *************************/
/*
   SENT_CFDR0            "Channel Fractional Divider Register 0"
   SENT_CFDR1            "Channel Fractional Divider Register 1"
   SENT_CFDR2            "Channel Fractional Divider Register 2"
   SENT_CFDR3            "Channel Fractional Divider Register 3"
   SENT_CFDR4            "Channel Fractional Divider Register 4"
   SENT_CFDR5            "Channel Fractional Divider Register 5"
   SENT_CFDR6            "Channel Fractional Divider Register 6"
   SENT_CFDR7            "Channel Fractional Divider Register 7"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DIV:12;              /*  = [0..11] = 0x00000fff */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int DIVM:12;             /*  = [16..27] = 0x0fff0000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) SENT_CFDRm_t_nonv;

typedef volatile SENT_CFDRm_t_nonv SENT_CFDRm_t;

/********************** SENT_CPDRm_t *************************/
/*
   SENT_CPDR0            "Channel Pre Divider Register 0"
   SENT_CPDR1            "Channel Pre Divider Register 1"
   SENT_CPDR2            "Channel Pre Divider Register 2"
   SENT_CPDR3            "Channel Pre Divider Register 3"
   SENT_CPDR4            "Channel Pre Divider Register 4"
   SENT_CPDR5            "Channel Pre Divider Register 5"
   SENT_CPDR6            "Channel Pre Divider Register 6"
   SENT_CPDR7            "Channel Pre Divider Register 7"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int PDIV:12;             /*  = [0..11] = 0x00000fff */
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
} __attribute__((aligned(4))) SENT_CPDRm_t_nonv;

typedef volatile SENT_CPDRm_t_nonv SENT_CPDRm_t;

/********************** SENT_INPm_t *************************/
/*
   SENT_INP0             "Interrupt Node Pointer Register 0"
   SENT_INP1             "Interrupt Node Pointer Register 1"
   SENT_INP2             "Interrupt Node Pointer Register 2"
   SENT_INP3             "Interrupt Node Pointer Register 3"
   SENT_INP4             "Interrupt Node Pointer Register 4"
   SENT_INP5             "Interrupt Node Pointer Register 5"
   SENT_INP6             "Interrupt Node Pointer Register 6"
   SENT_INP7             "Interrupt Node Pointer Register 7"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RSI:4;               /*  = [0..3] = 0x0000000f */
      unsigned int RDI:4;               /*  = [4..7] = 0x000000f0 */
      unsigned int RBI:4;               /*  = [8..11] = 0x00000f00 */
      unsigned int TDI:4;               /*  = [12..15] = 0x0000f000 */
      unsigned int TBI:4;               /*  = [16..19] = 0x000f0000 */
      unsigned int ERRI:4;              /*  = [20..23] = 0x00f00000 */
      unsigned int SDI:4;               /*  = [24..27] = 0x0f000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) SENT_INPm_t_nonv;

typedef volatile SENT_INPm_t_nonv SENT_INPm_t;

/********************** SENT_INTCLRm_t *************************/
/*
   SENT_INTCLR0          "Interrupt Clear Register 0"
   SENT_INTCLR1          "Interrupt Clear Register 1"
   SENT_INTCLR2          "Interrupt Clear Register 2"
   SENT_INTCLR3          "Interrupt Clear Register 3"
   SENT_INTCLR4          "Interrupt Clear Register 4"
   SENT_INTCLR5          "Interrupt Clear Register 5"
   SENT_INTCLR6          "Interrupt Clear Register 6"
   SENT_INTCLR7          "Interrupt Clear Register 7"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RSI:1;               /*  = [0] = 0x00000001 */
      unsigned int RDI:1;               /*  = [1] = 0x00000002 */
      unsigned int RBI:1;               /*  = [2] = 0x00000004 */
      unsigned int TDI:1;               /*  = [3] = 0x00000008 */
      unsigned int TBI:1;               /*  = [4] = 0x00000010 */
      unsigned int FRI:1;               /*  = [5] = 0x00000020 */
      unsigned int FDI:1;               /*  = [6] = 0x00000040 */
      unsigned int NNI:1;               /*  = [7] = 0x00000080 */
      unsigned int NVI:1;               /*  = [8] = 0x00000100 */
      unsigned int CRCI:1;              /*  = [9] = 0x00000200 */
      unsigned int WSI:1;               /*  = [10] = 0x00000400 */
      unsigned int SDI:1;               /*  = [11] = 0x00000800 */
      unsigned int SCRI:1;              /*  = [12] = 0x00001000 */
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
} __attribute__((aligned(4))) SENT_INTCLRm_t_nonv;

typedef volatile SENT_INTCLRm_t_nonv SENT_INTCLRm_t;

/********************** SENT_INTENm_t *************************/
/*
   SENT_INTEN0           "Interrupt Enable Register 0"
   SENT_INTEN1           "Interrupt Enable Register 1"
   SENT_INTEN2           "Interrupt Enable Register 2"
   SENT_INTEN3           "Interrupt Enable Register 3"
   SENT_INTEN4           "Interrupt Enable Register 4"
   SENT_INTEN5           "Interrupt Enable Register 5"
   SENT_INTEN6           "Interrupt Enable Register 6"
   SENT_INTEN7           "Interrupt Enable Register 7"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RSI:1;               /*  = [0] = 0x00000001 */
      unsigned int RDI:1;               /*  = [1] = 0x00000002 */
      unsigned int RBI:1;               /*  = [2] = 0x00000004 */
      unsigned int TDI:1;               /*  = [3] = 0x00000008 */
      unsigned int TBI:1;               /*  = [4] = 0x00000010 */
      unsigned int FRI:1;               /*  = [5] = 0x00000020 */
      unsigned int FDI:1;               /*  = [6] = 0x00000040 */
      unsigned int NNI:1;               /*  = [7] = 0x00000080 */
      unsigned int NVI:1;               /*  = [8] = 0x00000100 */
      unsigned int CRCI:1;              /*  = [9] = 0x00000200 */
      unsigned int WSI:1;               /*  = [10] = 0x00000400 */
      unsigned int SDI:1;               /*  = [11] = 0x00000800 */
      unsigned int SCRI:1;              /*  = [12] = 0x00001000 */
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
} __attribute__((aligned(4))) SENT_INTENm_t_nonv;

typedef volatile SENT_INTENm_t_nonv SENT_INTENm_t;

/********************** SENT_INTSETm_t *************************/
/*
   SENT_INTSET0          "Interrupt Set Register 0"
   SENT_INTSET1          "Interrupt Set Register 1"
   SENT_INTSET2          "Interrupt Set Register 2"
   SENT_INTSET3          "Interrupt Set Register 3"
   SENT_INTSET4          "Interrupt Set Register 4"
   SENT_INTSET5          "Interrupt Set Register 5"
   SENT_INTSET6          "Interrupt Set Register 6"
   SENT_INTSET7          "Interrupt Set Register 7"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RSI:1;               /*  = [0] = 0x00000001 */
      unsigned int RDI:1;               /*  = [1] = 0x00000002 */
      unsigned int RBI:1;               /*  = [2] = 0x00000004 */
      unsigned int TDI:1;               /*  = [3] = 0x00000008 */
      unsigned int TBI:1;               /*  = [4] = 0x00000010 */
      unsigned int FRI:1;               /*  = [5] = 0x00000020 */
      unsigned int FDI:1;               /*  = [6] = 0x00000040 */
      unsigned int NNI:1;               /*  = [7] = 0x00000080 */
      unsigned int NVI:1;               /*  = [8] = 0x00000100 */
      unsigned int CRCI:1;              /*  = [9] = 0x00000200 */
      unsigned int WSI:1;               /*  = [10] = 0x00000400 */
      unsigned int SDI:1;               /*  = [11] = 0x00000800 */
      unsigned int SCRI:1;              /*  = [12] = 0x00001000 */
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
} __attribute__((aligned(4))) SENT_INTSETm_t_nonv;

typedef volatile SENT_INTSETm_t_nonv SENT_INTSETm_t;

/********************** SENT_INTSTATm_t *************************/
/*
   SENT_INTSTAT0         "Interrupt Status Register 0"
   SENT_INTSTAT1         "Interrupt Status Register 1"
   SENT_INTSTAT2         "Interrupt Status Register 2"
   SENT_INTSTAT3         "Interrupt Status Register 3"
   SENT_INTSTAT4         "Interrupt Status Register 4"
   SENT_INTSTAT5         "Interrupt Status Register 5"
   SENT_INTSTAT6         "Interrupt Status Register 6"
   SENT_INTSTAT7         "Interrupt Status Register 7"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RSI:1;               /*  = [0] = 0x00000001 */
      unsigned int RDI:1;               /*  = [1] = 0x00000002 */
      unsigned int RBI:1;               /*  = [2] = 0x00000004 */
      unsigned int TDI:1;               /*  = [3] = 0x00000008 */
      unsigned int TBI:1;               /*  = [4] = 0x00000010 */
      unsigned int FRI:1;               /*  = [5] = 0x00000020 */
      unsigned int FDI:1;               /*  = [6] = 0x00000040 */
      unsigned int NNI:1;               /*  = [7] = 0x00000080 */
      unsigned int NVI:1;               /*  = [8] = 0x00000100 */
      unsigned int CRCI:1;              /*  = [9] = 0x00000200 */
      unsigned int WSI:1;               /*  = [10] = 0x00000400 */
      unsigned int SDI:1;               /*  = [11] = 0x00000800 */
      unsigned int SCRI:1;              /*  = [12] = 0x00001000 */
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
} __attribute__((aligned(4))) SENT_INTSTATm_t_nonv;

typedef volatile SENT_INTSTATm_t_nonv SENT_INTSTATm_t;

/********************** SENT_IOCRm_t *************************/
/*
   SENT_IOCR0            "Input and Output Control Register 0"
   SENT_IOCR1            "Input and Output Control Register 1"
   SENT_IOCR2            "Input and Output Control Register 2"
   SENT_IOCR3            "Input and Output Control Register 3"
   SENT_IOCR4            "Input and Output Control Register 4"
   SENT_IOCR5            "Input and Output Control Register 5"
   SENT_IOCR6            "Input and Output Control Register 6"
   SENT_IOCR7            "Input and Output Control Register 7"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ALTI:2;              /*  = [0..1] = 0x00000003 */
      unsigned int _bit2:1;             /* 0 = [2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3] = 0x00000008 */
      unsigned int DEPTH:4;             /*  = [4..7] = 0x000000f0 */
      unsigned int OIE:1;               /*  = [8] = 0x00000100 */
      unsigned int IIE:1;               /*  = [9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int REG:1;               /*  = [12] = 0x00001000 */
      unsigned int FEG:1;               /*  = [13] = 0x00002000 */
      unsigned int CREG:1;              /*  = [14] = 0x00004000 */
      unsigned int CFEG:1;              /*  = [15] = 0x00008000 */
      unsigned int ETS:3;               /*  = [16..18] = 0x00070000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int CTR:1;               /*  = [28] = 0x10000000 */
      unsigned int TRM:1;               /*  = [29] = 0x20000000 */
      unsigned int RXM:1;               /*  = [30] = 0x40000000 */
      unsigned int TXM:1;               /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) SENT_IOCRm_t_nonv;

typedef volatile SENT_IOCRm_t_nonv SENT_IOCRm_t;

/********************** SENT_RCRm_t *************************/
/*
   SENT_RCR0             "Receiver Control Register 0"
   SENT_RCR1             "Receiver Control Register 1"
   SENT_RCR2             "Receiver Control Register 2"
   SENT_RCR3             "Receiver Control Register 3"
   SENT_RCR4             "Receiver Control Register 4"
   SENT_RCR5             "Receiver Control Register 5"
   SENT_RCR6             "Receiver Control Register 6"
   SENT_RCR7             "Receiver Control Register 7"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CEN:1;               /*  = [0] = 0x00000001 */
      unsigned int IEP:1;               /*  = [1] = 0x00000002 */
      unsigned int ACE:1;               /*  = [2] = 0x00000004 */
      unsigned int SNI:1;               /*  = [3] = 0x00000008 */
      unsigned int SDP:1;               /*  = [4] = 0x00000010 */
      unsigned int SCDIS:1;             /*  = [5] = 0x00000020 */
      unsigned int CDIS:1;              /*  = [6] = 0x00000040 */
      unsigned int CFC:1;               /*  = [7] = 0x00000080 */
      unsigned int FRL:8;               /*  = [8..15] = 0x0000ff00 */
      unsigned int CRZ:1;               /*  = [16] = 0x00010000 */
      unsigned int ESF:1;               /*  = [17] = 0x00020000 */
      unsigned int IDE:1;               /*  = [18] = 0x00040000 */
      unsigned int SUSEN:1;             /*  = [19] = 0x00080000 */
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
} __attribute__((aligned(4))) SENT_RCRm_t_nonv;

typedef volatile SENT_RCRm_t_nonv SENT_RCRm_t;

/********************** SENT_RDRm_t *************************/
/*
   SENT_RDR0             "Receive Data Register 0"
   SENT_RDR1             "Receive Data Register 1"
   SENT_RDR2             "Receive Data Register 2"
   SENT_RDR3             "Receive Data Register 3"
   SENT_RDR4             "Receive Data Register 4"
   SENT_RDR5             "Receive Data Register 5"
   SENT_RDR6             "Receive Data Register 6"
   SENT_RDR7             "Receive Data Register 7"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RD0:4;               /*  = [0..3] = 0x0000000f */
      unsigned int RD1:4;               /*  = [4..7] = 0x000000f0 */
      unsigned int RD2:4;               /*  = [8..11] = 0x00000f00 */
      unsigned int RD3:4;               /*  = [12..15] = 0x0000f000 */
      unsigned int RD4:4;               /*  = [16..19] = 0x000f0000 */
      unsigned int RD5:4;               /*  = [20..23] = 0x00f00000 */
      unsigned int RD6:4;               /*  = [24..27] = 0x0f000000 */
      unsigned int RD7:4;               /*  = [28..31] = 0xf0000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) SENT_RDRm_t_nonv;

typedef volatile SENT_RDRm_t_nonv SENT_RDRm_t;

/********************** SENT_RSRm_t *************************/
/*
   SENT_RSR0             "Receive Status Register 0"
   SENT_RSR1             "Receive Status Register 1"
   SENT_RSR2             "Receive Status Register 2"
   SENT_RSR3             "Receive Status Register 3"
   SENT_RSR4             "Receive Status Register 4"
   SENT_RSR5             "Receive Status Register 5"
   SENT_RSR6             "Receive Status Register 6"
   SENT_RSR7             "Receive Status Register 7"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CRC:4;               /*  = [0..3] = 0x0000000f */
      unsigned int CST:2;               /*  = [4..5] = 0x00000030 */
      unsigned int _bit6:1;             /* 0 = [6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int SCN:4;               /*  = [8..11] = 0x00000f00 */
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
} __attribute__((aligned(4))) SENT_RSRm_t_nonv;

typedef volatile SENT_RSRm_t_nonv SENT_RSRm_t;

/********************** SENT_SCRm_t *************************/
/*
   SENT_SCR0             "SPC Control Register 0"
   SENT_SCR1             "SPC Control Register 1"
   SENT_SCR2             "SPC Control Register 2"
   SENT_SCR3             "SPC Control Register 3"
   SENT_SCR4             "SPC Control Register 4"
   SENT_SCR5             "SPC Control Register 5"
   SENT_SCR6             "SPC Control Register 6"
   SENT_SCR7             "SPC Control Register 7"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int PLEN:6;              /*  = [0..5] = 0x0000003f */
      unsigned int TRIG:2;              /*  = [6..7] = 0x000000c0 */
      unsigned int DEL:6;               /*  = [8..13] = 0x00003f00 */
      unsigned int BASE:1;              /*  = [14] = 0x00004000 */
      unsigned int TRQ:1;               /*  = [15] = 0x00008000 */
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
} __attribute__((aligned(4))) SENT_SCRm_t_nonv;

typedef volatile SENT_SCRm_t_nonv SENT_SCRm_t;

/********************** SENT_SDSm_t *************************/
/*
   SENT_SDS0             "Serial Data and Status Register 0"
   SENT_SDS1             "Serial Data and Status Register 1"
   SENT_SDS2             "Serial Data and Status Register 2"
   SENT_SDS3             "Serial Data and Status Register 3"
   SENT_SDS4             "Serial Data and Status Register 4"
   SENT_SDS5             "Serial Data and Status Register 5"
   SENT_SDS6             "Serial Data and Status Register 6"
   SENT_SDS7             "Serial Data and Status Register 7"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SD:16;               /*  = [0..15] = 0x0000ffff */
      unsigned int MID:8;               /*  = [16..23] = 0x00ff0000 */
      unsigned int SCRC:6;              /*  = [24..29] = 0x3f000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int CON:1;               /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) SENT_SDSm_t_nonv;

typedef volatile SENT_SDSm_t_nonv SENT_SDSm_t;

/********************** SENT_SRCm_t *************************/
/*
   SENT_SRC0             "Service Request Control 0 Register"
   SENT_SRC1             "Service Request Control 1 Register"
   SENT_SRC2             "Service Request Control 2 Register"
   SENT_SRC3             "Service Request Control 3 Register"
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
} __attribute__((aligned(4))) SENT_SRCm_t_nonv;

typedef volatile SENT_SRCm_t_nonv SENT_SRCm_t;

/********************** SENT_VIEWm_t *************************/
/*
   SENT_VIEW0            "Receive Data View Register 0"
   SENT_VIEW1            "Receive Data View Register 1"
   SENT_VIEW2            "Receive Data View Register 2"
   SENT_VIEW3            "Receive Data View Register 3"
   SENT_VIEW4            "Receive Data View Register 4"
   SENT_VIEW5            "Receive Data View Register 5"
   SENT_VIEW6            "Receive Data View Register 6"
   SENT_VIEW7            "Receive Data View Register 7"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RDNP0:3;             /*  = [0..2] = 0x00000007 */
      unsigned int _bit3:1;             /* 0 = [3] = 0x00000008 */
      unsigned int RDNP1:3;             /*  = [4..6] = 0x00000070 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int RDNP2:3;             /*  = [8..10] = 0x00000700 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int RDNP3:3;             /*  = [12..14] = 0x00007000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int RDNP4:3;             /*  = [16..18] = 0x00070000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int RDNP5:3;             /*  = [20..22] = 0x00700000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int RDNP6:3;             /*  = [24..26] = 0x07000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int RDNP7:3;             /*  = [28..30] = 0x70000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) SENT_VIEWm_t_nonv;

typedef volatile SENT_VIEWm_t_nonv SENT_VIEWm_t;


#endif /* _HAVE_TRICORE_SENT_SHARETYPES_H_ */

