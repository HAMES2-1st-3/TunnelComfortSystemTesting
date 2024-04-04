/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_ERAY_SHARETYPES_H_
#define _HAVE_TRICORE_ERAY_SHARETYPES_H_


/********************** ERAY_ESIDm_t *************************/
/*
   ERAY_ESID01           "Even Sync ID Symbol Window 01"
   ERAY_ESID02           "Even Sync ID Symbol Window 02"
   ERAY_ESID03           "Even Sync ID Symbol Window 03"
   ERAY_ESID04           "Even Sync ID Symbol Window 04"
   ERAY_ESID05           "Even Sync ID Symbol Window 05"
   ERAY_ESID06           "Even Sync ID Symbol Window 06"
   ERAY_ESID07           "Even Sync ID Symbol Window 07"
   ERAY_ESID08           "Even Sync ID Symbol Window 08"
   ERAY_ESID09           "Even Sync ID Symbol Window 09"
   ERAY_ESID10           "Even Sync ID Symbol Window 10"
   ERAY_ESID11           "Even Sync ID Symbol Window 11"
   ERAY_ESID12           "Even Sync ID Symbol Window 12"
   ERAY_ESID13           "Even Sync ID Symbol Window 13"
   ERAY_ESID14           "Even Sync ID Symbol Window 14"
   ERAY_ESID15           "Even Sync ID Symbol Window 15"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int EID:10;              /*  = [0..9] = 0x000003ff */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int RXEA:1;              /*  = [14] = 0x00004000 */
      unsigned int RXEB:1;              /*  = [15] = 0x00008000 */
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
} __attribute__((aligned(4))) ERAY_ESIDm_t_nonv;

typedef volatile ERAY_ESIDm_t_nonv ERAY_ESIDm_t;

/********************** ERAY_INTmSRC_t *************************/
/*
   ERAY_INT0SRC          "Interrupt 0 Service Request Control Register"
   ERAY_INT1SRC          "Interrupt 1 Service Request Control Register"
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
} __attribute__((aligned(4))) ERAY_INTmSRC_t_nonv;

typedef volatile ERAY_INTmSRC_t_nonv ERAY_INTmSRC_t;

/********************** ERAY_MBSCm_t *************************/
/*
   ERAY_MBSC1            "Message Buffer Status Changed 1"
   ERAY_MBSC2            "Message Buffer Status Changed 2"
   ERAY_MBSC3            "Message Buffer Status Changed 3"
   ERAY_MBSC4            "Message Buffer Status Changed 4"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MBC0:1;              /*  = [0] = 0x00000001 */
      unsigned int MBC1:1;              /*  = [1] = 0x00000002 */
      unsigned int MBC2:1;              /*  = [2] = 0x00000004 */
      unsigned int MBC3:1;              /*  = [3] = 0x00000008 */
      unsigned int MBC4:1;              /*  = [4] = 0x00000010 */
      unsigned int MBC5:1;              /*  = [5] = 0x00000020 */
      unsigned int MBC6:1;              /*  = [6] = 0x00000040 */
      unsigned int MBC7:1;              /*  = [7] = 0x00000080 */
      unsigned int MBC8:1;              /*  = [8] = 0x00000100 */
      unsigned int MBC9:1;              /*  = [9] = 0x00000200 */
      unsigned int MBC10:1;             /*  = [10] = 0x00000400 */
      unsigned int MBC11:1;             /*  = [11] = 0x00000800 */
      unsigned int MBC12:1;             /*  = [12] = 0x00001000 */
      unsigned int MBC13:1;             /*  = [13] = 0x00002000 */
      unsigned int MBC14:1;             /*  = [14] = 0x00004000 */
      unsigned int MBC15:1;             /*  = [15] = 0x00008000 */
      unsigned int MBC16:1;             /*  = [16] = 0x00010000 */
      unsigned int MBC17:1;             /*  = [17] = 0x00020000 */
      unsigned int MBC18:1;             /*  = [18] = 0x00040000 */
      unsigned int MBC19:1;             /*  = [19] = 0x00080000 */
      unsigned int MBC20:1;             /*  = [20] = 0x00100000 */
      unsigned int MBC21:1;             /*  = [21] = 0x00200000 */
      unsigned int MBC22:1;             /*  = [22] = 0x00400000 */
      unsigned int MBC23:1;             /*  = [23] = 0x00800000 */
      unsigned int MBC24:1;             /*  = [24] = 0x01000000 */
      unsigned int MBC25:1;             /*  = [25] = 0x02000000 */
      unsigned int MBC26:1;             /*  = [26] = 0x04000000 */
      unsigned int MBC27:1;             /*  = [27] = 0x08000000 */
      unsigned int MBC28:1;             /*  = [28] = 0x10000000 */
      unsigned int MBC29:1;             /*  = [29] = 0x20000000 */
      unsigned int MBC30:1;             /*  = [30] = 0x40000000 */
      unsigned int MBC31:1;             /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_MBSCm_t_nonv;

