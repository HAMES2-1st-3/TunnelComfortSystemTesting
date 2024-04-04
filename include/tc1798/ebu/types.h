/* (c) HighTec EDV-Systeme GmbH */
#ifndef _HAVE_TRICORE_EBU_TYPES_H_
#define _HAVE_TRICORE_EBU_TYPES_H_


/********************** EBU_CLC_t *************************/
/*
   EBU_CLC               "EBU Clock Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DISR:1;              /*  = [0] = 0x00000001 */
      unsigned int DISS:1;              /*  = [1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4] = 0x00000010 */
      unsigned int _bit5:1;             /* 0 = [5] = 0x00000020 */
      unsigned int _bit6:1;             /* 0 = [6] = 0x00000040 */
      unsigned int _bit7:1;             /* 0 = [7] = 0x00000080 */
      unsigned int EPE:1;               /*  = [8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int SYNC:1;              /*  = [16] = 0x00010000 */
      unsigned int DIV2:1;              /*  = [17] = 0x00020000 */
      unsigned int EBUDIV:2;            /*  = [18..19] = 0x000c0000 */
      unsigned int SYNCACK:1;           /*  = [20] = 0x00100000 */
      unsigned int DIV2ACK:1;           /*  = [21] = 0x00200000 */
      unsigned int EBUDIVACK:2;         /*  = [22..23] = 0x00c00000 */
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
} __attribute__((aligned(4))) EBU_CLC_t_nonv;

typedef volatile EBU_CLC_t_nonv EBU_CLC_t;

/********************** EBU_DDRNCON_t *************************/
/*
   EBU_DDRNCON           "EBU LPDDR NVM Configuration Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CRCD:8;              /*  = [0..7] = 0x000000ff */
      unsigned int CRSC:4;              /*  = [8..11] = 0x00000f00 */
      unsigned int PAGESIZE:4;          /*  = [12..15] = 0x0000f000 */
      unsigned int CRP:4;               /*  = [16..19] = 0x000f0000 */
      unsigned int CSRR:4;              /*  = [20..23] = 0x00f00000 */
      unsigned int CSRS:4;              /*  = [24..27] = 0x0f000000 */
      unsigned int MAXADD:3;            /*  = [28..30] = 0x70000000 */
      unsigned int MODE:1;              /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) EBU_DDRNCON_t_nonv;

typedef volatile EBU_DDRNCON_t_nonv EBU_DDRNCON_t;

/********************** EBU_DDRNMOD_t *************************/
/*
   EBU_DDRNMOD           "EBU DDR NVM Mode Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int BURSTL:3;            /*  = [0..2] = 0x00000007 */
      unsigned int BTYP:1;              /*  = [3] = 0x00000008 */
      unsigned int CASLAT:3;            /*  = [4..6] = 0x00000070 */
      unsigned int OPMODE:7;            /*  = [7..13] = 0x00003f80 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int XOPM:14;             /*  = [16..29] = 0x3fff0000 */
      unsigned int XBA:2;               /*  = [30..31] = 0xc0000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) EBU_DDRNMOD_t_nonv;

typedef volatile EBU_DDRNMOD_t_nonv EBU_DDRNMOD_t;

/********************** EBU_DDRNMOD2_t *************************/
/*
   EBU_DDRNMOD2          "EBU DDR NVM Extended Mode Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int _bit0:1;             /* 0 = [0] = 0x00000001 */
      unsigned int _bit1:1;             /* 0 = [1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4] = 0x00000010 */
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
      unsigned int XOPM:12;             /*  = [16..27] = 0x0fff0000 */
      unsigned int DEV_SEL:1;           /*  = [28] = 0x10000000 */
      unsigned int XBA:2;               /*  = [29..30] = 0x60000000 */
      unsigned int ACT:1;               /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) EBU_DDRNMOD2_t_nonv;

typedef volatile EBU_DDRNMOD2_t_nonv EBU_DDRNMOD2_t;

/********************** EBU_DDRNPRLD_t *************************/
/*
   EBU_DDRNPRLD          "EBU DDR NVM Page Preload Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int PAGE:29;             /*  = [0..28] = 0x1fffffff */
      unsigned int BA:2;                /*  = [29..30] = 0x60000000 */
      unsigned int ACTIVE:1;            /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) EBU_DDRNPRLD_t_nonv;

typedef volatile EBU_DDRNPRLD_t_nonv EBU_DDRNPRLD_t;

