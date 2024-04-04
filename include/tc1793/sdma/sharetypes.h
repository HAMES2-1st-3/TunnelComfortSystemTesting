/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_SDMA_SHARETYPES_H_
#define _HAVE_TRICORE_SDMA_SHARETYPES_H_


/********************** SDMA_ADRCRm_t *************************/
/*
   SDMA_ADRCR00          "SDMA Channel 00 Address Control Register"
   SDMA_ADRCR01          "SDMA Channel 01 Address Control Register"
   SDMA_ADRCR02          "SDMA Channel 02 Address Control Register"
   SDMA_ADRCR03          "SDMA Channel 03 Address Control Register"
   SDMA_ADRCR04          "SDMA Channel 04 Address Control Register"
   SDMA_ADRCR05          "SDMA Channel 05 Address Control Register"
   SDMA_ADRCR06          "SDMA Channel 06 Address Control Register"
   SDMA_ADRCR07          "SDMA Channel 07 Address Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SMF:3;               /*  = [0..2] = 0x00000007 */
      unsigned int INCS:1;              /*  = [3] = 0x00000008 */
      unsigned int DMF:3;               /*  = [4..6] = 0x00000070 */
      unsigned int INCD:1;              /*  = [7] = 0x00000080 */
      unsigned int CBLS:4;              /*  = [8..11] = 0x00000f00 */
      unsigned int CBLD:4;              /*  = [12..15] = 0x0000f000 */
      unsigned int SHCT:2;              /*  = [16..17] = 0x00030000 */
      unsigned int SHWEN:1;             /*  = [18] = 0x00040000 */
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
} __attribute__((aligned(4))) SDMA_ADRCRm_t_nonv;

typedef volatile SDMA_ADRCRm_t_nonv SDMA_ADRCRm_t;

/********************** SDMA_CHCRm_t *************************/
/*
   SDMA_CHCR00           "SDMA Channel 00 Control Register"
   SDMA_CHCR01           "SDMA Channel 01 Control Register"
   SDMA_CHCR02           "SDMA Channel 02 Control Register"
   SDMA_CHCR03           "SDMA Channel 03 Control Register"
   SDMA_CHCR04           "SDMA Channel 04 Control Register"
   SDMA_CHCR05           "SDMA Channel 05 Control Register"
   SDMA_CHCR06           "SDMA Channel 06 Control Register"
   SDMA_CHCR07           "SDMA Channel 07 Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TREL:10;             /*  = [0..9] = 0x000003ff */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int PRSEL:4;             /*  = [12..15] = 0x0000f000 */
      unsigned int BLKM:3;              /*  = [16..18] = 0x00070000 */
      unsigned int RROAT:1;             /*  = [19] = 0x00080000 */
      unsigned int CHMODE:1;            /*  = [20] = 0x00100000 */
      unsigned int CHDW:2;              /*  = [21..22] = 0x00600000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int PATSEL:2;            /*  = [24..25] = 0x03000000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int CHPRIO:1;            /*  = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) SDMA_CHCRm_t_nonv;

typedef volatile SDMA_CHCRm_t_nonv SDMA_CHCRm_t;

/********************** SDMA_CHICRm_t *************************/
/*
   SDMA_CHICR00          "SDMA Channel 00 Interrupt Control Register"
   SDMA_CHICR01          "SDMA Channel 01 Interrupt Control Register"
   SDMA_CHICR02          "SDMA Channel 02 Interrupt Control Register"
   SDMA_CHICR03          "SDMA Channel 03 Interrupt Control Register"
   SDMA_CHICR04          "SDMA Channel 04 Interrupt Control Register"
   SDMA_CHICR05          "SDMA Channel 05 Interrupt Control Register"
   SDMA_CHICR06          "SDMA Channel 06 Interrupt Control Register"
   SDMA_CHICR07          "SDMA Channel 07 Interrupt Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int WRPSE:1;             /*  = [0] = 0x00000001 */
      unsigned int WRPDE:1;             /*  = [1] = 0x00000002 */
      unsigned int INTCT:2;             /*  = [2..3] = 0x0000000c */
      unsigned int WRPP:4;              /*  = [4..7] = 0x000000f0 */
      unsigned int INTP:4;              /*  = [8..11] = 0x00000f00 */
      unsigned int IRDV:4;              /*  = [12..15] = 0x0000f000 */
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
} __attribute__((aligned(4))) SDMA_CHICRm_t_nonv;