typedef volatile ERAY_MBSCm_t_nonv ERAY_MBSCm_t;

/********************** ERAY_MBSCmSRC_t *************************/
/*
   ERAY_MBSC0SRC         "Message Buffer Status Changed 0 Service Request Control Register"
   ERAY_MBSC1SRC         "Message Buffer Status Changed 1 Service Request Control Register"
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
} __attribute__((aligned(4))) ERAY_MBSCmSRC_t_nonv;

typedef volatile ERAY_MBSCmSRC_t_nonv ERAY_MBSCmSRC_t;

/********************** ERAY_MSICm_t *************************/
/*
   ERAY_MSIC1            "Message Buffer Status Changed Interrupt Control 1"
   ERAY_MSIC2            "Message Buffer Status Changed Interrupt Control 2"
   ERAY_MSIC3            "Message Buffer Status Changed Interrupt Control 3"
   ERAY_MSIC4            "Message Buffer Status Changed Interrupt Control 4"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MSIP0:1;             /*  = [0] = 0x00000001 */
      unsigned int MSIP1:1;             /*  = [1] = 0x00000002 */
      unsigned int MSIP2:1;             /*  = [2] = 0x00000004 */
      unsigned int MSIP3:1;             /*  = [3] = 0x00000008 */
      unsigned int MSIP4:1;             /*  = [4] = 0x00000010 */
      unsigned int MSIP5:1;             /*  = [5] = 0x00000020 */
      unsigned int MSIP6:1;             /*  = [6] = 0x00000040 */
      unsigned int MSIP7:1;             /*  = [7] = 0x00000080 */
      unsigned int MSIP8:1;             /*  = [8] = 0x00000100 */
      unsigned int MSIP9:1;             /*  = [9] = 0x00000200 */
      unsigned int MSIP10:1;            /*  = [10] = 0x00000400 */
      unsigned int MSIP11:1;            /*  = [11] = 0x00000800 */
      unsigned int MSIP12:1;            /*  = [12] = 0x00001000 */
      unsigned int MSIP13:1;            /*  = [13] = 0x00002000 */
      unsigned int MSIP14:1;            /*  = [14] = 0x00004000 */
      unsigned int MSIP15:1;            /*  = [15] = 0x00008000 */
      unsigned int MSIP16:1;            /*  = [16] = 0x00010000 */
      unsigned int MSIP17:1;            /*  = [17] = 0x00020000 */
      unsigned int MSIP18:1;            /*  = [18] = 0x00040000 */
      unsigned int MSIP19:1;            /*  = [19] = 0x00080000 */
      unsigned int MSIP20:1;            /*  = [20] = 0x00100000 */
      unsigned int MSIP21:1;            /*  = [21] = 0x00200000 */
      unsigned int MSIP22:1;            /*  = [22] = 0x00400000 */
      unsigned int MSIP23:1;            /*  = [23] = 0x00800000 */
      unsigned int MSIP24:1;            /*  = [24] = 0x01000000 */
      unsigned int MSIP25:1;            /*  = [25] = 0x02000000 */
      unsigned int MSIP26:1;            /*  = [26] = 0x04000000 */
      unsigned int MSIP27:1;            /*  = [27] = 0x08000000 */
      unsigned int MSIP28:1;            /*  = [28] = 0x10000000 */
      unsigned int MSIP29:1;            /*  = [29] = 0x20000000 */
      unsigned int MSIP30:1;            /*  = [30] = 0x40000000 */
      unsigned int MSIP31:1;            /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_MSICm_t_nonv;

