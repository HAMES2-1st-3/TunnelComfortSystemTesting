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
   DMA_ADRCR10           "DMA Channel 10 Address Control Register"
   DMA_ADRCR11           "DMA Channel 11 Address Control Register"
   DMA_ADRCR12           "DMA Channel 12 Address Control Register"
   DMA_ADRCR13           "DMA Channel 13 Address Control Register"
   DMA_ADRCR14           "DMA Channel 14 Address Control Register"
   DMA_ADRCR15           "DMA Channel 15 Address Control Register"
   DMA_ADRCR16           "DMA Channel 16 Address Control Register"
   DMA_ADRCR17           "DMA Channel 17 Address Control Register"
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
   DMA_CHCR10            "DMA Channel 10 Control Register"
   DMA_CHCR11            "DMA Channel 11 Control Register"
   DMA_CHCR12            "DMA Channel 12 Control Register"
   DMA_CHCR13            "DMA Channel 13 Control Register"
   DMA_CHCR14            "DMA Channel 14 Control Register"
   DMA_CHCR15            "DMA Channel 15 Control Register"
   DMA_CHCR16            "DMA Channel 16 Control Register"
   DMA_CHCR17            "DMA Channel 17 Control Register"
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
   DMA_CHICR10           "DMA Channel 10 Interrupt Control Register"
   DMA_CHICR11           "DMA Channel 11 Interrupt Control Register"
   DMA_CHICR12           "DMA Channel 12 Interrupt Control Register"
   DMA_CHICR13           "DMA Channel 13 Interrupt Control Register"
   DMA_CHICR14           "DMA Channel 14 Interrupt Control Register"
   DMA_CHICR15           "DMA Channel 15 Interrupt Control Register"
   DMA_CHICR16           "DMA Channel 16 Interrupt Control Register"
   DMA_CHICR17           "DMA Channel 17 Interrupt Control Register"
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
   DMA_CHSR00            "DMA Channel 00 Status Register"
   DMA_CHSR01            "DMA Channel 01 Status Register"
   DMA_CHSR02            "DMA Channel 02 Status Register"
   DMA_CHSR03            "DMA Channel 03 Status Register"
   DMA_CHSR04            "DMA Channel 04 Status Register"
   DMA_CHSR05            "DMA Channel 05 Status Register"
   DMA_CHSR06            "DMA Channel 06 Status Register"
   DMA_CHSR07            "DMA Channel 07 Status Register"
   DMA_CHSR10            "DMA Channel 10 Status Register"
   DMA_CHSR11            "DMA Channel 11 Status Register"
   DMA_CHSR12            "DMA Channel 12 Status Register"
   DMA_CHSR13            "DMA Channel 13 Status Register"
   DMA_CHSR14            "DMA Channel 14 Status Register"
   DMA_CHSR15            "DMA Channel 15 Status Register"
   DMA_CHSR16            "DMA Channel 16 Status Register"
   DMA_CHSR17            "DMA Channel 17 Status Register"
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
   DMA_DADR10            "DMA Channel 10 Destination Address Register"
   DMA_DADR11            "DMA Channel 11 Destination Address Register"
   DMA_DADR12            "DMA Channel 12 Destination Address Register"
   DMA_DADR13            "DMA Channel 13 Destination Address Register"
   DMA_DADR14            "DMA Channel 14 Destination Address Register"
   DMA_DADR15            "DMA Channel 15 Destination Address Register"
   DMA_DADR16            "DMA Channel 16 Destination Address Register"
   DMA_DADR17            "DMA Channel 17 Destination Address Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DADR:32;             /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) DMA_DADRm_t_nonv;

typedef volatile DMA_DADRm_t_nonv DMA_DADRm_t;