typedef volatile SDMA_CHICRm_t_nonv SDMA_CHICRm_t;

/********************** SDMA_CHSRm_t *************************/
/*
   SDMA_CHSR00           "SDMA Channel 00 Status Register"
   SDMA_CHSR01           "SDMA Channel 01 Status Register"
   SDMA_CHSR02           "SDMA Channel 02 Status Register"
   SDMA_CHSR03           "SDMA Channel 03 Status Register"
   SDMA_CHSR04           "SDMA Channel 04 Status Register"
   SDMA_CHSR05           "SDMA Channel 05 Status Register"
   SDMA_CHSR06           "SDMA Channel 06 Status Register"
   SDMA_CHSR07           "SDMA Channel 07 Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TCOUNT:10;           /*  = [0..9] = 0x000003ff */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int LXO:1;               /*  = [15] = 0x00008000 */
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
} __attribute__((aligned(4))) SDMA_CHSRm_t_nonv;

typedef volatile SDMA_CHSRm_t_nonv SDMA_CHSRm_t;

/********************** SDMA_DADRm_t *************************/
/*
   SDMA_DADR00           "SDMA Channel 00 Destination Address Register"
   SDMA_DADR01           "SDMA Channel 01 Destination Address Register"
   SDMA_DADR02           "SDMA Channel 02 Destination Address Register"
   SDMA_DADR03           "SDMA Channel 03 Destination Address Register"
   SDMA_DADR04           "SDMA Channel 04 Destination Address Register"
   SDMA_DADR05           "SDMA Channel 05 Destination Address Register"
   SDMA_DADR06           "SDMA Channel 06 Destination Address Register"
   SDMA_DADR07           "SDMA Channel 07 Destination Address Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DADR:32;             /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) SDMA_DADRm_t_nonv;

typedef volatile SDMA_DADRm_t_nonv SDMA_DADRm_t;

/********************** SDMA_DAMAXm_t *************************/
/*
   SDMA_DAMAX00          "SDMA Channel 00 Destination Address Upper Boundary Register"
   SDMA_DAMAX01          "SDMA Channel 01 Destination Address Upper Boundary Register"
   SDMA_DAMAX02          "SDMA Channel 02 Destination Address Upper Boundary Register"
   SDMA_DAMAX03          "SDMA Channel 03 Destination Address Upper Boundary Register"
   SDMA_DAMAX04          "SDMA Channel 04 Destination Address Upper Boundary Register"
   SDMA_DAMAX05          "SDMA Channel 05 Destination Address Upper Boundary Register"
   SDMA_DAMAX06          "SDMA Channel 06 Destination Address Upper Boundary Register"
   SDMA_DAMAX07          "SDMA Channel 07 Destination Address Upper Boundary Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DAMAX:32;            /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) SDMA_DAMAXm_t_nonv;

typedef volatile SDMA_DAMAXm_t_nonv SDMA_DAMAXm_t;

/********************** SDMA_DAMINm_t *************************/
/*
   SDMA_DAMIN00          "SDMA Channel 00 Destination Address Lower Boundary Register"
   SDMA_DAMIN01          "SDMA Channel 01 Destination Address Lower Boundary Register"
   SDMA_DAMIN02          "SDMA Channel 02 Destination Address Lower Boundary Register"
   SDMA_DAMIN03          "SDMA Channel 03 Destination Address Lower Boundary Register"
   SDMA_DAMIN04          "SDMA Channel 04 Destination Address Lower Boundary Register"
   SDMA_DAMIN05          "SDMA Channel 05 Destination Address Lower Boundary Register"
   SDMA_DAMIN06          "SDMA Channel 06 Destination Address Lower Boundary Register"
   SDMA_DAMIN07          "SDMA Channel 07 Destination Address Lower Boundary Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DAMIN:32;            /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) SDMA_DAMINm_t_nonv;

typedef volatile SDMA_DAMINm_t_nonv SDMA_DAMINm_t;

/********************** SDMA_DCRCm_t *************************/
/*
   SDMA_DCRC00           "SDMA Channel 00 Destination Address CRC Register"
   SDMA_DCRC01           "SDMA Channel 01 Destination Address CRC Register"
   SDMA_DCRC02           "SDMA Channel 02 Destination Address CRC Register"
   SDMA_DCRC03           "SDMA Channel 03 Destination Address CRC Register"
   SDMA_DCRC04           "SDMA Channel 04 Destination Address CRC Register"
   SDMA_DCRC05           "SDMA Channel 05 Destination Address CRC Register"
   SDMA_DCRC06           "SDMA Channel 06 Destination Address CRC Register"
   SDMA_DCRC07           "SDMA Channel 07 Destination Address CRC Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DCRC:32;             /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) SDMA_DCRCm_t_nonv;

typedef volatile SDMA_DCRCm_t_nonv SDMA_DCRCm_t;

/********************** SDMA_RDCRCm_t *************************/
/*
   SDMA_RDCRC00          "SDMA Channel 00 Read Data CRC Register"
   SDMA_RDCRC01          "SDMA Channel 01 Read Data CRC Register"
   SDMA_RDCRC02          "SDMA Channel 02 Read Data CRC Register"
   SDMA_RDCRC03          "SDMA Channel 03 Read Data CRC Register"
   SDMA_RDCRC04          "SDMA Channel 04 Read Data CRC Register"
   SDMA_RDCRC05          "SDMA Channel 05 Read Data CRC Register"
   SDMA_RDCRC06          "SDMA Channel 06 Read Data CRC Register"
   SDMA_RDCRC07          "SDMA Channel 07 Read Data CRC Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RDCRC:32;            /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) SDMA_RDCRCm_t_nonv;

typedef volatile SDMA_RDCRCm_t_nonv SDMA_RDCRCm_t;

/********************** SDMA_SADRm_t *************************/
/*
   SDMA_SADR00           "SDMA Channel 00 Source Address Register"
   SDMA_SADR01           "SDMA Channel 01 Source Address Register"
   SDMA_SADR02           "SDMA Channel 02 Source Address Register"
   SDMA_SADR03           "SDMA Channel 03 Source Address Register"
   SDMA_SADR04           "SDMA Channel 04 Source Address Register"
   SDMA_SADR05           "SDMA Channel 05 Source Address Register"
   SDMA_SADR06           "SDMA Channel 06 Source Address Register"
   SDMA_SADR07           "SDMA Channel 07 Source Address Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SADR:32;             /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) SDMA_SADRm_t_nonv;

typedef volatile SDMA_SADRm_t_nonv SDMA_SADRm_t;

/********************** SDMA_SAMAXm_t *************************/
/*
   SDMA_SAMAX00          "SDMA Channel 00 Source Address Lower Boundary Register"
   SDMA_SAMAX01          "SDMA Channel 01 Source Address Lower Boundary Register"
   SDMA_SAMAX02          "SDMA Channel 02 Source Address Lower Boundary Register"
   SDMA_SAMAX03          "SDMA Channel 03 Source Address Lower Boundary Register"
   SDMA_SAMAX04          "SDMA Channel 04 Source Address Lower Boundary Register"
   SDMA_SAMAX05          "SDMA Channel 05 Source Address Lower Boundary Register"
   SDMA_SAMAX06          "SDMA Channel 06 Source Address Lower Boundary Register"
   SDMA_SAMAX07          "SDMA Channel 07 Source Address Lower Boundary Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SAMAX:32;            /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) SDMA_SAMAXm_t_nonv;

typedef volatile SDMA_SAMAXm_t_nonv SDMA_SAMAXm_t;

/********************** SDMA_SAMINm_t *************************/
/*
   SDMA_SAMIN00          "SDMA Channel 00 Source Address Lower Boundary Register"
   SDMA_SAMIN01          "SDMA Channel 01 Source Address Lower Boundary Register"
   SDMA_SAMIN02          "SDMA Channel 02 Source Address Lower Boundary Register"
   SDMA_SAMIN03          "SDMA Channel 03 Source Address Lower Boundary Register"
   SDMA_SAMIN04          "SDMA Channel 04 Source Address Lower Boundary Register"
   SDMA_SAMIN05          "SDMA Channel 05 Source Address Lower Boundary Register"
   SDMA_SAMIN06          "SDMA Channel 06 Source Address Lower Boundary Register"
   SDMA_SAMIN07          "SDMA Channel 07 Source Address Lower Boundary Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SAMIN:32;            /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) SDMA_SAMINm_t_nonv;

typedef volatile SDMA_SAMINm_t_nonv SDMA_SAMINm_t;

/********************** SDMA_SCRCm_t *************************/
/*
   SDMA_SCRC00           "SDMA Channel 00 Source Address CRC Register"
   SDMA_SCRC01           "SDMA Channel 01 Source Address CRC Register"
   SDMA_SCRC02           "SDMA Channel 02 Source Address CRC Register"
   SDMA_SCRC03           "SDMA Channel 03 Source Address CRC Register"
   SDMA_SCRC04           "SDMA Channel 04 Source Address CRC Register"
   SDMA_SCRC05           "SDMA Channel 05 Source Address CRC Register"
   SDMA_SCRC06           "SDMA Channel 06 Source Address CRC Register"
   SDMA_SCRC07           "SDMA Channel 07 Source Address CRC Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SCRC:32;             /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) SDMA_SCRCm_t_nonv;

typedef volatile SDMA_SCRCm_t_nonv SDMA_SCRCm_t;

/********************** SDMA_SHADRm_t *************************/
/*
   SDMA_SHADR00          "SDMA Channel 00 Shadow Address Register"
   SDMA_SHADR01          "SDMA Channel 01 Shadow Address Register"
   SDMA_SHADR02          "SDMA Channel 02 Shadow Address Register"
   SDMA_SHADR03          "SDMA Channel 03 Shadow Address Register"
   SDMA_SHADR04          "SDMA Channel 04 Shadow Address Register"
   SDMA_SHADR05          "SDMA Channel 05 Shadow Address Register"
   SDMA_SHADR06          "SDMA Channel 06 Shadow Address Register"
   SDMA_SHADR07          "SDMA Channel 07 Shadow Address Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SHADR:32;            /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) SDMA_SHADRm_t_nonv;

typedef volatile SDMA_SHADRm_t_nonv SDMA_SHADRm_t;

/********************** SDMA_SRCm_t *************************/
/*
   SDMA_SRC0             "SDMA Service Request Control Register 0"
   SDMA_SRC1             "SDMA Service Request Control Register 1"
   SDMA_SRC2             "SDMA Service Request Control Register 2"
   SDMA_SRC3             "SDMA Service Request Control Register 3"
   SDMA_SRC4             "SDMA Service Request Control Register 4"
   SDMA_SRC5             "SDMA Service Request Control Register 5"
   SDMA_SRC6             "SDMA Service Request Control Register 6"
   SDMA_SRC7             "SDMA Service Request Control Register 7"
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
} __attribute__((aligned(4))) SDMA_SRCm_t_nonv;

typedef volatile SDMA_SRCm_t_nonv SDMA_SRCm_t;


#endif /* _HAVE_TRICORE_SDMA_SHARETYPES_H_ */