typedef volatile ERAY_MSICm_t_nonv ERAY_MSICm_t;

/********************** ERAY_NDATm_t *************************/
/*
   ERAY_NDAT1            "New Data Register 1"
   ERAY_NDAT2            "New Data Register 2"
   ERAY_NDAT3            "New Data Register 3"
   ERAY_NDAT4            "New Data Register 4"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ND0:1;               /*  = [0] = 0x00000001 */
      unsigned int ND1:1;               /*  = [1] = 0x00000002 */
      unsigned int ND2:1;               /*  = [2] = 0x00000004 */
      unsigned int ND3:1;               /*  = [3] = 0x00000008 */
      unsigned int ND4:1;               /*  = [4] = 0x00000010 */
      unsigned int ND5:1;               /*  = [5] = 0x00000020 */
      unsigned int ND6:1;               /*  = [6] = 0x00000040 */
      unsigned int ND7:1;               /*  = [7] = 0x00000080 */
      unsigned int ND8:1;               /*  = [8] = 0x00000100 */
      unsigned int ND9:1;               /*  = [9] = 0x00000200 */
      unsigned int ND10:1;              /*  = [10] = 0x00000400 */
      unsigned int ND11:1;              /*  = [11] = 0x00000800 */
      unsigned int ND12:1;              /*  = [12] = 0x00001000 */
      unsigned int ND13:1;              /*  = [13] = 0x00002000 */
      unsigned int ND14:1;              /*  = [14] = 0x00004000 */
      unsigned int ND15:1;              /*  = [15] = 0x00008000 */
      unsigned int ND16:1;              /*  = [16] = 0x00010000 */
      unsigned int ND17:1;              /*  = [17] = 0x00020000 */
      unsigned int ND18:1;              /*  = [18] = 0x00040000 */
      unsigned int ND19:1;              /*  = [19] = 0x00080000 */
      unsigned int ND20:1;              /*  = [20] = 0x00100000 */
      unsigned int ND21:1;              /*  = [21] = 0x00200000 */
      unsigned int ND22:1;              /*  = [22] = 0x00400000 */
      unsigned int ND23:1;              /*  = [23] = 0x00800000 */
      unsigned int ND24:1;              /*  = [24] = 0x01000000 */
      unsigned int ND25:1;              /*  = [25] = 0x02000000 */
      unsigned int ND26:1;              /*  = [26] = 0x04000000 */
      unsigned int ND27:1;              /*  = [27] = 0x08000000 */
      unsigned int ND28:1;              /*  = [28] = 0x10000000 */
      unsigned int ND29:1;              /*  = [29] = 0x20000000 */
      unsigned int ND30:1;              /*  = [30] = 0x40000000 */
      unsigned int ND31:1;              /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_NDATm_t_nonv;

typedef volatile ERAY_NDATm_t_nonv ERAY_NDATm_t;