/********************** DMA_MEmAENR_t *************************/
/*
   DMA_ME0AENR           "DMA Move Engine 0 Access Enable Register"
   DMA_ME1AENR           "DMA Move Engine 1 Access Enable Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int AEN0:1;              /*  = [0..0] = 0x00000001 */
      unsigned int AEN1:1;              /*  = [1..1] = 0x00000002 */
      unsigned int AEN2:1;              /*  = [2..2] = 0x00000004 */
      unsigned int AEN3:1;              /*  = [3..3] = 0x00000008 */
      unsigned int AEN4:1;              /*  = [4..4] = 0x00000010 */
      unsigned int AEN5:1;              /*  = [5..5] = 0x00000020 */
      unsigned int AEN6:1;              /*  = [6..6] = 0x00000040 */
      unsigned int AEN7:1;              /*  = [7..7] = 0x00000080 */
      unsigned int AEN8:1;              /*  = [8..8] = 0x00000100 */
      unsigned int AEN9:1;              /*  = [9..9] = 0x00000200 */
      unsigned int AEN10:1;             /*  = [10..10] = 0x00000400 */
      unsigned int AEN11:1;             /*  = [11..11] = 0x00000800 */
      unsigned int AEN12:1;             /*  = [12..12] = 0x00001000 */
      unsigned int AEN13:1;             /*  = [13..13] = 0x00002000 */
      unsigned int AEN14:1;             /*  = [14..14] = 0x00004000 */
      unsigned int AEN15:1;             /*  = [15..15] = 0x00008000 */
      unsigned int AEN16:1;             /*  = [16..16] = 0x00010000 */
      unsigned int AEN17:1;             /*  = [17..17] = 0x00020000 */
      unsigned int AEN18:1;             /*  = [18..18] = 0x00040000 */
      unsigned int AEN19:1;             /*  = [19..19] = 0x00080000 */
      unsigned int AEN20:1;             /*  = [20..20] = 0x00100000 */
      unsigned int AEN21:1;             /*  = [21..21] = 0x00200000 */
      unsigned int AEN22:1;             /*  = [22..22] = 0x00400000 */
      unsigned int AEN23:1;             /*  = [23..23] = 0x00800000 */
      unsigned int AEN24:1;             /*  = [24..24] = 0x01000000 */
      unsigned int AEN25:1;             /*  = [25..25] = 0x02000000 */
      unsigned int AEN26:1;             /*  = [26..26] = 0x04000000 */
      unsigned int AEN27:1;             /*  = [27..27] = 0x08000000 */
      unsigned int AEN28:1;             /*  = [28..28] = 0x10000000 */
      unsigned int AEN29:1;             /*  = [29..29] = 0x20000000 */
      unsigned int AEN30:1;             /*  = [30..30] = 0x40000000 */
      unsigned int AEN31:1;             /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) DMA_MEmAENR_t_nonv;

typedef volatile DMA_MEmAENR_t_nonv DMA_MEmAENR_t;

