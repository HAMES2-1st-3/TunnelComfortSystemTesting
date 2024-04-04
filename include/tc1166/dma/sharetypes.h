/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_DMA_SHARETYPES_H_
#define _HAVE_TRICORE_DMA_SHARETYPES_H_


/********************** DMA_ADRCRm_t *************************/
/*
   DMA_ADRCR00           "DMA Channel 00 Address Control Register"
   DMA_ADRCR01           "DMA Channel 01 Address Control Register"
   DMA_ADRCR02           "DMA Channel 02 Address Control Register"
   DMA_ADRCR03           "DMA Channel 03 Address Control Register"
   DMA_ADRCR04           "DMA Channel 04 Address Control Register"
   DMA_ADRCR05           "DMA Channel 05 Address Control Register"
   DMA_ADRCR06           "DMA Channel 06 Address Control Register"
   DMA_ADRCR07           "DMA Channel 07 Address Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SMF:3;               /*  = [0..2] = 0x00000007 */
      unsigned int INCS:1;              /*  = [3..3] = 0x00000008 */
      unsigned int DMF:3;               /*  = [4..6] = 0x00000070 */
      unsigned int INCD:1;              /*  = [7..7] = 0x00000080 */
      unsigned int CBLS:4;              /*  = [8..11] = 0x00000f00 */
      unsigned int CBLD:4;              /*  = [12..15] = 0x0000f000 */
      unsigned int SHCT:2;              /*  = [16..17] = 0x00030000 */
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
} __attribute__((aligned(4))) DMA_ADRCRm_t_nonv;

typedef volatile DMA_ADRCRm_t_nonv DMA_ADRCRm_t;

/********************** DMA_CHCRm_t *************************/
/*
   DMA_CHCR00            "DMA Channel 00 Control Register"
   DMA_CHCR01            "DMA Channel 01 Control Register"
   DMA_CHCR02            "DMA Channel 02 Control Register"
   DMA_CHCR03            "DMA Channel 03 Control Register"
   DMA_CHCR04            "DMA Channel 04 Control Register"
   DMA_CHCR05            "DMA Channel 05 Control Register"
   DMA_CHCR06            "DMA Channel 06 Control Register"
   DMA_CHCR07            "DMA Channel 07 Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TREL:9;              /*  = [0..8] = 0x000001ff */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int PRSEL:3;             /*  = [13..15] = 0x0000e000 */
      unsigned int BLKM:3;              /*  = [16..18] = 0x00070000 */
      unsigned int RROAT:1;             /*  = [19..19] = 0x00080000 */
      unsigned int CHMODE:1;            /*  = [20..20] = 0x00100000 */
      unsigned int CHDW:2;              /*  = [21..22] = 0x00600000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int PATSEL:2;            /*  = [24..25] = 0x03000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int CHPRIO:1;            /*  = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int DMAPRIO:1;           /*  = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) DMA_CHCRm_t_nonv;

typedef volatile DMA_CHCRm_t_nonv DMA_CHCRm_t;

/********************** DMA_CHICRm_t *************************/
/*
   DMA_CHICR00           "DMA Channel 00 Interrupt Control Register"
   DMA_CHICR01           "DMA Channel 01 Interrupt Control Register"
   DMA_CHICR02           "DMA Channel 02 Interrupt Control Register"
   DMA_CHICR03           "DMA Channel 03 Interrupt Control Register"
   DMA_CHICR04           "DMA Channel 04 Interrupt Control Register"
   DMA_CHICR05           "DMA Channel 05 Interrupt Control Register"
   DMA_CHICR06           "DMA Channel 06 Interrupt Control Register"
   DMA_CHICR07           "DMA Channel 07 Interrupt Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int WRPSE:1;             /*  = [0..0] = 0x00000001 */
      unsigned int WRPDE:1;             /*  = [1..1] = 0x00000002 */
      unsigned int INTCT:2;             /*  = [2..3] = 0x0000000c */
      unsigned int WRPP:4;              /*  = [4..7] = 0x000000f0 */
      unsigned int INTP:4;              /*  = [8..11] = 0x00000f00 */
      unsigned int IRDV:4;              /*  = [12..15] = 0x0000f000 */
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
} __attribute__((aligned(4))) DMA_CHICRm_t_nonv;

typedef volatile DMA_CHICRm_t_nonv DMA_CHICRm_t;

/********************** DMA_CHSRm_t *************************/
/*
   DMA_CHSR00            "Channel 00 Status Register"
   DMA_CHSR01            "DMA Channel 01 Status Register"
   DMA_CHSR02            "DMA Channel 02 Status Register"
   DMA_CHSR03            "DMA Channel 03 Status Register"
   DMA_CHSR04            "DMA Channel 04 Status Register"
   DMA_CHSR05            "DMA Channel 05 Status Register"
   DMA_CHSR06            "DMA Channel 06 Status Register"
   DMA_CHSR07            "DMA Channel 07 Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TCOUNT:9;            /*  = [0..8] = 0x000001ff */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int LXO:1;               /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) DMA_CHSRm_t_nonv;

