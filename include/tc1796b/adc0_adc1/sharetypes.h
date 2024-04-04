/* (c) 2000-2008 HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_ADC0_ADC1_SHARETYPES_H_
#define _HAVE_TRICORE_ADC0_ADC1_SHARETYPES_H_


/********************** ADCn_AP_t *************************/
/*
   ADC0_AP               "ADC0 Arbitration Participation Register"
   ADC1_AP               "ADC1 Arbitration Participation Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ASP:1;               /*  = [0..0] = 0x00000001 */
      unsigned int QP:1;                /*  = [1..1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2..2] = 0x00000004 */
      unsigned int SW0P:1;              /*  = [3..3] = 0x00000008 */
      unsigned int EXP:1;               /*  = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int TP:1;                /*  = [6..6] = 0x00000040 */
      unsigned int CHP:1;               /*  = [7..7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
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
} __attribute__((aligned(4))) ADCn_AP_t_nonv;

typedef volatile ADCn_AP_t_nonv ADCn_AP_t;

/********************** ADCn_ASCRP_t *************************/
/*
   ADC0_ASCRP            "ADC0 Auto Scan Conversion Request Pending Register"
   ADC1_ASCRP            "ADC1 Auto Scan Conversion Request Pending Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ASCRP0:1;            /*  = [0..0] = 0x00000001 */
      unsigned int ASCRP1:1;            /*  = [1..1] = 0x00000002 */
      unsigned int ASCRP2:1;            /*  = [2..2] = 0x00000004 */
      unsigned int ASCRP3:1;            /*  = [3..3] = 0x00000008 */
      unsigned int ASCRP4:1;            /*  = [4..4] = 0x00000010 */
      unsigned int ASCRP5:1;            /*  = [5..5] = 0x00000020 */
      unsigned int ASCRP6:1;            /*  = [6..6] = 0x00000040 */
      unsigned int ASCRP7:1;            /*  = [7..7] = 0x00000080 */
      unsigned int ASCRP8:1;            /*  = [8..8] = 0x00000100 */
      unsigned int ASCRP9:1;            /*  = [9..9] = 0x00000200 */
      unsigned int ASCRP10:1;           /*  = [10..10] = 0x00000400 */
      unsigned int ASCRP11:1;           /*  = [11..11] = 0x00000800 */
      unsigned int ASCRP12:1;           /*  = [12..12] = 0x00001000 */
      unsigned int ASCRP13:1;           /*  = [13..13] = 0x00002000 */
      unsigned int ASCRP14:1;           /*  = [14..14] = 0x00004000 */
      unsigned int ASCRP15:1;           /*  = [15..15] = 0x00008000 */
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
      unsigned int GRPS:1;              /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) ADCn_ASCRP_t_nonv;

typedef volatile ADCn_ASCRP_t_nonv ADCn_ASCRP_t;