/********************** DMA_MEmARR_t *************************/
/*
   DMA_ME0ARR            "DMA Move Engine 0 Access Range Register"
   DMA_ME1ARR            "DMA Move Engine 1 Access Range Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SLICE0:5;            /*  = [0..4] = 0x0000001f */
      unsigned int SIZE0:3;             /*  = [5..7] = 0x000000e0 */
      unsigned int SLICE1:5;            /*  = [8..12] = 0x00001f00 */
      unsigned int SIZE1:3;             /*  = [13..15] = 0x0000e000 */
      unsigned int SLICE2:5;            /*  = [16..20] = 0x001f0000 */
      unsigned int SIZE2:3;             /*  = [21..23] = 0x00e00000 */
      unsigned int SLICE3:5;            /*  = [24..28] = 0x1f000000 */
      unsigned int SIZE3:3;             /*  = [29..31] = 0xe0000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) DMA_MEmARR_t_nonv;

typedef volatile DMA_MEmARR_t_nonv DMA_MEmARR_t;

/********************** DMA_MEmPR_t *************************/
/*
   DMA_ME0PR             "DMA Move Engine 0 Pattern Register"
   DMA_ME1PR             "DMA Move Engine 1 Pattern Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int PAT00:8;             /*  = [0..7] = 0x000000ff */
      unsigned int PAT01:8;             /*  = [8..15] = 0x0000ff00 */
      unsigned int PAT02:8;             /*  = [16..23] = 0x00ff0000 */
      unsigned int PAT03:8;             /*  = [24..31] = 0xff000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) DMA_MEmPR_t_nonv;

typedef volatile DMA_MEmPR_t_nonv DMA_MEmPR_t;

/********************** DMA_MEmR_t *************************/
/*
   DMA_ME0R              "DMA Move Engine 0 Read Register"
   DMA_ME1R              "DMA Move Engine 1 Read Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RD00:8;              /*  = [0..7] = 0x000000ff */
      unsigned int RD01:8;              /*  = [8..15] = 0x0000ff00 */
      unsigned int RD02:8;              /*  = [16..23] = 0x00ff0000 */
      unsigned int RD03:8;              /*  = [24..31] = 0xff000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) DMA_MEmR_t_nonv;

typedef volatile DMA_MEmR_t_nonv DMA_MEmR_t;

/********************** DMA_MLInSRCm_t *************************/
/*
   DMA_MLI0SRC0          "DMA MLI0 Service Request Control Register 0"
   DMA_MLI0SRC1          "DMA MLI0 Service Request Control Register 1"
   DMA_MLI0SRC2          "DMA MLI0 Service Request Control Register 2"
   DMA_MLI0SRC3          "DMA MLI0 Service Request Control Register 3"
   DMA_MLI1SRC0          "DMA MLI1 Service Request Control Register 0"
   DMA_MLI1SRC1          "DMA MLI1 Service Request Control Register 1"
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
   DMA_SADR10            "DMA Channel 10 Source Address Register"
   DMA_SADR11            "DMA Channel 11 Source Address Register"
   DMA_SADR12            "DMA Channel 12 Source Address Register"
   DMA_SADR13            "DMA Channel 13 Source Address Register"
   DMA_SADR14            "DMA Channel 14 Source Address Register"
   DMA_SADR15            "DMA Channel 15 Source Address Register"
   DMA_SADR16            "DMA Channel 16 Source Address Register"
   DMA_SADR17            "DMA Channel 17 Source Address Register"
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
   DMA_SHADR00           "DMA Channel 00 Shadow Address Register"
   DMA_SHADR01           "DMA Channel 01 Shadow Address Register"
   DMA_SHADR02           "DMA Channel 02 Shadow Address Register"
   DMA_SHADR03           "DMA Channel 03 Shadow Address Register"
   DMA_SHADR04           "DMA Channel 04 Shadow Address Register"
   DMA_SHADR05           "DMA Channel 05 Shadow Address Register"
   DMA_SHADR06           "DMA Channel 06 Shadow Address Register"
   DMA_SHADR07           "DMA Channel 07 Shadow Address Register"
   DMA_SHADR10           "DMA Channel 10 Shadow Address Register"
   DMA_SHADR11           "DMA Channel 11 Shadow Address Register"
   DMA_SHADR12           "DMA Channel 12 Shadow Address Register"
   DMA_SHADR13           "DMA Channel 13 Shadow Address Register"
   DMA_SHADR14           "DMA Channel 14 Shadow Address Register"
   DMA_SHADR15           "DMA Channel 15 Shadow Address Register"
   DMA_SHADR16           "DMA Channel 16 Shadow Address Register"
   DMA_SHADR17           "DMA Channel 17 Shadow Address Register"
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
   DMA_SRC4              "DMA Service Request Control Register 4"
   DMA_SRC5              "DMA Service Request Control Register 5"
   DMA_SRC6              "DMA Service Request Control Register 6"
   DMA_SRC7              "DMA Service Request Control Register 7"
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
   DMA_SYSSRC0           "DMA System Interrupt Service Request Control Register 0"
   DMA_SYSSRC1           "DMA System Interrupt Service Request Control Register 1"
   DMA_SYSSRC2           "DMA System Interrupt Service Request Control Register 2"
   DMA_SYSSRC3           "DMA System Interrupt Service Request Control Register 3"
   DMA_SYSSRC4           "DMA System Interrupt Service Request Control Register 4"
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