/********************** EBU_DDRNSRR_t *************************/
/*
   EBU_DDRNSRR           "EBU DDR NVM Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int SRRDATA0:16;         /*  = [0..15] = 0x0000ffff */
      unsigned int SRRDATA1:16;         /*  = [16..31] = 0xffff0000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) EBU_DDRNSRR_t_nonv;

typedef volatile EBU_DDRNSRR_t_nonv EBU_DDRNSRR_t;

/********************** EBU_DLLCON_t *************************/
/*
   EBU_DLLCON            "EBU DLL Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DLL_VALUE:9;         /*  = [0..8] = 0x000001ff */
      unsigned int _bit9:1;             /* 0 = [9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int DCC_EN:1;            /*  = [11] = 0x00000800 */
      unsigned int DLL_LCK:1;           /*  = [12] = 0x00001000 */
      unsigned int DLL_DIS:1;           /*  = [13] = 0x00002000 */
      unsigned int DLL_RST:1;           /*  = [14] = 0x00004000 */
      unsigned int ALGO:1;              /*  = [15] = 0x00008000 */
      unsigned int WR_D_ADJ:3;          /*  = [16..18] = 0x00070000 */
      unsigned int _bit19:1;            /* 0 = [19] = 0x00080000 */
      unsigned int RD_DQS_ADJ:3;        /*  = [20..22] = 0x00700000 */
      unsigned int _bit23:1;            /* 0 = [23] = 0x00800000 */
      unsigned int _bit24:1;            /* 0 = [24] = 0x01000000 */
      unsigned int _bit25:1;            /* 0 = [25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int WIN_EN:1;            /*  = [27] = 0x08000000 */
      unsigned int RD_EN:1;             /*  = [28] = 0x10000000 */
      unsigned int WR_EN:1;             /*  = [29] = 0x20000000 */
      unsigned int AMODE:2;             /*  = [30..31] = 0xc0000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) EBU_DLLCON_t_nonv;

typedef volatile EBU_DLLCON_t_nonv EBU_DLLCON_t;

/********************** EBU_EXTBOOT_t *************************/
/*
   EBU_EXTBOOT           "EBU External Boot Configuration Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CFGEND:1;            /*  = [0] = 0x00000001 */
      unsigned int CFGERR:1;            /*  = [1] = 0x00000002 */
      unsigned int _bit2:1;             /* 0 = [2] = 0x00000004 */
      unsigned int _bit3:1;             /* 0 = [3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4] = 0x00000010 */
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
      unsigned int EBUCFG:1;            /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) EBU_EXTBOOT_t_nonv;

typedef volatile EBU_EXTBOOT_t_nonv EBU_EXTBOOT_t;

/********************** EBU_ID_t *************************/
/*
   EBU_ID                "EBU Module Identification Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int ID_VALUE:32;         /*  = [0..31] = 0xffffffff */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) EBU_ID_t_nonv;

typedef volatile EBU_ID_t_nonv EBU_ID_t;

/********************** EBU_MODCON_t *************************/
/*
   EBU_MODCON            "EBU Configuration Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int STS:1;               /*  = [0] = 0x00000001 */
      unsigned int LCKABRT:1;           /*  = [1] = 0x00000002 */
      unsigned int SDTRI:1;             /*  = [2] = 0x00000004 */
      unsigned int CLK_COMB:1;          /*  = [3] = 0x00000008 */
      unsigned int EXTLOCK:1;           /*  = [4] = 0x00000010 */
      unsigned int ARBSYNC:1;           /*  = [5] = 0x00000020 */
      unsigned int ARBMODE:2;           /*  = [6..7] = 0x000000c0 */
      unsigned int TIMEOUTC:8;          /*  = [8..15] = 0x0000ff00 */
      unsigned int LOCKTIMEOUT:8;       /*  = [16..23] = 0x00ff0000 */
      unsigned int FIFO_BYPASS:1;       /*  = [24] = 0x01000000 */
      unsigned int FAST_SRI:1;          /*  = [25] = 0x02000000 */
      unsigned int OCDS_SUSP_DIS:1;     /*  = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int ACCSINH:1;           /*  = [28] = 0x10000000 */
      unsigned int ACCSINHACK:1;        /*  = [29] = 0x20000000 */
      unsigned int BUSSTATE:1;          /*  = [30] = 0x40000000 */
      unsigned int ALE:1;               /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) EBU_MODCON_t_nonv;

typedef volatile EBU_MODCON_t_nonv EBU_MODCON_t;

/********************** EBU_SDRMCON_t *************************/
/*
   EBU_SDRMCON           "EBU SDRAM Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int CRAS:4;              /*  = [0..3] = 0x0000000f */
      unsigned int CRFSH:4;             /*  = [4..7] = 0x000000f0 */
      unsigned int CRSC:2;              /*  = [8..9] = 0x00000300 */
      unsigned int CRP:2;               /*  = [10..11] = 0x00000c00 */
      unsigned int AWIDTH:2;            /*  = [12..13] = 0x00003000 */
      unsigned int CRCD:2;              /*  = [14..15] = 0x0000c000 */
      unsigned int CRC:6;               /*  = [16..21] = 0x003f0000 */
      unsigned int BANKM:3;             /*  = [22..24] = 0x01c00000 */
      unsigned int _bit25:1;            /* 0 = [25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int CLKDIS:1;            /*  = [28] = 0x10000000 */
      unsigned int PWR_MODE:2;          /*  = [29..30] = 0x60000000 */
      unsigned int SDCMSEL:1;           /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) EBU_SDRMCON_t_nonv;