/********************** ADCn_CHCONm_t *************************/
/*
   ADC0_CHCON0           "ADC0 Channel Control Register 0"
   ADC0_CHCON1           "ADC0 Channel Control Register 1"
   ADC0_CHCON10          "ADC0 Channel Control Register 10"
   ADC0_CHCON11          "ADC0 Channel Control Register 11"
   ADC0_CHCON12          "ADC0 Channel Control Register 12"
   ADC0_CHCON13          "ADC0 Channel Control Register 13"
   ADC0_CHCON14          "ADC0 Channel Control Register 14"
   ADC0_CHCON15          "ADC0 Channel Control Register 15"
   ADC0_CHCON2           "ADC0 Channel Control Register 2"
   ADC0_CHCON3           "ADC0 Channel Control Register 3"
   ADC0_CHCON4           "ADC0 Channel Control Register 4"
   ADC0_CHCON5           "ADC0 Channel Control Register 5"
   ADC0_CHCON6           "ADC0 Channel Control Register 6"
   ADC0_CHCON7           "ADC0 Channel Control Register 7"
   ADC0_CHCON8           "ADC0 Channel Control Register 8"
   ADC0_CHCON9           "ADC0 Channel Control Register 9"
   ADC1_CHCON0           "ADC1 Channel Control Register 0"
   ADC1_CHCON1           "ADC1 Channel Control Register 1"
   ADC1_CHCON10          "ADC1 Channel Control Register 10"
   ADC1_CHCON11          "ADC1 Channel Control Register 11"
   ADC1_CHCON12          "ADC1 Channel Control Register 12"
   ADC1_CHCON13          "ADC1 Channel Control Register 13"
   ADC1_CHCON14          "ADC1 Channel Control Register 14"
   ADC1_CHCON15          "ADC1 Channel Control Register 15"
   ADC1_CHCON2           "ADC1 Channel Control Register 2"
   ADC1_CHCON3           "ADC1 Channel Control Register 3"
   ADC1_CHCON4           "ADC1 Channel Control Register 4"
   ADC1_CHCON5           "ADC1 Channel Control Register 5"
   ADC1_CHCON6           "ADC1 Channel Control Register 6"
   ADC1_CHCON7           "ADC1 Channel Control Register 7"
   ADC1_CHCON8           "ADC1 Channel Control Register 8"
   ADC1_CHCON9           "ADC1 Channel Control Register 9"
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
} __attribute__((aligned(4))) ADCn_CHCONm_t_nonv;

typedef volatile ADCn_CHCONm_t_nonv ADCn_CHCONm_t;

/********************** ADCn_CHIN_t *************************/
/*
   ADC0_CHIN             "ADC0 Channel Injection Control Register"
   ADC1_CHIN             "ADC1 Channel Injection Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CHNRIN:4;            /*  = [0..3] = 0x0000000f */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int RES:2;               /*  = [6..7] = 0x000000c0 */
      unsigned int EMUX:2;              /*  = [8..9] = 0x00000300 */
      unsigned int GRPS:1;              /*  = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int CIREN:1;             /*  = [15..15] = 0x00008000 */
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
      unsigned int CINREQ:1;            /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) ADCn_CHIN_t_nonv;

typedef volatile ADCn_CHIN_t_nonv ADCn_CHIN_t;