/********************** ERAY_NDATmSRC_t *************************/
/*
   ERAY_NDAT0SRC         "New Data 0 Service Request Control Register"
   ERAY_NDAT1SRC         "New Data 1 Service Request Control Register"
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
} __attribute__((aligned(4))) ERAY_NDATmSRC_t_nonv;

typedef volatile ERAY_NDATmSRC_t_nonv ERAY_NDATmSRC_t;

/********************** ERAY_NDICm_t *************************/
/*
   ERAY_NDIC1            "New Data Interrupt Control 1"
   ERAY_NDIC2            "New Data Interrupt Control 2"
   ERAY_NDIC3            "New Data Interrupt Control 3"
   ERAY_NDIC4            "New Data Interrupt Control 4"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int NDIP0:1;             /*  = [0] = 0x00000001 */
      unsigned int NDIP1:1;             /*  = [1] = 0x00000002 */
      unsigned int NDIP2:1;             /*  = [2] = 0x00000004 */
      unsigned int NDIP3:1;             /*  = [3] = 0x00000008 */
      unsigned int NDIP4:1;             /*  = [4] = 0x00000010 */
      unsigned int NDIP5:1;             /*  = [5] = 0x00000020 */
      unsigned int NDIP6:1;             /*  = [6] = 0x00000040 */
      unsigned int NDIP7:1;             /*  = [7] = 0x00000080 */
      unsigned int NDIP8:1;             /*  = [8] = 0x00000100 */
      unsigned int NDIP9:1;             /*  = [9] = 0x00000200 */
      unsigned int NDIP10:1;            /*  = [10] = 0x00000400 */
      unsigned int NDIP11:1;            /*  = [11] = 0x00000800 */
      unsigned int NDIP12:1;            /*  = [12] = 0x00001000 */
      unsigned int NDIP13:1;            /*  = [13] = 0x00002000 */
      unsigned int NDIP14:1;            /*  = [14] = 0x00004000 */
      unsigned int NDIP15:1;            /*  = [15] = 0x00008000 */
      unsigned int NDIP16:1;            /*  = [16] = 0x00010000 */
      unsigned int NDIP17:1;            /*  = [17] = 0x00020000 */
      unsigned int NDIP18:1;            /*  = [18] = 0x00040000 */
      unsigned int NDIP19:1;            /*  = [19] = 0x00080000 */
      unsigned int NDIP20:1;            /*  = [20] = 0x00100000 */
      unsigned int NDIP21:1;            /*  = [21] = 0x00200000 */
      unsigned int NDIP22:1;            /*  = [22] = 0x00400000 */
      unsigned int NDIP23:1;            /*  = [23] = 0x00800000 */
      unsigned int NDIP24:1;            /*  = [24] = 0x01000000 */
      unsigned int NDIP25:1;            /*  = [25] = 0x02000000 */
      unsigned int NDIP26:1;            /*  = [26] = 0x04000000 */
      unsigned int NDIP27:1;            /*  = [27] = 0x08000000 */
      unsigned int NDIP28:1;            /*  = [28] = 0x10000000 */
      unsigned int NDIP29:1;            /*  = [29] = 0x20000000 */
      unsigned int NDIP30:1;            /*  = [30] = 0x40000000 */
      unsigned int NDIP31:1;            /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_NDICm_t_nonv;

typedef volatile ERAY_NDICm_t_nonv ERAY_NDICm_t;

/********************** ERAY_NMVm_t *************************/
/*
   ERAY_NMV1             "Network Management Vector 1"
   ERAY_NMV2             "Network Management Vector 2"
   ERAY_NMV3             "Network Management Vector 3"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int NM:32;               /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_NMVm_t_nonv;

typedef volatile ERAY_NMVm_t_nonv ERAY_NMVm_t;

/********************** ERAY_OSIDm_t *************************/
/*
   ERAY_OSID01           "Odd Sync ID Symbol Window 01"
   ERAY_OSID02           "Odd Sync ID Symbol Window 02"
   ERAY_OSID03           "Odd Sync ID Symbol Window 03"
   ERAY_OSID04           "Odd Sync ID Symbol Window 04"
   ERAY_OSID05           "Odd Sync ID Symbol Window 05"
   ERAY_OSID06           "Odd Sync ID Symbol Window 06"
   ERAY_OSID07           "Odd Sync ID Symbol Window 07"
   ERAY_OSID08           "Odd Sync ID Symbol Window 08"
   ERAY_OSID09           "Odd Sync ID Symbol Window 09"
   ERAY_OSID10           "Odd Sync ID Symbol Window 10"
   ERAY_OSID11           "Odd Sync ID Symbol Window 11"
   ERAY_OSID12           "Odd Sync ID Symbol Window 12"
   ERAY_OSID13           "Odd Sync ID Symbol Window 13"
   ERAY_OSID14           "Odd Sync ID Symbol Window 14"
   ERAY_OSID15           "Odd Sync ID Symbol Window 15"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int OID:10;              /*  = [0..9] = 0x000003ff */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int RXOA:1;              /*  = [14] = 0x00004000 */
      unsigned int RXOB:1;              /*  = [15] = 0x00008000 */
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
} __attribute__((aligned(4))) ERAY_OSIDm_t_nonv;

