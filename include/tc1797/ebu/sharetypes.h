/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_EBU_SHARETYPES_H_
#define _HAVE_TRICORE_EBU_SHARETYPES_H_


/********************** EBU_ADDRSELm_t *************************/
/*
   EBU_ADDRSEL0          "EBU Address Select Register 0"
   EBU_ADDRSEL1          "EBU Address Select Register 1"
   EBU_ADDRSEL2          "EBU Address Select Register 2"
   EBU_ADDRSEL3          "EBU Address Select Register 3"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int REGENAB:1;           /*  = [0..0] = 0x00000001 */
      unsigned int ALTENAB:1;           /*  = [1..1] = 0x00000002 */
      unsigned int WPROT:1;             /*  = [2..2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int MASK:4;              /*  = [4..7] = 0x000000f0 */
      unsigned int ALTSEG:4;            /*  = [8..11] = 0x00000f00 */
      unsigned int BASE:20;             /*  = [12..31] = 0xfffff000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) EBU_ADDRSELm_t_nonv;

typedef volatile EBU_ADDRSELm_t_nonv EBU_ADDRSELm_t;

/********************** EBU_BUSRAPm_t *************************/
/*
   EBU_BUSRAP0           "EBU Bus Read Access Parameter Register"
   EBU_BUSRAP1           "EBU Bus Read Access Parameter Register"
   EBU_BUSRAP2           "EBU Bus Read Access Parameter Register"
   EBU_BUSRAP3           "EBU Bus Read Access Parameter Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RDDTACS:4;           /*  = [0..3] = 0x0000000f */
      unsigned int RDRECOVC:3;          /*  = [4..6] = 0x00000070 */
      unsigned int WAITRDC:5;           /*  = [7..11] = 0x00000f80 */
      unsigned int DATAC:4;             /*  = [12..15] = 0x0000f000 */
      unsigned int EXTCLOCK:2;          /*  = [16..17] = 0x00030000 */
      unsigned int EXTDATA:2;           /*  = [18..19] = 0x000c0000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int AHOLDC:4;            /*  = [24..27] = 0x0f000000 */
      unsigned int ADDRC:4;             /*  = [28..31] = 0xf0000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) EBU_BUSRAPm_t_nonv;

typedef volatile EBU_BUSRAPm_t_nonv EBU_BUSRAPm_t;

/********************** EBU_BUSRCONm_t *************************/
/*
   EBU_BUSRCON0          "EBU Bus Configuration Register"
   EBU_BUSRCON1          "EBU Bus Configuration Register"
   EBU_BUSRCON2          "EBU Bus Configuration Register"
   EBU_BUSRCON3          "EBU Bus Configuration Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int FETBLEN:3;           /*  = [0..2] = 0x00000007 */
      unsigned int FBBMSEL:1;           /*  = [3..3] = 0x00000008 */
      unsigned int BFSSS:1;             /*  = [4..4] = 0x00000010 */
      unsigned int FDBKEN:1;            /*  = [5..5] = 0x00000020 */
      unsigned int BFCMSEL:1;           /*  = [6..6] = 0x00000040 */
      unsigned int NAA:1;               /*  = [7..7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int ECSE:1;              /*  = [16..16] = 0x00010000 */
      unsigned int EBSE:1;              /*  = [17..17] = 0x00020000 */
      unsigned int DBA:1;               /*  = [18..18] = 0x00040000 */
      unsigned int WAITINV:1;           /*  = [19..19] = 0x00080000 */
      unsigned int BCGEN:2;             /*  = [20..21] = 0x00300000 */
      unsigned int PORTW:2;             /*  = [22..23] = 0x00c00000 */
      unsigned int WAIT:2;              /*  = [24..25] = 0x03000000 */
      unsigned int AAP:1;               /*  = [26..26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int AGEN:4;              /*  = [28..31] = 0xf0000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) EBU_BUSRCONm_t_nonv;

typedef volatile EBU_BUSRCONm_t_nonv EBU_BUSRCONm_t;

/********************** EBU_BUSWAPm_t *************************/
/*
   EBU_BUSWAP0           "EBU Bus Write Access Parameter Register"
   EBU_BUSWAP1           "EBU Bus Write Access Parameter Register"
   EBU_BUSWAP2           "EBU Bus Write Access Parameter Register"
   EBU_BUSWAP3           "EBU Bus Write Access Parameter Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int WRDTACS:4;           /*  = [0..3] = 0x0000000f */
      unsigned int WRRECOVC:3;          /*  = [4..6] = 0x00000070 */
      unsigned int WAITWRC:5;           /*  = [7..11] = 0x00000f80 */
      unsigned int DATAC:4;             /*  = [12..15] = 0x0000f000 */
      unsigned int EXTCLOCK:2;          /*  = [16..17] = 0x00030000 */
      unsigned int EXTDATA:2;           /*  = [18..19] = 0x000c0000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int AHOLDC:4;            /*  = [24..27] = 0x0f000000 */
      unsigned int ADDRC:4;             /*  = [28..31] = 0xf0000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) EBU_BUSWAPm_t_nonv;

typedef volatile EBU_BUSWAPm_t_nonv EBU_BUSWAPm_t;

/********************** EBU_BUSWCONm_t *************************/
/*
   EBU_BUSWCON0          "EBU Bus Write Configuration Register"
   EBU_BUSWCON1          "EBU Bus Write Configuration Register"
   EBU_BUSWCON2          "EBU Bus Write Configuration Register"
   EBU_BUSWCON3          "EBU Bus Write Configuration Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int FETBLEN:3;           /*  = [0..2] = 0x00000007 */
      unsigned int FBBMSEL:1;           /*  = [3..3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int NAA:1;               /*  = [7..7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int ECSE:1;              /*  = [16..16] = 0x00010000 */
      unsigned int EBSE:1;              /*  = [17..17] = 0x00020000 */
      unsigned int _bit18:1;            /* 0 = [18..18] = 0x00040000 */
      unsigned int WAITINV:1;           /*  = [19..19] = 0x00080000 */
      unsigned int BCGEN:2;             /*  = [20..21] = 0x00300000 */
      unsigned int PORTW:2;             /*  = [22..23] = 0x00c00000 */
      unsigned int WAIT:2;              /*  = [24..25] = 0x03000000 */
      unsigned int AAP:1;               /*  = [26..26] = 0x04000000 */
      unsigned int LOCKCS:1;            /*  = [27..27] = 0x08000000 */
      unsigned int AGEN:4;              /*  = [28..31] = 0xf0000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) EBU_BUSWCONm_t_nonv;

typedef volatile EBU_BUSWCONm_t_nonv EBU_BUSWCONm_t;


#endif /* _HAVE_TRICORE_EBU_SHARETYPES_H_ */