/********************** ADCn_CHSTATm_t *************************/
/*
   ADC0_CHSTAT0          "ADC0 Channel Status Register 0"
   ADC0_CHSTAT1          "ADC0 Channel Status Register 1"
   ADC0_CHSTAT10         "ADC0 Channel Status Register 10"
   ADC0_CHSTAT11         "ADC0 Channel Status Register 11"
   ADC0_CHSTAT12         "ADC0 Channel Status Register 12"
   ADC0_CHSTAT13         "ADC0 Channel Status Register 13"
   ADC0_CHSTAT14         "ADC0 Channel Status Register 14"
   ADC0_CHSTAT15         "ADC0 Channel Status Register 15"
   ADC0_CHSTAT2          "ADC0 Channel Status Register 2"
   ADC0_CHSTAT3          "ADC0 Channel Status Register 3"
   ADC0_CHSTAT4          "ADC0 Channel Status Register 4"
   ADC0_CHSTAT5          "ADC0 Channel Status Register 5"
   ADC0_CHSTAT6          "ADC0 Channel Status Register 6"
   ADC0_CHSTAT7          "ADC0 Channel Status Register 7"
   ADC0_CHSTAT8          "ADC0 Channel Status Register 8"
   ADC0_CHSTAT9          "ADC0 Channel Status Register 9"
   ADC1_CHSTAT0          "ADC1 Channel Status Register 0"
   ADC1_CHSTAT1          "ADC1 Channel Status Register 1"
   ADC1_CHSTAT10         "ADC1 Channel Status Register 10"
   ADC1_CHSTAT11         "ADC1 Channel Status Register 11"
   ADC1_CHSTAT12         "ADC1 Channel Status Register 12"
   ADC1_CHSTAT13         "ADC1 Channel Status Register 13"
   ADC1_CHSTAT14         "ADC1 Channel Status Register 14"
   ADC1_CHSTAT15         "ADC1 Channel Status Register 15"
   ADC1_CHSTAT2          "ADC1 Channel Status Register 2"
   ADC1_CHSTAT3          "ADC1 Channel Status Register 3"
   ADC1_CHSTAT4          "ADC1 Channel Status Register 4"
   ADC1_CHSTAT5          "ADC1 Channel Status Register 5"
   ADC1_CHSTAT6          "ADC1 Channel Status Register 6"
   ADC1_CHSTAT7          "ADC1 Channel Status Register 7"
   ADC1_CHSTAT8          "ADC1 Channel Status Register 8"
   ADC1_CHSTAT9          "ADC1 Channel Status Register 9"
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
} __attribute__((aligned(4))) ADCn_CHSTATm_t_nonv;

typedef volatile ADCn_CHSTATm_t_nonv ADCn_CHSTATm_t;

/********************** ADCn_CON_t *************************/
/*
   ADC0_CON              "ADC0 Converter Control Register"
   ADC1_CON              "ADC1 Converter Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CTC:8;               /*  = [0..7] = 0x000000ff */
      unsigned int SCNM:2;              /*  = [8..9] = 0x00000300 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int QEN:1;               /*  = [15..15] = 0x00008000 */
      unsigned int QWLP:4;              /*  = [16..19] = 0x000f0000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24..24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25..25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26..26] = 0x04000000 */
      unsigned int PCDIS:1;             /*  = [27..27] = 0x08000000 */
      unsigned int CPR:1;               /*  = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int SRTEST:1;            /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) ADCn_CON_t_nonv;

typedef volatile ADCn_CON_t_nonv ADCn_CON_t;

/********************** ADCn_EXCRP_t *************************/
/*
   ADC0_EXCRP            "ADC0 External Conversion Request Pending Register"
   ADC1_EXCRP            "ADC1 External Conversion Request Pending Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int EXCRP0:1;            /*  = [0..0] = 0x00000001 */
      unsigned int EXCRP1:1;            /*  = [1..1] = 0x00000002 */
      unsigned int EXCRP2:1;            /*  = [2..2] = 0x00000004 */
      unsigned int EXCRP3:1;            /*  = [3..3] = 0x00000008 */
      unsigned int EXCRP4:1;            /*  = [4..4] = 0x00000010 */
      unsigned int EXCRP5:1;            /*  = [5..5] = 0x00000020 */
      unsigned int EXCRP6:1;            /*  = [6..6] = 0x00000040 */
      unsigned int EXCRP7:1;            /*  = [7..7] = 0x00000080 */
      unsigned int EXCRP8:1;            /*  = [8..8] = 0x00000100 */
      unsigned int EXCRP9:1;            /*  = [9..9] = 0x00000200 */
      unsigned int EXCRP10:1;           /*  = [10..10] = 0x00000400 */
      unsigned int EXCRP11:1;           /*  = [11..11] = 0x00000800 */
      unsigned int EXCRP12:1;           /*  = [12..12] = 0x00001000 */
      unsigned int EXCRP13:1;           /*  = [13..13] = 0x00002000 */
      unsigned int EXCRP14:1;           /*  = [14..14] = 0x00004000 */
      unsigned int EXCRP15:1;           /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) ADCn_EXCRP_t_nonv;

typedef volatile ADCn_EXCRP_t_nonv ADCn_EXCRP_t;

/********************** ADCn_EXTC_t *************************/
/*
   ADC0_EXTC             "ADC0 External Trigger Control Register"
   ADC1_EXTC             "ADC1 External Trigger Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ETCCH0:1;            /*  = [0..0] = 0x00000001 */
      unsigned int ETCCH1:1;            /*  = [1..1] = 0x00000002 */
      unsigned int ETCCH2:1;            /*  = [2..2] = 0x00000004 */
      unsigned int ETCCH3:1;            /*  = [3..3] = 0x00000008 */
      unsigned int ETCCH4:1;            /*  = [4..4] = 0x00000010 */
      unsigned int ETCCH5:1;            /*  = [5..5] = 0x00000020 */
      unsigned int ETCCH6:1;            /*  = [6..6] = 0x00000040 */
      unsigned int ETCCH7:1;            /*  = [7..7] = 0x00000080 */
      unsigned int ETCCH8:1;            /*  = [8..8] = 0x00000100 */
      unsigned int ETCCH9:1;            /*  = [9..9] = 0x00000200 */
      unsigned int ETCCH10:1;           /*  = [10..10] = 0x00000400 */
      unsigned int ETCCH11:1;           /*  = [11..11] = 0x00000800 */
      unsigned int ETCCH12:1;           /*  = [12..12] = 0x00001000 */
      unsigned int ETCCH13:1;           /*  = [13..13] = 0x00002000 */
      unsigned int ETCCH14:1;           /*  = [14..14] = 0x00004000 */
      unsigned int ETCCH15:1;           /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) ADCn_EXTC_t_nonv;