typedef volatile DMA_CHSRm_t_nonv DMA_CHSRm_t;

/********************** DMA_DADRm_t *************************/
/*
   DMA_DADR00            "DMA Channel 00 Destination Address Register"
   DMA_DADR01            "DMA Channel 01 Destination Address Register"
   DMA_DADR02            "DMA Channel 02 Destination Address Register"
   DMA_DADR03            "DMA Channel 03 Destination Address Register"
   DMA_DADR04            "DMA Channel 04 Destination Address Register"
   DMA_DADR05            "DMA Channel 05 Destination Address Register"
   DMA_DADR06            "DMA Channel 06 Destination Address Register"
   DMA_DADR07            "DMA Channel 07 Destination Address Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DADR:32;             /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) DMA_DADRm_t_nonv;

typedef volatile DMA_DADRm_t_nonv DMA_DADRm_t;

/********************** DMA_MLInSRCm_t *************************/
/*
   DMA_MLI0SRC0          "MLI 0 Service Request Control Register 0"
   DMA_MLI0SRC1          "MLI 0 Service Request Control Register 1"
   DMA_MLI0SRC2          "MLI 0 Service Request Control Register 2"
   DMA_MLI0SRC3          "MLI 0 Service Request Control Register 3"
   DMA_MLI1SRC0          "MLI 1 Service Request Control Register 0"
   DMA_MLI1SRC1          "MLI 1 Service Request Control Register 1"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SRPN:8;              /*  = [0..7] = 0x000000ff */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int TOS:1;               /*  = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
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
} __attribute__((aligned(4))) DMA_MLInSRCm_t_nonv;

typedef volatile DMA_MLInSRCm_t_nonv DMA_MLInSRCm_t;

/********************** DMA_SADRm_t *************************/
/*
   DMA_SADR00            "DMA Channel 00 Source Address Register"
   DMA_SADR01            "DMA Channel 01 Source Address Register"
   DMA_SADR02            "DMA Channel 02 Source Address Register"
   DMA_SADR03            "DMA Channel 03 Source Address Register"
   DMA_SADR04            "DMA Channel 04 Source Address Register"
   DMA_SADR05            "DMA Channel 05 Source Address Register"
   DMA_SADR06            "DMA Channel 06 Source Address Register"
   DMA_SADR07            "DMA Channel 07 Source Address Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SADR:32;             /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) DMA_SADRm_t_nonv;

typedef volatile DMA_SADRm_t_nonv DMA_SADRm_t;

/********************** DMA_SHADRm_t *************************/
/*
   DMA_SHADR00           "Channel 00 Shadowed Address Register"
   DMA_SHADR01           "DMA Channel 01 Shadowed Address Register"
   DMA_SHADR02           "DMA Channel 02 Shadowed Address Register"
   DMA_SHADR03           "DMA Channel 03 Shadowed Address Register"
   DMA_SHADR04           "DMA Channel 04 Shadowed Address Register"
   DMA_SHADR05           "DMA Channel 05 Shadowed Address Register"
   DMA_SHADR06           "DMA Channel 06 Shadowed Address Register"
   DMA_SHADR07           "DMA Channel 07 Shadowed Address Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SHADR:32;            /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) DMA_SHADRm_t_nonv;

typedef volatile DMA_SHADRm_t_nonv DMA_SHADRm_t;

/********************** DMA_SRCm_t *************************/
/*
   DMA_SRC0              "DMA Service Request Control Register 0"
   DMA_SRC1              "DMA Service Request Control Register 1"
   DMA_SRC2              "DMA Service Request Control Register 2"
   DMA_SRC3              "DMA Service Request Control Register 3"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SRPN:8;              /*  = [0..7] = 0x000000ff */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int TOS:1;               /*  = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
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
} __attribute__((aligned(4))) DMA_SRCm_t_nonv;

typedef volatile DMA_SRCm_t_nonv DMA_SRCm_t;

/********************** DMA_SYSSRCm_t *************************/
/*
   DMA_SYSSRC0           "System Interrupt Service Request Control Register 0"
   DMA_SYSSRC1           "System Interrupt Service Request Control Register 1"
   DMA_SYSSRC2           "System Interrupt Service Request Control Register 2"
   DMA_SYSSRC3           "System Interrupt Service Request Control Register 3"
   DMA_SYSSRC4           "System Interrupt Service Request Control Register 4"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SRPN:8;              /*  = [0..7] = 0x000000ff */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int TOS:1;               /*  = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
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
} __attribute__((aligned(4))) DMA_SYSSRCm_t_nonv;

typedef volatile DMA_SYSSRCm_t_nonv DMA_SYSSRCm_t;


#endif /* _HAVE_TRICORE_DMA_SHARETYPES_H_ */