typedef volatile EBU_SDRMCON_t_nonv EBU_SDRMCON_t;

/********************** EBU_SDRMOD_t *************************/
/*
   EBU_SDRMOD            "EBU SDRAM Mode Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int BURSTL:3;            /*  = [0..2] = 0x00000007 */
      unsigned int BTYP:1;              /*  = [3] = 0x00000008 */
      unsigned int CASLAT:3;            /*  = [4..6] = 0x00000070 */
      unsigned int OPMODE:7;            /*  = [7..13] = 0x00003f80 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int COLDSTART:1;         /*  = [15] = 0x00008000 */
      unsigned int XOPM:14;             /*  = [16..29] = 0x3fff0000 */
      unsigned int XBA:2;               /*  = [30..31] = 0xc0000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) EBU_SDRMOD_t_nonv;

typedef volatile EBU_SDRMOD_t_nonv EBU_SDRMOD_t;

/********************** EBU_SDRMREF_t *************************/
/*
   EBU_SDRMREF           "EBU SDRAM Refresh Control Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int REFRESHC:6;          /*  = [0..5] = 0x0000003f */
      unsigned int REFRESHR:3;          /*  = [6..8] = 0x000001c0 */
      unsigned int SELFREXST:1;         /*  = [9] = 0x00000200 */
      unsigned int SELFREX:1;           /*  = [10] = 0x00000400 */
      unsigned int SELFRENST:1;         /*  = [11] = 0x00000800 */
      unsigned int SELFREN:1;           /*  = [12] = 0x00001000 */
      unsigned int AUTOSELFR:1;         /*  = [13] = 0x00002000 */
      unsigned int ERFSHC:2;            /*  = [14..15] = 0x0000c000 */
      unsigned int SELFREX_DLY:8;       /*  = [16..23] = 0x00ff0000 */
      unsigned int ARFSH:1;             /*  = [24] = 0x01000000 */
      unsigned int RES_DLY:3;           /*  = [25..27] = 0x0e000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int _bit30:1;            /* 0 = [30] = 0x40000000 */
      unsigned int _bit31:1;            /* 0 = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) EBU_SDRMREF_t_nonv;

typedef volatile EBU_SDRMREF_t_nonv EBU_SDRMREF_t;

/********************** EBU_SDRSTAT_t *************************/
/*
   EBU_SDRSTAT           "EBU SDRAM Status Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int REFERR:1;            /*  = [0] = 0x00000001 */
      unsigned int SDRMBUSY:1;          /*  = [1] = 0x00000002 */
      unsigned int SDERR:1;             /*  = [2] = 0x00000004 */
      unsigned int DRIFT_WARN:1;        /*  = [3] = 0x00000008 */
      unsigned int _bit4:1;             /* 0 = [4] = 0x00000010 */
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
} __attribute__((aligned(4))) EBU_SDRSTAT_t_nonv;

typedef volatile EBU_SDRSTAT_t_nonv EBU_SDRSTAT_t;

/********************** EBU_USERCON_t *************************/
/*
   EBU_USERCON           "EBU Test/Control Configuration Register"
*/
/**********************************************************/

typedef union { /* 32 bits */
   struct {
      unsigned int DIP:1;               /*  = [0] = 0x00000001 */
      unsigned int NAF:7;               /*  = [1..7] = 0x000000fe */
      unsigned int _bit8:1;             /* 0 = [8] = 0x00000100 */
      unsigned int _bit9:1;             /* 0 = [9] = 0x00000200 */
      unsigned int _bit10:1;            /* 0 = [10] = 0x00000400 */
      unsigned int _bit11:1;            /* 0 = [11] = 0x00000800 */
      unsigned int _bit12:1;            /* 0 = [12] = 0x00001000 */
      unsigned int _bit13:1;            /* 0 = [13] = 0x00002000 */
      unsigned int _bit14:1;            /* 0 = [14] = 0x00004000 */
      unsigned int _bit15:1;            /* 0 = [15] = 0x00008000 */
      unsigned int ADDIO:9;             /*  = [16..24] = 0x01ff0000 */
      unsigned int _bit25:1;            /* 0 = [25] = 0x02000000 */
      unsigned int _bit26:1;            /* 0 = [26] = 0x04000000 */
      unsigned int _bit27:1;            /* 0 = [27] = 0x08000000 */
      unsigned int _bit28:1;            /* 0 = [28] = 0x10000000 */
      unsigned int _bit29:1;            /* 0 = [29] = 0x20000000 */
      unsigned int ADVIO:1;             /*  = [30] = 0x40000000 */
      unsigned int ADDLSW:1;            /*  = [31] = 0x80000000 */
   } bits;
   unsigned long reg;
} __attribute__((aligned(4))) EBU_USERCON_t_nonv;

typedef volatile EBU_USERCON_t_nonv EBU_USERCON_t;


#endif /* _HAVE_TRICORE_EBU_TYPES_H_ */