typedef volatile ADCn_EXTC_t_nonv ADCn_EXTC_t;

/********************** ADCn_LCCONm_t *************************/
/*
   ADC0_LCCON0           "ADC0 Limit Check Control Register 0"
   ADC0_LCCON1           "ADC0 Limit Check Control Register 1"
   ADC0_LCCON2           "ADC0 Limit Check Control Register 2"
   ADC0_LCCON3           "ADC0 Limit Check Control Register 3"
   ADC1_LCCON0           "ADC1 Limit Check Control Register 0"
   ADC1_LCCON1           "ADC1 Limit Check Control Register 1"
   ADC1_LCCON2           "ADC1 Limit Check Control Register 2"
   ADC1_LCCON3           "ADC1 Limit Check Control Register 3"
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
} __attribute__((aligned(4))) ADCn_LCCONm_t_nonv;

typedef volatile ADCn_LCCONm_t_nonv ADCn_LCCONm_t;

/********************** ADCn_MSS0_t *************************/
/*
   ADC0_MSS0             "ADC0 Module Service Request Status Register 0"
   ADC1_MSS0             "ADC1 Module Service Request Status Register 0"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MSRCH0:1;            /*  = [0..0] = 0x00000001 */
      unsigned int MSRCH1:1;            /*  = [1..1] = 0x00000002 */
      unsigned int MSRCH2:1;            /*  = [2..2] = 0x00000004 */
      unsigned int MSRCH3:1;            /*  = [3..3] = 0x00000008 */
      unsigned int MSRCH4:1;            /*  = [4..4] = 0x00000010 */
      unsigned int MSRCH5:1;            /*  = [5..5] = 0x00000020 */
      unsigned int MSRCH6:1;            /*  = [6..6] = 0x00000040 */
      unsigned int MSRCH7:1;            /*  = [7..7] = 0x00000080 */
      unsigned int MSRCH8:1;            /*  = [8..8] = 0x00000100 */
      unsigned int MSRCH9:1;            /*  = [9..9] = 0x00000200 */
      unsigned int MSRCH10:1;           /*  = [10..10] = 0x00000400 */
      unsigned int MSRCH11:1;           /*  = [11..11] = 0x00000800 */
      unsigned int MSRCH12:1;           /*  = [12..12] = 0x00001000 */
      unsigned int MSRCH13:1;           /*  = [13..13] = 0x00002000 */
      unsigned int MSRCH14:1;           /*  = [14..14] = 0x00004000 */
      unsigned int MSRCH15:1;           /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) ADCn_MSS0_t_nonv;

typedef volatile ADCn_MSS0_t_nonv ADCn_MSS0_t;