typedef volatile ERAY_OSIDm_t_nonv ERAY_OSIDm_t;

/********************** ERAY_RDDSm_t *************************/
/*
   ERAY_RDDS01           "Read Data Section 01"
   ERAY_RDDS02           "Read Data Section 02"
   ERAY_RDDS03           "Read Data Section 03"
   ERAY_RDDS04           "Read Data Section 04"
   ERAY_RDDS05           "Read Data Section 05"
   ERAY_RDDS06           "Read Data Section 06"
   ERAY_RDDS07           "Read Data Section 07"
   ERAY_RDDS08           "Read Data Section 08"
   ERAY_RDDS09           "Read Data Section 09"
   ERAY_RDDS10           "Read Data Section 10"
   ERAY_RDDS11           "Read Data Section 11"
   ERAY_RDDS12           "Read Data Section 12"
   ERAY_RDDS13           "Read Data Section 13"
   ERAY_RDDS14           "Read Data Section 14"
   ERAY_RDDS15           "Read Data Section 15"
   ERAY_RDDS16           "Read Data Section 16"
   ERAY_RDDS17           "Read Data Section 17"
   ERAY_RDDS18           "Read Data Section 18"
   ERAY_RDDS19           "Read Data Section 19"
   ERAY_RDDS20           "Read Data Section 20"
   ERAY_RDDS21           "Read Data Section 21"
   ERAY_RDDS22           "Read Data Section 22"
   ERAY_RDDS23           "Read Data Section 23"
   ERAY_RDDS24           "Read Data Section 24"
   ERAY_RDDS25           "Read Data Section 25"
   ERAY_RDDS26           "Read Data Section 26"
   ERAY_RDDS27           "Read Data Section 27"
   ERAY_RDDS28           "Read Data Section 28"
   ERAY_RDDS29           "Read Data Section 29"
   ERAY_RDDS30           "Read Data Section 30"
   ERAY_RDDS31           "Read Data Section 31"
   ERAY_RDDS32           "Read Data Section 32"
   ERAY_RDDS33           "Read Data Section 33"
   ERAY_RDDS34           "Read Data Section 34"
   ERAY_RDDS35           "Read Data Section 35"
   ERAY_RDDS36           "Read Data Section 36"
   ERAY_RDDS37           "Read Data Section 37"
   ERAY_RDDS38           "Read Data Section 38"
   ERAY_RDDS39           "Read Data Section 39"
   ERAY_RDDS40           "Read Data Section 40"
   ERAY_RDDS41           "Read Data Section 41"
   ERAY_RDDS42           "Read Data Section 42"
   ERAY_RDDS43           "Read Data Section 43"
   ERAY_RDDS44           "Read Data Section 44"
   ERAY_RDDS45           "Read Data Section 45"
   ERAY_RDDS46           "Read Data Section 46"
   ERAY_RDDS47           "Read Data Section 47"
   ERAY_RDDS48           "Read Data Section 48"
   ERAY_RDDS49           "Read Data Section 49"
   ERAY_RDDS50           "Read Data Section 50"
   ERAY_RDDS51           "Read Data Section 51"
   ERAY_RDDS52           "Read Data Section 52"
   ERAY_RDDS53           "Read Data Section 53"
   ERAY_RDDS54           "Read Data Section 54"
   ERAY_RDDS55           "Read Data Section 55"
   ERAY_RDDS56           "Read Data Section 56"
   ERAY_RDDS57           "Read Data Section 57"
   ERAY_RDDS58           "Read Data Section 58"
   ERAY_RDDS59           "Read Data Section 59"
   ERAY_RDDS60           "Read Data Section 60"
   ERAY_RDDS61           "Read Data Section 61"
   ERAY_RDDS62           "Read Data Section 62"
   ERAY_RDDS63           "Read Data Section 63"
   ERAY_RDDS64           "Read Data Section 64"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MDRB0:8;             /*  = [0..7] = 0x000000ff */
      unsigned int MDRB1:8;             /*  = [8..15] = 0x0000ff00 */
      unsigned int MDRB2:8;             /*  = [16..23] = 0x00ff0000 */
      unsigned int MDRB3:8;             /*  = [24..31] = 0xff000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_RDDSm_t_nonv;

typedef volatile ERAY_RDDSm_t_nonv ERAY_RDDSm_t;

/********************** ERAY_TINTmSRC_t *************************/
/*
   ERAY_TINT0SRC         "Timer Interrupt 0 Service Request Control Register"
   ERAY_TINT1SRC         "Timer Interrupt 1 Service Request Control Register"
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
} __attribute__((aligned(4))) ERAY_TINTmSRC_t_nonv;

typedef volatile ERAY_TINTmSRC_t_nonv ERAY_TINTmSRC_t;

/********************** ERAY_TXRQm_t *************************/
/*
   ERAY_TXRQ1            "Transmission Request Register 1"
   ERAY_TXRQ2            "Transmission Request Register 2"
   ERAY_TXRQ3            "Transmission Request Register 3"
   ERAY_TXRQ4            "Transmission Request Register 4"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int TXR0:1;              /*  = [0] = 0x00000001 */
      unsigned int TXR1:1;              /*  = [1] = 0x00000002 */
      unsigned int TXR2:1;              /*  = [2] = 0x00000004 */
      unsigned int TXR3:1;              /*  = [3] = 0x00000008 */
      unsigned int TXR4:1;              /*  = [4] = 0x00000010 */
      unsigned int TXR5:1;              /*  = [5] = 0x00000020 */
      unsigned int TXR6:1;              /*  = [6] = 0x00000040 */
      unsigned int TXR7:1;              /*  = [7] = 0x00000080 */
      unsigned int TXR8:1;              /*  = [8] = 0x00000100 */
      unsigned int TXR9:1;              /*  = [9] = 0x00000200 */
      unsigned int TXR10:1;             /*  = [10] = 0x00000400 */
      unsigned int TXR11:1;             /*  = [11] = 0x00000800 */
      unsigned int TXR12:1;             /*  = [12] = 0x00001000 */
      unsigned int TXR13:1;             /*  = [13] = 0x00002000 */
      unsigned int TXR14:1;             /*  = [14] = 0x00004000 */
      unsigned int TXR15:1;             /*  = [15] = 0x00008000 */
      unsigned int TXR16:1;             /*  = [16] = 0x00010000 */
      unsigned int TXR17:1;             /*  = [17] = 0x00020000 */
      unsigned int TXR18:1;             /*  = [18] = 0x00040000 */
      unsigned int TXR19:1;             /*  = [19] = 0x00080000 */
      unsigned int TXR20:1;             /*  = [20] = 0x00100000 */
      unsigned int TXR21:1;             /*  = [21] = 0x00200000 */
      unsigned int TXR22:1;             /*  = [22] = 0x00400000 */
      unsigned int TXR23:1;             /*  = [23] = 0x00800000 */
      unsigned int TXR24:1;             /*  = [24] = 0x01000000 */
      unsigned int TXR25:1;             /*  = [25] = 0x02000000 */
      unsigned int TXR26:1;             /*  = [26] = 0x04000000 */
      unsigned int TXR27:1;             /*  = [27] = 0x08000000 */
      unsigned int TXR28:1;             /*  = [28] = 0x10000000 */
      unsigned int TXR29:1;             /*  = [29] = 0x20000000 */
      unsigned int TXR30:1;             /*  = [30] = 0x40000000 */
      unsigned int TXR31:1;             /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_TXRQm_t_nonv;

