/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_ADC0_SHARETYPES_H_
#define _HAVE_TRICORE_ADC0_SHARETYPES_H_


/********************** ADC0_CHCONm_t *************************/
/*
   ADC0_CHCON0           "ADC Channel Control Register 0"
   ADC0_CHCON1           "ADC Channel Control Register 1"
   ADC0_CHCON10          "ADC Channel Control Register 10"
   ADC0_CHCON11          "ADC Channel Control Register 11"
   ADC0_CHCON12          "ADC Channel Control Register 12"
   ADC0_CHCON13          "ADC Channel Control Register 13"
   ADC0_CHCON14          "ADC Channel Control Register 14"
   ADC0_CHCON15          "ADC Channel Control Register 15"
   ADC0_CHCON2           "ADC Channel Control Register 2"
   ADC0_CHCON3           "ADC Channel Control Register 3"
   ADC0_CHCON4           "ADC Channel Control Register 4"
   ADC0_CHCON5           "ADC Channel Control Register 5"
   ADC0_CHCON6           "ADC Channel Control Register 6"
   ADC0_CHCON7           "ADC Channel Control Register 7"
   ADC0_CHCON8           "ADC Channel Control Register 8"
   ADC0_CHCON9           "ADC Channel Control Register 9"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int STC:8;               /*  = [0..7] = 0x000000ff */
      unsigned int REF:2;               /*  = [8..9] = 0x00000300 */
      unsigned int RES:2;               /*  = [10..11] = 0x00000c00 */
      unsigned int EMUX:2;              /*  = [12..13] = 0x00003000 */
      unsigned int GRPS:1;              /*  = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int BSELB:2;             /*  = [16..17] = 0x00030000 */
      unsigned int BSELA:2;             /*  = [18..19] = 0x000c0000 */
      unsigned int LCC:3;               /*  = [20..22] = 0x00700000 */
      unsigned int ENCH:1;              /*  = [23..23] = 0x00800000 */
      unsigned int INP:3;               /*  = [24..26] = 0x07000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int SYM:2;               /*  = [28..29] = 0x30000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) ADC0_CHCONm_t_nonv;

typedef volatile ADC0_CHCONm_t_nonv ADC0_CHCONm_t;

/********************** ADC0_CHSTATm_t *************************/
/*
   ADC0_CHSTAT0          "ADC Channel Status Register 0"
   ADC0_CHSTAT1          "ADC Channel Status Register 1"
   ADC0_CHSTAT10         "ADC Channel Status Register 10"
   ADC0_CHSTAT11         "ADC Channel Status Register 11"
   ADC0_CHSTAT12         "ADC Channel Status Register 12"
   ADC0_CHSTAT13         "ADC Channel Status Register 13"
   ADC0_CHSTAT14         "ADC Channel Status Register 14"
   ADC0_CHSTAT15         "ADC Channel Status Register 15"
   ADC0_CHSTAT2          "ADC Channel Status Register 2"
   ADC0_CHSTAT3          "ADC Channel Status Register 3"
   ADC0_CHSTAT4          "ADC Channel Status Register 4"
   ADC0_CHSTAT5          "ADC Channel Status Register 5"
   ADC0_CHSTAT6          "ADC Channel Status Register 6"
   ADC0_CHSTAT7          "ADC Channel Status Register 7"
   ADC0_CHSTAT8          "ADC Channel Status Register 8"
   ADC0_CHSTAT9          "ADC Channel Status Register 9"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int RESULT:12;           /*  = [0..11] = 0x00000fff */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int EMUX:2;              /*  = [16..17] = 0x00030000 */
      unsigned int GRPS:1;              /*  = [18..18] = 0x00040000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int CRS:3;               /*  = [20..22] = 0x00700000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int CHNR:4;              /*  = [24..27] = 0x0f000000 */
      unsigned int _bit28:1;            /* 0 = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) ADC0_CHSTATm_t_nonv;

typedef volatile ADC0_CHSTATm_t_nonv ADC0_CHSTATm_t;

/********************** ADC0_LCCONm_t *************************/
/*
   ADC0_LCCON0           "ADC Limit Check Control Register 0"
   ADC0_LCCON1           "ADC Limit Check Control Register 1"
   ADC0_LCCON2           "ADC Limit Check Control Register 2"
   ADC0_LCCON3           "ADC Limit Check Control Register 3"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int BOUNDARY:12;         /*  = [0..11] = 0x00000fff */
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
} __attribute__((aligned(4))) ADC0_LCCONm_t_nonv;

typedef volatile ADC0_LCCONm_t_nonv ADC0_LCCONm_t;

/********************** ADC0_QUEUETm_t *************************/
/*
   ADC0_QUEUET0          "ADC Queue Test Register 0"
   ADC0_QUEUET1          "ADC Queue Test Register 1"
   ADC0_QUEUET10         "ADC Queue Test Register 10"
   ADC0_QUEUET11         "ADC Queue Test Register 11"
   ADC0_QUEUET12         "ADC Queue Test Register 12"
   ADC0_QUEUET13         "ADC Queue Test Register 13"
   ADC0_QUEUET14         "ADC Queue Test Register 14"
   ADC0_QUEUET15         "ADC Queue Test Register 15"
   ADC0_QUEUET2          "ADC Queue Test Register 2"
   ADC0_QUEUET3          "ADC Queue Test Register 3"
   ADC0_QUEUET4          "ADC Queue Test Register 4"
   ADC0_QUEUET5          "ADC Queue Test Register 5"
   ADC0_QUEUET6          "ADC Queue Test Register 6"
   ADC0_QUEUET7          "ADC Queue Test Register 7"
   ADC0_QUEUET8          "ADC Queue Test Register 8"
   ADC0_QUEUET9          "ADC Queue Test Register 9"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CHNR:4;              /*  = [0..3] = 0x0000000f */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int RES:2;               /*  = [6..7] = 0x000000c0 */
      unsigned int EMUX:2;              /*  = [8..9] = 0x00000300 */
      unsigned int GRPS:1;              /*  = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int V:1;                 /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) ADC0_QUEUETm_t_nonv;

typedef volatile ADC0_QUEUETm_t_nonv ADC0_QUEUETm_t;

/********************** ADC0_SRCm_t *************************/
/*
   ADC0_SRC0             "ADC Service Request Control Register 0"
   ADC0_SRC1             "ADC Service Request Control Register 1"
   ADC0_SRC2             "ADC Service Request Control Register 2"
   ADC0_SRC3             "ADC Service Request Control Register 3"
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
} __attribute__((aligned(4))) ADC0_SRCm_t_nonv;

typedef volatile ADC0_SRCm_t_nonv ADC0_SRCm_t;


#endif /* _HAVE_TRICORE_ADC0_SHARETYPES_H_ */