/********************** ADCn_MSS1_t *************************/
/*
   ADC0_MSS1             "ADC0 Module Service Request Status Register 1"
   ADC1_MSS1             "ADC1 Module Service Request Status Register 1"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MSRT:1;              /*  = [0..0] = 0x00000001 */
      unsigned int MSRSY:1;             /*  = [1..1] = 0x00000002 */
      unsigned int MSRQR:1;             /*  = [2..2] = 0x00000004 */
      unsigned int MSRAS:1;             /*  = [3..3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
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
} __attribute__((aligned(4))) ADCn_MSS1_t_nonv;

typedef volatile ADCn_MSS1_t_nonv ADCn_MSS1_t;

/********************** ADCn_QR_t *************************/
/*
   ADC0_QR               "ADC0 Queue Register"
   ADC1_QR               "ADC1 Queue Register"
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
} __attribute__((aligned(4))) ADCn_QR_t_nonv;

typedef volatile ADCn_QR_t_nonv ADCn_QR_t;

/********************** ADCn_QUEUE0_t *************************/
/*
   ADC0_QUEUE0           "ADC0 Queue Status Register"
   ADC1_QUEUE0           "ADC1 Queue Status Register"
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
} __attribute__((aligned(4))) ADCn_QUEUE0_t_nonv;

typedef volatile ADCn_QUEUE0_t_nonv ADCn_QUEUE0_t;

/********************** ADCn_REQ0_t *************************/
/*
   ADC0_REQ0             "ADC0 Conversion Request Register SW0"
   ADC1_REQ0             "ADC1 Conversion Request Register SW0"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int REQ00:1;             /*  = [0..0] = 0x00000001 */
      unsigned int REQ01:1;             /*  = [1..1] = 0x00000002 */
      unsigned int REQ02:1;             /*  = [2..2] = 0x00000004 */
      unsigned int REQ03:1;             /*  = [3..3] = 0x00000008 */
      unsigned int REQ04:1;             /*  = [4..4] = 0x00000010 */
      unsigned int REQ05:1;             /*  = [5..5] = 0x00000020 */
      unsigned int REQ06:1;             /*  = [6..6] = 0x00000040 */
      unsigned int REQ07:1;             /*  = [7..7] = 0x00000080 */
      unsigned int REQ08:1;             /*  = [8..8] = 0x00000100 */
      unsigned int REQ09:1;             /*  = [9..9] = 0x00000200 */
      unsigned int REQ010:1;            /*  = [10..10] = 0x00000400 */
      unsigned int REQ011:1;            /*  = [11..11] = 0x00000800 */
      unsigned int REQ012:1;            /*  = [12..12] = 0x00001000 */
      unsigned int REQ013:1;            /*  = [13..13] = 0x00002000 */
      unsigned int REQ014:1;            /*  = [14..14] = 0x00004000 */
      unsigned int REQ015:1;            /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) ADCn_REQ0_t_nonv;

typedef volatile ADCn_REQ0_t_nonv ADCn_REQ0_t;