typedef volatile ERAY_TXRQm_t_nonv ERAY_TXRQm_t;

/********************** ERAY_WRDSm_t *************************/
/*
   ERAY_WRDS01           "Write Data Section 01"
   ERAY_WRDS02           "Write Data Section 02"
   ERAY_WRDS03           "Write Data Section 03"
   ERAY_WRDS04           "Write Data Section 04"
   ERAY_WRDS05           "Write Data Section 05"
   ERAY_WRDS06           "Write Data Section 06"
   ERAY_WRDS07           "Write Data Section 07"
   ERAY_WRDS08           "Write Data Section 08"
   ERAY_WRDS09           "Write Data Section 09"
   ERAY_WRDS10           "Write Data Section 10"
   ERAY_WRDS11           "Write Data Section 11"
   ERAY_WRDS12           "Write Data Section 12"
   ERAY_WRDS13           "Write Data Section 13"
   ERAY_WRDS14           "Write Data Section 14"
   ERAY_WRDS15           "Write Data Section 15"
   ERAY_WRDS16           "Write Data Section 16"
   ERAY_WRDS17           "Write Data Section 17"
   ERAY_WRDS18           "Write Data Section 18"
   ERAY_WRDS19           "Write Data Section 19"
   ERAY_WRDS20           "Write Data Section 20"
   ERAY_WRDS21           "Write Data Section 21"
   ERAY_WRDS22           "Write Data Section 22"
   ERAY_WRDS23           "Write Data Section 23"
   ERAY_WRDS24           "Write Data Section 24"
   ERAY_WRDS25           "Write Data Section 25"
   ERAY_WRDS26           "Write Data Section 26"
   ERAY_WRDS27           "Write Data Section 27"
   ERAY_WRDS28           "Write Data Section 28"
   ERAY_WRDS29           "Write Data Section 29"
   ERAY_WRDS30           "Write Data Section 30"
   ERAY_WRDS31           "Write Data Section 31"
   ERAY_WRDS32           "Write Data Section 32"
   ERAY_WRDS33           "Write Data Section 33"
   ERAY_WRDS34           "Write Data Section 34"
   ERAY_WRDS35           "Write Data Section 35"
   ERAY_WRDS36           "Write Data Section 36"
   ERAY_WRDS37           "Write Data Section 37"
   ERAY_WRDS38           "Write Data Section 38"
   ERAY_WRDS39           "Write Data Section 39"
   ERAY_WRDS40           "Write Data Section 40"
   ERAY_WRDS41           "Write Data Section 41"
   ERAY_WRDS42           "Write Data Section 42"
   ERAY_WRDS43           "Write Data Section 43"
   ERAY_WRDS44           "Write Data Section 44"
   ERAY_WRDS45           "Write Data Section 45"
   ERAY_WRDS46           "Write Data Section 46"
   ERAY_WRDS47           "Write Data Section 47"
   ERAY_WRDS48           "Write Data Section 48"
   ERAY_WRDS49           "Write Data Section 49"
   ERAY_WRDS50           "Write Data Section 50"
   ERAY_WRDS51           "Write Data Section 51"
   ERAY_WRDS52           "Write Data Section 52"
   ERAY_WRDS53           "Write Data Section 53"
   ERAY_WRDS54           "Write Data Section 54"
   ERAY_WRDS55           "Write Data Section 55"
   ERAY_WRDS56           "Write Data Section 56"
   ERAY_WRDS57           "Write Data Section 57"
   ERAY_WRDS58           "Write Data Section 58"
   ERAY_WRDS59           "Write Data Section 59"
   ERAY_WRDS60           "Write Data Section 60"
   ERAY_WRDS61           "Write Data Section 61"
   ERAY_WRDS62           "Write Data Section 62"
   ERAY_WRDS63           "Write Data Section 63"
   ERAY_WRDS64           "Write Data Section 64"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int MDWB0:8;             /*  = [0..7] = 0x000000ff */
      unsigned int MDWB1:8;             /*  = [8..15] = 0x0000ff00 */
      unsigned int MDWB2:8;             /*  = [16..23] = 0x00ff0000 */
      unsigned int MDWB3:8;             /*  = [24..31] = 0xff000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) ERAY_WRDSm_t_nonv;

typedef volatile ERAY_WRDSm_t_nonv ERAY_WRDSm_t;


#endif /* _HAVE_TRICORE_ERAY_SHARETYPES_H_ */

