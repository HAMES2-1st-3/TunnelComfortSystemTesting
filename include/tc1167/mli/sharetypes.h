/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_MLI_SHARETYPES_H_
#define _HAVE_TRICORE_MLI_SHARETYPES_H_


/********************** MLI0_RPmBAR_t *************************/
/*
   MLI0_RP0BAR           "Receiver Pipe 0 Base Address Register"
   MLI0_RP1BAR           "Receiver Pipe 1 Base Address Register"
   MLI0_RP2BAR           "Receiver Pipe 2 Base Address Register"
   MLI0_RP3BAR           "Receiver Pipe 3 Base Address Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ADDR:32;             /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MLI0_RPmBAR_t_nonv;

typedef volatile MLI0_RPmBAR_t_nonv MLI0_RPmBAR_t;

/********************** MLI0_RPmSTATR_t *************************/
/*
   MLI0_RP0STATR         "Receiver Pipe 0 Status Register"
   MLI0_RP1STATR         "Receiver Pipe 1 Status Register"
   MLI0_RP2STATR         "Receiver Pipe 2 Status Register"
   MLI0_RP3STATR         "Receiver Pipe 3 Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int BS:4;                /*  = [0..3] = 0x0000000f */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int AP:10;               /*  = [6..15] = 0x0000ffc0 */
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
} __attribute__((aligned(4))) MLI0_RPmSTATR_t_nonv;

typedef volatile MLI0_RPmSTATR_t_nonv MLI0_RPmSTATR_t;

/********************** MLI0_TPmAOFR_t *************************/
/*
   MLI0_TP0AOFR          "Transmitter Pipe 0 Address Offset Register"
   MLI0_TP1AOFR          "Transmitter Pipe 1 Address Offset Register"
   MLI0_TP2AOFR          "Transmitter Pipe 2 Address Offset Register"
   MLI0_TP3AOFR          "Transmitter Pipe 3 Address Offset Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int AOFF:16;             /*  = [0..15] = 0x0000ffff */
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
} __attribute__((aligned(4))) MLI0_TPmAOFR_t_nonv;

typedef volatile MLI0_TPmAOFR_t_nonv MLI0_TPmAOFR_t;

/********************** MLI0_TPmBAR_t *************************/
/*
   MLI0_TP0BAR           "Transmitter Pipe 0 Base Address Register"
   MLI0_TP1BAR           "Transmitter Pipe 1 Base Address Register"
   MLI0_TP2BAR           "Transmitter Pipe 2 Base Address Register"
   MLI0_TP3BAR           "Transmitter Pipe 3 Base Address Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int BS:4;                /*  = [0..3] = 0x0000000f */
      unsigned int ADDR:28;             /*  = [4..31] = 0xfffffff0 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MLI0_TPmBAR_t_nonv;

typedef volatile MLI0_TPmBAR_t_nonv MLI0_TPmBAR_t;

/********************** MLI0_TPmDATAR_t *************************/
/*
   MLI0_TP0DATAR         "Transmitter Pipe 0 Data Register"
   MLI0_TP1DATAR         "Transmitter Pipe 1 Data Register"
   MLI0_TP2DATAR         "Transmitter Pipe 2 Data Register"
   MLI0_TP3DATAR         "Transmitter Pipe 3 Data Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DATA:32;             /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) MLI0_TPmDATAR_t_nonv;

typedef volatile MLI0_TPmDATAR_t_nonv MLI0_TPmDATAR_t;

/********************** MLI0_TPmSTATR_t *************************/
/*
   MLI0_TP0STATR         "Transmitter Pipe 0 Status Register"
   MLI0_TP1STATR         "Transmitter Pipe 1 Status Register"
   MLI0_TP2STATR         "Transmitter Pipe 2 Status Register"
   MLI0_TP3STATR         "Transmitter Pipe 3 Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int BS:4;                /*  = [0..3] = 0x0000000f */
      unsigned int DW:2;                /*  = [4..5] = 0x00000030 */
      unsigned int AP:10;               /*  = [6..15] = 0x0000ffc0 */
      unsigned int OP:1;                /*  = [16..16] = 0x00010000 */
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
} __attribute__((aligned(4))) MLI0_TPmSTATR_t_nonv;

typedef volatile MLI0_TPmSTATR_t_nonv MLI0_TPmSTATR_t;


#endif /* _HAVE_TRICORE_MLI_SHARETYPES_H_ */