/********************** ADCn_SAL_t *************************/
/*
   ADC0_SAL              "ADC0 Source Arbitration Level Register"
   ADC1_SAL              "ADC1 Source Arbitration Level Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SALAS:3;             /*  = [0..2] = 0x00000007 */
      unsigned int _bit3:1;             /* 0 = [3..3] = 0x00000008 */
      unsigned int SALQ:3;              /*  = [4..6] = 0x00000070 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int SALSW0:3;            /*  = [12..14] = 0x00007000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int SALEXT:3;            /*  = [16..18] = 0x00070000 */
      unsigned int _bit19:1;            /* 0 = [19..19] = 0x00080000 */
      unsigned int _bit20:1;            /* 0 = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int SALT:3;              /*  = [24..26] = 0x07000000 */
      unsigned int _bit27:1;            /* 0 = [27..27] = 0x08000000 */
      unsigned int SALCHIN:3;           /*  = [28..30] = 0x70000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) ADCn_SAL_t_nonv;

typedef volatile ADCn_SAL_t_nonv ADCn_SAL_t;

/********************** ADCn_SCN_t *************************/
/*
   ADC0_SCN              "ADC0 Auto Scan Control Register"
   ADC1_SCN              "ADC1 Auto Scan Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SRQ0:1;              /*  = [0..0] = 0x00000001 */
      unsigned int SRQ1:1;              /*  = [1..1] = 0x00000002 */
      unsigned int SRQ2:1;              /*  = [2..2] = 0x00000004 */
      unsigned int SRQ3:1;              /*  = [3..3] = 0x00000008 */
      unsigned int SRQ4:1;              /*  = [4..4] = 0x00000010 */
      unsigned int SRQ5:1;              /*  = [5..5] = 0x00000020 */
      unsigned int SRQ6:1;              /*  = [6..6] = 0x00000040 */
      unsigned int SRQ7:1;              /*  = [7..7] = 0x00000080 */
      unsigned int SRQ8:1;              /*  = [8..8] = 0x00000100 */
      unsigned int SRQ9:1;              /*  = [9..9] = 0x00000200 */
      unsigned int SRQ10:1;             /*  = [10..10] = 0x00000400 */
      unsigned int SRQ11:1;             /*  = [11..11] = 0x00000800 */
      unsigned int SRQ12:1;             /*  = [12..12] = 0x00001000 */
      unsigned int SRQ13:1;             /*  = [13..13] = 0x00002000 */
      unsigned int SRQ14:1;             /*  = [14..14] = 0x00004000 */
      unsigned int SRQ15:1;             /*  = [15..15] = 0x00008000 */
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
      unsigned int GRPC:2;              /*  = [30..31] = 0xc0000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) ADCn_SCN_t_nonv;

typedef volatile ADCn_SCN_t_nonv ADCn_SCN_t;

/********************** ADCn_SCON_t *************************/
/*
   ADC0_SCON             "ADC0 Source Control Register"
   ADC1_SCON             "ADC1 Source Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int QENC:1;              /*  = [0..0] = 0x00000001 */
      unsigned int QENS:1;              /*  = [1..1] = 0x00000002 */
      unsigned int TRC:1;               /*  = [2..2] = 0x00000004 */
      unsigned int TRS:1;               /*  = [3..3] = 0x00000008 */
      unsigned int QRS:1;               /*  = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int _bit8:1;             /* 0 = [8..8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9..9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
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
} __attribute__((aligned(4))) ADCn_SCON_t_nonv;

typedef volatile ADCn_SCON_t_nonv ADCn_SCON_t;

/********************** ADCn_SRCm_t *************************/
/*
   ADC0_SRC0             "ADC0 Service Request Control Register 0"
   ADC0_SRC1             "ADC0 Service Request Control Register 1"
   ADC0_SRC2             "ADC0 Service Request Control Register 2"
   ADC0_SRC3             "ADC0 Service Request Control Register 3"
   ADC1_SRC0             "ADC1 Service Request Control Register 0"
   ADC1_SRC1             "ADC1 Service Request Control Register 1"
   ADC1_SRC2             "ADC1 Service Request Control Register 2"
   ADC1_SRC3             "ADC1 Service Request Control Register 3"
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
} __attribute__((aligned(4))) ADCn_SRCm_t_nonv;

typedef volatile ADCn_SRCm_t_nonv ADCn_SRCm_t;

/********************** ADCn_SRNP_t *************************/
/*
   ADC0_SRNP             "ADC0 Service Request Node Pointer Register"
   ADC1_SRNP             "ADC1 Service Request Node Pointer Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ENPT:1;              /*  = [0..0] = 0x00000001 */
      unsigned int PT:3;                /*  = [1..3] = 0x0000000e */
      unsigned int ENPSY:1;             /*  = [4..4] = 0x00000010 */
      unsigned int PSY:3;               /*  = [5..7] = 0x000000e0 */
      unsigned int ENPQR:1;             /*  = [8..8] = 0x00000100 */
      unsigned int PQR:3;               /*  = [9..11] = 0x00000e00 */
      unsigned int ENPAS:1;             /*  = [12..12] = 0x00001000 */
      unsigned int PAS:3;               /*  = [13..15] = 0x0000e000 */
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
} __attribute__((aligned(4))) ADCn_SRNP_t_nonv;

typedef volatile ADCn_SRNP_t_nonv ADCn_SRNP_t;

/********************** ADCn_STAT_t *************************/
/*
   ADC0_STAT             "ADC0 Converter Status Register"
   ADC1_STAT             "ADC1 Converter Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CHNRCC:4;            /*  = [0..3] = 0x0000000f */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6..6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7..7] = 0x00000080 */
      unsigned int CHTSCC:3;            /*  = [8..10] = 0x00000700 */
      unsigned int DATAVAL:1;           /*  = [11..11] = 0x00000800 */
      unsigned int AL:1;                /*  = [12..12] = 0x00001000 */
      unsigned int CAL:1;               /*  = [13..13] = 0x00002000 */
      unsigned int SMPL:1;              /*  = [14..14] = 0x00004000 */
      unsigned int BUSY:1;              /*  = [15..15] = 0x00008000 */
      unsigned int QLP:4;               /*  = [16..19] = 0x000f0000 */
      unsigned int QF:1;                /*  = [20..20] = 0x00100000 */
      unsigned int _bit21:1;            /* 0 = [21..21] = 0x00200000 */
      unsigned int _bit22:1;            /* 0 = [22..22] = 0x00400000 */
      unsigned int _bit23:1;            /* 0 = [23..23] = 0x00800000 */
      unsigned int REQSY:1;             /*  = [24..24] = 0x01000000 */
      unsigned int PARSY:1;             /*  = [25..25] = 0x02000000 */
      unsigned int IENREQ:1;            /*  = [26..26] = 0x04000000 */
      unsigned int IENPAR:1;            /*  = [27..27] = 0x08000000 */
      unsigned int SYMS:1;              /*  = [28..28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29..29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30..30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) ADCn_STAT_t_nonv;

typedef volatile ADCn_STAT_t_nonv ADCn_STAT_t;

/********************** ADCn_SW0CRP_t *************************/
/*
   ADC0_SW0CRP           "ADC0 Software SW0 Conversion Request Pending Register"
   ADC1_SW0CRP           "ADC1 Software SW0 Conversion Request Pending Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SW0CRP0:1;           /*  = [0..0] = 0x00000001 */
      unsigned int SW0CRP1:1;           /*  = [1..1] = 0x00000002 */
      unsigned int SW0CRP2:1;           /*  = [2..2] = 0x00000004 */
      unsigned int SW0CRP3:1;           /*  = [3..3] = 0x00000008 */
      unsigned int SW0CRP4:1;           /*  = [4..4] = 0x00000010 */
      unsigned int SW0CRP5:1;           /*  = [5..5] = 0x00000020 */
      unsigned int SW0CRP6:1;           /*  = [6..6] = 0x00000040 */
      unsigned int SW0CRP7:1;           /*  = [7..7] = 0x00000080 */
      unsigned int SW0CRP8:1;           /*  = [8..8] = 0x00000100 */
      unsigned int SW0CRP9:1;           /*  = [9..9] = 0x00000200 */
      unsigned int SW0CRP10:1;          /*  = [10..10] = 0x00000400 */
      unsigned int SW0CRP11:1;          /*  = [11..11] = 0x00000800 */
      unsigned int SW0CRP12:1;          /*  = [12..12] = 0x00001000 */
      unsigned int SW0CRP13:1;          /*  = [13..13] = 0x00002000 */
      unsigned int SW0CRP14:1;          /*  = [14..14] = 0x00004000 */
      unsigned int SW0CRP15:1;          /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) ADCn_SW0CRP_t_nonv;

typedef volatile ADCn_SW0CRP_t_nonv ADCn_SW0CRP_t;

/********************** ADCn_SYSTAT_t *************************/
/*
   ADC0_SYSTAT           "ADC0 Synchronization Status Register"
   ADC1_SYSTAT           "ADC1 Synchronization Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CHNRSY:4;            /*  = [0..3] = 0x0000000f */
      unsigned int _bit4:1;             /* 0 = [4..4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5..5] = 0x00000020 */
      unsigned int RES:2;               /*  = [6..7] = 0x000000c0 */
      unsigned int EMUX:2;              /*  = [8..9] = 0x00000300 */
      unsigned int GRPS:1;              /*  = [10..10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11..11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12..12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13..13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int CSREN:1;             /*  = [15..15] = 0x00008000 */
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
      unsigned int SYREQ:1;             /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) ADCn_SYSTAT_t_nonv;

typedef volatile ADCn_SYSTAT_t_nonv ADCn_SYSTAT_t;

/********************** ADCn_TCON_t *************************/
/*
   ADC0_TCON             "ADC0 Timer Control Register"
   ADC1_TCON             "ADC1 Timer Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ALB:14;              /*  = [0..13] = 0x00003fff */
      unsigned int _bit14:1;            /* 0 = [14..14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15..15] = 0x00008000 */
      unsigned int TRLD:14;             /*  = [16..29] = 0x3fff0000 */
      unsigned int TSEN:1;              /*  = [30..30] = 0x40000000 */
      unsigned int TR:1;                /*  = [31..31] = 0x80000000 */
   } bits;
   unsigned long reg; 
} __attribute__((aligned(4))) ADCn_TCON_t_nonv;

typedef volatile ADCn_TCON_t_nonv ADCn_TCON_t;

/********************** ADCn_TCRP_t *************************/
/*
   ADC0_TCRP             "ADC0 Timer Conversion Request Pending Register"
   ADC1_TCRP             "ADC1 Timer Conversion Request Pending Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TRP0:1;              /*  = [0..0] = 0x00000001 */
      unsigned int TRP1:1;              /*  = [1..1] = 0x00000002 */
      unsigned int TRP2:1;              /*  = [2..2] = 0x00000004 */
      unsigned int TRP3:1;              /*  = [3..3] = 0x00000008 */
      unsigned int TRP4:1;              /*  = [4..4] = 0x00000010 */
      unsigned int TRP5:1;              /*  = [5..5] = 0x00000020 */
      unsigned int TRP6:1;              /*  = [6..6] = 0x00000040 */
      unsigned int TRP7:1;              /*  = [7..7] = 0x00000080 */
      unsigned int TRP8:1;              /*  = [8..8] = 0x00000100 */
      unsigned int TRP9:1;              /*  = [9..9] = 0x00000200 */
      unsigned int TRP10:1;             /*  = [10..10] = 0x00000400 */
      unsigned int TRP11:1;             /*  = [11..11] = 0x00000800 */
      unsigned int TRP12:1;             /*  = [12..12] = 0x00001000 */
      unsigned int TRP13:1;             /*  = [13..13] = 0x00002000 */
      unsigned int TRP14:1;             /*  = [14..14] = 0x00004000 */
      unsigned int TRP15:1;             /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) ADCn_TCRP_t_nonv;

typedef volatile ADCn_TCRP_t_nonv ADCn_TCRP_t;

/********************** ADCn_TSTAT_t *************************/
/*
   ADC0_TSTAT            "ADC0 Timer Status Register"
   ADC1_TSTAT            "ADC1 Timer Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TIMER:14;            /*  = [0..13] = 0x00003fff */
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
} __attribute__((aligned(4))) ADCn_TSTAT_t_nonv;

typedef volatile ADCn_TSTAT_t_nonv ADCn_TSTAT_t;

/********************** ADCn_TTC_t *************************/
/*
   ADC0_TTC              "ADC0 Timer Trigger Control Register"
   ADC1_TTC              "ADC1 Timer Trigger Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TTCCH0:1;            /*  = [0..0] = 0x00000001 */
      unsigned int TTCCH1:1;            /*  = [1..1] = 0x00000002 */
      unsigned int TTCCH2:1;            /*  = [2..2] = 0x00000004 */
      unsigned int TTCCH3:1;            /*  = [3..3] = 0x00000008 */
      unsigned int TTCCH4:1;            /*  = [4..4] = 0x00000010 */
      unsigned int TTCCH5:1;            /*  = [5..5] = 0x00000020 */
      unsigned int TTCCH6:1;            /*  = [6..6] = 0x00000040 */
      unsigned int TTCCH7:1;            /*  = [7..7] = 0x00000080 */
      unsigned int TTCCH8:1;            /*  = [8..8] = 0x00000100 */
      unsigned int TTCCH9:1;            /*  = [9..9] = 0x00000200 */
      unsigned int TTCCH10:1;           /*  = [10..10] = 0x00000400 */
      unsigned int TTCCH11:1;           /*  = [11..11] = 0x00000800 */
      unsigned int TTCCH12:1;           /*  = [12..12] = 0x00001000 */
      unsigned int TTCCH13:1;           /*  = [13..13] = 0x00002000 */
      unsigned int TTCCH14:1;           /*  = [14..14] = 0x00004000 */
      unsigned int TTCCH15:1;           /*  = [15..15] = 0x00008000 */
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
} __attribute__((aligned(4))) ADCn_TTC_t_nonv;

typedef volatile ADCn_TTC_t_nonv ADCn_TTC_t;


#endif /* _HAVE_TRICORE_ADC0_ADC1_SHARETYPES_H_ */

